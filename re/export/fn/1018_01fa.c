// FUN_1018_01fa at 1018:01fa

undefined2 __cdecl16far FUN_1018_01fa(undefined2 param_1)

{
  undefined2 uVar1;
  short sVar2;
  void *a3;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  uVar1 = DAT_10e8_036e;
  DAT_10e8_036e = 1;
  a3 = MAKEPROCINSTANCE(LOADGAMEPROC,DAT_10e8_9556);
  sVar2 = DIALOGBOX(DAT_10e8_9556,
                    (void *)CONCAT22((char *)s_Options_10e8_10e2 + 6,(void *)((ulong)a3 >> 0x10)),
                    (ushort)(void *)a3,a3);
  FREEPROCINSTANCE(a3);
  if ((600 < sVar2) && (sVar2 < 0x263)) {
    FUN_1018_0648(param_1,sVar2 + -0x259);
  }
  DAT_10e8_036e = uVar1;
  return 1;
}


