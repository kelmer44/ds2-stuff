// FUN_1000_1a98 at 1000:1a98

char * __cdecl16far FUN_1000_1a98(char *param_1,undefined2 param_2,int *param_3)

{
  char cVar1;
  char *pcVar2;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  *param_3 = 0;
  for (; (*param_1 == ' ' || (*param_1 == '\t')); param_1 = param_1 + 1) {
  }
  if (*param_1 == '\0') {
    param_1 = (char *)0x0;
  }
  else {
    cVar1 = *param_1;
    pcVar2 = param_1;
    while (((cVar1 != ' ' && (*pcVar2 != '\t')) && (*pcVar2 != '\0'))) {
      pcVar2 = pcVar2 + 1;
      cVar1 = *pcVar2;
    }
    *param_3 = (int)pcVar2 - (int)param_1;
  }
  return param_1;
}


