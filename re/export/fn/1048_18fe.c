// FUN_1048_18fe at 1048:18fe

void __cdecl16far FUN_1048_18fe(int param_1,undefined2 param_2)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  int iVar4;
  char *pcVar5;
  undefined2 unaff_SS;
  void *pvVar6;
  undefined1 local_214 [512];
  undefined4 uStackY_14;
  undefined1 *a0;
  undefined1 *a1;
  undefined2 uVar8;
  undefined2 *puVar7;
  
  FUN_10d0_029e();
  pcVar5 = (char *)s_Options_10e8_10d0;
  a0 = (undefined1 *)ZEXT24((char *)s_Options_10e8_1069 + 4 + param_1);
LAB_1048_192c:
  a0 = (undefined1 *)CONCAT22((char *)s_MUSICEND__10e8_1933 + 2,(undefined1 *)a0);
  uVar1 = FUN_1048_0b54();
  if (uVar1 == 0x25) {
    return;
  }
  if (uVar1 != 0x15) goto code_r0x10481947;
  puVar3 = (undefined2 *)FUN_1090_0000();
  uVar2 = (undefined2)((ulong)uStackY_14 >> 0x10);
  *(undefined2 *)((int)uStackY_14 + 0x14) = puVar3;
  *(undefined2 *)((int)uStackY_14 + 0x16) = param_2;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar7 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar7 = 0;
  }
  goto LAB_1048_1995;
code_r0x10481947:
  if (uVar1 < 0x16) {
    if ((char)uVar1 == '\x01') {
      uVar8 = 0;
      iVar4 = 0x18;
      uVar2 = FUN_1090_0000();
      puVar7 = (undefined2 *)CONCAT22(uVar8,(undefined2 *)(iVar4 + 4));
      *puVar7 = uVar2;
      *(undefined2 *)(iVar4 + 6) = param_2;
      puVar3 = (undefined2 *)*puVar7;
      param_2 = *(undefined2 *)(iVar4 + 6);
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar7 = puVar3;
        puVar3 = puVar3 + 1;
        *puVar7 = 0;
      }
LAB_1048_1995:
      a0 = (undefined1 *)ZEXT24(local_214);
      pcVar5 = (char *)s_ReadSpeed_10e8_105f + 1;
      uStackY_14 = 0x1090199f;
      FUN_1060_0652();
    }
    else if ((char)uVar1 == '\f') {
      a1 = (undefined1 *)CONCAT22(unaff_SS,local_214);
      uStackY_14 = CONCAT22(pcVar5,0x19b5);
      pvVar6 = LSTRCPY(a0,a1);
      param_2 = (undefined2)((ulong)pvVar6 >> 0x10);
      pcVar5 = (char *)0x13a8;
      a0 = a1;
    }
  }
  goto LAB_1048_192c;
}


