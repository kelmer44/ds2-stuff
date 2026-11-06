// POPUPPROC at 1000:1016

undefined2 __stdcall16far
POPUPPROC(undefined2 param_1,undefined2 param_2,uint param_3,uint param_4,ushort param_5)

{
  byte bVar1;
  short a1;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  if (param_4 == 0x105) {
    DAT_10e8_2d5a = 0;
    return 0;
  }
  bVar1 = (byte)param_3;
  if (0x105 < param_4) {
    if (param_4 == 0x110) {
      SETWINDOWPOS(param_5,0,0,0,0x280,0x28,0x44);
      DAT_10e8_9e24 = param_5;
      if (DAT_10e8_8f9a != 0) {
        POSTMESSAGE(param_5,0x112,0xf100,0);
        POSTMESSAGE(param_5,0x100,DAT_10e8_8f9a,0);
        DAT_10e8_8f9a = 0;
      }
      SETFOCUS(0);
      SYSTEMPARAMETERSINFO(2,0,(void *)0x0,0);
      return 0;
    }
    if (param_4 == 0x111) {
      DAT_10e8_0c1e = param_3;
      if (param_3 == 0x66) {
        a1 = 0x66;
        goto LAB_1000_12ab;
      }
      if (0x66 < (int)param_3) {
        if (param_3 == 0x68) {
          a1 = 0x68;
        }
        else if (param_3 == 0x69) {
          a1 = 0x69;
        }
        else if (param_3 == 300) {
          a1 = 300;
        }
        else {
          if (param_3 != 0x12d) {
            return 0;
          }
          a1 = 0x12d;
        }
        goto LAB_1000_12ab;
      }
      if (param_3 == 0x65) {
        a1 = 0x65;
        goto LAB_1000_12ab;
      }
      if (0x65 < param_3) {
        return 0;
      }
      if (bVar1 != 2) {
        if (bVar1 != 100) {
          return 0;
        }
        a1 = 100;
        goto LAB_1000_12ab;
      }
    }
    else {
      if (param_4 == 0x112) {
        switch((param_3 & 0xfff0) + 0x1000 >> 3) {
        case 0:
        case 2:
        case 4:
        case 8:
        case 10:
        case 0xc:
        case 0x24:
        case 0x26:
        case 0x28:
          goto switchD_1000_10c2_caseD_5;
        default:
          return 0;
        }
      }
      if (param_4 != 0x400) {
        return 0;
      }
    }
    a1 = 0;
LAB_1000_12ab:
    ENDDIALOG(param_5,a1);
    return 0;
  }
  if (param_4 < 0x46) {
    return 0;
  }
  if (param_4 == 0x46 || param_4 == 0x47) {
    return 1;
  }
  if (param_4 == 0x87) {
    return 0xffff;
  }
  if (param_4 != 0x104) {
    return 0;
  }
  if (param_3 == 0x68) {
switchD_1000_10c2_caseD_1:
    DAT_10e8_3eb0 = DAT_10e8_3eb0 - DAT_10e8_006c;
    if (DAT_10e8_3eb0 < 1) {
      DAT_10e8_3eb0 = 0;
    }
  }
  else {
    if (0x68 < param_3) {
      return 1;
    }
    if (bVar1 == 0x46) {
switchD_1000_10c2_caseD_0:
      POSTMESSAGE(param_5,0x112,0xf100,0);
      POSTMESSAGE(param_5,0x100,param_3,0);
      return 1;
    }
    if (bVar1 < 0x47) {
      if (bVar1 == 0x25) goto switchD_1000_10c2_caseD_2;
      if (bVar1 == 0x26) goto switchD_1000_10c2_caseD_1;
      if (bVar1 == 0x27) goto switchD_1000_10c2_caseD_4;
      if (bVar1 != 0x28) {
        return 1;
      }
    }
    else if (bVar1 != 0x62) {
      if (bVar1 < 99) {
        switch(CONCAT11((char)(param_3 >> 8),bVar1 + 0xb8)) {
        case 0:
        case 7:
          goto switchD_1000_10c2_caseD_0;
        case 1:
          goto switchD_1000_10c2_caseD_1;
        case 2:
          goto switchD_1000_10c2_caseD_2;
        case 3:
          goto switchD_1000_10c2_caseD_3;
        case 4:
          goto switchD_1000_10c2_caseD_4;
        default:
          goto switchD_1000_10c2_caseD_5;
        }
      }
      if (bVar1 == 100) {
switchD_1000_10c2_caseD_2:
        DAT_10e8_3c54 = DAT_10e8_3c54 - DAT_10e8_006c;
        if (DAT_10e8_3c54 < 0) {
          DAT_10e8_3c54 = 0;
        }
        goto LAB_1000_10f3;
      }
      if (bVar1 != 0x66) {
        return 1;
      }
switchD_1000_10c2_caseD_4:
      DAT_10e8_3c54 = DAT_10e8_3c54 + DAT_10e8_006c;
      if (0x280 < DAT_10e8_3c54) {
        DAT_10e8_3c54 = 0x280;
      }
      goto LAB_1000_10f3;
    }
switchD_1000_10c2_caseD_3:
    DAT_10e8_3eb0 = DAT_10e8_3eb0 + DAT_10e8_006c;
    if (0x1e0 < DAT_10e8_3eb0) {
      DAT_10e8_3eb0 = 0x1e0;
    }
  }
LAB_1000_10f3:
  SETCURSORPOS(DAT_10e8_3c54,DAT_10e8_3eb0);
  if (DAT_10e8_006c < 10) {
    DAT_10e8_006c = DAT_10e8_006c + 2;
  }
switchD_1000_10c2_caseD_5:
  return 1;
}


