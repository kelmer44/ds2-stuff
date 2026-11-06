// FUN_1068_11da at 1068:11da

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_1068_11da(ushort param_1,ushort param_2)

{
  undefined2 *puVar1;
  int *piVar2;
  undefined2 *puVar3;
  byte *pbVar4;
  ushort a0;
  int iVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  undefined2 *puVar9;
  undefined2 uVar10;
  undefined2 unaff_SS;
  int *piVar11;
  undefined4 uStackY_41e;
  undefined1 local_41a [1024];
  int *piStackY_1a;
  char *pcStackY_18;
  char *local_16;
  undefined2 uVar12;
  
  FUN_10d0_029e();
  a0 = GETDLGITEM(param_1,0x2bd);
  local_16 = (char *)s_Desea_sobreescribir_una_partida_a_10e8_11ec + 0x1c;
  piVar11 = (int *)SENDMESSAGE(a0,0x41a,param_2,0);
  pcStackY_18 = (char *)((ulong)piVar11 >> 0x10);
  piVar6 = (int *)piVar11;
  if (piVar11 == (int *)0x0) {
    FUN_1098_0248();
  }
  if ((*(byte *)((int)piVar6 + 0x29) & 2) == 0) {
    *(undefined2 *)((int)piVar6 + 0x29) = 0;
  }
  puVar9 = (undefined2 *)*(int *)((int)piVar6 + 0x25);
  iVar7 = *(int *)((int)piVar6 + 0x27);
  piVar2 = piVar6;
  if (iVar7 != 0 || puVar9 != (undefined2 *)0x0) {
    do {
      piStackY_1a = piVar2;
      local_16 = (char *)*puVar9;
      iVar5 = FUN_1068_0edc();
      if ((iVar5 != 0) && (puVar9[0x16] != 0 || puVar9[0x15] != 0)) {
        local_16 = (char *)*(undefined2 *)((int)*(undefined4 *)(puVar9 + 0x15) + 2);
        uStackY_41e = (int *)CONCAT22(puVar9[0x16],(int *)puVar9[0x15]);
        uVar12 = FUN_1068_0edc();
        ((undefined2 *)&DAT_10e8_5e14)[*uStackY_41e] = uVar12;
      }
      puVar3 = puVar9 + 0x21;
      iVar7 = puVar9[0x22];
      puVar9 = (undefined2 *)*puVar3;
      piVar2 = piStackY_1a;
    } while (iVar7 != 0 || (undefined2 *)*puVar3 != (undefined2 *)0x0);
  }
  puVar9 = (undefined2 *)*(int *)((int)piVar6 + 0x19);
  iVar7 = *(int *)((int)piVar6 + 0x1b);
  piVar2 = piVar6;
  if (iVar7 != 0 || puVar9 != (undefined2 *)0x0) {
    do {
      piStackY_1a = piVar2;
      local_16 = (char *)*puVar9;
      iVar5 = FUN_1068_0edc();
      if (iVar5 != 0) {
        *(undefined2 *)((int)*(undefined4 *)(puVar9 + 0x15) + 0x29) = 0;
      }
      puVar3 = puVar9 + 0x21;
      iVar7 = puVar9[0x22];
      puVar9 = (undefined2 *)*puVar3;
      piVar2 = piStackY_1a;
    } while (iVar7 != 0 || (undefined2 *)*puVar3 != (undefined2 *)0x0);
  }
  puVar9 = (undefined2 *)*(int *)((int)piVar6 + 0x1d);
  iVar7 = *(int *)((int)piVar6 + 0x1f);
  piVar2 = piVar6;
  if (iVar7 != 0 || puVar9 != (undefined2 *)0x0) {
    do {
      piStackY_1a = piVar2;
      local_16 = (char *)*puVar9;
      iVar5 = FUN_1068_0edc();
      if (iVar5 != 0) {
        pbVar4 = (byte *)((int)*(undefined4 *)(puVar9 + 0x15) + 0x29);
        *pbVar4 = *pbVar4 | 1;
      }
      puVar3 = puVar9 + 0x21;
      iVar7 = puVar9[0x22];
      puVar9 = (undefined2 *)*puVar3;
      piVar2 = piStackY_1a;
    } while (iVar7 != 0 || (undefined2 *)*puVar3 != (undefined2 *)0x0);
  }
  puVar9 = (undefined2 *)*(int *)((int)piVar6 + 0x21);
  iVar7 = *(int *)((int)piVar6 + 0x23);
  piVar2 = piVar6;
  if (iVar7 != 0 || puVar9 != (undefined2 *)0x0) {
    do {
      piStackY_1a = piVar2;
      local_16 = (char *)*puVar9;
      iVar5 = FUN_1068_0edc();
      if (iVar5 != 0) {
        pbVar4 = (byte *)((int)*(undefined4 *)(puVar9 + 0x15) + 0x29);
        *pbVar4 = *pbVar4 | 4;
      }
      puVar3 = puVar9 + 0x21;
      iVar7 = puVar9[0x22];
      puVar9 = (undefined2 *)*puVar3;
      piVar2 = piStackY_1a;
    } while (iVar7 != 0 || (undefined2 *)*puVar3 != (undefined2 *)0x0);
  }
  if (piVar6[1] != 0 || *piVar6 != 0) {
    LSTRCPY((undefined1 *)CONCAT22(unaff_SS,local_41a),(void *)0x10e81e64);
    LSTRCAT((undefined1 *)CONCAT22(unaff_SS,local_41a),(void *)CONCAT22(piVar6[1],(void *)*piVar6));
    FUN_1060_02bc();
    local_16 = local_41a;
    pcStackY_18 = (char *)s_ReadSpeed_10e8_105f + 1;
    piStackY_1a = (int *)0x141a;
    FUN_10a8_0638();
  }
  puVar9 = (undefined2 *)*(int *)((int)piVar6 + 0x11);
  if (*(int *)((int)piVar6 + 0x13) != 0 ||
      (undefined2 *)*(int *)((int)piVar6 + 0x11) != (undefined2 *)0x0) {
    do {
      piStackY_1a = piVar6;
      local_16 = (char *)s_sndtrack__10e8_144b + 5;
      uVar12 = unaff_SS;
      _WSPRINTF((undefined1 *)CONCAT22(unaff_SS,local_41a),s_SysTalking_d_10e8_1e78);
      FUN_1060_02bc();
      iVar5 = 0;
      uVar10 = (undefined2)((ulong)_DAT_10e8_5cba >> 0x10);
      iVar7 = (int)_DAT_10e8_5cba;
      if (puVar9[2] != *(int *)(iVar7 + 0x14)) {
        piVar6 = (int *)(iVar7 + 0x14);
        pcVar8 = (char *)(iVar7 + 0x1e);
        do {
          if (*pcVar8 == '\0') break;
          pcVar8 = pcVar8 + 0x14;
          iVar5 = iVar5 + 1;
          piVar6 = piVar6 + 1;
        } while (*piVar6 != puVar9[2]);
      }
      pcVar8 = (char *)(iVar5 * 0x14 + iVar7 + 0x1e);
      if (*pcVar8 == '\0') {
        LSTRCPY((undefined1 *)CONCAT22(unaff_SS,local_41a),s_AUNQUE_10e8_1e85);
      }
      else {
        LSTRCPY((undefined1 *)CONCAT22(unaff_SS,local_41a),(char *)CONCAT22(uVar10,pcVar8));
      }
      uVar12 = 0x1e8c;
      LSTRCAT((undefined1 *)CONCAT22(unaff_SS,local_41a),(void *)0x10e81e8c);
      LSTRCAT((undefined1 *)CONCAT22(unaff_SS,local_41a),(void *)CONCAT22(puVar9[1],(void *)*puVar9)
             );
      uVar12 = 100;
      local_16 = local_41a;
      pcStackY_18 = (char *)0x13a8;
      piStackY_1a = (int *)((char *)s___DARKSEED_INI_10e8_152e + 0xb);
      FUN_10a8_0638();
      puVar1 = (undefined2 *)((int)puVar9 + 0x13);
      piVar2 = (int *)((int)puVar9 + 0x15);
      piVar6 = piStackY_1a;
      puVar9 = (undefined2 *)*puVar1;
    } while (*piVar2 != 0 || (undefined2 *)*puVar1 != (undefined2 *)0x0);
  }
  iVar7 = *(int *)((int)piVar6 + 0x17);
  puVar9 = (undefined2 *)*(int *)((int)piVar6 + 0x15);
  if (iVar7 != 0 || (undefined2 *)*(int *)((int)piVar6 + 0x15) != (undefined2 *)0x0) {
    do {
      local_16 = (char *)*puVar9;
      iVar5 = FUN_1068_0edc();
      if (iVar5 != 0) {
        return puVar9[0x15];
      }
      puVar3 = puVar9 + 0x21;
      iVar7 = puVar9[0x22];
      puVar9 = (undefined2 *)*puVar3;
    } while (iVar7 != 0 || (undefined2 *)*puVar3 != (undefined2 *)0x0);
  }
  return 0;
}


