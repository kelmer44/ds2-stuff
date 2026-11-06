// FUN_1010_0b72 at 1010:0b72

void __cdecl16far FUN_1010_0b72(uint *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  puVar1 = param_1;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + param_2;
  param_1[1] = param_1[1] + ((int)param_2 >> 0xf) + (uint)CARRY2(uVar2,param_2);
  if ((int)param_1[1] < 0) {
    param_1[1] = 0;
    *param_1 = 0;
    return;
  }
  if ((-1 < (int)param_1[1]) && ((0 < (int)param_1[1] || (0xff < *param_1)))) {
    *param_1 = 0xff;
    param_1[1] = 0;
  }
  return;
}


