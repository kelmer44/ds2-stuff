// FUN_1068_1a74 at 1068:1a74

void __cdecl16far
FUN_1068_1a74(int *param_1,undefined2 param_2,void *param_3,undefined2 param_4,int param_5)

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
  pcStackY_14 = (char *)s_setvideo_vfw_palette_handle_to___10e8_1a99 + 0x10;
  LSTRCPY((int *)CONCAT22(param_2,param_1 + 3),(void *)CONCAT22(param_4,param_3));
  pcStackY_12 = (char *)0x13a8;
  pcStackY_14 = (char *)s_window_10e8_1abb + 1;
  LSTRCPY((undefined1 *)CONCAT22(unaff_SS,local_206),(void *)CONCAT22(param_4,param_3));
  pcStackY_12 = (char *)0x13a8;
  pcStackY_14 = (char *)s_fullscreen_10e8_1ac2 + 9;
  pvVar3 = LSTRCAT((undefined1 *)CONCAT22(unaff_SS,local_206),(void *)0x10e81f43);
  iVar2 = (int)((ulong)pvVar3 >> 0x10);
  pcStackY_12 = (char *)s_put_vfw_destination_at__d__d__d___10e8_1acd + 0xe;
  iVar1 = FUN_1098_0326();
  *param_1 = iVar1;
  param_1[1] = iVar2;
  param_1[2] = param_5;
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


