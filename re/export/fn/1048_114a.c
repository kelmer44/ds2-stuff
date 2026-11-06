// FUN_1048_114a at 1048:114a

void __cdecl16far FUN_1048_114a(undefined4 param_1)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  char *pcVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  char *in_DX;
  int *piVar7;
  char *pcVar8;
  char *pcVar9;
  undefined2 unaff_SS;
  void *pvVar10;
  char local_228 [512];
  char local_28 [20];
  undefined4 uStackY_14;
  undefined2 uVar11;
  char *a0;
  
  pcVar8 = (char *)s_Options_10e8_10d0;
  FUN_10d0_029e();
switchD_1048_1184_caseD_2:
  pcVar9 = local_228;
  pcVar4 = pcVar8;
  iVar2 = FUN_1048_0b54();
  if (iVar2 == 0x2b) {
    return;
  }
  pcVar8 = (char *)s_Options_10e8_1047 + 1;
  switch(iVar2) {
  case 1:
    pcVar8 = (char *)s_____vacio_____10e8_11c4 + 10;
    pcVar4 = (char *)s_Options_10e8_1047 + 1;
    puVar3 = (undefined2 *)FUN_1090_0000();
    puVar5 = puVar3;
    for (iVar2 = 0x342; iVar2 != 0; iVar2 = iVar2 + -1) {
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar1 = 0;
    }
    *(undefined1 *)puVar5 = 0;
    if (pcVar4 == (char *)0x0 && pcVar8 == (char *)0x0) {
      uVar6 = (undefined2)((ulong)param_1 >> 0x10);
      *(undefined2 *)((int)param_1 + 0x39) = puVar3;
      *(int *)((int)param_1 + 0x3b) = (int)in_DX;
    }
    else {
      *(undefined2 **)(pcVar8 + 0x681) = puVar3;
      *(char **)(pcVar8 + 0x683) = in_DX;
    }
    *(undefined2 *)((int)puVar3 + 0x67b) = 100;
    uVar11 = 0;
    uVar6 = FUN_1090_0000();
    *(undefined2 *)((int)puVar3 + 0xd) = uVar6;
    *(int *)((int)puVar3 + 0xf) = (int)in_DX;
    puVar5 = (undefined2 *)*(undefined2 *)((int)puVar3 + 0xd);
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar1 = 0;
    }
    pcVar8 = (char *)s_ReadSpeed_10e8_105f + 1;
    uStackY_14 = (char *)0x10901255;
    FUN_1060_0652();
  default:
    goto switchD_1048_1184_caseD_2;
  case 4:
    if ((((undefined1 *)&DAT_10e8_5d0e)[local_228[0]] & 4) != 0) {
      FUN_1060_0188();
      uStackY_14 = (char *)0x10601292;
      FUN_1060_0c44();
    }
    pcVar8 = local_28;
    FUN_1060_0062();
    pcVar4 = pcVar4 + 0x47;
    goto LAB_1048_12a9;
  case 5:
    if ((((undefined1 *)&DAT_10e8_5d0e)[local_228[0]] & 4) != 0) {
      FUN_1060_0188();
      uStackY_14 = "C-\a";
      FUN_1060_0c44();
    }
    pcVar8 = local_28;
    FUN_1060_0062();
    pcVar4 = pcVar4 + 0x56;
LAB_1048_12a9:
    pcVar9 = (char *)s_ReadSpeed_10e8_105f + 1;
    a0 = (char *)CONCAT22(pcVar8,pcVar4);
    pcVar4 = local_28;
LAB_1048_12b0:
    pcVar8 = (char *)0x13a8;
    uStackY_14 = (char *)CONCAT22(pcVar9,(char *)s_Saved_Game_from_other_Version__R_10e8_129a + 0x1d
                                 );
    pvVar10 = LSTRCPY(a0,(char *)CONCAT22(unaff_SS,pcVar4));
    in_DX = (char *)((ulong)pvVar10 >> 0x10);
    goto switchD_1048_1184_caseD_2;
  case 7:
    a0 = (char *)CONCAT22(pcVar9,pcVar4);
    pcVar4 = local_228;
    pcVar9 = pcVar8;
    goto LAB_1048_12b0;
  case 8:
    goto LAB_1048_131f;
  case 0xb:
    in_DX = (char *)0x6;
    pcVar8 = (char *)s_ReadSpeed_10e8_105f + 1;
    uStackY_14 = (char *)0x1048134b;
    pcVar9 = in_DX;
    FUN_1060_0c44();
    if (0x80 < *(int *)(pcVar4 + 0x6f)) {
      pcVar9 = (char *)s_Options_10e8_10e2 + 6;
      pcVar8 = (char *)s_PlayWave_10e8_1094 + 4;
      FUN_1098_0248();
    }
    if ((*(int *)(pcVar4 + 0x27b) == 0) && (iVar2 = 0, 0 < *(int *)(pcVar4 + 0x6f))) {
      piVar7 = (int *)(pcVar4 + 0x27b);
      do {
        iVar2 = iVar2 + 1;
        *piVar7 = iVar2;
        piVar7 = piVar7 + 1;
      } while (iVar2 < *(int *)(pcVar4 + 0x6f));
    }
    if ((*(int *)(pcVar4 + 99) == 0) && (*(int *)(pcVar4 + 0x65) == 0)) {
      (pcVar4 + 99)[0] = '\0';
      (pcVar4 + 99)[1] = '\0';
      *(int *)(pcVar4 + 0x65) = *(int *)(pcVar4 + 0x6f) + -1;
    }
    goto switchD_1048_1184_caseD_2;
  case 0x11:
    iVar2 = *(int *)(pcVar4 + 0x6f);
    goto joined_r0x1048148c;
  case 0x12:
    in_DX = (char *)0x1;
    goto LAB_1048_13fb;
  case 0x15:
    pcVar8 = (char *)s_Options_10e8_108c + 4;
    puVar5 = (undefined2 *)FUN_1090_0000();
    uVar6 = (undefined2)((ulong)uStackY_14 >> 0x10);
    *(undefined2 **)((char *)uStackY_14 + 0x14) = puVar5;
    *(char **)((char *)uStackY_14 + 0x16) = in_DX;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar1 = 0;
    }
    break;
  case 0x16:
    iVar2 = *(int *)(pcVar4 + 0x6f);
    goto joined_r0x1048148c;
  case 0x17:
    iVar2 = *(int *)(pcVar4 + 0x6f);
    goto joined_r0x1048148c;
  case 0x18:
    iVar2 = *(int *)(pcVar4 + 0x6f);
joined_r0x1048148c:
    if (iVar2 < 1) {
      in_DX = pcVar9;
    }
    uStackY_14 = (char *)0x104813de;
    FUN_1060_0d2e();
    goto LAB_1048_132b;
  case 0x1a:
    uVar11 = 0;
    pcVar8 = (char *)s_Options_10e8_108c + 4;
    uVar6 = FUN_1090_0000();
    *(undefined2 *)(pcVar4 + 0x11) = uVar6;
    *(char **)(pcVar4 + 0x13) = in_DX;
    puVar5 = *(undefined2 **)(pcVar4 + 0x11);
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar1 = 0;
    }
    break;
  case 0x1b:
    uVar11 = 0;
    pcVar8 = (char *)s_Options_10e8_108c + 4;
    uVar6 = FUN_1090_0000();
    *(undefined2 *)(pcVar4 + 0x15) = uVar6;
    *(char **)(pcVar4 + 0x17) = in_DX;
    puVar5 = *(undefined2 **)(pcVar4 + 0x15);
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar1 = 0;
    }
    break;
  case 0x1c:
    in_DX = (char *)0x2;
LAB_1048_13fb:
    uStackY_14 = (char *)0x10481407;
    FUN_1060_0c44();
    goto LAB_1048_132b;
  case 0x1d:
    FUN_1060_0188();
    pcVar8 = (char *)s_ReadSpeed_10e8_105f + 1;
    uStackY_14 = (char *)0x10601551;
    FUN_1060_0c44();
LAB_1048_131f:
    in_DX = (char *)0xa;
  }
  uStackY_14 = (char *)CONCAT22(pcVar8,(char *)0x132b);
  FUN_1060_0652();
LAB_1048_132b:
  pcVar8 = (char *)s_ReadSpeed_10e8_105f + 1;
  goto switchD_1048_1184_caseD_2;
}


