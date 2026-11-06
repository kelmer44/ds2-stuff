// FUN_1068_1b6e at 1068:1b6e

void __cdecl16far FUN_1068_1b6e(undefined4 param_1)

{
  char *pcVar1;
  int iVar2;
  short sVar3;
  undefined2 in_DX;
  char *pcVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  undefined1 local_5e [72];
  char *pcStackY_16;
  char *pcStackY_14;
  char *pcStackY_12;
  int iVar6;
  int iVar7;
  
  FUN_10d0_029e();
  do {
    while( true ) {
      while( true ) {
        iVar2 = FUN_1068_1692();
        if (iVar2 == 0xff) {
          return;
        }
        if (iVar2 != 0xb) break;
        FUN_1060_0062();
        pcStackY_12 = (char *)s_ReadSpeed_10e8_105f + 1;
        pcStackY_14 = (char *)s_OPEN_avivideo__10e8_1bd5;
        sVar3 = LSTRCMPI((undefined1 *)CONCAT22(unaff_SS,local_5e),s_Speaker_10e8_1f48);
        if (sVar3 != 0) goto LAB_1068_1c60;
        pcStackY_12 = (char *)0x13a8;
        pcStackY_14 = (char *)s__avi_nostatic_alias_vfw_10e8_1be4 + 9;
        FUN_1060_0c44();
      }
      if (iVar2 != 0xd) break;
      iVar7 = 0;
      iVar6 = 0x17;
      pcStackY_12 = (char *)FUN_1090_0000();
      pcVar4 = pcStackY_12;
      for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
        pcVar1 = pcVar4;
        pcVar4 = pcVar4 + 2;
        pcVar1[0] = '\0';
        pcVar1[1] = '\0';
      }
      *pcVar4 = '\0';
      if (iVar7 == 0 && iVar6 == 0) {
        uVar5 = (undefined2)((ulong)param_1 >> 0x10);
        *(undefined2 *)((int)param_1 + 0x11) = pcStackY_12;
        *(undefined2 *)((int)param_1 + 0x13) = in_DX;
      }
      else {
        *(undefined2 *)(iVar6 + 0x13) = pcStackY_12;
        *(undefined2 *)(iVar6 + 0x15) = in_DX;
      }
      pcStackY_14 = (char *)s_Options_10e8_108c + 4;
      pcStackY_16 = (char *)s_play_vfw_fullscreen_from_0_notif_10e8_1c49 + 0xc;
      FUN_1068_1a74();
    }
  } while (iVar2 == 0xfe);
LAB_1068_1c60:
  FUN_1068_1654();
  return;
}


