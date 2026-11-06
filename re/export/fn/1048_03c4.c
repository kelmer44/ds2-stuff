// FUN_1048_03c4 at 1048:03c4

uint __cdecl16far FUN_1048_03c4(void)

{
  char *pcVar1;
  uint uVar2;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  do {
    if ((DAT_10e8_341c < DAT_10e8_16f6) ||
       ((DAT_10e8_341c <= DAT_10e8_16f6 && (DAT_10e8_341a <= DAT_10e8_16f4)))) break;
    uVar2 = DAT_10e8_16f4 + 1;
    DAT_10e8_16f6 = DAT_10e8_16f6 + (uint)(0xfffe < DAT_10e8_16f4);
    pcVar1 = (char *)(DAT_10e8_16f4 + DAT_10e8_3416);
    DAT_10e8_16f4 = uVar2;
  } while (*pcVar1 != '\n');
  uVar2 = DAT_10e8_16f4;
  if ((DAT_10e8_341c <= DAT_10e8_16f6) &&
     ((DAT_10e8_341c < DAT_10e8_16f6 || (DAT_10e8_341a <= DAT_10e8_16f4)))) {
    uVar2 = 0xff;
  }
  return uVar2;
}


