// FUN_10d0_039c at 10d0:039c

void __cdecl16far FUN_10d0_039c(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  int unaff_BP;
  undefined2 unaff_SS;
  undefined1 local_104 [256];
  char *local_4;
  int iStack_2;
  
  iStack_2 = unaff_BP + 1;
  local_4 = (char *)s_Options_10e8_10e2 + 6;
  FUN_10d0_02f2(local_104,(char *)s_Expression__s__File__s__Line__d_10e8_2980,param_1,param_2,
                param_3);
  MESSAGEBOX(0,(undefined1 *)CONCAT22(unaff_SS,local_104),s_ASSERTION_FAILED_10e8_29a1,0x2010);
  FUN_10d0_0f54();
  return;
}


