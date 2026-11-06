// FUN_10d0_096a at 10d0:096a

uint __cdecl16far FUN_10d0_096a(byte param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  
  bVar2 = *(byte *)(param_2 + 3);
  if (((bVar2 & 0x82) != 0) && ((bVar2 & 0x40) == 0)) {
    param_2[1] = 0;
    if ((bVar2 & 1) != 0) {
      if ((bVar2 & 0x10) == 0) goto LAB_10d0_09ea;
      *param_2 = param_2[2];
      bVar2 = bVar2 & 0xfe;
    }
    *(byte *)(param_2 + 3) = bVar2 & 0xef | 2;
    bVar1 = *(byte *)((int)param_2 + 7);
    if (((bVar2 & 8) == 0) &&
       (((bVar2 & 4) != 0 ||
        (((*(byte *)(param_2 + 0x50) & 1) == 0 &&
         (((DAT_10e8_2a30 != 0 &&
           (((param_2 == (int *)0x2a7e || (param_2 == (int *)0x2a86)) &&
            ((*(byte *)(bVar1 + 0x2942) & 0x40) != 0)))) ||
          (FUN_10d0_1024(param_2), (*(byte *)(param_2 + 3) & 8) == 0)))))))) {
      iVar3 = FUN_10d0_113c();
      iVar4 = 1;
    }
    else {
      iVar4 = *param_2 - param_2[2];
      *param_2 = param_2[2] + 1;
      param_2[1] = param_2[0x51] + -1;
      if (iVar4 == 0) {
        iVar3 = 0;
        if ((*(byte *)(bVar1 + 0x2942) & 0x20) != 0) {
          FUN_10d0_1068();
          iVar3 = 0;
          iVar4 = 0;
        }
      }
      else {
        iVar3 = FUN_10d0_113c();
      }
      *(byte *)param_2[2] = param_1;
    }
    if (iVar3 == iVar4) {
      return (uint)param_1;
    }
  }
LAB_10d0_09ea:
  *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 0x20;
  return 0xffff;
}


