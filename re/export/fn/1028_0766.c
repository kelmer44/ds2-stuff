// FUN_1028_0766 at 1028:0766

void __cdecl16far FUN_1028_0766(ushort param_1,int param_2)

{
  int iVar1;
  ushort a0;
  undefined2 unaff_SS;
  undefined1 local_104 [218];
  undefined2 uStackY_2a;
  undefined2 uStackY_28;
  
  FUN_10d0_029e();
  DAT_10e8_9556 = param_1;
  FUN_1030_0094();
  LSTRCPY((void *)0x10e03c88,(undefined1 *)CONCAT22(unaff_SS,local_104));
  LSTRCPY((void *)0x10e0273e,(void *)0x10e03c88);
  LSTRCPY((void *)0x10e03c68,s_sndtrack__10e8_144b);
  LSTRCPY((void *)0x10e03ca8,(void *)0x10e03c88);
  FUN_1028_09f6();
  FUN_1010_0a44();
  iVar1 = FUN_10a8_00e2();
  if (iVar1 == 0) {
    DAT_10e8_0064 = 0x2bf;
    DAT_10e8_005c = iVar1;
    DAT_10e8_0068 = iVar1;
    FUN_1098_0248();
    DAT_10e8_004c = 0x3d6;
  }
  else {
    DAT_10e8_0064 = 0x2bf;
    WRITEPRIVATEPROFILESTRING
              ((void *)0x10e814a0,s_DISABLEWARNING_10e8_1491,(void *)0x10e8148c,
               s_SYSTEM_INI_10e8_1481);
  }
  WRITEPRIVATEPROFILESTRING
            ((void *)0x10e814bd,(void *)0x10e814b5,(void *)0x10e814b3,s_WIN_INI_10e8_14ab);
  WRITEPRIVATEPROFILESTRING
            ((void *)0x10e814e0,s_DefaultVideo_10e8_14d3,s_Window_10e8_14cc,s_WIN_INI_10e8_14c4);
  WRITEPRIVATEPROFILESTRING
            ((void *)0x10e814fc,s_SkipFrames_10e8_14f1,(void *)0x10e814ef,s_WIN_INI_10e8_14e7);
  WRITEPRIVATEPROFILESTRING
            ((void *)0x10e81518,s_UseAVIFile_10e8_150d,(void *)0x10e8150b,s_WIN_INI_10e8_1503);
  if ((param_2 == 0) && (iVar1 = FUN_1028_090e(), iVar1 == 0)) {
    return;
  }
  uStackY_28 = 0x13a8;
  uStackY_2a = 0x8b4;
  a0 = CREATEWINDOW(s_Dark_Seed_II_10e8_0022,(void *)0x0,-0x7f780000,0,0,0x280,0x1e0,0,0,param_1,
                    (void *)0x0);
  SETCURSORPOS(0x140,0x96);
  DAT_10e8_036e = 1;
  DAT_10e8_0044 = 0;
  DAT_10e8_76f8 = a0;
  SHOWWINDOW(a0,3);
  SETWINDOWPOS(a0,0xffff,0,0,0,0,3);
  UPDATEWINDOW(a0);
  FUN_1028_03d0();
  DAT_10e8_036e = 0;
  DAT_10e8_0044 = 1;
  return;
}


