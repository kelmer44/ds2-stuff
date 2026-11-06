// FUN_10a8_03e2 at 10a8:03e2

void __cdecl16far FUN_10a8_03e2(void)

{
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  if (DAT_10e8_004a != 0) {
    WaveMixFlushChannel_inferred(DAT_10e8_004a,0,3);
    FUN_10a8_0350(0x1c0,(char *)s_ReadSpeed_10e8_10d8 + 8);
    FUN_10a8_0350(0x1cc,(char *)s_ReadSpeed_10e8_10d8 + 8);
    FUN_10a8_0350(0x1d8,(char *)s_ReadSpeed_10e8_10d8 + 8);
    FUN_10a8_0350(0x1e4,(char *)s_ReadSpeed_10e8_10d8 + 8);
    FUN_10a8_01e8();
  }
  return;
}


