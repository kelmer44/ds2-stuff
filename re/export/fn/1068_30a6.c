// FUN_1068_30a6 at 1068:30a6

void __cdecl16far FUN_1068_30a6(undefined4 param_1,int param_2,undefined2 param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  int iStackY_a;
  int iVar7;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  piVar2 = (int *)*(int *)((int)param_1 + 0x216);
  iStackY_a = *(int *)((int)param_1 + 0x218);
  puVar4 = (undefined2 *)(param_2 + 2);
  if (iStackY_a != 0 || piVar2 != (int *)0x0) {
    do {
      iVar3 = *piVar2;
      iVar7 = piVar2[1];
      puVar5 = puVar4;
      if (iVar7 != 0 || iVar3 != 0) {
        do {
          puVar4 = puVar5 + 1;
          *(undefined2 *)(iVar3 + 0x29) = *puVar5;
          piVar1 = (int *)(iVar3 + 0x3f);
          iVar7 = *(int *)(iVar3 + 0x41);
          iVar3 = *piVar1;
          puVar5 = puVar4;
        } while (iVar7 != 0 || *piVar1 != 0);
      }
      piVar1 = piVar2 + 0x1d;
      iStackY_a = piVar2[0x1e];
      piVar2 = (int *)*piVar1;
    } while (iStackY_a != 0 || (int *)*piVar1 != (int *)0x0);
  }
  return;
}


