// FUN_10d0_1694 at 10d0:1694

undefined2 __cdecl16far FUN_10d0_1694(int param_1)

{
  bool bVar1;
  int iVar2;
  int unaff_BP;
  undefined2 uVar3;
  char local_10 [10];
  int iStack_6;
  char *local_4;
  int iStack_2;
  
  iStack_2 = unaff_BP + 1;
  local_4 = (char *)s_Options_10e8_10e2 + 6;
  uVar3 = 0xffff;
  if ((*(byte *)(param_1 + 6) & 0x40) != 0) {
    *(undefined1 *)(param_1 + 6) = 0;
    return 0xffff;
  }
  if ((*(byte *)(param_1 + 6) & 0x83) == 0) goto LAB_10d0_1778;
  uVar3 = FUN_10d0_1468(param_1);
  iStack_6 = *(int *)(param_1 + 0xa4);
  FUN_10d0_17f8(param_1);
  if (DAT_10e8_293c < (int)(uint)*(byte *)(param_1 + 7)) {
    iVar2 = FUN_10d0_0f7b();
    if (iVar2 < 0) goto LAB_10d0_16fc;
LAB_10d0_1714:
    bVar1 = false;
  }
  else {
    iVar2 = FUN_10d0_1824(*(undefined1 *)(param_1 + 7));
    if (-1 < iVar2) goto LAB_10d0_1714;
LAB_10d0_16fc:
    bVar1 = true;
  }
  if (!bVar1) {
    if (iStack_6 == 0) goto LAB_10d0_1778;
    FUN_10d0_189c(local_10,0x2a60);
    if (local_10[0] != '\\') {
      FUN_10d0_185c(local_10,0x2a62);
    }
    FUN_10d0_18ce();
    iVar2 = FUN_10d0_18ea();
    if (iVar2 == 0) goto LAB_10d0_1778;
  }
  uVar3 = 0xffff;
LAB_10d0_1778:
  *(undefined1 *)(param_1 + 6) = 0;
  return uVar3;
}


