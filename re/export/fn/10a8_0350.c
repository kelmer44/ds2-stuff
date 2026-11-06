// FUN_10a8_0350 at 10a8:0350

undefined2 __cdecl16far FUN_10a8_0350(int *param_1,undefined2 param_2)

{
  int iVar1;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  if (param_1[5] != 0 || param_1[4] != 0) {
    WaveMixFreeWave_inferred(DAT_10e8_004a,(void *)CONCAT22(param_1[5],(void *)param_1[4]));
    param_1[5] = 0;
    param_1[4] = 0;
  }
  if (param_1[1] != 0 || *param_1 != 0) {
    iVar1 = FUN_10a8_0246(*param_1,param_1[1]);
    if (iVar1 == 0) {
      FUN_1090_0068(*param_1,param_1[1]);
    }
    param_1[1] = 0;
    *param_1 = 0;
  }
  param_1[3] = 0;
  param_1[2] = 0;
  return 1;
}


