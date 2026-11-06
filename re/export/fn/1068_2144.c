// FUN_1068_2144 at 1068:2144

void __cdecl16far FUN_1068_2144(undefined4 param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  undefined2 uVar15;
  int iVar16;
  int iStack_a;
  int iVar17;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  uVar15 = (undefined2)((ulong)param_1 >> 0x10);
  iVar12 = (int)param_1;
  piVar13 = (int *)*(int *)(iVar12 + 0x216);
  iVar16 = *(int *)(iVar12 + 0x218);
  if (iVar16 != 0 || piVar13 != (int *)0x0) {
    do {
      uVar3 = piVar13[2];
      uVar9 = piVar13[3];
      uVar8 = uVar9 | uVar3;
      piVar14 = piVar13;
      if (uVar8 != 0) {
        do {
          iVar16 = *(int *)(iVar12 + 0x218);
          piVar14 = (int *)*(undefined2 *)(iVar12 + 0x216);
          uVar8 = uVar9;
          uVar4 = FUN_1068_20dc(piVar14,iVar16,uVar3 + 0x2e);
          *(undefined2 *)(uVar3 + 0x2a) = uVar4;
          *(uint *)(uVar3 + 0x2c) = uVar9;
          puVar1 = (uint *)(uVar3 + 0x42);
          uVar9 = *(uint *)(uVar3 + 0x44);
          uVar3 = *puVar1;
        } while (uVar9 != 0 || *puVar1 != 0);
        uVar8 = 0;
      }
      if ((char)piVar14[0x10] != '\0') {
        iVar16 = *(int *)(iVar12 + 0x218);
        iVar5 = FUN_1068_20dc(*(undefined2 *)(iVar12 + 0x216),iVar16,piVar14 + 0x10);
        piVar14[0x1b] = iVar5;
        piVar14[0x1c] = uVar8;
      }
      iVar5 = *piVar14;
      iStack_a = piVar14[1];
      if (iStack_a != 0 || iVar5 != 0) {
        do {
          iVar6 = *(int *)(iVar5 + 0x15);
          iVar10 = *(int *)(iVar5 + 0x17);
          if (*(int *)(iVar5 + 0x17) != 0 || iVar6 != 0) {
            do {
              iStack_a = iVar10;
              iVar5 = iVar6 + 0x2e;
              iVar16 = *(int *)(iVar12 + 0x218);
              piVar14 = (int *)*(undefined2 *)(iVar12 + 0x216);
              iVar10 = iStack_a;
              iVar11 = iStack_a;
              uVar4 = FUN_1068_20dc();
              *(undefined2 *)(iVar6 + 0x2a) = uVar4;
              *(int *)(iVar6 + 0x2c) = iVar10;
              piVar13 = (int *)(iVar6 + 0x42);
              piVar2 = (int *)(iVar6 + 0x44);
              iVar6 = *piVar13;
              iVar10 = *piVar2;
            } while (*piVar2 != 0 || *piVar13 != 0);
          }
          iVar6 = *(int *)(iVar5 + 0x19);
          iVar10 = iVar16;
          iVar11 = *(int *)(iVar5 + 0x1b);
          if (*(int *)(iVar5 + 0x1b) != 0 || iVar6 != 0) {
            do {
              iStack_a = iVar11;
              iVar5 = iVar6 + 0x2e;
              iVar16 = piVar14[1];
              iVar11 = iStack_a;
              iVar7 = iStack_a;
              uVar4 = FUN_1068_2074(*piVar14);
              *(undefined2 *)(iVar6 + 0x2a) = uVar4;
              *(int *)(iVar6 + 0x2c) = iVar11;
              piVar13 = (int *)(iVar6 + 0x42);
              piVar2 = (int *)(iVar6 + 0x44);
              iVar6 = *piVar13;
              iVar10 = iVar16;
              iVar11 = *piVar2;
            } while (*piVar2 != 0 || *piVar13 != 0);
          }
          iVar6 = *(int *)(iVar5 + 0x1d);
          iVar10 = iVar16;
          iVar11 = *(int *)(iVar5 + 0x1f);
          if (*(int *)(iVar5 + 0x1f) != 0 || iVar6 != 0) {
            do {
              iStack_a = iVar11;
              iVar5 = iVar6 + 0x2e;
              iVar16 = piVar14[1];
              iVar11 = iStack_a;
              iVar7 = iStack_a;
              uVar4 = FUN_1068_2074(*piVar14);
              *(undefined2 *)(iVar6 + 0x2a) = uVar4;
              *(int *)(iVar6 + 0x2c) = iVar11;
              piVar13 = (int *)(iVar6 + 0x42);
              piVar2 = (int *)(iVar6 + 0x44);
              iVar6 = *piVar13;
              iVar10 = iVar16;
              iVar11 = *piVar2;
            } while (*piVar2 != 0 || *piVar13 != 0);
          }
          iVar6 = *(int *)(iVar5 + 0x21);
          iVar10 = iVar16;
          iVar11 = *(int *)(iVar5 + 0x23);
          iVar7 = iVar5;
          if (*(int *)(iVar5 + 0x23) != 0 || iVar6 != 0) {
            do {
              iStack_a = iVar11;
              iVar7 = iVar6 + 0x2e;
              iVar16 = piVar14[1];
              iVar5 = iStack_a;
              iVar17 = iStack_a;
              uVar4 = FUN_1068_2074(*piVar14);
              *(undefined2 *)(iVar6 + 0x2a) = uVar4;
              *(int *)(iVar6 + 0x2c) = iVar5;
              piVar13 = (int *)(iVar6 + 0x42);
              piVar2 = (int *)(iVar6 + 0x44);
              iVar6 = *piVar13;
              iVar10 = iVar16;
              iVar11 = *piVar2;
            } while (*piVar2 != 0 || *piVar13 != 0);
          }
          iVar5 = *(int *)(iVar7 + 0x3f);
          iStack_a = *(int *)(iVar7 + 0x41);
        } while (iStack_a != 0 || iVar5 != 0);
      }
      piVar13 = (int *)piVar14[0x1d];
      iVar16 = piVar14[0x1e];
    } while (iVar16 != 0 || piVar13 != (int *)0x0);
  }
  return;
}


