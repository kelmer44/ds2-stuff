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

## Conversations (compared 14 Nov, from the script files and the line reader only)

2011 sources: `conversation.cpp`, `conversation.h` (the 2011 TODO lists "entry action destroy" and "`CONV0024.TXT` goto = exit, Greeting" as open).

| Item | Contract | 2011 | Verdict |
|---|---|---|---|
| Keywords | 15 keys: conversation, declare, import, node, fallthrough, entry, hide, unhide, text, goto, assign, destroy, message, messagestop, speaker | the same set is implied by the open items | not compared line by line |
| `goto = exit, Node` | 6 uses, all `exit, Greeting` in `CONV0024.TXT`: leave and set the next start node [data] | listed as not understood | **open item explained**: the form is `exit` followed by a node name; the runtime effect is not read in the EXE yet |
| `destroy = (Var) entry` | 65 uses; removes an entry when the variable holds [data] | listed as not understood | **open item explained** by the file syntax; runtime to be confirmed |
| Value cleaning | spaces and non-ASCII characters removed (except after the comma in `speaker`) | not compared | unverified: names with spaces would differ |

Update after reading the conversation loader and list code (14 Nov):

| Item | Contract | 2011 | Verdict |
|---|---|---|---|
| Entry visible | `flags & 5 == 1` (initial and not hidden) | `conversation.cpp` entry states | not compared line by line |
| Fallthrough | continue in the named node when the number of choices is not above `n` | `fallthrough` handled | not compared |
| Condition expressions | postfix with `+ - * / & | ^ < = >` over variables and numbers, comparisons give 0/1, division by zero is an error | the 2011 code has the strings "Internal error: compute list" only in the original; check `conversation.cpp` for the expression evaluator | unverified |
| Choice text | first line of `NAME.txt` (cut at CR) | text resources read whole | unverified |

Update after reading `EntrySelected` (14 Nov):

| Item | Contract | 2011 | Verdict |
|---|---|---|---|
| `goto = exit, Greeting` (2011 TODO) | the target is the string `exit,Greeting`, which is no node name, so the conversation ends; `Greeting` is ignored | open | **resolved**: treat an unknown or `exit...` target as "end conversation" |
| `destroy` (2011 TODO) | sets bit 2 of the target entry, so it never appears again (even after `unhide`) | open | **resolved** |
| `hide` / `unhide` | hide clears all flags; unhide sets bit 0 only | not compared | unverified: hiding a `persist` entry also clears its persist bit in the original |
| Entry after use | non-persist entries are hidden when chosen | not compared | unverified |
| Order of effects | assign, hide, unhide, destroy, then speech, then goto | not compared | unverified |

## Conversations, runtime (compared 14 Nov, `conversation.cpp` read against `CONVERSATION_LANGUAGE.md` and the contracts `1068_*`)

| Item | Contract (original) | 2011 | Verdict |
|---|---|---|---|
| Unknown or `exit` goto target | the conversation ends | `goTo`: `exit` or a name not in the node map breaks out with no current node | **faithful** |
| First true goto wins | goto lines tried in order, first true condition is taken | loop with `continue` on a false condition, `break` on the first true one | **faithful** |
| Fallthrough | while visible entries `<=` n, continue in the named node; empty, `exit` or unknown name ends | same loop and same end rule | **faithful** |
| Entry visible | `flags & 5 == 1` (initial, not destroyed) | one `visible` bool plus a `destroyed` bool that `getVisibleEntries` never checks | **differs**: see destroy |
| `destroy` | sets bit 2, entry never returns, not even after `unhide` | sets `destroyed = true` (with a TODO warning) but `unhide` sets `visible = true` and the list only tests `visible`, so a destroyed entry can come back | **differs**: fix by testing `destroyed` in the list and in `unhide` |
| `hide` | clears all flags, including persist | clears `visible` only | **faithful with changes** (the persist bit does not matter once persist is handled as below) |
| `unhide` | sets bit 0 | sets `visible` | **faithful** (given the destroy fix) |
| Persist | a chosen entry that is not persist is cleared; a persist entry stays on the list | `persist` is parsed and saved but `pick` always hides the chosen entry | **differs**: persist entries must not be hidden on selection |
| Effect order | non-persist cleared, assign, hide, unhide, destroy, speech, replies, first true goto | `hide(entry)`, assign, hide, unhide, destroy, goto (speech is played by the caller) | **faithful with changes**: order of the list effects matches; the persist rule above is the only gap |
| Conditions on actions | evaluated per action with the variable terms | `evalCondition` on each action, in `Variables` | **unverified**: depends on the 2011 prefix guesses already marked `differs` in "Game variables and conditions" |
| `assign` | `Var = expression` (postfix) | `Assign(var, value)` strings; `CONV0011` workaround, `speaker` handled | **unverified**: expression forms were not checked against the 2011 parser |
| Node with entries and goto | per original, a node that has both is read as a choice list and the goto is the fallback | only a "TODO ... has goto and entry" warning; `goTo` returns early only for a node with no entries and some gotos | **unverified**: check against `1068:15b8` before reuse |
| Start node | first node in the file | first node parsed becomes `_startNode` | **faithful** (the original starts from the first node too) |
| Choice text | first line of `NAME.txt` | full text | **unverified** |
| Save/load | not read yet | syncs flags, current and start node | **unverified** |

Reuse decision: the node graph, goto and fallthrough code is adoptable as it is. Entry state (`visible`, `destroyed`, `persist`) is replaced by the original's flag byte with the bit rules above. Condition and assign code waits for the variable and expression layer to be settled.

## Walking, facing and step length (compared 14 Nov, `mike.cpp` against contracts `1038_1ade`, `1038_086e` and `STRUCTS.md`)

Settles the three "unverified" rows of "Game tick and walking".

| Item | Contract | 2011 | Verdict |
|---|---|---|---|
| Facing pictures | 8 facings (0 up, 1 up-right, 2 right, 3 down-right, 4 down, 5 down-left, 6 left, 7 up-left); facings 1 to 3 are the mirrored pictures of 7 to 5; standing uses the first picture, walking pictures 1 to 8 | `n`, `nw`, `w`, `sw`, `s` loaded, NE, E and SE flipped horizontally | **faithful** (same set and the same mirroring) |
| Facing choice | horizontal when `|dx| > 5 |dy|`; otherwise vertical, or diagonal when `2 |dy| < 5 |dx|`; a pending target facing is applied on arrival | `getDirection()` compares coordinates for exact equality (N, S, E, W only when x or y match, else the diagonal) | **differs**: replace with the ratio rule |
| Step length | `|y - far| * 14 / range`, clamped to 6 to 14 pixels, along the true angle (sine and cosine tables) | fixed offsets 12 (E, W) and 7 (diagonals) scaled by the sprite scale, minimum 1 | **differs**: use the contract's formula (the tables are in `STRUCTS.md`) |
| Step rate | tick of 1000 / `DS:0046` ms (5, 15 or 24 per second; 12 by default) | one frame every 100 ms | **differs** (10 against 12 per second): use the tick rate |
| Player scale | `(y - far) * 134 / range`, clamped 10 to 180 (in 1/128), minimum picture 5 by 5 | `(y - top) / range`, clamped 0.05 to 1.05 | **differs**: use 134 / 128 and the clamp 10/128 to 180/128 |
| Path | grid of 10 by H cells, corner cells only, consumed goal-last (see "Walk map and path finder") | `Pathfinder` | see that section |

## Animation, mirror and palette entries (compared 14 Nov, `roomconfig.cpp`, `sprite.cpp` against contracts `1048_114a`, `156a`, `17ea`, `18fe`)

| Item | Contract | 2011 | Verdict |
|---|---|---|---|
| Sprite `Status=`, `Sequence=`, `PosX/PosY/ScaleVal` lists, hold and loop | see contract `1048:114a` and `STRUCTS.md` | `RoomConfigSprite` | **faithful with changes**: re-check the hold count and the `LoopPoint=` meaning (the start frame) against the contract |
| `Effect=`, `Speech=` with a frame number | sound plays when the frame number is reached | parsed in `RoomConfigSprite` | **unverified** |
| Mirror section | affine reflection of the player's position (`PosX=`, `PosY=` three coefficients each, divided by 256), facing from `ScaleVal=`, clip rectangle `ClipXY=`, condition `Cond=` | parsed, never applied (`updateStatus()` returns false); `Cond=` is rejected as an unknown key | **differs** (not implemented): implement from `1038:01e4` |
| Palette section | `StartIndex`/`EndIndex` give the range rotated every tick while the entry's condition holds | parsed, never applied | **differs** (not implemented): implement from `1080:01de` |
| Music section | first entry whose conditions hold plays | `RoomConfigMusic` | **faithful** in outline (checked with `music.cpp`) |
| Entry video and `T`/`cut`/`abh` rules | transitions are named `T...`, cut-scenes `cut...` or `abh...`; options skip them; sizes 320 by 240 at the top left, centred, or doubled | `Movie::play(file, x, y)` with a fixed doubling switch | **differs**: add the skip rules and the three sizes |

## Palette effects and the pause screen (compared 14 Nov, against contracts `1080_02f0`, `038a`, `041a`, `01de`)

| Item | Contract | 2011 | Verdict |
|---|---|---|---|
| Fade to black | 256 steps lowering every colour by 1, colours 1 to 254 | no fade | **differs** (missing): a ScummVM fade is enough |
| Pause (P) | halve the palette, restore on resume; "Pausa Juego" text | `pauseEngineIntern` pauses the mixer only | **differs** (missing): add the dimming and the text, optional |
| Colour cycling | rotate the range per tick | not implemented | **differs** (missing) |

## Audio: speech, effects and music (compared 14 Nov, `sound.cpp`, `talk.cpp`, `music.cpp` against contracts `10a8_*`)

| Item | Contract | 2011 | Verdict |
|---|---|---|---|
| Music files | `sndtrack/` + name + `gm` or `fm` + `.mid`; same name twice does nothing; loops when finished; volume from the settings | `Music::playMID()` does exactly this (`MidiMode` GM or FM, name check, `play(true)` loops) | **faithful** |
| Speech queue | up to 20 lines in a ring; each starts when the last has finished (and the wait is over), with its subtitle and a tracking variable set to 1 while talking and 2 when done | one `TalkManager` line at a time, `SpeechVar` handled as a variable named in the script | **faithful with changes**: queue the lines; check the variable semantics with the data |
| Subtitle hold | from the sound's size and the read-speed option, at least 1 s after the speech | `(255 - speed) * 20` ms from the ScummVM talk speed | **differs** by design; keep ScummVM's setting but never below the speech length |
| Sound effects | effects named `SE...` cached (up to 20); plain effects use 3 rotating channels; in rooms above 600 a random `SE%03d` plays every 12 to 14 s | no cache, no random ambient effects | **differs** (missing ambient effects): add the random effects |
| Dialog option and sound switches | speech / text options and the M and D keys | ScummVM options (subtitles, volumes, mute) | **differs** by design: map to ScummVM settings |

## Inventory bar (compared 14 Nov, `inventorybox.cpp` against contracts `1008_*`)

| Item | Contract | 2011 | Verdict |
|---|---|---|---|
| Pictures | `invntry1`, `arwlft1/2`, `arwrght1/2` | the same names (`INVNTRY1`, `ARWLFT1`, ...) | **faithful** |
| Size and items | 640 by 70; up to 10 items 50 apart from x = 70; scroll by one; left arrow shown when scrolled, right arrow when more than 10 remain | 640 by 70; item pitch 50; 9 visible items (95 to 545) and small arrow hit zones | **faithful with changes**: 10 items, arrows over the whole 80-pixel ends |
| Verbs on items | cursor mode 1 runs the item's second list, mode 2 the first; no match puts items back and shows the use cursor | `Inventory` evaluates look and use conditions | **unverified** in detail |
| Dim backdrop | colours remapped through a nearest-colour table | not read | **unverified** |

## Saves, options and keys (compared 14 Nov)

| Item | Contract | 2011 | Verdict |
|---|---|---|---|
| Save file | scrambled `DS2SGnn.SAV` (key `0x4E16A83F`), room, position, facing, cursor mode, speed, 330 variables, 50 conversation-state blocks (`STRUCTS.md`) | ScummVM's own save format (`SVMDARKSEED2` header, thumbnail, every object serialised) | **differs** by design; importing an original `.SAV` is possible from the contract, optional |
| Titles and slots | ten slots in `DARKSEED.INI`, titles up to 32 characters | ScummVM save slots and names | **differs** by design |
| Options (`PlayWave`, `PlayMidi`, `SkipTrans`, `AVImode`, `ReadSpeed`, `MidiType`, `DialogOpt`) | seven INI values | ScummVM volumes, subtitles, talk speed, GM/FM mode | **differs** by design; `SkipTrans` has no counterpart |
| Keys | arrows / number pad / I K J L move the pointer; Space cycles the cursor mode; Esc quits; M, D switch sound; P pauses; F1 help; F2, F6, F7, F8 dialogs | F5 opens the ScummVM menu; Esc ends a talk; Space cycles the cursor | **faithful** for Space; the rest **differs** by design |
| Credits (room 999) | scroll `DS2RUN.HDR` two pixels a tick, then quit | not implemented | **differs** (missing): implement when needed |
| Cursors | `cHand`, `cUseIt`, `cLook`, `cLookAt`, `c4Ways`; script `Cursor=` replaces the use cursor | `oCursor` is unimplemented | **differs**: implement `Cursor=` |

## Summary (14 November 2026)

Reusable as they are: resource lookup, the script and room text readers, the sprite data model, the conversation parser and runtime, the music player, the inventory picture set.
Reusable after changes: scaling, sprite animation, speech, inventory box, movies, object actions (`Cursor=`, `SpeechVar=`).
To rewrite from the contracts: walking (step, facing, rate), the mirror, palette cycling, fades, ambient effects, the credits, the original save import.
Chosen by design: saves, options and keys use ScummVM's services.
