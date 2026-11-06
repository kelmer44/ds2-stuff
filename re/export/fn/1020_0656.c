// FUN_1020_0656 at 1020:0656

/* WARNING: Removing unreachable block (ram,0x10200763) */

void __cdecl16far
FUN_1020_0656(undefined2 param_1,int param_2,int param_3,undefined4 param_4,int param_5,uint param_6
             )

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined2 uVar5;
  int iVar6;
  undefined2 uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined4 uVar11;
  long lVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  int iVar15;
  int iVar16;
  char *pcVar17;
  char *pcVar18;
  char *pcVar20;
  char *pcVar21;
  int iVar22;
  undefined4 uVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  int iVar19;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  iVar8 = (int)param_4;
  uVar14 = (undefined2)((ulong)param_4 >> 0x10);
  if (param_3 == 0 && param_2 == 0) {
    *(undefined2 *)(iVar8 + 4) = 0;
    *(undefined2 *)(iVar8 + 2) = 0;
  }
  else {
    uVar23 = 0x80;
    uVar13 = 0;
    uVar11 = FUN_10d0_052a(*(undefined2 *)(param_2 + 8),0,param_5,0);
    lVar12 = FUN_10d0_0490(uVar11,uVar23);
    uVar3 = (uint)(*(int *)(param_2 + 10) * param_5) >> 7;
    iVar15 = 0;
    if ((param_6 & 2) == 0) {
      uVar23 = 0x80;
      uVar11 = FUN_10d0_052a(*(int *)(param_2 + 0xc),*(int *)(param_2 + 0xc) >> 0xf,param_5,uVar13);
      iVar4 = FUN_10d0_0490(uVar11,uVar23);
    }
    else {
      uVar23 = 0x80;
      uVar25 = *(uint *)(param_2 + 0xc);
      uVar11 = FUN_10d0_052a(*(uint *)(param_2 + 8) + uVar25,
                             ((int)uVar25 >> 0xf) + (uint)CARRY2(*(uint *)(param_2 + 8),uVar25),
                             param_5,uVar13);
      iVar4 = FUN_10d0_0490(uVar11,uVar23);
      iVar4 = -iVar4;
    }
    uVar23 = 0x80;
    uVar11 = FUN_10d0_052a(*(int *)(param_2 + 0xe),*(int *)(param_2 + 0xe) >> 0xf,param_5,uVar13);
    uVar13 = FUN_10d0_0490(uVar11,uVar23);
    if ((lVar12 < 5) || ((iVar15 < 1 && ((iVar15 < 0 || (uVar3 < 5)))))) {
      lVar12 = 5;
      uVar3 = 5;
      iVar15 = 0;
    }
    iVar16 = (int)lVar12;
    uVar11 = FUN_10d0_052a(lVar12 + 0x10,uVar3,iVar15);
    uVar7 = *(undefined2 *)(param_2 + 4);
    puVar1 = (uint *)(*(int *)(param_2 + 2) + 10);
    iVar6 = (uint)uVar11 + *puVar1;
    iVar9 = (int)((ulong)uVar11 >> 0x10) + *(int *)(*(int *)(param_2 + 2) + 0xc) +
            (uint)CARRY2((uint)uVar11,*puVar1);
    uVar5 = FUN_1090_0000(iVar6);
    *(undefined2 *)(iVar8 + 2) = uVar5;
    *(undefined2 *)(iVar8 + 4) = uVar7;
    pcVar20 = (char *)CONCAT22(*(undefined2 *)(iVar8 + 2),(char *)s_Options_10e8_108c + 4);
    iVar22 = iVar6;
    iVar24 = iVar9;
    FUN_10d0_05bc();
    iVar2 = *(int *)(iVar8 + 2);
    uVar7 = *(undefined2 *)(iVar8 + 4);
    pcVar17 = (char *)CONCAT22(*(undefined2 *)(param_2 + 4),(char *)*(undefined2 *)(param_2 + 2));
    iVar26 = 0;
    uVar25 = 0;
    if ((-1 < *(int *)(iVar22 + 0xc)) &&
       ((pcVar21 = pcVar20, 0 < *(int *)(iVar22 + 0xc) || (*(int *)(iVar22 + 10) != 0)))) {
      do {
        iVar19 = (int)((ulong)pcVar17 >> 0x10);
        if ((char *)pcVar17 == (char *)0xffff) {
          iVar19 = iVar19 + 0x80;
        }
        pcVar18 = (char *)CONCAT22(iVar19,(char *)pcVar17 + 1);
        iVar19 = (int)((ulong)pcVar21 >> 0x10);
        if ((char *)pcVar21 == (char *)0xffff) {
          iVar19 = iVar19 + 0x80;
        }
        pcVar20 = (char *)CONCAT22(iVar19,(char *)pcVar21 + 1);
        *pcVar21 = *pcVar17;
        bVar10 = 0xfffe < uVar25;
        uVar25 = uVar25 + 1;
        iVar26 = iVar26 + (uint)bVar10;
        pcVar17 = pcVar18;
        pcVar21 = pcVar20;
      } while ((iVar26 < *(int *)(iVar22 + 0xc)) ||
              ((iVar26 <= *(int *)(iVar22 + 0xc) && (uVar25 < *(uint *)(iVar22 + 10)))));
    }
    *(int *)(iVar2 + 2) = iVar6;
    *(int *)(iVar2 + 4) = iVar9;
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined2 *)(iVar2 + 0x1e) = 0;
    uVar25 = iVar16 - 1U & 0xfffc;
    *(int *)(iVar2 + 0x12) = uVar25 + 4;
    *(uint *)(iVar2 + 0x14) = (uint)(0xfffb < uVar25);
    *(int *)(iVar8 + 8) = iVar16;
    *(uint *)(iVar2 + 0x16) = uVar3;
    *(int *)(iVar2 + 0x18) = iVar15;
    *(uint *)(iVar8 + 10) = uVar3;
    *(int *)(iVar8 + 0xc) = iVar4;
    *(undefined2 *)(iVar8 + 0xe) = uVar13;
    if (param_6 == 0) {
      uVar11 = CONCAT22(uVar7,iVar2 + 0xe);
      uVar14 = *(undefined2 *)(param_2 + 8);
      uVar13 = *(undefined2 *)(param_2 + 10);
      uVar5 = 0;
    }
    else if (param_6 == 1) {
      uVar11 = CONCAT22(uVar7,iVar2 + 0xe);
      uVar14 = *(undefined2 *)(param_2 + 8);
      uVar13 = *(undefined2 *)(param_2 + 10);
      uVar5 = 2;
    }
    else if (param_6 == 2) {
      uVar11 = CONCAT22(uVar7,iVar2 + 0xe);
      uVar14 = *(undefined2 *)(param_2 + 8);
      uVar13 = *(undefined2 *)(param_2 + 10);
      uVar5 = 1;
    }
    else {
      if (param_6 != 3) {
        return;
      }
      uVar11 = CONCAT22(uVar7,iVar2 + 0xe);
      uVar14 = *(undefined2 *)(param_2 + 8);
      uVar13 = *(undefined2 *)(param_2 + 10);
      uVar5 = 3;
    }
    FUN_10c0_0000(uVar5,uVar13,uVar14,0,0,uVar3,iVar16,iVar2 + 0x1c,uVar7,CONCAT22(iVar16,uVar3),0,
                  pcVar20,uVar11);
  }
  return;
}


