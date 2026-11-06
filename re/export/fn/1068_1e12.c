// FUN_1068_1e12 at 1068:1e12

void __cdecl16far FUN_1068_1e12(char *param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  undefined2 uVar5;
  int iVar6;
  undefined2 uVar7;
  undefined1 *puVar8;
  
  FUN_10d0_029e();
  iVar3 = LSTRLEN((char *)CONCAT22((char *)s_Options_10e8_10e2 + 6,param_1));
  cVar1 = *param_1;
  while ((iVar2 = iVar3 + -1, cVar1 == '(' && (param_1[iVar2] == ')'))) {
    param_1[iVar2] = '\0';
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    iVar3 = iVar2;
  }
  puVar8 = &stack0xfff8;
  FUN_1068_1d60(param_1);
  iVar6 = (int)param_2;
  uVar7 = (undefined2)((ulong)param_2 >> 0x10);
  if ((puVar8 == (undefined1 *)0x0) &&
     (sVar4 = LSTRLEN((char *)CONCAT22((char *)s_Options_10e8_10e2 + 6,param_1)), sVar4 - iVar2 == 1
     )) {
    uVar5 = FUN_1068_1dcc();
    *(undefined2 *)(*param_3 * 2 + iVar6) = uVar5;
  }
  else {
    cVar1 = param_1[iVar3];
    param_1[iVar3] = '\0';
    FUN_1068_1e12(param_1 + param_3._2_2_,iVar6,uVar7);
    FUN_1068_1e12(param_1 + iVar3 + 1,iVar6,uVar7,(int *)param_3);
    *(uint *)(*param_3 * 2 + iVar6) = (int)cVar1 | 0x8000;
  }
  *param_3 = *param_3 + 1;
  return;
}


