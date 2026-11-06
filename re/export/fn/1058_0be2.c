// FUN_1058_0be2 at 1058:0be2

void __cdecl16far FUN_1058_0be2(undefined2 param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  ushort a0;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  if (((param_2 != 0) && (iVar2 = FUN_1060_0b00((char *)s_SysReadyExit_10e8_1cef), iVar2 != 0)) &&
     (DAT_10e8_0368 == 0)) {
    FUN_1008_0e16();
    DAT_10e8_8722 = LOADCURSOR(DAT_10e8_9556,s_cUseIt_10e8_1cfc);
    FUN_1008_0000();
    a0 = LOADCURSOR(0,(void *)0x7f02);
    SETCURSOR(a0);
    uVar1 = DAT_10e8_036e;
    DAT_10e8_0044 = 0;
    DAT_10e8_036e = 1;
    FUN_1060_0b26();
    FUN_1048_21b0();
    FUN_1050_035a();
    FUN_1048_3236();
    DAT_10e8_0044 = 1;
    DAT_10e8_036e = uVar1;
  }
  return;
}


