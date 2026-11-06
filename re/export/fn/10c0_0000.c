// FUN_10c0_0000 at 10c0:0000

undefined2 __stdcall16far
FUN_10c0_0000(undefined2 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
             int param_7,undefined4 param_8,int param_9,int param_10,int param_11,int param_12,
             int param_13,int param_14,undefined4 param_15)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  int extraout_DX;
  int extraout_DX_00;
  int extraout_DX_01;
  int extraout_DX_02;
  int iVar6;
  char *pcVar7;
  
                    /* Segment:    25
                       Offset:     00018aa0
                       Length:     0258
                       Min Alloc:  0258
                       Flags:      0d50
                           Code
                           Moveable
                           Preload
                           Impure (Non-shareable)
                        */
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  if ((param_15._2_2_ == 0 && (int)param_15 == 0) || (param_14 == 0 && param_13 == 0)) {
    FUN_10d0_039c((char *)s_pdibDst____lpDst_10e8_2852,(char *)s_stretch_c_10e8_2848,0x40);
  }
  if ((param_8._2_2_ == 0 && (int)param_8 == 0) || (param_7 == 0 && param_6 == 0)) {
    FUN_10d0_039c((char *)s_pdibSrc____lpSrc_10e8_286d,(char *)s_stretch_c_10e8_2863,0x41);
  }
  if ((param_10 < 0) || (param_9 < 0)) {
    FUN_10d0_039c((char *)s_DstXE_>__0____DstYE_>__0_10e8_2888,(char *)s_stretch_c_10e8_287e,0x44);
  }
  if ((param_3 < 0) || (param_2 < 0)) {
    FUN_10d0_039c((char *)s_SrcXE_>__0____SrcYE_>__0_10e8_28ab,(char *)s_stretch_c_10e8_28a1,0x45);
  }
  if (*(int *)((int)param_8 + 0xe) != *(int *)((int)param_15 + 0xe)) {
    FUN_10d0_039c((char *)s_pdibDst_>biBitCount____pdibSrc_>_10e8_28ce,(char *)s_stretch_c_10e8_28c4
                  ,0x48);
  }
  pcVar7 = (char *)s_Options_10e8_10d0;
  iVar4 = *(int *)((int)param_15 + 4);
  iVar1 = iVar4 + -1;
  uVar5 = (int)*(uint *)((int)param_15 + 8) >> 0xf;
  iVar2 = (*(uint *)((int)param_15 + 8) ^ uVar5) - uVar5;
  iVar6 = iVar2 + -1;
  if ((((param_12 <= iVar1) && (param_11 <= iVar6)) && (-1 < param_10 + param_12)) &&
     (-1 < param_9 + param_11)) {
    param_11 = ((iVar6 - param_9) - param_11) + 1;
    uVar5 = (int)*(uint *)((int)param_8 + 8) >> 0xf;
    param_4 = (((*(uint *)((int)param_8 + 8) ^ uVar5) - uVar5) - param_2) - param_4;
    if (param_12 < 0) {
      uVar3 = FUN_10c8_059a((char *)s_Options_10e8_10d0,0,param_10,0);
      param_10 = param_10 + param_12;
      param_12 = 0;
      pcVar7 = (char *)s_AVImode_10e8_10c8;
      FUN_10c8_054e((char *)s_AVImode_10e8_10c8,0,param_3,uVar3);
      param_5 = param_5 + extraout_DX;
      param_3 = param_3 - extraout_DX;
    }
    if (param_11 < 0) {
      uVar3 = FUN_10c8_059a(pcVar7,0,param_9,0);
      param_9 = param_9 + param_11;
      param_11 = 0;
      pcVar7 = (char *)s_AVImode_10e8_10c8;
      FUN_10c8_054e((char *)s_AVImode_10e8_10c8,0,param_2,uVar3);
      param_4 = param_4 + extraout_DX_00;
      param_2 = param_2 - extraout_DX_00;
    }
    if (iVar4 < param_10 + param_12) {
      iVar4 = iVar1 - param_12;
      uVar3 = FUN_10c8_059a(pcVar7,0,param_10,0);
      param_10 = iVar4 + 1;
      pcVar7 = (char *)s_AVImode_10e8_10c8;
      FUN_10c8_054e((char *)s_AVImode_10e8_10c8,0,param_3,uVar3);
      param_3 = extraout_DX_01;
      if (param_10 + param_12 < iVar1) {
        param_10 = iVar4 + 2;
      }
    }
    if (iVar2 < param_9 + param_11) {
      uVar3 = FUN_10c8_059a(pcVar7,0,param_9,0);
      param_9 = (iVar6 - param_11) + 1;
      pcVar7 = (char *)s_AVImode_10e8_10c8;
      FUN_10c8_054e((char *)s_AVImode_10e8_10c8,0,param_2,uVar3);
      param_2 = extraout_DX_02;
      if (param_9 + param_11 < iVar6) {
        param_9 = (iVar6 - param_11) + 2;
      }
    }
    FUN_10c8_0040(pcVar7,param_1,param_2,param_3,param_4,param_5,param_6,param_7,(int)param_8,
                  param_8._2_2_,param_9,param_10,param_11,param_12,param_13,param_14,(int)param_15);
  }
  return 1;
}


