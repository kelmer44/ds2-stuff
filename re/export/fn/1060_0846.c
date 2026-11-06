// FUN_1060_0846 at 1060:0846

/* WARNING: Control flow encountered bad instruction data */

void * __cdecl16far FUN_1060_0846(uint *param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 *puVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  uint in_BX;
  uint uVar6;
  bool bVar7;
  void *a0;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  if (*param_1 == 0) {
LAB_1060_0864:
    pvVar3 = (void *)0x0;
  }
  else {
    uVar6 = *param_1;
    for (iVar5 = 0; (uVar6 != 0 && (iVar5 < 10)); iVar5 = iVar5 + 1) {
      uVar4 = *param_1;
      uVar6 = uVar4 & 0x3ff;
      if ((uVar4 & 0xc00) != 0) {
switchD_1060_0896_default:
        uVar4 = in_BX;
        if ((*(byte *)((int)param_1 + 1) & 0x80) != 0) {
          bVar7 = (int)((*(byte *)((int)param_1 + 1) & 0x7c) << 8) >> 10 ==
                  ((undefined2 *)&DAT_10e8_5e14)[uVar6];
          goto LAB_1060_08c1;
        }
        goto LAB_1060_0912;
      }
      uVar4 = uVar4 >> 0xb;
      switch(uVar4) {
      case 0:
        bVar7 = ((undefined2 *)&DAT_10e8_5e14)[uVar6] == 1;
        goto LAB_1060_08c1;
      case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 2:
        bVar7 = ((undefined2 *)&DAT_10e8_5e14)[uVar6] == 0;
        goto LAB_1060_08c1;
      case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 4:
        bVar7 = ((undefined2 *)&DAT_10e8_5e14)[uVar6] == 2;
LAB_1060_08c1:
        if (!bVar7) goto LAB_1060_0864;
        break;
      case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 6:
        bVar7 = SBORROW2(((undefined2 *)&DAT_10e8_5e14)[uVar6],1);
        iVar1 = ((undefined2 *)&DAT_10e8_5e14)[uVar6] + -1;
        goto LAB_1060_08eb;
      case 7:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 8:
        if (1 < (int)((undefined2 *)&DAT_10e8_5e14)[uVar6]) goto LAB_1060_0864;
        break;
      case 9:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 10:
        bVar7 = SBORROW2(((undefined2 *)&DAT_10e8_5e14)[uVar6],2);
        iVar1 = ((undefined2 *)&DAT_10e8_5e14)[uVar6] + -2;
LAB_1060_08eb:
        if (bVar7 != iVar1 < 0) goto LAB_1060_0864;
        break;
      case 0xb:
        puVar2 = (undefined2 *)CONCAT11((char)(in_BX >> 8),(char)in_BX + '^' + (uVar4 < 0xc));
        pvVar3 = (void *)(uVar4 * 0x19 + 0x5f0);
        do {
          a0 = (void *)CONCAT22((char *)s_ReadSpeed_10e8_10d8 + 8,pvVar3);
          LSTRCPY(a0,(void *)CONCAT22((char *)s_ReadSpeed_10e8_10d8 + 8,(void *)((int)pvVar3 + 0x19)
                                     ));
          *puVar2 = puVar2[1];
          puVar2 = puVar2 + 1;
          pvVar3 = (void *)((int)pvVar3 + 0x19);
        } while ((int)((ulong)a0 >> 0x10) + 1 < DAT_10e8_5cda);
        return (void *)a0;
      case 0xc:
        if (2 < (int)((undefined2 *)&DAT_10e8_5e14)[uVar6]) goto LAB_1060_0864;
        break;
      default:
        goto switchD_1060_0896_default;
      }
LAB_1060_0912:
      param_1 = param_1 + 1;
      uVar6 = *param_1;
      in_BX = uVar4;
    }
    pvVar3 = (void *)0x1;
  }
  return pvVar3;
}


