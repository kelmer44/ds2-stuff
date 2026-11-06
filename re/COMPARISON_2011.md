# Comparison with the 2011 engine (DrMcCoy)

Verdicts: **faithful** (matches the fresh contract on everything observable), **faithful with changes**
(reusable after the listed changes), **differs**, **unverified**. A verdict covers the data we have
(Spanish PC build, `DARK0001.EXE` SHA-256 `3ed6c303…a2db57`). Dates are 2026.

## Resource layer (compared 6 Nov, after contracts `10b8_0368` and `1028_09f6`)

2011 sources: `resources.cpp` (`GlueArchive`), `resources.h`.

| 2011 item | Contract | Verdict | Notes |
|---|---|---|---|
| `GlueArchive::index` (u16 count; 12-byte name, u32 size, u32 offset) | glue file directory, `STRUCTS.md` | faithful | Same layout. 2011 indexes by reading every glue file's own directory and does not read `gfile.hdr`. |
| `GlueArchive::uncompressGlueChunk` | `10b8:0368` | faithful | Same flag order, literal word, match length `(w&15)+3`, distance `(w>>4)+1`, 17 bytes per group, stop after the budget. Copies byte by byte instead of in 4-byte steps: identical for real content (only the padding items after the last real data differ). |
| `GlueArchive::uncompressGlue` (2048-byte blocks, 2040 consumed, `size = u32 at 2044 + 128`) | block framing | faithful | Matches the trailer dword at `0x7fc` and the `+0x80` slack the EXE adds. Last block budget `((n+16)/17)*17` gives the same group count as the EXE's `ceil(n/17)`. |
| `GlueArchive::isCompressed` (directory plausibility test) | not read in the EXE yet | faithful with changes | Classifies all 108 files correctly in our data (85 compressed, 23 raw) as far as checked by the contract's validation, but it is a heuristic. The 8-byte trailer `"That"` at `0x7f8` is a stronger test. The EXE chooses by caller, not by content; still to read. |
| Index built from glue directories | `GFILE.HDR` index | differs (behaviour same) | The original looks resources up in the sorted 9291-entry table from `gfile.hdr`. Result is the same names, sizes, offsets. Decompressing all 85 compressed files at startup is slower than reading one 211 KB header. Prefer the header and keep the glue directories as a consistency check. |
| `size < 10 MB` assert | none | faithful with changes | Largest decoded glue in our copy is 1.5 MB (`gl00_203`); remove the assert or make it a size check against the trailer. |

Still to do for this cluster: `PGFArchive`, `TNDArchive`, `SaturnGlueArchive` and the Mac archives are for other
versions (out of scope). `resources.cpp` index/lookup code outside the classes above is unread.
