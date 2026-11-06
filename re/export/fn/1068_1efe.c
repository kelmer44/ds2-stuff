// FUN_1068_1efe at 1068:1efe

char * __cdecl16far FUN_1068_1efe(char *param_1,char *param_2,int param_3)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  int iVar3;
  int in_DX;
  char *pcVar4;
  int iVar5;
  undefined2 *puVar6;
  char *pcVar7;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  if (*param_2 == '(') {
    iVar3 = 1;
    iVar5 = 1;
    do {
      if (param_2[iVar5] == '(') {
        iVar3 = iVar3 + 1;
      }
      if (param_2[iVar5] == ')') {
        iVar3 = iVar3 + -1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar3 != 0);
    pcVar4 = param_2 + iVar5;
    pcVar4[-1] = '\0';
    in_DX = param_1._2_2_;
    FUN_1068_1e12(param_2 + 1,(char *)param_1 + 2);
  }
  else {
    iVar5 = 0;
    param_1[0] = '\x01';
    param_1[1] = '\0';
    ((char *)param_1 + 2)[0] = '\x01';
    ((char *)param_1 + 2)[1] = '\0';
    pcVar4 = (char *)param_1;
  }
  switch(param_3 + -7) {
  case 0:
  case 1:
  case 3:
  case 5:
    pcVar7 = (char *)LSTRCPYN((char *)CONCAT22(param_1._2_2_,(char *)param_1 + 0x2e),
                              (char *)CONCAT22((char *)s_Options_10e8_10e2 + 6,
                                               param_2 + param_1._2_2_),0x14);
    pcVar4 = (char *)pcVar7;
    break;
  case 4:
    if (param_2[iVar5] != ',') {
      pcVar4 = param_2 + iVar5;
      do {
        if (*pcVar4 == '\0') break;
        iVar5 = iVar5 + 1;
        pcVar4 = pcVar4 + 1;
      } while (*pcVar4 != ',');
    }
    if (param_2[iVar5] == ',') {
      param_2[iVar5] = '\0';
    }
    else {
      FUN_1098_0248((char *)s_internal_error__Talk_GetCondInfo_10e8_1f55,
                    (char *)s_Options_10e8_10e2 + 6);
    }
    uVar2 = FUN_1090_0000(0x28,0);
    *(undefined2 *)((char *)param_1 + 0x2a) = uVar2;
    *(int *)((char *)param_1 + 0x2c) = in_DX;
    puVar6 = *(undefined2 **)((char *)param_1 + 0x2a);
    for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar1 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar1 = 0;
    }
    uVar2 = FUN_1060_02bc();
    **(undefined2 **)((char *)param_1 + 0x2a) = uVar2;
    pcVar4 = (char *)FUN_1068_1e12(param_2 + iVar5 + 1,*(int *)((char *)param_1 + 0x2a) + 4,
                                   *(undefined2 *)((char *)param_1 + 0x2c),
                                   *(int *)((char *)param_1 + 0x2a) + 2,
                                   *(undefined2 *)((char *)param_1 + 0x2c));
  }
  return pcVar4;
}


