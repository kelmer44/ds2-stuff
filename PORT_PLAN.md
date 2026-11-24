# Port plan: building the engine from the good parts of the 2011 engine

Created 14 November 2026. For Gabriel. This plan is a reading and copying guide, not code. It follows the verdicts in
[re/COMPARISON_2011.md](re/COMPARISON_2011.md) and the contracts in `re/contracts/`.

## What this plan is for

You will copy the parts of DrMcCoy's 2011 engine (`ds2-stuff/scummvm-2011-darkseed2/engines/darkseed2`) into the
current tree (`scummvm-darkseed2/engines/darkseed2`) one piece at a time, fixing each piece where the original
disagrees with it. You type and adapt the code yourself, so you learn how it works. You say in the PR that the engine
is based on the 2011 engine, and the PR also discloses the AI-assisted reverse engineering notes.

Each step below is one commit (sometimes two). Each step gives:

- **Copy**: the 2011 files and classes to take.
- **Leave out**: what to skip (other game versions, unfinished parts).
- **Fix**: where the original differs (from the comparison and the contracts).
- **Adapt**: API changes between 2011 and now.
- **Test**: a console command or a thing on screen that proves the step works.
- **Learn**: what the step teaches you about the engine.

## Ground rules

1. **Credit.** Keep DrMcCoy's copyright and the GPL header in every copied file (the 2011 files are GPL v2 or later; the
   repository is GPL v3 or later, which is compatible). Update the header to the current ScummVM style, and add him to
   `engines/darkseed2/credits.pl` in the first copy commit. Never remove his name from a file you took code from.
2. **Windows first, all languages.** The target is the Windows version of the game in every language ScummVM can detect. Our reverse
   engineering is of the Spanish `DARK0001.EXE`; other languages' executables are not read yet, so any fact that comes from the
   executable (strings, layout constants) is checked against the Spanish build only. Keep language-dependent things (detection
   entries, text, speech, subtitles, the font and character set) in data or in small tables, not scattered through the code.
   Do not copy the Saturn and Mac code (`cpk_decoder`, `conversationboxsaturn`, the `kGameVersionSaturn` branches, the other archive
   types). Keep the Windows branches of `VersionFormats` for now, because they also carry the per-language choices (step 2).
3. **Copy only what matches.** If the comparison says `faithful`, copy as is. `faithful with changes`: copy, then apply the
   listed changes in the same commit or the next one. `differs`: do not copy that part; write it from the contract (the
   contract is the specification, the old code is a hint).
4. **Namespace and layout.** Keep namespace `DarkSeed2` and include paths of the form `"darkseed2/xxx.h"` as in the
   current skeleton. Follow ScummVM formatting (tabs, naming, short comments). No addresses or RE notes in source comments.
5. **Tests live outside the engine.** No test hooks in the engine. A console command that shows engine state is fine and
   is the normal way to test in ScummVM (`debugger`, `registerCmd`); keep them small.
6. **Commits.** Small, one subject each, written by you. Mention in the PR that the engine descends from the 2011 engine.
7. **If a step is too big, split it.** Prefer a smaller step that you understand over a large one that you pasted.

## Decisions to take early

- **D1, screen format.** See the explanation below (section "8-bit or 16-bit"). Recommended: keep the 2011 16-bit design and decide again at step 20.
- **D2, original saves.** Saves use ScummVM's format (as in 2011). Reading the original `DS2SGnn.SAV` is an optional
  last step (step 23) because the format is now known and verified.
- **D3, options.** The original `DARKSEED.INI` options map to ScummVM settings (comparison, "Saves, options and keys").

## 8-bit or 16-bit (decision D1)

**What the original does.** It composes the scene in an 8-bit bitmap (WinG), with the room picture's 256-colour palette as the
Windows palette. It takes over the whole system palette (`SetSystemPaletteUse`, no static colours) and changes colours with
`AnimatePalette`, which alters what is on screen at once without touching a pixel. Everything visual that is not a picture is
a palette trick: the fade to black (256 passes lowering every colour by one), the pause dimming (halve all colours, keep a copy),
and colour cycling (rotate a range of entries each tick). The first 100 colours and two more are the same in every room (`fix.pal`),
so the player, the cursors and the interface look the same everywhere; the room picture provides the rest. Entries 0 and 255 are
black and white (text outlines use them). The one pixel-level effect is the dimmed strip behind the inventory and conversation bars:
a table that maps each colour to the nearest colour of the same palette.

**Why the original does it that way.** It is a 1996 Windows 3.1 game on 256-colour screens: 8-bit pictures are what the files hold,
one byte per pixel is the fastest to copy, and palette animation is free. The program even warns when the screen is not 640 by 480
at 256 colours.

**What the 2011 engine does.** Every picture keeps its 8-bit data and its palette, and is also converted to 16-bit colour (`ImageConverter`).
The screen is RGB565. There is one "game palette" taken from the room's background picture, used for pictures without a palette of their own.
This is DrMcCoy's design; the code does not say why, but it makes sense for an engine that also had to handle the Saturn and Mac
versions (other picture formats) and videos and cursors with their own palettes, since true colour avoids palette clashes.

**Consequences of keeping 16-bit.**
- Static pictures look identical: index and palette give the same RGB.
- Fade and pause dimming are easy and cosmetic (darken the screen each frame); their speed in the original depended on the machine, so any reasonable duration is faithful enough.
- Colour cycling is the one real cost: the pixels already converted to 16-bit do not change when the palette changes. You must re-convert and redraw whatever uses the cycled indices each tick. The 2011 `Sprite` keeps the 8-bit data, so this is possible. In the original, sprites that use cycled indices cycle too. In our data only one room has a palette section, so the visible risk is small.
- The dimmed backdrop would be a blend in true colour instead of the nearest-colour remap: a slightly different look (smoother). You can build the original table (`1008:0f86`) from the 8-bit data if you want it exact.
- The fixed palette rule (first 100 colours and two more from `fix.pal`) must be applied when the standard palette is made, or sprites will get the room's colours instead.
- Scaling must still resample the 8-bit indices with nearest-pixel stepping (as `10c0:0000` does) and convert afterwards; scaling converted 16-bit pixels with blending would not match.
- Speed and memory do not matter on today's machines.

**Consequences of switching to 8-bit.** The ScummVM palette manager can do the same as `AnimatePalette`, so fades, pause and cycling become exact and trivial,
and the dimmed backdrop is the original remap. The cost is that you rewrite the copied graphics layer: drop `ImageConverter` and the true-colour surfaces,
make every drawer work on palette indices, and give videos and cursors their palettes explicitly. That is less literal copying of the 2011 code, but less code overall.

**Recommendation.** Keep 16-bit now, because your plan is to build on the 2011 engine and nothing before step 20 depends on the choice. At step 20, if
cycling or the exact dim table matter to you, make the background and sprites redraw from their 8-bit data when the palette changes.
Switching to 8-bit later would cost more than deciding it now, so say so before step 6 if you want it.

## Order of work, and why

The 2011 engine's modules depend on each other like this (checked from the `#include`s):

```
resources -> (datfile, palette/imageconverter) -> sprite -> graphics -> cursors
variables -> script -> objects -> roomconfig -> room -> mike/pathfinder -> events/inter
sound/music/options -> talk(font) -> conversation(+box) -> inventory(+box) -> movie
saveable/saveload are used by almost everything and are added step by step.
```

The steps follow this order, so every commit compiles and runs, and from step 5 on the screen shows something.

---

## Step 1: baseline, 640 by 480 window (no copy)

- **Do**: remove the sample drawing loop from `darkseed2.cpp`; set up a 640 by 480 graphics mode (the 2011 `DarkSeed2Engine::initGraphics()` shows how, with the RGB565 format of D1); keep the event loop and `Console`.
- **Fix/Adapt**: use the current `initGraphics(640, 480, &format)` of `engines/util.h`.
- **Test**: launch the game from the launcher: a black 640 by 480 window; `~` opens the console; `test` prints.
- **Learn**: `Engine::run`, detection (`detection_tables.h`), the event loop and the frame limiter.

## Step 2: engine skeleton constants (copy: `options.cpp`, a small part of `darkseed2.cpp`)

- **Copy**: `Options` (it reads ScummVM volume, mute and subtitle settings); the `DarkSeed2Engine` members for the language and the random source.
- **Leave out**: the Saturn and Mac parts of `VersionFormats`. Keep its Windows part (and the language handling) as the one place for per-version and per-language choices, and trim it later when you know which values are really needed.
- **Test**: console `options` prints the volumes and subtitle settings.
- **Learn**: ScummVM's configuration manager (`ConfMan`), engine option registration in `metaengine.cpp`.

## Step 3: resource archives (copy: `resources.cpp`/`.h`, `GlueArchive`)

- **Copy**: `GlueArchive` (index, `uncompressGlueChunk`, `uncompressGlue`) and the `Resources` front class with its name lookup.
- **Leave out**: `PGFArchive`, `TNDArchive`, `SaturnGlueArchive` and the Mac archives.
- **Fix** (comparison, "Resource layer"): prefer reading `GFILE.HDR` (9291 entries of 22 bytes, `STRUCTS.md`) and keep the glue directories as a check; drop the 10 MB assert; replace `isCompressed()`'s heuristic by the `That` trailer test or by the header's own information; contract `10b8:0368` is the exact decompressor.
- **Adapt**: `Common::Archive`, `Common::SearchSet`, `createReadStreamForMember`, `Common::File::exists` (the 2011 `SearchMan` calls changed names).
- **Test**: console `res_list` (glue file count and entry count: 108 and 9291), `res_info NAME` (size and glue file), `res_dump NAME` (hex dump of the first bytes), `res_extract NAME` (write to a file). Compare a few sizes with `re/export/` data.
- **Learn**: how the game packs data (glue files, the LZ scheme), the ScummVM archive API.

## Step 4: script text reader (copy: `datfile.cpp`/`.h`)

- **Copy**: `DATFile` (`nextLine`, `argGet`).
- **Fix** (comparison, "Script text format"): the line is cut at the first `;`, trailing spaces dropped, key upper-cased; unknown keys must be ignored, not fatal; no `OBJ_0307` workaround.
- **Test**: console `dat_dump NAME` prints every key and value of a room or object file (try `OBJ_0101`, `ROOM0101`). Run it on all 167 files: it must report no error.
- **Learn**: the text script language (`re/SCRIPT_LANGUAGE.md`), how data files drive the game.

## Step 5: variables and conditions (copy: `variables.cpp`/`.h`, minimal `saveable`)

- **Copy**: `Variables` (load `GameVar.IDX`, get/set, `evalCondition`, `evalChange`, random re-roll). Take `Saveable` as an empty interface for now.
- **Fix** (comparison, "Game variables and conditions"): the whole condition prefix table (`NAME` is `== 1`, `*` is `== 2`, `+` is `>= 1`, `@` is `<= 2`, `-` is `<= 1`, `^` is `>= 2`, `/` toggles, `=NAME,n`), an empty list is false, 10 terms at most, unknown names go to the dummy variable, 16-bit signed values. The contracts are `1060:092e` and `1060:0b00` and the others in `1060_*`.
- **Test**: console `var_list [prefix]`, `var_get NAME`, `var_set NAME value`, `var_eval "COND"` (for example `var_eval "ShowMike"`). Check the table in `re/SCRIPT_LANGUAGE.md` against the output.
- **Learn**: the game's condition language, the sorted variable table.

## Step 6: palette and pictures (copy: `palette.cpp`, `imageconverter.cpp`, the loading half of `sprite.cpp`)

- **Copy**: `Palette`, `ImageConverter`, and from `Sprite` only the picture loading: `loadFromBMP`, `readBMPDataComp0`, `readBMPDataComp2`, `loadFromPALRGBA`, `createTransparencyMap`.
- **Fix** (comparison, "Pictures and palettes"): the header words at 0x26 and 0x28 are the anchor offsets, signed, not `abs()` clamped to the size (contract `1078:18d8` and `STRUCTS.md`); transparent index is 0; the fixed palette rule of contract `1028:00b6` (first 100 colours and two more come from `fix.pal`).
- **Leave out**: scaling, animation, blit variants you do not need yet.
- **Test**: console `img_show NAME [x y]` loads a picture from the glue files and draws it with its palette (try `RM0101` as a backdrop, then a sprite name): you see the room backdrop. `img_info NAME` prints width, height, compression and anchor offsets.
- **Learn**: the picture format (BMP with run-length rows), how a 256-colour palette becomes screen colours.

## Step 7: the scene compositor (copy: `graphics.cpp`/`.h`, `sortedlist.h`, the draw half of `sprite.cpp`)

- **Copy**: `Graphics` (screen, redraw requests, sprite lists), `SortedList`, `Sprite::blit`.
- **Leave out**: references to the conversation box, inventory box, movie and room until their steps (stub them or comment them out and restore them later).
- **Fix** (comparison, "The scene compositor"): sort by the anchor y, not the clamped feet; two lists with list 1 on top (`Status=` fourth number); clip rectangle of the play area.
- **Test**: console `scene_add NAME x y` places sprites; `scene_list`; sprites with a larger y appear in front. Move the mouse to see redraw work.
- **Learn**: dirty rectangles and layer order (contract `1078:*`).

## Step 8: cursors (copy: `cursors.cpp`/`.h`)

- **Copy**: `Cursors` (loading the cursor pictures `cHand`, `cUseIt`, `cLook`, `cLookAt`, `c4Ways`, the cursor modes and `cycleCursorMode`).
- **Fix**: add the original's hover flags later (step 10), keep the three verb modes (go, use, look).
- **Test**: the mouse pointer is the game cursor; Space cycles the three modes; console `cursor NAME`.
- **Learn**: `CursorMan`, how the game picks a verb.

## Step 9: object files (copy: `script.cpp`/`.h`, `objects.cpp`/`.h`)

- **Copy**: `Script`, `ScriptChunk`, the action list, `ObjectContainer`, `Object` (hot-spot rectangle, go/look/use chunks, conditions).
- **Fix**: `Cond2=` as an alternative list; `SpeechVar=` is one number (contract `1048:042c`); `WaitUntil=` starts a new record; the record layout in `STRUCTS.md` (object node).
- **Test**: console `obj_load NUMBER` (for example `101`) lists the objects with their rectangles; `obj_hit x y` prints the verbs the object under that point offers (the hover flags of contract `1050:0062`: go 1, use 2, look 4).
- **Learn**: how interaction is data, the verb model.

## Step 10: room files and the first room on screen (copy: `roomconfig.cpp`/`.h`, `room.cpp`/`.h`)

- **Copy**: `Room`, `RoomConfigManager`, `RoomConfigSprite`, `RoomConfigMusic`, `RoomConfigPalette` (parse only).
- **Leave out**: audio playback hooks (steps 13 and 14), mirror drawing.
- **Fix** (comparison, "Room files" and "Animation, mirror and palette entries"): default frame sequence 1 to count; `Status=` six numbers; `LoopPoint=`; `StartIndex`/`EndIndex`; the three `ScaleFactor=` numbers (only two are used); the walk map options (`WalkMap=` numbers); local variables reset when the room is left; the contract `1048:114a` is the sprite parser.
- **Test**: console `room 101` loads room 101: the backdrop appears with its animated sprites running (idle animations, `Status=` timing: contract `1038:1ade`). Visible milestone: **the first room is on screen**. `room_info` prints scale factors, sprite count and music entries.
- **Learn**: room files, sprite animation timing, local variables.

## Step 11: scaling and the player (copy: scaling part of `sprite.cpp`, `mike.cpp`/`.h`, `pathfinder.cpp`/`.h`)

- **Copy**: `Mike` (animations by facing), `Pathfinder`, the scaling code.
- **Fix** (comparison, "Walking, facing and step length", "Sprite scaling", "Walk map and path finder"): scale `(y - far) * K / range` with K 128 for objects and 134 for the player, clamp 10 to 180 over 128, minimum size 5 by 5, placement offsets truncated; facing rule (`|dx| > 5 |dy|` horizontal, else vertical or diagonal when `2 |dy| < 5 |dx|`); step length `|y - far| * 14 / range` clamped 6 to 14 along the true angle using the sine and arctangent tables of `STRUCTS.md`; step rate from the options (default 12 per second); the walk grid of 80 by 48 cells with an 8-cell border, path of corner cells only.
- **Test**: console `walk x y` makes the player walk (draw it with `ShowMike` set: `var_set ShowMike 1`); click to walk once step 12 exists. `path x y` prints the corner cells. Compare scale at a few y values with the contract.
- **Learn**: perspective scaling, walk maps, the path search (contracts `1040_*`, `1010:07c6`).

## Step 12: events, interpreter, clicks (copy: `events.cpp`/`.h`, `inter.cpp`/`.h`)

- **Copy**: `Events` (main loop, mouse and cursor handling), `ScriptInterpreter` (the `oXxx` functions).
- **Leave out**: movie, conversation and inventory calls until their steps; the F5 menu hook can stay.
- **Fix**: implement `oCursor` (`Cursor=` replaces the use cursor, contract `1058:01e0`); verb selection by cursor mode, Space and right click cycle the mode; pointer keys (arrows, number pad, I K J L); click on floor walks (contract `1058:0b08`); the click continuation after arriving (`WINPROC` message 0x400).
- **Test**: click objects in room 101: look, use and go run their scripts (variables change: watch with `var_list`); the player walks to a hot spot, then acts.
- **Learn**: the event loop, how a click becomes an action, `WaitUntil`.

## Step 13: text and fonts (copy: `font.cpp`/`.h`, `graphicalobject.cpp`/`.h`, text lines of `talk.cpp`)

- **Copy**: `Font` (the game's font pictures), `FontManager`, `TextLine`, `GraphicalObject`.
- **Leave out**: Saturn and Mac font variants.
- **Test**: `look` at an object: its subtitle text appears at the subtitle position with the black outline and white text (contract `1058:0000`); console `say "text"`.
- **Learn**: how the game draws text, word wrapping.

## Step 14: sound and speech (copy: `sound.cpp`/`.h`, `talk.cpp`/`.h`)

- **Copy**: `Sound` (WAV from the glue files), `TalkManager`.
- **Fix** (comparison, "Audio"): speech queue of up to 20 lines; the tracking variable goes to 1 while a line plays and 2 when done; subtitles stay at least one second after the speech; effects named `SE...` are cached; in rooms above 600 a random `SE%03d` plays every 12 to 14 seconds (contract `1038:086e`); speech and text options.
- **Test**: console `play_sound NAME`, `say_speech NAME` (sound with its subtitle); in room 101 an object's speech plays with the text.
- **Learn**: ScummVM mixer, speech and subtitle sync.

## Step 15: music (copy: `music.cpp`/`.h`)

- **Copy**: `Music`, `MidiPlayer` (this part matches the original).
- **Fix**: none known; keep the file naming (`sndtrack/` + name + `gm` or `fm` + `.mid`), no restart for the same name, loop.
- **Test**: console `play_music MM001`, `midi_mode gm|fm`; entering a room starts its music entry.
- **Learn**: MIDI playback in ScummVM.

## Step 16: conversations (copy: `conversation.cpp`/`.h`, `conversationbox.cpp`/`.h`, `conversationboxwindows.cpp`)

- **Copy**: `Conversation` (parser and runtime), `ConversationBox`, the Windows box.
- **Leave out**: `conversationboxsaturn`.
- **Fix** (comparison, "Conversations"): the conversation layout (`STRUCTS.md`: node, entry, message; goto list at +4), `INITIAL` and `PERSIST`, the choice sequence (contract `1068:11da`), the box as a 640 by 70 strip with the list 480 by 50 at (80, 10) and scrolling by arrows, replies spoken through the speech queue, saved state per conversation.
- **Test**: console `talk NUMBER` opens a conversation (for example `talk 24`); choose lines with the mouse; `conv_state` prints entry flags.
- **Learn**: the dialog tree model, the most self-contained subsystem.

## Step 17: inventory (copy: `inventory.cpp`/`.h`, `inventorybox.cpp`/`.h`)

- **Copy**: `Inventory`, `InventoryBox` (Windows box properties only).
- **Fix** (comparison, "Inventory bar"): 10 visible items from x = 70, 50 apart; arrows with hit areas over the whole 80-pixel ends; the "Have" variables (contract `1008:0e16`, `0ece`); use and look lists per cursor mode.
- **Test**: move the mouse to the bottom edge: the bar opens; `inv_add NAME` (sets the item's variable) adds an item; click to pick and use.
- **Learn**: how items are variables and objects.

## Step 18: movies (copy: `movie.cpp`/`.h`)

- **Copy**: `Movie` with `Video::AviDecoder` (the AVI files of the game).
- **Leave out**: the CPK/QuickTime paths.
- **Fix** (comparison, "Animation, mirror and palette entries"): entry videos by name (`T...` transitions full screen, `cut...` and `abh...` cut-scenes), the three sizes (320 by 240 at the top left, centred, doubled), the skip options.
- **Test**: console `play_movie NAME` plays a video; entering a room with an entry video plays it.
- **Learn**: ScummVM's video decoders.

## Step 19: room changes and the entry section (touch: `roomconfig.cpp`, `room.cpp`, `events.cpp`)

- **Do**: first matching entry (`From=` room or 0, condition true), starting position, facing, variable changes; `GoingOut` and `SysReadyExit`; `FromRoom`; unloading the previous room.
- **Test**: walk to an exit and cross into the next room; console `room N` and `from N` for jumps.
- **Learn**: contracts `1048:2a50`, `1048:24ee`, `1048:2b8e`, `1058:0be2`.

## Step 20: what the 2011 engine never had

Do these one at a time, each from its contract (the old code is no help here):

1. **Mirror** (contract `1048:156a`, `1038:01e4`): the player's reflection. Test: room with a mirror; console `mirror_info`.
2. **Palette cycling** (`1048:17ea`, `1080:01de`) and **fades** (`1080:02f0`), **pause** (P key, `1080:038a`/`041a`). This is where D1 matters. Test: a room with cycling colours; fade on room change.
3. **Credits** (room 999, `1038:0000`, `086e`): the scroll of `DS2RUN.HDR`. Test: console `room 999`.
4. **Ambient effects** if not done in step 14.

## Step 21: saves in ScummVM format (copy: `saveable.cpp`, `saveload.cpp`)

- **Copy**: `Saveable`, `SaveLoad` and add `saveLoad` methods to each class as the 2011 engine did.
- **Fix**: nothing to fix; it is by design. Make sure the state matches what the original saves: room, position, facing, cursor mode, game speed, all variables, conversation states.
- **Test**: save and load from the ScummVM menu in several rooms; compare variables with `var_list` before and after.
- **Learn**: ScummVM's `Serializer` and save-state descriptors.

## Step 22: original save import (optional, new code)

- **Do**: console `import_sav FILE`: unscramble (key `0x4E16A83F`, `key += key >> 7` per dword), check the `0xFADA` markers, read the words (`STRUCTS.md`, "Save file").
- **Test**: import `DS2/C/DARKSEED/DS2SG00.SAV`: it should put the player in room 101 at (330, 310) facing 7 with the original variables.
- **Learn**: how the original keeps its state, and a check of the whole variable model.

## Step 23: polish and review

Detection entry, launcher options, a pass over every console command (keep only the useful ones), the AI-guidelines checklist, formatting, a final read of every copied file against the comparison, and the PR text (yours).

---

## Suggested rhythm for each step

1. Read the 2011 file(s) and the contract or comparison section named above (about an hour).
2. Copy, then make it compile (names and types will not match; the list of "Adapt" notes is a starting point).
3. Apply the "Fix" list one item at a time, running the console test after each.
4. Read the result once more, trim comments, commit with your own message.

If you want, I can write a short **step sheet** before you start a step: the exact functions to read, a table of the old API calls that changed, and the expected output of the test commands taken from the game data. Say which step. I will not write the engine code for the branch you submit.
