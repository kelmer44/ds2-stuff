// FUN_10d0_17f8 at 10d0:17f8

void __cdecl16near FUN_10d0_17f8(undefined2 *param_1)

{
  if (((*(byte *)(param_1 + 3) & 0x83) != 0) && ((*(byte *)(param_1 + 3) & 8) != 0)) {
    FUN_10d0_15ba(param_1[2]);
    *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xf7;
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}


