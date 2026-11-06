// FUN_10d0_138c at 10d0:138c

void __cdecl16near FUN_10d0_138c(void)

{
  ushort a0;
  int in_AX;
  ushort uVar1;
  undefined2 uVar2;
  int in_BX;
  long lVar3;
  
  if ((*(byte *)(in_BX + 2) & 4) != 0) {
LAB_10d0_13e7:
    FUN_10d0_08c9();
    return;
  }
  a0 = *(ushort *)(in_BX + 6);
  uVar2 = 0;
  if (in_AX == 0) {
    if ((DAT_10d0_0010 & 0x10) != 0) {
      return;
    }
    uVar2 = 1;
  }
  uVar1 = 2;
  if ((DAT_10d0_0010 & 1) == 0) {
    uVar1 = 0x20;
  }
  uVar1 = GLOBALREALLOC(a0,CONCAT22(uVar2,in_AX),uVar1);
  if (uVar1 != 0) {
    if ((uVar1 != a0) || (lVar3 = GLOBALSIZE(a0), lVar3 == 0)) goto LAB_10d0_13e7;
    if ((*(byte *)(in_BX + 2) & 4) != 0) {
      *(int *)(in_BX + -2) = in_AX + -1;
    }
  }
  return;
}


