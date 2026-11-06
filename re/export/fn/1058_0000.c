// FUN_1058_0000 at 1058:0000

void __cdecl16far FUN_1058_0000(ushort param_1,void *param_2,int param_3)

{
  void *pvVar1;
  int iVar2;
  ushort a0;
  ushort a1;
  short sVar3;
  short a2;
  undefined2 unaff_SS;
  ushort a0_00;
  
                    /* Segment:    12
                       Offset:     0000dbc0
                       Length:     0d0e
                       Min Alloc:  0d0e
                       Flags:      0d50
                           Code
                           Moveable
                           Preload
                           Impure (Non-shareable)
                        */
  FUN_10d0_029e();
  a0 = GETDC(param_1);
  if (DAT_10e8_008a != 0) {
    DAT_10e8_279e = 0;
    DAT_10e8_279c = 0;
    DAT_10e8_008a = 0;
    FUN_1078_1238(0x653e,(char *)s_Options_10e8_10e2 + 6,a0,DAT_10e8_6892 + 0x13,DAT_10e8_6894,0);
  }
  if (param_3 != 0 || param_2 != (void *)0x0) {
    LSTRLEN((void *)CONCAT22(param_3,param_2));
    a0_00 = a0;
    a1 = GETSTOCKOBJECT(0xd);
    SELECTOBJECT(a0_00,a1);
    SETBKMODE(a0,1);
    SETBKCOLOR(a0,0);
    SETTEXTCOLOR(a0,0);
    DRAWTEXT(a0,(void *)CONCAT22(param_3,param_2),-1,(undefined1 *)CONCAT22(unaff_SS,&stack0xfff0),
             0x410);
    a2 = -1;
    if (DAT_10e8_004c == 0x3d5) {
      a2 = 0;
    }
    DRAWTEXT(a0,(void *)CONCAT22(param_3,param_2),a2,(undefined1 *)CONCAT22(unaff_SS,&stack0xfff0),
             0x10);
    SETTEXTCOLOR(a0,0xffffff);
    pvVar1 = param_2;
    iVar2 = param_3;
    sVar3 = DRAWTEXT(a0,(void *)CONCAT22(param_3,param_2),a2,
                     (undefined1 *)CONCAT22(unaff_SS,&stack0xfff0),0x10);
    DAT_10e8_689a = iVar2;
    DAT_10e8_6898 = pvVar1;
    DAT_10e8_6896 = a2;
    DAT_10e8_689c = (int)DAT_10e8_6898 + sVar3 + 1;
    LSTRCPY((void *)0x10e861de,(void *)CONCAT22(param_3,param_2));
    DAT_10e8_008a = 1;
    DAT_10e8_978e = 0;
    DAT_10e8_9790 = 0;
    DAT_10e8_9792 = 0;
  }
  RELEASEDC(param_1,a0);
  return;
}


