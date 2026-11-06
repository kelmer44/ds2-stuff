1078:0a00: PUSH BP
1078:0a01: MOV BP,SP
1078:0a03: PUSH DS
1078:0a04: MOV AX,0x10e8
1078:0a07: MOV DS,AX
1078:0a09: MOV AX,0x8
1078:0a0c: CALLF 0x10d0:029e
1078:0a11: PUSH DI
1078:0a12: PUSH SI
1078:0a13: MOV DI,word ptr [BP + 0xc]
1078:0a16: MOV SI,word ptr [BP + 0x6]
1078:0a19: MOV ES,word ptr [BP + 0xe]
1078:0a1c: MOV AX,word ptr ES:[DI + 0x22]
1078:0a20: MOV word ptr [BP + -0xa],AX
1078:0a23: MOV CX,word ptr ES:[DI + 0x24]
1078:0a27: MOV DX,word ptr ES:[DI + 0x26]
1078:0a2b: MOV word ptr [BP + -0x8],DX
1078:0a2e: MOV DX,word ptr ES:[DI + 0x28]
1078:0a32: MOV word ptr [BP + -0x6],DX
1078:0a35: MOV ES,word ptr [BP + 0x8]
1078:0a38: CMP AX,word ptr ES:[SI + 0x34a]
1078:0a3d: JGE 0x1078:0a47
1078:0a3f: MOV AX,word ptr ES:[SI + 0x34a]
1078:0a44: MOV word ptr [BP + -0xa],AX
1078:0a47: MOV word ptr [BP + -0x4],CX
1078:0a4a: CMP word ptr ES:[SI + 0x34e],CX
1078:0a4f: JLE 0x1078:0a59
1078:0a51: MOV AX,word ptr ES:[SI + 0x34e]
1078:0a56: MOV word ptr [BP + -0x4],AX
1078:0a59: MOV AX,word ptr [BP + -0x8]
1078:0a5c: ADD AX,word ptr [BP + -0xa]
1078:0a5f: CMP AX,word ptr ES:[SI + 0x34c]
1078:0a64: JLE 0x1078:0a71
1078:0a66: MOV AX,word ptr ES:[SI + 0x34c]
1078:0a6b: SUB AX,word ptr [BP + -0xa]
1078:0a6e: MOV word ptr [BP + -0x8],AX
1078:0a71: MOV AX,DX
1078:0a73: ADD AX,word ptr [BP + -0x4]
1078:0a76: CMP AX,word ptr ES:[SI + 0x350]
1078:0a7b: JLE 0x1078:0a88
1078:0a7d: MOV AX,word ptr ES:[SI + 0x350]
1078:0a82: SUB AX,word ptr [BP + -0x4]
1078:0a85: MOV word ptr [BP + -0x6],AX
1078:0a88: PUSH word ptr [BP + 0x10]
1078:0a8b: PUSH word ptr [BP + 0xe]
1078:0a8e: PUSH DI
1078:0a8f: PUSH ES
1078:0a90: PUSH SI
1078:0a91: PUSH CS
1078:0a92: CALL 0x1078:0806
1078:0a95: ADD SP,0xa
1078:0a98: CMP word ptr [BP + -0x8],0x0
1078:0a9c: JG 0x1078:0aa1
1078:0a9e: JMP 0x1078:0b86
1078:0aa1: CMP word ptr [BP + -0x6],0x0
1078:0aa5: JG 0x1078:0aaa
1078:0aa7: JMP 0x1078:0b86
1078:0aaa: PUSH word ptr [BP + -0x6]
1078:0aad: PUSH word ptr [BP + -0x8]
1078:0ab0: PUSH word ptr [BP + 0xa]
1078:0ab3: PUSH word ptr [BP + 0x8]
1078:0ab6: PUSH SI
1078:0ab7: PUSH CS
1078:0ab8: CALL 0x1078:0172
1078:0abb: ADD SP,0xa
1078:0abe: MOV ES,word ptr [BP + 0xe]
1078:0ac1: MOV AX,word ptr ES:[DI + 0x38]
1078:0ac5: OR AX,word ptr ES:[DI + 0x36]
1078:0ac9: JZ 0x1078:0afa
1078:0acb: PUSH 0x0
1078:0acd: MOV AX,word ptr [BP + -0x4]
1078:0ad0: SUB AX,word ptr ES:[DI + 0x3c]
1078:0ad4: PUSH AX
1078:0ad5: MOV AX,word ptr [BP + -0xa]
1078:0ad8: SUB AX,word ptr ES:[DI + 0x3a]
1078:0adc: PUSH AX
1078:0add: PUSH word ptr ES:[DI + 0x38]
1078:0ae1: PUSH word ptr ES:[DI + 0x36]
1078:0ae5: PUSH 0x0
1078:0ae7: PUSH 0x0
1078:0ae9: MOV ES,word ptr [BP + 0x8]
1078:0aec: PUSH word ptr ES:[SI + 0x8]
1078:0af0: NOP
1078:0af1: PUSH CS
1078:0af2: CALL 0x1078:1aea
1078:0af5: ADD SP,0x10
1078:0af8: JMP 0x1078:0b14
1078:0afa: MOV ES,word ptr [BP + 0x8]
1078:0afd: PUSH word ptr ES:[SI + 0x8]
1078:0b01: PUSH 0x0
1078:0b03: PUSH 0x0
1078:0b05: PUSH word ptr [BP + -0x8]
1078:0b08: PUSH word ptr [BP + -0x6]
1078:0b0b: PUSH 0x0
1078:0b0d: PUSH 0x42
1078:0b0f: CALLF 0x13a8:00d4
1078:0b14: PUSH 0x7fff
1078:0b17: PUSH word ptr [BP + -0x6]
1078:0b1a: PUSH word ptr [BP + -0x8]
1078:0b1d: PUSH word ptr [BP + -0x4]
1078:0b20: PUSH word ptr [BP + -0xa]
1078:0b23: PUSH word ptr [BP + 0x8]
1078:0b26: PUSH SI
1078:0b27: PUSH CS
1078:0b28: CALL 0x1078:06f4
1078:0b2b: ADD SP,0xe
1078:0b2e: CMP word ptr [0x8a],0x0
1078:0b33: JZ 0x1078:0b49
1078:0b35: PUSH word ptr [BP + -0x4]
1078:0b38: PUSH word ptr [BP + -0xa]
1078:0b3b: MOV ES,word ptr [BP + 0x8]
1078:0b3e: PUSH word ptr ES:[SI + 0x8]
1078:0b42: PUSH CS
1078:0b43: CALL 0x1078:0000
1078:0b46: ADD SP,0x6
1078:0b49: PUSH word ptr [BP + 0xa]
1078:0b4c: PUSH word ptr [BP + -0xa]
1078:0b4f: PUSH word ptr [BP + -0x4]
1078:0b52: MOV ES,word ptr [BP + 0x8]
1078:0b55: PUSH word ptr ES:[SI + 0xa]
1078:0b59: PUSH word ptr ES:[SI + 0xc]
1078:0b5d: PUSH word ptr ES:[SI + 0x8]
1078:0b61: PUSH 0x0
1078:0b63: PUSH 0x0
1078:0b65: CALLF 0x13a8:0218
1078:0b6a: MOV ES,word ptr [BP + 0x8]
1078:0b6d: PUSH word ptr ES:[SI + 0x8]
1078:0b71: PUSH word ptr [0x76f6]
1078:0b75: CALLF 0x13a8:00e0
1078:0b7a: MOV ES,word ptr [BP + 0x8]
1078:0b7d: PUSH word ptr ES:[SI + 0x2]
1078:0b81: CALLF 0x13a8:00f4
1078:0b86: POP SI
1078:0b87: POP DI
1078:0b88: LEA SP,[BP + -0x2]
1078:0b8b: POP DS
1078:0b8c: POP BP
1078:0b8d: RETF
