// FUN_1088_04c8 at 1088:04c8

void __cdecl16far FUN_1088_04c8(char *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  iVar3 = 0;
  cVar2 = *param_1;
  while (cVar2 != '\0') {
    iVar3 = iVar3 + 1;
    if (('`' < *param_1) && (*param_1 < '{')) {
      *param_1 = *param_1 + -0x20;
    }
    param_1 = param_1 + 1;
    cVar2 = *param_1;
  }
  if (iVar3 < 0xc) {
    for (uVar4 = 0xcU - iVar3 >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
      pcVar1 = param_1;
      param_1 = param_1 + 2;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
    }
    if ((0xcU - iVar3 & 1) != 0) {
      *param_1 = '\0';
    }
  }
  return;
}


