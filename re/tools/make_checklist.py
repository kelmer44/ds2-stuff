#!/usr/bin/env python3
"""Generate re/CHECKLIST.md from re/ledger.json (run by mark.py; also run it after editing the ledger)."""
import json
import sys
from collections import defaultdict
from pathlib import Path

sys.path.insert(0, str(Path(__file__).parent))
from docs_gate import ORDER, documented, problems  # noqa: E402

ROOT = Path(__file__).resolve().parents[1]
RANK = {s: i for i, s in enumerate(ORDER)}
rows = json.loads((ROOT / "ledger.json").read_text())
tot = len(rows)


def reached(r, stage):
    if r["status"] == "replaced":
        return stage != "untouched" or True
    return RANK[r["status"]] >= RANK[stage]


def done(r):
    """Done = understood or later AND the documentation gate passes."""
    return documented(r["addr"], r["status"], r)


out = ["# Function checklist", "",
       "Generated from `ledger.json` by `tools/make_checklist.py`; update through `tools/mark.py`, never by hand.",
       "`[x]` means **done: status understood or later and the contract is complete** (every required field "
       "filled, Subsystems doc and Checklist boxes ticked; rules in `tools/docs_gate.py`). A function without "
       "documentation stays `[ ]` whatever its status. Status ladder: untouched < decompiled < understood < "
       "ported < emu-compared < original-compared; pure Windows glue is `replaced`.", ""]
nd = sum(done(r) for r in rows)
out += [f"## Overall ({tot} functions)", "", "| Stage | Count | Share |", "|---|---|---|"]
for s in ORDER[1:-1]:
    k = sum(reached(r, s) for r in rows)
    out.append(f"| {s} or later (status only) | {k} | {100 * k // tot}% |")
out.append(f"| replaced by a ScummVM service | {sum(r['status'] == 'replaced' for r in rows)} | |")
out.append(f"| **done (status understood or later and documented)** | **{nd}** | **{100 * nd // tot}%** |")
inconsistent = [r for r in rows if r["status"] not in ("untouched", "decompiled") and not done(r)]
out.append(f"| status ahead of its documentation | {len(inconsistent)} | |")
out += ["", "## By cluster", ""]
cl = defaultdict(list)
for r in rows:
    cl[r.get("cluster_name") or r.get("cluster") or "unassigned"].append(r)
for c in sorted(cl):
    rs = sorted(cl[c], key=lambda r: (r["depth"], r["addr"]))
    d = sum(done(r) for r in rs)
    out += [f"### {c} ({d}/{len(rs)} done)", ""]
    for r in rs:
        n = r["name"] or r["ghidra_name"]
        eng = f" → `{r['engine']}`" if r["engine"] else ""
        extra = f" — {r['notes']}" if r["notes"] else ""
        flag = ""
        if r["status"] not in ("untouched", "decompiled") and not done(r):
            flag = " ⚠ docs: " + "; ".join(problems(r["addr"], r["status"], r))
        out.append(f"- [{'x' if done(r) else ' '}] `{r['addr']}` {n} · depth {r['depth']} · {r['size']} bytes · "
                   f"**{r['status']}**{eng}{extra}{flag}")
    out.append("")
(ROOT / "CHECKLIST.md").write_text("\n".join(out) + "\n")
print("checklist:", tot, "functions;", nd, "done;", len(inconsistent), "ahead of docs")
