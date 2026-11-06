// FUN_10a8_0c72 at 10a8:0c72

int __cdecl16far FUN_10a8_0c72(int param_1,undefined2 param_2,undefined2 *param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int iVar5;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  uVar4 = 0;
  uVar3 = 0x16;
  uVar1 = FUN_10d0_052a(*param_3,param_3[1],DAT_10e8_6114,DAT_10e8_6114 >> 0xf);
  lVar2 = FUN_10d0_0490(uVar1,uVar3,uVar4);
  iVar5 = (int)lVar2;
  lVar2 = lVar2 + CONCAT22(param_2,param_1);
  *param_3 = (int)lVar2;
  param_3[1] = (int)((ulong)lVar2 >> 0x10);
  if (DAT_10e8_004c == 0x3d5) {
    iVar5 = iVar5 + 0xfa;
  }
  else if (DAT_10e8_0064 == 0x2be) {
    iVar5 = iVar5 + 1000;
  }
  else if (DAT_10e8_0064 == 0x2bf) {
    iVar5 = iVar5 + 0x1194;
  }
  else if (DAT_10e8_0064 == 0x2c0) {
    iVar5 = iVar5 + 10000;
  }
  else if (DAT_10e8_0064 == 0x2c1) {
    iVar5 = iVar5 + -0x7960;
  }
  return iVar5 + param_1;
}


