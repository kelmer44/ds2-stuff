// FUN_1060_0000 at 1060:0000

int __cdecl16far FUN_1060_0000(char *param_1)

{
  char cVar1;
  int iVar2;
  
                    /* Segment:    13
                       Offset:     0000ea00
                       Length:     1420
                       Min Alloc:  1420
                       Flags:      0d50
                           Code
                           Moveable
                           Preload
                           Impure (Non-shareable)
                        */
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  iVar2 = 0;
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    ((char *)param_1)[iVar2] = ((undefined1 *)&DAT_10e8_92b4)[((char *)param_1)[iVar2]];
    iVar2 = iVar2 + 1;
    cVar1 = ((char *)param_1)[iVar2];
  }
  return iVar2;
}


