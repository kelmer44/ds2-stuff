10a8:0c72: PUSH BP
10a8:0c73: MOV BP,SP
10a8:0c75: PUSH DS
10a8:0c76: MOV AX,0x10e8
10a8:0c79: MOV DS,AX
10a8:0c7b: MOV AX,0x4
10a8:0c7e: CALLF 0x10d0:029e
10a8:0c83: PUSH SI
10a8:0c84: MOV SI,word ptr [BP + 0xa]
10a8:0c87: PUSH 0x0
10a8:0c89: PUSH 0x16
10a8:0c8b: MOV AX,[0x6114]
10a8:0c8e: CWD
10a8:0c8f: PUSH DX
10a8:0c90: PUSH AX
10a8:0c91: PUSH word ptr [SI + 0x2]
10a8:0c94: PUSH word ptr [SI]
10a8:0c96: CALLF 0x10d0:052a
10a8:0c9b: PUSH DX
10a8:0c9c: PUSH AX
10a8:0c9d: CALLF 0x10d0:0490
10a8:0ca2: MOV word ptr [BP + -0x6],AX
10a8:0ca5: MOV word ptr [BP + -0x4],DX
10a8:0ca8: ADD AX,word ptr [BP + 0x6]
10a8:0cab: ADC DX,word ptr [BP + 0x8]
10a8:0cae: MOV word ptr [SI],AX
10a8:0cb0: MOV word ptr [SI + 0x2],DX
10a8:0cb3: CMP word ptr [0x4c],0x3d5
10a8:0cb9: JNZ 0x10a8:0cc6
10a8:0cbb: ADD word ptr [BP + -0x6],0xfa
10a8:0cc0: ADC word ptr [BP + -0x4],0x0
10a8:0cc4: JMP 0x10a8:0d07
10a8:0cc6: CMP word ptr [0x64],0x2be
10a8:0ccc: JNZ 0x10a8:0cd6
10a8:0cce: ADD word ptr [BP + -0x6],0x3e8
10a8:0cd3: JMP 0x10a8:0cc0
10a8:0cd6: CMP word ptr [0x64],0x2bf
10a8:0cdc: JNZ 0x10a8:0ce6
10a8:0cde: ADD word ptr [BP + -0x6],0x1194
10a8:0ce3: JMP 0x10a8:0cc0
10a8:0ce6: CMP word ptr [0x64],0x2c0
10a8:0cec: JNZ 0x10a8:0cf6
10a8:0cee: ADD word ptr [BP + -0x6],0x2710
10a8:0cf3: JMP 0x10a8:0cc0
10a8:0cf6: CMP word ptr [0x64],0x2c1
10a8:0cfc: JNZ 0x10a8:0d07
10a8:0cfe: ADD word ptr [BP + -0x6],0x86a0
10a8:0d03: ADC word ptr [BP + -0x4],0x1
10a8:0d07: MOV AX,word ptr [BP + -0x6]
10a8:0d0a: MOV DX,word ptr [BP + -0x4]
10a8:0d0d: ADD AX,word ptr [BP + 0x6]
10a8:0d10: ADC DX,word ptr [BP + 0x8]
10a8:0d13: POP SI
10a8:0d14: LEA SP,[BP + -0x2]
10a8:0d17: POP DS
10a8:0d18: POP BP
10a8:0d19: RETF
