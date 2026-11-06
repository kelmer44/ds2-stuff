// FUN_10d0_0ff6 at 10d0:0ff6

void __cdecl16near FUN_10d0_0ff6(void)

{
  undefined2 uVar1;
  int iVar2;
  
  uVar1 = DAT_10e8_2a5a;
  LOCK();
  DAT_10e8_2a5a = 0x1000;
  UNLOCK();
  iVar2 = FUN_10d0_155e();
  DAT_10e8_2a5a = uVar1;
  if (iVar2 != 0) {
    return;
  }
  FUN_10d0_08c9();
  return;
}


