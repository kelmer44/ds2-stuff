// DIALOGPROC at 1068:006c

/* WARNING: Removing unreachable block (ram,0x10680c7c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __stdcall16far DIALOGPROC(undefined4 param_1,char *param_2,uint param_3,ushort param_4)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  char *a2;
  ushort a0;
  ushort uVar4;
  ushort uVar5;
  int in_DX;
  int iVar6;
  int *piVar7;
  ushort unaff_BP;
  short unaff_SI;
  int iVar8;
  int iVar9;
  undefined2 unaff_SS;
  long lVar10;
  char *pcVar11;
  undefined1 local_46 [32];
  undefined2 local_26;
  undefined2 uStackY_24;
  undefined2 uStackY_22;
  undefined2 uStackY_20;
  char *local_1e;
  char *pcStackY_1c;
  undefined4 in_stack_0000ffe8;
  int in_stack_0000ffec;
  int iVar12;
  void *pvVar13;
  char *pcVar14;
  char *pcVar15;
  uint uVar16;
  undefined2 uVar17;
  undefined2 uVar18;
  char *a1;
  int iVar19;
  
  iVar19 = (int)((ulong)in_stack_0000ffe8 >> 0x10);
  pcVar14 = (char *)s_Options_10e8_10e2 + 6;
  FUN_10d0_029e();
  local_26 = 0;
  uStackY_24 = 0;
  uStackY_22 = 0x45;
  uStackY_20 = 0x4f;
  if (param_3 == 0x47) {
    return 0;
  }
  iVar9 = (int)((ulong)param_1 >> 0x10);
  if (param_3 < 0x48) {
    if (param_3 == 0x46) {
      if (DAT_10e8_1db6 == 0) {
        return 0;
      }
LAB_1068_07ba:
      uVar5 = GETDC(DAT_10e8_76f8);
      if (0 < DAT_10e8_008a) {
        DAT_10e8_279e = 0;
        DAT_10e8_279c = 0;
        DAT_10e8_008a = 0;
        pcStackY_1c = (char *)s_Options_10e8_10e2 + 6;
        local_1e = (char *)0x653e;
        uStackY_20 = 0x13a8;
        uStackY_22 = 0x7ff;
        FUN_1078_1238();
        FUN_10a8_0092();
      }
      RELEASEDC(DAT_10e8_76f8,uVar5);
      return 0;
    }
    if (0x46 < param_3) {
      return 0;
    }
    bVar1 = (byte)param_3;
    if (bVar1 == 0x19) {
      SETBKMODE((ushort)param_2,1);
      return DAT_10e8_3eb4;
    }
    if (bVar1 < 0x1a) {
      if (bVar1 != 6) {
        if (bVar1 == 0xf) {
          uVar5 = BEGINPAINT(param_4,(undefined1 *)CONCAT22(unaff_SS,local_46));
          HMEMCPY((void *)CONCAT22(DAT_10e8_342e,DAT_10e8_342c),
                  (void *)CONCAT22(DAT_10e8_3432,DAT_10e8_3430),0xaf00);
          SENDDLGITEMMESSAGE(param_4,0x2bd,0x40c,0,0);
          SENDDLGITEMMESSAGE(param_4,0x2bd,0x40f,0,0);
          SENDDLGITEMMESSAGE(param_4,0x2bd,0x40c,0,0);
          lVar10 = SENDDLGITEMMESSAGE(param_4,0x2bd,0x409,0,0);
          DAT_10e8_1dbc = (ushort)lVar10;
          pcStackY_1c = DAT_10e8_86b6;
          local_1e = (char *)0x13a8;
          uStackY_20 = 0x1d0;
          FUN_1080_0d56();
          if (DAT_10e8_1dba != 0) {
            pcStackY_1c = DAT_10e8_86b6;
            local_1e = (char *)s_Options_10e8_107a + 6;
            uStackY_20 = 0x1fe;
            FUN_1080_0d56();
          }
          DAT_10e8_64f4 = SELECTOBJECT(DAT_10e8_9da0,DAT_10e8_9f3e);
          uVar2 = SELECTPALETTE(uVar5,DAT_10e8_200a,0);
          WinGStretchBlt_inferred((ushort)pcVar14,uVar2,uVar5,0,0,0x280,0x46,DAT_10e8_9da0,0,0);
          uVar2 = DAT_10e8_64f4;
          SELECTOBJECT(DAT_10e8_9da0,DAT_10e8_64f4);
          SELECTPALETTE(uVar5,uVar2,0);
          ENDPAINT(param_4,(undefined1 *)CONCAT22(unaff_SS,local_46));
          return 0;
        }
        if (bVar1 != 0x14) {
          return 0;
        }
        return 1;
      }
      goto LAB_1068_07ba;
    }
    if (bVar1 == 0x20) {
      GETCURSORPOS((undefined1 *)CONCAT22(unaff_SS,&stack0xffea));
      iVar9 = (in_stack_0000ffec - DAT_10e8_9f3a) + -0x19a;
      if (iVar19 - DAT_10e8_64f2 < 0) {
        return 0;
      }
      if ((int)DAT_10e8_9796 <= iVar19 - DAT_10e8_64f2) {
        return 0;
      }
      if (iVar9 < 0) {
        return 0;
      }
      if (DAT_10e8_7710 <= iVar9) {
        return 0;
      }
      pcStackY_1c = (char *)0x2c2;
      SENDDLGITEMMESSAGE(param_4,0x2bd,0x40f,0,0);
      pcStackY_1c = (char *)0x2d7;
      SENDDLGITEMMESSAGE(param_4,0x2bd,0x40c,0,0);
      pcVar14 = (char *)0x13a8;
      uVar5 = param_4;
      uVar2 = GETDC(param_4);
      iVar9 = 0;
      iVar19 = DAT_10e8_7710;
      do {
        if ((int)pcVar14 <= (int)uVar5) break;
        pcStackY_1c = (char *)0x30a;
        lVar10 = SENDDLGITEMMESSAGE(param_4,0x2bd,0x40a,uVar5,0x10e890b4);
        pcVar14 = (char *)s_Options_10e8_10e2 + 6;
        iVar12 = -0x6f4c;
        pcStackY_1c = (char *)0x13a8;
        local_1e = (char *)0x333;
        sVar3 = DRAWTEXT(uVar2,(void *)0x10e890b4,(short)lVar10,
                         (char **)CONCAT22(unaff_SS,&local_1e),0x410);
        if (iVar19 < 6) {
          uVar5 = 0xffff;
          break;
        }
        if (iVar12 < sVar3) break;
        iVar19 = iVar19 - sVar3;
        uVar5 = uVar5 + 1;
        iVar9 = iVar9 + 1;
      } while (iVar9 != 3);
      RELEASEDC(param_4,uVar2);
      if (iVar9 == 3) {
        MESSAGEBEEP(0x10);
        return 0;
      }
      if (uVar2 == uVar5) {
        uVar5 = 0xffff;
      }
      if ((int)uVar5 < 0) {
        return 0;
      }
      pcStackY_1c = (char *)0x386;
      SENDDLGITEMMESSAGE(param_4,0x2bd,0x407,uVar5,0);
      return 0;
    }
    if (bVar1 != 0x2b) {
      if (bVar1 == 0x2c) {
        lVar10 = SENDDLGITEMMESSAGE(param_4,0x2bd,0x40a,*(ushort *)((int)param_1 + 4),0x10e890b4);
        sVar3 = (short)lVar10;
        uVar5 = GETDC(param_4);
        pcStackY_1c = (char *)0x0;
        local_1e = (char *)0x0;
        *(undefined2 *)((int)param_1 + 6) = 0x1d0;
        sVar3 = DRAWTEXT(uVar5,(void *)0x10e890b4,sVar3,(char **)CONCAT22(unaff_SS,&local_1e),0x410)
        ;
        *(short *)((int)param_1 + 8) = sVar3;
        goto LAB_1068_0654;
      }
      if (bVar1 != 0x2e) {
        return 0;
      }
      if ((param_2 == (char *)0x26) || (param_2 == (char *)0x68)) {
        SENDDLGITEMMESSAGE(param_4,0x2bd,0xb,0,0);
        lVar10 = SENDDLGITEMMESSAGE(param_4,0x2bd,0x409,0,0);
        uVar5 = (ushort)lVar10;
        SENDDLGITEMMESSAGE(param_4,0x2bd,0x40c,0,0);
        if (uVar5 == 0) goto LAB_1068_0735;
        uVar5 = uVar5 - 1;
      }
      else {
        if ((param_2 != (char *)0x28) && (param_2 != (char *)0x62)) {
          return 0xffff;
        }
        SENDDLGITEMMESSAGE(param_4,0x2bd,0xb,0,0);
        lVar10 = SENDDLGITEMMESSAGE(param_4,0x2bd,0x409,0,0);
        uVar5 = (ushort)lVar10;
        lVar10 = SENDDLGITEMMESSAGE(param_4,0x2bd,0x40c,0,0);
        if ((int)lVar10 + -1 <= (int)uVar5) goto LAB_1068_0735;
        uVar5 = uVar5 + 1;
      }
      SENDDLGITEMMESSAGE(param_4,0x2bd,0x407,uVar5,0);
LAB_1068_0735:
      DAT_10e8_1dbc = uVar5;
      SENDDLGITEMMESSAGE(param_4,0x2bd,0xb,1,0);
      uVar5 = GETDLGITEM(param_4,0x2bd);
      INVALIDATERECT(uVar5,(void *)0x0,0);
      return 0xfffe;
    }
    if (DAT_10e8_977a == 0 && DAT_10e8_9778 == 0) {
      return 0;
    }
    DAT_10e8_64f4 = SELECTOBJECT(DAT_10e8_9da0,DAT_10e8_9f3e);
    HMEMCPY((void *)CONCAT22(DAT_10e8_342e,DAT_10e8_342c),
            (void *)CONCAT22(DAT_10e8_3432,DAT_10e8_3430),0xaf00);
    SETBKMODE(DAT_10e8_9da0,1);
    lVar10 = SENDDLGITEMMESSAGE(param_4,0x2bd,0x40f,0,0);
    uVar4 = (ushort)lVar10;
    a1 = (char *)(uint)(uVar4 != 0);
    SENDDLGITEMMESSAGE(param_4,0x2bd,0x409,0,0);
    pvVar13 = (void *)0x0;
    uVar5 = param_4;
    pcVar11 = (char *)SENDDLGITEMMESSAGE(param_4,0x2bd,0x40c,0,0);
    pcVar15 = (char *)pcVar11;
    pcStackY_1c = (char *)DAT_10e8_9f3a;
    local_1e = (char *)0x5f;
    DAT_10e8_1dba = 0;
    uVar2 = uVar4;
    do {
      if ((int)pcVar15 <= (int)uVar4) break;
      if (uVar5 == uVar4) {
        uVar18 = 0xff;
        uVar17 = 0xffff;
      }
      else {
        uVar18 = 0x7d;
        uVar17 = 0xa5ee;
      }
      SETTEXTCOLOR(DAT_10e8_9da0,CONCAT22(uVar18,uVar17));
      lVar10 = SENDDLGITEMMESSAGE(param_4,0x2bd,0x40a,uVar4,0x10e890b4);
      unaff_SI = (short)lVar10;
      DRAWTEXT(DAT_10e8_9da0,(void *)0x10e890b4,unaff_SI,(char **)CONCAT22(unaff_SS,&local_1e),0x10)
      ;
      if (uVar5 == uVar4) {
        pvVar13 = (void *)0x1dbe;
        a2 = pcStackY_1c;
      }
      else {
        a2 = (char *)((int)pcStackY_1c + -3);
        pvVar13 = (void *)0x1dc0;
      }
      a1 = local_1e + -0xc;
      pcVar15 = (char *)s_Options_10e8_10e2 + 6;
      TEXTOUT(DAT_10e8_9da0,(short)a1,(short)a2,
              (void *)CONCAT22((char *)s_Options_10e8_10e2 + 6,pvVar13),1);
      uVar4 = uVar4 + 1;
      pcStackY_1c = (char *)((int)pcStackY_1c + (int)a2);
    } while ((int)pcStackY_1c < DAT_10e8_7710 + DAT_10e8_9f3a + -8);
    if ((DAT_10e8_7710 + DAT_10e8_9f3a + 8 <= (int)pcStackY_1c) && (uVar4 - uVar5 == 1)) {
      a0 = GETDLGITEM(param_4,0x2bd);
      a1 = (char *)0x418;
      pcVar15 = (char *)0x0;
      pvVar13 = (void *)0x0;
      POSTMESSAGE(a0,0x418,uVar5,0);
    }
    if (DAT_10e8_7710 + DAT_10e8_9f3a + 8 <= (int)pcStackY_1c) {
      pvVar13 = (void *)0x1;
    }
    if ((int)uVar4 < (int)pcVar15) {
      pvVar13 = (void *)0x1;
    }
    if ((a1 == (char *)0x0) || (pvVar13 == (void *)0x0)) {
      if (a1 == (char *)0x0) {
        if (pvVar13 == (void *)0x0) {
          DAT_10e8_1dba = 0;
        }
        else {
          DAT_10e8_1dba = -0x78d4;
        }
      }
      else {
        DAT_10e8_1dba = -0x78bc;
      }
    }
    else {
      DAT_10e8_1dba = -0x78a4;
    }
    uVar5 = *(ushort *)((int)param_1 + 0xc);
    uVar4 = SELECTPALETTE(uVar5,DAT_10e8_200a,0);
    pcStackY_1c = (char *)0x593;
    WinGStretchBlt_inferred
              (uVar2,unaff_SI,uVar5,0,0,0x1e0,DAT_10e8_7710,DAT_10e8_9da0,0x50,DAT_10e8_9f3a);
    SELECTOBJECT(DAT_10e8_9da0,DAT_10e8_64f4);
    SELECTPALETTE(uVar5,uVar4,0);
    uVar5 = GETDC(param_4);
    pcStackY_1c = (char *)0x13a8;
    local_1e = (char *)0x5d6;
    FUN_1080_0d56();
    if (DAT_10e8_1dba != 0) {
      pcStackY_1c = (char *)s_Options_10e8_107a + 6;
      local_1e = (char *)0x604;
      FUN_1080_0d56();
    }
    DAT_10e8_64f4 = SELECTOBJECT(DAT_10e8_9da0,DAT_10e8_9f3e);
    uVar2 = SELECTPALETTE(uVar5,DAT_10e8_200a,0);
    WinGStretchBlt_inferred(unaff_BP,(short)pcVar14,uVar5,0,0,0x50,0x46,DAT_10e8_9da0,0,0);
    SELECTOBJECT(DAT_10e8_9da0,DAT_10e8_64f4);
    param_4 = 0x651;
    SELECTPALETTE(uVar5,uVar2,0);
    goto LAB_1068_0654;
  }
  if (param_3 == 0x200) {
LAB_1068_081a:
    uVar5 = DAT_10e8_653c;
    if (DAT_10e8_1db6 != 0) {
      uVar5 = 0;
    }
    SETCURSOR(uVar5);
  }
  else {
    if (param_3 < 0x201) {
      if (param_3 == 0x84) goto LAB_1068_081a;
      if (param_3 != 0x110) {
        if (param_3 != 0x111) {
          if (param_3 != 0x112) {
            return 0;
          }
          switch(((uint)param_2 & 0xfff0) + 0x1000 >> 3) {
          case 0:
          case 2:
          case 4:
          case 8:
          case 10:
          case 0xc:
          case 0x20:
          case 0x24:
          case 0x26:
          case 0x28:
            goto switchD_1068_0c8b_caseD_0;
          default:
            return 0;
          }
        }
        if (((iVar9 == 2) || (param_2 == (char *)0x1)) && (DAT_10e8_1db6 == 0)) {
          lVar10 = SENDDLGITEMMESSAGE(param_4,0x2bd,0x409,0,0);
          if ((int)lVar10 < 0) {
            return 1;
          }
          DAT_10e8_1db6 = 1;
          DAT_10e8_3434 = FUN_1068_11da();
          DAT_10e8_3436 = (int)((ulong)lVar10 >> 0x10);
          sVar3 = (short)lVar10;
          SENDDLGITEMMESSAGE(param_4,0x2bd,0x405,0,0);
          DAT_10e8_64f4 = SELECTOBJECT(DAT_10e8_9da0,DAT_10e8_9f3e);
          HMEMCPY((void *)CONCAT22(DAT_10e8_342e,DAT_10e8_342c),
                  (void *)CONCAT22(DAT_10e8_3432,DAT_10e8_3430),0xaf00);
          uVar5 = GETDC(param_4);
          uVar2 = SELECTPALETTE(uVar5,DAT_10e8_200a,0);
          pcStackY_1c = (char *)0xc31;
          WinGStretchBlt_inferred
                    (uVar2,sVar3,uVar5,DAT_10e8_64f2,DAT_10e8_9f3a,DAT_10e8_9796,DAT_10e8_7710,
                     DAT_10e8_9da0,DAT_10e8_64f2,DAT_10e8_9f3a);
          SELECTOBJECT(DAT_10e8_9da0,DAT_10e8_64f4);
          SELECTPALETTE(uVar5,uVar5,0);
          RELEASEDC(param_4,uVar5);
          SETCURSOR(0);
          return 1;
        }
        if (DAT_10e8_1db6 == 0) {
          return 0;
        }
        if (param_2 != (char *)0x1) {
          return 0;
        }
LAB_1068_0d96:
        uVar5 = GETDC(DAT_10e8_76f8);
        param_4 = DAT_10e8_76f8;
        if (0 < DAT_10e8_008a) {
          DAT_10e8_279e = 0;
          DAT_10e8_279c = 0;
          DAT_10e8_008a = 0;
          pcStackY_1c = (char *)s_Options_10e8_10e2 + 6;
          local_1e = (char *)0x653e;
          uStackY_20 = 0x13a8;
          uStackY_22 = 0xddb;
          FUN_1078_1238();
          FUN_10a8_0092();
          param_4 = DAT_10e8_76f8;
        }
LAB_1068_0654:
        RELEASEDC(param_4,uVar5);
switchD_1068_0c8b_caseD_0:
        return 1;
      }
      DAT_10e8_7712 = param_4;
      DAT_10e8_9796 = 0x1e0;
      DAT_10e8_7710 = 0x32;
      DAT_10e8_64f2 = 0x50;
      DAT_10e8_9f3a = 10;
      local_1e = (char *)0x0;
      pcStackY_1c = (char *)0x19a;
      SYSTEMPARAMETERSINFO(2,0,(void *)0x0,0);
      DAT_10e8_8e3a = param_4;
      DAT_10e8_9da0 = DAT_10e8_6546;
      pcVar14 = (char *)FUN_1090_0000();
      _DAT_10e8_86b6 = (char *)CONCAT22(in_DX,pcVar14);
      HMEMCPY((char *)CONCAT22(in_DX,pcVar14),(void *)CONCAT22(DAT_10e8_1fd0,DAT_10e8_1fce),0x428);
      uVar17 = (undefined2)((ulong)_DAT_10e8_86b6 >> 0x10);
      pcVar14 = (char *)_DAT_10e8_86b6;
      piVar7 = (int *)(pcVar14 + 8);
      if ((*(int *)(pcVar14 + 10) < 0) || ((*(int *)(pcVar14 + 10) < 1 && (*piVar7 == 0)))) {
        *piVar7 = -0x46;
        (pcVar14 + 10)[0] = -1;
        (pcVar14 + 10)[1] = -1;
      }
      else {
        *piVar7 = 0x46;
        (pcVar14 + 10)[0] = '\0';
        (pcVar14 + 10)[1] = '\0';
      }
      uVar17 = (undefined2)((ulong)_DAT_10e8_86b6 >> 0x10);
      pcVar14 = (char *)_DAT_10e8_86b6;
      pcVar11 = pcVar14 + 4;
      pcVar11[0] = -0x80;
      pcVar11[1] = '\x02';
      pcVar11 = pcVar14 + 6;
      pcVar11[0] = '\0';
      pcVar11[1] = '\0';
      DAT_10e8_9f3e = WinGCreateBitmap_inferred(DAT_10e8_9da0,_DAT_10e8_86b6,&DAT_10e8_342c);
      FUN_1080_0890();
      FUN_1080_0ad6();
      FUN_1080_0890();
      FUN_1080_0ad6();
      FUN_1080_0890();
      FUN_1080_0ad6();
      FUN_1080_0890();
      FUN_1080_0ad6();
      FUN_1008_0f86();
      pcStackY_1c = DAT_10e8_86b6;
      local_1e = (char *)s_Set_memory_buffer_10e8_0ff8 + 0x10;
      uStackY_20 = 0x9d1;
      iVar19 = DAT_10e8_6894;
      FUN_1080_0d56();
      DAT_10e8_3430 = (void *)FUN_1090_0000();
      DAT_10e8_3432 = iVar19;
      HMEMCPY((void *)CONCAT22(iVar19,DAT_10e8_3430),(void *)CONCAT22(DAT_10e8_342e,DAT_10e8_342c),
              0xaf00);
      iVar19 = 0xc80;
      iVar9 = 0x3c;
      do {
        iVar8 = 0x208;
        iVar12 = iVar19 + 0x3c;
        do {
          iVar19 = iVar12;
          iVar6 = DAT_10e8_3432;
          *(undefined1 *)(iVar19 + (int)DAT_10e8_3430) =
               ((undefined1 *)&DAT_10e8_93b4)[*(byte *)(iVar19 + (int)DAT_10e8_342c)];
          iVar8 = iVar8 + -1;
          iVar12 = iVar19 + 1;
        } while (iVar8 != 0);
        iVar19 = iVar19 + 0x3d;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      pcStackY_1c = DAT_10e8_86b6;
      local_1e = (char *)0x13a8;
      uStackY_20 = 0xa99;
      FUN_1080_0d56();
      SETCLASSWORD(param_4,-0xc,0);
      MOVEWINDOW(param_4,0,0x19a,0x280,0x46,0);
      uVar5 = GETDLGITEM(param_4,0x2bd);
      SETCLASSWORD(uVar5,-0xc,0);
      MOVEWINDOW(uVar5,DAT_10e8_64f2,DAT_10e8_9f3a,DAT_10e8_9796,DAT_10e8_7710,0);
      FUN_1060_0b26();
      DAT_10e8_3434 = FUN_1068_1030();
      DAT_10e8_3436 = iVar6;
      if (iVar6 == 0 && DAT_10e8_3434 == 0) {
        SYSTEMPARAMETERSINFO(2,0,(void *)0x0,0);
        FUN_1068_0000();
        ENDDIALOG(param_4,0);
      }
      SENDDLGITEMMESSAGE(param_4,0x2bd,0x407,0,0);
      SETCURSOR(DAT_10e8_653c);
      uVar16 = 0;
      POSTMESSAGE(uVar5,0x104,0x79,0);
      param_4 = 0x105;
      uVar2 = 0x79;
      uVar5 = 0;
    }
    else {
      if (param_3 == 0x202) {
        if ((int)param_1 < 0xf) {
          return 1;
        }
        if (0x21 < (int)param_1) {
          return 1;
        }
        if (iVar9 < 0x18) {
          return 1;
        }
        if (0x38 < iVar9) {
          return 1;
        }
        if (iVar9 == 0x28) {
          return 1;
        }
        SENDDLGITEMMESSAGE(param_4,0x2bd,0xb,0,0);
        lVar10 = SENDDLGITEMMESSAGE(param_4,0x2bd,0x409,0,0);
        iVar19 = (int)lVar10;
        lVar10 = SENDDLGITEMMESSAGE(param_4,0x2bd,0x40c,0,0);
        if (iVar9 < 0x28) {
          if (iVar19 == 0) goto LAB_1068_0d56;
          DAT_10e8_1dbc = iVar19 - 1;
        }
        else {
          if ((int)lVar10 + -1 <= iVar19) goto LAB_1068_0d56;
          DAT_10e8_1dbc = iVar19 + 1;
        }
        SENDDLGITEMMESSAGE(param_4,0x2bd,0x407,DAT_10e8_1dbc,0);
LAB_1068_0d56:
        SENDDLGITEMMESSAGE(param_4,0x2bd,0xb,1,0);
        INVALIDATERECT(param_4,(undefined2 *)CONCAT22(unaff_SS,&local_26),0);
        uVar5 = GETDLGITEM(param_4,0x2bd);
        INVALIDATERECT(uVar5,(void *)0x0,0);
        return 0;
      }
      if (param_3 == 0x205) {
        if (DAT_10e8_1db6 == 0) {
          return 0;
        }
        goto LAB_1068_0d96;
      }
      if (param_3 != 0x210) {
        if (param_3 != 0x400) {
          return 0;
        }
        if (param_2 != (char *)s_put_vfw_destination_at__d__d__d___10e8_1acd + 0xd) {
          return 0;
        }
        DAT_10e8_1db6 = 0;
        SETCURSOR(DAT_10e8_653c);
        DAT_10e8_3434 = FUN_1068_1030();
        DAT_10e8_3436 = in_DX;
        if (in_DX == 0 && DAT_10e8_3434 == 0) {
          SYSTEMPARAMETERSINFO(2,1,(void *)0x0,0);
          FUN_1068_0000();
          ENDDIALOG(param_4,0);
          return 1;
        }
        lVar10 = SENDDLGITEMMESSAGE(param_4,0x2bd,0x40c,0,0);
        if ((int)lVar10 <= (int)DAT_10e8_1dbc) {
          DAT_10e8_1dbc = (int)lVar10 - 1;
        }
        if ((int)DAT_10e8_1dbc < 0) {
          DAT_10e8_1dbc = 0;
        }
        SENDDLGITEMMESSAGE(param_4,0x2bd,0x407,DAT_10e8_1dbc,0);
        return 1;
      }
      if ((param_2 == (char *)0x204) && (DAT_10e8_1db6 != 0)) {
        POSTMESSAGE(param_4,0x205,0,0);
      }
      if (param_2 != (char *)0x201) {
        return 0;
      }
      if (DAT_10e8_1db6 != 0) {
        return 0;
      }
      uVar2 = 0x111;
      uVar5 = 0x2bd;
      uVar16 = 2;
    }
    POSTMESSAGE(param_4,uVar2,uVar5,(ulong)uVar16 << 0x10);
  }
  return 0;
}


