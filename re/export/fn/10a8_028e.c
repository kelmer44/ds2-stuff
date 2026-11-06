// FUN_10a8_028e at 10a8:028e

undefined2 __cdecl16far FUN_10a8_028e(void *param_1,undefined2 param_2)

{
  short sVar1;
  int iVar2;
  undefined1 *puVar3;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  iVar2 = 0;
  if (0 < DAT_10e8_2790) {
    puVar3 = (undefined1 *)&DAT_10e8_8ee2;
    do {
      sVar1 = LSTRCMPI((undefined1 *)CONCAT22((char *)s_Options_10e8_10e2 + 6,puVar3),
                       (void *)CONCAT22(param_2,param_1));
      if (sVar1 == 0) {
        return ((undefined2 *)&DAT_10e8_76a6)[iVar2 * 2];
      }
      puVar3 = puVar3 + 9;
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_10e8_2790);
  }
  return 0;
}


