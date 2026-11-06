# Dark Seed II: master plan

Created 6 November 2026. Owner: Gabriel. Claude does analysis and reverse engineering; Gabriel
rewrites everything he keeps. This plan covers the analysis and what we build on the way.
It does not cover submission.

## Ground rules (from the ScummVM repo's AI-GUIDELINES.md)

- Anything Claude writes is a **reference implementation** and is never submitted. Gabriel rewrites the
  engine himself on a separate branch, as if the reference were the original source.
- Claude is never author or co-author. No `Co-Authored-By` lines, and Claude does not write commit
  or PR messages for the submitted branch. The final PR discloses the AI assistance.
- No AI-generated art or media assets.
- Formatting, naming and comment conventions of ScummVM apply to the reference code too.
  Comments are short. Executable addresses and RE provenance stay in the notes, not in source comments.
- GPL: DrMcCoy's 2011 code is GPLv2-or-later. Check that reuse is compatible with the repo's
  licensing and keep his credit where code is carried over. Gabriel decides what is carried over.

## What we have

| Item | Where | Notes |
|---|---|---|
| Game data (490 MB) | `~/Desktop/ags/DARKSEED2` | 108 `GL00_*.000` glue archives, `GFILE.HDR`, `DS2RUN.HDR`, 75 AVIs, `SNDTRACK/` MIDI, `DARK0001.EXE` |
| Executable | `DARK0001.EXE` (184,272 bytes, Apr 1996) | **16-bit NE (Windows 3.x)**, not PE32. Imports MMSYSTEM and drives MCIAVI / MCISEQ for video and music. |
| 2011 engine | `ds2-stuff/scummvm-2011-darkseed2/engines/darkseed2` | ~20.2k lines, 69 files by DrMcCoy. Builds and runs our copy against 2011 ScummVM. Detection entries: EN, DE, FR PC, Saturn, Mac. |
| 2011 findings | `ds2-stuff/FINDINGS.md` | Known bugs list, game-data table, build recipe. |
| Format notes and tools | upstream repo `OLDscummvm-darkseed2` (`formats/`, `deglue`, `depgf`) | Not yet fetched into ds2-stuff. |
| Partial port | `scummvm-darkseed2/engines/darkseed2/` (untracked) | Only `font`, `graphics`, `versionformats` (1.2k lines) plus stale `.o` files and `libdarkseed2.a`. Several sources are gone, so the `.o` files are leftovers to delete. |
| Reference environment | `ds2-stuff/DS2/` | Windows 3.x/95 tree under `C/`, `dosbox.conf`, `dosbox-mac.conf`, `DS2.iso`, a save `DS2SG00.SAV`. DOSBox-X and Wine are installed. |
| Method | `tesoro/` (`re/README.md`, `AGENTS.md`, `skills/tesoro-re`) | Ledger, contracts, STRUCTS, SUBSYSTEMS, emulator comparison. |
| Ghidra | `ghidraRun` installed; no DS2 project yet; the MCP bridge on :8089 is currently down | The Tesoro helper scripts target PE32 and will need NE/segment awareness. |

## What is different from Tesoro

1. **16-bit NE executable.** Addresses are `segment:offset`. Far calls, segment thunks, overlays and
   Windows API ordinals replace flat PE addressing. Ghidra imports NE, but decompiler output needs more
   hand-fixing (far pointers, `huge` arithmetic, `__ftol` equivalents, stack-passed pascal calls).
   The ledger key becomes `seg:off`. The Tesoro emulator harness (Unicorn) needs a 16-bit
   protected-mode setup; alternatives are DOSBox-X's debugger or Wine's `winedbg`/ntvdm limits.
2. **Data-driven game.** The glue archives hold plain-text scripts (`CONV*.TXT`, `OBJ_9999.DAT`,
   room configs, `GAMEVAR.IDX`), BMP images and WAV speech. The EXE is an interpreter plus services.
   Far less per-room logic hides in code than in Tesoro, so the function count is the interpreter,
   renderer, UI, pathfinder, talk system and resource layer, not the story.
3. **A usable 2011 baseline exists.** It is mostly right on formats. We treat it as a hypothesis
   source and check each claim against the EXE, as we did with the Tesoro prototype.
4. **Our game version is not in the 2011 detection table** (`gfile.hdr` 211318 bytes). The 1996 EXE
   is probably a later patch. EXE-derived facts apply to this build only; other versions
   (German, French, Saturn, Mac) are out of scope until the English build is done.

## Strategy

Follow the Tesoro rule: **fresh function-by-function analysis first; the 2011 code is read only after a
cluster has its own result, to compare.** Disagreements are findings to resolve with evidence.
The reference engine is then assembled cluster by cluster, taking the 2011 code as the starting
point where it matches the EXE and replacing it where it does not.

Status ladder per function, as in Tesoro: `untouched`, `decompiled`, `understood` (contract written),
`ported`, `emu-compared`, `original-compared`. Python tools run from a `re/.venv`.

## Phases

### Phase 0: Workspace and tooling (est. 1 to 2 sessions)

1. Layout in `ds2-stuff`: `AGENTS.md`, `re/{README,STRUCTS,SUBSYSTEMS,CHECKLIST}.md`, `re/ledger.json`,
   `re/contracts/`, `re/tools/`, `skills/ds2-re/`. Copy the Tesoro conventions and drop what is PE-specific.
2. Ghidra: import `DARK0001.EXE` as NE, record its SHA-256, list segments, imports (30 module refs),
   entry point and resources. Get the MCP bridge on :8089 working. Export decompiled `.c`, `.asm`,
   `.xrefs` for every function.
3. Build the ledger: one row per function with segment, size, callers, callees, depth, cluster.
4. Reference environment: verify DOSBox-X plus the Windows tree plays the game to a known point,
   mount `DS2.iso`, and record captures. Check Wine as a secondary option.
5. Fetch `OLDscummvm-darkseed2` format notes and `deglue`/`depgf` into `ds2-stuff/old-tools/`
   (reference only). Build a small `inspect_ds2.py` that lists every glue entry (names, sizes,
   compression) from `GFILE.HDR`, so the corpus is catalogued independently of the 2011 reader.
6. Clean up `scummvm-darkseed2/engines/darkseed2`: remove stale `.o`/`.a`, decide whether the three
   source files stay as a starting point or the directory is rebuilt from the plan. Ask Gabriel first.

Exit: ledger exists, every function exported, reference game runs and can be captured.

### Phase 1: Resource layer and formats

Cluster: `GFILE.HDR` index, glue archive open, the decompressor, `DS2RUN.HDR`, INI and save files.
Questions to settle from the EXE: header layout, hash or name lookup, compression scheme(s) used by
`GL00_TXT`/`GL00_001`, how the 211318-byte header differs from the 2011 versions, and the
`DS2SG00.SAV` layout (also the target of the save format work in Phase 7).
Then catalogue the corpus: text scripts, `OBJ_9999.DAT`, `GAMEVAR.IDX`, BMP and WAV, room configs.

Exit: independent reader reproduces every entry byte for byte against `deglue` and the 2011 reader;
format contracts written.

### Phase 2: Graphics, palette, fonts

Surface and palette model (the 2011 engine converts 8bpp to RGB565; check what the original actually
uses and how palette changes, fades and `PaletteChange` behave), BMP draw paths and masks, sprite
anchors and the "strange foot values", scaling (known incomplete), draw order, text/font rendering,
cursors. This phase attacks the two open rendering bugs from `FINDINGS.md`.

Exit: a scene renders from original data with ordering and scaling matching captures.

### Phase 3: Script and variable interpreter

The `ScriptAction` set (XYRoom, Cursor, Change, Text, Midi, Anim, From, PaletteChange, ChangeAt, Dialog,
Picture, Speech, SpeechVar, WaitUntil, Effect), `Cond` handling, the `Chnage` misspelling in game data
(decide accept, ignore or error from the EXE), `GAMEVAR.IDX` variables, script registry and positions
(needed for saves). The 2011 code lists "all missing script functions" as open, so enumerate
every command the corpus uses and every command the EXE handles, and diff the two sets.

Exit: command matrix (corpus vs EXE vs 2011 engine); each command has a contract.

### Phase 4: Room, objects, interaction, inventory

Room configs, object lists, hotspots, verbs and cursors, inventory and inventory box, the `inter`
layer. Pathfinding and Mike's walking (the 2011 `pathfinder.cpp` is 441 lines and listed as open):
connectivity, destination projection, scale along the path, direction changes, interrupted walks.

Exit: Mike walks, interacts and uses the inventory in the first rooms the same as the original.

### Phase 5: Talk system and conversations

Conversation scripts, conversation box (Windows layout; Saturn one is out of scope), speech timing,
lip sync or talking animation, subtitles. Open 2011 bugs: entry action `destroy`, `goto = exit,
Greeting` in `CONV0024.TXT`.

Exit: representative conversations, including re-entry and consumption, match the original.

### Phase 6: Movies and music

AVI cutscenes (Indeo 3.2, MSVideo1, MSRLE) through ScummVM's decoders, scene hooks and skip rules.
Music: MIDI in FM and GM variants, selection logic, loop points. The EXE drives MCI, so recover
exactly when and how it starts, stops and waits for completion.

Exit: opening, in-game cutscenes and music cues behave as in the original.

### Phase 7: Saves, options and the known lock-ups

ScummVM-native versioned saves built from the recovered state (script positions, variables, inventory,
room, Mike, conversations), plus optional import of `DS2SG00.SAV` once its layout is understood.
Resolve the known lock-ups (giving something to the fortune teller, hall of mirrors) and the
fortune teller animation glitches, with the reason found in the EXE.

### Phase 8: Completion and review

Play through every area against the original, close the command matrix, then do a final audit pass.
Gabriel's rewrite on the submission branch happens alongside the later phases, cluster by cluster,
and is reviewed against the contracts, not the reference code.

## Order of work inside a phase

1. Read the cluster's ledger rows and callee contracts.
2. Work bottom-up (leaf functions first), fixing signatures in Ghidra only with evidence.
3. Write the contract before any C++. Unknown stays unknown.
4. Compare with the 2011 engine afterwards and record agreements and disagreements.
5. Port into the reference tree, validate with an external harness, update ledger and SUBSYSTEMS.

## Risks

- **16-bit decompilation quality.** Mitigation: assembly alongside every decompile, and emulator
  checks on pure routines where a harness is feasible.
- **No headless 16-bit emulator tooling in place.** Mitigation: evaluate Unicorn in 16-bit protected
  mode, DOSBox-X debugger and Wine early in Phase 0 and pick one.
- **Version mismatch.** Our EXE and header differ from every version the 2011 code knew.
  Mitigation: all conclusions are tied to our SHA-256s.
- **Scope of the 2011 code** (20k lines) may tempt wholesale reuse. Mitigation: it is hypothesis
  only until a cluster passes comparison.

## Phase 0 status (6 November 2026)

Done: `re/` skeleton and `AGENTS.md`; `DARK0001.EXE` imported as NE into `analysis/ghidra-project`;
356 functions (321 at first import, 35 more after the baseline fixes) decompiled and exported with assembly and callers; ledger built; headless wrapper
verified to reproduce the exports. Numbers and gaps are in [re/README.md](re/README.md).

Findings that change the plan:
- The EXE is small: 28 code segments, 101 KB, 356 functions (Tesoro had 447). The function-by-function
  pass is feasible in far fewer sessions than estimated.
- It uses WinG, WAVMIX16 and MCI, so graphics, speech and video/music are each isolated behind a few
  imports, which makes the Windows glue easy to classify as `replaced`.
- The baseline gaps are mostly closed (details in [re/README.md](re/README.md)): all 22 switch tables
  recovered, 35 new functions, unreached code down from 3,041 to 954 bytes. What remains is the 32-bit
  helper code in segments `10b8`/`10c8` (DPMI plus a bit-depth dispatch, likely the bitmap blit layer),
  which is read by hand when graphics is clustered.

Engine skeleton: the worktree `scummvm-darkseed2` is on branch `ds2`; `engines/darkseed2` now holds the
skeleton from the old `darkseed-2` branch with the namespace renamed to `DarkSeed2` (as in the 2011
engine), a detection entry for our `gfile.hdr` + `dark0001.exe` and display name "Dark Seed II". It
compiles and links with `--enable-engine=darkseed2`; runtime detection is not yet checked.

Still open in Phase 0: the MCP bridge (the running Ghidra GUI listens on :8089 but has no program
open, and its own `ghidra/` project is empty), the reference environment check (DOSBox-X plus the
Windows tree, or Wine), fetching the old format notes, and the 16-bit emulation tool choice.

## Next step

Cluster the 356 functions by segment and call graph and start with the resource layer (Phase 1).
