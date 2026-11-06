// FUN_1088_062c at 1088:062c

ushort __cdecl16far
FUN_1088_062c(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  ushort uVar1;
  long a1;
  
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  a1 = GETSELECTORLIMIT(0x10e0);
  GETSELECTORBASE(0x10e0);
  SETSELECTORBASE(0x10e0,CONCAT22(param_2,param_1));
  SETSELECTORLIMIT(0x10e0,CONCAT22(param_4,param_3));
  uVar1 = ALLOCSELECTOR(0x10e0);
  if (uVar1 == 0) {
    FUN_10d0_039c((char *)s_FirstSelector__NULL_10e8_2301,(char *)s_gluefile_c_10e8_22f6,0x176);
  }
  SETSELECTORBASE(0x10e0,0x10e010e0);
  SETSELECTORLIMIT(0x10e0,a1);
  return uVar1;
}


