// FUN_1080_00ee at 1080:00ee

ushort __cdecl16far FUN_1080_00ee(ushort param_1,undefined1 *param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  ushort uVar2;
  undefined2 *puVar3;
  int iVar4;
  ushort a0;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  uVar2 = LOCALALLOC(0,0x408);
  puVar3 = (undefined2 *)LOCALLOCK(uVar2);
  if (((uint)puVar3 | 0x10e8) == 0) {
    FUN_1098_0000((char *)s_set_windows_palette_10e8_202e,
                  (char *)s_Unable_to_allocate_local_memory_10e8_200e,0);
  }
  else {
    *puVar3 = 0x300;
    iVar4 = 0x100;
    puVar3[1] = 0x100;
    puVar1 = puVar3;
    do {
      *(undefined1 *)(puVar1 + 2) = param_2[2];
      *(undefined1 *)((int)puVar1 + 5) = param_2[1];
      *(undefined1 *)(puVar1 + 3) = *param_2;
      *(undefined1 *)((int)puVar1 + 7) = 0;
      param_2 = param_2 + 4;
      iVar4 = iVar4 + -1;
      puVar1 = puVar1 + 2;
    } while (iVar4 != 0);
    DAT_10e8_200a = CREATEPALETTE((undefined2 *)CONCAT22((char *)s_Options_10e8_10e2 + 6,puVar3));
    if (DAT_10e8_200a == 0) {
      FUN_1098_0000((char *)s_set_windows_palette_10e8_205b,
                    (char *)s_Unable_to_create_palette_10e8_2042);
    }
    SELECTPALETTE(param_1,DAT_10e8_200a,0);
    uVar2 = 0x1c2;
    REALIZEPALETTE(param_1);
    a0 = 0x1ca;
    LOCALUNLOCK(uVar2);
    LOCALFREE(a0);
  }
  return DAT_10e8_200a;
}


