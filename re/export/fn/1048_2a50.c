// FUN_1048_2a50 at 1048:2a50

/* WARNING: Removing unreachable block (ram,0x10482a80) */

void __cdecl16far FUN_1048_2a50(undefined4 param_1)

{
  undefined2 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined2 *puVar5;
  uint uVar6;
  undefined2 uVar7;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  puVar5 = (undefined2 *)*(int *)((int)param_1 + 2);
  iVar4 = *(int *)((int)param_1 + 4);
  if (iVar4 != 0 || puVar5 != (undefined2 *)0x0) {
    do {
      iVar2 = FUN_1060_0b00((char *)s_FromRoom_10e8_1b44);
      if ((puVar5[7] == iVar2) || (uVar6 = 0, puVar5[7] == 0)) {
        uVar6 = 1;
      }
      uVar3 = FUN_1060_07f6(*puVar5,puVar5[1]);
      if ((uVar6 & uVar3) != 0) {
        FUN_10a8_0980();
        if (*(char *)(puVar5 + 0x1f) != '\0') {
          FUN_10a8_06fa(puVar5 + 0x1f,iVar4,999);
        }
        if (puVar5[0xc] == 0 && puVar5[0xb] == 0) {
          if (*(char *)((int)puVar5 + 0x4b) != '\0') {
            FUN_10a8_06fa((int)puVar5 + 0x4b,iVar4,999);
          }
        }
        else {
          FUN_10a8_0638(puVar5[0xb],puVar5[0xc],0x140,100,(int)puVar5 + 0x4b,iVar4,999);
        }
        FUN_1060_092e((int)puVar5 + 0x79,iVar4);
        break;
      }
      puVar1 = (undefined2 *)((int)puVar5 + 0x91);
      iVar4 = *(int *)((int)puVar5 + 0x93);
      puVar5 = (undefined2 *)*puVar1;
    } while (iVar4 != 0 || (undefined2 *)*puVar1 != (undefined2 *)0x0);
  }
  iVar4 = FUN_1060_0b00((char *)s_LastAction_10e8_1b4d);
  if (iVar4 != 4) {
    DAT_10e8_770e = FUN_1060_0b00((char *)s_LastAction_10e8_1b58);
    FUN_1060_0b26((char *)s_LastAction_10e8_1b63,4);
    DAT_10e8_006e = 1;
    POSTMESSAGE(DAT_10e8_76f8,0x202,0x1ada,0x50005);
  }
  return;
}


