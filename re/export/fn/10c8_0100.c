// FUN_10c8_0100 at 10c8:0100

/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

void __cdecl16near FUN_10c8_0100(void)

{
  uint uVar1;
  undefined4 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined2 extraout_var;
  undefined4 uVar6;
  ulong uVar7;
  long in_ESP;
  undefined4 *puVar8;
  long in_EBP;
  ulong uVar9;
  undefined4 *puVar5;
  
  uVar7 = (ulong)*(uint *)(in_EBP + 0x18);
  *(ulong *)(in_EBP + -0x3c) = (ulong)*(uint *)(in_EBP + 0x1a);
  *(ulong *)(in_EBP + -0x40) = uVar7;
  *(ulong *)(in_EBP + -0x44) = (ulong)*(uint *)(in_EBP + 10);
  *(ulong *)(in_EBP + -0x48) = (ulong)*(uint *)(in_EBP + 8);
  if (((((ulong)*(uint *)(in_EBP + 0x1a) != 0) && (uVar7 != 0)) &&
      ((ulong)*(uint *)(in_EBP + 10) != 0)) && ((ulong)*(uint *)(in_EBP + 8) != 0)) {
    uVar3 = *(ulong *)(in_EBP + 0x14) & 0xffff;
    uVar9 = *(ulong *)(in_EBP + 0x24) & 0xffff;
    uVar1 = *(uint *)(uVar3 + 0xe);
    uVar4 = (ulong)uVar1;
    if ((uVar1 == *(uint *)(uVar9 + 0xe)) &&
       (((uVar4 == 8 || (uVar4 == 0x10)) || ((uVar4 == 0x18 || (uVar4 == 0x20)))))) {
      *(ulong *)(in_EBP + -0x24) = (*(long *)(uVar3 + 4) * uVar4 + 0x1f & 0xffffffe0) >> 3;
      *(undefined4 *)(in_EBP + -0x24) = *(undefined4 *)(in_EBP + -0x44);
      *(undefined4 *)(in_EBP + -0x34) = *(undefined4 *)(in_EBP + -0x44);
      uVar3 = *(long *)(in_EBP + -0x44) * uVar4 >> 3;
      *(ulong *)(in_EBP + -0x2c) = uVar3;
      *(long *)(in_EBP + -0x34) = *(long *)(in_EBP + -0x34) - uVar3;
      uVar3 = (*(long *)(uVar9 + 4) * uVar4 + 0x1f & 0xffffffe0) >> 3;
      *(ulong *)(in_EBP + -0x28) = uVar3;
      *(ulong *)(in_EBP + -0x38) = uVar3;
      if (*(long *)(uVar9 + 8) < 0) {
        uVar7 = ~((long)*(int *)(in_EBP + 0x1c) + *(long *)(uVar9 + 8));
        *(int *)(in_EBP + 0x1c) = (int)uVar7;
        *(long *)(in_EBP + -0x28) = -*(long *)(in_EBP + -0x28);
        *(long *)(in_EBP + -0x38) = -*(long *)(in_EBP + -0x38);
      }
      uVar4 = *(long *)(in_EBP + -0x3c) * uVar4 >> 3;
      *(ulong *)(in_EBP + -0x30) = uVar4;
      *(long *)(in_EBP + -0x38) = *(long *)(in_EBP + -0x38) - uVar4;
      uVar6 = *(undefined4 *)(in_EBP + -0x40);
      puVar8 = (undefined4 *)(in_ESP + -4);
      *puVar8 = 0x10c801fe;
      puVar2 = (undefined4 *)FUN_10c8_0073();
      puVar5 = (undefined4 *)CONCAT22(extraout_var,puVar2);
      *(undefined4 *)(in_EBP + -0x14) = uVar6;
      *(ulong *)(in_EBP + -0x18) = uVar7;
      *(undefined4 *)(in_EBP + -8) = *puVar5;
      uVar6 = *(undefined4 *)(in_EBP + -0x3c);
      *(undefined4 *)(CONCAT22((int)((ulong)puVar8 >> 0x10),(int)(undefined4 *)puVar8 + 2) + -4) =
           0x10c8021b;
      FUN_10c8_0073();
      *(undefined4 *)(in_EBP + -0xc) = uVar6;
      *(undefined4 **)(in_EBP + -0x10) = puVar5;
      return;
    }
  }
  return;
}


