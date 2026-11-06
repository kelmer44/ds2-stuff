// FUN_1078_1796 at 1078:1796

void __cdecl16far
FUN_1078_1796(int param_1,undefined2 param_2,ushort param_3,int param_4,int param_5)

{
  int a3;
  ushort a0;
  ushort a1;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  SELECTPALETTE(param_3,DAT_10e8_200a,0);
  a3 = *(int *)(param_1 + 0x344) - *(int *)(param_1 + 0x340);
  a0 = *(int *)(param_1 + 0x346) - *(int *)(param_1 + 0x342);
  if ((0 < a3) && (0 < (int)a0)) {
    FUN_1078_0172(param_1,param_2,param_3,a3,a0);
    if (param_5 == 0 && param_4 == 0) {
      PATBLT(*(ushort *)(param_1 + 8),0,0,a3,a0,0x42);
    }
    else {
      FUN_1078_1aea(*(undefined2 *)(param_1 + 8),0,0,param_4,param_5,
                    *(undefined2 *)(param_1 + 0x340),*(undefined2 *)(param_1 + 0x342),0);
    }
    FUN_1078_06f4(param_1,param_2,*(undefined2 *)(param_1 + 0x340),*(undefined2 *)(param_1 + 0x342),
                  a3,a0,0);
    if (DAT_10e8_008a != 0) {
      FUN_1078_0000(*(undefined2 *)(param_1 + 8),*(undefined2 *)(param_1 + 0x340),
                    *(undefined2 *)(param_1 + 0x342));
    }
    a1 = param_3;
    WinGStretchBlt_inferred
              (a0,a3,param_3,*(short *)(param_1 + 0x340),*(short *)(param_1 + 0x342),
               *(ushort *)(param_1 + 10),*(short *)(param_1 + 0xc),*(short *)(param_1 + 8),0,0);
    SELECTPALETTE(param_3,a1,0);
    SELECTOBJECT(*(ushort *)(param_1 + 8),DAT_10e8_76f6);
    DELETEOBJECT(*(ushort *)(param_1 + 2));
    *(undefined2 *)(param_1 + 0x348) = 0;
  }
  return;
}


