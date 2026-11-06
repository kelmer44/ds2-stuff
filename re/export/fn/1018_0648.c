// FUN_1018_0648 at 1018:0648

void __cdecl16far FUN_1018_0648(ushort param_1)

{
  int *piVar1;
  ushort uVar2;
  undefined2 *puVar3;
  ushort a1;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  uint *puVar8;
  char *pcVar9;
  char *pcVar10;
  undefined2 unaff_SS;
  undefined1 local_aa [136];
  undefined1 local_22 [8];
  undefined2 uStackY_1a;
  char *pcStackY_18;
  undefined2 uVar11;
  ushort uVar12;
  char *a0;
  uint uVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  int *piVar16;
  int *piVar17;
  
  FUN_10d0_029e();
  _WSPRINTF((undefined1 *)CONCAT22(unaff_SS,local_22),(void *)0x10e81248);
  uVar2 = OPENFILE((undefined1 *)CONCAT22(unaff_SS,local_22),
                   (undefined1 *)CONCAT22(unaff_SS,local_aa),0);
  uVar12 = 0;
  _LLSEEK(uVar2,0,2);
  uVar13 = 0;
  _LLSEEK(uVar12,0,0);
  iVar5 = uVar12 + (0xffef < uVar13);
  uVar2 = 0x13a8;
  puVar3 = (undefined2 *)FUN_1090_0000();
  _HREAD(uVar2,(undefined2 *)CONCAT22(iVar5,puVar3),CONCAT22(uVar2,iVar5));
  pcStackY_18 = (char *)0x6ec;
  FUN_1018_05c0();
  DAT_10e8_0044 = 0;
  DAT_10e8_036e = 1;
  FUN_1048_21b0();
  FUN_1050_035a();
  DAT_10e8_007c = *(undefined2 *)CONCAT22(iVar5,puVar3);
  iVar5 = iVar5 + (-(uint)((undefined2 *)0xfffd < puVar3) & 0x80);
  DAT_10e8_0086 = puVar3[1];
  iVar5 = iVar5 + (-(uint)((undefined2 *)0xfffd < puVar3 + 1) & 0x80);
  puVar14 = (undefined2 *)CONCAT22(iVar5,puVar3 + 2);
  if ((undefined2 *)0xfffd < puVar3 + 2) {
    iVar5 = iVar5 + 0x80;
  }
  puVar15 = (undefined2 *)CONCAT22(iVar5,puVar3 + 3);
  DAT_10e8_0088 = *puVar14;
  if ((undefined2 *)0xfffd < puVar3 + 3) {
    iVar5 = iVar5 + 0x80;
  }
  DAT_10e8_6112 = *puVar15;
  iVar5 = iVar5 + (-(uint)((undefined2 *)0xfff7 < puVar3 + 4) & 0x80);
  DAT_10e8_770e = *(int *)CONCAT22(iVar5,puVar3 + 8);
  iVar5 = iVar5 + (-(uint)((int *)0xfffd < puVar3 + 8) & 0x80);
  DAT_10e8_0046 = puVar3[9];
  iVar5 = iVar5 + (-(uint)((undefined2 *)0xfffd < puVar3 + 9) & 0x80);
  piVar16 = (int *)CONCAT22(iVar5 + (-(uint)((int *)0xfffd < puVar3 + 10) & 0x80),puVar3 + 0xb);
  DAT_10e8_3cae = DAT_10e8_0086;
  DAT_10e8_3cb0 = DAT_10e8_0088;
  DAT_10e8_8e3c = DAT_10e8_6112;
  DAT_10e8_9b98 = DAT_10e8_0088;
  DAT_10e8_9b9a = DAT_10e8_0086;
  if (puVar3[10] != -0x526) {
    FUN_1098_0248();
  }
  uVar12 = GETDC(param_1);
  FUN_1048_2b8e();
  pcStackY_18 = (char *)s_Options_10e8_1047 + 1;
  uStackY_1a = 0x832;
  PATBLT(uVar12,0,0,0x280,0x1e0,0x42);
  uVar2 = uVar12;
  a1 = FUN_1080_049a();
  SELECTPALETTE(uVar2,a1,0);
  a0 = (char *)0x13a8;
  RELEASEDC(param_1,uVar12);
  DAT_10e8_097c = 0xffff;
  DAT_10e8_007e = 0x7fff;
  DAT_10e8_0080 = 4;
  if (0 < DAT_10e8_5cda) {
    piVar7 = (int *)&DAT_10e8_5e14;
    iVar5 = DAT_10e8_5cda;
    piVar17 = piVar16;
    do {
      iVar4 = (int)((ulong)piVar17 >> 0x10);
      if ((int *)0xfffd < (int *)piVar17) {
        iVar4 = iVar4 + 0x80;
      }
      piVar16 = (int *)CONCAT22(iVar4,(int *)piVar17 + 1);
      *piVar7 = *piVar17;
      piVar7 = piVar7 + 1;
      iVar5 = iVar5 + -1;
      piVar17 = piVar16;
    } while (iVar5 != 0);
  }
  puVar8 = (uint *)&DAT_10e8_6116;
  iVar5 = 0x32;
  pcVar9 = (char *)0x13a8;
  do {
    pcVar10 = pcVar9;
    if (puVar8[1] != 0 || *puVar8 != 0) {
      pcVar10 = (char *)s_Options_10e8_108c + 4;
      FUN_1090_0068();
      a0 = pcVar9;
    }
    iVar4 = (int)((ulong)piVar16 >> 0x10);
    if ((int *)0xfffd < (int *)piVar16) {
      iVar4 = iVar4 + 0x80;
    }
    piVar17 = (int *)CONCAT22(iVar4,(int *)piVar16 + 1);
    pcVar6 = (char *)0x0;
    *puVar8 = (uint)(*piVar16 != 0);
    puVar8[1] = 0;
    puVar8 = puVar8 + 2;
    iVar5 = iVar5 + -1;
    pcVar9 = pcVar10;
    piVar16 = piVar17;
  } while (iVar5 != 0);
  piVar7 = (int *)&DAT_10e8_6116;
  iVar5 = 0x32;
  do {
    if (piVar7[1] != 0 || *piVar7 != 0) {
      iVar4 = FUN_1090_0000();
      *piVar7 = iVar4;
      piVar7[1] = (int)pcVar6;
      **(int **)piVar7 = *piVar17;
      piVar1 = (int *)piVar17 + 1;
      pcVar6 = (char *)((int)((ulong)piVar17 >> 0x10) +
                       (-(uint)((int *)0xfffd < (int *)piVar17) & 0x80));
      pcVar10 = (char *)0x13a8;
      pcStackY_18 = (char *)0x935;
      a0 = pcVar6;
      HMEMCPY((void *)CONCAT22(piVar7[1],(void *)(*piVar7 + 2)),(int *)CONCAT22(pcVar6,piVar1),
              (ulong)(uint)(**(int **)piVar7 * 2));
      piVar17 = (int *)CONCAT22(pcVar6,piVar1 + **(int **)piVar7);
    }
    piVar7 = piVar7 + 2;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  if (*piVar17 != -0x526) {
    FUN_1098_0248();
    a0 = pcVar10;
  }
  _LCLOSE((ushort)a0);
  FUN_1090_0068();
  DESTROYCURSOR(DAT_10e8_8722);
  uVar11 = 0x13a8;
  DAT_10e8_8722 = LOADCURSOR(DAT_10e8_9556,s_cUseIt_10e8_12db);
  DAT_10e8_9790 = DAT_10e8_8722;
  if (DAT_10e8_770e == 1) {
    SETCURSOR(DAT_10e8_8722);
  }
  DAT_10e8_036e = uVar11;
  DAT_10e8_0044 = 1;
  FUN_1038_1ade();
  return;
}


