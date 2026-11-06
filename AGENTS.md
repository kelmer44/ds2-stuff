# Dark Seed II project direction

Goal: a complete ScummVM engine for **Dark Seed II** (Cyberdreams, 1995), built from a fresh
function-by-function analysis of `DARK0001.EXE`. Read [MASTER_PLAN.md](MASTER_PLAN.md) first and
[re/README.md](re/README.md) for the process.

## Rules

- **Code written by Claude is a reference implementation and is never submitted.** Gabriel rewrites
  what he keeps on a separate branch. Claude is never author or co-author: no `Co-Authored-By`
  lines, no AI-written commit or PR messages for the submitted branch. The PR discloses AI assistance.
  No AI-generated art or media. These follow the ScummVM repo's `AI-GUIDELINES.md`.
- **Reuse policy (Gabriel, 6 Nov 2026): use as much of the 2011 engine in `scummvm-2011-darkseed2/` as
  possible, provided it is faithful to the original.** Process per cluster: (1) fresh analysis of the EXE
  and a contract first, without reading the 2011 code; (2) then compare the 2011 code with the contract
  and record the verdict in `re/COMPARISON_2011.md` (`faithful`, `faithful with changes`, `differs`,
  `unverified`); (3) adopt `faithful` code as the starting point, port it to the current ScummVM API,
  and fix `differs` parts from the contract. Unverified 2011 code is not reused as if it were verified.
  Keep DrMcCoy's credit on carried-over code and check GPL compatibility (the 2011 files are
  GPL v2 or later). `FINDINGS.md` is a hypothesis source and has known errors (the game data is Spanish).
- Original files in `/Users/gabriel/Desktop/ags/DARKSEED2` and `DS2/` are evidence and stay unmodified.
  Extracted media and Ghidra databases stay local (see `.gitignore`).
- The executable is a **16-bit NE** binary (SHA-256 `3ed6c303…a2db57`). Addresses are `segment:offset`
  and apply only to that hash. Our copy is the Spanish PC build; other versions are out of scope until it is done.
- Keep executable addresses and RE provenance in the notes, not in engine source comments.
- Separate recovered semantics, implementation status and original-runtime comparison. A decoded
  asset or a finished decompile does not establish fidelity. Unknown stays `unknown`.
- Do not add test hooks to the engine; keep verification external.
- Do not touch the Ghidra GUI project in `ghidra/`; the scripted project is `analysis/ghidra-project`.
- Keep `re/ledger.json` through `re/tools/build_ledger.py` (it preserves hand-edited fields).
- **Documentation is required to mark anything done.** A function only counts as done when its contract
  (`re/contracts/<seg>_<off>.md`, from `re/CONTRACT_TEMPLATE.md`) is complete and `re/SUBSYSTEMS.md`
  explains it in plain language. `re/tools/mark.py` enforces this (see `re/tools/docs_gate.py`) and
  refuses statuses from `understood` on without it; `re/CHECKLIST.md` ticks only documented functions.
  Never edit the ledger or the checklist by hand: use `mark.py`, or run `build_ledger.py` then
  `make_checklist.py` after a direct ledger change. `--force` is only for bookkeeping and is recorded.
- **Keep `re/SUBSYSTEMS.md` current** whenever a cluster is read, ported or audited: plain language,
  no addresses or jargon, with trust markers (✅ checked against the game files, 🟡 partly checked,
  ❓ seen from outside only) and the Mermaid diagram updated for new subsystems.
- Keep `re/STRUCTS.md` (layouts with confidence markers) and `re/COMPARISON_2011.md` up to date.
