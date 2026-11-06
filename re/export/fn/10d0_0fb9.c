// FUN_10d0_0fb9 at 10d0:0fb9

void __stdcall16far FUN_10d0_0fb9(undefined2 param_1)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  undefined2 unaff_ES;
  
  if (DAT_10e8_2a30 != 0) {
    pcVar2 = (char *)FUN_10d0_0f82(param_1);
    if (pcVar2 != (char *)0x0) {
      iVar3 = -1;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar1 = pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (*pcVar1 != '\0');
      FUN_10d0_0f7b();
    }
  }
  return;
}


