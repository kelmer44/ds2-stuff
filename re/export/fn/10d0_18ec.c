// FUN_10d0_18ec at 10d0:18ec

undefined2 __cdecl16far FUN_10d0_18ec(void)

{
  code *pcVar1;
  int unaff_BP;
  undefined1 uVar2;
  
  uVar2 = 0;
  if ((DAT_10d0_0010 & 1) == 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)(unaff_BP + 1);
  }
  else {
    DOS3CALL((char *)s_Options_10e8_10d0,(char *)s_Options_10e8_10e2 + 6);
  }
  if (!(bool)uVar2) {
    return 0;
  }
  FUN_10d0_0943();
  return 0xffff;
}


