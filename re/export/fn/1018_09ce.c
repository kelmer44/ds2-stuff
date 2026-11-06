// FUN_1018_09ce at 1018:09ce

void __cdecl16far FUN_1018_09ce(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  ulong uVar3;
  char *pcVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  undefined2 unaff_SS;
  bool bVar12;
  undefined1 local_ae [136];
  undefined1 local_26 [14];
  undefined2 uStackY_18;
  char *pcStackY_16;
  char *pcStackY_14;
  undefined2 *puVar13;
  int iVar14;
  
  FUN_10d0_029e();
  pcStackY_14 = (char *)s_Options_10e8_10d0;
  pcStackY_16 = (char *)0x9f7;
  _WSPRINTF((undefined1 *)CONCAT22(unaff_SS,local_26),(void *)0x10e812e2);
  pcStackY_14 = (char *)0x13a8;
  pcStackY_16 = (char *)0xa0d;
  pcStackY_16 = (char *)OPENFILE((undefined1 *)CONCAT22(unaff_SS,local_26),
                                 (undefined1 *)CONCAT22(unaff_SS,local_ae),0x1001);
  pcVar4 = (char *)s_cLookAt_10e8_140c + DAT_10e8_5cda;
  iVar6 = ((int)pcVar4 >> 0xf) * 2 + (uint)CARRY2((uint)pcVar4,(uint)pcVar4);
  puVar5 = (undefined2 *)FUN_1090_0000();
  pcVar4 = pcStackY_16;
  DAT_10e8_036e = 1;
  *puVar5 = DAT_10e8_007c;
  iVar7 = iVar6 + (-(uint)((undefined2 *)0xfffd < puVar5) & 0x80);
  puVar1 = (undefined2 *)CONCAT22(iVar7,puVar5 + 1);
  if ((undefined2 *)0xfffd < puVar5 + 1) {
    iVar7 = iVar7 + 0x80;
  }
  *puVar1 = DAT_10e8_3cae;
  puVar1 = (undefined2 *)CONCAT22(iVar7,puVar5 + 2);
  if ((undefined2 *)0xfffd < puVar5 + 2) {
    iVar7 = iVar7 + 0x80;
  }
  *puVar1 = DAT_10e8_3cb0;
  puVar1 = (undefined2 *)CONCAT22(iVar7,puVar5 + 3);
  if ((undefined2 *)0xfffd < puVar5 + 3) {
    iVar7 = iVar7 + 0x80;
  }
  *puVar1 = DAT_10e8_8e3c;
  iVar7 = iVar7 + (-(uint)((undefined2 *)0xfff7 < puVar5 + 4) & 0x80);
  *(undefined2 *)CONCAT22(iVar7,puVar5 + 8) = DAT_10e8_770e;
  iVar7 = iVar7 + (-(uint)((undefined2 *)0xfffd < puVar5 + 8) & 0x80);
  puVar5[9] = DAT_10e8_0046;
  iVar7 = iVar7 + (-(uint)((undefined2 *)0xfffd < puVar5 + 9) & 0x80);
  puVar5[10] = 0xfada;
  puVar13 = puVar5 + 0xb;
  iVar7 = iVar7 + (-(uint)((undefined2 *)0xfffd < puVar5 + 10) & 0x80);
  if (0 < DAT_10e8_5cda) {
    puVar8 = (undefined2 *)&DAT_10e8_5e14;
    iVar11 = 0;
    do {
      puVar1 = puVar8;
      puVar8 = puVar8 + 1;
      puVar2 = (undefined2 *)CONCAT22(iVar7,puVar13);
      bVar12 = (undefined2 *)0xfffd < puVar13;
      puVar13 = puVar13 + 1;
      if (bVar12) {
        iVar7 = iVar7 + 0x80;
      }
      *puVar2 = *puVar1;
      iVar11 = iVar11 + 1;
    } while (iVar11 < DAT_10e8_5cda);
  }
  piVar9 = (int *)&DAT_10e8_6116;
  iVar11 = 0x32;
  do {
    if (piVar9[1] == 0 && *piVar9 == 0) {
      puVar1 = (undefined2 *)CONCAT22(iVar7,puVar13);
      if ((undefined2 *)0xfffd < puVar13) {
        iVar7 = iVar7 + 0x80;
      }
      *puVar1 = 0;
    }
    else {
      puVar1 = (undefined2 *)CONCAT22(iVar7,puVar13);
      if ((undefined2 *)0xfffd < puVar13) {
        iVar7 = iVar7 + 0x80;
      }
      *puVar1 = 1;
    }
    puVar13 = puVar13 + 1;
    piVar9 = piVar9 + 2;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  piVar9 = (int *)&DAT_10e8_6116;
  iVar11 = 0x32;
  do {
    if ((piVar9[1] != 0 || *piVar9 != 0) &&
       (iVar14 = 0, **(int **)piVar9 != -1 && -1 < **(int **)piVar9 + 1)) {
      iVar10 = 0;
      do {
        puVar1 = (undefined2 *)CONCAT22(iVar7,puVar13);
        bVar12 = (undefined2 *)0xfffd < puVar13;
        puVar13 = puVar13 + 1;
        if (bVar12) {
          iVar7 = iVar7 + 0x80;
        }
        *puVar1 = *(undefined2 *)((int)*(undefined4 *)piVar9 + iVar10);
        iVar10 = iVar10 + 2;
        iVar14 = iVar14 + 1;
      } while (iVar14 < **(int **)piVar9 + 1);
    }
    piVar9 = piVar9 + 2;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  *(undefined2 *)CONCAT22(iVar7,puVar13) = 0xfada;
  pcStackY_14 = (char *)0xa83f;
  pcStackY_16 = (char *)s_Options_10e8_108c + 4;
  uStackY_18 = 0xbf0;
  uVar3 = FUN_10d0_02d2();
  pcStackY_16 = (char *)s_Options_10e8_10d0;
  uStackY_18 = 0xc08;
  pcStackY_14 = (char *)puVar5;
  FUN_1018_05c0();
  pcStackY_14 = (char *)s_Options_10e8_10d0;
  pcStackY_16 = (char *)0xc21;
  _HWRITE((ushort)pcVar4,(undefined2 *)CONCAT22(iVar6,puVar5),uVar3 & 0xfffffffe);
  _LCLOSE((ushort)pcVar4);
  FUN_1090_0068();
  DAT_10e8_036e = uStackY_18;
  return;
}


