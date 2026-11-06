// FUN_1068_1dcc at 1068:1dcc

uint __cdecl16far FUN_1068_1dcc(undefined2 param_1)

{
  uint uVar1;
  
  FUN_10d0_029e();
  uVar1 = FUN_1060_02bc(param_1);
  if (uVar1 == 0) {
    FUN_1060_0c44(param_1,&stack0xfffa);
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 | 0x4000;
  }
  return uVar1;
}


