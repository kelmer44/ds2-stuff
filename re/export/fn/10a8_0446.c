// FUN_10a8_0446 at 10a8:0446

undefined2 __cdecl16far
FUN_10a8_0446(undefined2 param_1,undefined2 param_2,void *param_3,undefined2 param_4,int *param_5)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  void *pvVar7;
  undefined1 local_c6 [128];
  undefined2 local_46 [2];
  undefined2 uStackY_42;
  char *pcStackY_40;
  int iStackY_36;
  int iStackY_34;
  int iStackY_32;
  int iStackY_30;
  undefined2 uStackY_1a;
  undefined2 uStackY_18;
  char *pcStackY_16;
  undefined2 uVar8;
  
  FUN_10d0_029e();
  FUN_10a8_0350();
  LSTRCPY((undefined1 *)CONCAT22(unaff_SS,local_c6),(void *)CONCAT22(param_4,param_3));
  pvVar7 = LSTRCAT((undefined1 *)CONCAT22(unaff_SS,local_c6),(void *)0x10e82792);
  iVar3 = (int)((ulong)pvVar7 >> 0x10);
  piVar4 = (int *)param_5;
  uVar6 = (undefined2)((ulong)param_5 >> 0x10);
  if (((DAT_10e8_004c == 0x3d6) || (DAT_10e8_005c == 0)) || (DAT_10e8_004a == 0)) {
    piVar4[1] = 0;
    *param_5 = 0;
  }
  else {
    iVar2 = FUN_10a8_028e();
    *param_5 = iVar2;
    piVar4[1] = iVar3;
    if (iVar3 == 0 && *param_5 == 0) {
      iVar2 = FUN_1098_0326();
      *param_5 = iVar2;
      piVar4[1] = iVar3;
      FUN_10a8_02e2();
    }
  }
  iVar2 = FUN_1088_0892();
  piVar4[2] = iVar2;
  piVar4[3] = iVar3;
  puVar5 = local_46;
  uVar8 = uVar6;
  for (iVar3 = 0x21; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar1 = 0;
  }
  iStackY_32 = *piVar4;
  iStackY_30 = piVar4[1];
  iStackY_36 = piVar4[2];
  iStackY_34 = piVar4[3];
  uStackY_42 = 0x454d;
  pcStackY_40 = (char *)s_Unable_to_create_palette_10e8_2042 + 0xb;
  uStackY_1a = 0;
  pcStackY_16 = (char *)s_DialogOpt_10e8_1082 + 6;
  uStackY_18 = 0x563;
  pvVar7 = WaveMixOpenWave_inferred
                     (DAT_10e8_004a,(undefined2 *)CONCAT22(unaff_SS,local_46),DAT_10e8_9556,4);
  piVar4[4] = (int)(void *)pvVar7;
  piVar4[5] = (int)((ulong)pvVar7 >> 0x10);
  return 1;
}


