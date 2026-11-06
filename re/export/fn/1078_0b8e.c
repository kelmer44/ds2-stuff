// FUN_1078_0b8e at 1078:0b8e

void __cdecl16far
FUN_1078_0b8e(int param_1,int param_2,short param_3,undefined4 param_4,undefined2 param_5)

{
  int iVar1;
  int a3;
  ushort a0;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  char *pcVar7;
  char *a3_00;
  char *pcVar8;
  
  pcVar7 = (char *)s_Options_10e8_10d0;
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  uVar5 = (undefined2)((ulong)param_4 >> 0x10);
  iVar3 = (int)param_4;
  uVar6 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x2a) >> 0x10);
  iVar4 = (int)*(undefined4 *)(iVar3 + 0x2a);
  iVar1 = *(int *)(iVar4 + 0xc) + *(int *)(iVar3 + 0x2e);
  iVar2 = *(int *)(iVar4 + 0xe) + *(int *)CONCAT22(uVar5,(int *)(iVar3 + 0x30));
  a3 = *(int *)(iVar4 + 8);
  a0 = *(ushort *)(iVar4 + 10);
  if (*(int *)(param_1 + 0x34c) < iVar1 + a3) {
    a3 = *(int *)(param_1 + 0x34c) - iVar1;
  }
  if (*(int *)(param_1 + 0x350) < (int)(iVar2 + a0)) {
    a0 = *(int *)(param_1 + 0x350) - iVar2;
  }
  *(int *)(iVar3 + 0x3e) = iVar1;
  *(int *)(iVar3 + 0x40) = iVar2;
  FUN_1078_08c0(param_1,param_2,iVar3,uVar5,param_5);
  if ((0 < a3) && (0 < (int)a0)) {
    iVar1 = param_2;
    FUN_1078_0172(param_1,param_2,param_3,a3,a0);
    if (*(int *)(iVar3 + 0x38) == 0 && *(int *)(iVar3 + 0x36) == 0) {
      pcVar7 = (char *)0x13a8;
      PATBLT(*(ushort *)(param_1 + 8),0,0,a3,a0,0x42);
    }
    else {
      FUN_1078_1aea(*(undefined2 *)(param_1 + 8),0,0,*(undefined2 *)(iVar3 + 0x36),
                    *(undefined2 *)(iVar3 + 0x38),iVar1 - *(int *)(iVar3 + 0x3a),
                    -*(int *)(iVar3 + 0x3c));
    }
    a3_00 = (char *)*(undefined2 *)(iVar3 + 0x30);
    pcVar8 = a3_00;
    FUN_1078_06f4(param_1,param_2,a3_00,a3_00,a3,a0);
    if (DAT_10e8_008a != 0) {
      FUN_1078_0000(*(undefined2 *)(param_1 + 8),a3_00,pcVar8);
      a3_00 = pcVar7;
    }
    WinGStretchBlt_inferred
              (a0,a3,param_3,(short)a3_00,param_3,*(ushort *)(param_1 + 10),
               *(short *)(param_1 + 0xc),*(short *)(param_1 + 8),0,0);
    SELECTOBJECT(*(ushort *)(param_1 + 8),DAT_10e8_76f6);
    DELETEOBJECT(*(ushort *)(param_1 + 2));
  }
  return;
}


