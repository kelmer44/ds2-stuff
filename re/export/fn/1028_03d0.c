// FUN_1028_03d0 at 1028:03d0

ushort __cdecl16far FUN_1028_03d0(ushort param_1)

{
  undefined2 *puVar1;
  ushort uVar2;
  ushort a0;
  undefined2 uVar3;
  short sVar4;
  undefined2 in_DX;
  int iVar5;
  char *pcVar6;
  undefined2 *puVar7;
  char *pcVar8;
  char *pcVar9;
  long lVar10;
  ushort uStackY_18;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  iVar5 = 0;
  do {
    ((undefined1 *)&DAT_10e8_92b4)[iVar5] = (char)iVar5;
    if ((0x60 < iVar5) && (iVar5 < 0x7b)) {
      ((undefined1 *)&DAT_10e8_92b4)[iVar5] = (char)iVar5 + -0x20;
      ((undefined1 *)&DAT_10e8_5d0e)[iVar5] = 1;
    }
    if (((0x40 < iVar5) && (iVar5 < 0x5b)) || (iVar5 == 0x5f)) {
      ((undefined1 *)&DAT_10e8_5d0e)[iVar5] = 2;
    }
    if (((0x2f < iVar5) && (iVar5 < 0x3a)) || (iVar5 == 0x21)) {
      ((undefined1 *)&DAT_10e8_5d0e)[iVar5] = 4;
    }
    if (((iVar5 == 0x2b) || (iVar5 == 0x2d)) ||
       (((iVar5 == 0x2a ||
         ((((iVar5 == 0x2f || (iVar5 == 0x3d)) || (iVar5 == 0x26)) ||
          ((iVar5 == 0x7c || (iVar5 == 0x28)))))) || (iVar5 == 0x29)))) {
      ((undefined1 *)&DAT_10e8_5d0e)[iVar5] = 8;
    }
    if (((iVar5 == 0x20) || (iVar5 == 0x2c)) || ((iVar5 == 9 || (iVar5 == 0)))) {
      ((undefined1 *)&DAT_10e8_5d0e)[iVar5] = 0x10;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x100);
  uVar2 = GETDC(param_1);
  FUN_1028_0000(1);
  a0 = LOADCURSOR(0,(void *)0x7f02);
  SETCURSOR(a0);
  FUN_10a8_0a1e(0x13b6,(char *)s_Options_10e8_10e2 + 6);
  FUN_1028_014e();
  PATBLT(uVar2,0,0,0x280,0x1e0,0x42);
  DAT_10e8_0010 = FUN_1090_0000(0x7740,0x1b);
  DAT_10e8_0012 = in_DX;
  FUN_1088_003e(0x275e,(char *)s_ReadSpeed_10e8_10d8 + 8,0x13bc,(char *)s_Options_10e8_10e2 + 6,0,0)
  ;
  FUN_1088_003e(0x275e,(char *)s_ReadSpeed_10e8_10d8 + 8,0x13c9,(char *)s_Options_10e8_10e2 + 6,0,0)
  ;
  FUN_1060_10ba((char *)s_GameVar_IDX_10e8_13d6);
  FUN_1060_0b26(0x13e2,1);
  DAT_10e8_8728 = FUN_1048_093e(9999);
  DAT_10e8_872a = in_DX;
  uVar3 = FUN_1098_0326(0x275e,(char *)s_ReadSpeed_10e8_10d8 + 8,(char *)s_fix_pal_10e8_13e7,0);
  FUN_1028_00b6(uVar3,in_DX);
  pcVar12 = (char *)0x884e;
  pcVar11 = (char *)0x8d5e;
  pcVar6 = (char *)0x7;
  pcVar8 = (char *)s_PlayWave_10e8_1094 + 4;
  do {
    if (((int)pcVar6 < 1) || (3 < (int)pcVar6)) {
      do {
        pcVar12 = (char *)s_Options_10e8_10e2 + 6;
        pcVar13 = (char *)s_Options_10e8_10e2 + 6;
        pcVar6 = (char *)s_fix_pal_10e8_13e7 + 8;
        pcVar8 = (char *)s_ReadSpeed_10e8_10d8 + 8;
        uStackY_18 = 0x275e;
        pcVar9 = (char *)s_Options_10e8_107a + 6;
        FUN_1080_0890();
        uVar3 = (undefined2)((ulong)*(undefined4 *)(pcVar11 + 2) >> 0x10);
        iVar5 = (int)*(undefined4 *)(pcVar11 + 2);
        *(undefined2 *)(pcVar11 + 0xc) = *(undefined2 *)(iVar5 + 0x26);
        *(undefined2 *)(pcVar11 + 0xe) = *(undefined2 *)(iVar5 + 0x28);
        *(undefined2 *)(pcVar11 + 8) = *(undefined2 *)(iVar5 + 0x12);
        *(undefined2 *)(pcVar11 + 10) = *(undefined2 *)(iVar5 + 0x16);
        *(undefined2 *)(iVar5 + 0x2c) = 0;
        *(undefined2 *)(iVar5 + 0x2a) = 0;
        *(undefined2 *)(iVar5 + 0x28) = 0;
        *(undefined2 *)(iVar5 + 0x26) = 0;
        *(char **)(pcVar11 + 0x14) = pcVar11;
        *(char **)(pcVar11 + 0x16) = (char *)s_Options_10e8_10e2 + 6;
        pcVar11 = pcVar11 + 0x18;
      } while (pcVar12 != (char *)0x1);
    }
    else {
      pcVar13 = (char *)0x0;
      pcVar9 = (char *)0x13a8;
      uStackY_18 = 0x58b;
      HMEMCPY((char *)CONCAT22((char *)s_Options_10e8_10e2 + 6,pcVar11),
              (char *)CONCAT22((char *)s_Options_10e8_10e2 + 6,pcVar12),0xd8);
    }
    pcVar12 = pcVar13 + 0xd8;
    pcVar11 = pcVar8 + -0xd8;
    pcVar6 = pcVar6 + -1;
    pcVar8 = pcVar9;
  } while (-1 < (int)pcVar6);
  puVar7 = (undefined2 *)&DAT_10e8_6116;
  for (iVar5 = 100; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar1 = puVar7;
    puVar7 = puVar7 + 1;
    *puVar1 = 0;
  }
  FUN_1060_0b26((char *)s_FromRoom_10e8_13f0,0xffff);
  FUN_1048_3236(uStackY_18,1);
  RELEASEDC(param_1,uStackY_18);
  FUN_1010_0000(param_1);
  DAT_10e8_653c = LOADCURSOR(0,(void *)0x7f00);
  DAT_10e8_8726 = LOADCURSOR(DAT_10e8_9556,s_cHand_10e8_13f9);
  DAT_10e8_8722 = LOADCURSOR(DAT_10e8_9556,s_cUseIt_10e8_13ff);
  DAT_10e8_9794 = LOADCURSOR(DAT_10e8_9556,s_cLook_10e8_1406);
  DAT_10e8_6890 = LOADCURSOR(DAT_10e8_9556,s_cLookAt_10e8_140c);
  DAT_10e8_5e0e = LOADCURSOR(DAT_10e8_9556,(void *)0x10e81414);
  DAT_10e8_978e = DAT_10e8_653c;
  DAT_10e8_9790 = DAT_10e8_8726;
  DAT_10e8_9792 = DAT_10e8_9794;
  DAT_10e8_770e = 1;
  SYSTEMPARAMETERSINFO(0x17,0,(void *)0x0,0);
  lVar10 = GETVERSION();
  if ((byte)((ulong)lVar10 >> 8) < 0x5f) {
    FUN_1028_0964();
    do {
      uVar2 = SETTIMER(param_1,0x1234,1,(void *)CONCAT22(DAT_10e8_3c52,DAT_10e8_3c50));
      if (uVar2 != 0) {
        DAT_10e8_6114 = 2;
        return uVar2;
      }
      sVar4 = MESSAGEBOX(param_1,s_Too_many_timers_10e8_141b,s_Dark_Seed_II_10e8_0022,0x35);
    } while (sVar4 != 2);
  }
  else {
    do {
      uVar2 = SETTIMER(param_1,0x1234,0x53,(void *)CONCAT22(DAT_10e8_3c52,DAT_10e8_3c50));
      if (uVar2 != 0) {
        DAT_10e8_6114 = 1;
        return uVar2;
      }
      sVar4 = MESSAGEBOX(param_1,s_Too_many_timers_10e8_142b,s_Dark_Seed_II_10e8_0022,0x35);
    } while (sVar4 != 2);
  }
  return 0;
}


