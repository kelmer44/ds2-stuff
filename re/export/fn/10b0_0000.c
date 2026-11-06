// FUN_10b0_0000 at 10b0:0000

undefined2 __cdecl16far
FUN_10b0_0000(undefined4 param_1,undefined2 param_2,undefined2 param_3,int param_4,int param_5,
             undefined2 param_6,undefined2 param_7,undefined4 param_8,undefined2 param_9,
             uint param_10,int param_11,int param_12,int param_13,undefined1 param_14)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 unaff_SS;
  bool bVar11;
  long lVar12;
  uint local_40;
  int iStackY_3e;
  int iStackY_3c;
  int iStackY_3a;
  undefined2 local_38;
  undefined2 uStackY_36;
  undefined2 uStackY_34;
  int iStackY_32;
  int local_30;
  int iStackY_2e;
  int iStackY_2c;
  int iStackY_2a;
  int iStackY_28;
  char *pcStackY_26;
  char *pcStackY_24;
  uint uStackY_22;
  undefined4 uStackY_20;
  int iStackY_1c;
  int iStackY_1a;
  int iStackY_18;
  char *pcStackY_16;
  
                    /* Segment:    23
                       Offset:     000182e0
                       Length:     0300
                       Min Alloc:  0300
                       Flags:      0d50
                           Code
                           Moveable
                           Preload
                           Impure (Non-shareable)
                        */
  FUN_10d0_029e();
  uVar9 = (undefined2)((ulong)param_1 >> 0x10);
  iStackY_28 = *(int *)((int)param_1 + 8);
  local_30 = param_4;
  iStackY_2e = param_5;
  iStackY_2c = param_4 + param_11;
  iStackY_2a = param_5 + param_12;
  uVar10 = (undefined2)((ulong)param_8 >> 0x10);
  iVar6 = (int)param_8;
  if (iStackY_28 < 0) {
    iStackY_28 = -iStackY_28;
  }
  uStackY_36 = 0;
  local_38 = 0;
  uStackY_34 = *(undefined2 *)((int)param_1 + 4);
  pcStackY_16 = (char *)s_Options_10e8_10d0;
  iStackY_18 = 0x8b;
  iStackY_32 = iStackY_28;
  uVar1 = INTERSECTRECT((uint *)CONCAT22(unaff_SS,&local_40),(int *)CONCAT22(unaff_SS,&local_30),
                        (undefined2 *)CONCAT22(unaff_SS,&local_38));
  if (uVar1 != 0) {
    uStackY_20._0_2_ = local_40;
    uStackY_20._2_2_ = iStackY_3e;
    iStackY_1c = -(local_40 - iStackY_3c);
    iVar8 = iStackY_3a - iStackY_3e;
    uStackY_22 = local_40 - param_4;
    pcStackY_24 = (char *)(iStackY_3e - param_5);
    if (iStackY_18 == 0) {
      FUN_10d0_052a();
    }
    else {
      pcStackY_26 = (char *)0x0;
      uVar2 = (int)pcStackY_24 + iVar8;
      uVar4 = *(uint *)(iVar6 + 8) - uVar2;
      uVar3 = (uint)(uVar4 < param_10);
      uVar2 = (-(uint)(*(uint *)(iVar6 + 8) < uVar2) - ((int)uVar2 >> 0xf)) - ((int)param_10 >> 0xf)
      ;
      bVar11 = -1 < (int)(uVar2 - uVar3);
      if ((bVar11) && ((uVar2 != uVar3 && bVar11 || (uVar4 != param_10)))) {
        uVar3 = (int)pcStackY_24 + iVar8;
        uVar2 = *(uint *)(iVar6 + 8) - uVar3;
        iVar5 = uVar2 - param_10;
        iVar7 = (((-(uint)(*(uint *)(iVar6 + 8) < uVar3) - ((int)uVar3 >> 0xf)) -
                 ((int)param_10 >> 0xf)) - (uint)(uVar2 < param_10)) + -1 + (uint)(iVar5 != 0);
        do {
          do {
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          iVar7 = iVar7 + -1;
        } while (-1 < iVar7);
      }
    }
    iStackY_1a = iVar8;
    lVar12 = FUN_10d0_052a();
    uVar9 = (undefined2)(lVar12 + (int)(uint)uStackY_20);
    uStackY_20._2_2_ = iStackY_1c >> 0xf;
    iVar8 = iStackY_1a >> 0xf;
    if (param_13 == 0) {
      if (iStackY_18 == 0) {
        pcStackY_16 = (char *)iStackY_1c;
        uStackY_22 = (*(int *)(iVar6 + 4) * *(int *)(iVar6 + 0xe) + 0x1fU & 0xffe7) >> 3;
        uStackY_20._0_2_ = 0;
        pcStackY_24 = (char *)s_Options_10e8_10d0;
        pcStackY_26 = (char *)0x2c5;
        iStackY_1c = uVar9;
        iStackY_18 = iVar8;
        FUN_10b8_0254();
        return 1;
      }
    }
    else if (iStackY_18 == 0) {
      pcStackY_16 = (char *)iStackY_1c;
      uVar3 = *(int *)(iVar6 + 4) * *(int *)(iVar6 + 0xe) + 0x1fU & 0xffe7;
      uStackY_22 = uVar3 >> 3;
      uStackY_20._0_2_ = 0;
      pcStackY_24 = (char *)CONCAT11((byte)(uVar3 >> 0xb),param_14);
      pcStackY_26 = (char *)s_Options_10e8_10d0;
      iStackY_28 = 0x281;
      iStackY_1c = uVar9;
      iStackY_18 = iVar8;
      FUN_10b8_0024();
      return 1;
    }
    pcStackY_16 = (char *)iStackY_1c;
    iStackY_1c = 0;
    pcStackY_24 = (char *)CONCAT11((char)((uint)iStackY_1a >> 8),param_14);
    pcStackY_26 = (char *)s_Options_10e8_10d0;
    iStackY_28 = 0x2f3;
    uStackY_22 = uStackY_20._2_2_;
    iStackY_18 = iVar8;
    uStackY_20 = lVar12 + (int)(uint)uStackY_20;
    FUN_10b8_0104();
    return 1;
  }
  return 0;
}


