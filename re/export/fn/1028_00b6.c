// FUN_1028_00b6 at 1028:00b6

undefined2 __cdecl16far FUN_1028_00b6(undefined2 *param_1,int param_2)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 uVar7;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  puVar4 = (undefined2 *)param_1;
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  if (param_2 == 0) {
    if (DAT_10e8_1394 == 0) {
      puVar6 = (undefined2 *)&DAT_10e8_2fe6;
      iVar3 = 0x100;
      do {
        uVar2 = puVar4[1];
        *puVar6 = *puVar4;
        puVar6[1] = uVar2;
        puVar6 = puVar6 + 2;
        iVar3 = iVar3 + -1;
        puVar4 = puVar4 + 2;
      } while (iVar3 != 0);
    }
    DAT_10e8_1394 = 1;
  }
  else {
    puVar5 = (undefined2 *)&DAT_10e8_2fe6;
    iVar3 = 100;
    puVar6 = puVar4;
    do {
      puVar1 = puVar5;
      uVar2 = puVar5[1];
      puVar5 = puVar5 + 2;
      *puVar6 = *puVar1;
      puVar6[1] = uVar2;
      puVar6 = puVar6 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    puVar6 = (undefined2 *)&DAT_10e8_33c2;
    puVar4 = puVar4 + 0x1ee;
    iVar3 = 2;
    do {
      puVar1 = puVar6;
      uVar2 = puVar6[1];
      puVar6 = puVar6 + 2;
      *puVar4 = *puVar1;
      puVar4[1] = uVar2;
      puVar4 = puVar4 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}


