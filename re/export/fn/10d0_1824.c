// FUN_10d0_1824 at 10d0:1824

undefined2 __cdecl16far FUN_10d0_1824(uint param_1)

{
  code *pcVar1;
  int unaff_BP;
  undefined1 uVar2;
  
  if (param_1 < DAT_10e8_293c) {
    uVar2 = 0;
    if ((DAT_10d0_0010 & 1) == 0) {
      pcVar1 = (code *)swi(0x21);
      (*pcVar1)(unaff_BP + 1);
    }
    else {
      DOS3CALL((char *)s_Options_10e8_10d0,(char *)s_Options_10e8_10e2 + 6);
    }
    if (!(bool)uVar2) {
      *(undefined1 *)(param_1 + 0x2942) = 0;
    }
  }
  else {
    uVar2 = true;
  }
  if (!(bool)uVar2) {
    return 0;
  }
  FUN_10d0_0943();
  return 0xffff;
}


