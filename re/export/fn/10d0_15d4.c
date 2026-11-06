// FUN_10d0_15d4 at 10d0:15d4

ushort __cdecl16far FUN_10d0_15d4(ushort param_1,ushort param_2)

{
  ushort uVar1;
  
  if (param_1 == 0) {
    uVar1 = FUN_10d0_155e(param_2);
  }
  else if (param_2 == 0) {
    FUN_10d0_15ba(param_1);
    uVar1 = 0;
  }
  else {
    LOCKSEGMENT(0xffff);
    if (param_2 == 0) {
      param_2 = 1;
    }
    uVar1 = LOCALREALLOC(param_1,param_2,0x62);
    UNLOCKSEGMENT(0xffff);
  }
  return uVar1;
}


