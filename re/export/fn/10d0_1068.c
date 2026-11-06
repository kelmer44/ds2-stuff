// FUN_10d0_1068 at 10d0:1068

void FUN_10d0_1068(undefined2 param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  
  if (((DAT_10e8_293c <= param_2) && (DAT_10e8_2a30 != 0)) && (param_2 < 3)) goto LAB_10d0_1139;
  if ((DAT_10e8_2a58 != 0) && ((param_4 & 0x8000) != 0)) {
    if (param_5 == 0) goto LAB_10d0_1139;
    uVar2 = 0;
    if ((DAT_10d0_0010 & 1) == 0) {
      pcVar1 = (code *)swi(0x21);
      uVar3 = (*pcVar1)();
    }
    else {
      uVar3 = DOS3CALL((char *)s_Options_10e8_10d0);
    }
    if ((bool)uVar2) goto LAB_10d0_1139;
    if ((param_5 & 2) == 0) {
      if ((int)((int)((ulong)uVar3 >> 0x10) + param_4 + (uint)CARRY2((uint)uVar3,param_3)) < 0)
      goto LAB_10d0_1139;
    }
    else {
      if ((DAT_10d0_0010 & 1) == 0) {
        pcVar1 = (code *)swi(0x21);
        uVar3 = (*pcVar1)(uVar3);
      }
      else {
        uVar3 = DOS3CALL((char *)s_Options_10e8_10d0);
      }
      if ((int)((int)((ulong)uVar3 >> 0x10) + param_4 + (uint)CARRY2((uint)uVar3,param_3)) < 0) {
        if ((DAT_10d0_0010 & 1) == 0) {
          pcVar1 = (code *)swi(0x21);
          (*pcVar1)();
        }
        else {
          DOS3CALL((char *)s_Options_10e8_10d0);
        }
        goto LAB_10d0_1139;
      }
    }
  }
  uVar2 = 0;
  if ((DAT_10d0_0010 & 1) == 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  }
  else {
    DOS3CALL();
  }
  if (!(bool)uVar2) {
    *(byte *)(param_2 + 0x2942) = *(byte *)(param_2 + 0x2942) & 0xfd;
  }
LAB_10d0_1139:
  FUN_10d0_092b();
  return;
}


