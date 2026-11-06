// FUN_10d0_0834 at 10d0:0834

void __cdecl16far FUN_10d0_0834(void)

{
  int *piVar1;
  char *pcVar2;
  int *piVar3;
  char cVar4;
  char *pcVar5;
  undefined2 *puVar6;
  int iVar7;
  int iVar8;
  int unaff_BP;
  int iVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  char *pcVar13;
  int *piVar14;
  undefined2 unaff_SS;
  bool bVar15;
  void *pvVar16;
  char *pcVar17;
  
  iVar9 = unaff_BP + 1;
  pcVar17 = (char *)s_Options_10e8_10e2 + 6;
  pcVar5 = (char *)s_Options_10e8_10e2 + 6;
  pvVar16 = GETDOSENVIRONMENT();
  iVar8 = (int)((ulong)pvVar16 >> 0x10);
  if ((void *)pvVar16 != (void *)0x0) {
    iVar8 = 0;
  }
  iVar10 = 0;
  pcVar13 = (char *)0x0;
  iVar7 = -1;
  if (iVar8 != 0) {
    cVar4 = *(char *)0x0;
    while (cVar4 != '\0') {
      do {
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar2 = pcVar13;
        pcVar13 = pcVar13 + 1;
      } while (*pcVar2 != '\0');
      iVar10 = iVar10 + 1;
      pcVar2 = pcVar13;
      pcVar13 = pcVar13 + 1;
      cVar4 = *pcVar2;
    }
  }
  pcVar5 = (char *)FUN_10d0_0ff6(pcVar5,pcVar17,iVar9);
  puVar6 = (undefined2 *)FUN_10d0_0ff6();
  piVar11 = (int *)0x0;
  DAT_10e8_296e = puVar6;
  do {
    if (iVar10 == 0) {
      *puVar6 = 0;
      return;
    }
    bVar15 = *piVar11 == *(int *)s__C_FILE_INFO__10e8_290e;
    if (bVar15) {
      piVar14 = (int *)s__C_FILE_INFO__10e8_290e;
      iVar9 = 6;
      piVar12 = piVar11;
      do {
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        piVar3 = piVar14;
        piVar14 = piVar14 + 1;
        piVar1 = piVar12;
        piVar12 = piVar12 + 1;
        bVar15 = *piVar1 == *piVar3;
      } while (bVar15);
      if (!bVar15) goto LAB_10d0_08aa;
    }
    else {
LAB_10d0_08aa:
      *puVar6 = pcVar5;
      puVar6 = puVar6 + 1;
    }
    do {
      piVar1 = piVar11;
      piVar11 = (int *)((int)piVar11 + 1);
      iVar9 = *piVar1;
      pcVar2 = pcVar5;
      pcVar5 = pcVar5 + 1;
      *pcVar2 = (char)iVar9;
    } while ((char)iVar9 != '\0');
    iVar10 = iVar10 + -1;
  } while( true );
}


