// FUN_1088_051c at 1088:051c

char * __cdecl16far FUN_1088_051c(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcStackY_12;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  
  pcVar8 = (char *)s_Options_10e8_10d0;
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  iVar1 = *(int *)((int)param_1 + 2) + -1;
  pcVar5 = (char *)*(undefined2 *)((int)param_1 + 6);
  pcVar11 = (char *)s_Options_10e8_10e2 + 6;
  pcStackY_12 = (char *)(param_2 + -2);
  if (iVar1 != 1 && -1 < *(int *)((int)param_1 + 2) + -2) {
    iVar6 = 0;
    pcVar10 = pcVar11;
    pcVar12 = (char *)*(undefined2 *)((int)param_1 + 8);
    do {
      pcVar9 = pcVar8;
      iVar2 = (iVar1 + iVar6) / 2;
      pcVar3 = pcVar5 + iVar2 * 0x16;
      pcVar8 = (char *)s_ReadSpeed_10e8_10d8;
      pcVar11 = pcStackY_12;
      pcVar5 = pcVar10;
      iVar4 = FUN_10d8_0052(pcStackY_12,pcVar10,pcVar3,pcVar12);
      iVar7 = iVar2;
      if ((iVar4 < 1) && (iVar7 = iVar6, iVar1 = iVar2, -1 < iVar4)) {
        return pcVar5 + iVar2 * 0x16;
      }
      iVar6 = iVar7;
      pcStackY_12 = pcVar9;
      pcVar10 = pcVar11;
      pcVar12 = pcVar3;
    } while (iVar7 < iVar1 + -1);
  }
  pcVar5 = pcStackY_12;
  iVar1 = FUN_10d8_0052(pcStackY_12,pcStackY_12,pcStackY_12,pcVar11);
  if (iVar1 != 0) {
    pcVar5 = pcVar5 + (*(int *)((int)param_1 + 2) + -1) * 0x16;
    iVar1 = FUN_10d8_0052(pcVar5,pcVar8,pcVar8,pcStackY_12);
    if (iVar1 != 0) {
      pcVar5 = (char *)0x0;
    }
  }
  return pcVar5;
}


