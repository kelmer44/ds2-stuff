// FUN_1018_0566 at 1018:0566

void __cdecl16far FUN_1018_0566(ushort param_1)

{
  undefined2 uVar1;
  void *a1;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  uVar1 = DAT_10e8_036e;
  DAT_10e8_036e = 1;
  a1 = MAKEPROCINSTANCE(SAVEGAMEPROC,DAT_10e8_9556);
  DIALOGBOX(DAT_10e8_9556,a1,param_1,a1);
  FREEPROCINSTANCE(a1);
  DAT_10e8_036e = uVar1;
  return;
}


