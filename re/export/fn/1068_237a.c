// FUN_1068_237a at 1068:237a

void __cdecl16far FUN_1068_237a(undefined4 param_1)

{
  char *pcVar1;
  int iVar2;
  undefined2 unaff_SS;
  undefined1 local_5a [70];
  char *pcStackY_14;
  char *pcStackY_12;
  void *a0;
  
  FUN_10d0_029e();
  iVar2 = 0;
  if (*(char *)((int)param_1 + 0x1e) != '\0') {
    pcVar1 = (char *)((int)param_1 + 0x1e);
    do {
      if (4 < iVar2) break;
      iVar2 = iVar2 + 1;
      pcVar1 = pcVar1 + 0x14;
    } while (*pcVar1 != '\0');
  }
  FUN_1060_0062();
  pcStackY_12 = (char *)s_ReadSpeed_10e8_105f + 1;
  pcStackY_14 = (char *)s_can_t_allocate_memory_10e8_23c8 + 0xe;
  FUN_1060_0c44();
  FUN_1060_00fc();
  a0 = (void *)CONCAT22(param_1._2_2_,(void *)((int)param_1 + iVar2 * 0x14 + 0x1e));
  pcStackY_12 = (char *)s_ReadSpeed_10e8_105f + 1;
  pcStackY_14 = (char *)s_fichero_no_encontrado_10e8_23f8 + 10;
  LSTRCPY(a0,(undefined1 *)CONCAT22(unaff_SS,local_5a));
  *(undefined2 *)(iVar2 * 2 + (int)param_1 + 0x14) = (int)((ulong)a0 >> 0x10);
  return;
}


