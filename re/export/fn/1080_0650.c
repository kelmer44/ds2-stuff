// FUN_1080_0650 at 1080:0650

undefined2 __cdecl16far
FUN_1080_0650(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6,undefined2 param_7)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int in_DX;
  char *pcVar6;
  char *pcVar7;
  undefined2 uVar8;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  uVar8 = 1;
  FUN_1080_0000((undefined2 *)&DAT_10e8_343e,param_6,param_7);
  pcVar6 = (char *)&DAT_10e8_20d2;
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
    uVar8 = 0;
    FUN_1098_0000((char *)s_load_windows_palette_10e8_20ef,
                  (char *)s_NULL_pointer_assignment_10e8_20d7,0);
  }
  else {
    FUN_1080_00ee(param_3,iVar4,in_DX);
    FUN_1090_0068(iVar4,in_DX);
  }
  return uVar8;
}


