// WINPROC at 1000:0236

/* WARNING: Removing unreachable block (ram,0x10000a74) */
/* WARNING: Removing unreachable block (ram,0x10000b98) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong __stdcall16far
WINPROC(undefined2 param_1,uint param_2,char *param_3,uint param_4,ushort param_5)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  ushort uVar4;
  int iVar5;
  void *pvVar6;
  uint uVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  ulong uVar9;
  void *pvVar10;
  long lVar11;
  ushort local_2a [4];
  undefined2 uStackY_22;
  char *pcStackY_20;
  undefined2 uStackY_1e;
  char *pcStackY_1c;
  ushort uStackY_1a;
  
  FUN_10d0_029e();
  iVar3 = DAT_10e8_036e;
  lVar11 = CONCAT22(DAT_10e8_0adc,DAT_10e8_0ada);
  if (param_4 == 0x111) {
    DAT_10e8_0ad2 = param_3;
    if (param_3 == (char *)0x68) {
      FUN_1010_0230();
    }
    else if ((int)param_3 < 0x69) {
      if (param_3 == (char *)0x64) {
        FUN_1010_011e();
      }
      else if (param_3 == (char *)0x65) {
        FUN_1018_01fa();
      }
      else {
        DAT_10e8_036e = iVar3;
        lVar11 = CONCAT22(DAT_10e8_0adc,DAT_10e8_0ada);
        if (param_3 != (char *)0x66) goto switchD_1000_0a83_caseD_0;
        FUN_1018_0566();
      }
    }
    else {
      if (param_3 != (char *)0x69) {
        if (param_3 == (char *)0x12c) {
          uStackY_1a = 0xa07;
          SETWINDOWPOS(param_5,0xfffe,0,0,0,0,3);
          WINHELP(param_5,(void *)0x10e80c01,3,0);
          DAT_10e8_0370 = 1;
          lVar11 = CONCAT22(DAT_10e8_0adc,DAT_10e8_0ada);
        }
        else {
          DAT_10e8_036e = iVar3;
          lVar11 = CONCAT22(DAT_10e8_0adc,DAT_10e8_0ada);
          if (param_3 == (char *)0x12d) {
            DAT_10e8_036e = 1;
            pvVar10 = MAKEPROCINSTANCE(ABOUT_DLG_PROC,DAT_10e8_9556);
            DIALOGBOX(DAT_10e8_9556,s_aboutbox_10e8_0c0a,param_5,pvVar10);
            FREEPROCINSTANCE(pvVar10);
            DAT_10e8_036e = iVar3;
            lVar11 = CONCAT22(DAT_10e8_0adc,DAT_10e8_0ada);
          }
        }
        goto switchD_1000_0a83_caseD_0;
      }
      FUN_1010_0336();
    }
    lVar11 = CONCAT22(DAT_10e8_0adc,DAT_10e8_0ada);
switchD_1000_0a83_caseD_0:
    uVar7 = 0;
  }
  else {
    if (0x111 < param_4) {
      if (param_4 == 0x202) {
        DAT_10e8_036e = iVar3;
        lVar11 = CONCAT22(DAT_10e8_0adc,DAT_10e8_0ada);
        if (DAT_10e8_036e != 1) {
          if (DAT_10e8_0368 == 0) {
            if ((DAT_10e8_007c == 2) &&
               (param_3 != (char *)s_put_vfw_destination_at__d__d__d___10e8_1acd + 0xd)) {
              if ((0x95 < DAT_10e8_3c54) && (DAT_10e8_3c54 < 0x1ea)) {
                if ((DAT_10e8_3eb0 < 0xc6) || (0xfa < DAT_10e8_3eb0)) {
                  if ((DAT_10e8_3eb0 < 0x100) || (0x136 < DAT_10e8_3eb0)) {
                    if ((DAT_10e8_3eb0 < 0x13a) || (0x170 < DAT_10e8_3eb0)) {
                      if ((0x173 < DAT_10e8_3eb0) && (DAT_10e8_3eb0 < 0x1ab)) {
                        FUN_1010_0230();
                      }
                    }
                    else {
                      FUN_1010_0336();
                    }
                  }
                  else {
                    FUN_1018_01fa();
                  }
                }
                else {
                  FUN_1010_011e();
                }
              }
              goto LAB_1000_04b2;
            }
            if ((DAT_10e8_008a < 1) ||
               (param_3 == (char *)s_put_vfw_destination_at__d__d__d___10e8_1acd + 0xd)) {
              if ((((DAT_10e8_008e == 0 && DAT_10e8_008c == 0) &&
                   ((DAT_10e8_0044 != 0 && (DAT_10e8_006e != 0)))) &&
                  (((iVar3 = FUN_1060_0b00(), iVar3 == 0 &&
                    ((((iVar3 = FUN_1060_0b00(), iVar3 == 0 && (DAT_10e8_610e == 0)) &&
                      (iVar3 = FUN_1060_0b00(), iVar3 == 0)) &&
                     (iVar3 = FUN_1060_0b00(), iVar3 == 4)))) ||
                   (param_3 == (char *)s_put_vfw_destination_at__d__d__d___10e8_1acd + 0xd)))) ||
                 (lVar11 = CONCAT22(DAT_10e8_0adc,DAT_10e8_0ada),
                 DAT_10e8_0372 == (char *)s_put_vfw_destination_at__d__d__d___10e8_1acd + 0xd)) {
                if (DAT_10e8_770e == 0) {
                  FUN_1058_0b08();
                }
                else {
                  if (DAT_10e8_770e == 1) {
                    FUN_1058_0ae2();
                    uVar2 = 0x200;
                    goto LAB_1000_0948;
                  }
                  lVar11 = CONCAT22(DAT_10e8_0adc,DAT_10e8_0ada);
                  if (DAT_10e8_770e != 2) goto switchD_1000_0a83_caseD_0;
                  FUN_1058_0abc();
                }
                lVar11 = CONCAT22(DAT_10e8_0adc,DAT_10e8_0ada);
              }
            }
            else {
              uVar2 = GETDC(param_5);
              if (5 < DAT_10e8_008a) {
                DAT_10e8_279e = 0;
                DAT_10e8_279c = 0;
                DAT_10e8_008a = 0;
                iVar3 = FUN_1060_0b00();
                uStackY_1a = uVar2;
                if (iVar3 == 0) {
LAB_1000_0f50:
                  pcStackY_1c = (char *)s_Options_10e8_10e2 + 6;
                  uStackY_1e = 0x653e;
                  pcStackY_20 = (char *)s_ReadSpeed_10e8_105f + 1;
                  uStackY_22 = 0xf82;
                  uVar2 = uStackY_1a;
                  FUN_1078_1238();
                }
                else {
                  FUN_1080_02f0();
                  uStackY_1a = 0xd9b;
                  PATBLT(uVar2,0,0,0x280,0x1e0,0x42);
LAB_1000_0f1e:
                  FUN_1060_0b26();
                  uVar4 = FUN_1080_049a();
                  FUN_1038_01e4();
                  SELECTPALETTE(uVar2,uVar4,0);
                }
                FUN_10a8_0042();
              }
LAB_1000_0f8f:
              DAT_10e8_006e = 0;
              RELEASEDC(param_5,uVar2);
LAB_1000_0f9f:
              SENDMESSAGE(param_5,0x200,0,0);
              lVar11 = CONCAT22(DAT_10e8_0adc,DAT_10e8_0ada);
            }
          }
          else {
            MCISENDSTRING(s_stop_vfw_wait_10e8_0bb6,(void *)0x0,0,0);
            lVar11 = CONCAT22(DAT_10e8_0adc,DAT_10e8_0ada);
          }
        }
      }
      else if (param_4 < 0x203) {
        if (param_4 == 0x120) {
          FUN_1098_0248();
          lVar11 = CONCAT22(DAT_10e8_0adc,DAT_10e8_0ada);
        }
        else {
          if (0x120 < param_4) {
            if (param_4 == 0x121) {
              GETCURSORPOS(&DAT_10e8_9b9c);
              DAT_10e8_3c54 = DAT_10e8_9b9c;
              DAT_10e8_3eb0 = DAT_10e8_9b9e;
              if ((0x27 < DAT_10e8_9b9e) && (DAT_10e8_003e == 1)) {
                DAT_10e8_003e = 0;
                uStackY_1a = 0xc19;
                POSTMESSAGE(DAT_10e8_9e24,0x400,0,0);
                DAT_10e8_9e24 = 0;
              }
              if ((DAT_10e8_3eb0 < 0x17c) && (DAT_10e8_0040 == 1)) {
                DAT_10e8_0040 = 0;
                uStackY_1a = 0xc4c;
                POSTMESSAGE(DAT_10e8_3eb2,0x400,0,0);
                DAT_10e8_3eb2 = 0;
              }
            }
            else {
              if (param_4 == 0x200) goto LAB_1000_0626;
              if (param_4 == 0x201) {
                DAT_10e8_036e = iVar3;
                lVar11 = CONCAT22(DAT_10e8_0adc,DAT_10e8_0ada);
                if (DAT_10e8_036e == 1) goto switchD_1000_0a83_caseD_0;
                iVar3 = FUN_1060_0b00();
                DAT_10e8_006e = (uint)(iVar3 == 0);
              }
            }
            goto LAB_1000_04b2;
          }
          if (param_4 == 0x112) {
            DAT_10e8_036e = iVar3;
            lVar11 = CONCAT22(DAT_10e8_0adc,DAT_10e8_0ada);
            switch(((uint)param_3 & 0xfff0) + 0x1000 >> 3) {
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
              goto switchD_1000_0a83_caseD_0;
            default:
              goto switchD_1000_0a83_caseD_6;
            }
          }
          if (param_4 != 0x113) goto LAB_1000_04b2;
          uVar2 = GETUPDATERECT(param_5,(void *)0x0,0);
          if (uVar2 != 0) {
            INVALIDATERGN(param_5,0,0);
            GETDC(param_5);
            if (((DAT_10e8_0044 != 0) && (DAT_10e8_0368 == 0)) &&
               (iVar3 = FUN_1060_0b00(), iVar3 == 0)) {
              FUN_1038_01e4();
            }
            RELEASEDC(param_5,param_5);
          }
          GETCURSORPOS(&DAT_10e8_9b9c);
          DAT_10e8_3c54 = DAT_10e8_9b9c;
          DAT_10e8_3eb0 = DAT_10e8_9b9e;
          if ((0x117 < DAT_10e8_9b9e) && (DAT_10e8_003e == 1)) {
            DAT_10e8_003e = 0;
            POSTMESSAGE(DAT_10e8_9e24,0x400,0,0);
            DAT_10e8_9e24 = 0;
          }
          if ((DAT_10e8_3eb0 < 0x17c) && (DAT_10e8_0040 == 1)) {
            DAT_10e8_0040 = 0;
            POSTMESSAGE(DAT_10e8_3eb2,0x400,0,0);
            DAT_10e8_3eb2 = 0;
          }
          lVar11 = TIMEGETTIME();
          DAT_10e8_0adc = (undefined2)((ulong)lVar11 >> 0x10);
          DAT_10e8_0ada = (undefined2)lVar11;
          if (CONCAT22(DAT_10e8_0ad8,DAT_10e8_0ad6) <= lVar11) {
            lVar11 = lVar11 + (int)(1000 / (long)DAT_10e8_0046);
            DAT_10e8_0ad6 = (undefined2)lVar11;
            DAT_10e8_0ad8 = (undefined2)((ulong)lVar11 >> 0x10);
            FUN_1038_086e();
            lVar11 = CONCAT22(DAT_10e8_0adc,DAT_10e8_0ada);
          }
        }
      }
      else {
        if (param_4 == 0x30f) {
          if (DAT_10e8_0044 != 0) {
            iVar3 = FUN_1080_0920();
            lVar11 = CONCAT22(DAT_10e8_0adc,DAT_10e8_0ada);
            uVar9 = (ulong)iVar3;
            goto LAB_1000_100b;
          }
          goto LAB_1000_04b2;
        }
        if (param_4 < 0x310) {
          if (param_4 == 0x204) {
            DAT_10e8_036e = iVar3;
            lVar11 = CONCAT22(DAT_10e8_0adc,DAT_10e8_0ada);
            if ((DAT_10e8_036e != 1) &&
               (lVar11 = CONCAT22(DAT_10e8_0adc,DAT_10e8_0ada), DAT_10e8_008a == 0)) {
              iVar3 = FUN_1060_0b00();
              lVar11 = CONCAT22(DAT_10e8_0adc,DAT_10e8_0ada);
              if (iVar3 == 0) {
                iVar3 = FUN_1060_0b00();
                lVar11 = CONCAT22(DAT_10e8_0adc,DAT_10e8_0ada);
                if (iVar3 == 0) {
                  iVar3 = FUN_1060_0b00();
                  lVar11 = CONCAT22(DAT_10e8_0adc,DAT_10e8_0ada);
                  if (iVar3 == 4) {
                    DAT_10e8_770e = (DAT_10e8_770e + 1) % 3;
                    goto LAB_1000_0f9f;
                  }
                }
              }
            }
          }
          else {
            if (param_4 != 0x205) goto LAB_1000_04b2;
            DAT_10e8_036e = iVar3;
            lVar11 = CONCAT22(DAT_10e8_0adc,DAT_10e8_0ada);
            if (0 < DAT_10e8_008a) {
              uVar2 = GETDC(param_5);
              if (5 < DAT_10e8_008a) {
                DAT_10e8_279e = 0;
                DAT_10e8_279c = 0;
                DAT_10e8_008a = 0;
                iVar3 = FUN_1060_0b00();
                uStackY_1a = uVar2;
                if (iVar3 != 0) {
                  FUN_1080_02f0();
                  uStackY_1a = 0xf19;
                  PATBLT(uVar2,0,0,0x280,0x1e0,0x42);
                  goto LAB_1000_0f1e;
                }
                goto LAB_1000_0f50;
              }
              goto LAB_1000_0f8f;
            }
          }
        }
        else {
          if ((param_4 < 0x310) || (param_4 == 0x310 || param_4 == 0x311)) goto LAB_1000_04b2;
          if (param_4 == 0x3bd) {
            FUN_10a8_057a();
            lVar11 = CONCAT22(DAT_10e8_0adc,DAT_10e8_0ada);
          }
          else {
            if (param_4 != 0x400) goto LAB_1000_04b2;
            DAT_10e8_036c = 0;
            FUN_1058_01e0();
            lVar11 = CONCAT22(DAT_10e8_0adc,DAT_10e8_0ada);
          }
        }
      }
      goto switchD_1000_0a83_caseD_0;
    }
    if (param_4 != 0x20) {
      if (param_4 < 0x21) {
        if ((param_4 == 0x15) || (0x15 < param_4)) goto LAB_1000_04b2;
        cVar1 = (char)param_4;
        if (cVar1 == '\x02') {
          FUN_1028_09b6();
          uVar2 = GETDC(0);
          DAT_10e8_2d54 = 0;
          do {
            if ((DAT_10e8_2d54 == 0) || (3 < DAT_10e8_2d54)) {
              _DAT_10e8_2d52 = 0;
              do {
                FUN_1090_0068();
                _DAT_10e8_2d52 = _DAT_10e8_2d52 + 1;
              } while ((int)_DAT_10e8_2d52 < 9);
            }
            DAT_10e8_2d54 = DAT_10e8_2d54 + 1;
          } while (DAT_10e8_2d54 < 8);
          FUN_1088_02ac();
          FUN_1088_02ac();
          SELECTOBJECT(DAT_10e8_6546,DAT_10e8_9f42);
          DELETEDC(DAT_10e8_6546);
          DESTROYCURSOR(DAT_10e8_8722);
          DESTROYCURSOR(DAT_10e8_8726);
          DESTROYCURSOR(DAT_10e8_9794);
          DESTROYCURSOR(DAT_10e8_6890);
          DESTROYCURSOR(DAT_10e8_5e0e);
          FUN_1048_21b0();
          FUN_1050_035a();
          FUN_1050_035a();
          FUN_1090_0068();
          FUN_1088_09a6();
          FUN_1080_00c2();
          FUN_1090_0068();
          RELEASEDC(0,uVar2);
          FUN_1028_0000();
          POSTQUITMESSAGE(0);
          lVar11 = CONCAT22(DAT_10e8_0adc,DAT_10e8_0ada);
        }
        else if (cVar1 == '\x06') {
          if ((param_3 != (char *)0x1) && (param_3 != (char *)0x2)) {
switchD_1000_0a83_caseD_6:
            goto LAB_1000_04b2;
          }
          uStackY_1a = 0x4d4;
          SETWINDOWPOS(param_5,0xffff,0,0,0,0,3);
          DAT_10e8_0370 = 0;
          SETFOCUS(param_5);
          lVar11 = CONCAT22(DAT_10e8_0adc,DAT_10e8_0ada);
        }
        else if (cVar1 == '\x0f') {
          INVALIDATERGN(param_5,0,0);
          BEGINPAINT(param_5,(ushort *)CONCAT22(unaff_SS,local_2a));
          if (((DAT_10e8_0044 != 0) && (DAT_10e8_0368 == 0)) &&
             (iVar3 = FUN_1060_0b00(), iVar3 == 0)) {
            FUN_1038_01e4();
          }
          _DAT_10e8_2d52 = DAT_10e8_0014 - 0x280;
          DAT_10e8_2d54 = DAT_10e8_0016 + -0x1e0;
          if (_DAT_10e8_2d52 != 0) {
            PATBLT(local_2a[0],0x280,0,_DAT_10e8_2d52,DAT_10e8_0016,0x42);
          }
          if (DAT_10e8_2d54 != 0) {
            PATBLT(local_2a[0],0,0x1e0,0x280,DAT_10e8_2d54,0x42);
          }
          ENDPAINT(param_5,(ushort *)CONCAT22(unaff_SS,local_2a));
          lVar11 = CONCAT22(DAT_10e8_0adc,DAT_10e8_0ada);
        }
        else {
          if (cVar1 != '\x10') goto LAB_1000_04b2;
          FUN_1010_0ae0();
          uVar2 = GETDC(param_5);
          MOVEWINDOW(param_5,0,0,DAT_10e8_0014,DAT_10e8_0016,0);
          uStackY_1a = 0x5bc;
          PATBLT(uVar2,0,0,DAT_10e8_0014,DAT_10e8_0016,0x42);
          RELEASEDC(param_5,uVar2);
          DESTROYWINDOW(param_5);
          lVar11 = CONCAT22(DAT_10e8_0adc,DAT_10e8_0ada);
        }
      }
      else {
        if (param_4 == 0x84) {
LAB_1000_0626:
          if ((DAT_10e8_036e != 1) && (DAT_10e8_0370 == 0)) {
            if ((param_2 < 0x19a) && (DAT_10e8_2774 != 0)) {
              param_2 = 0x19a;
            }
            if (DAT_10e8_008a == 0) {
              GETCURSORPOS(&DAT_10e8_9b9c);
              DAT_10e8_3c54 = DAT_10e8_9b9c;
              DAT_10e8_3eb0 = DAT_10e8_9b9e;
              if (DAT_10e8_007c == 2) {
                DAT_10e8_770e = 1;
                DAT_10e8_9790 = DAT_10e8_8726;
                if (((0x95 < DAT_10e8_9b9c) && (DAT_10e8_9b9c < 0x1ea)) &&
                   ((((0xc5 < DAT_10e8_9b9e && (DAT_10e8_9b9e < 0xfb)) ||
                     (((0xff < DAT_10e8_9b9e && (DAT_10e8_9b9e < 0x137)) ||
                      ((0x139 < DAT_10e8_9b9e && (DAT_10e8_9b9e < 0x171)))))) ||
                    ((0x173 < DAT_10e8_9b9e && (DAT_10e8_9b9e < 0x1ab)))))) {
                  DAT_10e8_9790 = DAT_10e8_8722;
                }
              }
              else {
                _DAT_10e8_2d52 = FUN_1050_0062();
                DAT_10e8_978e = DAT_10e8_653c;
                if ((_DAT_10e8_2d52 & 1) != 0) {
                  DAT_10e8_978e = DAT_10e8_5e0e;
                }
                DAT_10e8_9790 = DAT_10e8_8726;
                if ((_DAT_10e8_2d52 & 2) != 0) {
                  DAT_10e8_9790 = DAT_10e8_8722;
                }
                DAT_10e8_9792 = DAT_10e8_9794;
                if ((_DAT_10e8_2d52 & 4) != 0) {
                  DAT_10e8_9792 = DAT_10e8_6890;
                }
                if ((((((DAT_10e8_3eb0 == 0) && (DAT_10e8_0368 == 0)) && (DAT_10e8_2774 == 0)) &&
                     ((iVar3 = FUN_1060_0b00(), iVar3 == 0 && (iVar3 = FUN_1060_0b00(), iVar3 == 0))
                     )) && (iVar3 = FUN_1060_0b00(), iVar3 == 0)) &&
                   ((iVar5 = FUN_1060_0b00(), iVar3 = DAT_10e8_036e, iVar5 == 4 &&
                    (DAT_10e8_008e == 0 && DAT_10e8_008c == 0)))) {
                  DAT_10e8_003e = 1;
                  DAT_10e8_036e = 1;
                  pvVar10 = MAKEPROCINSTANCE(POPUPPROC,DAT_10e8_9556);
                  uVar8 = (undefined2)((ulong)pvVar10 >> 0x10);
                  uStackY_1a = 0x13a8;
                  pcStackY_1c = (char *)0x7e6;
                  uVar4 = DIALOGBOX(DAT_10e8_9556,(void *)0x10e80b38,param_5,pvVar10);
                  FREEPROCINSTANCE(pvVar10);
                  uStackY_1a = 0x804;
                  uVar2 = param_5;
                  pvVar6 = (void *)FUN_1000_0000();
                  INVALIDATERECT(uVar2,(void *)CONCAT22(uVar8,pvVar6),0);
                  POSTMESSAGE(param_5,0x111,uVar4,0);
                  SETCURSORPOS(0x140,200);
                  DAT_10e8_036e = iVar3;
                }
                else if ((((DAT_10e8_007c != 999) &&
                          (((0x1d6 < DAT_10e8_3eb0 && (DAT_10e8_0368 == 0)) &&
                           (iVar3 = FUN_1060_0b00(), iVar3 == 0)))) &&
                         (((DAT_10e8_2774 == 0 && (iVar3 = FUN_1060_0b00(), iVar3 == 0)) &&
                          (iVar3 = FUN_1060_0b00(), iVar3 == 0)))) &&
                        ((iVar5 = FUN_1060_0b00(), iVar3 = DAT_10e8_036e, DAT_10e8_036e = iVar3,
                         iVar5 == 4 && (DAT_10e8_008e == 0 && DAT_10e8_008c == 0)))) {
                  DAT_10e8_0040 = 1;
                  DAT_10e8_036e = 1;
                  pvVar10 = MAKEPROCINSTANCE(DLG_INVENTORY,DAT_10e8_9556);
                  uVar8 = (undefined2)((ulong)pvVar10 >> 0x10);
                  uStackY_1a = 0x13a8;
                  pcStackY_1c = (char *)0x8eb;
                  DIALOGBOX(DAT_10e8_9556,s_DS2INVENTORY_10e8_0b69,param_5,pvVar10);
                  DELETEOBJECT(DAT_10e8_3eb4);
                  FREEPROCINSTANCE(pvVar10);
                  uStackY_1a = 0x911;
                  uVar2 = param_5;
                  pvVar6 = (void *)FUN_1000_0000();
                  INVALIDATERECT(uVar2,(void *)CONCAT22(uVar8,pvVar6),0);
                  DAT_10e8_036e = iVar3;
                }
              }
            }
            else {
              DAT_10e8_978e = 0;
              DAT_10e8_9790 = 0;
              DAT_10e8_9792 = 0;
            }
          }
LAB_1000_04b2:
          uVar9 = DEFWINDOWPROC(param_5,param_4,(ushort)param_3,CONCAT22(param_2,param_1));
          lVar11 = CONCAT22(DAT_10e8_0adc,DAT_10e8_0ada);
          goto LAB_1000_100b;
        }
        if (param_4 < 0x85) {
          if (param_4 == 0x21) {
            uStackY_1a = 0x617;
            SETWINDOWPOS(param_5,0xffff,0,0,0,0,3);
            SETFOCUS(param_5);
            DAT_10e8_0370 = 0;
            lVar11 = CONCAT22(DAT_10e8_0adc,DAT_10e8_0ada);
          }
          else if ((param_4 - 0x21 < 0x25) ||
                  (DAT_10e8_036e = iVar3, lVar11 = CONCAT22(DAT_10e8_0adc,DAT_10e8_0ada),
                  param_4 != 0x46 && param_4 != 0x47)) goto LAB_1000_04b2;
        }
        else if (param_4 == 0x100) {
          if (DAT_10e8_0368 == 0) {
            FUN_1000_12be();
            lVar11 = CONCAT22(DAT_10e8_0adc,DAT_10e8_0ada);
          }
          else {
            uVar2 = 0x202;
LAB_1000_0948:
            POSTMESSAGE(param_5,uVar2,0,0);
            lVar11 = CONCAT22(DAT_10e8_0adc,DAT_10e8_0ada);
          }
        }
        else if (param_4 == 0x101) {
          DAT_10e8_006c = 2;
          DAT_10e8_0ad4 = 0;
          DAT_10e8_036e = iVar3;
          lVar11 = CONCAT22(DAT_10e8_0adc,DAT_10e8_0ada);
        }
        else {
          if (param_4 != 0x104) goto LAB_1000_04b2;
          if ((param_3 == (char *)0x59) ||
             ((DAT_10e8_036e = iVar3, lVar11 = CONCAT22(DAT_10e8_0adc,DAT_10e8_0ada),
              param_3 < (char *)0x5a &&
              (((char)param_3 == 'A' ||
               (lVar11 = CONCAT22(DAT_10e8_0adc,DAT_10e8_0ada), (char)param_3 == 'O')))))) {
            SETCURSORPOS(0,0);
            DAT_10e8_8f9a = param_3;
            lVar11 = CONCAT22(DAT_10e8_0adc,DAT_10e8_0ada);
          }
        }
      }
      goto switchD_1000_0a83_caseD_0;
    }
    DAT_10e8_036e = iVar3;
    if (DAT_10e8_036e == 1) goto switchD_1000_0a83_caseD_0;
    if (((DAT_10e8_2774 != 0) && (DAT_10e8_1db6 != 0)) && (param_2 == 0x205)) {
      SENDMESSAGE(DAT_10e8_7712,6,1,0);
    }
    lVar11 = CONCAT22(DAT_10e8_0adc,DAT_10e8_0ada);
    uVar7 = 1;
  }
  uVar9 = (ulong)uVar7;
LAB_1000_100b:
  DAT_10e8_0adc = (undefined2)((ulong)lVar11 >> 0x10);
  DAT_10e8_0ada = (undefined2)lVar11;
  return uVar9;
}


