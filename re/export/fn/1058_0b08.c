// FUN_1058_0b08 at 1058:0b08

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_1058_0b08(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  iVar1 = FUN_1058_0922(param_1,param_2,param_3,0);
  if ((iVar1 == 0) && (iVar1 = FUN_1060_0b00((char *)s_ShowMike_10e8_1cdb), iVar1 != 0)) {
    DAT_10e8_097c = -1;
    DAT_10e8_9b9a = DAT_10e8_3cae;
    DAT_10e8_9b98 = DAT_10e8_3cb0;
    DAT_10e8_6112 = 8;
    FUN_1010_07c6(param_1,param_2,param_3,0);
    if (DAT_10e8_097c < 0) {
      DAT_10e8_0086 = DAT_10e8_3cae;
      DAT_10e8_0088 = DAT_10e8_3cb0;
    }
    else {
      DAT_10e8_0086 = (DAT_10e8_3cb2 % DAT_10e8_16e4) * 10 + -0x4b;
      uVar2 = (undefined2)((ulong)_DAT_10e8_6892 >> 0x10);
      iVar1 = *(int *)((int)_DAT_10e8_6892 + 0xf4c);
      DAT_10e8_0088 =
           iVar1 / 2 + iVar1 * (DAT_10e8_3cb2 / DAT_10e8_16e4) +
           *(int *)((int)_DAT_10e8_6892 + 0xf4a);
    }
    FUN_1060_0b26((char *)s_LastAction_10e8_1ce4,4);
    return 0;
  }
  return 1;
}


