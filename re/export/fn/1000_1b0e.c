// FUN_1000_1b0e at 1000:1b0e

char * __cdecl16far FUN_1000_1b0e(char *param_1,char **param_2)

{
  byte bVar1;
  char *pcVar2;
  char *pcVar3;
  char *local_10;
  char *pcStack_e;
  char **ppcStack_c;
  char **ppcStack_a;
  
  FUN_10d0_029e();
  pcStack_e = param_1;
  pcVar3 = param_1;
  ppcStack_c = param_2;
  while( true ) {
    ppcStack_a = &local_10;
    local_10 = (char *)s_Options_10e8_10d0;
    pcVar2 = (char *)FUN_1000_1a98();
    if (local_10 == (char *)0x0) break;
    if ((*pcVar2 == '/') || (*pcVar2 == '-')) {
      bVar1 = pcVar2[1];
      if (bVar1 == 0x73) {
        if (pcVar2[2] == 't') {
          DAT_10e8_0050 = 1;
        }
        if (pcVar2[2] == 'c') {
          DAT_10e8_0052 = 1;
        }
        if (pcVar2[2] == 'w') {
          DAT_10e8_0054 = 1;
        }
      }
      else if (bVar1 < 0x74) {
        if (bVar1 == 100) {
          if (pcVar2[2] == 'a') {
            DAT_10e8_3ca8 = 1;
            DAT_10e8_3ca6 = 1;
            DAT_10e8_3cac = 1;
            DAT_10e8_3caa = 1;
          }
          if (pcVar2[2] == 'm') {
            DAT_10e8_0056 = 1;
          }
        }
        else if (((bVar1 == 0x70) && ('/' < pcVar2[2])) && (pcVar2[2] < ':')) {
          DAT_10e8_0062 = pcVar2[2] + -0x30;
        }
      }
      pcStack_e = pcVar2 + (int)local_10;
    }
    else {
      pcStack_e = pcVar2;
      if ((param_1 != pcVar3) || (param_2 != ppcStack_a)) {
        *pcVar3 = ' ';
        pcVar3 = pcVar3 + 1;
      }
      while (local_10 != (char *)0x0) {
        *pcVar3 = *pcStack_e;
        pcStack_e = pcStack_e + 1;
        pcVar3 = pcVar3 + 1;
        local_10 = local_10 + -1;
      }
    }
  }
  *pcVar3 = '\0';
  return pcStack_e;
}


