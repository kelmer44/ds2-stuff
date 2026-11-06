// FUN_1060_0a0a at 1060:0a0a

/* WARNING: Control flow encountered bad instruction data */

undefined2 __cdecl16far FUN_1060_0a0a(uint *param_1,undefined2 param_2,undefined2 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  uVar1 = FUN_1060_02bc(param_3);
  if (*param_1 != 0) {
    iVar3 = 0;
    do {
      if (9 < iVar3) {
        return 1;
      }
      uVar4 = *param_1 & 0x3ff;
      if (uVar4 != uVar1) goto LAB_1060_0ae5;
      uVar2 = (*(byte *)((int)param_1 + 1) & 0xfc) << 8;
      if ((uVar2 & 0xfff) == 0) {
        switch(uVar2 >> 0xb) {
        case 0:
          ((undefined2 *)&DAT_10e8_5e14)[uVar4] = 1;
          break;
        case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 2:
          ((undefined2 *)&DAT_10e8_5e14)[uVar4] = 0;
          break;
        case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 4:
          ((undefined2 *)&DAT_10e8_5e14)[uVar4] = 2;
          break;
        case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 6:
          ((undefined2 *)&DAT_10e8_5e14)[uVar4] = ((undefined2 *)&DAT_10e8_5e14)[uVar4] + 1;
          break;
        case 7:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 8:
          ((undefined2 *)&DAT_10e8_5e14)[uVar4] = ((undefined2 *)&DAT_10e8_5e14)[uVar4] + -1;
          break;
        case 9:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 10:
          ((undefined2 *)&DAT_10e8_5e14)[uVar4] = ((undefined2 *)&DAT_10e8_5e14)[uVar4] + 2;
          break;
        case 0xb:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 0xc:
          ((undefined2 *)&DAT_10e8_5e14)[uVar4] = ((undefined2 *)&DAT_10e8_5e14)[uVar4] + -2;
          break;
        case 0xd:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 0xe:
          uVar2 = (uint)(((undefined2 *)&DAT_10e8_5e14)[uVar4] == 0);
          goto LAB_1060_0adf;
        default:
          goto switchD_1060_0a68_default;
        }
      }
      else {
switchD_1060_0a68_default:
        if ((*(byte *)((int)param_1 + 1) & 0x80) != 0) {
          uVar2 = (int)((*(byte *)((int)param_1 + 1) & 0x7c) << 8) >> 10;
LAB_1060_0adf:
          ((undefined2 *)&DAT_10e8_5e14)[uVar4] = uVar2;
        }
      }
LAB_1060_0ae5:
      iVar3 = iVar3 + 1;
      param_1 = param_1 + 1;
    } while (*param_1 != 0);
  }
  return 1;
}


