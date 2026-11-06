// FUN_1080_07a0 at 1080:07a0

undefined2 __cdecl16far FUN_1080_07a0(ushort *param_1,undefined2 param_2)

{
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  if (*param_1 != 0) {
    DELETEOBJECT(*param_1);
  }
  if (param_1[2] != 0 || param_1[1] != 0) {
    FUN_1090_0068(param_1[1],param_1[2]);
  }
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return 1;
}


