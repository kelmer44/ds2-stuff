// FUN_10d0_0368 at 10d0:0368

uint __cdecl16far FUN_10d0_0368(void)

{
  long lVar1;
  
  lVar1 = FUN_10d0_052a(DAT_10e8_297c,DAT_10e8_297e,0x43fd,3);
  DAT_10e8_297e = (uint)((ulong)(lVar1 + 0x269ec3) >> 0x10);
  DAT_10e8_297c = (int)(lVar1 + 0x269ec3);
  return DAT_10e8_297e & 0x7fff;
}


