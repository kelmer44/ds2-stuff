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
