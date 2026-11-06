// FUN_10c8_0040 at 10c8:0040

/* WARNING: Removing unreachable block (ram,0x10c80048) */
/* WARNING: Removing unreachable block (ram,0x10c80063) */
/* WARNING: Removing unreachable block (ram,0x10c80066) */

void FUN_10c8_0040(void)

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


