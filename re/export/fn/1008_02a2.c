// FUN_1008_02a2 at 1008:02a2

void __cdecl16far FUN_1008_02a2(ushort param_1)

{
  ushort a1;
  short unaff_SI;
  int iVar1;
  ushort unaff_DI;
  int iVar2;
  undefined2 uVar3;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  DAT_10e8_64f4 = SELECTOBJECT(DAT_10e8_9da0,DAT_10e8_9f3e);
  HMEMCPY((void *)CONCAT22(DAT_10e8_2d60,DAT_10e8_2d5e),
          (void *)CONCAT22(DAT_10e8_2d64,DAT_10e8_2d62),0xaf00);
  if (DAT_10e8_8f98 < DAT_10e8_0d26) {
    iVar2 = DAT_10e8_8f98 * 0x18 + -0x60bc;
    iVar1 = DAT_10e8_8f98;
    do {
      if (DAT_10e8_8f98 + 10 <= iVar1) break;
      FUN_1080_0d56(DAT_10e8_86b6,DAT_10e8_86b8,DAT_10e8_2d5e,DAT_10e8_2d60,
                    (iVar1 - DAT_10e8_8f98) * 0x32 + 0x46,10,iVar2,(char *)s_Options_10e8_10e2 + 6,0
                    ,0);
      iVar2 = iVar2 + 0x18;
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_10e8_0d26);
  }
  FUN_1080_0d56(DAT_10e8_86b6,DAT_10e8_86b8,DAT_10e8_2d5e,DAT_10e8_2d60,0,0,0x9776,
                (char *)s_Options_10e8_10e2 + 6,0,0);
  if (DAT_10e8_0d28 == 0) {
    if (0 < DAT_10e8_8f98) {
      uVar3 = 0x5cdc;
      goto LAB_1008_037d;
    }
  }
  else {
    uVar3 = 0x3bf0;
LAB_1008_037d:
    FUN_1080_0d56(DAT_10e8_86b6,DAT_10e8_86b8,DAT_10e8_2d5e,DAT_10e8_2d60,1,0,uVar3,0x10e8,0x10000);
  }
  if (DAT_10e8_0d2a == 0) {
    if (DAT_10e8_0d26 - DAT_10e8_8f98 < 0xb) goto LAB_1008_03df;
    uVar3 = 0x5cf4;
  }
  else {
    uVar3 = 0x8eca;
  }
  FUN_1080_0d56(DAT_10e8_86b6,DAT_10e8_86b8,DAT_10e8_2d5e,DAT_10e8_2d60,0x22f,0,uVar3,0x10e8,0x10000
               );
LAB_1008_03df:
  a1 = SELECTPALETTE(param_1,DAT_10e8_200a,0);
  WinGStretchBlt_inferred(unaff_DI,unaff_SI,param_1,0,0,0x280,0x46,DAT_10e8_9da0,0,0);
  SELECTPALETTE(param_1,a1,0);
  SELECTOBJECT(DAT_10e8_9da0,DAT_10e8_64f4);
  return;
}


