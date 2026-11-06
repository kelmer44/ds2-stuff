// FUN_1020_0000 at 1020:0000

void __cdecl16far
FUN_1020_0000(undefined1 *param_1,undefined1 *param_2,uint param_3,uint param_4,uint param_5,
             uint param_6)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uStackY_c;
  uint uVar4;
  uint uVar5;
  
                    /* Segment:    5
                       Offset:     00005900
                       Length:     0b26
                       Min Alloc:  0b26
                       Flags:      0d50
                           Code
                           Moveable
                           Preload
                           Impure (Non-shareable)
                        */
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
      uVar5 = 0;
      if (param_6 <= uStackY_c) {
        return;
      }
      uVar4 = 0;
      puVar1 = param_1;
      puVar2 = param_2;
      if (param_5 != 0) {
        do {
          while( true ) {
            puVar2 = param_2;
            uVar5 = uVar5 + param_5;
            param_1._0_2_ = (undefined1 *)puVar1;
            param_1._2_2_ = (int)((ulong)puVar1 >> 0x10);
            if (param_3 <= uVar5) break;
            param_1 = (undefined1 *)
                      CONCAT22(param_1._2_2_ +
                               (-(uint)((undefined1 *)0xfffe < (undefined1 *)param_1) & 0x80),
                               (undefined1 *)param_1 + 1);
            puVar1 = param_1;
          }
          if (param_5 <= uVar4) break;
          uVar5 = uVar5 - param_3;
          if ((undefined1 *)param_1 == (undefined1 *)0xffff) {
            param_1._2_2_ = param_1._2_2_ + 0x80;
          }
          param_1 = (undefined1 *)CONCAT22(param_1._2_2_,(undefined1 *)param_1 + 1);
          if ((undefined1 *)param_2 == (undefined1 *)0xffff) {
            param_2._2_2_ = param_2._2_2_ + 0x80;
          }
          param_2 = (undefined1 *)CONCAT22(param_2._2_2_,(undefined1 *)param_2 + 1);
          *puVar2 = *puVar1;
          uVar4 = uVar4 + 1;
          puVar1 = param_1;
          puVar2 = param_2;
        } while (uVar4 < param_5);
      }
      for (; param_1 = puVar1, (uVar4 & 3) != 0; uVar4 = uVar4 + 1) {
        param_2._0_2_ = (undefined1 *)puVar2;
        param_2._2_2_ = (int)((ulong)puVar2 >> 0x10);
        if ((undefined1 *)param_2 == (undefined1 *)0xffff) {
          param_2._2_2_ = param_2._2_2_ + 0x80;
        }
        param_2 = (undefined1 *)CONCAT22(param_2._2_2_,(undefined1 *)param_2 + 1);
        *puVar2 = 0;
        puVar2 = param_2;
        puVar1 = param_1;
      }
      uStackY_c = uStackY_c + 1;
      param_2 = puVar2;
    } while (uStackY_c < param_6);
  }
  return;
}


