// FUN_1060_048e at 1060:048e

int __cdecl16far FUN_1060_048e(void *param_1)

{
  int iVar1;
  int iVar2;
  short sVar3;
  void *pvVar4;
  int iVar5;
  void *a0;
  int iVar6;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  iVar5 = 0;
  iVar1 = DAT_10e8_5cda + -1;
  if (iVar1 != 1 && -1 < DAT_10e8_5cda + -2) {
    iVar5 = 0;
    iVar6 = iVar1;
    do {
      iVar2 = (iVar6 + iVar5) / 2;
      sVar3 = LSTRCMPI((void *)CONCAT22((char *)s_Options_10e8_10e2 + 6,param_1),
                       (void *)CONCAT22((char *)s_ReadSpeed_10e8_10d8 + 8,
                                        (void *)(iVar2 * 0x19 + 0x5f0)));
      iVar1 = iVar2;
      if (0 < sVar3) {
        iVar1 = iVar6;
        iVar5 = iVar2;
      }
      iVar6 = iVar1;
    } while (iVar5 < iVar1 + -1);
  }
  sVar3 = LSTRCMPI((void *)CONCAT22((char *)s_Options_10e8_10e2 + 6,param_1),
                   (void *)CONCAT22((char *)s_ReadSpeed_10e8_10d8 + 8,(void *)(iVar5 * 0x19 + 0x5f0)
                                   ));
  if (sVar3 != 0) {
    pvVar4 = (void *)(iVar1 * 0x19 + 0x5f0);
    a0 = (void *)CONCAT22((char *)s_ReadSpeed_10e8_10d8 + 8,pvVar4);
    sVar3 = LSTRCMPI(a0,(void *)CONCAT22((char *)s_ReadSpeed_10e8_10d8 + 8,pvVar4));
    iVar5 = iVar1;
    if (sVar3 != 0) {
      LSTRCPY(a0,(void *)CONCAT22((char *)s_Options_10e8_10e2 + 6,param_1));
      ((undefined2 *)&DAT_10e8_5e14)[iVar1] = 0;
    }
  }
  return iVar5;
}


