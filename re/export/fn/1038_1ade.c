// FUN_1038_1ade at 1038:1ade

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1038_1ade(ushort param_1)

{
  int *piVar1;
  undefined2 *puVar2;
  uint *puVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ushort a1;
  char extraout_DL;
  char extraout_DL_00;
  char extraout_DL_01;
  char extraout_DL_02;
  uint uVar10;
  int iVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  char *pcVar14;
  char *pcVar15;
  undefined4 uVar16;
  char *pcVar17;
  char *pcVar18;
  char *pcVar19;
  int iVar20;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  SETCURSOR(((undefined2 *)&DAT_10e8_978e)[DAT_10e8_770e]);
  DAT_10e8_16b2 = 1;
  GETDC(param_1);
  FUN_10d0_0368();
  uVar12 = (undefined2)((ulong)_DAT_10e8_6892 >> 0x10);
  iVar5 = *(int *)((int)_DAT_10e8_6892 + 0x39);
  iVar11 = *(int *)((int)_DAT_10e8_6892 + 0x3b);
  pcVar19 = (char *)s_Options_10e8_10d0;
  if (iVar11 != 0 || iVar5 != 0) {
    do {
      pcVar15 = (char *)s_ReadSpeed_10e8_105f + 1;
      pcVar17 = (char *)s_FromRoom_10e8_1b44 + 2;
      iVar11 = FUN_1060_07f6(*(undefined2 *)(iVar5 + 0xd),*(undefined2 *)(iVar5 + 0xf));
      if (iVar11 == 0) {
        *(undefined2 *)(iVar5 + 0x73) = 0;
        if (*(int *)(iVar5 + 0x67b) == 100) {
          pcVar19 = (char *)((ulong)*(undefined4 *)(iVar5 + 0x67d) >> 0x10);
          iVar11 = (int)*(undefined4 *)(iVar5 + 0x67d);
          *(undefined2 *)(iVar11 + 0x2c) = 0;
          *(undefined2 *)(iVar11 + 0x2a) = 0;
          *(undefined2 *)(iVar11 + 0x2e) = *(undefined2 *)(iVar11 + 0x22);
          *(undefined2 *)(iVar11 + 0x30) = *(undefined2 *)(iVar11 + 0x24);
          uVar12 = *(undefined2 *)(iVar5 + 0x6d);
          pcVar17 = pcVar19;
LAB_1038_1eb4:
          pcVar15 = (char *)s_MidiType_10e8_1071 + 7;
          FUN_1078_18d8(0x653e,(char *)s_Options_10e8_10e2 + 6,pcVar17,iVar11,pcVar17,uVar12);
        }
      }
      else if ((((int)pcVar19 < *(int *)(iVar5 + 0x6b)) && (*(int *)(iVar5 + 0x69) < (int)pcVar19))
              || (DAT_10e8_610e != 0)) {
        pcVar19 = pcVar17;
        if (*(int *)(iVar5 + 0x75) == 0) {
          pcVar14 = pcVar15;
          if ((*(int *)(iVar5 + 0x45) == *(int *)(iVar5 + 0x73)) &&
             (*(char *)(iVar5 + 0x47) != '\0')) {
            pcVar19 = (char *)s_ReadSpeed_10e8_105f + 1;
            pcVar14 = (char *)s_PlayMidi_10e8_10a5 + 3;
            FUN_10a8_06fa(iVar5 + 0x47,pcVar17,999);
          }
          pcVar15 = pcVar14;
          if ((*(int *)(iVar5 + 0x54) == *(int *)(iVar5 + 0x73)) &&
             (*(char *)(iVar5 + 0x56) != '\0')) {
            pcVar15 = (char *)s_PlayMidi_10e8_10a5 + 3;
            FUN_10a8_06fa(iVar5 + 0x56,pcVar19,999);
            pcVar19 = pcVar14;
          }
        }
        iVar11 = *(int *)(iVar5 + 0x73) * 4;
        iVar20 = *(int *)(iVar11 + iVar5 + 0x77);
        pcVar18 = (char *)*(int *)(iVar11 + iVar5 + 0x79);
        iVar11 = *(int *)(iVar5 + 0x67d);
        pcVar14 = (char *)*(int *)(iVar5 + 0x67f);
        *(int *)(iVar11 + 0x2a) = iVar20;
        *(int *)(iVar11 + 0x2c) = (int)pcVar18;
        if (((*(byte *)(iVar5 + 0x67) & 8) == 0) || (pcVar18 == (char *)0x0 && iVar20 == 0)) {
          if (((*(byte *)(iVar5 + 0x67) & 0x10) != 0) && (pcVar18 != (char *)0x0 || iVar20 != 0)) {
            if (*(int *)(*(int *)(iVar5 + 0x73) * 2 + iVar5 + 0x57b) == 0) {
              uVar12 = (undefined2)((ulong)_DAT_10e8_6892 >> 0x10);
              iVar7 = *(int *)((int)_DAT_10e8_6892 + 0x35);
              uVar10 = *(uint *)((int)_DAT_10e8_6892 + 0x33);
              uVar6 = *(uint *)(*(int *)(iVar5 + 0x73) * 2 + iVar5 + 0x47b);
              uVar9 = uVar6 - uVar10;
              pcVar19 = (char *)(uVar9 * 0x80);
              FUN_10d0_0490(pcVar19,((((((((((int)uVar6 >> 0xf) - ((int)uVar10 >> 0xf)) -
                                          (uint)(uVar6 < uVar10)) * 2 + (uint)CARRY2(uVar9,uVar9)) *
                                         2 + (uint)CARRY2(uVar9 * 2,uVar9 * 2)) * 2 +
                                       (uint)CARRY2(uVar9 * 4,uVar9 * 4)) * 2 +
                                      (uint)CARRY2(uVar9 * 8,uVar9 * 8)) * 2 +
                                     (uint)CARRY2(uVar9 * 0x10,uVar9 * 0x10)) * 2 +
                                    (uint)CARRY2(uVar9 * 0x20,uVar9 * 0x20)) * 2 +
                                    (uint)CARRY2(uVar9 * 0x40,uVar9 * 0x40),iVar7,iVar7 >> 0xf);
            }
            uVar12 = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x277) >> 0x10);
            iVar8 = (int)*(undefined4 *)(iVar5 + 0x277);
            iVar7 = *(int *)(iVar8 + 2);
            iVar8 = *(int *)(iVar8 + 4);
            if (iVar8 != 0 || iVar7 != 0) {
              pcVar19 = (char *)s__d___Var__d_____s____d_10e8_1d5b + 0x10;
              FUN_1090_0068(iVar7,iVar8);
              uVar12 = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x277) >> 0x10);
              iVar7 = (int)*(undefined4 *)(iVar5 + 0x277);
              *(undefined2 *)(iVar7 + 4) = 0;
              *(undefined2 *)(iVar7 + 2) = 0;
            }
            puVar2 = (undefined2 *)(iVar5 + 0x279);
            pcVar19 = (char *)*(int *)(iVar5 + 0x277);
            pcVar15 = (char *)s_PlayWave_10e8_101b + 5;
            FUN_1020_0656(0,iVar20,pcVar18,pcVar19,*puVar2);
            uVar12 = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x277) >> 0x10);
            iVar20 = (int)*(undefined4 *)(iVar5 + 0x277);
            *(undefined2 *)(iVar20 + 0x14) = 1;
            *(undefined2 *)(iVar20 + 0x16) = 0;
            iVar20 = *(int *)(iVar5 + 0x277);
            pcVar18 = (char *)*(int *)(iVar5 + 0x279);
            *(int *)(iVar11 + 0x2a) = iVar20;
            *(int *)(iVar11 + 0x2c) = (int)pcVar18;
          }
        }
        else {
          *(int *)(*(int *)(iVar5 + 0x73) * 2 + iVar5 + 0x37b) = DAT_10e8_3cae;
          *(uint *)(*(int *)(iVar5 + 0x73) * 2 + iVar5 + 0x47b) = DAT_10e8_3cb0;
          uVar12 = (undefined2)((ulong)_DAT_10e8_6892 >> 0x10);
          iVar7 = *(int *)((int)_DAT_10e8_6892 + 0x35);
          iVar8 = iVar7 >> 0xf;
          uVar10 = *(uint *)((int)_DAT_10e8_6892 + 0x33);
          uVar16 = FUN_10d0_052a(DAT_10e8_3cb0 - uVar10,
                                 (((int)DAT_10e8_3cb0 >> 0xf) - ((int)uVar10 >> 0xf)) -
                                 (uint)(DAT_10e8_3cb0 < uVar10),0x86,0);
          FUN_10d0_0490(uVar16,iVar7,iVar8);
          pcVar17 = pcVar15;
          if (DAT_10e8_870e != 0 || DAT_10e8_870c != 0) {
            FUN_1090_0068(DAT_10e8_870c,DAT_10e8_870e);
            DAT_10e8_870e = 0;
            DAT_10e8_870c = 0;
            pcVar17 = pcVar15;
          }
          pcVar19 = (char *)0x870a;
          pcVar15 = (char *)s_PlayWave_10e8_101b + 5;
          FUN_1020_0656(0,iVar20,pcVar17,0x870a,(char *)s_Options_10e8_10e2 + 6);
          DAT_10e8_871e = 1;
          DAT_10e8_8720 = 0;
          *(undefined2 *)(iVar11 + 0x2a) = 0x870a;
          *(undefined2 *)(iVar11 + 0x2c) = (char *)s_Options_10e8_10e2 + 6;
          iVar20 = -0x78f6;
          pcVar18 = (char *)s_Options_10e8_10e2 + 6;
        }
        *(undefined2 *)(iVar11 + 0x2e) = *(undefined2 *)(*(int *)(iVar5 + 0x73) * 2 + iVar5 + 0x37b)
        ;
        *(undefined2 *)(iVar11 + 0x30) = *(undefined2 *)(*(int *)(iVar5 + 0x73) * 2 + iVar5 + 0x47b)
        ;
        *(int *)(iVar5 + 0x75) = *(int *)(iVar5 + 0x75) + 1;
        if (*(int *)(iVar5 + 0x71) < *(int *)(iVar5 + 0x75)) {
          *(int *)(iVar5 + 0x73) = *(int *)(iVar5 + 0x73) + 1;
          *(undefined2 *)(iVar5 + 0x75) = 0;
        }
        pcVar17 = pcVar19;
        if (*(int *)(iVar5 + 0x65) < *(int *)(iVar5 + 0x73)) {
          if ((*(byte *)(iVar5 + 0x67) & 4) == 0) {
            *(int *)(iVar5 + 0x73) = *(int *)(iVar5 + 0x73) + -1;
          }
          else {
            *(undefined2 *)(iVar5 + 0x73) = *(undefined2 *)(iVar5 + 99);
          }
          pcVar15 = (char *)s_ReadSpeed_10e8_105f + 1;
          pcVar17 = (char *)s_internal_error__talk_c_EntrySele_10e8_1e37 + 0x16;
          FUN_1060_092e(iVar5 + 0x1b,pcVar19);
        }
        if (((((*(int *)(iVar11 + 0x1e) != *(int *)(iVar11 + 0x2a)) ||
              (*(int *)(iVar11 + 0x20) != *(int *)(iVar11 + 0x2c))) ||
             (pcVar18 == (char *)0x0 && iVar20 == 0)) ||
            (((*(byte *)(iVar5 + 0x67) & 0x10) != 0 ||
             (*(int *)(iVar11 + 0x2e) + *(int *)(iVar20 + 0xc) != *(int *)(iVar11 + 0x22))))) ||
           ((*(int *)(iVar11 + 0x30) + *(int *)(iVar20 + 0xe) != *(int *)(iVar11 + 0x24) ||
            (DAT_10e8_610e != 0)))) {
          uVar12 = *(undefined2 *)(iVar5 + 0x6d);
          pcVar17 = pcVar14;
          goto LAB_1038_1eb4;
        }
      }
      piVar1 = (int *)(iVar5 + 0x681);
      iVar11 = *(int *)(iVar5 + 0x683);
      iVar5 = *piVar1;
      pcVar19 = pcVar15;
    } while (iVar11 != 0 || *piVar1 != 0);
  }
  iVar5 = FUN_1060_0b00((char *)s_ShowMike_10e8_16b4);
  if (iVar5 == 2) {
    FUN_1060_0b26((char *)s_ShowMike_10e8_16bd,1);
  }
  uVar12 = (undefined2)((ulong)_DAT_10e8_6892 >> 0x10);
  iVar5 = *(int *)((int)_DAT_10e8_6892 + 0x35);
  uVar10 = *(uint *)((int)_DAT_10e8_6892 + 0x33);
  uVar6 = DAT_10e8_3cb0 - uVar10;
  pcVar19 = (char *)s_internal_error__Talk_GetCondInfo_10e8_1f55 + 0x34;
  iVar5 = FUN_10d0_0490(uVar6 * 0xe,
                        (((((int)DAT_10e8_3cb0 >> 0xf) - ((int)uVar10 >> 0xf)) -
                         (uint)(DAT_10e8_3cb0 < uVar10)) * 7 + (uint)CARRY2(uVar6,uVar6) * 2 +
                         (uint)CARRY2(uVar6 * 2,uVar6) * 2 + (uint)CARRY2(uVar6 * 3,uVar6 * 3) +
                        (uint)CARRY2(uVar6 * 6,uVar6)) * 2 + (uint)CARRY2(uVar6 * 7,uVar6 * 7),iVar5
                        ,iVar5 >> 0xf);
  if (0xe < iVar5) {
    iVar5 = 0xe;
  }
  if (iVar5 < 6) {
    iVar5 = 6;
  }
  uVar10 = DAT_10e8_3cae - DAT_10e8_9b9a >> 0xf;
  if ((((int)((DAT_10e8_3cae - DAT_10e8_9b9a ^ uVar10) - uVar10) <= iVar5) &&
      (uVar10 = (int)(DAT_10e8_3cb0 - DAT_10e8_9b98) >> 0xf,
      (int)((DAT_10e8_3cb0 - DAT_10e8_9b98 ^ uVar10) - uVar10) <= iVar5)) && (-1 < DAT_10e8_097c)) {
    DAT_10e8_9b9a =
         ((uint)((undefined2 *)&DAT_10e8_3cb2)[DAT_10e8_097c] % DAT_10e8_16e4) * 10 + -0x4b;
    uVar12 = (undefined2)((ulong)_DAT_10e8_6892 >> 0x10);
    iVar11 = *(int *)((int)_DAT_10e8_6892 + 0xf4c);
    DAT_10e8_9b98 =
         iVar11 / 2 + ((uint)((undefined2 *)&DAT_10e8_3cb2)[DAT_10e8_097c] / DAT_10e8_16e4) * iVar11
         + *(int *)((int)_DAT_10e8_6892 + 0xf4a);
    DAT_10e8_097c = DAT_10e8_097c + -1;
  }
  uVar10 = DAT_10e8_3cae - DAT_10e8_9b9a >> 0xf;
  if ((iVar5 < (int)((DAT_10e8_3cae - DAT_10e8_9b9a ^ uVar10) - uVar10)) ||
     (uVar10 = (int)(DAT_10e8_3cb0 - DAT_10e8_9b98) >> 0xf,
     iVar5 < (int)((DAT_10e8_3cb0 - DAT_10e8_9b98 ^ uVar10) - uVar10))) {
    DAT_10e8_16b0 = DAT_10e8_16b0 + 1;
    if (DAT_10e8_16b0 == 9) {
      DAT_10e8_16b0 = 1;
    }
    uVar10 = DAT_10e8_9b9a - DAT_10e8_3cae;
    uVar6 = DAT_10e8_9b98 - DAT_10e8_3cb0;
    uVar12 = FUN_10a0_00be(uVar6,uVar10,iVar5 << 2);
    uVar13 = FUN_10a0_005e(uVar12);
    iVar11 = FUN_10a0_0080(uVar13);
    DAT_10e8_3cae = DAT_10e8_3cae + (iVar11 >> 2);
    uVar12 = FUN_10a0_0000(uVar12,iVar5 << 2);
    iVar11 = FUN_10a0_0080(uVar12);
    DAT_10e8_3cb0 = DAT_10e8_3cb0 + (iVar11 >> 2);
    if ((int)uVar6 < 0) {
      if ((int)uVar10 < 0) {
        DAT_10e8_8e3c = 6;
        iVar11 = 7;
      }
      else {
        DAT_10e8_8e3c = 2;
        iVar11 = 1;
      }
      iVar20 = 0;
    }
    else {
      if ((int)uVar10 < 0) {
        DAT_10e8_8e3c = 6;
        iVar11 = 5;
      }
      else {
        DAT_10e8_8e3c = 2;
        iVar11 = 3;
      }
      iVar20 = 4;
    }
    iVar7 = (uVar10 ^ (int)uVar10 >> 0xf) - ((int)uVar10 >> 0xf);
    iVar8 = (uVar6 ^ (int)uVar6 >> 0xf) - ((int)uVar6 >> 0xf);
    if ((iVar7 <= iVar8 * 5) && (DAT_10e8_8e3c = iVar20, iVar8 * 2 < iVar7 * 5)) {
      DAT_10e8_8e3c = iVar11;
    }
    if ((DAT_10e8_007c == 0x25b) && (DAT_10e8_8e3c == 7)) {
      DAT_10e8_8e3c = 7;
    }
  }
  else if ((DAT_10e8_097c < 0) &&
          ((((DAT_10e8_6112 < 8 || (DAT_10e8_0086 != DAT_10e8_3cae)) ||
            (DAT_10e8_0088 != DAT_10e8_3cb0)) || (DAT_10e8_16b0 != 0)))) {
    pcVar19 = (char *)0x1;
    DAT_10e8_16b0 = 0;
    DAT_10e8_3cae = DAT_10e8_0086;
    DAT_10e8_3cb0 = DAT_10e8_0088;
    DAT_10e8_9b9a = DAT_10e8_0086;
    DAT_10e8_9b98 = DAT_10e8_0088;
    if (DAT_10e8_6112 < 8) {
      DAT_10e8_8e3c = DAT_10e8_6112;
    }
    DAT_10e8_6112 = 8;
  }
  uVar10 = DAT_10e8_3cae - DAT_10e8_9b9a >> 0xf;
  if ((((int)((DAT_10e8_3cae - DAT_10e8_9b9a ^ uVar10) - uVar10) <= iVar5) &&
      (uVar10 = (int)(DAT_10e8_3cb0 - DAT_10e8_9b98) >> 0xf,
      (int)((DAT_10e8_3cb0 - DAT_10e8_9b98 ^ uVar10) - uVar10) <= iVar5)) &&
     ((DAT_10e8_610e == 0 && (pcVar19 == (char *)0x0)))) goto LAB_1038_256a;
  if (DAT_10e8_5cc6 != 0 || DAT_10e8_5cc4 != 0) {
    FUN_1090_0068(DAT_10e8_5cc4,DAT_10e8_5cc6);
    DAT_10e8_5cc6 = 0;
    DAT_10e8_5cc4 = 0;
  }
  uVar12 = (undefined2)((ulong)_DAT_10e8_6892 >> 0x10);
  iVar5 = FUN_1060_07f6(*(undefined2 *)((char *)s_SAVEGAME_10e8_11bb + 4 + (int)_DAT_10e8_6892),
                        *(undefined2 *)((char *)s_SAVEGAME_10e8_11bb + 6 + (int)_DAT_10e8_6892));
  if (iVar5 == 0) {
LAB_1038_23f6:
    uVar12 = (undefined2)((ulong)*(undefined4 *)((char *)s_Dark_Seed_II_10e8_0030 + 4) >> 0x10);
    iVar5 = (int)*(undefined4 *)((char *)s_Dark_Seed_II_10e8_0030 + 4);
    *(undefined2 *)(iVar5 + 0x2c) = 0;
    *(undefined2 *)(iVar5 + 0x2a) = 0;
  }
  else {
    bVar4 = *(char *)((int)_DAT_10e8_6892 + 0x12eb) - (char)DAT_10e8_8e3c;
    uVar10 = bVar4 & 7;
    if (((bVar4 & 7) == 0) || (3 < uVar10)) {
      uVar12 = 0;
    }
    else {
      uVar12 = 2;
    }
    uVar13 = (undefined2)((ulong)*(undefined4 *)((char *)s_Dark_Seed_II_10e8_0030 + 4) >> 0x10);
    iVar5 = (int)*(undefined4 *)((char *)s_Dark_Seed_II_10e8_0030 + 4);
    *(undefined2 *)(iVar5 + 0x2a) = 0x5cc2;
    *(undefined2 *)(iVar5 + 0x2c) = (char *)s_Options_10e8_10e2 + 6;
    uVar13 = (undefined2)((ulong)_DAT_10e8_6892 >> 0x10);
    uVar6 = FUN_10d0_052a(*(undefined2 *)
                           ((char *)s_DS2_INVENTORY_10e8_1314 + 9 + (int)_DAT_10e8_6892),
                          *(undefined2 *)
                           ((char *)s_DS2_INVENTORY_10e8_1314 + 0xb + (int)_DAT_10e8_6892),
                          DAT_10e8_3cae,DAT_10e8_3cae >> 0xf);
    uVar13 = (undefined2)((ulong)_DAT_10e8_6892 >> 0x10);
    uVar9 = FUN_10d0_052a(*(undefined2 *)((int)_DAT_10e8_6892 + 0x1381),
                          *(undefined2 *)((int)_DAT_10e8_6892 + 0x1383),DAT_10e8_3cb0,
                          (int)DAT_10e8_3cb0 >> 0xf);
    uVar13 = (undefined2)((ulong)_DAT_10e8_6892 >> 0x10);
    puVar3 = (uint *)((int)_DAT_10e8_6892 + 0x13e5);
    *(undefined2 *)((int)*(undefined4 *)((char *)s_Dark_Seed_II_10e8_0030 + 4) + 0x2e) =
         CONCAT11(extraout_DL_00 + extraout_DL + CARRY2(uVar9,uVar6) +
                  (char)*(undefined2 *)((char *)s_fix_pal_10e8_13e7 + (int)_DAT_10e8_6892) +
                  CARRY2(uVar9 + uVar6,*puVar3),(char)(uVar9 + uVar6 + *puVar3 >> 8));
    uVar13 = (undefined2)((ulong)_DAT_10e8_6892 >> 0x10);
    uVar6 = FUN_10d0_052a(*(undefined2 *)((char *)s_DIRECTORY_10e8_1441 + 8 + (int)_DAT_10e8_6892),
                          *(undefined2 *)((char *)s_sndtrack__10e8_144b + (int)_DAT_10e8_6892),
                          DAT_10e8_3cae,DAT_10e8_3cae >> 0xf);
    uVar13 = (undefined2)((ulong)_DAT_10e8_6892 >> 0x10);
    uVar9 = FUN_10d0_052a(*(undefined2 *)((char *)s_WIN_INI_10e8_14ab + 2 + (int)_DAT_10e8_6892),
                          *(undefined2 *)((char *)s_WIN_INI_10e8_14ab + 4 + (int)_DAT_10e8_6892),
                          DAT_10e8_3cb0,(int)DAT_10e8_3cb0 >> 0xf);
    uVar13 = (undefined2)((ulong)_DAT_10e8_6892 >> 0x10);
    *(undefined2 *)((int)*(undefined4 *)((char *)s_Dark_Seed_II_10e8_0030 + 4) + 0x30) =
         CONCAT11(extraout_DL_02 + extraout_DL_01 + CARRY2(uVar9,uVar6) +
                  (char)*(undefined2 *)((char *)s_UseAVIFile_10e8_150d + 6 + (int)_DAT_10e8_6892) +
                  CARRY2(uVar9 + uVar6,
                         *(uint *)((char *)s_UseAVIFile_10e8_150d + 4 + (int)_DAT_10e8_6892)),
                  (char)(uVar9 + uVar6 +
                         *(uint *)((char *)s_UseAVIFile_10e8_150d + 4 + (int)_DAT_10e8_6892) >> 8));
    uVar13 = (undefined2)((ulong)_DAT_10e8_6892 >> 0x10);
    iVar5 = *(int *)((int)_DAT_10e8_6892 + 0x35);
    iVar11 = iVar5 >> 0xf;
    uVar6 = *(uint *)((int)_DAT_10e8_6892 + 0x33);
    uVar9 = *(uint *)((int)*(undefined4 *)((char *)s_Dark_Seed_II_10e8_0030 + 4) + 0x30);
    uVar16 = FUN_10d0_052a(uVar9 - uVar6,
                           (((int)uVar9 >> 0xf) - ((int)uVar6 >> 0xf)) - (uint)(uVar9 < uVar6),0x86,
                           0);
    uVar13 = FUN_10d0_0490(uVar16,iVar5,iVar11);
    FUN_1020_0656(uVar13,(uVar10 * 9 + DAT_10e8_16b0) * 0x18 + -0x788a,
                  (char *)s_Options_10e8_10e2 + 6,0x5cc2,(char *)s_Options_10e8_10e2 + 6,uVar13,
                  uVar12);
    DAT_10e8_5cd6 = 1;
    DAT_10e8_5cd8 = 0;
    *(undefined2 *)((int)*(undefined4 *)((char *)s_Dark_Seed_II_10e8_0030 + 4) + 0x14) = 1;
    *(undefined2 *)((int)*(undefined4 *)((char *)s_Dark_Seed_II_10e8_0030 + 4) + 0x16) =
         *(undefined2 *)((char *)s_SAVEGAME_10e8_1220 + 3 + (int)_DAT_10e8_6892);
    *(undefined2 *)((int)*(undefined4 *)((char *)s_Dark_Seed_II_10e8_0030 + 4) + 0x18) =
         *(undefined2 *)((int)_DAT_10e8_6892 + 0x1255);
    *(undefined2 *)((int)*(undefined4 *)((char *)s_Dark_Seed_II_10e8_0030 + 4) + 0x1a) =
         *(undefined2 *)
          ((char *)s_n__Reinicie_Windows_y_Dark_Seed_I_10e8_1275 + 0x12 + (int)_DAT_10e8_6892);
    *(undefined2 *)((int)*(undefined4 *)((char *)s_Dark_Seed_II_10e8_0030 + 4) + 0x1c) =
         *(undefined2 *)
          ((char *)s_Saved_Game_from_other_Version__R_10e8_129a + 0x1f + (int)_DAT_10e8_6892);
    iVar5 = FUN_1060_0b00((char *)s_EraseMike_10e8_16c6);
    if (iVar5 != 0) goto LAB_1038_23f6;
  }
  FUN_1078_18d8(0x653e,(char *)s_Options_10e8_10e2 + 6,
                *(undefined2 *)((char *)s_Dark_Seed_II_10e8_0030 + 6),
                *(undefined2 *)((char *)s_Dark_Seed_II_10e8_0030 + 4),
                *(undefined2 *)((char *)s_Dark_Seed_II_10e8_0030 + 6),0);
  uVar12 = (undefined2)((ulong)_DAT_10e8_6892 >> 0x10);
  iVar5 = *(int *)((int)_DAT_10e8_6892 + 0x35);
  iVar11 = iVar5 >> 0xf;
  uVar10 = *(uint *)((int)_DAT_10e8_6892 + 0x33);
  uVar16 = FUN_10d0_052a(DAT_10e8_3cb0 - uVar10,
                         (((int)DAT_10e8_3cb0 >> 0xf) - ((int)uVar10 >> 0xf)) -
                         (uint)(DAT_10e8_3cb0 < uVar10),0x86,0);
  iVar5 = FUN_10d0_0490(uVar16,iVar5,iVar11);
  if (0xb4 < iVar5) {
    iVar5 = 0xb4;
  }
  if (iVar5 < 10) {
    iVar5 = 10;
  }
  if ((iVar5 != 0) && (iVar5 = FUN_1060_0b00((char *)s_ShowMike_10e8_16d0), iVar5 != 0)) {
    if (DAT_10e8_870e != 0 || DAT_10e8_870c != 0) {
      FUN_1090_0068(DAT_10e8_870c,DAT_10e8_870e);
      DAT_10e8_870e = 0;
      DAT_10e8_870c = 0;
    }
    if ((DAT_10e8_8e3c < 1) || (3 < DAT_10e8_8e3c)) {
      uVar12 = 0;
    }
    else {
      uVar12 = 2;
    }
    FUN_1020_0656(uVar12,(DAT_10e8_8e3c * 9 + DAT_10e8_16b0) * 0x18 + -0x788a,
                  (char *)s_Options_10e8_10e2 + 6,0x870a,(char *)s_Options_10e8_10e2 + 6);
    DAT_10e8_871e = 1;
    DAT_10e8_8720 = 0;
    uVar12 = (undefined2)((ulong)*(undefined4 *)(char *)s_Dark_Seed_II_10e8_0030 >> 0x10);
    iVar5 = (int)*(undefined4 *)(char *)s_Dark_Seed_II_10e8_0030;
    *(undefined2 *)(iVar5 + 0x2a) = 0x870a;
    *(undefined2 *)(iVar5 + 0x2c) = (char *)s_Options_10e8_10e2 + 6;
    *(int *)((int)*(undefined4 *)(char *)s_Dark_Seed_II_10e8_0030 + 0x2e) = DAT_10e8_3cae;
    *(uint *)((int)*(undefined4 *)(char *)s_Dark_Seed_II_10e8_0030 + 0x30) = DAT_10e8_3cb0;
    iVar5 = FUN_1060_0b00((char *)s_EraseMike_10e8_16d9);
    if (iVar5 != 0) {
      uVar12 = (undefined2)((ulong)*(undefined4 *)(char *)s_Dark_Seed_II_10e8_0030 >> 0x10);
      iVar5 = (int)*(undefined4 *)(char *)s_Dark_Seed_II_10e8_0030;
      *(undefined2 *)(iVar5 + 0x2c) = 0;
      *(undefined2 *)(iVar5 + 0x2a) = 0;
    }
    FUN_1078_18d8(0x653e,(char *)s_Options_10e8_10e2 + 6,
                  *(undefined2 *)((char *)s_Dark_Seed_II_10e8_0030 + 2),
                  *(undefined2 *)(char *)s_Dark_Seed_II_10e8_0030,
                  *(undefined2 *)((char *)s_Dark_Seed_II_10e8_0030 + 2),0);
  }
LAB_1038_256a:
  DAT_10e8_687e = 0;
  DAT_10e8_6880 = 0;
  DAT_10e8_6882 = 0x280;
  DAT_10e8_6884 = 0x1e0;
  a1 = DAT_10e8_6892 + 0x13;
  FUN_1078_1796(0x653e,(char *)s_Options_10e8_10e2 + 6,a1,a1,DAT_10e8_6894);
  RELEASEDC(param_1,a1);
  DAT_10e8_610e = 0;
  DAT_10e8_16b2 = 0;
  return;
}


