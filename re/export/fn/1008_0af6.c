// FUN_1008_0af6 at 1008:0af6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1008_0af6(void)

{
  undefined2 *puVar1;
  int *piVar2;
  void *pvVar3;
  char *pcVar4;
  int iVar5;
  undefined2 in_DX;
  undefined2 uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  DAT_10e8_9da0 = DAT_10e8_6546;
  DAT_10e8_86b6 = (void *)FUN_1090_0000(0x428,0);
  DAT_10e8_86b8 = in_DX;
  HMEMCPY((void *)CONCAT22(in_DX,DAT_10e8_86b6),(void *)CONCAT22(DAT_10e8_1fd0,DAT_10e8_1fce),0x428)
  ;
  uVar6 = DAT_10e8_86b8;
  pvVar3 = DAT_10e8_86b6;
  piVar7 = (int *)((int)DAT_10e8_86b6 + 8);
  if ((*(int *)((int)DAT_10e8_86b6 + 10) < 0) ||
     ((*(int *)((int)DAT_10e8_86b6 + 10) < 1 && (*piVar7 == 0)))) {
    *piVar7 = -0x46;
    *(undefined2 *)((int)pvVar3 + 10) = 0xffff;
  }
  else {
    *piVar7 = 0x46;
    *(undefined2 *)((int)pvVar3 + 10) = 0;
  }
  uVar6 = DAT_10e8_86b8;
  pvVar3 = DAT_10e8_86b6;
  *(undefined2 *)((int)DAT_10e8_86b6 + 4) = 0x280;
  *(undefined2 *)((int)pvVar3 + 6) = 0;
  DAT_10e8_9f3e =
       WinGCreateBitmap_inferred
                 (DAT_10e8_9da0,(void *)CONCAT22(DAT_10e8_86b8,DAT_10e8_86b6),&DAT_10e8_2d5e);
  FUN_1080_0890(0x275e,(char *)s_ReadSpeed_10e8_10d8 + 8,0xd5c,(char *)s_Options_10e8_10e2 + 6,0xd53
                ,(char *)s_Options_10e8_10e2 + 6,0x9776,(char *)s_Options_10e8_10e2 + 6);
  FUN_1080_0ad6(0x9776,(char *)s_Options_10e8_10e2 + 6);
  FUN_1080_0890(0x275e,(char *)s_ReadSpeed_10e8_10d8 + 8,0xd65,(char *)s_Options_10e8_10e2 + 6,0xd5d
                ,(char *)s_Options_10e8_10e2 + 6,0x3bf0,(char *)s_Options_10e8_10e2 + 6);
  FUN_1080_0ad6(0x3bf0,(char *)s_Options_10e8_10e2 + 6);
  FUN_1080_0890(0x275e,(char *)s_ReadSpeed_10e8_10d8 + 8,0xd6e,(char *)s_Options_10e8_10e2 + 6,0xd66
                ,(char *)s_Options_10e8_10e2 + 6,0x5cdc,(char *)s_Options_10e8_10e2 + 6);
  FUN_1080_0ad6(0x5cdc,(char *)s_Options_10e8_10e2 + 6);
  FUN_1080_0890(0x275e,(char *)s_ReadSpeed_10e8_10d8 + 8,0xd78,(char *)s_Options_10e8_10e2 + 6,0xd6f
                ,(char *)s_Options_10e8_10e2 + 6,0x8eca,(char *)s_Options_10e8_10e2 + 6);
  FUN_1080_0ad6(0x8eca,(char *)s_Options_10e8_10e2 + 6);
  FUN_1080_0890(0x275e,(char *)s_ReadSpeed_10e8_10d8 + 8,0xd82,(char *)s_Options_10e8_10e2 + 6,0xd79
                ,(char *)s_Options_10e8_10e2 + 6,0x5cf4,(char *)s_Options_10e8_10e2 + 6);
  FUN_1080_0ad6(0x5cf4,(char *)s_Options_10e8_10e2 + 6);
  FUN_1008_0f86();
  uVar6 = DAT_10e8_6894;
  FUN_1080_0d56(DAT_10e8_86b6,DAT_10e8_86b8,DAT_10e8_2d5e,DAT_10e8_2d60,0,0,DAT_10e8_6892 + 0x13,
                DAT_10e8_6894,0,0x19a,0);
  DAT_10e8_2d62 = (void *)FUN_1090_0000(0xaf00,0);
  DAT_10e8_2d64 = uVar6;
  HMEMCPY((void *)CONCAT22(uVar6,DAT_10e8_2d62),(void *)CONCAT22(DAT_10e8_2d60,DAT_10e8_2d5e),0xaf00
         );
  pcVar11 = (char *)s_ENTRYEND__10e8_18f9 + 7;
  iVar9 = 0x32;
  do {
    iVar8 = 0x208;
    pcVar4 = pcVar11 + 0x3c;
    do {
      pcVar11 = pcVar4;
      pcVar11[(int)DAT_10e8_2d62] =
           ((undefined1 *)&DAT_10e8_93b4)[(byte)pcVar11[(int)DAT_10e8_2d5e]];
      iVar8 = iVar8 + -1;
      pcVar4 = pcVar11 + 1;
    } while (iVar8 != 0);
    pcVar11 = pcVar11 + 0x3d;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  DAT_10e8_0d24 = 0;
  DAT_10e8_0d26 = 0;
  DAT_10e8_8f98 = 0;
  pcVar11 = DAT_10e8_8728;
  iVar9 = DAT_10e8_872a;
  if (DAT_10e8_872a != 0 || DAT_10e8_8728 != (char *)0x0) {
    do {
      iVar8 = *(int *)(pcVar11 + 0x12);
      iVar10 = 0;
      piVar7 = *(int **)(pcVar11 + 0x10);
      if (iVar8 != 0 || *(int **)(pcVar11 + 0x10) != (int *)0x0) {
        do {
          if (iVar10 != 0) break;
          pcVar11 = (char *)piVar7[1];
          iVar5 = *piVar7;
          iVar10 = FUN_1060_07f6();
          iVar8 = DAT_10e8_0d26;
          if (iVar10 != 0) {
            ((undefined2 *)&DAT_10e8_8e3e)[DAT_10e8_0d26 * 2] = pcVar11;
            ((undefined2 *)&DAT_10e8_8e40)[iVar8 * 2] = iVar9;
            ((undefined2 *)&DAT_10e8_94ca)[iVar8 * 2] = piVar7;
            ((undefined2 *)&DAT_10e8_94cc)[iVar8 * 2] = iVar5;
            FUN_1080_0890(0x275e,(char *)s_ReadSpeed_10e8_10d8 + 8,0xd83,
                          (char *)s_Options_10e8_10e2 + 6,(int)piVar7 + 0x2b,iVar5,
                          DAT_10e8_0d26 * 0x18 + -0x60bc,(char *)s_Options_10e8_10e2 + 6);
            iVar5 = DAT_10e8_0d26 * 0x18 + -0x60bc;
            pcVar11 = (char *)s_Options_10e8_10e2 + 6;
            FUN_1080_0ad6();
            DAT_10e8_0d24 = DAT_10e8_0d24 + 0x32;
            DAT_10e8_0d26 = DAT_10e8_0d26 + 1;
          }
          puVar1 = (undefined2 *)((int)piVar7 + 0x93);
          iVar8 = *(int *)((int)piVar7 + 0x95);
          piVar7 = (int *)*puVar1;
        } while (iVar8 != 0 || (int *)*puVar1 != (int *)0x0);
      }
      piVar2 = (int *)(pcVar11 + 0xc);
      iVar9 = *(int *)(pcVar11 + 0xe);
      pcVar11 = (char *)*piVar2;
    } while (iVar9 != 0 || (char *)*piVar2 != (char *)0x0);
  }
  return;
}


