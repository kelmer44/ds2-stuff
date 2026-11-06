// FUN_1098_01c2 at 1098:01c2

void __cdecl16far
FUN_1098_01c2(ushort param_1,void *param_2,undefined2 param_3,int param_4,int param_5)

{
  int a1;
  int a2;
  short sVar1;
  void *pvVar2;
  ushort a0;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  SETBKMODE(param_1,1);
  SETTEXTCOLOR(param_1,CONCAT22(DAT_10e8_23f2,DAT_10e8_23f0));
  a1 = param_4 + -1;
  a2 = param_5 + -1;
  pvVar2 = (void *)CONCAT22(param_3,param_2);
  a0 = param_1;
  sVar1 = LSTRLEN((void *)CONCAT22(param_3,param_2));
  TEXTOUT(a0,a1,a2,pvVar2,sVar1);
  SETTEXTCOLOR(param_1,CONCAT22(DAT_10e8_23f6,DAT_10e8_23f4));
  pvVar2 = (void *)CONCAT22(param_3,param_2);
  sVar1 = LSTRLEN((void *)CONCAT22(param_3,param_2));
  TEXTOUT(param_1,param_4,param_5,pvVar2,sVar1);
  return;
}


