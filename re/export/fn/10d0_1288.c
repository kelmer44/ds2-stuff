// FUN_10d0_1288 at 10d0:1288

void FUN_10d0_1288(void)

{
  code *pcVar1;
  uint in_BX;
  int unaff_BP;
  undefined2 unaff_SS;
  
  if (*(int *)(unaff_BP + 10) != 0) {
    if (in_BX < *(uint *)(unaff_BP + -0xc)) {
      if ((DAT_10d0_0010 & 1) == 0) {
        pcVar1 = (code *)swi(0x21);
        (*pcVar1)();
      }
      else {
        DOS3CALL((char *)s_Options_10e8_10d0);
      }
    }
    else {
      FUN_10d0_0f7b();
    }
    FUN_10d0_092b();
    return;
  }
  FUN_10d0_092b();
  return;
}


