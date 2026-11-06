// FUN_1080_041a at 1080:041a

void __cdecl16far FUN_1080_041a(ushort param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  ushort a1;
  int iVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  puVar6 = (undefined2 *)&DAT_10e8_6c9e;
  puVar5 = (undefined2 *)0x1f0;
  for (iVar3 = 0x200; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  if (DAT_10e8_200a != 0) {
    a1 = SELECTPALETTE(param_1,DAT_10e8_200a,0);
    puVar4 = (undefined1 *)&DAT_10e8_6ca1;
    iVar3 = 0x100;
    do {
      *puVar4 = 1;
      puVar4 = puVar4 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    ANIMATEPALETTE(DAT_10e8_200a,1,0xfe,&DAT_10e8_6ca2);
    if (a1 != 0) {
      SELECTPALETTE(param_1,a1,0);
    }
  }
  return;
}


