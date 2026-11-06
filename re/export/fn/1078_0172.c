// FUN_1078_0172 at 1078:0172

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1078_0172(undefined4 param_1,undefined2 param_2,int param_3,int param_4)

{
  ulong uVar1;
  ushort uVar2;
  int iVar3;
  undefined2 in_DX;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  *(int *)(iVar4 + 10) = param_3;
  *(int *)(iVar4 + 0xc) = param_4;
  if (DAT_10e8_1fd0 == 0 && DAT_10e8_1fce == (undefined2 *)0x0) {
    puVar5 = (undefined2 *)FUN_1090_0000(0x428,0);
    _DAT_10e8_1fce = (undefined2 *)CONCAT22(in_DX,puVar5);
    uVar2 = WinGRecommendDIBFormat_inferred((undefined2 *)CONCAT22(in_DX,puVar5));
    puVar5 = (undefined2 *)_DAT_10e8_1fce;
    uVar8 = (undefined2)((ulong)_DAT_10e8_1fce >> 0x10);
    if (uVar2 == 0) {
      puVar5[4] = 0xffff;
      puVar5[5] = 0xffff;
      uVar1 = (ulong)_DAT_10e8_1fce >> 0x10;
      puVar5 = (undefined2 *)_DAT_10e8_1fce;
      *_DAT_10e8_1fce = 0x28;
      puVar5[1] = 0;
      ((undefined2 *)_DAT_10e8_1fce)[6] = 1;
      ((undefined2 *)_DAT_10e8_1fce)[7] = 8;
      uVar8 = (undefined2)((ulong)_DAT_10e8_1fce >> 0x10);
      puVar5 = (undefined2 *)_DAT_10e8_1fce;
      puVar5[9] = 0;
      puVar5[8] = 0;
      uVar8 = (undefined2)((ulong)_DAT_10e8_1fce >> 0x10);
      puVar5 = (undefined2 *)_DAT_10e8_1fce;
      puVar5[0xb] = 0;
      puVar5[10] = 0;
      uVar8 = (undefined2)((ulong)_DAT_10e8_1fce >> 0x10);
      puVar5 = (undefined2 *)_DAT_10e8_1fce;
      puVar5[0x11] = 0;
      puVar5[0x10] = 0;
      uVar8 = (undefined2)((ulong)_DAT_10e8_1fce >> 0x10);
      puVar5 = (undefined2 *)_DAT_10e8_1fce;
      puVar5[0x13] = 0;
      puVar5[0x12] = 0;
    }
    else {
      puVar5[7] = 8;
      uVar8 = (undefined2)((ulong)_DAT_10e8_1fce >> 0x10);
      puVar5 = (undefined2 *)_DAT_10e8_1fce;
      puVar5[9] = 0;
      puVar5[8] = 0;
    }
    FUN_10d0_046e();
    uVar8 = (undefined2)((ulong)_DAT_10e8_1fce >> 0x10);
    puVar5 = (undefined2 *)_DAT_10e8_1fce;
    puVar5[2] = param_3;
    puVar5[3] = param_3 >> 0xf;
    iVar3 = 0;
    iVar6 = 0xf0;
    do {
      *(undefined1 *)((int)(undefined2 *)_DAT_10e8_1fce + iVar3 + 0x28) =
           ((undefined1 *)&DAT_10e8_6ca0)[iVar3];
      *(undefined1 *)((int)(undefined2 *)_DAT_10e8_1fce + iVar3 + 0x29) =
           ((undefined1 *)&DAT_10e8_6c9f)[iVar3];
      *(undefined1 *)((int)(undefined2 *)_DAT_10e8_1fce + iVar3 + 0x2a) =
           ((undefined1 *)&DAT_10e8_6c9e)[iVar3];
      *(undefined1 *)((int)(undefined2 *)_DAT_10e8_1fce + iVar3 + 0x2b) =
           ((undefined1 *)&DAT_10e8_6ca1)[iVar3];
      iVar3 = iVar3 + 4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  uVar8 = (undefined2)((ulong)_DAT_10e8_1fce >> 0x10);
  puVar5 = (undefined2 *)_DAT_10e8_1fce;
  if (((int)puVar5[5] < 0) || (((int)puVar5[5] < 1 && (puVar5[4] == 0)))) {
    param_4 = -param_4;
  }
  puVar5[4] = param_4;
  puVar5[5] = param_4 >> 0xf;
  uVar8 = (undefined2)((ulong)_DAT_10e8_1fce >> 0x10);
  puVar5 = (undefined2 *)_DAT_10e8_1fce;
  puVar5[2] = param_3;
  puVar5[3] = param_3 >> 0xf;
  iVar6 = 0x3c0;
  iVar3 = 0x10;
  do {
    *(undefined1 *)((int)(undefined2 *)_DAT_10e8_1fce + iVar6 + 0x28) =
         ((undefined1 *)&DAT_10e8_6ca0)[iVar6];
    *(undefined1 *)((int)(undefined2 *)_DAT_10e8_1fce + iVar6 + 0x29) =
         ((undefined1 *)&DAT_10e8_6c9f)[iVar6];
    *(undefined1 *)((int)(undefined2 *)_DAT_10e8_1fce + iVar6 + 0x2a) =
         ((undefined1 *)&DAT_10e8_6c9e)[iVar6];
    *(undefined1 *)((int)(undefined2 *)_DAT_10e8_1fce + iVar6 + 0x2b) =
         ((undefined1 *)&DAT_10e8_6ca1)[iVar6];
    iVar6 = iVar6 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (*(int *)(iVar4 + 8) == 0) {
    uVar2 = WinGCreateDC_inferred();
    *(ushort *)(iVar4 + 8) = uVar2;
    DAT_10e8_9f40 = GETSTOCKOBJECT(0xd);
    DAT_10e8_9f42 = SELECTOBJECT(*(ushort *)(iVar4 + 8),DAT_10e8_9f40);
  }
  uVar2 = WinGCreateBitmap_inferred(*(ushort *)(iVar4 + 8),_DAT_10e8_1fce,&DAT_10e8_343a);
  *(ushort *)(iVar4 + 2) = uVar2;
  if (uVar2 == 0) {
    FUN_1098_0248((char *)s_WinG_can_t_allocate_enough_memor_10e8_1fd2,
                  (char *)s_Options_10e8_10e2 + 6);
    FUN_1090_0068(DAT_10e8_0010,DAT_10e8_0012);
    FUN_10d0_01a3((char *)s_Options_10e8_108c + 4,0xff);
  }
  DAT_10e8_76f6 = SELECTOBJECT(*(ushort *)(iVar4 + 8),*(ushort *)(iVar4 + 2));
  return;
}


