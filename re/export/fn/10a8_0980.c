// FUN_10a8_0980 at 10a8:0980

void __cdecl16far FUN_10a8_0980(void)

{
  int iVar1;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  if (DAT_10e8_2770 != DAT_10e8_276e) {
    do {
      FUN_1090_0068(*(undefined2 *)(DAT_10e8_276e * 4 + 0x60be),
                    *(undefined2 *)(DAT_10e8_276e * 4 + 0x60c0));
      iVar1 = DAT_10e8_276e * 4;
      *(undefined2 *)(iVar1 + 0x60c0) = 0;
      *(undefined2 *)(iVar1 + 0x60be) = 0;
      DAT_10e8_276e = (DAT_10e8_276e + 1) % 0x14;
    } while (DAT_10e8_276e != DAT_10e8_2770);
  }
  DAT_10e8_2770 = 0;
  DAT_10e8_276e = 0;
  DAT_10e8_2772 = 0;
  WaveMixFlushChannel_inferred(DAT_10e8_004a,3,3);
  return;
}


