// FUN_1068_2418 at 1068:2418

void __cdecl16far FUN_1068_2418(undefined2 *param_1)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  short sVar6;
  undefined2 uVar7;
  uint in_DX;
  uint uVar8;
  uint uVar9;
  undefined2 *puVar10;
  char *pcVar11;
  undefined2 unaff_SS;
  void *pvVar12;
  undefined1 local_25e [512];
  undefined1 local_5e [74];
  undefined2 uStackY_14;
  char *pcStackY_12;
  char *pcVar13;
  
  FUN_10d0_029e();
LAB_1068_2433:
  uVar8 = in_DX;
  puVar10 = (undefined2 *)param_1;
switchD_1068_2458_caseD_5:
  in_DX = uVar8;
  pcVar13 = (char *)s_el_juego_no_puede_proseguir_por_f_10e8_2418 + 0x27;
  iVar3 = FUN_1068_1692();
  if (iVar3 == 0xff) {
    return;
  }
  pcVar11 = (char *)s_ReadSpeed_10e8_105f + 9;
  uVar2 = param_1._2_2_;
  uVar8 = in_DX;
  switch(iVar3) {
  case 4:
    FUN_1068_1654();
    return;
  default:
    goto switchD_1068_2458_caseD_5;
  case 6:
    puVar4 = (undefined2 *)FUN_1090_0000();
    param_1 = (undefined2 *)((ulong)in_DX << 0x10);
    puVar5 = puVar4;
    for (iVar3 = 0x21; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar1 = 0;
    }
    *(undefined1 *)puVar5 = 0;
    *(undefined2 *)((int)puVar10 + 0x3f) = puVar4;
    *(uint *)((int)puVar10 + 0x41) = in_DX;
    FUN_1060_0000();
    FUN_1060_0062();
    pcStackY_12 = (char *)s_ReadSpeed_10e8_105f + 1;
    uStackY_14 = 0x24de;
    pvVar12 = LSTRCPY((undefined1 *)CONCAT22(in_DX,(undefined1 *)((int)puVar4 + 0x2b)),
                      (undefined1 *)CONCAT22(unaff_SS,local_5e));
    uVar8 = (uint)((ulong)pvVar12 >> 0x10);
    iVar3 = FUN_1060_0062();
    puVar10 = puVar4;
    if (0 < iVar3) {
      param_1 = (undefined2 *)CONCAT22(in_DX,puVar4);
      do {
        pcStackY_12 = (char *)s_ReadSpeed_10e8_105f + 1;
        uStackY_14 = 0x2507;
        sVar6 = LSTRCMPI((undefined1 *)CONCAT22(unaff_SS,local_5e),s_INITIAL_10e8_1f9a);
        if (sVar6 == 0) {
          *(byte *)((int)puVar4 + 0x29) = *(byte *)((int)puVar4 + 0x29) | 1;
        }
        else {
          pcStackY_12 = (char *)0x13a8;
          uStackY_14 = 0x2524;
          sVar6 = LSTRCMPI((undefined1 *)CONCAT22(unaff_SS,local_5e),s_PERSIST_10e8_1fa2);
          if (sVar6 == 0) {
            *(byte *)((int)puVar4 + 0x29) = *(byte *)((int)puVar4 + 0x29) | 2;
          }
        }
        iVar3 = FUN_1060_0062();
      } while (0 < iVar3);
    }
    goto switchD_1068_2458_caseD_5;
  case 7:
    uVar2 = *(undefined2 *)((int)puVar10 + 0x19);
    uVar8 = *(uint *)((int)puVar10 + 0x1b);
    uVar9 = uVar8;
    uVar7 = FUN_1090_0000();
    *(undefined2 *)((int)puVar10 + 0x19) = uVar7;
    *(uint *)((int)puVar10 + 0x1b) = uVar9;
    puVar5 = (undefined2 *)*(undefined2 *)((int)puVar10 + 0x19);
    for (iVar3 = 0x23; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar1 = 0;
    }
    uVar7 = (undefined2)((ulong)*(undefined4 *)((int)puVar10 + 0x19) >> 0x10);
    iVar3 = (int)*(undefined4 *)((int)puVar10 + 0x19);
    *(undefined2 *)(iVar3 + 0x42) = uVar2;
    *(uint *)(iVar3 + 0x44) = uVar8;
    break;
  case 8:
    uVar2 = *(undefined2 *)((int)puVar10 + 0x1d);
    uVar8 = *(uint *)((int)puVar10 + 0x1f);
    uVar9 = uVar8;
    uVar7 = FUN_1090_0000();
    *(undefined2 *)((int)puVar10 + 0x1d) = uVar7;
    *(uint *)((int)puVar10 + 0x1f) = uVar9;
    puVar5 = (undefined2 *)*(undefined2 *)((int)puVar10 + 0x1d);
    for (iVar3 = 0x23; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar1 = 0;
    }
    uVar7 = (undefined2)((ulong)*(undefined4 *)((int)puVar10 + 0x1d) >> 0x10);
    iVar3 = (int)*(undefined4 *)((int)puVar10 + 0x1d);
    *(undefined2 *)(iVar3 + 0x42) = uVar2;
    *(uint *)(iVar3 + 0x44) = uVar8;
    break;
  case 9:
    pcStackY_12 = (char *)s_ReadSpeed_10e8_105f + 9;
    uStackY_14 = 0x2622;
    FUN_1068_1c6c();
    uVar8 = in_DX;
    goto switchD_1068_2458_caseD_5;
  case 10:
    goto switchD_1068_2458_caseD_a;
  case 0xb:
    pcStackY_12 = (char *)s_ReadSpeed_10e8_105f + 9;
    uStackY_14 = 0x2695;
    pvVar12 = LSTRCPY((void *)0x10e890b4,(undefined1 *)CONCAT22(unaff_SS,local_25e));
    in_DX = (uint)((ulong)pvVar12 >> 0x10);
    FUN_1060_0062();
    pcStackY_12 = (char *)s_ReadSpeed_10e8_105f + 1;
    pcVar11 = (char *)0x13a8;
    uStackY_14 = 0x26b2;
    sVar6 = LSTRCMPI((undefined1 *)CONCAT22(unaff_SS,local_5e),s_Speaker_10e8_1faa);
    if (sVar6 == 0) {
      FUN_1068_1654();
      goto LAB_1068_26be;
    }
    uVar2 = *(undefined2 *)((int)puVar10 + 0x25);
    uVar8 = *(uint *)((int)puVar10 + 0x27);
    uVar9 = uVar8;
    uVar7 = FUN_1090_0000();
    *(undefined2 *)((int)puVar10 + 0x25) = uVar7;
    *(uint *)((int)puVar10 + 0x27) = uVar9;
    puVar5 = (undefined2 *)*(undefined2 *)((int)puVar10 + 0x25);
    for (iVar3 = 0x23; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar1 = 0;
    }
    uVar7 = (undefined2)((ulong)*(undefined4 *)((int)puVar10 + 0x25) >> 0x10);
    iVar3 = (int)*(undefined4 *)((int)puVar10 + 0x25);
    *(undefined2 *)(iVar3 + 0x42) = uVar2;
    *(uint *)(iVar3 + 0x44) = uVar8;
    break;
  case 0xc:
    uVar2 = *(undefined2 *)((int)puVar10 + 0x21);
    uVar8 = *(uint *)((int)puVar10 + 0x23);
    uVar9 = uVar8;
    uVar7 = FUN_1090_0000();
    *(undefined2 *)((int)puVar10 + 0x21) = uVar7;
    *(uint *)((int)puVar10 + 0x23) = uVar9;
    puVar5 = (undefined2 *)*(undefined2 *)((int)puVar10 + 0x21);
    for (iVar3 = 0x23; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar1 = 0;
    }
    uVar7 = (undefined2)((ulong)*(undefined4 *)((int)puVar10 + 0x21) >> 0x10);
    iVar3 = (int)*(undefined4 *)((int)puVar10 + 0x21);
    *(undefined2 *)(iVar3 + 0x42) = uVar2;
    *(uint *)(iVar3 + 0x44) = uVar8;
    break;
  case 0xd:
    FUN_1068_1654();
LAB_1068_26be:
    uStackY_14 = 0x26c6;
    pcStackY_12 = pcVar11;
    FUN_1068_1b6e();
    uVar8 = in_DX;
    goto switchD_1068_2458_caseD_5;
  }
  pcStackY_12 = (char *)s_Options_10e8_108c + 4;
  uStackY_14 = 0x25ab;
  FUN_1068_1efe();
  goto switchD_1068_2458_caseD_5;
switchD_1068_2458_caseD_a:
  param_1 = (undefined2 *)CONCAT22(param_1._2_2_,puVar10);
  iVar3 = 0x46;
  puVar5 = (undefined2 *)FUN_1090_0000();
  if (iVar3 == 0 && pcVar13 == (char *)0x0) {
    *(undefined2 *)((int)puVar10 + 0x15) = puVar5;
    *(uint *)((int)puVar10 + 0x17) = in_DX;
  }
  else {
    *(undefined2 **)(pcVar13 + 0x42) = puVar5;
    *(uint *)(pcVar13 + 0x44) = in_DX;
  }
  for (iVar3 = 0x23; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar1 = 0;
  }
  pcStackY_12 = (char *)s_Options_10e8_108c + 4;
  uStackY_14 = 0x2680;
  FUN_1068_1efe();
  goto LAB_1068_2433;
}


