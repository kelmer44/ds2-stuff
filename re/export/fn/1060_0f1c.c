// FUN_1060_0f1c at 1060:0f1c

char * __cdecl16far FUN_1060_0f1c(int param_1,undefined2 *param_2,int param_3)

{
  undefined2 *puVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined2 *puVar7;
  int iVar8;
  undefined2 uVar9;
  bool bVar10;
  bool bVar11;
  undefined4 uVar12;
  char *pcStackY_12;
  int iVar13;
  uint uVar14;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  pcStackY_12 = (char *)0x0;
  iVar13 = 0;
  if (0 < param_3) {
    do {
      puVar1 = param_2;
      iVar8 = iVar13;
      if (*(char *)(iVar13 + param_1) == '\0') break;
      for (; (((*(char *)(iVar8 + param_1) == ' ' || (*(char *)(iVar8 + param_1) == ',')) ||
              (*(char *)(iVar8 + param_1) == '\r')) || (*(char *)(iVar8 + param_1) == '\n'));
          iVar8 = iVar8 + 1) {
      }
      if (*(char *)(iVar8 + param_1) == '\0') break;
      if (*(char *)(iVar8 + param_1) == '-') {
        iVar8 = iVar8 + 1;
      }
      iVar13 = 0;
      uVar14 = 0;
      while( true ) {
        cVar2 = *(char *)(iVar8 + param_1);
        iVar8 = iVar8 + 1;
        if ((cVar2 < '0') || ('9' < cVar2)) break;
        uVar6 = (int)cVar2 - 0x30;
        bVar10 = CARRY2(uVar14,uVar14);
        uVar3 = uVar14 * 2;
        bVar11 = CARRY2(uVar14 * 4,uVar14);
        uVar5 = uVar14 * 5;
        uVar4 = uVar14 * 10;
        uVar14 = uVar4 + uVar6;
        iVar13 = (iVar13 * 5 + (uint)bVar10 * 2 + (uint)CARRY2(uVar3,uVar3) + (uint)bVar11) * 2 +
                 (uint)CARRY2(uVar5,uVar5) + ((int)uVar6 >> 0xf) + (uint)CARRY2(uVar4,uVar6);
      }
      uVar12 = FUN_10d0_052a(iVar13,iVar13,iVar13,iVar13);
      uVar9 = (undefined2)((ulong)param_2 >> 0x10);
      puVar7 = (undefined2 *)param_2;
      param_2 = (undefined2 *)CONCAT22(uVar9,puVar7 + 2);
      *puVar1 = (int)uVar12;
      puVar7[1] = (int)((ulong)uVar12 >> 0x10);
      pcStackY_12 = (char *)s_Options_10e8_10d0 + 1;
    } while (0x10d1 < param_3);
  }
  if ((int)pcStackY_12 < param_3) {
    for (iVar13 = (param_3 - (int)pcStackY_12) * 2; iVar13 != 0; iVar13 = iVar13 + -1) {
      puVar1 = (undefined2 *)param_2;
      param_2._0_2_ = (undefined2 *)param_2 + 1;
      *puVar1 = 0;
    }
  }
  return pcStackY_12;
}


