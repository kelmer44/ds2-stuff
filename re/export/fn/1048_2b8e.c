// FUN_1048_2b8e at 1048:2b8e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1048_2b8e(undefined2 param_1,int param_2)

{
  char *pcVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  int *piVar4;
  int iVar5;
  undefined2 in_DX;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  char *pcVar15;
  undefined2 *puVar16;
  int iVar17;
  undefined2 uVar18;
  uint unaff_SS;
  void *pvVar19;
  undefined4 uStackY_8a;
  undefined4 uStackY_86;
  undefined1 local_82 [102];
  char *pcStackY_1c;
  undefined4 uStackY_1a;
  char *pcStackY_16;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  
  FUN_10d0_029e();
  DAT_10e8_007c = param_2;
  DAT_10e8_005a = 0;
  if (0 < DAT_10e8_1540) {
    FUN_1038_01a4();
    DAT_10e8_1540 = -1;
  }
  FUN_10a8_03e2();
  uVar18 = DAT_10e8_2bc2;
  pcVar15 = (char *)s_Dark_Seed_II_10e8_0030;
  for (iVar5 = 200; iVar5 != 0; iVar5 = iVar5 + -1) {
    pcVar1 = pcVar15;
    pcVar15 = pcVar15 + 2;
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
  }
  uVar3 = FUN_1090_0000();
  uVar18 = DAT_10e8_2bc2;
  uStackY_86 = (char *)CONCAT22(DAT_10e8_2bc2,(char *)s_Dark_Seed_II_10e8_0030);
  *(undefined2 *)(char *)s_Dark_Seed_II_10e8_0030 = uVar3;
  *(undefined2 *)((char *)s_Dark_Seed_II_10e8_0030 + 2) = in_DX;
  puVar16 = *(undefined2 **)(char *)s_Dark_Seed_II_10e8_0030;
  for (iVar5 = 0x22; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar2 = puVar16;
    puVar16 = puVar16 + 1;
    *puVar2 = 0;
  }
  uVar3 = FUN_1090_0000();
  uVar18 = DAT_10e8_2bc2;
  uStackY_8a = (char *)CONCAT22(DAT_10e8_2bc2,(char *)s_Dark_Seed_II_10e8_0030 + 4);
  *(undefined2 *)((char *)s_Dark_Seed_II_10e8_0030 + 4) = uVar3;
  *(undefined2 *)((char *)s_Dark_Seed_II_10e8_0030 + 6) = in_DX;
  puVar16 = *(undefined2 **)((char *)s_Dark_Seed_II_10e8_0030 + 4);
  for (iVar5 = 0x22; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar2 = puVar16;
    puVar16 = puVar16 + 1;
    *puVar2 = 0;
  }
  param_2 = param_2 % 100;
  pcStackY_16 = (char *)s_Options_10e8_108c + 4;
  uStackY_1a = (char *)CONCAT22((char *)s_R6018___unexpected_heap_error_10e8_2c3d + 0xc,
                                (char *)uStackY_1a);
  _WSPRINTF(&DAT_10e8_37f0,(void *)0x10e81b6e);
  pcStackY_16 = (char *)0x13a8;
  pcVar15 = (char *)s_DialogOpt_10e8_1082 + 6;
  uStackY_1a = (char *)CONCAT22((char *)s_R6020___unexpected_QuickWin_erro_10e8_2c60 + 0xd,
                                (char *)uStackY_1a);
  FUN_1088_003e();
  FUN_1048_1f6e();
  DAT_10e8_5cbe = FUN_1048_093e();
  iVar5 = 0;
  uVar18 = (undefined2)((ulong)_DAT_10e8_6892 >> 0x10);
  DAT_10e8_5cc0 = param_2;
  if (*(int *)((char *)s_testing_10e8_1013 + 5 + (int)_DAT_10e8_6892) != 0 ||
      *(int *)((char *)s_testing_10e8_1013 + 3 + (int)_DAT_10e8_6892) != 0) {
    iVar10 = 0;
    do {
      if (iVar5 != 0) break;
      pcVar15 = (char *)s_ReadSpeed_10e8_105f + 1;
      iVar5 = FUN_1060_07f6();
      if (iVar5 != 0) {
        pcVar15 = (char *)s_PlayMidi_10e8_10a5 + 3;
        FUN_10a8_0a1e();
      }
      uVar18 = (undefined2)((ulong)_DAT_10e8_6892 >> 0x10);
      iVar10 = iVar10 + 4;
    } while (*(int *)((char *)s_testing_10e8_1013 + 5 + (int)_DAT_10e8_6892 + iVar10) != 0 ||
             *(int *)((char *)s_testing_10e8_1013 + 3 + (int)_DAT_10e8_6892 + iVar10) != 0);
  }
  pcStackY_16 = (char *)s_ReadSpeed_10e8_10d8 + 8;
  uStackY_1a = (char *)CONCAT22(0x275e,pcVar15);
  pcStackY_1c = (char *)s_R6002___floating_point_support_n_10e8_2ce9 + 0x2b;
  FUN_1080_0890();
  uVar18 = (undefined2)((ulong)_DAT_10e8_6892 >> 0x10);
  iVar5 = *(int *)((int)_DAT_10e8_6892 + 0x15);
  uVar18 = *(undefined2 *)((int)_DAT_10e8_6892 + 0x17);
  FUN_1028_00b6();
  pcStackY_16 = (char *)s_Options_10e8_1024 + 4;
  uStackY_1a = (char *)CONCAT22((undefined2 *)&DAT_10e8_2d4e,(char *)uStackY_1a);
  HMEMCPY(&DAT_10e8_9798,(void *)CONCAT22((undefined1 *)&DAT_10e8_9798,(void *)(iVar5 + 0x36)),0x400
         );
  iVar10 = 0;
  piVar11 = (int *)(iVar5 + 0x36);
  do {
    *piVar11 = iVar10;
    iVar10 = iVar10 + 1;
    piVar11 = piVar11 + 1;
  } while (iVar10 < 0x100);
  FUN_1080_0ad6();
  FUN_1078_03be();
  pcStackY_16 = (char *)s_MidiType_10e8_1071 + 7;
  uStackY_1a = (char *)CONCAT22(0x2db6,(char *)uStackY_1a);
  FUN_1078_0106();
  pcStackY_16 = (char *)s_MidiType_10e8_1071 + 7;
  uStackY_1a = (char *)CONCAT22(0x2dd9,(char *)uStackY_1a);
  FUN_1078_0106();
  *(undefined2 *)((int)*(undefined4 *)uStackY_86 + 0x10) = 1;
  *(undefined2 *)((int)*(undefined4 *)uStackY_86 + 0x14) = 0;
  *(undefined2 *)((int)*(undefined4 *)uStackY_8a + 0x10) = 1;
  *(undefined2 *)((int)*(undefined4 *)uStackY_8a + 0x14) = 1;
  *(undefined2 *)((int)*(undefined4 *)uStackY_8a + 0x16) = 0x17c;
  *(undefined2 *)((int)*(undefined4 *)uStackY_8a + 0x18) = 0x92;
  *(undefined2 *)((int)*(undefined4 *)uStackY_8a + 0x1a) = 0x1a4;
  *(undefined2 *)((int)*(undefined4 *)uStackY_8a + 0x1c) = 0xfb;
  pcStackY_16 = (char *)s_MidiType_10e8_1071 + 7;
  pcVar15 = (char *)s_MidiType_10e8_1071 + 7;
  uStackY_1a = (char *)CONCAT22(0x2e61,(char *)uStackY_1a);
  FUN_1078_00ca();
  uVar18 = (undefined2)((ulong)_DAT_10e8_6892 >> 0x10);
  uVar12 = *(uint *)((int)_DAT_10e8_6892 + 0x39);
  puVar20 = (undefined1 *)*(uint *)((int)_DAT_10e8_6892 + 0x3b);
  uStackY_1a = (char *)0x0;
  puVar6 = (undefined1 *)((uint)puVar20 | uVar12);
  if (puVar6 != (undefined1 *)0x0) {
    do {
      if (*(int *)(uVar12 + 0x13) == 0 && *(int *)(uVar12 + 0x11) == 0) {
LAB_1048_2f42:
        uStackY_1a = (char *)CONCAT22(puVar20,uVar12);
        iVar5 = 0;
        puVar22 = puVar20;
        if (0 < *(int *)(uVar12 + 0x6f)) {
          piVar4 = (int *)(uVar12 + 0x27b);
          piVar11 = (int *)(uVar12 + 0x77);
          puVar21 = puVar20;
          do {
            if (*piVar4 < 1) {
              piVar11[1] = 0;
              *piVar11 = 0;
            }
            else {
              LSTRCPY((undefined1 *)CONCAT22(unaff_SS,local_82),
                      (undefined1 *)CONCAT22(unaff_SS,local_82));
              pcStackY_16 = (char *)0x2fa3;
              _WSPRINTF(&DAT_10e8_37f0,(void *)0x10e81b7f);
              puVar20 = local_82;
              uVar12 = unaff_SS;
              pvVar19 = LSTRCAT((undefined1 *)CONCAT22(unaff_SS,puVar20),&DAT_10e8_37f0);
              iVar7 = (int)((ulong)pvVar19 >> 0x10);
              puVar22 = *(undefined1 **)(puVar20 + 0x67);
              puVar21 = local_82;
              iVar5 = 0x13a8;
              pcVar15 = (char *)s_Options_10e8_1069 + 7;
              puVar20 = (undefined1 *)0x2fc8;
              uVar12 = unaff_SS;
              iVar10 = FUN_1070_0000();
              *piVar11 = iVar10;
              piVar11[1] = iVar7;
              iVar10 = *piVar11;
              puVar6 = (undefined1 *)piVar11[1];
              if (piVar4[0x80] == 0) {
                piVar4[0x80] = *(int *)(iVar10 + 0x10) - *(int *)(iVar10 + 0xc);
              }
              if (piVar4[0x100] == 0) {
                piVar4[0x100] = *(int *)(iVar10 + 0x12) - *(int *)(iVar10 + 0xe);
              }
            }
            piVar4 = piVar4 + 1;
            piVar11 = piVar11 + 2;
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)(uVar12 + 0x6f));
        }
        if (*(int *)(uVar12 + 0x67b) == 100) {
LAB_1048_308c:
          uVar3 = 0;
          uVar18 = FUN_1090_0000();
          *(undefined2 *)(uVar12 + 0x67d) = uVar18;
          *(uint *)(uVar12 + 0x67f) = (uint)puVar6;
          puVar22 = (undefined1 *)0x0;
          pcStackY_16 = (char *)s_Options_10e8_108c + 4;
          pcVar15 = (char *)s_MidiType_10e8_1071 + 7;
          uStackY_1a = (char *)CONCAT22(0x30c4,(char *)uStackY_1a);
          uVar8 = DAT_10e8_6894;
          FUN_1078_0106();
          *(uint *)((int)*(undefined4 *)(uVar12 + 0x67d) + 0x12) = *(byte *)(uVar12 + 0x67) & 2;
          *(uint *)((int)*(undefined4 *)(uVar12 + 0x67d) + 0x10) = *(byte *)(uVar12 + 0x67) & 8;
          *(undefined2 *)((int)*(undefined4 *)(uVar12 + 0x67d) + 0x14) = 0;
          uVar18 = DAT_10e8_2bc2;
          if (*(int *)(uVar12 + 0x67b) != 100) {
            uVar8 = *(uint *)(uVar12 + 0x67f);
            iVar5 = *(int *)(uVar12 + 0x67b) * 4;
            *(undefined2 *)(iVar5 + 0x30) = *(undefined2 *)(uVar12 + 0x67d);
            *(uint *)(iVar5 + 0x32) = uVar8;
          }
        }
        else {
          iVar5 = *(int *)(uVar12 + 0x67b) * 4;
          uVar13 = *(uint *)(iVar5 + 0x30);
          uVar8 = *(uint *)(iVar5 + 0x32);
          puVar6 = (undefined1 *)(uVar8 | uVar13);
          if (puVar6 == (undefined1 *)0x0) goto LAB_1048_308c;
          *(uint *)(uVar12 + 0x67d) = uVar13;
          *(uint *)(uVar12 + 0x67f) = uVar8;
        }
        if ((*(byte *)(uVar12 + 0x67) & 0x10) != 0) {
          puVar22 = (undefined1 *)0x0;
          pcVar15 = (char *)s_Options_10e8_108c + 4;
          uVar18 = FUN_1090_0000();
          *(undefined2 *)(uVar12 + 0x277) = uVar18;
          *(uint *)(uVar12 + 0x279) = uVar8;
          puVar16 = (undefined2 *)*(undefined2 *)(uVar12 + 0x277);
          for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
            puVar2 = puVar16;
            puVar16 = puVar16 + 1;
            *puVar2 = 0;
          }
        }
        uVar13 = *(uint *)(uVar12 + 0x681);
        puVar6 = (undefined1 *)*(uint *)(uVar12 + 0x683);
        puVar20 = puVar6;
      }
      else {
        puVar20 = (undefined1 *)*(uint *)(uVar12 + 0x13);
        pcVar15 = (char *)s_ReadSpeed_10e8_105f + 1;
        iVar5 = FUN_1060_07f6();
        if (iVar5 != 0) goto LAB_1048_2f42;
        if (uStackY_1a._2_2_ == 0 && (char *)uStackY_1a == (char *)0x0) {
          uVar18 = *(undefined2 *)(uVar12 + 0x683);
          uVar3 = (undefined2)((ulong)_DAT_10e8_6892 >> 0x10);
          iVar5 = (int)_DAT_10e8_6892;
          *(undefined2 *)(iVar5 + 0x39) = *(undefined2 *)(uVar12 + 0x681);
          *(undefined2 *)(iVar5 + 0x3b) = uVar18;
        }
        else {
          uVar18 = *(undefined2 *)(uVar12 + 0x683);
          *(undefined2 *)((int)(char *)uStackY_1a + 0x681) = *(undefined2 *)(uVar12 + 0x681);
          *(undefined2 *)((int)(char *)uStackY_1a + 0x683) = uVar18;
        }
        uVar13 = *(uint *)(uVar12 + 0x681);
        puVar6 = (undefined1 *)*(uint *)(uVar12 + 0x683);
        FUN_1060_07a8();
        FUN_1060_07a8();
        pcVar15 = (char *)s_Options_10e8_108c + 4;
        FUN_1090_0068();
      }
      uVar12 = uVar13;
    } while (puVar20 != (undefined1 *)0x0 || uVar13 != 0);
  }
  pcStackY_16 = (char *)s_ReadSpeed_10e8_10d8 + 8;
  uStackY_1a = (char *)CONCAT22(0x275e,pcVar15);
  pcStackY_1c = (char *)0x3197;
  FUN_1080_0890();
  iVar7 = *(int *)((int)local_82._82_4_ + 10);
  iVar5 = 0xbc0;
  iVar14 = 0;
  iVar10 = 0x30;
  do {
    iVar17 = 0;
    do {
      *(undefined1 *)((int)_DAT_10e8_6892 + iVar14 + iVar17 + 0x52) =
           *(undefined1 *)(iVar5 + iVar17 + (int)local_82._82_4_ + iVar7);
      iVar17 = iVar17 + 1;
    } while (iVar17 < 0x40);
    iVar17 = 0;
    do {
      uVar18 = (undefined2)((ulong)_DAT_10e8_6892 >> 0x10);
      *(undefined1 *)((int)_DAT_10e8_6892 + iVar14 + iVar17 + 0x4a) =
           *(undefined1 *)((int)_DAT_10e8_6892 + iVar14 + 0x52);
      uVar18 = (undefined2)((ulong)_DAT_10e8_6892 >> 0x10);
      iVar9 = (int)_DAT_10e8_6892 - iVar17;
      iVar17 = iVar17 + 1;
      *(undefined1 *)(iVar9 + DAT_10e8_16e4 + iVar14 + 0x49) =
           *(undefined1 *)((int)_DAT_10e8_6892 + DAT_10e8_16e4 + iVar14 + 0x41);
    } while (iVar17 < 8);
    iVar5 = iVar5 + -0x40;
    iVar14 = iVar14 + 0x50;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  FUN_1090_0068();
  return;
}


