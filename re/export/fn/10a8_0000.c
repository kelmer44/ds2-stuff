// FUN_10a8_0000 at 10a8:0000

void __cdecl16far FUN_10a8_0000(ushort param_1,ushort param_2)

{
  ushort uVar1;
  
                    /* Segment:    22
                       Offset:     000174a0
                       Length:     0d5e
                       Min Alloc:  0d5e
                       Flags:      0d50
                           Code
                           Moveable
                           Preload
                           Impure (Non-shareable)
                        */
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  if (param_1 != 0) {
    if (DAT_10e8_005c == 0) {
      param_2 = 0;
    }
    uVar1 = WaveMixActivate_inferred(param_1,param_2);
    if (uVar1 != 0) {
      FUN_1098_0248((char *)s_wavemixactivate_error_10e8_277a,(char *)s_Options_10e8_10e2 + 6);
    }
  }
  return;
}


