// FUN_10a8_00e2 at 10a8:00e2

undefined2 __cdecl16far FUN_10a8_00e2(void)

{
  ushort uVar1;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  DAT_10e8_8700 = 10;
  DAT_10e8_8702 = 3;
  DAT_10e8_8704 = 0;
  DAT_10e8_8706 = 1;
  DAT_10e8_8708 = 0x16;
  DAT_10e8_004a = WaveMixConfigureInit_inferred(&DAT_10e8_8700);
  if (DAT_10e8_004a != 0) {
    uVar1 = WaveMixOpenChannel_inferred(DAT_10e8_004a,4,2);
    if (uVar1 == 0) {
      FUN_10a8_0000(DAT_10e8_004a,1);
      return 1;
    }
    WaveMixCloseSession_inferred(DAT_10e8_004a);
    DAT_10e8_004a = 0;
  }
  return 0;
}


