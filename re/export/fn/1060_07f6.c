// FUN_1060_07f6 at 1060:07f6

undefined2 __cdecl16far FUN_1060_07f6(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  if (param_2 != 0 || param_1 != 0) {
    do {
      iVar2 = FUN_1060_0846(param_1,param_2);
      if (iVar2 != 0) {
        return 1;
      }
      piVar1 = (int *)(param_1 + 0x14);
      param_2 = *(int *)(param_1 + 0x16);
      param_1 = *piVar1;
    } while (param_2 != 0 || *piVar1 != 0);
  }
  return 0;
}


