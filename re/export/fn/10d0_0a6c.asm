10d0:0a6c: MOV AX,DS
10d0:0a6e: NOP
10d0:0a6f: INC BP
10d0:0a70: PUSH BP
10d0:0a71: MOV BP,SP
10d0:0a73: PUSH DS
10d0:0a74: MOV DS,AX
10d0:0a76: MOV AX,0x214
10d0:0a79: PUSH CS
10d0:0a7a: CALL 0x10d0:029e
10d0:0a7d: PUSH SI
10d0:0a7e: PUSH DI
10d0:0a7f: XOR AX,AX
10d0:0a81: MOV word ptr [BP + -0xa],AX
10d0:0a84: MOV byte ptr [BP + -0x7],AL
10d0:0a87: MOV SI,word ptr [BP + 0x8]
10d0:0a8a: LODSB SI
10d0:0a8b: MOV word ptr [BP + 0x8],SI
10d0:0a8e: MOV byte ptr [BP + -0x4],AL
10d0:0a91: OR AL,AL
10d0:0a93: JZ 0x10d0:0a9b
10d0:0a95: CMP word ptr [BP + -0xa],0x0
10d0:0a99: JGE 0x10d0:0aa1
10d0:0a9b: MOV AX,word ptr [BP + -0xa]
10d0:0a9e: JMP 0x10d0:0f48
10d0:0aa1: MOV BX,0x29ce
10d0:0aa4: SUB AL,0x20
10d0:0aa6: CMP AL,0x58
10d0:0aa8: JA 0x10d0:0aaf
10d0:0aaa: XLAT BX
10d0:0aab: AND AL,0xf
10d0:0aad: JMP 0x10d0:0ab1
10d0:0aaf: MOV AL,0x0
10d0:0ab1: MOV CL,0x3
10d0:0ab3: SHL AL,CL
10d0:0ab5: ADD AL,byte ptr [BP + -0x7]
10d0:0ab8: XLAT BX
10d0:0ab9: INC CL
10d0:0abb: SHR AL,CL
10d0:0abd: MOV byte ptr [BP + -0x7],AL
10d0:0ac0: CBW
10d0:0ac1: MOV BX,AX
10d0:0ac3: SHL BX,0x1
10d0:0ac5: JMP word ptr CS:[BX + 0xa5c]
10d0:0aca: MOV DL,byte ptr [BP + -0x4]
10d0:0acd: MOV CX,0x1
10d0:0ad0: CALL 0x10d0:0efb
10d0:0ad3: JMP 0x10d0:0a87
10d0:0ad5: XOR AX,AX
10d0:0ad7: MOV word ptr [BP + -0x12],AX
10d0:0ada: MOV word ptr [BP + -0xc],AX
10d0:0add: MOV word ptr [BP + -0x14],AX
10d0:0ae0: MOV word ptr [BP + -0x6],AX
10d0:0ae3: DEC AX
10d0:0ae4: MOV word ptr [BP + -0xe],AX
10d0:0ae7: JMP 0x10d0:0a87
10d0:0ae9: MOV AL,byte ptr [BP + -0x4]
10d0:0aec: CMP AL,0x2d
10d0:0aee: JNZ 0x10d0:0af6
10d0:0af0: OR byte ptr [BP + -0x6],0x4
10d0:0af4: JMP 0x10d0:0a87
10d0:0af6: CMP AL,0x2b
10d0:0af8: JNZ 0x10d0:0b00
10d0:0afa: OR byte ptr [BP + -0x6],0x1
10d0:0afe: JMP 0x10d0:0a87
10d0:0b00: CMP AL,0x20
10d0:0b02: JNZ 0x10d0:0b0b
10d0:0b04: OR byte ptr [BP + -0x6],0x2
10d0:0b08: JMP 0x10d0:0a87
10d0:0b0b: CMP AL,0x23
10d0:0b0d: JNZ 0x10d0:0b16
10d0:0b0f: OR byte ptr [BP + -0x6],0x80
10d0:0b13: JMP 0x10d0:0a87
10d0:0b16: OR byte ptr [BP + -0x6],0x8
10d0:0b1a: JMP 0x10d0:0a87
10d0:0b1d: MOV CL,byte ptr [BP + -0x4]
10d0:0b20: CMP CL,0x2a
10d0:0b23: JNZ 0x10d0:0b34
10d0:0b25: CALL 0x10d0:0e82
10d0:0b28: OR AX,AX
10d0:0b2a: JNS 0x10d0:0b43
10d0:0b2c: NEG AX
10d0:0b2e: OR byte ptr [BP + -0x6],0x4
10d0:0b32: JMP 0x10d0:0b43
10d0:0b34: SUB CL,0x30
10d0:0b37: XOR CH,CH
10d0:0b39: MOV AX,word ptr [BP + -0xc]
10d0:0b3c: MOV BX,0xa
10d0:0b3f: MUL BX
10d0:0b41: ADD AX,CX
10d0:0b43: MOV word ptr [BP + -0xc],AX
10d0:0b46: JMP 0x10d0:0a87
10d0:0b49: MOV word ptr [BP + -0xe],0x0
10d0:0b4e: JMP 0x10d0:0a87
10d0:0b51: MOV CL,byte ptr [BP + -0x4]
10d0:0b54: CMP CL,0x2a
10d0:0b57: JNZ 0x10d0:0b65
10d0:0b59: CALL 0x10d0:0e82
10d0:0b5c: OR AX,AX
10d0:0b5e: JNS 0x10d0:0b74
10d0:0b60: MOV AX,0xffff
10d0:0b63: JMP 0x10d0:0b74
10d0:0b65: SUB CL,0x30
10d0:0b68: XOR CH,CH
10d0:0b6a: MOV AX,word ptr [BP + -0xe]
10d0:0b6d: MOV BX,0xa
10d0:0b70: MUL BX
10d0:0b72: ADD AX,CX
10d0:0b74: MOV word ptr [BP + -0xe],AX
10d0:0b77: JMP 0x10d0:0a87
10d0:0b7a: MOV AL,byte ptr [BP + -0x4]
10d0:0b7d: CMP AL,0x6c
10d0:0b7f: JNZ 0x10d0:0b87
10d0:0b81: OR byte ptr [BP + -0x6],0x10
10d0:0b85: JMP 0x10d0:0ba9
10d0:0b87: CMP AL,0x46
10d0:0b89: JNZ 0x10d0:0b91
10d0:0b8b: OR byte ptr [BP + -0x6],0x20
10d0:0b8f: JMP 0x10d0:0ba9
10d0:0b91: CMP AL,0x4e
10d0:0b93: JNZ 0x10d0:0b9b
10d0:0b95: OR byte ptr [BP + -0x5],0x10
10d0:0b99: JMP 0x10d0:0ba9
10d0:0b9b: CMP AL,0x4c
10d0:0b9d: JNZ 0x10d0:0ba5
10d0:0b9f: OR byte ptr [BP + -0x5],0x4
10d0:0ba3: JMP 0x10d0:0ba9
10d0:0ba5: OR byte ptr [BP + -0x5],0x8
10d0:0ba9: JMP 0x10d0:0a87
10d0:0bac: MOV AL,byte ptr [BP + -0x4]
10d0:0baf: CMP AL,0x64
10d0:0bb1: JNZ 0x10d0:0bb6
10d0:0bb3: JMP 0x10d0:0d48
10d0:0bb6: CMP AL,0x69
10d0:0bb8: JNZ 0x10d0:0bbd
10d0:0bba: JMP 0x10d0:0d48
10d0:0bbd: CMP AL,0x75
10d0:0bbf: JNZ 0x10d0:0bc4
10d0:0bc1: JMP 0x10d0:0d4c
10d0:0bc4: CMP AL,0x58
10d0:0bc6: JNZ 0x10d0:0bcb
10d0:0bc8: JMP 0x10d0:0d52
10d0:0bcb: CMP AL,0x78
10d0:0bcd: JNZ 0x10d0:0bd2
10d0:0bcf: JMP 0x10d0:0d58
10d0:0bd2: CMP AL,0x6f
10d0:0bd4: JNZ 0x10d0:0bd9
10d0:0bd6: JMP 0x10d0:0d79
10d0:0bd9: CMP AL,0x63
10d0:0bdb: JZ 0x10d0:0bf7
10d0:0bdd: CMP AL,0x73
10d0:0bdf: JZ 0x10d0:0c08
10d0:0be1: CMP AL,0x6e
10d0:0be3: JZ 0x10d0:0c36
10d0:0be5: CMP AL,0x70
10d0:0be7: JZ 0x10d0:0c49
10d0:0be9: CMP AL,0x45
10d0:0beb: JZ 0x10d0:0bf4
10d0:0bed: CMP AL,0x47
10d0:0bef: JZ 0x10d0:0bf4
10d0:0bf1: JMP 0x10d0:0caf
10d0:0bf4: JMP 0x10d0:0cac
10d0:0bf7: CALL 0x10d0:0e82
10d0:0bfa: LEA DI,[BP + 0xfdea]
10d0:0bfe: PUSH SS
10d0:0bff: POP ES
10d0:0c00: STOSB ES:DI
10d0:0c01: DEC DI
10d0:0c02: MOV CX,0x1
10d0:0c05: JMP 0x10d0:0df7
10d0:0c08: CALL 0x10d0:0e96
10d0:0c0b: OR DI,DI
10d0:0c0d: JNZ 0x10d0:0c21
10d0:0c0f: MOV AX,ES
10d0:0c11: OR AX,AX
10d0:0c13: JNZ 0x10d0:0c21
10d0:0c15: PUSH DS
10d0:0c16: POP ES
10d0:0c17: MOV DI,0x2a27
10d0:0c1a: MOV CX,word ptr [0x2a2d]
10d0:0c1e: JMP 0x10d0:0df7
10d0:0c21: PUSH DI
10d0:0c22: MOV CX,word ptr [BP + -0xe]
10d0:0c25: JCXZ 0x10d0:0c2e
10d0:0c27: XOR AL,AL
10d0:0c29: SCASB.REPNE ES:DI
10d0:0c2b: JNZ 0x10d0:0c2e
10d0:0c2d: DEC DI
10d0:0c2e: POP CX
10d0:0c2f: SUB DI,CX
10d0:0c31: XCHG DI,CX
10d0:0c33: JMP 0x10d0:0df7
10d0:0c36: CALL 0x10d0:0e96
10d0:0c39: MOV AX,word ptr [BP + -0xa]
10d0:0c3c: STOSW ES:DI
10d0:0c3d: TEST byte ptr [BP + -0x6],0x10
10d0:0c41: JZ 0x10d0:0c46
10d0:0c43: XOR AX,AX
10d0:0c45: STOSW ES:DI
10d0:0c46: JMP 0x10d0:0a87
10d0:0c49: TEST byte ptr [BP + -0x6],0x30
10d0:0c4d: JNZ 0x10d0:0c54
10d0:0c4f: CALL 0x10d0:0e82
10d0:0c52: JMP 0x10d0:0c8d
10d0:0c54: CALL 0x10d0:0e8a
10d0:0c57: TEST byte ptr [BP + -0x5],0x18
10d0:0c5b: JNZ 0x10d0:0c8d
10d0:0c5d: MOV byte ptr [BP + -0x3],0x7
10d0:0c61: MOV CX,0x10
10d0:0c64: PUSH SS
10d0:0c65: POP ES
10d0:0c66: PUSH DX
10d0:0c67: XOR DX,DX
10d0:0c69: LEA DI,[BP + 0xfdf2]
10d0:0c6d: MOV SI,0x4
10d0:0c70: CALL 0x10d0:0f17
10d0:0c73: MOV CX,0x10
10d0:0c76: LEA DI,[BP + 0xfded]
10d0:0c7a: POP AX
10d0:0c7b: XOR DX,DX
10d0:0c7d: MOV SI,0x4
10d0:0c80: CALL 0x10d0:0f17
10d0:0c83: MOV byte ptr [BP + 0xfdee],0x3a
10d0:0c88: MOV CX,0x9
10d0:0c8b: JMP 0x10d0:0ca5
10d0:0c8d: MOV byte ptr [BP + -0x3],0x7
10d0:0c91: MOV CX,0x10
10d0:0c94: PUSH SS
10d0:0c95: POP ES
10d0:0c96: XOR DX,DX
10d0:0c98: LEA DI,[BP + 0xfded]
10d0:0c9c: MOV SI,0x4
10d0:0c9f: CALL 0x10d0:0f17
10d0:0ca2: MOV CX,0x4
10d0:0ca5: LEA DI,[BP + 0xfdea]
10d0:0ca9: JMP 0x10d0:0df7
10d0:0cac: INC word ptr [BP + -0x14]
10d0:0caf: OR byte ptr [BP + -0x6],0x40
10d0:0cb3: MOV AL,byte ptr [BP + -0x4]
10d0:0cb6: OR AL,0x20
10d0:0cb8: CBW
10d0:0cb9: MOV SI,AX
10d0:0cbb: CMP word ptr [BP + -0xe],0x0
10d0:0cbf: JG 0x10d0:0cd4
10d0:0cc1: JZ 0x10d0:0cca
10d0:0cc3: MOV word ptr [BP + -0xe],0x6
10d0:0cc8: JMP 0x10d0:0cd4
10d0:0cca: CMP AX,0x67
10d0:0ccd: JNZ 0x10d0:0cd4
10d0:0ccf: MOV word ptr [BP + -0xe],0x1
10d0:0cd4: LEA DI,[BP + 0xfdea]
10d0:0cd8: PUSH word ptr [BP + -0x14]
10d0:0cdb: PUSH word ptr [BP + -0xe]
10d0:0cde: PUSH SI
10d0:0cdf: PUSH SS
10d0:0ce0: PUSH DI
10d0:0ce1: PUSH SS
10d0:0ce2: PUSH word ptr [BP + 0xa]
10d0:0ce5: TEST byte ptr [BP + -0x5],0x4
10d0:0ce9: JZ 0x10d0:0cf5
10d0:0ceb: CALLF [0x2a48]
10d0:0cef: ADD word ptr [BP + 0xa],0xa
10d0:0cf3: JMP 0x10d0:0cfd
10d0:0cf5: CALLF [0x2a34]
10d0:0cf9: ADD word ptr [BP + 0xa],0x8
10d0:0cfd: ADD SP,0xe
10d0:0d00: TEST byte ptr [BP + -0x6],0x80
10d0:0d04: JZ 0x10d0:0d15
10d0:0d06: CMP word ptr [BP + -0xe],0x0
10d0:0d0a: JNZ 0x10d0:0d15
10d0:0d0c: PUSH SS
10d0:0d0d: PUSH DI
10d0:0d0e: CALLF [0x2a40]
10d0:0d12: ADD SP,0x4
10d0:0d15: CMP SI,0x67
10d0:0d18: JNZ 0x10d0:0d2a
10d0:0d1a: TEST word ptr [BP + -0x6],0x80
10d0:0d1f: JNZ 0x10d0:0d2a
10d0:0d21: PUSH SS
10d0:0d22: PUSH DI
10d0:0d23: CALLF [0x2a3c]
10d0:0d27: ADD SP,0x4
10d0:0d2a: PUSH SS
10d0:0d2b: POP ES
10d0:0d2c: CMP byte ptr ES:[DI],0x2d
10d0:0d30: JNZ 0x10d0:0d37
10d0:0d32: INC DI
10d0:0d33: OR byte ptr [BP + -0x5],0x1
10d0:0d37: MOV CX,0xffff
10d0:0d3a: PUSH DI
10d0:0d3b: MOV AL,0x0
10d0:0d3d: SCASB.REPNE ES:DI
10d0:0d3f: DEC DI
10d0:0d40: POP CX
10d0:0d41: SUB DI,CX
10d0:0d43: XCHG DI,CX
10d0:0d45: JMP 0x10d0:0df7
10d0:0d48: OR byte ptr [BP + -0x6],0x40
10d0:0d4c: MOV byte ptr [BP + -0x8],0xa
10d0:0d50: JMP 0x10d0:0d87
10d0:0d52: MOV byte ptr [BP + -0x3],0x7
10d0:0d56: JMP 0x10d0:0d5c
10d0:0d58: MOV byte ptr [BP + -0x3],0x27
10d0:0d5c: TEST byte ptr [BP + -0x6],0x80
10d0:0d60: JZ 0x10d0:0d73
10d0:0d62: MOV word ptr [BP + -0x12],0x2
10d0:0d67: MOV byte ptr [BP + -0x10],0x30
10d0:0d6b: MOV DL,0x51
10d0:0d6d: ADD DL,byte ptr [BP + -0x3]
10d0:0d70: MOV byte ptr [BP + -0xf],DL
10d0:0d73: MOV byte ptr [BP + -0x8],0x10
10d0:0d77: JMP 0x10d0:0d87
10d0:0d79: TEST byte ptr [BP + -0x6],0x80
10d0:0d7d: JZ 0x10d0:0d83
10d0:0d7f: OR byte ptr [BP + -0x5],0x2
10d0:0d83: MOV byte ptr [BP + -0x8],0x8
10d0:0d87: TEST byte ptr [BP + -0x6],0x10
10d0:0d8b: JZ 0x10d0:0d92
10d0:0d8d: CALL 0x10d0:0e8a
10d0:0d90: JMP 0x10d0:0da0
10d0:0d92: CALL 0x10d0:0e82
10d0:0d95: TEST byte ptr [BP + -0x6],0x40
10d0:0d99: JZ 0x10d0:0d9e
10d0:0d9b: CWD
10d0:0d9c: JMP 0x10d0:0da0
10d0:0d9e: XOR DX,DX
10d0:0da0: TEST byte ptr [BP + -0x6],0x40
10d0:0da4: JZ 0x10d0:0db5
10d0:0da6: OR DX,DX
10d0:0da8: JGE 0x10d0:0db5
10d0:0daa: OR byte ptr [BP + -0x5],0x1
10d0:0dae: NEG AX
10d0:0db0: ADC DX,0x0
10d0:0db3: NEG DX
10d0:0db5: CMP word ptr [BP + -0xe],0x0
10d0:0db9: JGE 0x10d0:0dc2
10d0:0dbb: MOV word ptr [BP + -0xe],0x1
10d0:0dc0: JMP 0x10d0:0dc6
10d0:0dc2: AND byte ptr [BP + -0x6],0xf7
10d0:0dc6: MOV BX,AX
10d0:0dc8: OR BX,DX
10d0:0dca: JNZ 0x10d0:0dd1
10d0:0dcc: MOV word ptr [BP + -0x12],0x0
10d0:0dd1: LEA DI,[BP + -0x17]
10d0:0dd4: PUSH SS
10d0:0dd5: POP ES
10d0:0dd6: MOV CL,byte ptr [BP + -0x8]
10d0:0dd9: XOR CH,CH
10d0:0ddb: MOV SI,word ptr [BP + -0xe]
10d0:0dde: CALL 0x10d0:0f17
10d0:0de1: TEST byte ptr [BP + -0x5],0x2
10d0:0de5: JZ 0x10d0:0df5
10d0:0de7: JCXZ 0x10d0:0def
10d0:0de9: CMP byte ptr ES:[DI],0x30
10d0:0ded: JZ 0x10d0:0df5
10d0:0def: DEC DI
10d0:0df0: MOV byte ptr ES:[DI],0x30
10d0:0df4: INC CX
10d0:0df5: JMP 0x10d0:0df7
10d0:0df7: TEST byte ptr [BP + -0x6],0x40
10d0:0dfb: JZ 0x10d0:0e2e
10d0:0dfd: TEST byte ptr [BP + -0x5],0x1
10d0:0e01: JZ 0x10d0:0e0e
10d0:0e03: MOV byte ptr [BP + -0x10],0x2d
10d0:0e07: MOV word ptr [BP + -0x12],0x1
10d0:0e0c: JMP 0x10d0:0e2e
10d0:0e0e: TEST byte ptr [BP + -0x6],0x1
10d0:0e12: JZ 0x10d0:0e1f
10d0:0e14: MOV byte ptr [BP + -0x10],0x2b
10d0:0e18: MOV word ptr [BP + -0x12],0x1
10d0:0e1d: JMP 0x10d0:0e2e
10d0:0e1f: TEST byte ptr [BP + -0x6],0x2
10d0:0e23: JZ 0x10d0:0e2e
10d0:0e25: MOV byte ptr [BP + -0x10],0x20
10d0:0e29: MOV word ptr [BP + -0x12],0x1
10d0:0e2e: MOV AX,word ptr [BP + -0xc]
10d0:0e31: SUB AX,CX
10d0:0e33: SUB AX,word ptr [BP + -0x12]
10d0:0e36: JGE 0x10d0:0e3a
10d0:0e38: XOR AX,AX
10d0:0e3a: PUSH ES
10d0:0e3b: PUSH DI
10d0:0e3c: PUSH CX
10d0:0e3d: TEST byte ptr [BP + -0x6],0xc
10d0:0e41: JNZ 0x10d0:0e4a
10d0:0e43: MOV CX,AX
10d0:0e45: MOV DL,0x20
10d0:0e47: CALL 0x10d0:0efb
10d0:0e4a: PUSH AX
10d0:0e4b: PUSH SS
10d0:0e4c: POP ES
10d0:0e4d: LEA DI,[BP + -0x10]
10d0:0e50: MOV CX,word ptr [BP + -0x12]
10d0:0e53: CALL 0x10d0:0edd
10d0:0e56: POP AX
10d0:0e57: TEST byte ptr [BP + -0x6],0x8
10d0:0e5b: JZ 0x10d0:0e6a
10d0:0e5d: TEST byte ptr [BP + -0x6],0x4
10d0:0e61: JNZ 0x10d0:0e6a
10d0:0e63: MOV CX,AX
10d0:0e65: MOV DL,0x30
10d0:0e67: CALL 0x10d0:0efb
10d0:0e6a: POP CX
10d0:0e6b: POP DI
10d0:0e6c: POP ES
10d0:0e6d: PUSH AX
10d0:0e6e: CALL 0x10d0:0edd
10d0:0e71: POP AX
10d0:0e72: TEST byte ptr [BP + -0x6],0x4
10d0:0e76: JZ 0x10d0:0e7f
10d0:0e78: MOV CX,AX
10d0:0e7a: MOV DL,0x20
10d0:0e7c: CALL 0x10d0:0efb
10d0:0e7f: JMP 0x10d0:0a87
