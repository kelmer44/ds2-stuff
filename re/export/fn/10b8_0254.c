// FUN_10b8_0254 at 10b8:0254

/* WARNING: Removing unreachable block (ram,0x10b8025c) */
/* WARNING: Removing unreachable block (ram,0x10b8026d) */
/* WARNING: Removing unreachable block (ram,0x10b80278) */
/* WARNING: Removing unreachable block (ram,0x10b80298) */
/* WARNING: Removing unreachable block (ram,0x10b8029a) */
/* WARNING: Removing unreachable block (ram,0x10b8029c) */
/* WARNING: Removing unreachable block (ram,0x10b8029e) */
/* WARNING: Removing unreachable block (ram,0x10b802a0) */
/* WARNING: Removing unreachable block (ram,0x10b802a7) */
/* WARNING: Removing unreachable block (ram,0x10b802a9) */

void FUN_10b8_0254(void)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined4 in_EDI;
  undefined2 unaff_SS;
  undefined1 auStack_a [6];
  undefined4 uStack_4;
  
  do {
    uStack_4 = CONCAT22((int)in_EDI,(undefined2)uStack_4);
    puVar2 = auStack_a;
    pcVar1 = (code *)swi(0x31);
    (*pcVar1)();
    puVar2[6] = puVar2[6] | 0x40;
    pcVar1 = (code *)swi(0x31);
    (*pcVar1)();
    in_EDI = uStack_4;
  } while( true );
}


