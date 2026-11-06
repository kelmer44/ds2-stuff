// FUN_1010_011e at 1010:011e

void __cdecl16far FUN_1010_011e(ushort param_1)

{
  undefined2 *puVar1;
  ushort uVar2;
  int iVar3;
  short sVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  uVar6 = DAT_10e8_036e;
  DAT_10e8_036e = 1;
  if (DAT_10e8_007c == 2) {
    sVar4 = 6;
  }
  else {
    sVar4 = MESSAGEBOX(param_1,(void *)0x10e80f1c,s_Nueva_partida_de_Dark_Seed_II_10e8_0efe,0x2014);
  }
  if (sVar4 == 6) {
    uVar2 = LOADCURSOR(0,(void *)0x7f02);
    SETCURSOR(uVar2);
    puVar5 = (undefined2 *)&DAT_10e8_6116;
    for (iVar3 = 100; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar1 = 0;
    }
    DAT_10e8_0044 = 0;
    FUN_1048_21b0();
    FUN_1050_035a();
    FUN_1060_10ba(0xf3f);
    FUN_1060_0b26();
    FUN_1060_0b26();
    FUN_1060_0b26();
    uVar2 = GETDC(param_1);
    FUN_1048_3236();
    RELEASEDC(param_1,uVar2);
    DAT_10e8_978e = DAT_10e8_653c;
    DAT_10e8_9790 = DAT_10e8_8726;
    DAT_10e8_9792 = DAT_10e8_9794;
    DAT_10e8_036e = 0;
    DAT_10e8_770e = 1;
    DAT_10e8_0044 = 1;
    DAT_10e8_610e = 1;
    uVar6 = DAT_10e8_036e;
  }
  DAT_10e8_036e = uVar6;
  return;
}


