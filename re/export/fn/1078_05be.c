// FUN_1078_05be at 1078:05be

void __cdecl16far FUN_1078_05be(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined2 uVar8;
  undefined4 uStackY_10;
  int iStackY_c;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  iVar3 = 999;
  iVar2 = 0;
  piVar5 = (int *)param_1;
  if (0 < *param_2) {
    do {
      iVar6 = piVar5[1];
      if (iVar6 == 0 && *piVar5 == 0) {
        if (iVar3 == 999) {
          iVar3 = iVar2;
        }
      }
      else if (iVar3 != 999) {
        ((int *)param_1)[iVar3 * 2] = *piVar5;
        ((int *)param_1 + iVar3 * 2)[1] = iVar6;
        iVar3 = iVar3 + 1;
      }
      iVar2 = iVar2 + 1;
      piVar5 = piVar5 + 2;
    } while (iVar2 < *param_2);
  }
  if (iVar2 < iVar3) {
    iVar3 = iVar2;
  }
  iVar2 = 0;
  *param_2 = iVar3;
  if (iVar3 != 1 && -1 < iVar3 + -1) {
    uStackY_10 = param_1;
    do {
      iVar7 = (int)((ulong)*(undefined4 *)uStackY_10 >> 0x10);
      iVar4 = (int)*(undefined4 *)uStackY_10;
      iVar6 = *(int *)(iVar4 + 0x30);
      iVar3 = iVar2 + 1;
      iStackY_c = iVar2;
      if (iVar3 < *param_2) {
        piVar5 = (int *)param_1 + iVar3 * 2;
        do {
          iVar1 = *(int *)((int)*(undefined4 *)piVar5 + 0x30);
          if (iVar1 < iVar6) {
            iVar6 = iVar1;
            iStackY_c = iVar3;
          }
          piVar5 = piVar5 + 2;
          iVar3 = iVar3 + 1;
        } while (iVar3 < *param_2);
      }
      iVar3 = ((int *)param_1)[iStackY_c * 2 + 1];
      uVar8 = (undefined2)((ulong)uStackY_10 >> 0x10);
      *uStackY_10 = ((int *)param_1)[iStackY_c * 2];
      ((int *)uStackY_10)[1] = iVar3;
      ((int *)param_1)[iStackY_c * 2] = iVar4;
      ((int *)param_1)[iStackY_c * 2 + 1] = iVar7;
      uStackY_10 = (int *)CONCAT22(uVar8,(int *)uStackY_10 + 2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *param_2 + -1);
  }
  return;
}


