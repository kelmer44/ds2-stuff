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

Dirty-rectangle fields of the scene structure used by the compositor (`1078:1796`): rectangle at +0x340 (left), +0x342 (top),
+0x344 (right), +0x346 (bottom); +0x348 cleared after a redraw. Object fields seen in `1078:1030`: current image far pointer
+0x1e, new image far pointer +0x2a, on-screen position +0x22/+0x24, anchor (x, y) +0x2e/+0x30, previous rectangle +0x3e/+0x40. [partly read]
