// LOADGAMEPROC at 1018:0000

undefined2 __stdcall16far
LOADGAMEPROC(undefined2 param_1,undefined2 param_2,uint param_3,uint param_4,ushort param_5)

{
  int iVar1;
  ushort uVar2;
  undefined1 *puVar3;
  undefined2 unaff_SS;
  undefined1 local_224 [500];
  undefined1 local_30 [20];
  undefined1 local_1c [4];
  undefined2 uStackY_18;
  char *pcStackY_16;
  int iVar4;
  int *piVar5;
  
                    /* Segment:    4
                       Offset:     00004b60
                       Length:     0c46
                       Min Alloc:  0c46
                       Flags:      0d50
                           Code
                           Moveable
                           Preload
                           Impure (Non-shareable)
                        */
  FUN_10d0_029e();
  if (param_4 == 0x110) {
    iVar4 = 0;
    puVar3 = local_224;
    piVar5 = (int *)&DAT_10e8_2d6e;
    do {
      uVar2 = GETDLGITEM(param_5,iVar4 + 0x1f5);
      pcStackY_16 = (char *)0x6f;
      _WSPRINTF((undefined1 *)CONCAT22(unaff_SS,local_1c),(void *)0x10e81110);
      pcStackY_16 = (char *)0x84;
      _WSPRINTF((undefined1 *)CONCAT22(unaff_SS,local_30),s_Saved_02d_10e8_111a);
      iVar1 = FUN_1030_006a();
      *piVar5 = iVar1;
      if (*piVar5 == 0) {
        LSTRCPY((undefined1 *)CONCAT22(unaff_SS,puVar3),s_____vacio_____10e8_1144);
      }
      else {
        pcStackY_16 = (char *)s_PlayMidi_10e8_102c + 4;
        uStackY_18 = 0xb8;
        FUN_1030_0094();
      }
      SETWINDOWTEXT(uVar2,(undefined1 *)CONCAT22(unaff_SS,puVar3));
      puVar3 = puVar3 + 0x32;
      piVar5 = piVar5 + 1;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 10);
    DAT_10e8_110e = 1;
    pcStackY_16 = (char *)0xf7;
    uVar2 = GETDLGITEM(param_5,2);
    SETFOCUS(uVar2);
  }
  else if (param_4 < 0x111) {
    if ((0x45 < param_4) && (param_4 - 0x46 < 2)) {
LAB_1018_01f0:
      return 1;
    }
  }
  else {
    if (param_4 == 0x111) {
      if (((500 < param_3) && (param_3 < 0x1ff)) && (DAT_10e8_110e != 0)) {
        if (*(int *)((char *)s_Expression__s__File__s__Line__d_10e8_2980 + 4 + param_3 * 2) == 0) {
          CHECKRADIOBUTTON(param_5,0x259,0x262,param_3 + 100);
        }
        else {
          DAT_10e8_110e = 0;
          CHECKRADIOBUTTON(param_5,0x259,0x262,param_3 + 100);
          DAT_10e8_110e = 1;
        }
      }
      if (param_3 == 1) {
        iVar4 = 0;
        do {
          uVar2 = ISDLGBUTTONCHECKED(param_5,iVar4 + 0x259);
          if (uVar2 != 0) {
            if (((undefined2 *)&DAT_10e8_2d6e)[iVar4] != 0) break;
            pcStackY_16 = (char *)0x13a8;
            uStackY_18 = 0x18c;
            MESSAGEBOX(param_5,(void *)0x10e81160,s_Loading_error_10e8_1152,0x2010);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < 10);
        iVar4 = iVar4 + 0x259;
      }
      else {
        if (param_3 != 2) {
          return 0;
        }
        iVar4 = 0;
      }
      ENDDIALOG(param_5,iVar4);
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
        goto LAB_1018_01f0;
      }
    }
  }
  return 0;
}


