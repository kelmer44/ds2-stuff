// FUN_1020_0a40 at 1020:0a40

void __cdecl16far FUN_1020_0a40(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  if (DAT_10e8_1312 == 1) {
    uVar5 = (undefined2)((ulong)param_1 >> 0x10);
    iVar3 = (int)param_1;
    DAT_10e8_2f8a = *(int *)(iVar3 + 8) * *(int *)(iVar3 + 10);
    iVar2 = FUN_1020_0a14(DAT_10e8_2f8a);
    DAT_10e8_2f8e = *(uint *)(iVar2 * 2 + 0x12f0);
    DAT_10e8_2f8c = (1 << ((byte)iVar2 & 0x1f)) >> 5;
    uVar6 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 2) >> 0x10);
    iVar2 = (int)*(undefined4 *)(iVar3 + 2);
    DAT_10e8_2f92 = (undefined1 *)CONCAT22(uVar6,(undefined1 *)(iVar2 + *(int *)(iVar2 + 10)));
    uVar1 = *(undefined4 *)((int)param_2 + 2);
    uVar5 = (undefined2)((ulong)uVar1 >> 0x10);
    iVar2 = (int)uVar1;
    DAT_10e8_2f96 = (undefined1 *)CONCAT22(uVar5,(undefined1 *)(iVar2 + *(int *)(iVar2 + 10)));
    *DAT_10e8_2f92 = 0;
    *DAT_10e8_2f96 = 0xff;
    DAT_10e8_2f90 = 0;
  }
  uVar4 = 0;
  if (DAT_10e8_2f8c != 0) {
    do {
      if (DAT_10e8_1312 < DAT_10e8_2f8a) {
        ((undefined1 *)DAT_10e8_2f92)[DAT_10e8_1312] = 0;
        ((undefined1 *)DAT_10e8_2f96)[DAT_10e8_1312] = 0xff;
      }
      if ((DAT_10e8_1312 & 1) == 0) {
        DAT_10e8_1312 = DAT_10e8_1312 >> 1;
      }
      else {
        DAT_10e8_1312 = DAT_10e8_1312 >> 1 ^ DAT_10e8_2f8e;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < DAT_10e8_2f8c);
  }
  DAT_10e8_2f90 = DAT_10e8_2f90 + 1;
  if (DAT_10e8_2f90 == 0x20) {
    DAT_10e8_1312 = 1;
  }
  return;
}


