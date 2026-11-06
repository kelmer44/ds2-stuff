// FUN_1078_1238 at 1078:1238

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far
FUN_1078_1238(int param_1,undefined2 param_2,ushort param_3,int param_4,int param_5,int param_6,
             int param_7,int param_8,int param_9,int param_10,int param_11)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  char *unaff_BP;
  short unaff_DI;
  undefined2 uVar6;
  ushort in_stack_00000000;
  ushort in_stack_00000002;
  undefined4 uVar7;
  char *a0;
  
  a0 = (char *)s_Options_10e8_10e2 + 6;
  FUN_10d0_029e();
  uVar2 = SELECTPALETTE(param_3,DAT_10e8_200a,0);
  if (param_8 < *(int *)(param_1 + 0x34a)) {
    iVar3 = *(int *)(param_1 + 0x34a) - param_8;
    uVar6 = (undefined2)((ulong)_DAT_10e8_1fce >> 0x10);
    pvVar5 = (void *)_DAT_10e8_1fce;
    *(int *)((int)pvVar5 + 4) = iVar3;
    *(int *)((int)pvVar5 + 6) = iVar3 >> 0xf;
    uVar6 = (undefined2)((ulong)_DAT_10e8_1fce >> 0x10);
    pvVar5 = (void *)_DAT_10e8_1fce;
    if ((*(int *)((int)pvVar5 + 10) < 0) ||
       ((*(int *)((int)pvVar5 + 10) < 1 && (*(int *)((int)pvVar5 + 8) == 0)))) {
      iVar3 = param_9 - param_11;
    }
    else {
      iVar3 = param_11 - param_9;
    }
    *(int *)((int)pvVar5 + 8) = iVar3;
    *(int *)((int)pvVar5 + 10) = iVar3 >> 0xf;
    uVar2 = WinGCreateBitmap_inferred(*(ushort *)(param_1 + 8),_DAT_10e8_1fce,&DAT_10e8_343a);
    *(ushort *)(param_1 + 2) = uVar2;
    DAT_10e8_76f6 = SELECTOBJECT(*(ushort *)(param_1 + 8),uVar2);
    FUN_1080_0d56(DAT_10e8_1fce,DAT_10e8_1fd0,DAT_10e8_343a,DAT_10e8_343c,0,0,param_4,param_5,
                  param_8 - param_6,param_9 - param_7);
    uVar6 = (undefined2)((ulong)_DAT_10e8_1fce >> 0x10);
    uVar1 = *(uint *)((int)(void *)_DAT_10e8_1fce + 8);
    uVar4 = (int)uVar1 >> 0xf;
    WinGStretchBlt_inferred
              ((ushort)a0,unaff_DI,param_3,param_8,param_9,
               *(ushort *)((int)(void *)_DAT_10e8_1fce + 4),(uVar1 ^ uVar4) - uVar4,
               *(short *)(param_1 + 8),0,0);
    uVar2 = 0x1354;
    SELECTOBJECT(*(ushort *)(param_1 + 8),DAT_10e8_76f6);
    DELETEOBJECT(*(ushort *)(param_1 + 2));
    param_8 = *(int *)(param_1 + 0x34a);
  }
  if (param_9 < *(int *)(param_1 + 0x34e)) {
    uVar6 = (undefined2)((ulong)_DAT_10e8_1fce >> 0x10);
    pvVar5 = (void *)_DAT_10e8_1fce;
    *(int *)((int)pvVar5 + 4) = param_10 - param_8;
    *(int *)((int)pvVar5 + 6) = param_10 - param_8 >> 0xf;
    uVar6 = (undefined2)((ulong)_DAT_10e8_1fce >> 0x10);
    pvVar5 = (void *)_DAT_10e8_1fce;
    if ((*(int *)((int)pvVar5 + 10) < 0) ||
       ((*(int *)((int)pvVar5 + 10) < 1 && (*(int *)((int)pvVar5 + 8) == 0)))) {
      iVar3 = param_9 - *(int *)(param_1 + 0x34e);
    }
    else {
      iVar3 = *(int *)(param_1 + 0x34e) - param_9;
    }
    *(int *)((int)pvVar5 + 8) = iVar3;
    *(int *)((int)pvVar5 + 10) = iVar3 >> 0xf;
    uVar2 = WinGCreateBitmap_inferred(*(ushort *)(param_1 + 8),_DAT_10e8_1fce,&DAT_10e8_343a);
    *(ushort *)(param_1 + 2) = uVar2;
    DAT_10e8_76f6 = SELECTOBJECT(*(ushort *)(param_1 + 8),uVar2);
    FUN_1080_0d56(DAT_10e8_1fce,DAT_10e8_1fd0,DAT_10e8_343a,DAT_10e8_343c,0,0,param_4,param_5,
                  param_8 - param_6,param_9 - param_7);
    uVar6 = (undefined2)((ulong)_DAT_10e8_1fce >> 0x10);
    uVar1 = *(uint *)((int)(void *)_DAT_10e8_1fce + 8);
    uVar4 = (int)uVar1 >> 0xf;
    uVar2 = (uVar1 ^ uVar4) - uVar4;
    WinGStretchBlt_inferred
              (in_stack_00000002,in_stack_00000000,param_3,param_8,param_9,
               *(ushort *)((int)(void *)_DAT_10e8_1fce + 4),uVar2,*(short *)(param_1 + 8),0,0);
    SELECTOBJECT(*(ushort *)(param_1 + 8),DAT_10e8_76f6);
    in_stack_00000002 = *(ushort *)(param_1 + 2);
    in_stack_00000000 = 0x13a8;
    unaff_BP = (char *)s_Driver_de_sonido_no_encontrado__S_10e8_1455 + 0x16;
    DELETEOBJECT(in_stack_00000002);
    param_9 = *(int *)(param_1 + 0x34e);
  }
  if (*(int *)(param_1 + 0x34c) < param_10) {
    param_10 = param_10 - *(int *)(param_1 + 0x34c);
    uVar6 = (undefined2)((ulong)_DAT_10e8_1fce >> 0x10);
    pvVar5 = (void *)_DAT_10e8_1fce;
    *(int *)((int)pvVar5 + 4) = param_10;
    *(int *)((int)pvVar5 + 6) = param_10 >> 0xf;
    uVar6 = (undefined2)((ulong)_DAT_10e8_1fce >> 0x10);
    pvVar5 = (void *)_DAT_10e8_1fce;
    if ((*(int *)((int)pvVar5 + 10) < 0) ||
       ((*(int *)((int)pvVar5 + 10) < 1 && (*(int *)((int)pvVar5 + 8) == 0)))) {
      iVar3 = param_9 - param_11;
    }
    else {
      iVar3 = param_11 - param_9;
    }
    *(int *)((int)pvVar5 + 8) = iVar3;
    *(int *)((int)pvVar5 + 10) = iVar3 >> 0xf;
    uVar2 = WinGCreateBitmap_inferred(*(ushort *)(param_1 + 8),_DAT_10e8_1fce,&DAT_10e8_343a);
    *(ushort *)(param_1 + 2) = uVar2;
    DAT_10e8_76f6 = SELECTOBJECT(*(ushort *)(param_1 + 8),uVar2);
    FUN_1080_0d56(DAT_10e8_1fce,DAT_10e8_1fd0,DAT_10e8_343a,DAT_10e8_343c,0,0,param_4,param_5,
                  *(int *)(param_1 + 0x34c) - param_6,param_9 - param_7);
    uVar6 = (undefined2)((ulong)_DAT_10e8_1fce >> 0x10);
    uVar1 = *(uint *)((int)(void *)_DAT_10e8_1fce + 8);
    uVar4 = (int)uVar1 >> 0xf;
    uVar2 = (uVar1 ^ uVar4) - uVar4;
    WinGStretchBlt_inferred
              (in_stack_00000002,in_stack_00000000,param_3,*(short *)(param_1 + 0x34c),param_9,
               *(ushort *)((int)(void *)_DAT_10e8_1fce + 4),uVar2,*(short *)(param_1 + 8),0,0);
    SELECTOBJECT(*(ushort *)(param_1 + 8),DAT_10e8_76f6);
    in_stack_00000002 = *(ushort *)(param_1 + 2);
    in_stack_00000000 = 0x13a8;
    unaff_BP = (char *)s_SysCutScene_10e8_156e + 5;
    DELETEOBJECT(in_stack_00000002);
    param_10 = *(int *)(param_1 + 0x34c);
  }
  if (*(int *)(param_1 + 0x350) < param_11) {
    uVar6 = (undefined2)((ulong)_DAT_10e8_1fce >> 0x10);
    pvVar5 = (void *)_DAT_10e8_1fce;
    *(int *)((int)pvVar5 + 4) = param_10 - param_8;
    *(int *)((int)pvVar5 + 6) = param_10 - param_8 >> 0xf;
    uVar6 = (undefined2)((ulong)_DAT_10e8_1fce >> 0x10);
    pvVar5 = (void *)_DAT_10e8_1fce;
    if ((*(int *)((int)pvVar5 + 10) < 0) ||
       ((*(int *)((int)pvVar5 + 10) < 1 && (*(int *)((int)pvVar5 + 8) == 0)))) {
      param_11 = *(int *)(param_1 + 0x350) - param_11;
    }
    else {
      param_11 = param_11 - *(int *)(param_1 + 0x350);
    }
    *(int *)((int)pvVar5 + 8) = param_11;
    *(int *)((int)pvVar5 + 10) = param_11 >> 0xf;
    uVar2 = WinGCreateBitmap_inferred(*(ushort *)(param_1 + 8),_DAT_10e8_1fce,&DAT_10e8_343a);
    *(ushort *)(param_1 + 2) = uVar2;
    DAT_10e8_76f6 = SELECTOBJECT(*(ushort *)(param_1 + 8),uVar2);
    FUN_1080_0d56(DAT_10e8_1fce,DAT_10e8_1fd0,DAT_10e8_343a,DAT_10e8_343c,0,0,param_4,param_5,
                  param_8 - param_6,*(int *)(param_1 + 0x350) - param_7);
    uVar6 = (undefined2)((ulong)_DAT_10e8_1fce >> 0x10);
    uVar1 = *(uint *)((int)(void *)_DAT_10e8_1fce + 8);
    uVar4 = (int)uVar1 >> 0xf;
    uVar2 = (uVar1 ^ uVar4) - uVar4;
    WinGStretchBlt_inferred
              (in_stack_00000002,in_stack_00000000,param_3,param_8,*(short *)(param_1 + 0x350),
               *(ushort *)((int)(void *)_DAT_10e8_1fce + 4),uVar2,*(short *)(param_1 + 8),0,0);
    SELECTOBJECT(*(ushort *)(param_1 + 8),DAT_10e8_76f6);
    in_stack_00000000 = 0x13a8;
    unaff_BP = (char *)s_GoingOut_10e8_167e + 2;
    DELETEOBJECT(*(ushort *)(param_1 + 2));
    param_11 = *(int *)(param_1 + 0x350);
  }
  if ((param_10 - param_8 < 1) || (param_11 - param_9 < 1)) {
    SELECTPALETTE(param_3,uVar2,0);
  }
  else {
    FUN_1078_0172(param_1,param_2,param_3,param_10 - param_8,param_11 - param_9);
    if (param_5 == 0 && param_4 == 0) {
      uVar7 = 0;
      PATBLT(*(ushort *)(param_1 + 8),0,0,0,0,0x42);
    }
    else {
      uVar7 = CONCAT22(param_9 - param_7,param_8 - param_6);
      FUN_1078_1aea(*(undefined2 *)(param_1 + 8),0,0,param_4,param_5,param_8 - param_6,
                    param_9 - param_7,0);
    }
    FUN_1078_06f4(param_1,param_2,param_8,param_9,(int)uVar7,(int)((ulong)uVar7 >> 0x10),0);
    if (DAT_10e8_008a != 0) {
      FUN_1078_0000(*(undefined2 *)(param_1 + 8),param_8,param_9);
    }
    uVar2 = *(ushort *)(param_1 + 10);
    WinGStretchBlt_inferred
              (in_stack_00000000,(short)unaff_BP,param_3,param_8,param_9,uVar2,
               *(short *)(param_1 + 0xc),*(short *)(param_1 + 8),0,0);
    SELECTPALETTE(param_3,uVar2,0);
    SELECTOBJECT(*(ushort *)(param_1 + 8),DAT_10e8_76f6);
    DELETEOBJECT(*(ushort *)(param_1 + 2));
  }
  return;
}


