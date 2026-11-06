10d0:0eb3: CBW
10d0:0eb4: PUSH DI
10d0:0eb5: MOV BX,word ptr [BP + 0x6]
10d0:0eb8: DEC word ptr [BX + 0x2]
10d0:0ebb: JS 0x10d0:0ec7
10d0:0ebd: MOV DI,word ptr [BX]
10d0:0ebf: INC word ptr [BX]
10d0:0ec1: MOV byte ptr [DI],AL
10d0:0ec3: XOR AX,AX
10d0:0ec5: POP DI
10d0:0ec6: RET
10d0:0ec7: PUSH ES
10d0:0ec8: PUSH CX
10d0:0ec9: PUSH DX
10d0:0eca: PUSH BX
10d0:0ecb: PUSH AX
10d0:0ecc: PUSH CS
10d0:0ecd: CALL 0x10d0:096a
10d0:0ed0: ADD SP,0x4
10d0:0ed3: POP DX
10d0:0ed4: POP CX
10d0:0ed5: POP ES
10d0:0ed6: CMP AX,-0x1
10d0:0ed9: JNZ 0x10d0:0ec3
10d0:0edb: JMP 0x10d0:0ec5
