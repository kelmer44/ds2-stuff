// FUN_1010_0000 at 1010:0000

void __cdecl16far FUN_1010_0000(undefined2 param_1)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  
                    /* Segment:    3
                       Offset:     00003e60
                       Length:     0bc0
                       Min Alloc:  0bc0
                       Flags:      0d50
                           Code
                           Moveable
                           Preload
                           Impure (Non-shareable)
                        */
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  puVar3 = (undefined2 *)&DAT_10e8_3c08;
  for (iVar2 = 0x24; iVar2 != 0; iVar2 = iVar2 + -1) {
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar1 = 0;
  }
  DAT_10e8_3c08 = 0x48;
  DAT_10e8_3c0a = 0;
  DAT_10e8_3c0c = param_1;
  DAT_10e8_3c10 = 0xdfe;
  DAT_10e8_3c12 = (char *)s_Options_10e8_10e2 + 6;
  DAT_10e8_3c16 = 0;
  DAT_10e8_3c14 = 0;
  DAT_10e8_3c1a = 0;
  DAT_10e8_3c18 = 0;
  DAT_10e8_3c1c = 1;
  DAT_10e8_3c1e = 0;
  DAT_10e8_3c22 = 0;
  DAT_10e8_3c20 = 0;
  DAT_10e8_3c24 = 0x104;
  DAT_10e8_3c26 = 0;
  DAT_10e8_3c2a = 0;
  DAT_10e8_3c28 = 0;
  DAT_10e8_3c2c = 0x200;
  DAT_10e8_3c2e = 0;
  DAT_10e8_3c32 = 0;
  DAT_10e8_3c30 = 0;
  DAT_10e8_3c36 = 0;
  DAT_10e8_3c34 = 0;
  DAT_10e8_3c3a = 0;
  DAT_10e8_3c38 = 0;
  DAT_10e8_3c0e = 0;
  DAT_10e8_3c3c = 0;
  DAT_10e8_3c3e = 0;
  DAT_10e8_3c42 = 0;
  DAT_10e8_3c40 = 0;
  DAT_10e8_3c46 = 0;
  DAT_10e8_3c44 = 0;
  DAT_10e8_3c4a = 0;
  DAT_10e8_3c48 = 0;
  DAT_10e8_3c4e = 0;
  DAT_10e8_3c4c = 0;
  return;
}


