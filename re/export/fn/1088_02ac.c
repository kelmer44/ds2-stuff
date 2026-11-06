// FUN_1088_02ac at 1088:02ac

void __cdecl16far FUN_1088_02ac(int *param_1,void *param_2,undefined2 param_3,int param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined2 uVar5;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  iVar3 = 0;
  if (0 < *param_1) {
    piVar4 = (int *)param_1 + 0x145;
    uVar5 = param_1._2_2_;
    do {
      sVar1 = LSTRCMPI((void *)CONCAT22(param_3,param_2),(int *)CONCAT22(uVar5,piVar4));
      if (sVar1 == 0) {
        iVar2 = iVar3 * 4;
        if (((int *)param_1 + iVar3 * 2 + 0x985)[1] == 0 && ((int *)param_1)[iVar3 * 2 + 0x985] == 0
           ) {
          return;
        }
        if (param_4 != 0) {
          iVar2 = ((int *)param_1)[iVar3 * 2 + 0x986];
          FUN_1090_0068();
        }
        *(undefined2 *)((int)(int *)param_1 + iVar2 + 0x130c) = 0;
        *(undefined2 *)((int)(int *)param_1 + iVar2 + 0x130a) = 0;
        return;
      }
      piVar4 = piVar4 + 0x10;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *param_1);
  }
  return;
}


