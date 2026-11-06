// FUN_10c8_0073 at 10c8:0073

undefined2 __cdecl16near FUN_10c8_0073(void)

{
  ulong in_EAX;
  ulong in_EDX;
  long in_ESP;
  
  if (in_EAX == in_EDX) {
    return 0x18;
  }
  if (in_EDX < in_EAX) {
    if (in_EAX == in_EDX * 2) {
      return 0x10;
    }
    if (in_EAX != in_EDX * 4) {
      *(ulong *)(in_ESP + -4) = in_EAX / in_EDX;
      return 0x18;
    }
    return 0x14;
  }
  if (in_EAX * 2 == in_EDX) {
    return 4;
  }
  if (in_EAX * 4 != in_EDX) {
    return 0xc;
  }
  return 8;
}


