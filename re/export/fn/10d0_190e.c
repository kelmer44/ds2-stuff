// FUN_10d0_190e at 10d0:190e

void FUN_10d0_190e(void)

{
  code *pcVar1;
  int unaff_BP;
  
  if ((DAT_10d0_0010 & 1) == 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)(unaff_BP + 1);
  }
  else {
    DOS3CALL((char *)s_Options_10e8_10d0,(char *)s_Options_10e8_10e2 + 6);
  }
  FUN_10d0_0919();
  return;
}


