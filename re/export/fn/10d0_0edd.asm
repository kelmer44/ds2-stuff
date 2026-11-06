10d0:0edd: JCXZ 0x10d0:0efa
10d0:0edf: MOV SI,DI
10d0:0ee1: ADD word ptr [BP + -0xa],CX
10d0:0ee4: PUSH DI
10d0:0ee5: XOR DI,DI
10d0:0ee7: LODSB ES:SI
10d0:0ee9: CALL 0x10d0:0eb3
10d0:0eec: OR DI,AX
10d0:0eee: LOOP 0x10d0:0ee7
10d0:0ef0: OR DI,DI
10d0:0ef2: POP DI
10d0:0ef3: JZ 0x10d0:0efa
10d0:0ef5: MOV word ptr [BP + -0xa],0xffff
10d0:0efa: RET
