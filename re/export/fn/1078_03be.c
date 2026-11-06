// FUN_1078_03be at 1078:03be

void __cdecl16far FUN_1078_03be(uint *param_1,undefined2 param_2)

{
  uint uVar1;
  uint *puVar2;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  *param_1 = 100;
  uVar1 = 0;
  puVar2 = param_1 + 0xf;
  do {
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[0xca] = 0;
    puVar2[0xc9] = 0;
    puVar2 = puVar2 + 2;
    uVar1 = uVar1 + 1;
  } while (uVar1 < *param_1);
  param_1[0xe] = 0;
  param_1[0xd7] = 0;
  if (DAT_10e8_1fd0 != 0 || DAT_10e8_1fce != 0) {
    FUN_1090_0068(DAT_10e8_1fce,DAT_10e8_1fd0);
    DAT_10e8_1fd0 = 0;
    DAT_10e8_1fce = 0;
  }
  return;
}


