// FUN_1068_2d64 at 1068:2d64

undefined2 __cdecl16far FUN_1068_2d64(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 uVar5;
  int *piVar6;
  undefined2 *puVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  undefined4 uStackY_14;
  int *piVar11;
  int *piVar12;
  char *pcVar13;
  int iVar14;
  int iVar15;
  
  pcVar9 = (char *)s_Options_10e8_10d0;
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  if (param_1._2_2_ == 0 && (int)param_1 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_1068_312a((int)param_1,param_1._2_2_,((undefined2 *)&DAT_10e8_6116)[DAT_10e8_3438 * 2],
                  ((undefined2 *)&DAT_10e8_6118)[DAT_10e8_3438 * 2]);
    iVar8 = *(int *)((int)param_1 + 0x212);
    iVar14 = *(int *)((int)param_1 + 0x214);
    if (iVar14 != 0 || iVar8 != 0) {
      do {
        FUN_1090_0068(*(undefined2 *)(iVar8 + 0x2a),*(undefined2 *)(iVar8 + 0x2c));
        iVar3 = *(int *)(iVar8 + 0x42);
        iVar15 = *(int *)(iVar8 + 0x44);
        pcVar9 = (char *)s_Options_10e8_108c + 4;
        FUN_1090_0068(iVar8,iVar14);
        iVar8 = iVar3;
        iVar14 = iVar15;
      } while (iVar15 != 0 || iVar3 != 0);
    }
    uStackY_14 = (int *)CONCAT22(*(int *)((int)param_1 + 0x218),
                                 (int *)*(int *)((int)param_1 + 0x216));
    if (*(int *)((int)param_1 + 0x218) != 0 || (int *)*(int *)((int)param_1 + 0x216) != (int *)0x0)
    {
      do {
        uVar5 = (undefined2)((ulong)uStackY_14 >> 0x10);
        piVar6 = (int *)uStackY_14;
        iVar8 = piVar6[2];
        iVar14 = piVar6[3];
        if (piVar6[3] != 0 || piVar6[2] != 0) {
          do {
            iVar3 = *(int *)(iVar8 + 0x42);
            iVar15 = *(int *)(iVar8 + 0x44);
            pcVar9 = (char *)s_Options_10e8_108c + 4;
            FUN_1090_0068(iVar8,iVar14);
            iVar8 = iVar3;
            iVar14 = iVar15;
          } while (iVar15 != 0 || iVar3 != 0);
        }
        iVar8 = piVar6[4];
        iVar14 = piVar6[5];
        if (piVar6[5] != 0 || piVar6[4] != 0) {
          do {
            FUN_1090_0068(*(undefined2 *)(iVar8 + 0x2a),*(undefined2 *)(iVar8 + 0x2c));
            iVar3 = *(int *)(iVar8 + 0x42);
            iVar15 = *(int *)(iVar8 + 0x44);
            pcVar9 = (char *)s_Options_10e8_108c + 4;
            FUN_1090_0068(iVar8,iVar14);
            iVar8 = iVar3;
            iVar14 = iVar15;
          } while (iVar15 != 0 || iVar3 != 0);
        }
        piVar11 = (int *)*uStackY_14;
        pcVar13 = (char *)piVar6[1];
        if ((char *)piVar6[1] != (char *)0x0 || piVar11 != (int *)0x0) {
          do {
            pcVar10 = pcVar9;
            if (piVar11[1] != 0 || *piVar11 != 0) {
              piVar1 = piVar11 + 1;
              piVar2 = piVar11;
              pcVar10 = (char *)s_Options_10e8_108c + 4;
              pcVar13 = pcVar9;
              FUN_1090_0068(*piVar2,*piVar1);
            }
            puVar7 = (undefined2 *)*(int *)((int)piVar11 + 0x11);
            iVar8 = *(int *)((int)piVar11 + 0x13);
            if (iVar8 != 0 || puVar7 != (undefined2 *)0x0) {
              do {
                FUN_1090_0068(*puVar7,puVar7[1]);
                puVar4 = (undefined2 *)*(undefined2 *)((int)puVar7 + 0x13);
                iVar14 = *(int *)((int)puVar7 + 0x15);
                pcVar10 = (char *)s_Options_10e8_108c + 4;
                piVar11 = (int *)0x2f00;
                pcVar13 = (char *)s_Options_10e8_108c + 4;
                FUN_1090_0068(puVar7,iVar8);
                puVar7 = puVar4;
                iVar8 = iVar14;
              } while (iVar14 != 0 || puVar4 != (undefined2 *)0x0);
            }
            iVar8 = *(int *)((int)piVar11 + 0x15);
            pcVar9 = pcVar10;
            iVar14 = *(int *)((int)piVar11 + 0x17);
            if (*(int *)((int)piVar11 + 0x17) != 0 || *(int *)((int)piVar11 + 0x15) != 0) {
              do {
                iVar3 = *(int *)(iVar8 + 0x42);
                iVar15 = *(int *)(iVar8 + 0x44);
                pcVar10 = (char *)s_Options_10e8_108c + 4;
                piVar11 = (int *)0x2f37;
                pcVar13 = pcVar9;
                FUN_1090_0068(iVar8,iVar14);
                iVar8 = iVar3;
                pcVar9 = pcVar10;
                iVar14 = iVar15;
              } while (iVar15 != 0 || iVar3 != 0);
            }
            iVar8 = *(int *)((int)piVar11 + 0x19);
            pcVar9 = pcVar10;
            iVar14 = *(int *)((int)piVar11 + 0x1b);
            if (*(int *)((int)piVar11 + 0x1b) != 0 || *(int *)((int)piVar11 + 0x19) != 0) {
              do {
                iVar3 = *(int *)(iVar8 + 0x42);
                iVar15 = *(int *)(iVar8 + 0x44);
                pcVar10 = (char *)s_Options_10e8_108c + 4;
                piVar11 = (int *)0x2f6e;
                pcVar13 = pcVar9;
                FUN_1090_0068(iVar8,iVar14);
                iVar8 = iVar3;
                pcVar9 = pcVar10;
                iVar14 = iVar15;
              } while (iVar15 != 0 || iVar3 != 0);
            }
            iVar8 = *(int *)((int)piVar11 + 0x1d);
            pcVar9 = pcVar10;
            iVar14 = *(int *)((int)piVar11 + 0x1f);
            if (*(int *)((int)piVar11 + 0x1f) != 0 || *(int *)((int)piVar11 + 0x1d) != 0) {
              do {
                iVar3 = *(int *)(iVar8 + 0x42);
                iVar15 = *(int *)(iVar8 + 0x44);
                pcVar10 = (char *)s_Options_10e8_108c + 4;
                piVar11 = (int *)0x2fa5;
                pcVar13 = pcVar9;
                FUN_1090_0068(iVar8,iVar14);
                iVar8 = iVar3;
                pcVar9 = pcVar10;
                iVar14 = iVar15;
              } while (iVar15 != 0 || iVar3 != 0);
            }
            iVar8 = *(int *)((int)piVar11 + 0x21);
            pcVar9 = pcVar10;
            iVar14 = *(int *)((int)piVar11 + 0x23);
            if (*(int *)((int)piVar11 + 0x23) != 0 || *(int *)((int)piVar11 + 0x21) != 0) {
              do {
                iVar3 = *(int *)(iVar8 + 0x42);
                iVar15 = *(int *)(iVar8 + 0x44);
                pcVar10 = (char *)s_Options_10e8_108c + 4;
                piVar11 = (int *)0x2fdc;
                pcVar13 = pcVar9;
                FUN_1090_0068(iVar8,iVar14);
                iVar8 = iVar3;
                pcVar9 = pcVar10;
                iVar14 = iVar15;
              } while (iVar15 != 0 || iVar3 != 0);
            }
            iVar8 = *(int *)((int)piVar11 + 0x25);
            iVar14 = *(int *)((int)piVar11 + 0x27);
            piVar12 = piVar11;
            if (*(int *)((int)piVar11 + 0x27) != 0 || *(int *)((int)piVar11 + 0x25) != 0) {
              do {
                FUN_1090_0068(*(undefined2 *)(iVar8 + 0x2a),*(undefined2 *)(iVar8 + 0x2c));
                iVar3 = *(int *)(iVar8 + 0x42);
                iVar15 = *(int *)(iVar8 + 0x44);
                pcVar10 = (char *)s_Options_10e8_108c + 4;
                pcVar13 = (char *)s_Options_10e8_108c + 4;
                piVar12 = (int *)0x3028;
                FUN_1090_0068(iVar8,iVar14);
                iVar8 = iVar3;
                iVar14 = iVar15;
              } while (iVar15 != 0 || iVar3 != 0);
            }
            piVar11 = (int *)*(undefined2 *)((int)piVar12 + 0x3f);
            pcVar9 = (char *)s_Options_10e8_108c + 4;
            FUN_1090_0068(piVar12,pcVar13);
            pcVar13 = pcVar10;
          } while (pcVar10 != (char *)0x0 || piVar11 != (int *)0x0);
        }
        piVar11 = (int *)piVar6[0x1d];
        iVar8 = piVar6[0x1e];
        uStackY_14 = (int *)CONCAT22(iVar8,piVar11);
        pcVar9 = (char *)s_Options_10e8_108c + 4;
        FUN_1090_0068(piVar6,uVar5);
      } while (iVar8 != 0 || piVar11 != (int *)0x0);
    }
    FUN_1090_0068((int)param_1,param_1._2_2_);
    uVar5 = 1;
  }
  return uVar5;
}


