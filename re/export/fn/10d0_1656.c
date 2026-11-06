// FUN_10d0_1656 at 10d0:1656

int __cdecl16far FUN_10d0_1656(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (DAT_10e8_2a30 == 0) {
    uVar2 = 0x2a76;
  }
  else {
    uVar2 = 0x2a8e;
  }
  for (; uVar2 <= DAT_10e8_2a32; uVar2 = uVar2 + 8) {
    iVar1 = FUN_10d0_1694(uVar2);
    if (iVar1 != -1) {
      iVar3 = iVar3 + 1;
    }
  }
  return iVar3;
}


