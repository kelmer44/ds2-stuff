// FUN_1038_086e at 1038:086e

/* WARNING: Removing unreachable block (ram,0x10380934) */
/* WARNING: Removing unreachable block (ram,0x10380baf) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __stdcall16far
FUN_1038_086e(undefined2 param_1,undefined2 param_2,char *param_3,undefined2 param_4,ushort param_5)

{
  int *piVar1;
  uint *puVar2;
  byte bVar3;
  undefined2 uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  char extraout_DL;
  char extraout_DL_00;
  char extraout_DL_01;
  char extraout_DL_02;
  char *pcVar12;
  uint uVar13;
  char *extraout_DX;
  int iVar14;
  int iVar15;
  char *a0;
  undefined2 unaff_SS;
  bool bVar16;
  ulong uVar17;
  long lVar18;
  undefined1 local_12a [100];
  undefined1 local_c6 [156];
  undefined2 local_2a;
  undefined2 uStackY_28;
  int iStackY_26;
  int iStackY_24;
  undefined2 uStackY_22;
  char *pcStackY_20;
  char *pcStackY_1e;
  char *pcStackY_1c;
  char *pcStackY_1a;
  char *pcVar19;
  ushort in_stack_0000ffee;
  short a6;
  void *pvVar20;
  ushort uVar21;
  short sVar22;
  ushort uVar23;
  
  FUN_10d0_029e();
  lVar18 = CONCAT22(DAT_10e8_3414,DAT_10e8_3412);
  pcVar19 = (char *)0x0;
  if (param_3 != (char *)s_SAVEGAME_10e8_1233 + 1) {
    uVar4 = 1;
    goto LAB_1038_1ad2;
  }
  if ((DAT_10e8_610e != 0) && ((DAT_10e8_0050 != 0 || (iVar5 = FUN_1060_0b00(), iVar5 == 0)))) {
    FUN_1038_1ade();
    FUN_1048_2a50();
  }
  pcVar6 = (char *)GETDC(param_5);
  FUN_1080_01de();
  if (DAT_10e8_2774 == 0) {
    FUN_10a8_0042();
  }
  else {
    FUN_10a8_0092();
  }
  FUN_10a8_0bbe();
  if (0 < DAT_10e8_008a) {
    if ((DAT_10e8_036e == 0) && (DAT_10e8_008a < 32000)) {
      DAT_10e8_008a = DAT_10e8_008a + 1;
    }
    if ((DAT_10e8_036e == 0) &&
       (uVar17 = GETTICKCOUNT(), CONCAT22(DAT_10e8_279e,DAT_10e8_279c) <= uVar17)) {
      DAT_10e8_279e = 0;
      DAT_10e8_279c = 0;
      DAT_10e8_008a = 0;
      iVar5 = FUN_1060_0b00();
      if (iVar5 == 0) {
        pcStackY_1c = (char *)s_Options_10e8_10e2 + 6;
        pcStackY_1e = (char *)0x653e;
        pcStackY_20 = (char *)s_ReadSpeed_10e8_105f + 1;
        uStackY_22 = 0x9d6;
        pcStackY_1a = pcVar6;
        FUN_1078_1238();
      }
      else {
        FUN_1080_02f0();
        pcStackY_1a = (char *)0x974;
        PATBLT((ushort)pcVar6,0,0,0x280,0x1e0,0x42);
        FUN_1060_0b26();
        uVar23 = FUN_1080_049a();
        FUN_1038_01e4();
        SELECTPALETTE((ushort)pcVar6,uVar23,0);
      }
      if (DAT_10e8_2774 == 0) {
        FUN_10a8_0042();
      }
      else {
        FUN_10a8_0092();
      }
      in_stack_0000ffee = 0;
      pcVar19 = (char *)0xa05;
      SENDMESSAGE(param_5,0x200,0,0);
    }
  }
  RELEASEDC(param_5,(ushort)pcVar6);
  lVar18 = CONCAT22(DAT_10e8_3414,DAT_10e8_3412);
  if (DAT_10e8_0368 == 0) {
    if (600 < DAT_10e8_007c) {
      uVar17 = TIMEGETTIME();
      lVar18 = CONCAT22(DAT_10e8_3414,DAT_10e8_3412);
      if (CONCAT22(DAT_10e8_3414,DAT_10e8_3412) < uVar17) {
        iVar5 = FUN_10d0_0368();
        lVar18 = TIMEGETTIME();
        lVar18 = lVar18 + iVar5 % 2000 + 12000;
        DAT_10e8_3412 = (undefined2)lVar18;
        DAT_10e8_3414 = (undefined2)((ulong)lVar18 >> 0x10);
        if (DAT_10e8_007c == 0x329) {
          FUN_10d0_0368();
          pvVar20 = (void *)0x1601;
        }
        else {
          if (DAT_10e8_007c < 0x32a) {
            if (DAT_10e8_007c != 0x2c0) {
              if (DAT_10e8_007c < 0x2c1) {
                if (DAT_10e8_007c < 0x25c) {
LAB_1038_0c06:
                  FUN_10d0_0368();
                  pvVar20 = (void *)0x160f;
                  goto LAB_1038_0c68;
                }
                if (DAT_10e8_007c != 0x25d && 0 < DAT_10e8_007c + -0x25c) {
                  bVar16 = DAT_10e8_007c == 0x2bd;
                  goto LAB_1038_0c04;
                }
              }
              else if (DAT_10e8_007c != 0x324) {
                bVar16 = DAT_10e8_007c == 0x327;
LAB_1038_0c04:
                if (!bVar16) goto LAB_1038_0c06;
              }
            }
          }
          else if (((DAT_10e8_007c != 0x385) && (DAT_10e8_007c != 0x3e9)) &&
                  (DAT_10e8_007c != 0x3ec)) {
            if (DAT_10e8_007c == 0x3ed) goto LAB_1038_0c83;
            if (DAT_10e8_007c != 0x3ee) goto LAB_1038_0c06;
          }
          FUN_10d0_0368();
          pvVar20 = (void *)0x1608;
        }
LAB_1038_0c68:
        pcVar19 = (char *)0xc71;
        _WSPRINTF(&DAT_10e8_37f0,(void *)CONCAT22((char *)s_Options_10e8_10e2 + 6,pvVar20));
        in_stack_0000ffee = 0xc80;
        FUN_10a8_06fa();
        lVar18 = CONCAT22(DAT_10e8_3414,DAT_10e8_3412);
      }
    }
LAB_1038_0c83:
    DAT_10e8_3414 = (undefined2)((ulong)lVar18 >> 0x10);
    DAT_10e8_3412 = (undefined2)lVar18;
    if ((DAT_10e8_036e != 0) || (DAT_10e8_156c != 0)) goto LAB_1038_1ad0;
    iVar5 = FUN_1060_0b00();
    if (iVar5 != 0) {
      if (DAT_10e8_610e != 0) {
        FUN_1048_2a50();
      }
      lVar18 = CONCAT22(DAT_10e8_3414,DAT_10e8_3412);
      DAT_10e8_610e = 0;
      if (DAT_10e8_0368 == 0) {
        lVar18 = CONCAT22(DAT_10e8_3414,DAT_10e8_3412);
        if ((DAT_10e8_008e != 0 || DAT_10e8_008c != 0) &&
           (lVar18 = CONCAT22(DAT_10e8_3414,DAT_10e8_3412), DAT_10e8_036c == 0)) {
          iVar5 = FUN_1060_07f6();
          lVar18 = CONCAT22(DAT_10e8_3414,DAT_10e8_3412);
          if (iVar5 != 0) {
            SELECTPALETTE((ushort)pcVar6,in_stack_0000ffee,0);
            RELEASEDC(param_5,(ushort)pcVar6);
LAB_1038_13b9:
            DAT_10e8_036c = 1;
            uVar23 = 0x400;
            iVar5 = DAT_10e8_008c;
            uVar11 = DAT_10e8_008e;
LAB_1038_13c7:
            DAT_10e8_156c = 0;
            POSTMESSAGE(param_5,uVar23,0x1ada,CONCAT22(uVar11,iVar5));
            lVar18 = CONCAT22(DAT_10e8_3414,DAT_10e8_3412);
          }
        }
      }
      goto LAB_1038_1ad0;
    }
    if ((DAT_10e8_2774 == 0) && (DAT_10e8_0370 == 0)) {
      SETCURSOR(((undefined2 *)&DAT_10e8_978e)[DAT_10e8_770e]);
    }
    DAT_10e8_156c = 1;
    uVar23 = GETDC(param_5);
    SELECTPALETTE(uVar23,DAT_10e8_200a,0);
    iVar5 = FUN_1060_0b00();
    if (iVar5 == 2) {
      pcVar19 = (char *)0x1;
      FUN_1060_0b26();
    }
    iVar7 = FUN_10d0_0368();
    FUN_1060_0b26();
    pcVar6 = (char *)s_ReadSpeed_10e8_105f + 1;
    FUN_1060_0b26();
    uVar4 = (undefined2)((ulong)_DAT_10e8_6892 >> 0x10);
    iVar5 = *(int *)((int)_DAT_10e8_6892 + 0x39);
    uVar11 = *(uint *)((int)_DAT_10e8_6892 + 0x3b);
    iVar15 = iVar5;
    if (uVar11 != 0 || iVar5 != 0) {
      do {
        pcVar6 = (char *)s_ReadSpeed_10e8_105f + 1;
        iVar8 = FUN_1060_07f6();
        if (iVar8 == 0) {
          if (*(int *)(iVar15 + 0x67b) == 100) {
            *(undefined2 *)(iVar15 + 0x73) = 0;
            iVar7 = *(int *)(iVar15 + 0x67d);
            uVar4 = *(undefined2 *)(iVar15 + 0x67f);
            *(undefined2 *)(iVar7 + 0x2c) = 0;
            *(undefined2 *)(iVar7 + 0x2a) = 0;
            *(undefined2 *)(iVar7 + 0x2e) = *(undefined2 *)(iVar7 + 0x22);
            *(undefined2 *)(iVar7 + 0x30) = *(undefined2 *)(iVar7 + 0x24);
LAB_1038_1160:
            iVar7 = 0x653e;
            pcVar19 = pcVar6;
            FUN_1078_0d60();
            pcVar6 = (char *)s_MidiType_10e8_1071 + 7;
          }
          else {
            pcVar19 = (char *)0x1;
          }
        }
        else if (((iVar7 < *(int *)(iVar15 + 0x6b)) && (*(int *)(iVar15 + 0x69) < iVar7)) ||
                (DAT_10e8_610e != 0)) {
          if (*(int *)(iVar15 + 0x75) == 0) {
            if ((*(int *)(iVar15 + 0x45) == *(int *)(iVar15 + 0x73)) &&
               (*(char *)(iVar15 + 0x47) != '\0')) {
              pcVar6 = (char *)s_PlayMidi_10e8_10a5 + 3;
              FUN_10a8_06fa();
            }
            if ((*(int *)(iVar15 + 0x54) == *(int *)(iVar15 + 0x73)) &&
               (*(char *)(iVar15 + 0x56) != '\0')) {
              pcVar6 = (char *)s_PlayMidi_10e8_10a5 + 3;
              FUN_10a8_06fa();
            }
          }
          iVar8 = *(int *)(iVar15 + 0x73) * 4;
          iVar14 = *(int *)(iVar8 + iVar15 + 0x77);
          pcVar12 = (char *)*(int *)(iVar8 + iVar15 + 0x79);
          iVar8 = *(int *)(iVar15 + 0x67d);
          uVar13 = *(uint *)(iVar15 + 0x67f);
          *(int *)(iVar8 + 0x2a) = iVar14;
          *(int *)(iVar8 + 0x2c) = (int)pcVar12;
          if (((*(byte *)(iVar15 + 0x67) & 8) == 0) || (pcVar12 == (char *)0x0 && iVar14 == 0)) {
            if (((*(byte *)(iVar15 + 0x67) & 0x10) != 0) && (pcVar12 != (char *)0x0 || iVar14 != 0))
            {
              iVar8 = *(int *)(*(int *)(iVar15 + 0x73) * 2 + iVar15 + 0x57b);
              if (iVar8 == 0) {
                iVar8 = FUN_10d0_0490();
                if (0xb4 < iVar8) {
                  iVar8 = 0xb4;
                }
                if (iVar8 < 10) {
                  iVar8 = 10;
                }
              }
              uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar15 + 0x277) >> 0x10);
              iVar7 = (int)*(undefined4 *)(iVar15 + 0x277);
              if (*(int *)(iVar7 + 4) != 0 || *(int *)(iVar7 + 2) != 0) {
                iVar8 = 0xff5;
                FUN_1090_0068();
                uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar15 + 0x277) >> 0x10);
                iVar7 = (int)*(undefined4 *)(iVar15 + 0x277);
                *(undefined2 *)(iVar7 + 4) = 0;
                *(undefined2 *)(iVar7 + 2) = 0;
              }
              uVar13 = 0;
              pcVar19 = (char *)*(undefined2 *)(iVar15 + 0x279);
              pcVar6 = (char *)s_PlayWave_10e8_101b + 5;
              pcStackY_1a = (char *)s_Options_10e8_1024 + 5;
              iVar7 = iVar14;
              FUN_1020_0656();
              uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar15 + 0x277) >> 0x10);
              iVar14 = (int)*(undefined4 *)(iVar15 + 0x277);
              *(undefined2 *)(iVar14 + 0x14) = 1;
              *(undefined2 *)(iVar14 + 0x16) = 0;
              iVar14 = *(int *)(iVar15 + 0x277);
              pcVar12 = (char *)*(int *)(iVar15 + 0x279);
              *(int *)(iVar8 + 0x2a) = iVar14;
              *(int *)(iVar8 + 0x2c) = (int)pcVar12;
            }
          }
          else {
            *(int *)(*(int *)(iVar15 + 0x73) * 2 + iVar15 + 0x37b) = DAT_10e8_3cae;
            *(uint *)(*(int *)(iVar15 + 0x73) * 2 + iVar15 + 0x47b) = DAT_10e8_3cb0;
            FUN_10d0_052a();
            iVar8 = FUN_10d0_0490();
            if (0xb4 < iVar8) {
              iVar8 = 0xb4;
            }
            if (iVar8 < 10) {
              iVar8 = 10;
            }
            if (DAT_10e8_870e != 0 || DAT_10e8_870c != 0) {
              iVar8 = 0xf06;
              FUN_1090_0068();
              DAT_10e8_870e = 0;
              DAT_10e8_870c = 0;
            }
            uVar13 = 0;
            pcVar19 = (char *)s_Options_10e8_10e2 + 6;
            pcVar6 = (char *)s_PlayWave_10e8_101b + 5;
            pcStackY_1a = (char *)0xf27;
            iVar7 = iVar14;
            FUN_1020_0656();
            DAT_10e8_871e = 1;
            DAT_10e8_8720 = 0;
            *(undefined2 *)(iVar8 + 0x2a) = 0x870a;
            *(undefined2 *)(iVar8 + 0x2c) = (char *)s_Options_10e8_10e2 + 6;
            iVar14 = -0x78f6;
            pcVar12 = (char *)s_Options_10e8_10e2 + 6;
          }
          *(undefined2 *)(iVar8 + 0x2e) =
               *(undefined2 *)(*(int *)(iVar15 + 0x73) * 2 + iVar15 + 0x37b);
          *(undefined2 *)(iVar8 + 0x30) =
               *(undefined2 *)(*(int *)(iVar15 + 0x73) * 2 + iVar15 + 0x47b);
          *(int *)(iVar15 + 0x75) = *(int *)(iVar15 + 0x75) + 1;
          if (*(int *)(iVar15 + 0x71) < *(int *)(iVar15 + 0x75)) {
            *(int *)(iVar15 + 0x73) = *(int *)(iVar15 + 0x73) + 1;
            *(undefined2 *)(iVar15 + 0x75) = 0;
          }
          uVar9 = uVar11;
          if (*(int *)(iVar15 + 0x43) == *(int *)(iVar15 + 0x73)) {
            iVar8 = iVar15 + 0x2f;
            pcVar6 = (char *)s_ReadSpeed_10e8_105f + 1;
            FUN_1060_092e();
            uVar13 = uVar11;
          }
          uVar11 = uVar9;
          if (*(int *)(iVar15 + 0x65) < *(int *)(iVar15 + 0x73)) {
            if ((*(byte *)(iVar15 + 0x67) & 4) == 0) {
              *(int *)(iVar15 + 0x73) = *(int *)(iVar15 + 0x73) + -1;
            }
            else {
              *(undefined2 *)(iVar15 + 0x73) = *(undefined2 *)(iVar15 + 99);
            }
            iVar8 = iVar15 + 0x1b;
            pcVar6 = (char *)s_ReadSpeed_10e8_105f + 1;
            FUN_1060_092e();
            uVar13 = uVar9;
          }
          if (((((*(int *)(iVar8 + 0x1e) != *(int *)(iVar8 + 0x2a)) ||
                (*(int *)(iVar8 + 0x20) != *(int *)(iVar8 + 0x2c))) ||
               ((*(byte *)(iVar15 + 0x67) & 8) != 0)) ||
              ((pcVar12 == (char *)0x0 && iVar14 == 0 || ((*(byte *)(iVar15 + 0x67) & 0x10) != 0))))
             || ((*(int *)(iVar8 + 0x2e) + *(int *)(iVar14 + 0xc) != *(int *)(iVar8 + 0x22) ||
                 ((*(int *)(iVar8 + 0x30) + *(int *)(iVar14 + 0xe) != *(int *)(iVar8 + 0x24) ||
                  (DAT_10e8_610e != 0)))))) goto LAB_1038_1160;
        }
        piVar1 = (int *)(iVar15 + 0x681);
        uVar11 = *(uint *)(iVar15 + 0x683);
        iVar15 = *piVar1;
      } while (uVar11 != 0 || *piVar1 != 0);
    }
    uVar13 = *(uint *)((int)_DAT_10e8_6892 + 0x33);
    uVar9 = DAT_10e8_3cb0 - uVar13;
    pcVar12 = (char *)((((((int)DAT_10e8_3cb0 >> 0xf) - ((int)uVar13 >> 0xf)) -
                        (uint)(DAT_10e8_3cb0 < uVar13)) * 7 + (uint)CARRY2(uVar9,uVar9) * 2 +
                        (uint)CARRY2(uVar9 * 2,uVar9) * 2 + (uint)CARRY2(uVar9 * 3,uVar9 * 3) +
                       (uint)CARRY2(uVar9 * 6,uVar9)) * 2 + (uint)CARRY2(uVar9 * 7,uVar9 * 7));
    a0 = (char *)s_Options_10e8_10d0;
    pcVar10 = (char *)FUN_10d0_0490();
    if (0xe < (int)pcVar10) {
      pcVar10 = (char *)0xe;
    }
    if ((int)pcVar10 < 6) {
      pcVar10 = (char *)0x6;
    }
    uVar13 = DAT_10e8_3cae - DAT_10e8_9b9a >> 0xf;
    if ((((int)((DAT_10e8_3cae - DAT_10e8_9b9a ^ uVar13) - uVar13) <= (int)pcVar10) &&
        (uVar13 = (int)(DAT_10e8_3cb0 - DAT_10e8_9b98) >> 0xf,
        (int)((DAT_10e8_3cb0 - DAT_10e8_9b98 ^ uVar13) - uVar13) <= (int)pcVar10)) &&
       (-1 < DAT_10e8_097c)) {
      DAT_10e8_9b9a =
           ((uint)((undefined2 *)&DAT_10e8_3cb2)[DAT_10e8_097c] % DAT_10e8_16e4) * 10 + -0x4b;
      uVar4 = (undefined2)((ulong)_DAT_10e8_6892 >> 0x10);
      iVar15 = *(int *)((int)_DAT_10e8_6892 + 0xf4c);
      DAT_10e8_9b98 =
           iVar15 / 2 +
           ((uint)((undefined2 *)&DAT_10e8_3cb2)[DAT_10e8_097c] / DAT_10e8_16e4) * iVar15 +
           *(int *)((int)_DAT_10e8_6892 + 0xf4a);
      DAT_10e8_097c = DAT_10e8_097c + -1;
    }
    uVar13 = DAT_10e8_3cae - DAT_10e8_9b9a >> 0xf;
    if (((int)pcVar10 < (int)((DAT_10e8_3cae - DAT_10e8_9b9a ^ uVar13) - uVar13)) ||
       (uVar13 = (int)(DAT_10e8_3cb0 - DAT_10e8_9b98) >> 0xf,
       (int)pcVar10 < (int)((DAT_10e8_3cb0 - DAT_10e8_9b98 ^ uVar13) - uVar13))) {
      DAT_10e8_156a = DAT_10e8_156a + 1;
      if (DAT_10e8_156a == 9) {
        DAT_10e8_156a = 1;
      }
      pcVar10 = (char *)((int)pcVar10 << 2);
      uVar13 = DAT_10e8_9b9a - DAT_10e8_3cae;
      uVar11 = DAT_10e8_9b98 - DAT_10e8_3cb0;
      pcVar6 = (char *)0x14a0;
      FUN_10a0_00be();
      FUN_10a0_005e();
      iVar5 = FUN_10a0_0080();
      DAT_10e8_3cae = DAT_10e8_3cae + (iVar5 >> 2);
      FUN_10a0_0000();
      pcVar12 = (char *)s_Options_10e8_109d + 3;
      iVar5 = FUN_10a0_0080();
      DAT_10e8_3cb0 = DAT_10e8_3cb0 + (iVar5 >> 2);
      if ((int)uVar11 < 0) {
        if ((int)uVar13 < 0) {
          DAT_10e8_8e3c = 6;
          iVar15 = 7;
        }
        else {
          DAT_10e8_8e3c = 2;
          iVar15 = 1;
        }
        iVar5 = 0;
      }
      else {
        if ((int)uVar13 < 0) {
          DAT_10e8_8e3c = 6;
          iVar15 = 5;
        }
        else {
          DAT_10e8_8e3c = 2;
          iVar15 = 3;
        }
        iVar5 = 4;
      }
      iVar7 = (uVar13 ^ (int)uVar13 >> 0xf) - ((int)uVar13 >> 0xf);
      uVar11 = (uVar11 ^ (int)uVar11 >> 0xf) - ((int)uVar11 >> 0xf);
      if ((iVar7 <= (int)(uVar11 * 5)) && (DAT_10e8_8e3c = iVar5, (int)(uVar11 * 2) < iVar7 * 5)) {
        DAT_10e8_8e3c = iVar15;
      }
      if ((DAT_10e8_007c == 0x25b) && (DAT_10e8_8e3c == 7)) {
        DAT_10e8_8e3c = 7;
      }
    }
    else if (DAT_10e8_097c < 0) {
      if ((((DAT_10e8_6112 < 8) || (DAT_10e8_0086 != DAT_10e8_3cae)) ||
          (DAT_10e8_0088 != DAT_10e8_3cb0)) || (DAT_10e8_156a != 0)) {
        pcVar19 = (char *)0x1;
        DAT_10e8_156a = 0;
        DAT_10e8_3cae = DAT_10e8_0086;
        DAT_10e8_3cb0 = DAT_10e8_0088;
        DAT_10e8_9b9a = DAT_10e8_0086;
        DAT_10e8_9b98 = DAT_10e8_0088;
        if (DAT_10e8_6112 < 8) {
          DAT_10e8_8e3c = DAT_10e8_6112;
        }
        DAT_10e8_6112 = 8;
      }
      else {
        if (DAT_10e8_0368 == 0) {
          a0 = (char *)s_ReadSpeed_10e8_105f + 1;
          uVar23 = 0x1311;
          iVar15 = FUN_1060_0b00();
          if (iVar15 == 4) goto LAB_1038_1364;
          uVar21 = 0;
          SELECTPALETTE(uVar23,(ushort)pcVar6,0);
          RELEASEDC(param_5,uVar21);
          DAT_10e8_770e = FUN_1060_0b00();
          DAT_10e8_006e = 1;
          uVar23 = 0x202;
          uVar11 = DAT_10e8_0084 | DAT_10e8_0082 >> 0xf;
          iVar5 = DAT_10e8_0082;
          goto LAB_1038_13c7;
        }
LAB_1038_1364:
        if (DAT_10e8_0368 == 0) {
          if (((DAT_10e8_008e != 0 || DAT_10e8_008c != 0) && (DAT_10e8_036c == 0)) &&
             (iVar15 = FUN_1060_07f6(), iVar15 != 0)) {
            uVar23 = 0;
            SELECTPALETTE((ushort)a0,(ushort)pcVar6,0);
            RELEASEDC(param_5,uVar23);
            goto LAB_1038_13b9;
          }
        }
        pcVar10 = (char *)s_GoingOut_10e8_165f;
        pcVar12 = (char *)s_GameVar_IDX_10e8_13d6 + 2;
        iVar15 = FUN_1060_0b00();
        if (iVar15 != 0) {
          pcVar10 = (char *)s_SysReadyExit_10e8_1668;
          pcVar12 = (char *)s_fix_pal_10e8_13e7 + 3;
          iVar15 = FUN_1060_0b00();
          if (iVar15 != 0) {
            SELECTPALETTE((ushort)pcVar12,(ushort)pcVar6,0);
            FUN_1060_0b00();
            FUN_1058_0be2();
            pcVar6 = (char *)s_Options_10e8_1057 + 1;
            FUN_1060_0b26();
            goto LAB_1038_142b;
          }
        }
      }
    }
    uVar13 = DAT_10e8_3cae - DAT_10e8_9b9a >> 0xf;
    if ((((int)pcVar10 < (int)((DAT_10e8_3cae - DAT_10e8_9b9a ^ uVar13) - uVar13)) ||
        (DAT_10e8_610e != 0)) ||
       ((uVar13 = (int)(DAT_10e8_3cb0 - DAT_10e8_9b98) >> 0xf,
        (int)pcVar10 < (int)((DAT_10e8_3cb0 - DAT_10e8_9b98 ^ uVar13) - uVar13) ||
        (pcVar19 != (char *)0x0)))) {
      if (DAT_10e8_5cc6 != 0 || DAT_10e8_5cc4 != 0) {
        FUN_1090_0068();
        DAT_10e8_5cc6 = 0;
        DAT_10e8_5cc4 = 0;
      }
      iVar15 = FUN_1060_07f6();
      if (iVar15 == 0) {
LAB_1038_17be:
        uVar4 = (undefined2)((ulong)*(undefined4 *)((char *)s_Dark_Seed_II_10e8_0030 + 4) >> 0x10);
        iVar15 = (int)*(undefined4 *)((char *)s_Dark_Seed_II_10e8_0030 + 4);
        *(undefined2 *)(iVar15 + 0x2c) = 0;
        *(undefined2 *)(iVar15 + 0x2a) = 0;
      }
      else {
        bVar3 = *(char *)((int)_DAT_10e8_6892 + 0x12eb) - (char)DAT_10e8_8e3c;
        uVar11 = bVar3 & 7;
        if (((bVar3 & 7) == 0) || (3 < uVar11)) {
          iVar5 = 0;
        }
        else {
          iVar5 = 2;
        }
        uVar4 = (undefined2)((ulong)*(undefined4 *)((char *)s_Dark_Seed_II_10e8_0030 + 4) >> 0x10);
        iVar15 = (int)*(undefined4 *)((char *)s_Dark_Seed_II_10e8_0030 + 4);
        *(undefined2 *)(iVar15 + 0x2a) = 0x5cc2;
        *(undefined2 *)(iVar15 + 0x2c) = (char *)s_Options_10e8_10e2 + 6;
        uVar13 = FUN_10d0_052a();
        uVar9 = FUN_10d0_052a();
        uVar4 = (undefined2)((ulong)_DAT_10e8_6892 >> 0x10);
        puVar2 = (uint *)((int)_DAT_10e8_6892 + 0x13e5);
        *(undefined2 *)((int)*(undefined4 *)((char *)s_Dark_Seed_II_10e8_0030 + 4) + 0x2e) =
             CONCAT11(extraout_DL_00 + extraout_DL + CARRY2(uVar9,uVar13) +
                      (char)*(undefined2 *)((char *)s_fix_pal_10e8_13e7 + (int)_DAT_10e8_6892) +
                      CARRY2(uVar9 + uVar13,*puVar2),(char)(uVar9 + uVar13 + *puVar2 >> 8));
        uVar13 = FUN_10d0_052a();
        uVar9 = FUN_10d0_052a();
        uVar4 = (undefined2)((ulong)_DAT_10e8_6892 >> 0x10);
        *(undefined2 *)((int)*(undefined4 *)((char *)s_Dark_Seed_II_10e8_0030 + 4) + 0x30) =
             CONCAT11(extraout_DL_02 + extraout_DL_01 + CARRY2(uVar9,uVar13) +
                      (char)*(undefined2 *)
                             ((char *)s_UseAVIFile_10e8_150d + 6 + (int)_DAT_10e8_6892) +
                      CARRY2(uVar9 + uVar13,
                             *(uint *)((char *)s_UseAVIFile_10e8_150d + 4 + (int)_DAT_10e8_6892)),
                      (char)(uVar9 + uVar13 +
                             *(uint *)((char *)s_UseAVIFile_10e8_150d + 4 + (int)_DAT_10e8_6892) >>
                            8));
        pcStackY_1a = (char *)s_No_Info_for_this_Condition__10e8_1700 + 0xf;
        FUN_10d0_052a();
        FUN_10d0_0490();
        pcStackY_1a = (char *)0x1739;
        FUN_1020_0656();
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
        iVar15 = FUN_1060_0b00();
        if (iVar15 != 0) goto LAB_1038_17be;
      }
      pcStackY_1a = (char *)s_Options_10e8_10e2 + 6;
      pcStackY_1c = (char *)0x653e;
      pcStackY_1e = (char *)s_ReadSpeed_10e8_105f + 1;
      pcStackY_20 = (char *)s_CHANGEAT__10e8_17fd + 8;
      FUN_1078_1030();
      FUN_10d0_052a();
      pcVar6 = (char *)s_Options_10e8_10d0;
      pcVar12 = extraout_DX;
      iVar15 = FUN_10d0_0490();
      if (0xb4 < iVar15) {
        iVar15 = 0xb4;
      }
      if (iVar15 < 10) {
        iVar15 = 10;
      }
      if (iVar15 != 0) {
        pcVar12 = (char *)s_SPEECH__10e8_1852 + 7;
        iVar15 = FUN_1060_0b00();
        if (iVar15 != 0) {
          if (DAT_10e8_870e != 0 || DAT_10e8_870c != 0) {
            FUN_1090_0068();
            DAT_10e8_870e = 0;
            DAT_10e8_870c = 0;
          }
          if ((DAT_10e8_8e3c < 1) || (3 < DAT_10e8_8e3c)) {
            iVar5 = 0;
          }
          else {
            iVar5 = 2;
          }
          pcStackY_1a = (char *)s_SEQUENCE__10e8_18be + 9;
          FUN_1020_0656();
          DAT_10e8_871e = 1;
          DAT_10e8_8720 = 0;
          uVar4 = (undefined2)((ulong)*(undefined4 *)(char *)s_Dark_Seed_II_10e8_0030 >> 0x10);
          iVar15 = (int)*(undefined4 *)(char *)s_Dark_Seed_II_10e8_0030;
          *(undefined2 *)(iVar15 + 0x2a) = 0x870a;
          *(undefined2 *)(iVar15 + 0x2c) = (char *)s_Options_10e8_10e2 + 6;
          *(int *)((int)*(undefined4 *)(char *)s_Dark_Seed_II_10e8_0030 + 0x2e) = DAT_10e8_3cae;
          *(uint *)((int)*(undefined4 *)(char *)s_Dark_Seed_II_10e8_0030 + 0x30) = DAT_10e8_3cb0;
          iVar15 = FUN_1060_0b00();
          if (iVar15 != 0) {
            uVar4 = (undefined2)((ulong)*(undefined4 *)(char *)s_Dark_Seed_II_10e8_0030 >> 0x10);
            iVar15 = (int)*(undefined4 *)(char *)s_Dark_Seed_II_10e8_0030;
            *(undefined2 *)(iVar15 + 0x2c) = 0;
            *(undefined2 *)(iVar15 + 0x2a) = 0;
          }
          if ((((800 < DAT_10e8_007c) && (DAT_10e8_007c < 0x388)) ||
              ((0x388 < DAT_10e8_007c && (DAT_10e8_007c < 0x3ef)))) ||
             ((((DAT_10e8_007c == 0x25b || (DAT_10e8_007c == 0x2be)) || (DAT_10e8_007c == 0x2bf)) ||
              (DAT_10e8_007c == 0x2c2)))) {
            if (DAT_10e8_156a == 4) {
              FUN_10a8_06fa();
            }
            if (DAT_10e8_156a == 8) {
              FUN_10a8_06fa();
            }
          }
          pcVar12 = *(char **)(char *)s_Dark_Seed_II_10e8_0030;
          pcVar6 = (char *)s_Options_10e8_10e2 + 6;
          FUN_1078_0d60();
        }
      }
    }
    uVar23 = 0;
    SELECTPALETTE((ushort)pcVar12,(ushort)pcVar6,0);
    if ((DAT_10e8_007c == 999) && (DAT_10e8_1540 == -1)) {
      DAT_10e8_1540 = -2;
      uVar21 = 0;
      MOVEWINDOW(param_5,0,0,DAT_10e8_0014,DAT_10e8_0016,0);
      uVar23 = 0;
      pcStackY_1a = (char *)s_Too_many_frames_in_one_animation_10e8_1a01 + 5;
      PATBLT(uVar21,0,0,DAT_10e8_0014,DAT_10e8_0016,0x42);
      FUN_1038_0000();
    }
    if (0 < DAT_10e8_1540) {
      sVar22 = 0;
      SELECTPALETTE(uVar23,DAT_10e8_200a,0);
      iVar15 = (int)_DAT_10e8_3eb6;
      uVar4 = (undefined2)((ulong)_DAT_10e8_3eb6 >> 0x10);
      if (DAT_10e8_86ba < 0x1e0) {
        uVar23 = (DAT_10e8_0016 - DAT_10e8_86ba) - 1;
        uVar21 = *(ushort *)(iVar15 + 0x12);
        a6 = *(short *)(iVar15 + 0x16);
        iVar15 = 0;
      }
      else {
        uVar23 = 0;
        uVar21 = *(ushort *)(iVar15 + 0x12);
        a6 = *(short *)(iVar15 + 0x16);
        iVar15 = (DAT_10e8_86ba - DAT_10e8_0016) + 1;
      }
      pcStackY_1a = (char *)0x13a8;
      pcStackY_1c = (char *)s__avi_alias_vfw_10e8_1a75 + 4;
      WinGStretchBlt_inferred
                (uVar11,iVar5,sVar22,DAT_10e8_9f3c,uVar23,uVar21,a6,DAT_10e8_6546,0,iVar15);
      if (DAT_10e8_1540 < 3) {
        FUN_1038_01a4();
        DAT_10e8_0048 = 1;
        FUN_1010_0230();
      }
      else {
        DAT_10e8_86ba = DAT_10e8_86ba + 2;
        DAT_10e8_1540 = DAT_10e8_1540 + -2;
      }
    }
    RELEASEDC(param_5,uVar23);
    if (DAT_10e8_610e != 0) {
      FUN_1048_2a50();
      DAT_10e8_610e = 0;
    }
LAB_1038_1aca:
    DAT_10e8_156c = 0;
    lVar18 = CONCAT22(DAT_10e8_3414,DAT_10e8_3412);
  }
  else {
    SETCURSOR(0);
    uVar23 = MCIGETDEVICEID((void *)0x10e81592);
    uStackY_22 = 4;
    pcStackY_20 = (char *)0x0;
    uStackY_28 = 0;
    local_2a = 0;
    MCISENDCOMMAND(uVar23,0x814,0x102,(long)CONCAT22(unaff_SS,&local_2a));
    lVar18 = CONCAT22(DAT_10e8_3414,DAT_10e8_3412);
    if ((iStackY_26 == 0x20d) && (lVar18 = CONCAT22(DAT_10e8_3414,DAT_10e8_3412), iStackY_24 == 0))
    {
      MCISENDSTRING(s_status_vfw_length_10e8_1596,(undefined1 *)CONCAT22(unaff_SS,local_12a),100,0);
      MCISENDSTRING(s_status_vfw_position_10e8_15a8,(undefined1 *)CONCAT22(unaff_SS,local_c6),100,0)
      ;
      sVar22 = LSTRCMP((undefined1 *)CONCAT22(unaff_SS,local_12a),
                       (undefined1 *)CONCAT22(unaff_SS,local_c6));
      if ((sVar22 != 0) && (DAT_10e8_007c == 0x5dd)) {
        DAT_10e8_005a = 1;
      }
      MCISENDSTRING(s_stop_vfw_wait_10e8_15bc,(void *)0x0,0,0);
      uVar23 = 0;
      MCISENDSTRING(s_close_vfw_wait_10e8_15ca,(void *)0x0,0,0);
      FUN_10a8_0000();
      DAT_10e8_0368 = 0;
      if ((((DAT_10e8_9b9a == DAT_10e8_3cae) && (DAT_10e8_9b98 == DAT_10e8_3cb0)) &&
          (DAT_10e8_097c < 0)) &&
         ((iVar5 = FUN_1060_0b00(), iVar5 != 0 && (iVar5 = FUN_1060_0b00(), iVar5 != 0)))) {
        SELECTPALETTE((ushort)pcVar6,uVar23,0);
        FUN_1060_0b00();
        FUN_1058_0be2();
        FUN_1060_0b26();
LAB_1038_142b:
        RELEASEDC(param_5,(ushort)pcVar6);
        goto LAB_1038_1aca;
      }
      if (DAT_10e8_036a != 0) {
        FUN_1080_02f0();
        pcStackY_1a = (char *)0xb70;
        PATBLT((ushort)pcVar6,0,0,0x280,0x1e0,0x42);
        FUN_1080_049a();
        DAT_10e8_036a = 0;
      }
      INVALIDATERECT(param_5,(void *)0x0,0);
      lVar18 = CONCAT22(DAT_10e8_3414,DAT_10e8_3412);
    }
  }
LAB_1038_1ad0:
  uVar4 = 0;
LAB_1038_1ad2:
  DAT_10e8_3414 = (undefined2)((ulong)lVar18 >> 0x10);
  DAT_10e8_3412 = (undefined2)lVar18;
  return uVar4;
}


