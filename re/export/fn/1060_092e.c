// FUN_1060_092e at 1060:092e

/* WARNING: Control flow encountered bad instruction data */

undefined2 __cdecl16far FUN_1060_092e(uint *param_1,undefined2 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  iVar2 = 0;
  uVar1 = *param_1;
  do {
    if ((uVar1 == 0) || (9 < iVar2)) {
      return 1;
    }
    uVar1 = *param_1;
    uVar3 = uVar1 & 0x3ff;
    if ((uVar1 & 0xc00) == 0) {
      switch(uVar1 >> 0xb) {
      case 0:
        ((undefined2 *)&DAT_10e8_5e14)[uVar3] = 1;
        break;
      case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 2:
        ((undefined2 *)&DAT_10e8_5e14)[uVar3] = 0;
        break;
      case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 4:
        ((undefined2 *)&DAT_10e8_5e14)[uVar3] = 2;
        break;
      case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 6:
        ((undefined2 *)&DAT_10e8_5e14)[uVar3] = ((undefined2 *)&DAT_10e8_5e14)[uVar3] + 1;
        break;
      case 7:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 8:
        ((undefined2 *)&DAT_10e8_5e14)[uVar3] = ((undefined2 *)&DAT_10e8_5e14)[uVar3] + -1;
        break;
      case 9:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 10:
        ((undefined2 *)&DAT_10e8_5e14)[uVar3] = ((undefined2 *)&DAT_10e8_5e14)[uVar3] + 2;
        break;
      case 0xb:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0xc:
        ((undefined2 *)&DAT_10e8_5e14)[uVar3] = ((undefined2 *)&DAT_10e8_5e14)[uVar3] + -2;
        break;
      case 0xd:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0xe:
        uVar1 = (uint)(((undefined2 *)&DAT_10e8_5e14)[uVar3] == 0);
        goto LAB_1060_09e9;
      default:
        goto switchD_1060_0972_default;
      }
    }
    else {
switchD_1060_0972_default:
      if ((*(byte *)((int)param_1 + 1) & 0x80) != 0) {
        uVar1 = ((*(byte *)((int)param_1 + 1) & 0x7c) << 8) >> 10;
LAB_1060_09e9:
        ((undefined2 *)&DAT_10e8_5e14)[uVar3] = uVar1;
      }
    }
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 1;
    uVar1 = *param_1;
  } while( true );
}


