// FUN_1048_156a at 1048:156a

void __cdecl16far FUN_1048_156a(int param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  undefined2 *puVar7;
  undefined2 uVar8;
  char *pcVar9;
  undefined1 local_25a [512];
  undefined1 local_5a [40];
  undefined2 local_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 local_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined4 uStack_14;
  char *pcStack_10;
  char *pcStack_e;
  undefined2 *puVar10;
  
  FUN_10d0_029e();
  puVar10 = (undefined2 *)CONCAT22(param_2,(undefined2 *)(param_1 + 0x12e9));
  pcVar6 = (char *)s_SAVEGAME_10e8_11bb + param_1;
  pcVar9 = (char *)s_Options_10e8_10d0;
LAB_1048_1595:
  pcStack_e = (char *)s_status_vfw_length_10e8_1596 + 8;
  uVar4 = FUN_1048_0b54();
  if (uVar4 == 0x27) {
    return;
  }
  puVar7 = (undefined2 *)puVar10;
  uVar8 = (undefined2)((ulong)puVar10 >> 0x10);
  pcStack_e = pcVar9;
  if (uVar4 != 0x3e) goto LAB_1048_15b3;
  pcStack_10 = (char *)s_EFFECT__10e8_1743 + 5;
  FUN_1060_0188();
  pcStack_e = (char *)(puVar7 + -100);
  pcStack_10 = local_5a;
  uStack_14 = (char *)0x10601761;
  FUN_1060_0c44();
  pcStack_e = (char *)s_ReadSpeed_10e8_105f + 1;
  pcStack_10 = (char *)s_DIALOG__10e8_1772;
  FUN_1060_0188();
  pcStack_e = (char *)(puVar7 + -0x4b);
  pcStack_10 = local_5a;
  uStack_14 = (char *)0x1060178b;
  FUN_1060_0c44();
  pcStack_e = (char *)s_ReadSpeed_10e8_105f + 1;
  pcStack_10 = (char *)s_GOSTART__10e8_179a + 2;
  FUN_1060_0188();
  pcStack_e = (char *)(puVar7 + -0x32);
  pcStack_10 = local_5a;
  uStack_14 = (char *)0x106017b5;
  FUN_1060_0c44();
  pcStack_e = (char *)s_ReadSpeed_10e8_105f + 1;
  pcStack_10 = (char *)s_LOOKSTART__10e8_17bc + 10;
  FUN_1060_0188();
  pcStack_e = (char *)(puVar7 + -0x19);
  pcStack_10 = local_5a;
  uStack_14 = (char *)0x106017df;
  FUN_1060_0c44();
  param_2 = uVar8;
  goto LAB_1048_1622;
LAB_1048_15b3:
  if (uVar4 < 0x3f) {
    cVar3 = (char)uVar4;
    if (cVar3 != '\x16') {
      if ('\x16' < cVar3) {
        if (cVar3 == '\x17') {
          pcStack_e = (char *)&local_32;
          pcStack_10 = local_25a;
          uStack_14 = (char *)CONCAT22(pcVar9,(char *)s_ShowMike_10e8_16bd + 8);
          FUN_1060_0f1c();
          *(undefined2 *)(pcVar6 + 0x28a) = local_32;
          *(undefined2 *)(pcVar6 + 0x28c) = uStack_30;
          *(undefined2 *)(pcVar6 + 0x2ee) = uStack_2e;
          *(undefined2 *)(pcVar6 + 0x2f0) = uStack_2c;
          *(undefined2 *)(pcVar6 + 0x352) = uStack_2a;
          *(undefined2 *)(pcVar6 + 0x354) = uStack_28;
          param_2 = uStack_28;
          pcVar9 = (char *)s_ReadSpeed_10e8_105f + 1;
        }
        else if (cVar3 == '\x18') {
          pcStack_e = (char *)&local_1e;
          pcStack_10 = local_25a;
          uStack_14 = (char *)CONCAT22(pcVar9,(char *)s_No_Info_for_this_Condition__10e8_1700 + 0x15
                                      );
          FUN_1060_0c44();
          *puVar10 = local_1e;
          puVar7[0x145] = uStack_1c;
          puVar7[0x15e] = uStack_1a;
          pcVar9 = (char *)s_ReadSpeed_10e8_105f + 1;
        }
        goto LAB_1048_1595;
      }
      if (cVar3 == '\x01') {
        puVar10 = (undefined2 *)CONCAT22(uVar8,puVar7 + 1);
        pcStack_10 = (char *)s_SysReadyExit_10e8_15e2 + 3;
        uVar8 = FUN_1090_0000();
        pcVar9 = pcVar6 + 4;
        *(undefined2 *)pcVar9 = uVar8;
        *(undefined2 *)(pcVar6 + 6) = param_2;
        puVar2 = *(undefined2 **)pcVar9;
        param_2 = *(undefined2 *)(pcVar6 + 6);
        puVar7 = puVar2;
        for (iVar5 = 0xc; pcVar6 = pcVar9, pcStack_e = (char *)puVar2, iVar5 != 0;
            iVar5 = iVar5 + -1) {
          puVar1 = puVar7;
          puVar7 = puVar7 + 1;
          *puVar1 = 0;
        }
      }
      else {
        if (cVar3 != '\x15') goto LAB_1048_1595;
        pcStack_10 = (char *)s_ShowMike_10e8_162b + 6;
        pcStack_e = (char *)FUN_1090_0000();
        uVar8 = (undefined2)((ulong)uStack_14 >> 0x10);
        *(char **)((char *)uStack_14 + 0x14) = pcStack_e;
        *(undefined2 *)((char *)uStack_14 + 0x16) = param_2;
        puVar7 = (undefined2 *)pcStack_e;
        for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
          puVar1 = puVar7;
          puVar7 = puVar7 + 1;
          *puVar1 = 0;
        }
      }
      pcStack_10 = local_25a;
      uStack_14 = (char *)0x10901622;
      FUN_1060_0652();
LAB_1048_1622:
      pcVar9 = (char *)s_ReadSpeed_10e8_105f + 1;
      goto LAB_1048_1595;
    }
    pcStack_e = (char *)&local_32;
    pcStack_10 = local_25a;
    uStack_14 = (char *)CONCAT22(pcVar9,(char *)s_GoingOut_10e8_1675);
    FUN_1060_0f1c();
    *(undefined2 *)(pcVar6 + 0x15e) = local_32;
    *(undefined2 *)(pcVar6 + 0x160) = uStack_30;
    *(undefined2 *)(pcVar6 + 0x1c2) = uStack_2e;
    *(undefined2 *)(pcVar6 + 0x1c4) = uStack_2c;
    *(undefined2 *)(pcVar6 + 0x226) = uStack_2a;
    *(undefined2 *)(pcVar6 + 0x228) = uStack_28;
    param_2 = uStack_28;
    pcVar9 = (char *)s_ReadSpeed_10e8_105f + 1;
  }
  goto LAB_1048_1595;
}


