// FUN_1098_007c at 1098:007c

void __cdecl16far FUN_1098_007c(char *param_1,uint param_2)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  uint *puVar4;
  int iStackY_a;
  
  pcVar2 = param_1;
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  if ((int)param_2 < 0) {
    param_2 = -param_2;
    param_1 = (char *)CONCAT22(param_1._2_2_,(char *)param_1 + 1);
    *pcVar2 = '-';
  }
  bVar1 = false;
  puVar4 = (uint *)&DAT_10e8_23de;
  iStackY_a = 4;
  do {
    pcVar2 = param_1;
    iVar3 = 0;
    if (*puVar4 <= param_2) {
      do {
        iVar3 = iVar3 + 1;
        param_2 = param_2 - *puVar4;
      } while (*puVar4 <= param_2);
    }
    if ((iVar3 != 0) || (bVar1)) {
      bVar1 = true;
      param_1 = (char *)CONCAT22(param_1._2_2_,(char *)param_1 + 1);
      *pcVar2 = (char)iVar3 + '0';
    }
    puVar4 = puVar4 + 1;
    iStackY_a = iStackY_a + -1;
  } while (iStackY_a != 0);
  *param_1 = (char)param_2 + '0';
  ((char *)param_1)[1] = '\0';
  return;
}


