10b0:0000: PUSH BP
10b0:0001: MOV BP,SP
10b0:0003: PUSH DS
10b0:0004: MOV AX,0x10e8
10b0:0007: MOV DS,AX
10b0:0009: MOV AX,0x40
10b0:000c: CALLF 0x10d0:029e
10b0:0011: PUSH DI
10b0:0012: PUSH SI
10b0:0013: MOV word ptr [BP + -0x4],0x0
10b0:0018: MOV word ptr [BP + -0x14],0x1
10b0:001d: LES BX,[BP + 0x6]
10b0:0020: MOV AX,word ptr [BP + 0xe]
10b0:0023: MOV SI,word ptr ES:[BX + 0x8]
10b0:0027: MOV word ptr [BP + -0x2e],AX
10b0:002a: MOV CX,word ptr [BP + 0x10]
10b0:002d: MOV word ptr [BP + -0x2c],CX
10b0:0030: ADD AX,word ptr [BP + 0x1e]
10b0:0033: MOV word ptr [BP + -0x2a],AX
10b0:0036: ADD CX,word ptr [BP + 0x20]
10b0:0039: MOV word ptr [BP + -0x28],CX
10b0:003c: LES BX,[BP + 0x16]
10b0:003f: CMP word ptr ES:[BX + 0x10],0x2
10b0:0044: JNZ 0x10b0:0052
10b0:0046: CMP word ptr ES:[BX + 0x12],0x0
10b0:004b: JNZ 0x10b0:0052
10b0:004d: MOV AX,0x1
10b0:0050: JMP 0x10b0:0054
10b0:0052: XOR AX,AX
10b0:0054: MOV word ptr [BP + -0x16],AX
10b0:0057: OR SI,SI
10b0:0059: JGE 0x10b0:0062
10b0:005b: MOV word ptr [BP + -0x14],0xffff
10b0:0060: NEG SI
10b0:0062: XOR AX,AX
10b0:0064: MOV word ptr [BP + -0x34],AX
10b0:0067: MOV word ptr [BP + -0x36],AX
10b0:006a: MOV word ptr [BP + -0x30],SI
10b0:006d: LES BX,[BP + 0x6]
10b0:0070: MOV CX,word ptr ES:[BX + 0x4]
10b0:0074: MOV word ptr [BP + -0x32],CX
10b0:0077: LEA CX,[BP + -0x3e]
10b0:007a: PUSH SS
10b0:007b: PUSH CX
10b0:007c: LEA CX,[BP + -0x2e]
10b0:007f: PUSH SS
10b0:0080: PUSH CX
10b0:0081: LEA CX,[BP + -0x36]
10b0:0084: PUSH SS
10b0:0085: PUSH CX
10b0:0086: CALLF 0x13a8:017c
10b0:008b: OR AX,AX
10b0:008d: JNZ 0x10b0:0092
10b0:008f: JMP 0x10b0:014e
10b0:0092: MOV word ptr [BP + -0x26],SI
10b0:0095: LES BX,[BP + 0x6]
10b0:0098: MOV AX,word ptr ES:[BX + 0x4]
10b0:009c: MUL word ptr ES:[BX + 0xe]
10b0:00a0: ADD AX,0x1f
10b0:00a3: AND AL,0xe7
10b0:00a5: SHR AX,0x3
10b0:00a8: SUB DX,DX
10b0:00aa: MOV word ptr [BP + -0x42],AX
10b0:00ad: MOV word ptr [BP + -0x40],DX
10b0:00b0: MOV word ptr [BP + -0x12],AX
10b0:00b3: MOV word ptr [BP + -0x10],DX
10b0:00b6: MOV AX,word ptr [BP + -0x3e]
10b0:00b9: MOV word ptr [BP + -0x1e],AX
10b0:00bc: MOV CX,word ptr [BP + -0x3c]
10b0:00bf: MOV word ptr [BP + -0x1c],CX
10b0:00c2: SUB AX,word ptr [BP + -0x3a]
10b0:00c5: NEG AX
10b0:00c7: MOV word ptr [BP + -0x1a],AX
10b0:00ca: MOV DI,word ptr [BP + -0x38]
10b0:00cd: SUB DI,CX
10b0:00cf: MOV AX,word ptr [BP + 0x12]
10b0:00d2: MOV DX,word ptr [BP + 0x14]
10b0:00d5: MOV word ptr [BP + -0xe],AX
10b0:00d8: MOV word ptr [BP + -0xc],DX
10b0:00db: MOV AX,word ptr [BP + -0x1e]
10b0:00de: SUB AX,word ptr [BP + 0xe]
10b0:00e1: MOV word ptr [BP + -0x20],AX
10b0:00e4: SUB CX,word ptr [BP + 0x10]
10b0:00e7: MOV word ptr [BP + -0x22],CX
10b0:00ea: CMP word ptr [BP + -0x16],0x0
10b0:00ee: JNZ 0x10b0:0154
10b0:00f0: LES BX,[BP + 0x16]
10b0:00f3: MOV AX,word ptr ES:[BX + 0x4]
10b0:00f7: MUL word ptr ES:[BX + 0xe]
10b0:00fb: ADD AX,0x1f
10b0:00fe: AND AL,0xe7
10b0:0100: SHR AX,0x3
10b0:0103: PUSH 0x0
10b0:0105: PUSH AX
10b0:0106: MOV AX,CX
10b0:0108: ADD AX,DI
10b0:010a: CWD
10b0:010b: MOV CX,word ptr ES:[BX + 0x8]
10b0:010f: SUB BX,BX
10b0:0111: SUB CX,AX
10b0:0113: SBB BX,DX
10b0:0115: MOV AX,word ptr [BP + 0x1c]
10b0:0118: CWD
10b0:0119: SUB CX,AX
10b0:011b: SBB BX,DX
10b0:011d: PUSH BX
10b0:011e: PUSH CX
10b0:011f: CALLF 0x10d0:052a
10b0:0124: MOV CX,AX
10b0:0126: MOV AX,word ptr [BP + -0x20]
10b0:0129: MOV BX,DX
10b0:012b: CWD
10b0:012c: ADD CX,AX
10b0:012e: ADC BX,DX
10b0:0130: MOV AX,word ptr [BP + 0x1a]
10b0:0133: CWD
10b0:0134: ADD CX,AX
10b0:0136: ADC BX,DX
10b0:0138: SUB DX,DX
10b0:013a: ADD word ptr [BP + -0xe],CX
10b0:013d: ADC DX,BX
10b0:013f: MOV CX,0x7c
10b0:0142: SHL DX,CL
10b0:0144: ADD word ptr [BP + -0xc],DX
10b0:0147: MOV word ptr [BP + -0x18],DI
10b0:014a: JMP 0x10b0:01e3
10b0:014e: MOV BX,word ptr [BP + -0x4]
10b0:0151: JMP 0x10b0:02f6
10b0:0154: MOV word ptr [BP + -0x24],0x0
10b0:0159: MOV word ptr [BP + -0x18],DI
10b0:015c: MOV AX,CX
10b0:015e: ADD AX,DI
10b0:0160: CWD
10b0:0161: LES BX,[BP + 0x16]
10b0:0164: MOV CX,word ptr ES:[BX + 0x8]
10b0:0168: SUB BX,BX
10b0:016a: SUB CX,AX
10b0:016c: SBB BX,DX
10b0:016e: MOV AX,word ptr [BP + 0x1c]
10b0:0171: CWD
10b0:0172: SUB CX,AX
10b0:0174: SBB BX,DX
10b0:0176: OR BX,BX
10b0:0178: JL 0x10b0:01da
10b0:017a: JG 0x10b0:0180
10b0:017c: OR CX,CX
10b0:017e: JZ 0x10b0:01da
10b0:0180: MOV AX,word ptr [BP + -0x22]
10b0:0183: ADD AX,DI
10b0:0185: CWD
10b0:0186: MOV BX,word ptr [BP + 0x16]
10b0:0189: MOV CX,word ptr ES:[BX + 0x8]
10b0:018d: SUB BX,BX
10b0:018f: SUB CX,AX
10b0:0191: SBB BX,DX
10b0:0193: MOV AX,word ptr [BP + 0x1c]
10b0:0196: CWD
10b0:0197: SUB CX,AX
10b0:0199: SBB BX,DX
10b0:019b: MOV word ptr [BP + -0xa],CX
10b0:019e: MOV word ptr [BP + -0x8],BX
10b0:01a1: MOV word ptr [BP + -0x6],CX
10b0:01a4: MOV word ptr [BP + -0x4],BX
10b0:01a7: NEG word ptr [BP + -0x6]
10b0:01aa: NEG word ptr [BP + -0x6]
10b0:01ad: ADC word ptr [BP + -0x4],-0x1
10b0:01b1: MOV SI,word ptr [BP + -0x4]
10b0:01b4: MOV DI,word ptr [BP + -0x6]
10b0:01b7: LES BX,[BP + -0xe]
10b0:01ba: MOV AX,word ptr ES:[BX + 0x2]
10b0:01be: ADD AX,0x4
10b0:01c1: SUB DX,DX
10b0:01c3: SUB BX,BX
10b0:01c5: MOV CX,AX
10b0:01c7: ADD word ptr [BP + -0xe],CX
10b0:01ca: ADC BX,DX
10b0:01cc: MOV CX,0x7c
10b0:01cf: SHL BX,CL
10b0:01d1: ADD word ptr [BP + -0xc],BX
10b0:01d4: DEC DI
10b0:01d5: JNZ 0x10b0:01b7
10b0:01d7: DEC SI
10b0:01d8: JNS 0x10b0:01b7
10b0:01da: MOV AX,word ptr [BP + -0x20]
10b0:01dd: ADD AX,word ptr [BP + 0x1a]
10b0:01e0: MOV word ptr [BP + -0xa],AX
10b0:01e3: MOV AX,word ptr [BP + 0xc]
10b0:01e6: MOV word ptr [BP + -0x4],AX
10b0:01e9: CMP word ptr [BP + -0x14],0x0
10b0:01ed: JGE 0x10b0:0204
10b0:01ef: NEG word ptr [BP + -0x12]
10b0:01f2: ADC word ptr [BP + -0x10],0x0
10b0:01f6: NEG word ptr [BP + -0x10]
10b0:01f9: MOV AX,word ptr [BP + -0x18]
10b0:01fc: ADD AX,word ptr [BP + -0x1c]
10b0:01ff: DEC AX
10b0:0200: CWD
10b0:0201: JMP 0x10b0:0217
10b0:0204: MOV AX,word ptr [BP + -0x18]
10b0:0207: ADD AX,word ptr [BP + -0x1c]
10b0:020a: CWD
10b0:020b: MOV CX,AX
10b0:020d: MOV AX,word ptr [BP + -0x26]
10b0:0210: MOV BX,DX
10b0:0212: CWD
10b0:0213: SUB AX,CX
10b0:0215: SBB DX,BX
10b0:0217: PUSH DX
10b0:0218: PUSH AX
10b0:0219: PUSH word ptr [BP + -0x40]
10b0:021c: PUSH word ptr [BP + -0x42]
10b0:021f: CALLF 0x10d0:052a
10b0:0224: MOV CX,AX
10b0:0226: MOV AX,word ptr [BP + -0x1e]
10b0:0229: MOV BX,DX
10b0:022b: CWD
10b0:022c: ADD CX,AX
10b0:022e: ADC BX,DX
10b0:0230: MOV word ptr [BP + -0x8],CX
10b0:0233: MOV word ptr [BP + -0x6],BX
10b0:0236: CMP word ptr [BP + 0x22],0x0
10b0:023a: JZ 0x10b0:0284
10b0:023c: CMP word ptr [BP + -0x16],0x0
10b0:0240: JZ 0x10b0:0245
10b0:0242: JMP 0x10b0:02c8
10b0:0245: PUSH word ptr [BP + -0x4]
10b0:0248: PUSH BX
10b0:0249: PUSH CX
10b0:024a: PUSH word ptr [BP + -0xc]
10b0:024d: PUSH word ptr [BP + -0xe]
10b0:0250: MOV AX,word ptr [BP + -0x1a]
10b0:0253: CWD
10b0:0254: PUSH DX
10b0:0255: PUSH AX
10b0:0256: MOV AX,word ptr [BP + -0x18]
10b0:0259: CWD
10b0:025a: PUSH DX
10b0:025b: PUSH AX
10b0:025c: PUSH word ptr [BP + -0x10]
10b0:025f: PUSH word ptr [BP + -0x12]
10b0:0262: LES BX,[BP + 0x16]
10b0:0265: MOV AX,word ptr ES:[BX + 0x4]
10b0:0269: MUL word ptr ES:[BX + 0xe]
10b0:026d: ADD AX,0x1f
10b0:0270: AND AL,0xe7
10b0:0272: SHR AX,0x3
10b0:0275: PUSH 0x0
10b0:0277: PUSH AX
10b0:0278: MOV AL,byte ptr [BP + 0x24]
10b0:027b: PUSH AX
10b0:027c: CALLF 0x10b8:0024
10b0:0281: JMP 0x10b0:02f3
10b0:0284: CMP word ptr [BP + -0x16],0x0
10b0:0288: JNZ 0x10b0:02c8
10b0:028a: MOV SI,word ptr [BP + 0x16]
10b0:028d: PUSH word ptr [BP + -0x4]
10b0:0290: PUSH BX
10b0:0291: PUSH CX
10b0:0292: PUSH word ptr [BP + -0xc]
10b0:0295: PUSH word ptr [BP + -0xe]
10b0:0298: MOV AX,word ptr [BP + -0x1a]
10b0:029b: CWD
10b0:029c: PUSH DX
10b0:029d: PUSH AX
10b0:029e: MOV AX,word ptr [BP + -0x18]
10b0:02a1: CWD
10b0:02a2: PUSH DX
10b0:02a3: PUSH AX
10b0:02a4: PUSH word ptr [BP + -0x10]
10b0:02a7: PUSH word ptr [BP + -0x12]
10b0:02aa: MOV ES,word ptr [BP + 0x18]
10b0:02ad: MOV AX,word ptr ES:[SI + 0x4]
10b0:02b1: MUL word ptr ES:[SI + 0xe]
10b0:02b5: ADD AX,0x1f
10b0:02b8: AND AL,0xe7
10b0:02ba: SHR AX,0x3
10b0:02bd: PUSH 0x0
10b0:02bf: PUSH AX
10b0:02c0: CALLF 0x10b8:0254
10b0:02c5: JMP 0x10b0:02f3
10b0:02c8: PUSH word ptr [BP + -0x4]
10b0:02cb: PUSH BX
10b0:02cc: PUSH CX
10b0:02cd: PUSH word ptr [BP + -0xc]
10b0:02d0: PUSH word ptr [BP + -0xe]
10b0:02d3: MOV AX,word ptr [BP + -0x1a]
10b0:02d6: CWD
10b0:02d7: PUSH DX
10b0:02d8: PUSH AX
10b0:02d9: MOV AX,word ptr [BP + -0x18]
10b0:02dc: CWD
10b0:02dd: PUSH DX
10b0:02de: PUSH AX
10b0:02df: PUSH 0x0
10b0:02e1: PUSH word ptr [BP + -0xa]
10b0:02e4: PUSH word ptr [BP + -0x10]
10b0:02e7: PUSH word ptr [BP + -0x12]
10b0:02ea: MOV AL,byte ptr [BP + 0x24]
10b0:02ed: PUSH AX
10b0:02ee: CALLF 0x10b8:0104
10b0:02f3: MOV BX,0x1
10b0:02f6: MOV AX,BX
10b0:02f8: POP SI
10b0:02f9: POP DI
10b0:02fa: LEA SP,[BP + -0x2]
10b0:02fd: POP DS
10b0:02fe: POP BP
10b0:02ff: RETF
