// FUN_1058_01e0 at 1058:01e0

undefined2 __cdecl16far
FUN_1058_01e0(ushort param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  void *pvVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  long lVar9;
  undefined2 *puVar10;
  char *pcVar11;
  
  FUN_10d0_029e();
  DAT_10e8_008e = 0;
  DAT_10e8_008c = 0;
  DAT_10e8_0082 = DAT_10e8_5e10;
  DAT_10e8_0084 = DAT_10e8_5e12;
  uVar7 = (undefined2)param_2;
  uVar8 = (undefined2)((ulong)param_2 >> 0x10);
  if ((((*(int *)(param_3 + 4) == 0) && (*(int *)(param_3 + 6) == 0)) &&
      (*(int *)(param_3 + 10) == 8)) ||
     (((uVar1 = DAT_10e8_3cae - *(int *)(param_3 + 4), uVar6 = (int)uVar1 >> 0xf,
       (int)((uVar1 ^ uVar6) - uVar6) < 0xb &&
       (uVar1 = DAT_10e8_3cb0 - *(int *)(param_3 + 6), uVar6 = (int)uVar1 >> 0xf,
       (int)((uVar1 ^ uVar6) - uVar6) < 0xb)) && (*(int *)(param_3 + 10) == DAT_10e8_8e3c)))) {
    if (*(char *)(param_3 + 0x38) != '\0') {
      FUN_10a8_0a1e();
    }
    if (*(char *)(param_3 + 0x6e) != '\0') {
      FUN_1068_2a72();
      FUN_1068_15b8();
      FUN_1068_2d64();
    }
    if (*(char *)(param_3 + 0x2b) != '\0') {
      DESTROYCURSOR(DAT_10e8_8722);
      DAT_10e8_8722 = LOADCURSOR(DAT_10e8_9556,(void *)CONCAT22(param_4,(void *)(param_3 + 0x2b)));
      DAT_10e8_9790 = DAT_10e8_8722;
      if (DAT_10e8_770e == 1) {
        SETCURSOR(DAT_10e8_8722);
      }
    }
    if ((DAT_10e8_0050 != 0) &&
       ((*(char *)(param_3 + 0x14) == 't' || (*(char *)(param_3 + 0x14) == 'T')))) {
      *(undefined1 *)(param_3 + 0x14) = 0;
    }
    if ((DAT_10e8_0052 != 0) && (iVar5 = FUN_10d0_0604(), iVar5 == 0)) {
      *(undefined1 *)(param_3 + 0x14) = 0;
    }
    if ((DAT_10e8_007c == 0x5dd) && (DAT_10e8_005a == 1)) {
      *(undefined1 *)(param_3 + 0x14) = 0;
    }
    if (*(char *)(param_3 + 0x14) != '\0') {
      FUN_10a8_0000();
      FUN_10a8_03e2();
      LSTRCPY(&DAT_10e8_37f0,s_OPEN_avivideo__10e8_1bd5);
      pcVar11 = (char *)s_Options_10e8_10e2 + 6;
      puVar10 = (undefined2 *)&DAT_10e8_37f0;
      iVar5 = param_4;
      pvVar2 = (void *)FUN_1028_0b48();
      LSTRCAT((undefined2 *)CONCAT22(pcVar11,puVar10),(void *)CONCAT22(iVar5,pvVar2));
      LSTRCAT(&DAT_10e8_37f0,(void *)CONCAT22(param_4,(void *)(param_3 + 0x14)));
      LSTRCAT(&DAT_10e8_37f0,s__avi_nostatic_alias_vfw_10e8_1be4);
      lVar9 = MCISENDSTRING(&DAT_10e8_37f0,(void *)0x10e0263e,0x100,0);
      if (lVar9 == 0) {
        _WSPRINTF(&DAT_10e8_37f0,s_window_vfw_handle__d_10e8_1c12);
        MCISENDSTRING(&DAT_10e8_37f0,(void *)0x10e0263e,0x100,0);
        uVar3 = GETDC(param_1);
        if (*(int *)(param_3 + 0x29) == 0) {
          DAT_10e8_036a = 0;
          uVar4 = FUN_1080_049a();
          _WSPRINTF(&DAT_10e8_37f0,s_setvideo_vfw_palette_handle_to___10e8_1c27);
          SELECTPALETTE(uVar3,uVar4,0);
        }
        else {
          FUN_1028_014e();
          PATBLT(uVar3,0,0,0x280,0x1e0,0x42);
          DAT_10e8_036a = 1;
        }
        RELEASEDC(param_1,uVar3);
        MCISENDSTRING(&DAT_10e8_37f0,(void *)0x10e0263e,0x100,0);
        SETCURSOR(0);
        if ((((*(int *)(param_3 + 0x25) == 0x140) && (*(int *)(param_3 + 0x27) == 0xf0)) &&
            (*(int *)(param_3 + 0x21) == 0)) && (*(int *)(param_3 + 0x23) == 0)) {
          FUN_1058_0ca4();
          MCISENDSTRING(&DAT_10e8_37f0,(void *)0x10e0263e,0x100,0);
          if (DAT_10e8_0066 == 0x2e4) {
            pcVar11 = (char *)s_play_vfw_fullscreen_from_0_notif_10e8_1c49;
          }
          else {
            pcVar11 = (char *)s_play_vfw_from_0_notify_10e8_1ba8;
          }
          MCISENDSTRING((char *)CONCAT22((char *)s_Options_10e8_10e2 + 6,pcVar11),(void *)0x10e0263e
                        ,0x100,0);
          DAT_10e8_0368 = 1;
        }
        else {
          _WSPRINTF(&DAT_10e8_37f0,s_put_vfw_destination_at__d__d__d___10e8_1c6b);
          MCISENDSTRING(&DAT_10e8_37f0,(void *)0x10e0263e,0x100,0);
          if (((*(int *)(param_3 + 0x25) == 0x280) && (*(int *)(param_3 + 0x27) == 0x1e0)) &&
             ((*(int *)(param_3 + 0x21) == 0 && (*(int *)(param_3 + 0x23) == 0)))) {
            MCISENDSTRING(s_play_vfw_from_0_notify_10e8_1ba8,(void *)0x10e0263e,0x100,0);
            DAT_10e8_0368 = 1;
            uVar3 = 0;
          }
          else {
            MCISENDSTRING(s_play_vfw_from_0_wait_10e8_1b92,(void *)0x10e0263e,0x100,0);
            MCISENDSTRING(s_stop_vfw_wait_10e8_1c8f,(void *)0x10e0263e,0x100,0);
            MCISENDSTRING(s_close_vfw_wait_10e8_1c9d,(void *)0x10e0263e,0x100,0);
            FUN_10a8_0000();
            if (DAT_10e8_036a != 0) {
              FUN_1080_02f0();
              PATBLT(uVar3,0,0,0x280,0x1e0,0x42);
              FUN_1080_049a();
            }
            uVar3 = ((undefined2 *)&DAT_10e8_978e)[DAT_10e8_770e];
          }
          SETCURSOR(uVar3);
        }
      }
      else {
        MESSAGEBOX(param_1,s_Error_loading_AVI_10e8_1c00,(void *)0x10e81bfc,0);
        *(undefined1 *)(param_3 + 0x14) = 0;
      }
    }
    if (*(char *)(param_3 + 0x45) == '\0') {
      if (*(char *)(param_3 + 0x52) != '\0') {
        FUN_10a8_06fa();
      }
      if (*(char *)(param_3 + 0x5f) != '\0') {
        if (*(int *)(param_3 + 0x12) == 0 && *(int *)(param_3 + 0x10) == 0) {
          FUN_10a8_06fa();
        }
        else {
          FUN_10a8_0638();
        }
      }
    }
    else {
      FUN_1080_0890();
      uVar3 = GETDC(param_1);
      BITBLT(uVar3,0,0,0x280,0x1e0,uVar3,0,0,0x42);
      uVar4 = FUN_1080_049a();
      FUN_1080_0be0();
      FUN_1080_0cc8();
      FUN_1080_07a0();
      SELECTPALETTE(uVar3,uVar4,0);
      RELEASEDC(param_1,uVar3);
      if (*(char *)(param_3 + 0x52) != '\0') {
        FUN_10a8_06fa();
      }
      if (*(char *)(param_3 + 0x5f) != '\0') {
        if (*(int *)(param_3 + 0x12) == 0 && *(int *)(param_3 + 0x10) == 0) {
          FUN_10a8_06fa();
        }
        else {
          FUN_10a8_0638();
        }
      }
      FUN_10a8_0042();
      INVALIDATERECT(param_1,(void *)0x0,0);
      FUN_1060_0b26();
    }
    FUN_1060_092e();
    if ((param_5 == 2) || (*(int *)(param_3 + 8) == 0)) {
      DAT_10e8_008c = *(int *)(param_3 + 0x8f);
      DAT_10e8_008e = *(int *)(param_3 + 0x91);
      DAT_10e8_0094 = param_5;
      DAT_10e8_0090 = uVar7;
      DAT_10e8_0092 = uVar8;
      if ((param_5 == 1) &&
         ((DAT_10e8_008e == 0 && DAT_10e8_008c == 0 && (*(char *)(param_3 + 0x2b) == '\0')))) {
        FUN_1008_0e16();
        DAT_10e8_8722 = LOADCURSOR(DAT_10e8_9556,s_cUseIt_10e8_1cc2);
        FUN_1008_0000();
      }
    }
    else {
      FUN_1060_0b26();
    }
  }
  else {
    iVar5 = FUN_1060_0b00();
    if (iVar5 != 0) {
      DAT_10e8_9b9a = DAT_10e8_3cae;
      DAT_10e8_9b98 = DAT_10e8_3cb0;
      DAT_10e8_097c = 0xffff;
      DAT_10e8_6112 = *(undefined2 *)(param_3 + 10);
      FUN_1010_07c6();
      if (param_5 != 2) {
        FUN_1060_0b26();
      }
      DAT_10e8_008c = param_3;
      DAT_10e8_008e = param_4;
      DAT_10e8_0094 = param_5;
      DAT_10e8_0086 = *(undefined2 *)(param_3 + 4);
      DAT_10e8_0088 = *(undefined2 *)(param_3 + 6);
      DAT_10e8_0090 = uVar7;
      DAT_10e8_0092 = uVar8;
    }
  }
  return 1;
}


