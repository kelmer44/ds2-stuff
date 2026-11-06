// FUN_1078_0a00 at 1078:0a00

void __cdecl16far
FUN_1078_0a00(int param_1,undefined2 param_2,short param_3,int param_4,undefined2 param_5,
             int param_6)

{
  int a4;
  int iVar1;
  short a1;
  ushort a0;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  a0 = *(ushort *)(param_4 + 0x24);
  a4 = *(int *)(param_4 + 0x28);
  if ((int)a0 < *(int *)(param_1 + 0x34e)) {
    a0 = *(ushort *)(param_1 + 0x34e);
  }
  if (*(int *)(param_1 + 0x350) < (int)(a4 + a0)) {
    a4 = *(int *)(param_1 + 0x350) - a0;
  }
  FUN_1078_0806(param_1,param_2,param_4,param_5);
  if ((0 < param_6) && (0 < a4)) {
    FUN_1078_0172(param_1,param_2,param_3,a4);
    if (*(int *)(param_4 + 0x38) == 0 && *(int *)(param_4 + 0x36) == 0) {
      PATBLT(*(ushort *)(param_1 + 8),0,0,*(ushort *)(param_1 + 8),a4,0x42);
    }
    else {
      iVar1 = a0 - *(int *)(param_4 + 0x3c);
      FUN_1078_1aea(*(undefined2 *)(param_1 + 8),0,0,*(undefined2 *)(param_4 + 0x36),
                    *(undefined2 *)(param_4 + 0x38),iVar1 - *(int *)(param_4 + 0x3a),iVar1,0);
    }
    a1 = a4;
    FUN_1078_06f4(param_1,param_2,a4,a0,0x7fff);
    if (DAT_10e8_008a != 0) {
      FUN_1078_0000(*(undefined2 *)(param_1 + 8),a4,a0);
    }
    WinGStretchBlt_inferred
              (a0,a1,param_3,a4,a0,*(ushort *)(param_1 + 10),*(short *)(param_1 + 0xc),
               *(short *)(param_1 + 8),0,0);
    SELECTOBJECT(*(ushort *)(param_1 + 8),DAT_10e8_76f6);
    DELETEOBJECT(*(ushort *)(param_1 + 2));
  }
  return;
}


