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
