// FUN_1048_19fc at 1048:19fc

void __cdecl16far FUN_1048_19fc(char *param_1)

{
  char *pcVar1;
  undefined2 *puVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  undefined2 *puVar6;
  char *pcVar7;
  undefined2 uVar8;
  undefined2 in_DX;
  undefined2 uVar9;
  undefined2 unaff_SS;
  void *pvVar10;
  undefined1 local_266 [512];
  undefined1 local_66 [80];
  undefined4 uStackY_16;
  char *pcStackY_12;
  char *pcVar11;
  undefined1 *puVar12;
  
  FUN_10d0_029e();
switchD_1048_1a33_caseD_9:
  pcVar5 = (char *)s_Too_many_frames_in_one_animation_10e8_1a01 + 0x1c;
  iVar4 = FUN_1048_0000();
  if (iVar4 == 0x1f) {
    return;
  }
  pcVar7 = (char *)s_Options_10e8_1047 + 1;
  switch(iVar4) {
  case 1:
    if (0 < (int)(pcVar5 + 1)) {
      pcVar11 = (char *)s_window_vfw_handle__d_10e8_1a84 + 1;
      pcVar7 = (char *)FUN_1090_0000();
      param_1 = (char *)CONCAT22(in_DX,pcVar7);
      pcVar5 = pcVar7;
      for (iVar4 = 0x4a; iVar4 != 0; iVar4 = iVar4 + -1) {
        pcVar1 = pcVar5;
        pcVar5 = pcVar5 + 2;
        pcVar1[0] = '\0';
        pcVar1[1] = '\0';
      }
      *pcVar5 = '\0';
      *(char **)(pcStackY_12 + 0x91) = pcVar7;
      *(undefined2 *)(pcStackY_12 + 0x93) = in_DX;
    }
    uStackY_16 = param_1;
    pcVar5 = (char *)s_fullscreen_10e8_1ac2 + 2;
    in_DX = param_1._2_2_;
    uVar9 = FUN_1090_0000();
    *(undefined2 *)(char *)param_1 = uVar9;
    *(undefined2 *)((char *)param_1 + 2) = in_DX;
    puVar6 = *(undefined2 **)(char *)param_1;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar2 = 0;
    }
    puVar12 = local_266;
    pcStackY_12 = (char *)s_Options_10e8_108c + 4;
    uStackY_16 = (char *)CONCAT22((char *)s_play_vfw__s_from_0_wait_10e8_1af1 + 6,(char *)uStackY_16
                                 );
    FUN_1060_0652();
    ((char *)param_1 + 0x14)[0] = '\x01';
    ((char *)param_1 + 0x14)[1] = '\0';
    pcStackY_12 = (char *)param_1;
    goto switchD_1048_1a33_caseD_9;
  case 2:
    FUN_1060_0188();
    pcStackY_12 = (char *)s_ReadSpeed_10e8_105f + 1;
    uStackY_16 = (char *)CONCAT22((char *)s_EraseMike_10e8_1b2f + 4,(char *)uStackY_16);
    FUN_1060_0c44();
    FUN_1060_0188();
    pcStackY_12 = (char *)s_ReadSpeed_10e8_105f + 1;
    uStackY_16 = (char *)CONCAT22((char *)s_LastAction_10e8_1b58 + 4,(char *)uStackY_16);
    FUN_1060_0c44();
    FUN_1060_0188();
    pcStackY_12 = (char *)s_ReadSpeed_10e8_105f + 1;
    uStackY_16 = (char *)CONCAT22((char *)s_SysMapBlock_10e8_1b85 + 8,(char *)uStackY_16);
    FUN_1060_0c44();
    FUN_1060_0188();
    pcStackY_12 = (char *)s_ReadSpeed_10e8_105f + 1;
    uStackY_16 = (char *)CONCAT22((char *)s_play_vfw_from_0_notify_10e8_1ba8 + 0xc,
                                  (char *)uStackY_16);
    iVar4 = FUN_1060_0c44();
    if (iVar4 != 1) {
      ((char *)param_1 + 0xc)[0] = '\0';
      ((char *)param_1 + 0xc)[1] = '\0';
    }
    FUN_1060_0188();
    pcStackY_12 = (char *)s_ReadSpeed_10e8_105f + 1;
    uStackY_16 = (char *)CONCAT22((char *)s__avi_nostatic_alias_vfw_10e8_1be4 + 5,(char *)uStackY_16
                                 );
    in_DX = param_1._2_2_;
    iVar4 = FUN_1060_0c44();
    if (iVar4 != 1) {
      ((char *)param_1 + 0x12)[0] = '\0';
      ((char *)param_1 + 0x12)[1] = '\0';
    }
    goto switchD_1048_1a33_caseD_9;
  case 3:
    pcStackY_12 = (char *)s_Options_10e8_1047 + 1;
    uStackY_16 = (char *)CONCAT22((char *)s_window_vfw_handle__d_10e8_1c12 + 4,(char *)uStackY_16);
    LSTRCPY((char *)CONCAT22(param_1._2_2_,(char *)param_1 + 0x4b),
            (undefined1 *)CONCAT22(unaff_SS,local_266));
    pcStackY_12 = (char *)0x13a8;
    uStackY_16 = (char *)CONCAT22((char *)s_window_vfw_handle__d_10e8_1c12 + 0x14,(char *)uStackY_16
                                 );
    LSTRCPY((undefined1 *)CONCAT22(unaff_SS,local_66),(undefined1 *)CONCAT22(unaff_SS,local_266));
    pcStackY_12 = (char *)0x13a8;
    uStackY_16 = (char *)CONCAT22((char *)s_setvideo_vfw_palette_handle_to___10e8_1c27 + 0xd,
                                  (char *)uStackY_16);
    pvVar10 = LSTRCAT((undefined1 *)CONCAT22(unaff_SS,local_66),(void *)0x10e81a23);
    uVar8 = (undefined2)((ulong)pvVar10 >> 0x10);
    pcStackY_12 = (char *)s_setvideo_vfw_palette_handle_to___10e8_1c27 + 0x1c;
    uVar9 = FUN_1098_0326();
    *(undefined2 *)((char *)param_1 + 0x16) = uVar9;
    *(undefined2 *)((char *)param_1 + 0x18) = uVar8;
    iVar4 = 0;
    cVar3 = **(char **)((char *)param_1 + 0x16);
    while ((cVar3 != '\r' && (*(char *)(iVar4 + *(int *)((char *)param_1 + 0x16)) != '\0'))) {
      iVar4 = iVar4 + 1;
      cVar3 = *(char *)(iVar4 + *(int *)((char *)param_1 + 0x16));
    }
    in_DX = *(undefined2 *)((char *)param_1 + 0x18);
    *(undefined1 *)(iVar4 + *(int *)((char *)param_1 + 0x16)) = 0;
    goto switchD_1048_1a33_caseD_9;
  case 4:
    pcVar5 = (char *)param_1 + 0x3e;
    break;
  case 5:
    pcVar5 = (char *)param_1 + 0x4b;
    break;
  case 6:
    pcVar5 = (char *)param_1 + 0x31;
    break;
  case 7:
    FUN_1060_0188();
    pcStackY_12 = (char *)s_ReadSpeed_10e8_105f + 1;
    uStackY_16 = (char *)CONCAT22((char *)s_put_vfw_destination_at_10e8_1d0c + 9,(char *)uStackY_16)
    ;
    FUN_1060_0c44();
    FUN_1060_0188();
    pcStackY_12 = (char *)s_ReadSpeed_10e8_105f + 1;
    uStackY_16 = (char *)CONCAT22(0x1d3f,(char *)uStackY_16);
    FUN_1060_0c44();
    FUN_1060_0188();
    pcStackY_12 = (char *)s_ReadSpeed_10e8_105f + 1;
    uStackY_16 = (char *)CONCAT22((char *)s__d___Var__d_____s____d_10e8_1d5b + 0xe,
                                  (char *)uStackY_16);
    FUN_1060_0c44();
    FUN_1060_0188();
    pcStackY_12 = (char *)s_ReadSpeed_10e8_105f + 1;
    uStackY_16 = (char *)CONCAT22((char *)s_programmer_error__game_variable___10e8_1d7c + 0x17,
                                  (char *)uStackY_16);
    FUN_1060_0c44();
    FUN_1060_0062();
    pcStackY_12 = (char *)s_ReadSpeed_10e8_105f + 1;
    uStackY_16 = (char *)CONCAT22((undefined2 *)&DAT_10e8_1dbc,(char *)uStackY_16);
    LSTRCPY((char *)CONCAT22(param_1._2_2_,(char *)param_1 + 0x1a),
            (undefined1 *)CONCAT22(unaff_SS,local_66));
    FUN_1060_0188();
    goto LAB_1048_1dd8;
  case 8:
    in_DX = param_1._2_2_;
    goto LAB_1048_1df7;
  default:
    goto switchD_1048_1a33_caseD_9;
  case 0xd:
    pcVar5 = (char *)param_1 + 0x58;
    break;
  case 0xe:
    ((char *)param_1 + 0x10)[0] = '\x01';
    ((char *)param_1 + 0x10)[1] = '\0';
    goto switchD_1048_1a33_caseD_9;
  case 0xf:
    FUN_1060_0188();
    pcStackY_12 = (char *)s_ReadSpeed_10e8_105f + 1;
    uStackY_16 = (char *)CONCAT22((char *)s_internal_error__talk_c_EntrySele_10e8_1e37 + 0xc,
                                  (char *)uStackY_16);
    FUN_1060_0c44();
    FUN_1060_0188();
    pcStackY_12 = (char *)s_ReadSpeed_10e8_105f + 1;
    uStackY_16 = (char *)CONCAT22((char *)s_SysTalking0_10e8_1e6c + 1,(char *)uStackY_16);
    FUN_1060_0c44();
    FUN_1060_0188();
LAB_1048_1dd8:
    pcVar7 = (char *)s_ReadSpeed_10e8_105f + 1;
LAB_1048_1ddd:
    uStackY_16 = (char *)CONCAT22((char *)s_dialog3_10e8_1dde + 5,(char *)uStackY_16);
    in_DX = param_1._2_2_;
    pcStackY_12 = pcVar7;
    FUN_1060_0c44();
    goto switchD_1048_1a33_caseD_9;
  case 0x14:
    goto LAB_1048_1ddd;
  case 0x15:
    uVar9 = 0;
    iVar4 = 0x18;
    pcVar7 = (char *)s_Options_10e8_108c + 4;
    puVar6 = (undefined2 *)FUN_1090_0000();
    *(undefined2 *)(iVar4 + 0x14) = puVar6;
    *(undefined2 *)(iVar4 + 0x16) = in_DX;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar2 = 0;
    }
    goto LAB_1048_1df7;
  case 0x19:
    pcVar7 = (char *)FUN_1090_0000();
    pcVar5 = pcVar7;
    for (iVar4 = 0x4a; iVar4 != 0; iVar4 = iVar4 + -1) {
      pcVar1 = pcVar5;
      pcVar5 = pcVar5 + 2;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
    }
    *pcVar5 = '\0';
    uVar9 = (undefined2)((ulong)uStackY_16 >> 0x10);
    *(char **)((char *)uStackY_16 + 0x8d) = pcVar7;
    *(undefined2 *)((char *)uStackY_16 + 0x8f) = in_DX;
    uStackY_16 = (char *)CONCAT22(in_DX,pcVar7);
    uVar9 = in_DX;
    uVar8 = FUN_1090_0000();
    *(undefined2 *)pcVar7 = uVar8;
    *(undefined2 *)(pcVar7 + 2) = uVar9;
    puVar6 = *(undefined2 **)pcVar7;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar2 = 0;
    }
    pcStackY_12 = (char *)s_Options_10e8_108c + 4;
    uStackY_16 = (char *)CONCAT22((char *)s_Speaker_10e8_1f48 + 6,(char *)uStackY_16);
    FUN_1060_0652();
    param_1 = (char *)CONCAT22(in_DX,pcVar7);
    in_DX = uVar9;
    goto switchD_1048_1a33_caseD_9;
  case 0x1d:
    in_DX = param_1._2_2_;
LAB_1048_1df7:
    uStackY_16 = (char *)CONCAT22((char *)s_Internal_error__compute_list_10e8_1def + 0x12,
                                  (char *)uStackY_16);
    pcStackY_12 = pcVar7;
    FUN_1060_0652();
    goto switchD_1048_1a33_caseD_9;
  }
  pcStackY_12 = (char *)s_Options_10e8_1047 + 1;
  uStackY_16 = (char *)CONCAT22((char *)s_LastAction_10e8_1cc9 + 9,(char *)uStackY_16);
  pvVar10 = LSTRCPY((char *)CONCAT22(param_1._2_2_,pcVar5),
                    (undefined1 *)CONCAT22(unaff_SS,local_266));
  in_DX = (undefined2)((ulong)pvVar10 >> 0x10);
  goto switchD_1048_1a33_caseD_9;
}


