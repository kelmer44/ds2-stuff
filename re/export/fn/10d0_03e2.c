// FUN_10d0_03e2 at 10d0:03e2

void FUN_10d0_03e2(void)

{
  code *pcVar1;
  undefined2 uVar2;
  int unaff_BP;
  byte bVar3;
  char cVar4;
  char in_AF;
  char cVar5;
  char cVar6;
  
  if ((DAT_10d0_0010 & 1) == 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)((char *)s_Options_10e8_10e2 + 6,unaff_BP + 1);
  }
  else {
    DOS3CALL((char *)s_Options_10e8_10d0,(char *)s_Options_10e8_10e2 + 6);
  }
  if ((DAT_10d0_0010 & 1) == 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  }
  else {
    DOS3CALL((char *)s_Options_10e8_10d0);
  }
  bVar3 = 0;
  cVar6 = '\0';
  cVar5 = (DAT_10d0_0010 & 1) == 0;
  cVar4 = POPCOUNT(DAT_10d0_0010 & 1) == '\0';
  if ((bool)cVar5) {
    pcVar1 = (code *)swi(0x21);
    uVar2 = (*pcVar1)();
  }
  else {
    uVar2 = DOS3CALL((char *)s_Options_10e8_10d0);
  }
  if ((DAT_10d0_0010 & 1) == 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)(uVar2);
  }
  else {
    DOS3CALL((char *)s_Options_10e8_10d0,
             CONCAT11(cVar6 << 7 | cVar5 << 6 | in_AF << 4 | cVar4 << 2 | 2U | bVar3,(char)uVar2));
  }
  FUN_10d0_0919();
  return;
}


