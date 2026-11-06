// FUN_1068_27a8 at 1068:27a8

void __cdecl16far FUN_1068_27a8(int *param_1)

{
  byte *pbVar1;
  int *piVar2;
  undefined2 *puVar3;
  int *piVar4;
  short sVar5;
  undefined2 *puVar6;
  int iVar7;
  int iVar8;
  uint in_DX;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  undefined2 uVar12;
  undefined2 unaff_SS;
  void *pvVar13;
  undefined1 local_5e [74];
  char *pcStackY_14;
  char *pcStackY_12;
  
  FUN_10d0_029e();
  do {
    piVar10 = (int *)param_1;
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            iVar7 = 0x2a5b;
            iVar8 = FUN_1068_1692();
            if (iVar8 == 0xff) {
              return;
            }
            uVar12 = param_1._2_2_;
            if (iVar8 != 4) break;
            piVar4 = (int *)FUN_1090_0000();
            param_1 = (int *)((ulong)in_DX << 0x10);
            piVar11 = piVar4;
            for (iVar8 = 0x1f; iVar8 != 0; iVar8 = iVar8 + -1) {
              piVar2 = piVar11;
              piVar11 = piVar11 + 1;
              *piVar2 = 0;
            }
            FUN_1060_0000();
            FUN_1060_0062();
            pcStackY_12 = (char *)s_ReadSpeed_10e8_105f + 1;
            pcStackY_14 = (char *)s_stretch_c_10e8_2848 + 4;
            pvVar13 = LSTRCPY((int *)CONCAT22(in_DX,piVar4 + 6),
                              (undefined1 *)CONCAT22(unaff_SS,local_5e));
            piVar10[0x1d] = (int)piVar4;
            piVar10[0x1e] = in_DX;
            in_DX = (uint)((ulong)pvVar13 >> 0x10);
            piVar10 = piVar4;
          }
          if (iVar8 != 5) break;
          FUN_1060_0062();
          pcStackY_12 = (char *)s_ReadSpeed_10e8_105f + 1;
          pcStackY_14 = (char *)s_stretch_c_10e8_287e + 6;
          FUN_1060_0c44();
          FUN_1060_0062();
          pcStackY_12 = (char *)s_ReadSpeed_10e8_105f + 1;
          pcStackY_14 = (char *)s_SrcXE_>__0____SrcYE_>__0_10e8_28ab + 1;
          pvVar13 = LSTRCPY((int *)CONCAT22(param_1._2_2_,piVar10 + 0x10),
                            (undefined1 *)CONCAT22(unaff_SS,local_5e));
          in_DX = (uint)((ulong)pvVar13 >> 0x10);
        }
        if (iVar8 != 6) break;
        iVar8 = FUN_1090_0000();
        *piVar10 = iVar8;
        piVar10[1] = in_DX;
        puVar6 = (undefined2 *)*piVar10;
        for (iVar8 = 0x21; iVar8 != 0; iVar8 = iVar8 + -1) {
          puVar3 = puVar6;
          puVar6 = puVar6 + 1;
          *puVar3 = 0;
        }
        *(undefined1 *)puVar6 = 0;
        FUN_1060_0000();
        FUN_1060_0062();
        pcStackY_12 = (char *)s_ReadSpeed_10e8_105f + 1;
        pcStackY_14 = (char *)0x290d;
        pvVar13 = LSTRCPY((void *)CONCAT22(piVar10[1],(void *)(*piVar10 + 0x2b)),
                          (undefined1 *)CONCAT22(unaff_SS,local_5e));
        in_DX = (uint)((ulong)pvVar13 >> 0x10);
        iVar8 = FUN_1060_0062();
        if (0 < iVar8) {
          param_1 = (int *)CONCAT22(param_1._2_2_,piVar10);
          do {
            pcStackY_12 = (char *)s_ReadSpeed_10e8_105f + 1;
            pcStackY_14 = (char *)0x2933;
            sVar5 = LSTRCMPI((undefined1 *)CONCAT22(unaff_SS,local_5e),s_INITIAL_10e8_1fb2);
            if (sVar5 == 0) {
              pbVar1 = (byte *)((int)*(undefined4 *)piVar10 + 0x29);
              *pbVar1 = *pbVar1 | 1;
            }
            else {
              pcStackY_12 = (char *)0x13a8;
              pcStackY_14 = (char *)0x2952;
              sVar5 = LSTRCMPI((undefined1 *)CONCAT22(unaff_SS,local_5e),s_PERSIST_10e8_1fba);
              if (sVar5 == 0) {
                pbVar1 = (byte *)((int)*(undefined4 *)piVar10 + 0x29);
                *pbVar1 = *pbVar1 | 2;
              }
            }
            iVar8 = FUN_1060_0062();
          } while (0 < iVar8);
        }
        FUN_1068_2418();
      }
      if (iVar8 == 10) break;
      if (iVar8 == 0xb) {
        iVar8 = piVar10[4];
        in_DX = piVar10[5];
        uVar9 = in_DX;
        iVar7 = FUN_1090_0000();
        piVar10[4] = iVar7;
        piVar10[5] = uVar9;
        puVar6 = (undefined2 *)piVar10[4];
        for (iVar7 = 0x23; iVar7 != 0; iVar7 = iVar7 + -1) {
          puVar3 = puVar6;
          puVar6 = puVar6 + 1;
          *puVar3 = 0;
        }
        uVar12 = (undefined2)((ulong)*(undefined4 *)(piVar10 + 4) >> 0x10);
        iVar7 = (int)*(undefined4 *)(piVar10 + 4);
        *(int *)(iVar7 + 0x42) = iVar8;
        *(uint *)(iVar7 + 0x44) = in_DX;
        pcStackY_12 = (char *)s_Options_10e8_108c + 4;
        pcStackY_14 = (char *)0x2a4f;
        FUN_1068_1efe();
      }
    }
    param_1 = (int *)CONCAT22(param_1._2_2_,piVar10);
    iVar8 = 0x46;
    puVar6 = (undefined2 *)FUN_1090_0000();
    if (iVar8 == 0 && iVar7 == 0) {
      piVar10[2] = (int)puVar6;
      piVar10[3] = in_DX;
    }
    else {
      *(undefined2 *)(iVar7 + 0x42) = puVar6;
      *(uint *)(iVar7 + 0x44) = in_DX;
    }
    for (iVar8 = 0x23; iVar8 != 0; iVar8 = iVar8 + -1) {
      puVar3 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar3 = 0;
    }
    pcStackY_12 = (char *)s_Options_10e8_108c + 4;
    pcStackY_14 = (char *)0x29e6;
    FUN_1068_1efe();
  } while( true );
}


