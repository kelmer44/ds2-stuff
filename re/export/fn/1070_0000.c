// FUN_1070_0000 at 1070:0000

undefined2 __cdecl16far
FUN_1070_0000(undefined2 param_1,void *param_2,undefined2 param_3,byte param_4)

{
  uint *puVar1;
  uint *puVar2;
  undefined2 *puVar3;
  void *pvVar4;
  short sVar5;
  undefined2 *puVar6;
  undefined2 uVar7;
  int iVar8;
  uint uVar9;
  undefined2 uVar10;
  undefined2 *puVar11;
  void *pvVar12;
  uint uVar13;
  
                    /* Segment:    15
                       Offset:     00013340
                       Length:     021c
                       Min Alloc:  021c
                       Flags:      0d50
                           Code
                           Moveable
                           Preload
                           Impure (Non-shareable)
                        */
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  uVar9 = DAT_10e8_1fca | (uint)DAT_10e8_1fc8;
  pvVar4 = DAT_10e8_1fc8;
  uVar13 = DAT_10e8_1fca;
  if (uVar9 != 0) {
    do {
      sVar5 = LSTRCMPI((void *)CONCAT22(uVar13,pvVar4),(void *)CONCAT22(param_3,param_2));
      if (sVar5 == 0) {
        *(int *)((int)pvVar4 + 0x11) = *(int *)((int)pvVar4 + 0x11) + 1;
        return *(undefined2 *)((int)pvVar4 + 0xd);
      }
      puVar1 = (uint *)((int)pvVar4 + 0x13);
      puVar2 = (uint *)((int)pvVar4 + 0x15);
      pvVar4 = (void *)*puVar1;
      uVar13 = *puVar2;
    } while (*puVar2 != 0 || (void *)*puVar1 != (void *)0x0);
    uVar9 = 0;
  }
  puVar6 = (undefined2 *)FUN_1090_0000(0x17);
  puVar11 = puVar6;
  for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
    puVar3 = puVar11;
    puVar11 = puVar11 + 1;
    *puVar3 = 0;
  }
  *(undefined1 *)puVar11 = 0;
  *(uint *)((int)puVar6 + 0x13) = (uint)DAT_10e8_1fc8;
  *(uint *)((int)puVar6 + 0x15) = DAT_10e8_1fca;
  DAT_10e8_1fc8 = puVar6;
  DAT_10e8_1fca = uVar9;
  pvVar12 = LSTRCPY((undefined2 *)CONCAT22(uVar9,puVar6),(void *)CONCAT22(param_3,param_2));
  uVar10 = (undefined2)((ulong)pvVar12 >> 0x10);
  *(undefined2 *)((int)puVar6 + 0x11) = 1;
  uVar7 = FUN_1090_0000(0x18,0);
  *(undefined2 *)((int)puVar6 + 0xd) = uVar7;
  *(undefined2 *)((int)puVar6 + 0xf) = uVar10;
  puVar11 = (undefined2 *)*(undefined2 *)((int)puVar6 + 0xd);
  for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
    puVar3 = puVar11;
    puVar11 = puVar11 + 1;
    *puVar3 = 0;
  }
  FUN_1080_0890(0x275e,(char *)s_ReadSpeed_10e8_10d8 + 8,0x1fcc,(char *)s_Options_10e8_10e2 + 6,
                param_2,param_3,*(undefined2 *)((int)puVar6 + 0xd),
                *(undefined2 *)((int)puVar6 + 0xf));
  FUN_1080_0ad6(*(undefined2 *)((int)puVar6 + 0xd),*(undefined2 *)((int)puVar6 + 0xf));
  if ((param_4 & 1) != 0) {
    iVar8 = *(int *)((int)puVar6 + 0xd);
    uVar7 = *(undefined2 *)((int)puVar6 + 0xf);
    *(int *)(iVar8 + 0x14) = iVar8;
    *(undefined2 *)(iVar8 + 0x16) = uVar7;
  }
  return *(undefined2 *)((int)puVar6 + 0xd);
}


