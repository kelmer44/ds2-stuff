// FUN_10b8_0368 at 10b8:0368

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x10b80370) */
/* WARNING: Removing unreachable block (ram,0x10b8039f) */
/* WARNING: Removing unreachable block (ram,0x10b803a6) */
/* WARNING: Removing unreachable block (ram,0x10b80427) */
/* WARNING: Removing unreachable block (ram,0x10b803bc) */
/* WARNING: Removing unreachable block (ram,0x10b803be) */

void FUN_10b8_0368(void)

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


