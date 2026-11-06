// FUN_1050_0062 at 1050:0062

uint __cdecl16far FUN_1050_0062(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  uVar4 = 0;
  piVar3 = DAT_10e8_5cbe;
  iVar5 = DAT_10e8_5cc0;
  if (DAT_10e8_5cc0 != 0 || DAT_10e8_5cbe != (int *)0x0) {
    do {
      if ((((*piVar3 <= param_1) && (param_1 <= piVar3[2])) && (piVar3[1] <= param_2)) &&
         ((param_2 <= piVar3[3] && (piVar3[4] == 0)))) {
        iVar2 = FUN_1050_0000(piVar3[0xc],piVar3[0xd]);
        if (iVar2 != 0) {
          uVar4 = uVar4 | 1;
        }
        iVar2 = FUN_1050_0000(piVar3[10],piVar3[0xb]);
        if (iVar2 != 0) {
          uVar4 = uVar4 | 2;
        }
        iVar2 = FUN_1050_0000(piVar3[8],piVar3[9]);
        if (iVar2 != 0) {
          uVar4 = uVar4 | 4;
        }
      }
      piVar1 = piVar3 + 6;
      iVar5 = piVar3[7];
      piVar3 = (int *)*piVar1;
    } while (iVar5 != 0 || (int *)*piVar1 != (int *)0x0);
  }
  return uVar4;
}


