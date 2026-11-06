// FUN_1050_0142 at 1050:0142

void __cdecl16far FUN_1050_0142(int param_1,char *param_2,int param_3,char *param_4)

{
  char *pcVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iStackY_10;
  char *pcStackY_e;
  int in_stack_0000fff4;
  char *in_stack_0000fff6;
  int iVar6;
  int iVar7;
  
  pcVar5 = (char *)s_Options_10e8_10d0;
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  pcStackY_e = param_2;
  if (param_2 != (char *)0x0 || param_1 != 0) {
    do {
      iVar4 = param_1;
      if ((iVar4 == param_3) && (param_1 = iVar4, pcStackY_e == param_4)) break;
      param_1 = *(int *)(iVar4 + 0xc);
      pcVar1 = (char *)*(int *)(iVar4 + 0xe);
      in_stack_0000fff4 = iVar4;
      in_stack_0000fff6 = pcStackY_e;
      pcStackY_e = pcVar1;
    } while (pcVar1 != (char *)0x0 || param_1 != 0);
  }
  if ((param_3 == param_1) && (param_4 == pcStackY_e)) {
    uVar2 = *(undefined2 *)(param_1 + 0xe);
    *(undefined2 *)(in_stack_0000fff4 + 0xc) = *(undefined2 *)(param_1 + 0xc);
    *(undefined2 *)(in_stack_0000fff4 + 0xe) = uVar2;
    iVar4 = *(int *)(param_1 + 0x10);
    iVar6 = *(int *)(param_1 + 0x12);
    iStackY_10 = param_1;
    if (iVar6 != 0 || iVar4 != 0) {
      do {
        pcStackY_e = pcVar5;
        if (*(int *)(iVar4 + 0x12) != 0 || *(int *)(iVar4 + 0x10) != 0) {
          pcStackY_e = (char *)s_Options_10e8_108c + 4;
          FUN_1090_0068(*(undefined2 *)(iVar4 + 0x10),*(undefined2 *)(iVar4 + 0x12));
        }
        iVar3 = *(int *)(iVar4 + 0x93);
        iVar7 = *(int *)(iVar4 + 0x95);
        pcVar5 = (char *)s_Options_10e8_108c + 4;
        iStackY_10 = 0x20d;
        FUN_1090_0068(iVar4,iVar6);
        iVar4 = iVar3;
        iVar6 = iVar7;
      } while (iVar7 != 0 || iVar3 != 0);
    }
    iVar4 = *(int *)(iStackY_10 + 0x14);
    iVar6 = *(int *)(iStackY_10 + 0x16);
    if (*(int *)(iStackY_10 + 0x16) != 0 || *(int *)(iStackY_10 + 0x14) != 0) {
      do {
        pcStackY_e = pcVar5;
        if (*(int *)(iVar4 + 0x12) != 0 || *(int *)(iVar4 + 0x10) != 0) {
          pcStackY_e = (char *)s_Options_10e8_108c + 4;
          FUN_1090_0068(*(undefined2 *)(iVar4 + 0x10),*(undefined2 *)(iVar4 + 0x12));
        }
        iVar3 = *(int *)(iVar4 + 0x93);
        iVar7 = *(int *)(iVar4 + 0x95);
        pcVar5 = (char *)s_Options_10e8_108c + 4;
        iStackY_10 = 0x265;
        FUN_1090_0068(iVar4,iVar6);
        iVar4 = iVar3;
        iVar6 = iVar7;
      } while (iVar7 != 0 || iVar3 != 0);
    }
    iVar4 = *(int *)(iStackY_10 + 0x18);
    iVar6 = *(int *)(iStackY_10 + 0x1a);
    if (*(int *)(iStackY_10 + 0x1a) != 0 || *(int *)(iStackY_10 + 0x18) != 0) {
      do {
        pcStackY_e = pcVar5;
        if (*(int *)(iVar4 + 0x12) != 0 || *(int *)(iVar4 + 0x10) != 0) {
          pcStackY_e = (char *)s_Options_10e8_108c + 4;
          FUN_1090_0068(*(undefined2 *)(iVar4 + 0x10),*(undefined2 *)(iVar4 + 0x12));
        }
        iVar3 = *(int *)(iVar4 + 0x93);
        iVar7 = *(int *)(iVar4 + 0x95);
        pcVar5 = (char *)s_Options_10e8_108c + 4;
        iStackY_10 = 0x2bd;
        FUN_1090_0068(iVar4,iVar6);
        iVar4 = iVar3;
        iVar6 = iVar7;
      } while (iVar7 != 0 || iVar3 != 0);
    }
    FUN_1090_0068(iStackY_10,pcStackY_e);
  }
  return;
}


