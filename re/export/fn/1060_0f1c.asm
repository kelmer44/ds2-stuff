1060:0f1c: PUSH BP
1060:0f1d: MOV BP,SP
1060:0f1f: PUSH DS
1060:0f20: MOV AX,0x10e8
1060:0f23: MOV DS,AX
1060:0f25: MOV AX,0x12
1060:0f28: CALLF 0x10d0:029e
1060:0f2d: PUSH DI
1060:0f2e: PUSH SI
1060:0f2f: XOR AX,AX
1060:0f31: MOV word ptr [BP + -0x10],AX
1060:0f34: MOV word ptr [BP + -0xe],AX
1060:0f37: CMP word ptr [BP + 0xc],AX
1060:0f3a: JG 0x1060:0f3f
1060:0f3c: JMP 0x1060:1014
1060:0f3f: MOV SI,word ptr [BP + 0x6]
1060:0f42: MOV BX,word ptr [BP + -0xe]
1060:0f45: CMP byte ptr [BX + SI],0x0
1060:0f48: JNZ 0x1060:0f4d
1060:0f4a: JMP 0x1060:1014
1060:0f4d: MOV BX,word ptr [BP + -0xe]
1060:0f50: CMP byte ptr [BX + SI],0x20
1060:0f53: JZ 0x1060:0f64
1060:0f55: CMP byte ptr [BX + SI],0x2c
1060:0f58: JZ 0x1060:0f64
1060:0f5a: CMP byte ptr [BX + SI],0xd
1060:0f5d: JZ 0x1060:0f64
1060:0f5f: CMP byte ptr [BX + SI],0xa
1060:0f62: JNZ 0x1060:0f6a
1060:0f64: INC word ptr [BP + -0xe]
1060:0f67: JMP 0x1060:0f4d
1060:0f6a: CMP byte ptr [BX + SI],0x0
1060:0f6d: JNZ 0x1060:0f72
1060:0f6f: JMP 0x1060:1014
1060:0f72: MOV word ptr [BP + -0xc],0x1
1060:0f77: MOV word ptr [BP + -0xa],0x0
1060:0f7c: CMP byte ptr [BX + SI],0x2d
1060:0f7f: JNZ 0x1060:0f8e
1060:0f81: MOV word ptr [BP + -0xc],0xffff
1060:0f86: MOV word ptr [BP + -0xa],0xffff
1060:0f8b: INC word ptr [BP + -0xe]
1060:0f8e: SUB AX,AX
1060:0f90: MOV word ptr [BP + -0x6],AX
1060:0f93: MOV word ptr [BP + -0x8],AX
1060:0f96: MOV DI,word ptr [BP + -0xe]
1060:0f99: JMP 0x1060:0fd6
1060:0f9c: CMP byte ptr [BP + -0x3],0x39
1060:0fa0: JG 0x1060:0fe4
1060:0fa2: MOV AL,byte ptr [BP + -0x3]
1060:0fa5: CBW
1060:0fa6: SUB AX,0x30
1060:0fa9: CWD
1060:0faa: MOV CX,word ptr [BP + -0x8]
1060:0fad: MOV BX,word ptr [BP + -0x6]
1060:0fb0: MOV word ptr [BP + -0x14],AX
1060:0fb3: MOV word ptr [BP + -0x12],DX
1060:0fb6: MOV AX,CX
1060:0fb8: MOV DX,BX
1060:0fba: ADD CX,CX
1060:0fbc: ADC BX,BX
1060:0fbe: ADD CX,CX
1060:0fc0: ADC BX,BX
1060:0fc2: ADD CX,AX
1060:0fc4: ADC BX,DX
1060:0fc6: ADD CX,CX
1060:0fc8: ADC BX,BX
1060:0fca: ADD CX,word ptr [BP + -0x14]
1060:0fcd: ADC BX,word ptr [BP + -0x12]
1060:0fd0: MOV word ptr [BP + -0x8],CX
1060:0fd3: MOV word ptr [BP + -0x6],BX
1060:0fd6: MOV BX,DI
1060:0fd8: ADD BX,SI
1060:0fda: MOV AL,byte ptr [BX]
1060:0fdc: MOV byte ptr [BP + -0x3],AL
1060:0fdf: INC DI
1060:0fe0: CMP AL,0x30
1060:0fe2: JGE 0x1060:0f9c
1060:0fe4: MOV word ptr [BP + -0xe],DI
1060:0fe7: PUSH word ptr [BP + -0x6]
1060:0fea: PUSH word ptr [BP + -0x8]
1060:0fed: PUSH word ptr [BP + -0xa]
1060:0ff0: PUSH word ptr [BP + -0xc]
1060:0ff3: CALLF 0x10d0:052a
1060:0ff8: LES BX,[BP + 0x8]
1060:0ffb: ADD word ptr [BP + 0x8],0x4
1060:0fff: MOV word ptr ES:[BX],AX
1060:1002: MOV word ptr ES:[BX + 0x2],DX
1060:1006: MOV AX,word ptr [BP + 0xc]
1060:1009: INC word ptr [BP + -0x10]
1060:100c: CMP word ptr [BP + -0x10],AX
1060:100f: JGE 0x1060:1014
1060:1011: JMP 0x1060:0f3f
1060:1014: MOV AX,word ptr [BP + -0x10]
1060:1017: MOV word ptr [BP + -0xe],AX
1060:101a: CMP AX,word ptr [BP + 0xc]
1060:101d: JGE 0x1060:1035
1060:101f: XOR AX,AX
1060:1021: MOV CX,word ptr [BP + 0xc]
1060:1024: MOV BX,word ptr [BP + 0x8]
1060:1027: MOV DX,word ptr [BP + 0xa]
1060:102a: SUB CX,word ptr [BP + -0xe]
1060:102d: ADD CX,CX
1060:102f: MOV DI,BX
1060:1031: MOV ES,DX
1060:1033: STOSW.REP ES:DI
1060:1035: MOV AX,word ptr [BP + -0x10]
1060:1038: POP SI
1060:1039: POP DI
1060:103a: LEA SP,[BP + -0x2]
1060:103d: POP DS
1060:103e: POP BP
1060:103f: RETF
