// FUN_10d0_01d1 at 10d0:01d1

/* WARNING: Removing unreachable block (ram,0x10d001e9) */

void FUN_10d0_01d1(void)

{
  code *pcVar1;
  char cVar2;
  
  DAT_10e8_2977 = 1;
  cVar2 = '\x01';
  FUN_10d0_026a();
  FUN_10d0_026a();
  FUN_10d0_0241();
  if (cVar2 == '\0') {
    if ((DAT_10d0_0010 & 1) == 0) {
      pcVar1 = (code *)swi(0x21);
      (*pcVar1)();
    }
    else {
      DOS3CALL((char *)s_Options_10e8_10d0);
    }
  }
  return;
}


