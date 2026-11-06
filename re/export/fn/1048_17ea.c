// FUN_1048_17ea at 1048:17ea

void __cdecl16far FUN_1048_17ea(int param_1,char *param_2)

{
  undefined2 *puVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 uVar7;
  char *pcVar8;
  undefined1 local_214 [512];
  undefined4 uStack_14;
  char *pcStack_10;
  char *pcStack_e;
  undefined4 uStack_c;
  
  pcVar8 = (char *)s_Options_10e8_10d0;
  FUN_10d0_029e();
  pcStack_10 = (char *)(param_1 + 0xfe2);
LAB_1048_1818:
  uStack_c = (char *)CONCAT22(local_214,pcVar8);
  pcStack_e = (char *)s_CHANGE__10e8_1821;
  uVar4 = FUN_1048_0b54();
  pcVar2 = pcStack_e;
  if (uVar4 == 0x29) {
    return;
  }
  if (uVar4 != 0x15) goto LAB_1048_1836;
  uStack_c = (char *)0x18;
  pcStack_10 = (char *)s_SEQUENCE__10e8_18be + 5;
  pcStack_e = pcVar8;
  pcStack_e = (char *)FUN_1090_0000();
  uVar7 = (undefined2)((ulong)uStack_14 >> 0x10);
  *(char **)((char *)uStack_14 + 0x14) = pcStack_e;
  *(char **)((char *)uStack_14 + 0x16) = param_2;
  puVar6 = (undefined2 *)pcStack_e;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar1 = puVar6;
    puVar6 = puVar6 + 1;
    *puVar1 = 0;
  }
  goto LAB_1048_1887;
LAB_1048_1836:
  if (uVar4 < 0x16) {
    cVar3 = (char)uVar4;
    if (cVar3 == '\x01') {
      uStack_c._2_2_ = 0;
      uStack_c._0_2_ = 0x18;
      pcStack_10 = (char *)s_SPEECH__10e8_1852 + 1;
      pcStack_e = pcVar8;
      uVar7 = FUN_1090_0000();
      iVar5 = (int)uStack_c;
      uStack_c = (char *)CONCAT22(uStack_c._2_2_,(undefined2 *)((int)uStack_c + 4));
      *(undefined2 *)uStack_c = uVar7;
      *(undefined2 *)(iVar5 + 6) = param_2;
      pcStack_e = *(char **)uStack_c;
      param_2 = (char *)*(undefined2 *)(iVar5 + 6);
      puVar6 = (undefined2 *)pcStack_e;
      for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
        puVar1 = puVar6;
        puVar6 = puVar6 + 1;
        *puVar1 = 0;
      }
LAB_1048_1887:
      uStack_c = (char *)CONCAT22(10,param_2);
      pcStack_10 = local_214;
      uStack_14 = (char *)0x10901891;
      FUN_1060_0652();
    }
    else {
      if (cVar3 == '\t') {
        pcStack_e = pcStack_10;
      }
      else {
        if (cVar3 != '\n') goto LAB_1048_1818;
        param_2 = pcStack_e;
        pcStack_e = pcStack_10 + -0x32;
      }
      uStack_c = (char *)CONCAT22(1,pcVar2);
      pcStack_10 = local_214;
      uStack_14 = (char *)CONCAT22(pcVar8,(char *)s_ENDINDEX__10e8_18a2 + 6);
      FUN_1060_0c44();
    }
    pcVar8 = (char *)s_ReadSpeed_10e8_105f + 1;
  }
  goto LAB_1048_1818;
}


