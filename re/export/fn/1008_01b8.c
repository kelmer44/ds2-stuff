// FUN_1008_01b8 at 1008:01b8

void __cdecl16far FUN_1008_01b8(ushort param_1)

{
  ushort a0;
  ushort a0_00;
  short unaff_SI;
  undefined2 uVar1;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  DAT_10e8_64f4 = SELECTOBJECT(DAT_10e8_9da0,DAT_10e8_9f3e);
  a0 = GETDC(param_1);
  FUN_1080_0d56(DAT_10e8_86b6,DAT_10e8_86b8,DAT_10e8_2d5e,DAT_10e8_2d60,0,0,0x9776,
                (char *)s_Options_10e8_10e2 + 6,0,0,1);
  if (DAT_10e8_0d2a == 0) {
    if (DAT_10e8_0d26 - DAT_10e8_8f98 < 0xb) goto LAB_1008_0253;
    uVar1 = 0x5cf4;
  }
  else {
    uVar1 = 0x8eca;
  }
  FUN_1080_0d56(DAT_10e8_86b6,DAT_10e8_86b8,DAT_10e8_2d5e,DAT_10e8_2d60,0x22f,0,uVar1,
                (char *)s_Options_10e8_10e2 + 6,0,0,1);
LAB_1008_0253:
  a0_00 = SELECTPALETTE(a0,DAT_10e8_200a,0);
  WinGStretchBlt_inferred(a0_00,unaff_SI,a0,0x22f,0,0x50,0x46,DAT_10e8_9da0,0x22f,0);
  SELECTPALETTE(a0,a0,0);
  RELEASEDC(param_1,a0);
  SELECTOBJECT(DAT_10e8_9da0,DAT_10e8_64f4);
  return;
}


