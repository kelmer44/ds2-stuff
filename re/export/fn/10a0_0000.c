// FUN_10a0_0000 at 10a0:0000

int __cdecl16far FUN_10a0_0000(uint param_1)

{
  uint uVar1;
  int iVar2;
  
                    /* Segment:    21
                       Offset:     00017240
                       Length:     0236
                       Min Alloc:  0236
                       Flags:      0d50
                           Code
                           Moveable
                           Preload
                           Impure (Non-shareable)
                        */
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  uVar1 = param_1 >> 8 & 3;
  param_1 = param_1 & 0xff;
  if (uVar1 == 0) {
    iVar2 = *(int *)((char *)s_load_file_10e8_245f + 0xb + param_1 * 2);
  }
  else if (uVar1 == 1) {
    iVar2 = *(int *)(param_1 * -2 + 0x266a);
  }
  else {
    if (uVar1 == 2) {
      iVar2 = *(int *)((char *)s_load_file_10e8_245f + 0xb + param_1 * 2);
    }
    else {
      if (uVar1 - 3 != 0) {
        return uVar1 - 3;
      }
      iVar2 = *(int *)(param_1 * -2 + 0x266a);
    }
    iVar2 = -iVar2;
  }
  return iVar2;
}


