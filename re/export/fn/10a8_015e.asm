10a8:015e: PUSH BP
10a8:015f: MOV BP,SP
10a8:0161: PUSH DS
10a8:0162: MOV AX,0x10e8
10a8:0165: MOV DS,AX
10a8:0167: MOV AX,0x12
10a8:016a: CALLF 0x10d0:029e
10a8:016f: PUSH DI
10a8:0170: PUSH SI
10a8:0171: MOV SI,word ptr [BP + 0xa]
10a8:0174: MOV AX,word ptr [BP + 0xc]
10a8:0177: PUSH AX
10a8:0178: PUSH SI
10a8:0179: PUSH word ptr [BP + 0x8]
10a8:017c: PUSH word ptr [BP + 0x6]
10a8:017f: PUSH 0x10e0
10a8:0182: PUSH 0x275e
10a8:0185: MOV DI,AX
10a8:0187: PUSH CS
10a8:0188: CALL 0x10a8:0446
10a8:018b: ADD SP,0xc
10a8:018e: MOV word ptr [BP + -0x14],0x12
10a8:0193: MOV AX,[0x4a]
10a8:0196: MOV word ptr [BP + -0x12],AX
10a8:0199: MOV AX,[0x76f8]
10a8:019c: MOV word ptr [BP + -0xa],AX
10a8:019f: SUB AX,AX
10a8:01a1: MOV word ptr [BP + -0x6],AX
10a8:01a4: MOV word ptr [BP + -0x8],AX
10a8:01a7: MOV word ptr [BP + -0x4],AX
10a8:01aa: MOV AX,word ptr [BP + 0xe]
10a8:01ad: MOV word ptr [BP + -0x10],AX
10a8:01b0: MOV ES,DI
10a8:01b2: MOV AX,word ptr ES:[SI + 0x8]
10a8:01b6: MOV DX,word ptr ES:[SI + 0xa]
10a8:01ba: MOV word ptr [BP + -0xe],AX
10a8:01bd: MOV word ptr [BP + -0xc],DX
10a8:01c0: CMP word ptr [0x4c],0x3d6
10a8:01c6: JZ 0x10a8:01e0
10a8:01c8: CMP word ptr [0x5c],0x0
10a8:01cd: JZ 0x10a8:01e0
10a8:01cf: CMP word ptr [0x4a],0x0
10a8:01d4: JZ 0x10a8:01e0
10a8:01d6: LEA AX,[BP + -0x14]
10a8:01d9: PUSH SS
10a8:01da: PUSH AX
10a8:01db: CALLF 0x13a8:0240
10a8:01e0: POP SI
10a8:01e1: POP DI
10a8:01e2: LEA SP,[BP + -0x2]
10a8:01e5: POP DS
10a8:01e6: POP BP
10a8:01e7: RETF
