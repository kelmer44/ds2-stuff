// FUN_1098_0000 at 1098:0000

void __cdecl16far FUN_1098_0000(void *param_1,void *param_2,char *param_3)

{
                    /* Segment:    20
                       Offset:     00016d40
                       Length:     043e
                       Min Alloc:  043e
                       Flags:      0d50
                           Code
                           Moveable
                           Preload
                           Impure (Non-shareable)
                        */
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  LSTRCPY((void *)0x10e89e3a,(void *)CONCAT22((char *)s_Options_10e8_10e2 + 6,param_1));
  LSTRCAT((void *)0x10e89e3a,(void *)0x10e823e6);
  LSTRCAT((void *)0x10e89e3a,(void *)CONCAT22((char *)s_Options_10e8_10e2 + 6,param_2));
  if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
    LSTRCAT((void *)0x10e89e3a,(void *)0x10e823ea);
    LSTRCAT((void *)0x10e89e3a,(char *)CONCAT22((char *)s_Options_10e8_10e2 + 6,param_3));
  }
  LSTRCAT((void *)0x10e89e3a,(void *)0x10e823ed);
  FUN_1098_0248(0x9e3a,(char *)s_Options_10e8_10e2 + 6);
  return;
}


