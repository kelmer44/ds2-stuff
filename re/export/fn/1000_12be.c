// FUN_1000_12be at 1000:12be

void __cdecl16far
FUN_1000_12be(ushort param_1,uint param_2,undefined2 param_3,undefined2 param_4,int param_5)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort unaff_SI;
  undefined2 unaff_SS;
  void *a3;
  
  FUN_10d0_029e();
  iVar3 = DAT_10e8_036e;
  if (((((param_5 != 0) && (param_2 != 0x25)) && (param_2 != 0x27)) &&
      (((param_2 != 0x26 && (param_2 != 0x28)) &&
       ((param_2 != 0x62 && ((param_2 != 100 && (param_2 != 0x66)))))))) &&
     ((param_2 != 0x68 &&
      ((((param_2 != 0x49 && (param_2 != 0x4a)) && (param_2 != 0x4b)) && (param_2 != 0x4c)))))) {
    return;
  }
  if (param_2 == 0x4d) {
    FUN_1000_1d1a();
    return;
  }
  bVar1 = (byte)param_2;
  if (param_2 < 0x4e) {
    if (param_2 != 0x4c) {
      if (0x4c < param_2) {
        return;
      }
      if (bVar1 != 0x27) {
        if (bVar1 < 0x28) {
          if (bVar1 == 0xd) {
            iVar3 = FUN_1060_0b00();
            DAT_10e8_006e = (uint)(iVar3 == 0);
            uVar4 = GETDC(param_1);
            uVar6 = param_1;
            if (DAT_10e8_008a < 1) {
              DAT_10e8_9b9c = DAT_10e8_3c54;
              DAT_10e8_9b9e = DAT_10e8_3eb0;
              SCREENTOCLIENT(param_1,&DAT_10e8_9b9c);
              POSTMESSAGE(param_1,0x202,0,
                          CONCAT22(DAT_10e8_9b9e | DAT_10e8_9b9c >> 0xf,DAT_10e8_9b9c));
              param_1 = unaff_SI;
            }
            else {
              if (5 < DAT_10e8_008a) {
                DAT_10e8_279e = 0;
                DAT_10e8_279c = 0;
                DAT_10e8_008a = 0;
                iVar3 = FUN_1060_0b00();
                if (iVar3 == 0) {
                  FUN_1078_1238(0x653e,(char *)s_Options_10e8_10e2 + 6,uVar4,DAT_10e8_6892 + 0x13,
                                DAT_10e8_6894,0);
                }
                else {
                  PATBLT(uVar4,0,0,0x280,0x1e0,0x42);
                  FUN_1060_0b26();
                  uVar5 = FUN_1080_049a();
                  FUN_1038_01e4();
                  SELECTPALETTE(uVar4,uVar5,0);
                }
                FUN_10a8_0042();
                POSTMESSAGE(param_1,0x200,0,0);
              }
              DAT_10e8_006e = 0;
              param_1 = unaff_SI;
            }
            goto LAB_1000_1731;
          }
          if (bVar1 == 0x1b) {
            FUN_1010_0230();
            return;
          }
          if (bVar1 == 0x20) {
            DAT_10e8_770e = (DAT_10e8_770e + 1) % 3;
            return;
          }
          if (bVar1 != 0x25) {
            cVar2 = bVar1 - 0x26;
            goto LAB_1000_1359;
          }
        }
        else {
          if (bVar1 == 0x44) {
            FUN_1000_1c36();
            return;
          }
          if (bVar1 < 0x45) {
            if (bVar1 != 0x28) {
              if (bVar1 != 0x41) {
                return;
              }
              if (DAT_10e8_610e != 0) {
                return;
              }
              a3 = MAKEPROCINSTANCE(ABOUT_DLG_PROC,DAT_10e8_9556);
              DIALOGBOX(DAT_10e8_9556,s_aboutbox_10e8_0c49,param_1,a3);
              FREEPROCINSTANCE(a3);
              return;
            }
            goto LAB_1000_15b0;
          }
          if (bVar1 == 0x49) goto LAB_1000_1582;
          if (bVar1 != 0x4a) {
            cVar2 = bVar1 + 0xb5;
            goto LAB_1000_138c;
          }
        }
LAB_1000_1554:
        DAT_10e8_3c54 = DAT_10e8_3c54 - DAT_10e8_006c;
        if (DAT_10e8_3c54 < 0) {
          DAT_10e8_3c54 = 0;
        }
        goto LAB_1000_1563;
      }
    }
  }
  else {
    if (param_2 == 0x71) {
      if (DAT_10e8_610e != 0) {
        return;
      }
      DAT_10e8_036e = 1;
      FUN_1010_0336();
      DAT_10e8_036e = iVar3;
      return;
    }
    if (0x71 < param_2) {
      if (param_2 == 0x77) {
        if (DAT_10e8_0368 != 0) {
          return;
        }
        if (DAT_10e8_2774 != 0) {
          return;
        }
        if (DAT_10e8_610e != 0) {
          return;
        }
        iVar3 = FUN_1060_0b00();
        if (iVar3 != 0) {
          return;
        }
        iVar3 = FUN_1060_0b00();
        if (iVar3 != 0) {
          return;
        }
        iVar3 = FUN_1060_0b00();
        if (iVar3 != 0) {
          return;
        }
        iVar3 = FUN_1060_0b00();
        if (iVar3 != 4) {
          return;
        }
        if (DAT_10e8_008e != 0 || DAT_10e8_008c != 0) {
          return;
        }
        FUN_1018_0566();
        return;
      }
      if (param_2 < 0x78) {
        if (param_2 == 0x75) {
          if (DAT_10e8_610e != 0) {
            return;
          }
          FUN_1010_011e();
          return;
        }
        if (param_2 != 0x76) {
          return;
        }
        if (DAT_10e8_610e != 0) {
          return;
        }
        FUN_1018_01fa();
        return;
      }
      if (param_2 == 0x90) {
        DEFWINDOWPROC(param_1,0x100,0x90,CONCAT22(param_4,param_3));
        return;
      }
      if (0x90 < param_2) {
        return;
      }
      if (bVar1 != 0x78) {
        if (bVar1 != 0x7a) {
          return;
        }
        if (DAT_10e8_0046 != 5) {
          if (DAT_10e8_0046 != 0xf) {
            DAT_10e8_0046 = 0xf;
            return;
          }
          DAT_10e8_0046 = 5;
          return;
        }
        DAT_10e8_0046 = 0x18;
        return;
      }
      uVar6 = GETUPDATERECT(param_1,(void *)0x0,0);
      if (uVar6 != 0) {
        return;
      }
      if (DAT_10e8_610e != 0) {
        return;
      }
      uVar6 = GETDC(param_1);
      if (DAT_10e8_036e == 0) {
        DAT_10e8_0058 = 1;
        DAT_10e8_036e = 1;
        WaveMixActivate_inferred(DAT_10e8_004a,0);
        MCISENDSTRING(s_stop_midifile_10e8_0c83,(void *)0x0,0,0);
        MCISENDSTRING(s_close_midifile_10e8_0c91,(void *)0x0,0,0);
        *(undefined2 *)0x2762 = 0;
        FUN_1000_19f2();
        *(undefined2 *)0x2762 = 1;
      }
      else if (DAT_10e8_0058 == 1) {
        INVALIDATERECT(param_1,(void *)0x0,0);
        PATBLT(uVar6,0,0,0x280,0x1e0,0x42);
        uVar4 = uVar6;
        uVar5 = FUN_1080_049a();
        SELECTPALETTE(uVar4,uVar5,0);
        LSTRCPY(&DAT_10e8_37f0,&DAT_10e0_262a);
        *(undefined1 *)0x262a = 0;
        FUN_10a8_0a1e();
        WaveMixActivate_inferred(DAT_10e8_004a,1);
        DAT_10e8_0058 = 0;
        DAT_10e8_036e = 0;
      }
LAB_1000_1731:
      RELEASEDC(param_1,uVar6);
      return;
    }
    if (param_2 == 0x70) {
      if (DAT_10e8_610e != 0) {
        return;
      }
      SETWINDOWPOS(param_1,0xfffe,0,0,0,0,3);
      WINHELP(param_1,(void *)0x10e80c52,3,0);
      DAT_10e8_0370 = 1;
      return;
    }
    if (0x70 < param_2) {
      return;
    }
    if (bVar1 == 100) goto LAB_1000_1554;
    if (bVar1 < 0x65) {
      if (bVar1 == 0x50) {
        uVar6 = GETUPDATERECT(param_1,(void *)0x0,0);
        if (uVar6 != 0) {
          return;
        }
        if (DAT_10e8_610e != 0) {
          return;
        }
        if (DAT_10e8_0058 != 0) {
          return;
        }
        if (DAT_10e8_036e != 0) {
          uVar6 = GETDC(param_1);
          if (DAT_10e8_8724 < 9) {
            FUN_1080_041a();
          }
          RELEASEDC(param_1,uVar6);
          LSTRCPY(&DAT_10e8_37f0,&DAT_10e0_262a);
          *(undefined1 *)0x262a = 0;
          FUN_10a8_0a1e();
          WaveMixActivate_inferred(DAT_10e8_004a,1);
          INVALIDATERECT(param_1,(void *)0x0,0);
          DAT_10e8_036e = 0;
          return;
        }
        DAT_10e8_036e = 1;
        WaveMixActivate_inferred(DAT_10e8_004a,0);
        MCISENDSTRING(s_stop_midifile_10e8_0c26,(void *)0x0,0,0);
        MCISENDSTRING(s_close_midifile_10e8_0c34,(void *)0x0,0,0);
        uVar6 = GETDC(param_1);
        SETBKMODE(uVar6,1);
        SETTEXTCOLOR(uVar6,0xffffff);
        if (DAT_10e8_8724 < 9) {
          FUN_1080_038a();
        }
        uVar4 = CREATEFONT(0xa0,0x20,0,0,200,0,0,0,1,4,0,0,0,s_Arial_10e8_0c43);
        uVar4 = SELECTOBJECT(uVar4,uVar4);
        iVar3 = 0x70;
        DAT_10e8_0c22 =
             DRAWTEXT(uVar6,s_Pausa_Juego_10e8_0070,0xb,
                      (undefined1 *)CONCAT22(unaff_SS,&stack0xffee),0x400);
        TEXTOUT(uVar6,0x280 - iVar3 >> 1,0x1e0 - DAT_10e8_0c22 >> 1,s_Pausa_Juego_10e8_0070,0xb);
        uVar4 = SELECTOBJECT(uVar6,uVar4);
        DELETEOBJECT(uVar4);
        goto LAB_1000_1731;
      }
      cVar2 = bVar1 + 0x9e;
LAB_1000_138c:
      if (cVar2 != '\0') {
        return;
      }
LAB_1000_15b0:
      DAT_10e8_3eb0 = DAT_10e8_3eb0 + DAT_10e8_006c;
      if (0x1e0 < (int)DAT_10e8_3eb0) {
        DAT_10e8_3eb0 = 0x1e0;
      }
      goto LAB_1000_1563;
    }
    if (bVar1 != 0x66) {
      cVar2 = bVar1 + 0x98;
LAB_1000_1359:
      if (cVar2 != '\0') {
        return;
      }
LAB_1000_1582:
      DAT_10e8_3eb0 = DAT_10e8_3eb0 - DAT_10e8_006c;
      if ((int)DAT_10e8_3eb0 < 1) {
        DAT_10e8_3eb0 = 0;
      }
      goto LAB_1000_1563;
    }
  }
  DAT_10e8_3c54 = DAT_10e8_3c54 + DAT_10e8_006c;
  if (0x280 < DAT_10e8_3c54) {
    DAT_10e8_3c54 = 0x280;
  }
LAB_1000_1563:
  SETCURSORPOS(DAT_10e8_3c54,DAT_10e8_3eb0);
  if (DAT_10e8_006c < 10) {
    DAT_10e8_006c = DAT_10e8_006c + 2;
  }
  return;
}


