// FUN_1048_093e at 1048:093e

undefined2 * __cdecl16far FUN_1048_093e(void)

{
  undefined2 *puVar1;
  char cVar2;
  int iVar3;
  undefined2 *puVar4;
  uint uVar5;
  char *pcVar6;
  undefined2 *puVar7;
  char *pcVar8;
  undefined2 unaff_SS;
  void *pvVar9;
  char local_422 [512];
  undefined1 local_222 [512];
  undefined1 local_22 [12];
  undefined2 uStackY_16;
  undefined2 *puStackY_14;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  int iVar13;
  undefined2 uVar14;
  
  FUN_10d0_029e();
  puStackY_14 = (undefined2 *)0x95f;
  LSTRCPY((undefined1 *)CONCAT22(unaff_SS,local_22),(void *)0x10e8180c);
  puStackY_14 = (undefined2 *)0x13a8;
  uStackY_16 = 0x971;
  _WSPRINTF((undefined1 *)CONCAT22(unaff_SS,local_222),(void *)0x10e81811);
  puStackY_14 = (undefined2 *)0x984;
  LSTRCAT((undefined1 *)CONCAT22(unaff_SS,local_22),(undefined1 *)CONCAT22(unaff_SS,local_222));
  puStackY_14 = (undefined2 *)0x992;
  pvVar9 = LSTRCAT((undefined1 *)CONCAT22(unaff_SS,local_22),(void *)0x10e81816);
  pcVar6 = (char *)((ulong)pvVar9 >> 0x10);
  DAT_10e8_3416 = FUN_1098_0326();
  DAT_10e8_3418 = pcVar6;
  DAT_10e8_341a = FUN_1088_0892();
  DAT_10e8_16f6 = 0;
  DAT_10e8_16f4 = 0;
  DAT_10e8_341c = pcVar6;
  FUN_1048_03c4();
  FUN_1048_0000();
  pcVar12 = local_422;
  puStackY_14 = (undefined2 *)0x9ed;
  FUN_1060_0c44();
  pcVar10 = (char *)0x0;
  puStackY_14 = (undefined2 *)0x0;
  do {
    iVar3 = FUN_1048_0000();
  } while (iVar3 != 0x41);
  if (0 < (int)pcVar12) {
    do {
      pcVar12 = (char *)s_Esto_puede_causar_problemas_en_s_10e8_0a10 + 0x10;
      puVar4 = (undefined2 *)FUN_1090_0000();
      puVar7 = puVar4;
      for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
        puVar1 = puVar7;
        puVar7 = puVar7 + 1;
        *puVar1 = 0;
      }
      *(undefined1 *)puVar7 = 0;
      puVar4[6] = puStackY_14;
      puVar4[7] = pcVar10;
      pcVar8 = (char *)s_Options_10e8_108c + 4;
      puStackY_14 = puVar4;
      pcVar11 = pcVar6;
LAB_1048_0b11:
      iVar3 = 0xb1a;
      uVar5 = FUN_1048_0000();
      if (uVar5 != 0x41) {
        if (uVar5 == 0x42) {
          pcVar12 = local_422;
          puStackY_14 = (undefined2 *)0xb0e;
          pcVar11 = pcVar8;
          FUN_1060_0c44();
          pcVar8 = (char *)s_ReadSpeed_10e8_105f + 1;
        }
        else if (uVar5 < 0x43) {
          cVar2 = (char)uVar5;
          if (cVar2 == ' ') {
            uVar14 = 0;
            iVar13 = 0x97;
            puVar4 = (undefined2 *)FUN_1090_0000();
            puVar7 = puVar4;
            for (iVar3 = 0x4b; iVar3 != 0; iVar3 = iVar3 + -1) {
              puVar1 = puVar7;
              puVar7 = puVar7 + 1;
              *puVar1 = 0;
            }
            *(undefined1 *)puVar7 = 0;
            *(undefined2 *)(iVar13 + 0x18) = puVar4;
            *(undefined2 *)(iVar13 + 0x1a) = pcVar10;
          }
          else if (cVar2 == '\"') {
            uVar14 = 0;
            iVar13 = 0x97;
            puVar4 = (undefined2 *)FUN_1090_0000();
            puVar7 = puVar4;
            for (iVar3 = 0x4b; iVar3 != 0; iVar3 = iVar3 + -1) {
              puVar1 = puVar7;
              puVar7 = puVar7 + 1;
              *puVar1 = 0;
            }
            *(undefined1 *)puVar7 = 0;
            *(undefined2 *)(iVar13 + 0x10) = puVar4;
            *(undefined2 *)(iVar13 + 0x12) = pcVar10;
          }
          else {
            if (cVar2 != ',') goto LAB_1048_0b11;
            uVar14 = 0;
            iVar13 = 0x97;
            puVar4 = (undefined2 *)FUN_1090_0000();
            puVar7 = puVar4;
            for (iVar3 = 0x4b; iVar3 != 0; iVar3 = iVar3 + -1) {
              puVar1 = puVar7;
              puVar7 = puVar7 + 1;
              *puVar1 = 0;
            }
            *(undefined1 *)puVar7 = 0;
            *(undefined2 *)(iVar13 + 0x14) = puVar4;
            *(undefined2 *)(iVar13 + 0x16) = pcVar10;
          }
          pcVar8 = (char *)s_Options_10e8_108c + 4;
          pcVar12 = (char *)s_Options_10e8_108c + 4;
          pcVar11 = (char *)0xa9b;
          FUN_1048_042c();
        }
        goto LAB_1048_0b11;
      }
      pcVar6 = pcVar10;
      pcVar10 = pcVar11;
    } while (iVar3 + 1 < (int)pcVar12);
  }
  FUN_1090_0068();
  return puStackY_14;
}


