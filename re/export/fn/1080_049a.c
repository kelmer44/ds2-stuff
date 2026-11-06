// FUN_1080_049a at 1080:049a

ushort __cdecl16far FUN_1080_049a(ushort param_1,int param_2,undefined2 param_3)

{
  ushort uVar1;
  undefined2 *puVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  char *a0;
  undefined1 *puVar6;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  uVar1 = LOCALALLOC(0,0x408);
  puVar2 = (undefined2 *)LOCALLOCK(uVar1);
  if (((uint)puVar2 | 0x10e8) == 0) {
    FUN_1098_0000();
  }
  else {
    *puVar2 = 0x300;
    puVar2[1] = 0x100;
    pbVar4 = (byte *)(param_2 + 4);
    pbVar5 = (byte *)(puVar2 + 4);
    iVar3 = 0xff;
    do {
      if (DAT_10e8_0062 == 1) {
        *pbVar4 = *pbVar4 + (char)((int)-(*pbVar4 - 0xff) >> 3);
        pbVar4[1] = pbVar4[1] + (char)((int)-(pbVar4[1] - 0xff) >> 3);
        pbVar4[2] = pbVar4[2] + (char)((int)-(pbVar4[2] - 0xff) >> 3);
      }
      *pbVar5 = pbVar4[2];
      pbVar5[1] = pbVar4[1];
      pbVar5[2] = *pbVar4;
      pbVar5[3] = 1;
      pbVar4 = pbVar4 + 4;
      pbVar5 = pbVar5 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    *(undefined1 *)(puVar2 + 2) = 0;
    *(undefined1 *)((int)puVar2 + 5) = 0;
    *(undefined1 *)(puVar2 + 3) = 0;
    *(undefined1 *)((int)puVar2 + 7) = 0;
    *(undefined1 *)(puVar2 + 0x200) = 0xff;
    *(undefined1 *)((int)puVar2 + 0x401) = 0xff;
    *(undefined1 *)(puVar2 + 0x201) = 0xff;
    *(undefined1 *)((int)puVar2 + 0x403) = 0;
    puVar6 = (undefined1 *)&DAT_10e8_6c9e;
    HMEMCPY(&DAT_10e8_6c9e,(undefined2 *)CONCAT22((char *)s_Options_10e8_10e2 + 6,puVar2 + 2),0x400)
    ;
    a0 = (char *)0x13a8;
    uVar1 = DAT_10e8_200a;
    DAT_10e8_200a = CREATEPALETTE((undefined2 *)CONCAT22(puVar6,puVar2));
    if (DAT_10e8_200a == 0) {
      a0 = (char *)s_PlayWave_10e8_1094 + 4;
      FUN_1098_0000();
    }
    SELECTPALETTE(param_1,DAT_10e8_200a,0);
    if (uVar1 != 0) {
      DELETEOBJECT(uVar1);
    }
    UNREALIZEOBJECT(DAT_10e8_200a);
    REALIZEPALETTE(param_1);
    LOCALUNLOCK((ushort)a0);
    LOCALFREE((ushort)a0);
  }
  return DAT_10e8_200a;
}


