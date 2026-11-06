// FUN_1048_1f6e at 1048:1f6e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 * __cdecl16far FUN_1048_1f6e(void)

{
  undefined2 *puVar1;
  char cVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  undefined2 in_DX;
  undefined2 uVar7;
  undefined2 unaff_SS;
  void *pvVar8;
  undefined1 local_412 [512];
  undefined1 local_212 [508];
  char *pcStackY_16;
  char *pcStackY_14;
  
  FUN_10d0_029e();
  pcStackY_14 = (char *)s_Options_10e8_10d0;
  pcStackY_16 = (char *)s_internal_error__Talk_GetCondInfo_10e8_1f55 + 0x3d;
  _WSPRINTF((undefined1 *)CONCAT22(unaff_SS,&stack0xffee),s_ROOM_04d_DAT_10e8_1a28);
  DAT_10e8_3416 = FUN_1098_0326();
  DAT_10e8_3418 = in_DX;
  DAT_10e8_341a = FUN_1088_0892();
  DAT_10e8_16f6 = 0;
  DAT_10e8_16f4 = 0;
  DAT_10e8_341c = in_DX;
  puVar3 = (undefined2 *)FUN_1090_0000();
  _DAT_10e8_6892 = (undefined2 *)CONCAT22(in_DX,puVar3);
  for (iVar6 = 0xaec; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar1 = 0;
  }
  *(undefined1 *)puVar3 = 0;
  while (uVar5 = FUN_1048_0b54(), uVar5 != 99) {
    if (uVar5 == 0x44) {
      FUN_1060_048e();
    }
    else if (uVar5 < 0x45) {
      cVar2 = (char)uVar5;
      if (cVar2 == '*') {
        FUN_1048_114a();
      }
      else if (cVar2 < '+') {
        if (cVar2 == '\x1e') {
          uVar4 = FUN_1090_0000();
          uVar7 = (undefined2)((ulong)_DAT_10e8_6892 >> 0x10);
          puVar3 = (undefined2 *)_DAT_10e8_6892;
          puVar3[1] = uVar4;
          puVar3[2] = in_DX;
          uVar4 = (undefined2)((ulong)_DAT_10e8_6892 >> 0x10);
          puVar3 = (undefined2 *)((undefined2 *)_DAT_10e8_6892)[1];
          in_DX = ((undefined2 *)_DAT_10e8_6892)[2];
          for (iVar6 = 0x4a; iVar6 != 0; iVar6 = iVar6 + -1) {
            puVar1 = puVar3;
            puVar3 = puVar3 + 1;
            *puVar1 = 0;
          }
          *(undefined1 *)puVar3 = 0;
          FUN_1048_19fc();
        }
        else if (cVar2 == '$') {
          FUN_1048_18fe();
        }
        else if (cVar2 == '&') {
          FUN_1048_156a();
        }
        else if (cVar2 == '(') {
          FUN_1048_17ea();
        }
      }
      else if (cVar2 == '<') {
        pcStackY_14 = (char *)s_NULL_pointer_assignment_10e8_20d7 + 6;
        pvVar8 = LSTRCPY((undefined2 *)CONCAT22(DAT_10e8_6894,DAT_10e8_6892 + 3),
                         (undefined1 *)CONCAT22(unaff_SS,local_212));
        in_DX = (undefined2)((ulong)pvVar8 >> 0x10);
      }
      else if ((cVar2 == '=') || (cVar2 == 'B')) {
        pcStackY_14 = (char *)s_load_windows_palette_10e8_20ef + 9;
        in_DX = DAT_10e8_6894;
        FUN_1060_0c44();
      }
      else if (cVar2 == 'C') {
        FUN_1060_0062();
        pcStackY_14 = (char *)0x2135;
        LSTRCPY((undefined1 *)CONCAT22(DAT_10e8_6894,(undefined1 *)((int)DAT_10e8_6892 + 0x3d)),
                (undefined1 *)CONCAT22(unaff_SS,local_412));
        pcStackY_14 = (char *)s_load_mask_10e8_214b + 2;
        in_DX = DAT_10e8_6894;
        iVar6 = FUN_1060_0c44();
        if (iVar6 != 2) {
          ((undefined2 *)_DAT_10e8_6892)[0x7a5] = 0;
          ((undefined2 *)_DAT_10e8_6892)[0x7a6] = 10;
        }
      }
    }
  }
  FUN_1090_0068();
  puVar3 = DAT_10e8_6892;
  return puVar3;
}


