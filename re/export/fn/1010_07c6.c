// FUN_1010_07c6 at 1010:07c6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1010_07c6(undefined2 param_1,int param_2,int param_3,int param_4)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  uVar1 = DAT_10e8_036e;
  if ((param_4 == 0) && (DAT_10e8_0054 == 0)) {
    DAT_10e8_036e = 1;
    iVar2 = (int)_DAT_10e8_6892;
    uVar3 = (undefined2)((ulong)_DAT_10e8_6892 >> 0x10);
    if ((param_2 / 10 != DAT_10e8_3cae / 10) ||
       ((param_3 - *(int *)(iVar2 + 0xf4a)) / *(int *)(iVar2 + 0xf4c) !=
        (DAT_10e8_3cb0 - *(int *)(iVar2 + 0xf4a)) / *(int *)(iVar2 + 0xf4c))) {
      FUN_1040_011a(param_1,(param_3 - *(int *)(iVar2 + 0xf4a)) / *(int *)(iVar2 + 0xf4c) + 8,
                    (DAT_10e8_3cb0 - *(int *)(iVar2 + 0xf4a)) / *(int *)(iVar2 + 0xf4c),
                    param_2 / 10 + 8);
    }
  }
  else {
    DAT_10e8_9b9a = param_2;
    DAT_10e8_3cae = param_2;
    DAT_10e8_9b98 = param_3;
    DAT_10e8_3cb0 = param_3;
  }
  DAT_10e8_007e = 0x7fff;
  DAT_10e8_036e = uVar1;
  FUN_1060_0b26((char *)s_GoingOut_10e8_100a,0);
  return;
}


