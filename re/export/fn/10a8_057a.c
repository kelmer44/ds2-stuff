// FUN_10a8_057a at 10a8:057a

/* WARNING: Removing unreachable block (ram,0x10a805db) */

void __cdecl16far FUN_10a8_057a(undefined2 param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  if (param_2 == 3) {
    piVar1 = (int *)0x3cd0;
    piVar2 = (int *)&DAT_10e8_767e;
    iVar5 = 0x14;
    do {
      if ((param_3 == *piVar1) && (param_4 == piVar1[1])) {
        if (*piVar2 != 999) {
          ((undefined2 *)&DAT_10e8_5e14)[*piVar2] = 2;
        }
        lVar3 = GETTICKCOUNT();
        lVar4 = CONCAT22(DAT_10e8_279e,DAT_10e8_279c);
        if (CONCAT22(DAT_10e8_279e,DAT_10e8_279c) < lVar3 + 1000U) {
          lVar4 = GETTICKCOUNT();
          lVar4 = lVar4 + 1000;
        }
        DAT_10e8_279e = (undefined2)((ulong)lVar4 >> 0x10);
        DAT_10e8_279c = (undefined2)lVar4;
        DAT_10e8_2778 = 0;
        FUN_10a8_0350(piVar1 + -4,(char *)s_ReadSpeed_10e8_10d8 + 8);
        FUN_10a8_07dc();
      }
      piVar1 = piVar1 + 6;
      piVar2 = piVar2 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  else {
    FUN_10a8_0350(param_2 * 0xc + 0x1c0,(char *)s_ReadSpeed_10e8_10d8 + 8);
  }
  return;
}


