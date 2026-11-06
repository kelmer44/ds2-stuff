// FUN_1080_098a at 1080:098a

void __cdecl16far FUN_1080_098a(ushort param_1,int param_2)

{
  ushort a0;
  ushort a1;
  ushort uVar1;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  a0 = GETDC(param_1);
  a1 = SELECTPALETTE(a0,DAT_10e8_200a,0);
  uVar1 = REALIZEPALETTE(a0);
  SELECTPALETTE(a0,a1,0);
  RELEASEDC(param_1,a0);
  if ((param_2 != 0) && (uVar1 != 0)) {
    INVALIDATERECT(param_1,(void *)0x0,0);
    UPDATEWINDOW(param_1);
  }
  return;
}


