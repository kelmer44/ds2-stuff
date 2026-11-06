// FUN_10d0_0a6c at 10d0:0a6c

void FUN_10d0_0a6c(undefined2 param_1,undefined2 param_2,char *param_3)

{
  char cVar1;
  byte bVar2;
  int unaff_BP;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6,unaff_BP + 1);
  cVar1 = *param_3;
  if (cVar1 == '\0') {
    FUN_10d0_0f48();
    return;
  }
  if ((byte)(cVar1 - 0x20U) < 0x59) {
    bVar2 = *(byte *)(ulong)((byte)(cVar1 - 0x20U) + 0x29ce) & 0xf;
  }
  else {
    bVar2 = 0;
  }
                    /* WARNING: Could not emulate address calculation at 0x10d00ab8 */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*(undefined2 *)
             ((char)(*(byte *)(ulong)((byte)(bVar2 * '\b') + 0x29ce) >> 4) * 2 + 0xa5c))(cVar1);
  return;
}


