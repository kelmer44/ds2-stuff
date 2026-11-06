// FUN_1088_06b4 at 1088:06b4

/* WARNING: Type propagation algorithm not settling */

int __cdecl16far FUN_1088_06b4(int param_1,undefined2 param_2,char *param_3)

{
  char *pcVar1;
  char *pcVar2;
  void *pvVar3;
  short sVar4;
  ushort a0;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int in_DX;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  undefined2 unaff_SS;
  long lVar11;
  undefined1 local_aa [136];
  int local_22 [5];
  undefined2 uStackY_18;
  char *pcStackY_16;
  undefined1 *puVar12;
  undefined2 uVar13;
  
  FUN_10d0_029e();
  uVar6 = 0xffff;
  pcVar9 = param_3;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar1 = pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (*pcVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar9 = pcVar9 + -uVar6;
  pcVar10 = (char *)0x3662;
  for (uVar7 = uVar6 >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
    pcVar2 = pcVar10;
    pcVar10 = pcVar10 + 2;
    pcVar1 = pcVar9;
    pcVar9 = pcVar9 + 2;
    *(undefined2 *)pcVar2 = *(undefined2 *)pcVar1;
  }
  for (uVar6 = (uint)((uVar6 & 1) != 0); uVar6 != 0; uVar6 = uVar6 - 1) {
    pcVar2 = pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar1 = pcVar9;
    pcVar9 = pcVar9 + 1;
    *pcVar2 = *pcVar1;
  }
  FUN_1088_04c8();
  pvVar3 = (void *)FUN_1088_051c();
  if (in_DX == 0 && pvVar3 == (void *)0x0) {
    sVar4 = LSTRCMPI((char *)CONCAT22((char *)s_Options_10e8_10e2 + 6,param_3 + 7),
                     (void *)0x10e82315);
    if (sVar4 == 0) {
      return 0;
    }
  }
  else {
    pcStackY_16 = (char *)s_Options_10e8_10d0;
    uStackY_18 = 0x74f;
    HMEMCPY((int *)CONCAT22(unaff_SS,local_22),(void *)CONCAT22(in_DX,pvVar3),0x16);
    LSTRCPY((void *)0x10e83670,
            (void *)CONCAT22(param_2,(void *)(param_1 + (uint)(byte)((char *)
                                                  s_n__Reinicie_Windows_y_Dark_Seed_I_10e8_1275 +
                                                  0x15)[param_1 + local_22[0]] * 0x80 + 10)));
    LSTRCAT((void *)0x10e83670,
            (void *)CONCAT22(param_2,(void *)(local_22[0] * 0x20 + param_1 + 0x28a)));
    if (*(int *)(param_1 + local_22[0] * 4 + 0x130c) != 0 ||
        *(int *)(param_1 + local_22[0] * 4 + 0x130a) != 0) {
      GETSELECTORBASE(*(ushort *)(param_1 + local_22[0] * 4 + 0x130c));
      FUN_1088_062c();
      return 0;
    }
    puVar12 = local_aa;
    pcStackY_16 = (char *)0x801;
    a0 = OPENFILE((void *)0x10e83670,(undefined1 *)CONCAT22(unaff_SS,puVar12),0);
    if (a0 != 0xffff) {
      uVar13 = 0;
      lVar11 = _LLSEEK(a0,(long)CONCAT22(unaff_SS,puVar12),0);
      iVar8 = (int)((ulong)lVar11 >> 0x10);
      if (lVar11 == CONCAT22(puVar12,uVar13)) {
        iVar5 = FUN_1090_0000();
        if (iVar8 == 0 && iVar5 == 0) {
          _LCLOSE(a0);
          FUN_1098_0248();
          return 0;
        }
        pcStackY_16 = (char *)0x87b;
        FUN_1088_0000();
        _LCLOSE(a0);
        return iVar5;
      }
      _LCLOSE(a0);
    }
  }
  FUN_1098_0000();
  return 0;
}


