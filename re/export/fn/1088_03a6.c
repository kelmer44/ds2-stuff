// FUN_1088_03a6 at 1088:03a6

int __cdecl16far FUN_1088_03a6(undefined4 param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  void *pvVar7;
  int iVar8;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  iVar3 = 0;
  if (0 < param_2) {
    pvVar1 = (void *)((int)param_1 + 10);
    uVar6 = param_1._2_2_;
    do {
      LSTRCPY((void *)0x10e83562,(void *)CONCAT22(uVar6,pvVar1));
      LSTRCAT((void *)0x10e83562,(void *)0x10e822ee);
      iVar8 = 0x3536;
      uVar5 = 0x356213a8;
      iVar2 = FUN_10d0_03f4();
      if (iVar2 == 0) {
        uVar6 = param_1._2_2_;
        iVar2 = FUN_1088_0350((int)param_1,param_1._2_2_,iVar3,0x3554);
        if (iVar2 == 0) {
          pvVar7 = (void *)CONCAT22(param_1._2_2_,(void *)((int)param_1 + iVar3 * 0x20 + 0x28a));
          uVar6 = 0x3554;
          LSTRCPY(pvVar7,(void *)0x10e83554);
          ((char *)s_n__Reinicie_Windows_y_Dark_Seed_I_10e8_1275 + 0x15)[(int)param_1 + iVar3] =
               (char)((ulong)pvVar7 >> 0x10);
          iVar3 = iVar3 + 1;
        }
        iVar8 = 0x3536;
        uVar5 = CONCAT22(0x44e,uVar6);
        iVar2 = FUN_10d0_03e2();
        if (iVar2 == 0) {
          pvVar1 = (void *)(iVar3 * 0x20 + (int)param_1 + 0x28a);
          uVar6 = param_1._2_2_;
          do {
            uVar4 = param_1._2_2_;
            iVar2 = FUN_1088_0350((int)param_1,param_1._2_2_,iVar3,0x3554);
            if (iVar2 == 0) {
              pvVar7 = (void *)CONCAT22(uVar6,pvVar1);
              uVar4 = 0x3554;
              LSTRCPY(pvVar7,(void *)0x10e83554);
              ((char *)s_n__Reinicie_Windows_y_Dark_Seed_I_10e8_1275 + 0x15)[(int)param_1 + iVar3] =
                   (char)((ulong)pvVar7 >> 0x10);
              pvVar1 = (void *)((int)pvVar1 + 0x20);
              iVar3 = iVar3 + 1;
            }
            iVar8 = 0x3536;
            uVar5 = CONCAT22(0x4a1,uVar4);
            iVar2 = FUN_10d0_03e2();
          } while (iVar2 == 0);
        }
      }
      pvVar1 = (void *)((int)uVar5 + 0x80);
      uVar6 = (undefined2)((ulong)uVar5 >> 0x10);
    } while (iVar8 + 1 < param_2);
  }
  return iVar3;
}


