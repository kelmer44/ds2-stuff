// FUN_1018_05c0 at 1018:05c0

void __cdecl16far
FUN_1018_05c0(uint *param_1,undefined2 param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  int iStackY_a;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  iVar3 = (int)param_4 >> 2;
  uVar1 = (param_3 >> 1 | (uint)((param_4 & 1) != 0) << 0xf) >> 1 |
          (uint)(((int)param_4 >> 1 & 1U) != 0) << 0xf;
  if ((-1 < iVar3) && ((0 < iVar3 || (uVar1 != 0)))) {
    iStackY_a = iVar3 + -1 + (uint)(uVar1 != 0);
    do {
      do {
        uVar2 = ((((((param_5 >> 1 | (uint)((param_6 & 1) != 0) << 0xf) >> 1 |
                    (uint)((param_6 >> 1 & 1) != 0) << 0xf) >> 1 |
                   (uint)((param_6 >> 2 & 1) != 0) << 0xf) >> 1 |
                  (uint)((param_6 >> 3 & 1) != 0) << 0xf) >> 1 |
                 (uint)((param_6 >> 4 & 1) != 0) << 0xf) >> 1 |
                (uint)((param_6 >> 5 & 1) != 0) << 0xf) >> 1 |
                (uint)((param_6 >> 6 & 1) != 0) << 0xf;
        bVar4 = CARRY2(param_5,uVar2);
        param_5 = param_5 + uVar2;
        param_6 = param_6 + (param_6 >> 7) + (uint)bVar4;
        *param_1 = *param_1 ^ param_5;
        param_1[1] = param_1[1] ^ param_6;
        param_1 = param_1 + 2;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
      iStackY_a = iStackY_a + -1;
    } while (-1 < iStackY_a);
  }
  return;
}


