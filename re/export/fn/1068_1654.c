// FUN_1068_1654 at 1068:1654

void __cdecl16far FUN_1068_1654(void)

{
  int iVar1;
  char cVar2;
  undefined2 uVar3;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  iVar1 = DAT_10e8_3422 + -2;
  uVar3 = (undefined2)((ulong)DAT_10e8_3424 >> 0x10);
  cVar2 = *(char *)(iVar1 + (int)DAT_10e8_3424);
  while (cVar2 != '\n') {
    iVar1 = iVar1 + -1;
    cVar2 = *(char *)(iVar1 + (int)DAT_10e8_3424);
  }
  DAT_10e8_3422 = iVar1 + 1;
  return;
}


