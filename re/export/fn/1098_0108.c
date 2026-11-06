// FUN_1098_0108 at 1098:0108

void __cdecl16far
FUN_1098_0108(ushort param_1,void *param_2,undefined2 param_3,undefined2 param_4,undefined2 param_5,
             int param_6,int param_7)

{
  int a1;
  int a2;
  short sVar1;
  void *pvVar2;
  ushort a0;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  SETBKMODE(param_1,2);
  SETBKCOLOR(param_1,CONCAT22(param_5,param_4));
  a1 = param_6 + -1;
  a2 = param_7 + -1;
  pvVar2 = (void *)CONCAT22(param_3,param_2);
  a0 = param_1;
  sVar1 = LSTRLEN((void *)CONCAT22(param_3,param_2));
  TEXTOUT(a0,a1,a2,pvVar2,sVar1);
  SETBKMODE(param_1,1);
  SETTEXTCOLOR(param_1,0xffffff);
  pvVar2 = (void *)CONCAT22(param_3,param_2);
  sVar1 = LSTRLEN((void *)CONCAT22(param_3,param_2));
  TEXTOUT(param_1,param_6,param_7,pvVar2,sVar1);
  return;
}


