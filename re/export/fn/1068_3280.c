// FUN_1068_3280 at 1068:3280

void __cdecl16far FUN_1068_3280(undefined1 *param_1,undefined1 param_2,int param_3)

{
  undefined1 *puVar1;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  while (puVar1 = param_1, param_3 != 0) {
    if ((undefined1 *)param_1 == (undefined1 *)0xffff) {
      param_1._2_2_ = param_1._2_2_ + 0x80;
    }
    param_1 = (undefined1 *)CONCAT22(param_1._2_2_,(undefined1 *)param_1 + 1);
    *puVar1 = param_2;
    param_3 = param_3 + -1;
  }
  return;
}


