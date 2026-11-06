// FUN_10d0_113c at 10d0:113c

/* WARNING: Unable to track spacebase fully for stack */

uint FUN_10d0_113c(undefined2 param_1,uint param_2,char *param_3,int param_4)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  undefined2 unaff_SS;
  undefined1 uVar10;
  bool bVar11;
  char *in_stack_0000ffe2;
  
  uVar5 = DAT_10e8_293c;
  uVar4 = DAT_10e8_293c;
  if ((DAT_10e8_2a30 != 0) && (uVar4 = DAT_10e8_2940, param_2 < 3)) {
    param_2 = DAT_10e8_293c;
  }
  if (uVar4 <= param_2) {
LAB_10d0_1170:
    uVar5 = FUN_10d0_092b();
    return uVar5;
  }
  uVar4 = param_2;
  if ((*(byte *)(param_2 + 0x2942) & 0x20) != 0) {
    uVar10 = 0;
    if ((DAT_10d0_0010 & 1) == 0) {
      pcVar2 = (code *)swi(0x21);
      (*pcVar2)();
    }
    else {
      DOS3CALL();
    }
    if ((bool)uVar10) goto LAB_10d0_1170;
  }
  if ((*(byte *)(uVar4 + 0x2942) & 0x80) != 0) {
    bVar11 = true;
    iVar8 = param_4;
    pcVar7 = param_3;
    if (param_4 != 0) {
      do {
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar1 = pcVar7;
        pcVar7 = pcVar7 + 1;
        bVar11 = *pcVar1 == '\n';
      } while (!bVar11);
      if (!bVar11) goto LAB_10d0_120d;
      pcVar9 = param_3;
      uVar6 = FUN_10d0_12ec();
      if (uVar6 < 0xa9) {
        FUN_10d0_029e();
        if ((int)pcVar7 - (int)pcVar9 != 0) {
          uVar10 = param_2 < uVar5;
          if ((bool)uVar10) {
            uVar10 = 0;
            if ((DAT_10d0_0010 & 1) == 0) {
              pcVar2 = (code *)swi(0x21);
              pcVar7 = (char *)(*pcVar2)(iVar8);
            }
            else {
              in_stack_0000ffe2 = (char *)s_Options_10e8_10d0;
              pcVar7 = (char *)DOS3CALL((char *)s_Options_10e8_10d0,(int)pcVar7 - (int)pcVar9);
            }
          }
          else {
            in_stack_0000ffe2 = (char *)s_Saved_02d_10e8_1229 + 2;
            pcVar7 = (char *)FUN_10d0_0f7b();
          }
          if (((bool)uVar10) || (pcVar7 < in_stack_0000ffe2)) {
            uVar5 = FUN_10d0_092b();
            return uVar5;
          }
        }
        return uVar4;
      }
      pcVar9 = &stack0xffea;
      pcVar7 = &stack0xffec;
      do {
        pcVar1 = param_3;
        param_3 = param_3 + 1;
        cVar3 = *pcVar1;
        if (cVar3 == '\n') {
          cVar3 = '\r';
          if (pcVar7 == pcVar9) {
            cVar3 = FUN_10d0_1216();
          }
          pcVar1 = pcVar7;
          pcVar7 = pcVar7 + 1;
          *pcVar1 = cVar3;
          cVar3 = '\n';
        }
        if (pcVar7 == pcVar9) {
          cVar3 = FUN_10d0_1216();
        }
        pcVar1 = pcVar7;
        pcVar7 = pcVar7 + 1;
        *pcVar1 = cVar3;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      FUN_10d0_1216();
    }
    uVar5 = FUN_10d0_127a();
    return uVar5;
  }
LAB_10d0_120d:
  uVar5 = FUN_10d0_1288();
  return uVar5;
}


