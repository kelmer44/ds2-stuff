// FUN_1068_2074 at 1068:2074

int __cdecl16far FUN_1068_2074(int param_1,int param_2,void *param_3,undefined2 param_4)

{
  int iVar1;
  short sVar2;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  FUN_1060_0000(param_3);
  iVar1 = param_1;
  if (param_2 != 0 || param_1 != 0) {
    do {
      sVar2 = LSTRCMPI((void *)CONCAT22(param_2,(void *)(iVar1 + 0x2b)),
                       (void *)CONCAT22(param_4,param_3));
      if (sVar2 == 0) {
        return iVar1;
      }
      param_1 = *(int *)(iVar1 + 0x3f);
      param_2 = *(int *)(iVar1 + 0x41);
      iVar1 = param_1;
    } while (param_2 != 0 || param_1 != 0);
  }
  return param_1;
}


