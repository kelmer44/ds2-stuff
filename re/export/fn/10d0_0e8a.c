// FUN_10d0_0e8a at 10d0:0e8a

undefined4 __cdecl16near FUN_10d0_0e8a(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  int unaff_BP;
  undefined2 unaff_SS;
  
  puVar3 = (undefined2 *)*(undefined2 *)(unaff_BP + 10);
  uVar1 = *puVar3;
  uVar2 = puVar3[1];
  *(int *)(unaff_BP + 10) = (int)(puVar3 + 2);
  return CONCAT22(uVar2,uVar1);
}


