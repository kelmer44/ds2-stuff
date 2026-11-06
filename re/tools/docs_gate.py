#!/usr/bin/env python3
"""Documentation gate: what a contract must contain before a function may reach a status.

A function is only done when its documentation exists. Rules:
  understood        contract file; Purpose, Inputs, Outputs, Calls, Edge cases, Evidence filled;
                    Subsystems doc and Checklist boxes ticked
  ported            the above + Port filled (engine file::function)
  emu-compared      the above + Validation filled
  original-compared the above + Validation filled
  replaced          contract with Purpose and Evidence filled, note naming the ScummVM service
Used by mark.py and make_checklist.py.
"""
import json
import re
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
ORDER = ["untouched", "decompiled", "understood", "ported", "emu-compared", "original-compared", "replaced"]
EMPTY = ("", "todo", "none yet", "not compared")
BASE = ["Purpose", "Inputs", "Outputs", "Calls", "Edge cases", "Evidence"]


def contract_path(addr):
    return ROOT / "contracts" / (addr.replace(":", "_") + ".md")


def fields(text):
    out = {}
    for m in re.finditer(r"^\*\*([^*]+?)\*\*:?\s*(.*)$", text, re.M):
        label = m.group(1).strip().rstrip(":")
        key = re.split(r"\s*[(/:]", label)[0].strip()
        value = m.group(2).strip()
        if label.endswith(":") or True:
            out.setdefault(key, value)
    return out


def filled(v):
    v = (v or "").strip().rstrip(". ").lower()
    return v not in EMPTY and not v.startswith("todo") and not v.startswith("none yet")


def problems(addr, status, row=None):
    if status in ("untouched", "decompiled"):
        return []
    p = contract_path(addr)
    if not p.exists():
        return [f"missing contract {p.relative_to(ROOT)}"]
    f = fields(p.read_text())
    out = []
    need = list(BASE) if status != "replaced" else ["Purpose", "Evidence"]
    if status in ("ported", "emu-compared", "original-compared"):
        need.append("Port")
    if status in ("emu-compared", "original-compared"):
        need.append("Validation")
    for k in need:
        if not filled(f.get(k)):
            out.append(f"contract field not filled: {k}")
    for k in ("Subsystems doc", "Checklist"):
        if "[x]" not in f.get(k, ""):
            out.append(f"contract box not ticked: {k}")
    if status == "replaced" and row is not None and not row.get("notes"):
        out.append("replaced needs a note naming the ScummVM service")
    return out


def documented(addr, status, row=None):
    return status not in ("untouched", "decompiled") and not problems(addr, status, row)
