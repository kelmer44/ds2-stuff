// FUN_1080_0044 at 1080:0044

void __cdecl16far FUN_1080_0044(char *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  undefined2 uVar5;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  uVar3 = 0xffff;
  pcVar4 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar1 = pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar1 != '\0');
  param_1 = param_1 + (~uVar3 - 1);
  uVar5 = (undefined2)((ulong)param_2 >> 0x10);
  pcVar4 = (char *)param_2;
  cVar2 = *param_2;
  while (cVar2 != '\0') {
    *param_1 = *pcVar4;
    param_1 = param_1 + 1;
    pcVar4 = pcVar4 + 1;
    cVar2 = *pcVar4;
  }
  *param_1 = *pcVar4;
  return;
}


