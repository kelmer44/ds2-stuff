// FUN_1078_0806 at 1078:0806

void __cdecl16far FUN_1078_0806(int param_1,undefined2 param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  if (param_5 == 0) {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x1c)) {
      piVar1 = (int *)(param_1 + 0x1e);
      do {
        if ((*piVar1 == param_3) && (piVar1[1] == param_4)) {
          *(undefined2 *)(param_1 + iVar2 * 4 + 0x20) = 0;
          *(undefined2 *)(param_1 + iVar2 * 4 + 0x1e) = 0;
          return;
        }
        piVar1 = piVar1 + 2;
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0x1c));
    }
  }
  else {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x1ae)) {
      piVar1 = (int *)(param_1 + 0x1b0);
      do {
        if ((*piVar1 == param_3) && (piVar1[1] == param_4)) {
          *(undefined2 *)(param_1 + iVar2 * 4 + 0x1b2) = 0;
          *(undefined2 *)(param_1 + iVar2 * 4 + 0x1b0) = 0;
          return;
        }
        piVar1 = piVar1 + 2;
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0x1ae));
    }
  }
  return;
}


