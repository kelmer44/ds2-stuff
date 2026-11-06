// FUN_1060_0d2e at 1060:0d2e

int __cdecl16far FUN_1060_0d2e(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iStackY_12;
  int iStackY_a;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  iStackY_12 = 0;
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
      iVar3 = 1;
      if (*(char *)(iStackY_a + param_1) == '-') {
        iVar3 = -1;
        iStackY_a = iStackY_a + 1;
      }
      iVar5 = 0;
      while( true ) {
        cVar2 = *(char *)(param_1 + iStackY_a);
        iStackY_a = iStackY_a + 1;
        if ((cVar2 < '0') || ('9' < cVar2)) break;
        iVar5 = (int)cVar2 + iVar5 * 10 + -0x30;
      }
      if (*(char *)(param_1 + iStackY_a + -1) == '(') {
        iVar6 = 0;
        iVar4 = iStackY_a;
        while( true ) {
          cVar2 = *(char *)(param_1 + iVar4);
          iStackY_a = iVar4 + 1;
          if ((cVar2 < '0') || ('9' < cVar2)) break;
          iVar6 = (int)cVar2 + iVar6 * 10 + -0x30;
          iVar4 = iStackY_a;
        }
        if (*(char *)(iStackY_a + param_1 + -1) == ')') {
          if (0 < iVar6) {
            piVar7 = (int *)param_2;
            for (iVar4 = iVar6; iVar4 != 0; iVar4 = iVar4 + -1) {
              piVar1 = piVar7;
              piVar7 = piVar7 + 1;
              *piVar1 = iVar3 * iVar5;
            }
            iStackY_12 = iStackY_12 + iVar6;
            param_2 = (int *)CONCAT22(param_2._2_2_,(int *)param_2 + iVar6);
          }
        }
        else {
          iVar3 = iVar3 * iVar5;
          if (*(char *)(iStackY_a + param_1) == '-') {
            iVar5 = -1;
            iStackY_a = iVar4 + 2;
          }
          else {
            iVar5 = 1;
          }
          iVar4 = 0;
          while( true ) {
            cVar2 = *(char *)(iStackY_a + param_1);
            iStackY_a = iStackY_a + 1;
            if ((cVar2 < '0') || ('9' < cVar2)) break;
            iVar4 = (int)cVar2 + iVar4 * 10 + -0x30;
          }
          if ((*(char *)(param_1 + iStackY_a + -1) == ')') && (0 < iVar6)) {
            iStackY_12 = iStackY_12 + iVar6;
            do {
              piVar7 = (int *)param_2 + 1;
              *(int *)param_2 = iVar3;
              iVar3 = iVar3 + iVar5 * iVar4;
              iVar6 = iVar6 + -1;
              param_2._0_2_ = piVar7;
            } while (iVar6 != 0);
            param_2 = (int *)CONCAT22(param_2._2_2_,piVar7);
          }
        }
      }
      else {
        param_2 = (int *)CONCAT22(param_2._2_2_,(int *)param_2 + 1);
        *piVar1 = iVar3 * iVar5;
        iStackY_12 = iStackY_12 + 1;
      }
    } while (iStackY_12 < param_3);
  }
  if (iStackY_12 < param_3) {
    for (param_3 = param_3 - iStackY_12; param_3 != 0; param_3 = param_3 + -1) {
      piVar1 = (int *)param_2;
      param_2._0_2_ = (int *)param_2 + 1;
      *piVar1 = 0;
    }
  }
  return iStackY_12;
}


