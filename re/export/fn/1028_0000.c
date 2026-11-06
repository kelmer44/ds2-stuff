// FUN_1028_0000 at 1028:0000

void __cdecl16far FUN_1028_0000(int param_1)

{
  ushort a0;
  ushort *puVar1;
  undefined2 *puVar2;
  long lVar3;
  int iVar4;
  
                    /* Segment:    6
                       Offset:     00006480
                       Length:     0ba6
                       Min Alloc:  0ba6
                       Flags:      0d50
                           Code
                           Moveable
                           Preload
                           Impure (Non-shareable)
                        */
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  a0 = GETDC(0);
  if (param_1 == 0) {
    SETSYSTEMPALETTEUSE(a0,1);
    SETSYSCOLORS(0x13,&DAT_10e8_1322,&DAT_10e8_2f9a);
  }
  else {
    puVar2 = (undefined2 *)&DAT_10e8_2f9a;
    iVar4 = 0x13;
    puVar1 = (ushort *)&DAT_10e8_1322;
    do {
      a0 = *puVar1;
      lVar3 = GETSYSCOLOR(a0);
      *puVar2 = (int)lVar3;
      puVar2[1] = (int)((ulong)lVar3 >> 0x10);
      puVar2 = puVar2 + 2;
      iVar4 = iVar4 + -1;
      puVar1 = puVar1 + 1;
    } while (iVar4 != 0);
    SETSYSTEMPALETTEUSE(a0,2);
  }
  RELEASEDC(0,a0);
  return;
}


