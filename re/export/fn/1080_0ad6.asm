1080:0ad6: PUSH BP
1080:0ad7: MOV BP,SP
1080:0ad9: PUSH DS
1080:0ada: MOV AX,0x10e8
1080:0add: MOV DS,AX
1080:0adf: XOR AX,AX
1080:0ae1: CALLF 0x10d0:029e
1080:0ae6: PUSH DI
1080:0ae7: MOV DI,word ptr [BP + 0x6]
1080:0aea: MOV ES,word ptr [BP + 0x8]
1080:0aed: LDS BX,ES:[DI + 0x2]
1080:0af1: MOV AX,word ptr [BX + 0x26]
1080:0af4: MOV word ptr ES:[DI + 0xc],AX
1080:0af8: MOV AX,word ptr [BX + 0x28]
1080:0afb: MOV word ptr ES:[DI + 0xe],AX
1080:0aff: MOV AX,word ptr [BX + 0x2a]
1080:0b02: MOV word ptr ES:[DI + 0x10],AX
1080:0b06: MOV AX,word ptr [BX + 0x2c]
1080:0b09: MOV word ptr ES:[DI + 0x12],AX
1080:0b0d: MOV AX,word ptr [BX + 0x12]
1080:0b10: MOV word ptr ES:[DI + 0x8],AX
1080:0b14: MOV AX,word ptr [BX + 0x16]
1080:0b17: MOV word ptr ES:[DI + 0xa],AX
1080:0b1b: XOR AX,AX
1080:0b1d: MOV word ptr [BX + 0x28],AX
1080:0b20: MOV word ptr [BX + 0x26],AX
1080:0b23: MOV word ptr [BX + 0x2c],AX
1080:0b26: MOV word ptr [BX + 0x2a],AX
1080:0b29: POP DI
1080:0b2a: LEA SP,[BP + -0x2]
1080:0b2d: POP DS
1080:0b2e: POP BP
1080:0b2f: RETF
