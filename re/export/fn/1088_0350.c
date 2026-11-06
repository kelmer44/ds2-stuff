// FUN_1088_0350 at 1088:0350

undefined2 __cdecl16far
FUN_1088_0350(int param_1,undefined2 param_2,int param_3,void *param_4,undefined2 param_5)

{
  void *pvVar1;
  short sVar2;
  int iVar3;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  iVar3 = 0;
  if (0 < param_3) {
    pvVar1 = (void *)(param_1 + 0x28a);
    do {
      sVar2 = LSTRCMPI((void *)CONCAT22(param_2,pvVar1),(void *)CONCAT22(param_5,param_4));
      if (sVar2 == 0) {
        return 1;
      }
      pvVar1 = (void *)((int)pvVar1 + 0x20);
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_3);
  }
  return 0;
}


