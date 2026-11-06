// FUN_1068_15b8 at 1068:15b8

undefined2 __cdecl16far FUN_1068_15b8(ushort param_1)

{
  void *pvVar1;
  undefined2 unaff_SS;
  void *pvVar2;
  char *pcVar3;
  
  FUN_10d0_029e();
  if (DAT_10e8_5cbc == 0 && DAT_10e8_5cba == 0) {
    FUN_1098_0248();
  }
  else {
    DAT_10e8_3eb4 = CREATEBRUSHINDIRECT((undefined1 *)CONCAT22(unaff_SS,&stack0xfff0));
    DAT_10e8_2774 = 1;
    pvVar2 = MAKEPROCINSTANCE(DIALOGPROC,DAT_10e8_9556);
    pvVar1 = (void *)((ulong)pvVar2 >> 0x10);
    DIALOGBOX(DAT_10e8_9556,s_ds2dialog_10e8_1ebd,param_1,(void *)CONCAT22(pvVar1,pvVar1));
    pcVar3 = (char *)s_ShowMike_10e8_162b + 8;
    INVALIDATERECT(param_1,(void *)0x0,0);
    FREEPROCINSTANCE((void *)CONCAT22(pcVar3,(void *)0x13a8));
    DELETEOBJECT(DAT_10e8_3eb4);
    DAT_10e8_2774 = 0;
  }
  return 0;
}


