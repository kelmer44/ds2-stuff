// FUN_10d0_046e at 10d0:046e

void __stdcall16far FUN_10d0_046e(undefined2 *param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  puVar1 = (undefined2 *)param_1;
  uVar3 = FUN_10d0_052a(*param_1,puVar1[1],param_2,param_3);
  *puVar1 = (int)uVar3;
  puVar1[1] = (int)((ulong)uVar3 >> 0x10);
  return;
}


