// FUN_1068_1c6c at 1068:1c6c

void __cdecl16far FUN_1068_1c6c(int *param_1,undefined2 param_2,void *param_3,undefined2 param_4)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_SS;
  void *pvVar3;
  undefined1 local_206 [498];
  char *pcStackY_14;
  char *pcStackY_12;
  
  FUN_10d0_029e();
  pcStackY_12 = (char *)s_Options_10e8_10d0;
  pcStackY_14 = (char *)s_close_vfw_wait_10e8_1c9d + 4;
  LSTRCPY((int *)CONCAT22(param_2,param_1 + 2),(void *)CONCAT22(param_4,param_3));
  pcStackY_12 = (char *)0x13a8;
  pcStackY_14 = (char *)s_SysCutScene_10e8_1cad + 7;
  LSTRCPY((undefined1 *)CONCAT22(unaff_SS,local_206),(void *)CONCAT22(param_4,param_3));
  pcStackY_12 = (char *)0x13a8;
  pcStackY_14 = (char *)s_cUseIt_10e8_1cc2 + 1;
  pvVar3 = LSTRCAT((undefined1 *)CONCAT22(unaff_SS,local_206),(void *)0x10e81f50);
  iVar2 = (int)((ulong)pvVar3 >> 0x10);
  pcStackY_12 = (char *)s_LastAction_10e8_1cc9 + 10;
  iVar1 = FUN_1098_0326();
  *param_1 = iVar1;
  param_1[1] = iVar2;
  if (*(char *)*param_1 == '\r') {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    do {
      if (*(char *)(iVar1 + *param_1) == '\0') break;
      iVar1 = iVar1 + 1;
    } while (*(char *)(iVar1 + *param_1) != '\r');
  }
  ((char *)*param_1)[iVar1] = '\0';
  return;
}


