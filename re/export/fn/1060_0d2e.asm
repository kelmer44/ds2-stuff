1060:0d2e: PUSH BP
1060:0d2f: MOV BP,SP
1060:0d31: PUSH DS
1060:0d32: MOV AX,0x10e8
1060:0d35: MOV DS,AX
1060:0d37: MOV AX,0xe
1060:0d3a: CALLF 0x10d0:029e
1060:0d3f: PUSH DI
1060:0d40: PUSH SI
1060:0d41: XOR AX,AX
1060:0d43: MOV word ptr [BP + -0x10],AX
1060:0d46: MOV word ptr [BP + -0x8],AX
1060:0d49: CMP word ptr [BP + 0xc],AX
1060:0d4c: JG 0x1060:0d51
1060:0d4e: JMP 0x1060:0ef2
1060:0d51: MOV SI,word ptr [BP + 0x6]
1060:0d54: MOV BX,word ptr [BP + -0x8]
1060:0d57: CMP byte ptr [BX + SI],0x0
1060:0d5a: JNZ 0x1060:0d5f
1060:0d5c: JMP 0x1060:0ef2
1060:0d5f: MOV BX,word ptr [BP + -0x8]
1060:0d62: CMP byte ptr [BX + SI],0x20
1060:0d65: JZ 0x1060:0d76
1060:0d67: CMP byte ptr [BX + SI],0x2c
1060:0d6a: JZ 0x1060:0d76
1060:0d6c: CMP byte ptr [BX + SI],0xd
1060:0d6f: JZ 0x1060:0d76
1060:0d71: CMP byte ptr [BX + SI],0xa
1060:0d74: JNZ 0x1060:0d7c
1060:0d76: INC word ptr [BP + -0x8]
1060:0d79: JMP 0x1060:0d5f
1060:0d7c: MOV DI,BX
1060:0d7e: ADD BX,SI
1060:0d80: CMP byte ptr [BX],0x0
1060:0d83: JNZ 0x1060:0d88
1060:0d85: JMP 0x1060:0ef2
1060:0d88: MOV CX,0x1
1060:0d8b: MOV BX,DI
1060:0d8d: ADD BX,SI
1060:0d8f: CMP byte ptr [BX],0x2d
1060:0d92: JNZ 0x1060:0d98
1060:0d94: MOV CX,0xffff
1060:0d97: INC DI
1060:0d98: MOV word ptr [BP + -0xa],0x0
1060:0d9d: MOV word ptr [BP + -0xe],CX
1060:0da0: MOV SI,word ptr [BP + -0xa]
1060:0da3: MOV CX,word ptr [BP + 0x6]
1060:0da6: JMP 0x1060:0dc2
1060:0da8: CMP byte ptr [BP + -0x3],0x39
1060:0dac: JG 0x1060:0dce
1060:0dae: MOV AL,byte ptr [BP + -0x3]
1060:0db1: CBW
1060:0db2: MOV DX,SI
1060:0db4: SHL DX,0x2
1060:0db7: ADD DX,SI
1060:0db9: ADD DX,DX
1060:0dbb: ADD AX,DX
1060:0dbd: SUB AX,0x30
1060:0dc0: MOV SI,AX
1060:0dc2: MOV BX,CX
1060:0dc4: MOV AL,byte ptr [BX + DI]
1060:0dc6: MOV byte ptr [BP + -0x3],AL
1060:0dc9: INC DI
1060:0dca: CMP AL,0x30
1060:0dcc: JGE 0x1060:0da8
1060:0dce: MOV word ptr [BP + -0xa],SI
1060:0dd1: MOV BX,CX
1060:0dd3: CMP byte ptr [BX + DI + -0x1],0x28
1060:0dd7: JZ 0x1060:0ddc
1060:0dd9: JMP 0x1060:0ed2
1060:0ddc: XOR SI,SI
1060:0dde: JMP 0x1060:0df5
1060:0de0: CMP AL,0x39
1060:0de2: JG 0x1060:0dff
1060:0de4: CBW
1060:0de5: MOV DX,SI
1060:0de7: SHL DX,0x2
1060:0dea: ADD DX,SI
1060:0dec: ADD DX,DX
1060:0dee: ADD AX,DX
1060:0df0: SUB AX,0x30
1060:0df3: MOV SI,AX
1060:0df5: MOV AL,byte ptr [BX + DI]
1060:0df7: MOV byte ptr [BP + -0x3],AL
1060:0dfa: INC DI
1060:0dfb: CMP AL,0x30
1060:0dfd: JGE 0x1060:0de0
1060:0dff: MOV word ptr [BP + -0x8],DI
1060:0e02: MOV BX,DI
1060:0e04: ADD BX,word ptr [BP + 0x6]
1060:0e07: CMP byte ptr [BX + -0x1],0x29
1060:0e0b: JNZ 0x1060:0e34
1060:0e0d: OR SI,SI
1060:0e0f: JG 0x1060:0e14
1060:0e11: JMP 0x1060:0ee7
1060:0e14: MOV AX,word ptr [BP + -0xe]
1060:0e17: IMUL word ptr [BP + -0xa]
1060:0e1a: MOV CX,SI
1060:0e1c: MOV BX,word ptr [BP + 0x8]
1060:0e1f: MOV DX,word ptr [BP + 0xa]
1060:0e22: MOV DI,BX
1060:0e24: MOV ES,DX
1060:0e26: STOSW.REP ES:DI
1060:0e28: ADD word ptr [BP + -0x10],SI
1060:0e2b: ADD SI,SI
1060:0e2d: ADD word ptr [BP + 0x8],SI
1060:0e30: JMP 0x1060:0ee7
1060:0e34: MOV word ptr [BP + -0xc],SI
1060:0e37: MOV word ptr [BP + -0x6],0x0
1060:0e3c: MOV AX,word ptr [BP + -0xe]
1060:0e3f: IMUL word ptr [BP + -0xa]
1060:0e42: MOV word ptr [BP + -0xa],AX
1060:0e45: MOV BX,DI
1060:0e47: MOV SI,word ptr [BP + 0x6]
1060:0e4a: CMP byte ptr [BX + SI],0x2d
1060:0e4d: JNZ 0x1060:0e58
1060:0e4f: MOV BX,0xffff
1060:0e52: INC word ptr [BP + -0x8]
1060:0e55: JMP 0x1060:0e5b
1060:0e58: MOV BX,0x1
1060:0e5b: MOV word ptr [BP + -0xe],BX
1060:0e5e: MOV DI,word ptr [BP + -0x8]
1060:0e61: MOV CX,word ptr [BP + -0x6]
1060:0e64: JMP 0x1060:0e80
1060:0e66: CMP byte ptr [BP + -0x3],0x39
1060:0e6a: JG 0x1060:0e8e
1060:0e6c: MOV AL,byte ptr [BP + -0x3]
1060:0e6f: CBW
1060:0e70: MOV DX,CX
1060:0e72: SHL DX,0x2
1060:0e75: ADD DX,CX
1060:0e77: ADD DX,DX
1060:0e79: ADD AX,DX
1060:0e7b: SUB AX,0x30
1060:0e7e: MOV CX,AX
1060:0e80: MOV BX,DI
1060:0e82: ADD BX,SI
1060:0e84: MOV AL,byte ptr [BX]
1060:0e86: MOV byte ptr [BP + -0x3],AL
1060:0e89: INC DI
1060:0e8a: CMP AL,0x30
1060:0e8c: JGE 0x1060:0e66
1060:0e8e: MOV word ptr [BP + -0x8],DI
1060:0e91: MOV AX,word ptr [BP + -0xe]
1060:0e94: IMUL CX
1060:0e96: MOV word ptr [BP + -0x6],AX
1060:0e99: MOV BX,word ptr [BP + 0x6]
1060:0e9c: MOV SI,DI
1060:0e9e: CMP byte ptr [BX + SI + -0x1],0x29
1060:0ea2: JNZ 0x1060:0ee7
1060:0ea4: MOV word ptr [BP + -0x4],0x0
1060:0ea9: CMP word ptr [BP + -0xc],0x0
1060:0ead: JLE 0x1060:0ee7
1060:0eaf: MOV CX,word ptr [BP + -0xc]
1060:0eb2: ADD word ptr [BP + -0x10],CX
1060:0eb5: MOV SI,word ptr [BP + -0xa]
1060:0eb8: MOV BX,word ptr [BP + 0x8]
1060:0ebb: MOV ES,word ptr [BP + 0xa]
1060:0ebe: MOV DI,BX
1060:0ec0: ADD BX,0x2
1060:0ec3: MOV word ptr ES:[DI],SI
1060:0ec6: ADD SI,word ptr [BP + -0x6]
1060:0ec9: DEC CX
1060:0eca: JNZ 0x1060:0ebe
1060:0ecc: MOV word ptr [BP + 0x8],BX
1060:0ecf: JMP 0x1060:0ee7
1060:0ed2: MOV word ptr [BP + -0x8],DI
1060:0ed5: MOV AX,word ptr [BP + -0xe]
1060:0ed8: IMUL SI
1060:0eda: LES BX,[BP + 0x8]
1060:0edd: ADD word ptr [BP + 0x8],0x2
1060:0ee1: MOV word ptr ES:[BX],AX
1060:0ee4: INC word ptr [BP + -0x10]
1060:0ee7: MOV AX,word ptr [BP + 0xc]
1060:0eea: CMP word ptr [BP + -0x10],AX
1060:0eed: JGE 0x1060:0ef2
1060:0eef: JMP 0x1060:0d51
1060:0ef2: MOV AX,word ptr [BP + -0x10]
1060:0ef5: MOV word ptr [BP + -0x8],AX
1060:0ef8: CMP AX,word ptr [BP + 0xc]
1060:0efb: JGE 0x1060:0f11
1060:0efd: XOR AX,AX
1060:0eff: MOV CX,word ptr [BP + 0xc]
1060:0f02: MOV BX,word ptr [BP + 0x8]
1060:0f05: MOV DX,word ptr [BP + 0xa]
1060:0f08: SUB CX,word ptr [BP + -0x8]
1060:0f0b: MOV DI,BX
1060:0f0d: MOV ES,DX
1060:0f0f: STOSW.REP ES:DI
1060:0f11: MOV AX,word ptr [BP + -0x10]
1060:0f14: POP SI
1060:0f15: POP DI
1060:0f16: LEA SP,[BP + -0x2]
1060:0f19: POP DS
1060:0f1a: POP BP
1060:0f1b: RETF
