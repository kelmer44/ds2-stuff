// FUN_1080_0d56 at 1080:0d56

undefined2 __cdecl16far
FUN_1080_0d56(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,int param_6,int param_7,undefined2 param_8,undefined2 param_9,
             int param_10,undefined2 param_11)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  iVar1 = *(int *)(param_7 + 2);
  uVar2 = *(undefined2 *)(param_7 + 4);
  if (param_6 < 0) {
    param_6 = 0;
  }
  if (param_10 < 0) {
    param_10 = 0;
  }
  FUN_10b0_0000(param_1,param_2,param_3,param_4,param_5,param_6,*(int *)(iVar1 + 10) + iVar1,uVar2,
                iVar1 + 0xe,uVar2,param_9,param_10,*(undefined2 *)(iVar1 + 0x12),
                *(undefined2 *)(iVar1 + 0x16),param_11,0);
  return 1;
}


