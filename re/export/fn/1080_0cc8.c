// FUN_1080_0cc8 at 1080:0cc8

undefined2 __cdecl16far
FUN_1080_0cc8(ushort *param_1,undefined2 param_2,ushort param_3,short param_4,short param_5)

{
  ushort a0;
  ushort a1;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  a0 = CREATECOMPATIBLEDC(param_3);
  a1 = SELECTOBJECT(a0,*param_1);
  BITBLT(param_3,param_4,param_5,param_1[4],param_1[5],a0,0,0,0xcc0020);
  SELECTOBJECT(a0,a1);
  DELETEDC(a0);
  return 1;
}


