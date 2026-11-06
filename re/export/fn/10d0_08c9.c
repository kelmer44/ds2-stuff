// FUN_10d0_08c9 at 10d0:08c9

undefined2 __cdecl16far FUN_10d0_08c9(void)

{
  char *pcVar1;
  undefined2 in_AX;
  char *pcVar2;
  int iVar3;
  char extraout_DH;
  char cVar4;
  int unaff_BP;
  int unaff_SI;
  char *pcVar5;
  undefined2 unaff_SS;
  
  FUN_10d0_0688();
  FUN_10d0_0fb9();
  pcVar2 = (char *)FUN_10d0_0f82(in_AX);
  if (pcVar2 != (char *)0x0) {
    iVar3 = 9;
    if (*pcVar2 == 'M') {
      iVar3 = 0xf;
    }
    pcVar2 = pcVar2 + iVar3;
    iVar3 = 0x22;
    pcVar5 = pcVar2;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar1 = pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (*pcVar1 != '\r');
    pcVar5[-1] = '\0';
  }
  cVar4 = extraout_DH;
  FATALAPPEXIT(0,(char *)CONCAT22((char *)s_Options_10e8_10e2 + 6,pcVar2));
  FATALEXIT(0xff);
  pcVar1 = (char *)(unaff_BP + unaff_SI + 0x1f);
  *pcVar1 = *pcVar1 + cVar4;
  return 0;
}


