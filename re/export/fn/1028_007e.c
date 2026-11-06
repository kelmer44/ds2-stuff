// FUN_1028_007e at 1028:007e

void __cdecl16far FUN_1028_007e(void)

{
  ushort a1;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  a1 = GETDC(0);
  SETSYSCOLORS(0x13,&DAT_10e8_1322,(void *)0x10e81348);
  RELEASEDC(0,a1);
  return;
}


