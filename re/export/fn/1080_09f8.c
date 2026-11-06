// FUN_1080_09f8 at 1080:09f8

undefined2 __cdecl16far FUN_1080_09f8(ushort param_1,ushort *param_2,undefined2 param_3)

{
  void *pvVar1;
  ushort uVar2;
  ushort uVar3;
  undefined2 uVar4;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  uVar4 = 1;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  if (uVar2 == 0 && uVar3 == 0) {
    FUN_1098_0000((char *)s_np_process_image_10e8_2194,(char *)s_NULL_pointer_assignment_10e8_217c,0
                 );
    uVar4 = 0;
  }
  else {
    param_2[4] = *(ushort *)(uVar3 + 0x12);
    param_2[5] = *(ushort *)(uVar3 + 0x16);
    param_2[6] = *(ushort *)(uVar3 + 0x26);
    param_2[7] = *(ushort *)(uVar3 + 0x28);
    *(undefined2 *)(uVar3 + 0x28) = 0;
    *(undefined2 *)(uVar3 + 0x26) = 0;
    pvVar1 = (void *)(uVar3 + 0xe);
    uVar3 = CREATEDIBITMAP(param_1,(void *)CONCAT22(pvVar1,pvVar1),4,
                           (void *)CONCAT22(uVar2,(void *)(*(int *)(uVar3 + 10) + uVar3)),
                           (void *)CONCAT22(uVar2,pvVar1),1);
    *param_2 = uVar3;
    if (uVar3 == 0) {
      FUN_1098_0000((char *)s_np_process_image_10e8_21bd,(char *)s_Unable_to_create_bitmap_10e8_21a5
                    ,0);
    }
  }
  return uVar4;
}


