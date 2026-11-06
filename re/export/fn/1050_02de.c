// FUN_1050_02de at 1050:02de

void __cdecl16far FUN_1050_02de(undefined2 *param_1,int param_2)

{
  undefined2 *puVar1;
  int iVar2;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  if (param_2 != 0 || param_1 != (undefined2 *)0x0) {
    do {
      if (param_1[9] != 0 || param_1[8] != 0) {
        FUN_1090_0068(param_1[8],param_1[9]);
      }
      FUN_1060_07a8(*param_1,param_1[1]);
      puVar1 = (undefined2 *)*(undefined2 *)((int)param_1 + 0x8f);
      iVar2 = *(int *)((int)param_1 + 0x91);
      FUN_1090_0068(param_1,param_2);
      param_1 = puVar1;
      param_2 = iVar2;
    } while (iVar2 != 0 || puVar1 != (undefined2 *)0x0);
  }
  return;
}


