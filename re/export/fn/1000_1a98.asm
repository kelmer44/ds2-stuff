1000:1a98: PUSH BP
1000:1a99: MOV BP,SP
1000:1a9b: PUSH DS
1000:1a9c: MOV AX,0x10e8
1000:1a9f: MOV DS,AX
1000:1aa1: MOV AX,0x8
1000:1aa4: CALLF 0x10d0:029e
1000:1aa9: PUSH DI
1000:1aaa: PUSH SI
1000:1aab: MOV DI,word ptr [BP + 0xa]
1000:1aae: MOV word ptr [DI],0x0
1000:1ab2: MOV SI,word ptr [BP + 0x6]
1000:1ab5: MOV ES,word ptr [BP + 0x8]
1000:1ab8: CMP byte ptr ES:[SI],0x20
1000:1abc: JZ 0x1000:1ac4
1000:1abe: CMP byte ptr ES:[SI],0x9
1000:1ac2: JNZ 0x1000:1ac8
1000:1ac4: INC SI
1000:1ac5: JMP 0x1000:1ab5
1000:1ac8: CMP byte ptr ES:[SI],0x0
1000:1acc: JNZ 0x1000:1ad4
1000:1ace: XOR AX,AX
1000:1ad0: CWD
1000:1ad1: JMP 0x1000:1b05
1000:1ad4: MOV CX,SI
1000:1ad6: MOV word ptr [BP + -0x4],ES
1000:1ad9: CMP byte ptr ES:[SI],0x20
1000:1add: JZ 0x1000:1af2
1000:1adf: CMP byte ptr ES:[SI],0x9
1000:1ae3: JZ 0x1000:1af2
1000:1ae5: CMP byte ptr ES:[SI],0x0
1000:1ae9: JZ 0x1000:1af2
1000:1aeb: INC SI
1000:1aec: CMP byte ptr ES:[SI],0x20
1000:1af0: JNZ 0x1000:1adf
1000:1af2: MOV AX,word ptr [BP + -0x4]
1000:1af5: MOV word ptr [BP + -0xa],CX
1000:1af8: MOV word ptr [BP + -0x8],AX
1000:1afb: SUB SI,CX
1000:1afd: MOV word ptr [DI],SI
1000:1aff: MOV AX,word ptr [BP + -0xa]
1000:1b02: MOV DX,word ptr [BP + -0x8]
1000:1b05: POP SI
1000:1b06: POP DI
1000:1b07: LEA SP,[BP + -0x2]
1000:1b0a: POP DS
1000:1b0b: POP BP
1000:1b0c: RETF
