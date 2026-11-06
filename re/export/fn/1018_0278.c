// SAVEGAMEPROC at 1018:0278

undefined2 __stdcall16far
SAVEGAMEPROC(undefined2 param_1,undefined2 param_2,uint param_3,uint param_4,ushort param_5)

{
  int iVar1;
  ushort uVar2;
  short sVar3;
  void *pvVar4;
  int iVar5;
  undefined2 unaff_SS;
  undefined1 local_30 [18];
  undefined2 uStackY_1e;
  char *local_1c;
  int *piVar6;
  
  FUN_10d0_029e();
  if (param_4 == 0x110) {
    iVar5 = 0;
    pvVar4 = (void *)0x2d82;
    piVar6 = (int *)&DAT_10e8_2f76;
    do {
      uVar2 = GETDLGITEM(param_5,iVar5 + 0x1f5);
      _WSPRINTF((char **)CONCAT22(unaff_SS,&local_1c),(void *)0x10e81190);
      _WSPRINTF((undefined1 *)CONCAT22(unaff_SS,local_30),s_Saved_02d_10e8_119a);
      iVar1 = FUN_1030_006a();
      *piVar6 = iVar1;
      if (*piVar6 == 0) {
        LSTRCPY((void *)CONCAT22((char *)s_Options_10e8_10e2 + 6,pvVar4),s_____vacio_____10e8_11c4);
      }
      else {
        FUN_1030_0094();
      }
      SETWINDOWTEXT(uVar2,(void *)CONCAT22((char *)s_Options_10e8_10e2 + 6,pvVar4));
      pvVar4 = (void *)((int)pvVar4 + 0x32);
      piVar6 = piVar6 + 1;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 10);
    uVar2 = GETDLGITEM(param_5,1);
    SETFOCUS(uVar2);
    DAT_10e8_118e = 1;
  }
  else if (param_4 < 0x111) {
    if ((0x45 < param_4) && (param_4 - 0x46 < 2)) {
LAB_1018_055c:
      return 1;
    }
  }
  else {
    if (param_4 == 0x111) {
      if (((500 < param_3) && (param_3 < 0x1ff)) && (DAT_10e8_118e != 0)) {
        iVar5 = 0;
        DAT_10e8_118e = 0;
        do {
          GETDLGITEM(param_5,iVar5 + 0x1f5);
          if (param_3 - iVar5 == 0x1f5) {
            CHECKRADIOBUTTON(param_5,0x259,0x262,iVar5 + 0x259);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < 10);
        DAT_10e8_118e = 1;
      }
      if (((600 < param_3) && (param_3 < 0x263)) && (DAT_10e8_118e != 0)) {
        iVar5 = 0;
        DAT_10e8_118e = 0;
        do {
          uVar2 = GETDLGITEM(param_5,iVar5 + 0x1f5);
          if (param_3 - iVar5 == 0x259) {
            POSTMESSAGE(uVar2,0x401,0,-0x10000);
            SETFOCUS(uVar2);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < 10);
        DAT_10e8_118e = 1;
      }
      if (param_3 == 1) {
        iVar5 = 0;
        do {
          DAT_10e8_118e = 0;
          uVar2 = ISDLGBUTTONCHECKED(param_5,iVar5 + 0x259);
          if (uVar2 != 0) {
            if (((undefined2 *)&DAT_10e8_2f76)[iVar5] == 0) {
              sVar3 = 6;
            }
            else {
              sVar3 = MESSAGEBOX(param_5,(void *)0x10e811eb,s_Sobreescribiendo_Partida_10e8_11d2,
                                 0x2014);
            }
            if (sVar3 != 6) {
              return 1;
            }
            uVar2 = GETDLGITEM(param_5,iVar5 + 0x1f5);
            GETWINDOWTEXT(uVar2,(void *)CONCAT22((char *)s_Options_10e8_10e2 + 6,
                                                 (void *)(iVar5 * 0x32 + 0x2d82)),0x20);
            local_1c = (char *)0x13a8;
            uStackY_1e = 0x4c2;
            _WSPRINTF((char **)CONCAT22(unaff_SS,&local_1c),(void *)0x10e81216);
            FUN_1030_003e();
            local_1c = (char *)s_PlayMidi_10e8_102c + 4;
            uStackY_1e = 0x4e9;
            _WSPRINTF((undefined1 *)CONCAT22(unaff_SS,local_30),s_Saved_02d_10e8_1229);
            FUN_1030_0000();
            FUN_1018_09ce();
            break;
          }
          DAT_10e8_118e = 1;
          iVar5 = iVar5 + 1;
        } while (iVar5 < 10);
        iVar5 = iVar5 + 0x259;
      }
      else {
        if (param_3 != 2) {
          return 0;
        }
        iVar5 = 1;
      }
      ENDDIALOG(param_5,iVar5);
      return 1;
    }
    if (param_4 == 0x112) {
      switch((param_3 & 0xfff0) + 0x1000 >> 3) {
      case 0:
      case 2:
      case 4:
      case 8:
      case 10:
      case 0xc:
      case 0x20:
      case 0x24:
      case 0x26:
      case 0x28:
        goto LAB_1018_055c;
      }
    }
  }
  return 0;
}


