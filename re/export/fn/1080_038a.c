// FUN_1080_038a at 1080:038a

void __cdecl16far FUN_1080_038a(ushort param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  ushort a1;
  int iVar4;
  undefined2 *puVar5;
  byte *pbVar6;
  undefined2 *puVar7;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  GETSYSTEMPALETTEENTRIES(param_1,0,0x100,&DAT_10e8_6c9e);
  uVar3 = DAT_10e8_2bc4;
  puVar7 = (undefined2 *)0x1f0;
  puVar5 = (undefined2 *)&DAT_10e8_6c9e;
  for (iVar4 = 0x200; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar7;
    puVar7 = puVar7 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  if (DAT_10e8_200a != 0) {
    a1 = SELECTPALETTE(param_1,DAT_10e8_200a,0);
    pbVar6 = (byte *)&DAT_10e8_6c9e;
    iVar4 = 0x100;
    do {
      *pbVar6 = *pbVar6 >> 1;
      pbVar6[1] = pbVar6[1] >> 1;
      pbVar6[2] = pbVar6[2] >> 1;
      pbVar6[3] = 1;
      pbVar6 = pbVar6 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    ANIMATEPALETTE(DAT_10e8_200a,1,0xfe,&DAT_10e8_6ca2);
    if (a1 != 0) {
      SELECTPALETTE(param_1,a1,0);
    }
  }
  return;
}


