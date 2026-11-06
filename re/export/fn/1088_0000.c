// FUN_1088_0000 at 1088:0000

void __cdecl16far
FUN_1088_0000(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  int iVar1;
  
                    /* Segment:    18
                       Offset:     00016160
                       Length:     09da
                       Min Alloc:  09da
                       Flags:      0d50
                           Code
                           Moveable
                           Preload
                           Impure (Non-shareable)
                        */
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  iVar1 = FUN_1098_029e(param_1,param_2,param_3,param_4,param_5);
  if (iVar1 == 0) {
    FUN_1098_0000((char *)s_read_file_to_10e8_225e,(char *)s_Error_reading_glue_file_10e8_2246,0);
  }
  return;
}


