// FUN_1060_0222 at 1060:0222

void * __cdecl16far FUN_1060_0222(void *param_1,char *param_2)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  void *a0;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  for (iVar2 = 0;
      (*(char *)(iVar2 + (int)param_1) == ' ' || (*(char *)(iVar2 + (int)param_1) == ','));
      iVar2 = iVar2 + 1) {
  }
  iVar4 = 0;
  if ((((undefined1 *)&DAT_10e8_5d0e)[*(char *)(iVar2 + (int)param_1)] & 0x10) == 0) {
    pcVar1 = (char *)(iVar2 + (int)param_1);
    pcVar3 = param_2;
    do {
      *pcVar3 = *pcVar1;
      iVar2 = iVar2 + 1;
      pcVar3 = pcVar3 + 1;
      iVar4 = iVar4 + 1;
      pcVar1 = pcVar1 + 1;
    } while ((((undefined1 *)&DAT_10e8_5d0e)[*pcVar1] & 0x10) == 0);
  }
  param_2[iVar4] = '\0';
  a0 = (void *)CONCAT22((char *)s_Options_10e8_10e2 + 6,param_1);
  LSTRCPY(a0,(void *)CONCAT22((char *)s_Options_10e8_10e2 + 6,(void *)(iVar2 + (int)param_1)));
  return (void *)a0;
}


