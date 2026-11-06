#!/usr/bin/env python3
"""Independent check of the glue-file decompressor read from the EXE (10b8:0370).

Not engine code. Usage: glue_probe.py [glue-file]
"""
import struct
import sys

GAME = "/Users/gabriel/Desktop/ags/DARKSEED2/"
STATS = {"unwritten": 0}


def decompress_block(src, inlen, out):
    """One call of the original routine: out is a bytearray that already holds earlier output.

    Each group is a flag byte then up to 8 items, 2 bytes each. Flags are consumed LSB first.
    1 = literal word. 0 = match: length (w & 15) + 3, distance (w >> 4) + 1.
    The copy runs in 4-byte chunks (8 first, then 8 more, then 2), as the original does, so the
    result for an overlapping match (distance < length) is reproduced here.
    """
    pos = 0
    consumed = 0
    while True:
        flags = src[pos]
        pos += 1
        for _ in range(8):
            bit = flags & 1
            flags >>= 1
            if bit:
                out += src[pos:pos + 2]
                pos += 2
            else:
                w = src[pos] | (src[pos + 1] << 8)
                pos += 2
                n = (w & 15) + 3
                d = (w >> 4) + 1
                start = len(out) - d
                for i in range(n):
                    # Chunked copy: bytes in the same 4-byte chunk are read before they are written.
                    chunk = (i // 4) * 4
                    src_i = start + i
                    if src_i < 0 or src_i >= len(out) - (i - chunk):
                        STATS["unwritten"] += 1
                        out.append(0)
                    else:
                        out.append(out[src_i])
        consumed += 17
        if consumed >= inlen:
            return pos


def decompress_glue(path):
    data = open(path, "rb").read()
    out = bytearray()
    pos = 0
    while pos < len(data):
        chunk = data[pos:pos + 0x800]
        pos += 0x800
        if len(chunk) == 0x800:
            decompress_block(chunk, 0x7f8, out)
        else:
            padded = chunk + bytes(0x100)
            decompress_block(padded, len(chunk), out)
    return bytes(out)


if __name__ == "__main__":
    name = sys.argv[1] if len(sys.argv) > 1 else "gl00_txt.000"
    out = decompress_glue(GAME + name)
    print(name, "decompressed", len(out))
    n, = struct.unpack_from("<H", out, 0)
    print("entries", n)
    for i in range(3):
        nm = out[2 + i * 20:14 + i * 20]
        sz, off = struct.unpack_from("<II", out, 14 + i * 20)
        print(nm, sz, off, out[off:off + min(sz, 24)])
