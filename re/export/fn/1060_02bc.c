// FUN_1060_02bc at 1060:02bc

int __cdecl16far FUN_1060_02bc(char *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  iVar4 = DAT_10e8_5cda + -1;
  if (*param_1 < ':') {
    iVar4 = 0x15;
  }
  if (iVar4 == 1 || iVar4 + -1 < 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = 0;
    iVar3 = iVar4;
    do {
      iVar1 = (iVar3 + iVar5) / 2;
      iVar2 = FUN_10d8_0000(param_1,(char *)s_Options_10e8_10e2 + 6,iVar1 * 0x19 + 0x5f0,
                            (char *)s_ReadSpeed_10e8_10d8 + 8);
      iVar4 = iVar1;
      if (0 < iVar2) {
        iVar4 = iVar3;
        iVar5 = iVar1;
      }
      iVar3 = iVar4;
    } while (iVar5 < iVar4 + -1);
  }
  iVar3 = iVar5;
  iVar1 = FUN_10d8_0000(param_1,(char *)s_Options_10e8_10e2 + 6,iVar5 * 0x19 + 0x5f0,
                        (char *)s_ReadSpeed_10e8_10d8 + 8,iVar4,iVar5);
  if ((iVar1 != 0) &&
     (iVar3 = FUN_10d8_0000(param_1,(char *)s_Options_10e8_10e2 + 6,iVar4 * 0x19 + 0x5f0,
                            (char *)s_ReadSpeed_10e8_10d8 + 8,iVar4,iVar3), iVar5 = iVar4,
     iVar3 != 0)) {
    iVar5 = 0;
  }
  return iVar5;
}


