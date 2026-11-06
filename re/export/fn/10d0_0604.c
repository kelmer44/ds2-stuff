// FUN_10d0_0604 at 10d0:0604

uint __cdecl16far FUN_10d0_0604(byte *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  bool bVar5;
  
  pbVar3 = (byte *)param_1;
  pbVar4 = (byte *)param_2;
  if (param_3 != 0) {
    do {
      bVar2 = *pbVar3;
      bVar1 = *pbVar4;
      if ((bVar2 == 0) || (bVar1 == 0)) break;
      pbVar3 = pbVar3 + 1;
      pbVar4 = pbVar4 + 1;
      if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
        bVar2 = bVar2 + 0x20;
      }
      if ((0x40 < bVar1) && (bVar1 < 0x5b)) {
        bVar1 = bVar1 + 0x20;
      }
      bVar5 = bVar2 < bVar1;
      if (bVar2 != bVar1) goto LAB_10d0_064a;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
    param_3 = 0;
    bVar5 = bVar2 < bVar1;
    if (bVar2 != bVar1) {
LAB_10d0_064a:
      param_3 = 0;
      if (!bVar5) {
        param_3 = 0xfffe;
      }
      param_3 = ~param_3;
    }
  }
  return param_3;
}


