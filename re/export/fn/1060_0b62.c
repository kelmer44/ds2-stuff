// FUN_1060_0b62 at 1060:0b62

void __cdecl16far FUN_1060_0b62(void)

{
  int iVar1;
  char *pcVar2;
  undefined2 unaff_SS;
  undefined1 local_506 [1024];
  undefined1 local_106 [232];
  undefined2 uStackY_1e;
  char *pcStackY_1c;
  
  FUN_10d0_029e();
  iVar1 = 0;
  local_506[0] = 0;
  if (0 < DAT_10e8_5cda) {
    do {
      pcStackY_1c = (char *)0xba3;
      _WSPRINTF((undefined1 *)CONCAT22(unaff_SS,local_106),s__d____s____d_10e8_1d4c);
      LSTRCAT((undefined1 *)CONCAT22(unaff_SS,local_506),(undefined1 *)CONCAT22(unaff_SS,local_106))
      ;
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_10e8_5cda);
  }
  pcVar2 = (char *)s_PlayWave_10e8_1094 + 4;
  FUN_1098_0248();
  iVar1 = 0;
  local_506[0] = 0;
  if (0 < DAT_10e8_5cda) {
    do {
      FUN_1060_02bc();
      FUN_1060_02bc();
      uStackY_1e = 0xc10;
      pcStackY_1c = pcVar2;
      _WSPRINTF((undefined1 *)CONCAT22(unaff_SS,local_106),s__d___Var__d_____s____d_10e8_1d5b);
      pcVar2 = (char *)0x13a8;
      LSTRCAT((undefined1 *)CONCAT22(unaff_SS,local_506),(undefined1 *)CONCAT22(unaff_SS,local_106))
      ;
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_10e8_5cda);
  }
  FUN_1098_0248();
  return;
}


