# Recovered structures

Confidence markers: **[code]** read from the EXE, **[data]** observed in the game files and
consistent with the code, **[guess]** hypothesis. Addresses are `selector:offset` in `DARK0001.EXE`
(SHA-256 `3ed6c303…a2db57`) and `DS:` offsets in the data segment `10e0`/`10e8`.

## GFILE.HDR (the global index) [code + data]

Read by `1028:09f6` (`inferred_load_gfile_hdr`) from `gfile.hdr`, little-endian.

| Offset | Size | Field | Notes |
|---|---|---|---|
| 0 | u16 | `glueCount` | 108 in our copy. Stored at `DS:275e`. [code] |
| 2 | u16 | `entryCount` | 9291. Stored at `DS:2760`. [code] |
| 4 | `glueCount` x 64 | glue table | Per record: 32-byte NUL-padded file name (copied to `DS:29e8 + 0x20*i`), then 32 bytes that the code seeks over; they are all zero in our file. [code, data] |
| 4 + 64*glueCount | `entryCount` x 22 | entry table | Read in one block into a global allocation whose far pointer is at `DS:2764`. [code] |

Total size check: `4 + 108*64 + 9291*22 = 211318`, the file size. [data]

Entry record (22 bytes, [data]; field use confirmed by `1088:06b4`, which copies a whole record with
`HMEMCPY(..., 0x16)` and uses the first word as the glue index):

| Offset | Size | Field |
|---|---|---|
| 0 | u16 | glue file index (0-based into the glue table) |
| 2 | 12 bytes | resource name, upper case, NUL-padded, not NUL-terminated at 12 characters |
| 14 | u32 | size in the (decompressed) glue stream |
| 18 | u32 | offset in the (decompressed) glue stream |

The entry table is sorted by name (bytes compare) over all 9291 entries. [data] The lookup at
`1088:051c` is a search in that table. [guess: binary search; not yet read in detail]

Per-glue runtime arrays set up after the load (`1028:09f6`, second loop) [code]:
`DS:39e8 + i` byte flag, `DS:3a68 + 4*i` far pointer, initially 0 (the in-memory copy of glue `i`),
and a byte at `DS:2768` cleared. The flag is the result of a C-runtime DOS call on the glue name
(`10d0:03f4`), probably "file exists". [guess]

## Glue file (`gl00_*.000`) [data, with the decoder read from code]

Every glue file contains, in its (decompressed) stream:

| Offset | Size | Field |
|---|---|---|
| 0 | u16 | entry count (matches the number of GFILE.HDR entries with this glue index, all 108 files) |
| 2 | count x 20 | directory: 12-byte name, u32 size, u32 offset (the GFILE.HDR record without the glue index) |
| ... | | resource data at the offsets given |

Two storage forms exist in our copy, found by checking the directory against GFILE.HDR:

- **Raw**: 23 files (glue indices 82, 85, 86, 87, 88, 90 to 107: `gl00_act`, `gl00_inv`, `gl00_scr`,
  `gl00_sys`, `gl00_tlk` and the `gl00__d?` speech/data files). Offsets are file offsets.
- **Compressed**: the other 85 files (text, rooms, ...). The stream is cut into 2048-byte blocks, see below.
  Offsets are offsets in the decompressed stream.

The `1088:06b4` path for a non-resident glue opens the file, seeks to the entry offset and reads raw
bytes, so it only works for raw files; compressed glue files are loaded whole into memory by
`inferred_load_glue_file` (`1088:003e`) before their entries are used. Which caller does that for which
file is not yet read (callers: `1028:03d0` for two fixed names at `DS:13bc` and `DS:13c9`,
`1048:2b8e` for a room name at `DS:37f0`).

## Compressed block format [code for the algorithm, data for the framing]

Block = 2048 bytes = 120 groups of 17 bytes + 8 bytes trailer.

- Group: 1 flag byte, then 8 items of 2 bytes each. Flags are used LSB first.
  Flag 1: the 2 bytes are copied as they are (literal word).
  Flag 0: the 2 bytes form a little-endian word `w`; copy `(w & 15) + 3` bytes from
  `distance = (w >> 4) + 1` bytes back in the output.
- The copy in the EXE runs in 4-byte steps (8 bytes first, then 8 more, then 2) and not byte by byte.
  This matches a byte-wise copy for distance >= 4. For distance 1 to 3 with a longer length it would
  copy bytes that are not yet written. The only such matches in the game data are in the padding
  items after the last real data of a file (zero words), so they do not affect real content. [data]
- Trailer: bytes 0x7f8 to 0x7ff of every block. Block 0: `"That"` then the u32 decompressed length
  (for example 263298 for `gl00_txt.000`). Later blocks: `"ThatIsIt"`.
  The decoder does not read the trailer; it stops a block after 120 groups (`17 * 120 = 0x7f8`).
- The last block is shorter than 2048 bytes. The EXE zero-fills after the data and passes the real
  length as the group budget. [code; the exact fill length is not yet checked]
- Output of the last group may run past the true length by a few bytes (padding items decode to
  garbage); use the length from the trailer.

Marker `"That"` at 0x7f8 of block 0 is present in exactly the 85 compressed files and absent in the 23 raw
files [data]. Whether the EXE tests it is not known [guess: it does not, because the callers name the files].

## Heap helpers [code]

`inferred_mem_alloc(size)` (`1090:0000`) = `GlobalAlloc(GMEM_MOVEABLE, size)` + `GlobalLock`, counts
allocations in a 32-bit counter at `DS:0018`; on failure calls the error reporter and exits.
`inferred_mem_free(ptr)` (`1090:0068`) = `GlobalHandle`, `GlobalUnlock`, `GlobalFree`, counts frees in
`DS:001c`; falls back to `FreeSelector` if the pointer has no handle.

## Glue table (the structure at `DS:275e`) [code]

The loader `1028:09f6` fills it and every resource function takes a far pointer to it as first argument
(`1088:003e`, `06b4`, `0892`, `051c`). Offsets from `DS:275e`:

| Offset | Size | Field | Evidence |
|---|---|---|---|
| 0x0000 | u16 | glue file count (108) | `1028:09f6`; `1088:003e` loops while `i < count` |
| 0x0002 | u16 | entry count (9291) | `1028:09f6`; `1088:051c` `count - 1` |
| 0x0004 | u16 | "loaded" flag, set to 1 at the end of `1028:09f6` | `1088:0892` tests it |
| 0x0006 | far pointer | entry table (22-byte records) | `1088:051c` |
| 0x000a | 2 x 128 bytes | directory strings, indexed by a per-glue byte (index 0 is the empty string, set to 0 by the loader at `DS:2768`) | `1088:06b4`: `table + 0xa + dirId * 0x80` |
| 0x028a | 108 x 32 | glue file names (`DS:29e8`) | `1088:06b4`, `003e` |
| 0x128a | 108 bytes | directory index for each glue file (`DS:39e8`), result of a file-exists style test at load time | `1088:06b4`: `table[0x128a + glueIndex]` |
| 0x130a | 108 x 4 | far pointer to the in-memory (decompressed) copy of each glue file, 0 when not loaded (`DS:3a68`) | `1088:06b4`, `003e` |

The two directory strings [code]: string 0 (`DS:2768`) is empty, so the glue name is used relative to the
current directory. String 1 (`DS:27e8`) is a copy of the install directory read by `1028:0766` from
`DARKSEED.INI`, section `DIRECTORY`, key `CD`, default `.\` (copied at the end of `1028:09f6`). The per-glue
byte at `0x128a + i` is 0 when a DOS find-first on the bare glue name succeeds (file in the current
directory) and 1 otherwise, so a glue file is opened as `dirString[byte] + name`.

Install-directory buffers (data segment), all set by `1028:0766` from the same INI value [code]:
`DS:3c88`, `DS:273e`, `DS:3ca8`. Music folder `DS:3c68` = `sndtrack\`.

## Names the game builds for loading [code]

| Format string | Arguments | Use |
|---|---|---|
| `GL00_%X%02d.000` | room / 100 (hex), room % 100 | Glue file of a room: room 101 is `GL00_101.000`, room 592 is `GL00_592.000`. Passed to `1088:003e` when a room is entered (`1048:2b8e`). |
| `GL00_WLK.000`, `GL00_TXT.000` | fixed | Loaded whole at start-up (`1028:03d0`). The text glue is the compressed one holding the conversations. |
| `OBJ_%04d.dat` | number | Object/room data file; start-up uses 9999. Loaded and parsed by `1048:093e`. |
| `ROOM%04d.DAT` | room number | Room file name, built elsewhere (unread). |
| `GameVar.IDX`, `fix.pal` | fixed | Variable index and the fixed palette, loaded at start-up. |

Working buffers used by the resource functions (data segment): `DS:3662` name key (`load_file`),
`DS:3670` and `DS:34be` full paths, `DS:3770` name key (`get_file_size`), `DS:9e3a` error text.

## Pictures (`.BMP` resources) [data, with the loader read from code]

Almost every resource ending in `.BMP` (3826 in the index) is a Windows bitmap file kept as it is in the
glue file and used in memory. All 400 sampled files were 8 bits per pixel with a 40-byte `BITMAPINFOHEADER`.

| Offset | Size | Field | Notes |
|---|---|---|---|
| 0 | 2 | `BM` | checked in all 108 glue files |
| 2 | u32 | file size | equals the GFILE.HDR entry size |
| 10 | u32 | `bfOffBits` | 54 for sprites (no colour table), 1078 (54 + 1024) for pictures with a palette |
| 18, 22 | i32 | width, height | the game reads only the low words |
| 28 | u16 | bits per pixel | 8 |
| 30 | u32 | `biCompression` | **0 = plain 8-bit rows; 2 = the game's own span format** (not Windows RLE8) |
| 34 | u32 | `biSizeImage` | for compression 2 it holds the *unpacked* size (width x height), not the file's data size |
| 38..45 | 4 x i16 | **sprite placement (a, b, c, d)**, stored in the pixels-per-metre fields | see below |
| 46 | u32 | `biClrUsed` | 0 or 256 |

**Sprite placement words (BMP offsets 0x26, 0x28, 0x2a, 0x2c)** [data + code]: four signed 16-bit values
`(a, b, c, d)`. `1080:0ad6` copies them into the image record (+0xc, +0xe, +0x10, +0x12) and zeroes them in the data.
- **`(a, b)` is the offset from the object's anchor point to the sprite's top-left corner.** The object update
  code (`1078:1030`) sets the on-screen top-left to `(anchorX + a, anchorY + b)`: it adds image +0xc to the object's
  x and image +0xe to its y. [code]
- Typical values: `(-45, -86)` for a 76 x 78 sprite means the anchor is 45 pixels from the left edge and 86 below the top, which is
  **8 pixels below the bottom edge**, so the anchor is not always inside the sprite. `(0, 0)` means the anchor is the
  top-left corner. [data]
- **`(c, d)`** (+0x10, +0x12) are positive, screen-sized numbers (`(314, 159)`, `(325, 200)`, `(388, 265)`). In some files they
  equal `(a, b)`. No code that reads them was found so far. [unknown; guess: the sprite's default anchor in its room]

**Span format (`biCompression` = 2)** [code for the drawing routine, data for the files]: the pixel data
starts at `bfOffBits` and holds one record per row, in file order (bottom row first, as in any BMP):
`u16 skip, u16 length, length pixel bytes`. Pixels before `skip` and after `skip + length` are transparent.
Inside the span, pixels equal to the key colour (a parameter of the blit) are also skipped. A file of
8 x 59 pixels is 54 + 59 x (4 + 8) = 762 bytes (checked on `204SMK20.BMP`).
Plain pictures (compression 0) use the usual 4-byte aligned rows.

## `.pal` and `.BMM` resources [code for `.pal`, guess for `.BMM`]

- `.pal`: 256 entries of 4 bytes in the order blue, green, red, unused (1024 bytes); the loader turns each
  into a Windows palette entry. `fix.pal` is loaded at start-up. A BMP's colour table has the same layout.
- `.BMM`: loaded by the same code as a `.BMP` into the same kind of image record; its contents have not been
  inspected [guess: a mask picture].

## Image record (the structure the picture loaders fill) [code]

Near-addressed records in the data segment; every picture function takes a near pointer to one.

| Offset | Size | Field | Evidence |
|---|---|---|---|
| +0 | u16 | Windows bitmap handle (0 when not created) | `1080:07a0` deletes it |
| +2 | far pointer | loaded file data (the BMP as in the glue file) | `1080:0890`, `0800` store it; `07a0` frees it |
| +8 | u16 | width | `1080:0ad6`, `0be0` |
| +10 | u16 | height | same |
| +12 | 4 x i16 | the four placement words (+0xc, +0xe, +0x10, +0x12) | `1080:0ad6` |
| +0x14 | far pointer | set to the record itself when `inferred_image_cache_get` is called with flag bit 0 | `1070:0000` |
| size | 0x18 bytes | allocated and zeroed by the image cache | `1070:0000` |

`1080:0be0` saves only two of the placement words, to +0xc and +0xe.

## Palette handling [code]

- Windows palette handle of the game palette: `DS:200a`. A copy of the 256 final colours of the main
  palette is kept at `DS:6c9e`.
- `1080:049a` (palette of the start-up bitmap): entry 0 black, entry 255 white, entries 1 to 254 flagged as
  animatable; optional brightening when the word at `DS:0062` is 1.
- `1080:00ee` (any `.pal`): all 256 entries as given, flags 0.

## The start-up bitmap `DS2RUN.HDR` [data + code]

`DS2RUN.HDR` in the game folder is a plain 8-bit BMP of 366 x 2320 pixels (854,840 bytes, palette included).
`1038:0000` reads its first 0x436 bytes (header and colour table), creates a WinG bitmap of that size, builds
the palette with `1080:049a`, reads the pixel data straight into the WinG bitmap in 32 KB pieces, and
`1038:01a4` releases it when the first room is entered. What the picture contains is not known yet.
`BOSSKEY.BMP` (613 x 399, 8 bit) is the boss-key picture.

## Image cache node (`1070:0000`) [code]

A singly linked list, head at `DS:1fc8/1fca`, of 0x17-byte nodes: name (13 bytes, string) at +0, image record far
pointer at +0xd, use count at +0x11, next node far pointer at +0x13. A picture is loaded once and shared by name.

## Drawing path (back to front) [code]

`inferred_image_cache_get` gives an image record. The compositor draws it with `inferred_draw_image_to_buffer`
(`1078:1aea`) or `inferred_draw_image_rect` (`1078:1b6c`) into the game's own 8-bit off-screen buffer
(bitmap header far pointer `DS:1fce/1fd0`, pixels far pointer `DS:343a/343c`), which calls
`inferred_draw_bitmap_clipped` (`10b0:0000`). That clips to the buffer and calls one of the three 32-bit routines
(span draw, keyed copy, plain copy). Transparent colour index is **0** (callers always pass key 0). Finished rectangles are
sent to the window with `WinGStretchBlt`.

## Scene (the compositor's structure) [code]

Addressed through a far pointer; every function of `1078` takes it first.

| Offset | Size | Field | Evidence |
|---|---|---|---|
| +0x00 | u16 | capacity: list 1 holds at most `+0 - 1` sprites | `1078:08c0` |
| +0x02 | u16 | Windows handle of the temporary rectangle bitmap (created and deleted per redraw) | `0172`, redraw paths |
| +0x08 | u16 | WinG device context used for composing | `0172` |
| +0x0a, +0x0c | u16 | width and height of the current temporary buffer | `0172` |
| +0x1c | u16 | list 0 count | `06f4`, `0806` |
| +0x1e | 100 x far ptr | list 0: sprites sorted by depth, drawn first | `0806`, `08c0` |
| +0x1ae | u16 | list 1 count | same |
| +0x1b0 | 100 x far ptr | list 1: drawn after list 0 (on top) | same |
| +0x340 | i16 | dirty rectangle left | `18d8`, `1796` |
| +0x342 | i16 | dirty rectangle top | same |
| +0x344 | i16 | dirty rectangle right | same |
| +0x346 | i16 | dirty rectangle bottom | same |
| +0x348 | u16 | dirty rectangle valid (1) | `18d8` sets, `1796` clears |
| +0x34a | i16 | clip rectangle left | `0454`, `1238` |
| +0x34c | i16 | clip rectangle right | same |
| +0x34e | i16 | clip rectangle top | same |
| +0x350 | i16 | clip rectangle bottom | same |

## Sprite record [code, partly]

| Offset | Size | Field | Evidence |
|---|---|---|---|
| +0x12 | u16 | flag; sprites with 0 here ignore the depth threshold when lists are drawn | `06f4` (meaning unknown) |
| +0x14 | u16 | clip rectangle initialised (0 or 1) | `0454` |
| +0x16, +0x18, +0x1a, +0x1c | i16 | own clip rectangle: left, top, right, bottom, copied once from the scene | `0454` |
| +0x1e | far ptr | image drawn last time (old image) | `18d8` |
| +0x22, +0x24 | i16 | old top-left x and y | `18d8` |
| +0x26, +0x28 | u16 | old width and height | `18d8` (image size) |
| +0x2a | far ptr | image to draw now (new image); null hides the sprite | `18d8`, `0d60` |
| +0x2e, +0x30 | i16 | **anchor x and y** (the point the object stands on). +0x30 is the depth key for sorting | `18d8`, `05be` |
| +0x36 | far ptr | backdrop image behind the sprite (null: black) | `1796`, `0d60` |
| +0x3a, +0x3c | i16 | backdrop offset | `1030` |
| +0x3e, +0x40 | i16 | new top-left x and y = `(image +0xc + anchor x, image +0xe + anchor y)` | `18d8`, `0b8e` |

Image-record flag [code]: the far pointer at image +0x14/+0x16 being non-zero means "draw with transparency".
`inferred_image_cache_get` sets it (to point at the record itself) when called with flag bit 0; `inferred_draw_sprite` passes that as the keyed flag.
The temporary composing buffer (`DS:1fce/1fd0` header, `DS:343a/343c` pixels) is a WinG DIB created per rectangle, bottom-up unless WinG recommends otherwise.

## Globals around the compositor [code]

- The scene structure is the global at `DS:653e`.
- Current room record: far pointer at `DS:6892/6894`. Fields seen: +0x13 an image record embedded in the room record, used as the
  backdrop for repaints (`inferred_redraw_rect` is called with `room + 0x13`); +0x33 and +0x35 (16-bit) the two numbers of the scale rule
  below; +0x39/+0x3b far pointer to the first room object; the room's object nodes form a linked list (next far pointer at node
  +0x681).
- Two sprite records of 0x44 bytes are allocated when a room is entered (`1048:2b8e`); their far pointers are at `DS:0030` and `DS:0034`.
  `inferred_update_room_sprites` fills the one at `DS:0030` with the image at `DS:870a` and anchor `(DS:3cae, DS:3cb0)` (the player's
  position), and the one at `DS:0034` with the image at `DS:5cc2`; both are cleared when the variable `EraseMike` is set and drawn when
  `ShowMike` is set.
- Room object node (a large record, about 0x685 bytes): flags at +0x67 (bit 4: the image must be scaled, bit 3: skip), frame index +0x73,
  array of frame image far pointers from +0x77, per-frame x at +0x37b, y at +0x47b, scale at +0x57b, scaled image record far pointer at +0x277,
  state word at +0x67b (100 = hidden), its sprite record far pointer at +0x67d. [partly read, from `1038:01e4`]

## Scale rule [code]

`scale128 = (anchorY - room[+0x33]) * K / room[+0x35]`, clamped to the range 10 to 180 (that is 7.8% to 140.6%), with
the unit 128 = 100%. For room objects `K = 128`; for the player's sprites `K = 134` (0x86). A frame can carry its own scale at +0x57b (when set, the
formula is skipped). The scaled image is made by `inferred_scale_image` and has at least 5 x 5 pixels.

## Game variables [code + data]

- Names: `DS:05f0`, one 25-byte slot per variable (24 characters and the terminator). Values: `DS:5e14`, one 16-bit word each. Count: `DS:5cda`.
- Source: `GAMEVAR.IDX` (in `gl00_sys.000`, 5,482 bytes, CR LF text): one `NAME=value` line per variable, sorted case-insensitively.
  The first line is `!Dummy=0` (index 0, used for any unknown name), then `AAAAAAAAAAA01` to `AAAAAAAAAAA20`, then the named variables
  (`AlarmSet`, `AngryTwin`, ..., `True=1`, `UsingNothing=1`, ...), last line `zzzLast=0` (end marker).
- 330 names in our copy. Values are signed 16-bit words. The game also keeps some per-room local variables elsewhere (not read).
- Built-in names the program reads or writes itself (seen in strings): `SysCutScene`, `SysCall`, `SysCall2`, `LastAction`, `GoingOut`,
  `ShowMike`, `EraseMike`, `SysReadyExit`, `SysRandom`, `SysRandom4`, `SysMapBlock`, `FromRoom`, `HaveBioGun`, `UsingNothing`, `SysTalking0..n`.

## Term word (conditions and assignments) [code]

A script condition or change is stored as up to 10 16-bit words followed by a 0 word. A line of text becomes these words in `inferred_parse_terms`.

| Bits | Meaning |
|---|---|
| 0 to 9 | variable index |
| 12 to 14 | operation (when bits 10, 11 and 15 are all 0) |
| 15 | when set: compare or assign the constant in bits 10 to 14 (0 to 31) |

| Text prefix | op | As a condition | As an assignment |
|---|---|---|---|
| none (`NAME`) | 0 | `== 1` | set to 1 |
| `!` | 1 | `== 0` | set to 0 |
| `*` | 2 | `== 2` | set to 2 |
| `+` | 3 | `>= 1` | add 1 |
| `-` | 4 | `<= 1` | subtract 1 |
| `^` | 5 | `>= 2` | add 2 |
| `@` | 6 | `<= 2` | subtract 2 |
| `/` | 7 | always true | set to (value == 0), a toggle |
| `=NAME,n` | (bit 15) | `== n` | set to n (n is cut to 0..31) |

A condition word list is true when all its terms are true (an empty list is false). A script block's condition is a linked list of such
lists (next pointer at +0x14 of each 0x18-byte node): true when any list is true (`inferred_test_any`).
Character classes used by the tokenizer (`DS:5d0e`, set up in `1028:03d0`): lower case 1, upper case and `_` 2, digits and `!` 4,
`+ - * / = & | ( )` 8, space, comma, tab and NUL 0x10; upper-case map at `DS:92b4`.

## Script text parsing state [code]

- File buffer far pointer `DS:3416/3418`, size `DS:341a/341c`, read position `DS:16f4/16f6`, counter of lines since the last `COND=` at `DS:16f8`. The same buffer
  is used by the variable list reader (`DS:341e/3420`, position `DS:60a8`).
- The action record built by `1048:042c` is 150 bytes (0x4b words). Offsets seen: +0xc flag set by `DESTROY=`; +0x10/+0x12 far pointer to the loaded
  text; +0x14 string from `ANIM=`; +0x2b cursor string; +0x38 midi string; +0x45 picture string; +0x52 effect string; +0x5f speech string (also the text name);
  +0x6e dialog string; +0x8f/+0x91 pointer to a wait-until condition node; +0x93/+0x95 pointer to the next record. Condition and change lists are 0x18-byte nodes of
  10 term words with the next-node far pointer at +0x14. [partly read; the first fields (position numbers) are not located yet]

## Room record (built by `inferred_load_room`, far pointer at `DS:6892/6894`) [code]

0x15d8 bytes, zeroed first. Offsets read from the code:

| Offset | Size | Field |
|---|---|---|
| +0x02 | far ptr | head of the entry-section list (0x95-byte nodes, next pointer at node +0x91) |
| +0x06 | 13 bytes | backdrop name (`BackDrop=`) |
| +0x13 | 0x18 bytes | the backdrop's image record (passed to `inferred_redraw_rect`) |
| +0x2b | 4 x i16 | `ObjXY=` rectangle: left, top, right, bottom (the room's clip) |
| +0x33 | i16 | first `ScaleFactor=` number: the scale's far line (the `top` of the scale rule) |
| +0x35 | i16 | second `ScaleFactor=` number: the scale range (the divisor of the scale rule) |
| +0x39 | far ptr | head of the sprite node list (0x685-byte nodes, next pointer at node +0x681) |
| +0x3d | string | walk-map name (`WalkMap=`) |
| +0xf4a, +0xf4c | i16 | the two optional numbers of `WalkMap=` (default 0 and 10) |
| +0xf4e... | arrays of 25 | mirror and music entries (three arrays of far pointers); partly read |

The third `ScaleFactor=` number (always 999 in the data) is parsed by nobody: `ScaleFactor=` reads only two numbers.
So the scale rule `(y - top) * K / range` uses `top = ScaleFactor 1` and `range = ScaleFactor 2`, for example `110` and `205` for room 101.

## Sprite node (0x685 bytes, from `1048:114a`) [code, partly]

| Offset | Field |
|---|---|
| +0x00 | animation name (`Anim=`, 13 bytes) |
| +0x0d | far ptr to the condition list node (from `Cond=`) |
| +0x11, +0x15 | far ptrs to the nodes of `LoadCond=` and `LoopCond=` |
| +0x14 | far ptr to the `Cond2=` list |
| +0x1b | assignment list (`Change=`) |
| +0x45 / +0x47 | `Effect=` number / name |
| +0x54 / +0x56 | `Speech=` number / name |
| +0x63, +0x65 | `StartIndex=` and `EndIndex=` (default 0 and count - 1) |
| +0x67 | `Status=` number 1: flags (bit 3: ..., bit 4: needs scaling, see `inferred_update_room_sprites`) |
| +0x69, +0x6b | `Status=` numbers 2 and 3 (0 and 32767 in the data) |
| +0x6d | `Status=` number 4: **which of the two draw lists the sprite goes to** (0 or 1) |
| +0x6f | `Status=` number 5: frame count (error above 128: "Too many frames in one animation!") |
| +0x71 | `Status=` number 6 (optional) |
| +0x27b | frame sequence array (`Sequence=`; default 1, 2, ..., count) |
| +0x277 | far ptr to the scaled image record (made by `inferred_scale_image`) |
| +0x67b | `SpriteIDX=`: which shared sprite record (0 to 3) to draw with; 100 = none yet |
| +0x67d | far ptr to the node's own sprite record |
| +0x681 | far ptr to the next sprite node |

Local variables: the 20 slots 1 to 20 of the variable table are placeholders `AAAAAAAAAAA01..20`. `LocalVar=` names (always starting with the room number)
overwrite them in sorted order when a room is loaded, with value 0; unloading the room resets them (`inferred_register_local_var`, `inferred_unload_room`).

## Entry record (0x95 bytes, from `1048:19fc`) [code]

| Offset | Field |
|---|---|
| +0x00 | far ptr: condition node list (0x18-byte nodes: 10 term words, next-node far ptr at +0x14) |
| +0x04, +0x06 | `From=` x and y; +0x0e `From=` third number |
| +0x08, +0x0a | `XYRoom=` first two numbers |
| +0x0c | `XYRoom=` third number, then overwritten by the fourth (see contract); +0x12 fifth number |
| +0x10 | `Destroy=` flag |
| +0x14 | set to 1 by `Cond=`; replaced by the `PaletteChange=` number |
| +0x16/+0x18 | far ptr to the loaded `NAME.txt` text (first line) |
| +0x1a | `Anim=` file name; +0x27, +0x29, +0x2b, +0x2d four numbers; +0x2f fifth number |
| +0x31, +0x3e, +0x4b, +0x58 | picture, effect, speech/text name, dialog names |
| +0x65 | `ChangeAt=` assignment list; +0x79 `Change=` assignment list |
| +0x8d | far ptr to the next record (new `Cond=` or `WaitUntil=` record) |

The object-action record of `1048:042c` (same 0x95 size) puts them elsewhere: `XYRoom=` at +4, +6, +8, +0xa, +0xe (five distinct fields), `Anim=` numbers at +0x21, +0x23, +0x25, +0x27 with the name at +0x14 and a fifth at +0x29, picture +0x45, effect +0x52, speech/text name +0x5f, midi +0x38, cursor +0x2b, dialog +0x6e, flag +0xc, loaded text +0x10/+0x12. **The earlier note on this record (pointers at +0x8f/+0x91 and +0x93/+0x95) is superseded: those offsets are not confirmed.**

`Anim=` with four numbers and a name (for example `Anim=160 120 320 240 cutlogos 1`) matches the video start string `put vfw destination at %d %d %d %d`: x, y, width and height of the video window, the name is the AVI file and the last number a flag. [data + guess]

## Number list shorthand [code]

Lines like `PosX=`, `PosY=` and `ScaleVal=` use `V(n)` (n copies) and `V(n d)` (n values from V stepping by d) read by `inferred_parse_number_list`.

## Sprite node fields used by the tick [code, partly]

+0x43 `ChangeAt=` frame number and +0x2f its assignment list; +0x45/+0x54 frame numbers for the effect and speech sounds (names at +0x47/+0x56); +0x63 start frame, +0x65 end frame; +0x67 flags (bit 2: loop, bit 3: follow the player, bit 4: needs scaling); +0x69/+0x6b random window (min, max); +0x6d draw list; +0x6f frame count; +0x71 frames held (hold count); +0x73 current frame; +0x75 steps spent on the current frame; +0x77 array of frame image far pointers (4 bytes each); +0x37b/+0x47b per-frame x and y; +0x57b per-frame scale (0 = from the room rule); +0x1b `Change=` list. The status numbers map: 1 flags, 2 and 3 window, 4 list, 5 frame count, 6 hold.

## Globals of the walk [code]

Player position `DS:3cae` (x) and `DS:3cb0` (y); next path point `DS:9b9a`, `DS:9b98`; path list `DS:3cb2...` of grid cell numbers with the index in `DS:097c` (-1 = none); grid columns `DS:16e4`; facing `DS:8e3c` (0..7); walk frame counter `DS:156a` (1..8); step angles: sin table `DS:246a` (257 words, 16384 = 1), arctangent table `DS:266c` (257 bytes), circle of 1024 units. The current room number is `DS:007c`; `DS:0368` is non-zero while a video plays; `DS:610e` is set when a room has just been entered.

## Correction and walk map [code + data]

- **Entry list links (supersedes earlier notes):** records of the entry list are chained at **+0x91/+0x93** (`inferred_run_room_entry` and `1048:24ee` follow them); the `WaitUntil=` record hangs off a record at +0x8d/+0x8f. Fields confirmed by `1048:2a50`: +0x00 condition list, +0x0e `From=` room, +0x16/+0x18 text, +0x3e effect, +0x4b speech, +0x79 change list.
- **Walk map:** `WalkMap=NAME` loads `NAME.BMP`: **64 by 48 pixels, 8 bits, uncompressed** (4,086 bytes, values 0, 1 and 239 seen). `inferred_enter_room` copies it, bottom row first, into a grid in the room record at **+0x52** with a row stride of **80** (`DS:16e4` = 80, `DS:16e6` = 48): 8 extra border columns on each side are filled with the edge value (a border of 8 cells so a path search never leaves the array). Map column k (0..63) is grid column k + 8; a grid cell centre is at x = (col * 10 - 75), i.e. map column k at **x = 10k + 5**, and row r at y = Y0 + r * H + H/2 (`WalkMap=` numbers Y0 and H). The meaning of value 0 against 1 (blocked or walkable) is not read yet; room 101's map shows a narrow strip and room 106's a large area.
- **Video names:** an entry `Anim=` whose file name starts with `T` or `t` is played full screen (0, 0, 320, 240) (`1048:24ee`).

## Walk grid semantics [code + data]

- **A grid cell is walkable when its value is greater than the variable `SysMapBlock`** (`1040:011a` fills a working grid at `DS:3eba` with -2 for cells above the variable, -1 for cells at or below it; `1040:0000` stops a straight line at any -1). `SysMapBlock` is set to 0 when a room is entered (`inferred_enter_room_and_start`), so by default every non-zero cell is walkable and value 0 is a wall; scripts that set `SysMapBlock` (it appears 133 times in the room and object files) turn all cells with a value up to the variable into walls, so **value 1 marks the part of the floor scripts can close off**.
- Values in the 84 real maps: 0 in all 84, 255 in 66 maps (normal floor), 1 in 25 maps (closable areas), 239 in 9, and a few others (107, 236, 234, 11, 224, 225, 134, 237) in 1 or 2 maps each. Values above 127 are negative as a signed byte: the first test of `1040:011a` (the start cell) uses a signed compare, so a start on a 255 cell counts as blocked and is snapped to an adjacent walkable cell (a possible original quirk, unverified).
- If the start or target cell is blocked, the search first looks for the nearest walkable cell with a 4-neighbour breadth-first search (up to 400 rounds); the search never leaves the inner part of the grid (it ignores the outermost cells of the 80 by 48 array).
- Path search moves in 4 directions (left, right, up, down) on the grid (breadth-first, with parent marks). The result is the list of cells at `DS:3cb2` (16-bit, `row * 80 + column`), **goal first, start last**, last index in `DS:097c`; only corner cells are kept: a cell is stored when the straight line from the last stored cell to the next one on the route would cross a wall. The tick consumes the list from the end (`DS:097c` counts down), i.e. start to goal.
