// FUN_1078_0000 at 1078:0000

void __cdecl16far FUN_1078_0000(ushort param_1,int param_2,int param_3)

{
  void *pvVar1;
  undefined2 uVar2;
  long lVar3;
  short sVar4;
  void *pvVar5;
  ushort a0;
  
                    /* Segment:    16
                       Offset:     000135c0
                       Length:     1be4
                       Min Alloc:  1be4
                       Flags:      0d50
                           Code
                           Moveable
                           Preload
                           Impure (Non-shareable)
                        */
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  if (DAT_10e8_004c != 0x3d5) {
    SETBKMODE(param_1,1);
    SETBKCOLOR(param_1,0);
    lVar3 = SETTEXTCOLOR(param_1,0);
    uVar2 = (undefined2)((ulong)lVar3 >> 0x10);
    pvVar5 = (void *)0x10e861de;
    sVar4 = -1;
    a0 = param_1;
    pvVar1 = (void *)FUN_1000_0000((DAT_10e8_6896 - param_2) + 1,1 - (param_3 - DAT_10e8_6898),
                                   (DAT_10e8_689a - param_2) + 1);
    DRAWTEXT(a0,pvVar5,sVar4,(void *)CONCAT22(uVar2,pvVar1),0x10);
    lVar3 = SETTEXTCOLOR(param_1,0xffffff);
    uVar2 = (undefined2)((ulong)lVar3 >> 0x10);
    pvVar5 = (void *)0x10e861de;
    sVar4 = -1;
    pvVar1 = (void *)FUN_1000_0000(DAT_10e8_6896 - param_2,-(param_3 - DAT_10e8_6898),
                                   DAT_10e8_689a - param_2);
    DRAWTEXT(param_1,pvVar5,sVar4,(void *)CONCAT22(uVar2,pvVar1),0x10);
  }
  return;
}


