// FUN_1028_014e at 1028:014e

void __cdecl16far FUN_1028_014e(void)

{
  undefined2 *puVar1;
  ushort a0;
  ushort uVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 unaff_SS;
  undefined2 local_40a;
  undefined2 uStackY_408;
  undefined2 local_406 [506];
  undefined2 uStackY_12;
  undefined2 uStackY_10;
  
  FUN_10d0_029e();
  local_40a = 0x300;
  uStackY_408 = 0x100;
  puVar4 = local_406;
  for (iVar3 = 0x200; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar1 = 0;
  }
  puVar4 = local_406;
  iVar3 = 0x100;
  do {
    *(undefined1 *)puVar4 = 0;
    *(undefined1 *)((int)puVar4 + 1) = 0;
    *(undefined1 *)(puVar4 + 1) = 0;
    *(undefined1 *)((int)puVar4 + 3) = 4;
    puVar4 = puVar4 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  a0 = GETDC(0);
  uStackY_10 = 0x1b3;
  uVar2 = CREATEPALETTE((undefined2 *)CONCAT22(unaff_SS,&local_40a));
  if (uVar2 != 0) {
    uStackY_10 = 0x13a8;
    uStackY_12 = 0x1c2;
    uVar2 = SELECTPALETTE(a0,uVar2,0);
    REALIZEPALETTE(a0);
    uStackY_10 = 0x13a8;
    uStackY_12 = 0x1d3;
    uVar2 = SELECTPALETTE(a0,uVar2,0);
    DELETEOBJECT(uVar2);
  }
  uStackY_10 = 0x1e1;
  RELEASEDC(0,a0);
  return;
}


