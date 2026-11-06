// FUN_10d0_0efb at 10d0:0efb

void __cdecl16near FUN_10d0_0efb(void)

{
  uint uVar1;
  int in_CX;
  int unaff_BP;
  uint uVar2;
  undefined2 unaff_SS;
  
  if (in_CX != 0) {
    *(int *)(unaff_BP + -10) = *(int *)(unaff_BP + -10) + in_CX;
    uVar2 = 0;
    do {
      uVar1 = FUN_10d0_0eb3();
      uVar2 = uVar2 | uVar1;
      in_CX = in_CX + -1;
    } while (in_CX != 0);
    if (uVar2 != 0) {
      *(undefined2 *)(unaff_BP + -10) = 0xffff;
    }
  }
  return;
}


