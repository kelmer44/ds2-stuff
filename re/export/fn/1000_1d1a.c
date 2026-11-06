// FUN_1000_1d1a at 1000:1d1a

void __cdecl16far FUN_1000_1d1a(int param_1)

{
  char *pcVar1;
  char *pcVar2;
  ushort a0;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  a0 = MCIGETDEVICEID(s_sequencer_10e8_0cf5);
  if (DAT_10e8_005e == 1) {
    MIDIOUTSETVOLUME(a0,0);
    pcVar7 = (char *)s_stop_midifile_10e8_0cff;
  }
  else {
    MIDIOUTSETVOLUME(a0,CONCAT22(DAT_10e8_0068,DAT_10e8_0068));
    pcVar7 = (char *)s_resume_midifile_10e8_0d0d;
  }
  MCISENDSTRING((char *)CONCAT22((char *)s_Options_10e8_10e2 + 6,pcVar7),(void *)0x0,0,0);
  DAT_10e8_005e = 1 - DAT_10e8_005e;
  if (param_1 != 0) {
    pcVar7 = (char *)*(undefined2 *)(DAT_10e8_005e * 2 + 0xcd8);
    uVar3 = 0xffff;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar1 = pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (*pcVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar7 = pcVar7 + -uVar3;
    pcVar6 = (char *)&DAT_10e8_37f0;
    for (uVar4 = uVar3 >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
      pcVar2 = pcVar6;
      pcVar6 = pcVar6 + 2;
      pcVar1 = pcVar7;
      pcVar7 = pcVar7 + 2;
      *(undefined2 *)pcVar2 = *(undefined2 *)pcVar1;
    }
    for (uVar3 = (uint)((uVar3 & 1) != 0); uVar3 != 0; uVar3 = uVar3 - 1) {
      pcVar2 = pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar1 = pcVar7;
      pcVar7 = pcVar7 + 1;
      *pcVar2 = *pcVar1;
    }
    pcVar7 = (char *)&DAT_10e8_0d1d;
    uVar3 = 0xffff;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar1 = pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (*pcVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar7 = pcVar7 + -uVar3;
    pcVar6 = (char *)&DAT_10e8_37f0;
    iVar5 = -1;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar1 = pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (*pcVar1 != '\0');
    pcVar6 = pcVar6 + -1;
    for (uVar4 = uVar3 >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
      pcVar2 = pcVar6;
      pcVar6 = pcVar6 + 2;
      pcVar1 = pcVar7;
      pcVar7 = pcVar7 + 2;
      *(undefined2 *)pcVar2 = *(undefined2 *)pcVar1;
    }
    for (uVar3 = (uint)((uVar3 & 1) != 0); uVar3 != 0; uVar3 = uVar3 - 1) {
      pcVar2 = pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar1 = pcVar7;
      pcVar7 = pcVar7 + 1;
      *pcVar2 = *pcVar1;
    }
    FUN_1098_0248((undefined2 *)&DAT_10e8_37f0,(char *)s_Options_10e8_10e2 + 6);
  }
  return;
}


