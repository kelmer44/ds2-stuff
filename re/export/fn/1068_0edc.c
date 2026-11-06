// FUN_1068_0edc at 1068:0edc

uint __cdecl16far FUN_1068_0edc(undefined4 param_1,int *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined2 uVar6;
  uint uVar7;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  if (*param_2 == 0) {
    FUN_1098_0248((char *)s_Internal_error__compute_list_10e8_1def,(char *)s_Options_10e8_10e2 + 6);
  }
  *param_2 = *param_2 + -1;
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  uVar5 = *(uint *)(*param_2 * 2 + iVar4);
  if ((uVar5 & 0x8000) == 0) {
    if ((uVar5 & 0x4000) != 0) {
      uVar5 = ((undefined2 *)&DAT_10e8_5e14)[uVar5 ^ 0xc000];
    }
    goto LAB_1068_1002;
  }
  uVar7 = uVar5;
  uVar2 = FUN_1068_0edc(iVar4,uVar6,(int *)param_2,param_2._2_2_);
  uVar5 = param_2._2_2_;
  uVar3 = FUN_1068_0edc(iVar4,uVar6,(int *)param_2);
  if ((uVar7 ^ 0x8000) == 0x7c) {
    uVar5 = uVar2 | uVar3;
    goto LAB_1068_1002;
  }
  if (0x7c < (uVar7 ^ 0x8000)) goto LAB_1068_1002;
  bVar1 = (byte)uVar7;
  if (bVar1 == 0x2f) {
    if (uVar2 == 0) {
      FUN_1098_0248((char *)s_Internal_error__divide_by_zero_10e8_1e0c,
                    (char *)s_Options_10e8_10e2 + 6);
      return 0;
    }
    uVar5 = (int)uVar3 / (int)uVar2;
    goto LAB_1068_1002;
  }
  if (bVar1 < 0x30) {
    if (bVar1 == 0x26) {
      uVar5 = uVar2 & uVar3;
    }
    else if (bVar1 == 0x2a) {
      uVar5 = uVar2 * uVar3;
    }
    else if (bVar1 == 0x2b) {
      uVar5 = uVar2 + uVar3;
    }
    else if (bVar1 == 0x2d) {
      uVar5 = uVar3 - uVar2;
    }
    goto LAB_1068_1002;
  }
  if (bVar1 == 0x3c) {
    if ((int)uVar2 <= (int)uVar3) {
LAB_1068_0fca:
      uVar5 = 0;
      goto LAB_1068_1002;
    }
  }
  else if (bVar1 == 0x3d) {
    if (uVar2 != uVar3) goto LAB_1068_0fca;
  }
  else {
    if (bVar1 != 0x3e) {
      if (bVar1 == 0x5e) {
        uVar5 = uVar2 ^ uVar3;
      }
      goto LAB_1068_1002;
    }
    if ((int)uVar3 <= (int)uVar2) goto LAB_1068_0fca;
  }
  uVar5 = 1;
LAB_1068_1002:
  _WSPRINTF((void *)0x10e890b4,s__d__s____d_10e8_1e2b,uVar6,*param_2 * 2 + iVar4,uVar6,uVar5);
  return uVar5;
}


