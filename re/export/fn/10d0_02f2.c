// FUN_10d0_02f2 at 10d0:02f2

undefined2 __cdecl16far FUN_10d0_02f2(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined2 uVar2;
  
  DAT_10e8_37ec = 0x42;
  DAT_10e8_37ea = param_1;
  DAT_10e8_37e8 = 0x7fff;
  DAT_10e8_37e6 = param_1;
  uVar2 = FUN_10d0_0a6c();
  DAT_10e8_37e8 = DAT_10e8_37e8 + -1;
  if (DAT_10e8_37e8 < 0) {
    FUN_10d0_096a(0,(undefined2 *)&DAT_10e8_37e6);
  }
  else {
    puVar1 = DAT_10e8_37e6;
    DAT_10e8_37e6 = DAT_10e8_37e6 + 1;
    *puVar1 = 0;
  }
  return uVar2;
}


