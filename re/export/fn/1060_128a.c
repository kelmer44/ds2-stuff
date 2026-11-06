// VAR_CHECKER_PROC at 1060:128a

undefined2 __stdcall16far
VAR_CHECKER_PROC(undefined2 param_1,undefined2 param_2,uint param_3,int param_4,ushort param_5)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  ushort uVar3;
  ushort a2;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 unaff_SS;
  long lVar7;
  char local_38 [34];
  char *pcStackY_16;
  undefined2 uStackY_14;
  
  FUN_10d0_029e();
  if (param_4 == 0x110) {
    FUN_1060_1182();
    if (0 < DAT_10e8_5cda) {
      puVar6 = (undefined2 *)&DAT_10e8_7714;
      puVar5 = (undefined2 *)&DAT_10e8_5e14;
      for (iVar4 = DAT_10e8_5cda; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar2 = puVar6;
        puVar6 = puVar6 + 1;
        puVar1 = puVar5;
        puVar5 = puVar5 + 1;
        *puVar2 = *puVar1;
      }
    }
  }
  else {
    if (param_4 != 0x111) {
      return 0;
    }
    if (param_3 == 0x385) {
      FUN_1060_11e0();
    }
    else if (param_3 < 0x386) {
      if (param_3 == 1) {
        if (0 < DAT_10e8_5cda) {
          puVar6 = (undefined2 *)&DAT_10e8_5e14;
          puVar5 = (undefined2 *)&DAT_10e8_7714;
          for (iVar4 = DAT_10e8_5cda; iVar4 != 0; iVar4 = iVar4 + -1) {
            puVar2 = puVar6;
            puVar6 = puVar6 + 1;
            puVar1 = puVar5;
            puVar5 = puVar5 + 1;
            *puVar2 = *puVar1;
          }
        }
      }
      else if (param_3 != 2) {
        return 1;
      }
      ENDDIALOG(param_5,1);
    }
    else if (param_3 == 0x387) {
      uVar3 = GETDLGITEM(param_5,0x385);
      uStackY_14 = 0x13a8;
      pcStackY_16 = (char *)0x134d;
      lVar7 = SENDMESSAGE(uVar3,0x407,0,0);
      if (0 < (int)lVar7) {
        uVar3 = GETDLGITEM(param_5,0x387);
        uStackY_14 = 0x13a8;
        pcStackY_16 = (char *)0x136e;
        SENDMESSAGE(uVar3,0xd,0x28,(long)CONCAT22(unaff_SS,local_38));
        uStackY_14 = 0x1381;
        FUN_1060_0c44();
      }
    }
    else {
      if (param_3 == 0x38e) {
        uVar3 = GETDLGITEM(param_5,0x385);
        uStackY_14 = 0x13a8;
        pcStackY_16 = (char *)s_AAAAAAAAAAA_02d_10e8_1396 + 0xf;
        SENDMESSAGE(uVar3,0xd,0x19,(long)CONCAT22(unaff_SS,local_38));
        if (local_38[0] != '\0') {
          a2 = FUN_1060_0378();
          FUN_1060_1182();
          uStackY_14 = 0x13a8;
          pcStackY_16 = (char *)0x13d1;
          SENDMESSAGE(uVar3,0x40e,a2,0);
        }
      }
      else {
        if (param_3 != 0x38f) {
          return 1;
        }
        uVar3 = GETDLGITEM(param_5,0x385);
        uStackY_14 = 0x13a8;
        pcStackY_16 = (char *)s_fix_pal_10e8_13e7 + 8;
        SENDMESSAGE(uVar3,0xd,0x19,(long)CONCAT22(unaff_SS,local_38));
        FUN_1060_0554();
        FUN_1060_1182();
      }
      FUN_1068_2d64();
    }
  }
  return 1;
}


