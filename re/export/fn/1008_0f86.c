// FUN_1008_0f86 at 1008:0f86

void __cdecl16far FUN_1008_0f86(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  iVar11 = 0;
  pbVar9 = (byte *)&DAT_10e8_9798;
  do {
    ((undefined1 *)&DAT_10e8_93b4)[iVar11] = (char)iVar11;
    FUN_10d0_0490((uint)*pbVar9 << 8,0,0x180,0);
    FUN_10d0_0490((pbVar9[1] - 0x40) * 0x100,(int)(char)(pbVar9[1] - 0x40 >> 8),0x180,0);
    iVar1 = (uint)pbVar9[2] << 8;
    iVar2 = FUN_10d0_0490(iVar1,0,0x200,0);
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    if (0xff < iVar2) {
      iVar2 = 0xff;
    }
    pbVar10 = (byte *)&DAT_10e8_9798;
    iVar7 = 0;
    do {
      uVar3 = (int)(char *)s_Options_10e8_10d0 - (uint)*pbVar10;
      uVar8 = (int)uVar3 >> 0xf;
      iVar4 = (uVar3 ^ uVar8) - uVar8;
      if ((iVar4 < iVar1) &&
         (uVar3 = (int)((char *)s_GoingOut_10e8_100a + (7 - (uint)pbVar10[1])) >> 0xf,
         iVar5 = ((uint)((char *)s_GoingOut_10e8_100a + (7 - (uint)pbVar10[1])) ^ uVar3) - uVar3,
         iVar5 < iVar1)) {
        uVar3 = (int)(iVar2 - (uint)pbVar10[2]) >> 0xf;
        iVar6 = (iVar2 - (uint)pbVar10[2] ^ uVar3) - uVar3;
        if (iVar6 < iVar5) {
          iVar6 = iVar5;
        }
        if (iVar6 < iVar4) {
          iVar6 = iVar4;
        }
        if (iVar6 < iVar1) {
          ((undefined1 *)&DAT_10e8_93b4)[iVar11] = (char)iVar7;
          iVar1 = iVar6;
        }
      }
      pbVar10 = pbVar10 + 4;
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x100);
    pbVar9 = pbVar9 + 4;
    iVar11 = iVar11 + 1;
  } while (iVar11 < 0x100);
  return;
}


