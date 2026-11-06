// FUN_1080_01de at 1080:01de

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1080_01de(ushort param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  ushort a1;
  int *piVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  int iVar8;
  int iVar9;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  uVar6 = (undefined2)((ulong)_DAT_10e8_6892 >> 0x10);
  if (*(int *)((int)_DAT_10e8_6892 + 0xf50) != 0 || *(int *)((int)_DAT_10e8_6892 + 0xf4e) != 0) {
    iVar5 = 0;
    iVar8 = 0;
    do {
      iVar9 = *(int *)(DAT_10e8_6892 + iVar8 + 0xf50);
      iVar8 = FUN_1060_07f6(*(undefined2 *)(DAT_10e8_6892 + iVar8 + 0xf4e));
      if (iVar8 != 0) {
        uVar7 = (undefined2)((ulong)_DAT_10e8_6892 >> 0x10);
        iVar8 = *(int *)((int)_DAT_10e8_6892 + iVar5 + 0xfb2);
        uVar6 = *(undefined2 *)((undefined1 *)&DAT_10e8_6c9e + iVar8 * 4);
        uVar1 = *(undefined2 *)((undefined1 *)&DAT_10e8_6ca0 + iVar8 * 4);
        piVar4 = (int *)((int)_DAT_10e8_6892 + iVar5 + 0xfe4);
        if (iVar8 < *piVar4) {
          puVar3 = (undefined2 *)((undefined1 *)&DAT_10e8_6c9e + iVar8 * 4);
          do {
            uVar2 = puVar3[3];
            *puVar3 = puVar3[2];
            puVar3[1] = uVar2;
            puVar3 = puVar3 + 2;
            iVar8 = iVar8 + 1;
          } while (iVar8 < *piVar4);
        }
        iVar8 = *(int *)CONCAT22(uVar7,piVar4) * 4;
        *(undefined2 *)((undefined1 *)&DAT_10e8_6c9e + iVar8) = uVar6;
        *(undefined2 *)((undefined1 *)&DAT_10e8_6ca0 + iVar8) = uVar1;
      }
      iVar5 = iVar5 + 2;
      iVar8 = iVar9 + 4;
      uVar6 = (undefined2)((ulong)_DAT_10e8_6892 >> 0x10);
    } while (*(int *)(iVar8 + (int)_DAT_10e8_6892 + 0xf50) != 0 ||
             *(int *)(iVar8 + (int)_DAT_10e8_6892 + 0xf4e) != 0);
  }
  if (DAT_10e8_200a != 0) {
    a1 = SELECTPALETTE(param_1,DAT_10e8_200a,0);
    ANIMATEPALETTE(DAT_10e8_200a,0xf0,0xe,&DAT_10e8_705e);
    if (a1 != 0) {
      SELECTPALETTE(param_1,a1,0);
    }
  }
  return;
}


