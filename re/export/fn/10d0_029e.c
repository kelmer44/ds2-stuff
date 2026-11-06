// FUN_10d0_029e at 10d0:029e

/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Unable to track spacebase fully for stack */

void __cdecl16far FUN_10d0_029e(void)

{
  int in_AX;
  undefined1 *puVar1;
  uint uVar2;
  undefined2 unaff_SS;
  undefined2 in_stack_00000000;
  undefined2 in_stack_00000002;
  
  puVar1 = (undefined1 *)(in_AX + 1U & 0xfffe);
  if ((puVar1 < &stack0x0004) && (uVar2 = -((int)puVar1 - (int)&stack0x0004), *(uint *)0xa <= uVar2)
     ) {
    if (uVar2 < *(uint *)0xc) {
      *(uint *)0xc = uVar2;
    }
    *(undefined2 *)(uVar2 - 2) = in_stack_00000002;
    *(undefined2 *)(uVar2 - 4) = in_stack_00000000;
    return;
  }
  if (DAT_10e8_2978 != 0xffff) {
                    /* WARNING: Could not recover jumptable at 0x10d002c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)DAT_10e8_2978)();
    return;
  }
  FUN_10d0_08c9();
  return;
}


