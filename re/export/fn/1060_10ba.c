// FUN_1060_10ba at 1060:10ba

void __cdecl16far FUN_1060_10ba(undefined2 param_1)

{
  undefined2 uVar1;
  short sVar2;
  undefined2 in_DX;
  void *pvVar3;
  int iVar4;
  undefined2 *puVar5;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  DAT_10e8_341e = FUN_1098_0326(0x275e,(char *)s_ReadSpeed_10e8_10d8 + 8,param_1);
  iVar4 = 0;
  DAT_10e8_60a8 = 0;
  pvVar3 = (void *)0x5f0;
  puVar5 = (undefined2 *)&DAT_10e8_5e14;
  DAT_10e8_3420 = in_DX;
  while( true ) {
    uVar1 = FUN_1060_1040(pvVar3,(char *)s_ReadSpeed_10e8_10d8 + 8);
    *puVar5 = uVar1;
    sVar2 = LSTRCMPI((void *)CONCAT22((char *)s_ReadSpeed_10e8_10d8 + 8,pvVar3),(void *)0x10e81d74);
    if (sVar2 == 0) break;
    pvVar3 = (void *)((int)pvVar3 + 0x19);
    puVar5 = puVar5 + 1;
    iVar4 = iVar4 + 1;
  }
  DAT_10e8_5cda = iVar4 + 1;
  iVar4 = 1;
  if (1 < DAT_10e8_5cda) {
    pvVar3 = (void *)0x609;
    do {
      sVar2 = LSTRCMPI((void *)CONCAT22((char *)s_ReadSpeed_10e8_10d8 + 8,pvVar3),
                       (void *)CONCAT22((char *)s_ReadSpeed_10e8_10d8 + 8,
                                        (void *)((int)pvVar3 + -0x19)));
      if (sVar2 < 0) {
        _WSPRINTF(&DAT_10e8_37f0,s_programmer_error__game_variable___10e8_1d7c,iVar4);
        FUN_1098_0248((undefined2 *)&DAT_10e8_37f0,(char *)s_Options_10e8_10e2 + 6);
      }
      pvVar3 = (void *)((int)pvVar3 + 0x19);
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_10e8_5cda);
  }
  FUN_1090_0068(DAT_10e8_341e,DAT_10e8_3420);
  return;
}


