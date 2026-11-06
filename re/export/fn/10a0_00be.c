// FUN_10a0_00be at 10a0:00be

uint __cdecl16far FUN_10a0_00be(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 extraout_DL;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  uVar3 = 0;
  if (param_1 < 0) {
    uVar3 = 4;
    param_1 = -param_1;
  }
  if (param_2 < 0) {
    uVar3 = uVar3 | 2;
    param_2 = -param_2;
  }
  if (param_2 == param_1) {
    if (param_1 == 0) {
      return 0xffff;
    }
    uVar4 = 0x80;
  }
  else {
    iVar2 = param_2;
    if (param_2 < param_1) {
      iVar2 = param_1;
      param_1 = param_2;
    }
    uVar3 = iVar2 >> 0xf;
    uVar1 = FUN_10d0_0490(0,param_1,iVar2,uVar3);
    iVar2 = CONCAT11(extraout_DL,(char)((uint)uVar1 >> 8));
    if (0x80 < (byte)uVar1) {
      iVar2 = iVar2 + 1;
    }
    uVar4 = (uint)*(byte *)(iVar2 + 0x266c);
  }
  switch(uVar3) {
  case 1:
    uVar4 = -uVar4;
  case 3:
    uVar4 = CONCAT11((char)(uVar4 >> 8) + '\x01',(char)uVar4);
    break;
  case 2:
    uVar4 = CONCAT11((char)(-uVar4 >> 8) + '\x02',(char)-uVar4);
    break;
  case 4:
    uVar4 = -uVar4;
    break;
  case 5:
    uVar4 = uVar4 - 0x100;
    break;
  case 6:
    uVar4 = uVar4 - 0x200;
    break;
  case 7:
    uVar4 = -CONCAT11(1,(char)uVar4);
  }
  if ((int)uVar4 < 0) {
    uVar4 = uVar4 + (0x3ff - uVar4 & 0xfc00);
  }
  if (0x400 < (int)uVar4) {
    uVar4 = uVar4 - (uVar4 - 1 & 0xfc00);
  }
  return uVar4;
}


