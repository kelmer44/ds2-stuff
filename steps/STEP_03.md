# Step 3 sheet: resource archives

Goal: read the game's glue files. Visible result: console commands `res_list`, `res_info`, `res_dump`, `res_extract`.
Copy: `resources.cpp/.h`, only `GlueArchive` and `Resources`. Contract: `10b8:0368` (decompressor), `1028:09f6` (index loader), `STRUCTS.md` (GFILE.HDR and glue layout).
Touch: `resources.cpp/.h` (the skeleton has empty ones), `darkseed2.h/.cpp`, `console.*`, `module.mk`.

## Read first (about an hour)
1. `STRUCTS.md`: sections "GFILE.HDR" and the glue layout. Header: u16 glue count (108), u16 entry count (9291), 108 records of 64 bytes (32-byte name, 32 unused), 9291 records of 22 bytes.
2. 2011 `resources.cpp`: `GlueArchive` (`open`, `index`, `getStream`, `uncompressGlue`, `uncompressGlueChunk`, `isCompressed`), then `Resources::index`, `readIndexHeader`, `readIndexGlues`, `readIndexResources`, `hasResource`, `getResource`, `addExtension`.
3. `re/contracts/10b8_0368.md`: the decompression, to check `uncompressGlueChunk` against.

## Copy
- `Archive` base class, `GlueArchive`, the `ResourceMap`, and `Resources` with the index functions.
- Leave out: `PGFArchive`, `TNDArchive`, `SaturnGlueArchive`, all `Mac*Archive`, `indexPGF`, `indexMacResources`, `addMacResourceFork`, `addMacRoomArchive`, `setGameVersion` (step 2 decided how to keep the version helper; call it from here only if you kept it).

## Source tree
Copy from `~/Desktop/source/scummvm-darkseed2-2011` (the 2011 engine already converted to the current ScummVM API). Nothing needs adapting to the API: only trim what you leave out, and change the license header to the current style (you did this). If a copied file fails to compile, that is a bug in the converted tree, not a step you forgot.

## Fix: exact edits after copying
Each item names the file, the place and the change.
1. `resources.cpp`, `GlueArchive::index()`: `assert(file->open(...))` runs the open inside `assert`, which disappears in builds without asserts, so the file would never open. Change to `if (!file->open(...)) { delete file; error(...); }`.
2. `resources.cpp`, `GlueArchive::uncompressGlue()`: delete `assert(size < (10*1024*1024));`. The biggest decoded file is 1.5 MB, so the check protects nothing.
3. `resources.cpp`, `GlueArchive::isCompressed()`: no change needed. I checked all 108 glue files in our data: this heuristic gives 85 compressed and 23 raw, and agrees with the `That` trailer at offset 0x7F8 on every file. Optionally add a comment saying so.
4. `resources.cpp`, `GlueArchive::uncompressGlueChunk()`: no change. Compare it once with `re/contracts/10b8_0368.md` to learn the format (flags byte, 16-bit literal pair, 12-bit distance, 4-bit length plus 3).
5. `resources.cpp`, `Resources::getResource()`: keep `error()` for a missing name for now (it shows bugs early; revisit in step 23).
6. Do not add Spanish names anywhere: file names come from `gfile.hdr`.
Nothing else in this step differs from the original.

## Wire-up
- `Resources *_resources` in the engine; `_resources->index("gfile.hdr")` in `run()`; error out cleanly with a message if it fails (detection should already have found the file).
- Console commands:
  - `res_list`: prints glue count (expect 108), entry count (9291), and per glue file the number of entries and compressed or raw (expect 85 compressed, 23 raw).
  - `res_info NAME`: glue file and size.
  - `res_dump NAME [n]`: hex of the first n bytes (default 64).
  - `res_extract NAME`: write the resource to a file in the current folder (debug only).

## Test
1. `res_list` prints 108 and 9291 and 85 and 23.
2. `res_info GAMEVAR.IDX`, `res_info OBJ_9999.DAT`, `res_info ROOM0101.DAT` (names as in the index) give a size. Compare three of them with `re/export/` or with the sizes in `GFILE.HDR` (the sixth to ninth bytes of each 22-byte record).
3. `res_dump ROOM0101.DAT` shows readable text starting with a section keyword; `res_dump` of a raw-file entry and of a compressed-file entry both work.
4. Extract `GAMEVAR.IDX` and open it in an editor: plain text.
5. Time `res_extract` on the largest compressed glue; it should be quick.

## What you learn
The data layout of the game, the LZ-style decompressor, ScummVM's stream classes and ownership rules.

## Pitfalls
- Endianness: all header numbers are little-endian (`readUint16LE`, `readUint32LE`).
- Offsets in compressed glue files are offsets in the decompressed stream; in raw files they are file offsets.
- Keep streams alive while resources reference them; if you return an alias into a cached buffer, say so in a comment.
