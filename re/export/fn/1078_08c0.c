// FUN_1078_08c0 at 1078:08c0

void __cdecl16far FUN_1078_08c0(int *param_1,undefined2 param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  bVar1 = false;
  if (param_5 == 0) {
    iVar3 = 0;
    if (0 < param_1[0xe]) {
      piVar2 = param_1 + 0xf;
      do {
        if (piVar2[1] == 0 && *piVar2 == 0) goto LAB_1078_0918;
        piVar2 = piVar2 + 2;
        iVar3 = iVar3 + 1;
      } while (iVar3 < param_1[0xe]);
    }
  }
  else {
    iVar3 = 0;
    if (0 < param_1[0xd7]) {
      piVar2 = param_1 + 0xd8;
      do {
        if (piVar2[1] == 0 && *piVar2 == 0) goto LAB_1078_0918;
        piVar2 = piVar2 + 2;
        iVar3 = iVar3 + 1;
      } while (iVar3 < param_1[0xd7]);
    }
  }
LAB_1078_091d:
  if (bVar1) {
    if (param_5 == 0) {
      param_1[iVar3 * 2 + 0xf] = param_3;
      param_1[iVar3 * 2 + 0x10] = param_4;
    }
    else {
      param_1[iVar3 * 2 + 0xd8] = param_3;
      param_1[iVar3 * 2 + 0xd9] = param_4;
    }
  }
  else if (param_5 == 0) {
    iVar3 = param_1[0xe];
    param_1[iVar3 * 2 + 0xf] = param_3;
    param_1[iVar3 * 2 + 0x10] = param_4;
    param_1[0xe] = param_1[0xe] + 1;
  }
  else if ((uint)param_1[0xd7] < *param_1 - 1U) {
    iVar3 = param_1[0xd7];
    param_1[iVar3 * 2 + 0xd8] = param_3;
    param_1[iVar3 * 2 + 0xd9] = param_4;
    param_1[0xd7] = param_1[0xd7] + 1;
  }
  else {
    FUN_1098_0248((char *)s_Sprite_list_is_full__10e8_1ff5,(char *)s_Options_10e8_10e2 + 6);
  }
  return;
LAB_1078_0918:
  bVar1 = true;
  goto LAB_1078_091d;
}


