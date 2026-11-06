// FUN_10d0_14f4 at 10d0:14f4

int FUN_10d0_14f4(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iStack_4;
  
  iVar3 = 0;
  iStack_4 = 0;
  for (uVar2 = 0x2a76; uVar2 <= DAT_10e8_2a32; uVar2 = uVar2 + 8) {
    if ((param_1 == 1) && ((*(byte *)(uVar2 + 6) & 0x83) != 0)) {
      iVar1 = FUN_10d0_1412(uVar2);
      if (iVar1 != -1) {
        iVar3 = iVar3 + 1;
      }
    }
    else if ((param_1 == 0) &&
            (((*(byte *)(uVar2 + 6) & 2) != 0 && (iVar1 = FUN_10d0_1412(uVar2), iVar1 == -1)))) {
      iStack_4 = -1;
    }
  }
  if (param_1 == 1) {
    iStack_4 = iVar3;
  }
  return iStack_4;
}


