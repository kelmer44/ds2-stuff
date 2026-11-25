# Step 2 sheet: options and the first copied file

Goal: first copy from the 2011 engine, and the first credit line for DrMcCoy. Visible result: console command `options`.
Copy: `options.cpp`, `options.h` (about 140 lines). Touch: `darkseed2.h/.cpp`, `console.h/.cpp`, `credits.pl`, `module.mk`.

## Read first
- 2011 `options.cpp`: `Options::syncSettings()` reads ScummVM settings once (`sfx_volume`, `speech_volume`, `music_volume`, the three `*_mute` keys, `mute`, `subtitles`, `talkspeed`) and folds the mutes into the volumes.
- Current `metaengine.cpp`: how options are registered for this engine.

## Copy steps
1. Copy both files. Keep the GPL header and DrMcCoy's copyright line. Replace the old `$URL$`/`$Id$` lines with the current ScummVM header style (copy it from `darkseed2.cpp`).
2. Add `DrMcCoy` (his real name and contact are in the 2011 header) to `credits.pl` for this engine.
3. Add `options.o` to `module.mk`.

## Source tree
Copy from `~/Desktop/source/scummvm-darkseed2-2011` (already converted to the current API); only clean the header and includes.

## Fix (from the original)
Nothing from the contracts. Design choice (comparison, "Saves, options and keys"): the original's seven INI values (`PlayWave`, `PlayMidi`, `SkipTrans`, `AVImode`, `ReadSpeed`, `MidiType`, `DialogOpt`) are mapped to ScummVM settings later:
- `PlayWave`, `PlayMidi`: the SFX/speech/music mutes (done here).
- `ReadSpeed` and `DialogOpt` (text only or speech): subtitle speed and subtitles (done here).
- `MidiType` (gm or fm): step 15. `AVImode` (video size): step 18. `SkipTrans`: step 18.
Leave a short comment in `options.h` listing which are still open; remove it when step 18 is done.

## Wire-up
- Engine member `Options *_options`, created in `run()` before the main loop, deleted in the destructor.
- Console command `options` in `console.cpp` prints the five values; register it next to `test`. Because the console needs the engine, use `g_engine`.
- Call `_options->syncSettings()` when the engine is told settings changed (override `Engine::syncSoundSettings()`).

## Test
1. Launch, open the console, run `options`: volumes 0 to 256, subtitles on or off.
2. Change a volume in the ScummVM options (Ctrl+F5 or the launcher), run `options` again: values follow after `syncSoundSettings`.
3. Mute in the options: the matching volume prints 0.

## What you learn
ScummVM's configuration manager, how an engine registers console commands, how the credit and header rules apply to copied code.

## Pitfalls
- Do not remove the 2011 copyright when you edit the header.
- The `-1` debug level used by the 2011 `debugC` calls is not valid now; use a real channel number or `debug()`.
