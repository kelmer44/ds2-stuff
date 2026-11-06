// FUN_1098_0326 at 1098:0326

char * __cdecl16far FUN_1098_0326(int param_1,undefined2 param_2,void *param_3)

{
  char *a0;
  ushort uVar1;
  void *pvVar2;
  undefined2 unaff_SS;
  long lVar3;
  undefined1 local_96 [130];
  undefined2 uStackY_14;
  char *pcStackY_12;
  ushort a0_00;
  
  FUN_10d0_029e();
  if (*(int *)(param_1 + 4) == 0) {
    pcStackY_12 = (char *)s_Options_10e8_10d0;
    uStackY_14 = 0x368;
    uVar1 = OPENFILE((void *)CONCAT22((char *)s_Options_10e8_10e2 + 6,param_3),
                     (undefined1 *)CONCAT22(unaff_SS,local_96),0);
    if (uVar1 == 0xffff) {
      FUN_1098_0000();
      a0 = (char *)0x0;
    }
    else {
      a0_00 = 0;
      pcStackY_12 = (char *)0x390;
      _LLSEEK(uVar1,0,2);
      uVar1 = 0;
      pcStackY_12 = (char *)0x3a4;
      lVar3 = _LLSEEK(a0_00,0,0);
      a0 = (char *)((ulong)lVar3 >> 0x10);
      pvVar2 = (void *)FUN_1090_0000();
      if (a0 == (char *)0x0 && pvVar2 == (void *)0x0) {
        FUN_1098_0248();
        DAT_10e8_0048 = 1;
        a0 = (char *)s_Options_10e8_108c + 4;
        FUN_1010_0230();
      }
      else {
        pcStackY_12 = (char *)s_Options_10e8_108c + 4;
        uStackY_14 = 0x3ee;
        lVar3 = _HREAD(uVar1,(void *)CONCAT22(a0,pvVar2),CONCAT22(pvVar2,pvVar2));
        if (lVar3 == 0) {
          FUN_1090_0068();
          FUN_1098_0000();
          DAT_10e8_0048 = 1;
          a0 = (char *)s_Options_10e8_108c + 4;
          FUN_1010_0230();
        }
      }
      _LCLOSE((ushort)a0);
    }
  }
  else {
    a0 = (char *)FUN_1088_06b4();
  }
  return a0;
}


