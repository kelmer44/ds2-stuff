1060:0c44: PUSH BP
1060:0c45: MOV BP,SP
1060:0c47: PUSH DS
1060:0c48: MOV AX,0x10e8
1060:0c4b: MOV DS,AX
1060:0c4d: MOV AX,0xa
1060:0c50: CALLF 0x10d0:029e
1060:0c55: PUSH DI
1060:0c56: PUSH SI
1060:0c57: XOR AX,AX
1060:0c59: MOV word ptr [BP + -0xc],AX
1060:0c5c: MOV word ptr [BP + -0x8],AX
1060:0c5f: CMP word ptr [BP + 0xc],AX
1060:0c62: JG 0x1060:0c67
1060:0c64: JMP 0x1060:0d03
1060:0c67: MOV SI,word ptr [BP + 0x6]
1060:0c6a: MOV BX,word ptr [BP + -0x8]
1060:0c6d: CMP byte ptr [BX + SI],0x0
1060:0c70: JNZ 0x1060:0c75
1060:0c72: JMP 0x1060:0d03
1060:0c75: MOV BX,word ptr [BP + -0x8]
1060:0c78: CMP byte ptr [BX + SI],0x20
1060:0c7b: JZ 0x1060:0c8c
1060:0c7d: CMP byte ptr [BX + SI],0x2c
1060:0c80: JZ 0x1060:0c8c
1060:0c82: CMP byte ptr [BX + SI],0xd
1060:0c85: JZ 0x1060:0c8c
1060:0c87: CMP byte ptr [BX + SI],0xa
1060:0c8a: JNZ 0x1060:0c92
1060:0c8c: INC word ptr [BP + -0x8]
1060:0c8f: JMP 0x1060:0c75
1060:0c92: MOV DI,BX
1060:0c94: ADD BX,SI
1060:0c96: CMP byte ptr [BX],0x0
1060:0c99: JZ 0x1060:0d03
1060:0c9b: MOV CX,0x1
1060:0c9e: MOV BX,DI
1060:0ca0: ADD BX,SI
1060:0ca2: CMP byte ptr [BX],0x2d
1060:0ca5: JNZ 0x1060:0cab
1060:0ca7: MOV CX,0xffff
1060:0caa: INC DI
1060:0cab: MOV word ptr [BP + -0x6],0x0
1060:0cb0: MOV word ptr [BP + -0xa],CX
1060:0cb3: MOV CX,word ptr [BP + -0x6]
1060:0cb6: JMP 0x1060:0cd2
1060:0cb8: CMP byte ptr [BP + -0x3],0x39
1060:0cbc: JG 0x1060:0ce0
1060:0cbe: MOV AL,byte ptr [BP + -0x3]
1060:0cc1: CBW
1060:0cc2: MOV DX,CX
1060:0cc4: SHL DX,0x2
1060:0cc7: ADD DX,CX
1060:0cc9: ADD DX,DX
1060:0ccb: ADD AX,DX
1060:0ccd: SUB AX,0x30
1060:0cd0: MOV CX,AX
1060:0cd2: MOV BX,DI
1060:0cd4: ADD BX,SI
1060:0cd6: MOV AL,byte ptr [BX]
1060:0cd8: MOV byte ptr [BP + -0x3],AL
1060:0cdb: INC DI
1060:0cdc: CMP AL,0x30
1060:0cde: JGE 0x1060:0cb8
1060:0ce0: MOV word ptr [BP + -0x6],CX
1060:0ce3: MOV word ptr [BP + -0x8],DI
1060:0ce6: MOV AX,word ptr [BP + -0xa]
1060:0ce9: IMUL CX
1060:0ceb: LES BX,[BP + 0x8]
1060:0cee: ADD word ptr [BP + 0x8],0x2
1060:0cf2: MOV word ptr ES:[BX],AX
1060:0cf5: MOV AX,word ptr [BP + 0xc]
1060:0cf8: INC word ptr [BP + -0xc]
1060:0cfb: CMP word ptr [BP + -0xc],AX
1060:0cfe: JGE 0x1060:0d03
1060:0d00: JMP 0x1060:0c67
1060:0d03: MOV AX,word ptr [BP + -0xc]
1060:0d06: MOV word ptr [BP + -0x8],AX
1060:0d09: CMP AX,word ptr [BP + 0xc]
1060:0d0c: JGE 0x1060:0d22
1060:0d0e: XOR AX,AX
1060:0d10: MOV CX,word ptr [BP + 0xc]
1060:0d13: MOV BX,word ptr [BP + 0x8]
1060:0d16: MOV DX,word ptr [BP + 0xa]
1060:0d19: SUB CX,word ptr [BP + -0x8]
1060:0d1c: MOV DI,BX
1060:0d1e: MOV ES,DX
1060:0d20: STOSW.REP ES:DI
1060:0d22: MOV AX,word ptr [BP + -0xc]
1060:0d25: POP SI
1060:0d26: POP DI
1060:0d27: LEA SP,[BP + -0x2]
1060:0d2a: POP DS
1060:0d2b: POP BP
1060:0d2c: RETF
