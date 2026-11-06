10c0:0000: PUSH BP
10c0:0001: MOV BP,SP
10c0:0003: PUSH DS
10c0:0004: MOV AX,0x10e8
10c0:0007: MOV DS,AX
10c0:0009: MOV AX,0x8
10c0:000c: CALLF 0x10d0:029e
10c0:0011: PUSH DI
10c0:0012: PUSH SI
10c0:0013: MOV AX,word ptr [BP + 0x26]
10c0:0016: OR AX,word ptr [BP + 0x24]
10c0:0019: JZ 0x10c0:0023
10c0:001b: MOV AX,word ptr [BP + 0x22]
10c0:001e: OR AX,word ptr [BP + 0x20]
10c0:0021: JNZ 0x10c0:0033
10c0:0023: PUSH 0x40
10c0:0025: PUSH 0x2848
10c0:0028: PUSH 0x2852
10c0:002b: CALLF 0x10d0:039c
10c0:0030: ADD SP,0x6
10c0:0033: MOV AX,word ptr [BP + 0x16]
10c0:0036: OR AX,word ptr [BP + 0x14]
10c0:0039: JZ 0x10c0:0043
10c0:003b: MOV AX,word ptr [BP + 0x12]
10c0:003e: OR AX,word ptr [BP + 0x10]
10c0:0041: JNZ 0x10c0:0053
10c0:0043: PUSH 0x41
10c0:0045: PUSH 0x2863
10c0:0048: PUSH 0x286d
10c0:004b: CALLF 0x10d0:039c
10c0:0050: ADD SP,0x6
10c0:0053: CMP word ptr [BP + 0x1a],0x0
10c0:0057: JL 0x10c0:005f
10c0:0059: CMP word ptr [BP + 0x18],0x0
10c0:005d: JGE 0x10c0:006f
10c0:005f: PUSH 0x44
10c0:0061: PUSH 0x287e
10c0:0064: PUSH 0x2888
10c0:0067: CALLF 0x10d0:039c
10c0:006c: ADD SP,0x6
10c0:006f: CMP word ptr [BP + 0xa],0x0
10c0:0073: JL 0x10c0:007b
10c0:0075: CMP word ptr [BP + 0x8],0x0
10c0:0079: JGE 0x10c0:008b
10c0:007b: PUSH 0x45
10c0:007d: PUSH 0x28a1
10c0:0080: PUSH 0x28ab
10c0:0083: CALLF 0x10d0:039c
10c0:0088: ADD SP,0x6
10c0:008b: LES BX,[BP + 0x24]
10c0:008e: MOV AX,word ptr ES:[BX + 0xe]
10c0:0092: LES BX,[BP + 0x14]
10c0:0095: CMP word ptr ES:[BX + 0xe],AX
10c0:0099: JZ 0x10c0:00ab
10c0:009b: PUSH 0x48
10c0:009d: PUSH 0x28c4
10c0:00a0: PUSH 0x28ce
10c0:00a3: CALLF 0x10d0:039c
10c0:00a8: ADD SP,0x6
10c0:00ab: LES BX,[BP + 0x24]
10c0:00ae: MOV AX,word ptr ES:[BX + 0x4]
10c0:00b2: DEC AX
10c0:00b3: MOV DI,AX
10c0:00b5: MOV CX,AX
10c0:00b7: MOV AX,word ptr ES:[BX + 0x8]
10c0:00bb: CWD
10c0:00bc: XOR AX,DX
10c0:00be: SUB AX,DX
10c0:00c0: MOV SI,AX
10c0:00c2: DEC SI
10c0:00c3: CMP CX,word ptr [BP + 0x1e]
10c0:00c6: JGE 0x10c0:00cb
10c0:00c8: JMP 0x10c0:024b
10c0:00cb: CMP word ptr [BP + 0x1c],SI
10c0:00ce: JLE 0x10c0:00d3
10c0:00d0: JMP 0x10c0:024b
10c0:00d3: MOV AX,word ptr [BP + 0x1a]
10c0:00d6: ADD AX,word ptr [BP + 0x1e]
10c0:00d9: JNS 0x10c0:00de
10c0:00db: JMP 0x10c0:024b
10c0:00de: MOV AX,word ptr [BP + 0x18]
10c0:00e1: ADD AX,word ptr [BP + 0x1c]
10c0:00e4: JNS 0x10c0:00e9
10c0:00e6: JMP 0x10c0:024b
10c0:00e9: MOV AX,SI
10c0:00eb: SUB AX,word ptr [BP + 0x18]
10c0:00ee: SUB AX,word ptr [BP + 0x1c]
10c0:00f1: INC AX
10c0:00f2: MOV word ptr [BP + 0x1c],AX
10c0:00f5: LES BX,[BP + 0x14]
10c0:00f8: MOV AX,word ptr ES:[BX + 0x8]
10c0:00fc: CWD
10c0:00fd: XOR AX,DX
10c0:00ff: SUB AX,DX
10c0:0101: SUB AX,word ptr [BP + 0x8]
10c0:0104: SUB AX,word ptr [BP + 0xc]
10c0:0107: MOV word ptr [BP + 0xc],AX
10c0:010a: CMP word ptr [BP + 0x1e],0x0
10c0:010e: JGE 0x10c0:0147
10c0:0110: MOV AX,word ptr [BP + 0x1e]
10c0:0113: NEG AX
10c0:0115: PUSH AX
10c0:0116: PUSH 0x0
10c0:0118: PUSH word ptr [BP + 0x1a]
10c0:011b: PUSH 0x0
10c0:011d: CALLF 0x10c8:059a
10c0:0122: MOV word ptr [BP + -0x6],AX
10c0:0125: MOV AX,word ptr [BP + 0x1a]
10c0:0128: ADD AX,word ptr [BP + 0x1e]
10c0:012b: MOV word ptr [BP + 0x1a],AX
10c0:012e: MOV word ptr [BP + 0x1e],0x0
10c0:0133: PUSH DX
10c0:0134: PUSH word ptr [BP + -0x6]
10c0:0137: PUSH word ptr [BP + 0xa]
10c0:013a: PUSH 0x0
10c0:013c: CALLF 0x10c8:054e
10c0:0141: ADD word ptr [BP + 0xe],DX
10c0:0144: SUB word ptr [BP + 0xa],DX
10c0:0147: CMP word ptr [BP + 0x1c],0x0
10c0:014b: JGE 0x10c0:0181
10c0:014d: MOV AX,word ptr [BP + 0x1c]
10c0:0150: NEG AX
10c0:0152: PUSH AX
10c0:0153: PUSH 0x0
10c0:0155: PUSH word ptr [BP + 0x18]
10c0:0158: PUSH 0x0
10c0:015a: CALLF 0x10c8:059a
10c0:015f: MOV word ptr [BP + -0x6],AX
10c0:0162: MOV AX,word ptr [BP + 0x1c]
10c0:0165: ADD word ptr [BP + 0x18],AX
10c0:0168: MOV word ptr [BP + 0x1c],0x0
10c0:016d: PUSH DX
10c0:016e: PUSH word ptr [BP + -0x6]
10c0:0171: PUSH word ptr [BP + 0x8]
10c0:0174: PUSH 0x0
10c0:0176: CALLF 0x10c8:054e
10c0:017b: ADD word ptr [BP + 0xc],DX
10c0:017e: SUB word ptr [BP + 0x8],DX
10c0:0181: MOV AX,word ptr [BP + 0x1a]
10c0:0184: ADD AX,word ptr [BP + 0x1e]
10c0:0187: LEA CX,[DI + 0x1]
10c0:018a: CMP AX,CX
10c0:018c: JLE 0x10c0:01cb
10c0:018e: MOV AX,DI
10c0:0190: SUB AX,word ptr [BP + 0x1e]
10c0:0193: PUSH AX
10c0:0194: PUSH 0x0
10c0:0196: PUSH word ptr [BP + 0x1a]
10c0:0199: PUSH 0x0
10c0:019b: MOV word ptr [BP + -0xa],AX
10c0:019e: CALLF 0x10c8:059a
10c0:01a3: MOV word ptr [BP + -0x6],AX
10c0:01a6: MOV AX,word ptr [BP + -0xa]
10c0:01a9: INC AX
10c0:01aa: MOV word ptr [BP + 0x1a],AX
10c0:01ad: PUSH DX
10c0:01ae: PUSH word ptr [BP + -0x6]
10c0:01b1: PUSH word ptr [BP + 0xa]
10c0:01b4: PUSH 0x0
10c0:01b6: CALLF 0x10c8:054e
10c0:01bb: MOV word ptr [BP + 0xa],DX
10c0:01be: MOV AX,word ptr [BP + 0x1a]
10c0:01c1: ADD AX,word ptr [BP + 0x1e]
10c0:01c4: CMP AX,DI
10c0:01c6: JGE 0x10c0:01cb
10c0:01c8: INC word ptr [BP + 0x1a]
10c0:01cb: MOV AX,word ptr [BP + 0x18]
10c0:01ce: ADD AX,word ptr [BP + 0x1c]
10c0:01d1: LEA CX,[SI + 0x1]
10c0:01d4: CMP AX,CX
10c0:01d6: JLE 0x10c0:0213
10c0:01d8: MOV AX,SI
10c0:01da: SUB AX,word ptr [BP + 0x1c]
10c0:01dd: PUSH AX
10c0:01de: PUSH 0x0
10c0:01e0: PUSH word ptr [BP + 0x18]
10c0:01e3: PUSH 0x0
10c0:01e5: MOV DI,AX
10c0:01e7: CALLF 0x10c8:059a
10c0:01ec: MOV word ptr [BP + -0x6],AX
10c0:01ef: LEA AX,[DI + 0x1]
10c0:01f2: MOV word ptr [BP + 0x18],AX
10c0:01f5: PUSH DX
10c0:01f6: PUSH word ptr [BP + -0x6]
10c0:01f9: PUSH word ptr [BP + 0x8]
10c0:01fc: PUSH 0x0
10c0:01fe: CALLF 0x10c8:054e
10c0:0203: MOV word ptr [BP + 0x8],DX
10c0:0206: MOV AX,word ptr [BP + 0x18]
10c0:0209: ADD AX,word ptr [BP + 0x1c]
10c0:020c: CMP AX,SI
10c0:020e: JGE 0x10c0:0213
10c0:0210: INC word ptr [BP + 0x18]
10c0:0213: PUSH word ptr [BP + 0x26]
10c0:0216: PUSH word ptr [BP + 0x24]
10c0:0219: PUSH word ptr [BP + 0x22]
10c0:021c: PUSH word ptr [BP + 0x20]
10c0:021f: PUSH word ptr [BP + 0x1e]
10c0:0222: PUSH word ptr [BP + 0x1c]
10c0:0225: PUSH word ptr [BP + 0x1a]
10c0:0228: PUSH word ptr [BP + 0x18]
10c0:022b: PUSH word ptr [BP + 0x16]
10c0:022e: PUSH word ptr [BP + 0x14]
10c0:0231: PUSH word ptr [BP + 0x12]
10c0:0234: PUSH word ptr [BP + 0x10]
10c0:0237: PUSH word ptr [BP + 0xe]
10c0:023a: PUSH word ptr [BP + 0xc]
10c0:023d: PUSH word ptr [BP + 0xa]
10c0:0240: PUSH word ptr [BP + 0x8]
10c0:0243: PUSH word ptr [BP + 0x6]
10c0:0246: CALLF 0x10c8:0040
10c0:024b: MOV AX,0x1
10c0:024e: POP SI
10c0:024f: POP DI
10c0:0250: LEA SP,[BP + -0x2]
10c0:0253: POP DS
10c0:0254: POP BP
10c0:0255: RETF 0x22
