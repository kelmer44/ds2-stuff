// FUN_10d0_1412 at 10d0:1412

int __cdecl16far FUN_10d0_1412(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = FUN_10d0_14f4(0);
  }
  else {
    iVar1 = FUN_10d0_1468(param_1);
    if (iVar1 == 0) {
      iVar1 = 0;
      if ((*(byte *)(param_1 + 0xa0) & 0x40) != 0) {
        iVar1 = FUN_10d0_1788(*(undefined1 *)(param_1 + 7));
        iVar1 = -(uint)(iVar1 != 0);
      }
    }
    else {
      iVar1 = -1;
    }
  }
  return iVar1;
}


