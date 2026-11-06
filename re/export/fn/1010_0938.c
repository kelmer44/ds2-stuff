// FUN_1010_0938 at 1010:0938

undefined2 __stdcall16far
FUN_1010_0938(undefined2 param_1,undefined2 param_2,uint param_3,uint param_4,ushort param_5)

{
  undefined2 *puVar1;
  ushort a0;
  int iVar2;
  undefined2 *puVar3;
  undefined2 unaff_SS;
  char local_104 [2];
  char acStackY_102 [2];
  char acStackY_100 [2];
  char acStackY_fe [2];
  undefined2 local_fc [115];
  undefined2 uStackY_16;
  undefined2 uStackY_14;
  
  FUN_10d0_029e();
  local_104[0] = s_testing_10e8_1013[0];
  local_104[1] = s_testing_10e8_1013[1];
  acStackY_102[0] = s_testing_10e8_1013[2];
  acStackY_102[1] = s_testing_10e8_1013[3];
  acStackY_100[0] = s_testing_10e8_1013[4];
  acStackY_100[1] = s_testing_10e8_1013[5];
  acStackY_fe[0] = s_testing_10e8_1013[6];
  acStackY_fe[1] = s_testing_10e8_1013[7];
  puVar3 = local_fc;
  for (iVar2 = 0x7b; iVar2 != 0; iVar2 = iVar2 + -1) {
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar1 = 0;
  }
  *(undefined1 *)puVar3 = 0;
  if (param_4 == 0x111) {
    if ((param_3 != 1) && (param_3 != 2)) {
      return 1;
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
        DAT_10e8_6110 = param_5;
        a0 = GETDLGITEM(param_5,0x2bd);
        SETFOCUS(a0);
        uStackY_14 = 0x13a8;
        uStackY_16 = 0x9c9;
        POSTMESSAGE(a0,0x401,0,(long)CONCAT22(unaff_SS,local_104));
      }
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
      goto LAB_1010_0a38;
    }
  }
  else {
    if (param_4 == 0x115) {
LAB_1010_0a38:
      return 1;
    }
    if (param_4 == 0x400) {
      ENDDIALOG(param_5,1);
    }
  }
  return 0;
}


