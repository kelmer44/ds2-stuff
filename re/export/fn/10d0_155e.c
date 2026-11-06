// FUN_10d0_155e at 10d0:155e

ushort __cdecl16far FUN_10d0_155e(ushort param_1)

{
  ushort uVar1;
  int iVar2;
  int unaff_BP;
  int iVar3;
  char *pcVar4;
  
  iVar3 = unaff_BP + 1;
  pcVar4 = (char *)s_Options_10e8_10e2 + 6;
  if (param_1 == 0) {
    param_1 = 1;
  }
  while( true ) {
    LOCKSEGMENT(0xffff);
    uVar1 = LOCALALLOC(0x20,param_1);
    UNLOCKSEGMENT(0xffff);
    if (uVar1 != 0) {
      return uVar1;
    }
    if (DAT_10e8_2a5e == 0 && DAT_10e8_2a5c == (code *)0x0) break;
    iVar2 = (*DAT_10e8_2a5c)(0x13a8,param_1,0,pcVar4,iVar3);
    if (iVar2 == 0) {
      return uVar1;
    }
  }
  return 0;
}


