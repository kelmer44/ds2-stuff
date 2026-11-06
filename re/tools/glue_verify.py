#!/usr/bin/env python3
"""Check GFILE.HDR against the decompressed glue files (independent of the 2011 engine).

For every entry: range inside the decompressed stream, and magic by extension.
Usage: glue_verify.py [first_glue_index last_glue_index]
"""
import collections
import os
import struct
import sys
from multiprocessing import Pool

sys.path.insert(0, os.path.dirname(__file__))
from glue_probe import GAME, STATS, decompress_glue  # noqa: E402


def header():
    d = open(GAME + "GFILE.HDR", "rb").read()
    n, m = struct.unpack_from("<HH", d, 0)
    names = [d[4 + i * 64:4 + i * 64 + 32].split(b"\0")[0].decode() for i in range(n)]
    off = 4 + n * 64
    ent = []
    for i in range(m):
        g, = struct.unpack_from("<H", d, off + i * 22)
        nm = d[off + i * 22 + 2:off + i * 22 + 14].rstrip(b"\0").decode("latin1")
        sz, o = struct.unpack_from("<II", d, off + i * 22 + 14)
        ent.append((g, nm, sz, o))
    return names, ent


def check(args):
    gi, name, entries = args
    STATS['unwritten'] = 0
    out = decompress_glue(GAME + name)
    unwritten = STATS['unwritten']
    bad = []
    magic = collections.Counter()
    for nm, sz, o in entries:
        if o + sz > len(out):
            bad.append((nm, sz, o, "range"))
            continue
        ext = nm.rsplit(".", 1)[-1]
        if ext == "BMP" and out[o:o + 2] != b"BM":
            bad.append((nm, sz, o, "magic"))
        magic[ext] += 1
    return gi, name, len(out), len(entries), bad, unwritten


if __name__ == "__main__":
    names, ent = header()
    lo = int(sys.argv[1]) if len(sys.argv) > 1 else 0
    hi = int(sys.argv[2]) if len(sys.argv) > 2 else len(names) - 1
    jobs = []
    for gi in range(lo, hi + 1):
        jobs.append((gi, names[gi], [(nm, sz, o) for g, nm, sz, o in ent if g == gi]))
    with Pool(8) as p:
        tot = 0
        for gi, name, ln, ne, bad, unw in p.imap(check, jobs):
            tot += len(bad)
            print("%3d %-14s out %9d entries %4d bad %d unwritten-reads %d %s" % (gi, name, ln, ne, len(bad), unw, bad[:2]))
    print("total bad", tot)
