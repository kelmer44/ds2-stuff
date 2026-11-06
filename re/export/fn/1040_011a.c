// FUN_1040_011a at 1040:011a

void __cdecl16far FUN_1040_011a(ushort param_1,int param_2,ushort param_3,int param_4,int param_5)

{
  ushort *puVar1;
  undefined2 uVar2;
  int iVar3;
  ushort uVar4;
  ushort a1;
  int iVar5;
  ushort *puVar6;
  int *piVar7;
  ushort *puVar8;
  ushort uVar9;
  ushort uVar10;
  char *pcVar11;
  char *pcVar12;
  undefined2 unaff_SS;
  char *pcVar13;
  ushort local_418 [256];
  ushort local_218 [256];
  int iStackY_18;
  char *pcStackY_16;
  uint uVar14;
  ushort *puVar15;
  undefined4 uVar16;
  ushort uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  
  pcVar13 = (char *)s_Options_10e8_10e2 + 6;
  FUN_10d0_029e();
  if ((((-1 < (int)param_3) && ((int)param_3 < 0x30)) && (-1 < param_5)) && (param_5 < 0x30)) {
    pcVar11 = (char *)s_ReadSpeed_10e8_105f + 1;
    iStackY_18 = FUN_1060_0b00();
    uVar2 = DAT_10e8_6894;
    if (*(char *)(param_5 * 0x50 + DAT_10e8_6892 + 0x4a + param_4) <= iStackY_18) {
      if (0 < DAT_10e8_16e6) {
        iVar20 = 0;
        iVar3 = DAT_10e8_6892 + 0x4a;
        iVar18 = DAT_10e8_16e6;
        do {
          iVar5 = 0;
          if (0 < DAT_10e8_16e4) {
            do {
              if (iStackY_18 < (int)(uint)*(byte *)(iVar3 + iVar5)) {
                *(undefined2 *)((iVar5 + iVar20) * 2 + 0x3eba) = 0xfffe;
              }
              else {
                *(undefined2 *)((iVar5 + iVar20) * 2 + 0x3eba) = 0xffff;
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 < DAT_10e8_16e4);
          }
          iVar20 = iVar20 + DAT_10e8_16e4;
          iVar3 = iVar3 + 0x50;
          iVar18 = iVar18 + -1;
        } while (iVar18 != 0);
      }
      uVar4 = param_5 * DAT_10e8_16e4 + param_4;
      local_218[0] = uVar4;
      iVar20 = 1;
      iVar18 = 0;
      iVar3 = 0;
      pcVar12 = pcVar11;
      do {
        pcVar11 = pcVar12;
        if (((0 < (int)uVar4 % DAT_10e8_16e4) && ((int)uVar4 % DAT_10e8_16e4 < DAT_10e8_16e4 + -1))
           && ((0 < (int)uVar4 / DAT_10e8_16e4 && ((int)uVar4 / DAT_10e8_16e4 < DAT_10e8_16e6 + -1))
              )) {
          iVar5 = uVar4 * 2;
          if (*(int *)((undefined *)&DAT_10e8_3eb8 + iVar5) == -2) {
            uVar4 = uVar4 - 1;
            break;
          }
          if (*(int *)((undefined *)&DAT_10e8_3eb8 + iVar5) != 1) {
            local_218[iVar3 + -0x100] = uVar4 - 1;
            iVar3 = iVar3 + 1;
          }
          *(undefined2 *)((undefined *)&DAT_10e8_3eb8 + iVar5) = 1;
          if (*(int *)(iVar5 + 0x3ebc) == -2) {
            uVar4 = uVar4 + 1;
            break;
          }
          if (*(int *)(iVar5 + 0x3ebc) != 1) {
            local_218[iVar3 + -0x100] = uVar4 + 1;
            iVar3 = iVar3 + 1;
          }
          *(undefined2 *)(iVar5 + 0x3ebc) = 1;
          piVar7 = (int *)((uVar4 - DAT_10e8_16e4) * 2 + 0x3eba);
          if (*piVar7 == -2) {
            uVar4 = uVar4 - DAT_10e8_16e4;
            break;
          }
          if (*piVar7 != 1) {
            local_218[iVar3 + -0x100] = uVar4 - DAT_10e8_16e4;
            iVar3 = iVar3 + 1;
          }
          *piVar7 = 1;
          piVar7 = (int *)((DAT_10e8_16e4 + uVar4) * 2 + 0x3eba);
          if (*piVar7 == -2) {
            uVar4 = uVar4 + DAT_10e8_16e4;
            break;
          }
          if (*piVar7 != 1) {
            local_218[iVar3 + -0x100] = DAT_10e8_16e4 + uVar4;
            iVar3 = iVar3 + 1;
          }
          *piVar7 = 1;
        }
        iVar18 = iVar18 + 1;
        iVar5 = iVar3;
        if (iVar18 == iVar20) {
          puVar15 = (ushort *)CONCAT22(unaff_SS,local_218);
          pcVar11 = (char *)0x13a8;
          iStackY_18 = 0x337;
          pcStackY_16 = pcVar12;
          HMEMCPY(puVar15,(ushort *)CONCAT22(unaff_SS,local_418),(ulong)(uint)(iVar3 * 2));
          iVar5 = 0;
          iVar18 = 0;
          iVar20 = iVar3;
          if (400 < (int)((ulong)puVar15 >> 0x10) + 1) {
            return;
          }
        }
        uVar4 = local_218[iVar18];
        iVar3 = iVar5;
        pcVar12 = pcVar11;
      } while (iVar18 < iVar20);
      if (iVar20 == 0) {
        return;
      }
      param_4 = (int)uVar4 % DAT_10e8_16e4;
      param_5 = (int)uVar4 / DAT_10e8_16e4;
    }
    uVar2 = DAT_10e8_6894;
    if (*(char *)(param_3 * 0x50 + DAT_10e8_6892 + 0x4a + param_2) <= iStackY_18) {
      if (0 < DAT_10e8_16e6) {
        iVar20 = 0;
        iVar3 = DAT_10e8_6892 + 0x4a;
        iVar18 = DAT_10e8_16e6;
        do {
          iVar5 = 0;
          if (0 < DAT_10e8_16e4) {
            do {
              if (iStackY_18 < (int)(uint)*(byte *)(iVar3 + iVar5)) {
                *(undefined2 *)((iVar5 + iVar20) * 2 + 0x3eba) = 0xfffe;
              }
              else {
                *(undefined2 *)((iVar5 + iVar20) * 2 + 0x3eba) = 0xffff;
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 < DAT_10e8_16e4);
          }
          iVar20 = iVar20 + DAT_10e8_16e4;
          iVar3 = iVar3 + 0x50;
          iVar18 = iVar18 + -1;
        } while (iVar18 != 0);
      }
      param_3 = param_3 * DAT_10e8_16e4 + param_2;
      local_218[0] = param_3;
      iVar20 = 1;
      iVar18 = 0;
      iVar3 = 0;
      do {
        if (((0 < (int)param_3 % DAT_10e8_16e4) &&
            ((int)param_3 % DAT_10e8_16e4 < DAT_10e8_16e4 + -1)) &&
           ((0 < (int)param_3 / DAT_10e8_16e4 && ((int)param_3 / DAT_10e8_16e4 < DAT_10e8_16e6 + -1)
            ))) {
          iVar5 = param_3 * 2;
          if (*(int *)((undefined *)&DAT_10e8_3eb8 + iVar5) == -2) {
            param_3 = param_3 - 1;
            break;
          }
          if (*(int *)((undefined *)&DAT_10e8_3eb8 + iVar5) != 1) {
            local_218[iVar3 + -0x100] = param_3 - 1;
            iVar3 = iVar3 + 1;
          }
          *(undefined2 *)((undefined *)&DAT_10e8_3eb8 + iVar5) = 1;
          if (*(int *)(iVar5 + 0x3ebc) == -2) {
            param_3 = param_3 + 1;
            break;
          }
          if (*(int *)(iVar5 + 0x3ebc) != 1) {
            local_218[iVar3 + -0x100] = param_3 + 1;
            iVar3 = iVar3 + 1;
          }
          *(undefined2 *)(iVar5 + 0x3ebc) = 1;
          piVar7 = (int *)((param_3 - DAT_10e8_16e4) * 2 + 0x3eba);
          if (*piVar7 == -2) {
            param_3 = param_3 - DAT_10e8_16e4;
            break;
          }
          if (*piVar7 != 1) {
            local_218[iVar3 + -0x100] = param_3 - DAT_10e8_16e4;
            iVar3 = iVar3 + 1;
          }
          *piVar7 = 1;
          piVar7 = (int *)((DAT_10e8_16e4 + param_3) * 2 + 0x3eba);
          if (*piVar7 == -2) {
            param_3 = param_3 + DAT_10e8_16e4;
            break;
          }
          if (*piVar7 != 1) {
            local_218[iVar3 + -0x100] = DAT_10e8_16e4 + param_3;
            iVar3 = iVar3 + 1;
          }
          *piVar7 = 1;
        }
        iVar18 = iVar18 + 1;
        iVar5 = iVar3;
        pcVar12 = pcVar11;
        if (iVar18 == iVar20) {
          puVar15 = (ushort *)CONCAT22(unaff_SS,local_218);
          pcVar12 = (char *)0x13a8;
          iStackY_18 = 0x56a;
          pcStackY_16 = pcVar11;
          HMEMCPY(puVar15,(ushort *)CONCAT22(unaff_SS,local_418),(ulong)(uint)(iVar3 * 2));
          iVar5 = 0;
          iVar18 = 0;
          iVar20 = iVar3;
          if (400 < (int)((ulong)puVar15 >> 0x10) + 1) {
            return;
          }
        }
        param_3 = local_218[iVar18];
        iVar3 = iVar5;
        pcVar11 = pcVar12;
      } while (iVar18 < iVar20);
      if (iVar20 == 0) {
        return;
      }
      param_2 = (int)param_3 % DAT_10e8_16e4;
      param_3 = (int)param_3 / DAT_10e8_16e4;
    }
    uVar2 = DAT_10e8_6894;
    pcStackY_16 = (char *)param_5;
    if (0 < DAT_10e8_16e6) {
      iVar20 = 0;
      iVar3 = DAT_10e8_6892 + 0x4a;
      iVar18 = DAT_10e8_16e6;
      do {
        iVar5 = 0;
        if (0 < DAT_10e8_16e4) {
          do {
            if (iStackY_18 < (int)(uint)*(byte *)(iVar3 + iVar5)) {
              *(undefined2 *)((iVar5 + iVar20) * 2 + 0x3eba) = 0xfffe;
            }
            else {
              *(undefined2 *)((iVar5 + iVar20) * 2 + 0x3eba) = 0xffff;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < DAT_10e8_16e4);
        }
        iVar20 = iVar20 + DAT_10e8_16e4;
        iVar3 = iVar3 + 0x50;
        iVar18 = iVar18 + -1;
      } while (iVar18 != 0);
    }
    uVar4 = param_3 * DAT_10e8_16e4 + param_2;
    local_218[0] = uVar4;
    uVar10 = param_5 * DAT_10e8_16e4 + param_4;
    uVar14 = 1;
    uVar19 = 0;
    uVar21 = 0;
    if (uVar4 != uVar10) {
      uVar16 = CONCAT22(uVar4,uVar10);
      do {
        uVar10 = (ushort)uVar16;
        if ((int)uVar14 <= (int)uVar19) break;
        iVar18 = uVar4 * 2;
        uVar22 = uVar21;
        if ((*(int *)((undefined *)&DAT_10e8_3eb8 + iVar18) == -2) &&
           (0 < (int)uVar4 % *(int *)&DAT_10e8_16e4)) {
          *(ushort *)((undefined *)&DAT_10e8_3eb8 + iVar18) = uVar4;
          local_218[uVar21 - 0x100] = uVar4 - 1;
          uVar22 = uVar21 + 1;
        }
        if ((*(int *)(iVar18 + 0x3ebc) == -2) &&
           ((int)uVar4 % *(int *)&DAT_10e8_16e4 < *(int *)&DAT_10e8_16e4 + -1)) {
          *(ushort *)(iVar18 + 0x3ebc) = uVar4;
          local_218[uVar22 - 0x100] = uVar4 + 1;
          uVar22 = uVar22 + 1;
        }
        uVar10 = uVar4 - *(int *)&DAT_10e8_16e4;
        puVar6 = (ushort *)(uVar10 * 2 + 0x3eba);
        if ((*puVar6 == 0xfffe) && (0 < (int)uVar4 / *(int *)&DAT_10e8_16e4)) {
          *puVar6 = uVar4;
          local_218[uVar22 - 0x100] = uVar10;
          uVar22 = uVar22 + 1;
        }
        uVar10 = *(int *)&DAT_10e8_16e4 + uVar4;
        puVar6 = (ushort *)(uVar10 * 2 + 0x3eba);
        if ((*puVar6 == 0xfffe) &&
           ((int)uVar4 / *(int *)&DAT_10e8_16e4 < *(int *)&DAT_10e8_16e6 + -1)) {
          *puVar6 = uVar4;
          local_218[uVar22 - 0x100] = uVar10;
          uVar22 = uVar22 + 1;
        }
        uVar19 = uVar19 + 1;
        uVar21 = uVar22;
        if (uVar19 == uVar14) {
          uVar16 = CONCAT22(pcVar13,(int)uVar16);
          puVar6 = local_218;
          puVar8 = local_418;
          for (uVar19 = uVar22 & 0x7fff; uVar19 != 0; uVar19 = uVar19 - 1) {
            puVar1 = puVar6;
            puVar6 = puVar6 + 1;
            puVar15 = puVar8;
            puVar8 = puVar8 + 1;
            *puVar1 = *puVar15;
          }
          for (iVar18 = 0; iVar18 != 0; iVar18 = iVar18 + -1) {
            puVar1 = puVar6;
            puVar6 = (ushort *)((int)puVar6 + 1);
            puVar15 = puVar8;
            puVar8 = (ushort *)((int)puVar8 + 1);
            *(char *)puVar1 = (char)*puVar15;
          }
          pcVar13 = (char *)((ulong)uVar16 >> 0x10);
          uVar21 = 0;
          uVar19 = 0;
          uVar14 = uVar22;
        }
        uVar4 = local_218[uVar19];
        uVar10 = (ushort)uVar16;
      } while (uVar4 != uVar10);
    }
    uVar17 = param_1;
    a1 = GETDC(param_1);
    *(undefined2 *)&DAT_10e8_097c = 0;
    *(ushort *)&DAT_10e8_3cb2 = uVar10;
    param_3 = (int)uVar10 / *(int *)&DAT_10e8_16e4;
    if (uVar17 != uVar4) {
      do {
        uVar9 = uVar4;
        pcStackY_16 = (char *)0x7fc;
        uVar17 = param_3;
        iVar18 = FUN_1040_0000();
        if (iVar18 == 0) {
          *(int *)&DAT_10e8_097c = *(int *)&DAT_10e8_097c + 1;
          ((undefined2 *)&DAT_10e8_3cb2)[*(int *)&DAT_10e8_097c] = uVar10;
          param_3 = (int)uVar10 / *(int *)&DAT_10e8_16e4;
        }
        uVar4 = *(ushort *)(uVar9 * 2 + 0x3eba);
        uVar10 = uVar9;
      } while (uVar4 != uVar17);
    }
    *(int *)&DAT_10e8_097c = *(int *)&DAT_10e8_097c + 1;
    ((undefined2 *)&DAT_10e8_3cb2)[*(int *)&DAT_10e8_097c] = uVar17;
    RELEASEDC(param_1,a1);
    pcStackY_16 = (char *)0x85e;
    POSTMESSAGE(param_1,0xf,0,0);
  }
  return;
}


