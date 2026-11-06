// FUN_1078_1030 at 1078:1030

void __cdecl16far
FUN_1078_1030(int param_1,undefined2 param_2,ushort param_3,ushort param_4,undefined2 param_5,
             int param_6,ushort param_7,int param_8,int param_9)

{
  undefined2 uVar1;
  ushort uVar2;
  ushort uVar3;
  int a3;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  uVar2 = SELECTPALETTE(param_3,DAT_10e8_200a,0);
  if (*(int *)(param_4 + 0x2c) == 0 && *(int *)(param_4 + 0x2a) == 0) {
    if (*(int *)(param_4 + 0x20) != 0 || *(int *)(param_4 + 0x1e) != 0) {
      uVar2 = param_4;
      FUN_1078_0a00();
    }
  }
  else if (*(int *)(param_4 + 0x20) == 0 && *(int *)(param_4 + 0x1e) == 0) {
    uVar2 = param_4;
    FUN_1078_0b8e();
  }
  else {
    param_8 = param_8 - param_6;
    uVar3 = param_9 - param_7;
    if ((0 < param_8) && (0 < (int)uVar3)) {
      a3 = param_8;
      uVar2 = uVar3;
      FUN_1078_0172(param_1,param_2,param_3);
      *(ushort *)(param_4 + 0x3e) = uVar3;
      *(int *)(param_4 + 0x40) = param_8;
      if (*(int *)(param_4 + 0x38) == 0 && *(int *)(param_4 + 0x36) == 0) {
        PATBLT(*(ushort *)(param_1 + 8),0,0,a3,uVar2,0x42);
      }
      else {
        FUN_1078_1aea(*(undefined2 *)(param_1 + 8),0,0,*(undefined2 *)(param_4 + 0x36),
                      *(undefined2 *)(param_4 + 0x38),param_6 - *(int *)(param_4 + 0x3a),
                      param_7 - *(int *)(param_4 + 0x3c),0);
      }
      FUN_1078_06f4(param_1,param_2,param_6,param_7,a3,uVar2,*(undefined2 *)(param_4 + 0x30));
      if (DAT_10e8_008a != 0) {
        FUN_1078_0000(*(undefined2 *)(param_1 + 8),param_6,param_7);
      }
      WinGStretchBlt_inferred
                (uVar2,a3,param_3,param_6,param_7,*(ushort *)(param_1 + 10),
                 *(short *)(param_1 + 0xc),*(short *)(param_1 + 8),0,0);
      SELECTOBJECT(*(ushort *)(param_1 + 8),DAT_10e8_76f6);
      DELETEOBJECT(*(ushort *)(param_1 + 2));
      uVar2 = param_7;
    }
  }
  SELECTPALETTE(param_3,uVar2,0);
  uVar1 = *(undefined2 *)(param_4 + 0x2c);
  *(undefined2 *)(param_4 + 0x1e) = *(undefined2 *)(param_4 + 0x2a);
  *(undefined2 *)(param_4 + 0x20) = uVar1;
  if (*(int *)(param_4 + 0x2c) != 0 || *(int *)(param_4 + 0x2a) != 0) {
    *(int *)(param_4 + 0x24) =
         *(int *)((int)*(undefined4 *)(param_4 + 0x2a) + 0xe) + *(int *)(param_4 + 0x30);
    *(int *)(param_4 + 0x22) =
         *(int *)((int)*(undefined4 *)(param_4 + 0x2a) + 0xc) + *(int *)(param_4 + 0x2e);
    *(ushort *)(param_4 + 0x26) = uVar2;
    *(ushort *)(param_4 + 0x28) = param_3;
  }
  return;
}


