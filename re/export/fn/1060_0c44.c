// FUN_1060_0c44 at 1060:0c44

int __cdecl16far FUN_1060_0c44(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iStackY_e;
  int iStackY_a;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  iStackY_e = 0;
  iStackY_a = 0;
  if (0 < param_3) {
    do {
      piVar1 = param_2;
      if (*(char *)(iStackY_a + param_1) == '\0') break;
      for (; (((*(char *)(iStackY_a + param_1) == ' ' || (*(char *)(iStackY_a + param_1) == ',')) ||
              (*(char *)(iStackY_a + param_1) == '\r')) || (*(char *)(iStackY_a + param_1) == '\n'))
          ; iStackY_a = iStackY_a + 1) {
      }
      if (*(char *)(iStackY_a + param_1) == '\0') break;
      iVar4 = 1;
      if (*(char *)(iStackY_a + param_1) == '-') {
        iVar4 = -1;
        iStackY_a = iStackY_a + 1;
      }
      iVar3 = 0;
      while( true ) {
        cVar2 = *(char *)(iStackY_a + param_1);
        iStackY_a = iStackY_a + 1;
        if ((cVar2 < '0') || ('9' < cVar2)) break;
        iVar3 = (int)cVar2 + iVar3 * 10 + -0x30;
      }
      param_2 = (int *)CONCAT22(param_2._2_2_,(int *)param_2 + 1);
      *piVar1 = iVar4 * iVar3;
      iStackY_e = iStackY_e + 1;
    } while (iStackY_e < param_3);
  }
  if (iStackY_e < param_3) {
    for (param_3 = param_3 - iStackY_e; param_3 != 0; param_3 = param_3 + -1) {
      piVar1 = (int *)param_2;
      param_2._0_2_ = (int *)param_2 + 1;
      *piVar1 = 0;
    }
  }
  return iStackY_e;
}


