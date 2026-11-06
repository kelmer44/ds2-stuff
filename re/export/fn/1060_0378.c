// FUN_1060_0378 at 1060:0378

void * __cdecl16far FUN_1060_0378(void *param_1)

{
  void *pvVar1;
  void *pvVar2;
  short sVar3;
  void *pvVar4;
  undefined2 *puVar5;
  void *pvVar6;
  void *pvVar7;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  pvVar4 = (void *)0x0;
  pvVar1 = (void *)(DAT_10e8_5cda + -1);
  if (pvVar1 != (void *)0x1 && -1 < DAT_10e8_5cda + -2) {
    pvVar4 = (void *)0x0;
    pvVar7 = pvVar1;
    do {
      pvVar2 = (void *)(((int)pvVar7 + (int)pvVar4) / 2);
      sVar3 = LSTRCMPI((void *)CONCAT22((char *)s_Options_10e8_10e2 + 6,param_1),
                       (void *)CONCAT22((char *)s_ReadSpeed_10e8_10d8 + 8,
                                        (void *)((int)pvVar2 * 0x19 + 0x5f0)));
      pvVar1 = pvVar2;
      if (0 < sVar3) {
        pvVar1 = pvVar7;
        pvVar4 = pvVar2;
      }
      pvVar7 = pvVar1;
    } while ((int)pvVar4 < (int)pvVar1 + -1);
  }
  sVar3 = LSTRCMPI((void *)CONCAT22((char *)s_Options_10e8_10e2 + 6,param_1),
                   (void *)CONCAT22((char *)s_ReadSpeed_10e8_10d8 + 8,
                                    (void *)((int)pvVar4 * 0x19 + 0x5f0)));
  if ((sVar3 != 0) &&
     (sVar3 = LSTRCMPI((void *)CONCAT22((char *)s_Options_10e8_10e2 + 6,param_1),
                       (void *)CONCAT22((char *)s_ReadSpeed_10e8_10d8 + 8,
                                        (void *)((int)pvVar1 * 0x19 + 0x5f0))), pvVar4 = pvVar1,
     sVar3 != 0)) {
    if ((int)pvVar1 < DAT_10e8_5cda) {
      puVar5 = (undefined2 *)&DAT_10e8_5e14 + DAT_10e8_5cda;
      pvVar4 = (void *)(DAT_10e8_5cda * 0x19 + 0x5f0);
      do {
        pvVar6 = (void *)CONCAT22((char *)s_ReadSpeed_10e8_10d8 + 8,pvVar4);
        LSTRCPY(pvVar6,(void *)CONCAT22((char *)s_ReadSpeed_10e8_10d8 + 8,
                                        (void *)((int)pvVar4 + -0x19)));
        *puVar5 = puVar5[-1];
        puVar5 = puVar5 + -1;
        pvVar4 = (void *)((int)pvVar4 + -0x19);
        pvVar1 = (void *)pvVar6;
      } while ((int)((ulong)pvVar6 >> 0x10) != 1);
    }
    pvVar6 = (void *)CONCAT22((char *)s_ReadSpeed_10e8_10d8 + 8,(void *)((int)pvVar1 * 0x19 + 0x5f0)
                             );
    LSTRCPY(pvVar6,(void *)CONCAT22((char *)s_Options_10e8_10e2 + 6,param_1));
    ((undefined2 *)&DAT_10e8_5e14)[(int)(void *)pvVar6] = 0;
    DAT_10e8_5cda = DAT_10e8_5cda + 1;
    pvVar4 = (void *)pvVar6;
  }
  return pvVar4;
}


