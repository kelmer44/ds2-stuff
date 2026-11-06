// FUN_1078_0d60 at 1078:0d60

void __cdecl16far
FUN_1078_0d60(int param_1,undefined2 param_2,ushort param_3,int param_4,undefined2 param_5)

{
  ushort a1;
  int iVar1;
  ushort a4;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 uVar7;
  int iVar8;
  int iVar9;
  ushort a0;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  a1 = SELECTPALETTE(param_3,DAT_10e8_200a,0);
  if (*(int *)(param_4 + 0x2c) == 0 && *(int *)(param_4 + 0x2a) == 0) {
    if (*(int *)(param_4 + 0x20) != 0 || *(int *)(param_4 + 0x1e) != 0) {
      a1 = 0xdb3;
      FUN_1078_0a00();
    }
  }
  else if (*(int *)(param_4 + 0x20) == 0 && *(int *)(param_4 + 0x1e) == 0) {
    a1 = 0xdd6;
    FUN_1078_0b8e();
  }
  else {
    uVar7 = (undefined2)((ulong)*(undefined4 *)(param_4 + 0x2a) >> 0x10);
    iVar4 = (int)*(undefined4 *)(param_4 + 0x2a);
    iVar1 = *(int *)(iVar4 + 0xc) + *(int *)(param_4 + 0x2e);
    iVar6 = *(int *)(iVar4 + 0xe) + *(int *)(param_4 + 0x30);
    iVar8 = *(int *)(param_4 + 0x22);
    iVar2 = iVar8 + *(int *)(param_4 + 0x26);
    iVar5 = iVar1 + *(int *)(iVar4 + 8);
    iVar3 = *(int *)(param_4 + 0x24) + *(int *)(param_4 + 0x28);
    iVar4 = iVar6 + *(int *)(iVar4 + 10);
    if (iVar1 < iVar8) {
      iVar8 = iVar1;
    }
    iVar9 = iVar1;
    if (iVar6 < *(int *)(param_4 + 0x24)) {
      iVar9 = iVar6;
    }
    if (iVar2 < iVar5) {
      iVar2 = iVar5;
    }
    if (iVar3 < iVar4) {
      iVar3 = iVar4;
    }
    if (iVar8 < *(int *)(param_1 + 0x34a)) {
      iVar8 = *(int *)(param_1 + 0x34a);
    }
    if (iVar9 < *(int *)(param_1 + 0x34e)) {
      iVar9 = *(int *)(param_1 + 0x34e);
    }
    if (*(int *)(param_1 + 0x34c) < iVar2) {
      iVar2 = *(int *)(param_1 + 0x34c);
    }
    if (*(int *)(param_1 + 0x350) < iVar3) {
      iVar3 = *(int *)(param_1 + 0x350);
    }
    iVar2 = iVar2 - iVar8;
    a4 = iVar3 - iVar9;
    if ((0 < iVar2) && (0 < (int)a4)) {
      FUN_1078_0172(param_1,param_2,param_3,iVar2,a4);
      *(int *)(param_4 + 0x3e) = iVar1;
      *(int *)(param_4 + 0x40) = iVar6;
      if (*(int *)(param_4 + 0x38) == 0 && *(int *)(param_4 + 0x36) == 0) {
        PATBLT(*(ushort *)(param_1 + 8),0,0,iVar2,a4,0x42);
      }
      else {
        FUN_1078_1aea(*(undefined2 *)(param_1 + 8),0,0,*(undefined2 *)(param_4 + 0x36),
                      *(undefined2 *)(param_4 + 0x38),
                      -*(int *)(param_4 + 0x3a) - *(int *)(param_4 + 0x3c));
      }
      uVar7 = *(undefined2 *)(param_4 + 0x30);
      a0 = a4;
      FUN_1078_06f4(param_1,param_2,a4,uVar7,iVar2);
      if (DAT_10e8_008a != 0) {
        FUN_1078_0000(*(undefined2 *)(param_1 + 8),a4,uVar7);
      }
      a1 = 0;
      WinGStretchBlt_inferred
                (a0,iVar2,param_3,a4,param_3,*(ushort *)(param_1 + 10),*(short *)(param_1 + 0xc),
                 *(short *)(param_1 + 8),0,0);
      SELECTOBJECT(*(ushort *)(param_1 + 8),DAT_10e8_76f6);
      DELETEOBJECT(*(ushort *)(param_1 + 2));
    }
  }
  SELECTPALETTE(param_3,a1,0);
  uVar7 = *(undefined2 *)(param_4 + 0x2c);
  *(undefined2 *)(param_4 + 0x1e) = *(undefined2 *)(param_4 + 0x2a);
  *(undefined2 *)(param_4 + 0x20) = uVar7;
  if (*(int *)(param_4 + 0x2c) != 0 || *(int *)(param_4 + 0x2a) != 0) {
    *(int *)(param_4 + 0x22) =
         *(int *)((int)*(undefined4 *)(param_4 + 0x2a) + 0xc) + *(int *)(param_4 + 0x2e);
    *(int *)(param_4 + 0x24) =
         *(int *)((int)*(undefined4 *)(param_4 + 0x2a) + 0xe) + *(int *)(param_4 + 0x30);
    *(undefined2 *)(param_4 + 0x26) = *(undefined2 *)((int)*(undefined4 *)(param_4 + 0x2a) + 8);
    *(undefined2 *)(param_4 + 0x28) = *(undefined2 *)((int)*(undefined4 *)(param_4 + 0x2a) + 10);
  }
  return;
}


