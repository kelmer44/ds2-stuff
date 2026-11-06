// FUN_10d0_06b2 at 10d0:06b2

/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_10d0_06b2(undefined2 param_1)

{
  char *pcVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined2 *puVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  undefined2 uVar13;
  undefined2 unaff_SS;
  undefined2 uVar14;
  void *a1;
  undefined2 in_stack_00000000;
  
  DAT_10e8_29b8 = param_1;
  param_1 = 0x6c3;
  DAT_10e8_29b6 = in_stack_00000000;
  a1 = (void *)FUN_10d0_0ff6();
  DAT_10e8_2972 = (undefined2)((ulong)a1 >> 0x10);
  DAT_10e8_2970 = (void *)a1;
  param_1 = DAT_10e8_2972;
  sVar3 = GETMODULEFILENAME(DAT_10e8_28fe,a1,0x104);
  *(undefined1 *)((int)(void *)a1 + sVar3) = 0;
  iVar6 = 1;
  iVar10 = 1;
  pcVar8 = (char *)((int)(undefined2 *)&DAT_10e8_0080 + 1);
LAB_10d0_06f0:
  do {
    do {
      pcVar1 = pcVar8;
      pcVar8 = pcVar8 + 1;
      cVar2 = *pcVar1;
    } while (cVar2 == ' ');
  } while (cVar2 == '\t');
  if ((cVar2 != '\r') && (cVar2 != '\0')) {
    iVar10 = iVar10 + 1;
    do {
      pcVar8 = pcVar8 + -1;
LAB_10d0_0703:
      pcVar1 = pcVar8;
      pcVar8 = pcVar8 + 1;
      cVar2 = *pcVar1;
      if ((cVar2 == ' ') || (cVar2 == '\t')) goto LAB_10d0_06f0;
      if ((cVar2 == '\r') || (cVar2 == '\0')) break;
      if (cVar2 == '\"') {
LAB_10d0_073c:
        do {
          while( true ) {
            while( true ) {
              pcVar1 = pcVar8;
              pcVar8 = pcVar8 + 1;
              cVar2 = *pcVar1;
              if ((cVar2 == '\r') || (cVar2 == '\0')) goto LAB_10d0_076c;
              if (cVar2 == '\"') goto LAB_10d0_0703;
              if (cVar2 == '\\') break;
              iVar6 = iVar6 + 1;
            }
            uVar4 = 0;
            do {
              pcVar12 = pcVar8;
              uVar4 = uVar4 + 1;
              pcVar8 = pcVar12 + 1;
            } while (*pcVar12 == '\\');
            if (*pcVar12 == '\"') break;
            iVar6 = iVar6 + uVar4;
            pcVar8 = pcVar12;
          }
          iVar6 = iVar6 + (uVar4 >> 1) + (uint)((uVar4 & 1) != 0);
        } while ((uVar4 & 1) != 0);
        goto LAB_10d0_0703;
      }
      if (cVar2 != '\\') {
        iVar6 = iVar6 + 1;
        goto LAB_10d0_0703;
      }
      uVar4 = 0;
      do {
        uVar4 = uVar4 + 1;
        pcVar1 = pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (*pcVar1 == '\\');
      if (*pcVar1 == '\"') {
        iVar6 = iVar6 + (uVar4 >> 1) + (uint)((uVar4 & 1) != 0);
        if ((uVar4 & 1) == 0) goto LAB_10d0_073c;
        goto LAB_10d0_0703;
      }
      iVar6 = iVar6 + uVar4;
    } while( true );
  }
LAB_10d0_076c:
  *(int *)&DAT_10e8_296a = iVar10;
  iVar11 = (iVar10 + 1) * 2;
  iVar6 = -(iVar6 + iVar10 + iVar11 + 1U & 0xfffe);
  *(undefined1 **)0x296c = &stack0x0004 + iVar6;
  pcVar12 = &stack0x0004 + iVar11 + iVar6;
  *(undefined2 *)((int)&stack0x0002 + iVar6) = unaff_SS;
  uVar13 = *(undefined2 *)((int)&stack0x0002 + iVar6);
  *(int *)(&stack0x0004 + iVar6) = (int)*(undefined4 *)&DAT_10e8_2970;
  puVar7 = (undefined2 *)(&stack0x0006 + iVar6);
  uVar14 = *(undefined2 *)&DAT_10e8_2930;
  pcVar8 = (char *)((int)(undefined2 *)&DAT_10e8_0080 + 1);
LAB_10d0_07a0:
  do {
    do {
      pcVar1 = pcVar8;
      pcVar8 = pcVar8 + 1;
      cVar2 = *pcVar1;
    } while (cVar2 == ' ');
  } while (cVar2 == '\t');
  if ((cVar2 == '\r') || (cVar2 == '\0')) {
LAB_10d0_0829:
    *(undefined2 *)((int)&stack0x0002 + iVar6) = unaff_SS;
    uVar14 = *(undefined2 *)((int)&stack0x0002 + iVar6);
    *puVar7 = 0;
                    /* WARNING: Could not recover jumptable at 0x10d0082f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)*(uint *)&DAT_10e8_29b6)();
    return;
  }
  *puVar7 = pcVar12;
  puVar7 = puVar7 + 1;
  do {
    pcVar8 = pcVar8 + -1;
LAB_10d0_07b7:
    pcVar1 = pcVar8;
    pcVar8 = pcVar8 + 1;
    cVar2 = *pcVar1;
    if ((cVar2 == ' ') || (cVar2 == '\t')) {
      pcVar1 = pcVar12;
      pcVar12 = pcVar12 + 1;
      *pcVar1 = '\0';
      goto LAB_10d0_07a0;
    }
    if ((cVar2 == '\r') || (cVar2 == '\0')) {
LAB_10d0_0826:
      *pcVar12 = '\0';
      goto LAB_10d0_0829;
    }
    pcVar9 = pcVar8;
    if (cVar2 == '\"') {
LAB_10d0_07f3:
      while( true ) {
        pcVar8 = pcVar9 + 1;
        cVar2 = *pcVar9;
        if ((cVar2 == '\r') || (cVar2 == '\0')) goto LAB_10d0_0826;
        if (cVar2 == '\"') break;
        if (cVar2 == '\\') {
          uVar4 = 0;
          do {
            pcVar9 = pcVar8;
            uVar4 = uVar4 + 1;
            pcVar8 = pcVar9 + 1;
          } while (*pcVar9 == '\\');
          if (*pcVar9 == '\"') {
            for (uVar5 = uVar4 >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
              pcVar1 = pcVar12;
              pcVar12 = pcVar12 + 1;
              *pcVar1 = '\\';
            }
            if ((uVar4 & 1) == 0) break;
            pcVar1 = pcVar12;
            pcVar12 = pcVar12 + 1;
            *pcVar1 = '\"';
            pcVar9 = pcVar8;
          }
          else {
            for (; uVar4 != 0; uVar4 = uVar4 - 1) {
              pcVar1 = pcVar12;
              pcVar12 = pcVar12 + 1;
              *pcVar1 = '\\';
            }
          }
        }
        else {
          pcVar1 = pcVar12;
          pcVar12 = pcVar12 + 1;
          *pcVar1 = cVar2;
          pcVar9 = pcVar8;
        }
      }
      goto LAB_10d0_07b7;
    }
    if (cVar2 != '\\') {
      pcVar1 = pcVar12;
      pcVar12 = pcVar12 + 1;
      *pcVar1 = cVar2;
      goto LAB_10d0_07b7;
    }
    uVar4 = 0;
    do {
      uVar4 = uVar4 + 1;
      pcVar1 = pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (*pcVar1 == '\\');
    if (*pcVar1 == '\"') {
      for (uVar5 = uVar4 >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
        pcVar1 = pcVar12;
        pcVar12 = pcVar12 + 1;
        *pcVar1 = '\\';
      }
      pcVar9 = pcVar8;
      if ((uVar4 & 1) == 0) goto LAB_10d0_07f3;
      pcVar1 = pcVar12;
      pcVar12 = pcVar12 + 1;
      *pcVar1 = '\"';
      goto LAB_10d0_07b7;
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      pcVar1 = pcVar12;
      pcVar12 = pcVar12 + 1;
      *pcVar1 = '\\';
    }
  } while( true );
}


