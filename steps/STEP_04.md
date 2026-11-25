# Step 4 sheet: the script text reader

Goal: read the game's `Key=value` text files. Visible result: console command `dat_dump NAME`, and a batch check over all room and object files.
Copy: `datfile.cpp/.h` (about 390 lines). Contracts: `1048:0000`, `1048:0b54`, `1048:03c4`. Reference: `re/SCRIPT_LANGUAGE.md`.
Touch: `datfile.*`, `console.*`, `module.mk`. Needs step 3.

## Read first
1. `re/SCRIPT_LANGUAGE.md`, section "Line syntax".
2. 2011 `DATFile::load()`: reads all lines, drops empty ones, cuts at `;`, trims, splits at the first `=`, stores command and arguments. It also has two data workarounds and one for `Message` lines, see Fix.
3. The argument helpers `argCount`, `argGet`, `argGetInts`, `mergeArgs`.

## Copy
Whole `DATFile` with its helpers. `Resource` forward declaration can go if unused.

## Source tree
Copy from `~/Desktop/source/scummvm-darkseed2-2011`; it is already converted to the current API. Only the include style and header need your usual cleanup.

## Fix (from the original)
1. **Unknown keys are not an error.** The original ignores keys it does not know (code 0). Keep `DATFile` neutral (it returns every key) and make the callers ignore unknown ones, or return a flag. Callers are written in steps 9 and 10; for now `dat_dump` just prints everything.
2. **Case.** Keys are case-insensitive. Provide one helper that upper-cases a key, or keep `equalsIgnoreCase` at the call sites.
3. **Lines without `=`.** The original ignores them. 2011 does too, except for the `*message*` workaround. Check that workaround against `CONV0008.TXT`; conversation files use a different lexer (contract `1068:1692`: key ends at the first character that is not a letter, digit or underscore, so `message foo` still works). Keep the workaround, but add a comment that it follows the conversation lexer, and plan to move it into the conversation reader in step 16.
4. **Leading dot.** The `CONV0032.TXT` workaround turns a leading `.` into a space. Check the file: if the original lexer's rule explains it (a key ends at the first non-word character), the workaround belongs in the conversation reader as well. Leave it for now, add the same comment.
5. **Value cleaning.** For room and object files the value is the text after `=` with only the trimming above. For conversation files the original removes every character that is not above a space and below `{` (so `goto = (GothMission) Brought` becomes `(GothMission)Brought`, and `0, Mike` stays `0,Mike` for `SPEAKER`). That is conversation-only: do not add it to `DATFile`; step 16 needs it.
6. **The `OBJ_0307` workaround** (`Chnage=!ShowMike`) is not in `datfile.cpp`; it is in the script parser (step 9). Do not add it. Note it on your step 9 list.

## Wire-up
- Console `dat_dump NAME`: load the resource, parse it, print `line: KEY = value` for each line.
- Console `dat_check`: loop over the 167 room and object files (names `OBJ_nnnn.DAT`, `ROOMnnnn.DAT`; list them from `res_list`) and print the totals: files read and lines parsed; there must be no crash and no error.

## Test
1. `dat_dump ROOM0101.DAT`: sections appear in order `BackDrop`, `ScaleFactor`, `WalkMap`, then `SpriteStart ... SpriteEnd`, `MusicStart`, `EntryStart` and so on (compare with `SCRIPT_LANGUAGE.md`).
2. `dat_dump OBJ_0101.DAT`: `NoObjects`, then `ObjDesc`, `ObjXY`, `GoStart`, `LookStart`, `UseStart` blocks.
3. `dat_check` over all 167 files: totals match the key counts in `SCRIPT_LANGUAGE.md` roughly (for example `Cond=` about 4,655 in object files).
4. `argGetInts("160 120 320 240", 4)` style calls on an `Anim=` line give four integers (try through `dat_dump` with a debug option, or a one-off print you remove).

## What you learn
The text script language, how little code the data-driven design needs, ScummVM string and stream helpers.

## Pitfalls
- The `;` cut applies to the whole line; a `;` inside a value starts a comment too (the original behaves the same).
- Do not build semantic checks into the reader: it returns text only.
