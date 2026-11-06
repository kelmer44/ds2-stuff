// FUN_1058_0ca4 at 1058:0ca4

void __cdecl16far FUN_1058_0ca4(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  pcVar6 = (char *)s_put_vfw_destination_at_10e8_1d0c;
  pcVar7 = param_1;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar2 = pcVar7;
    pcVar7 = pcVar7 + 2;
    pcVar1 = pcVar6;
    pcVar6 = pcVar6 + 2;
    *(undefined2 *)pcVar2 = *(undefined2 *)pcVar1;
  }
  if (DAT_10e8_0066 == 0x2e4) {
    pcVar6 = (char *)s_0_0_320_240_10e8_1d40;
  }
  else if (DAT_10e8_0066 == 0x2e5) {
    pcVar6 = (char *)0x1d24;
  }
  else {
    if (DAT_10e8_0066 != 0x2e6) {
      return;
    }
    pcVar6 = (char *)0x1d34;
  }
  uVar4 = 0xffff;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar1 = pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (*pcVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar6 + -uVar4;
  iVar3 = -1;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar1 = param_1;
    param_1 = param_1 + 1;
  } while (*pcVar1 != '\0');
  param_1 = param_1 + -1;
  for (uVar5 = uVar4 >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
    pcVar2 = param_1;
    param_1 = param_1 + 2;
    pcVar1 = pcVar6;
    pcVar6 = pcVar6 + 2;
    *(undefined2 *)pcVar2 = *(undefined2 *)pcVar1;
  }
  for (uVar4 = (uint)((uVar4 & 1) != 0); uVar4 != 0; uVar4 = uVar4 - 1) {
    pcVar2 = param_1;
    param_1 = param_1 + 1;
    pcVar1 = pcVar6;
    pcVar6 = pcVar6 + 1;
    *pcVar2 = *pcVar1;
  }
  return;
}


