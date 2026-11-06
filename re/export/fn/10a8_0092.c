// FUN_10a8_0092 at 10a8:0092

void __cdecl16far FUN_10a8_0092(int param_1)

{
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  if (param_1 != 0) {
    WaveMixFlushChannel_inferred(DAT_10e8_004a,3,2);
    FUN_10a8_0350(DAT_10e8_2772 * 0xc + 0x3cc8,(char *)s_ReadSpeed_10e8_10d8 + 8);
    DAT_10e8_2778 = 0;
  }
  FUN_10a8_07dc();
  return;
}


