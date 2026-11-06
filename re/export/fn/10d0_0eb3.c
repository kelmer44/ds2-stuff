// FUN_10d0_0eb3 at 10d0:0eb3

undefined2 __cdecl16near FUN_10d0_0eb3(void)

{
  int *piVar1;
  int *piVar2;
  char *pcVar3;
  char in_AL;
  int iVar4;
  int unaff_BP;
  undefined2 unaff_SS;
  
  piVar2 = (int *)*(undefined2 *)(unaff_BP + 6);
  piVar1 = piVar2 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    iVar4 = FUN_10d0_096a((int)in_AL,piVar2);
    if (iVar4 == -1) {
      return 0xffff;
    }
  }
  else {
    pcVar3 = (char *)*piVar2;
    *piVar2 = *piVar2 + 1;
    *pcVar3 = in_AL;
  }
  return 0;
}


