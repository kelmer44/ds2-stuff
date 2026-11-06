// FUN_1078_18d8 at 1078:18d8

void __cdecl16far
FUN_1078_18d8(int param_1,undefined2 param_2,undefined2 param_3,int param_4,undefined2 param_5,
             undefined2 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 uVar8;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  if (*(int *)(param_4 + 0x2c) == 0 && *(int *)(param_4 + 0x2a) == 0) {
    if (*(int *)(param_4 + 0x20) == 0 && *(int *)(param_4 + 0x1e) == 0) {
      return;
    }
    FUN_1078_0806(param_1,param_2,param_4,param_5,param_6);
    iVar3 = *(int *)(param_4 + 0x22);
    iVar4 = *(int *)(param_4 + 0x24);
    uVar8 = (undefined2)((ulong)*(undefined4 *)(param_4 + 0x1e) >> 0x10);
    iVar6 = (int)*(undefined4 *)(param_4 + 0x1e);
    iVar2 = iVar3 + *(int *)(iVar6 + 8);
    iVar6 = iVar4 + *(int *)(iVar6 + 10);
  }
  else if (*(int *)(param_4 + 0x20) == 0 && *(int *)(param_4 + 0x1e) == 0) {
    FUN_1078_08c0(param_1,param_2,param_4,param_5,param_6);
    iVar3 = *(int *)((int)*(undefined4 *)(param_4 + 0x2a) + 0xc) + *(int *)(param_4 + 0x2e);
    *(int *)(param_4 + 0x3e) = iVar3;
    iVar4 = *(int *)((int)*(undefined4 *)(param_4 + 0x2a) + 0xe) + *(int *)(param_4 + 0x30);
    *(int *)(param_4 + 0x40) = iVar4;
    uVar8 = (undefined2)((ulong)*(undefined4 *)(param_4 + 0x2a) >> 0x10);
    iVar6 = (int)*(undefined4 *)(param_4 + 0x2a);
    iVar2 = *(int *)(iVar6 + 8) + iVar3;
    iVar6 = *(int *)(iVar6 + 10) + iVar4;
  }
  else {
    iVar3 = *(int *)((int)*(undefined4 *)(param_4 + 0x2a) + 0xc) + *(int *)(param_4 + 0x2e);
    *(int *)(param_4 + 0x3e) = iVar3;
    iVar4 = *(int *)((int)*(undefined4 *)(param_4 + 0x2a) + 0xe) + *(int *)(param_4 + 0x30);
    *(int *)(param_4 + 0x40) = iVar4;
    uVar8 = (undefined2)((ulong)*(undefined4 *)(param_4 + 0x2a) >> 0x10);
    iVar6 = (int)*(undefined4 *)(param_4 + 0x2a);
    iVar2 = *(int *)(iVar6 + 8) + iVar3;
    iVar6 = *(int *)(iVar6 + 10) + iVar4;
    iVar1 = *(int *)(param_4 + 0x22);
    uVar8 = (undefined2)((ulong)*(undefined4 *)(param_4 + 0x1e) >> 0x10);
    iVar7 = (int)*(undefined4 *)(param_4 + 0x1e);
    iVar5 = iVar1 + *(int *)(iVar7 + 8);
    iVar7 = *(int *)(iVar7 + 10) + *(int *)(param_4 + 0x24);
    if (iVar1 < iVar3) {
      iVar3 = iVar1;
    }
    if (iVar2 < iVar5) {
      iVar2 = iVar5;
    }
    if (*(int *)(param_4 + 0x24) < iVar4) {
      iVar4 = *(int *)(param_4 + 0x24);
    }
    if (iVar6 < iVar7) goto LAB_1078_1a31;
  }
  iVar7 = iVar6;
LAB_1078_1a31:
  if (*(int *)(param_1 + 0x348) == 0) {
    *(int *)(param_1 + 0x340) = iVar3;
    *(int *)(param_1 + 0x344) = iVar2;
    *(int *)(param_1 + 0x342) = iVar4;
    *(int *)(param_1 + 0x346) = iVar7;
    *(undefined2 *)(param_1 + 0x348) = 1;
  }
  else {
    if (iVar3 < *(int *)(param_1 + 0x340)) {
      *(int *)(param_1 + 0x340) = iVar3;
    }
    if (*(int *)(param_1 + 0x344) < iVar2) {
      *(int *)(param_1 + 0x344) = iVar2;
    }
    if (iVar4 < *(int *)(param_1 + 0x342)) {
      *(int *)(param_1 + 0x342) = iVar4;
    }
    if (*(int *)(param_1 + 0x346) < iVar7) {
      *(int *)(param_1 + 0x346) = iVar7;
    }
  }
  uVar8 = *(undefined2 *)(param_4 + 0x2c);
  *(undefined2 *)(param_4 + 0x1e) = *(undefined2 *)(param_4 + 0x2a);
  *(undefined2 *)(param_4 + 0x20) = uVar8;
  if (*(int *)(param_4 + 0x2c) != 0 || *(int *)(param_4 + 0x2a) != 0) {
    *(int *)(param_4 + 0x22) =
         *(int *)((int)*(undefined4 *)(param_4 + 0x2a) + 0xc) + *(int *)(param_4 + 0x2e);
    *(int *)(param_4 + 0x24) =
         *(int *)((int)*(undefined4 *)(param_4 + 0x2a) + 0xe) + *(int *)(param_4 + 0x30);
    *(undefined2 *)(param_4 + 0x26) = *(undefined2 *)((int)*(undefined4 *)(param_4 + 0x2a) + 8);
    *(undefined2 *)(param_4 + 0x28) = *(undefined2 *)((int)*(undefined4 *)(param_4 + 0x2a) + 10);
  }
  return;
}


