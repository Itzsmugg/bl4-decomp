// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1492a6272 FUN_1492a6272 body=78 status=ok
// SIG undefined FUN_1492a6272(void)

undefined8 FUN_1492a6272(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      uVar1 = *(undefined8 *)(param_3 + -0x10);
      *(undefined8 *)(param_2 + -0xb) = *(undefined8 *)(param_3 + -0xb);
      *(undefined8 *)(param_2 + -0x10) = uVar1;
      FUN_144a787a6(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492a62e8 FUN_1492a62e8 body=59 status=ok
// SIG undefined FUN_1492a62e8(void)

undefined8 FUN_1492a62e8(longlong *param_1)

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



// FUNCTION 1492a632e FUN_1492a632e body=48 status=ok
// SIG undefined FUN_1492a632e(void)

void FUN_1492a632e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 5) == '\x01') {
    *param_2 = &PTR_FUN_14bbed320;
    if (param_2[3] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 5) = 0;
  }
  return;
}



// FUNCTION 1492a63ac FUN_1492a63ac body=57 status=ok
// SIG undefined FUN_1492a63ac(void)

undefined8 * FUN_1492a63ac(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbed320;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a6492 FUN_1492a6492 body=59 status=ok
// SIG undefined FUN_1492a6492(void)

undefined8 FUN_1492a6492(longlong *param_1)

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



// FUNCTION 1492a6532 FUN_1492a6532 body=29 status=ok
// SIG undefined FUN_1492a6532(void)

undefined8 FUN_1492a6532(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a65a0 FUN_1492a65a0 body=68 status=ok
// SIG undefined FUN_1492a65a0(void)

undefined1 FUN_1492a65a0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_1444888de(param_2,param_3);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492a660c FUN_1492a660c body=59 status=ok
// SIG undefined FUN_1492a660c(void)

undefined8 FUN_1492a660c(longlong *param_1)

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



// FUNCTION 1492a6652 FUN_1492a6652 body=48 status=ok
// SIG undefined FUN_1492a6652(void)

void FUN_1492a6652(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 4) == '\x01') {
    *param_2 = &PTR_FUN_14bbed700;
    if (param_2[2] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return;
}



// FUNCTION 1492a66d0 FUN_1492a66d0 body=57 status=ok
// SIG undefined FUN_1492a66d0(void)

undefined8 * FUN_1492a66d0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbed700;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a670a FUN_1492a670a body=37 status=ok
// SIG undefined FUN_1492a670a(void)

void FUN_1492a670a(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x970);
  FUN_1492a6886(param_2);
  return;
}



// FUNCTION 1492a675c FUN_1492a675c body=63 status=ok
// SIG undefined FUN_1492a675c(void)

undefined1 FUN_1492a675c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1492a6954(param_2,param_3);
    param_3 = param_3 + 0x970;
    param_2 = param_2 + 0x970;
  }
  return 1;
}



// FUNCTION 1492a67c4 FUN_1492a67c4 body=59 status=ok
// SIG undefined FUN_1492a67c4(void)

undefined8 FUN_1492a67c4(longlong *param_1)

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



// FUNCTION 1492a6810 FUN_1492a6810 body=40 status=ok
// SIG undefined FUN_1492a6810(void)

void FUN_1492a6810(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x970) == '\x01') {
    FUN_1492a6900(param_2);
    *(undefined1 *)(param_2 + 0x970) = 0;
  }
  return;
}



// FUNCTION 1492a6886 FUN_1492a6886 body=84 status=ok
// SIG undefined FUN_1492a6886(void)

undefined8 * FUN_1492a6886(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bbed8f0;
  FUN_1412ca278(param_1 + 2);
  FUN_1412ca278(param_1 + 0x3e);
  FUN_1412ca278(param_1 + 0x7a);
  FUN_1412ca278(param_1 + 0xb6);
  FUN_1412ca278(param_1 + 0xf2);
  return param_1;
}



// FUNCTION 1492a68da FUN_1492a68da body=38 status=ok
// SIG undefined FUN_1492a68da(void)

undefined8 FUN_1492a68da(undefined8 param_1,int param_2)

{
  FUN_1492a6900();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a6900 FUN_1492a6900 body=83 status=ok
// SIG undefined FUN_1492a6900(void)

void FUN_1492a6900(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bbed8f0;
  FUN_140f8ccfc(param_1 + 0xf2);
  FUN_140f8ccfc(param_1 + 0xb6);
  FUN_140f8ccfc(param_1 + 0x7a);
  FUN_140f8ccfc(param_1 + 0x3e);
  FUN_140f8ccfc(param_1 + 2);
  return;
}



// FUNCTION 1492a6954 FUN_1492a6954 body=106 status=ok
// SIG undefined FUN_1492a6954(void)

longlong FUN_1492a6954(longlong param_1,longlong param_2)

{
  FUN_1491c05d4(param_1 + 0x10,param_2 + 0x10);
  FUN_1491c05d4(param_1 + 0x1f0,param_2 + 0x1f0);
  FUN_1491c05d4(param_1 + 0x3d0,param_2 + 0x3d0);
  FUN_1491c05d4(param_1 + 0x5b0,param_2 + 0x5b0);
  FUN_1491c05d4(param_1 + 0x790,param_2 + 0x790);
  return param_1;
}



// FUNCTION 1492a69c0 FUN_1492a69c0 body=174 status=ok
// SIG undefined FUN_1492a69c0(void)

void FUN_1492a69c0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bb906f0;
  param_2[0x3e] = 0;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  *(undefined4 *)(param_2 + 0x42) = 0;
  *(undefined4 *)((longlong)param_2 + 0x214) = 0;
  *(undefined4 *)(param_2 + 0x43) = 0;
  *(undefined4 *)((longlong)param_2 + 0x21c) = 0x3ff00000;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x46] = 0;
  param_2[0x47] = 0;
  param_2[0x48] = 0x3ff0000000000000;
  param_2[0x49] = 0x3ff0000000000000;
  param_2[0x4a] = 0x3ff0000000000000;
  param_2[0x4b] = 0;
  *(undefined4 *)(param_2 + 0x4c) = 0x3f800000;
  *(undefined2 *)((longlong)param_2 + 0x264) = 0x100;
  *(undefined1 *)(param_2 + 0x4d) = 0;
  *(undefined8 *)((longlong)param_2 + 0x26c) = 0;
  *(undefined2 *)((longlong)param_2 + 0x274) = 0xffff;
  *(undefined4 *)(param_2 + 0x4f) = 0xffffffff;
  return;
}



// FUNCTION 1492a6a6e FUN_1492a6a6e body=174 status=ok
// SIG undefined FUN_1492a6a6e(void)

void FUN_1492a6a6e(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bb906f0;
  param_2[0x3e] = 0;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  *(undefined4 *)(param_2 + 0x42) = 0;
  *(undefined4 *)((longlong)param_2 + 0x214) = 0;
  *(undefined4 *)(param_2 + 0x43) = 0;
  *(undefined4 *)((longlong)param_2 + 0x21c) = 0x3ff00000;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x46] = 0;
  param_2[0x47] = 0;
  param_2[0x48] = 0x3ff0000000000000;
  param_2[0x49] = 0x3ff0000000000000;
  param_2[0x4a] = 0x3ff0000000000000;
  param_2[0x4b] = 0;
  *(undefined4 *)(param_2 + 0x4c) = 0x3f800000;
  *(undefined2 *)((longlong)param_2 + 0x264) = 0x100;
  *(undefined1 *)(param_2 + 0x4d) = 0;
  *(undefined8 *)((longlong)param_2 + 0x26c) = 0;
  *(undefined2 *)((longlong)param_2 + 0x274) = 0xffff;
  *(undefined4 *)(param_2 + 0x4f) = 0xffffffff;
  return;
}



// FUNCTION 1492a6b40 FUN_1492a6b40 body=110 status=ok
// SIG undefined FUN_1492a6b40(void)

undefined8 FUN_1492a6b40(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_1491c05d4(param_2 + 0x10 + lVar1,param_3 + 0x10 + lVar1);
      memcpy((void *)(param_2 + 0x1f0 + lVar1),(void *)(param_3 + 0x1f0 + lVar1),0x98);
      lVar1 = lVar1 + 0x290;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492a6bd6 FUN_1492a6bd6 body=59 status=ok
// SIG undefined FUN_1492a6bd6(void)

undefined8 FUN_1492a6bd6(longlong *param_1)

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



// FUNCTION 1492a6c22 FUN_1492a6c22 body=49 status=ok
// SIG undefined FUN_1492a6c22(void)

void FUN_1492a6c22(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x52) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x52) = 0;
  }
  return;
}



// FUNCTION 1492a6ca4 FUN_1492a6ca4 body=52 status=ok
// SIG undefined FUN_1492a6ca4(void)

undefined8 * FUN_1492a6ca4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a6d7c FUN_1492a6d7c body=59 status=ok
// SIG undefined FUN_1492a6d7c(void)

undefined8 FUN_1492a6d7c(longlong *param_1)

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



// FUNCTION 1492a6e66 FUN_1492a6e66 body=62 status=ok
// SIG undefined FUN_1492a6e66(void)

undefined1 FUN_1492a6e66(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_1444888de(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492a6ecc FUN_1492a6ecc body=59 status=ok
// SIG undefined FUN_1492a6ecc(void)

undefined8 FUN_1492a6ecc(longlong *param_1)

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



// FUNCTION 1492a6f12 FUN_1492a6f12 body=48 status=ok
// SIG undefined FUN_1492a6f12(void)

void FUN_1492a6f12(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_2 = &PTR_FUN_14bbede30;
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 1492a6f90 FUN_1492a6f90 body=57 status=ok
// SIG undefined FUN_1492a6f90(void)

undefined8 * FUN_1492a6f90(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbede30;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a705c FUN_1492a705c body=59 status=ok
// SIG undefined FUN_1492a705c(void)

undefined8 FUN_1492a705c(longlong *param_1)

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



// FUNCTION 1492a70fc FUN_1492a70fc body=29 status=ok
// SIG undefined FUN_1492a70fc(void)

undefined8 FUN_1492a70fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a71ac FUN_1492a71ac body=59 status=ok
// SIG undefined FUN_1492a71ac(void)

undefined8 FUN_1492a71ac(longlong *param_1)

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



// FUNCTION 1492a724c FUN_1492a724c body=29 status=ok
// SIG undefined FUN_1492a724c(void)

undefined8 FUN_1492a724c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a72fc FUN_1492a72fc body=59 status=ok
// SIG undefined FUN_1492a72fc(void)

undefined8 FUN_1492a72fc(longlong *param_1)

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



// FUNCTION 1492a739c FUN_1492a739c body=29 status=ok
// SIG undefined FUN_1492a739c(void)

undefined8 FUN_1492a739c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a73ba FUN_1492a73ba body=29 status=ok
// SIG undefined FUN_1492a73ba(void)

undefined8 FUN_1492a73ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a74ac FUN_1492a74ac body=59 status=ok
// SIG undefined FUN_1492a74ac(void)

undefined8 FUN_1492a74ac(longlong *param_1)

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



// FUNCTION 1492a754c FUN_1492a754c body=29 status=ok
// SIG undefined FUN_1492a754c(void)

undefined8 FUN_1492a754c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a764a FUN_1492a764a body=59 status=ok
// SIG undefined FUN_1492a764a(void)

undefined8 FUN_1492a764a(longlong *param_1)

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



// FUNCTION 1492a76ea FUN_1492a76ea body=29 status=ok
// SIG undefined FUN_1492a76ea(void)

undefined8 FUN_1492a76ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a77f4 FUN_1492a77f4 body=59 status=ok
// SIG undefined FUN_1492a77f4(void)

undefined8 FUN_1492a77f4(longlong *param_1)

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



// FUNCTION 1492a7894 FUN_1492a7894 body=29 status=ok
// SIG undefined FUN_1492a7894(void)

undefined8 FUN_1492a7894(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a799a FUN_1492a799a body=59 status=ok
// SIG undefined FUN_1492a799a(void)

undefined8 FUN_1492a799a(longlong *param_1)

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



// FUNCTION 1492a7a3a FUN_1492a7a3a body=29 status=ok
// SIG undefined FUN_1492a7a3a(void)

undefined8 FUN_1492a7a3a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a7b4a FUN_1492a7b4a body=59 status=ok
// SIG undefined FUN_1492a7b4a(void)

undefined8 FUN_1492a7b4a(longlong *param_1)

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



// FUNCTION 1492a7bea FUN_1492a7bea body=29 status=ok
// SIG undefined FUN_1492a7bea(void)

undefined8 FUN_1492a7bea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a7d1c FUN_1492a7d1c body=59 status=ok
// SIG undefined FUN_1492a7d1c(void)

undefined8 FUN_1492a7d1c(longlong *param_1)

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



// FUNCTION 1492a7dbc FUN_1492a7dbc body=29 status=ok
// SIG undefined FUN_1492a7dbc(void)

undefined8 FUN_1492a7dbc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a7eee FUN_1492a7eee body=59 status=ok
// SIG undefined FUN_1492a7eee(void)

undefined8 FUN_1492a7eee(longlong *param_1)

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



// FUNCTION 1492a7f8e FUN_1492a7f8e body=29 status=ok
// SIG undefined FUN_1492a7f8e(void)

undefined8 FUN_1492a7f8e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a7fac FUN_1492a7fac body=64 status=ok
// SIG undefined FUN_1492a7fac(void)

void FUN_1492a7fac(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined1 *)((longlong)param_2 + 0x1c) = 0;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0xffffffff;
  *param_2 = &PTR_FUN_14bbef410;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 6;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 1492a7fec FUN_1492a7fec body=64 status=ok
// SIG undefined FUN_1492a7fec(void)

void FUN_1492a7fec(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined1 *)((longlong)param_2 + 0x1c) = 0;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0xffffffff;
  *param_2 = &PTR_FUN_14bbef410;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 6;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 1492a8050 FUN_1492a8050 body=75 status=ok
// SIG undefined FUN_1492a8050(void)

undefined8 FUN_1492a8050(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  if (param_4 != 0) {
    lVar4 = 0x30;
    do {
      *(undefined4 *)(param_2 + -8 + lVar4) = *(undefined4 *)(param_3 + -8 + lVar4);
      puVar6 = (undefined8 *)(param_3 + -0x28 + lVar4);
      uVar1 = *puVar6;
      uVar2 = puVar6[1];
      puVar6 = (undefined8 *)(param_3 + -0x18 + lVar4);
      uVar3 = puVar6[1];
      puVar7 = (undefined8 *)(param_2 + -0x18 + lVar4);
      *puVar7 = *puVar6;
      puVar7[1] = uVar3;
      puVar6 = (undefined8 *)(param_2 + -0x28 + lVar4);
      *puVar6 = uVar1;
      puVar6[1] = uVar2;
      puVar6 = (undefined8 *)(param_3 + lVar4);
      puVar7 = (undefined8 *)(param_2 + lVar4);
      for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      lVar4 = lVar4 + 0x90;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492a80c4 FUN_1492a80c4 body=59 status=ok
// SIG undefined FUN_1492a80c4(void)

undefined8 FUN_1492a80c4(longlong *param_1)

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



// FUNCTION 1492a8170 FUN_1492a8170 body=29 status=ok
// SIG undefined FUN_1492a8170(void)

undefined8 FUN_1492a8170(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a8216 FUN_1492a8216 body=92 status=ok
// SIG undefined FUN_1492a8216(void)

undefined8 FUN_1492a8216(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
    do {
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      uVar1 = *(undefined4 *)(param_3 + -0x28);
      uVar2 = *(undefined4 *)(param_3 + -0x24);
      uVar3 = *(undefined4 *)(param_3 + -0x20);
      uVar4 = *(undefined4 *)(param_3 + -0x1c);
      uVar5 = *(undefined4 *)(param_3 + -0x14);
      uVar6 = *(undefined4 *)(param_3 + -0x10);
      uVar7 = *(undefined4 *)(param_3 + -0xc);
      *(undefined4 *)(param_2 + -0x18) = *(undefined4 *)(param_3 + -0x18);
      *(undefined4 *)(param_2 + -0x14) = uVar5;
      *(undefined4 *)(param_2 + -0x10) = uVar6;
      *(undefined4 *)(param_2 + -0xc) = uVar7;
      *(undefined4 *)(param_2 + -0x28) = uVar1;
      *(undefined4 *)(param_2 + -0x24) = uVar2;
      *(undefined4 *)(param_2 + -0x20) = uVar3;
      *(undefined4 *)(param_2 + -0x1c) = uVar4;
      FUN_1491c05d4(param_2,param_3);
      param_3 = param_3 + 0x210;
      param_2 = param_2 + 0x210;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492a829a FUN_1492a829a body=59 status=ok
// SIG undefined FUN_1492a829a(void)

undefined8 FUN_1492a829a(longlong *param_1)

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



// FUNCTION 1492a82e6 FUN_1492a82e6 body=49 status=ok
// SIG undefined FUN_1492a82e6(void)

void FUN_1492a82e6(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x42) == '\x01') {
    *param_2 = &PTR_FUN_14bbef600;
    FUN_140f8ccfc(param_2 + 6);
    *(undefined1 *)(param_2 + 0x42) = 0;
  }
  return;
}



// FUNCTION 1492a8366 FUN_1492a8366 body=52 status=ok
// SIG undefined FUN_1492a8366(void)

undefined8 * FUN_1492a8366(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbef600;
  FUN_140f8ccfc(param_1 + 6);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a839c FUN_1492a839c body=84 status=ok
// SIG undefined FUN_1492a839c(void)

void FUN_1492a839c(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined1 *)((longlong)param_2 + 0x1c) = 0;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0xffffffff;
  *param_2 = &PTR_FUN_14bbef600;
  FUN_1412ca278(param_2 + 6);
  *param_2 = &PTR_FUN_14bbef7f0;
  *(undefined1 *)(param_2 + 0x42) = 0;
  return;
}



// FUNCTION 1492a83f0 FUN_1492a83f0 body=84 status=ok
// SIG undefined FUN_1492a83f0(void)

void FUN_1492a83f0(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined1 *)((longlong)param_2 + 0x1c) = 0;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0xffffffff;
  *param_2 = &PTR_FUN_14bbef600;
  FUN_1412ca278(param_2 + 6);
  *param_2 = &PTR_FUN_14bbef7f0;
  *(undefined1 *)(param_2 + 0x42) = 0;
  return;
}



// FUNCTION 1492a8468 FUN_1492a8468 body=134 status=ok
// SIG undefined FUN_1492a8468(void)

undefined8 FUN_1492a8468(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      *(undefined4 *)(param_2 + 0x28 + lVar10) = *(undefined4 *)(param_3 + 0x28 + lVar10);
      puVar1 = (undefined4 *)(param_3 + 8 + lVar10);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar1 = (undefined4 *)(param_3 + 0x18 + lVar10);
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x18 + lVar10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
      puVar1 = (undefined4 *)(param_2 + 8 + lVar10);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      FUN_1491c05d4(param_2 + 0x30 + lVar10,param_3 + 0x30 + lVar10);
      *(undefined1 *)(param_2 + 0x210 + lVar10) = *(undefined1 *)(param_3 + 0x210 + lVar10);
      lVar10 = lVar10 + 0x220;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492a8516 FUN_1492a8516 body=59 status=ok
// SIG undefined FUN_1492a8516(void)

undefined8 FUN_1492a8516(longlong *param_1)

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



// FUNCTION 1492a8562 FUN_1492a8562 body=49 status=ok
// SIG undefined FUN_1492a8562(void)

void FUN_1492a8562(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x44) == '\x01') {
    *param_2 = &PTR_FUN_14bbef600;
    FUN_140f8ccfc(param_2 + 6);
    *(undefined1 *)(param_2 + 0x44) = 0;
  }
  return;
}



// FUNCTION 1492a85e2 FUN_1492a85e2 body=52 status=ok
// SIG undefined FUN_1492a85e2(void)

undefined8 * FUN_1492a85e2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbef600;
  FUN_140f8ccfc(param_1 + 6);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a8618 FUN_1492a8618 body=83 status=ok
// SIG undefined FUN_1492a8618(void)

void FUN_1492a8618(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined1 *)((longlong)param_2 + 0x1c) = 0;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0xffffffff;
  *param_2 = &PTR_FUN_14bbef600;
  FUN_1412ca278(param_2 + 6);
  *param_2 = &PTR_FUN_14bbef9e0;
  *(undefined4 *)(param_2 + 0x42) = 0;
  return;
}



// FUNCTION 1492a866c FUN_1492a866c body=83 status=ok
// SIG undefined FUN_1492a866c(void)

void FUN_1492a866c(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined1 *)((longlong)param_2 + 0x1c) = 0;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0xffffffff;
  *param_2 = &PTR_FUN_14bbef600;
  FUN_1412ca278(param_2 + 6);
  *param_2 = &PTR_FUN_14bbef9e0;
  *(undefined4 *)(param_2 + 0x42) = 0;
  return;
}



// FUNCTION 1492a86e4 FUN_1492a86e4 body=138 status=ok
// SIG undefined FUN_1492a86e4(void)

undefined8 FUN_1492a86e4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      *(undefined4 *)(param_2 + 0x28 + lVar10) = *(undefined4 *)(param_3 + 0x28 + lVar10);
      puVar1 = (undefined4 *)(param_3 + 8 + lVar10);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar1 = (undefined4 *)(param_3 + 0x18 + lVar10);
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x18 + lVar10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
      puVar1 = (undefined4 *)(param_2 + 8 + lVar10);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      FUN_1491c05d4(param_2 + 0x30 + lVar10,param_3 + 0x30 + lVar10);
      *(undefined4 *)(param_2 + 0x210 + lVar10) = *(undefined4 *)(param_3 + 0x210 + lVar10);
      lVar10 = lVar10 + 0x220;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492a8796 FUN_1492a8796 body=59 status=ok
// SIG undefined FUN_1492a8796(void)

undefined8 FUN_1492a8796(longlong *param_1)

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



// FUNCTION 1492a87e2 FUN_1492a87e2 body=49 status=ok
// SIG undefined FUN_1492a87e2(void)

void FUN_1492a87e2(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x44) == '\x01') {
    *param_2 = &PTR_FUN_14bbef600;
    FUN_140f8ccfc(param_2 + 6);
    *(undefined1 *)(param_2 + 0x44) = 0;
  }
  return;
}



// FUNCTION 1492a8862 FUN_1492a8862 body=52 status=ok
// SIG undefined FUN_1492a8862(void)

undefined8 * FUN_1492a8862(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbef600;
  FUN_140f8ccfc(param_1 + 6);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a8898 FUN_1492a8898 body=83 status=ok
// SIG undefined FUN_1492a8898(void)

void FUN_1492a8898(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined1 *)((longlong)param_2 + 0x1c) = 0;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0xffffffff;
  *param_2 = &PTR_FUN_14bbef600;
  FUN_1412ca278(param_2 + 6);
  *param_2 = &PTR_FUN_14bbefbd0;
  *(undefined4 *)(param_2 + 0x42) = 0;
  return;
}



// FUNCTION 1492a88ec FUN_1492a88ec body=83 status=ok
// SIG undefined FUN_1492a88ec(void)

void FUN_1492a88ec(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined1 *)((longlong)param_2 + 0x1c) = 0;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0xffffffff;
  *param_2 = &PTR_FUN_14bbef600;
  FUN_1412ca278(param_2 + 6);
  *param_2 = &PTR_FUN_14bbefbd0;
  *(undefined4 *)(param_2 + 0x42) = 0;
  return;
}



// FUNCTION 1492a8964 FUN_1492a8964 body=134 status=ok
// SIG undefined FUN_1492a8964(void)

undefined8 FUN_1492a8964(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      *(undefined4 *)(param_2 + 0x28 + lVar10) = *(undefined4 *)(param_3 + 0x28 + lVar10);
      puVar1 = (undefined4 *)(param_3 + 8 + lVar10);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar1 = (undefined4 *)(param_3 + 0x18 + lVar10);
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x18 + lVar10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
      puVar1 = (undefined4 *)(param_2 + 8 + lVar10);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      FUN_1491c05d4(param_2 + 0x30 + lVar10,param_3 + 0x30 + lVar10);
      *(undefined4 *)(param_2 + 0x210 + lVar10) = *(undefined4 *)(param_3 + 0x210 + lVar10);
      lVar10 = lVar10 + 0x220;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492a8a12 FUN_1492a8a12 body=59 status=ok
// SIG undefined FUN_1492a8a12(void)

undefined8 FUN_1492a8a12(longlong *param_1)

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



// FUNCTION 1492a8a5e FUN_1492a8a5e body=49 status=ok
// SIG undefined FUN_1492a8a5e(void)

void FUN_1492a8a5e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x44) == '\x01') {
    *param_2 = &PTR_FUN_14bbef600;
    FUN_140f8ccfc(param_2 + 6);
    *(undefined1 *)(param_2 + 0x44) = 0;
  }
  return;
}



// FUNCTION 1492a8ade FUN_1492a8ade body=52 status=ok
// SIG undefined FUN_1492a8ade(void)

undefined8 * FUN_1492a8ade(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbef600;
  FUN_140f8ccfc(param_1 + 6);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a8b14 FUN_1492a8b14 body=87 status=ok
// SIG undefined FUN_1492a8b14(void)

void FUN_1492a8b14(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined1 *)((longlong)param_2 + 0x1c) = 0;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0xffffffff;
  *param_2 = &PTR_FUN_14bbef600;
  FUN_1412ca278(param_2 + 6);
  *param_2 = &PTR_FUN_14bbefdc0;
  uVar1 = DAT_14c8463f8;
  param_2[0x42] = DAT_14c8463f0;
  param_2[0x43] = uVar1;
  return;
}



// FUNCTION 1492a8b6c FUN_1492a8b6c body=87 status=ok
// SIG undefined FUN_1492a8b6c(void)

void FUN_1492a8b6c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined1 *)((longlong)param_2 + 0x1c) = 0;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0xffffffff;
  *param_2 = &PTR_FUN_14bbef600;
  FUN_1412ca278(param_2 + 6);
  *param_2 = &PTR_FUN_14bbefdc0;
  uVar1 = DAT_14c8463f8;
  param_2[0x42] = DAT_14c8463f0;
  param_2[0x43] = uVar1;
  return;
}



// FUNCTION 1492a8be8 FUN_1492a8be8 body=136 status=ok
// SIG undefined FUN_1492a8be8(void)

undefined8 FUN_1492a8be8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  
  if (param_4 != 0) {
    lVar13 = 0;
    do {
      *(undefined4 *)(param_2 + 0x28 + lVar13) = *(undefined4 *)(param_3 + 0x28 + lVar13);
      puVar1 = (undefined4 *)(param_3 + 8 + lVar13);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      puVar1 = (undefined4 *)(param_3 + 0x18 + lVar13);
      uVar9 = puVar1[1];
      uVar10 = puVar1[2];
      uVar11 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x18 + lVar13);
      *puVar2 = *puVar1;
      puVar2[1] = uVar9;
      puVar2[2] = uVar10;
      puVar2[3] = uVar11;
      puVar1 = (undefined4 *)(param_2 + 8 + lVar13);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      FUN_1491c05d4(param_2 + 0x30 + lVar13,param_3 + 0x30 + lVar13);
      puVar3 = (undefined8 *)(param_3 + 0x210 + lVar13);
      uVar12 = puVar3[1];
      puVar4 = (undefined8 *)(param_2 + 0x210 + lVar13);
      *puVar4 = *puVar3;
      puVar4[1] = uVar12;
      lVar13 = lVar13 + 0x220;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492a8c98 FUN_1492a8c98 body=59 status=ok
// SIG undefined FUN_1492a8c98(void)

undefined8 FUN_1492a8c98(longlong *param_1)

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



// FUNCTION 1492a8ce4 FUN_1492a8ce4 body=49 status=ok
// SIG undefined FUN_1492a8ce4(void)

void FUN_1492a8ce4(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x44) == '\x01') {
    *param_2 = &PTR_FUN_14bbef600;
    FUN_140f8ccfc(param_2 + 6);
    *(undefined1 *)(param_2 + 0x44) = 0;
  }
  return;
}



// FUNCTION 1492a8d64 FUN_1492a8d64 body=52 status=ok
// SIG undefined FUN_1492a8d64(void)

undefined8 * FUN_1492a8d64(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbef600;
  FUN_140f8ccfc(param_1 + 6);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a8d9a FUN_1492a8d9a body=101 status=ok
// SIG undefined FUN_1492a8d9a(void)

void FUN_1492a8d9a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined1 *)((longlong)param_2 + 0x1c) = 0;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0xffffffff;
  *param_2 = &PTR_FUN_14bbef600;
  FUN_1412ca278(param_2 + 6);
  *param_2 = &PTR_FUN_14bbeffb0;
  uVar1 = DAT_14c8464e8;
  param_2[0x42] = DAT_14c8464e0;
  param_2[0x43] = uVar1;
  param_2[0x44] = DAT_14c8464f0;
  return;
}



// FUNCTION 1492a8e00 FUN_1492a8e00 body=101 status=ok
// SIG undefined FUN_1492a8e00(void)

void FUN_1492a8e00(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined1 *)((longlong)param_2 + 0x1c) = 0;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0xffffffff;
  *param_2 = &PTR_FUN_14bbef600;
  FUN_1412ca278(param_2 + 6);
  *param_2 = &PTR_FUN_14bbeffb0;
  uVar1 = DAT_14c8464e8;
  param_2[0x42] = DAT_14c8464e0;
  param_2[0x43] = uVar1;
  param_2[0x44] = DAT_14c8464f0;
  return;
}



// FUNCTION 1492a8e8a FUN_1492a8e8a body=152 status=ok
// SIG undefined FUN_1492a8e8a(void)

undefined8 FUN_1492a8e8a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  
  if (param_4 != 0) {
    lVar13 = 0;
    do {
      *(undefined4 *)(param_2 + 0x28 + lVar13) = *(undefined4 *)(param_3 + 0x28 + lVar13);
      puVar1 = (undefined4 *)(param_3 + 8 + lVar13);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      puVar1 = (undefined4 *)(param_3 + 0x18 + lVar13);
      uVar9 = puVar1[1];
      uVar10 = puVar1[2];
      uVar11 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x18 + lVar13);
      *puVar2 = *puVar1;
      puVar2[1] = uVar9;
      puVar2[2] = uVar10;
      puVar2[3] = uVar11;
      puVar1 = (undefined4 *)(param_2 + 8 + lVar13);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      FUN_1491c05d4(param_2 + 0x30 + lVar13,param_3 + 0x30 + lVar13);
      puVar3 = (undefined8 *)(param_3 + 0x210 + lVar13);
      uVar12 = puVar3[1];
      puVar4 = (undefined8 *)(param_2 + 0x210 + lVar13);
      *puVar4 = *puVar3;
      puVar4[1] = uVar12;
      *(undefined8 *)(param_2 + 0x220 + lVar13) = *(undefined8 *)(param_3 + 0x220 + lVar13);
      lVar13 = lVar13 + 0x230;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492a8f4a FUN_1492a8f4a body=59 status=ok
// SIG undefined FUN_1492a8f4a(void)

undefined8 FUN_1492a8f4a(longlong *param_1)

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



// FUNCTION 1492a8f96 FUN_1492a8f96 body=49 status=ok
// SIG undefined FUN_1492a8f96(void)

void FUN_1492a8f96(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x46) == '\x01') {
    *param_2 = &PTR_FUN_14bbef600;
    FUN_140f8ccfc(param_2 + 6);
    *(undefined1 *)(param_2 + 0x46) = 0;
  }
  return;
}



// FUNCTION 1492a9016 FUN_1492a9016 body=52 status=ok
// SIG undefined FUN_1492a9016(void)

undefined8 * FUN_1492a9016(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbef600;
  FUN_140f8ccfc(param_1 + 6);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a904c FUN_1492a904c body=101 status=ok
// SIG undefined FUN_1492a904c(void)

void FUN_1492a904c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined1 *)((longlong)param_2 + 0x1c) = 0;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0xffffffff;
  *param_2 = &PTR_FUN_14bbef600;
  FUN_1412ca278(param_2 + 6);
  *param_2 = &PTR_FUN_14bbf01a0;
  uVar1 = DAT_14c846500;
  param_2[0x42] = DAT_14c8464f8;
  param_2[0x43] = uVar1;
  param_2[0x44] = DAT_14c846508;
  return;
}



// FUNCTION 1492a90b2 FUN_1492a90b2 body=101 status=ok
// SIG undefined FUN_1492a90b2(void)

void FUN_1492a90b2(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined1 *)((longlong)param_2 + 0x1c) = 0;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0xffffffff;
  *param_2 = &PTR_FUN_14bbef600;
  FUN_1412ca278(param_2 + 6);
  *param_2 = &PTR_FUN_14bbf01a0;
  uVar1 = DAT_14c846500;
  param_2[0x42] = DAT_14c8464f8;
  param_2[0x43] = uVar1;
  param_2[0x44] = DAT_14c846508;
  return;
}



// FUNCTION 1492a913c FUN_1492a913c body=152 status=ok
// SIG undefined FUN_1492a913c(void)

undefined8 FUN_1492a913c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  
  if (param_4 != 0) {
    lVar13 = 0;
    do {
      *(undefined4 *)(param_2 + 0x28 + lVar13) = *(undefined4 *)(param_3 + 0x28 + lVar13);
      puVar1 = (undefined4 *)(param_3 + 8 + lVar13);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      puVar1 = (undefined4 *)(param_3 + 0x18 + lVar13);
      uVar9 = puVar1[1];
      uVar10 = puVar1[2];
      uVar11 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x18 + lVar13);
      *puVar2 = *puVar1;
      puVar2[1] = uVar9;
      puVar2[2] = uVar10;
      puVar2[3] = uVar11;
      puVar1 = (undefined4 *)(param_2 + 8 + lVar13);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      FUN_1491c05d4(param_2 + 0x30 + lVar13,param_3 + 0x30 + lVar13);
      puVar3 = (undefined8 *)(param_3 + 0x210 + lVar13);
      uVar12 = puVar3[1];
      puVar4 = (undefined8 *)(param_2 + 0x210 + lVar13);
      *puVar4 = *puVar3;
      puVar4[1] = uVar12;
      *(undefined8 *)(param_2 + 0x220 + lVar13) = *(undefined8 *)(param_3 + 0x220 + lVar13);
      lVar13 = lVar13 + 0x230;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492a91fc FUN_1492a91fc body=59 status=ok
// SIG undefined FUN_1492a91fc(void)

undefined8 FUN_1492a91fc(longlong *param_1)

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



// FUNCTION 1492a9248 FUN_1492a9248 body=49 status=ok
// SIG undefined FUN_1492a9248(void)

void FUN_1492a9248(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x46) == '\x01') {
    *param_2 = &PTR_FUN_14bbef600;
    FUN_140f8ccfc(param_2 + 6);
    *(undefined1 *)(param_2 + 0x46) = 0;
  }
  return;
}



// FUNCTION 1492a92c8 FUN_1492a92c8 body=52 status=ok
// SIG undefined FUN_1492a92c8(void)

undefined8 * FUN_1492a92c8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbef600;
  FUN_140f8ccfc(param_1 + 6);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a92fe FUN_1492a92fe body=97 status=ok
// SIG undefined FUN_1492a92fe(void)

void FUN_1492a92fe(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined1 *)((longlong)param_2 + 0x1c) = 0;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0xffffffff;
  *param_2 = &PTR_FUN_14bbef600;
  FUN_1412ca278(param_2 + 6);
  *param_2 = &PTR_FUN_14bbf0390;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x42;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 1492a9360 FUN_1492a9360 body=97 status=ok
// SIG undefined FUN_1492a9360(void)

void FUN_1492a9360(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined1 *)((longlong)param_2 + 0x1c) = 0;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0xffffffff;
  *param_2 = &PTR_FUN_14bbef600;
  FUN_1412ca278(param_2 + 6);
  *param_2 = &PTR_FUN_14bbf0390;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x42;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 1492a93e6 FUN_1492a93e6 body=153 status=ok
// SIG undefined FUN_1492a93e6(void)

undefined8 FUN_1492a93e6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  if (param_4 != 0) {
    lVar11 = 0;
    do {
      *(undefined4 *)(param_2 + 0x28 + lVar11) = *(undefined4 *)(param_3 + 0x28 + lVar11);
      puVar1 = (undefined4 *)(param_3 + 8 + lVar11);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar1 = (undefined4 *)(param_3 + 0x18 + lVar11);
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x18 + lVar11);
      *puVar2 = *puVar1;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
      puVar1 = (undefined4 *)(param_2 + 8 + lVar11);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      FUN_1491c05d4(param_2 + 0x30 + lVar11,param_3 + 0x30 + lVar11);
      puVar12 = (undefined8 *)(param_3 + 8 + lVar11 + 0x208);
      puVar13 = (undefined8 *)(param_2 + 8 + lVar11 + 0x208);
      for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
        *puVar13 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar13 = puVar13 + 1;
      }
      lVar11 = lVar11 + 0x270;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492a94a8 FUN_1492a94a8 body=59 status=ok
// SIG undefined FUN_1492a94a8(void)

undefined8 FUN_1492a94a8(longlong *param_1)

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



// FUNCTION 1492a94f4 FUN_1492a94f4 body=49 status=ok
// SIG undefined FUN_1492a94f4(void)

void FUN_1492a94f4(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x4e) == '\x01') {
    *param_2 = &PTR_FUN_14bbef600;
    FUN_140f8ccfc(param_2 + 6);
    *(undefined1 *)(param_2 + 0x4e) = 0;
  }
  return;
}



// FUNCTION 1492a9574 FUN_1492a9574 body=52 status=ok
// SIG undefined FUN_1492a9574(void)

undefined8 * FUN_1492a9574(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbef600;
  FUN_140f8ccfc(param_1 + 6);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a9656 FUN_1492a9656 body=59 status=ok
// SIG undefined FUN_1492a9656(void)

undefined8 FUN_1492a9656(longlong *param_1)

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



// FUNCTION 1492a96f6 FUN_1492a96f6 body=29 status=ok
// SIG undefined FUN_1492a96f6(void)

undefined8 FUN_1492a96f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a97d2 FUN_1492a97d2 body=59 status=ok
// SIG undefined FUN_1492a97d2(void)

undefined8 FUN_1492a97d2(longlong *param_1)

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



// FUNCTION 1492a9872 FUN_1492a9872 body=29 status=ok
// SIG undefined FUN_1492a9872(void)

undefined8 FUN_1492a9872(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a9956 FUN_1492a9956 body=59 status=ok
// SIG undefined FUN_1492a9956(void)

undefined8 FUN_1492a9956(longlong *param_1)

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



// FUNCTION 1492a99f6 FUN_1492a99f6 body=29 status=ok
// SIG undefined FUN_1492a99f6(void)

undefined8 FUN_1492a99f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a9ad6 FUN_1492a9ad6 body=59 status=ok
// SIG undefined FUN_1492a9ad6(void)

undefined8 FUN_1492a9ad6(longlong *param_1)

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



// FUNCTION 1492a9b76 FUN_1492a9b76 body=29 status=ok
// SIG undefined FUN_1492a9b76(void)

undefined8 FUN_1492a9b76(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a9c60 FUN_1492a9c60 body=59 status=ok
// SIG undefined FUN_1492a9c60(void)

undefined8 FUN_1492a9c60(longlong *param_1)

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



// FUNCTION 1492a9d00 FUN_1492a9d00 body=29 status=ok
// SIG undefined FUN_1492a9d00(void)

undefined8 FUN_1492a9d00(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a9e0c FUN_1492a9e0c body=59 status=ok
// SIG undefined FUN_1492a9e0c(void)

undefined8 FUN_1492a9e0c(longlong *param_1)

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



// FUNCTION 1492a9eac FUN_1492a9eac body=29 status=ok
// SIG undefined FUN_1492a9eac(void)

undefined8 FUN_1492a9eac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a9fb8 FUN_1492a9fb8 body=59 status=ok
// SIG undefined FUN_1492a9fb8(void)

undefined8 FUN_1492a9fb8(longlong *param_1)

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



// FUNCTION 1492aa058 FUN_1492aa058 body=29 status=ok
// SIG undefined FUN_1492aa058(void)

undefined8 FUN_1492aa058(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492aa076 FUN_1492aa076 body=50 status=ok
// SIG undefined FUN_1492aa076(void)

void FUN_1492aa076(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *(undefined1 *)(param_2 + 1) = 4;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  *(undefined1 *)((longlong)param_2 + 0x14) = 0;
  *param_2 = &PTR_FUN_14bbf1310;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 4;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 1492aa0a8 FUN_1492aa0a8 body=50 status=ok
// SIG undefined FUN_1492aa0a8(void)

void FUN_1492aa0a8(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *(undefined1 *)(param_2 + 1) = 4;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  *(undefined1 *)((longlong)param_2 + 0x14) = 0;
  *param_2 = &PTR_FUN_14bbf1310;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 4;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 1492aa0fe FUN_1492aa0fe body=62 status=ok
// SIG undefined FUN_1492aa0fe(void)

undefined8 FUN_1492aa0fe(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_4 != 0) {
    lVar2 = 0x20;
    do {
      uVar1 = *(undefined8 *)(param_3 + -0x18 + lVar2);
      *(undefined8 *)(param_2 + -0x13 + lVar2) = *(undefined8 *)(param_3 + -0x13 + lVar2);
      *(undefined8 *)(param_2 + -0x18 + lVar2) = uVar1;
      puVar4 = (undefined8 *)(param_3 + lVar2);
      puVar5 = (undefined8 *)(param_2 + lVar2);
      for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      lVar2 = lVar2 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492aa164 FUN_1492aa164 body=59 status=ok
// SIG undefined FUN_1492aa164(void)

undefined8 FUN_1492aa164(longlong *param_1)

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



// FUNCTION 1492aa210 FUN_1492aa210 body=29 status=ok
// SIG undefined FUN_1492aa210(void)

undefined8 FUN_1492aa210(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492aa29a FUN_1492aa29a body=86 status=ok
// SIG undefined FUN_1492aa29a(void)

undefined8 FUN_1492aa29a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      uVar1 = *(undefined8 *)(param_3 + -0x18);
      *(undefined8 *)(param_2 + -0x13) = *(undefined8 *)(param_3 + -0x13);
      *(undefined8 *)(param_2 + -0x18) = uVar1;
      FUN_1491c05d4(param_2,param_3);
      param_3 = param_3 + 0x200;
      param_2 = param_2 + 0x200;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492aa318 FUN_1492aa318 body=59 status=ok
// SIG undefined FUN_1492aa318(void)

undefined8 FUN_1492aa318(longlong *param_1)

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



// FUNCTION 1492aa364 FUN_1492aa364 body=49 status=ok
// SIG undefined FUN_1492aa364(void)

void FUN_1492aa364(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    *param_2 = &PTR_FUN_14bbf1500;
    FUN_140f8ccfc(param_2 + 4);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1492aa3e4 FUN_1492aa3e4 body=52 status=ok
// SIG undefined FUN_1492aa3e4(void)

undefined8 * FUN_1492aa3e4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbf1500;
  FUN_140f8ccfc(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492aa41a FUN_1492aa41a body=70 status=ok
// SIG undefined FUN_1492aa41a(void)

void FUN_1492aa41a(undefined8 param_1,undefined8 *param_2)

{
  *(undefined1 *)(param_2 + 1) = 4;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  *(undefined1 *)((longlong)param_2 + 0x14) = 0;
  *param_2 = &PTR_FUN_14bbf1500;
  FUN_1412ca278(param_2 + 4);
  *param_2 = &PTR_FUN_14bbf16f0;
  *(undefined1 *)(param_2 + 0x40) = 0;
  return;
}



// FUNCTION 1492aa460 FUN_1492aa460 body=70 status=ok
// SIG undefined FUN_1492aa460(void)

void FUN_1492aa460(undefined8 param_1,undefined8 *param_2)

{
  *(undefined1 *)(param_2 + 1) = 4;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  *(undefined1 *)((longlong)param_2 + 0x14) = 0;
  *param_2 = &PTR_FUN_14bbf1500;
  FUN_1412ca278(param_2 + 4);
  *param_2 = &PTR_FUN_14bbf16f0;
  *(undefined1 *)(param_2 + 0x40) = 0;
  return;
}



// FUNCTION 1492aa4ca FUN_1492aa4ca body=120 status=ok
// SIG undefined FUN_1492aa4ca(void)

undefined8 FUN_1492aa4ca(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      uVar1 = *(undefined8 *)(param_3 + 8 + lVar2);
      *(undefined8 *)(param_2 + 0xd + lVar2) = *(undefined8 *)(param_3 + 0xd + lVar2);
      *(undefined8 *)(param_2 + 8 + lVar2) = uVar1;
      FUN_1491c05d4(param_2 + 0x20 + lVar2,param_3 + 0x20 + lVar2);
      *(undefined1 *)(param_2 + 0x200 + lVar2) = *(undefined1 *)(param_3 + 0x200 + lVar2);
      lVar2 = lVar2 + 0x210;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492aa56a FUN_1492aa56a body=59 status=ok
// SIG undefined FUN_1492aa56a(void)

undefined8 FUN_1492aa56a(longlong *param_1)

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



// FUNCTION 1492aa5b6 FUN_1492aa5b6 body=49 status=ok
// SIG undefined FUN_1492aa5b6(void)

void FUN_1492aa5b6(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x42) == '\x01') {
    *param_2 = &PTR_FUN_14bbf1500;
    FUN_140f8ccfc(param_2 + 4);
    *(undefined1 *)(param_2 + 0x42) = 0;
  }
  return;
}



// FUNCTION 1492aa636 FUN_1492aa636 body=52 status=ok
// SIG undefined FUN_1492aa636(void)

undefined8 * FUN_1492aa636(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbf1500;
  FUN_140f8ccfc(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492aa66c FUN_1492aa66c body=69 status=ok
// SIG undefined FUN_1492aa66c(void)

void FUN_1492aa66c(undefined8 param_1,undefined8 *param_2)

{
  *(undefined1 *)(param_2 + 1) = 4;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  *(undefined1 *)((longlong)param_2 + 0x14) = 0;
  *param_2 = &PTR_FUN_14bbf1500;
  FUN_1412ca278(param_2 + 4);
  *param_2 = &PTR_FUN_14bbf18e0;
  *(undefined4 *)(param_2 + 0x40) = 0;
  return;
}



// FUNCTION 1492aa6b2 FUN_1492aa6b2 body=69 status=ok
// SIG undefined FUN_1492aa6b2(void)

void FUN_1492aa6b2(undefined8 param_1,undefined8 *param_2)

{
  *(undefined1 *)(param_2 + 1) = 4;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  *(undefined1 *)((longlong)param_2 + 0x14) = 0;
  *param_2 = &PTR_FUN_14bbf1500;
  FUN_1412ca278(param_2 + 4);
  *param_2 = &PTR_FUN_14bbf18e0;
  *(undefined4 *)(param_2 + 0x40) = 0;
  return;
}



// FUNCTION 1492aa71c FUN_1492aa71c body=124 status=ok
// SIG undefined FUN_1492aa71c(void)

undefined8 FUN_1492aa71c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      uVar1 = *(undefined8 *)(param_3 + 8 + lVar2);
      *(undefined8 *)(param_2 + 0xd + lVar2) = *(undefined8 *)(param_3 + 0xd + lVar2);
      *(undefined8 *)(param_2 + 8 + lVar2) = uVar1;
      FUN_1491c05d4(param_2 + 0x20 + lVar2,param_3 + 0x20 + lVar2);
      *(undefined4 *)(param_2 + 0x200 + lVar2) = *(undefined4 *)(param_3 + 0x200 + lVar2);
      lVar2 = lVar2 + 0x210;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492aa7c0 FUN_1492aa7c0 body=59 status=ok
// SIG undefined FUN_1492aa7c0(void)

undefined8 FUN_1492aa7c0(longlong *param_1)

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



// FUNCTION 1492aa80c FUN_1492aa80c body=49 status=ok
// SIG undefined FUN_1492aa80c(void)

void FUN_1492aa80c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x42) == '\x01') {
    *param_2 = &PTR_FUN_14bbf1500;
    FUN_140f8ccfc(param_2 + 4);
    *(undefined1 *)(param_2 + 0x42) = 0;
  }
  return;
}



// FUNCTION 1492aa88c FUN_1492aa88c body=52 status=ok
// SIG undefined FUN_1492aa88c(void)

undefined8 * FUN_1492aa88c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbf1500;
  FUN_140f8ccfc(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492aa8c2 FUN_1492aa8c2 body=69 status=ok
// SIG undefined FUN_1492aa8c2(void)

void FUN_1492aa8c2(undefined8 param_1,undefined8 *param_2)

{
  *(undefined1 *)(param_2 + 1) = 4;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  *(undefined1 *)((longlong)param_2 + 0x14) = 0;
  *param_2 = &PTR_FUN_14bbf1500;
  FUN_1412ca278(param_2 + 4);
  *param_2 = &PTR_FUN_14bbf1ad0;
  *(undefined4 *)(param_2 + 0x40) = 0;
  return;
}



// FUNCTION 1492aa908 FUN_1492aa908 body=69 status=ok
// SIG undefined FUN_1492aa908(void)

void FUN_1492aa908(undefined8 param_1,undefined8 *param_2)

{
  *(undefined1 *)(param_2 + 1) = 4;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  *(undefined1 *)((longlong)param_2 + 0x14) = 0;
  *param_2 = &PTR_FUN_14bbf1500;
  FUN_1412ca278(param_2 + 4);
  *param_2 = &PTR_FUN_14bbf1ad0;
  *(undefined4 *)(param_2 + 0x40) = 0;
  return;
}



// FUNCTION 1492aa972 FUN_1492aa972 body=120 status=ok
// SIG undefined FUN_1492aa972(void)

undefined8 FUN_1492aa972(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      uVar1 = *(undefined8 *)(param_3 + 8 + lVar2);
      *(undefined8 *)(param_2 + 0xd + lVar2) = *(undefined8 *)(param_3 + 0xd + lVar2);
      *(undefined8 *)(param_2 + 8 + lVar2) = uVar1;
      FUN_1491c05d4(param_2 + 0x20 + lVar2,param_3 + 0x20 + lVar2);
      *(undefined4 *)(param_2 + 0x200 + lVar2) = *(undefined4 *)(param_3 + 0x200 + lVar2);
      lVar2 = lVar2 + 0x210;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492aaa12 FUN_1492aaa12 body=59 status=ok
// SIG undefined FUN_1492aaa12(void)

undefined8 FUN_1492aaa12(longlong *param_1)

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



// FUNCTION 1492aaa5e FUN_1492aaa5e body=49 status=ok
// SIG undefined FUN_1492aaa5e(void)

void FUN_1492aaa5e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x42) == '\x01') {
    *param_2 = &PTR_FUN_14bbf1500;
    FUN_140f8ccfc(param_2 + 4);
    *(undefined1 *)(param_2 + 0x42) = 0;
  }
  return;
}



// FUNCTION 1492aaade FUN_1492aaade body=52 status=ok
// SIG undefined FUN_1492aaade(void)

undefined8 * FUN_1492aaade(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbf1500;
  FUN_140f8ccfc(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492aab14 FUN_1492aab14 body=73 status=ok
// SIG undefined FUN_1492aab14(void)

void FUN_1492aab14(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_2 + 1) = 4;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  *(undefined1 *)((longlong)param_2 + 0x14) = 0;
  *param_2 = &PTR_FUN_14bbf1500;
  FUN_1412ca278(param_2 + 4);
  *param_2 = &PTR_FUN_14bbf1cc0;
  uVar1 = DAT_14c8463f8;
  param_2[0x40] = DAT_14c8463f0;
  param_2[0x41] = uVar1;
  return;
}



// FUNCTION 1492aab5e FUN_1492aab5e body=73 status=ok
// SIG undefined FUN_1492aab5e(void)

void FUN_1492aab5e(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_2 + 1) = 4;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  *(undefined1 *)((longlong)param_2 + 0x14) = 0;
  *param_2 = &PTR_FUN_14bbf1500;
  FUN_1412ca278(param_2 + 4);
  *param_2 = &PTR_FUN_14bbf1cc0;
  uVar1 = DAT_14c8463f8;
  param_2[0x40] = DAT_14c8463f0;
  param_2[0x41] = uVar1;
  return;
}



// FUNCTION 1492aabcc FUN_1492aabcc body=122 status=ok
// SIG undefined FUN_1492aabcc(void)

undefined8 FUN_1492aabcc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  
  if (param_4 != 0) {
    lVar7 = 0;
    do {
      uVar3 = *(undefined8 *)(param_3 + 8 + lVar7);
      *(undefined8 *)(param_2 + 0xd + lVar7) = *(undefined8 *)(param_3 + 0xd + lVar7);
      *(undefined8 *)(param_2 + 8 + lVar7) = uVar3;
      FUN_1491c05d4(param_2 + 0x20 + lVar7,param_3 + 0x20 + lVar7);
      puVar1 = (undefined4 *)(param_3 + 0x200 + lVar7);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x200 + lVar7);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      lVar7 = lVar7 + 0x210;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492aac6e FUN_1492aac6e body=59 status=ok
// SIG undefined FUN_1492aac6e(void)

undefined8 FUN_1492aac6e(longlong *param_1)

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



// FUNCTION 1492aacba FUN_1492aacba body=49 status=ok
// SIG undefined FUN_1492aacba(void)

void FUN_1492aacba(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x42) == '\x01') {
    *param_2 = &PTR_FUN_14bbf1500;
    FUN_140f8ccfc(param_2 + 4);
    *(undefined1 *)(param_2 + 0x42) = 0;
  }
  return;
}



// FUNCTION 1492aad3a FUN_1492aad3a body=52 status=ok
// SIG undefined FUN_1492aad3a(void)

undefined8 * FUN_1492aad3a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbf1500;
  FUN_140f8ccfc(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492aad70 FUN_1492aad70 body=87 status=ok
// SIG undefined FUN_1492aad70(void)

void FUN_1492aad70(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_2 + 1) = 4;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  *(undefined1 *)((longlong)param_2 + 0x14) = 0;
  *param_2 = &PTR_FUN_14bbf1500;
  FUN_1412ca278(param_2 + 4);
  *param_2 = &PTR_FUN_14bbf1eb0;
  uVar1 = DAT_14c8464e8;
  param_2[0x40] = DAT_14c8464e0;
  param_2[0x41] = uVar1;
  param_2[0x42] = DAT_14c8464f0;
  return;
}



// FUNCTION 1492aadc8 FUN_1492aadc8 body=87 status=ok
// SIG undefined FUN_1492aadc8(void)

void FUN_1492aadc8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_2 + 1) = 4;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  *(undefined1 *)((longlong)param_2 + 0x14) = 0;
  *param_2 = &PTR_FUN_14bbf1500;
  FUN_1412ca278(param_2 + 4);
  *param_2 = &PTR_FUN_14bbf1eb0;
  uVar1 = DAT_14c8464e8;
  param_2[0x40] = DAT_14c8464e0;
  param_2[0x41] = uVar1;
  param_2[0x42] = DAT_14c8464f0;
  return;
}



// FUNCTION 1492aae44 FUN_1492aae44 body=138 status=ok
// SIG undefined FUN_1492aae44(void)

undefined8 FUN_1492aae44(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  
  if (param_4 != 0) {
    lVar7 = 0;
    do {
      uVar3 = *(undefined8 *)(param_3 + 8 + lVar7);
      *(undefined8 *)(param_2 + 0xd + lVar7) = *(undefined8 *)(param_3 + 0xd + lVar7);
      *(undefined8 *)(param_2 + 8 + lVar7) = uVar3;
      FUN_1491c05d4(param_2 + 0x20 + lVar7,param_3 + 0x20 + lVar7);
      puVar1 = (undefined4 *)(param_3 + 0x200 + lVar7);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x200 + lVar7);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      *(undefined8 *)(param_2 + 0x210 + lVar7) = *(undefined8 *)(param_3 + 0x210 + lVar7);
      lVar7 = lVar7 + 0x220;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492aaef6 FUN_1492aaef6 body=59 status=ok
// SIG undefined FUN_1492aaef6(void)

undefined8 FUN_1492aaef6(longlong *param_1)

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



// FUNCTION 1492aaf42 FUN_1492aaf42 body=49 status=ok
// SIG undefined FUN_1492aaf42(void)

void FUN_1492aaf42(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x44) == '\x01') {
    *param_2 = &PTR_FUN_14bbf1500;
    FUN_140f8ccfc(param_2 + 4);
    *(undefined1 *)(param_2 + 0x44) = 0;
  }
  return;
}



// FUNCTION 1492aafc2 FUN_1492aafc2 body=52 status=ok
// SIG undefined FUN_1492aafc2(void)

undefined8 * FUN_1492aafc2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbf1500;
  FUN_140f8ccfc(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492aaff8 FUN_1492aaff8 body=87 status=ok
// SIG undefined FUN_1492aaff8(void)

void FUN_1492aaff8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_2 + 1) = 4;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  *(undefined1 *)((longlong)param_2 + 0x14) = 0;
  *param_2 = &PTR_FUN_14bbf1500;
  FUN_1412ca278(param_2 + 4);
  *param_2 = &PTR_FUN_14bbf20a0;
  uVar1 = DAT_14c846500;
  param_2[0x40] = DAT_14c8464f8;
  param_2[0x41] = uVar1;
  param_2[0x42] = DAT_14c846508;
  return;
}



// FUNCTION 1492ab050 FUN_1492ab050 body=87 status=ok
// SIG undefined FUN_1492ab050(void)

void FUN_1492ab050(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_2 + 1) = 4;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  *(undefined1 *)((longlong)param_2 + 0x14) = 0;
  *param_2 = &PTR_FUN_14bbf1500;
  FUN_1412ca278(param_2 + 4);
  *param_2 = &PTR_FUN_14bbf20a0;
  uVar1 = DAT_14c846500;
  param_2[0x40] = DAT_14c8464f8;
  param_2[0x41] = uVar1;
  param_2[0x42] = DAT_14c846508;
  return;
}



// FUNCTION 1492ab0cc FUN_1492ab0cc body=138 status=ok
// SIG undefined FUN_1492ab0cc(void)

undefined8 FUN_1492ab0cc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  
  if (param_4 != 0) {
    lVar7 = 0;
    do {
      uVar3 = *(undefined8 *)(param_3 + 8 + lVar7);
      *(undefined8 *)(param_2 + 0xd + lVar7) = *(undefined8 *)(param_3 + 0xd + lVar7);
      *(undefined8 *)(param_2 + 8 + lVar7) = uVar3;
      FUN_1491c05d4(param_2 + 0x20 + lVar7,param_3 + 0x20 + lVar7);
      puVar1 = (undefined4 *)(param_3 + 0x200 + lVar7);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x200 + lVar7);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      *(undefined8 *)(param_2 + 0x210 + lVar7) = *(undefined8 *)(param_3 + 0x210 + lVar7);
      lVar7 = lVar7 + 0x220;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492ab17e FUN_1492ab17e body=59 status=ok
// SIG undefined FUN_1492ab17e(void)

undefined8 FUN_1492ab17e(longlong *param_1)

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



// FUNCTION 1492ab1ca FUN_1492ab1ca body=49 status=ok
// SIG undefined FUN_1492ab1ca(void)

void FUN_1492ab1ca(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x44) == '\x01') {
    *param_2 = &PTR_FUN_14bbf1500;
    FUN_140f8ccfc(param_2 + 4);
    *(undefined1 *)(param_2 + 0x44) = 0;
  }
  return;
}



// FUNCTION 1492ab24a FUN_1492ab24a body=52 status=ok
// SIG undefined FUN_1492ab24a(void)

undefined8 * FUN_1492ab24a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbf1500;
  FUN_140f8ccfc(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492ab280 FUN_1492ab280 body=83 status=ok
// SIG undefined FUN_1492ab280(void)

void FUN_1492ab280(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *(undefined1 *)(param_2 + 1) = 4;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  *(undefined1 *)((longlong)param_2 + 0x14) = 0;
  *param_2 = &PTR_FUN_14bbf1500;
  FUN_1412ca278(param_2 + 4);
  *param_2 = &PTR_FUN_14bbf2290;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x40;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 1492ab2d4 FUN_1492ab2d4 body=83 status=ok
// SIG undefined FUN_1492ab2d4(void)

void FUN_1492ab2d4(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *(undefined1 *)(param_2 + 1) = 4;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  *(undefined1 *)((longlong)param_2 + 0x14) = 0;
  *param_2 = &PTR_FUN_14bbf1500;
  FUN_1412ca278(param_2 + 4);
  *param_2 = &PTR_FUN_14bbf2290;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x40;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 1492ab34c FUN_1492ab34c body=139 status=ok
// SIG undefined FUN_1492ab34c(void)

undefined8 FUN_1492ab34c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      uVar1 = *(undefined8 *)(param_3 + 8 + lVar3);
      *(undefined8 *)(param_2 + 0xd + lVar3) = *(undefined8 *)(param_3 + 0xd + lVar3);
      *(undefined8 *)(param_2 + 8 + lVar3) = uVar1;
      FUN_1491c05d4(param_2 + 0x20 + lVar3,param_3 + 0x20 + lVar3);
      puVar4 = (undefined8 *)(param_3 + 8 + lVar3 + 0x1f8);
      puVar5 = (undefined8 *)(param_2 + 8 + lVar3 + 0x1f8);
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      lVar3 = lVar3 + 0x260;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492ab400 FUN_1492ab400 body=59 status=ok
// SIG undefined FUN_1492ab400(void)

undefined8 FUN_1492ab400(longlong *param_1)

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



// FUNCTION 1492ab44c FUN_1492ab44c body=49 status=ok
// SIG undefined FUN_1492ab44c(void)

void FUN_1492ab44c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x4c) == '\x01') {
    *param_2 = &PTR_FUN_14bbf1500;
    FUN_140f8ccfc(param_2 + 4);
    *(undefined1 *)(param_2 + 0x4c) = 0;
  }
  return;
}



// FUNCTION 1492ab4cc FUN_1492ab4cc body=52 status=ok
// SIG undefined FUN_1492ab4cc(void)

undefined8 * FUN_1492ab4cc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbf1500;
  FUN_140f8ccfc(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492ab5d4 FUN_1492ab5d4 body=59 status=ok
// SIG undefined FUN_1492ab5d4(void)

undefined8 FUN_1492ab5d4(longlong *param_1)

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



// FUNCTION 1492ab674 FUN_1492ab674 body=29 status=ok
// SIG undefined FUN_1492ab674(void)

undefined8 FUN_1492ab674(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492ab79a FUN_1492ab79a body=71 status=ok
// SIG undefined FUN_1492ab79a(void)

undefined8 FUN_1492ab79a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 8;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x99);
      lVar1 = lVar1 + 0xb0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492ab80a FUN_1492ab80a body=59 status=ok
// SIG undefined FUN_1492ab80a(void)

undefined8 FUN_1492ab80a(longlong *param_1)

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



// FUNCTION 1492ab8b6 FUN_1492ab8b6 body=29 status=ok
// SIG undefined FUN_1492ab8b6(void)

undefined8 FUN_1492ab8b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492ab8d4 FUN_1492ab8d4 body=29 status=ok
// SIG undefined FUN_1492ab8d4(void)

undefined8 FUN_1492ab8d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492ab9e6 FUN_1492ab9e6 body=71 status=ok
// SIG undefined FUN_1492ab9e6(void)

undefined8 FUN_1492ab9e6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 8;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x98);
      lVar1 = lVar1 + 0xa0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492aba56 FUN_1492aba56 body=59 status=ok
// SIG undefined FUN_1492aba56(void)

undefined8 FUN_1492aba56(longlong *param_1)

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



// FUNCTION 1492abb02 FUN_1492abb02 body=29 status=ok
// SIG undefined FUN_1492abb02(void)

undefined8 FUN_1492abb02(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492abbf2 FUN_1492abbf2 body=59 status=ok
// SIG undefined FUN_1492abbf2(void)

undefined8 FUN_1492abbf2(longlong *param_1)

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



// FUNCTION 1492abc92 FUN_1492abc92 body=29 status=ok
// SIG undefined FUN_1492abc92(void)

undefined8 FUN_1492abc92(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492abda0 FUN_1492abda0 body=59 status=ok
// SIG undefined FUN_1492abda0(void)

undefined8 FUN_1492abda0(longlong *param_1)

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



// FUNCTION 1492abe40 FUN_1492abe40 body=29 status=ok
// SIG undefined FUN_1492abe40(void)

undefined8 FUN_1492abe40(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492abf4e FUN_1492abf4e body=59 status=ok
// SIG undefined FUN_1492abf4e(void)

undefined8 FUN_1492abf4e(longlong *param_1)

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



// FUNCTION 1492abfee FUN_1492abfee body=29 status=ok
// SIG undefined FUN_1492abfee(void)

undefined8 FUN_1492abfee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492ac0c0 FUN_1492ac0c0 body=42 status=ok
// SIG undefined FUN_1492ac0c0(void)

undefined8 FUN_1492ac0c0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      for (lVar2 = 0xb; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492ac112 FUN_1492ac112 body=59 status=ok
// SIG undefined FUN_1492ac112(void)

undefined8 FUN_1492ac112(longlong *param_1)

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



// FUNCTION 1492ac1b2 FUN_1492ac1b2 body=29 status=ok
// SIG undefined FUN_1492ac1b2(void)

undefined8 FUN_1492ac1b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492ac2cc FUN_1492ac2cc body=42 status=ok
// SIG undefined FUN_1492ac2cc(void)

undefined8 FUN_1492ac2cc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      for (lVar2 = 0xf; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492ac31e FUN_1492ac31e body=59 status=ok
// SIG undefined FUN_1492ac31e(void)

undefined8 FUN_1492ac31e(longlong *param_1)

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



// FUNCTION 1492ac3ca FUN_1492ac3ca body=29 status=ok
// SIG undefined FUN_1492ac3ca(void)

undefined8 FUN_1492ac3ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492ac4e4 FUN_1492ac4e4 body=42 status=ok
// SIG undefined FUN_1492ac4e4(void)

undefined8 FUN_1492ac4e4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      for (lVar2 = 0xf; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492ac536 FUN_1492ac536 body=59 status=ok
// SIG undefined FUN_1492ac536(void)

undefined8 FUN_1492ac536(longlong *param_1)

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



// FUNCTION 1492ac5e2 FUN_1492ac5e2 body=29 status=ok
// SIG undefined FUN_1492ac5e2(void)

undefined8 FUN_1492ac5e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492ac600 FUN_1492ac600 body=117 status=ok
// SIG undefined FUN_1492ac600(void)

void FUN_1492ac600(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bbf3680;
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 2) = 1;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 4;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x10;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x1c;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x144) = 0;
  *(undefined2 *)((longlong)param_2 + 0x14c) = 0xffff;
  *(undefined4 *)(param_2 + 0x2a) = 0xffffffff;
  return;
}



// FUNCTION 1492ac676 FUN_1492ac676 body=117 status=ok
// SIG undefined FUN_1492ac676(void)

void FUN_1492ac676(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bbf3680;
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 2) = 1;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 4;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x10;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x1c;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x144) = 0;
  *(undefined2 *)((longlong)param_2 + 0x14c) = 0xffff;
  *(undefined4 *)(param_2 + 0x2a) = 0xffffffff;
  return;
}



// FUNCTION 1492ac710 FUN_1492ac710 body=71 status=ok
// SIG undefined FUN_1492ac710(void)

undefined8 FUN_1492ac710(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 8;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x158);
      lVar1 = lVar1 + 0x160;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492ac780 FUN_1492ac780 body=59 status=ok
// SIG undefined FUN_1492ac780(void)

undefined8 FUN_1492ac780(longlong *param_1)

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



// FUNCTION 1492ac82c FUN_1492ac82c body=29 status=ok
// SIG undefined FUN_1492ac82c(void)

undefined8 FUN_1492ac82c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492ac930 FUN_1492ac930 body=59 status=ok
// SIG undefined FUN_1492ac930(void)

undefined8 FUN_1492ac930(longlong *param_1)

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



// FUNCTION 1492ac9d0 FUN_1492ac9d0 body=29 status=ok
// SIG undefined FUN_1492ac9d0(void)

undefined8 FUN_1492ac9d0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492acae6 FUN_1492acae6 body=71 status=ok
// SIG undefined FUN_1492acae6(void)

undefined8 FUN_1492acae6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 8;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x98);
      lVar1 = lVar1 + 0xa0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492acb56 FUN_1492acb56 body=59 status=ok
// SIG undefined FUN_1492acb56(void)

undefined8 FUN_1492acb56(longlong *param_1)

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



// FUNCTION 1492acc02 FUN_1492acc02 body=29 status=ok
// SIG undefined FUN_1492acc02(void)

undefined8 FUN_1492acc02(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492acd50 FUN_1492acd50 body=71 status=ok
// SIG undefined FUN_1492acd50(void)

undefined8 FUN_1492acd50(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 8;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0xb8);
      lVar1 = lVar1 + 0xc0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492acdc0 FUN_1492acdc0 body=59 status=ok
// SIG undefined FUN_1492acdc0(void)

undefined8 FUN_1492acdc0(longlong *param_1)

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



// FUNCTION 1492ace6c FUN_1492ace6c body=29 status=ok
// SIG undefined FUN_1492ace6c(void)

undefined8 FUN_1492ace6c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492ace8a FUN_1492ace8a body=29 status=ok
// SIG undefined FUN_1492ace8a(void)

undefined8 FUN_1492ace8a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492acea8 FUN_1492acea8 body=124 status=ok
// SIG undefined FUN_1492acea8(void)

void FUN_1492acea8(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bbf3ce0;
  *(undefined1 *)(param_2 + 1) = 1;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  *(undefined1 *)((longlong)param_2 + 0x14) = 0;
  *(undefined1 *)(param_2 + 3) = 1;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined1 *)((longlong)param_2 + 0x24) = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 6;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_2 + 0x12) = 0;
  *(undefined8 *)((longlong)param_2 + 0x94) = 0;
  *(undefined2 *)((longlong)param_2 + 0x9c) = 0xffff;
  *(undefined4 *)(param_2 + 0x14) = 0xffffffff;
  *(undefined1 *)(param_2 + 0x16) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb4) = 0;
  *(undefined2 *)((longlong)param_2 + 0xbc) = 0xffff;
  *(undefined4 *)(param_2 + 0x18) = 0xffffffff;
  return;
}



// FUNCTION 1492acf24 FUN_1492acf24 body=124 status=ok
// SIG undefined FUN_1492acf24(void)

void FUN_1492acf24(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bbf3ce0;
  *(undefined1 *)(param_2 + 1) = 1;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  *(undefined1 *)((longlong)param_2 + 0x14) = 0;
  *(undefined1 *)(param_2 + 3) = 1;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined1 *)((longlong)param_2 + 0x24) = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 6;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_2 + 0x12) = 0;
  *(undefined8 *)((longlong)param_2 + 0x94) = 0;
  *(undefined2 *)((longlong)param_2 + 0x9c) = 0xffff;
  *(undefined4 *)(param_2 + 0x14) = 0xffffffff;
  *(undefined1 *)(param_2 + 0x16) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb4) = 0;
  *(undefined2 *)((longlong)param_2 + 0xbc) = 0xffff;
  *(undefined4 *)(param_2 + 0x18) = 0xffffffff;
  return;
}



// FUNCTION 1492acfc4 FUN_1492acfc4 body=71 status=ok
// SIG undefined FUN_1492acfc4(void)

undefined8 FUN_1492acfc4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 8;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),200);
      lVar1 = lVar1 + 0xd0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492ad034 FUN_1492ad034 body=59 status=ok
// SIG undefined FUN_1492ad034(void)

undefined8 FUN_1492ad034(longlong *param_1)

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



// FUNCTION 1492ad1da FUN_1492ad1da body=71 status=ok
// SIG undefined FUN_1492ad1da(void)

undefined8 FUN_1492ad1da(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 8;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x98);
      lVar1 = lVar1 + 0xa0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492ad24a FUN_1492ad24a body=59 status=ok
// SIG undefined FUN_1492ad24a(void)

undefined8 FUN_1492ad24a(longlong *param_1)

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



// FUNCTION 1492ad2f6 FUN_1492ad2f6 body=29 status=ok
// SIG undefined FUN_1492ad2f6(void)

undefined8 FUN_1492ad2f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492ad314 FUN_1492ad314 body=83 status=ok
// SIG undefined FUN_1492ad314(void)

void FUN_1492ad314(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bbf2700;
  *(undefined1 *)(param_2 + 1) = 1;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  *(undefined2 *)((longlong)param_2 + 0x14) = 1;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 4;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0;
  *(undefined2 *)((longlong)param_2 + 0x8c) = 0xffff;
  *(undefined4 *)(param_2 + 0x12) = 0xffffffff;
  return;
}



// FUNCTION 1492ad368 FUN_1492ad368 body=83 status=ok
// SIG undefined FUN_1492ad368(void)

void FUN_1492ad368(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bbf2700;
  *(undefined1 *)(param_2 + 1) = 1;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  *(undefined2 *)((longlong)param_2 + 0x14) = 1;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 4;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0;
  *(undefined2 *)((longlong)param_2 + 0x8c) = 0xffff;
  *(undefined4 *)(param_2 + 0x12) = 0xffffffff;
  return;
}



// FUNCTION 1492ad3e0 FUN_1492ad3e0 body=71 status=ok
// SIG undefined FUN_1492ad3e0(void)

undefined8 FUN_1492ad3e0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 8;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x98);
      lVar1 = lVar1 + 0xa0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492ad450 FUN_1492ad450 body=59 status=ok
// SIG undefined FUN_1492ad450(void)

undefined8 FUN_1492ad450(longlong *param_1)

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



// FUNCTION 1492ad562 FUN_1492ad562 body=133 status=ok
// SIG undefined FUN_1492ad562(void)

undefined8 FUN_1492ad562(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_1444888de(param_2 + lVar1 + 8,param_3 + lVar1 + 8);
      *(undefined2 *)(param_2 + lVar1 + 0x18) = *(undefined2 *)(param_3 + lVar1 + 0x18);
      FUN_144756208(param_2 + lVar1 + 0x20,param_3 + lVar1 + 0x20);
      FUN_1492ad734(param_2 + lVar1 + 0x30,param_3 + lVar1 + 0x30);
      lVar1 = lVar1 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492ad610 FUN_1492ad610 body=59 status=ok
// SIG undefined FUN_1492ad610(void)

undefined8 FUN_1492ad610(longlong *param_1)

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



// FUNCTION 1492ad656 FUN_1492ad656 body=34 status=ok
// SIG undefined FUN_1492ad656(void)

void FUN_1492ad656(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_1492ad6ec(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1492ad6c6 FUN_1492ad6c6 body=38 status=ok
// SIG undefined FUN_1492ad6c6(void)

undefined8 FUN_1492ad6c6(undefined8 param_1,int param_2)

{
  FUN_1492ad6ec();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492ad6ec FUN_1492ad6ec body=72 status=ok
// SIG undefined FUN_1492ad6ec(void)

void FUN_1492ad6ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bbf4380;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1492ad734 FUN_1492ad734 body=88 status=ok
// SIG undefined FUN_1492ad734(void)

undefined8 * FUN_1492ad734(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1492ad78c(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 5);
      }
    }
  }
  return param_1;
}



// FUNCTION 1492ad78c FUN_1492ad78c body=98 status=ok
// SIG undefined FUN_1492ad78c(void)

void FUN_1492ad78c(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 5,8);
    iVar1 = (int)(uVar2 >> 5);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x20,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1492ad854 FUN_1492ad854 body=133 status=ok
// SIG undefined FUN_1492ad854(void)

undefined8 FUN_1492ad854(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_1444888de(param_2 + lVar1 + 8,param_3 + lVar1 + 8);
      *(undefined2 *)(param_2 + lVar1 + 0x18) = *(undefined2 *)(param_3 + lVar1 + 0x18);
      FUN_144756208(param_2 + lVar1 + 0x20,param_3 + lVar1 + 0x20);
      FUN_1492ad734(param_2 + lVar1 + 0x30,param_3 + lVar1 + 0x30);
      lVar1 = lVar1 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492ad902 FUN_1492ad902 body=59 status=ok
// SIG undefined FUN_1492ad902(void)

undefined8 FUN_1492ad902(longlong *param_1)

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



// FUNCTION 1492ad948 FUN_1492ad948 body=34 status=ok
// SIG undefined FUN_1492ad948(void)

void FUN_1492ad948(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_14924b3d0(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1492ad9ba FUN_1492ad9ba body=38 status=ok
// SIG undefined FUN_1492ad9ba(void)

undefined8 FUN_1492ad9ba(undefined8 param_1,int param_2)

{
  FUN_14924b3d0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492ad9fe FUN_1492ad9fe body=115 status=ok
// SIG undefined FUN_1492ad9fe(void)

undefined8 FUN_1492ad9fe(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
    do {
      uVar1 = *(undefined4 *)(param_3 + -100);
      uVar2 = *(undefined4 *)(param_3 + -0x60);
      uVar3 = *(undefined4 *)(param_3 + -0x5c);
      *(undefined4 *)(param_2 + -0x68) = *(undefined4 *)(param_3 + -0x68);
      *(undefined4 *)(param_2 + -100) = uVar1;
      *(undefined4 *)(param_2 + -0x60) = uVar2;
      *(undefined4 *)(param_2 + -0x5c) = uVar3;
      FUN_1490e0b30(param_2 + -0x58,param_3 + -0x58);
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_14921c4cc(param_2,param_3);
      uVar5 = *(undefined8 *)(param_3 + 0x18);
      uVar1 = *(undefined4 *)(param_3 + 0x20);
      uVar2 = *(undefined4 *)(param_3 + 0x24);
      uVar3 = *(undefined4 *)(param_3 + 0x28);
      uVar4 = *(undefined4 *)(param_3 + 0x2c);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      *(undefined8 *)(param_2 + 0x18) = uVar5;
      *(undefined4 *)(param_2 + 0x20) = uVar1;
      *(undefined4 *)(param_2 + 0x24) = uVar2;
      *(undefined4 *)(param_2 + 0x28) = uVar3;
      *(undefined4 *)(param_2 + 0x2c) = uVar4;
      param_3 = param_3 + 0xa0;
      param_2 = param_2 + 0xa0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492ada9a FUN_1492ada9a body=59 status=ok
// SIG undefined FUN_1492ada9a(void)

undefined8 FUN_1492ada9a(longlong *param_1)

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



// FUNCTION 1492adae6 FUN_1492adae6 body=40 status=ok
// SIG undefined FUN_1492adae6(void)

void FUN_1492adae6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_1457f2e8a(param_2);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 1492adb60 FUN_1492adb60 body=32 status=ok
// SIG undefined FUN_1492adb60(void)

void FUN_1492adb60(undefined8 param_1,undefined8 *param_2)

{
  FUN_1457efb6c(param_2);
  *param_2 = &PTR_FUN_14bbf4940;
  return;
}



// FUNCTION 1492adb96 FUN_1492adb96 body=115 status=ok
// SIG undefined FUN_1492adb96(void)

undefined8 FUN_1492adb96(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
    do {
      uVar1 = *(undefined4 *)(param_3 + -100);
      uVar2 = *(undefined4 *)(param_3 + -0x60);
      uVar3 = *(undefined4 *)(param_3 + -0x5c);
      *(undefined4 *)(param_2 + -0x68) = *(undefined4 *)(param_3 + -0x68);
      *(undefined4 *)(param_2 + -100) = uVar1;
      *(undefined4 *)(param_2 + -0x60) = uVar2;
      *(undefined4 *)(param_2 + -0x5c) = uVar3;
      FUN_1490e0b30(param_2 + -0x58,param_3 + -0x58);
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_14921c4cc(param_2,param_3);
      uVar5 = *(undefined8 *)(param_3 + 0x18);
      uVar1 = *(undefined4 *)(param_3 + 0x20);
      uVar2 = *(undefined4 *)(param_3 + 0x24);
      uVar3 = *(undefined4 *)(param_3 + 0x28);
      uVar4 = *(undefined4 *)(param_3 + 0x2c);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      *(undefined8 *)(param_2 + 0x18) = uVar5;
      *(undefined4 *)(param_2 + 0x20) = uVar1;
      *(undefined4 *)(param_2 + 0x24) = uVar2;
      *(undefined4 *)(param_2 + 0x28) = uVar3;
      *(undefined4 *)(param_2 + 0x2c) = uVar4;
      param_3 = param_3 + 0xa0;
      param_2 = param_2 + 0xa0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492adc32 FUN_1492adc32 body=59 status=ok
// SIG undefined FUN_1492adc32(void)

undefined8 FUN_1492adc32(longlong *param_1)

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



// FUNCTION 1492adc7e FUN_1492adc7e body=40 status=ok
// SIG undefined FUN_1492adc7e(void)

void FUN_1492adc7e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_1457f2e8a(param_2);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 1492adcf6 FUN_1492adcf6 body=32 status=ok
// SIG undefined FUN_1492adcf6(void)

void FUN_1492adcf6(undefined8 param_1,undefined8 *param_2)

{
  FUN_1457efb6c(param_2);
  *param_2 = &PTR_FUN_14bbf4b20;
  return;
}



// FUNCTION 1492add2c FUN_1492add2c body=115 status=ok
// SIG undefined FUN_1492add2c(void)

undefined8 FUN_1492add2c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
    do {
      uVar1 = *(undefined4 *)(param_3 + -100);
      uVar2 = *(undefined4 *)(param_3 + -0x60);
      uVar3 = *(undefined4 *)(param_3 + -0x5c);
      *(undefined4 *)(param_2 + -0x68) = *(undefined4 *)(param_3 + -0x68);
      *(undefined4 *)(param_2 + -100) = uVar1;
      *(undefined4 *)(param_2 + -0x60) = uVar2;
      *(undefined4 *)(param_2 + -0x5c) = uVar3;
      FUN_1490e0b30(param_2 + -0x58,param_3 + -0x58);
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_14921c4cc(param_2,param_3);
      uVar5 = *(undefined8 *)(param_3 + 0x18);
      uVar1 = *(undefined4 *)(param_3 + 0x20);
      uVar2 = *(undefined4 *)(param_3 + 0x24);
      uVar3 = *(undefined4 *)(param_3 + 0x28);
      uVar4 = *(undefined4 *)(param_3 + 0x2c);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      *(undefined8 *)(param_2 + 0x18) = uVar5;
      *(undefined4 *)(param_2 + 0x20) = uVar1;
      *(undefined4 *)(param_2 + 0x24) = uVar2;
      *(undefined4 *)(param_2 + 0x28) = uVar3;
      *(undefined4 *)(param_2 + 0x2c) = uVar4;
      param_3 = param_3 + 0xa0;
      param_2 = param_2 + 0xa0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492addc8 FUN_1492addc8 body=59 status=ok
// SIG undefined FUN_1492addc8(void)

undefined8 FUN_1492addc8(longlong *param_1)

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



// FUNCTION 1492ade14 FUN_1492ade14 body=40 status=ok
// SIG undefined FUN_1492ade14(void)

void FUN_1492ade14(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_1457f2e8a(param_2);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 1492ade8e FUN_1492ade8e body=106 status=ok
// SIG undefined FUN_1492ade8e(void)

void FUN_1492ade8e(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbf4d00;
  *(undefined1 *)(param_2 + 0x3e) = 1;
  *(undefined8 *)((longlong)param_2 + 500) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1fc) = 0;
  *(undefined2 *)((longlong)param_2 + 0x204) = 1;
  *(undefined1 *)(param_2 + 0x41) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20c) = 0;
  *(undefined2 *)((longlong)param_2 + 0x214) = 0xffff;
  *(undefined4 *)(param_2 + 0x43) = 0xffffffff;
  return;
}



// FUNCTION 1492adef8 FUN_1492adef8 body=106 status=ok
// SIG undefined FUN_1492adef8(void)

void FUN_1492adef8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbf4d00;
  *(undefined1 *)(param_2 + 0x3e) = 1;
  *(undefined8 *)((longlong)param_2 + 500) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1fc) = 0;
  *(undefined2 *)((longlong)param_2 + 0x204) = 1;
  *(undefined1 *)(param_2 + 0x41) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20c) = 0;
  *(undefined2 *)((longlong)param_2 + 0x214) = 0xffff;
  *(undefined4 *)(param_2 + 0x43) = 0xffffffff;
  return;
}



// FUNCTION 1492adf86 FUN_1492adf86 body=135 status=ok
// SIG undefined FUN_1492adf86(void)

undefined8 FUN_1492adf86(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
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
  longlong lVar14;
  
  if (param_4 != 0) {
    lVar14 = 0;
    do {
      FUN_1491c05d4(param_2 + 0x10 + lVar14,param_3 + 0x10 + lVar14);
      puVar1 = (undefined4 *)(param_3 + 0x1f0 + lVar14);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_3 + 0x200 + lVar14);
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      puVar2 = (undefined4 *)(param_3 + 0x210 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      uVar12 = puVar2[2];
      uVar13 = puVar2[3];
      puVar2 = (undefined4 *)(param_2 + 0x1f0 + lVar14);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      puVar1 = (undefined4 *)(param_2 + 0x200 + lVar14);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      puVar1 = (undefined4 *)(param_2 + 0x210 + lVar14);
      *puVar1 = uVar10;
      puVar1[1] = uVar11;
      puVar1[2] = uVar12;
      puVar1[3] = uVar13;
      *(undefined8 *)(param_2 + 0x220 + lVar14) = *(undefined8 *)(param_3 + 0x220 + lVar14);
      lVar14 = lVar14 + 0x230;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492ae036 FUN_1492ae036 body=59 status=ok
// SIG undefined FUN_1492ae036(void)

undefined8 FUN_1492ae036(longlong *param_1)

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



// FUNCTION 1492ae082 FUN_1492ae082 body=49 status=ok
// SIG undefined FUN_1492ae082(void)

void FUN_1492ae082(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x46) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x46) = 0;
  }
  return;
}



// FUNCTION 1492ae102 FUN_1492ae102 body=52 status=ok
// SIG undefined FUN_1492ae102(void)

undefined8 * FUN_1492ae102(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492ae138 FUN_1492ae138 body=101 status=ok
// SIG undefined FUN_1492ae138(void)

void FUN_1492ae138(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbf4ef0;
  *(undefined1 *)(param_2 + 0x3e) = 1;
  *(undefined8 *)((longlong)param_2 + 500) = 0;
  *(undefined2 *)((longlong)param_2 + 0x1fc) = 1;
  *(undefined1 *)(param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x204) = 0;
  *(undefined2 *)((longlong)param_2 + 0x20c) = 0xffff;
  *(undefined4 *)(param_2 + 0x42) = 0xffffffff;
  return;
}



// FUNCTION 1492ae19e FUN_1492ae19e body=101 status=ok
// SIG undefined FUN_1492ae19e(void)

void FUN_1492ae19e(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbf4ef0;
  *(undefined1 *)(param_2 + 0x3e) = 1;
  *(undefined8 *)((longlong)param_2 + 500) = 0;
  *(undefined2 *)((longlong)param_2 + 0x1fc) = 1;
  *(undefined1 *)(param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x204) = 0;
  *(undefined2 *)((longlong)param_2 + 0x20c) = 0xffff;
  *(undefined4 *)(param_2 + 0x42) = 0xffffffff;
  return;
}



// FUNCTION 1492ae228 FUN_1492ae228 body=125 status=ok
// SIG undefined FUN_1492ae228(void)

undefined1 FUN_1492ae228(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
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
  longlong lVar14;
  
  if (param_4 != 0) {
    lVar14 = 0;
    do {
      FUN_1491c05d4(param_2 + 0x10 + lVar14,param_3 + 0x10 + lVar14);
      puVar1 = (undefined4 *)(param_3 + 0x1f0 + lVar14);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_3 + 0x200 + lVar14);
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      puVar2 = (undefined4 *)(param_3 + 0x210 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      uVar12 = puVar2[2];
      uVar13 = puVar2[3];
      puVar2 = (undefined4 *)(param_2 + 0x1f0 + lVar14);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      puVar1 = (undefined4 *)(param_2 + 0x200 + lVar14);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      puVar1 = (undefined4 *)(param_2 + 0x210 + lVar14);
      *puVar1 = uVar10;
      puVar1[1] = uVar11;
      puVar1[2] = uVar12;
      puVar1[3] = uVar13;
      lVar14 = lVar14 + 0x220;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492ae2ce FUN_1492ae2ce body=59 status=ok
// SIG undefined FUN_1492ae2ce(void)

undefined8 FUN_1492ae2ce(longlong *param_1)

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



// FUNCTION 1492ae31a FUN_1492ae31a body=49 status=ok
// SIG undefined FUN_1492ae31a(void)

void FUN_1492ae31a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x44) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x44) = 0;
  }
  return;
}



// FUNCTION 1492ae39a FUN_1492ae39a body=52 status=ok
// SIG undefined FUN_1492ae39a(void)

undefined8 * FUN_1492ae39a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492ae4d0 FUN_1492ae4d0 body=59 status=ok
// SIG undefined FUN_1492ae4d0(void)

undefined8 FUN_1492ae4d0(longlong *param_1)

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


