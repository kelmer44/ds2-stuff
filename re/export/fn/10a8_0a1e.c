// FUN_10a8_0a1e at 10a8:0a1e

undefined2 __cdecl16far FUN_10a8_0a1e(void *param_1,undefined2 param_2)

{
  char *pcVar1;
  char *pcVar2;
  short sVar3;
  ushort a0;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  undefined2 unaff_SS;
  char local_124 [256];
  undefined1 local_24 [12];
  undefined2 uStackY_18;
  undefined2 uStackY_16;
  char *pcVar10;
  
  FUN_10d0_029e();
  LSTRCPY((undefined1 *)CONCAT22(unaff_SS,local_24),(void *)CONCAT22(param_2,param_1));
  sVar3 = LSTRCMPI(&DAT_10e0_262a,(undefined1 *)CONCAT22(unaff_SS,local_24));
  if (sVar3 == 0) {
    uVar4 = 0;
  }
  else {
    LSTRCPY(&DAT_10e0_262a,(undefined1 *)CONCAT22(unaff_SS,local_24));
    FUN_10a8_0000();
    uStackY_16 = 0x13a8;
    uStackY_18 = 0xa92;
    MCISENDSTRING(s_stop_midifile_10e8_27a4,(void *)0x0,0,0);
    uStackY_16 = 0x13a8;
    uStackY_18 = 0xaa3;
    MCISENDSTRING(s_close_midifile_10e8_27b2,(void *)0x0,0,0);
    LSTRCPY((char *)CONCAT22(unaff_SS,local_124),s_open_sequencer__10e8_27c1);
    LSTRCAT((char *)CONCAT22(unaff_SS,local_124),(void *)0x10e03c68);
    LSTRCAT((char *)CONCAT22(unaff_SS,local_124),&DAT_10e0_262a);
    if (DAT_10e8_004e == 0x14a) {
      pcVar8 = (char *)&DAT_10e8_27d1;
    }
    else {
      pcVar8 = (char *)&DAT_10e8_27d4;
    }
    pcVar10 = (char *)s_Options_10e8_10e2 + 6;
    pcVar9 = local_124;
    uVar5 = 0xffff;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar1 = pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (*pcVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar8 = pcVar8 + -uVar5;
    iVar6 = -1;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar1 = pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (*pcVar1 != '\0');
    pcVar9 = pcVar9 + -1;
    for (uVar7 = uVar5 >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
      pcVar2 = pcVar9;
      pcVar9 = pcVar9 + 2;
      pcVar1 = pcVar8;
      pcVar8 = pcVar8 + 2;
      *(undefined2 *)pcVar2 = *(undefined2 *)pcVar1;
    }
    for (uVar5 = (uint)((uVar5 & 1) != 0); uVar5 != 0; uVar5 = uVar5 - 1) {
      pcVar2 = pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar1 = pcVar8;
      pcVar8 = pcVar8 + 1;
      *pcVar2 = *pcVar1;
    }
    LSTRCAT((char *)CONCAT22(unaff_SS,local_124),
            (char *)CONCAT22(pcVar10,(char *)s__mid_alias_midifile_10e8_27d7));
    uStackY_16 = 0x13a8;
    uStackY_18 = 0xb36;
    MCISENDSTRING((char *)CONCAT22(unaff_SS,local_124),(void *)0x0,0,0);
    a0 = MCIGETDEVICEID((char *)CONCAT22(pcVar10,(char *)s_midifile_10e8_27eb));
    if (*(int *)&DAT_10e8_005e != 0) {
      MIDIOUTSETVOLUME(a0,CONCAT22(*(undefined2 *)&DAT_10e8_006a,*(undefined2 *)&DAT_10e8_006a));
      uStackY_16 = 0x13a8;
      uStackY_18 = 0xb62;
      MCISENDSTRING((char *)CONCAT22(pcVar10,(char *)s_play_midifile_from_0_10e8_27f4),(void *)0x0,0
                    ,0);
    }
    FUN_10a8_0000();
    uVar4 = 1;
  }
  return uVar4;
}


