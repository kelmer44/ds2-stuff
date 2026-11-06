// DLG_INVENTORY at 1008:0428

/* WARNING: Removing unreachable block (ram,0x100806dc) */

ushort __stdcall16far
DLG_INVENTORY(uint param_1,undefined2 param_2,uint param_3,uint param_4,ushort param_5)

{
  int *piVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined2 uVar9;
  undefined2 unaff_SS;
  undefined1 local_34 [18];
  undefined2 uStackY_22;
  undefined2 uStackY_20;
  undefined2 uStackY_1e;
  char *pcStackY_1c;
  ushort uStackY_1a;
  int iStackY_18;
  
  FUN_10d0_029e();
  if (param_4 == 0x110) {
    DAT_10e8_3eb4 = CREATEBRUSHINDIRECT((undefined1 *)CONCAT22(unaff_SS,&stack0xffec));
    if (DAT_10e8_1fd0 != 0 || DAT_10e8_1fce != 0) {
      FUN_1008_0af6();
      DAT_10e8_3eb2 = param_5;
      DAT_10e8_0040 = 1;
      SETWINDOWWORD(param_5,-0xc,0);
      FUN_1008_0000();
      SETWINDOWWORD(param_5,-0x10,8);
      iStackY_18 = 0x13a8;
      uStackY_1a = 0x6a9;
      SETWINDOWPOS(param_5,DAT_10e8_76f8,0,0x19a,0x280,0x46,0x44);
      SETFOCUS(0);
      return 0;
    }
LAB_1008_0a40:
    ENDDIALOG(param_5,1);
    return 0;
  }
  if (0x110 < param_4) {
    if (param_4 != 0x201) {
      if (param_4 < 0x202) {
        if (param_4 == 0x111) {
          if ((param_3 != 1) && (param_3 != 2)) {
            return 1;
          }
          FUN_1008_0a58();
          ENDDIALOG(param_5,1);
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
            return 1;
          default:
            return 0;
          }
        }
        if (param_4 != 0x200) {
          return 0;
        }
        GETCURSORPOS(&DAT_10e8_9b9c);
        DAT_10e8_3eb0 = DAT_10e8_9b9e;
        DAT_10e8_3c54 = DAT_10e8_9b9c;
        if ((0x4f < DAT_10e8_9b9c) && (DAT_10e8_9b9c < 0x230)) {
          FUN_1008_004c();
          return 1;
        }
        FUN_1008_00b6();
        return 1;
      }
      if (param_4 == 0x202) {
        if ((param_1 < 0x230) || (DAT_10e8_0d2a != 1)) {
          if ((0x4f < param_1) || (DAT_10e8_0d28 != 1)) {
            if ((((DAT_10e8_0d48 != 0) && (DAT_10e8_0d2a == 0)) && (DAT_10e8_0d28 == 0)) &&
               (DAT_10e8_0d2c != 0)) {
              iVar7 = (param_1 - 0x46) / 0x32 + DAT_10e8_8f98;
              if ((-1 < iVar7) && (iVar7 < DAT_10e8_0d26)) {
                if (DAT_10e8_770e == 1) {
                  uVar9 = (undefined2)
                          ((ulong)*(undefined4 *)((undefined2 *)&DAT_10e8_8e3e + iVar7 * 2) >> 0x10)
                  ;
                  iVar6 = (int)*(undefined4 *)((undefined2 *)&DAT_10e8_8e3e + iVar7 * 2);
                  iVar7 = *(int *)(iVar6 + 0x14);
                  iVar6 = *(int *)(iVar6 + 0x16);
                  iVar8 = 0;
                  if (iVar6 != 0 || iVar7 != 0) {
                    iVar8 = 0;
                    do {
                      if (iVar8 != 0) break;
                      iVar8 = FUN_1060_07f6();
                      if (iVar8 != 0) {
                        iStackY_18 = 0x959;
                        FUN_1058_01e0();
                      }
                      piVar1 = (int *)(iVar7 + 0x93);
                      iVar6 = *(int *)(iVar7 + 0x95);
                      iVar7 = *piVar1;
                    } while (iVar6 != 0 || *piVar1 != 0);
                  }
                  if (iVar8 == 0) {
                    FUN_1008_0e16();
                    DAT_10e8_8722 = LOADCURSOR(DAT_10e8_9556,s_cUseIt_10e8_0d4c);
                  }
                }
                else if (DAT_10e8_770e == 2) {
                  uVar9 = (undefined2)
                          ((ulong)*(undefined4 *)((undefined2 *)&DAT_10e8_8e3e + iVar7 * 2) >> 0x10)
                  ;
                  iVar6 = (int)*(undefined4 *)((undefined2 *)&DAT_10e8_8e3e + iVar7 * 2);
                  iVar7 = *(int *)(iVar6 + 0x10);
                  iVar6 = *(int *)(iVar6 + 0x12);
                  if (iVar6 != 0 || iVar7 != 0) {
                    iVar8 = 0;
                    do {
                      if (iVar8 != 0) break;
                      iVar8 = FUN_1060_07f6();
                      if (iVar8 != 0) {
                        iStackY_18 = 0x9f3;
                        FUN_1058_01e0();
                      }
                      piVar1 = (int *)(iVar7 + 0x93);
                      iVar6 = *(int *)(iVar7 + 0x95);
                      iVar7 = *piVar1;
                    } while (iVar6 != 0 || *piVar1 != 0);
                  }
                }
              }
              FUN_1008_0000();
            }
            DAT_10e8_0d28 = 0;
            DAT_10e8_0d2a = 0;
            DAT_10e8_0d2c = 0;
            return 0;
          }
          DAT_10e8_0d28 = 0;
          if (0 < DAT_10e8_8f98) {
            DAT_10e8_8f98 = DAT_10e8_8f98 + -1;
            uVar5 = GETDC(param_5);
            FUN_1008_02a2();
            RELEASEDC(param_5,uVar5);
          }
          goto LAB_1008_07d6;
        }
        DAT_10e8_0d2a = 0;
        if (10 < DAT_10e8_0d26 - DAT_10e8_8f98) {
          DAT_10e8_8f98 = DAT_10e8_8f98 + 1;
          uVar5 = GETDC(param_5);
          FUN_1008_02a2();
          RELEASEDC(param_5,uVar5);
          return 0;
        }
        goto LAB_1008_07fd;
      }
      if (param_4 != 0x203) {
        if (param_4 == 0x204) {
          DAT_10e8_770e = (DAT_10e8_770e + 1) % 3;
          SETCURSOR(((undefined2 *)&DAT_10e8_978e)[DAT_10e8_770e]);
          return 0;
        }
        if (param_4 != 0x400) {
          return 0;
        }
        FUN_1008_0a58();
        goto LAB_1008_0a40;
      }
    }
    uVar5 = GETDC(DAT_10e8_76f8);
    DAT_10e8_0d48 = 1;
    bVar2 = 0 < DAT_10e8_008a;
    if (bVar2) {
      DAT_10e8_279e = 0;
      DAT_10e8_279c = 0;
      DAT_10e8_008a = 0;
      iStackY_18 = DAT_10e8_6892 + 0x13;
      pcStackY_1c = (char *)s_Options_10e8_10e2 + 6;
      uStackY_1e = 0x653e;
      uStackY_20 = 0x13a8;
      uStackY_22 = 0x7a6;
      uStackY_1a = uVar5;
      FUN_1078_1238();
      FUN_10a8_0042();
    }
    DAT_10e8_0d48 = (uint)!bVar2;
    RELEASEDC(DAT_10e8_76f8,uVar5);
    if ((param_1 < 0x50) && (0 < DAT_10e8_8f98)) {
      DAT_10e8_0d28 = 1;
LAB_1008_07d6:
      FUN_1008_00d6();
      return 0;
    }
    if ((param_1 < 0x230) || (DAT_10e8_0d26 - DAT_10e8_8f98 < 0xb)) {
      if (0x22f < param_1) {
        return 0;
      }
      if (param_1 < 0x50) {
        return 0;
      }
      DAT_10e8_0d2c = 1;
      return 0;
    }
    DAT_10e8_0d2a = 1;
LAB_1008_07fd:
    FUN_1008_01b8();
    return 0;
  }
  if (param_4 == 0x100) {
    FUN_1000_12be();
    return 0;
  }
  if (param_4 < 0x101) {
    if (param_4 == 0xf) {
      BEGINPAINT(param_5,(undefined1 *)CONCAT22(unaff_SS,local_34));
      FUN_1008_02a2();
      ENDPAINT(param_5,(undefined1 *)CONCAT22(unaff_SS,local_34));
      return 0;
    }
    if (param_4 == 0x19) {
      SETBKMODE(param_3,1);
      return DAT_10e8_3eb4;
    }
    if (param_4 - 0x19 < 0x2d) {
      return 0;
    }
    if (1 < param_4 - 0x46) {
      return 0;
    }
    return 1;
  }
  if (param_4 == 0x101) {
    DAT_10e8_006c = 2;
    DAT_10e8_0d4a = 0;
    return 0;
  }
  if (param_4 != 0x104) {
    if (param_4 != 0x105) {
      return 0;
    }
    DAT_10e8_0d4a = 0;
    if (param_3 != 0xd) {
      DAT_10e8_0d4a = 0;
      return 0;
    }
    POSTMESSAGE(param_5,0x201,0,CONCAT22(DAT_10e8_3eb0 | DAT_10e8_3c54 >> 0xf,DAT_10e8_3c54));
    POSTMESSAGE(param_5,0x202,0,CONCAT22(DAT_10e8_3eb0 | DAT_10e8_3c54 >> 0xf,DAT_10e8_3c54));
    return 0;
  }
  if (param_3 != 0x68) {
    if (0x68 < param_3) {
      return 1;
    }
    bVar3 = (byte)param_3;
    if (bVar3 != 0x49) {
      if (bVar3 < 0x4a) {
        if (bVar3 == 0x20) {
          POSTMESSAGE(param_5,0x204,0,0);
          return 1;
        }
        if (bVar3 == 0x25) {
LAB_1008_058c:
          DAT_10e8_3c54 = DAT_10e8_3c54 - DAT_10e8_006c;
          if (DAT_10e8_3c54 < 0) {
            DAT_10e8_3c54 = 0;
          }
          goto LAB_1008_05e1;
        }
        if (bVar3 == 0x26) goto LAB_1008_059e;
        cVar4 = bVar3 - 0x27;
        if (cVar4 != '\0') {
LAB_1008_0555:
          if (cVar4 != '\x01') {
            return 1;
          }
LAB_1008_05cc:
          DAT_10e8_3eb0 = DAT_10e8_3eb0 + DAT_10e8_006c;
          if (0x1e0 < (int)DAT_10e8_3eb0) {
            DAT_10e8_3eb0 = 0x1e0;
          }
          goto LAB_1008_05e1;
        }
      }
      else if (bVar3 != 0x4c) {
        if (bVar3 < 0x4d) {
          cVar4 = bVar3 + 0xb6;
          if (cVar4 != '\0') goto LAB_1008_0555;
        }
        else {
          if (bVar3 == 0x62) goto LAB_1008_05cc;
          if (bVar3 != 100) {
            if (bVar3 != 0x66) {
              return 1;
            }
            goto LAB_1008_05b4;
          }
        }
        goto LAB_1008_058c;
      }
LAB_1008_05b4:
      DAT_10e8_3c54 = DAT_10e8_3c54 + DAT_10e8_006c;
      if (0x280 < DAT_10e8_3c54) {
        DAT_10e8_3c54 = 0x280;
      }
      goto LAB_1008_05e1;
    }
  }
LAB_1008_059e:
  DAT_10e8_3eb0 = DAT_10e8_3eb0 - DAT_10e8_006c;
  if ((int)DAT_10e8_3eb0 < 1) {
    DAT_10e8_3eb0 = 0;
  }
LAB_1008_05e1:
  SETCURSORPOS(DAT_10e8_3c54,DAT_10e8_3eb0);
  if (DAT_10e8_006c < 10) {
    DAT_10e8_006c = DAT_10e8_006c + 2;
  }
  return 1;
}


