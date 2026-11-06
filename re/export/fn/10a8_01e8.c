// FUN_10a8_01e8 at 10a8:01e8

void __cdecl16far FUN_10a8_01e8(void)

{
  undefined2 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  iVar3 = 0;
  if (0 < DAT_10e8_2790) {
    puVar1 = (undefined2 *)&DAT_10e8_76a6;
    puVar2 = (undefined1 *)&DAT_10e8_8ee2;
    do {
      *puVar2 = 0;
      FUN_1090_0068(*puVar1,puVar1[1]);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = puVar1 + 2;
      puVar2 = puVar2 + 9;
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_10e8_2790);
  }
  DAT_10e8_2790 = 0;
  return;
}


