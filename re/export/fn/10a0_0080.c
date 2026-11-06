// FUN_10a0_0080 at 10a0:0080

uint __cdecl16far FUN_10a0_0080(int param_1,int param_2)

{
  ulong uVar1;
  byte bVar3;
  int iVar2;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  uVar1 = (long)param_2 * (long)param_1;
  bVar3 = (byte)(uVar1 >> 0x18);
  iVar2 = CONCAT11(-CARRY1(bVar3,bVar3),bVar3);
  return ((((((uint)(uVar1 >> 8) >> 1 | (uint)((uVar1 & 0x1000000) != 0) << 0xf) >> 1 |
            (uint)((iVar2 >> 1 & 1U) != 0) << 0xf) >> 1 | (uint)((iVar2 >> 2 & 1U) != 0) << 0xf) >>
           1 | (uint)((iVar2 >> 3 & 1U) != 0) << 0xf) >> 1 | (uint)((iVar2 >> 4 & 1U) != 0) << 0xf)
         >> 1 | (uint)((iVar2 >> 5 & 1U) != 0) << 0xf;
}


