// FUN_1078_06f4 at 1078:06f4

void __cdecl16far
FUN_1078_06f4(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined2 unaff_SI;
  undefined2 unaff_DI;
  int iVar4;
  int *piVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  uVar7 = CONCAT22(unaff_DI,unaff_SI);
  piVar3 = (int *)((int)param_1 + 0x1c);
  piVar5 = (int *)CONCAT22(param_1._2_2_,piVar3);
  FUN_1078_05be(piVar3,param_1._2_2_,piVar3,param_1._2_2_);
  iVar4 = 0;
  if (0 < *piVar5) {
    piVar3 = (int *)((int)param_1 + 0x1e);
    uVar6 = param_1._2_2_;
    do {
      iVar1 = *piVar3;
      iVar2 = piVar3[1];
      uVar7 = CONCAT22(iVar2,iVar1);
      if ((iVar2 != 0 || iVar1 != 0) &&
         ((param_6 <= *(int *)(iVar1 + 0x30) || (*(int *)(iVar1 + 0x12) == 0)))) {
        uVar6 = param_5;
        FUN_1078_0454((int)param_1,param_1._2_2_,iVar1,iVar2,param_2,param_3,param_4);
      }
      piVar3 = piVar3 + 2;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)((int)param_1 + 0x1c));
  }
  piVar5 = (int *)0x10d007a6;
  FUN_1078_05be((int)param_1 + 0x1b0,param_1._2_2_,(int)param_1 + 0x1ae,param_1._2_2_,uVar7);
  iVar4 = 0;
  if (0 < *piVar5) {
    piVar3 = (int *)((int)param_1 + 0x1b0);
    uVar6 = param_1._2_2_;
    do {
      iVar1 = *piVar3;
      piVar5 = piVar3 + 1;
      if (*piVar5 != 0 || iVar1 != 0) {
        uVar6 = param_5;
        FUN_1078_0454((int)param_1,param_1._2_2_,iVar1,*piVar5,param_2,param_3,param_4,param_5,iVar1
                     );
      }
      piVar3 = piVar3 + 2;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)((int)param_1 + 0x1ae));
  }
  return;
}


