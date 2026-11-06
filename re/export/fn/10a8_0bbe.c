// FUN_10a8_0bbe at 10a8:0bbe

undefined2 __cdecl16far FUN_10a8_0bbe(void)

{
  ushort a0;
  undefined2 unaff_SS;
  undefined2 local_14;
  undefined2 *a3;
  int iVar1;
  
  FUN_10d0_029e();
  DAT_10e8_2826 = DAT_10e8_2826 + 1;
  if ((DAT_10e8_005e != 0) && (0x1e < DAT_10e8_2826)) {
    DAT_10e8_2826 = 0;
    a0 = MCIGETDEVICEID(s_midifile_10e8_2828);
    iVar1 = 0x102;
    a3 = (undefined2 *)CONCAT22(unaff_SS,&local_14);
    local_14 = 0x13a8;
    MCISENDCOMMAND(a0,0x814,0x102,(long)a3);
    if (((int)((ulong)a3 >> 0x10) == 0x20d) && (iVar1 == 0)) {
      if (DAT_10e8_0368 == 0) {
        FUN_10a8_0000();
      }
      local_14 = 0x13a8;
      MCISENDSTRING(s_play_midifile_from_0_10e8_2831,(void *)0x0,0,0);
      if (DAT_10e8_0368 == 0) {
        FUN_10a8_0000();
      }
      return 1;
    }
  }
  return 0;
}


