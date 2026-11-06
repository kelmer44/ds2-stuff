// FUN_1028_01ea at 1028:01ea

void __cdecl16far FUN_1028_01ea(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  undefined2 unaff_SS;
  undefined1 local_2a [18];
  undefined2 uStackY_18;
  char *pcStackY_16;
  int iVar5;
  undefined2 *puVar6;
  
  FUN_10d0_029e();
  iVar3 = 1;
  pvVar4 = (void *)0x609;
  puVar6 = (undefined2 *)&DAT_10e8_5e16;
  do {
    pcStackY_16 = (char *)0x217;
    _WSPRINTF((undefined1 *)CONCAT22(unaff_SS,local_2a),s_AAAAAAAAAAA_02d_10e8_1396);
    LSTRCPY((void *)CONCAT22((char *)s_ReadSpeed_10e8_10d8 + 8,pvVar4),
            (undefined1 *)CONCAT22(unaff_SS,local_2a));
    *puVar6 = 0;
    pvVar4 = (void *)((int)pvVar4 + 0x19);
    iVar3 = iVar3 + 1;
    puVar6 = puVar6 + 1;
  } while (iVar3 < 0x15);
  FUN_1080_07a0();
  iVar3 = *(int *)(param_1 + 2);
  iVar5 = *(int *)(param_1 + 4);
  if (iVar5 != 0 || iVar3 != 0) {
    do {
      FUN_1060_07a8();
      if (*(int *)(iVar3 + 0x18) != 0 || *(int *)(iVar3 + 0x16) != 0) {
        FUN_1090_0068();
      }
      iVar1 = *(int *)(iVar3 + 0x91);
      iVar5 = *(int *)(iVar3 + 0x93);
      FUN_1090_0068();
      iVar3 = iVar1;
    } while (iVar5 != 0 || iVar1 != 0);
  }
  piVar2 = (int *)(param_1 + 0xf4e);
  iVar3 = 0x19;
  do {
    iVar5 = piVar2[1];
    if (iVar5 != 0 || *piVar2 != 0) {
      FUN_1060_07a8();
      param_2 = iVar5;
    }
    iVar5 = piVar2[0x65];
    if (iVar5 != 0 || piVar2[100] != 0) {
      FUN_1060_07a8();
      param_2 = iVar5;
    }
    iVar5 = *(int *)((int)piVar2 + 0x273);
    if (iVar5 != 0 || *(int *)((int)piVar2 + 0x271) != 0) {
      FUN_1060_07a8();
      param_2 = iVar5;
    }
    piVar2 = piVar2 + 2;
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
  uStackY_18 = 0x3b0;
  _WSPRINTF(&DAT_10e8_37f0,(void *)0x10e813a6);
  pcStackY_16 = (char *)0x3c4;
  FUN_1088_02ac();
  return;
}


