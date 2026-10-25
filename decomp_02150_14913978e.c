// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14913978e FUN_14913978e body=89 status=ok
// SIG undefined FUN_14913978e(void)

undefined1 FUN_14913978e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_1408fdf38(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined8 *)(param_2 + 0x18 + lVar1) = *(undefined8 *)(param_3 + 0x18 + lVar1);
      lVar1 = lVar1 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149139810 FUN_149139810 body=59 status=ok
// SIG undefined FUN_149139810(void)

undefined8 FUN_149139810(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149139856 FUN_149139856 body=48 status=ok
// SIG undefined FUN_149139856(void)

void FUN_149139856(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 4) == '\x01') {
    *param_2 = &PTR_FUN_14bb10d80;
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return;
}



// FUNCTION 1491398d4 FUN_1491398d4 body=57 status=ok
// SIG undefined FUN_1491398d4(void)

undefined8 * FUN_1491398d4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb10d80;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149139976 FUN_149139976 body=59 status=ok
// SIG undefined FUN_149139976(void)

undefined8 FUN_149139976(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149139a16 FUN_149139a16 body=29 status=ok
// SIG undefined FUN_149139a16(void)

undefined8 FUN_149139a16(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149139ac6 FUN_149139ac6 body=59 status=ok
// SIG undefined FUN_149139ac6(void)

undefined8 FUN_149139ac6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149139b66 FUN_149139b66 body=29 status=ok
// SIG undefined FUN_149139b66(void)

undefined8 FUN_149139b66(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149139c16 FUN_149139c16 body=59 status=ok
// SIG undefined FUN_149139c16(void)

undefined8 FUN_149139c16(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149139cb6 FUN_149139cb6 body=29 status=ok
// SIG undefined FUN_149139cb6(void)

undefined8 FUN_149139cb6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149139d7c FUN_149139d7c body=59 status=ok
// SIG undefined FUN_149139d7c(void)

undefined8 FUN_149139d7c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149139e1c FUN_149139e1c body=29 status=ok
// SIG undefined FUN_149139e1c(void)

undefined8 FUN_149139e1c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149139ee2 FUN_149139ee2 body=59 status=ok
// SIG undefined FUN_149139ee2(void)

undefined8 FUN_149139ee2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149139f82 FUN_149139f82 body=29 status=ok
// SIG undefined FUN_149139f82(void)

undefined8 FUN_149139f82(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913a032 FUN_14913a032 body=59 status=ok
// SIG undefined FUN_14913a032(void)

undefined8 FUN_14913a032(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913a0d2 FUN_14913a0d2 body=29 status=ok
// SIG undefined FUN_14913a0d2(void)

undefined8 FUN_14913a0d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913a184 FUN_14913a184 body=59 status=ok
// SIG undefined FUN_14913a184(void)

undefined8 FUN_14913a184(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913a224 FUN_14913a224 body=29 status=ok
// SIG undefined FUN_14913a224(void)

undefined8 FUN_14913a224(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913a2d6 FUN_14913a2d6 body=59 status=ok
// SIG undefined FUN_14913a2d6(void)

undefined8 FUN_14913a2d6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913a376 FUN_14913a376 body=29 status=ok
// SIG undefined FUN_14913a376(void)

undefined8 FUN_14913a376(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913a428 FUN_14913a428 body=59 status=ok
// SIG undefined FUN_14913a428(void)

undefined8 FUN_14913a428(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913a4c8 FUN_14913a4c8 body=29 status=ok
// SIG undefined FUN_14913a4c8(void)

undefined8 FUN_14913a4c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913a57a FUN_14913a57a body=59 status=ok
// SIG undefined FUN_14913a57a(void)

undefined8 FUN_14913a57a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913a61a FUN_14913a61a body=29 status=ok
// SIG undefined FUN_14913a61a(void)

undefined8 FUN_14913a61a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913a6d8 FUN_14913a6d8 body=59 status=ok
// SIG undefined FUN_14913a6d8(void)

undefined8 FUN_14913a6d8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913a778 FUN_14913a778 body=29 status=ok
// SIG undefined FUN_14913a778(void)

undefined8 FUN_14913a778(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913a836 FUN_14913a836 body=59 status=ok
// SIG undefined FUN_14913a836(void)

undefined8 FUN_14913a836(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913a8d6 FUN_14913a8d6 body=29 status=ok
// SIG undefined FUN_14913a8d6(void)

undefined8 FUN_14913a8d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913a9a8 FUN_14913a9a8 body=59 status=ok
// SIG undefined FUN_14913a9a8(void)

undefined8 FUN_14913a9a8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913aa48 FUN_14913aa48 body=29 status=ok
// SIG undefined FUN_14913aa48(void)

undefined8 FUN_14913aa48(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913ab0e FUN_14913ab0e body=59 status=ok
// SIG undefined FUN_14913ab0e(void)

undefined8 FUN_14913ab0e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913abae FUN_14913abae body=29 status=ok
// SIG undefined FUN_14913abae(void)

undefined8 FUN_14913abae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913ac80 FUN_14913ac80 body=59 status=ok
// SIG undefined FUN_14913ac80(void)

undefined8 FUN_14913ac80(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913ad20 FUN_14913ad20 body=29 status=ok
// SIG undefined FUN_14913ad20(void)

undefined8 FUN_14913ad20(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913adde FUN_14913adde body=59 status=ok
// SIG undefined FUN_14913adde(void)

undefined8 FUN_14913adde(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913ae7e FUN_14913ae7e body=29 status=ok
// SIG undefined FUN_14913ae7e(void)

undefined8 FUN_14913ae7e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913af3c FUN_14913af3c body=59 status=ok
// SIG undefined FUN_14913af3c(void)

undefined8 FUN_14913af3c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913afdc FUN_14913afdc body=29 status=ok
// SIG undefined FUN_14913afdc(void)

undefined8 FUN_14913afdc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913b0ae FUN_14913b0ae body=59 status=ok
// SIG undefined FUN_14913b0ae(void)

undefined8 FUN_14913b0ae(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913b14e FUN_14913b14e body=29 status=ok
// SIG undefined FUN_14913b14e(void)

undefined8 FUN_14913b14e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913b1fe FUN_14913b1fe body=59 status=ok
// SIG undefined FUN_14913b1fe(void)

undefined8 FUN_14913b1fe(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913b29e FUN_14913b29e body=29 status=ok
// SIG undefined FUN_14913b29e(void)

undefined8 FUN_14913b29e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913b34e FUN_14913b34e body=59 status=ok
// SIG undefined FUN_14913b34e(void)

undefined8 FUN_14913b34e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913b3ee FUN_14913b3ee body=29 status=ok
// SIG undefined FUN_14913b3ee(void)

undefined8 FUN_14913b3ee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913b49e FUN_14913b49e body=59 status=ok
// SIG undefined FUN_14913b49e(void)

undefined8 FUN_14913b49e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913b53e FUN_14913b53e body=29 status=ok
// SIG undefined FUN_14913b53e(void)

undefined8 FUN_14913b53e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913b604 FUN_14913b604 body=59 status=ok
// SIG undefined FUN_14913b604(void)

undefined8 FUN_14913b604(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913b6a4 FUN_14913b6a4 body=29 status=ok
// SIG undefined FUN_14913b6a4(void)

undefined8 FUN_14913b6a4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913b76a FUN_14913b76a body=59 status=ok
// SIG undefined FUN_14913b76a(void)

undefined8 FUN_14913b76a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913b80a FUN_14913b80a body=29 status=ok
// SIG undefined FUN_14913b80a(void)

undefined8 FUN_14913b80a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913b8d0 FUN_14913b8d0 body=59 status=ok
// SIG undefined FUN_14913b8d0(void)

undefined8 FUN_14913b8d0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913b970 FUN_14913b970 body=29 status=ok
// SIG undefined FUN_14913b970(void)

undefined8 FUN_14913b970(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913ba20 FUN_14913ba20 body=59 status=ok
// SIG undefined FUN_14913ba20(void)

undefined8 FUN_14913ba20(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913bac0 FUN_14913bac0 body=29 status=ok
// SIG undefined FUN_14913bac0(void)

undefined8 FUN_14913bac0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913bb7e FUN_14913bb7e body=59 status=ok
// SIG undefined FUN_14913bb7e(void)

undefined8 FUN_14913bb7e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913bc1e FUN_14913bc1e body=29 status=ok
// SIG undefined FUN_14913bc1e(void)

undefined8 FUN_14913bc1e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913bcce FUN_14913bcce body=59 status=ok
// SIG undefined FUN_14913bcce(void)

undefined8 FUN_14913bcce(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913bd6e FUN_14913bd6e body=29 status=ok
// SIG undefined FUN_14913bd6e(void)

undefined8 FUN_14913bd6e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913be1c FUN_14913be1c body=59 status=ok
// SIG undefined FUN_14913be1c(void)

undefined8 FUN_14913be1c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913bebc FUN_14913bebc body=29 status=ok
// SIG undefined FUN_14913bebc(void)

undefined8 FUN_14913bebc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913bf7a FUN_14913bf7a body=59 status=ok
// SIG undefined FUN_14913bf7a(void)

undefined8 FUN_14913bf7a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913c01a FUN_14913c01a body=29 status=ok
// SIG undefined FUN_14913c01a(void)

undefined8 FUN_14913c01a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913c10a FUN_14913c10a body=59 status=ok
// SIG undefined FUN_14913c10a(void)

undefined8 FUN_14913c10a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913c1aa FUN_14913c1aa body=29 status=ok
// SIG undefined FUN_14913c1aa(void)

undefined8 FUN_14913c1aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913c26c FUN_14913c26c body=59 status=ok
// SIG undefined FUN_14913c26c(void)

undefined8 FUN_14913c26c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913c30c FUN_14913c30c body=29 status=ok
// SIG undefined FUN_14913c30c(void)

undefined8 FUN_14913c30c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913c3ce FUN_14913c3ce body=59 status=ok
// SIG undefined FUN_14913c3ce(void)

undefined8 FUN_14913c3ce(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913c46e FUN_14913c46e body=29 status=ok
// SIG undefined FUN_14913c46e(void)

undefined8 FUN_14913c46e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913c530 FUN_14913c530 body=59 status=ok
// SIG undefined FUN_14913c530(void)

undefined8 FUN_14913c530(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913c5d0 FUN_14913c5d0 body=29 status=ok
// SIG undefined FUN_14913c5d0(void)

undefined8 FUN_14913c5d0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913c692 FUN_14913c692 body=59 status=ok
// SIG undefined FUN_14913c692(void)

undefined8 FUN_14913c692(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913c732 FUN_14913c732 body=29 status=ok
// SIG undefined FUN_14913c732(void)

undefined8 FUN_14913c732(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913c7f4 FUN_14913c7f4 body=59 status=ok
// SIG undefined FUN_14913c7f4(void)

undefined8 FUN_14913c7f4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913c894 FUN_14913c894 body=29 status=ok
// SIG undefined FUN_14913c894(void)

undefined8 FUN_14913c894(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913c956 FUN_14913c956 body=59 status=ok
// SIG undefined FUN_14913c956(void)

undefined8 FUN_14913c956(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913c9f6 FUN_14913c9f6 body=29 status=ok
// SIG undefined FUN_14913c9f6(void)

undefined8 FUN_14913c9f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913cab8 FUN_14913cab8 body=59 status=ok
// SIG undefined FUN_14913cab8(void)

undefined8 FUN_14913cab8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913cb58 FUN_14913cb58 body=29 status=ok
// SIG undefined FUN_14913cb58(void)

undefined8 FUN_14913cb58(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913cc26 FUN_14913cc26 body=59 status=ok
// SIG undefined FUN_14913cc26(void)

undefined8 FUN_14913cc26(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913ccc6 FUN_14913ccc6 body=29 status=ok
// SIG undefined FUN_14913ccc6(void)

undefined8 FUN_14913ccc6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913cd8c FUN_14913cd8c body=59 status=ok
// SIG undefined FUN_14913cd8c(void)

undefined8 FUN_14913cd8c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913ce2c FUN_14913ce2c body=29 status=ok
// SIG undefined FUN_14913ce2c(void)

undefined8 FUN_14913ce2c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913cedc FUN_14913cedc body=59 status=ok
// SIG undefined FUN_14913cedc(void)

undefined8 FUN_14913cedc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913cf7c FUN_14913cf7c body=29 status=ok
// SIG undefined FUN_14913cf7c(void)

undefined8 FUN_14913cf7c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913d02c FUN_14913d02c body=59 status=ok
// SIG undefined FUN_14913d02c(void)

undefined8 FUN_14913d02c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913d0cc FUN_14913d0cc body=29 status=ok
// SIG undefined FUN_14913d0cc(void)

undefined8 FUN_14913d0cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913d17c FUN_14913d17c body=59 status=ok
// SIG undefined FUN_14913d17c(void)

undefined8 FUN_14913d17c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913d21c FUN_14913d21c body=29 status=ok
// SIG undefined FUN_14913d21c(void)

undefined8 FUN_14913d21c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913d2cc FUN_14913d2cc body=59 status=ok
// SIG undefined FUN_14913d2cc(void)

undefined8 FUN_14913d2cc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913d36c FUN_14913d36c body=29 status=ok
// SIG undefined FUN_14913d36c(void)

undefined8 FUN_14913d36c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913d41c FUN_14913d41c body=59 status=ok
// SIG undefined FUN_14913d41c(void)

undefined8 FUN_14913d41c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913d4bc FUN_14913d4bc body=29 status=ok
// SIG undefined FUN_14913d4bc(void)

undefined8 FUN_14913d4bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913d56c FUN_14913d56c body=59 status=ok
// SIG undefined FUN_14913d56c(void)

undefined8 FUN_14913d56c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913d60c FUN_14913d60c body=29 status=ok
// SIG undefined FUN_14913d60c(void)

undefined8 FUN_14913d60c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913d6bc FUN_14913d6bc body=59 status=ok
// SIG undefined FUN_14913d6bc(void)

undefined8 FUN_14913d6bc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913d75c FUN_14913d75c body=29 status=ok
// SIG undefined FUN_14913d75c(void)

undefined8 FUN_14913d75c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913d80c FUN_14913d80c body=59 status=ok
// SIG undefined FUN_14913d80c(void)

undefined8 FUN_14913d80c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913d8ac FUN_14913d8ac body=29 status=ok
// SIG undefined FUN_14913d8ac(void)

undefined8 FUN_14913d8ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913d96a FUN_14913d96a body=59 status=ok
// SIG undefined FUN_14913d96a(void)

undefined8 FUN_14913d96a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913da0a FUN_14913da0a body=29 status=ok
// SIG undefined FUN_14913da0a(void)

undefined8 FUN_14913da0a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913daca FUN_14913daca body=59 status=ok
// SIG undefined FUN_14913daca(void)

undefined8 FUN_14913daca(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913db6a FUN_14913db6a body=29 status=ok
// SIG undefined FUN_14913db6a(void)

undefined8 FUN_14913db6a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913dc1a FUN_14913dc1a body=59 status=ok
// SIG undefined FUN_14913dc1a(void)

undefined8 FUN_14913dc1a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913dcba FUN_14913dcba body=29 status=ok
// SIG undefined FUN_14913dcba(void)

undefined8 FUN_14913dcba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913dd30 FUN_14913dd30 body=89 status=ok
// SIG undefined FUN_14913dd30(void)

undefined1 FUN_14913dd30(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_144a67f5c(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined4 *)(param_2 + 0x18 + lVar1) = *(undefined4 *)(param_3 + 0x18 + lVar1);
      lVar1 = lVar1 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14913ddb2 FUN_14913ddb2 body=59 status=ok
// SIG undefined FUN_14913ddb2(void)

undefined8 FUN_14913ddb2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913ddf8 FUN_14913ddf8 body=48 status=ok
// SIG undefined FUN_14913ddf8(void)

void FUN_14913ddf8(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 4) == '\x01') {
    *param_2 = &PTR_FUN_14bb16d20;
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return;
}



// FUNCTION 14913de76 FUN_14913de76 body=57 status=ok
// SIG undefined FUN_14913de76(void)

undefined8 * FUN_14913de76(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb16d20;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913df08 FUN_14913df08 body=89 status=ok
// SIG undefined FUN_14913df08(void)

undefined1 FUN_14913df08(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_144a67f5c(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined4 *)(param_2 + 0x18 + lVar1) = *(undefined4 *)(param_3 + 0x18 + lVar1);
      lVar1 = lVar1 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14913df8a FUN_14913df8a body=59 status=ok
// SIG undefined FUN_14913df8a(void)

undefined8 FUN_14913df8a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913dfd0 FUN_14913dfd0 body=48 status=ok
// SIG undefined FUN_14913dfd0(void)

void FUN_14913dfd0(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 4) == '\x01') {
    *param_2 = &PTR_FUN_14bb16f00;
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return;
}



// FUNCTION 14913e04e FUN_14913e04e body=57 status=ok
// SIG undefined FUN_14913e04e(void)

undefined8 * FUN_14913e04e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb16f00;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913e0f0 FUN_14913e0f0 body=59 status=ok
// SIG undefined FUN_14913e0f0(void)

undefined8 FUN_14913e0f0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913e190 FUN_14913e190 body=29 status=ok
// SIG undefined FUN_14913e190(void)

undefined8 FUN_14913e190(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913e240 FUN_14913e240 body=59 status=ok
// SIG undefined FUN_14913e240(void)

undefined8 FUN_14913e240(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913e2e0 FUN_14913e2e0 body=29 status=ok
// SIG undefined FUN_14913e2e0(void)

undefined8 FUN_14913e2e0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913e3a6 FUN_14913e3a6 body=59 status=ok
// SIG undefined FUN_14913e3a6(void)

undefined8 FUN_14913e3a6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913e446 FUN_14913e446 body=29 status=ok
// SIG undefined FUN_14913e446(void)

undefined8 FUN_14913e446(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913e50c FUN_14913e50c body=59 status=ok
// SIG undefined FUN_14913e50c(void)

undefined8 FUN_14913e50c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913e5ac FUN_14913e5ac body=29 status=ok
// SIG undefined FUN_14913e5ac(void)

undefined8 FUN_14913e5ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913e658 FUN_14913e658 body=59 status=ok
// SIG undefined FUN_14913e658(void)

undefined8 FUN_14913e658(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913e6f8 FUN_14913e6f8 body=29 status=ok
// SIG undefined FUN_14913e6f8(void)

undefined8 FUN_14913e6f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913e7b6 FUN_14913e7b6 body=59 status=ok
// SIG undefined FUN_14913e7b6(void)

undefined8 FUN_14913e7b6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913e856 FUN_14913e856 body=29 status=ok
// SIG undefined FUN_14913e856(void)

undefined8 FUN_14913e856(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913e914 FUN_14913e914 body=59 status=ok
// SIG undefined FUN_14913e914(void)

undefined8 FUN_14913e914(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913e9b4 FUN_14913e9b4 body=29 status=ok
// SIG undefined FUN_14913e9b4(void)

undefined8 FUN_14913e9b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913ea86 FUN_14913ea86 body=59 status=ok
// SIG undefined FUN_14913ea86(void)

undefined8 FUN_14913ea86(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913eb26 FUN_14913eb26 body=29 status=ok
// SIG undefined FUN_14913eb26(void)

undefined8 FUN_14913eb26(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913ebec FUN_14913ebec body=59 status=ok
// SIG undefined FUN_14913ebec(void)

undefined8 FUN_14913ebec(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913ec8c FUN_14913ec8c body=29 status=ok
// SIG undefined FUN_14913ec8c(void)

undefined8 FUN_14913ec8c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913ed5e FUN_14913ed5e body=59 status=ok
// SIG undefined FUN_14913ed5e(void)

undefined8 FUN_14913ed5e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913edfe FUN_14913edfe body=29 status=ok
// SIG undefined FUN_14913edfe(void)

undefined8 FUN_14913edfe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913eebc FUN_14913eebc body=59 status=ok
// SIG undefined FUN_14913eebc(void)

undefined8 FUN_14913eebc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913ef5c FUN_14913ef5c body=29 status=ok
// SIG undefined FUN_14913ef5c(void)

undefined8 FUN_14913ef5c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913f01a FUN_14913f01a body=59 status=ok
// SIG undefined FUN_14913f01a(void)

undefined8 FUN_14913f01a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913f0ba FUN_14913f0ba body=29 status=ok
// SIG undefined FUN_14913f0ba(void)

undefined8 FUN_14913f0ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913f18c FUN_14913f18c body=59 status=ok
// SIG undefined FUN_14913f18c(void)

undefined8 FUN_14913f18c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913f22c FUN_14913f22c body=29 status=ok
// SIG undefined FUN_14913f22c(void)

undefined8 FUN_14913f22c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913f2dc FUN_14913f2dc body=59 status=ok
// SIG undefined FUN_14913f2dc(void)

undefined8 FUN_14913f2dc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913f37c FUN_14913f37c body=29 status=ok
// SIG undefined FUN_14913f37c(void)

undefined8 FUN_14913f37c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913f42c FUN_14913f42c body=59 status=ok
// SIG undefined FUN_14913f42c(void)

undefined8 FUN_14913f42c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913f4cc FUN_14913f4cc body=29 status=ok
// SIG undefined FUN_14913f4cc(void)

undefined8 FUN_14913f4cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913f57c FUN_14913f57c body=59 status=ok
// SIG undefined FUN_14913f57c(void)

undefined8 FUN_14913f57c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913f61c FUN_14913f61c body=29 status=ok
// SIG undefined FUN_14913f61c(void)

undefined8 FUN_14913f61c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913f6da FUN_14913f6da body=59 status=ok
// SIG undefined FUN_14913f6da(void)

undefined8 FUN_14913f6da(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913f77a FUN_14913f77a body=29 status=ok
// SIG undefined FUN_14913f77a(void)

undefined8 FUN_14913f77a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913f82a FUN_14913f82a body=59 status=ok
// SIG undefined FUN_14913f82a(void)

undefined8 FUN_14913f82a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913f8ca FUN_14913f8ca body=29 status=ok
// SIG undefined FUN_14913f8ca(void)

undefined8 FUN_14913f8ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913f978 FUN_14913f978 body=59 status=ok
// SIG undefined FUN_14913f978(void)

undefined8 FUN_14913f978(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913fa18 FUN_14913fa18 body=29 status=ok
// SIG undefined FUN_14913fa18(void)

undefined8 FUN_14913fa18(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913fada FUN_14913fada body=59 status=ok
// SIG undefined FUN_14913fada(void)

undefined8 FUN_14913fada(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913fb7a FUN_14913fb7a body=29 status=ok
// SIG undefined FUN_14913fb7a(void)

undefined8 FUN_14913fb7a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913fc3c FUN_14913fc3c body=59 status=ok
// SIG undefined FUN_14913fc3c(void)

undefined8 FUN_14913fc3c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913fcdc FUN_14913fcdc body=29 status=ok
// SIG undefined FUN_14913fcdc(void)

undefined8 FUN_14913fcdc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913fd9e FUN_14913fd9e body=59 status=ok
// SIG undefined FUN_14913fd9e(void)

undefined8 FUN_14913fd9e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913fe3e FUN_14913fe3e body=29 status=ok
// SIG undefined FUN_14913fe3e(void)

undefined8 FUN_14913fe3e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913ff00 FUN_14913ff00 body=59 status=ok
// SIG undefined FUN_14913ff00(void)

undefined8 FUN_14913ff00(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913ffa0 FUN_14913ffa0 body=29 status=ok
// SIG undefined FUN_14913ffa0(void)

undefined8 FUN_14913ffa0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149140062 FUN_149140062 body=59 status=ok
// SIG undefined FUN_149140062(void)

undefined8 FUN_149140062(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149140102 FUN_149140102 body=29 status=ok
// SIG undefined FUN_149140102(void)

undefined8 FUN_149140102(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491401c4 FUN_1491401c4 body=59 status=ok
// SIG undefined FUN_1491401c4(void)

undefined8 FUN_1491401c4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149140264 FUN_149140264 body=29 status=ok
// SIG undefined FUN_149140264(void)

undefined8 FUN_149140264(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491402da FUN_1491402da body=85 status=ok
// SIG undefined FUN_1491402da(void)

undefined8 FUN_1491402da(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_14054c6c4(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined4 *)(param_2 + 0x18 + lVar1) = *(undefined4 *)(param_3 + 0x18 + lVar1);
      lVar1 = lVar1 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149140358 FUN_149140358 body=59 status=ok
// SIG undefined FUN_149140358(void)

undefined8 FUN_149140358(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14914039e FUN_14914039e body=48 status=ok
// SIG undefined FUN_14914039e(void)

void FUN_14914039e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 4) == '\x01') {
    *param_2 = &PTR_FUN_14bb19fc0;
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return;
}



// FUNCTION 14914041c FUN_14914041c body=57 status=ok
// SIG undefined FUN_14914041c(void)

undefined8 * FUN_14914041c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb19fc0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491404ae FUN_1491404ae body=85 status=ok
// SIG undefined FUN_1491404ae(void)

undefined8 FUN_1491404ae(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_14054c6c4(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined4 *)(param_2 + 0x18 + lVar1) = *(undefined4 *)(param_3 + 0x18 + lVar1);
      lVar1 = lVar1 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14914052c FUN_14914052c body=59 status=ok
// SIG undefined FUN_14914052c(void)

undefined8 FUN_14914052c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149140572 FUN_149140572 body=48 status=ok
// SIG undefined FUN_149140572(void)

void FUN_149140572(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 4) == '\x01') {
    *param_2 = &PTR_FUN_14bb1a1a0;
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return;
}



// FUNCTION 1491405f0 FUN_1491405f0 body=57 status=ok
// SIG undefined FUN_1491405f0(void)

undefined8 * FUN_1491405f0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb1a1a0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149140682 FUN_149140682 body=70 status=ok
// SIG undefined FUN_149140682(void)

undefined8 FUN_149140682(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_144a787a6(param_2,param_3);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1491406f0 FUN_1491406f0 body=59 status=ok
// SIG undefined FUN_1491406f0(void)

undefined8 FUN_1491406f0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149140736 FUN_149140736 body=48 status=ok
// SIG undefined FUN_149140736(void)

void FUN_149140736(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 4) == '\x01') {
    *param_2 = &PTR_FUN_14bb1a380;
    if (param_2[2] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return;
}



// FUNCTION 1491407b4 FUN_1491407b4 body=57 status=ok
// SIG undefined FUN_1491407b4(void)

undefined8 * FUN_1491407b4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb1a380;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14914087e FUN_14914087e body=59 status=ok
// SIG undefined FUN_14914087e(void)

undefined8 FUN_14914087e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14914091e FUN_14914091e body=29 status=ok
// SIG undefined FUN_14914091e(void)

undefined8 FUN_14914091e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14914093c FUN_14914093c body=75 status=ok
// SIG undefined FUN_14914093c(void)

undefined8 * FUN_14914093c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14bb1a690;
  FUN_140f8ceac(param_1 + 100);
  FUN_1401f96ee(param_1 + 0x1e);
  FUN_140dc53ba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14914098e FUN_14914098e body=32 status=ok
// SIG undefined FUN_14914098e(void)

undefined8 FUN_14914098e(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"RigVM.RigVMFunctions.FRigVMFunction_MathIntToName");
  return param_2;
}



// FUNCTION 1491409b4 FUN_1491409b4 body=32 status=ok
// SIG undefined FUN_1491409b4(void)

undefined8 FUN_1491409b4(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,
                ".\\../Plugins/Runtime/RigVM/Source/RigVM/Private/RigVMFunctions/Math/RigVMFunction_MathInt.cpp"
               );
  return param_2;
}



// FUNCTION 1491409da FUN_1491409da body=202 status=ok
// SIG undefined FUN_1491409da(void)

/* WARNING: Removing unreachable block (ram,0x000149140a5a) */

void FUN_1491409da(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140056680(&local_30,L"RigVM.RigVMFunctions.FRigVMFunction_MathIntToName");
  iVar2 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
    FUN_1447a1bd6(param_2,iVar2);
  }
  lVar3 = *param_2;
  lVar4 = (longlong)iVar2 * 0x10;
  *(undefined8 *)(lVar3 + lVar4) = 0;
  *(undefined8 *)(lVar3 + lVar4) = local_30;
  *(undefined4 *)(lVar3 + 8 + lVar4) = (undefined4)local_28;
  *(undefined4 *)(lVar3 + 0xc + lVar4) = local_28._4_4_;
  local_28 = 0;
  local_30 = 0;
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_1447a1bd6(param_3,iVar2);
  }
  puVar1 = (undefined8 *)(*param_3 + (longlong)iVar2 * 0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149140aa6 FUN_149140aa6 body=56 status=ok
// SIG undefined FUN_149140aa6(void)

void FUN_149140aa6(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x90))();
  param_1[0x87] = 0;
  param_1[0x88] = 0;
                    /* WARNING: Could not recover jumptable at 0x000149140adb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149140ade FUN_149140ade body=227 status=ok
// SIG undefined FUN_149140ade(void)

void FUN_149140ade(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined1 auStack_268 [40];
  undefined1 local_240 [552];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_268;
  uVar14 = FUN_1408cc5ba();
  FUN_14190668c(local_240,uVar14);
  FUN_145c50834(param_1 + 0xf0,local_240);
  FUN_1401f96ee(local_240);
  lVar1 = *(longlong *)(param_1 + 0x1b0);
  lVar2 = *(longlong *)(param_1 + 0x318);
  uVar3 = *(undefined4 *)(lVar1 + 8);
  uVar4 = *(undefined4 *)(lVar1 + 0xc);
  uVar5 = *(undefined4 *)(lVar1 + 0x10);
  uVar6 = *(undefined4 *)(lVar1 + 0x14);
  uVar7 = *(undefined4 *)(lVar1 + 0x18);
  uVar8 = *(undefined4 *)(lVar1 + 0x1c);
  uVar9 = *(undefined4 *)(lVar1 + 0x20);
  uVar10 = *(undefined4 *)(lVar1 + 0x24);
  uVar11 = *(undefined4 *)(lVar1 + 0x2c);
  uVar12 = *(undefined4 *)(lVar1 + 0x30);
  uVar13 = *(undefined4 *)(lVar1 + 0x34);
  *(undefined4 *)(lVar2 + 0x28) = *(undefined4 *)(lVar1 + 0x28);
  *(undefined4 *)(lVar2 + 0x2c) = uVar11;
  *(undefined4 *)(lVar2 + 0x30) = uVar12;
  *(undefined4 *)(lVar2 + 0x34) = uVar13;
  *(undefined4 *)(lVar2 + 0x18) = uVar7;
  *(undefined4 *)(lVar2 + 0x1c) = uVar8;
  *(undefined4 *)(lVar2 + 0x20) = uVar9;
  *(undefined4 *)(lVar2 + 0x24) = uVar10;
  *(undefined4 *)(lVar2 + 8) = uVar3;
  *(undefined4 *)(lVar2 + 0xc) = uVar4;
  *(undefined4 *)(lVar2 + 0x10) = uVar5;
  *(undefined4 *)(lVar2 + 0x14) = uVar6;
  FUN_14591e93c(lVar2 + 0x38,lVar1 + 0x38);
  memcpy((void *)(lVar2 + 0x50),(void *)(lVar1 + 0x50),0x98);
  FUN_1490e1992(lVar2 + 0xe8,lVar1 + 0xe8);
  FUN_145c50a48(lVar2 + 0xf8,lVar1 + 0xf8);
  *(undefined8 *)(lVar2 + 0x108) = *(undefined8 *)(lVar1 + 0x108);
  if ((local_18 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149140c30 FUN_149140c30 body=59 status=ok
// SIG undefined FUN_149140c30(void)

undefined8 FUN_149140c30(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149140cd0 FUN_149140cd0 body=29 status=ok
// SIG undefined FUN_149140cd0(void)

undefined8 FUN_149140cd0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149140cee FUN_149140cee body=57 status=ok
// SIG undefined FUN_149140cee(void)

void FUN_149140cee(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bb1ab30;
  puVar2 = &DAT_14c846400;
  puVar3 = param_2 + 0x12;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  memmove(param_2 + 2,&DAT_14c846400,0x80);
  return;
}



// FUNCTION 149140d28 FUN_149140d28 body=57 status=ok
// SIG undefined FUN_149140d28(void)

void FUN_149140d28(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bb1ab30;
  puVar2 = &DAT_14c846400;
  puVar3 = param_2 + 0x12;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  memmove(param_2 + 2,&DAT_14c846400,0x80);
  return;
}



// FUNCTION 149140d86 FUN_149140d86 body=71 status=ok
// SIG undefined FUN_149140d86(void)

undefined8 FUN_149140d86(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0x10;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x100);
      lVar1 = lVar1 + 0x110;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149140df6 FUN_149140df6 body=59 status=ok
// SIG undefined FUN_149140df6(void)

undefined8 FUN_149140df6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149140ea2 FUN_149140ea2 body=29 status=ok
// SIG undefined FUN_149140ea2(void)

undefined8 FUN_149140ea2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149140ec0 FUN_149140ec0 body=75 status=ok
// SIG undefined FUN_149140ec0(void)

void FUN_149140ec0(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bb1ad10;
  puVar2 = &DAT_14c846400;
  puVar3 = param_2 + 0x22;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846400;
  puVar3 = param_2 + 0x12;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  memmove(param_2 + 2,&DAT_14c846400,0x80);
  return;
}



// FUNCTION 149140f0c FUN_149140f0c body=75 status=ok
// SIG undefined FUN_149140f0c(void)

void FUN_149140f0c(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bb1ad10;
  puVar2 = &DAT_14c846400;
  puVar3 = param_2 + 0x22;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846400;
  puVar3 = param_2 + 0x12;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  memmove(param_2 + 2,&DAT_14c846400,0x80);
  return;
}



// FUNCTION 149140f7c FUN_149140f7c body=71 status=ok
// SIG undefined FUN_149140f7c(void)

undefined8 FUN_149140f7c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0x10;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x180);
      lVar1 = lVar1 + 400;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149140fec FUN_149140fec body=59 status=ok
// SIG undefined FUN_149140fec(void)

undefined8 FUN_149140fec(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149141098 FUN_149141098 body=29 status=ok
// SIG undefined FUN_149141098(void)

undefined8 FUN_149141098(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491410b6 FUN_1491410b6 body=75 status=ok
// SIG undefined FUN_1491410b6(void)

void FUN_1491410b6(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bb1aef0;
  puVar2 = &DAT_14c846400;
  puVar3 = param_2 + 0x22;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846400;
  puVar3 = param_2 + 0x12;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  memmove(param_2 + 2,&DAT_14c846400,0x80);
  return;
}



// FUNCTION 149141102 FUN_149141102 body=75 status=ok
// SIG undefined FUN_149141102(void)

void FUN_149141102(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bb1aef0;
  puVar2 = &DAT_14c846400;
  puVar3 = param_2 + 0x22;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846400;
  puVar3 = param_2 + 0x12;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  memmove(param_2 + 2,&DAT_14c846400,0x80);
  return;
}



// FUNCTION 149141172 FUN_149141172 body=71 status=ok
// SIG undefined FUN_149141172(void)

undefined8 FUN_149141172(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0x10;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x180);
      lVar1 = lVar1 + 400;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1491411e2 FUN_1491411e2 body=59 status=ok
// SIG undefined FUN_1491411e2(void)

undefined8 FUN_1491411e2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14914128e FUN_14914128e body=29 status=ok
// SIG undefined FUN_14914128e(void)

undefined8 FUN_14914128e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491412ac FUN_1491412ac body=59 status=ok
// SIG undefined FUN_1491412ac(void)

void FUN_1491412ac(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bb1b0d0;
  puVar2 = &DAT_14c846400;
  puVar3 = param_2 + 2;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x12;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 1491412e8 FUN_1491412e8 body=59 status=ok
// SIG undefined FUN_1491412e8(void)

void FUN_1491412e8(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bb1b0d0;
  puVar2 = &DAT_14c846400;
  puVar3 = param_2 + 2;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x12;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 149141348 FUN_149141348 body=71 status=ok
// SIG undefined FUN_149141348(void)

undefined8 FUN_149141348(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0x10;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0xe0);
      lVar1 = lVar1 + 0xf0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1491413b8 FUN_1491413b8 body=59 status=ok
// SIG undefined FUN_1491413b8(void)

undefined8 FUN_1491413b8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149141464 FUN_149141464 body=29 status=ok
// SIG undefined FUN_149141464(void)

undefined8 FUN_149141464(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149141482 FUN_149141482 body=93 status=ok
// SIG undefined FUN_149141482(void)

void FUN_149141482(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bb1b2b0;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0x3ff00000;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0x3ff0000000000000;
  param_2[0xb] = 0x3ff0000000000000;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846400;
  puVar3 = param_2 + 0xe;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 1491414e0 FUN_1491414e0 body=93 status=ok
// SIG undefined FUN_1491414e0(void)

void FUN_1491414e0(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bb1b2b0;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0x3ff00000;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0x3ff0000000000000;
  param_2[0xb] = 0x3ff0000000000000;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846400;
  puVar3 = param_2 + 0xe;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 149141562 FUN_149141562 body=71 status=ok
// SIG undefined FUN_149141562(void)

undefined8 FUN_149141562(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0x10;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0xe0);
      lVar1 = lVar1 + 0xf0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1491415d2 FUN_1491415d2 body=59 status=ok
// SIG undefined FUN_1491415d2(void)

undefined8 FUN_1491415d2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14914167e FUN_14914167e body=29 status=ok
// SIG undefined FUN_14914167e(void)

undefined8 FUN_14914167e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14914169c FUN_14914169c body=93 status=ok
// SIG undefined FUN_14914169c(void)

void FUN_14914169c(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bb1bc10;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0x3ff00000;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0x3ff0000000000000;
  param_2[0xb] = 0x3ff0000000000000;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846400;
  puVar3 = param_2 + 0xe;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 1491416fa FUN_1491416fa body=93 status=ok
// SIG undefined FUN_1491416fa(void)

void FUN_1491416fa(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bb1bc10;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0x3ff00000;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0x3ff0000000000000;
  param_2[0xb] = 0x3ff0000000000000;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846400;
  puVar3 = param_2 + 0xe;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 14914177c FUN_14914177c body=71 status=ok
// SIG undefined FUN_14914177c(void)

undefined8 FUN_14914177c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0x10;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0xe0);
      lVar1 = lVar1 + 0xf0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1491417ec FUN_1491417ec body=59 status=ok
// SIG undefined FUN_1491417ec(void)

undefined8 FUN_1491417ec(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14914189a FUN_14914189a body=146 status=ok
// SIG undefined FUN_14914189a(void)

void FUN_14914189a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_2 = &PTR_FUN_14bb1b5f0;
  puVar3 = &DAT_14c846400;
  puVar4 = param_2 + 2;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_2[0x14] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_2[0x12] = DAT_14c8464e0;
  param_2[0x13] = uVar1;
  param_2[0x17] = DAT_14c8463b0;
  uVar1 = DAT_14c8463a8;
  param_2[0x15] = DAT_14c8463a0;
  param_2[0x16] = uVar1;
  uVar1 = DAT_14c846390;
  param_2[0x18] = DAT_14c846388;
  param_2[0x19] = uVar1;
  param_2[0x1a] = DAT_14c846398;
  uVar1 = DAT_14c8463c0;
  param_2[0x1b] = DAT_14c8463b8;
  param_2[0x1c] = uVar1;
  param_2[0x1d] = DAT_14c8463c8;
  return;
}



// FUNCTION 14914192c FUN_14914192c body=146 status=ok
// SIG undefined FUN_14914192c(void)

void FUN_14914192c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_2 = &PTR_FUN_14bb1b5f0;
  puVar3 = &DAT_14c846400;
  puVar4 = param_2 + 2;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_2[0x14] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_2[0x12] = DAT_14c8464e0;
  param_2[0x13] = uVar1;
  param_2[0x17] = DAT_14c8463b0;
  uVar1 = DAT_14c8463a8;
  param_2[0x15] = DAT_14c8463a0;
  param_2[0x16] = uVar1;
  uVar1 = DAT_14c846390;
  param_2[0x18] = DAT_14c846388;
  param_2[0x19] = uVar1;
  param_2[0x1a] = DAT_14c846398;
  uVar1 = DAT_14c8463c0;
  param_2[0x1b] = DAT_14c8463b8;
  param_2[0x1c] = uVar1;
  param_2[0x1d] = DAT_14c8463c8;
  return;
}



// FUNCTION 1491419e2 FUN_1491419e2 body=71 status=ok
// SIG undefined FUN_1491419e2(void)

undefined8 FUN_1491419e2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0x10;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0xe0);
      lVar1 = lVar1 + 0xf0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149141a52 FUN_149141a52 body=59 status=ok
// SIG undefined FUN_149141a52(void)

undefined8 FUN_149141a52(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149141afe FUN_149141afe body=29 status=ok
// SIG undefined FUN_149141afe(void)

undefined8 FUN_149141afe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149141b1c FUN_149141b1c body=122 status=ok
// SIG undefined FUN_149141b1c(void)

void FUN_149141b1c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_2 = &PTR_FUN_14bb1b7d0;
  param_2[3] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_2[1] = DAT_14c8464e0;
  param_2[2] = uVar1;
  param_2[6] = DAT_14c8463b0;
  uVar1 = DAT_14c8463a8;
  param_2[4] = DAT_14c8463a0;
  param_2[5] = uVar1;
  uVar1 = DAT_14c846390;
  param_2[7] = DAT_14c846388;
  param_2[8] = uVar1;
  param_2[9] = DAT_14c846398;
  uVar1 = DAT_14c8463c0;
  param_2[10] = DAT_14c8463b8;
  param_2[0xb] = uVar1;
  param_2[0xc] = DAT_14c8463c8;
  puVar3 = &DAT_14c846400;
  puVar4 = param_2 + 0xe;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return;
}



// FUNCTION 149141b96 FUN_149141b96 body=122 status=ok
// SIG undefined FUN_149141b96(void)

void FUN_149141b96(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_2 = &PTR_FUN_14bb1b7d0;
  param_2[3] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_2[1] = DAT_14c8464e0;
  param_2[2] = uVar1;
  param_2[6] = DAT_14c8463b0;
  uVar1 = DAT_14c8463a8;
  param_2[4] = DAT_14c8463a0;
  param_2[5] = uVar1;
  uVar1 = DAT_14c846390;
  param_2[7] = DAT_14c846388;
  param_2[8] = uVar1;
  param_2[9] = DAT_14c846398;
  uVar1 = DAT_14c8463c0;
  param_2[10] = DAT_14c8463b8;
  param_2[0xb] = uVar1;
  param_2[0xc] = DAT_14c8463c8;
  puVar3 = &DAT_14c846400;
  puVar4 = param_2 + 0xe;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return;
}



// FUNCTION 149141c34 FUN_149141c34 body=71 status=ok
// SIG undefined FUN_149141c34(void)

undefined8 FUN_149141c34(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 8;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0xe8);
      lVar1 = lVar1 + 0xf0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149141ca4 FUN_149141ca4 body=59 status=ok
// SIG undefined FUN_149141ca4(void)

undefined8 FUN_149141ca4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149141d50 FUN_149141d50 body=29 status=ok
// SIG undefined FUN_149141d50(void)

undefined8 FUN_149141d50(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149141d6e FUN_149141d6e body=112 status=ok
// SIG undefined FUN_149141d6e(void)

void FUN_149141d6e(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  memset(param_2,0,0x90);
  *param_2 = &PTR_FUN_14bb1aef0;
  puVar2 = &DAT_14c846400;
  puVar3 = param_2 + 0x22;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846400;
  puVar3 = param_2 + 0x12;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  memmove(param_2 + 2,&DAT_14c846400,0x80);
  *param_2 = &PTR_FUN_14bb1b9b0;
  return;
}



// FUNCTION 149141dde FUN_149141dde body=96 status=ok
// SIG undefined FUN_149141dde(void)

void FUN_149141dde(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bb1aef0;
  puVar2 = &DAT_14c846400;
  puVar3 = param_2 + 0x22;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846400;
  puVar3 = param_2 + 0x12;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  memmove(param_2 + 2,&DAT_14c846400,0x80);
  *param_2 = &PTR_FUN_14bb1b9b0;
  return;
}



// FUNCTION 149141e62 FUN_149141e62 body=71 status=ok
// SIG undefined FUN_149141e62(void)

undefined8 FUN_149141e62(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0x10;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x180);
      lVar1 = lVar1 + 400;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149141ed2 FUN_149141ed2 body=59 status=ok
// SIG undefined FUN_149141ed2(void)

undefined8 FUN_149141ed2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149141f7e FUN_149141f7e body=29 status=ok
// SIG undefined FUN_149141f7e(void)

undefined8 FUN_149141f7e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149141f9c FUN_149141f9c body=84 status=ok
// SIG undefined FUN_149141f9c(void)

void FUN_149141f9c(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = 0;
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14bb1ab30;
  puVar2 = &DAT_14c846400;
  puVar3 = param_2 + 0x12;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  memmove(param_2 + 2,&DAT_14c846400,0x80);
  *param_2 = &PTR_FUN_14bb1bb90;
  return;
}



// FUNCTION 149141ff0 FUN_149141ff0 body=78 status=ok
// SIG undefined FUN_149141ff0(void)

void FUN_149141ff0(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bb1ab30;
  puVar2 = &DAT_14c846400;
  puVar3 = param_2 + 0x12;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  memmove(param_2 + 2,&DAT_14c846400,0x80);
  *param_2 = &PTR_FUN_14bb1bb90;
  return;
}



// FUNCTION 149142062 FUN_149142062 body=71 status=ok
// SIG undefined FUN_149142062(void)

undefined8 FUN_149142062(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0x10;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x100);
      lVar1 = lVar1 + 0x110;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1491420d2 FUN_1491420d2 body=59 status=ok
// SIG undefined FUN_1491420d2(void)

undefined8 FUN_1491420d2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14914217e FUN_14914217e body=29 status=ok
// SIG undefined FUN_14914217e(void)

undefined8 FUN_14914217e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14914219c FUN_14914219c body=29 status=ok
// SIG undefined FUN_14914219c(void)

undefined8 FUN_14914219c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149142222 FUN_149142222 body=59 status=ok
// SIG undefined FUN_149142222(void)

undefined8 FUN_149142222(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491422c2 FUN_1491422c2 body=29 status=ok
// SIG undefined FUN_1491422c2(void)

undefined8 FUN_1491422c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491423dc FUN_1491423dc body=59 status=ok
// SIG undefined FUN_1491423dc(void)

undefined8 FUN_1491423dc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14914247c FUN_14914247c body=29 status=ok
// SIG undefined FUN_14914247c(void)

undefined8 FUN_14914247c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14914255a FUN_14914255a body=42 status=ok
// SIG undefined FUN_14914255a(void)

undefined8 FUN_14914255a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0x10;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1491425ac FUN_1491425ac body=59 status=ok
// SIG undefined FUN_1491425ac(void)

undefined8 FUN_1491425ac(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14914264c FUN_14914264c body=29 status=ok
// SIG undefined FUN_14914264c(void)

undefined8 FUN_14914264c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14914272a FUN_14914272a body=42 status=ok
// SIG undefined FUN_14914272a(void)

undefined8 FUN_14914272a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0x10;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14914277c FUN_14914277c body=59 status=ok
// SIG undefined FUN_14914277c(void)

undefined8 FUN_14914277c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14914281c FUN_14914281c body=29 status=ok
// SIG undefined FUN_14914281c(void)

undefined8 FUN_14914281c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149142916 FUN_149142916 body=59 status=ok
// SIG undefined FUN_149142916(void)

undefined8 FUN_149142916(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491429b6 FUN_1491429b6 body=29 status=ok
// SIG undefined FUN_1491429b6(void)

undefined8 FUN_1491429b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149142a74 FUN_149142a74 body=42 status=ok
// SIG undefined FUN_149142a74(void)

undefined8 FUN_149142a74(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 8;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149142ac6 FUN_149142ac6 body=59 status=ok
// SIG undefined FUN_149142ac6(void)

undefined8 FUN_149142ac6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149142b66 FUN_149142b66 body=29 status=ok
// SIG undefined FUN_149142b66(void)

undefined8 FUN_149142b66(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149142c20 FUN_149142c20 body=42 status=ok
// SIG undefined FUN_149142c20(void)

undefined8 FUN_149142c20(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 8;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}


