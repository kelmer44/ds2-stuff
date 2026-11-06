// FUN_10b8_02b2 at 10b8:02b2

/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

undefined2 FUN_10b8_02b2(void)

{
  ulong uVar1;
  undefined2 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  long in_ESP;
  undefined2 uVar10;
  long in_EBP;
  undefined4 in_ESI;
  undefined4 *puVar11;
  ulong uVar12;
  undefined4 in_EDI;
  undefined4 *puVar13;
  undefined2 *puVar9;
  
  *(undefined4 *)(in_ESP + -4) = in_EDI;
  *(byte *)(in_EBP + 6) = *(byte *)(in_EBP + 6) | 0x40;
  iVar8 = (int)(in_ESP + -0xc);
  uVar10 = (undefined2)((ulong)(in_ESP + -0xc) >> 0x10);
  puVar9 = (undefined2 *)CONCAT22(uVar10,(undefined2 *)(iVar8 + 8));
  uVar2 = *puVar9;
  uVar5 = 0;
  *puVar9 = (int)in_EBP;
  uVar4 = (ulong)(iVar8 + 8);
  puVar9[-2] = (char *)s_Options_10e8_10e2 + 6;
  *(undefined4 *)(puVar9 + -4) = in_ESI;
  *(ulong *)(puVar9 + -6) = CONCAT22(uVar10,uVar2);
  uVar1 = *(ulong *)(uVar4 + 0xe);
  if ((uVar1 != 0) && (lVar7 = *(long *)(uVar4 + 10), lVar7 != 0)) {
    uVar12 = *(ulong *)(uVar4 + 0x12) & 0xffff;
    puVar13 = *(undefined4 **)(uVar4 + 0x16);
    *(long *)(uVar4 + 6) = *(long *)(uVar4 + 6) - uVar1;
    uVar5 = uVar1 & 3;
    do {
      puVar11 = (undefined4 *)(uVar12 + 4);
      *(undefined4 **)(puVar9 + -8) = puVar11;
      uVar6 = uVar1 >> 2;
      if (*(int *)(uVar12 + 2) <= (int)(uVar1 >> 2)) {
        uVar6 = CONCAT22((uint)(uVar1 >> 0x12),*(undefined2 *)(uVar12 + 2));
      }
      for (; uVar12 = uVar5, uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar13 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar13 = puVar13 + 1;
      }
      for (; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined1 *)puVar13 = *(undefined1 *)puVar11;
        puVar11 = (undefined4 *)((long)puVar11 + 1);
        puVar13 = (undefined4 *)((long)puVar13 + 1);
      }
      lVar3 = *(long *)(puVar9 + -8);
      puVar13 = (undefined4 *)((long)puVar13 + *(long *)(uVar4 + 6));
      uVar12 = lVar3 + (ulong)*(uint *)(lVar3 + -2);
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return (int)uVar5;
}


