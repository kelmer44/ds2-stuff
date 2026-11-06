// FUN_10a8_015e at 10a8:015e

void __cdecl16far
FUN_10a8_015e(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  undefined2 unaff_SS;
  char *local_16;
  int iStackY_14;
  char *pcStackY_12;
  undefined2 uStackY_10;
  char *pcStackY_e;
  
  FUN_10d0_029e();
  pcStackY_e = (char *)param_2;
  uStackY_10 = param_1;
  pcStackY_12 = (char *)s_ReadSpeed_10e8_10d8 + 8;
  iStackY_14 = 0x275e;
  local_16 = (char *)s_Options_10e8_10d0;
  FUN_10a8_0446();
  local_16 = (char *)0x12;
  iStackY_14 = DAT_10e8_004a;
  pcStackY_12 = (char *)param_5;
  if (((DAT_10e8_004c != 0x3d6) && (DAT_10e8_005c != 0)) && (DAT_10e8_004a != 0)) {
    pcStackY_e = (char *)s_Options_10e8_10d0;
    uStackY_10 = 0x1e0;
    WaveMixPlay_inferred((char **)CONCAT22(unaff_SS,&local_16));
  }
  return;
}


