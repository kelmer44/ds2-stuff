// FUN_1058_0922 at 1058:0922

/* WARNING: Removing unreachable block (ram,0x10580a15) */
/* WARNING: Removing unreachable block (ram,0x1058095f) */

undefined2 __cdecl16far FUN_1058_0922(undefined2 param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined2 uVar3;
  int *piVar4;
  int unaff_SI;
  int *piVar5;
  int iVar6;
  int *in_stack_0000fff6;
  
  piVar5 = (int *)s_Options_10e8_10d0;
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  DAT_10e8_5e10 = param_2;
  DAT_10e8_5e12 = param_3;
  piVar1 = DAT_10e8_5cbe;
  iVar6 = DAT_10e8_5cc0;
  if (DAT_10e8_5cc0 != 0 || DAT_10e8_5cbe != (int *)0x0) {
    do {
      piVar4 = piVar1;
      if ((((*piVar1 <= param_2) && (param_2 <= piVar1[2])) && (piVar1[1] <= param_3)) &&
         ((param_3 <= piVar1[3] && (piVar1[4] == 0)))) {
        if (param_4 == 0) {
          in_stack_0000fff6 = (int *)piVar1[0xc];
          unaff_SI = piVar1[0xd];
        }
        else if (param_4 == 1) {
          in_stack_0000fff6 = (int *)piVar1[10];
          unaff_SI = piVar1[0xb];
        }
        else if (param_4 == 2) {
          in_stack_0000fff6 = (int *)piVar1[8];
          unaff_SI = piVar1[9];
        }
        if (((param_4 == 0) && (unaff_SI == 0 && in_stack_0000fff6 == (int *)0x0)) &&
           ((DAT_10e8_007c == 0x13a || (DAT_10e8_007c == 0x32b)))) {
          in_stack_0000fff6 = (int *)piVar1[10];
          unaff_SI = piVar1[0xb];
        }
        if (unaff_SI != 0 || in_stack_0000fff6 != (int *)0x0) {
          do {
            iVar6 = *in_stack_0000fff6;
            piVar4 = piVar5;
            iVar2 = FUN_1060_07f6();
            if (iVar2 != 0) {
              FUN_1060_0b26();
              uVar3 = FUN_1058_01e0(param_1,in_stack_0000fff6,unaff_SI,in_stack_0000fff6,unaff_SI,
                                    param_4);
              return uVar3;
            }
            piVar1 = (int *)*(undefined2 *)((int)in_stack_0000fff6 + 0x93);
            unaff_SI = *(int *)((int)in_stack_0000fff6 + 0x95);
            in_stack_0000fff6 = piVar1;
            piVar5 = (int *)((char *)s_ReadSpeed_10e8_105f + 1);
          } while (unaff_SI != 0 || piVar1 != (int *)0x0);
          piVar5 = (int *)((char *)s_ReadSpeed_10e8_105f + 1);
        }
      }
      piVar1 = (int *)piVar4[6];
      iVar6 = piVar4[7];
    } while (iVar6 != 0 || piVar1 != (int *)0x0);
  }
  if (param_4 == 1) {
    FUN_1008_0e16();
    DAT_10e8_8722 = LOADCURSOR(DAT_10e8_9556,s_cUseIt_10e8_1cd4);
    FUN_1008_0000();
  }
  return 0;
}


