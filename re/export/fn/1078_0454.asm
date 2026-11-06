1078:0454: PUSH BP
1078:0455: MOV BP,SP
1078:0457: PUSH DS
1078:0458: MOV AX,0x10e8
1078:045b: MOV DS,AX
1078:045d: MOV AX,0x10
1078:0460: CALLF 0x10d0:029e
1078:0465: PUSH SI
1078:0466: MOV SI,word ptr [BP + 0xa]
1078:0469: XOR AX,AX
1078:046b: MOV word ptr [BP + -0xc],AX
1078:046e: MOV word ptr [BP + -0xe],AX
1078:0471: MOV ES,word ptr [BP + 0xc]
1078:0474: LES BX,ES:[SI + 0x2a]
1078:0478: MOV CX,word ptr ES:[BX + 0x8]
1078:047c: MOV word ptr [BP + -0x8],CX
1078:047f: MOV CX,word ptr ES:[BX + 0xa]
1078:0483: MOV word ptr [BP + -0x6],CX
1078:0486: MOV ES,word ptr [BP + 0xc]
1078:0489: MOV CX,word ptr ES:[SI + 0x3e]
1078:048d: SUB CX,word ptr [BP + 0xe]
1078:0490: MOV word ptr [BP + -0xa],CX
1078:0493: MOV CX,word ptr ES:[SI + 0x40]
1078:0497: SUB CX,word ptr [BP + 0x10]
1078:049a: MOV word ptr [BP + -0x4],CX
1078:049d: CMP word ptr ES:[SI + 0x14],AX
1078:04a1: JNZ 0x1078:04e5
1078:04a3: MOV word ptr ES:[SI + 0x14],0x1
1078:04a9: LES BX,[BP + 0x6]
1078:04ac: MOV AX,word ptr ES:[BX + 0x34a]
1078:04b1: MOV ES,word ptr [BP + 0xc]
1078:04b4: MOV word ptr ES:[SI + 0x16],AX
1078:04b8: LES BX,[BP + 0x6]
1078:04bb: MOV AX,word ptr ES:[BX + 0x34c]
1078:04c0: MOV ES,word ptr [BP + 0xc]
1078:04c3: MOV word ptr ES:[SI + 0x1a],AX
1078:04c7: LES BX,[BP + 0x6]
1078:04ca: MOV AX,word ptr ES:[BX + 0x34e]
1078:04cf: MOV ES,word ptr [BP + 0xc]
1078:04d2: MOV word ptr ES:[SI + 0x18],AX
1078:04d6: LES BX,[BP + 0x6]
1078:04d9: MOV AX,word ptr ES:[BX + 0x350]
1078:04de: MOV ES,word ptr [BP + 0xc]
1078:04e1: MOV word ptr ES:[SI + 0x1c],AX
1078:04e5: MOV ES,word ptr [BP + 0xc]
1078:04e8: CMP word ptr ES:[SI + 0x14],0x0
1078:04ed: JZ 0x1078:055f
1078:04ef: MOV AX,word ptr ES:[SI + 0x3e]
1078:04f3: ADD AX,word ptr [BP + -0x8]
1078:04f6: CMP AX,word ptr ES:[SI + 0x1a]
1078:04fa: JLE 0x1078:0507
1078:04fc: MOV AX,word ptr ES:[SI + 0x1a]
1078:0500: SUB AX,word ptr ES:[SI + 0x3e]
1078:0504: MOV word ptr [BP + -0x8],AX
1078:0507: MOV AX,word ptr ES:[SI + 0x40]
1078:050b: ADD AX,word ptr [BP + -0x6]
1078:050e: CMP AX,word ptr ES:[SI + 0x1c]
1078:0512: JLE 0x1078:051f
1078:0514: MOV AX,word ptr ES:[SI + 0x1c]
1078:0518: SUB AX,word ptr ES:[SI + 0x40]
1078:051c: MOV word ptr [BP + -0x6],AX
1078:051f: MOV AX,word ptr ES:[SI + 0x3e]
1078:0523: CMP word ptr ES:[SI + 0x16],AX
1078:0527: JLE 0x1078:053f
1078:0529: MOV AX,word ptr ES:[SI + 0x16]
1078:052d: MOV CX,AX
1078:052f: SUB AX,word ptr [BP + 0xe]
1078:0532: MOV word ptr [BP + -0xa],AX
1078:0535: SUB CX,word ptr ES:[SI + 0x3e]
1078:0539: MOV word ptr [BP + -0xe],CX
1078:053c: SUB word ptr [BP + -0x8],CX
1078:053f: MOV AX,word ptr ES:[SI + 0x40]
1078:0543: CMP word ptr ES:[SI + 0x18],AX
1078:0547: JLE 0x1078:055f
1078:0549: MOV AX,word ptr ES:[SI + 0x18]
1078:054d: MOV CX,AX
1078:054f: SUB AX,word ptr [BP + 0x10]
1078:0552: MOV word ptr [BP + -0x4],AX
1078:0555: SUB CX,word ptr ES:[SI + 0x40]
1078:0559: MOV word ptr [BP + -0xc],CX
1078:055c: SUB word ptr [BP + -0x6],CX
1078:055f: MOV AX,word ptr [BP + 0x12]
1078:0562: CMP word ptr [BP + -0xa],AX
1078:0565: JG 0x1078:05b7
1078:0567: MOV AX,word ptr [BP + -0x8]
1078:056a: ADD AX,word ptr [BP + -0xa]
1078:056d: JS 0x1078:05b7
1078:056f: MOV AX,word ptr [BP + 0x14]
1078:0572: CMP word ptr [BP + -0x4],AX
1078:0575: JG 0x1078:05b7
1078:0577: MOV AX,word ptr [BP + -0x6]
1078:057a: ADD AX,word ptr [BP + -0x4]
1078:057d: JS 0x1078:05b7
1078:057f: LES BX,ES:[SI + 0x2a]
1078:0583: MOV AX,word ptr ES:[BX + 0x16]
1078:0587: OR AX,word ptr ES:[BX + 0x14]
1078:058b: JZ 0x1078:0592
1078:058d: MOV AX,0x1
1078:0590: JMP 0x1078:0594
1078:0592: XOR AX,AX
1078:0594: PUSH AX
1078:0595: PUSH word ptr [BP + -0x6]
1078:0598: PUSH word ptr [BP + -0x8]
1078:059b: PUSH word ptr [BP + -0xc]
1078:059e: PUSH word ptr [BP + -0xe]
1078:05a1: PUSH ES
1078:05a2: PUSH BX
1078:05a3: PUSH word ptr [BP + -0x4]
1078:05a6: PUSH word ptr [BP + -0xa]
1078:05a9: LES BX,[BP + 0x6]
1078:05ac: PUSH word ptr ES:[BX + 0x8]
1078:05b0: PUSH CS
1078:05b1: CALL 0x1078:1b6c
1078:05b4: ADD SP,0x14
1078:05b7: POP SI
1078:05b8: LEA SP,[BP + -0x2]
1078:05bb: POP DS
1078:05bc: POP BP
1078:05bd: RETF
