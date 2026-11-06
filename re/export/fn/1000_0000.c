// FUN_1000_0000 at 1000:0000

/* Title:  Dark Seed II
   Format: New Executable (NE) Windows
   CRC:    00000000
   
   Program Entry Point (CS:IP):   001b:001a
   Initial Stack Pointer (SS:SP): 001e:0000
   Auto Data Segment Index:       001e
   Initial Heap Size:             1000
   Initial Stack Size:            2800
   Minimum Code Swap Size:        0000
   
   Linker Version:  5.60
   Target OS:       Windows
   Windows Version: 3.10
   
   Program Flags:     0a
           Multi Data
           Protected Mode
   Application Flags: 03
           Windows P.M. API
   Other Flags:       08
    */

undefined2 * __cdecl16far
FUN_1000_0000(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
                    /* Segment:    1
                       Offset:     00000c60
                       Length:     1dd6
                       Min Alloc:  1dd6
                       Flags:      0d50
                           Code
                           Moveable
                           Preload
                           Impure (Non-shareable)
                        */
  FUN_10d0_029e((char *)s_Options_10e8_10e2 + 6);
  DAT_10e8_2d4a = param_1;
  DAT_10e8_2d4c = param_2;
  DAT_10e8_2d4e = param_3;
  DAT_10e8_2d50 = param_4;
  return (undefined2 *)&DAT_10e8_2d4a;
}


