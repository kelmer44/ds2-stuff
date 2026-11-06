// FUN_1020_0a14 at 1020:0a14

int __cdecl16far FUN_1020_0a14(uint param_1)

{
  int iVar1;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  iVar1 = 0;
  if (param_1 != 0) {
    do {
      iVar1 = iVar1 + 1;
      param_1 = param_1 >> 1;
    } while (param_1 != 0);
  }
  return iVar1;
}


