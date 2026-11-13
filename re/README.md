# Fresh function-by-function analysis of DARK0001.EXE

Started 6 November 2026. Target: `~/Desktop/ags/DARKSEED2/DARK0001.EXE`, NE (Win16),
184,272 bytes, SHA-256 `3ed6c3032e959a32495ad66fc4b1f2fbdc0cc71b9c05054ba8e9a86d64a2db57`
(identical to `DS2/C/DARKSEED/DARK0001.EXE`).

## Baseline numbers (Ghidra 11.4.2)

| Item | First import | After baseline fixes (6 Nov 2026) |
|---|---|---|
| Code segments | 28 (`1000` to `10d8`), 101,393 bytes | same |
| Data segments | 2 (`10e0`, `10e8`), about 57 KB | same |
| Resource segments | 87 (dialogs, menus, strings) | same |
| Functions | 321 (95,758 bytes) | **356** |
| Code outside any function | about 5.6 KB (3,041 bytes of real gaps) | 954 bytes, of which about 100 are data |
| Switch tables recovered | 0 of 22 | 22 of 22 |
| Decompiler | 321/321 completed | 356/356 completed |
| Imports | 150: USER 60, KERNEL 50, GDI 20, WAVMIX16 9, MMSYSTEM 6, WING 5 | same |

Reading of the imports: video through MCI (MCIAVI), music through MCI sequencer, speech and effects
through WAVMIX16, drawing through WinG (ordinals 1001 to 1010) and GDI palette calls.

## What the baseline fixes did (`ghidra/FixBaseline.java`, `FixBaseline2.java`, reports `baseline-fix-report*.tsv`)

- **22 `JMP CS:[BX+table]` switches** (the only indirect jumps in the program): the table is now word
  data and each entry is a COMPUTED_JUMP reference from the jump, so listing and flow include every
  case. Table sizes come from the `CMP reg,N` before the jump (`N/2+1` entries). One table
  (`10d0:0a5c`, 8 entries, jump at `10d0:0ac5`) has no compare and was read by hand.
- **Decompiler quirk that remains (benign):** in the three `1060` functions (`0846`, `092e`, `0a0a`) the
  index is `(x & 0xfc00) >> 11` after a test that bits 10 and 11 are zero, so it is always even and is
  used as a byte offset into a word table. The decompiler labels the cases with that doubled index and
  shows odd cases as `halt_baddata`. Odd cases are unreachable; the real case is `index / 2`
  (the operation number in the top 4 bits). Treat the `pcode error` lines for these three as noise.
- **Win16 far-procedure prologues** (`mov ax,ds; nop; inc bp; push bp; mov bp,sp; push ds; mov ds,ax`)
  start 2 bytes before the `90 45 55 8b ec` marker; the stubs at `10d0:01c0` and `10d0:01d1` were merged.
- **New functions** from unreached code: 35 in total, mostly segment `10d0` (the C runtime and start-up
  area) and the 32-bit helper segment `10c8`.
- Both passes are idempotent. Backups of the project before each pass are in
  `/private/tmp/ds2-ghidra/backup-*` (local, not kept in the repository).

## Win16 prototypes (`ghidra/ApplyWin16Signatures.java`, report `win16-signatures-report.tsv`)

Ghidra has no pascal convention for 16-bit code, so the 150 imports were decompiled as `cdecl`, with
arguments reversed or missing. The script gives 137 of them (KERNEL, USER, GDI, MMSYSTEM) SDK
prototypes with `__stdcall16far` (callee pops) and explicit stack storage in pascal order (first
argument highest). `_WSPRINTF` is `__cdecl16far` with varargs. Left alone: `INITTASK`, `DOS3CALL`,
`__AHSHIFT`, `__AHINCR`, `__WINFLAGS` (register-based or data) and WAVMIX16 `Ordinal_12`.

Inferred and renamed with an `_inferred` suffix, with the evidence from call sites:

| Import | Name | Evidence |
|---|---|---|
| WING 1001, 1002, 1003, 1006, 1010 | `WinGCreateDC`, `WinGRecommendDIBFormat`, `WinGCreateBitmap`, `WinGSetDIBColorTable`, `WinGStretchBlt` | WinG header ordinal order; argument counts match the call sites |
| WAVMIX16 4 | `WaveMixActivate(handle, bool)` | session handle at `[0x4a]`, 1 flag word |
| WAVMIX16 5 | `WaveMixOpenWave(handle, name, hinst, flags)` | handle, far pointer, `[0x9556]`, dword 4 |
| WAVMIX16 6 | `WaveMixOpenChannel(handle, channels, flags)` | `(handle, 4, 2)` |
| WAVMIX16 7 | `WaveMixPlay(params)` | single far pointer |
| WAVMIX16 8 | `WaveMixFlushChannel(handle, channel, flags)` | `(handle, 0, 3)` |
| WAVMIX16 10 | `WaveMixFreeWave(handle, wave)` | handle plus far pointer stored in a wave record |
| WAVMIX16 11 | `WaveMixCloseSession(handle)` | single handle |
| WAVMIX16 15 | `WaveMixConfigureInit(config)` | far pointer to a structure filled in just before |

These are hypotheses until the WAVMIX16 side is checked against the DLL if it can be found. The script
is idempotent for the KERNEL, USER, GDI and MMSYSTEM names; a second run reports the renamed ordinals
as `MISSING`.

## Still open in the baseline

- **32-bit helper code in segments `10b8` and `10c8`.** It uses 32-bit operands in 16-bit segments,
  DPMI calls (`int 31h`, descriptor get/set) and a `bpp` dispatch on 8/16/24/32, which looks like the
  bitmap blit/convert layer. Ghidra reports overlapping instructions and unreachable blocks in
  `10b8:0024`, `10b8:0104`, `10b8:0368`, and `10c8:0223` to `10c8:0529` (775 bytes) is still not in
  any function. `10c8:0100` is reached through a stored function pointer, which is why auto-analysis
  never saw it. These get read by hand when graphics is clustered.
- Other leftover gaps: `10b8:0223` (13 bytes, tail of a function), `10b8:0429` (45 bytes),
  `10d0:08c4` (5), `10d0:093d` (6), `10d0:1932` (12). Data: `10c8:0000` (7 dwords),
  `10d0:0000` (zeros), `10d0:027d` (33 bytes), `10d0:0a5c` (switch table), `10c8:0573` (padding).
- One indirect call remains: `10c8:0063 CALL [DI-8]`, a function pointer stored in the frame.
- Call-graph depth in the ledger counts direct calls only.
- NE segment N maps to selector `0x1000 + 8*(N-1)`.

## Files

- `ledger.json` / `ledger.csv`: one row per function. Hand-edited fields `name`, `status`, `engine`,
  `notes`, `cluster_name` survive `tools/build_ledger.py`.
- `export/`: `segments.tsv`, `imports.tsv`, `functions.tsv`, and `fn/<seg>_<off>.{c,asm,xrefs}`
  plus `fn/decompile-status.tsv`. Regenerate with the Ghidra scripts below.
- `ghidra/ExportOverview.java`, `ExportFunctions.java`: headless exporters with a SHA-256 guard. `ApplyNames.java` copies ledger names into the program (run writable). `SurveyGaps.java` lists indirect jumps and code gaps, `DumpBytes.java` dumps bytes, `FixBaseline.java` and `FixBaseline2.java` apply the baseline fixes (writable, see `DS2_WRITE=1` in `tools/ghidra_headless.sh`).
- `tools/ghidra_headless.sh Script.java [args]`: read-only headless run with writable cache dirs.
- `contracts/<seg>_<off>.md`: one note per function, from `CONTRACT_TEMPLATE.md`. Required before a
  function can be marked `understood` or later.
- `STRUCTS.md`: recovered layouts with confidence markers. `COMPARISON_2011.md`: verdicts on the 2011 code.
- `SUBSYSTEMS.md`: plain-language map of how the parts work (trust markers, Mermaid diagram).
- `CHECKLIST.md`: generated; `[x]` only for functions that are understood or later **and** documented.
- `tools/mark.py`: the only way to change statuses; enforces the documentation gate (`tools/docs_gate.py`).
  `tools/make_checklist.py` regenerates the checklist. `tools/ne_segments.py` dumps or disassembles
  NE segments (use `--use32` for `10b8` and `10c8`). `tools/glue_probe.py`, `glue_verify.py` check the
  glue-file decoder against the game data.

## Regenerate the exports

```sh
re/tools/ghidra_headless.sh ExportOverview.java /private/tmp/ds2-ghidra/export
cp /private/tmp/ds2-ghidra/export/*.tsv re/export/
re/tools/ghidra_headless.sh ExportFunctions.java "$PWD/re/export/fn"
python3 re/tools/build_ledger.py
```

The Ghidra project is `analysis/ghidra-project` (`DS2Analysis`, program `DARK0001.EXE`). Do not run the
headless tools while the project is open in the GUI.

## Status values (a function only advances with evidence)

`untouched`, `decompiled` (read, signature fixed), `understood` (contract written), `ported`,
`emu-compared` (original machine code against the port), `original-compared` (observed in the running
original). Pure Windows glue (WinG, MCI, WAVMIX, GDI, dialogs): `replaced`.

## Done means documented

1. Read the function, write its contract (all of: Purpose, Inputs, Outputs, Calls, Edge cases, Evidence).
2. Explain it in `SUBSYSTEMS.md` in plain language and tick the contract's two boxes.
3. `re/tools/mark.py ADDR understood --name inferred_name`. The gate refuses if anything is missing.
4. Later stages need more: `ported` needs `--engine file::function` and the contract's Port field,
   `emu-compared` and `original-compared` need the Validation field.

## Session protocol

1. Read this file, then the ledger rows and contracts of the cluster and of its callees.
2. Work bottom-up inside the cluster (ledger `depth`). Fix prototypes and names in Ghidra only when
   the evidence supports it.
3. Write the contract before any C++.
4. Compare with the 2011 engine only after the fresh result.
5. Update ledger, contracts and notes in the same change.
