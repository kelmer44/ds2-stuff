// FUN_1080_0000 at 1080:0000

void __cdecl16far FUN_1080_0000(char *param_1,char *param_2,undefined2 param_3)

{
  char cVar1;
  
                    /* Segment:    17
                       Offset:     00015260
                       Length:     0dea
                       Min Alloc:  0dea
                       Flags:      0d50
                           Code
                           Moveable
                           Preload
                           Impure (Non-shareable)
                        */
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  cVar1 = *param_2;
  while (cVar1 != '\0') {
    *param_1 = *param_2;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    cVar1 = *param_2;
  }
  *param_1 = *param_2;
  return;
}


