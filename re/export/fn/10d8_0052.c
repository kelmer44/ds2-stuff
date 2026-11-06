// FUN_10d8_0052 at 10d8:0052

int __cdecl16far FUN_10d8_0052(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  uVar6 = (uint)((ulong)param_1 >> 0x10);
  uVar5 = (uint)((ulong)param_2 >> 0x10);
  pcVar4 = (char *)((uint)param_1 + 2);
  if (0xfffd < (uint)param_1) {
    uVar6 = uVar6 + 8;
  }
  pcVar3 = (char *)((uint)param_2 + 2);
  if (0xfffd < (uint)param_2) {
    uVar5 = uVar5 + 8;
  }
  iVar2 = 0xc;
  do {
    while( true ) {
      uVar1 = (uint)(byte)(*pcVar4 - *pcVar3);
      if ((byte)(*pcVar4 - *pcVar3) != 0) goto LAB_10d8_00ab;
      pcVar4 = pcVar4 + 1;
      if (pcVar4 == (char *)0x0) {
        uVar1 = uVar6 + 8;
        uVar6 = uVar1;
      }
      pcVar3 = pcVar3 + 1;
      if (pcVar3 == (char *)0x0) break;
      iVar2 = iVar2 + -1;
      if (iVar2 == 0) goto LAB_10d8_00ab;
    }
    uVar1 = uVar5 + 8;
    iVar2 = iVar2 + -1;
    uVar5 = uVar1;
  } while (iVar2 != 0);
LAB_10d8_00ab:
  return (int)(char)uVar1;
}


