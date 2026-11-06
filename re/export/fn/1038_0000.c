// FUN_1038_0000 at 1038:0000

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1038_0000(void)

{
  ushort uVar1;
  void *pvVar2;
  undefined2 in_DX;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  undefined2 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ushort a0;
  void *pvVar10;
  
                    /* Segment:    8
                       Offset:     000072e0
                       Length:     25b6
                       Min Alloc:  25b6
                       Flags:      0d50
                           Code
                           Moveable
                           Preload
                           Impure (Non-shareable)
                        */
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  DAT_10e8_3eb6 = (void *)FUN_1090_0000(0x436,0);
  _DAT_10e8_3eb8 = in_DX;
  uVar1 = _LOPEN((void *)0x10e81542,0x20);
  _LREAD(uVar1,(void *)CONCAT22(_DAT_10e8_3eb8,DAT_10e8_3eb6),0x436);
  uVar1 = GETDC(DAT_10e8_76f8);
  DAT_10e8_86b4 = FUN_1080_049a(uVar1,(int)DAT_10e8_3eb6 + 0x36,_DAT_10e8_3eb8);
  RELEASEDC(DAT_10e8_76f8,uVar1);
  DAT_10e8_5d0c =
       WinGCreateBitmap_inferred
                 (DAT_10e8_6546,(void *)CONCAT22(_DAT_10e8_3eb8,(void *)((int)DAT_10e8_3eb6 + 0xe)),
                  &DAT_10e8_8e36);
  DAT_10e8_8f96 = SELECTOBJECT(DAT_10e8_6546,DAT_10e8_5d0c);
  a0 = 0;
  WinGSetDIBColorTable_inferred
            (DAT_10e8_6546,0,0x100,
             (void *)CONCAT22(_DAT_10e8_3eb8,(void *)((int)DAT_10e8_3eb6 + 0x36)));
  uVar3 = (undefined1)DAT_10e8_8e36;
  cVar4 = (char)((uint)DAT_10e8_8e36 >> 8);
  pvVar2 = (void *)*(undefined2 *)((int)DAT_10e8_3eb6 + 10);
  iVar9 = 0;
  uVar1 = 0x13a8;
  iVar5 = 0xea;
  _LLSEEK(a0,(long)CONCAT22(*(undefined2 *)((int)DAT_10e8_3eb6 + 0xc),pvVar2),0);
  while ((0 < iVar9 && ((1 < iVar9 || (uVar1 != 0))))) {
    pvVar10 = (void *)CONCAT11(cVar4,uVar3);
    uVar6 = 0x109;
    _LREAD((ushort)pvVar2,(void *)CONCAT22(iVar5,pvVar10),0x8000);
    pvVar2 = (void *)CONCAT11(cVar4 + -0x80,uVar3);
    iVar9 = -0x8000;
    uVar1 = 0x13a8;
    iVar5 = 0x11f;
    _LREAD((ushort)pvVar10,(void *)CONCAT22(uVar6,pvVar2),0x8000);
    iVar5 = iVar5 + 8;
    iVar9 = iVar9 + -1;
  }
  iVar7 = iVar5;
  pvVar10 = pvVar2;
  if ((-1 < iVar9) && ((0 < iVar9 || (0x7fff < uVar1)))) {
    pvVar10 = (void *)CONCAT11(cVar4,uVar3);
    iVar9 = -0x8000;
    uVar8 = 0x13a8;
    iVar7 = 0x14e;
    _LREAD((ushort)pvVar2,(void *)CONCAT22(iVar5,pvVar10),0x8000);
    cVar4 = cVar4 + -0x80;
    uVar1 = uVar8 + 0x8000;
    iVar9 = iVar9 - (uint)(uVar8 < 0x8000);
  }
  pvVar2 = pvVar10;
  if (iVar9 != 0 || uVar1 != 0) {
    pvVar2 = (void *)CONCAT11(cVar4,uVar3);
    _LREAD((ushort)pvVar10,(void *)CONCAT22(iVar7,pvVar2),uVar1);
  }
  _LCLOSE((ushort)pvVar2);
  DAT_10e8_9f3c = (uint)(DAT_10e8_0014 - *(int *)((int)DAT_10e8_3eb6 + 0x12)) >> 1;
  DAT_10e8_86ba = 0;
  DAT_10e8_1540 = *(int *)((int)DAT_10e8_3eb6 + 0x16) + DAT_10e8_0016 + -1;
  return;
}


