// FUN_1080_0920 at 1080:0920

undefined2 __cdecl16far FUN_1080_0920(ushort param_1,ushort param_2)

{
  ushort a0;
  ushort a1;
  undefined2 uVar1;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  if ((param_2 == param_1) || (DAT_10e8_200a == 0)) {
    uVar1 = 1;
  }
  else {
    a0 = GETDC(param_1);
    a1 = SELECTPALETTE(a0,DAT_10e8_200a,0);
    UNREALIZEOBJECT(DAT_10e8_200a);
    REALIZEPALETTE(a0);
    SELECTPALETTE(a0,a1,0);
    RELEASEDC(param_1,a0);
    uVar1 = 0;
  }
  return uVar1;
}


