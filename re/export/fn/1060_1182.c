// FUN_1060_1182 at 1060:1182

undefined2 __cdecl16far FUN_1060_1182(ushort param_1)

{
  ushort a0;
  undefined2 uVar1;
  int iVar2;
  ushort a2;
  long lVar3;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  a0 = GETDLGITEM(param_1,0x385);
  lVar3 = SENDMESSAGE(a0,0x40b,0,0);
  uVar1 = (undefined2)lVar3;
  a2 = 0;
  if (0 < DAT_10e8_5cda) {
    iVar2 = 0x5f0;
    do {
      lVar3 = SENDMESSAGE(a0,0x40a,a2,CONCAT22((char *)s_ReadSpeed_10e8_10d8 + 8,iVar2));
      uVar1 = (undefined2)lVar3;
      iVar2 = iVar2 + 0x19;
      a2 = a2 + 1;
    } while ((int)a2 < DAT_10e8_5cda);
  }
  return uVar1;
}


