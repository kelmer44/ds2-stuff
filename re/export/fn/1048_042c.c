// FUN_1048_042c at 1048:042c

void __cdecl16far FUN_1048_042c(char *param_1,int param_2)

{
  undefined2 *puVar1;
  char cVar2;
  undefined1 *puVar3;
  undefined2 *puVar4;
  char *pcVar5;
  undefined2 uVar6;
  int iVar7;
  undefined2 in_DX;
  char *pcVar8;
  undefined2 uVar9;
  undefined2 unaff_SS;
  void *pvVar10;
  undefined1 local_266 [512];
  undefined1 local_66 [80];
  undefined4 uStackY_16;
  char *pcStackY_12;
  int iVar11;
  char *pcVar12;
  
  FUN_10d0_029e();
switchD_1048_0454_caseD_9:
  iVar11 = 0x929;
  iVar7 = FUN_1048_0000();
  if (iVar7 == param_2) {
    return;
  }
  pcVar8 = (char *)s_Options_10e8_1047 + 1;
  switch(iVar7) {
  case 1:
    if (0 < iVar11 + 1) {
      uVar9 = 0x49f;
      pcVar5 = (char *)FUN_1090_0000();
      param_1 = (char *)CONCAT22(in_DX,pcVar5);
      pcVar8 = pcVar5;
      for (iVar7 = 0x4b; iVar7 != 0; iVar7 = iVar7 + -1) {
        pcVar12 = pcVar8;
        pcVar8 = pcVar8 + 2;
        pcVar12[0] = '\0';
        pcVar12[1] = '\0';
      }
      *pcVar8 = '\0';
      *(char **)(pcStackY_12 + 0x93) = pcVar5;
      *(undefined2 *)(pcStackY_12 + 0x95) = in_DX;
    }
    uStackY_16 = param_1;
    uVar6 = 0x4de;
    in_DX = param_1._2_2_;
    uVar9 = FUN_1090_0000();
    *(undefined2 *)(char *)param_1 = uVar9;
    *(undefined2 *)((char *)param_1 + 2) = in_DX;
    puVar4 = *(undefined2 **)(char *)param_1;
    for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      *puVar1 = 0;
    }
    pcStackY_12 = (char *)s_Options_10e8_108c + 4;
    uStackY_16 = (char *)CONCAT22(0x511,(char *)uStackY_16);
    FUN_1060_0652();
    pcStackY_12 = (char *)param_1;
    goto switchD_1048_0454_caseD_9;
  case 2:
    FUN_1060_0188();
    pcStackY_12 = (char *)s_ReadSpeed_10e8_105f + 1;
    uStackY_16 = (char *)CONCAT22(0x543,(char *)uStackY_16);
    FUN_1060_0c44();
    FUN_1060_0188();
    pcStackY_12 = (char *)s_ReadSpeed_10e8_105f + 1;
    uStackY_16 = (char *)CONCAT22(0x56c,(char *)uStackY_16);
    FUN_1060_0c44();
    FUN_1060_0188();
    pcStackY_12 = (char *)s_ReadSpeed_10e8_105f + 1;
    uStackY_16 = (char *)CONCAT22(0x595,(char *)uStackY_16);
    FUN_1060_0c44();
    FUN_1060_0188();
    pcStackY_12 = (char *)s_ReadSpeed_10e8_105f + 1;
    uStackY_16 = (char *)CONCAT22(0x5be,(char *)uStackY_16);
    iVar7 = FUN_1060_0c44();
    if (iVar7 != 1) {
      ((char *)param_1 + 10)[0] = '\0';
      ((char *)param_1 + 10)[1] = '\0';
    }
    FUN_1060_0188();
    pcStackY_12 = (char *)s_ReadSpeed_10e8_105f + 1;
    uStackY_16 = (char *)CONCAT22(0x5f3,(char *)uStackY_16);
    in_DX = param_1._2_2_;
    iVar7 = FUN_1060_0c44();
    if (iVar7 != 1) {
      ((char *)param_1 + 0xe)[0] = '\0';
      ((char *)param_1 + 0xe)[1] = '\0';
    }
    goto switchD_1048_0454_caseD_9;
  case 3:
    pcStackY_12 = (char *)s_Options_10e8_1047 + 1;
    uStackY_16 = (char *)CONCAT22(0x620,(char *)uStackY_16);
    LSTRCPY((char *)CONCAT22(param_1._2_2_,(char *)param_1 + 0x5f),
            (undefined1 *)CONCAT22(unaff_SS,local_266));
    pcStackY_12 = (char *)0x13a8;
    uStackY_16 = (char *)CONCAT22(0x630,(char *)uStackY_16);
    LSTRCPY((undefined1 *)CONCAT22(unaff_SS,local_66),(undefined1 *)CONCAT22(unaff_SS,local_266));
    pcStackY_12 = (char *)0x13a8;
    uStackY_16 = (char *)CONCAT22(0x63e,(char *)uStackY_16);
    pvVar10 = LSTRCAT((undefined1 *)CONCAT22(unaff_SS,local_66),(void *)0x10e81807);
    iVar7 = (int)((ulong)pvVar10 >> 0x10);
    pcStackY_12 = (char *)0x64d;
    uVar9 = FUN_1098_0326();
    *(undefined2 *)((char *)param_1 + 0x10) = uVar9;
    *(int *)((char *)param_1 + 0x12) = iVar7;
    if (iVar7 == 0 && *(int *)((char *)param_1 + 0x10) == 0) {
      pcVar8 = (char *)s_Options_10e8_108c + 4;
      uVar9 = FUN_1090_0000();
      *(undefined2 *)((char *)param_1 + 0x10) = uVar9;
      *(int *)((char *)param_1 + 0x12) = iVar7;
      pcVar12 = (char *)CONCAT22(iVar7,*(char **)((char *)param_1 + 0x10));
      puVar3 = local_66;
      goto LAB_1048_06f1;
    }
    iVar7 = 0;
    cVar2 = **(char **)((char *)param_1 + 0x10);
    while ((cVar2 != '\r' && (*(char *)(iVar7 + *(int *)((char *)param_1 + 0x10)) != '\0'))) {
      iVar7 = iVar7 + 1;
      cVar2 = *(char *)(iVar7 + *(int *)((char *)param_1 + 0x10));
    }
    in_DX = *(undefined2 *)((char *)param_1 + 0x12);
    *(undefined1 *)(iVar7 + *(int *)((char *)param_1 + 0x10)) = 0;
    goto switchD_1048_0454_caseD_9;
  case 4:
    pcVar5 = (char *)param_1 + 0x52;
    break;
  case 5:
    pcVar5 = (char *)param_1 + 0x5f;
    break;
  case 6:
    pcVar5 = (char *)param_1 + 0x45;
    break;
  case 7:
    FUN_1060_0188();
    pcStackY_12 = (char *)s_ReadSpeed_10e8_105f + 1;
    uStackY_16 = (char *)CONCAT22(0x74d,(char *)uStackY_16);
    FUN_1060_0c44();
    FUN_1060_0188();
    pcStackY_12 = (char *)s_ReadSpeed_10e8_105f + 1;
    uStackY_16 = (char *)CONCAT22(0x777,(char *)uStackY_16);
    FUN_1060_0c44();
    FUN_1060_0188();
    pcStackY_12 = (char *)s_ReadSpeed_10e8_105f + 1;
    uStackY_16 = (char *)CONCAT22(0x7a1,(char *)uStackY_16);
    FUN_1060_0c44();
    FUN_1060_0188();
    pcStackY_12 = (char *)s_ReadSpeed_10e8_105f + 1;
    uStackY_16 = (char *)CONCAT22(0x7cb,(char *)uStackY_16);
    FUN_1060_0c44();
    FUN_1060_0062();
    pcStackY_12 = (char *)s_ReadSpeed_10e8_105f + 1;
    uStackY_16 = (char *)CONCAT22(0x7f4,(char *)uStackY_16);
    LSTRCPY((char *)CONCAT22(param_1._2_2_,(char *)param_1 + 0x14),
            (undefined1 *)CONCAT22(unaff_SS,local_66));
    FUN_1060_0188();
    pcStackY_12 = (char *)s_ReadSpeed_10e8_105f + 1;
    uStackY_16 = (char *)CONCAT22(0x81b,(char *)uStackY_16);
    in_DX = param_1._2_2_;
    FUN_1060_0c44();
    goto switchD_1048_0454_caseD_9;
  case 8:
    in_DX = param_1._2_2_;
    goto LAB_1048_082f;
  default:
    goto switchD_1048_0454_caseD_9;
  case 0xc:
    pcVar5 = (char *)param_1 + 0x38;
    break;
  case 0xd:
    pcVar5 = (char *)param_1 + 0x6e;
    break;
  case 0xe:
    ((char *)param_1 + 0xc)[0] = '\x01';
    ((char *)param_1 + 0xc)[1] = '\0';
    goto switchD_1048_0454_caseD_9;
  case 0x10:
    pcVar5 = (char *)param_1 + 0x2b;
    break;
  case 0x13:
    in_DX = param_1._2_2_;
    goto LAB_1048_082f;
  case 0x15:
    uVar9 = 0;
    iVar7 = 0x18;
    pcVar8 = (char *)s_Options_10e8_108c + 4;
    puVar4 = (undefined2 *)FUN_1090_0000();
    *(undefined2 *)(iVar7 + 0x14) = puVar4;
    *(undefined2 *)(iVar7 + 0x16) = in_DX;
    for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      *puVar1 = 0;
    }
LAB_1048_082f:
    uStackY_16 = (char *)CONCAT22(0x839,(char *)uStackY_16);
    pcStackY_12 = pcVar8;
    FUN_1060_0652();
    goto switchD_1048_0454_caseD_9;
  case 0x19:
    pcVar5 = (char *)FUN_1090_0000();
    pcVar8 = pcVar5;
    for (iVar7 = 0x4b; iVar7 != 0; iVar7 = iVar7 + -1) {
      pcVar12 = pcVar8;
      pcVar8 = pcVar8 + 2;
      pcVar12[0] = '\0';
      pcVar12[1] = '\0';
    }
    *pcVar8 = '\0';
    uVar9 = (undefined2)((ulong)uStackY_16 >> 0x10);
    *(char **)((char *)uStackY_16 + 0x8f) = pcVar5;
    *(undefined2 *)((char *)uStackY_16 + 0x91) = in_DX;
    uStackY_16 = (char *)CONCAT22(in_DX,pcVar5);
    uVar9 = in_DX;
    uVar6 = FUN_1090_0000();
    *(undefined2 *)pcVar5 = uVar6;
    *(undefined2 *)(pcVar5 + 2) = uVar9;
    puVar4 = *(undefined2 **)pcVar5;
    for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      *puVar1 = 0;
    }
    pcStackY_12 = (char *)s_Options_10e8_108c + 4;
    uStackY_16 = (char *)CONCAT22(0x91a,(char *)uStackY_16);
    FUN_1060_0652();
    param_1 = (char *)CONCAT22(in_DX,pcVar5);
    in_DX = uVar9;
    goto switchD_1048_0454_caseD_9;
  }
  pcVar12 = (char *)CONCAT22(param_1._2_2_,pcVar5);
  puVar3 = local_266;
LAB_1048_06f1:
  uStackY_16 = (char *)CONCAT22(0x6f8,(char *)uStackY_16);
  pcStackY_12 = pcVar8;
  pvVar10 = LSTRCPY(pcVar12,(undefined1 *)CONCAT22(unaff_SS,puVar3));
  in_DX = (undefined2)((ulong)pvVar10 >> 0x10);
  goto switchD_1048_0454_caseD_9;
}


