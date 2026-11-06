10a8:0350: PUSH BP
10a8:0351: MOV BP,SP
10a8:0353: PUSH DS
10a8:0354: MOV AX,0x10e8
10a8:0357: MOV DS,AX
10a8:0359: XOR AX,AX
10a8:035b: CALLF 0x10d0:029e
10a8:0360: PUSH SI
10a8:0361: MOV SI,word ptr [BP + 0x6]
10a8:0364: MOV ES,word ptr [BP + 0x8]
10a8:0367: MOV AX,word ptr ES:[SI + 0xa]
10a8:036b: OR AX,word ptr ES:[SI + 0x8]
10a8:036f: JZ 0x10a8:038f
10a8:0371: PUSH word ptr [0x4a]
10a8:0375: PUSH word ptr ES:[SI + 0xa]
10a8:0379: PUSH word ptr ES:[SI + 0x8]
10a8:037d: CALLF 0x13a8:0248
10a8:0382: MOV ES,word ptr [BP + 0x8]
10a8:0385: SUB AX,AX
10a8:0387: MOV word ptr ES:[SI + 0xa],AX
10a8:038b: MOV word ptr ES:[SI + 0x8],AX
10a8:038f: MOV ES,word ptr [BP + 0x8]
10a8:0392: MOV AX,word ptr ES:[SI + 0x2]
10a8:0396: OR AX,word ptr ES:[SI]
10a8:0399: JZ 0x10a8:03cb
10a8:039b: PUSH word ptr ES:[SI + 0x2]
10a8:039f: PUSH word ptr ES:[SI]
10a8:03a2: PUSH CS
10a8:03a3: CALL 0x10a8:0246
10a8:03a6: ADD SP,0x4
10a8:03a9: OR AX,AX
10a8:03ab: JNZ 0x10a8:03bf
10a8:03ad: MOV ES,word ptr [BP + 0x8]
10a8:03b0: PUSH word ptr ES:[SI + 0x2]
10a8:03b4: PUSH word ptr ES:[SI]
10a8:03b7: CALLF 0x1090:0068
10a8:03bc: ADD SP,0x4
10a8:03bf: MOV ES,word ptr [BP + 0x8]
10a8:03c2: SUB AX,AX
10a8:03c4: MOV word ptr ES:[SI + 0x2],AX
10a8:03c8: MOV word ptr ES:[SI],AX
10a8:03cb: MOV ES,word ptr [BP + 0x8]
10a8:03ce: SUB AX,AX
10a8:03d0: MOV word ptr ES:[SI + 0x6],AX
10a8:03d4: MOV word ptr ES:[SI + 0x4],AX
10a8:03d8: MOV AX,0x1
10a8:03db: POP SI
10a8:03dc: LEA SP,[BP + -0x2]
10a8:03df: POP DS
10a8:03e0: POP BP
10a8:03e1: RETF
