// FUN_1068_312a at 1068:312a

void __cdecl16far FUN_1068_312a(undefined4 param_1,int param_2,undefined2 param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 uVar7;
  int iVar8;
  int iStackY_a;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  piVar3 = (int *)*(int *)((int)param_1 + 0x216);
  iStackY_a = *(int *)((int)param_1 + 0x218);
  puVar5 = (undefined2 *)(param_2 + 2);
  if (iStackY_a != 0 || piVar3 != (int *)0x0) {
    do {
      iVar4 = *piVar3;
      iVar8 = piVar3[1];
      puVar6 = puVar5;
      if (iVar8 != 0 || iVar4 != 0) {
        do {
          puVar5 = puVar6 + 1;
          *puVar6 = *(undefined2 *)(iVar4 + 0x29);
          puVar1 = (undefined4 *)(iVar4 + 0x3f);
          iVar8 = (int)((ulong)*puVar1 >> 0x10);
          iVar4 = (int)*puVar1;
          puVar6 = puVar5;
        } while (iVar8 != 0 || iVar4 != 0);
      }
      piVar2 = piVar3 + 0x1d;
      iStackY_a = piVar3[0x1e];
      piVar3 = (int *)*piVar2;
    } while (iStackY_a != 0 || (int *)*piVar2 != (int *)0x0);
  }
  return;
}


