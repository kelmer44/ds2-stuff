// FUN_1030_0000 at 1030:0000

void __cdecl16far FUN_1030_0000(void *param_1,void *param_2,undefined2 param_3)

{
                    /* Segment:    7
                       Offset:     000071c0
                       Length:     00c6
                       Min Alloc:  00c6
                       Flags:      0d50
                           Code
                           Moveable
                           Preload
                           Impure (Non-shareable)
                        */
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  _WSPRINTF((void *)0x10e89da4,(void *)0x10e8153d,param_3);
  WRITEPRIVATEPROFILESTRING
            ((void *)CONCAT22((char *)s_Options_10e8_10e2 + 6,param_1),
             (void *)CONCAT22((char *)s_Options_10e8_10e2 + 6,param_2),(void *)0x10e89da4,
             s___DARKSEED_INI_10e8_152e);
  return;
}


