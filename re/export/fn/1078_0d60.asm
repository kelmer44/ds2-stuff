1078:0d60: PUSH BP
1078:0d61: MOV BP,SP
1078:0d63: PUSH DS
1078:0d64: MOV AX,0x10e8
1078:0d67: MOV DS,AX
1078:0d69: MOV AX,0x22
1078:0d6c: CALLF 0x10d0:029e
1078:0d71: PUSH DI
1078:0d72: PUSH SI
1078:0d73: MOV SI,word ptr [BP + 0xc]
1078:0d76: PUSH word ptr [BP + 0xa]
1078:0d79: PUSH word ptr [0x200a]
1078:0d7d: PUSH 0x0
1078:0d7f: CALLF 0x13a8:01e8
1078:0d84: MOV word ptr [BP + -0x16],AX
1078:0d87: MOV ES,word ptr [BP + 0xe]
1078:0d8a: MOV AX,word ptr ES:[SI + 0x2c]
1078:0d8e: OR AX,word ptr ES:[SI + 0x2a]
1078:0d92: JNZ 0x1078:0dba
1078:0d94: MOV AX,word ptr ES:[SI + 0x20]
1078:0d98: OR AX,word ptr ES:[SI + 0x1e]
1078:0d9c: JNZ 0x1078:0da1
1078:0d9e: JMP 0x1078:0fcc
1078:0da1: PUSH word ptr [BP + 0x10]
1078:0da4: PUSH ES
1078:0da5: PUSH SI
1078:0da6: PUSH word ptr [BP + 0xa]
1078:0da9: PUSH word ptr [BP + 0x8]
1078:0dac: PUSH word ptr [BP + 0x6]
1078:0daf: PUSH CS
1078:0db0: CALL 0x1078:0a00
1078:0db3: ADD SP,0xc
1078:0db6: JMP 0x1078:0fcc
1078:0dba: MOV AX,word ptr ES:[SI + 0x20]
1078:0dbe: OR AX,word ptr ES:[SI + 0x1e]
1078:0dc2: JNZ 0x1078:0dd8
1078:0dc4: PUSH word ptr [BP + 0x10]
1078:0dc7: PUSH ES
1078:0dc8: PUSH SI
1078:0dc9: PUSH word ptr [BP + 0xa]
1078:0dcc: PUSH word ptr [BP + 0x8]
1078:0dcf: PUSH word ptr [BP + 0x6]
1078:0dd2: PUSH CS
1078:0dd3: CALL 0x1078:0b8e
1078:0dd6: JMP 0x1078:0db3
1078:0dd8: LES BX,ES:[SI + 0x2a]
1078:0ddc: MOV CX,ES
1078:0dde: MOV AX,word ptr ES:[BX + 0xc]
1078:0de2: MOV ES,word ptr [BP + 0xe]
1078:0de5: ADD AX,word ptr ES:[SI + 0x2e]
1078:0de9: MOV word ptr [BP + -0x18],AX
1078:0dec: MOV ES,CX
1078:0dee: MOV DX,ES
1078:0df0: MOV ES,word ptr [BP + 0xe]
1078:0df3: MOV CX,ES
1078:0df5: MOV ES,DX
1078:0df7: MOV DI,word ptr ES:[BX + 0xe]
1078:0dfb: MOV word ptr [BP + -0x1e],BX
1078:0dfe: MOV word ptr [BP + -0x1c],ES
1078:0e01: MOV ES,CX
1078:0e03: ADD DI,word ptr ES:[SI + 0x30]
1078:0e07: MOV word ptr [BP + -0x1a],DI
1078:0e0a: MOV DX,word ptr ES:[SI + 0x22]
1078:0e0e: MOV word ptr [BP + -0xa],DX
1078:0e11: MOV word ptr [BP + -0x6],AX
1078:0e14: MOV BX,word ptr ES:[SI + 0x24]
1078:0e18: MOV word ptr [BP + -0xe],BX
1078:0e1b: MOV word ptr [BP + -0x8],BX
1078:0e1e: MOV CX,DI
1078:0e20: MOV word ptr [BP + -0x20],DX
1078:0e23: ADD DX,word ptr ES:[SI + 0x26]
1078:0e27: MOV word ptr [BP + -0x10],DX
1078:0e2a: MOV word ptr [BP + -0xc],DX
1078:0e2d: MOV DX,BX
1078:0e2f: LES BX,[BP + -0x1e]
1078:0e32: PUSH AX
1078:0e33: MOV AX,word ptr ES:[BX + 0x8]
1078:0e37: MOV word ptr [BP + -0x22],AX
1078:0e3a: POP AX
1078:0e3b: MOV BX,AX
1078:0e3d: MOV word ptr [BP + -0x24],AX
1078:0e40: ADD BX,word ptr [BP + -0x22]
1078:0e43: MOV ES,word ptr [BP + 0xe]
1078:0e46: ADD DX,word ptr ES:[SI + 0x28]
1078:0e4a: MOV word ptr [BP + -0x14],DX
1078:0e4d: MOV AX,DI
1078:0e4f: LES DI,[BP + -0x1e]
1078:0e52: ADD AX,word ptr ES:[DI + 0xa]
1078:0e56: MOV word ptr [BP + -0x4],AX
1078:0e59: MOV AX,word ptr [BP + -0x20]
1078:0e5c: CMP word ptr [BP + -0x24],AX
1078:0e5f: JGE 0x1078:0e67
1078:0e61: MOV AX,word ptr [BP + -0x6]
1078:0e64: MOV word ptr [BP + -0xa],AX
1078:0e67: CMP word ptr [BP + -0xe],CX
1078:0e6a: JLE 0x1078:0e6f
1078:0e6c: MOV word ptr [BP + -0x8],CX
1078:0e6f: CMP word ptr [BP + -0x10],BX
1078:0e72: JGE 0x1078:0e77
1078:0e74: MOV word ptr [BP + -0xc],BX
1078:0e77: MOV CX,word ptr [BP + -0x14]
1078:0e7a: CMP word ptr [BP + -0x4],DX
1078:0e7d: JLE 0x1078:0e82
1078:0e7f: MOV CX,word ptr [BP + -0x4]
1078:0e82: MOV DI,word ptr [BP + 0x6]
1078:0e85: MOV AX,word ptr [BP + -0xa]
1078:0e88: MOV ES,word ptr [BP + 0x8]
1078:0e8b: CMP word ptr ES:[DI + 0x34a],AX
1078:0e90: JLE 0x1078:0e9a
1078:0e92: MOV AX,word ptr ES:[DI + 0x34a]
1078:0e97: MOV word ptr [BP + -0xa],AX
1078:0e9a: MOV AX,word ptr [BP + -0x8]
1078:0e9d: CMP word ptr ES:[DI + 0x34e],AX
1078:0ea2: JLE 0x1078:0eac
1078:0ea4: MOV AX,word ptr ES:[DI + 0x34e]
1078:0ea9: MOV word ptr [BP + -0x8],AX
1078:0eac: MOV AX,word ptr [BP + -0xc]
1078:0eaf: CMP word ptr ES:[DI + 0x34c],AX
1078:0eb4: JGE 0x1078:0ebb
1078:0eb6: MOV AX,word ptr ES:[DI + 0x34c]
1078:0ebb: CMP word ptr ES:[DI + 0x350],CX
1078:0ec0: JGE 0x1078:0ec7
1078:0ec2: MOV CX,word ptr ES:[DI + 0x350]
1078:0ec7: SUB AX,word ptr [BP + -0xa]
1078:0eca: MOV word ptr [BP + -0x6],AX
1078:0ecd: SUB CX,word ptr [BP + -0x8]
1078:0ed0: MOV word ptr [BP + -0x4],CX
1078:0ed3: OR AX,AX
1078:0ed5: JG 0x1078:0eda
1078:0ed7: JMP 0x1078:0fcc
1078:0eda: OR CX,CX
1078:0edc: JG 0x1078:0ee1
1078:0ede: JMP 0x1078:0fcc
1078:0ee1: PUSH CX
1078:0ee2: PUSH AX
1078:0ee3: PUSH word ptr [BP + 0xa]
1078:0ee6: PUSH ES
1078:0ee7: PUSH DI
1078:0ee8: PUSH CS
1078:0ee9: CALL 0x1078:0172
1078:0eec: ADD SP,0xa
1078:0eef: MOV AX,word ptr [BP + -0x18]
1078:0ef2: MOV ES,word ptr [BP + 0xe]
1078:0ef5: MOV word ptr ES:[SI + 0x3e],AX
1078:0ef9: MOV AX,word ptr [BP + -0x1a]
1078:0efc: MOV word ptr ES:[SI + 0x40],AX
1078:0f00: MOV AX,word ptr ES:[SI + 0x38]
1078:0f04: OR AX,word ptr ES:[SI + 0x36]
1078:0f08: JZ 0x1078:0f3c
1078:0f0a: PUSH 0x0
1078:0f0c: MOV AX,word ptr [BP + -0x8]
1078:0f0f: MOV ES,word ptr [BP + 0xe]
1078:0f12: SUB AX,word ptr ES:[SI + 0x3c]
1078:0f16: PUSH AX
1078:0f17: MOV AX,word ptr [BP + -0xa]
1078:0f1a: SUB AX,word ptr ES:[SI + 0x3a]
1078:0f1e: PUSH AX
1078:0f1f: PUSH word ptr ES:[SI + 0x38]
1078:0f23: PUSH word ptr ES:[SI + 0x36]
1078:0f27: PUSH 0x0
1078:0f29: PUSH 0x0
1078:0f2b: MOV ES,word ptr [BP + 0x8]
1078:0f2e: PUSH word ptr ES:[DI + 0x8]
1078:0f32: NOP
1078:0f33: PUSH CS
1078:0f34: CALL 0x1078:1aea
1078:0f37: ADD SP,0x10
1078:0f3a: JMP 0x1078:0f56
1078:0f3c: MOV ES,word ptr [BP + 0x8]
1078:0f3f: PUSH word ptr ES:[DI + 0x8]
1078:0f43: PUSH 0x0
1078:0f45: PUSH 0x0
1078:0f47: PUSH word ptr [BP + -0x6]
1078:0f4a: PUSH word ptr [BP + -0x4]
1078:0f4d: PUSH 0x0
1078:0f4f: PUSH 0x42
1078:0f51: CALLF 0x13a8:00d4
1078:0f56: MOV ES,word ptr [BP + 0xe]
1078:0f59: PUSH word ptr ES:[SI + 0x30]
1078:0f5d: PUSH word ptr [BP + -0x4]
1078:0f60: PUSH word ptr [BP + -0x6]
1078:0f63: PUSH word ptr [BP + -0x8]
1078:0f66: PUSH word ptr [BP + -0xa]
1078:0f69: PUSH word ptr [BP + 0x8]
1078:0f6c: PUSH DI
1078:0f6d: PUSH CS
1078:0f6e: CALL 0x1078:06f4
1078:0f71: ADD SP,0xe
1078:0f74: CMP word ptr [0x8a],0x0
1078:0f79: JZ 0x1078:0f8f
1078:0f7b: PUSH word ptr [BP + -0x8]
1078:0f7e: PUSH word ptr [BP + -0xa]
1078:0f81: MOV ES,word ptr [BP + 0x8]
1078:0f84: PUSH word ptr ES:[DI + 0x8]
1078:0f88: PUSH CS
1078:0f89: CALL 0x1078:0000
1078:0f8c: ADD SP,0x6
1078:0f8f: PUSH word ptr [BP + 0xa]
1078:0f92: PUSH word ptr [BP + -0xa]
1078:0f95: PUSH word ptr [BP + -0x8]
1078:0f98: MOV ES,word ptr [BP + 0x8]
1078:0f9b: PUSH word ptr ES:[DI + 0xa]
1078:0f9f: PUSH word ptr ES:[DI + 0xc]
1078:0fa3: PUSH word ptr ES:[DI + 0x8]
1078:0fa7: PUSH 0x0
1078:0fa9: PUSH 0x0
1078:0fab: CALLF 0x13a8:0218
1078:0fb0: MOV ES,word ptr [BP + 0x8]
1078:0fb3: PUSH word ptr ES:[DI + 0x8]
1078:0fb7: PUSH word ptr [0x76f6]
1078:0fbb: CALLF 0x13a8:00e0
1078:0fc0: MOV ES,word ptr [BP + 0x8]
1078:0fc3: PUSH word ptr ES:[DI + 0x2]
1078:0fc7: CALLF 0x13a8:00f4
1078:0fcc: PUSH word ptr [BP + 0xa]
1078:0fcf: PUSH word ptr [BP + -0x16]
1078:0fd2: PUSH 0x0
1078:0fd4: CALLF 0x13a8:01e8
1078:0fd9: MOV ES,word ptr [BP + 0xe]
1078:0fdc: MOV AX,word ptr ES:[SI + 0x2a]
1078:0fe0: MOV DX,word ptr ES:[SI + 0x2c]
1078:0fe4: MOV word ptr ES:[SI + 0x1e],AX
1078:0fe8: MOV word ptr ES:[SI + 0x20],DX
1078:0fec: MOV AX,word ptr ES:[SI + 0x2c]
1078:0ff0: OR AX,word ptr ES:[SI + 0x2a]
1078:0ff4: JZ 0x1078:1027
1078:0ff6: MOV DS,word ptr [BP + 0xe]
1078:0ff9: LES BX,[SI + 0x2a]
1078:0ffc: MOV AX,word ptr ES:[BX + 0xc]
1078:1000: ADD AX,word ptr [SI + 0x2e]
1078:1003: MOV word ptr [SI + 0x22],AX
1078:1006: LES BX,[SI + 0x2a]
1078:1009: MOV AX,word ptr ES:[BX + 0xe]
1078:100d: ADD AX,word ptr [SI + 0x30]
1078:1010: MOV word ptr [SI + 0x24],AX
1078:1013: LES BX,[SI + 0x2a]
1078:1016: MOV AX,word ptr ES:[BX + 0x8]
1078:101a: MOV word ptr [SI + 0x26],AX
1078:101d: LES BX,[SI + 0x2a]
1078:1020: MOV AX,word ptr ES:[BX + 0xa]
1078:1024: MOV word ptr [SI + 0x28],AX
1078:1027: POP SI
1078:1028: POP DI
1078:1029: LEA SP,[BP + -0x2]
1078:102c: POP DS
1078:102d: POP BP
1078:102e: RETF
