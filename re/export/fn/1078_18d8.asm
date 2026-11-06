1078:18d8: PUSH BP
1078:18d9: MOV BP,SP
1078:18db: PUSH DS
1078:18dc: MOV AX,0x10e8
1078:18df: MOV DS,AX
1078:18e1: MOV AX,0xe
1078:18e4: CALLF 0x10d0:029e
1078:18e9: PUSH DI
1078:18ea: PUSH SI
1078:18eb: MOV DI,word ptr [BP + 0xc]
1078:18ee: MOV ES,word ptr [BP + 0xe]
1078:18f1: MOV AX,word ptr ES:[DI + 0x2c]
1078:18f5: OR AX,word ptr ES:[DI + 0x2a]
1078:18f9: JNZ 0x1078:1944
1078:18fb: MOV AX,word ptr ES:[DI + 0x20]
1078:18ff: OR AX,word ptr ES:[DI + 0x1e]
1078:1903: JNZ 0x1078:1908
1078:1905: JMP 0x1078:1ae1
1078:1908: MOV SI,word ptr [BP + 0x6]
1078:190b: PUSH word ptr [BP + 0x10]
1078:190e: PUSH ES
1078:190f: PUSH DI
1078:1910: PUSH word ptr [BP + 0x8]
1078:1913: PUSH SI
1078:1914: PUSH CS
1078:1915: CALL 0x1078:0806
1078:1918: ADD SP,0xa
1078:191b: MOV ES,word ptr [BP + 0xe]
1078:191e: MOV AX,word ptr ES:[DI + 0x22]
1078:1922: MOV word ptr [BP + -0x6],AX
1078:1925: MOV CX,word ptr ES:[DI + 0x24]
1078:1929: MOV word ptr [BP + -0x4],CX
1078:192c: LES BX,ES:[DI + 0x1e]
1078:1930: ADD AX,word ptr ES:[BX + 0x8]
1078:1934: MOV word ptr [BP + -0xa],AX
1078:1937: ADD CX,word ptr ES:[BX + 0xa]
1078:193b: MOV word ptr [BP + -0x8],CX
1078:193e: MOV CX,word ptr [BP + -0x8]
1078:1941: JMP 0x1078:1a31
1078:1944: MOV AX,word ptr ES:[DI + 0x20]
1078:1948: OR AX,word ptr ES:[DI + 0x1e]
1078:194c: JNZ 0x1078:19ae
1078:194e: PUSH word ptr [BP + 0x10]
1078:1951: PUSH ES
1078:1952: PUSH DI
1078:1953: PUSH word ptr [BP + 0x8]
1078:1956: PUSH word ptr [BP + 0x6]
1078:1959: PUSH CS
1078:195a: CALL 0x1078:08c0
1078:195d: ADD SP,0xa
1078:1960: MOV ES,word ptr [BP + 0xe]
1078:1963: LES BX,ES:[DI + 0x2a]
1078:1967: MOV AX,word ptr ES:[BX + 0xc]
1078:196b: MOV ES,word ptr [BP + 0xe]
1078:196e: ADD AX,word ptr ES:[DI + 0x2e]
1078:1972: MOV SI,AX
1078:1974: MOV word ptr ES:[DI + 0x3e],AX
1078:1978: LES BX,ES:[DI + 0x2a]
1078:197c: MOV AX,word ptr ES:[BX + 0xe]
1078:1980: MOV ES,word ptr [BP + 0xe]
1078:1983: ADD AX,word ptr ES:[DI + 0x30]
1078:1987: MOV word ptr [BP + -0x4],AX
1078:198a: MOV word ptr ES:[DI + 0x40],AX
1078:198e: LES BX,ES:[DI + 0x2a]
1078:1992: MOV AX,word ptr ES:[BX + 0x8]
1078:1996: ADD AX,SI
1078:1998: MOV word ptr [BP + -0xa],AX
1078:199b: MOV AX,word ptr ES:[BX + 0xa]
1078:199f: ADD AX,word ptr [BP + -0x4]
1078:19a2: MOV word ptr [BP + -0x8],AX
1078:19a5: MOV word ptr [BP + -0x6],SI
1078:19a8: MOV SI,word ptr [BP + 0x6]
1078:19ab: JMP 0x1078:193e
1078:19ae: LDS BX,ES:[DI + 0x2a]
1078:19b2: MOV AX,word ptr [BX + 0xc]
1078:19b5: ADD AX,word ptr ES:[DI + 0x2e]
1078:19b9: MOV word ptr [BP + -0x6],AX
1078:19bc: MOV word ptr ES:[DI + 0x3e],AX
1078:19c0: LDS BX,ES:[DI + 0x2a]
1078:19c4: MOV AX,word ptr [BX + 0xe]
1078:19c7: ADD AX,word ptr ES:[DI + 0x30]
1078:19cb: MOV CX,AX
1078:19cd: MOV word ptr ES:[DI + 0x40],AX
1078:19d1: LDS BX,ES:[DI + 0x2a]
1078:19d5: MOV AX,word ptr [BX + 0x8]
1078:19d8: ADD AX,word ptr [BP + -0x6]
1078:19db: MOV word ptr [BP + -0xa],AX
1078:19de: MOV AX,word ptr [BX + 0xa]
1078:19e1: ADD AX,CX
1078:19e3: MOV word ptr [BP + -0x8],AX
1078:19e6: MOV AX,word ptr ES:[DI + 0x22]
1078:19ea: MOV BX,word ptr ES:[DI + 0x24]
1078:19ee: LDS SI,ES:[DI + 0x1e]
1078:19f2: MOV DX,AX
1078:19f4: ADD AX,word ptr [SI + 0x8]
1078:19f7: MOV word ptr [BP + -0xc],AX
1078:19fa: MOV AX,word ptr [SI + 0xa]
1078:19fd: ADD AX,word ptr ES:[DI + 0x24]
1078:1a01: MOV word ptr [BP + -0xe],AX
1078:1a04: CMP DX,word ptr [BP + -0x6]
1078:1a07: JGE 0x1078:1a0c
1078:1a09: MOV word ptr [BP + -0x6],DX
1078:1a0c: MOV AX,word ptr [BP + -0xc]
1078:1a0f: CMP word ptr [BP + -0xa],AX
1078:1a12: JGE 0x1078:1a17
1078:1a14: MOV word ptr [BP + -0xa],AX
1078:1a17: MOV word ptr [BP + -0x4],CX
1078:1a1a: CMP CX,BX
1078:1a1c: JLE 0x1078:1a21
1078:1a1e: MOV word ptr [BP + -0x4],BX
1078:1a21: MOV AX,word ptr [BP + -0xe]
1078:1a24: CMP word ptr [BP + -0x8],AX
1078:1a27: JL 0x1078:1a2c
1078:1a29: JMP 0x1078:19a8
1078:1a2c: MOV CX,AX
1078:1a2e: MOV SI,word ptr [BP + 0x6]
1078:1a31: MOV DS,word ptr [BP + 0x8]
1078:1a34: CMP word ptr [SI + 0x348],0x0
1078:1a39: JNZ 0x1078:1a5c
1078:1a3b: MOV AX,word ptr [BP + -0x6]
1078:1a3e: MOV word ptr [SI + 0x340],AX
1078:1a42: MOV AX,word ptr [BP + -0xa]
1078:1a45: MOV word ptr [SI + 0x344],AX
1078:1a49: MOV AX,word ptr [BP + -0x4]
1078:1a4c: MOV word ptr [SI + 0x342],AX
1078:1a50: MOV word ptr [SI + 0x346],CX
1078:1a54: MOV word ptr [SI + 0x348],0x1
1078:1a5a: JMP 0x1078:1a8d
1078:1a5c: MOV AX,word ptr [BP + -0x6]
1078:1a5f: CMP word ptr [SI + 0x340],AX
1078:1a63: JLE 0x1078:1a69
1078:1a65: MOV word ptr [SI + 0x340],AX
1078:1a69: MOV AX,word ptr [BP + -0xa]
1078:1a6c: CMP word ptr [SI + 0x344],AX
1078:1a70: JGE 0x1078:1a76
1078:1a72: MOV word ptr [SI + 0x344],AX
1078:1a76: MOV AX,word ptr [BP + -0x4]
1078:1a79: CMP word ptr [SI + 0x342],AX
1078:1a7d: JLE 0x1078:1a83
1078:1a7f: MOV word ptr [SI + 0x342],AX
1078:1a83: CMP word ptr [SI + 0x346],CX
1078:1a87: JGE 0x1078:1a8d
1078:1a89: MOV word ptr [SI + 0x346],CX
1078:1a8d: MOV ES,word ptr [BP + 0xe]
1078:1a90: MOV AX,word ptr ES:[DI + 0x2a]
1078:1a94: MOV DX,word ptr ES:[DI + 0x2c]
1078:1a98: MOV word ptr ES:[DI + 0x1e],AX
1078:1a9c: MOV word ptr ES:[DI + 0x20],DX
1078:1aa0: MOV AX,word ptr ES:[DI + 0x2c]
1078:1aa4: OR AX,word ptr ES:[DI + 0x2a]
1078:1aa8: JZ 0x1078:1ae1
1078:1aaa: MOV ES,word ptr [BP + 0xe]
1078:1aad: LDS BX,ES:[DI + 0x2a]
1078:1ab1: MOV AX,word ptr [BX + 0xc]
1078:1ab4: ADD AX,word ptr ES:[DI + 0x2e]
1078:1ab8: MOV word ptr ES:[DI + 0x22],AX
1078:1abc: LDS BX,ES:[DI + 0x2a]
1078:1ac0: MOV AX,word ptr [BX + 0xe]
1078:1ac3: ADD AX,word ptr ES:[DI + 0x30]
1078:1ac7: MOV word ptr ES:[DI + 0x24],AX
1078:1acb: LDS BX,ES:[DI + 0x2a]
1078:1acf: MOV AX,word ptr [BX + 0x8]
1078:1ad2: MOV word ptr ES:[DI + 0x26],AX
1078:1ad6: LDS BX,ES:[DI + 0x2a]
1078:1ada: MOV AX,word ptr [BX + 0xa]
1078:1add: MOV word ptr ES:[DI + 0x28],AX
1078:1ae1: POP SI
1078:1ae2: POP DI
1078:1ae3: LEA SP,[BP + -0x2]
1078:1ae6: POP DS
1078:1ae7: POP BP
1078:1ae8: RETF
