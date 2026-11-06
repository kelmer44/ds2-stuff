// FUN_10a8_0246 at 10a8:0246

undefined2 __cdecl16far FUN_10a8_0246(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  iVar1 = 0;
  if (0 < DAT_10e8_2790) {
    piVar2 = (int *)&DAT_10e8_76a6;
    do {
      if ((param_1 == *piVar2) && (param_2 == piVar2[1])) {
        return 1;
      }
      piVar2 = piVar2 + 2;
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_10e8_2790);
  }
  return 0;
}


