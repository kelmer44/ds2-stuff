// FUN_10d0_1468 at 10d0:1468

undefined2 __cdecl16near FUN_10d0_1468(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  
  uVar4 = 0;
  if (((*(byte *)(param_1 + 3) & 3) == 2) &&
     (((*(byte *)(param_1 + 3) & 8) != 0 || ((*(byte *)(param_1 + 0x50) & 1) != 0)))) {
    iVar1 = *param_1;
    iVar2 = param_1[2];
    if (0 < iVar1 - iVar2) {
      iVar3 = FUN_10d0_113c();
      if (iVar3 == iVar1 - iVar2) {
        if ((*(byte *)(param_1 + 3) & 0x80) != 0) {
          *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xfd;
        }
      }
      else {
        *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 0x20;
        uVar4 = 0xffff;
      }
    }
  }
  *param_1 = param_1[2];
  param_1[1] = 0;
  return uVar4;
}


