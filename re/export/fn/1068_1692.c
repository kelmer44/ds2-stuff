// FUN_1068_1692 at 1068:1692

byte __cdecl16far FUN_1068_1692(char *param_1)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 unaff_SS;
  char *pcStackY_20c;
  char acStackY_20a [502];
  char *pcStackY_14;
  char *pcStackY_12;
  char *a0;
  
  FUN_10d0_029e();
  DAT_10e8_1db8 = DAT_10e8_1db8 + 1;
  *param_1 = '\0';
  iVar7 = 0;
  do {
    iVar5 = iVar7;
    if ((DAT_10e8_342a < (int)DAT_10e8_3422 >> 0xf) ||
       ((DAT_10e8_342a <= (int)DAT_10e8_3422 >> 0xf && (DAT_10e8_3428 <= DAT_10e8_3422)))) break;
    cVar1 = *(char *)((int)DAT_10e8_3424 + DAT_10e8_3422);
    iVar5 = iVar7 + 1;
    acStackY_20a[iVar7] = cVar1;
    DAT_10e8_3422 = DAT_10e8_3422 + 1;
    iVar7 = iVar5;
  } while (cVar1 != '\n');
  if (((int)DAT_10e8_3422 >> 0xf < DAT_10e8_342a) ||
     (((int)DAT_10e8_3422 >> 0xf <= DAT_10e8_342a && (DAT_10e8_3422 < DAT_10e8_3428)))) {
    acStackY_20a[iVar5 + -2] = '\0';
    if (iVar5 == 2) {
      bVar2 = 0;
    }
    else {
      for (; -1 < iVar5; iVar5 = iVar5 + -1) {
        if (acStackY_20a[iVar5] == ';') {
          acStackY_20a[iVar5] = '\0';
        }
      }
      bVar2 = ((undefined1 *)&DAT_10e8_5d0e)[acStackY_20a[0]];
      for (iVar7 = 0; ((bVar2 & 0x10) != 0 && (acStackY_20a[iVar7] != '\0')); iVar7 = iVar7 + 1) {
        bVar2 = ((undefined1 *)&DAT_10e8_5d0e)[acStackY_20a[iVar7 + 1]];
      }
      bVar2 = ((undefined1 *)&DAT_10e8_5d0e)[acStackY_20a[iVar7]];
      for (iVar5 = iVar7; ((bVar2 & 7) != 0 && (acStackY_20a[iVar5] != '\0')); iVar5 = iVar5 + 1) {
        bVar2 = ((undefined1 *)&DAT_10e8_5d0e)[acStackY_20a[iVar5 + 1]];
      }
      acStackY_20a[iVar5] = '\0';
      do {
        iVar6 = iVar5;
        iVar5 = iVar6 + 1;
        if (((((undefined1 *)&DAT_10e8_5d0e)[acStackY_20a[iVar6 + 1]] & 0x10) == 0) &&
           (acStackY_20a[iVar6 + 1] != '=')) break;
      } while (acStackY_20a[iVar6 + 1] != '\0');
      pcStackY_12 = (char *)s_Options_10e8_10d0;
      pcStackY_14 = (char *)s_GOSTART__10e8_179a + 1;
      LSTRCPY((char *)CONCAT22((char *)s_Options_10e8_10e2 + 6,param_1),
              (char *)CONCAT22(unaff_SS,acStackY_20a + iVar6 + 1));
      pcStackY_20c = acStackY_20a + iVar7;
      FUN_1060_0000();
      a0 = (char *)CONCAT22(unaff_SS,pcStackY_20c);
      pcStackY_12 = (char *)s_ReadSpeed_10e8_105f + 1;
      pcStackY_14 = (char *)s_LOOKSTART__10e8_17bc + 4;
      sVar3 = LSTRCMP(a0,s_SPEAKER_10e8_1ec7);
      if (sVar3 == 0) {
        if (acStackY_20a[iVar6 + 1] != '\0') {
          iVar7 = 0;
          pcVar4 = param_1;
          do {
            if (acStackY_20a[iVar5] == ',') {
              iVar7 = 1;
            }
            if ((acStackY_20a[iVar5] != ' ') && (iVar7 == 1)) {
              iVar7 = 2;
            }
            if (((' ' < acStackY_20a[iVar5]) && (acStackY_20a[iVar5] < '{')) ||
               ((param_1 = pcVar4, acStackY_20a[iVar5] == ' ' && (iVar7 == 2)))) {
              param_1 = pcVar4 + 1;
              *pcVar4 = acStackY_20a[iVar5];
            }
            iVar6 = iVar5 + 1;
            pcVar4 = param_1;
            iVar5 = iVar5 + 1;
          } while (acStackY_20a[iVar6] != '\0');
        }
      }
      else {
        cVar1 = acStackY_20a[iVar6 + 1];
        while (cVar1 != '\0') {
          pcVar4 = param_1;
          if ((' ' < acStackY_20a[iVar5]) && (acStackY_20a[iVar5] < '{')) {
            pcVar4 = param_1 + 1;
            *param_1 = acStackY_20a[iVar5];
          }
          cVar1 = acStackY_20a[iVar5 + 1];
          iVar5 = iVar5 + 1;
          param_1 = pcVar4;
        }
      }
      *param_1 = '\0';
      iVar7 = (int)((ulong)a0 >> 0x10);
      if (acStackY_20a[iVar7] == '\0') {
        bVar2 = 0xfe;
      }
      else {
        pcStackY_12 = (char *)0x13a8;
        pcStackY_14 = (char *)s_LOOPCOND__10e8_1872 + 5;
        sVar3 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_20a + iVar7),(void *)0x10e81ecf);
        if (sVar3 == 0) {
          bVar2 = 9;
        }
        else {
          pcStackY_12 = (char *)0x13a8;
          pcStackY_14 = (char *)s_WAITUNTIL__10e8_188e + 3;
          sVar3 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_20a + iVar7),s_MESSAGE_10e8_1ed4);
          if (sVar3 == 0) {
            bVar2 = 0xd;
          }
          else {
            pcStackY_12 = (char *)0x13a8;
            pcStackY_14 = (char *)s_ENDINDEX__10e8_18a2 + 9;
            sVar3 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_20a + iVar7),s_CONVERSATION_10e8_1edc
                           );
            if (sVar3 == 0) {
              bVar2 = 1;
            }
            else {
              pcStackY_12 = (char *)0x13a8;
              pcStackY_14 = (char *)s_SEQUENCE__10e8_18be + 7;
              sVar3 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_20a + iVar7),s_DECLARE_10e8_1ee9);
              if (sVar3 == 0) {
                bVar2 = 2;
              }
              else {
                pcStackY_12 = (char *)0x13a8;
                pcStackY_14 = (char *)s_PALETTECHANGE__10e8_18de + 1;
                sVar3 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_20a + iVar7),s_IMPORT_10e8_1ef1);
                if (sVar3 == 0) {
                  bVar2 = 3;
                }
                else {
                  pcStackY_12 = (char *)0x13a8;
                  pcStackY_14 = (char *)s_ENTRYEND__10e8_18f9;
                  sVar3 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_20a + iVar7),(void *)0x10e81ef8
                                 );
                  if (sVar3 == 0) {
                    bVar2 = 4;
                  }
                  else {
                    pcStackY_12 = (char *)0x13a8;
                    pcStackY_14 = (char *)s_LOOKSTART__10e8_1913;
                    sVar3 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_20a + iVar7),
                                    s_FALLTHROUGH_10e8_1efd);
                    if (sVar3 == 0) {
                      bVar2 = 5;
                    }
                    else {
                      pcStackY_12 = (char *)0x13a8;
                      pcStackY_14 = (char *)s_MUSICSTART__10e8_1927 + 6;
                      sVar3 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_20a + iVar7),
                                      s_ENTRY_10e8_1f09);
                      if (sVar3 == 0) {
                        bVar2 = 6;
                      }
                      else {
                        pcStackY_12 = (char *)0x13a8;
                        pcStackY_14 = (char *)s_MIRRORSTART__10e8_193d + 10;
                        sVar3 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_20a + iVar7),
                                        (void *)0x10e81f0f);
                        if (sVar3 == 0) {
                          bVar2 = 7;
                        }
                        else {
                          pcStackY_12 = (char *)0x13a8;
                          pcStackY_14 = (char *)s_PALETTESTART__10e8_1955 + 0xc;
                          sVar3 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_20a + iVar7),
                                          s_UNHIDE_10e8_1f14);
                          if (sVar3 == 0) {
                            bVar2 = 8;
                          }
                          else {
                            pcStackY_12 = (char *)0x13a8;
                            pcStackY_14 = (char *)s_SPRITESTART__10e8_196f + 10;
                            sVar3 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_20a + iVar7),
                                            (void *)0x10e81f1b);
                            if (sVar3 == 0) {
                              bVar2 = 10;
                            }
                            else {
                              pcStackY_12 = (char *)0x13a8;
                              pcStackY_14 = (char *)s_USEEND__10e8_1991;
                              sVar3 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_20a + iVar7),
                                              s_ASSIGN_10e8_1f20);
                              if (sVar3 == 0) {
                                bVar2 = 0xb;
                              }
                              else {
                                pcStackY_12 = (char *)0x13a8;
                                pcStackY_14 = (char *)s_SCALEFACTOR__10e8_19a3 + 6;
                                sVar3 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_20a + iVar7),
                                                s_DESTROY_10e8_1f27);
                                if (sVar3 == 0) {
                                  bVar2 = 0xc;
                                }
                                else {
                                  pcStackY_12 = (char *)0x13a8;
                                  pcStackY_14 = (char *)s_NOOBJECTS__10e8_19b8 + 9;
                                  sVar3 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_20a + iVar7),
                                                  s_MESSAGESTOP_10e8_1f2f);
                                  if (sVar3 == 0) {
                                    bVar2 = 0xe;
                                  }
                                  else {
                                    pcStackY_12 = (char *)0x13a8;
                                    pcStackY_14 = (char *)0x19d9;
                                    sVar3 = LSTRCMP((char *)CONCAT22(unaff_SS,acStackY_20a + iVar7),
                                                    s_SPEAKER_10e8_1f3b);
                                    bVar2 = -(sVar3 == 0) & 0xf;
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
  else {
    bVar2 = 0xff;
  }
  return bVar2;
}


