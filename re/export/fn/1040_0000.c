// FUN_1040_0000 at 1040:0000

undefined2 __cdecl16far
FUN_1040_0000(undefined2 param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iStackY_12;
  
                    /* Segment:    9
                       Offset:     000099e0
                       Length:     0866
                       Min Alloc:  0866
                       Flags:      0d50
                           Code
                           Moveable
                           Preload
                           Impure (Non-shareable)
                        */
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  if (param_2 < param_4) {
    iVar2 = 1;
  }
  else {
    iVar2 = -1;
  }
  if (param_3 < param_5) {
    iVar3 = 1;
  }
  else {
    iVar3 = -1;
  }
  iStackY_12 = param_2;
  uVar7 = param_5 - param_3 >> 0xf;
  iVar4 = (param_5 - param_3 ^ uVar7) - uVar7;
  uVar7 = param_4 - param_2 >> 0xf;
  iVar5 = (param_4 - param_2 ^ uVar7) - uVar7;
  if (iVar5 < iVar4) {
    iVar6 = iVar5 * 2 - iVar4;
    if (param_5 != param_3) {
      do {
        if (*(int *)((DAT_10e8_16e4 * param_3 + iStackY_12) * 2 + 0x3eba) == -1) {
          return 0;
        }
        iVar1 = iVar5 * 2;
        if (-1 < iVar6) {
          iStackY_12 = iStackY_12 + iVar2;
          iVar1 = (iVar5 - iVar4) * 2;
        }
        iVar6 = iVar6 + iVar1;
        param_3 = param_3 + iVar3;
      } while (param_5 != param_3);
    }
  }
  else {
    iVar6 = iVar4 * 2 - iVar5;
    if (param_2 != param_4) {
      param_3 = param_3 * DAT_10e8_16e4;
      do {
        if (*(int *)((param_2 + param_3) * 2 + 0x3eba) == -1) {
          return 0;
        }
        iVar1 = iVar4 * 2;
        if (-1 < iVar6) {
          param_3 = param_3 + iVar3 * DAT_10e8_16e4;
          iVar1 = (iVar4 - iVar5) * 2;
        }
        param_2 = param_2 + iVar2;
        iVar6 = iVar6 + iVar1;
      } while (param_4 != param_2);
    }
  }
  return 1;
}


