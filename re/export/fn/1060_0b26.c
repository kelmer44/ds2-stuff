// FUN_1060_0b26 at 1060:0b26

bool __cdecl16far FUN_1060_0b26(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  iVar2 = FUN_1060_02bc(param_1);
  iVar1 = DAT_10e8_5cda;
  if (iVar2 < DAT_10e8_5cda) {
    ((undefined2 *)&DAT_10e8_5e14)[iVar2] = param_2;
  }
  return iVar2 < iVar1;
}


