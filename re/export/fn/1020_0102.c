// FUN_1020_0102 at 1020:0102

void __cdecl16far
FUN_1020_0102(undefined1 *param_1,undefined1 *param_2,uint param_3,uint param_4,uint param_5,
             uint param_6)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uStackY_c;
  uint uVar5;
  uint uVar6;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  uVar3 = 0;
  uStackY_c = 0;
  if (param_6 != 0) {
    do {
      while (uVar3 = uVar3 + param_6, uVar3 < param_4) {
        param_1._2_2_ = (int)((ulong)param_1 >> 0x10);
        param_1 = (undefined1 *)CONCAT22(param_1._2_2_,(undefined1 *)param_1 + param_3);
      }
      uVar3 = uVar3 - param_4;
      uVar6 = 0;
      if (param_6 <= uStackY_c) {
        return;
      }
      iVar2 = (param_5 - 1 & 0xfffc) + 4;
      param_2 = (undefined1 *)CONCAT22(param_2._2_2_,(undefined1 *)param_2 + iVar2);
      uVar5 = param_5 & 3;
      uVar4 = param_5;
      while (uVar5 != 0) {
        param_2._2_2_ = (int)((ulong)param_2 >> 0x10);
        param_2 = (undefined1 *)
                  CONCAT22(param_2._2_2_ -
                           (~-(uint)((undefined1 *)param_2 != (undefined1 *)0x0) & 0x80),
                           (undefined1 *)param_2 + -1);
        uVar4 = uVar4 + 1;
        *param_2 = 0;
        uVar5 = uVar4 & 3;
      }
      uVar5 = 0;
      puVar1 = param_1;
      if (param_5 != 0) {
        do {
          while( true ) {
            uVar6 = uVar6 + param_5;
            param_1._0_2_ = (undefined1 *)puVar1;
            param_1._2_2_ = (int)((ulong)puVar1 >> 0x10);
            if (param_3 <= uVar6) break;
            param_1 = (undefined1 *)
                      CONCAT22(param_1._2_2_ +
                               (-(uint)((undefined1 *)0xfffe < (undefined1 *)param_1) & 0x80),
                               (undefined1 *)param_1 + 1);
            puVar1 = param_1;
          }
          if (param_5 <= uVar5) break;
          uVar6 = uVar6 - param_3;
          if ((undefined1 *)param_1 == (undefined1 *)0xffff) {
            param_1._2_2_ = param_1._2_2_ + 0x80;
          }
          param_1 = (undefined1 *)CONCAT22(param_1._2_2_,(undefined1 *)param_1 + 1);
          param_2 = (undefined1 *)
                    CONCAT22(param_2._2_2_ -
                             (~-(uint)((undefined1 *)param_2 != (undefined1 *)0x0) & 0x80),
                             (undefined1 *)param_2 + -1);
          *param_2 = *puVar1;
          uVar5 = uVar5 + 1;
          puVar1 = param_1;
        } while (uVar5 < param_5);
      }
      param_1 = puVar1;
      param_2 = (undefined1 *)CONCAT22(param_2._2_2_,(undefined1 *)param_2 + iVar2);
      uStackY_c = uStackY_c + 1;
    } while (uStackY_c < param_6);
  }
  return;
}


