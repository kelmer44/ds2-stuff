// FUN_1068_1030 at 1068:1030

int * __cdecl16far FUN_1068_1030(ushort param_1,int *param_2)

{
  undefined2 *puVar1;
  int iVar2;
  ushort a0;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  ushort a2;
  uint uVar7;
  undefined2 uVar8;
  long a3;
  char *pcVar9;
  ushort a0_00;
  
  FUN_10d0_029e();
  while( true ) {
    if (param_2._2_2_ == 0 && (int *)param_2 == (int *)0x0) {
      return (int *)0x0;
    }
    iVar3 = ((int *)param_2)[3];
    iVar6 = ((int *)param_2)[2];
    piVar4 = (int *)param_2;
    if (iVar3 != 0 || ((int *)param_2)[2] != 0) {
      do {
        iVar2 = FUN_1068_0edc();
        if (iVar2 == 0) {
          iVar2 = *(int *)(iVar6 + 0x42);
          iVar3 = *(int *)(iVar6 + 0x44);
        }
        else {
          uVar7 = (uint)((ulong)*(undefined4 *)(iVar6 + 0x2a) >> 0x10);
          piVar4 = (int *)(int *)*(undefined4 *)(iVar6 + 0x2a);
          param_2 = (int *)((ulong)uVar7 << 0x10);
          iVar2 = piVar4[2];
          iVar3 = piVar4[3];
        }
        iVar6 = iVar2;
      } while (iVar3 != 0 || iVar2 != 0);
      param_2 = (int *)CONCAT22(param_2._2_2_,piVar4);
    }
    a0 = GETDLGITEM(param_1,0x2bd);
    uVar8 = (undefined2)((ulong)param_2 >> 0x10);
    piVar5 = (int *)param_2;
    piVar4 = (int *)*param_2;
    iVar3 = piVar5[1];
    SENDMESSAGE(a0,0xb,0,0);
    SENDMESSAGE(a0,0x405,0,0);
    if (iVar3 == 0 && piVar4 == (int *)0x0) {
      a2 = 0;
    }
    else {
      a2 = 0;
      do {
        if ((*(byte *)((int)piVar4 + 0x29) & 5) == 1) {
          if (piVar4[1] == 0 && *piVar4 == 0) {
            a3 = 0x10e81e36;
          }
          else {
            a3 = CONCAT22(piVar4[1],*piVar4);
          }
          a0_00 = 0x402;
          SENDMESSAGE(a0,0x402,a2,a3);
          a0 = 0x41b;
          SENDMESSAGE(a0_00,0x41b,a2,(long)CONCAT22(iVar3,piVar4));
          a2 = a2 + 1;
        }
        puVar1 = (undefined2 *)((int)piVar4 + 0x3f);
        iVar3 = *(int *)((int)piVar4 + 0x41);
        piVar4 = (int *)*puVar1;
      } while (iVar3 != 0 || (int *)*puVar1 != (int *)0x0);
    }
    if (piVar5[0x1a] < (int)a2) break;
    param_2 = (int *)CONCAT22(piVar5[0x1c],(int *)piVar5[0x1b]);
  }
  SENDMESSAGE(a0,0xb,1,0);
  pcVar9 = (char *)s_SAVEGAME_10e8_11a4 + 5;
  SETFOCUS(param_1);
  if (pcVar9 != (char *)0x0) {
    return piVar5;
  }
  POSTMESSAGE(a0,0x407,0,0);
  POSTMESSAGE(param_1,0x111,a0,CONCAT22(2,a0));
  return piVar5;
}


