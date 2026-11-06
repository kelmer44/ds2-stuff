1078:0b8e: PUSH BP
1078:0b8f: MOV BP,SP
1078:0b91: PUSH DS
1078:0b92: MOV AX,0x10e8
1078:0b95: MOV DS,AX
1078:0b97: MOV AX,0x14
1078:0b9a: CALLF 0x10d0:029e
1078:0b9f: PUSH DI
1078:0ba0: PUSH SI
1078:0ba1: MOV SI,word ptr [BP + 0x6]
1078:0ba4: LES BX,[BP + 0xc]
1078:0ba7: LES BX,ES:[BX + 0x2a]
1078:0bab: MOV CX,ES
1078:0bad: MOV AX,word ptr ES:[BX + 0xc]
1078:0bb1: LES DI,[BP + 0xc]
1078:0bb4: ADD AX,word ptr ES:[DI + 0x2e]
1078:0bb8: MOV word ptr [BP + -0xa],AX
1078:0bbb: PUSH AX
1078:0bbc: LEA AX,[DI + 0x30]
1078:0bbf: MOV word ptr [BP + -0x12],AX
1078:0bc2: MOV word ptr [BP + -0x10],ES
1078:0bc5: POP AX
1078:0bc6: MOV ES,CX
1078:0bc8: MOV DX,word ptr ES:[BX + 0xe]
1078:0bcc: MOV word ptr [BP + -0x16],BX
1078:0bcf: MOV word ptr [BP + -0x14],ES
1078:0bd2: LES BX,[BP + -0x12]
1078:0bd5: ADD DX,word ptr ES:[BX]
1078:0bd8: MOV word ptr [BP + -0xc],DX
1078:0bdb: LES BX,[BP + -0x16]
1078:0bde: MOV DI,BX
1078:0be0: MOV BX,word ptr ES:[BX + 0x8]
1078:0be4: MOV CX,word ptr ES:[DI + 0xa]
1078:0be8: MOV word ptr [BP + -0x4],CX
1078:0beb: MOV word ptr [BP + -0xe],AX
1078:0bee: MOV CX,DX
1078:0bf0: MOV ES,word ptr [BP + 0x8]
1078:0bf3: CMP AX,word ptr ES:[SI + 0x34a]
1078:0bf8: JGE 0x1078:0c02
1078:0bfa: MOV AX,word ptr ES:[SI + 0x34a]
1078:0bff: MOV word ptr [BP + -0xe],AX
1078:0c02: MOV word ptr [BP + -0x8],CX
1078:0c05: CMP word ptr ES:[SI + 0x34e],CX
1078:0c0a: JLE 0x1078:0c14
1078:0c0c: MOV AX,word ptr ES:[SI + 0x34e]
1078:0c11: MOV word ptr [BP + -0x8],AX
1078:0c14: MOV word ptr [BP + -0x6],BX
1078:0c17: MOV AX,word ptr [BP + -0xa]
1078:0c1a: ADD AX,BX
1078:0c1c: CMP AX,word ptr ES:[SI + 0x34c]
1078:0c21: JLE 0x1078:0c2e
1078:0c23: MOV AX,word ptr ES:[SI + 0x34c]
1078:0c28: SUB AX,word ptr [BP + -0xa]
1078:0c2b: MOV word ptr [BP + -0x6],AX
1078:0c2e: MOV AX,DX
1078:0c30: ADD AX,word ptr [BP + -0x4]
1078:0c33: CMP AX,word ptr ES:[SI + 0x350]
1078:0c38: JLE 0x1078:0c44
1078:0c3a: MOV AX,word ptr ES:[SI + 0x350]
1078:0c3f: SUB AX,DX
1078:0c41: MOV word ptr [BP + -0x4],AX
1078:0c44: MOV AX,word ptr [BP + -0xa]
1078:0c47: LES BX,[BP + 0xc]
1078:0c4a: MOV word ptr ES:[BX + 0x3e],AX
1078:0c4e: MOV AX,word ptr [BP + -0xc]
1078:0c51: MOV word ptr ES:[BX + 0x40],AX
1078:0c55: PUSH word ptr [BP + 0x10]
1078:0c58: PUSH ES
1078:0c59: PUSH BX
1078:0c5a: PUSH word ptr [BP + 0x8]
1078:0c5d: PUSH SI
1078:0c5e: PUSH CS
1078:0c5f: CALL 0x1078:08c0
1078:0c62: ADD SP,0xa
1078:0c65: CMP word ptr [BP + -0x6],0x0
1078:0c69: JG 0x1078:0c6e
1078:0c6b: JMP 0x1078:0d58
1078:0c6e: CMP word ptr [BP + -0x4],0x0
1078:0c72: JG 0x1078:0c77
1078:0c74: JMP 0x1078:0d58
1078:0c77: PUSH word ptr [BP + -0x4]
1078:0c7a: PUSH word ptr [BP + -0x6]
1078:0c7d: PUSH word ptr [BP + 0xa]
1078:0c80: PUSH word ptr [BP + 0x8]
1078:0c83: PUSH SI
1078:0c84: PUSH CS
1078:0c85: CALL 0x1078:0172
1078:0c88: ADD SP,0xa
1078:0c8b: LES BX,[BP + 0xc]
1078:0c8e: MOV AX,word ptr ES:[BX + 0x38]
1078:0c92: OR AX,word ptr ES:[BX + 0x36]
1078:0c96: JZ 0x1078:0cc8
1078:0c98: PUSH 0x0
1078:0c9a: MOV AX,word ptr [BP + -0x8]
1078:0c9d: SUB AX,word ptr ES:[BX + 0x3c]
1078:0ca1: PUSH AX
1078:0ca2: MOV AX,word ptr [BP + -0xe]
1078:0ca5: SUB AX,word ptr ES:[BX + 0x3a]
1078:0ca9: PUSH AX
1078:0caa: PUSH word ptr ES:[BX + 0x38]
1078:0cae: PUSH word ptr ES:[BX + 0x36]
1078:0cb2: PUSH 0x0
1078:0cb4: PUSH 0x0
1078:0cb6: MOV ES,word ptr [BP + 0x8]
1078:0cb9: PUSH word ptr ES:[SI + 0x8]
1078:0cbd: NOP
1078:0cbe: PUSH CS
1078:0cbf: CALL 0x1078:1aea
1078:0cc2: ADD SP,0x10
1078:0cc5: JMP 0x1078:0ce2
1078:0cc8: MOV ES,word ptr [BP + 0x8]
1078:0ccb: PUSH word ptr ES:[SI + 0x8]
1078:0ccf: PUSH 0x0
1078:0cd1: PUSH 0x0
1078:0cd3: PUSH word ptr [BP + -0x6]
1078:0cd6: PUSH word ptr [BP + -0x4]
1078:0cd9: PUSH 0x0
1078:0cdb: PUSH 0x42
1078:0cdd: CALLF 0x13a8:00d4
1078:0ce2: LES BX,[BP + 0xc]
1078:0ce5: PUSH word ptr ES:[BX + 0x30]
1078:0ce9: PUSH word ptr [BP + -0x4]
1078:0cec: PUSH word ptr [BP + -0x6]
1078:0cef: PUSH word ptr [BP + -0x8]
1078:0cf2: PUSH word ptr [BP + -0xe]
1078:0cf5: PUSH word ptr [BP + 0x8]
1078:0cf8: PUSH SI
1078:0cf9: PUSH CS
1078:0cfa: CALL 0x1078:06f4
1078:0cfd: ADD SP,0xe
1078:0d00: CMP word ptr [0x8a],0x0
1078:0d05: JZ 0x1078:0d1b
1078:0d07: PUSH word ptr [BP + -0x8]
1078:0d0a: PUSH word ptr [BP + -0xe]
1078:0d0d: MOV ES,word ptr [BP + 0x8]
1078:0d10: PUSH word ptr ES:[SI + 0x8]
1078:0d14: PUSH CS
1078:0d15: CALL 0x1078:0000
1078:0d18: ADD SP,0x6
1078:0d1b: PUSH word ptr [BP + 0xa]
1078:0d1e: PUSH word ptr [BP + -0xe]
1078:0d21: PUSH word ptr [BP + -0x8]
1078:0d24: MOV ES,word ptr [BP + 0x8]
1078:0d27: PUSH word ptr ES:[SI + 0xa]
1078:0d2b: PUSH word ptr ES:[SI + 0xc]
1078:0d2f: PUSH word ptr ES:[SI + 0x8]
1078:0d33: PUSH 0x0
1078:0d35: PUSH 0x0
1078:0d37: CALLF 0x13a8:0218
1078:0d3c: MOV ES,word ptr [BP + 0x8]
1078:0d3f: PUSH word ptr ES:[SI + 0x8]
1078:0d43: PUSH word ptr [0x76f6]
1078:0d47: CALLF 0x13a8:00e0
1078:0d4c: MOV ES,word ptr [BP + 0x8]
1078:0d4f: PUSH word ptr ES:[SI + 0x2]
1078:0d53: CALLF 0x13a8:00f4
1078:0d58: POP SI
1078:0d59: POP DI
1078:0d5a: LEA SP,[BP + -0x2]
1078:0d5d: POP DS
1078:0d5e: POP BP
1078:0d5f: RETF
