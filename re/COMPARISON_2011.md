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

## Resource lookup and loading (compared 6 Nov, after contracts `1088_*` and `1098_*`)

The 2011 engine has no equivalent of the original's lookup path. Differences that matter for fidelity:

| Original | 2011 | Verdict |
|---|---|---|
| Names normalised to 12 upper-case characters padded with NUL, then compared byte by byte | `equalsIgnoreCase` on strings | faithful for all names in the data (all 9291 are upper case, 12 or fewer characters) |
| Sorted-table lookup in `gfile.hdr`, a few names may be missing silently, others raise an error | map built from glue directories; a missing name returns null | differs in error behaviour (the original shows a message box); decide at port time |
| Whole compressed glue file decoded into one buffer; resources are aliases into it | whole file decoded, resources are read streams | faithful in result |
| Resources in raw glue files are read from the file at the entry offset | same | faithful |
| Per-glue directory (install folder or CD) | `Common::File` search path | differs (ScummVM handles paths), no gameplay effect |
| Which glue files are loaded when: text and walk maps at start, one room package per room entered | 2011 indexes every glue file once and keeps files open, decompressing a compressed file on first use | differs in timing, same result. A port may decompress a room package when the room is entered and drop the previous one, as the original does; keeping all of them is only a memory choice. |
| Install directory from `DARKSEED.INI` `[DIRECTORY] CD`, per-glue current-directory test | ScummVM game path | differs (platform), no gameplay effect |

## Pictures and palettes (compared 13 Nov, after contracts `1080_*` and `10b8_*`)

2011 sources: `sprite.cpp` (`Sprite::loadFromBMP`, `readBMPDataComp0/2`), `palette.cpp`.

| Item | Contract | 2011 | Verdict |
|---|---|---|---|
| Compression 0 pictures: plain rows, 4-byte aligned, bottom-up | `STRUCTS.md` | `readBMPDataComp0` | faithful |
| Compression 2: per row `skip, length, pixels` | `STRUCTS.md`, `10b8:0104` | `readBMPDataComp2` (skip and length words, error if `skip + length > width`) | faithful. The original also skips key-colour pixels inside the span; 2011 builds a transparency map from the key afterwards (`createTransparencyMap`), same result. |
| `bfOffBits == 54` means no colour table | all 400 sampled files | same rule | faithful |
| `.pal` = 256 x (B, G, R, unused) | `1080:00ee` | `loadFromPALRGBA` (reads B, G, R, skips 1) | faithful for the entry order; the original never loads fewer than 256 entries |
| Header words at 0x26, 0x28 as **feet** position: `feet = min(abs(value), size - 1)` | `(a, b)` are signed offsets from the object's anchor to the sprite's top-left; the anchor can lie outside the sprite (`1078:1030`) | `loadFromBMP`: `_feetX/_feetY` from the first two words with `ABS` and clamping to `size - 1` | **differs.** `abs()` keeps the magnitude, so the horizontal position is right, but the clamp to `size - 1` moves any anchor outside the sprite onto its edge: `(-45, -86)` on a 76 x 78 sprite becomes feet y = 77 instead of 86, 9 pixels too high. Fix: keep the signed values, no clamp. This is the likely cause of the "strange feet values" and some drawing-order errors in the 2011 TODO. Drawing order itself is not read yet. |
| Header words at 0x2a, 0x2c as default coordinates | no reader found | `_defaultX/_defaultY` | unverified (the original's use is unknown) |
| Transparent colour | index 0, passed by every caller; spans skip it too | transparency map built after loading | faithful if the map uses index 0 (not checked) |
| Images shared by name with a use count | `1070:0000` / `0136` | no equivalent found | differs in memory behaviour only |
| Palette entries 0 and 255 forced to black and white, entries 1 to 254 animatable, optional brightening (`DS:0062`) | `1080:049a` | not present | not applicable to a true-colour or ScummVM palette surface, but the brightening rule needs a decision once the option is understood |
| `.BMM` masks | not inspected | not compared | unverified |

## The scene compositor (compared 13 Nov, after contracts `1078_*`)

2011 sources: `graphics.cpp` (drawing order comment: "the vertical position of the feet dictates the layer"), `graphicalobject.cpp`.

| Item | Contract | 2011 | Verdict |
|---|---|---|---|
| Sprites drawn back to front by anchor y (smallest first) | `1078:05be` | layer decided by the sprite's feet y (`graphics.cpp:305`) | faithful in principle. The original sorts by the **anchor y** (`+0x30`), which is `feet` only if the feet value is the signed anchor (see the sprite-placement row above). |
| Tie order | selection sort, not stable | not checked | unverified |
| Two lists, list 1 always on top | `1078:06f4` | no such split found | unverified; check what lives on list 1 before adding it |
| Top-left = anchor + `(a, b)` | `1078:18d8` | `moveFeetTo` with clamped feet | differs (see placement row) |
| Dirty-rectangle repaint | `1078:18d8`, `1796` | not checked | not needed; ScummVM can redraw per frame as long as the order and clipping match |
| Clip rectangle of the play area | scene +0x34a..0x350 | not checked | unverified |
| Transparent colour 0 | all callers key 0 | transparency map | faithful if index 0 (not checked) |

## Sprite scaling (compared 13 Nov, after contract `1020_0656` and `STRUCTS.md` scale rule)

2011 sources: `mike.cpp` (`calculateScale`, `_scaleMin`, `_scaleMax`), `sprite.cpp`.

| Item | Contract | 2011 | Verdict |
|---|---|---|---|
| Scale formula | `(y - top) * K / range` in 1/128 units, K = 128 for objects and 134 for the player | `(y - factors[0]) / factors[1]` as a fraction | **differs by K for the player**: the original's player scale is 134/128 = 1.047 times larger at the same y; for objects K = 128, same as 2011 |
| Clamp | 10/128 to 180/128 = 0.078 to 1.406 | `_scaleMin` 0.05, `_scaleMax` 1.05 | **differs**: the original allows scales up to 140.6% and never below 7.8%; this matches the 2011 TODO "scaling not completely correct" |
| Minimum size | 5 x 5 pixels | not found | differs (only matters for very small scales) |
| Placement offsets scaled with the image | `offset * scale / 128`, mirrored case `-((w + offset) * scale / 128)` | `fracToInt(offset * _scale)` with a min of 1 or -1 (`mike.cpp:481`) | differs: the original truncates and has no 1/-1 minimum |
| Pixel resampling | StretchDIB library (`10c8`), unread | not compared | unverified |

## Game variables and conditions (compared 13 Nov, after contracts `1060_*`)

2011 sources: `variables.cpp` (`evalConditionPart`, `evalChangePart`, `loadFromIDX`).

| Item | Contract | 2011 | Verdict |
|---|---|---|---|
| Plain `NAME` as a condition | `== 1` | `get != 0` | **differs** for values above 1 (2011 says true for 2) |
| `!NAME` | `== 0` | `== 0` | faithful |
| `*NAME` | `== 2` (assign: set 2) | `== 23` (assign: set 23), marked "not yet understood" | **differs**; the 23 is a guess and wrong |
| `+NAME` | `>= 1` (assign: add 1) | `== 24` (assign: set 24) | **differs** |
| `@NAME` | `<= 2` (assign: subtract 2) | `== 25` (assign: set 25) | **differs** |
| `-NAME`, `^NAME`, `/NAME` | `<= 1` / `>= 2` / toggle | not handled | missing |
| `=NAME,n` | `== n` / set n, n cut to 0..31 | `== n` / set n (any int) | faithful for n up to 31; values above 31 wrap in the original |
| Several lists: any list true; terms in a list: all true | `inferred_test_any`, `inferred_test_terms` | same logic (`evalCondition` over a list, then per part with `&&`) | faithful. One more rule: the original treats an empty list as false and cuts a list at 10 terms |
| Sorted names, dummy at index 0 | `inferred_load_game_vars` | hash/map by name | differs in mechanism; same results except that the original sends unknown names to the dummy variable (index 0) instead of failing |
| Variable width | signed 16-bit | `int32`-like | differs (wrap-around only) |

## Script text format (compared 13 Nov, after contracts `1048_0000`, `1048_0b54`, `1048_03c4`)

2011 sources: `script.cpp` (`ScriptChunk::parse`, `ScriptAction` names), `datfile.cpp`, `roomconfig.cpp`.

| Item | Contract | 2011 | Verdict |
|---|---|---|---|
| Unknown key | silently ignored (code 0) | warning and the whole parse fails | **differs**: ignore it |
| `Chnage=!ShowMike` (`OBJ_0307.DAT` line 42) | no effect (unknown key) | "workaround for OBJ_0307.DAT" treats it as `Change=` and applies it | **differs**: the 2011 workaround hides the player where the original does not; remove it |
| Case | keys are upper-cased | case-insensitive match | faithful |
| Comments | cut at the first `;`, trailing spaces dropped | handled in `DATFile` | not compared in detail |
| `COND=` followed by `COND=` with no action | message box "No Info for this Condition!" (object files) | treated as the start of the next chunk | differs in diagnostics only |
| `Cond=` / `Cond2=` | `Cond2=` is a second list (any list may be true) | same idea (`_conditions` list, any true) | faithful |
| Action keys known | 25 in object files, 51 in room files | 15 `ScriptAction` names (`XYRoom, Cursor, Change, Text, Midi, Anim, From, PaletteChange, ChangeAt, Dialog, Picture, Speech, SpeechVar, WaitUntil, Effect`) | the 15 are all real keys; the other keys are in the room parser (`roomconfig.cpp`) and were not compared |
| `Destroy=` | code 0xe exists | listed in the 2011 TODO as unknown | the key never occurs in the 167 files; it can only come from conversation scripts |

## Room files (compared 13 Nov, after contracts `1048_1f6e`, `1060_048e` and the sprite parser notes)

2011 sources: `roomconfig.cpp` (`RoomConfigSprite`, `RoomConfigPalette`, `RoomConfigMusic`), `mike.cpp` (scale factors), `variables.cpp` (local variables).

| Item | Contract | 2011 | Verdict |
|---|---|---|---|
| `ScaleFactor=a b c` | `a` and `b` stored, `c` ignored; scale `(y - a) * K / b` | three factors stored (`_scaleFactors[0..2]`), the formula uses the first two | faithful in which numbers are used; constants differ (see sprite scaling) |
| Default frame sequence | `1, 2, ..., count` | `0, 1, ..., count - 1` (`roomconfig.cpp:307`) | **differs by 1**; resolve with the frame numbering of the animation bank (not read yet) |
| `Status=` fourth number | selects draw list 0 or 1 | not used as a list selector (stored only) | unverified: check how 2011 orders sprites against the original's two lists |
| `Status=` fifth number | frame count, max 128 | used to size the default sequence | faithful in use |
| `StartIndex=`, `EndIndex=` | defaults 0 and count - 1 | palette sections only | unverified for sprites |
| `LocalVar=` | up to 20, written into placeholder slots, reset on unload | `_localVariables` map | differs in mechanism; same visible behaviour if the room lifetime and 0 reset are kept |
| `WalkMap=NAME [n m]` | optional two numbers, default 0 and 10 | not found | unverified: the two numbers are not used in 2011 |

## Entry section and number lists (compared 14 Nov, after contracts `1048_19fc`, `1060_0188`, `1060_0d2e`)

| Item | Contract | 2011 | Verdict |
|---|---|---|---|
| `XYRoom=` fourth number | overwrites the third in entry records (separate fields in object records) | `XYRoom` stored as one argument string, split later | unverified; check how the 2011 code splits the five numbers against the two record layouts |
| `PosX=`/`PosY=`/`ScaleVal=` `V(n)` and `V(n d)` | repeat and ramp | `parsePackedIntLine` (exists) | not compared in detail; the 2011 helper name suggests the same idea |
| `Anim=` with four numbers | video rectangle | `Anim` argument parsed as video (movie) with position | probably faithful, not compared |

## Game tick and walking (compared 14 Nov, partial)

| Item | Contract | 2011 | Verdict |
|---|---|---|---|
| Walk grid | cells 10 wide, H tall (`WalkMap=` second number), origin Y0 (first number), x offset -75, N columns from the map | `pathfinder.cpp`, `mike.cpp` with a hotspot scale | unverified; compare the cell geometry with the walk-map resource when it is read |
| Step length | 6 to 14 pixels depending on y | not compared | unverified |
| Facing | 8 directions by sign and ratio of dx, dy | not compared | unverified |
| Animation hold and loop | hold = sixth `Status=` number, loop flag, `ChangeAt` frame | `RoomConfigSprite::updateStatus` | not compared in detail |

## Room change and walk map (compared 14 Nov)

| Item | Contract | 2011 | Verdict |
|---|---|---|---|
| Entry choice | first record whose `From=` room is 0 or equals `FromRoom` and whose condition is true | `FromRoom` handled in `roomconfig.cpp` entries | not compared in detail |
| Walk map | 64 by 48 8-bit BMP, cell 10 wide, with 8 border columns | `Pathfinder` reads a walk map (`pathfinder.cpp`, 441 lines) | unverified: the cell size and the border must be checked against `pathfinder.cpp` |

## Walk map and path finder (compared 14 Nov, after contracts `1040_0000`, `1010_07c6`)

2011 sources: `pathfinder.cpp`, `pathfinder.h` (`kXResolution = kYResolution = 10`), `room.cpp` (`WalkMap=` parsing), `mike.cpp`.

| Item | Contract | 2011 | Verdict |
|---|---|---|---|
| Cell width 10 pixels, 64 map columns | yes | `kXResolution = 10`, map x scaled by `screenWidth / mapWidth / 10` | faithful |
| `WalkMap=NAME top height`, defaults 0 and 10 | room +0xf4a, +0xf4c with defaults 0 and 10 | `_walkMapYTop`, `_walkMapYResolution`, defaults 0 and 10; map row = `(y - top) / res` | **faithful** (same defaults and rule). Note the original cell height is the second number (5 in the shipped files), but 2011's tile unit is 10 px vertically (`kYResolution`), so the grids differ in size, see below |
| Vertical cell size | cell is H pixels tall (H = 5 in most rooms) | tile is 10 pixels tall and samples the map at `(y * 10 - top) / res` | **differs in resolution**: the original path grid has a cell per map pixel (10 x 5), 2011 samples a coarser 10 x 10 grid; paths can differ near narrow strips |
| Border | 8 repeated edge cells on each side | none; cells outside the map are not walkable | **differs**: in the original the area up to 80 pixels outside the screen edge counts as walkable if the edge cell is |
| Walkable test | `cell > SysMapBlock` (default 0) | `cell != 0` | **differs once `SysMapBlock` is raised**: 2011 has no `SysMapBlock` handling at all (the name never appears), so closable areas (value 1, in 25 of 84 maps) stay open |
| Neighbours | 4 (left, right, up, down) | 8, straight ones first | **differs**: the original search moves in 4 directions (path shape and length differ; the later smoothing in the original is unread) |
| Algorithm | breadth-first search with a nearest-floor snap | IDA* with an 8-direction heuristic | differs; a faithful port should use the original's 4-direction breadth-first search once the path extraction is read |
| Blocked target | snap to the nearest walkable cell (BFS up to 400 rounds) | `findNearest` over the whole map (squared distance) | differs in which cell is chosen when several are equally near |

Update after reading `1040:011a` in full (14 Nov):

| Item | Contract | 2011 | Verdict |
|---|---|---|---|
| Route shape | breadth-first route from the start, kept as corner cells chosen by a straight-line test against walls (string pulling) | IDA* route over cells, then `simplifyPath` removes only middle points of exactly straight or exactly diagonal runs | **differs**: the original skips ahead over any straight line that does not cross a wall, giving long straight runs, 2011 follows the cell route with only exact lines merged |
| Search limit | gives up after 400 rounds | node limit `3 * width * height` | differs (limit values) |
| Inner-area rule | the search never expands cells in column 0, column 79, row 0 or row 47 of the 80 by 48 grid | none | differs only at the screen edge |
| List order | goal first, start last, consumed from the end | positions front to back | equivalent if the consumer reads start to goal |

## Clicks and verbs (compared 14 Nov, outline only)

| Item | Contract | 2011 | Verdict |
|---|---|---|---|
| Verbs | go (0), use (1), look (2); lists `GoStart`, `UseStart`, `LookStart` | `events.cpp` / `objects.cpp` handle go, look and use | not compared in detail |
| Walk first | within 10 pixels of `XYRoom=` x, y and the facing equals the 4th number; else walk and re-run on arrival | not compared | unverified |
| First true block wins | per object and verb | script chunks with conditions (`conditionsMet`) | probably faithful |
| Rooms 0x13a and 0x32b | go click with no go list uses the use list | not found | unverified |
