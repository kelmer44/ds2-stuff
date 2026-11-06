// FUN_1028_0964 at 1028:0964

undefined2 __cdecl16far FUN_1028_0964(void)

{
  char *a0;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  a0 = (char *)s_Options_10e8_10d0;
  DAT_10e8_64f6 = GETDOUBLECLICKTIME();
  if (DAT_10e8_64f6 < 0x4dac) {
    DAT_10e8_64f6 = DAT_10e8_64f6 << 1;
    SETDOUBLECLICKTIME((ushort)a0);
  }
  out(0x43,0x36);
  out(0x40,0);
  out(0x40,0x80);
  return 0x80;
}


