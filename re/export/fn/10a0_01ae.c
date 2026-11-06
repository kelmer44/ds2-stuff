// FUN_10a0_01ae at 10a0:01ae

undefined2 __cdecl16far FUN_10a0_01ae(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  uVar1 = FUN_10a0_00be(param_1,param_2);
  if (0xff < (int)uVar1) {
    uVar1 = uVar1 + (uVar1 >> 8) * -0x100;
  }
  if ((int)uVar1 < 0x81) {
    iVar2 = FUN_10a0_005e(uVar1);
    if (param_2 < 0) {
      param_2 = -param_2;
    }
    param_2 = param_2 + (param_2 >> 0xf & 3U);
    uVar3 = (undefined2)(CONCAT22(param_2 >> 0xf,param_2 >> 2) / (long)iVar2);
  }
  else {
    iVar2 = FUN_10a0_0000(uVar1);
    if (param_1 < 0) {
      param_1 = -param_1;
    }
    param_1 = param_1 + (param_1 >> 0xf & 3U);
    uVar3 = (undefined2)(CONCAT22(param_1 >> 0xf,param_1 >> 2) / (long)iVar2);
  }
  return uVar3;
}


