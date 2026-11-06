# Dark Seed II project direction

Goal: a complete ScummVM engine for **Dark Seed II** (Cyberdreams, 1995), built from a fresh
function-by-function analysis of `DARK0001.EXE`. Read [MASTER_PLAN.md](MASTER_PLAN.md) first and
[re/README.md](re/README.md) for the process.

## Rules

- **Code written by Claude is a reference implementation and is never submitted.** Gabriel rewrites
  what he keeps on a separate branch. Claude is never author or co-author: no `Co-Authored-By`
  lines, no AI-written commit or PR messages for the submitted branch. The PR discloses AI assistance.
  No AI-generated art or media. These follow the ScummVM repo's `AI-GUIDELINES.md`.
- The 2011 engine in `scummvm-2011-darkseed2/` and `FINDINGS.md` are **hypothesis sources**. Read them
  only after a cluster has its own fresh result, to compare. Record disagreements and resolve them
  with evidence. Check licensing before any carried-over code, and keep DrMcCoy's credit.
- Original files in `/Users/gabriel/Desktop/ags/DARKSEED2` and `DS2/` are evidence and stay unmodified.
  Extracted media and Ghidra databases stay local (see `.gitignore`).
- The executable is a **16-bit NE** binary (SHA-256 `3ed6c303…a2db57`). Addresses are `segment:offset`
  and apply only to that hash. Other versions are out of scope until the English build is done.
- Keep executable addresses and RE provenance in the notes, not in engine source comments.
- Separate recovered semantics, implementation status and original-runtime comparison. A decoded
  asset or a finished decompile does not establish fidelity. Unknown stays `unknown`.
- Do not add test hooks to the engine; keep verification external.
- Do not touch the Ghidra GUI project in `ghidra/`; the scripted project is `analysis/ghidra-project`.
- Keep `re/ledger.json` through `re/tools/build_ledger.py` (it preserves hand-edited fields).
