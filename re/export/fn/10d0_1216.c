// FUN_10d0_1216 at 10d0:1216

/* WARNING: Unable to track spacebase fully for stack */

undefined2 __cdecl16near FUN_10d0_1216(void)

{
  code *pcVar1;
  char *pcVar2;
  undefined2 uVar3;
  int in_DX;
  undefined2 in_BX;
  int unaff_BP;
  int unaff_DI;
  undefined2 unaff_SS;
  undefined1 uVar4;
  char *in_stack_0000fff6;
  
  if (unaff_DI - in_DX != 0) {
    uVar4 = *(uint *)(unaff_BP + 6) < *(uint *)(unaff_BP + -0xc);
    if ((bool)uVar4) {
      uVar4 = 0;
      if ((DAT_10d0_0010 & 1) == 0) {
        pcVar1 = (code *)swi(0x21);
        pcVar2 = (char *)(*pcVar1)();
      }
      else {
        in_stack_0000fff6 = (char *)s_Options_10e8_10d0;
        pcVar2 = (char *)DOS3CALL((char *)s_Options_10e8_10d0,unaff_DI - in_DX);
      }
    }
    else {
      in_stack_0000fff6 = (char *)s_Saved_02d_10e8_1229 + 2;
      pcVar2 = (char *)FUN_10d0_0f7b();
    }
    if (((bool)uVar4) ||
       (*(int *)(unaff_BP + -4) = (int)(pcVar2 + *(int *)(unaff_BP + -4)),
       pcVar2 < in_stack_0000fff6)) {
      uVar3 = FUN_10d0_092b();
      return uVar3;
    }
  }
  return in_BX;
}


