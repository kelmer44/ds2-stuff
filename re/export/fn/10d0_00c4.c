// FUN_10d0_00c4 at 10d0:00c4

void __cdecl16far FUN_10d0_00c4(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  undefined2 in_BX;
  int unaff_BP;
  byte *pbVar7;
  byte *pbVar8;
  undefined2 unaff_ES;
  char *pcVar9;
  char *pcVar10;
  undefined2 unaff_SS;
  bool bVar11;
  
  pcVar9 = (char *)s_Options_10e8_10d0;
  if ((DAT_10d0_0010 & 1) == 0) {
    pcVar5 = (code *)swi(0x21);
    (*pcVar5)(unaff_BP + 1);
  }
  else {
    pcVar9 = (char *)0x13a8;
    DOS3CALL((char *)s_Options_10e8_10d0,(char *)s_Options_10e8_10e2 + 6);
  }
  pcVar10 = (char *)s_Options_10e8_10d0;
  DAT_10e8_291c._0_2_ = in_BX;
  DAT_10e8_291c._2_2_ = unaff_ES;
  if ((DAT_10d0_0010 & 1) == 0) {
    pcVar5 = (code *)swi(0x21);
    (*pcVar5)();
  }
  else {
    pcVar9 = (char *)s_Options_10e8_10d0;
    pcVar10 = (char *)0x13a8;
    DOS3CALL((char *)s_Options_10e8_10d0);
  }
  if (*(int *)&DAT_10e8_2a68 != 0) {
    bVar11 = false;
    (*(code *)*(undefined2 *)&DAT_10e8_2a66)(pcVar10,pcVar9);
    if (bVar11) {
      FUN_10d0_06ac();
      return;
    }
    (*(code *)*(undefined2 *)&DAT_10e8_2a66)(pcVar10);
  }
  iVar4 = *(int *)((char *)s_Dark_Seed_II_10e8_0022 + 10);
  if (iVar4 != 0) {
    pbVar8 = (byte *)0x0;
    do {
      bVar11 = *pbVar8 == 0;
      if (bVar11) break;
      iVar6 = 0xd;
      pbVar7 = (byte *)s__C_FILE_INFO__10e8_290e;
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pbVar3 = pbVar8;
        pbVar8 = pbVar8 + 1;
        pbVar1 = pbVar7;
        pbVar7 = pbVar7 + 1;
        bVar11 = *pbVar1 == *pbVar3;
      } while (bVar11);
      if (bVar11) {
        pbVar7 = (byte *)0x2942;
        goto LAB_10d0_016b;
      }
      iVar6 = 0x7fff;
      bVar11 = true;
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pbVar1 = pbVar8;
        pbVar8 = pbVar8 + 1;
        bVar11 = *pbVar1 == 0;
      } while (!bVar11);
    } while (bVar11);
  }
LAB_10d0_017f:
  FUN_10d0_026a();
  FUN_10d0_026a();
  FUN_10d0_026a();
  return;
LAB_10d0_016b:
  pbVar1 = pbVar8;
  pbVar2 = pbVar8 + 1;
  if (*pbVar1 < 0x41) goto LAB_10d0_017f;
  pbVar8 = pbVar8 + 2;
  if (*pbVar2 < 0x41) goto LAB_10d0_017f;
  pbVar3 = pbVar7;
  pbVar7 = pbVar7 + 1;
  *pbVar3 = *pbVar2 + 0xbf | (*pbVar1 + 0xbf) * '\x10';
  goto LAB_10d0_016b;
}


