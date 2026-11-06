1018:09ce: PUSH BP
1018:09cf: MOV BP,SP
1018:09d1: PUSH DS
1018:09d2: MOV AX,0x10e8
1018:09d5: MOV DS,AX
1018:09d7: MOV AX,0xb6
1018:09da: CALLF 0x10d0:029e
1018:09df: PUSH DI
1018:09e0: PUSH SI
1018:09e1: MOV word ptr [BP + -0x4],0xfada
1018:09e6: PUSH word ptr [BP + 0x6]
1018:09e9: PUSH DS
1018:09ea: PUSH 0x12e2
1018:09ed: LEA AX,[BP + -0x24]
1018:09f0: PUSH SS
1018:09f1: PUSH AX
1018:09f2: CALLF 0x13a8:01f0
1018:09f7: ADD SP,0xa
1018:09fa: LEA AX,[BP + -0x24]
1018:09fd: PUSH SS
1018:09fe: PUSH AX
1018:09ff: LEA AX,[BP + 0xff54]
1018:0a03: PUSH SS
1018:0a04: PUSH AX
1018:0a05: PUSH 0x1001
1018:0a08: CALLF 0x13a8:0054
1018:0a0d: MOV word ptr [BP + -0x14],AX
1018:0a10: MOV AX,[0x5cda]
1018:0a13: ADD AX,0x140c
1018:0a16: CWD
1018:0a17: ADD AX,AX
1018:0a19: ADC DX,DX
1018:0a1b: PUSH DX
1018:0a1c: PUSH AX
1018:0a1d: CALLF 0x1090:0000
1018:0a22: ADD SP,0x4
1018:0a25: MOV word ptr [BP + -0xa],AX
1018:0a28: MOV word ptr [BP + -0x8],DX
1018:0a2b: MOV word ptr [BP + -0x12],AX
1018:0a2e: MOV word ptr [BP + -0x10],DX
1018:0a31: MOV CX,word ptr [0x36e]
1018:0a35: MOV word ptr [BP + -0x16],CX
1018:0a38: MOV word ptr [0x36e],0x1
1018:0a3e: MOV ES,DX
1018:0a40: MOV BX,AX
1018:0a42: MOV CX,word ptr [0x7c]
1018:0a46: MOV word ptr ES:[BX],CX
1018:0a49: ADD AX,0x2
1018:0a4c: SBB CX,CX
1018:0a4e: AND CX,0x80
1018:0a52: ADD DX,CX
1018:0a54: MOV word ptr [BP + -0xa],AX
1018:0a57: MOV word ptr [BP + -0x8],DX
1018:0a5a: MOV AX,[0x3cae]
1018:0a5d: LES BX,[BP + -0xa]
1018:0a60: ADD word ptr [BP + -0xa],0x2
1018:0a64: JNC 0x1018:0a6b
1018:0a66: ADD word ptr [BP + -0x8],0x80
1018:0a6b: MOV word ptr ES:[BX],AX
1018:0a6e: MOV AX,[0x3cb0]
1018:0a71: LES BX,[BP + -0xa]
1018:0a74: ADD word ptr [BP + -0xa],0x2
1018:0a78: JNC 0x1018:0a7f
1018:0a7a: ADD word ptr [BP + -0x8],0x80
1018:0a7f: MOV word ptr ES:[BX],AX
1018:0a82: MOV AX,[0x8e3c]
1018:0a85: LES BX,[BP + -0xa]
1018:0a88: ADD word ptr [BP + -0xa],0x2
1018:0a8c: JNC 0x1018:0a93
1018:0a8e: ADD word ptr [BP + -0x8],0x80
1018:0a93: MOV word ptr ES:[BX],AX
1018:0a96: MOV AX,[0x770e]
1018:0a99: ADD word ptr [BP + -0xa],0x8
1018:0a9d: SBB CX,CX
1018:0a9f: AND CX,0x80
1018:0aa3: ADD word ptr [BP + -0x8],CX
1018:0aa6: LES BX,[BP + -0xa]
1018:0aa9: MOV word ptr ES:[BX],AX
1018:0aac: MOV AX,BX
1018:0aae: MOV DX,ES
1018:0ab0: ADD AX,0x2
1018:0ab3: SBB CX,CX
1018:0ab5: AND CX,0x80
1018:0ab9: ADD DX,CX
1018:0abb: MOV word ptr [BP + -0xa],AX
1018:0abe: MOV word ptr [BP + -0x8],DX
1018:0ac1: MOV ES,DX
1018:0ac3: MOV BX,AX
1018:0ac5: MOV AX,[0x46]
1018:0ac8: MOV word ptr ES:[BX],AX
1018:0acb: MOV AX,BX
1018:0acd: ADD AX,0x2
1018:0ad0: SBB CX,CX
1018:0ad2: AND CX,0x80
1018:0ad6: ADD DX,CX
1018:0ad8: MOV word ptr [BP + -0xa],AX
1018:0adb: MOV word ptr [BP + -0x8],DX
1018:0ade: MOV BX,AX
1018:0ae0: MOV ES,DX
1018:0ae2: MOV word ptr ES:[BX],0xfada
1018:0ae7: ADD AX,0x2
1018:0aea: SBB CX,CX
1018:0aec: AND CX,0x80
1018:0af0: ADD DX,CX
1018:0af2: MOV word ptr [BP + -0xa],AX
1018:0af5: MOV word ptr [BP + -0x8],DX
1018:0af8: MOV word ptr [BP + -0xc],0x0
1018:0afd: CMP word ptr [0x5cda],0x0
1018:0b02: JLE 0x1018:0b23
1018:0b04: MOV SI,0x5e14
1018:0b07: MOV DI,word ptr [BP + -0xc]
1018:0b0a: LODSW SI
1018:0b0b: LES BX,[BP + -0xa]
1018:0b0e: ADD word ptr [BP + -0xa],0x2
1018:0b12: JNC 0x1018:0b19
1018:0b14: ADD word ptr [BP + -0x8],0x80
1018:0b19: MOV word ptr ES:[BX],AX
1018:0b1c: INC DI
1018:0b1d: CMP DI,word ptr [0x5cda]
1018:0b21: JL 0x1018:0b0a
1018:0b23: MOV SI,0x6116
1018:0b26: MOV DI,0x32
1018:0b29: MOV AX,word ptr [SI + 0x2]
1018:0b2c: OR AX,word ptr [SI]
1018:0b2e: JZ 0x1018:0b46
1018:0b30: LES BX,[BP + -0xa]
1018:0b33: ADD word ptr [BP + -0xa],0x2
1018:0b37: JNC 0x1018:0b3e
1018:0b39: ADD word ptr [BP + -0x8],0x80
1018:0b3e: MOV word ptr ES:[BX],0x1
1018:0b43: JMP 0x1018:0b59
1018:0b46: LES BX,[BP + -0xa]
1018:0b49: ADD word ptr [BP + -0xa],0x2
1018:0b4d: JNC 0x1018:0b54
1018:0b4f: ADD word ptr [BP + -0x8],0x80
1018:0b54: MOV word ptr ES:[BX],0x0
1018:0b59: ADD SI,0x4
1018:0b5c: DEC DI
1018:0b5d: JNZ 0x1018:0b29
1018:0b5f: MOV DI,0x6116
1018:0b62: MOV word ptr [BP + -0xe],0x32
1018:0b67: MOV AX,word ptr [DI + 0x2]
1018:0b6a: OR AX,word ptr [DI]
1018:0b6c: JZ 0x1018:0ba9
1018:0b6e: MOV word ptr [BP + -0x4],0x0
1018:0b73: LES BX,[DI]
1018:0b75: MOV AX,word ptr ES:[BX]
1018:0b78: INC AX
1018:0b79: OR AX,AX
1018:0b7b: JLE 0x1018:0ba9
1018:0b7d: XOR SI,SI
1018:0b7f: MOV word ptr [BP + -0x6],DI
1018:0b82: LES BX,[DI]
1018:0b84: MOV AX,word ptr ES:[BX + SI]
1018:0b87: LES BX,[BP + -0xa]
1018:0b8a: ADD word ptr [BP + -0xa],0x2
1018:0b8e: JNC 0x1018:0b95
1018:0b90: ADD word ptr [BP + -0x8],0x80
1018:0b95: MOV word ptr ES:[BX],AX
1018:0b98: ADD SI,0x2
1018:0b9b: LES BX,[DI]
1018:0b9d: MOV AX,word ptr ES:[BX]
1018:0ba0: INC AX
1018:0ba1: INC word ptr [BP + -0x4]
1018:0ba4: CMP word ptr [BP + -0x4],AX
1018:0ba7: JL 0x1018:0b82
1018:0ba9: ADD DI,0x4
1018:0bac: DEC word ptr [BP + -0xe]
1018:0baf: JNZ 0x1018:0b67
1018:0bb1: MOV DI,word ptr [BP + -0x14]
1018:0bb4: MOV SI,word ptr [BP + -0x12]
1018:0bb7: LES BX,[BP + -0xa]
1018:0bba: ADD word ptr [BP + -0xa],0x2
1018:0bbe: JNC 0x1018:0bc5
1018:0bc0: ADD word ptr [BP + -0x8],0x80
1018:0bc5: MOV word ptr ES:[BX],0xfada
1018:0bca: PUSH 0x4e16
1018:0bcd: PUSH -0x57c1
1018:0bd0: MOV CX,word ptr [BP + -0x10]
1018:0bd3: PUSH CX
1018:0bd4: PUSH SI
1018:0bd5: PUSH word ptr [BP + -0x8]
1018:0bd8: PUSH word ptr [BP + -0xa]
1018:0bdb: MOV word ptr [BP + 0xff50],SI
1018:0bdf: MOV word ptr [BP + 0xff52],CX
1018:0be3: MOV word ptr [BP + 0xff4c],SI
1018:0be7: MOV word ptr [BP + 0xff4e],CX
1018:0beb: CALLF 0x10d0:02d2
1018:0bf0: AND AL,0xfe
1018:0bf2: PUSH DX
1018:0bf3: PUSH AX
1018:0bf4: PUSH word ptr [BP + 0xff52]
1018:0bf8: PUSH word ptr [BP + 0xff50]
1018:0bfc: MOV word ptr [BP + 0xff48],AX
1018:0c00: MOV word ptr [BP + 0xff4a],DX
1018:0c04: PUSH CS
1018:0c05: CALL 0x1018:05c0
1018:0c08: ADD SP,0xc
1018:0c0b: PUSH DI
1018:0c0c: PUSH word ptr [BP + 0xff4e]
1018:0c10: PUSH word ptr [BP + 0xff4c]
1018:0c14: PUSH word ptr [BP + 0xff4a]
1018:0c18: PUSH word ptr [BP + 0xff48]
1018:0c1c: CALLF 0x13a8:00c0
1018:0c21: PUSH DI
1018:0c22: CALLF 0x13a8:0058
1018:0c27: PUSH word ptr [BP + 0xff4e]
1018:0c2b: PUSH word ptr [BP + 0xff4c]
1018:0c2f: CALLF 0x1090:0068
1018:0c34: ADD SP,0x4
1018:0c37: MOV AX,word ptr [BP + -0x16]
1018:0c3a: MOV [0x36e],AX
1018:0c3d: POP SI
1018:0c3e: POP DI
1018:0c3f: LEA SP,[BP + -0x2]
1018:0c42: POP DS
1018:0c43: POP BP
1018:0c44: RETF
