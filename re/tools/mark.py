#!/usr/bin/env python3
"""Update ledger fields, enforcing the documentation gate, and regenerate the checklist.

  re/tools/mark.py 10b8:0368 understood --name inferred_lz_decompress_block --note "..."
  re/tools/mark.py 1088:06b4 ported --engine "engines/darkseed2/resources.cpp::loadFile"
Several addresses may be given before the status. Statuses:
  untouched decompiled understood ported emu-compared original-compared replaced
Anything from `understood` on needs a complete contract (see docs_gate.py); --force skips the gate
and marks the row with a note, only for bookkeeping fixes.
"""
import argparse
import json
import subprocess
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).parent))
from docs_gate import ORDER, problems  # noqa: E402

ROOT = Path(__file__).resolve().parents[1]


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("items", nargs="+", help="addresses (seg:off) followed by a status")
    ap.add_argument("--name")
    ap.add_argument("--note")
    ap.add_argument("--engine")
    ap.add_argument("--cluster")
    ap.add_argument("--force", action="store_true")
    a = ap.parse_args()
    status, addrs = a.items[-1], [x.lower() for x in a.items[:-1]]
    if status not in ORDER:
        sys.exit(f"status must be one of {ORDER}")
    path = ROOT / "ledger.json"
    rows = json.loads(path.read_text())
    by = {r["addr"]: r for r in rows}
    bad = False
    for ad in addrs:
        if ad not in by:
            sys.exit(f"unknown function {ad}")
        r = by[ad]
        if status == "ported" and not (r.get("engine") or a.engine):
            print(f"{ad}: ported needs --engine file::function")
            bad = True
            continue
        probs = problems(ad, status, r)
        if probs and not a.force:
            print(f"{ad}: cannot mark {status}:")
            for x in probs:
                print("  -", x)
            bad = True
            continue
        r["status"] = status
        if a.engine and len(addrs) == 1:
            r["engine"] = a.engine
        if a.note:
            r["notes"] = (r["notes"] + " | " if r["notes"] else "") + a.note
        if a.name and len(addrs) == 1:
            r["name"] = a.name
        if a.cluster:
            r["cluster_name"] = a.cluster
        if probs and a.force:
            r["notes"] = (r["notes"] + " | " if r["notes"] else "") + "FORCED without full docs"
    path.write_text(json.dumps(rows, indent=1) + "\n")
    subprocess.run([sys.executable, str(Path(__file__).with_name("make_checklist.py"))], check=True)
    sys.exit(1 if bad else 0)


main()
