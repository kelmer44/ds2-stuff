// FUN_1080_071a at 1080:071a

int __cdecl16far FUN_1080_071a(undefined2 param_1,undefined2 param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int in_DX;
  char *pcVar6;
  char *pcVar7;
  undefined2 in_stack_0000000e;
  undefined2 in_stack_00000010;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  FUN_1080_0000((undefined2 *)&DAT_10e8_343e,in_stack_0000000e,in_stack_00000010);
  pcVar6 = (char *)&DAT_10e8_2104;
  uVar3 = 0xffff;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar1 = pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (*pcVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar6 = pcVar6 + -uVar3;
  pcVar7 = (char *)&DAT_10e8_343e;
  iVar4 = -1;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar1 = pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (*pcVar1 != '\0');
  pcVar7 = pcVar7 + -1;
  for (uVar5 = uVar3 >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
    pcVar2 = pcVar7;
    pcVar7 = pcVar7 + 2;
    pcVar1 = pcVar6;
    pcVar6 = pcVar6 + 2;
    *(undefined2 *)pcVar2 = *(undefined2 *)pcVar1;
  }
  for (uVar3 = (uint)((uVar3 & 1) != 0); uVar3 != 0; uVar3 = uVar3 - 1) {
    pcVar2 = pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar1 = pcVar6;
    pcVar6 = pcVar6 + 1;
    *pcVar2 = *pcVar1;
  }
  iVar4 = FUN_1098_0326(param_1,param_2,(undefined2 *)&DAT_10e8_343e);
  if (in_DX == 0 && iVar4 == 0) {
    FUN_1098_0000((char *)s_gl00load_palette_10e8_2121,(char *)s_NULL_pointer_assignment_10e8_2109,0
                  ,iVar4,in_DX);
  }
  return iVar4;
}


