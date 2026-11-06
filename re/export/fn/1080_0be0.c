// FUN_1080_0be0 at 1080:0be0

bool __cdecl16far FUN_1080_0be0(ushort param_1,ushort *param_2,undefined2 param_3)

{
  ushort uVar1;
  bool bVar2;
  ushort uVar3;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  SELECTPALETTE(param_1,DAT_10e8_200a,0);
  uVar3 = param_2[1];
  uVar1 = param_2[2];
  bVar2 = uVar1 != 0 || uVar3 != 0;
  if (bVar2) {
    param_2[4] = *(ushort *)(uVar3 + 0x12);
    param_2[5] = *(ushort *)(uVar3 + 0x16);
    param_2[6] = *(ushort *)(uVar3 + 0x26);
    param_2[7] = *(ushort *)(uVar3 + 0x28);
    *(undefined2 *)(uVar3 + 0x28) = 0;
    *(undefined2 *)(uVar3 + 0x26) = 0;
    uVar3 = CREATEDIBITMAP(param_1,(void *)CONCAT22(uVar1,(void *)(uVar3 + 0xe)),4,
                           (void *)CONCAT22(uVar1,(void *)(*(int *)(uVar3 + 10) + uVar3)),
                           (void *)CONCAT22(uVar1,(void *)(uVar3 + 0xe)),0);
    *param_2 = uVar3;
  }
  else {
    FUN_1098_0000((char *)s_process_image_10e8_2238,(char *)s_NULL_pointer_assignment_10e8_2220,0);
  }
  SELECTPALETTE(param_1,param_1,0);
  return bVar2;
}


