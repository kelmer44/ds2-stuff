// FUN_1088_003e at 1088:003e

void __cdecl16far
FUN_1088_003e(int *param_1,void *param_2,undefined2 param_3,int param_4,int param_5)

{
  short sVar1;
  ushort a0;
  void *pvVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  char *pcVar8;
  undefined2 unaff_SS;
  void *pvVar9;
  long lVar10;
  undefined4 uVar11;
  undefined1 local_9c [132];
  undefined2 uStackY_18;
  char *pcStackY_16;
  char *pcStackY_14;
  void *a0_00;
  uint uVar12;
  void *pvVar13;
  void *pvVar14;
  
  FUN_10d0_029e();
  iVar6 = 0;
  if (0 < *param_1) {
    piVar7 = (int *)param_1 + 0x145;
    do {
      pcStackY_14 = (char *)0x7c;
      sVar1 = LSTRCMPI((void *)CONCAT22(param_3,param_2),(int *)CONCAT22(param_1._2_2_,piVar7));
      if (sVar1 == 0) {
        pcStackY_14 = (char *)0xb2;
        LSTRCPY((void *)0x10e834be,
                (int *)CONCAT22(param_1._2_2_,
                                (int *)param_1 +
                                (uint)*(byte *)((int)(int *)param_1 +
                                               (int)((char *)
                                                  s_n__Reinicie_Windows_y_Dark_Seed_I_10e8_1275 +
                                                  0x15 + iVar6)) * 0x40 + 5));
        pcStackY_14 = (char *)0xcc;
        pvVar9 = LSTRCAT((void *)0x10e834be,
                         (int *)CONCAT22(param_1._2_2_,(int *)param_1 + iVar6 * 0x10 + 0x145));
        uVar3 = (undefined2)((ulong)pvVar9 >> 0x10);
        if (((int *)param_1)[iVar6 * 2 + 0x986] != 0 || ((int *)param_1)[iVar6 * 2 + 0x985] != 0) {
          return;
        }
        pcStackY_14 = (char *)0x13a8;
        pcStackY_16 = (char *)0xfc;
        a0 = OPENFILE((void *)0x10e834be,(undefined1 *)CONCAT22(unaff_SS,local_9c),0);
        if (a0 == 0xffff) {
          FUN_1098_0000();
          OUTPUTDEBUGSTRING((void *)0x10e834be);
          DAT_10e8_0048 = 1;
          FUN_1010_0230();
          return;
        }
        pvVar2 = (void *)FUN_1090_0000();
        uVar12 = 0;
        pcStackY_14 = (char *)s_Options_10e8_108c + 4;
        pcVar8 = (char *)0x13a8;
        pcStackY_16 = (char *)0x154;
        lVar10 = _HREAD(a0,(void *)CONCAT22(uVar3,pvVar2),0x800);
        iVar4 = (int)pvVar2 + (-(uint)(0xf803 < uVar12) & 0x80);
        iVar4 = *(int *)(uVar12 + 0x7fe) + (uint)(0xff7f < *(uint *)(uVar12 + 0x7fc));
        if (param_5 == 0 && param_4 == 0) {
          pcVar8 = (char *)s_Options_10e8_108c + 4;
          param_4 = FUN_1090_0000();
          param_5 = iVar4;
        }
        ((int *)param_1)[iVar6 * 2 + 0x985] = param_4;
        ((int *)param_1)[iVar6 * 2 + 0x986] = param_5;
        pvVar2 = (void *)((int *)param_1)[iVar6 * 2 + 0x986];
        do {
          uVar12 = (uint)lVar10;
          if (lVar10 == 0x800) {
            lVar10 = 0x7f8;
          }
          else {
            pcStackY_14 = (char *)(lVar10 + 0x10);
            uStackY_18 = 0x207;
            pcStackY_16 = pcVar8;
            uVar11 = FUN_10d0_055c();
            pcVar8 = (char *)s_Options_10e8_10d0;
            pcStackY_14 = (char *)0x20e;
            lVar10 = FUN_10d0_052a();
            uVar5 = (uint)((ulong)lVar10 >> 0x10);
            if ((uint)((int)uVar12 >> 0xf) <= uVar5) {
              if ((uint)((int)uVar12 >> 0xf) < uVar5) goto LAB_1088_0223;
              do {
                if ((uint)lVar10 <= uVar12) break;
LAB_1088_0223:
                do {
                  *(undefined1 *)(uVar12 + (int)uVar11) = 0;
                  uVar12 = uVar12 + 1;
                } while ((uint)((int)uVar12 >> 0xf) < uVar5);
              } while ((uint)((int)uVar12 >> 0xf) <= uVar5);
            }
          }
          pcStackY_14 = (char *)lVar10;
          uStackY_18 = 0x25f;
          pcStackY_16 = pcVar8;
          a0_00 = pvVar2;
          pvVar13 = pvVar2;
          pvVar14 = pvVar2;
          FUN_10b8_0368();
          if (lVar10 != 0x7f8) {
            FUN_1090_0068();
            _LCLOSE((ushort)a0_00);
            return;
          }
          pcStackY_14 = (char *)s_SkipTrans_10e8_10b6 + 2;
          pcVar8 = (char *)0x13a8;
          pcStackY_16 = (char *)0x285;
          lVar10 = _HREAD((ushort)a0_00,(void *)CONCAT22(pvVar14,pvVar13),0x800);
        } while( true );
      }
      piVar7 = piVar7 + 0x10;
      iVar6 = iVar6 + 1;
    } while (iVar6 < *param_1);
  }
  return;
}


