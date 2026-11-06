// FUN_1010_00a6 at 1010:00a6

void * __cdecl16far FUN_1010_00a6(byte *param_1)

{
  byte *pbVar1;
  void *pvVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  void *pvVar6;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  if (*param_1 == 0) {
    pvVar6 = LSTRCPY(&DAT_10e8_9558,(void *)0x0);
    pvVar2 = (void *)pvVar6;
  }
  else {
    pvVar2 = (void *)LSTRLEN((byte *)CONCAT22((char *)s_Options_10e8_10e2 + 6,param_1));
    iVar5 = (int)pvVar2 - 1;
    if (param_1[iVar5] != 0x5c) {
      pbVar3 = param_1 + iVar5;
      do {
        iVar5 = iVar5 + -1;
        pbVar3 = pbVar3 + -1;
      } while (*pbVar3 != 0x5c);
    }
    pbVar4 = (byte *)&DAT_10e8_9558;
    pbVar3 = pbVar4;
    if (0 < iVar5) {
      do {
        pbVar1 = param_1;
        pvVar2 = (void *)(uint)*pbVar1;
        param_1 = param_1 + 1;
        pbVar4 = pbVar3 + 1;
        *pbVar3 = *pbVar1;
        iVar5 = iVar5 + -1;
        pbVar3 = pbVar4;
      } while (iVar5 != 0);
    }
    *pbVar4 = 0;
  }
  return pvVar2;
}


