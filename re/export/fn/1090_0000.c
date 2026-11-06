// FUN_1090_0000 at 1090:0000

void * __cdecl16far FUN_1090_0000(undefined2 param_1,undefined2 param_2)

{
  ushort a0;
  void *pvVar1;
  bool bVar2;
  void *pvVar3;
  
                    /* Segment:    19
                       Offset:     00016c20
                       Length:     00b4
                       Min Alloc:  00b4
                       Flags:      0d50
                           Code
                           Moveable
                           Preload
                           Impure (Non-shareable)
                        */
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  a0 = GLOBALALLOC(2,CONCAT22(param_2,param_1));
  if (a0 == 0) {
    FUN_1098_0248();
    FUN_1090_0068();
    FUN_10d0_01a3();
    pvVar1 = (void *)0x0;
  }
  else {
    bVar2 = 0xfffe < DAT_10e8_0018;
    DAT_10e8_0018 = DAT_10e8_0018 + 1;
    DAT_10e8_001a = DAT_10e8_001a + (uint)bVar2;
    pvVar3 = GLOBALLOCK(a0);
    pvVar1 = (void *)pvVar3;
  }
  return pvVar1;
}


