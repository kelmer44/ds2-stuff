// FUN_1028_09f6 at 1028:09f6

void * __cdecl16far FUN_1028_09f6(void)

{
  undefined2 uVar1;
  ushort a0;
  int iVar2;
  undefined2 uVar3;
  void *pvVar4;
  undefined2 *puVar5;
  undefined2 unaff_SS;
  void *pvVar6;
  undefined1 local_2c [22];
  undefined2 uStackY_16;
  char *pcStackY_14;
  int iVar7;
  
  FUN_10d0_029e();
  a0 = _LOPEN(s_gfile_hdr_10e8_151f,0x20);
  pcStackY_14 = (char *)0xa24;
  _LREAD(a0,&DAT_10e0_275e,2);
  pcStackY_14 = (char *)0xa32;
  _LREAD(a0,&DAT_10e0_2760,2);
  iVar7 = 0;
  if (0 < *(int *)0x275e) {
    pvVar4 = (void *)0x29e8;
    do {
      pcStackY_14 = (char *)0x13a8;
      uStackY_16 = 0xa57;
      _HREAD(a0,(void *)CONCAT22((char *)s_ReadSpeed_10e8_10d8 + 8,pvVar4),0x20);
      pcStackY_14 = (char *)0xa63;
      _LLSEEK(a0,0x20,1);
      pvVar4 = (void *)((int)pvVar4 + 0x20);
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)0x275e);
  }
  uVar3 = (undefined2)((ulong)((long)*(int *)0x2760 * 0x16) >> 0x10);
  pvVar4 = (void *)FUN_1090_0000();
  uVar1 = DAT_10e8_2bbe;
  *(undefined2 *)0x2764 = pvVar4;
  *(undefined2 *)0x2766 = uVar3;
  pcStackY_14 = (char *)s_Options_10e8_108c + 4;
  uStackY_16 = 0xaa9;
  _HREAD(a0,(void *)CONCAT22(uVar3,pvVar4),CONCAT22(a0,uVar3));
  _LCLOSE(a0);
  iVar7 = 0;
  if (0 < *(int *)0x275e) {
    puVar5 = (undefined2 *)0x3a68;
    pvVar4 = (void *)0x29e8;
    do {
      pcStackY_14 = (char *)0xad4;
      LSTRCPY((undefined1 *)CONCAT22(unaff_SS,local_2c),
              (void *)CONCAT22((char *)s_ReadSpeed_10e8_10d8 + 8,pvVar4));
      iVar2 = FUN_10d0_03f4();
      if (iVar2 == 0) {
        *(undefined1 *)(iVar7 + 0x39e8) = 0;
      }
      else {
        *(undefined1 *)(iVar7 + 0x39e8) = 1;
      }
      puVar5[1] = 0;
      *puVar5 = 0;
      puVar5 = puVar5 + 2;
      pvVar4 = (void *)((int)pvVar4 + 0x20);
      iVar7 = iVar7 + 1;
    } while (iVar7 < DAT_10e0_275e);
  }
  uVar1 = DAT_10e8_2bbe;
  *(undefined1 *)0x2768 = 0;
  pcStackY_14 = (char *)0xb34;
  pvVar6 = LSTRCPY((char *)CONCAT22(uVar1,(char *)s__mid_alias_midifile_10e8_27d7 + 0x11),
                   (void *)0x10e03c88);
  *(undefined2 *)0x2762 = 1;
  return (void *)pvVar6;
}


