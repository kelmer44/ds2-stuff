// FUN_1060_11e0 at 1060:11e0

int __cdecl16far FUN_1060_11e0(ushort param_1)

{
  ushort uVar1;
  int iVar2;
  undefined2 unaff_SS;
  long lVar3;
  undefined1 local_38 [34];
  char *pcStackY_16;
  undefined2 uStackY_14;
  
  FUN_10d0_029e();
  uVar1 = GETDLGITEM(param_1,0x385);
  uStackY_14 = 0x13a8;
  pcStackY_16 = (char *)s_Desea_sobreescribir_una_partida_a_10e8_11ec + 0x22;
  lVar3 = SENDMESSAGE(uVar1,0x407,0,0);
  iVar2 = (int)lVar3;
  if (0 < iVar2) {
    uStackY_14 = 0x13a8;
    pcStackY_16 = (char *)s_Saved_02d_10e8_1229 + 4;
    _WSPRINTF((undefined1 *)CONCAT22(unaff_SS,local_38),(void *)0x10e81dae);
    uVar1 = GETDLGITEM(param_1,0x386);
    uStackY_14 = 0x13a8;
    pcStackY_16 = (char *)0x1251;
    SENDMESSAGE(uVar1,0xc,0,(long)CONCAT22(unaff_SS,local_38));
    uStackY_14 = 0x13a8;
    pcStackY_16 = (char *)0x1266;
    _WSPRINTF((undefined1 *)CONCAT22(unaff_SS,local_38),(void *)0x10e81db1);
    uVar1 = GETDLGITEM(param_1,0x387);
    uStackY_14 = 0x13a8;
    pcStackY_16 = (char *)s_n__Reinicie_Windows_y_Dark_Seed_I_10e8_1275 + 0xd;
    lVar3 = SENDMESSAGE(uVar1,0xc,0,(long)CONCAT22(unaff_SS,local_38));
    iVar2 = (int)lVar3;
  }
  return iVar2;
}


