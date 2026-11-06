// FUN_10a8_06fa at 10a8:06fa

int __cdecl16far FUN_10a8_06fa(void *param_1,undefined2 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  void *pvVar5;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  if (param_3 == 999) {
    DAT_10e8_2798 = (DAT_10e8_2798 + 1) % 3;
    iVar2 = FUN_10a8_015e(param_1,param_2,DAT_10e8_2798 * 0xc + 0x1c0,
                          (char *)s_ReadSpeed_10e8_10d8 + 8,DAT_10e8_2798);
  }
  else {
    iVar2 = DAT_10e8_2770 + 1;
    if (iVar2 % 0x14 != DAT_10e8_276e) {
      pvVar5 = LSTRCPY((void *)CONCAT22((char *)s_Options_10e8_10e2 + 6,
                                        (void *)(DAT_10e8_2770 * 0xd + -0x7064)),
                       (void *)CONCAT22(param_2,param_1));
      uVar4 = (undefined2)((ulong)pvVar5 >> 0x10);
      uVar3 = FUN_1090_0000(0x10);
      iVar2 = DAT_10e8_2770 * 4;
      *(undefined2 *)(iVar2 + 0x60be) = uVar3;
      *(undefined2 *)(iVar2 + 0x60c0) = uVar4;
      LSTRCPY((void *)CONCAT22(*(undefined2 *)(DAT_10e8_2770 * 4 + 0x60c0),
                               (void *)*(undefined2 *)(DAT_10e8_2770 * 4 + 0x60be)),
              (void *)0x10e8279a);
      iVar1 = DAT_10e8_2770;
      iVar2 = DAT_10e8_2770 * 2;
      *(undefined2 *)(iVar2 + 0x3c56) = 0x140;
      *(undefined2 *)(iVar2 + 0x3c7e) = 100;
      ((undefined2 *)&DAT_10e8_767e)[iVar1] = param_3;
      iVar2 = DAT_10e8_2770 + 1;
      DAT_10e8_2770 = iVar2 % 0x14;
    }
    iVar2 = iVar2 / 0x14;
    if (DAT_10e8_2778 == 0) {
      iVar2 = FUN_10a8_07dc();
    }
  }
  return iVar2;
}


