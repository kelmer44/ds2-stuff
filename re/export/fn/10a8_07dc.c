// FUN_10a8_07dc at 10a8:07dc

int __cdecl16far FUN_10a8_07dc(void)

{
  undefined2 uVar1;
  int iVar2;
  long lVar3;
  
  FUN_10d0_029e();
  lVar3 = GETTICKCOUNT();
  iVar2 = (int)lVar3;
  if (DAT_10e8_008a == 0) {
    if (DAT_10e8_2770 != DAT_10e8_276e) {
      DAT_10e8_2778 = 1;
      FUN_10a8_0d1a();
      FUN_10a8_015e();
      DAT_10e8_2776 = 0;
      FUN_1058_0000();
      FUN_1090_0068();
      iVar2 = DAT_10e8_276e * 4;
      *(undefined2 *)(iVar2 + 0x60c0) = 0;
      *(undefined2 *)(iVar2 + 0x60be) = 0;
      DAT_10e8_27a0 = *(undefined2 *)(DAT_10e8_276e * 0xc + 0x3ccc);
      DAT_10e8_27a2 = *(undefined2 *)(DAT_10e8_276e * 0xc + 0x3cce);
      lVar3 = GETTICKCOUNT();
      uVar1 = (undefined2)((ulong)lVar3 >> 0x10);
      DAT_10e8_279c = FUN_10a8_0c72();
      DAT_10e8_279e = uVar1;
      if (((undefined2 *)&DAT_10e8_767e)[DAT_10e8_2772] != 999) {
        ((undefined2 *)&DAT_10e8_5e14)[((undefined2 *)&DAT_10e8_767e)[DAT_10e8_2772]] = 0;
      }
      if (((undefined2 *)&DAT_10e8_767e)[DAT_10e8_276e] != 999) {
        ((undefined2 *)&DAT_10e8_5e14)[((undefined2 *)&DAT_10e8_767e)[DAT_10e8_276e]] = 1;
      }
      DAT_10e8_2772 = DAT_10e8_276e;
      iVar2 = DAT_10e8_276e + 1;
      DAT_10e8_276e = iVar2 % 0x14;
      return iVar2 / 0x14;
    }
    iVar2 = DAT_10e8_276e;
    if (DAT_10e8_2776 == 0) {
      if (DAT_10e8_2774 != 0) {
        POSTMESSAGE(DAT_10e8_8e3a,0x400,0x1ada,0x1ada1ada);
      }
      if (((undefined2 *)&DAT_10e8_767e)[DAT_10e8_2772] != 999) {
        ((undefined2 *)&DAT_10e8_5e14)[((undefined2 *)&DAT_10e8_767e)[DAT_10e8_2772]] = 0;
      }
      DAT_10e8_2772 = DAT_10e8_276e;
      DAT_10e8_2776 = 1;
      iVar2 = DAT_10e8_276e;
    }
  }
  return iVar2;
}


