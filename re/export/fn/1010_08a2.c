// ABOUT_DLG_PROC at 1010:08a2

undefined2 __stdcall16far
ABOUT_DLG_PROC(undefined2 param_1,undefined2 param_2,uint param_3,uint param_4,ushort param_5)

{
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  if (param_4 != 0x110) {
    if (param_4 < 0x111) {
      if ((0x45 < param_4) && (param_4 - 0x46 < 2)) {
LAB_1010_0930:
        return 1;
      }
    }
    else if (param_4 == 0x111) {
      if (param_3 == 1) {
        ENDDIALOG(param_5,1);
        return 1;
      }
    }
    else if (param_4 == 0x112) {
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
        goto LAB_1010_0930;
      }
    }
  }
  return 0;
}


