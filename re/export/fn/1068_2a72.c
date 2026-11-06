// FUN_1068_2a72 at 1068:2a72

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1068_2a72(void *param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  char cVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  uint uVar7;
  int iVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  char *pcVar12;
  undefined2 unaff_SS;
  void *pvVar13;
  undefined1 local_41e [512];
  undefined1 local_21e [512];
  undefined1 local_1e [10];
  char *pcStackY_14;
  char *pcStackY_12;
  
  FUN_10d0_029e();
  pcStackY_12 = (char *)s_Options_10e8_10d0;
  pcStackY_14 = (char *)0x2a99;
  LSTRCPY((undefined1 *)CONCAT22(unaff_SS,local_1e),(void *)CONCAT22(param_2,param_1));
  pcStackY_12 = (char *)0x13a8;
  pcStackY_14 = (char *)0x2aa7;
  LSTRCAT((undefined1 *)CONCAT22(unaff_SS,local_1e),(void *)0x10e81fc2);
  iVar3 = (int)*(char *)((int)param_1 + 6) +
          ((int)*(char *)((int)param_1 + 5) + (*(char *)((int)param_1 + 4) + -0x30) * 10 + -0x30) *
          10 + -0x30;
  DAT_10e8_3438 = (int)*(char *)((int)param_1 + 7) + iVar3 * 10 + -0x30;
  pcStackY_12 = (char *)0x2b11;
  DAT_10e8_3424._0_2_ = FUN_1098_0326();
  pcStackY_12 = (char *)0x2b2a;
  DAT_10e8_3424._2_2_ = iVar3;
  DAT_10e8_3428 = FUN_1088_0892();
  DAT_10e8_3422 = 0;
  DAT_10e8_1db8 = 0;
  pcVar12 = (char *)s_Options_10e8_108c + 4;
  DAT_10e8_342a = iVar3;
  puVar4 = (undefined2 *)FUN_1090_0000();
  _DAT_10e8_5cba = (undefined2 *)CONCAT22(iVar3,puVar4);
  for (iVar8 = 0x121; iVar8 != 0; iVar8 = iVar8 + -1) {
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar1 = 0;
  }
  while( true ) {
    uVar7 = FUN_1068_1692();
    if (uVar7 == 0xff) break;
    if (uVar7 == 0xf) {
      pcStackY_12 = (char *)0x2cd3;
      FUN_1068_237a();
    }
    else if (uVar7 < 0x10) {
      cVar2 = (char)uVar7;
      if (cVar2 == '\x01') {
        pcStackY_14 = (char *)0x2b99;
        pcStackY_12 = pcVar12;
        pvVar13 = LSTRCPY(_DAT_10e8_5cba,(undefined1 *)CONCAT22(unaff_SS,local_21e));
        iVar3 = (int)((ulong)pvVar13 >> 0x10);
        pcVar12 = (char *)0x13a8;
      }
      else if (cVar2 == '\x02') {
        FUN_1060_0062();
        FUN_1060_02bc();
        pcVar12 = (char *)s_ReadSpeed_10e8_105f + 1;
      }
      else if (cVar2 == '\x04') {
        uVar5 = FUN_1090_0000();
        uVar9 = (undefined2)((ulong)_DAT_10e8_5cba >> 0x10);
        puVar4 = (undefined2 *)_DAT_10e8_5cba;
        puVar4[0x10b] = uVar5;
        puVar4[0x10c] = iVar3;
        uVar5 = (undefined2)((ulong)_DAT_10e8_5cba >> 0x10);
        puVar4 = (undefined2 *)((undefined2 *)_DAT_10e8_5cba)[0x10b];
        uVar5 = ((undefined2 *)_DAT_10e8_5cba)[0x10c];
        for (iVar3 = 0x1f; iVar3 != 0; iVar3 = iVar3 + -1) {
          puVar1 = puVar4;
          puVar4 = puVar4 + 1;
          *puVar1 = 0;
        }
        FUN_1060_0000();
        FUN_1060_0062();
        uVar5 = (undefined2)((ulong)_DAT_10e8_5cba >> 0x10);
        pcStackY_12 = (char *)s_ReadSpeed_10e8_105f + 1;
        pcStackY_14 = (char *)s_R6009___not_enough_space_for_env_10e8_2c0f + 0x20;
        pvVar13 = LSTRCPY((void *)CONCAT22(((undefined2 *)_DAT_10e8_5cba)[0x10c],
                                           (void *)(((undefined2 *)_DAT_10e8_5cba)[0x10b] + 0xc)),
                          (undefined1 *)CONCAT22(unaff_SS,local_41e));
        iVar3 = (int)((ulong)pvVar13 >> 0x10);
        FUN_1068_27a8();
        pcVar12 = (char *)0x13a8;
      }
      else if (cVar2 == '\v') {
        uVar5 = DAT_10e8_5cba[0x109];
        uVar9 = DAT_10e8_5cba[0x10a];
        uVar11 = uVar9;
        uVar6 = FUN_1090_0000();
        uVar10 = (undefined2)((ulong)_DAT_10e8_5cba >> 0x10);
        puVar4 = (undefined2 *)_DAT_10e8_5cba;
        puVar4[0x109] = uVar6;
        puVar4[0x10a] = uVar11;
        uVar11 = (undefined2)((ulong)_DAT_10e8_5cba >> 0x10);
        puVar4 = (undefined2 *)((undefined2 *)_DAT_10e8_5cba)[0x109];
        iVar3 = ((undefined2 *)_DAT_10e8_5cba)[0x10a];
        for (iVar8 = 0x23; iVar8 != 0; iVar8 = iVar8 + -1) {
          puVar1 = puVar4;
          puVar4 = puVar4 + 1;
          *puVar1 = 0;
        }
        uVar11 = (undefined2)((ulong)*(undefined4 *)((undefined2 *)_DAT_10e8_5cba + 0x109) >> 0x10);
        iVar8 = (int)*(undefined4 *)((undefined2 *)_DAT_10e8_5cba + 0x109);
        *(undefined2 *)(iVar8 + 0x42) = uVar5;
        *(undefined2 *)(iVar8 + 0x44) = uVar9;
        pcStackY_12 = (char *)s_Options_10e8_108c + 4;
        pcStackY_14 = (char *)s_R6021___no_main_procedure_10e8_2cb3 + 10;
        FUN_1068_1efe();
        pcVar12 = (char *)s_Options_10e8_108c + 4;
      }
    }
  }
  FUN_1068_2144();
  uVar7 = ((undefined2 *)&DAT_10e8_6118)[DAT_10e8_3438 * 2] |
          ((undefined2 *)&DAT_10e8_6116)[DAT_10e8_3438 * 2];
  if (uVar7 == 0) {
    uVar5 = FUN_1068_31a6();
    iVar3 = DAT_10e8_3438;
    ((undefined2 *)&DAT_10e8_6116)[DAT_10e8_3438 * 2] = uVar5;
    ((undefined2 *)&DAT_10e8_6118)[iVar3 * 2] = uVar7;
  }
  else {
    pcStackY_14 = (char *)0x2d49;
    pcStackY_12 = pcVar12;
    FUN_1068_30a6();
  }
  FUN_1090_0068();
  return;
}


