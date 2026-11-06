// FUN_1070_0136 at 1070:0136

int __cdecl16far FUN_1070_0136(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  iVar3 = 0;
  iVar2 = DAT_10e8_1fc8;
  iVar6 = DAT_10e8_1fca;
  if ((DAT_10e8_1fc8 == 0) && (DAT_10e8_1fca == 0)) {
    iVar2 = 0;
  }
  else {
    do {
      iVar5 = iVar2;
      if ((*(int *)(iVar5 + 0xd) == param_1) && (*(int *)(iVar5 + 0xf) == param_2)) {
        piVar1 = (int *)(iVar5 + 0x11);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0xd) >> 0x10);
          iVar2 = (int)*(undefined4 *)(iVar5 + 0xd);
          FUN_1090_0068(*(undefined2 *)(iVar2 + 2),*(undefined2 *)(iVar2 + 4));
          iVar2 = *(int *)(iVar5 + 0xf);
          FUN_1090_0068(*(undefined2 *)(iVar5 + 0xd));
          if (iVar2 == 0 && iVar3 == 0) {
            DAT_10e8_1fc8 = *(int *)(iVar5 + 0x13);
            DAT_10e8_1fca = *(int *)(iVar5 + 0x15);
          }
          else {
            uVar4 = *(undefined2 *)(iVar5 + 0x15);
            *(undefined2 *)(iVar3 + 0x13) = *(undefined2 *)(iVar5 + 0x13);
            *(undefined2 *)(iVar3 + 0x15) = uVar4;
          }
          FUN_1090_0068(iVar5,iVar6);
          return 1;
        }
        return 0;
      }
      iVar2 = *(int *)(iVar5 + 0x13);
      piVar1 = (int *)(iVar5 + 0x15);
      iVar3 = iVar5;
      iVar6 = *piVar1;
    } while (*piVar1 != 0 || iVar2 != 0);
  }
  return iVar2;
}


