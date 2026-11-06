#!/usr/bin/env python3
"""Read the NE segment table of DARK0001.EXE and dump bytes or disassemble (16-bit, capstone).

Usage: ne_segments.py list
       ne_segments.py hex SEL:OFF LEN
       ne_segments.py dis SEL:OFF LEN [--use32]
SEL is the Ghidra selector (0x1000 + 8*(segment-1)).
"""
import struct
import sys

EXE = "/Users/gabriel/Desktop/ags/DARKSEED2/DARK0001.EXE"


def segments():
    d = open(EXE, "rb").read()
    ne = struct.unpack_from("<I", d, 0x3C)[0]
    nseg, = struct.unpack_from("<H", d, ne + 0x1C)
    segtab, = struct.unpack_from("<H", d, ne + 0x22)
    shift, = struct.unpack_from("<H", d, ne + 0x32)
    segs = []
    for i in range(nseg):
        sector, length, flags, minalloc = struct.unpack_from("<HHHH", d, ne + segtab + i * 8)
        segs.append({"n": i + 1, "sel": 0x1000 + 8 * i, "file": sector << shift if sector else 0,
                     "len": length or 0x10000, "flags": flags, "min": minalloc or 0x10000})
    return d, segs


def main():
    d, segs = segments()
    cmd = sys.argv[1]
    if cmd == "list":
        for s in segs:
            print("seg %2d sel %04x file %06x len %04x flags %04x" % (s["n"], s["sel"], s["file"], s["len"], s["flags"]))
        return
    sel, off = [int(x, 16) for x in sys.argv[2].split(":")]
    ln = int(sys.argv[3], 0)
    s = [x for x in segs if x["sel"] == sel][0]
    data = d[s["file"] + off:s["file"] + off + ln]
    if cmd == "hex":
        for i in range(0, len(data), 16):
            print("%04x:%04x  %s" % (sel, off + i, data[i:i + 16].hex(" ")))
    else:
        import capstone
        md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32 if "--use32" in sys.argv else capstone.CS_MODE_16)
        for i in md.disasm(data, off):
            print("%04x:%04x  %-24s %s %s" % (sel, i.address, i.bytes.hex(), i.mnemonic, i.op_str))


main()
