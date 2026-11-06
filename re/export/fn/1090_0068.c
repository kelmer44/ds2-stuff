// FUN_1090_0068 at 1090:0068

void __cdecl16far FUN_1090_0068(undefined2 param_1,ushort param_2)

{
  bool bVar1;
  long lVar2;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  lVar2 = GLOBALHANDLE(param_2);
  if (lVar2 != 0) {
    GLOBALUNLOCK((ushort)lVar2);
    GLOBALFREE(0x13a8);
    bVar1 = 0xfffe < DAT_10e8_001c;
    DAT_10e8_001c = DAT_10e8_001c + 1;
    DAT_10e8_001e = DAT_10e8_001e + (uint)bVar1;
    return;
  }
  FREESELECTOR(param_2);
  return;
}


