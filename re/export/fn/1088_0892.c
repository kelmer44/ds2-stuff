// FUN_1088_0892 at 1088:0892

void * __cdecl16far FUN_1088_0892(undefined4 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  ushort a0;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  int in_DX;
  char *pcVar6;
  undefined2 unaff_SS;
  void *pvVar7;
  undefined1 local_a6 [136];
  undefined1 local_1e [6];
  undefined2 uStackY_18;
  char *pcStackY_16;
  
  FUN_10d0_029e();
  if (*(int *)((int)param_1 + 4) == 0) {
    pcStackY_16 = (char *)0x8c0;
    a0 = OPENFILE((char *)CONCAT22((char *)s_Options_10e8_10e2 + 6,param_2),
                  (undefined1 *)CONCAT22(unaff_SS,local_a6),0);
    if (a0 != 0xffff) {
      pvVar7 = (void *)_LLSEEK(a0,0,2);
      _LCLOSE(a0);
      return (void *)pvVar7;
    }
  }
  else {
    uVar4 = 0xffff;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar1 = param_2;
      param_2 = param_2 + 1;
    } while (*pcVar1 != '\0');
    uVar4 = ~uVar4;
    param_2 = param_2 + -uVar4;
    pcVar6 = (char *)0x3770;
    for (uVar5 = uVar4 >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
      pcVar2 = pcVar6;
      pcVar6 = pcVar6 + 2;
      pcVar1 = param_2;
      param_2 = param_2 + 2;
      *(undefined2 *)pcVar2 = *(undefined2 *)pcVar1;
    }
    for (uVar4 = (uint)((uVar4 & 1) != 0); uVar4 != 0; uVar4 = uVar4 - 1) {
      pcVar2 = pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar1 = param_2;
      param_2 = param_2 + 1;
      *pcVar2 = *pcVar1;
    }
    FUN_1088_04c8();
    pvVar3 = (void *)FUN_1088_051c();
    if (in_DX != 0 || pvVar3 != (void *)0x0) {
      pcStackY_16 = (char *)s_Options_10e8_10d0;
      uStackY_18 = 0x958;
      HMEMCPY((undefined1 *)CONCAT22(unaff_SS,local_1e),(void *)CONCAT22(in_DX,pvVar3),0x16);
      return pvVar3;
    }
    OUTPUTDEBUGSTRING(s_Unable_to_find_file_size_10e8_23af);
    OUTPUTDEBUGSTRING((void *)0x10e83770);
  }
  return (void *)0x0;
}


