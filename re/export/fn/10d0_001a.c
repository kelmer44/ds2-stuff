// entry at 10d0:001a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void entry(void)

{
  code *pcVar1;
  int iVar2;
  undefined2 uVar3;
  uint in_CX;
  undefined2 in_BX;
  undefined2 unaff_SI;
  undefined2 unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_CS;
  bool bVar4;
  undefined4 uVar5;
  long lVar6;
  char *pcVar7;
  
  do {
    uVar5 = INITTASK(unaff_CS,0);
    if ((int)uVar5 != 0) {
      bVar4 = in_CX < 0xff00;
      in_CX = in_CX + 0x100;
      DAT_10e8_2930 = unaff_ES;
      if (bVar4) {
        pcVar7 = (char *)0x13a8;
        DAT_10e8_28fa = in_CX;
        DAT_10e8_28fc = unaff_SI;
        DAT_10e8_28fe = unaff_DI;
        DAT_10e8_2900 = in_BX;
        DAT_10e8_2902 = unaff_ES;
        DAT_10e8_2904 = (int)((ulong)uVar5 >> 0x10);
        lVar6 = GETVERSION();
        DAT_10e8_2932 = CONCAT11((char)lVar6,(char)((ulong)lVar6 >> 8));
        if ((DAT_10d0_0010 & 1) == 0) {
          pcVar1 = (code *)swi(0x21);
          DAT_10e8_2936 = (*pcVar1)();
        }
        else {
          pcVar7 = (char *)s_Options_10e8_10d0;
          DAT_10e8_2936 = DOS3CALL((char *)s_Options_10e8_10d0);
        }
        _DAT_10e8_2934 = CONCAT11((char)DAT_10e8_2936,(char)((uint)DAT_10e8_2936 >> 8));
        if ((DAT_10d0_0010 & 1) == 0) {
          DAT_10e8_2939 = 0;
        }
        WAITEVENT(0);
        iVar2 = INITAPP(0x13a8,DAT_10e8_28fe,pcVar7);
        if (iVar2 != 0) {
          FUN_10d0_00c4();
          FUN_10d0_06b2(0x13a8);
          FUN_10d0_0834();
          FUN_10d0_0f76();
          uVar3 = FUN_10d0_065c(DAT_10e8_296a,DAT_10e8_296c,DAT_10e8_296e);
          FUN_10d0_01a3(0x13a8,uVar3);
          FUN_10d0_08c9();
          return;
        }
      }
    }
    unaff_CS = 0x13a8;
    FUN_10d0_01b1(0x13a8,0xff);
  } while( true );
}


