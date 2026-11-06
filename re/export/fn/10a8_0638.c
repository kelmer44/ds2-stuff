// FUN_10a8_0638 at 10a8:0638

int __cdecl16far
FUN_10a8_0638(void *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,void *param_5,
             undefined2 param_6,undefined2 param_7)

{
  int iVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  iVar1 = DAT_10e8_2770 + 1;
  if (iVar1 % 0x14 != DAT_10e8_276e) {
    LSTRCPY((void *)CONCAT22((char *)s_Options_10e8_10e2 + 6,(void *)(DAT_10e8_2770 * 0xd + -0x7064)
                            ),(void *)CONCAT22(param_6,param_5));
    sVar2 = LSTRLEN((void *)CONCAT22(param_2,param_1));
    iVar1 = sVar2 + 2 >> 0xf;
    uVar3 = FUN_1090_0000(sVar2 + 2);
    iVar4 = DAT_10e8_2770 * 4;
    *(undefined2 *)(iVar4 + 0x60be) = uVar3;
    *(int *)(iVar4 + 0x60c0) = iVar1;
    LSTRCPY((void *)CONCAT22(*(undefined2 *)(DAT_10e8_2770 * 4 + 0x60c0),
                             (void *)*(undefined2 *)(DAT_10e8_2770 * 4 + 0x60be)),
            (void *)CONCAT22(param_2,param_1));
    iVar4 = DAT_10e8_2770;
    iVar1 = DAT_10e8_2770 * 2;
    *(undefined2 *)(iVar1 + 0x3c56) = param_3;
    *(undefined2 *)(iVar1 + 0x3c7e) = param_4;
    ((undefined2 *)&DAT_10e8_767e)[iVar4] = param_7;
    iVar1 = DAT_10e8_2770 + 1;
    DAT_10e8_2770 = iVar1 % 0x14;
  }
  iVar1 = iVar1 / 0x14;
  if (DAT_10e8_2778 == 0) {
    iVar1 = FUN_10a8_07dc();
  }
  return iVar1;
}


