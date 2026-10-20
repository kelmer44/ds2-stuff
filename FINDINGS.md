# Dark Seed II in ScummVM — findings

Investigation date: 2026-10-20.

## Summary

Implementing Dark Seed II (Cyberdreams, 1995) in ScummVM is very feasible. An earlier,
fairly advanced engine by DrMcCoy (Sven Hesse) exists. It was never merged and targets a
2011 ScummVM, but it **builds and runs our copy of the game** against a ScummVM snapshot
from that era, with two one-line fixes.

## The earlier attempt

- Repository: <https://github.com/DrMcCoy/OLDscummvm-darkseed2>
- Author: DrMcCoy (402 of 415 commits), plus Matthew Hoops (12) and David Turner (1).
- Active Nov 2009 – Mar 2010, with small updates until Feb 2011. The last commits only fix
  compilation against trunk changes.
- About 14.8k lines of C++ in `engines/darkseed2` (69 files). The repo also has `deglue`
  and `depgf` extraction tools, format notes (`formats/`) and `scummvm-patch.diff`, which
  hooks the engine into ScummVM's `configure`, `base/plugins.cpp` and `engines/engines.mk`.
- Never merged. The ScummVM wiki lists it as an external engine.
- Blog post on the early progress: <https://drmccoy.de/gobsmacked/?p=268> (Dec 2009). It
  described the game as "basically playable". A later video shows walking:
  <https://www.youtube.com/watch?v=hf3yZtccX3g>.
- Detection entries: English, German and French PC versions, the Japanese Sega Saturn
  version and the English Mac version. The Saturn and Mac ports have their own formats
  (`.glu`/`.pgf`, a CPK video decoder, a Saturn conversation box).

### Open issues (from the repo's `TODO`)

- Conversation actions: entry action "destroy", and `CONV0024.TXT` "goto = exit, Greeting".
- Scaling still not completely correct.
- Animation frames that clear or stay on screen; animation drawing order.
- "Strange" sprite feet values, possibly the cause of the remaining drawing-order problems.
- Pathfinding (`pathfinder.cpp` exists, 441 lines).
- Save/load (`saveload.cpp` exists, 263 lines).
- Fortune teller animations glitchy.
- Lock-up when giving something to the fortune teller.
- Lock-up when entering the hall of mirrors.
- All missing script functions.

## Game data (our copy)

Location: `~/Desktop/ags/DARKSEED2` (490 MB).

| Content | Format | ScummVM support |
|---|---|---|
| 75 `*.AVI` cutscenes | 320x240 at 15 fps, Indeo 3.2 / MSVideo1 / MSRLE, 22 kHz PCM | All codecs present in current `image/codecs` and `video/avi_decoder` |
| `SNDTRACK/` (48 files) | Standard MIDI (FM and GM variants) | Standard |
| 108 `GL00_*.000` | "Glue" resource archives, some compressed | Engine has its own reader and decompressor (`resources.cpp`) |
| `GFILE.HDR` | Index of glue files and resources | Engine |
| `DARK0001.EXE` | Executable, dated Apr 1996 | Reverse-engineering reference |

The glue archives contain plain-text scripts and conversations (`CONV*.TXT`,
`OBJ_9999.DAT`, `GAMEVAR.IDX`), BMP images and WAV speech, which makes a reimplementation
much easier. The standalone `deglue` tool extracted `GL00_SYS`, `GL00_TLK` (51 WAVs) and
`GL00__DA` (43 files). It doesn't handle the compressed archives (for example `GL00_TXT`,
`GL00_001`), but the engine does.

### Our version is not in the detection table

```
{"gfile.hdr",    0, "ec3087249e6b61ad974ac25e06d1e3ea", 211318},
{"gl00_txt.000", 0, "c0bed46727fc9e4704fac18c923458d5", 132120},
```

(MD5 of the first 10000 bytes, as the old detector computes it.) The known versions have
`gfile.hdr` sizes of 211230 (English) and 210856 (German/French). The engine's file-based
fallback detection (`gfile.hdr` + `dark0001.exe`) accepts our copy anyway, and it loads
fine. It is probably a later patched English release.

## Test run

Branch: <https://github.com/kelmer44/scummvm/tree/darkseed-2>, local worktree at
`~/Desktop/source/scummvm-darkseed2`.

- Base: ScummVM trunk `936d15673e8` (2011-02-09, right after the `sound/` to `audio/`
  rename), which is the revision the old engine last built against.
- Commit 1: engine imported unchanged, with `scummvm-patch.diff` applied.
- Commit 2: two fixes needed on modern macOS (arm64, Apple clang 21, sdl12-compat 1.2.68):
  1. `backends/graphics/sdl/sdl-graphics.cpp`: `getSupportedFormats()` asserted when
     called before a video mode was set. It now detects the formats on demand.
  2. `engines/darkseed2/darkseed2.cpp`: the engine called `initGraphics()` with no pixel
     format, and the backend picked 32bpp. The engine's image converter only does
     8bpp to 16bpp, so it now asks for RGB565 explicitly.

Build:

```bash
./configure --disable-all-engines --enable-darkseed2 --disable-mt32emu --disable-hq-scalers --disable-scalers --disable-debug --disable-mad --disable-flac --disable-fluidsynth --disable-zlib
make -j10 CXXFLAGS+="-w -std=gnu++98"
```

Run:

```bash
./scummvm -c ../ds2.ini --music-driver=coreaudio --path=$HOME/Desktop/ags/DARKSEED2 darkseed2
```

Result: the engine indexes resources, initialises game variables and the graphics system,
and plays the opening AVIs (MSVideo1). Without `--music-driver` there is no music: the
default build looks for `/dev/sequencer` and falls back to silence. Not yet checked:
the picture visually (no screen capture available in that session), gameplay past the
intro, and which of the known bugs show up.

## Path to a proper engine in current ScummVM

1. Port `engines/darkseed2` to the current tree as a new engine, separate from the existing
   `darkseed` (Dark Seed I) engine:
   - `configure.engine` and `module.mk` instead of patching `configure`/`engines.mk`;
   - current `AdvancedMetaEngine`/`MetaEngineDetection` split;
   - current stream, audio, video (`Video::AVIDecoder`) and savestate APIs.
2. Add detection entries for our version (MD5s above) and check that the parsers handle it.
3. Get video, MIDI and speech working against current APIs.
4. Work through the TODO list (script commands, drawing order, scaling, conversations),
   using the disassembly of `DARK0001.EXE` (Ghidra) where needed.
5. Save/load, and playtest for the lock-ups.

Rough estimate: steps 1–3 take a few days of focused work. The rest depends on how many
script commands are still missing.
