// FUN_1060_0652 at 1060:0652

int __cdecl16far FUN_1060_0652(undefined2 param_1,uint *param_2,undefined2 param_3)

{
  int iVar1;
  uint uVar2;
  uint unaff_SI;
  undefined1 local_208 [256];
  byte local_108;
  undefined2 uStack_14;
  char *pcStack_12;
  undefined1 *puStack_10;
  char *pcStack_e;
  int iVar3;
  
  FUN_10d0_029e();
  iVar3 = 0;
  do {
    pcStack_e = (char *)s_Options_10e8_10d0;
    puStack_10 = (undefined1 *)0x67a;
    iVar1 = FUN_1060_0222();
    if (iVar1 == 0) {
      return iVar3;
    }
    if (local_108 == 0x5e) {
      pcStack_e = (char *)0x77f;
      uVar2 = FUN_1060_02bc();
      uVar2 = uVar2 | 0x5000;
LAB_1060_0785:
      *param_2 = uVar2;
    }
    else {
      if (0x5e < local_108) {
LAB_1060_06a5:
        pcStack_e = (char *)0x6ae;
        uVar2 = FUN_1060_02bc();
        goto LAB_1060_0785;
      }
      if (local_108 == 0x2d) {
        pcStack_e = (char *)0x705;
        uVar2 = FUN_1060_02bc();
        uVar2 = uVar2 | 0x4000;
        goto LAB_1060_0785;
      }
      if ((char)local_108 < '.') {
        if (local_108 == 0x21) {
          pcStack_e = (char *)0x6cf;
          uVar2 = FUN_1060_02bc();
          uVar2 = uVar2 | 0x1000;
        }
        else if (local_108 == 0x2a) {
          pcStack_e = (char *)0x6e1;
          uVar2 = FUN_1060_02bc();
          uVar2 = uVar2 | 0x2000;
        }
        else {
          if (local_108 != 0x2b) goto LAB_1060_06a5;
          pcStack_e = (char *)0x6f3;
          uVar2 = FUN_1060_02bc();
          uVar2 = uVar2 | 0x3000;
        }
        goto LAB_1060_0785;
      }
      if (local_108 == 0x2f) {
        pcStack_e = (char *)0x717;
        uVar2 = FUN_1060_02bc();
        uVar2 = uVar2 | 0x7000;
        goto LAB_1060_0785;
      }
      if (local_108 != 0x3d) {
        if (local_108 != 0x40) goto LAB_1060_06a5;
        pcStack_e = (char *)0x76d;
        uVar2 = FUN_1060_02bc();
        uVar2 = uVar2 | 0x6000;
        goto LAB_1060_0785;
      }
      pcStack_e = (char *)s_Options_10e8_10d0;
      puStack_10 = (undefined1 *)0x72a;
      FUN_1060_0222();
      pcStack_e = &stack0xfff8;
      puStack_10 = local_208;
      pcStack_12 = (char *)s_Options_10e8_10d0;
      uStack_14 = 0x73d;
      FUN_1060_0c44();
      pcStack_e = (char *)0x749;
      uVar2 = FUN_1060_02bc();
      *param_2 = (unaff_SI | 0x20) << 10 | uVar2;
    }
    param_2 = param_2 + 1;
    iVar3 = iVar3 + 1;
    if (9 < iVar3) {
      return iVar3;
    }
  } while( true );
}


