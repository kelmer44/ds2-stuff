// FUN_1060_1040 at 1060:1040

undefined2 __cdecl16far FUN_1060_1040(void *param_1,undefined2 param_2)

{
  char *pcVar1;
  char cVar2;
  undefined2 unaff_SI;
  int iVar3;
  int iVar4;
  undefined2 unaff_SS;
  char local_108 [242];
  char *pcStackY_16;
  char *pcStackY_14;
  
  FUN_10d0_029e();
  iVar3 = 0;
  do {
    iVar4 = iVar3;
    cVar2 = *(char *)(DAT_10e8_341e + DAT_10e8_60a8);
    local_108[iVar4] = cVar2;
    DAT_10e8_60a8 = DAT_10e8_60a8 + 1;
    iVar3 = iVar4 + 1;
  } while (cVar2 != '\n');
  local_108[iVar4] = '\0';
  iVar3 = 0;
  do {
    iVar4 = iVar3 + 1;
    pcVar1 = local_108 + iVar3;
    iVar3 = iVar4;
  } while (*pcVar1 != '=');
  pcStackY_14 = (char *)s_Options_10e8_10d0;
  pcStackY_16 = (char *)s_PlayWave_10e8_1094 + 7;
  LSTRCPYN((void *)CONCAT22(param_2,param_1),(char *)CONCAT22(unaff_SS,local_108),iVar4);
  pcStackY_14 = (char *)s_PlayMidi_10e8_10a5 + 6;
  FUN_1060_0c44();
  return unaff_SI;
}


