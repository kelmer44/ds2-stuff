// FUN_10d0_01e0 at 10d0:01e0

void __cdecl16far FUN_10d0_01e0(void)

{
  code *pcVar1;
  undefined2 in_CX;
  int unaff_BP;
  undefined2 unaff_SS;
  char cVar2;
  
  DAT_10e8_2977 = (undefined1)((uint)in_CX >> 8);
  if ((char)in_CX == '\0') {
    FUN_10d0_026a();
    FUN_10d0_026a();
    FUN_10d0_0f76(*(undefined2 *)(unaff_BP + 6));
  }
  cVar2 = (char)((uint)in_CX >> 8);
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


