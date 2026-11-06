// FUN_1028_0b48 at 1028:0b48

undefined2 __cdecl16far FUN_1028_0b48(void *param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 unaff_SS;
  undefined1 local_84 [116];
  undefined2 uStackY_10;
  char *pcStackY_e;
  
  FUN_10d0_029e();
  pcStackY_e = (char *)s_Options_10e8_10d0;
  uStackY_10 = 0xb6a;
  LSTRCPY((undefined1 *)CONCAT22(unaff_SS,local_84),(void *)CONCAT22(param_2,param_1));
  pcStackY_e = (char *)0x13a8;
  uStackY_10 = 0xb79;
  LSTRCAT((undefined1 *)CONCAT22(unaff_SS,local_84),(void *)0x10e81529);
  pcStackY_e = (char *)0xb88;
  iVar1 = FUN_10d0_03f4();
  if (iVar1 != 0) {
    return 0x273e;
  }
  return 0;
}


