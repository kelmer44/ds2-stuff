// FUN_1068_19ea at 1068:19ea

void * __cdecl16far FUN_1068_19ea(void *param_1,undefined2 param_2,char *param_3,undefined2 param_4)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  iVar4 = 0;
  if (*param_3 == ' ') {
    iVar4 = 0;
    do {
      iVar4 = iVar4 + 1;
    } while (param_3[iVar4] == ' ');
  }
  iVar2 = LSTRLEN((char *)CONCAT22(param_4,param_3));
  cVar1 = param_3[iVar2];
  while (cVar1 == ' ') {
    iVar2 = iVar2 + -1;
    cVar1 = param_3[iVar2];
  }
  param_3[iVar2 + 1] = ' ';
  param_3[iVar2 + 2] = ' ';
  pvVar3 = LSTRCAT((void *)CONCAT22(param_2,param_1),(char *)CONCAT22(param_4,param_3 + iVar4));
  return (void *)pvVar3;
}


