// FUN_1008_0a58 at 1008:0a58

void __cdecl16far FUN_1008_0a58(void)

{
  int iVar1;
  int iVar2;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  DELETEOBJECT(DAT_10e8_9f3e);
  iVar2 = 0;
  if (0 < DAT_10e8_0d26) {
    iVar1 = -0x60bc;
    do {
      FUN_1080_07a0(iVar1,(char *)s_Options_10e8_10e2 + 6);
      iVar1 = iVar1 + 0x18;
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_10e8_0d26);
  }
  FUN_1080_07a0(0x9776,(char *)s_Options_10e8_10e2 + 6);
  FUN_1080_07a0(0x3bf0,(char *)s_Options_10e8_10e2 + 6);
  FUN_1080_07a0(0x8eca,(char *)s_Options_10e8_10e2 + 6);
  FUN_1080_07a0(0x5cdc,(char *)s_Options_10e8_10e2 + 6);
  FUN_1080_07a0(0x5cf4,(char *)s_Options_10e8_10e2 + 6);
  FUN_1090_0068(DAT_10e8_86b6,DAT_10e8_86b8);
  FUN_1090_0068(DAT_10e8_2d62,DAT_10e8_2d64);
  return;
}


