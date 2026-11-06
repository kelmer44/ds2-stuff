// FUN_1050_035a at 1050:035a

void __cdecl16far FUN_1050_035a(int param_1,char *param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  char *pcVar3;
  char *pcVar4;
  int iStackY_10;
  char *pcStackY_e;
  int iVar5;
  int iVar6;
  
  pcVar3 = (char *)s_Options_10e8_10d0;
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  DAT_10e8_008e = 0;
  DAT_10e8_008c = 0;
  if (param_2 == (char *)0x0 && param_1 == 0) {
    DAT_10e8_008e = 0;
    DAT_10e8_008c = 0;
    return;
  }
  pcStackY_e = param_2;
  iStackY_10 = param_1;
  do {
    iVar5 = *(int *)(iStackY_10 + 0x12);
    puVar2 = (undefined2 *)*(int *)(iStackY_10 + 0x10);
    pcVar4 = pcVar3;
    if (iVar5 != 0 || (undefined2 *)*(int *)(iStackY_10 + 0x10) != (undefined2 *)0x0) {
      do {
        iVar6 = iVar5;
        if (puVar2[9] != 0 || puVar2[8] != 0) {
          FUN_1090_0068(puVar2[8],puVar2[9]);
          iVar6 = iVar5;
        }
        FUN_1060_07a8(*puVar2,puVar2[1]);
        if (*(int *)((int)puVar2 + 0x91) != 0 || *(int *)((int)puVar2 + 0x8f) != 0) {
          FUN_1050_02de(*(undefined2 *)((int)puVar2 + 0x8f),*(undefined2 *)((int)puVar2 + 0x91));
        }
        puVar1 = (undefined2 *)*(undefined2 *)((int)puVar2 + 0x93);
        iVar5 = *(int *)((int)puVar2 + 0x95);
        pcVar4 = (char *)s_Options_10e8_108c + 4;
        iStackY_10 = 0x408;
        pcStackY_e = (char *)s_ReadSpeed_10e8_105f + 1;
        FUN_1090_0068(puVar2,iVar6);
        puVar2 = puVar1;
      } while (iVar5 != 0 || puVar1 != (undefined2 *)0x0);
    }
    iVar5 = *(int *)(iStackY_10 + 0x16);
    puVar2 = (undefined2 *)*(int *)(iStackY_10 + 0x14);
    if (iVar5 != 0 || (undefined2 *)*(int *)(iStackY_10 + 0x14) != (undefined2 *)0x0) {
      do {
        iVar6 = iVar5;
        if (puVar2[9] != 0 || puVar2[8] != 0) {
          FUN_1090_0068(puVar2[8],puVar2[9]);
          iVar6 = iVar5;
        }
        FUN_1060_07a8(*puVar2,puVar2[1]);
        if (*(int *)((int)puVar2 + 0x91) != 0 || *(int *)((int)puVar2 + 0x8f) != 0) {
          FUN_1050_02de(*(undefined2 *)((int)puVar2 + 0x8f),*(undefined2 *)((int)puVar2 + 0x91));
        }
        puVar1 = (undefined2 *)*(undefined2 *)((int)puVar2 + 0x93);
        iVar5 = *(int *)((int)puVar2 + 0x95);
        pcVar4 = (char *)s_Options_10e8_108c + 4;
        iStackY_10 = 0x492;
        pcStackY_e = (char *)s_ReadSpeed_10e8_105f + 1;
        FUN_1090_0068(puVar2,iVar6);
        puVar2 = puVar1;
      } while (iVar5 != 0 || puVar1 != (undefined2 *)0x0);
    }
    iVar5 = *(int *)(iStackY_10 + 0x1a);
    puVar2 = (undefined2 *)*(int *)(iStackY_10 + 0x18);
    if (iVar5 != 0 || (undefined2 *)*(int *)(iStackY_10 + 0x18) != (undefined2 *)0x0) {
      do {
        iVar6 = iVar5;
        if (puVar2[9] != 0 || puVar2[8] != 0) {
          FUN_1090_0068(puVar2[8],puVar2[9]);
          iVar6 = iVar5;
        }
        FUN_1060_07a8(*puVar2,puVar2[1]);
        if (*(int *)((int)puVar2 + 0x91) != 0 || *(int *)((int)puVar2 + 0x8f) != 0) {
          FUN_1050_02de(*(undefined2 *)((int)puVar2 + 0x8f),*(undefined2 *)((int)puVar2 + 0x91));
        }
        puVar1 = (undefined2 *)*(undefined2 *)((int)puVar2 + 0x93);
        iVar5 = *(int *)((int)puVar2 + 0x95);
        pcVar4 = (char *)s_Options_10e8_108c + 4;
        iStackY_10 = 0x51c;
        pcStackY_e = (char *)s_ReadSpeed_10e8_105f + 1;
        FUN_1090_0068(puVar2,iVar6);
        puVar2 = puVar1;
      } while (iVar5 != 0 || puVar1 != (undefined2 *)0x0);
    }
    iVar5 = iStackY_10;
    pcVar3 = (char *)s_Options_10e8_108c + 4;
    iStackY_10 = 0x54a;
    FUN_1090_0068(iVar5,pcStackY_e);
    pcStackY_e = pcVar4;
  } while( true );
}


