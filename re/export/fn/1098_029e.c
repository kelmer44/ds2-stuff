// FUN_1098_029e at 1098:029e

undefined2 __cdecl16far
FUN_1098_029e(ushort param_1,void *param_2,undefined2 param_3,uint param_4,int param_5)

{
  ushort uVar1;
  uint a2;
  char *pcVar2;
  bool bVar3;
  
  pcVar2 = (char *)s_Options_10e8_10d0;
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  if (param_5 != 0 || param_4 != 0) {
    do {
      Ordinal_12(pcVar2);
      if ((param_5 != 0) || (a2 = param_4, param_4 == 0xffff)) {
        a2 = 0xfffe;
      }
      pcVar2 = (char *)0x13a8;
      uVar1 = _LREAD(param_1,(void *)CONCAT22(param_3,param_2),a2);
      if (uVar1 != a2) {
        return 0;
      }
      param_2 = (void *)((int)param_2 + a2);
      bVar3 = param_4 < a2;
      param_4 = param_4 - a2;
      param_5 = param_5 - (uint)bVar3;
    } while (param_5 != 0 || param_4 != 0);
  }
  return 1;
}


