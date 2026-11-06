// FUN_10d0_1693 at 10d0:1693

undefined2 FUN_10d0_1693(undefined2 param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int unaff_BP;
  undefined2 uVar3;
  char acStack_10 [10];
  int iStack_6;
  char *pcStack_4;
  int iStack_2;
  
  iStack_2 = unaff_BP + 1;
  pcStack_4 = (char *)s_Options_10e8_10e2 + 6;
  uVar3 = 0xffff;
  if ((*(byte *)(param_2 + 6) & 0x40) != 0) {
    *(undefined1 *)(param_2 + 6) = 0;
    return 0xffff;
  }
  if ((*(byte *)(param_2 + 6) & 0x83) == 0) goto LAB_10d0_1778;
  uVar3 = FUN_10d0_1468(param_2);
  iStack_6 = *(int *)(param_2 + 0xa4);
  FUN_10d0_17f8(param_2);
  if (DAT_10e8_293c < (int)(uint)*(byte *)(param_2 + 7)) {
    iVar2 = FUN_10d0_0f7b();
    if (iVar2 < 0) goto LAB_10d0_16fc;
LAB_10d0_1714:
    bVar1 = false;
  }
  else {
    iVar2 = FUN_10d0_1824(*(undefined1 *)(param_2 + 7));
    if (-1 < iVar2) goto LAB_10d0_1714;
LAB_10d0_16fc:
    bVar1 = true;
  }
  if (!bVar1) {
    if (iStack_6 == 0) goto LAB_10d0_1778;
    FUN_10d0_189c(acStack_10,0x2a60);
    if (acStack_10[0] != '\\') {
      FUN_10d0_185c(acStack_10,0x2a62);
    }
    FUN_10d0_18ce();
    iVar2 = FUN_10d0_18ea();
    if (iVar2 == 0) goto LAB_10d0_1778;
  }
  uVar3 = 0xffff;
LAB_10d0_1778:
  *(undefined1 *)(param_2 + 6) = 0;
  return uVar3;
}


