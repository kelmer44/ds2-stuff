// FUN_1038_01e4 at 1038:01e4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1038_01e4(undefined2 param_1)

{
  int *piVar1;
  uint *puVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char extraout_DL;
  char extraout_DL_00;
  char extraout_DL_01;
  char extraout_DL_02;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined4 uVar13;
  int iVar14;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  uVar11 = (undefined2)((ulong)_DAT_10e8_6892 >> 0x10);
  iVar4 = *(int *)((int)_DAT_10e8_6892 + 0x39);
  iVar9 = *(int *)((int)_DAT_10e8_6892 + 0x3b);
  if (iVar9 != 0 || iVar4 != 0) {
    do {
      iVar8 = *(int *)(iVar4 + 0xf);
      iVar9 = FUN_1060_07f6(*(undefined2 *)(iVar4 + 0xd));
      if (iVar9 == 0) {
        if (*(int *)(iVar4 + 0x67b) == 100) {
          *(undefined2 *)(iVar4 + 0x73) = 0;
          *(undefined2 *)(iVar4 + 0x75) = 0;
          iVar14 = *(int *)(iVar4 + 0x67d);
          uVar11 = *(undefined2 *)(iVar4 + 0x67f);
          *(undefined2 *)(iVar14 + 0x2c) = 0;
          *(undefined2 *)(iVar14 + 0x2a) = 0;
          *(undefined2 *)(iVar14 + 0x2e) = *(undefined2 *)(iVar14 + 0x22);
          *(undefined2 *)(iVar14 + 0x30) = *(undefined2 *)(iVar14 + 0x24);
          iVar8 = *(int *)(iVar4 + 0x6d);
LAB_1038_042c:
          FUN_1078_18d8(0x653e,(char *)s_Options_10e8_10e2 + 6,param_1,iVar14,uVar11);
        }
      }
      else {
        iVar10 = *(int *)(iVar4 + 0x73) * 4;
        iVar9 = *(int *)(iVar10 + iVar4 + 0x77);
        iVar10 = *(int *)(iVar10 + iVar4 + 0x79);
        iVar14 = *(int *)(iVar4 + 0x67d);
        uVar11 = *(undefined2 *)(iVar4 + 0x67f);
        if (((*(byte *)(iVar4 + 0x67) & 0x10) != 0) && (iVar10 != 0 || iVar9 != 0)) {
          iVar9 = *(int *)(*(int *)(iVar4 + 0x73) * 2 + iVar4 + 0x57b);
          if (iVar9 == 0) {
            uVar12 = (undefined2)((ulong)_DAT_10e8_6892 >> 0x10);
            iVar9 = *(int *)((int)_DAT_10e8_6892 + 0x35);
            iVar8 = iVar9 >> 0xf;
            uVar5 = *(uint *)((int)_DAT_10e8_6892 + 0x33);
            uVar6 = *(uint *)(*(int *)(iVar4 + 0x73) * 2 + iVar4 + 0x47b);
            uVar7 = uVar6 - uVar5;
            iVar9 = FUN_10d0_0490(uVar7 * 0x80,
                                  ((((((((((int)uVar6 >> 0xf) - ((int)uVar5 >> 0xf)) -
                                        (uint)(uVar6 < uVar5)) * 2 + (uint)CARRY2(uVar7,uVar7)) * 2
                                      + (uint)CARRY2(uVar7 * 2,uVar7 * 2)) * 2 +
                                     (uint)CARRY2(uVar7 * 4,uVar7 * 4)) * 2 +
                                    (uint)CARRY2(uVar7 * 8,uVar7 * 8)) * 2 +
                                   (uint)CARRY2(uVar7 * 0x10,uVar7 * 0x10)) * 2 +
                                  (uint)CARRY2(uVar7 * 0x20,uVar7 * 0x20)) * 2 +
                                  (uint)CARRY2(uVar7 * 0x40,uVar7 * 0x40),iVar9,iVar8);
            if (0xb4 < iVar9) {
              iVar9 = 0xb4;
            }
            if (iVar9 < 10) {
              iVar9 = 10;
            }
          }
          uVar12 = (undefined2)((ulong)*(undefined4 *)(iVar4 + 0x277) >> 0x10);
          iVar10 = (int)*(undefined4 *)(iVar4 + 0x277);
          iVar8 = *(int *)(iVar10 + 2);
          iVar10 = *(int *)(iVar10 + 4);
          if (iVar10 != 0 || iVar8 != 0) {
            FUN_1090_0068(iVar8);
            uVar12 = (undefined2)((ulong)*(undefined4 *)(iVar4 + 0x277) >> 0x10);
            iVar8 = (int)*(undefined4 *)(iVar4 + 0x277);
            *(undefined2 *)(iVar8 + 4) = 0;
            *(undefined2 *)(iVar8 + 2) = 0;
          }
          iVar8 = 0;
          FUN_1020_0656(param_1,*(undefined2 *)(iVar4 + 0x277),*(undefined2 *)(iVar4 + 0x279),
                        *(undefined2 *)(iVar4 + 0x277),*(undefined2 *)(iVar4 + 0x279),iVar9);
          uVar12 = (undefined2)((ulong)*(undefined4 *)(iVar4 + 0x277) >> 0x10);
          iVar9 = (int)*(undefined4 *)(iVar4 + 0x277);
          *(undefined2 *)(iVar9 + 0x14) = 1;
          *(undefined2 *)(iVar9 + 0x16) = 0;
          iVar9 = *(int *)(iVar4 + 0x277);
          iVar10 = *(int *)(iVar4 + 0x279);
          *(int *)(iVar14 + 0x2a) = iVar9;
          *(int *)(iVar14 + 0x2c) = iVar10;
        }
        if ((*(byte *)(iVar4 + 0x67) & 8) != 0) break;
        if ((*(int *)(iVar14 + 0x20) == 0 && *(int *)(iVar14 + 0x1e) == 0) ||
           ((*(int *)(iVar4 + 0x67b) != 100 && (*(int *)(iVar4 + 0x67b) != 0)))) {
          *(int *)(iVar14 + 0x2a) = iVar9;
          *(int *)(iVar14 + 0x2c) = iVar10;
          *(undefined2 *)(iVar14 + 0x2e) =
               *(undefined2 *)(*(int *)(iVar4 + 0x73) * 2 + iVar4 + 0x37b);
          *(undefined2 *)(iVar14 + 0x30) =
               *(undefined2 *)(*(int *)(iVar4 + 0x73) * 2 + iVar4 + 0x47b);
          iVar8 = *(int *)(iVar4 + 0x6d);
          goto LAB_1038_042c;
        }
      }
      piVar1 = (int *)(iVar4 + 0x681);
      iVar9 = *(int *)(iVar4 + 0x683);
      iVar4 = *piVar1;
    } while (iVar9 != 0 || *piVar1 != 0);
  }
  iVar4 = FUN_1060_0b00((char *)s_EraseMike_10e8_154d);
  if (iVar4 == 0) {
    iVar4 = FUN_1060_0b00((char *)s_ShowMike_10e8_1557);
    if (iVar4 == 0) goto LAB_1038_0837;
    if (DAT_10e8_5cc6 != 0 || DAT_10e8_5cc4 != 0) {
      FUN_1090_0068(DAT_10e8_5cc4,DAT_10e8_5cc6);
      DAT_10e8_5cc6 = 0;
      DAT_10e8_5cc4 = 0;
    }
    uVar11 = (undefined2)((ulong)_DAT_10e8_6892 >> 0x10);
    iVar4 = FUN_1060_07f6(*(undefined2 *)((char *)s_SAVEGAME_10e8_11bb + 4 + (int)_DAT_10e8_6892),
                          *(undefined2 *)((char *)s_SAVEGAME_10e8_11bb + 6 + (int)_DAT_10e8_6892));
    if (iVar4 == 0) {
      uVar11 = (undefined2)((ulong)*(undefined4 *)((char *)s_Dark_Seed_II_10e8_0030 + 4) >> 0x10);
      iVar4 = (int)*(undefined4 *)((char *)s_Dark_Seed_II_10e8_0030 + 4);
      *(undefined2 *)(iVar4 + 0x2c) = 0;
      *(undefined2 *)(iVar4 + 0x2a) = 0;
    }
    else {
      bVar3 = *(char *)((int)_DAT_10e8_6892 + 0x12eb) - (char)DAT_10e8_8e3c;
      uVar5 = bVar3 & 7;
      if (((bVar3 & 7) == 0) || (3 < uVar5)) {
        uVar11 = 0;
      }
      else {
        uVar11 = 2;
      }
      uVar12 = (undefined2)((ulong)*(undefined4 *)((char *)s_Dark_Seed_II_10e8_0030 + 4) >> 0x10);
      iVar4 = (int)*(undefined4 *)((char *)s_Dark_Seed_II_10e8_0030 + 4);
      *(undefined2 *)(iVar4 + 0x2a) = 0x5cc2;
      *(undefined2 *)(iVar4 + 0x2c) = (char *)s_Options_10e8_10e2 + 6;
      uVar12 = (undefined2)((ulong)_DAT_10e8_6892 >> 0x10);
      uVar6 = FUN_10d0_052a(*(undefined2 *)
                             ((char *)s_DS2_INVENTORY_10e8_1314 + 9 + (int)_DAT_10e8_6892),
                            *(undefined2 *)
                             ((char *)s_DS2_INVENTORY_10e8_1314 + 0xb + (int)_DAT_10e8_6892),
                            DAT_10e8_3cae,DAT_10e8_3cae >> 0xf);
      uVar12 = (undefined2)((ulong)_DAT_10e8_6892 >> 0x10);
      uVar7 = FUN_10d0_052a(*(undefined2 *)((int)_DAT_10e8_6892 + 0x1381),
                            *(undefined2 *)((int)_DAT_10e8_6892 + 0x1383),DAT_10e8_3cb0,
                            (int)DAT_10e8_3cb0 >> 0xf);
      uVar12 = (undefined2)((ulong)_DAT_10e8_6892 >> 0x10);
      puVar2 = (uint *)((int)_DAT_10e8_6892 + 0x13e5);
      *(undefined2 *)((int)*(undefined4 *)((char *)s_Dark_Seed_II_10e8_0030 + 4) + 0x2e) =
           CONCAT11(extraout_DL_00 + extraout_DL + CARRY2(uVar7,uVar6) +
                    (char)*(undefined2 *)((char *)s_fix_pal_10e8_13e7 + (int)_DAT_10e8_6892) +
                    CARRY2(uVar7 + uVar6,*puVar2),(char)(uVar7 + uVar6 + *puVar2 >> 8));
      uVar12 = (undefined2)((ulong)_DAT_10e8_6892 >> 0x10);
      uVar6 = FUN_10d0_052a(*(undefined2 *)((char *)s_DIRECTORY_10e8_1441 + 8 + (int)_DAT_10e8_6892)
                            ,*(undefined2 *)((char *)s_sndtrack__10e8_144b + (int)_DAT_10e8_6892),
                            DAT_10e8_3cae,DAT_10e8_3cae >> 0xf);
      uVar12 = (undefined2)((ulong)_DAT_10e8_6892 >> 0x10);
      uVar7 = FUN_10d0_052a(*(undefined2 *)((char *)s_WIN_INI_10e8_14ab + 2 + (int)_DAT_10e8_6892),
                            *(undefined2 *)((char *)s_WIN_INI_10e8_14ab + 4 + (int)_DAT_10e8_6892),
                            DAT_10e8_3cb0,(int)DAT_10e8_3cb0 >> 0xf);
      uVar12 = (undefined2)((ulong)_DAT_10e8_6892 >> 0x10);
      *(undefined2 *)((int)*(undefined4 *)((char *)s_Dark_Seed_II_10e8_0030 + 4) + 0x30) =
           CONCAT11(extraout_DL_02 + extraout_DL_01 + CARRY2(uVar7,uVar6) +
                    (char)*(undefined2 *)((char *)s_UseAVIFile_10e8_150d + 6 + (int)_DAT_10e8_6892)
                    + CARRY2(uVar7 + uVar6,
                             *(uint *)((char *)s_UseAVIFile_10e8_150d + 4 + (int)_DAT_10e8_6892)),
                    (char)(uVar7 + uVar6 +
                           *(uint *)((char *)s_UseAVIFile_10e8_150d + 4 + (int)_DAT_10e8_6892) >> 8)
                   );
      uVar12 = (undefined2)((ulong)_DAT_10e8_6892 >> 0x10);
      iVar4 = *(int *)((int)_DAT_10e8_6892 + 0x35);
      iVar9 = iVar4 >> 0xf;
      uVar6 = *(uint *)((int)_DAT_10e8_6892 + 0x33);
      uVar7 = *(uint *)((int)*(undefined4 *)((char *)s_Dark_Seed_II_10e8_0030 + 4) + 0x30);
      uVar13 = FUN_10d0_052a(uVar7 - uVar6,
                             (((int)uVar7 >> 0xf) - ((int)uVar6 >> 0xf)) - (uint)(uVar7 < uVar6),
                             0x86,0);
      uVar12 = FUN_10d0_0490(uVar13,iVar4,iVar9);
      FUN_1020_0656(param_1,uVar5 * 0xd8 + -0x788a,(char *)s_Options_10e8_10e2 + 6,0x5cc2,
                    (char *)s_Options_10e8_10e2 + 6,uVar12,uVar11);
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
    }
    uVar11 = (undefined2)((ulong)_DAT_10e8_6892 >> 0x10);
    iVar4 = (int)_DAT_10e8_6892;
    FUN_1078_1030(0x653e,(char *)s_Options_10e8_10e2 + 6,param_1,
                  *(undefined2 *)((char *)s_Dark_Seed_II_10e8_0030 + 4),
                  *(undefined2 *)((char *)s_Dark_Seed_II_10e8_0030 + 6),
                  *(undefined2 *)((char *)s_SAVEGAME_10e8_1220 + 3 + iVar4),
                  *(undefined2 *)(iVar4 + 0x1255),
                  *(undefined2 *)
                   ((char *)s_n__Reinicie_Windows_y_Dark_Seed_I_10e8_1275 + 0x12 + iVar4),
                  *(undefined2 *)
                   ((char *)s_Saved_Game_from_other_Version__R_10e8_129a + 0x1f + iVar4),0);
    uVar11 = (undefined2)((ulong)_DAT_10e8_6892 >> 0x10);
    iVar4 = *(int *)((int)_DAT_10e8_6892 + 0x35);
    iVar9 = iVar4 >> 0xf;
    uVar5 = *(uint *)((int)_DAT_10e8_6892 + 0x33);
    uVar13 = FUN_10d0_052a(DAT_10e8_3cb0 - uVar5,
                           (((int)DAT_10e8_3cb0 >> 0xf) - ((int)uVar5 >> 0xf)) -
                           (uint)(DAT_10e8_3cb0 < uVar5),0x86,0);
    iVar4 = FUN_10d0_0490(uVar13,iVar4,iVar9);
    if (0xb4 < iVar4) {
      iVar4 = 0xb4;
    }
    if (iVar4 < 10) {
      iVar4 = 10;
    }
    if ((iVar4 == 0) || (iVar9 = FUN_1060_0b00((char *)s_ShowMike_10e8_1560), iVar9 == 0))
    goto LAB_1038_0837;
    if (DAT_10e8_870e != 0 || DAT_10e8_870c != 0) {
      FUN_1090_0068(DAT_10e8_870c,DAT_10e8_870e);
      DAT_10e8_870e = 0;
      DAT_10e8_870c = 0;
    }
    if ((DAT_10e8_8e3c < 1) || (3 < DAT_10e8_8e3c)) {
      uVar11 = 0;
    }
    else {
      uVar11 = 2;
    }
    FUN_1020_0656(param_1,DAT_10e8_8e3c * 0xd8 + -0x788a,(char *)s_Options_10e8_10e2 + 6,0x870a,
                  (char *)s_Options_10e8_10e2 + 6,iVar4,uVar11);
    DAT_10e8_871e = 1;
    DAT_10e8_8720 = 0;
    uVar11 = (undefined2)((ulong)*(undefined4 *)(char *)s_Dark_Seed_II_10e8_0030 >> 0x10);
    iVar4 = (int)*(undefined4 *)(char *)s_Dark_Seed_II_10e8_0030;
    *(undefined2 *)(iVar4 + 0x2a) = 0x870a;
    *(undefined2 *)(iVar4 + 0x2c) = (char *)s_Options_10e8_10e2 + 6;
    *(int *)((int)*(undefined4 *)(char *)s_Dark_Seed_II_10e8_0030 + 0x2e) = DAT_10e8_3cae;
    *(uint *)((int)*(undefined4 *)(char *)s_Dark_Seed_II_10e8_0030 + 0x30) = DAT_10e8_3cb0;
    uVar11 = *(undefined2 *)((char *)s_Dark_Seed_II_10e8_0030 + 2);
    uVar12 = *(undefined2 *)(char *)s_Dark_Seed_II_10e8_0030;
  }
  else {
    uVar11 = (undefined2)((ulong)*(undefined4 *)(char *)s_Dark_Seed_II_10e8_0030 >> 0x10);
    iVar4 = (int)*(undefined4 *)(char *)s_Dark_Seed_II_10e8_0030;
    *(undefined2 *)(iVar4 + 0x2c) = 0;
    *(undefined2 *)(iVar4 + 0x2a) = 0;
    FUN_1078_18d8(0x653e,(char *)s_Options_10e8_10e2 + 6,param_1,
                  *(undefined2 *)(char *)s_Dark_Seed_II_10e8_0030,
                  *(undefined2 *)((char *)s_Dark_Seed_II_10e8_0030 + 2),0);
    uVar11 = (undefined2)((ulong)*(undefined4 *)((char *)s_Dark_Seed_II_10e8_0030 + 4) >> 0x10);
    iVar4 = (int)*(undefined4 *)((char *)s_Dark_Seed_II_10e8_0030 + 4);
    *(undefined2 *)(iVar4 + 0x2c) = 0;
    *(undefined2 *)(iVar4 + 0x2a) = 0;
    uVar11 = *(undefined2 *)((char *)s_Dark_Seed_II_10e8_0030 + 6);
    uVar12 = *(undefined2 *)((char *)s_Dark_Seed_II_10e8_0030 + 4);
  }
  FUN_1078_18d8(0x653e,(char *)s_Options_10e8_10e2 + 6,param_1,uVar12,uVar11,0);
LAB_1038_0837:
  DAT_10e8_687e = 0;
  DAT_10e8_6880 = 0;
  DAT_10e8_6882 = 0x280;
  DAT_10e8_6884 = 0x1e0;
  FUN_1078_1796(0x653e,(char *)s_Options_10e8_10e2 + 6,param_1,DAT_10e8_6892 + 0x13,DAT_10e8_6894);
  return;
}


