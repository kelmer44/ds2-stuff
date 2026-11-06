// FUN_1068_31a6 at 1068:31a6

void * __cdecl16far FUN_1068_31a6(undefined4 param_1)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  undefined2 *puVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  int local_112;
  undefined2 local_110 [124];
  undefined2 uStackY_18;
  char *pcStackY_16;
  int *piVar6;
  int iVar7;
  
  FUN_10d0_029e();
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  piVar3 = (int *)*(int *)((int)param_1 + 0x216);
  iVar2 = *(int *)((int)param_1 + 0x218);
  puVar4 = local_110;
  local_112 = 0;
  if (iVar2 != 0 || piVar3 != (int *)0x0) {
    local_112 = 0;
    piVar6 = (int *)CONCAT22(iVar2,piVar3);
    do {
      uVar5 = (undefined2)((ulong)piVar6 >> 0x10);
      piVar3 = (int *)piVar6;
      iVar2 = *piVar6;
      iVar7 = piVar3[1];
      if (iVar7 != 0 || iVar2 != 0) {
        do {
          local_112 = local_112 + 1;
          *puVar4 = *(undefined2 *)(iVar2 + 0x29);
          puVar4 = puVar4 + 1;
          piVar6 = (int *)(iVar2 + 0x3f);
          iVar7 = *(int *)(iVar2 + 0x41);
          iVar2 = *piVar6;
        } while (iVar7 != 0 || *piVar6 != 0);
      }
      piVar6 = (int *)CONCAT22(piVar3[0x1e],(int *)piVar3[0x1d]);
    } while (piVar3[0x1e] != 0 || (int *)piVar3[0x1d] != (int *)0x0);
  }
  iVar2 = local_112 + 1;
  uVar5 = 0;
  pvVar1 = (void *)FUN_1090_0000();
  pcStackY_16 = (char *)s_Options_10e8_108c + 4;
  uStackY_18 = 0x3274;
  HMEMCPY((void *)CONCAT22(uVar5,pvVar1),(int *)CONCAT22(unaff_SS,&local_112),
          (ulong)(uint)(iVar2 * 2));
  return pvVar1;
}


