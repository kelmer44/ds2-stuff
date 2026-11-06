// FUN_10d0_1787 at 10d0:1787

int FUN_10d0_1787(undefined2 param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 < 0) || (DAT_10e8_2940 <= param_2)) {
    DAT_10e8_292a = 9;
    iVar1 = -1;
  }
  else if (((DAT_10e8_2a30 == 0) || ((param_2 < DAT_10e8_293c && (2 < param_2)))) &&
          (0x31d < CONCAT11(DAT_10e8_2935,DAT_10e8_2934))) {
    iVar1 = DAT_10e8_293a;
    if (((*(byte *)(param_2 + 0x2942) & 1) == 0) || (iVar1 = FUN_10d0_190e(), iVar1 != 0)) {
      DAT_10e8_293a = iVar1;
      DAT_10e8_292a = 9;
      iVar1 = -1;
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


