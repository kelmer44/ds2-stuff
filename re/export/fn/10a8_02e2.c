// FUN_10a8_02e2 at 10a8:02e2

void __cdecl16far
FUN_10a8_02e2(char *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  if ((((*param_1 == 'S') || (*param_1 == 's')) && ((param_1[1] == 'E' || (param_1[1] == 'e')))) &&
     (DAT_10e8_2790 < 0x14)) {
    LSTRCPY((undefined1 *)
            CONCAT22((char *)s_Options_10e8_10e2 + 6,
                     (undefined1 *)&DAT_10e8_8ee2 + DAT_10e8_2790 * 9),
            (char *)CONCAT22(param_2,param_1));
    iVar1 = DAT_10e8_2790;
    ((undefined2 *)&DAT_10e8_76a6)[DAT_10e8_2790 * 2] = param_3;
    ((undefined2 *)&DAT_10e8_76a8)[iVar1 * 2] = param_4;
    DAT_10e8_2790 = DAT_10e8_2790 + 1;
  }
  return;
}


