// FUN_1068_1d60 at 1068:1d60

void __cdecl16far FUN_1068_1d60(int param_1,undefined2 *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  iVar2 = 0;
  iVar1 = 0;
  *param_2 = 0;
  while (((((((undefined1 *)&DAT_10e8_5d0e)[*(char *)(iVar2 + param_1)] & 7) != 0 ||
           (*(char *)(iVar2 + param_1) == '(')) || (*(char *)(iVar2 + param_1) == ')')) ||
         (iVar1 != 0))) {
    if (*(char *)(iVar2 + param_1) == '(') {
      iVar1 = iVar1 + 1;
    }
    if (*(char *)(iVar2 + param_1) == ')') {
      iVar1 = iVar1 + -1;
    }
    iVar2 = iVar2 + 1;
  }
  *param_3 = iVar2 + -1;
  return;
}


