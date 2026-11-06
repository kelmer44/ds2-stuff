// FUN_1060_07a8 at 1060:07a8

undefined2 __cdecl16far FUN_1060_07a8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  if (param_2 != 0 || param_1 != 0) {
    do {
      iVar1 = *(int *)(param_1 + 0x14);
      iVar2 = *(int *)(param_1 + 0x16);
      FUN_1090_0068(param_1,param_2);
      param_1 = iVar1;
      param_2 = iVar2;
    } while (iVar2 != 0 || iVar1 != 0);
  }
  return 1;
}


