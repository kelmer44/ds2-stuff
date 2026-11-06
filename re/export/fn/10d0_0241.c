// FUN_10d0_0241 at 10d0:0241

void __cdecl16near FUN_10d0_0241(void)

{
  code *pcVar1;
  
  if (DAT_10e8_2a68 != 0) {
    (*DAT_10e8_2a66)();
  }
  if ((DAT_10d0_0010 & 1) == 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  }
  else {
    DOS3CALL((char *)s_Options_10e8_10d0,(char *)s_Options_10e8_10e2 + 6);
  }
  return;
}


