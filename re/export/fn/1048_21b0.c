// FUN_1048_21b0 at 1048:21b0

void __cdecl16far FUN_1048_21b0(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined1 local_2c [20];
  undefined2 uStackY_18;
  char *pcStackY_16;
  undefined2 *puVar7;
  
  FUN_10d0_029e();
  iVar3 = 1;
  pvVar5 = (void *)0x609;
  puVar7 = (undefined2 *)&DAT_10e8_5e16;
  do {
    pcStackY_16 = (char *)s_NULL_pointer_assignment_10e8_21ce + 0xf;
    _WSPRINTF((undefined1 *)CONCAT22(unaff_SS,local_2c),s_AAAAAAAAAAA_02d_10e8_1a35);
    LSTRCPY((void *)CONCAT22((char *)s_ReadSpeed_10e8_10d8 + 8,pvVar5),
            (undefined1 *)CONCAT22(unaff_SS,local_2c));
    *puVar7 = 0;
    pvVar5 = (void *)((int)pvVar5 + 0x19);
    iVar3 = iVar3 + 1;
    puVar7 = puVar7 + 1;
  } while (iVar3 < 0x15);
  FUN_1080_07a0();
  iVar3 = *(int *)((int)param_1 + 2);
  iVar4 = *(int *)((int)param_1 + 4);
  if (iVar4 != 0 || iVar3 != 0) {
    do {
      FUN_1060_07a8();
      if (*(int *)(iVar3 + 0x18) != 0 || *(int *)(iVar3 + 0x16) != 0) {
        FUN_1090_0068();
      }
      iVar2 = *(int *)(iVar3 + 0x91);
      iVar4 = *(int *)(iVar3 + 0x93);
      FUN_1090_0068();
      iVar3 = iVar2;
    } while (iVar4 != 0 || iVar2 != 0);
  }
  iVar3 = *(int *)((int)param_1 + 0x3b);
  iVar4 = *(int *)((int)param_1 + 0x39);
  if (iVar3 != 0 || *(int *)((int)param_1 + 0x39) != 0) {
    do {
      FUN_1060_07a8();
      FUN_1060_07a8();
      FUN_1060_07a8();
      if (0 < *(int *)(iVar4 + 0x6f)) {
        piVar1 = (int *)(iVar4 + 0x77);
        do {
          iVar2 = *piVar1;
          FUN_1070_0136();
          piVar1 = piVar1 + 2;
        } while (iVar2 + 1 < *(int *)(iVar4 + 0x6f));
      }
      if (((*(int *)(iVar4 + 0x67b) == 100) ||
          (iVar2 = *(int *)(iVar4 + 0x67b) * 4,
          *(int *)(iVar2 + 0x32) != 0 || *(int *)(iVar2 + 0x30) != 0)) &&
         (FUN_1090_0068(), uVar6 = DAT_10e8_2bc2, *(int *)(iVar4 + 0x67b) != 100)) {
        iVar2 = *(int *)(iVar4 + 0x67b) * 4;
        *(undefined2 *)(iVar2 + 0x32) = 0;
        *(undefined2 *)(iVar2 + 0x30) = 0;
      }
      if ((*(byte *)(iVar4 + 0x67) & 0x10) != 0) {
        uVar6 = (undefined2)((ulong)*(undefined4 *)(iVar4 + 0x277) >> 0x10);
        iVar2 = (int)*(undefined4 *)(iVar4 + 0x277);
        if (*(int *)(iVar2 + 4) != 0 || *(int *)(iVar2 + 2) != 0) {
          FUN_1090_0068();
        }
        FUN_1090_0068();
      }
      iVar2 = *(int *)(iVar4 + 0x681);
      iVar3 = *(int *)(iVar4 + 0x683);
      FUN_1090_0068();
      iVar4 = iVar2;
    } while (iVar3 != 0 || iVar2 != 0);
  }
  piVar1 = (int *)((int)param_1 + 0xf4e);
  iVar3 = 0x19;
  do {
    if (piVar1[1] != 0 || *piVar1 != 0) {
      FUN_1060_07a8();
    }
    if (piVar1[0x65] != 0 || piVar1[100] != 0) {
      FUN_1060_07a8();
    }
    if (*(int *)((int)piVar1 + 0x273) != 0 || *(int *)((int)piVar1 + 0x271) != 0) {
      FUN_1060_07a8();
    }
    piVar1 = piVar1 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_1090_0068();
  if (*(int *)((char *)s_Dark_Seed_II_10e8_0030 + 2) != 0 || *(int *)s_Dark_Seed_II_10e8_0030 != 0)
  {
    FUN_1090_0068();
  }
  if (*(int *)((char *)s_Dark_Seed_II_10e8_0030 + 6) != 0 ||
      *(int *)((char *)s_Dark_Seed_II_10e8_0030 + 4) != 0) {
    FUN_1090_0068();
  }
  pcStackY_16 = (char *)s_Options_10e8_108c + 4;
  uStackY_18 = 0x24cf;
  _WSPRINTF(&DAT_10e8_37f0,(void *)0x10e81a45);
  pcStackY_16 = (char *)0x24e3;
  FUN_1088_02ac();
  return;
}


