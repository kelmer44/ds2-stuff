// FUN_1080_0800 at 1080:0800

bool __cdecl16far
FUN_1080_0800(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6,undefined4 param_7)

{
  char *pcVar1;
  char *pcVar2;
  bool bVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int in_DX;
  char *pcVar8;
  char *pcVar9;
  undefined2 uVar10;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  FUN_1080_0000((undefined2 *)&DAT_10e8_343e,param_5,param_6);
  pcVar8 = (char *)&DAT_10e8_2132;
  uVar5 = 0xffff;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar1 = pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (*pcVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar8 = pcVar8 + -uVar5;
  pcVar9 = (char *)&DAT_10e8_343e;
  iVar6 = -1;
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar1 = pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (*pcVar1 != '\0');
  pcVar9 = pcVar9 + -1;
  for (uVar7 = uVar5 >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
    pcVar2 = pcVar9;
    pcVar9 = pcVar9 + 2;
    pcVar1 = pcVar8;
    pcVar8 = pcVar8 + 2;
    *(undefined2 *)pcVar2 = *(undefined2 *)pcVar1;
  }
  for (uVar5 = (uint)((uVar5 & 1) != 0); uVar5 != 0; uVar5 = uVar5 - 1) {
    pcVar2 = pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar1 = pcVar8;
    pcVar8 = pcVar8 + 1;
    *pcVar2 = *pcVar1;
  }
  uVar4 = FUN_1098_0326(param_1,param_2,(undefined2 *)&DAT_10e8_343e);
  uVar10 = (undefined2)((ulong)param_7 >> 0x10);
  iVar6 = (int)param_7;
  *(undefined2 *)(iVar6 + 2) = uVar4;
  *(int *)(iVar6 + 4) = in_DX;
  bVar3 = *(int *)(iVar6 + 2) != 0;
  if (in_DX == 0 && !bVar3) {
    FUN_1098_0000((char *)s_load_mask_10e8_214b,(char *)s_Unable_to_load_file_10e8_2137,
                  (undefined2 *)&DAT_10e8_343e);
  }
  return in_DX != 0 || bVar3;
}


