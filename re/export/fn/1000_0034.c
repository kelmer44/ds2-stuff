// FUN_1000_0034 at 1000:0034

short __stdcall16far FUN_1000_0034(void)

{
  char *pcVar1;
  char *pcVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  undefined2 unaff_SS;
  undefined2 in_stack_0000000c;
  undefined1 local_9e [130];
  undefined2 uStackY_1c;
  undefined2 uStackY_1a;
  
  FUN_10d0_029e();
  FUN_1000_1b0e();
  DAT_10e8_9556 = in_stack_0000000c;
  uVar3 = GETDC(0);
  DAT_10e8_0014 = GETDEVICECAPS(uVar3,8);
  DAT_10e8_0016 = GETDEVICECAPS(uVar3,10);
  DAT_10e8_8724 = GETDEVICECAPS(uVar3,0xc);
  RELEASEDC(0,uVar3);
  FUN_1030_0094();
  LSTRCAT(&DAT_10e8_37f0,s_dark0001_exe_10e8_098e);
  sVar4 = OPENFILE(&DAT_10e8_37f0,(undefined1 *)CONCAT22(unaff_SS,local_9e),0x2000);
  if (sVar4 == -1) {
    sVar4 = MESSAGEBOX(0,s_Reinicie_Dark_Seed_II_con_el_CD_e_10e8_09a7,s_Error_de_CD_10e8_099b,0);
    return sVar4;
  }
  FUN_10d0_1824();
  if (((DAT_10e8_0014 != 0x280) || (DAT_10e8_0016 != 0x1e0)) || (DAT_10e8_8724 != 8)) {
    FUN_10d0_02f2();
    pcVar8 = (char *)s_Esto_puede_causar_problemas_en_s_10e8_0a10;
    uVar6 = 0xffff;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar1 = pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (*pcVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar8 = pcVar8 + -uVar6;
    pcVar9 = (char *)&DAT_10e8_37f0;
    iVar5 = -1;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar1 = pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (*pcVar1 != '\0');
    pcVar9 = pcVar9 + -1;
    for (uVar7 = uVar6 >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
      pcVar2 = pcVar9;
      pcVar9 = pcVar9 + 2;
      pcVar1 = pcVar8;
      pcVar8 = pcVar8 + 2;
      *(undefined2 *)pcVar2 = *(undefined2 *)pcVar1;
    }
    for (uVar6 = (uint)((uVar6 & 1) != 0); uVar6 != 0; uVar6 = uVar6 - 1) {
      pcVar2 = pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar1 = pcVar8;
      pcVar8 = pcVar8 + 1;
      *pcVar2 = *pcVar1;
    }
    pcVar8 = (char *)s_Le_recomendamos_que_ejecute_Dark_10e8_0a3d;
    uVar6 = 0xffff;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar1 = pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (*pcVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar8 = pcVar8 + -uVar6;
    pcVar9 = (char *)&DAT_10e8_37f0;
    iVar5 = -1;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar1 = pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (*pcVar1 != '\0');
    pcVar9 = pcVar9 + -1;
    for (uVar7 = uVar6 >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
      pcVar2 = pcVar9;
      pcVar9 = pcVar9 + 2;
      pcVar1 = pcVar8;
      pcVar8 = pcVar8 + 2;
      *(undefined2 *)pcVar2 = *(undefined2 *)pcVar1;
    }
    for (uVar6 = (uint)((uVar6 & 1) != 0); uVar6 != 0; uVar6 = uVar6 - 1) {
      pcVar2 = pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar1 = pcVar8;
      pcVar8 = pcVar8 + 1;
      *pcVar2 = *pcVar1;
    }
    pcVar8 = (char *)&DAT_10e8_0a67;
    uVar6 = 0xffff;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar1 = pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (*pcVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar8 = pcVar8 + -uVar6;
    pcVar9 = (char *)&DAT_10e8_37f0;
    iVar5 = -1;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar1 = pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (*pcVar1 != '\0');
    pcVar9 = pcVar9 + -1;
    for (uVar7 = uVar6 >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
      pcVar2 = pcVar9;
      pcVar9 = pcVar9 + 2;
      pcVar1 = pcVar8;
      pcVar8 = pcVar8 + 2;
      *(undefined2 *)pcVar2 = *(undefined2 *)pcVar1;
    }
    for (uVar6 = (uint)((uVar6 & 1) != 0); uVar6 != 0; uVar6 = uVar6 - 1) {
      pcVar2 = pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar1 = pcVar8;
      pcVar8 = pcVar8 + 1;
      *pcVar2 = *pcVar1;
    }
    sVar4 = MESSAGEBOX(0,&DAT_10e8_37f0,s_Dark_Seed_II_10e8_0022,0x2014);
    if (sVar4 != 6) {
      return 1;
    }
  }
  uVar3 = GETDC(0);
  uStackY_1a = 0x1c5;
  PATBLT(uVar3,0,0,DAT_10e8_0014,DAT_10e8_0016,0x42);
  RELEASEDC(0,uVar3);
  uStackY_1a = 0x13a8;
  uStackY_1c = 0x1e2;
  WRITEPRIVATEPROFILESTRING
            (s_default_10e8_0ac9,s_WaveBlockLen_10e8_0abc,(void *)0x10e80ab7,s_wavemix_ini_10e8_0aab
            );
  iVar5 = FUN_1028_0766();
  if (iVar5 == 0) {
    return 1;
  }
  sVar4 = 0;
  uVar3 = GETMESSAGE((undefined1 *)CONCAT22(unaff_SS,&stack0xffea),0,0,0);
  while (uVar3 != 0) {
    DISPATCHMESSAGE((undefined1 *)CONCAT22(unaff_SS,&stack0xffea));
    sVar4 = 0x225;
    uVar3 = GETMESSAGE((undefined1 *)CONCAT22(unaff_SS,&stack0xffea),0,0,0);
  }
  return sVar4;
}


