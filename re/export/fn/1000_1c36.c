// FUN_1000_1c36 at 1000:1c36

void __cdecl16far FUN_1000_1c36(int param_1)

{
  char *pcVar1;
  char *pcVar2;
  ushort a0;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  undefined2 uVar8;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  if (DAT_10e8_005c == 1) {
    if (DAT_10e8_004c == 0x3d5) {
      DAT_10e8_004c = 0x3d6;
    }
    uVar8 = 0;
  }
  else {
    DAT_10e8_004c = 0x3d4;
    uVar8 = 1;
    if (DAT_10e8_004a != 0) {
      WaveMixFlushChannel_inferred(DAT_10e8_004a,0,3);
    }
    a0 = MCIGETDEVICEID(s_waveaudio_10e8_0cdc);
    WAVEOUTSETVOLUME(a0,CONCAT22(DAT_10e8_0068,DAT_10e8_0068));
  }
  DAT_10e8_005c = 1 - DAT_10e8_005c;
  FUN_10a8_0000(DAT_10e8_004a,uVar8);
  if (param_1 != 0) {
    pcVar6 = (char *)*(undefined2 *)(DAT_10e8_005c * 2 + 0xcd8);
    uVar3 = 0xffff;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar1 = pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (*pcVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar6 = pcVar6 + -uVar3;
    pcVar7 = (char *)&DAT_10e8_37f0;
    for (uVar4 = uVar3 >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
      pcVar2 = pcVar7;
      pcVar7 = pcVar7 + 2;
      pcVar1 = pcVar6;
      pcVar6 = pcVar6 + 2;
      *(undefined2 *)pcVar2 = *(undefined2 *)pcVar1;
    }
    for (uVar3 = (uint)((uVar3 & 1) != 0); uVar3 != 0; uVar3 = uVar3 - 1) {
      pcVar2 = pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar1 = pcVar6;
      pcVar6 = pcVar6 + 1;
      *pcVar2 = *pcVar1;
    }
    pcVar6 = (char *)s_Sonido_Digital_10e8_0ce6;
    uVar3 = 0xffff;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar1 = pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (*pcVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar6 = pcVar6 + -uVar3;
    pcVar7 = (char *)&DAT_10e8_37f0;
    iVar5 = -1;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar1 = pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (*pcVar1 != '\0');
    pcVar7 = pcVar7 + -1;
    for (uVar4 = uVar3 >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
      pcVar2 = pcVar7;
      pcVar7 = pcVar7 + 2;
      pcVar1 = pcVar6;
      pcVar6 = pcVar6 + 2;
      *(undefined2 *)pcVar2 = *(undefined2 *)pcVar1;
    }
    for (uVar3 = (uint)((uVar3 & 1) != 0); uVar3 != 0; uVar3 = uVar3 - 1) {
      pcVar2 = pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar1 = pcVar6;
      pcVar6 = pcVar6 + 1;
      *pcVar2 = *pcVar1;
    }
    FUN_1098_0248((undefined2 *)&DAT_10e8_37f0,(char *)s_Options_10e8_10e2 + 6);
  }
  return;
}


