// FUN_1008_0ece at 1008:0ece

void __cdecl16far FUN_1008_0ece(void)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  iVar2 = FUN_1060_0b00(0xdb6);
  if (((iVar2 == 0) && (iVar2 = FUN_1060_0b00(0xdbe), iVar2 == 0)) &&
     (iVar2 = FUN_1060_0b00(0xdc7), iVar2 != 0)) {
    iVar2 = FUN_1060_02bc(0xdd0);
    if (*(char *)(iVar2 * 0x19 + 0x5f0) == 'H') {
      piVar4 = (undefined2 *)&DAT_10e8_5e14 + iVar2;
      pcVar3 = (char *)(iVar2 * 0x19 + 0x5f1);
      do {
        if (((*pcVar3 != 'a') || (pcVar3[1] != 'v')) || (pcVar3[2] != 'e')) break;
        if (*piVar4 == 0) {
          *piVar4 = 1;
        }
        piVar4 = piVar4 + 1;
        pcVar1 = pcVar3 + 0x18;
        pcVar3 = pcVar3 + 0x19;
      } while (*pcVar1 == 'H');
    }
    FUN_1060_0b26(0xddb,1);
  }
  return;
}


