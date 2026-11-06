// FUN_10d0_0f17 at 10d0:0f17

void __cdecl16near FUN_10d0_0f17(void)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  uint in_AX;
  uint in_CX;
  uint in_DX;
  int unaff_BP;
  int unaff_SI;
  byte *unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  
  while (((0 < unaff_SI || (in_AX != 0)) || (in_DX != 0))) {
    uVar2 = (ulong)in_DX;
    in_DX = in_DX / in_CX;
    uVar2 = uVar2 % (ulong)in_CX << 0x10 | (ulong)in_AX;
    in_AX = (uint)(uVar2 / in_CX);
    bVar3 = (char)(uVar2 % (ulong)in_CX) + 0x30;
    if (0x39 < bVar3) {
      bVar3 = bVar3 + *(char *)(unaff_BP + -3);
    }
    pbVar1 = unaff_DI;
    unaff_DI = unaff_DI + -1;
    *pbVar1 = bVar3;
    unaff_SI = unaff_SI + -1;
  }
  return;
}


