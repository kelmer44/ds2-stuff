// FUN_1048_0000 at 1048:0000

byte __cdecl16far FUN_1048_0000(void *param_1)

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
  undefined2 uStackY_14;
  char *pcStackY_12;
  
                    /* Segment:    10
                       Offset:     0000a2a0
                       Length:     3280
                       Min Alloc:  3280
                       Flags:      0d50
                           Code
                           Moveable
                           Preload
                           Impure (Non-shareable)
                        */
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
        acStackY_209[iVar5 + 1] = '\0';
        bVar8 = false;
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
    uStackY_14 = 0xc3;
    LSTRCPY((void *)CONCAT22((char *)s_Options_10e8_10e2 + 6,param_1),
            (char *)CONCAT22(unaff_SS,acStackY_209 + iVar7 + 1));
    acStackY_209[iVar7 + 1] = '\0';
    FUN_1060_0000();
    pcStackY_12 = (char *)s_ReadSpeed_10e8_105f + 1;
    uStackY_14 = 0xe3;
    sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),(void *)0x10e816fa);
    if (sVar4 == 0) {
      if (DAT_10e8_16f8 == 0) {
        FUN_1098_0248();
      }
      DAT_10e8_16f8 = 0;
      bVar3 = 1;
    }
    else {
      DAT_10e8_16f8 = DAT_10e8_16f8 + 1;
      pcStackY_12 = (char *)0x13a8;
      uStackY_14 = 0x119;
      sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),(void *)0x10e8171c);
      if (sVar4 == 0) {
        bVar3 = 2;
      }
      else {
        pcStackY_12 = (char *)0x13a8;
        uStackY_14 = 0x133;
        sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),s_CHANGE__10e8_1724);
        if (sVar4 == 0) {
          bVar3 = 8;
        }
        else {
          pcStackY_12 = (char *)0x13a8;
          uStackY_14 = 0x14d;
          sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),s_WAITUNTIL__10e8_172c
                         );
          if (sVar4 == 0) {
            bVar3 = 0x19;
          }
          else {
            pcStackY_12 = (char *)0x13a8;
            uStackY_14 = 0x167;
            sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),(void *)0x10e81737);
            if (sVar4 == 0) {
              bVar3 = 7;
            }
            else {
              pcStackY_12 = (char *)0x13a8;
              uStackY_14 = 0x181;
              sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),(void *)0x10e8173d
                             );
              if (sVar4 == 0) {
                bVar3 = 3;
              }
              else {
                pcStackY_12 = (char *)0x13a8;
                uStackY_14 = 0x19b;
                sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),
                                s_EFFECT__10e8_1743);
                if (sVar4 == 0) {
                  bVar3 = 4;
                }
                else {
                  pcStackY_12 = (char *)0x13a8;
                  uStackY_14 = 0x1b5;
                  sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),
                                  s_SPEECH__10e8_174b);
                  if (sVar4 == 0) {
                    bVar3 = 5;
                  }
                  else {
                    pcStackY_12 = (char *)0x13a8;
                    uStackY_14 = 0x1cf;
                    sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),
                                    s_SPEECHVAR__10e8_1753);
                    if (sVar4 == 0) {
                      bVar3 = 0x13;
                    }
                    else {
                      pcStackY_12 = (char *)0x13a8;
                      uStackY_14 = 0x1e9;
                      sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),
                                      (void *)0x10e8175e);
                      if (sVar4 == 0) {
                        bVar3 = 0x15;
                      }
                      else {
                        pcStackY_12 = (char *)0x13a8;
                        uStackY_14 = 0x203;
                        sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),
                                        (void *)0x10e81765);
                        if (sVar4 == 0) {
                          bVar3 = 0x42;
                        }
                        else {
                          pcStackY_12 = (char *)0x13a8;
                          uStackY_14 = 0x21d;
                          sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),
                                          (void *)0x10e8176c);
                          if (sVar4 == 0) {
                            bVar3 = 0xf;
                          }
                          else {
                            pcStackY_12 = (char *)0x13a8;
                            uStackY_14 = 0x237;
                            sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),
                                            s_DIALOG__10e8_1772);
                            if (sVar4 == 0) {
                              bVar3 = 0xd;
                            }
                            else {
                              pcStackY_12 = (char *)0x13a8;
                              uStackY_14 = 0x251;
                              sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),
                                              s_CURSOR__10e8_177a);
                              if (sVar4 == 0) {
                                bVar3 = 0x10;
                              }
                              else {
                                pcStackY_12 = (char *)0x13a8;
                                uStackY_14 = 0x26b;
                                sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1),
                                                (void *)0x10e81782);
                                if (sVar4 == 0) {
                                  bVar3 = 0xc;
                                }
                                else {
                                  pcStackY_12 = (char *)0x13a8;
                                  uStackY_14 = 0x285;
                                  sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 + iVar6 + 1
                                                                  ),s_DESTROY__10e8_1788);
                                  if (sVar4 == 0) {
                                    bVar3 = 0xe;
                                  }
                                  else {
                                    pcStackY_12 = (char *)0x13a8;
                                    uStackY_14 = 0x29f;
                                    sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 +
                                                                              iVar6 + 1),
                                                    (void *)0x10e81791);
                                    if (sVar4 == 0) {
                                      bVar3 = 0x41;
                                    }
                                    else {
                                      pcStackY_12 = (char *)0x13a8;
                                      uStackY_14 = 0x2b9;
                                      sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 +
                                                                                iVar6 + 1),
                                                      s_GOSTART__10e8_179a);
                                      if (sVar4 == 0) {
                                        bVar3 = 0x20;
                                      }
                                      else {
                                        pcStackY_12 = (char *)0x13a8;
                                        uStackY_14 = 0x2d3;
                                        sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 +
                                                                                  iVar6 + 1),
                                                        (void *)0x10e817a3);
                                        if (sVar4 == 0) {
                                          bVar3 = 0x21;
                                        }
                                        else {
                                          pcStackY_12 = (char *)0x13a8;
                                          uStackY_14 = 0x2ed;
                                          sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 +
                                                                                    iVar6 + 1),
                                                          s_USESTART__10e8_17aa);
                                          if (sVar4 == 0) {
                                            bVar3 = 0x2c;
                                          }
                                          else {
                                            pcStackY_12 = (char *)0x13a8;
                                            uStackY_14 = 0x307;
                                            sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209 +
                                                                                      iVar6 + 1),
                                                            s_USEEND__10e8_17b4);
                                            if (sVar4 == 0) {
                                              bVar3 = 0x2d;
                                            }
                                            else {
                                              pcStackY_12 = (char *)0x13a8;
                                              uStackY_14 = 0x321;
                                              sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_209
                                                                                        + iVar6 + 1)
                                                              ,s_LOOKSTART__10e8_17bc);
                                              if (sVar4 == 0) {
                                                bVar3 = 0x22;
                                              }
                                              else {
                                                pcStackY_12 = (char *)0x13a8;
                                                uStackY_14 = 0x33b;
                                                sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,
                                                  acStackY_209 + iVar6 + 1),s_LOOKEND__10e8_17c7);
                                                if (sVar4 == 0) {
                                                  bVar3 = 0x23;
                                                }
                                                else {
                                                  pcStackY_12 = (char *)0x13a8;
                                                  uStackY_14 = 0x353;
                                                  sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,
                                                  acStackY_209 + iVar6 + 1),s_NOOBJECTS__10e8_17d0);
                                                  if (sVar4 == 0) {
                                                    bVar3 = 0x3f;
                                                  }
                                                  else {
                                                    pcStackY_12 = (char *)0x13a8;
                                                    uStackY_14 = 0x36b;
                                                    sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,
                                                  acStackY_209 + iVar6 + 1),s_ENTRYEND__10e8_17db);
                                                  if (sVar4 == 0) {
                                                    bVar3 = 0x1f;
                                                  }
                                                  else {
                                                    pcStackY_12 = (char *)0x13a8;
                                                    uStackY_14 = 899;
                                                    sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,
                                                  acStackY_209 + iVar6 + 1),
                                                  s_PALETTECHANGE__10e8_17e5);
                                                  if (sVar4 == 0) {
                                                    bVar3 = 0x14;
                                                  }
                                                  else {
                                                    pcStackY_12 = (char *)0x13a8;
                                                    uStackY_14 = 0x39b;
                                                    sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,
                                                  acStackY_209 + iVar6 + 1),s_PICTURE__10e8_17f4);
                                                  if (sVar4 == 0) {
                                                    bVar3 = 6;
                                                  }
                                                  else {
                                                    pcStackY_12 = (char *)0x13a8;
                                                    uStackY_14 = 0x3b3;
                                                    sVar4 = LSTRCMP((char *)CONCAT22(unaff_SS,
                                                  acStackY_209 + iVar6 + 1),s_CHANGEAT__10e8_17fd);
                                                  bVar3 = -(sVar4 == 0) & 0x1d;
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


