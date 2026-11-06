// FUN_1048_24ee at 1048:24ee

/* WARNING: Removing unreachable block (ram,0x1048251e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1048_24ee(char *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  ushort a0;
  void *pvVar6;
  uint uVar7;
  int iVar8;
  ushort unaff_DI;
  undefined2 uVar9;
  char *pcVar10;
  int unaff_SS;
  undefined1 local_60 [68];
  char *pcStackY_1c;
  char *pcStackY_1a;
  undefined2 *puVar11;
  undefined1 *puVar12;
  char *pcVar13;
  
  pcVar10 = (char *)s_Options_10e8_10d0;
  FUN_10d0_029e();
  uVar9 = (undefined2)((ulong)param_2 >> 0x10);
  iVar8 = *(int *)((int)param_2 + 2);
  iVar2 = *(int *)((int)param_2 + 4);
  if (iVar2 != 0 || iVar8 != 0) {
    do {
      if (*(int *)(iVar8 + 0xe) == 0) {
LAB_1048_253e:
        uVar7 = 1;
        pcVar5 = pcVar10;
      }
      else {
        pcVar10 = (char *)s_ReadSpeed_10e8_105f + 1;
        uVar9 = 0x2532;
        iVar2 = FUN_1060_0b00();
        uVar7 = 0;
        pcVar5 = pcVar10;
        if (*(int *)(iVar8 + 0xe) == iVar2) goto LAB_1048_253e;
      }
      pcVar10 = (char *)s_ReadSpeed_10e8_105f + 1;
      uVar3 = FUN_1060_07f6();
      if ((uVar7 & uVar3) != 0) {
        if ((*(byte *)(iVar8 + 0x14) & 1) == 0) goto LAB_1048_2616;
        GETSYSTEMPALETTEENTRIES((ushort)param_1,0,0x100,&DAT_10e8_6c9e);
        iVar8 = 400;
        iVar2 = 100;
        goto LAB_1048_25a0;
      }
      piVar1 = (int *)(iVar8 + 0x91);
      iVar2 = *(int *)(iVar8 + 0x93);
      iVar8 = *piVar1;
    } while (iVar2 != 0 || *piVar1 != 0);
  }
  goto LAB_1048_2a3a;
  while( true ) {
    iVar8 = iVar8 + 4;
    iVar2 = iVar2 + 1;
    if (0xef < iVar2) break;
LAB_1048_25a0:
    if ((CONCAT11(((undefined1 *)&DAT_10e8_6c9f)[iVar8],((undefined1 *)&DAT_10e8_6ca0)[iVar8]) !=
         *(int *)((undefined1 *)&DAT_10e8_9798 + iVar8)) ||
       ((uint)(byte)((undefined1 *)&DAT_10e8_6c9e)[iVar8] !=
        *(uint *)((undefined1 *)&DAT_10e8_979a + iVar8))) break;
  }
  if (iVar2 < 0xf0) {
    FUN_1080_02f0();
    pcStackY_1a = (char *)0x2601;
    PATBLT((ushort)param_1,0,0,0x280,0x1e0,0x42);
  }
  iVar8 = 0x13a8;
  pcVar5 = param_1;
  unaff_DI = FUN_1080_049a();
LAB_1048_2616:
  pcVar10 = (char *)0x0;
  if ((*(char *)(iVar8 + 0x1a) == 't') || (*(char *)(iVar8 + 0x1a) == 'T')) {
    iVar2 = 1;
    *(undefined2 *)(iVar8 + 0x29) = 0;
    *(undefined2 *)(iVar8 + 0x27) = 0;
    *(undefined2 *)(iVar8 + 0x2b) = 0x140;
    *(undefined2 *)(iVar8 + 0x2d) = 0xf0;
  }
  else {
    iVar2 = 3;
    pcVar10 = (char *)(iVar8 + 0x1a);
    iVar4 = FUN_10d0_0604();
    pcVar5 = pcVar10;
    if (iVar4 != 0) {
      iVar2 = 3;
      pcVar5 = (char *)(iVar8 + 0x1a);
      iVar4 = FUN_10d0_0604();
      if (iVar4 != 0) goto LAB_1048_2683;
    }
    pcVar10 = (char *)0x1;
  }
LAB_1048_2683:
  if ((DAT_10e8_0050 != 0) && (iVar2 != 0)) {
    *(undefined1 *)(iVar8 + 0x1a) = 0;
  }
  if ((DAT_10e8_0052 != 0) && (pcVar10 != (char *)0x0)) {
    *(undefined1 *)(iVar8 + 0x1a) = 0;
  }
  if ((DAT_10e8_007c == 0x5dd) && (DAT_10e8_005a == 1)) {
    *(undefined1 *)(iVar8 + 0x1a) = 0;
  }
  if (*(char *)(iVar8 + 0x1a) == '\0') {
    FUN_1028_014e();
  }
  else {
    a0 = SETCURSOR(0);
    pcVar5 = (char *)s_Options_10e8_10e2 + 6;
    LSTRCPY(&DAT_10e8_37f0,s_OPEN_avivideo__10e8_1a66);
    pcVar13 = (char *)s_Options_10e8_10e2 + 6;
    puVar11 = (undefined2 *)&DAT_10e8_37f0;
    pcVar10 = pcVar5;
    pvVar6 = (void *)FUN_1028_0b48();
    LSTRCAT((undefined2 *)CONCAT22(pcVar13,puVar11),(void *)CONCAT22(pcVar10,pvVar6));
    LSTRCAT(&DAT_10e8_37f0,(void *)CONCAT22(pcVar5,(void *)(iVar8 + 0x1a)));
    LSTRCAT(&DAT_10e8_37f0,s__avi_alias_vfw_10e8_1a75);
    FUN_10a8_0000();
    MCISENDSTRING(&DAT_10e8_37f0,(void *)0x0,0,0);
    _WSPRINTF(&DAT_10e8_37f0,s_window_vfw_handle__d_10e8_1a84);
    uVar9 = 0;
    MCISENDSTRING(&DAT_10e8_37f0,(void *)0x0,0,0);
    if ((*(byte *)(iVar8 + 0x14) & 1) != 0) {
      _WSPRINTF(&DAT_10e8_37f0,s_setvideo_vfw_palette_handle_to___10e8_1a99);
      MCISENDSTRING(&DAT_10e8_37f0,(void *)0x0,0,0);
    }
    puVar12 = local_60;
    pcVar10 = (char *)s_Options_10e8_10e2 + 6;
    iVar2 = unaff_SS;
    LSTRCPY((undefined1 *)CONCAT22(unaff_SS,puVar12),s_window_10e8_1abb);
    if ((iVar2 == 0) &&
       ((((*(int *)(iVar8 + 0x27) != 0 || (*(int *)(iVar8 + 0x29) != 0)) ||
         (*(int *)(iVar8 + 0x2b) != 0x140)) ||
        ((*(int *)(iVar8 + 0x2d) != 0xf0 || (puVar12 == (undefined1 *)0x0)))))) {
      pcStackY_1a = (char *)0x13a8;
      pcStackY_1c = (char *)s_midifile_10e8_27eb + 7;
      _WSPRINTF(&DAT_10e8_37f0,s_put_vfw_destination_at__d__d__d___10e8_1acd);
    }
    else {
      FUN_1058_0ca4();
      if (DAT_10e8_0066 == 0x2e4) {
        LSTRCPY((undefined1 *)CONCAT22(unaff_SS,local_60),s_fullscreen_10e8_1ac2);
      }
    }
    MCISENDSTRING(&DAT_10e8_37f0,(void *)0x0,0,0);
    if (DAT_10e8_0066 != 0x2e6) {
      pcStackY_1a = (char *)s_stretch_c_10e8_2848;
      PATBLT((ushort)param_1,0,0,0x280,0x1e0,0x42);
    }
    _WSPRINTF(&DAT_10e8_37f0,s_play_vfw__s_from_0_wait_10e8_1af1);
    MCISENDSTRING(&DAT_10e8_37f0,(void *)0x0,0,0);
    MCISENDSTRING(s_stop_vfw_wait_10e8_1b09,(void *)0x0,0,0);
    MCISENDSTRING(s_close_vfw_wait_10e8_1b17,(void *)0x0,0,0);
    FUN_10a8_0000();
    pcVar5 = (char *)s_stretch_c_10e8_28a1 + 5;
    SETCURSOR(a0);
  }
  DAT_10e8_3cae = *(int *)(iVar8 + 4);
  DAT_10e8_3cb0 = *(int *)(iVar8 + 6);
  if (*(int *)(iVar8 + 0xc) < 8) {
    DAT_10e8_6112 = *(undefined2 *)(iVar8 + 0xc);
  }
  else {
    DAT_10e8_6112 = 0;
  }
  DAT_10e8_097c = -1;
  DAT_10e8_8e3c = DAT_10e8_6112;
  DAT_10e8_9b98 = DAT_10e8_3cb0;
  DAT_10e8_9b9a = DAT_10e8_3cae;
  FUN_1010_07c6();
  if (DAT_10e8_097c < 0) {
    DAT_10e8_0086 = DAT_10e8_3cae;
    DAT_10e8_0088 = DAT_10e8_3cb0;
  }
  else {
    DAT_10e8_0086 = (DAT_10e8_3cb2 % DAT_10e8_16e4) * 10 + -0x4b;
    uVar9 = (undefined2)((ulong)_DAT_10e8_6892 >> 0x10);
    iVar2 = *(int *)((int)_DAT_10e8_6892 + 0xf4c);
    DAT_10e8_0088 =
         iVar2 / 2 + iVar2 * (DAT_10e8_3cb2 / DAT_10e8_16e4) + *(int *)((int)_DAT_10e8_6892 + 0xf4a)
    ;
  }
  FUN_1060_092e();
  iVar2 = iVar8 + 0x79;
  FUN_1060_0a0a();
  FUN_1060_0a0a();
  FUN_1060_0a0a();
  if ((*(byte *)(iVar8 + 0x14) & 2) != 0) {
    GETSYSTEMPALETTEENTRIES((ushort)param_1,0,0x100,&DAT_10e8_6c9e);
    iVar2 = 100;
    iVar8 = 400;
    do {
      if ((CONCAT11(((undefined1 *)&DAT_10e8_6c9f)[iVar8],((undefined1 *)&DAT_10e8_6ca0)[iVar8]) !=
           *(int *)((undefined1 *)&DAT_10e8_9798 + iVar8)) ||
         ((uint)(byte)((undefined1 *)&DAT_10e8_6c9e)[iVar8] !=
          *(uint *)((undefined1 *)&DAT_10e8_979a + iVar8))) break;
      iVar8 = iVar8 + 4;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0xf0);
    if (iVar2 < 0xf0) {
      FUN_1080_02f0();
      pcStackY_1a = (char *)0x2a28;
      PATBLT((ushort)param_1,0,0,0x280,0x1e0,0x42);
    }
    unaff_DI = FUN_1080_049a();
  }
LAB_1048_2a3a:
  SELECTPALETTE((ushort)param_1,unaff_DI,0);
  return;
}


