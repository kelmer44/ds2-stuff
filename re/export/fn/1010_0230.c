// FUN_1010_0230 at 1010:0230

void __cdecl16far FUN_1010_0230(ushort param_1)

{
  undefined2 uVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  uVar1 = DAT_10e8_036e;
  DAT_10e8_036e = 1;
  iVar4 = 0;
  if (DAT_10e8_0048 == 0) {
    if (DAT_10e8_610e != 0) {
      iVar4 = 0;
      goto LAB_1010_030f;
    }
    if (((((DAT_10e8_007c == 2) || (DAT_10e8_0368 != 0)) || (DAT_10e8_2774 != 0)) ||
        ((iVar2 = FUN_1060_0b00(0xf65), iVar2 != 0 || (iVar2 = FUN_1060_0b00(0xf71), iVar2 != 0))))
       || ((iVar2 = FUN_1060_0b00(0xf79), iVar2 != 0 ||
           ((iVar2 = FUN_1060_0b00(0xf82), iVar2 != 4 || (DAT_10e8_008e != 0 || DAT_10e8_008c != 0))
           )))) {
      sVar3 = MESSAGEBOX(param_1,(void *)0x10e80f8d,s_Salir_de_Dark_Seed_II_10e8_0de8,0x2014);
      if (sVar3 != 6) goto LAB_1010_030f;
    }
    else {
      sVar3 = MESSAGEBOX(param_1,(void *)0x10e80f9c,s_Salir_de_Dark_Seed_II_10e8_0de8,0x2013);
      if (sVar3 == 6) {
        FUN_1018_0566(param_1);
      }
      else if (sVar3 != 7) goto LAB_1010_030f;
    }
  }
  iVar4 = 1;
LAB_1010_030f:
  if (iVar4 != 0) {
    FUN_10a8_0b7e();
    POSTMESSAGE(param_1,0x10,0,0);
    uVar1 = DAT_10e8_036e;
  }
  DAT_10e8_036e = uVar1;
  return;
}


