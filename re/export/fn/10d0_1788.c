// FUN_10d0_1788 at 10d0:1788

int __cdecl16far FUN_10d0_1788(int param_1)

{
  int iVar1;
  
  if ((param_1 < 0) || (DAT_10e8_2940 <= param_1)) {
    DAT_10e8_292a = 9;
    iVar1 = -1;
  }
  else if (((DAT_10e8_2a30 == 0) || ((param_1 < DAT_10e8_293c && (2 < param_1)))) &&
          (0x31d < CONCAT11(DAT_10e8_2935,DAT_10e8_2934))) {
    iVar1 = DAT_10e8_293a;
    if (((*(byte *)(param_1 + 0x2942) & 1) == 0) || (iVar1 = FUN_10d0_190e(), iVar1 != 0)) {
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


