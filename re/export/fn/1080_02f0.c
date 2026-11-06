// FUN_1080_02f0 at 1080:02f0

void __cdecl16far FUN_1080_02f0(ushort param_1)

{
  int iVar1;
  char *pcVar2;
  ushort a1;
  int iVar3;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  GETSYSTEMPALETTEENTRIES(param_1,0,0x100,&DAT_10e8_6c9e);
  if (DAT_10e8_200a != 0) {
    SELECTPALETTE(param_1,DAT_10e8_200a,0);
    iVar3 = 0x100;
    do {
      pcVar2 = (char *)&DAT_10e8_6c9e;
      iVar1 = 0x100;
      do {
        if (*pcVar2 != '\0') {
          *pcVar2 = *pcVar2 + -1;
        }
        if (pcVar2[1] != '\0') {
          pcVar2[1] = pcVar2[1] + -1;
        }
        if (pcVar2[2] != '\0') {
          pcVar2[2] = pcVar2[2] + -1;
        }
        pcVar2[3] = '\x01';
        pcVar2 = pcVar2 + 4;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      a1 = DAT_10e8_200a;
      ANIMATEPALETTE(DAT_10e8_200a,1,0xfe,&DAT_10e8_6ca2);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (a1 != 0) {
      SELECTPALETTE(param_1,a1,0);
    }
  }
  return;
}


