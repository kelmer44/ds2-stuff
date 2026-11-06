// FUN_1050_0000 at 1050:0000

undefined2 __cdecl16far FUN_1050_0000(undefined2 *param_1,int param_2)

{
  undefined2 *puVar1;
  int iVar2;
  
                    /* Segment:    11
                       Offset:     0000d620
                       Length:     0560
                       Min Alloc:  0560
                       Flags:      0d50
                           Code
                           Moveable
                           Preload
                           Impure (Non-shareable)
                        */
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  if (param_2 != 0 || param_1 != (undefined2 *)0x0) {
    do {
      iVar2 = FUN_1060_07f6(*param_1,param_1[1]);
      if (iVar2 != 0) {
        return 1;
      }
      puVar1 = (undefined2 *)((int)param_1 + 0x93);
      param_2 = *(int *)((int)param_1 + 0x95);
      param_1 = (undefined2 *)*puVar1;
    } while (param_2 != 0 || (undefined2 *)*puVar1 != (undefined2 *)0x0);
  }
  return 0;
}


