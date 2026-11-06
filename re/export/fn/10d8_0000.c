// FUN_10d8_0000 at 10d8:0000

int __cdecl16far FUN_10d8_0000(undefined4 param_1,undefined4 param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  
                    /* Segment:    28
                       Offset:     0001ad80
                       Length:     00b6
                       Min Alloc:  00b6
                       Flags:      0d50
                           Code
                           Moveable
                           Preload
                           Impure (Non-shareable)
                        */
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  pbVar4 = (byte *)((int)param_1 + -1);
  pbVar3 = (byte *)((int)param_2 + -1);
  do {
    pbVar4 = pbVar4 + 1;
    pbVar3 = pbVar3 + 1;
    bVar1 = *pbVar4;
    bVar2 = *pbVar3;
    if ((bVar1 < 0x5b) && (0x40 < bVar1)) {
      bVar1 = bVar1 + 0x20;
    }
    if ((bVar2 < 0x5b) && (0x40 < bVar2)) {
      bVar2 = bVar2 + 0x20;
    }
  } while (((byte)(bVar1 - bVar2) == '\0') && (bVar2 != 0));
  return (int)(char)(bVar1 - bVar2);
}


