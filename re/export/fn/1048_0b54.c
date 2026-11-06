// FUN_1048_0b54 at 1048:0b54

byte __cdecl16far FUN_1048_0b54(void *param_1)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 unaff_SS;
  bool bVar8;
  char acStackY_209 [501];
  char *pcStackY_14;
  char *pcStackY_12;
  
  FUN_10d0_029e();
  iVar5 = 0;
  do {
    iVar6 = iVar5;
    iVar5 = iVar6 + 1;
    cVar1 = *(char *)(DAT_10e8_16f4 + DAT_10e8_3416);
    acStackY_209[iVar6 + 1] = cVar1;
    bVar8 = 0xfffe < DAT_10e8_16f4;
    DAT_10e8_16f4 = DAT_10e8_16f4 + 1;
    DAT_10e8_16f6 = DAT_10e8_16f6 + (uint)bVar8;
  } while (cVar1 != '\n');
  acStackY_209[iVar6] = '\0';
  if (iVar5 == 2) {
    bVar3 = 0;
  }
  else {
    bVar8 = false;
    for (; -1 < iVar5; iVar5 = iVar5 + -1) {
      if ((acStackY_209[iVar5 + 1] == ';') || ((acStackY_209[iVar5 + 1] == ' ' && (!bVar8)))) {
        bVar8 = false;
        acStackY_209[iVar5 + 1] = '\0';
      }
      else {
        bVar8 = true;
      }
    }
    iVar5 = 0;
    do {
      iVar6 = iVar5;
      iVar5 = iVar6 + 1;
    } while (acStackY_209[iVar6 + 1] == ' ');
    do {
      iVar7 = iVar5;
      if (acStackY_209[iVar5 + 1] == '\0') break;
      iVar7 = iVar5 + 1;
      iVar2 = iVar5 + 1;
      iVar5 = iVar7;
    } while (acStackY_209[iVar2] != '=');
    pcStackY_12 = (char *)s_Options_10e8_10d0;
    pcStackY_14 = (char *)0xc10;
    LSTRCPY((void *)CONCAT22((char *)s_Options_10e8_10e2 + 6,param_1),
            (char *)CONCAT22(unaff_SS,acStackY_209 + iVar7 + 1));
    acStackY_209[iVar7 + 1] = '\0';
    DAT_10e8_16f8 = DAT_10e8_16f8 + 1;
    FUN_1060_0000();
    pcStackY_12 = (char *)s_ReadSpeed_10e8_105f + 1;
    pcStackY_14 = (char *)0xc34;
    sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),(void *)0x10e8181b);
    if (sVar4 == 0) {
      bVar3 = 1;
    }
    else {
      pcStackY_12 = (char *)0x13a8;
      pcStackY_14 = (char *)0xc4d;
      sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),s_CHANGE__10e8_1821);
      if (sVar4 == 0) {
        bVar3 = 8;
      }
      else {
        pcStackY_12 = (char *)0x13a8;
        pcStackY_14 = (char *)0xc67;
        sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),s_STATUS__10e8_1829);
        if (sVar4 == 0) {
          bVar3 = 0xb;
        }
        else {
          pcStackY_12 = (char *)0x13a8;
          pcStackY_14 = (char *)0xc81;
          sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),(void *)0x10e81831);
          if (sVar4 == 0) {
            bVar3 = 7;
          }
          else {
            pcStackY_12 = (char *)0x13a8;
            pcStackY_14 = (char *)0xc9b;
            sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),
                            s_SPRITEIDX__10e8_1837);
            if (sVar4 == 0) {
              bVar3 = 0x12;
            }
            else {
              pcStackY_12 = (char *)0x13a8;
              pcStackY_14 = (char *)0xcb5;
              sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),
                              s_EFFECT__10e8_1842);
              if (sVar4 == 0) {
                bVar3 = 4;
              }
              else {
                pcStackY_12 = (char *)0x13a8;
                pcStackY_14 = (char *)0xccf;
                sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),
                                s_DIALOG__10e8_184a);
                if (sVar4 == 0) {
                  bVar3 = 0xd;
                }
                else {
                  pcStackY_12 = (char *)0x13a8;
                  pcStackY_14 = (char *)0xce9;
                  sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),
                                  s_SPEECH__10e8_1852);
                  if (sVar4 == 0) {
                    bVar3 = 5;
                  }
                  else {
                    pcStackY_12 = (char *)0x13a8;
                    pcStackY_14 = (char *)0xd03;
                    sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),
                                    (void *)0x10e8185a);
                    if (sVar4 == 0) {
                      bVar3 = 3;
                    }
                    else {
                      pcStackY_12 = (char *)0x13a8;
                      pcStackY_14 = (char *)0xd1d;
                      sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),
                                      (void *)0x10e81860);
                      if (sVar4 != 0) {
                        pcStackY_12 = (char *)0x13a8;
                        pcStackY_14 = (char *)0xd37;
                        sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),
                                        s_LOADCOND__10e8_1868);
                        if (sVar4 == 0) {
                          return 0x1a;
                        }
                        pcStackY_12 = (char *)0x13a8;
                        pcStackY_14 = (char *)0xd51;
                        sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),
                                        s_LOOPCOND__10e8_1872);
                        if (sVar4 == 0) {
                          return 0x1b;
                        }
                        pcStackY_12 = (char *)0x13a8;
                        pcStackY_14 = (char *)0xd6b;
                        sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),
                                        s_LOOPPOINT__10e8_187c);
                        if (sVar4 == 0) {
                          return 0x1c;
                        }
                        pcStackY_12 = (char *)0x13a8;
                        pcStackY_14 = (char *)0xd85;
                        sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),
                                        (void *)0x10e81887);
                        if (sVar4 == 0) {
                          return 0x15;
                        }
                        pcStackY_12 = (char *)0x13a8;
                        pcStackY_14 = (char *)0xd9f;
                        sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),
                                        s_WAITUNTIL__10e8_188e);
                        if (sVar4 == 0) {
                          return 0x19;
                        }
                        pcStackY_12 = (char *)0x13a8;
                        pcStackY_14 = (char *)0xdb9;
                        sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),
                                        s_PICTURE__10e8_1899);
                        if (sVar4 == 0) {
                          return 6;
                        }
                        pcStackY_12 = (char *)0x13a8;
                        pcStackY_14 = (char *)0xdd3;
                        sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),
                                        s_ENDINDEX__10e8_18a2);
                        if (sVar4 == 0) {
                          return 9;
                        }
                        pcStackY_12 = (char *)0x13a8;
                        pcStackY_14 = (char *)0xded;
                        sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),
                                        (void *)0x10e818ac);
                        if (sVar4 == 0) {
                          return 0xc;
                        }
                        pcStackY_12 = (char *)0x13a8;
                        pcStackY_14 = (char *)0xe07;
                        sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),
                                        s_STARTINDEX__10e8_18b2);
                        if (sVar4 == 0) {
                          return 10;
                        }
                        pcStackY_12 = (char *)0x13a8;
                        pcStackY_14 = (char *)0xe21;
                        sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),
                                        s_SEQUENCE__10e8_18be);
                        if (sVar4 == 0) {
                          return 0x11;
                        }
                        pcStackY_12 = (char *)0x13a8;
                        pcStackY_14 = (char *)0xe3b;
                        sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),
                                        (void *)0x10e818c8);
                        if (sVar4 == 0) {
                          return 0x16;
                        }
                        pcStackY_12 = (char *)0x13a8;
                        pcStackY_14 = (char *)0xe55;
                        sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),
                                        (void *)0x10e818ce);
                        if (sVar4 == 0) {
                          return 0x17;
                        }
                        pcStackY_12 = (char *)0x13a8;
                        pcStackY_14 = (char *)0xe6f;
                        sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),
                                        s_SCALEVAL__10e8_18d4);
                        if (sVar4 == 0) {
                          return 0x18;
                        }
                        pcStackY_12 = (char *)0x13a8;
                        pcStackY_14 = (char *)0xe89;
                        sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),
                                        s_PALETTECHANGE__10e8_18de);
                        if (sVar4 == 0) {
                          return 0x14;
                        }
                        pcStackY_12 = (char *)0x13a8;
                        pcStackY_14 = (char *)0xea3;
                        sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),
                                        s_ENTRYSTART__10e8_18ed);
                        if (sVar4 == 0) {
                          return 0x1e;
                        }
                        pcStackY_12 = (char *)0x13a8;
                        pcStackY_14 = (char *)0xebd;
                        sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),
                                        s_ENTRYEND__10e8_18f9);
                        if (sVar4 == 0) {
                          return 0x1f;
                        }
                        pcStackY_12 = (char *)0x13a8;
                        pcStackY_14 = (char *)0xed7;
                        sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),
                                        s_GOSTART__10e8_1903);
                        if (sVar4 == 0) {
                          return 0x20;
                        }
                        pcStackY_12 = (char *)0x13a8;
                        pcStackY_14 = (char *)0xef1;
                        sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),
                                        (void *)0x10e8190c);
                        if (sVar4 == 0) {
                          return 0x21;
                        }
                        pcStackY_12 = (char *)0x13a8;
                        pcStackY_14 = (char *)0xf0b;
                        sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),
                                        s_LOOKSTART__10e8_1913);
                        if (sVar4 == 0) {
                          return 0x22;
                        }
                        pcStackY_12 = (char *)0x13a8;
                        pcStackY_14 = (char *)0xf25;
                        sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),
                                        s_LOOKEND__10e8_191e);
                        if (sVar4 == 0) {
                          return 0x23;
                        }
                        pcStackY_12 = (char *)0x13a8;
                        pcStackY_14 = (char *)0xf3f;
                        sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),
                                        s_MUSICSTART__10e8_1927);
                        if (sVar4 == 0) {
                          return 0x24;
                        }
                        pcStackY_12 = (char *)0x13a8;
                        pcStackY_14 = (char *)0xf59;
                        sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),
                                        s_MUSICEND__10e8_1933);
                        if (sVar4 == 0) {
                          return 0x25;
                        }
                        pcStackY_12 = (char *)0x13a8;
                        pcStackY_14 = (char *)0xf73;
                        sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),
                                        s_MIRRORSTART__10e8_193d);
                        if (sVar4 == 0) {
                          return 0x26;
                        }
                        pcStackY_12 = (char *)0x13a8;
                        pcStackY_14 = (char *)0xf8d;
                        sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),
                                        s_MIRROREND__10e8_194a);
                        if (sVar4 == 0) {
                          return 0x27;
                        }
                        pcStackY_12 = (char *)0x13a8;
                        pcStackY_14 = (char *)0xfa7;
                        sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),
                                        s_PALETTESTART__10e8_1955);
                        if (sVar4 == 0) {
                          return 0x28;
                        }
                        pcStackY_12 = (char *)0x13a8;
                        pcStackY_14 = (char *)0xfc1;
                        sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),
                                        s_PALETTEEND__10e8_1963);
                        if (sVar4 == 0) {
                          return 0x29;
                        }
                        pcStackY_12 = (char *)0x13a8;
                        pcStackY_14 = (char *)0xfdb;
                        sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),
                                        s_SPRITESTART__10e8_196f);
                        if (sVar4 == 0) {
                          return 0x2a;
                        }
                        pcStackY_12 = (char *)0x13a8;
                        pcStackY_14 = (char *)0xff5;
                        sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),
                                        s_SPRITEEND__10e8_197c);
                        if (sVar4 == 0) {
                          return 0x2b;
                        }
                        pcStackY_12 = (char *)0x13a8;
                        pcStackY_14 = (char *)s_GoingOut_10e8_100a + 5;
                        sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),
                                        s_USESTART__10e8_1987);
                        if (sVar4 == 0) {
                          return 0x2c;
                        }
                        pcStackY_12 = (char *)0x13a8;
                        pcStackY_14 = (char *)s_Options_10e8_1024 + 5;
                        sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),
                                        s_USEEND__10e8_1991);
                        if (sVar4 == 0) {
                          return 0x2d;
                        }
                        pcStackY_12 = (char *)0x13a8;
                        pcStackY_14 = (char *)s_SkipTrans_10e8_103d + 6;
                        sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),
                                        s_BACKDROP__10e8_1999);
                        if (sVar4 == 0) {
                          return 0x3c;
                        }
                        pcStackY_12 = (char *)0x13a8;
                        pcStackY_14 = (char *)s_Options_10e8_1057 + 6;
                        sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),
                                        s_SCALEFACTOR__10e8_19a3);
                        if (sVar4 == 0) {
                          return 0x3d;
                        }
                        pcStackY_12 = (char *)0x13a8;
                        pcStackY_14 = (char *)s_MidiType_10e8_1071 + 6;
                        sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),
                                        (void *)0x10e819b0);
                        if (sVar4 != 0) {
                          pcStackY_12 = (char *)0x13a8;
                          pcStackY_14 = (char *)s_Options_10e8_108c + 1;
                          sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),
                                          s_NOOBJECTS__10e8_19b8);
                          if (sVar4 == 0) {
                            return 0x3f;
                          }
                          pcStackY_12 = (char *)0x13a8;
                          pcStackY_14 = (char *)s_PlayMidi_10e8_10a5 + 2;
                          sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),
                                          s_ROOMDESC__10e8_19c3);
                          if (sVar4 == 0) {
                            return 0x40;
                          }
                          pcStackY_12 = (char *)0x13a8;
                          pcStackY_14 = (char *)s_Options_10e8_10c0 + 1;
                          sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),
                                          (void *)0x10e819cd);
                          if (sVar4 == 0) {
                            return 0x41;
                          }
                          pcStackY_12 = (char *)0x13a8;
                          pcStackY_14 = (char *)s_ReadSpeed_10e8_10d8 + 1;
                          sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),
                                          (void *)0x10e819d6);
                          if (sVar4 == 0) {
                            return 0x42;
                          }
                          pcStackY_12 = (char *)0x13a8;
                          pcStackY_14 = (char *)s_MidiType_10e8_10ea + 7;
                          sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),
                                          s_WALKMAP__10e8_19dd);
                          if (sVar4 == 0) {
                            return 0x43;
                          }
                          pcStackY_12 = (char *)0x13a8;
                          pcStackY_14 = (char *)s_Options_10e8_1105 + 4;
                          sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),
                                          s_LOCALVAR__10e8_19e6);
                          if (sVar4 == 0) {
                            return 0x44;
                          }
                          pcStackY_12 = (char *)0x13a8;
                          pcStackY_14 = (char *)s_Saved_02d_10e8_111a + 7;
                          sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),
                                          s_CHANGEAT__10e8_19f0);
                          if (sVar4 == 0) {
                            return 0x1d;
                          }
                          pcStackY_12 = (char *)0x13a8;
                          pcStackY_14 = (char *)s_____vacio_____10e8_112d + 0xc;
                          sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),
                                          s_ENDID__10e8_19fa);
                          return -(sVar4 == 0) & 99;
                        }
                      }
                      bVar3 = 0x3e;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return bVar3;
}


