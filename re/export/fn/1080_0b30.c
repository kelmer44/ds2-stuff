// FUN_1080_0b30 at 1080:0b30

undefined2 __cdecl16far FUN_1080_0b30(ushort param_1,ushort *param_2,undefined2 param_3)

{
  void *pvVar1;
  ushort uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  uVar4 = 1;
  uVar2 = param_2[2];
  if (uVar2 == 0 && param_2[1] == 0) {
    FUN_1098_0000((char *)s_np_process_image_10e8_21e6,(char *)s_NULL_pointer_assignment_10e8_21ce,0
                 );
    uVar4 = 0;
  }
  else {
    FUN_1080_0ad6();
    uVar3 = (undefined2)((ulong)*(undefined4 *)(param_2 + 1) >> 0x10);
    pvVar1 = (void *)((int)*(undefined4 *)(param_2 + 1) + 0xe);
    uVar2 = CREATEDIBITMAP(param_1,(void *)CONCAT22(uVar3,pvVar1),4,(void *)CONCAT22(uVar2,pvVar1),
                           (void *)CONCAT22(uVar3,pvVar1),1);
    *param_2 = uVar2;
    if (uVar2 == 0) {
      FUN_1098_0000((char *)s_np_process_image_10e8_220f,(char *)s_Unable_to_create_bitmap_10e8_21f7
                    ,0);
    }
  }
  return uVar4;
}


