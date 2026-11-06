// FUN_10d0_0943 at 10d0:0943

void __cdecl16near FUN_10d0_0943(void)

{
  char cVar1;
  uint in_AX;
  
  DAT_10e8_293a._0_1_ = (byte)in_AX;
  cVar1 = (char)(in_AX >> 8);
  if (cVar1 != '\0') goto LAB_10d0_0960;
  if ((byte)DAT_10e8_293a < 0x22) {
    if ((byte)DAT_10e8_293a < 0x20) {
      if (0x13 < (byte)DAT_10e8_293a) goto LAB_10d0_095a;
    }
    else {
      in_AX = 5;
    }
  }
  else {
LAB_10d0_095a:
    in_AX = 0x13;
  }
  cVar1 = *(char *)(ulong)((in_AX & 0xff) + 0x29ba);
LAB_10d0_0960:
  DAT_10e8_292a = (int)cVar1;
  return;
}


