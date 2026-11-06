// FUN_10b8_0104 at 10b8:0104

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x10b80188) overlaps instruction at (ram,0x10b80187)
    */
/* WARNING: Removing unreachable block (ram,0x10b8010c) */
/* WARNING: Removing unreachable block (ram,0x10b80121) */
/* WARNING: Removing unreachable block (ram,0x10b8013a) */
/* WARNING: Removing unreachable block (ram,0x10b8017e) */
/* WARNING: Removing unreachable block (ram,0x10b80188) */
/* WARNING: Removing unreachable block (ram,0x10b80185) */
/* WARNING: Removing unreachable block (ram,0x10b80198) */
/* WARNING: Removing unreachable block (ram,0x10b801a0) */
/* WARNING: Removing unreachable block (ram,0x04c78310) */
/* WARNING: Removing unreachable block (ram,0x10b801f0) */
/* WARNING: Removing unreachable block (ram,0x10b80211) */
/* WARNING: Removing unreachable block (ram,0x10b80212) */
/* WARNING: Removing unreachable block (ram,0x10b80215) */
/* WARNING: Removing unreachable block (ram,0x10b8021d) */
/* WARNING: Removing unreachable block (ram,0x10b80221) */
/* WARNING: Removing unreachable block (ram,0x10b80191) */
/* WARNING: Removing unreachable block (ram,0x10b80177) */
/* WARNING: Removing unreachable block (ram,0x10b801f7) */
/* WARNING: Removing unreachable block (ram,0x10b8020d) */

void FUN_10b8_0104(void)

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


