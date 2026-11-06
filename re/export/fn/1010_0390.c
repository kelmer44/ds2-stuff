// PLAYSET_DLG_PROC at 1010:0390

/* WARNING: Removing unreachable block (ram,0x1010066c) */

undefined2 __stdcall16far
PLAYSET_DLG_PROC(uint param_1,ushort param_2,uint param_3,uint param_4,ushort param_5)

{
  byte bVar1;
  ushort uVar2;
  uint unaff_SI;
  undefined2 uVar3;
  
  FUN_10d0_029e();
  if (param_4 == 0x111) {
    if (param_3 == 1) {
      DAT_10e8_0064 = 0x2be;
      uVar2 = ISDLGBUTTONCHECKED(param_5,0x2bf);
      if (uVar2 != 0) {
        DAT_10e8_0064 = 0x2bf;
      }
      uVar2 = ISDLGBUTTONCHECKED(param_5,0x2c0);
      if (uVar2 != 0) {
        DAT_10e8_0064 = 0x2c0;
      }
      uVar2 = ISDLGBUTTONCHECKED(param_5,0x2c1);
      if (uVar2 != 0) {
        DAT_10e8_0064 = 0x2c1;
      }
      DAT_10e8_0066 = 0x2e4;
      uVar2 = ISDLGBUTTONCHECKED(param_5,0x2e5);
      if (uVar2 != 0) {
        DAT_10e8_0066 = 0x2e5;
      }
      uVar2 = ISDLGBUTTONCHECKED(param_5,0x2e6);
      if (uVar2 != 0) {
        DAT_10e8_0066 = 0x2e6;
      }
      DAT_10e8_004c = 0x3d6;
      uVar2 = ISDLGBUTTONCHECKED(param_5,0x3d5);
      if (uVar2 != 0) {
        DAT_10e8_004c = 0x3d5;
      }
      uVar2 = ISDLGBUTTONCHECKED(param_5,0x3d4);
      if (uVar2 != 0) {
        DAT_10e8_004c = 0x3d4;
      }
      DAT_10e8_004e = 0x14a;
      uVar2 = ISDLGBUTTONCHECKED(param_5,0x14b);
      if (uVar2 != 0) {
        DAT_10e8_004e = 0x14b;
      }
      DAT_10e8_0050 = 1;
      uVar2 = ISDLGBUTTONCHECKED(param_5,0x2cc);
      if (uVar2 == 0) {
        DAT_10e8_0050 = 0;
      }
      uVar2 = ISDLGBUTTONCHECKED(param_5,0x2ce);
      if (1 - uVar2 != DAT_10e8_005e) {
        FUN_1000_1d1a(0);
      }
      uVar2 = ISDLGBUTTONCHECKED(param_5,0x2ca);
      if (1 - uVar2 != DAT_10e8_005c) {
        FUN_1000_1c36(0);
      }
      if ((DAT_10e8_005c == 0) && (DAT_10e8_004c == 0x3d5)) {
        DAT_10e8_004c = 0x3d6;
      }
    }
    else {
      if (param_3 != 2) {
        return 1;
      }
      DAT_10e8_0068 = DAT_10e8_2d68;
      DAT_10e8_006a = DAT_10e8_2d66;
      if (DAT_10e8_005c != 0) {
        uVar2 = MCIGETDEVICEID(s_waveaudio_10e8_0fd0);
        WAVEOUTSETVOLUME(uVar2,CONCAT22(DAT_10e8_0068,DAT_10e8_0068));
      }
      if (DAT_10e8_005e != 0) {
        uVar2 = MCIGETDEVICEID(s_sequencer_10e8_0fda);
        MIDIOUTSETVOLUME(uVar2,CONCAT22(DAT_10e8_006a,DAT_10e8_006a));
      }
    }
    ENDDIALOG(param_5,1);
    return 1;
  }
  if (param_4 < 0x112) {
    if (0x45 < param_4) {
      if (param_4 == 0x46 || param_4 == 0x47) {
        return 1;
      }
      if (param_4 == 0x110) {
        DAT_10e8_2d66 = DAT_10e8_006a;
        DAT_10e8_2d68 = DAT_10e8_0068;
        uVar2 = GETDLGITEM(param_5,0x2c2);
        if (DAT_10e8_004a == 0) {
          ENABLESCROLLBAR(uVar2,2,3);
        }
        else {
          SETSCROLLRANGE(uVar2,2,0,0xff,0);
          SETSCROLLPOS(uVar2,2,DAT_10e8_0068 >> 8,1);
        }
        uVar2 = GETDLGITEM(param_5,0x2c3);
        SETSCROLLRANGE(uVar2,2,0,0xff,0);
        SETSCROLLPOS(uVar2,2,DAT_10e8_006a >> 8,1);
        CHECKDLGBUTTON(param_5,0x2cc,DAT_10e8_0050);
        CHECKDLGBUTTON(param_5,0x2ca,1 - DAT_10e8_005c);
        CHECKDLGBUTTON(param_5,0x2ce,1 - DAT_10e8_005e);
        CHECKRADIOBUTTON(param_5,0x2be,0x2c1,DAT_10e8_0064);
        CHECKRADIOBUTTON(param_5,0x2e4,0x2e6,DAT_10e8_0066);
        CHECKRADIOBUTTON(param_5,0x3d4,0x3d6,DAT_10e8_004c);
        CHECKRADIOBUTTON(param_5,0x14a,0x14b,DAT_10e8_004e);
        uVar2 = GETDLGITEM(param_5,2);
        SETFOCUS(uVar2);
      }
    }
    return 0;
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
      goto switchD_1010_067b_caseD_0;
    default:
      return 0;
    }
  }
  if (param_4 != 0x114) {
    return 0;
  }
  uVar2 = GETWINDOWWORD(param_2,-0xc);
  if (uVar2 == 0x2c2) {
    bVar1 = DAT_10e8_0068._1_1_;
LAB_1010_06c9:
    unaff_SI = (uint)bVar1;
  }
  else if (uVar2 == 0x2c3) {
    bVar1 = DAT_10e8_006a._1_1_;
    goto LAB_1010_06c9;
  }
  switch(param_3) {
  case 0:
    uVar3 = 0xffff;
    break;
  case 1:
    uVar3 = 1;
    break;
  case 2:
    uVar3 = 0xfffb;
    break;
  case 3:
    uVar3 = 5;
    break;
  case 4:
  case 5:
    unaff_SI = param_1;
    goto switchD_1010_06de_default;
  case 6:
    unaff_SI = 0;
    goto switchD_1010_06de_default;
  case 7:
    unaff_SI = 0xff;
  default:
    goto switchD_1010_06de_default;
  }
  FUN_1010_0b72(&stack0xfff8,uVar3);
switchD_1010_06de_default:
  SETSCROLLPOS(param_2,2,unaff_SI,1);
  if (uVar2 == 0x2c2) {
    DAT_10e8_0068 = unaff_SI << 8;
    uVar2 = MCIGETDEVICEID(s_waveaudio_10e8_0fe4);
    WAVEOUTSETVOLUME(uVar2,CONCAT22(DAT_10e8_0068,DAT_10e8_0068));
  }
  else if (uVar2 == 0x2c3) {
    DAT_10e8_006a = unaff_SI << 8;
    uVar2 = MCIGETDEVICEID(s_sequencer_10e8_0fee);
    MIDIOUTSETVOLUME(uVar2,CONCAT22(DAT_10e8_006a,DAT_10e8_006a));
  }
switchD_1010_067b_caseD_0:
  return 1;
}


