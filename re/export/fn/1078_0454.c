// FUN_1078_0454 at 1078:0454

void __cdecl16far
FUN_1078_0454(undefined4 param_1,int param_2,undefined2 param_3,int param_4,int param_5,int param_6,
             int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  int iStack_c;
  int iStack_a;
  int iStack_8;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  iVar7 = 0;
  iVar6 = 0;
  uVar4 = (undefined2)((ulong)*(undefined4 *)(param_2 + 0x2a) >> 0x10);
  iVar1 = (int)*(undefined4 *)(param_2 + 0x2a);
  iStack_a = *(int *)(iVar1 + 8);
  iStack_8 = *(int *)(iVar1 + 10);
  iStack_c = *(int *)(param_2 + 0x3e) - param_4;
  iVar1 = *(int *)(param_2 + 0x40) - param_5;
  iVar2 = (int)param_1;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  if (*(int *)(param_2 + 0x14) == 0) {
    *(undefined2 *)(param_2 + 0x14) = 1;
    *(undefined2 *)(param_2 + 0x16) = *(undefined2 *)(iVar2 + 0x34a);
    *(undefined2 *)(param_2 + 0x1a) = *(undefined2 *)(iVar2 + 0x34c);
    *(undefined2 *)(param_2 + 0x18) = *(undefined2 *)(iVar2 + 0x34e);
    *(undefined2 *)(param_2 + 0x1c) = *(undefined2 *)(iVar2 + 0x350);
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    if (*(int *)(param_2 + 0x1a) < *(int *)(param_2 + 0x3e) + iStack_a) {
      iStack_a = *(int *)(param_2 + 0x1a) - *(int *)(param_2 + 0x3e);
    }
    if (*(int *)(param_2 + 0x1c) < *(int *)(param_2 + 0x40) + iStack_8) {
      iStack_8 = *(int *)(param_2 + 0x1c) - *(int *)(param_2 + 0x40);
    }
    if (*(int *)(param_2 + 0x3e) < *(int *)(param_2 + 0x16)) {
      iStack_c = *(int *)(param_2 + 0x16) - param_4;
      iVar6 = *(int *)(param_2 + 0x16) - *(int *)(param_2 + 0x3e);
      iStack_a = iStack_a - iVar6;
    }
    if (*(int *)(param_2 + 0x40) < *(int *)(param_2 + 0x18)) {
      iVar1 = *(int *)(param_2 + 0x18) - param_5;
      iVar7 = *(int *)(param_2 + 0x18) - *(int *)(param_2 + 0x40);
      iStack_8 = iStack_8 - iVar7;
    }
  }
  if ((((iStack_c <= param_6) && (-1 < iStack_a + iStack_c)) && (iVar1 <= param_7)) &&
     (-1 < iStack_8 + iVar1)) {
    uVar5 = (undefined2)((ulong)*(undefined4 *)(param_2 + 0x2a) >> 0x10);
    iVar3 = (int)*(undefined4 *)(param_2 + 0x2a);
    FUN_1078_1b6c(*(undefined2 *)(iVar2 + 8),
                  *(int *)(iVar3 + 0x16) != 0 || *(int *)(iVar3 + 0x14) != 0,iVar1,iVar3,uVar5,iVar6
                  ,iVar7);
  }
  return;
}


