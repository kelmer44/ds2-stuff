#!/usr/bin/env python3
"""Build re/ledger.json and re/ledger.csv from the Ghidra exports.

Hand-edited fields (name, status, engine, notes, cluster_name) are kept on rerun.
Run from the repository root: python3 re/tools/build_ledger.py
"""
import csv
import json
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
EXPORT = ROOT / "re" / "export"
LEDGER = ROOT / "re" / "ledger.json"
HAND = ("name", "status", "engine", "notes", "cluster_name")


def load_functions():
    with open(EXPORT / "functions.tsv") as f:
        return {r["addr"]: r for r in csv.DictReader(f, delimiter="\t")}


def load_edges(funcs):
    """callee -> set(caller entry addresses), from the .xrefs exports."""
    by_name = {r["name"]: a for a, r in funcs.items()}
    callers = {a: set() for a in funcs}
    for addr in funcs:
        xr = EXPORT / "fn" / (addr.replace(":", "_") + ".xrefs")
        if not xr.exists():
            continue
        for line in xr.read_text().splitlines():
            parts = line.split("\t")
            if len(parts) == 3 and parts[2] in by_name and "CALL" in parts[1]:
                callers[addr].add(by_name[parts[2]])
    return callers


def depths(funcs, callers):
    callees = {a: set() for a in funcs}
    for callee, cs in callers.items():
        for c in cs:
            callees[c].add(callee)
    memo = {}

    def depth(a, stack):
        if a in memo:
            return memo[a]
        if a in stack:
            return 0
        stack = stack | {a}
        d = 0
        for c in callees[a]:
            d = max(d, 1 + depth(c, stack))
        memo[a] = d
        return d

    sys.setrecursionlimit(10000)
    return {a: depth(a, frozenset()) for a in funcs}, callees


def main():
    funcs = load_functions()
    callers = load_edges(funcs)
    depth, callees = depths(funcs, callers)
    old = {}
    if LEDGER.exists():
        old = {r["addr"]: r for r in json.loads(LEDGER.read_text())}

    rows = []
    for addr, r in sorted(funcs.items()):
        row = {
            "addr": addr,
            "ghidra_name": r["name"],
            "segment": addr.split(":")[0],
            "size": int(r["size"]),
            "callers": sorted(callers[addr]),
            "callees": sorted(callees[addr]),
            "depth": depth[addr],
            "name": "",
            "status": "untouched",
            "engine": "",
            "notes": "",
            "cluster_name": "",
        }
        for k in HAND:
            if addr in old and old[addr].get(k):
                row[k] = old[addr][k]
        rows.append(row)

    LEDGER.write_text(json.dumps(rows, indent=1) + "\n")
    with open(ROOT / "re" / "ledger.csv", "w", newline="") as f:
        w = csv.writer(f)
        w.writerow(["addr", "ghidra_name", "segment", "size", "n_callers", "n_callees",
                    "depth", "name", "status", "engine", "cluster_name", "notes"])
        for r in rows:
            w.writerow([r["addr"], r["ghidra_name"], r["segment"], r["size"],
                        len(r["callers"]), len(r["callees"]), r["depth"], r["name"],
                        r["status"], r["engine"], r["cluster_name"], r["notes"]])
    print(len(rows), "functions; max depth", max(depth.values()))


main()
