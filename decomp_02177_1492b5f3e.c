// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1492b5f3e FUN_1492b5f3e body=114 status=ok
// SIG undefined FUN_1492b5f3e(void)

undefined1 FUN_1492b5f3e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      FUN_1491c05d4(param_2 + 0x10 + lVar2,param_3 + 0x10 + lVar2);
      puVar3 = (undefined8 *)(param_3 + 0x1f0 + lVar2);
      puVar4 = (undefined8 *)(param_2 + 0x1f0 + lVar2);
      for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar2 = lVar2 + 0x270;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492b5fd8 FUN_1492b5fd8 body=59 status=ok
// SIG undefined FUN_1492b5fd8(void)

undefined8 FUN_1492b5fd8(longlong *param_1)

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



// FUNCTION 1492b6024 FUN_1492b6024 body=49 status=ok
// SIG undefined FUN_1492b6024(void)

void FUN_1492b6024(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x4e) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x4e) = 0;
  }
  return;
}



// FUNCTION 1492b60a4 FUN_1492b60a4 body=52 status=ok
// SIG undefined FUN_1492b60a4(void)

undefined8 * FUN_1492b60a4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492b60da FUN_1492b60da body=184 status=ok
// SIG undefined FUN_1492b60da(void)

void FUN_1492b60da(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278();
  *param_2 = &PTR_FUN_14bbfb5c0;
  *(undefined1 *)(param_2 + 0x3e) = 1;
  *(undefined8 *)((longlong)param_2 + 500) = 0;
  *(undefined1 *)((longlong)param_2 + 0x1fc) = 1;
  param_2[0x40] = 0;
  *(undefined1 *)(param_2 + 0x41) = 0;
  uVar1 = DAT_14c8463d8;
  param_2[0x42] = DAT_14c8463d0;
  param_2[0x43] = uVar1;
  uVar1 = DAT_14c8463e8;
  param_2[0x44] = DAT_14c8463e0;
  param_2[0x45] = uVar1;
  *(undefined4 *)(param_2 + 0x46) = 0x3f800000;
  *(undefined1 *)((longlong)param_2 + 0x234) = 1;
  *(undefined1 *)(param_2 + 0x47) = 0;
  *(undefined8 *)((longlong)param_2 + 0x23c) = 0;
  *(undefined2 *)((longlong)param_2 + 0x244) = 0xffff;
  *(undefined4 *)(param_2 + 0x49) = 0xffffffff;
  *(undefined1 *)(param_2 + 0x4b) = 0;
  *(undefined8 *)((longlong)param_2 + 0x25c) = 0;
  *(undefined2 *)((longlong)param_2 + 0x264) = 0xffff;
  *(undefined4 *)(param_2 + 0x4d) = 0xffffffff;
  return;
}



// FUNCTION 1492b6192 FUN_1492b6192 body=184 status=ok
// SIG undefined FUN_1492b6192(void)

void FUN_1492b6192(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278();
  *param_2 = &PTR_FUN_14bbfb5c0;
  *(undefined1 *)(param_2 + 0x3e) = 1;
  *(undefined8 *)((longlong)param_2 + 500) = 0;
  *(undefined1 *)((longlong)param_2 + 0x1fc) = 1;
  param_2[0x40] = 0;
  *(undefined1 *)(param_2 + 0x41) = 0;
  uVar1 = DAT_14c8463d8;
  param_2[0x42] = DAT_14c8463d0;
  param_2[0x43] = uVar1;
  uVar1 = DAT_14c8463e8;
  param_2[0x44] = DAT_14c8463e0;
  param_2[0x45] = uVar1;
  *(undefined4 *)(param_2 + 0x46) = 0x3f800000;
  *(undefined1 *)((longlong)param_2 + 0x234) = 1;
  *(undefined1 *)(param_2 + 0x47) = 0;
  *(undefined8 *)((longlong)param_2 + 0x23c) = 0;
  *(undefined2 *)((longlong)param_2 + 0x244) = 0xffff;
  *(undefined4 *)(param_2 + 0x49) = 0xffffffff;
  *(undefined1 *)(param_2 + 0x4b) = 0;
  *(undefined8 *)((longlong)param_2 + 0x25c) = 0;
  *(undefined2 *)((longlong)param_2 + 0x264) = 0xffff;
  *(undefined4 *)(param_2 + 0x4d) = 0xffffffff;
  return;
}



// FUNCTION 1492b626e FUN_1492b626e body=110 status=ok
// SIG undefined FUN_1492b626e(void)

undefined8 FUN_1492b626e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_1491c05d4(param_2 + 0x10 + lVar1,param_3 + 0x10 + lVar1);
      memcpy((void *)(param_2 + 0x1f0 + lVar1),(void *)(param_3 + 0x1f0 + lVar1),0x88);
      lVar1 = lVar1 + 0x280;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492b6304 FUN_1492b6304 body=59 status=ok
// SIG undefined FUN_1492b6304(void)

undefined8 FUN_1492b6304(longlong *param_1)

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



// FUNCTION 1492b6350 FUN_1492b6350 body=49 status=ok
// SIG undefined FUN_1492b6350(void)

void FUN_1492b6350(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 1492b63d0 FUN_1492b63d0 body=52 status=ok
// SIG undefined FUN_1492b63d0(void)

undefined8 * FUN_1492b63d0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492b6406 FUN_1492b6406 body=204 status=ok
// SIG undefined FUN_1492b6406(void)

void FUN_1492b6406(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbfb7b0;
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
  param_2[0x4c] = 0;
  param_2[0x4d] = 0;
  *(undefined4 *)(param_2 + 0x4e) = 0;
  *(undefined4 *)((longlong)param_2 + 0x274) = 0;
  *(undefined4 *)(param_2 + 0x4f) = 0;
  *(undefined4 *)((longlong)param_2 + 0x27c) = 0x3ff00000;
  param_2[0x50] = 0;
  param_2[0x51] = 0;
  param_2[0x52] = 0;
  param_2[0x53] = 0;
  param_2[0x54] = 0x3ff0000000000000;
  param_2[0x55] = 0x3ff0000000000000;
  param_2[0x56] = 0x3ff0000000000000;
  param_2[0x57] = 0;
  *(undefined1 *)(param_2 + 0x58) = 1;
  *(undefined1 *)(param_2 + 0x59) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2cc) = 0;
  *(undefined2 *)((longlong)param_2 + 0x2d4) = 0xffff;
  *(undefined4 *)(param_2 + 0x5b) = 0xffffffff;
  return;
}



// FUNCTION 1492b64d2 FUN_1492b64d2 body=204 status=ok
// SIG undefined FUN_1492b64d2(void)

void FUN_1492b64d2(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbfb7b0;
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
  param_2[0x4c] = 0;
  param_2[0x4d] = 0;
  *(undefined4 *)(param_2 + 0x4e) = 0;
  *(undefined4 *)((longlong)param_2 + 0x274) = 0;
  *(undefined4 *)(param_2 + 0x4f) = 0;
  *(undefined4 *)((longlong)param_2 + 0x27c) = 0x3ff00000;
  param_2[0x50] = 0;
  param_2[0x51] = 0;
  param_2[0x52] = 0;
  param_2[0x53] = 0;
  param_2[0x54] = 0x3ff0000000000000;
  param_2[0x55] = 0x3ff0000000000000;
  param_2[0x56] = 0x3ff0000000000000;
  param_2[0x57] = 0;
  *(undefined1 *)(param_2 + 0x58) = 1;
  *(undefined1 *)(param_2 + 0x59) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2cc) = 0;
  *(undefined2 *)((longlong)param_2 + 0x2d4) = 0xffff;
  *(undefined4 *)(param_2 + 0x5b) = 0xffffffff;
  return;
}



// FUNCTION 1492b65c2 FUN_1492b65c2 body=110 status=ok
// SIG undefined FUN_1492b65c2(void)

undefined8 FUN_1492b65c2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_1491c05d4(param_2 + 0x10 + lVar1,param_3 + 0x10 + lVar1);
      memcpy((void *)(param_2 + 0x1f0 + lVar1),(void *)(param_3 + 0x1f0 + lVar1),0xf8);
      lVar1 = lVar1 + 0x2f0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492b6658 FUN_1492b6658 body=59 status=ok
// SIG undefined FUN_1492b6658(void)

undefined8 FUN_1492b6658(longlong *param_1)

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



// FUNCTION 1492b66a4 FUN_1492b66a4 body=49 status=ok
// SIG undefined FUN_1492b66a4(void)

void FUN_1492b66a4(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x5e) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x5e) = 0;
  }
  return;
}



// FUNCTION 1492b6724 FUN_1492b6724 body=52 status=ok
// SIG undefined FUN_1492b6724(void)

undefined8 * FUN_1492b6724(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492b675a FUN_1492b675a body=172 status=ok
// SIG undefined FUN_1492b675a(void)

void FUN_1492b675a(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbfb9a0;
  param_2[0x3e] = 0;
  *(undefined4 *)(param_2 + 0x3f) = 0x3f800000;
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
  *(undefined1 *)(param_2 + 0x4c) = 1;
  *(undefined1 *)(param_2 + 0x4d) = 0;
  *(undefined8 *)((longlong)param_2 + 0x26c) = 0;
  *(undefined2 *)((longlong)param_2 + 0x274) = 0xffff;
  *(undefined4 *)(param_2 + 0x4f) = 0xffffffff;
  return;
}



// FUNCTION 1492b6806 FUN_1492b6806 body=172 status=ok
// SIG undefined FUN_1492b6806(void)

void FUN_1492b6806(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbfb9a0;
  param_2[0x3e] = 0;
  *(undefined4 *)(param_2 + 0x3f) = 0x3f800000;
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
  *(undefined1 *)(param_2 + 0x4c) = 1;
  *(undefined1 *)(param_2 + 0x4d) = 0;
  *(undefined8 *)((longlong)param_2 + 0x26c) = 0;
  *(undefined2 *)((longlong)param_2 + 0x274) = 0xffff;
  *(undefined4 *)(param_2 + 0x4f) = 0xffffffff;
  return;
}



// FUNCTION 1492b68d6 FUN_1492b68d6 body=110 status=ok
// SIG undefined FUN_1492b68d6(void)

undefined8 FUN_1492b68d6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 1492b696c FUN_1492b696c body=59 status=ok
// SIG undefined FUN_1492b696c(void)

undefined8 FUN_1492b696c(longlong *param_1)

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



// FUNCTION 1492b69b8 FUN_1492b69b8 body=49 status=ok
// SIG undefined FUN_1492b69b8(void)

void FUN_1492b69b8(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x52) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x52) = 0;
  }
  return;
}



// FUNCTION 1492b6a38 FUN_1492b6a38 body=52 status=ok
// SIG undefined FUN_1492b6a38(void)

undefined8 * FUN_1492b6a38(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492b6a6e FUN_1492b6a6e body=144 status=ok
// SIG undefined FUN_1492b6a6e(void)

void FUN_1492b6a6e(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbf7590;
  *(undefined1 *)(param_2 + 0x3e) = 1;
  *(undefined8 *)((longlong)param_2 + 500) = 0;
  *(undefined2 *)((longlong)param_2 + 0x1fc) = 1;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x40;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_2 + 0x4c) = 0x3f800000;
  *(undefined1 *)((longlong)param_2 + 0x264) = 1;
  *(undefined1 *)(param_2 + 0x4d) = 0;
  *(undefined8 *)((longlong)param_2 + 0x26c) = 0;
  *(undefined2 *)((longlong)param_2 + 0x274) = 0xffff;
  *(undefined4 *)(param_2 + 0x4f) = 0xffffffff;
  return;
}



// FUNCTION 1492b6afe FUN_1492b6afe body=144 status=ok
// SIG undefined FUN_1492b6afe(void)

void FUN_1492b6afe(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbf7590;
  *(undefined1 *)(param_2 + 0x3e) = 1;
  *(undefined8 *)((longlong)param_2 + 500) = 0;
  *(undefined2 *)((longlong)param_2 + 0x1fc) = 1;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x40;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_2 + 0x4c) = 0x3f800000;
  *(undefined1 *)((longlong)param_2 + 0x264) = 1;
  *(undefined1 *)(param_2 + 0x4d) = 0;
  *(undefined8 *)((longlong)param_2 + 0x26c) = 0;
  *(undefined2 *)((longlong)param_2 + 0x274) = 0xffff;
  *(undefined4 *)(param_2 + 0x4f) = 0xffffffff;
  return;
}



// FUNCTION 1492b6bb2 FUN_1492b6bb2 body=110 status=ok
// SIG undefined FUN_1492b6bb2(void)

undefined8 FUN_1492b6bb2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 1492b6c48 FUN_1492b6c48 body=59 status=ok
// SIG undefined FUN_1492b6c48(void)

undefined8 FUN_1492b6c48(longlong *param_1)

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



// FUNCTION 1492b6c94 FUN_1492b6c94 body=49 status=ok
// SIG undefined FUN_1492b6c94(void)

void FUN_1492b6c94(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x52) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x52) = 0;
  }
  return;
}



// FUNCTION 1492b6d16 FUN_1492b6d16 body=146 status=ok
// SIG undefined FUN_1492b6d16(void)

void FUN_1492b6d16(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278();
  *param_2 = &PTR_FUN_14bbf7c80;
  *(undefined1 *)(param_2 + 0x3e) = 1;
  *(undefined8 *)((longlong)param_2 + 500) = 0;
  *(undefined2 *)((longlong)param_2 + 0x1fc) = 1;
  uVar1 = DAT_14c8464e8;
  param_2[0x40] = DAT_14c8464e0;
  param_2[0x41] = uVar1;
  param_2[0x42] = DAT_14c8464f0;
  *(undefined4 *)(param_2 + 0x43) = 0x3f800000;
  *(undefined1 *)((longlong)param_2 + 0x21c) = 1;
  *(undefined1 *)(param_2 + 0x44) = 0;
  *(undefined8 *)((longlong)param_2 + 0x224) = 0;
  *(undefined2 *)((longlong)param_2 + 0x22c) = 0xffff;
  *(undefined4 *)(param_2 + 0x46) = 0xffffffff;
  return;
}



// FUNCTION 1492b6da8 FUN_1492b6da8 body=146 status=ok
// SIG undefined FUN_1492b6da8(void)

void FUN_1492b6da8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278();
  *param_2 = &PTR_FUN_14bbf7c80;
  *(undefined1 *)(param_2 + 0x3e) = 1;
  *(undefined8 *)((longlong)param_2 + 500) = 0;
  *(undefined2 *)((longlong)param_2 + 0x1fc) = 1;
  uVar1 = DAT_14c8464e8;
  param_2[0x40] = DAT_14c8464e0;
  param_2[0x41] = uVar1;
  param_2[0x42] = DAT_14c8464f0;
  *(undefined4 *)(param_2 + 0x43) = 0x3f800000;
  *(undefined1 *)((longlong)param_2 + 0x21c) = 1;
  *(undefined1 *)(param_2 + 0x44) = 0;
  *(undefined8 *)((longlong)param_2 + 0x224) = 0;
  *(undefined2 *)((longlong)param_2 + 0x22c) = 0xffff;
  *(undefined4 *)(param_2 + 0x46) = 0xffffffff;
  return;
}



// FUNCTION 1492b6e5e FUN_1492b6e5e body=114 status=ok
// SIG undefined FUN_1492b6e5e(void)

undefined1 FUN_1492b6e5e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      FUN_1491c05d4(param_2 + 0x10 + lVar2,param_3 + 0x10 + lVar2);
      puVar3 = (undefined8 *)(param_3 + 0x1f0 + lVar2);
      puVar4 = (undefined8 *)(param_2 + 0x1f0 + lVar2);
      for (lVar1 = 10; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar2 = lVar2 + 0x240;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492b6ef8 FUN_1492b6ef8 body=59 status=ok
// SIG undefined FUN_1492b6ef8(void)

undefined8 FUN_1492b6ef8(longlong *param_1)

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



// FUNCTION 1492b6f44 FUN_1492b6f44 body=49 status=ok
// SIG undefined FUN_1492b6f44(void)

void FUN_1492b6f44(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 1492b6fc6 FUN_1492b6fc6 body=146 status=ok
// SIG undefined FUN_1492b6fc6(void)

void FUN_1492b6fc6(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278();
  *param_2 = &PTR_FUN_14bbf7810;
  *(undefined1 *)(param_2 + 0x3e) = 1;
  *(undefined8 *)((longlong)param_2 + 500) = 0;
  *(undefined2 *)((longlong)param_2 + 0x1fc) = 1;
  uVar1 = DAT_14c8463d8;
  param_2[0x40] = DAT_14c8463d0;
  param_2[0x41] = uVar1;
  uVar1 = DAT_14c8463e8;
  param_2[0x42] = DAT_14c8463e0;
  param_2[0x43] = uVar1;
  *(undefined4 *)(param_2 + 0x44) = 0x3f800000;
  *(undefined1 *)((longlong)param_2 + 0x224) = 1;
  *(undefined1 *)(param_2 + 0x45) = 0;
  *(undefined8 *)((longlong)param_2 + 0x22c) = 0;
  *(undefined2 *)((longlong)param_2 + 0x234) = 0xffff;
  *(undefined4 *)(param_2 + 0x47) = 0xffffffff;
  return;
}



// FUNCTION 1492b7058 FUN_1492b7058 body=146 status=ok
// SIG undefined FUN_1492b7058(void)

void FUN_1492b7058(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278();
  *param_2 = &PTR_FUN_14bbf7810;
  *(undefined1 *)(param_2 + 0x3e) = 1;
  *(undefined8 *)((longlong)param_2 + 500) = 0;
  *(undefined2 *)((longlong)param_2 + 0x1fc) = 1;
  uVar1 = DAT_14c8463d8;
  param_2[0x40] = DAT_14c8463d0;
  param_2[0x41] = uVar1;
  uVar1 = DAT_14c8463e8;
  param_2[0x42] = DAT_14c8463e0;
  param_2[0x43] = uVar1;
  *(undefined4 *)(param_2 + 0x44) = 0x3f800000;
  *(undefined1 *)((longlong)param_2 + 0x224) = 1;
  *(undefined1 *)(param_2 + 0x45) = 0;
  *(undefined8 *)((longlong)param_2 + 0x22c) = 0;
  *(undefined2 *)((longlong)param_2 + 0x234) = 0xffff;
  *(undefined4 *)(param_2 + 0x47) = 0xffffffff;
  return;
}



// FUNCTION 1492b710e FUN_1492b710e body=114 status=ok
// SIG undefined FUN_1492b710e(void)

undefined1 FUN_1492b710e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      FUN_1491c05d4(param_2 + 0x10 + lVar2,param_3 + 0x10 + lVar2);
      puVar3 = (undefined8 *)(param_3 + 0x1f0 + lVar2);
      puVar4 = (undefined8 *)(param_2 + 0x1f0 + lVar2);
      for (lVar1 = 0xb; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar2 = lVar2 + 0x250;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492b71a8 FUN_1492b71a8 body=59 status=ok
// SIG undefined FUN_1492b71a8(void)

undefined8 FUN_1492b71a8(longlong *param_1)

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



// FUNCTION 1492b71f4 FUN_1492b71f4 body=49 status=ok
// SIG undefined FUN_1492b71f4(void)

void FUN_1492b71f4(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x4a) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x4a) = 0;
  }
  return;
}



// FUNCTION 1492b7276 FUN_1492b7276 body=146 status=ok
// SIG undefined FUN_1492b7276(void)

void FUN_1492b7276(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278();
  *param_2 = &PTR_FUN_14bbfbfb0;
  *(undefined1 *)(param_2 + 0x3e) = 1;
  *(undefined8 *)((longlong)param_2 + 500) = 0;
  *(undefined2 *)((longlong)param_2 + 0x1fc) = 1;
  uVar1 = DAT_14c846518;
  param_2[0x40] = DAT_14c846510;
  param_2[0x41] = uVar1;
  param_2[0x42] = DAT_14c846520;
  *(undefined4 *)(param_2 + 0x43) = 0x3f800000;
  *(undefined1 *)((longlong)param_2 + 0x21c) = 1;
  *(undefined1 *)(param_2 + 0x44) = 0;
  *(undefined8 *)((longlong)param_2 + 0x224) = 0;
  *(undefined2 *)((longlong)param_2 + 0x22c) = 0xffff;
  *(undefined4 *)(param_2 + 0x46) = 0xffffffff;
  return;
}



// FUNCTION 1492b7308 FUN_1492b7308 body=146 status=ok
// SIG undefined FUN_1492b7308(void)

void FUN_1492b7308(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278();
  *param_2 = &PTR_FUN_14bbfbfb0;
  *(undefined1 *)(param_2 + 0x3e) = 1;
  *(undefined8 *)((longlong)param_2 + 500) = 0;
  *(undefined2 *)((longlong)param_2 + 0x1fc) = 1;
  uVar1 = DAT_14c846518;
  param_2[0x40] = DAT_14c846510;
  param_2[0x41] = uVar1;
  param_2[0x42] = DAT_14c846520;
  *(undefined4 *)(param_2 + 0x43) = 0x3f800000;
  *(undefined1 *)((longlong)param_2 + 0x21c) = 1;
  *(undefined1 *)(param_2 + 0x44) = 0;
  *(undefined8 *)((longlong)param_2 + 0x224) = 0;
  *(undefined2 *)((longlong)param_2 + 0x22c) = 0xffff;
  *(undefined4 *)(param_2 + 0x46) = 0xffffffff;
  return;
}



// FUNCTION 1492b73be FUN_1492b73be body=114 status=ok
// SIG undefined FUN_1492b73be(void)

undefined1 FUN_1492b73be(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      FUN_1491c05d4(param_2 + 0x10 + lVar2,param_3 + 0x10 + lVar2);
      puVar3 = (undefined8 *)(param_3 + 0x1f0 + lVar2);
      puVar4 = (undefined8 *)(param_2 + 0x1f0 + lVar2);
      for (lVar1 = 10; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar2 = lVar2 + 0x240;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492b7458 FUN_1492b7458 body=59 status=ok
// SIG undefined FUN_1492b7458(void)

undefined8 FUN_1492b7458(longlong *param_1)

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



// FUNCTION 1492b74a4 FUN_1492b74a4 body=49 status=ok
// SIG undefined FUN_1492b74a4(void)

void FUN_1492b74a4(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 1492b7524 FUN_1492b7524 body=52 status=ok
// SIG undefined FUN_1492b7524(void)

undefined8 * FUN_1492b7524(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492b755a FUN_1492b755a body=93 status=ok
// SIG undefined FUN_1492b755a(void)

void FUN_1492b755a(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbfc1a0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  *(undefined2 *)(param_2 + 0x40) = 1;
  param_2[0x41] = 0;
  param_2[0x42] = 0;
  *(undefined4 *)(param_2 + 0x43) = 0x3f800000;
  *(undefined1 *)((longlong)param_2 + 0x21c) = 1;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  return;
}



// FUNCTION 1492b75b8 FUN_1492b75b8 body=93 status=ok
// SIG undefined FUN_1492b75b8(void)

void FUN_1492b75b8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbfc1a0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  *(undefined2 *)(param_2 + 0x40) = 1;
  param_2[0x41] = 0;
  param_2[0x42] = 0;
  *(undefined4 *)(param_2 + 0x43) = 0x3f800000;
  *(undefined1 *)((longlong)param_2 + 0x21c) = 1;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  return;
}



// FUNCTION 1492b763a FUN_1492b763a body=63 status=ok
// SIG undefined FUN_1492b763a(void)

undefined1 FUN_1492b763a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1492b77ea(param_2,param_3);
    param_3 = param_3 + 0x230;
    param_2 = param_2 + 0x230;
  }
  return 1;
}



// FUNCTION 1492b76a2 FUN_1492b76a2 body=59 status=ok
// SIG undefined FUN_1492b76a2(void)

undefined8 FUN_1492b76a2(longlong *param_1)

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



// FUNCTION 1492b76ee FUN_1492b76ee body=40 status=ok
// SIG undefined FUN_1492b76ee(void)

void FUN_1492b76ee(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x230) == '\x01') {
    FUN_1492b778a(param_2);
    *(undefined1 *)(param_2 + 0x230) = 0;
  }
  return;
}



// FUNCTION 1492b7764 FUN_1492b7764 body=38 status=ok
// SIG undefined FUN_1492b7764(void)

undefined8 FUN_1492b7764(undefined8 param_1,int param_2)

{
  FUN_1492b778a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492b778a FUN_1492b778a body=96 status=ok
// SIG undefined FUN_1492b778a(void)

void FUN_1492b778a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bbfc1a0;
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x41] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  return;
}



// FUNCTION 1492b77ea FUN_1492b77ea body=127 status=ok
// SIG undefined FUN_1492b77ea(void)

longlong FUN_1492b77ea(longlong param_1,longlong param_2)

{
  FUN_1491c05d4(param_1 + 0x10,param_2 + 0x10);
  FUN_1444888de(param_1 + 0x1f0,param_2 + 0x1f0);
  *(undefined2 *)(param_1 + 0x200) = *(undefined2 *)(param_2 + 0x200);
  FUN_144756208(param_1 + 0x208,param_2 + 0x208);
  *(undefined4 *)(param_1 + 0x218) = *(undefined4 *)(param_2 + 0x218);
  *(undefined1 *)(param_1 + 0x21c) = *(undefined1 *)(param_2 + 0x21c);
  FUN_1492ad734(param_1 + 0x220,param_2 + 0x220);
  return param_1;
}



// FUNCTION 1492b786a FUN_1492b786a body=93 status=ok
// SIG undefined FUN_1492b786a(void)

void FUN_1492b786a(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbfc390;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  *(undefined2 *)(param_2 + 0x40) = 1;
  param_2[0x41] = 0;
  param_2[0x42] = 0;
  *(undefined4 *)(param_2 + 0x43) = 0x3f800000;
  *(undefined1 *)((longlong)param_2 + 0x21c) = 1;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  return;
}



// FUNCTION 1492b78c8 FUN_1492b78c8 body=93 status=ok
// SIG undefined FUN_1492b78c8(void)

void FUN_1492b78c8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbfc390;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  *(undefined2 *)(param_2 + 0x40) = 1;
  param_2[0x41] = 0;
  param_2[0x42] = 0;
  *(undefined4 *)(param_2 + 0x43) = 0x3f800000;
  *(undefined1 *)((longlong)param_2 + 0x21c) = 1;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  return;
}



// FUNCTION 1492b794a FUN_1492b794a body=63 status=ok
// SIG undefined FUN_1492b794a(void)

undefined1 FUN_1492b794a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1492b7a74(param_2,param_3);
    param_3 = param_3 + 0x230;
    param_2 = param_2 + 0x230;
  }
  return 1;
}



// FUNCTION 1492b79b2 FUN_1492b79b2 body=59 status=ok
// SIG undefined FUN_1492b79b2(void)

undefined8 FUN_1492b79b2(longlong *param_1)

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



// FUNCTION 1492b79fe FUN_1492b79fe body=40 status=ok
// SIG undefined FUN_1492b79fe(void)

void FUN_1492b79fe(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x230) == '\x01') {
    FUN_14925c014(param_2);
    *(undefined1 *)(param_2 + 0x230) = 0;
  }
  return;
}



// FUNCTION 1492b7a74 FUN_1492b7a74 body=127 status=ok
// SIG undefined FUN_1492b7a74(void)

longlong FUN_1492b7a74(longlong param_1,longlong param_2)

{
  FUN_1491c05d4(param_1 + 0x10,param_2 + 0x10);
  FUN_1444888de(param_1 + 0x1f0,param_2 + 0x1f0);
  *(undefined2 *)(param_1 + 0x200) = *(undefined2 *)(param_2 + 0x200);
  FUN_144756208(param_1 + 0x208,param_2 + 0x208);
  *(undefined4 *)(param_1 + 0x218) = *(undefined4 *)(param_2 + 0x218);
  *(undefined1 *)(param_1 + 0x21c) = *(undefined1 *)(param_2 + 0x21c);
  FUN_1492ad734(param_1 + 0x220,param_2 + 0x220);
  return param_1;
}



// FUNCTION 1492b7af4 FUN_1492b7af4 body=38 status=ok
// SIG undefined FUN_1492b7af4(void)

undefined8 FUN_1492b7af4(undefined8 param_1,int param_2)

{
  FUN_14925c014();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492b7b1a FUN_1492b7b1a body=85 status=ok
// SIG undefined FUN_1492b7b1a(void)

void FUN_1492b7b1a(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbfc580;
  *(undefined8 *)((longlong)param_2 + 0x1fc) = 0;
  param_2[0x3e] = 0;
  *(undefined1 *)(param_2 + 0x3f) = 0;
  *(undefined2 *)((longlong)param_2 + 0x204) = 0xffff;
  *(undefined4 *)(param_2 + 0x41) = 0xffffffff;
  return;
}



// FUNCTION 1492b7b70 FUN_1492b7b70 body=85 status=ok
// SIG undefined FUN_1492b7b70(void)

void FUN_1492b7b70(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbfc580;
  *(undefined8 *)((longlong)param_2 + 0x1fc) = 0;
  param_2[0x3e] = 0;
  *(undefined1 *)(param_2 + 0x3f) = 0;
  *(undefined2 *)((longlong)param_2 + 0x204) = 0xffff;
  *(undefined4 *)(param_2 + 0x41) = 0xffffffff;
  return;
}



// FUNCTION 1492b7bea FUN_1492b7bea body=123 status=ok
// SIG undefined FUN_1492b7bea(void)

undefined8 FUN_1492b7bea(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_1491c05d4(param_2 + 0x10 + lVar10,param_3 + 0x10 + lVar10);
      puVar1 = (undefined4 *)(param_3 + 0x1f0 + lVar10);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_3 + 0x200 + lVar10);
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      puVar2 = (undefined4 *)(param_2 + 0x1f0 + lVar10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      puVar1 = (undefined4 *)(param_2 + 0x200 + lVar10);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      *(undefined8 *)(param_2 + 0x210 + lVar10) = *(undefined8 *)(param_3 + 0x210 + lVar10);
      lVar10 = lVar10 + 0x220;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492b7c8e FUN_1492b7c8e body=59 status=ok
// SIG undefined FUN_1492b7c8e(void)

undefined8 FUN_1492b7c8e(longlong *param_1)

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



// FUNCTION 1492b7cda FUN_1492b7cda body=49 status=ok
// SIG undefined FUN_1492b7cda(void)

void FUN_1492b7cda(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x44) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x44) = 0;
  }
  return;
}



// FUNCTION 1492b7d5a FUN_1492b7d5a body=52 status=ok
// SIG undefined FUN_1492b7d5a(void)

undefined8 * FUN_1492b7d5a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492b7d90 FUN_1492b7d90 body=52 status=ok
// SIG undefined FUN_1492b7d90(void)

void FUN_1492b7d90(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bbfc770;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0xe;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 1492b7dc4 FUN_1492b7dc4 body=52 status=ok
// SIG undefined FUN_1492b7dc4(void)

void FUN_1492b7dc4(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bbfc770;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0xe;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 1492b7e1c FUN_1492b7e1c body=71 status=ok
// SIG undefined FUN_1492b7e1c(void)

undefined8 FUN_1492b7e1c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0x10;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0xc0);
      lVar1 = lVar1 + 0xd0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492b7e8c FUN_1492b7e8c body=59 status=ok
// SIG undefined FUN_1492b7e8c(void)

undefined8 FUN_1492b7e8c(longlong *param_1)

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



// FUNCTION 1492b7f38 FUN_1492b7f38 body=29 status=ok
// SIG undefined FUN_1492b7f38(void)

undefined8 FUN_1492b7f38(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492b7f56 FUN_1492b7f56 body=52 status=ok
// SIG undefined FUN_1492b7f56(void)

void FUN_1492b7f56(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bbfc960;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0xe;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 1492b7f8a FUN_1492b7f8a body=52 status=ok
// SIG undefined FUN_1492b7f8a(void)

void FUN_1492b7f8a(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bbfc960;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0xe;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 1492b7fe2 FUN_1492b7fe2 body=71 status=ok
// SIG undefined FUN_1492b7fe2(void)

undefined8 FUN_1492b7fe2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0x10;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0xc0);
      lVar1 = lVar1 + 0xd0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492b8052 FUN_1492b8052 body=59 status=ok
// SIG undefined FUN_1492b8052(void)

undefined8 FUN_1492b8052(longlong *param_1)

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



// FUNCTION 1492b80fe FUN_1492b80fe body=29 status=ok
// SIG undefined FUN_1492b80fe(void)

undefined8 FUN_1492b80fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492b820e FUN_1492b820e body=59 status=ok
// SIG undefined FUN_1492b820e(void)

undefined8 FUN_1492b820e(longlong *param_1)

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



// FUNCTION 1492b82ae FUN_1492b82ae body=29 status=ok
// SIG undefined FUN_1492b82ae(void)

undefined8 FUN_1492b82ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492b83be FUN_1492b83be body=59 status=ok
// SIG undefined FUN_1492b83be(void)

undefined8 FUN_1492b83be(longlong *param_1)

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



// FUNCTION 1492b845e FUN_1492b845e body=29 status=ok
// SIG undefined FUN_1492b845e(void)

undefined8 FUN_1492b845e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492b8578 FUN_1492b8578 body=59 status=ok
// SIG undefined FUN_1492b8578(void)

undefined8 FUN_1492b8578(longlong *param_1)

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



// FUNCTION 1492b8618 FUN_1492b8618 body=29 status=ok
// SIG undefined FUN_1492b8618(void)

undefined8 FUN_1492b8618(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492b8732 FUN_1492b8732 body=59 status=ok
// SIG undefined FUN_1492b8732(void)

undefined8 FUN_1492b8732(longlong *param_1)

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



// FUNCTION 1492b87d2 FUN_1492b87d2 body=29 status=ok
// SIG undefined FUN_1492b87d2(void)

undefined8 FUN_1492b87d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492b8874 FUN_1492b8874 body=59 status=ok
// SIG undefined FUN_1492b8874(void)

undefined8 FUN_1492b8874(longlong *param_1)

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



// FUNCTION 1492b899a FUN_1492b899a body=59 status=ok
// SIG undefined FUN_1492b899a(void)

undefined8 FUN_1492b899a(longlong *param_1)

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



// FUNCTION 1492b8a9c FUN_1492b8a9c body=70 status=ok
// SIG undefined FUN_1492b8a9c(void)

undefined8 FUN_1492b8a9c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1492ad734(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x14);
    uVar2 = *(undefined4 *)(param_3 + 0x18);
    uVar3 = *(undefined4 *)(param_3 + 0x1c);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
    *(undefined4 *)(param_2 + 0x14) = uVar1;
    *(undefined4 *)(param_2 + 0x18) = uVar2;
    *(undefined4 *)(param_2 + 0x1c) = uVar3;
    *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_3 + 0x20);
    param_2 = param_2 + 0x28;
    param_3 = param_3 + 0x28;
  }
  return 1;
}



// FUNCTION 1492b8b0a FUN_1492b8b0a body=59 status=ok
// SIG undefined FUN_1492b8b0a(void)

undefined8 FUN_1492b8b0a(longlong *param_1)

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



// FUNCTION 1492b8b50 FUN_1492b8b50 body=37 status=ok
// SIG undefined FUN_1492b8b50(void)

void FUN_1492b8b50(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[5] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 5) = 0;
  }
  return;
}



// FUNCTION 1492b8bfa FUN_1492b8bfa body=199 status=ok
// SIG undefined FUN_1492b8bfa(void)

undefined8 FUN_1492b8bfa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
  if (param_4 != 0) {
    lVar8 = 0;
    do {
      lVar1 = param_2 + lVar8;
      lVar2 = param_2 + lVar8;
      lVar3 = param_3 + lVar8;
      lVar4 = param_3 + lVar8;
      FUN_1491c05d4(lVar2 + 0x10,lVar4 + 0x10);
      FUN_1492b8f44(lVar1 + 0x1f0,lVar3 + 0x1f0);
      memcpy((void *)(lVar1 + 0x200),(void *)(lVar3 + 0x200),0x86);
      FUN_1492ad734(lVar1 + 0x288,lVar3 + 0x288);
      uVar5 = *(undefined4 *)(lVar4 + 0x29c);
      uVar6 = *(undefined4 *)(lVar4 + 0x2a0);
      uVar7 = *(undefined4 *)(lVar4 + 0x2a4);
      *(undefined4 *)(lVar2 + 0x298) = *(undefined4 *)(lVar4 + 0x298);
      *(undefined4 *)(lVar2 + 0x29c) = uVar5;
      *(undefined4 *)(lVar2 + 0x2a0) = uVar6;
      *(undefined4 *)(lVar2 + 0x2a4) = uVar7;
      *(undefined8 *)(lVar2 + 0x2a8) = *(undefined8 *)(lVar4 + 0x2a8);
      lVar8 = lVar8 + 0x2b0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492b8cea FUN_1492b8cea body=59 status=ok
// SIG undefined FUN_1492b8cea(void)

undefined8 FUN_1492b8cea(longlong *param_1)

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



// FUNCTION 1492b8d36 FUN_1492b8d36 body=40 status=ok
// SIG undefined FUN_1492b8d36(void)

void FUN_1492b8d36(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2b0) == '\x01') {
    FUN_1492b8ef4(param_2);
    *(undefined1 *)(param_2 + 0x2b0) = 0;
  }
  return;
}



// FUNCTION 1492b8dac FUN_1492b8dac body=290 status=ok
// SIG undefined FUN_1492b8dac(void)

undefined8 * FUN_1492b8dac(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_1 + 2);
  *param_1 = &PTR_FUN_14bbfd730;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0x53] = DAT_14c8464e0;
  param_1[0x54] = uVar1;
  param_1[0x55] = DAT_14c8464f0;
  uVar1 = DAT_14c846518;
  param_1[0x40] = DAT_14c846510;
  param_1[0x41] = uVar1;
  param_1[0x42] = DAT_14c846520;
  param_1[0x46] = 0;
  param_1[0x47] = 0x4051800000000000;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x43] = 0x3ff0000000000000;
  param_1[0x44] = 0x3fe3333340000000;
  param_1[0x45] = 0x3fe99999a0000000;
  param_1[0x4a] = 0x3ff0000000000000;
  param_1[0x4b] = 0x4000000000000000;
  param_1[0x4e] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x4c] = DAT_14c8464e0;
  param_1[0x4d] = uVar1;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  *(undefined8 *)((longlong)param_1 + 0x27c) = 0x3f8000003f000000;
  *(undefined2 *)((longlong)param_1 + 0x284) = 0x103;
  return param_1;
}



// FUNCTION 1492b8ece FUN_1492b8ece body=38 status=ok
// SIG undefined FUN_1492b8ece(void)

undefined8 FUN_1492b8ece(undefined8 param_1,int param_2)

{
  FUN_1492b8ef4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492b8ef4 FUN_1492b8ef4 body=79 status=ok
// SIG undefined FUN_1492b8ef4(void)

void FUN_1492b8ef4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bbfd730;
  if (param_1[0x51] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  return;
}



// FUNCTION 1492b8f44 FUN_1492b8f44 body=89 status=ok
// SIG undefined FUN_1492b8f44(void)

undefined8 * FUN_1492b8f44(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1492b8f9e(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 1492b8f9e FUN_1492b8f9e body=115 status=ok
// SIG undefined FUN_1492b8f9e(void)

void FUN_1492b8f9e(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc,4);
    iVar2 = (int)(uVar1 / 0xc);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xc,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1492b9046 FUN_1492b9046 body=199 status=ok
// SIG undefined FUN_1492b9046(void)

undefined8 FUN_1492b9046(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
  if (param_4 != 0) {
    lVar8 = 0;
    do {
      lVar1 = param_2 + lVar8;
      lVar2 = param_2 + lVar8;
      lVar3 = param_3 + lVar8;
      lVar4 = param_3 + lVar8;
      FUN_1491c05d4(lVar2 + 0x10,lVar4 + 0x10);
      FUN_1492b91f8(lVar1 + 0x1f0,lVar3 + 0x1f0);
      memcpy((void *)(lVar1 + 0x200),(void *)(lVar3 + 0x200),0x85);
      FUN_1492ad734(lVar1 + 0x288,lVar3 + 0x288);
      uVar5 = *(undefined4 *)(lVar4 + 0x29c);
      uVar6 = *(undefined4 *)(lVar4 + 0x2a0);
      uVar7 = *(undefined4 *)(lVar4 + 0x2a4);
      *(undefined4 *)(lVar2 + 0x298) = *(undefined4 *)(lVar4 + 0x298);
      *(undefined4 *)(lVar2 + 0x29c) = uVar5;
      *(undefined4 *)(lVar2 + 0x2a0) = uVar6;
      *(undefined4 *)(lVar2 + 0x2a4) = uVar7;
      *(undefined8 *)(lVar2 + 0x2a8) = *(undefined8 *)(lVar4 + 0x2a8);
      lVar8 = lVar8 + 0x2b0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492b9136 FUN_1492b9136 body=59 status=ok
// SIG undefined FUN_1492b9136(void)

undefined8 FUN_1492b9136(longlong *param_1)

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



// FUNCTION 1492b9182 FUN_1492b9182 body=40 status=ok
// SIG undefined FUN_1492b9182(void)

void FUN_1492b9182(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2b0) == '\x01') {
    FUN_14925e574(param_2);
    *(undefined1 *)(param_2 + 0x2b0) = 0;
  }
  return;
}



// FUNCTION 1492b91f8 FUN_1492b91f8 body=88 status=ok
// SIG undefined FUN_1492b91f8(void)

undefined8 * FUN_1492b91f8(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1492b9250(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 1492b9250 FUN_1492b9250 body=98 status=ok
// SIG undefined FUN_1492b9250(void)

void FUN_1492b9250(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,4);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1492b92b4 FUN_1492b92b4 body=38 status=ok
// SIG undefined FUN_1492b92b4(void)

undefined8 FUN_1492b92b4(undefined8 param_1,int param_2)

{
  FUN_14925e574();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492b935a FUN_1492b935a body=39 status=ok
// SIG undefined FUN_1492b935a(void)

undefined8 FUN_1492b935a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492b93aa FUN_1492b93aa body=59 status=ok
// SIG undefined FUN_1492b93aa(void)

undefined8 FUN_1492b93aa(longlong *param_1)

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



// FUNCTION 1492b9558 FUN_1492b9558 body=39 status=ok
// SIG undefined FUN_1492b9558(void)

undefined8 FUN_1492b9558(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 0xf; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x78;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492b95a8 FUN_1492b95a8 body=59 status=ok
// SIG undefined FUN_1492b95a8(void)

undefined8 FUN_1492b95a8(longlong *param_1)

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



// FUNCTION 1492b970e FUN_1492b970e body=39 status=ok
// SIG undefined FUN_1492b970e(void)

undefined8 FUN_1492b970e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 0xb; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492b975e FUN_1492b975e body=59 status=ok
// SIG undefined FUN_1492b975e(void)

undefined8 FUN_1492b975e(longlong *param_1)

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



// FUNCTION 1492b9896 FUN_1492b9896 body=63 status=ok
// SIG undefined FUN_1492b9896(void)

undefined1 FUN_1492b9896(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1492b9a48(param_2,param_3);
    param_3 = param_3 + 0x98;
    param_2 = param_2 + 0x98;
  }
  return 1;
}



// FUNCTION 1492b98fe FUN_1492b98fe body=59 status=ok
// SIG undefined FUN_1492b98fe(void)

undefined8 FUN_1492b98fe(longlong *param_1)

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



// FUNCTION 1492b994a FUN_1492b994a body=40 status=ok
// SIG undefined FUN_1492b994a(void)

void FUN_1492b994a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x98) == '\x01') {
    FUN_1492b99c0(param_2);
    *(undefined1 *)(param_2 + 0x98) = 0;
  }
  return;
}



// FUNCTION 1492b99c0 FUN_1492b99c0 body=135 status=ok
// SIG undefined FUN_1492b99c0(void)

void FUN_1492b99c0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1492b9a48 FUN_1492b9a48 body=144 status=ok
// SIG undefined FUN_1492b9a48(void)

undefined4 * FUN_1492b9a48(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_1492ad734(param_1 + 6,param_2 + 6);
  FUN_144a67f5c(param_1 + 10,param_2 + 10);
  FUN_1405b70a4(param_1 + 0xe,param_2 + 0xe);
  FUN_1405b70a4(param_1 + 0x12,param_2 + 0x12);
  FUN_1405b70a4(param_1 + 0x16,param_2 + 0x16);
  FUN_1405b70a4(param_1 + 0x1a,param_2 + 0x1a);
  FUN_1405b70a4(param_1 + 0x1e,param_2 + 0x1e);
  FUN_1405b70a4(param_1 + 0x22,param_2 + 0x22);
  return param_1;
}



// FUNCTION 1492b9b0e FUN_1492b9b0e body=185 status=ok
// SIG undefined FUN_1492b9b0e(void)

undefined8 FUN_1492b9b0e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      lVar1 = param_2 + lVar3;
      lVar2 = param_3 + lVar3;
      FUN_1491c05d4(param_2 + lVar3 + 0x10,param_3 + lVar3 + 0x10);
      memcpy((void *)(lVar1 + 0x1f0),(void *)(lVar2 + 0x1f0),0xe0);
      FUN_14115e0ba(lVar1 + 0x2d0,lVar2 + 0x2d0);
      memcpy((void *)(lVar1 + 0x358),(void *)(lVar2 + 0x358),200);
      FUN_1492b9a48(lVar1 + 0x420,lVar2 + 0x420);
      lVar3 = lVar3 + 0x4c0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492b9bf0 FUN_1492b9bf0 body=59 status=ok
// SIG undefined FUN_1492b9bf0(void)

undefined8 FUN_1492b9bf0(longlong *param_1)

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



// FUNCTION 1492b9c3c FUN_1492b9c3c body=40 status=ok
// SIG undefined FUN_1492b9c3c(void)

void FUN_1492b9c3c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x4c0) == '\x01') {
    FUN_1492ba0ee(param_2);
    *(undefined1 *)(param_2 + 0x4c0) = 0;
  }
  return;
}



// FUNCTION 1492b9cb2 FUN_1492b9cb2 body=1045 status=ok
// SIG undefined FUN_1492b9cb2(void)

undefined8 * FUN_1492b9cb2(undefined8 *param_1)

{
  undefined ***pppuVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined4 local_f0;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined **local_d8 [13];
  undefined4 local_70;
  undefined1 local_6c;
  undefined1 local_6b;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_1 + 2);
  *param_1 = &PTR_FUN_14bbfe090;
  param_1[0x3e] = 0;
  *(undefined1 *)(param_1 + 0x42) = 1;
  uVar5 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x43] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x44] = uVar5;
  param_1[0x45] = DAT_14c8464f0;
  param_1[0x46] = 0x3ff0000000000000;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  *(undefined8 *)((longlong)param_1 + 0x241) = 0;
  *(undefined8 *)((longlong)param_1 + 0x249) = 0;
  *(undefined1 *)(param_1 + 0x4b) = 1;
  param_1[0x4f] = 0;
  param_1[0x50] = 0x3ff0000000000000;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x4c] = 0x3ff0000000000000;
  param_1[0x4d] = 0x3fe3333340000000;
  param_1[0x4e] = 0x3fe99999a0000000;
  param_1[0x53] = 0x3ff0000000000000;
  param_1[0x54] = 0x4000000000000000;
  param_1[0x57] = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x55) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x2ac) = uVar2;
  *(undefined4 *)(param_1 + 0x56) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x2b4) = uVar4;
  param_1[0x58] = 0x3f80000000000000;
  *(undefined1 *)(param_1 + 0x59) = 0;
  pppuVar1 = (undefined ***)(param_1 + 0x5a);
  FUN_14109baa4(pppuVar1);
  *(undefined4 *)((longlong)param_1 + 0x35c) = 0x40000000;
  uVar5 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x6c] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x6d] = uVar5;
  param_1[0x6e] = DAT_14c8464f0;
  param_1[0x6f] = 0x3f7ae1483f400000;
  param_1[0x70] = 0x3dcccccd00000000;
  *(undefined1 *)(param_1 + 0x71) = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0x3ff0000000000000;
  param_1[0x74] = 0;
  param_1[0x75] = 0x3d4ccccd3e4ccccd;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3d4) = 0;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3dc) = 0x3ff00000;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)((longlong)param_1 + 0x404) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x81) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40c) = 0x3ff00000;
  param_1[0x82] = 0x3ff0000000000000;
  param_1[0x83] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x86] = DAT_14c8464f0;
  uVar5 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x84] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x85] = uVar5;
  param_1[0x3e] = 0;
  uVar4 = DAT_14c846518._4_4_;
  uVar3 = (undefined4)DAT_14c846518;
  uVar2 = DAT_14c846510._4_4_;
  *(undefined4 *)(param_1 + 0x3f) = (undefined4)DAT_14c846510;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = uVar2;
  *(undefined4 *)(param_1 + 0x40) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x204) = uVar4;
  param_1[0x41] = DAT_14c846520;
  *(undefined1 *)(param_1 + 0x42) = 0;
  *(undefined1 *)(param_1 + 0x4b) = 1;
  *(undefined1 *)(param_1 + 0x6b) = 0;
  FUN_14109baa4(local_d8);
  *(undefined4 *)(param_1 + 0x67) = local_70;
  *(undefined1 *)((longlong)param_1 + 0x33c) = local_6c;
  *(undefined1 *)((longlong)param_1 + 0x33d) = local_6b;
  if (pppuVar1 != local_d8) {
    if (param_1[0x68] != 0) {
      FUN_1400020a8();
    }
    param_1[0x68] = local_68;
    local_68 = 0;
    *(undefined4 *)(param_1 + 0x69) = (undefined4)local_60;
    *(undefined4 *)((longlong)param_1 + 0x34c) = local_60._4_4_;
    local_60 = 0;
  }
  if (DAT_14c950c29 == '\x01') {
    if (local_58 == 0) {
      local_58 = 0;
    }
    else {
      FUN_1456cec3c();
    }
  }
  param_1[0x6a] = local_58;
  local_d8[0] = (undefined **)&DAT_14a176f00;
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  local_d8[0] = &PTR_FUN_14a177080;
  FUN_144a78a1a();
  uVar5 = FUN_1414cd6fa(pppuVar1);
  FUN_14045d416(&local_dc);
  local_f0 = local_dc;
  local_f8 = 0;
  FUN_1406507bc(uVar5,local_d8,0,0);
  uVar5 = FUN_1414cd6fa(pppuVar1);
  FUN_14045d416(&local_e0);
  local_f0 = local_e0;
  local_f8 = 0;
  FUN_1406507bc(uVar5,local_d8,0x3f800000,0x3f800000);
  *(undefined1 *)(param_1 + 0x76) = 1;
  puVar7 = &DAT_14c846480;
  puVar8 = param_1 + 0x78;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492ba0c8 FUN_1492ba0c8 body=38 status=ok
// SIG undefined FUN_1492ba0c8(void)

undefined8 FUN_1492ba0c8(undefined8 param_1,int param_2)

{
  FUN_1492ba0ee();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492ba0ee FUN_1492ba0ee body=114 status=ok
// SIG undefined FUN_1492ba0ee(void)

void FUN_1492ba0ee(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bbfe090;
  FUN_1492b99c0(param_1 + 0x84);
  param_1[0x5a] = &DAT_14a176f00;
  if (param_1[0x68] != 0) {
    FUN_1400020a8();
  }
  param_1[0x5a] = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 0x5b);
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  return;
}



// FUNCTION 1492ba196 FUN_1492ba196 body=185 status=ok
// SIG undefined FUN_1492ba196(void)

undefined8 FUN_1492ba196(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      lVar1 = param_2 + lVar3;
      lVar2 = param_3 + lVar3;
      FUN_1491c05d4(param_2 + lVar3 + 0x10,param_3 + lVar3 + 0x10);
      memcpy((void *)(lVar1 + 0x1f0),(void *)(lVar2 + 0x1f0),0xe8);
      FUN_14115e0ba(lVar1 + 0x2d8,lVar2 + 0x2d8);
      memcpy((void *)(lVar1 + 0x360),(void *)(lVar2 + 0x360),0xc0);
      FUN_1492b9a48(lVar1 + 0x420,lVar2 + 0x420);
      lVar3 = lVar3 + 0x4c0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492ba278 FUN_1492ba278 body=59 status=ok
// SIG undefined FUN_1492ba278(void)

undefined8 FUN_1492ba278(longlong *param_1)

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



// FUNCTION 1492ba2c4 FUN_1492ba2c4 body=40 status=ok
// SIG undefined FUN_1492ba2c4(void)

void FUN_1492ba2c4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x4c0) == '\x01') {
    FUN_149261680(param_2);
    *(undefined1 *)(param_2 + 0x4c0) = 0;
  }
  return;
}



// FUNCTION 1492ba33c FUN_1492ba33c body=38 status=ok
// SIG undefined FUN_1492ba33c(void)

undefined8 FUN_1492ba33c(undefined8 param_1,int param_2)

{
  FUN_149261680();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492ba3da FUN_1492ba3da body=39 status=ok
// SIG undefined FUN_1492ba3da(void)

undefined8 FUN_1492ba3da(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492ba42a FUN_1492ba42a body=59 status=ok
// SIG undefined FUN_1492ba42a(void)

undefined8 FUN_1492ba42a(longlong *param_1)

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



// FUNCTION 1492ba54c FUN_1492ba54c body=39 status=ok
// SIG undefined FUN_1492ba54c(void)

undefined8 FUN_1492ba54c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492ba59c FUN_1492ba59c body=59 status=ok
// SIG undefined FUN_1492ba59c(void)

undefined8 FUN_1492ba59c(longlong *param_1)

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



// FUNCTION 1492ba63e FUN_1492ba63e body=74 status=ok
// SIG undefined FUN_1492ba63e(void)

void FUN_1492ba63e(undefined8 param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_2 + 0x2c) = 0x3ff00000;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 0x58) = 0x3ff0000000000000;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 4) = 0x41200000;
  puVar2 = &DAT_14c846480;
  puVar3 = (undefined8 *)(param_2 + 0x10);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 1492ba688 FUN_1492ba688 body=74 status=ok
// SIG undefined FUN_1492ba688(void)

void FUN_1492ba688(undefined8 param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_2 + 0x2c) = 0x3ff00000;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 0x58) = 0x3ff0000000000000;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 4) = 0x41200000;
  puVar2 = &DAT_14c846480;
  puVar3 = (undefined8 *)(param_2 + 0x10);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 1492ba6ea FUN_1492ba6ea body=39 status=ok
// SIG undefined FUN_1492ba6ea(void)

undefined8 FUN_1492ba6ea(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 0xe; lVar2 != 0; lVar2 = lVar2 + -1) {
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



// FUNCTION 1492ba73a FUN_1492ba73a body=59 status=ok
// SIG undefined FUN_1492ba73a(void)

undefined8 FUN_1492ba73a(longlong *param_1)

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



// FUNCTION 1492ba810 FUN_1492ba810 body=71 status=ok
// SIG undefined FUN_1492ba810(void)

undefined8 FUN_1492ba810(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0x10;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x211);
      lVar1 = lVar1 + 0x230;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492ba880 FUN_1492ba880 body=59 status=ok
// SIG undefined FUN_1492ba880(void)

undefined8 FUN_1492ba880(longlong *param_1)

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



// FUNCTION 1492ba92c FUN_1492ba92c body=427 status=ok
// SIG undefined FUN_1492ba92c(void)

void FUN_1492ba92c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  
  *param_1 = &PTR_FUN_14bbfe890;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3ff00000;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0x3ff0000000000000;
  param_1[0xb] = 0x3ff0000000000000;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0x3ff00000;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0x3ff0000000000000;
  param_1[0x2b] = 0x3ff0000000000000;
  param_1[0x2c] = 0x3ff0000000000000;
  param_1[0x2d] = 0;
  puVar14 = &DAT_14c846480;
  puVar15 = param_1 + 2;
  for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
    *puVar15 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar15 = puVar15 + 1;
  }
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  param_1[0x12] = 0x3ff0000000000000;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 1;
  *(undefined1 *)((longlong)param_1 + 0xac) = 1;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0x3f800000;
  param_1[0x1b] = 0x3ff0000000000000;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 1;
  *(undefined1 *)((longlong)param_1 + 0xf4) = 1;
  param_1[0x1f] = 0;
  param_1[0xf] = 0x3ff0000000000000;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0x3ff0000000000000;
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
  uVar12 = uRam000000014c8464d8;
  uVar11 = DAT_14c8464d0;
  uVar10 = DAT_14c8464c8;
  uVar9 = DAT_14c8464c0;
  uVar8 = DAT_14c8464b8;
  uVar7 = DAT_14c8464b0;
  uVar6 = DAT_14c8464a8;
  uVar5 = DAT_14c8464a0;
  uVar4 = DAT_14c846498;
  uVar3 = DAT_14c846490;
  uVar2 = DAT_14c846488;
  uVar1 = DAT_14c846480;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0x41200000;
  param_1[0x30] = uVar1;
  param_1[0x31] = uVar2;
  param_1[0x32] = uVar3;
  param_1[0x33] = uVar4;
  param_1[0x34] = uVar5;
  param_1[0x35] = uVar6;
  param_1[0x36] = uVar7;
  param_1[0x37] = uVar8;
  param_1[0x38] = uVar9;
  param_1[0x39] = uVar10;
  param_1[0x3a] = uVar11;
  param_1[0x3b] = uVar12;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e4) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1ec) = 0xffff;
  *(undefined4 *)(param_1 + 0x3e) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x204) = 0;
  *(undefined2 *)((longlong)param_1 + 0x20c) = 0xffff;
  *(undefined4 *)(param_1 + 0x42) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x44) = 0;
  return;
}



// FUNCTION 1492baad8 FUN_1492baad8 body=29 status=ok
// SIG undefined FUN_1492baad8(void)

undefined8 FUN_1492baad8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492bab2a FUN_1492bab2a body=110 status=ok
// SIG undefined FUN_1492bab2a(void)

undefined8 FUN_1492bab2a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_1491c05d4(param_2 + 0x10 + lVar1,param_3 + 0x10 + lVar1);
      memcpy((void *)(param_2 + 0x1f0 + lVar1),(void *)(param_3 + 0x1f0 + lVar1),0x171);
      lVar1 = lVar1 + 0x370;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492babc0 FUN_1492babc0 body=59 status=ok
// SIG undefined FUN_1492babc0(void)

undefined8 FUN_1492babc0(longlong *param_1)

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



// FUNCTION 1492bac0c FUN_1492bac0c body=49 status=ok
// SIG undefined FUN_1492bac0c(void)

void FUN_1492bac0c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x6e) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x6e) = 0;
  }
  return;
}



// FUNCTION 1492bac8c FUN_1492bac8c body=378 status=ok
// SIG undefined FUN_1492bac8c(void)

undefined8 * FUN_1492bac8c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_1 + 2);
  *param_1 = &PTR_FUN_14bbfea80;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0x3f800000;
  param_1[0x43] = 0x3ff0000000000000;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(undefined1 *)(param_1 + 0x46) = 1;
  *(undefined8 *)((longlong)param_1 + 0x234) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0x3f800000;
  param_1[0x4c] = 0x3ff0000000000000;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *(undefined1 *)(param_1 + 0x4f) = 1;
  *(undefined8 *)((longlong)param_1 + 0x27c) = 0;
  param_1[0x40] = 0x3ff0000000000000;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0x3ff0000000000000;
  *(undefined4 *)(param_1 + 0x51) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x28c) = 1;
  uVar12 = uRam000000014c8464d8;
  uVar11 = DAT_14c8464d0;
  uVar10 = DAT_14c8464c8;
  uVar9 = DAT_14c8464c0;
  uVar8 = DAT_14c8464b8;
  uVar7 = DAT_14c8464b0;
  uVar6 = DAT_14c8464a8;
  uVar5 = DAT_14c8464a0;
  uVar4 = DAT_14c846498;
  uVar3 = DAT_14c846490;
  uVar2 = DAT_14c846488;
  uVar1 = DAT_14c846480;
  *(undefined1 *)(param_1 + 0x52) = 0;
  *(undefined4 *)((longlong)param_1 + 0x294) = 0x41200000;
  param_1[0x54] = uVar1;
  param_1[0x55] = uVar2;
  param_1[0x56] = uVar3;
  param_1[0x57] = uVar4;
  param_1[0x58] = uVar5;
  param_1[0x59] = uVar6;
  param_1[0x5a] = uVar7;
  param_1[0x5b] = uVar8;
  param_1[0x5c] = uVar9;
  param_1[0x5d] = uVar10;
  param_1[0x5e] = uVar11;
  param_1[0x5f] = uVar12;
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x304) = 0;
  *(undefined2 *)((longlong)param_1 + 0x30c) = 0xffff;
  *(undefined4 *)(param_1 + 0x62) = 0xffffffff;
  *(undefined1 *)(param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x324) = 0;
  *(undefined2 *)((longlong)param_1 + 0x32c) = 0xffff;
  *(undefined4 *)(param_1 + 0x66) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x344) = 0;
  *(undefined2 *)((longlong)param_1 + 0x34c) = 0xffff;
  *(undefined4 *)(param_1 + 0x6a) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  return param_1;
}



// FUNCTION 1492bae06 FUN_1492bae06 body=52 status=ok
// SIG undefined FUN_1492bae06(void)

undefined8 * FUN_1492bae06(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492bae70 FUN_1492bae70 body=110 status=ok
// SIG undefined FUN_1492bae70(void)

undefined8 FUN_1492bae70(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_1491c05d4(param_2 + 0x10 + lVar1,param_3 + 0x10 + lVar1);
      memcpy((void *)(param_2 + 0x1f0 + lVar1),(void *)(param_3 + 0x1f0 + lVar1),0x181);
      lVar1 = lVar1 + 0x380;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492baf06 FUN_1492baf06 body=59 status=ok
// SIG undefined FUN_1492baf06(void)

undefined8 FUN_1492baf06(longlong *param_1)

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



// FUNCTION 1492baf52 FUN_1492baf52 body=49 status=ok
// SIG undefined FUN_1492baf52(void)

void FUN_1492baf52(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 1492bb092 FUN_1492bb092 body=59 status=ok
// SIG undefined FUN_1492bb092(void)

undefined8 FUN_1492bb092(longlong *param_1)

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



// FUNCTION 1492bb134 FUN_1492bb134 body=78 status=ok
// SIG undefined FUN_1492bb134(void)

void FUN_1492bb134(undefined8 param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_2 + 0x2c) = 0x3ff00000;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 0x58) = 0x3ff0000000000000;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 4) = 0x41200000;
  puVar2 = &DAT_14c846480;
  puVar3 = (undefined8 *)(param_2 + 0x10);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_2[0x70] = 1;
  return;
}



// FUNCTION 1492bb182 FUN_1492bb182 body=78 status=ok
// SIG undefined FUN_1492bb182(void)

void FUN_1492bb182(undefined8 param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_2 + 0x2c) = 0x3ff00000;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 0x58) = 0x3ff0000000000000;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 4) = 0x41200000;
  puVar2 = &DAT_14c846480;
  puVar3 = (undefined8 *)(param_2 + 0x10);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_2[0x70] = 1;
  return;
}



// FUNCTION 1492bb1e8 FUN_1492bb1e8 body=39 status=ok
// SIG undefined FUN_1492bb1e8(void)

undefined8 FUN_1492bb1e8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
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



// FUNCTION 1492bb238 FUN_1492bb238 body=59 status=ok
// SIG undefined FUN_1492bb238(void)

undefined8 FUN_1492bb238(longlong *param_1)

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



// FUNCTION 1492bb31a FUN_1492bb31a body=220 status=ok
// SIG undefined FUN_1492bb31a(void)

undefined8 FUN_1492bb31a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      lVar1 = param_2 + lVar6;
      lVar2 = param_3 + lVar6;
      FUN_1491c05d4(param_2 + lVar6 + 0x10,param_3 + lVar6 + 0x10);
      puVar4 = (undefined8 *)(lVar2 + 0x1f0);
      puVar5 = (undefined8 *)(lVar1 + 0x1f0);
      for (lVar3 = 0xd; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      FUN_149283a5e(lVar1 + 600,lVar2 + 600);
      memcpy((void *)(lVar1 + 0x270),(void *)(lVar2 + 0x270),200);
      FUN_1492ad734(lVar1 + 0x338,lVar2 + 0x338);
      *(undefined1 *)(param_2 + lVar6 + 0x348) = *(undefined1 *)(param_3 + lVar6 + 0x348);
      lVar6 = lVar6 + 0x350;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492bb41e FUN_1492bb41e body=59 status=ok
// SIG undefined FUN_1492bb41e(void)

undefined8 FUN_1492bb41e(longlong *param_1)

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



// FUNCTION 1492bb46a FUN_1492bb46a body=40 status=ok
// SIG undefined FUN_1492bb46a(void)

void FUN_1492bb46a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x350) == '\x01') {
    FUN_146713a5c(param_2);
    *(undefined1 *)(param_2 + 0x350) = 0;
  }
  return;
}



// FUNCTION 1492bb4e0 FUN_1492bb4e0 body=38 status=ok
// SIG undefined FUN_1492bb4e0(void)

undefined8 FUN_1492bb4e0(undefined8 param_1,int param_2)

{
  FUN_146713a5c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492bb508 FUN_1492bb508 body=52 status=ok
// SIG undefined FUN_1492bb508(void)

undefined8 * FUN_1492bb508(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492bb5c0 FUN_1492bb5c0 body=59 status=ok
// SIG undefined FUN_1492bb5c0(void)

undefined8 FUN_1492bb5c0(longlong *param_1)

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



// FUNCTION 1492bb6e6 FUN_1492bb6e6 body=59 status=ok
// SIG undefined FUN_1492bb6e6(void)

undefined8 FUN_1492bb6e6(longlong *param_1)

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



// FUNCTION 1492bb7fe FUN_1492bb7fe body=54 status=ok
// SIG undefined FUN_1492bb7fe(void)

undefined1 FUN_1492bb7fe(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1492bb968(param_2,param_3);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 1492bb85c FUN_1492bb85c body=59 status=ok
// SIG undefined FUN_1492bb85c(void)

undefined8 FUN_1492bb85c(longlong *param_1)

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



// FUNCTION 1492bb8a2 FUN_1492bb8a2 body=34 status=ok
// SIG undefined FUN_1492bb8a2(void)

void FUN_1492bb8a2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_1492bb912(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 1492bb912 FUN_1492bb912 body=86 status=ok
// SIG undefined FUN_1492bb912(void)

void FUN_1492bb912(longlong *param_1)

{
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_1474ff2bc(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1492bb968 FUN_1492bb968 body=82 status=ok
// SIG undefined FUN_1492bb968(void)

longlong FUN_1492bb968(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_1492bb9ba();
  FUN_1492ad734(param_1 + 0x10,param_2 + 0x10);
  FUN_14054c6c4(param_1 + 0x20,param_2 + 0x20);
  FUN_144a67f5c(param_1 + 0x30,param_2 + 0x30);
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  return param_1;
}



// FUNCTION 1492bb9ba FUN_1492bb9ba body=95 status=ok
// SIG undefined FUN_1492bb9ba(void)

undefined8 * FUN_1492bb9ba(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1474ff2bc(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1492bba1a(param_1,iVar1);
      FUN_1492bba8c(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1492bba1a FUN_1492bba1a body=114 status=ok
// SIG undefined FUN_1492bba1a(void)

void FUN_1492bba1a(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0xe0,0x10);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 5;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0xe0,0x10);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1492bba8c FUN_1492bba8c body=175 status=ok
// SIG undefined FUN_1492bba8c(void)

void FUN_1492bba8c(longlong param_1,void *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = (undefined8 *)(param_1 + 200);
    do {
      memcpy(puVar2 + -0x19,param_2,0xc4);
      *puVar2 = 0;
      iVar1 = *(int *)((longlong)param_2 + 0xd0);
      _Src = *(void **)((longlong)param_2 + 200);
      *(int *)(puVar2 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
      }
      else {
        FUN_144a06ca8(puVar2,iVar1,0);
        memcpy((void *)*puVar2,_Src,(longlong)iVar1 << 2);
      }
      puVar2[2] = *(undefined8 *)((longlong)param_2 + 0xd8);
      param_2 = (void *)((longlong)param_2 + 0xe0);
      puVar2 = puVar2 + 0x1c;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1492bbb70 FUN_1492bbb70 body=180 status=ok
// SIG undefined FUN_1492bbb70(void)

undefined8 FUN_1492bbb70(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      lVar1 = param_2 + lVar3;
      lVar2 = param_3 + lVar3;
      FUN_1491c05d4(param_2 + lVar3 + 0x10,param_3 + lVar3 + 0x10);
      memcpy((void *)(lVar1 + 0x1f0),(void *)(lVar2 + 0x1f0),0x84);
      FUN_1492bbe4c(lVar1 + 0x278,lVar2 + 0x278);
      *(undefined1 *)(param_2 + lVar3 + 0x288) = *(undefined1 *)(param_3 + lVar3 + 0x288);
      FUN_1492bb968(lVar1 + 0x290,lVar2 + 0x290);
      lVar3 = lVar3 + 0x2f0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492bbc4c FUN_1492bbc4c body=59 status=ok
// SIG undefined FUN_1492bbc4c(void)

undefined8 FUN_1492bbc4c(longlong *param_1)

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



// FUNCTION 1492bbc98 FUN_1492bbc98 body=40 status=ok
// SIG undefined FUN_1492bbc98(void)

void FUN_1492bbc98(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2f0) == '\x01') {
    FUN_1492bbe02(param_2);
    *(undefined1 *)(param_2 + 0x2f0) = 0;
  }
  return;
}



// FUNCTION 1492bbd0e FUN_1492bbd0e body=205 status=ok
// SIG undefined FUN_1492bbd0e(void)

undefined8 * FUN_1492bbd0e(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_1 + 2);
  *param_1 = &PTR_FUN_14bbff730;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d4) = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x2dc) = 0xffff;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x40;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x4c] = &DAT_3f8000003f800000;
  *(undefined4 *)(param_1 + 0x4d) = 10;
  *(undefined1 *)((longlong)param_1 + 0x26c) = 1;
  *(undefined1 *)(param_1 + 0x51) = 1;
  *(undefined4 *)(param_1 + 0x4e) = 0x41f00000;
  return param_1;
}



// FUNCTION 1492bbddc FUN_1492bbddc body=38 status=ok
// SIG undefined FUN_1492bbddc(void)

undefined8 FUN_1492bbddc(undefined8 param_1,int param_2)

{
  FUN_1492bbe02();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492bbe02 FUN_1492bbe02 body=74 status=ok
// SIG undefined FUN_1492bbe02(void)

void FUN_1492bbe02(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bbff730;
  FUN_1492bb912(param_1 + 0x52);
  if (param_1[0x4f] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  return;
}



// FUNCTION 1492bbe4c FUN_1492bbe4c body=89 status=ok
// SIG undefined FUN_1492bbe4c(void)

undefined8 * FUN_1492bbe4c(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1492bbea6(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 1492bbea6 FUN_1492bbea6 body=115 status=ok
// SIG undefined FUN_1492bbea6(void)

void FUN_1492bbea6(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc,4);
    iVar2 = (int)(uVar1 / 0xc);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xc,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1492bbf4e FUN_1492bbf4e body=63 status=ok
// SIG undefined FUN_1492bbf4e(void)

undefined1 FUN_1492bbf4e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1492bc1c8(param_2,param_3);
    param_3 = param_3 + 0x2f0;
    param_2 = param_2 + 0x2f0;
  }
  return 1;
}



// FUNCTION 1492bbfb6 FUN_1492bbfb6 body=59 status=ok
// SIG undefined FUN_1492bbfb6(void)

undefined8 FUN_1492bbfb6(longlong *param_1)

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



// FUNCTION 1492bc002 FUN_1492bc002 body=40 status=ok
// SIG undefined FUN_1492bc002(void)

void FUN_1492bc002(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2f0) == '\x01') {
    FUN_1492bc16c(param_2);
    *(undefined1 *)(param_2 + 0x2f0) = 0;
  }
  return;
}



// FUNCTION 1492bc078 FUN_1492bc078 body=205 status=ok
// SIG undefined FUN_1492bc078(void)

undefined8 * FUN_1492bc078(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_1 + 2);
  *param_1 = &PTR_FUN_14bbff920;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d4) = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x2dc) = 0xffff;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x40;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x4c] = &DAT_3f8000003f800000;
  *(undefined4 *)(param_1 + 0x4d) = 10;
  *(undefined1 *)((longlong)param_1 + 0x26c) = 1;
  *(undefined1 *)(param_1 + 0x51) = 1;
  *(undefined4 *)(param_1 + 0x4e) = 0x41f00000;
  return param_1;
}



// FUNCTION 1492bc146 FUN_1492bc146 body=38 status=ok
// SIG undefined FUN_1492bc146(void)

undefined8 FUN_1492bc146(undefined8 param_1,int param_2)

{
  FUN_1492bc16c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492bc16c FUN_1492bc16c body=91 status=ok
// SIG undefined FUN_1492bc16c(void)

void FUN_1492bc16c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bbff920;
  FUN_1492bb912(param_1 + 0x52);
  if (param_1[0x4f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  return;
}



// FUNCTION 1492bc1c8 FUN_1492bc1c8 body=141 status=ok
// SIG undefined FUN_1492bc1c8(void)

longlong FUN_1492bc1c8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_1491c05d4(param_1 + 0x10,param_2 + 0x10);
  FUN_1444888de(param_1 + 0x1f0,param_2 + 0x1f0);
  puVar2 = (undefined8 *)(param_2 + 0x200);
  puVar3 = (undefined8 *)(param_1 + 0x200);
  for (lVar1 = 0xe; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x270) = *(undefined4 *)(param_2 + 0x270);
  FUN_149266d64(param_1 + 0x278,param_2 + 0x278);
  *(undefined1 *)(param_1 + 0x288) = *(undefined1 *)(param_2 + 0x288);
  FUN_1492bb968(param_1 + 0x290,param_2 + 0x290);
  return param_1;
}



// FUNCTION 1492bc28a FUN_1492bc28a body=63 status=ok
// SIG undefined FUN_1492bc28a(void)

undefined1 FUN_1492bc28a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1492bc3b4(param_2,param_3);
    param_3 = param_3 + 0x2f0;
    param_2 = param_2 + 0x2f0;
  }
  return 1;
}



// FUNCTION 1492bc2f2 FUN_1492bc2f2 body=59 status=ok
// SIG undefined FUN_1492bc2f2(void)

undefined8 FUN_1492bc2f2(longlong *param_1)

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



// FUNCTION 1492bc33e FUN_1492bc33e body=40 status=ok
// SIG undefined FUN_1492bc33e(void)

void FUN_1492bc33e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2f0) == '\x01') {
    FUN_149266e90(param_2);
    *(undefined1 *)(param_2 + 0x2f0) = 0;
  }
  return;
}



// FUNCTION 1492bc3b4 FUN_1492bc3b4 body=141 status=ok
// SIG undefined FUN_1492bc3b4(void)

longlong FUN_1492bc3b4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_1491c05d4(param_1 + 0x10,param_2 + 0x10);
  FUN_1444888de(param_1 + 0x1f0,param_2 + 0x1f0);
  puVar2 = (undefined8 *)(param_2 + 0x200);
  puVar3 = (undefined8 *)(param_1 + 0x200);
  for (lVar1 = 0xe; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x270) = *(undefined4 *)(param_2 + 0x270);
  FUN_149266d64(param_1 + 0x278,param_2 + 0x278);
  *(undefined1 *)(param_1 + 0x288) = *(undefined1 *)(param_2 + 0x288);
  FUN_1492bb968(param_1 + 0x290,param_2 + 0x290);
  return param_1;
}



// FUNCTION 1492bc442 FUN_1492bc442 body=38 status=ok
// SIG undefined FUN_1492bc442(void)

undefined8 FUN_1492bc442(undefined8 param_1,int param_2)

{
  FUN_149266e90();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492bc516 FUN_1492bc516 body=59 status=ok
// SIG undefined FUN_1492bc516(void)

undefined8 FUN_1492bc516(longlong *param_1)

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



// FUNCTION 1492bc606 FUN_1492bc606 body=54 status=ok
// SIG undefined FUN_1492bc606(void)

undefined1 FUN_1492bc606(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1492bc71a(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 1492bc664 FUN_1492bc664 body=59 status=ok
// SIG undefined FUN_1492bc664(void)

undefined8 FUN_1492bc664(longlong *param_1)

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



// FUNCTION 1492bc6aa FUN_1492bc6aa body=34 status=ok
// SIG undefined FUN_1492bc6aa(void)

void FUN_1492bc6aa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_145dce7c0(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 1492bc71a FUN_1492bc71a body=82 status=ok
// SIG undefined FUN_1492bc71a(void)

longlong FUN_1492bc71a(longlong param_1,longlong param_2)

{
  FUN_1492ad734();
  FUN_14054c6c4(param_1 + 0x10,param_2 + 0x10);
  FUN_14054c6c4(param_1 + 0x20,param_2 + 0x20);
  FUN_144a67f5c(param_1 + 0x30,param_2 + 0x30);
  FUN_144756208(param_1 + 0x40,param_2 + 0x40);
  return param_1;
}



// FUNCTION 1492bc76e FUN_1492bc76e body=119 status=ok
// SIG undefined FUN_1492bc76e(void)

void FUN_1492bc76e(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbfffc0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  *(undefined1 *)(param_2 + 0x42) = 0;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x46] = 0;
  param_2[0x47] = 0;
  param_2[0x48] = 0;
  param_2[0x49] = 0;
  param_2[0x4a] = 0;
  param_2[0x4b] = 0;
  param_2[0x4c] = 0;
  param_2[0x4d] = 0;
  *(undefined4 *)((longlong)param_2 + 0x214) = 0x3f800000;
  *(undefined1 *)(param_2 + 0x43) = 1;
  return;
}



// FUNCTION 1492bc7e6 FUN_1492bc7e6 body=119 status=ok
// SIG undefined FUN_1492bc7e6(void)

void FUN_1492bc7e6(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbfffc0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  *(undefined1 *)(param_2 + 0x42) = 0;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x46] = 0;
  param_2[0x47] = 0;
  param_2[0x48] = 0;
  param_2[0x49] = 0;
  param_2[0x4a] = 0;
  param_2[0x4b] = 0;
  param_2[0x4c] = 0;
  param_2[0x4d] = 0;
  *(undefined4 *)((longlong)param_2 + 0x214) = 0x3f800000;
  *(undefined1 *)(param_2 + 0x43) = 1;
  return;
}



// FUNCTION 1492bc882 FUN_1492bc882 body=189 status=ok
// SIG undefined FUN_1492bc882(void)

undefined8 FUN_1492bc882(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      lVar1 = param_2 + lVar6;
      lVar2 = param_3 + lVar6;
      FUN_1491c05d4(lVar1 + 0x10,lVar2 + 0x10);
      uVar3 = *(undefined4 *)(lVar2 + 500);
      uVar4 = *(undefined4 *)(lVar2 + 0x1f8);
      uVar5 = *(undefined4 *)(lVar2 + 0x1fc);
      *(undefined4 *)(lVar1 + 0x1f0) = *(undefined4 *)(lVar2 + 0x1f0);
      *(undefined4 *)(lVar1 + 500) = uVar3;
      *(undefined4 *)(lVar1 + 0x1f8) = uVar4;
      *(undefined4 *)(lVar1 + 0x1fc) = uVar5;
      FUN_149268964(param_2 + lVar6 + 0x200,param_3 + lVar6 + 0x200);
      *(undefined8 *)(lVar1 + 0x210) = *(undefined8 *)(lVar2 + 0x210);
      *(undefined1 *)(lVar1 + 0x218) = *(undefined1 *)(lVar2 + 0x218);
      FUN_1492bc71a(param_2 + lVar6 + 0x220,param_3 + lVar6 + 0x220);
      lVar6 = lVar6 + 0x270;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492bc968 FUN_1492bc968 body=59 status=ok
// SIG undefined FUN_1492bc968(void)

undefined8 FUN_1492bc968(longlong *param_1)

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



// FUNCTION 1492bc9b4 FUN_1492bc9b4 body=40 status=ok
// SIG undefined FUN_1492bc9b4(void)

void FUN_1492bc9b4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x270) == '\x01') {
    FUN_145dce774(param_2);
    *(undefined1 *)(param_2 + 0x270) = 0;
  }
  return;
}



// FUNCTION 1492bca2a FUN_1492bca2a body=38 status=ok
// SIG undefined FUN_1492bca2a(void)

undefined8 FUN_1492bca2a(undefined8 param_1,int param_2)

{
  FUN_145dce774();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492bca52 FUN_1492bca52 body=112 status=ok
// SIG undefined FUN_1492bca52(void)

void FUN_1492bca52(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bc001b0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  *(undefined1 *)(param_2 + 0x42) = 0;
  param_2[0x43] = 0;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x46] = 0;
  param_2[0x47] = 0;
  param_2[0x48] = 0;
  param_2[0x49] = 0;
  param_2[0x4a] = 0;
  param_2[0x4b] = 0;
  param_2[0x4c] = 0;
  *(undefined4 *)((longlong)param_2 + 0x214) = 0x3f800000;
  return;
}



// FUNCTION 1492bcac2 FUN_1492bcac2 body=112 status=ok
// SIG undefined FUN_1492bcac2(void)

void FUN_1492bcac2(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bc001b0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  *(undefined1 *)(param_2 + 0x42) = 0;
  param_2[0x43] = 0;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x46] = 0;
  param_2[0x47] = 0;
  param_2[0x48] = 0;
  param_2[0x49] = 0;
  param_2[0x4a] = 0;
  param_2[0x4b] = 0;
  param_2[0x4c] = 0;
  *(undefined4 *)((longlong)param_2 + 0x214) = 0x3f800000;
  return;
}



// FUNCTION 1492bcb56 FUN_1492bcb56 body=63 status=ok
// SIG undefined FUN_1492bcb56(void)

undefined1 FUN_1492bcb56(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1492bcd02(param_2,param_3);
    param_3 = param_3 + 0x270;
    param_2 = param_2 + 0x270;
  }
  return 1;
}



// FUNCTION 1492bcbbe FUN_1492bcbbe body=59 status=ok
// SIG undefined FUN_1492bcbbe(void)

undefined8 FUN_1492bcbbe(longlong *param_1)

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



// FUNCTION 1492bcc0a FUN_1492bcc0a body=40 status=ok
// SIG undefined FUN_1492bcc0a(void)

void FUN_1492bcc0a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x270) == '\x01') {
    FUN_1492bcca6(param_2);
    *(undefined1 *)(param_2 + 0x270) = 0;
  }
  return;
}



// FUNCTION 1492bcc80 FUN_1492bcc80 body=38 status=ok
// SIG undefined FUN_1492bcc80(void)

undefined8 FUN_1492bcc80(undefined8 param_1,int param_2)

{
  FUN_1492bcca6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492bcca6 FUN_1492bcca6 body=91 status=ok
// SIG undefined FUN_1492bcca6(void)

void FUN_1492bcca6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc001b0;
  FUN_145dce7c0(param_1 + 0x43);
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  return;
}



// FUNCTION 1492bcd02 FUN_1492bcd02 body=103 status=ok
// SIG undefined FUN_1492bcd02(void)

longlong FUN_1492bcd02(longlong param_1,longlong param_2)

{
  FUN_1491c05d4(param_1 + 0x10,param_2 + 0x10);
  FUN_1444888de(param_1 + 0x1f0,param_2 + 0x1f0);
  FUN_149268964(param_1 + 0x200,param_2 + 0x200);
  *(undefined8 *)(param_1 + 0x210) = *(undefined8 *)(param_2 + 0x210);
  FUN_1492bc71a(param_1 + 0x218,param_2 + 0x218);
  return param_1;
}



// FUNCTION 1492bcd6a FUN_1492bcd6a body=112 status=ok
// SIG undefined FUN_1492bcd6a(void)

void FUN_1492bcd6a(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bc003a0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  *(undefined1 *)(param_2 + 0x42) = 0;
  param_2[0x43] = 0;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x46] = 0;
  param_2[0x47] = 0;
  param_2[0x48] = 0;
  param_2[0x49] = 0;
  param_2[0x4a] = 0;
  param_2[0x4b] = 0;
  param_2[0x4c] = 0;
  *(undefined4 *)((longlong)param_2 + 0x214) = 0x3f800000;
  return;
}



// FUNCTION 1492bcdda FUN_1492bcdda body=112 status=ok
// SIG undefined FUN_1492bcdda(void)

void FUN_1492bcdda(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bc003a0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  *(undefined1 *)(param_2 + 0x42) = 0;
  param_2[0x43] = 0;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x46] = 0;
  param_2[0x47] = 0;
  param_2[0x48] = 0;
  param_2[0x49] = 0;
  param_2[0x4a] = 0;
  param_2[0x4b] = 0;
  param_2[0x4c] = 0;
  *(undefined4 *)((longlong)param_2 + 0x214) = 0x3f800000;
  return;
}



// FUNCTION 1492bce6e FUN_1492bce6e body=63 status=ok
// SIG undefined FUN_1492bce6e(void)

undefined1 FUN_1492bce6e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1492bcf98(param_2,param_3);
    param_3 = param_3 + 0x270;
    param_2 = param_2 + 0x270;
  }
  return 1;
}



// FUNCTION 1492bced6 FUN_1492bced6 body=59 status=ok
// SIG undefined FUN_1492bced6(void)

undefined8 FUN_1492bced6(longlong *param_1)

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



// FUNCTION 1492bcf22 FUN_1492bcf22 body=40 status=ok
// SIG undefined FUN_1492bcf22(void)

void FUN_1492bcf22(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x270) == '\x01') {
    FUN_149268a92(param_2);
    *(undefined1 *)(param_2 + 0x270) = 0;
  }
  return;
}



// FUNCTION 1492bcf98 FUN_1492bcf98 body=103 status=ok
// SIG undefined FUN_1492bcf98(void)

longlong FUN_1492bcf98(longlong param_1,longlong param_2)

{
  FUN_1491c05d4(param_1 + 0x10,param_2 + 0x10);
  FUN_1444888de(param_1 + 0x1f0,param_2 + 0x1f0);
  FUN_149268964(param_1 + 0x200,param_2 + 0x200);
  *(undefined8 *)(param_1 + 0x210) = *(undefined8 *)(param_2 + 0x210);
  FUN_1492bc71a(param_1 + 0x218,param_2 + 0x218);
  return param_1;
}



// FUNCTION 1492bd000 FUN_1492bd000 body=38 status=ok
// SIG undefined FUN_1492bd000(void)

undefined8 FUN_1492bd000(undefined8 param_1,int param_2)

{
  FUN_149268a92();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492bd08c FUN_1492bd08c body=91 status=ok
// SIG undefined FUN_1492bd08c(void)

undefined1 FUN_1492bd08c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      FUN_1492bd200(param_2 + -0x10,param_3 + -0x10);
      FUN_1492ad734(param_2,param_3);
      uVar1 = *(undefined4 *)(param_3 + 0x14);
      uVar2 = *(undefined4 *)(param_3 + 0x18);
      uVar3 = *(undefined4 *)(param_3 + 0x1c);
      uVar4 = *(undefined4 *)(param_3 + 0x20);
      uVar5 = *(undefined4 *)(param_3 + 0x24);
      uVar6 = *(undefined4 *)(param_3 + 0x28);
      uVar7 = *(undefined4 *)(param_3 + 0x2c);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      *(undefined4 *)(param_2 + 0x14) = uVar1;
      *(undefined4 *)(param_2 + 0x18) = uVar2;
      *(undefined4 *)(param_2 + 0x1c) = uVar3;
      *(undefined4 *)(param_2 + 0x20) = uVar4;
      *(undefined4 *)(param_2 + 0x24) = uVar5;
      *(undefined4 *)(param_2 + 0x28) = uVar6;
      *(undefined4 *)(param_2 + 0x2c) = uVar7;
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492bd110 FUN_1492bd110 body=59 status=ok
// SIG undefined FUN_1492bd110(void)

undefined8 FUN_1492bd110(longlong *param_1)

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



// FUNCTION 1492bd156 FUN_1492bd156 body=34 status=ok
// SIG undefined FUN_1492bd156(void)

void FUN_1492bd156(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_1492bd1c6(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1492bd1c6 FUN_1492bd1c6 body=58 status=ok
// SIG undefined FUN_1492bd1c6(void)

void FUN_1492bd1c6(longlong *param_1)

{
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_145af3853(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1492bd200 FUN_1492bd200 body=95 status=ok
// SIG undefined FUN_1492bd200(void)

undefined8 * FUN_1492bd200(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145af3853(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1492bd260(param_1,iVar1);
      FUN_1492bd2d3(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1492bd260 FUN_1492bd260 body=115 status=ok
// SIG undefined FUN_1492bd260(void)

void FUN_1492bd260(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x50,8);
    iVar2 = (int)(uVar1 / 0x50);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x50,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1492bd2d3 FUN_1492bd2d3 body=151 status=ok
// SIG undefined FUN_1492bd2d3(void)

void FUN_1492bd2d3(longlong param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
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
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 *puVar17;
  
  if (param_3 != 0) {
    puVar17 = (undefined8 *)(param_1 + 0x40);
    do {
      uVar2 = *param_2;
      uVar3 = param_2[1];
      uVar4 = param_2[2];
      uVar5 = param_2[3];
      uVar6 = param_2[4];
      uVar7 = param_2[5];
      uVar8 = param_2[6];
      uVar9 = param_2[7];
      uVar10 = param_2[8];
      uVar11 = param_2[9];
      uVar12 = param_2[10];
      uVar13 = param_2[0xb];
      uVar14 = param_2[0xd];
      uVar15 = param_2[0xe];
      uVar16 = param_2[0xf];
      *(undefined4 *)(puVar17 + -2) = param_2[0xc];
      *(undefined4 *)((longlong)puVar17 + -0xc) = uVar14;
      *(undefined4 *)(puVar17 + -1) = uVar15;
      *(undefined4 *)((longlong)puVar17 + -4) = uVar16;
      *(undefined4 *)(puVar17 + -4) = uVar10;
      *(undefined4 *)((longlong)puVar17 + -0x1c) = uVar11;
      *(undefined4 *)(puVar17 + -3) = uVar12;
      *(undefined4 *)((longlong)puVar17 + -0x14) = uVar13;
      *(undefined4 *)(puVar17 + -6) = uVar6;
      *(undefined4 *)((longlong)puVar17 + -0x2c) = uVar7;
      *(undefined4 *)(puVar17 + -5) = uVar8;
      *(undefined4 *)((longlong)puVar17 + -0x24) = uVar9;
      *(undefined4 *)(puVar17 + -8) = uVar2;
      *(undefined4 *)((longlong)puVar17 + -0x3c) = uVar3;
      *(undefined4 *)(puVar17 + -7) = uVar4;
      *(undefined4 *)((longlong)puVar17 + -0x34) = uVar5;
      *puVar17 = 0;
      iVar1 = param_2[0x12];
      _Src = *(void **)(param_2 + 0x10);
      *(int *)(puVar17 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar17 + 0xc) = 0;
      }
      else {
        FUN_144a06ca8(puVar17,iVar1,0);
        memcpy((void *)*puVar17,_Src,(longlong)iVar1 << 2);
      }
      param_2 = param_2 + 0x14;
      puVar17 = puVar17 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1492bd3a0 FUN_1492bd3a0 body=230 status=ok
// SIG undefined FUN_1492bd3a0(void)

undefined8 FUN_1492bd3a0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong lVar15;
  
  if (param_4 != 0) {
    lVar15 = 0;
    do {
      lVar1 = param_2 + lVar15;
      lVar2 = param_2 + lVar15;
      lVar3 = param_3 + lVar15;
      lVar4 = param_3 + lVar15;
      FUN_1491c05d4(lVar2 + 0x10,lVar4 + 0x10);
      puVar13 = (undefined8 *)(lVar3 + 0x1f0);
      puVar14 = (undefined8 *)(lVar1 + 0x1f0);
      for (lVar12 = 0x10; lVar12 != 0; lVar12 = lVar12 + -1) {
        *puVar14 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar14 = puVar14 + 1;
      }
      FUN_1492bd200(lVar1 + 0x270,lVar3 + 0x270);
      FUN_1492ad734(lVar1 + 0x280,lVar3 + 0x280);
      uVar5 = *(undefined4 *)(lVar4 + 0x294);
      uVar6 = *(undefined4 *)(lVar4 + 0x298);
      uVar7 = *(undefined4 *)(lVar4 + 0x29c);
      uVar8 = *(undefined4 *)(lVar4 + 0x2a0);
      uVar9 = *(undefined4 *)(lVar4 + 0x2a4);
      uVar10 = *(undefined4 *)(lVar4 + 0x2a8);
      uVar11 = *(undefined4 *)(lVar4 + 0x2ac);
      *(undefined4 *)(lVar2 + 0x290) = *(undefined4 *)(lVar4 + 0x290);
      *(undefined4 *)(lVar2 + 0x294) = uVar5;
      *(undefined4 *)(lVar2 + 0x298) = uVar6;
      *(undefined4 *)(lVar2 + 0x29c) = uVar7;
      *(undefined4 *)(lVar2 + 0x2a0) = uVar8;
      *(undefined4 *)(lVar2 + 0x2a4) = uVar9;
      *(undefined4 *)(lVar2 + 0x2a8) = uVar10;
      *(undefined4 *)(lVar2 + 0x2ac) = uVar11;
      *(undefined1 *)(lVar2 + 0x2b0) = *(undefined1 *)(lVar4 + 0x2b0);
      lVar15 = lVar15 + 0x2c0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492bd4ae FUN_1492bd4ae body=59 status=ok
// SIG undefined FUN_1492bd4ae(void)

undefined8 FUN_1492bd4ae(longlong *param_1)

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



// FUNCTION 1492bd4fa FUN_1492bd4fa body=73 status=ok
// SIG undefined FUN_1492bd4fa(void)

void FUN_1492bd4fa(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    *param_2 = &PTR_FUN_14bc006f0;
    FUN_1492bd1c6(param_2 + 0x4e);
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 1492bd592 FUN_1492bd592 body=174 status=ok
// SIG undefined FUN_1492bd592(void)

undefined8 * FUN_1492bd592(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_1 + 2);
  *param_1 = &PTR_FUN_14bc006f0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x294) = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined1 *)(param_1 + 0x52) = 0;
  *(undefined2 *)((longlong)param_1 + 0x29c) = 0xffff;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  param_1[0x4c] = &DAT_3f8000003f800000;
  *(undefined4 *)((longlong)param_1 + 0x26c) = 10;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x40;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_1 + 0x4d) = 1;
  *(undefined1 *)(param_1 + 0x56) = 1;
  return param_1;
}



// FUNCTION 1492bd640 FUN_1492bd640 body=74 status=ok
// SIG undefined FUN_1492bd640(void)

undefined8 * FUN_1492bd640(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bc006f0;
  FUN_1492bd1c6(param_1 + 0x4e);
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492bd6c0 FUN_1492bd6c0 body=63 status=ok
// SIG undefined FUN_1492bd6c0(void)

undefined1 FUN_1492bd6c0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1492bd908(param_2,param_3);
    param_3 = param_3 + 0x2c0;
    param_2 = param_2 + 0x2c0;
  }
  return 1;
}



// FUNCTION 1492bd728 FUN_1492bd728 body=59 status=ok
// SIG undefined FUN_1492bd728(void)

undefined8 FUN_1492bd728(longlong *param_1)

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



// FUNCTION 1492bd774 FUN_1492bd774 body=40 status=ok
// SIG undefined FUN_1492bd774(void)

void FUN_1492bd774(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2c0) == '\x01') {
    FUN_1492bd8be(param_2);
    *(undefined1 *)(param_2 + 0x2c0) = 0;
  }
  return;
}



// FUNCTION 1492bd7ea FUN_1492bd7ea body=174 status=ok
// SIG undefined FUN_1492bd7ea(void)

undefined8 * FUN_1492bd7ea(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_1 + 2);
  *param_1 = &PTR_FUN_14bc008e0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x294) = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined1 *)(param_1 + 0x52) = 0;
  *(undefined2 *)((longlong)param_1 + 0x29c) = 0xffff;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  param_1[0x4c] = &DAT_3f8000003f800000;
  *(undefined1 *)(param_1 + 0x4d) = 1;
  *(undefined4 *)((longlong)param_1 + 0x26c) = 10;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x40;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_1 + 0x56) = 1;
  return param_1;
}



// FUNCTION 1492bd898 FUN_1492bd898 body=38 status=ok
// SIG undefined FUN_1492bd898(void)

undefined8 FUN_1492bd898(undefined8 param_1,int param_2)

{
  FUN_1492bd8be();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492bd8be FUN_1492bd8be body=74 status=ok
// SIG undefined FUN_1492bd8be(void)

void FUN_1492bd8be(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc008e0;
  FUN_1492bd1c6(param_1 + 0x4e);
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  return;
}



// FUNCTION 1492bd908 FUN_1492bd908 body=155 status=ok
// SIG undefined FUN_1492bd908(void)

longlong FUN_1492bd908(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  FUN_1491c05d4(param_1 + 0x10,param_2 + 0x10);
  FUN_1444888de(param_1 + 0x1f0,param_2 + 0x1f0);
  puVar5 = (undefined8 *)(param_2 + 0x200);
  puVar6 = (undefined8 *)(param_1 + 0x200);
  for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_1492bd200(param_1 + 0x270,param_2 + 0x270);
  FUN_1492ad734(param_1 + 0x280,param_2 + 0x280);
  uVar1 = *(undefined8 *)(param_2 + 0x298);
  uVar2 = *(undefined8 *)(param_2 + 0x2a0);
  uVar3 = *(undefined8 *)(param_2 + 0x2a8);
  *(undefined8 *)(param_1 + 0x290) = *(undefined8 *)(param_2 + 0x290);
  *(undefined8 *)(param_1 + 0x298) = uVar1;
  *(undefined8 *)(param_1 + 0x2a0) = uVar2;
  *(undefined8 *)(param_1 + 0x2a8) = uVar3;
  *(undefined1 *)(param_1 + 0x2b0) = *(undefined1 *)(param_2 + 0x2b0);
  return param_1;
}



// FUNCTION 1492bd9d8 FUN_1492bd9d8 body=63 status=ok
// SIG undefined FUN_1492bd9d8(void)

undefined1 FUN_1492bd9d8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1492bdb02(param_2,param_3);
    param_3 = param_3 + 0x2c0;
    param_2 = param_2 + 0x2c0;
  }
  return 1;
}



// FUNCTION 1492bda40 FUN_1492bda40 body=59 status=ok
// SIG undefined FUN_1492bda40(void)

undefined8 FUN_1492bda40(longlong *param_1)

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



// FUNCTION 1492bda8c FUN_1492bda8c body=40 status=ok
// SIG undefined FUN_1492bda8c(void)

void FUN_1492bda8c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2c0) == '\x01') {
    FUN_14926a114(param_2);
    *(undefined1 *)(param_2 + 0x2c0) = 0;
  }
  return;
}



// FUNCTION 1492bdb02 FUN_1492bdb02 body=155 status=ok
// SIG undefined FUN_1492bdb02(void)

longlong FUN_1492bdb02(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  FUN_1491c05d4(param_1 + 0x10,param_2 + 0x10);
  FUN_1444888de(param_1 + 0x1f0,param_2 + 0x1f0);
  puVar5 = (undefined8 *)(param_2 + 0x200);
  puVar6 = (undefined8 *)(param_1 + 0x200);
  for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_1492bd200(param_1 + 0x270,param_2 + 0x270);
  FUN_1492ad734(param_1 + 0x280,param_2 + 0x280);
  uVar1 = *(undefined8 *)(param_2 + 0x298);
  uVar2 = *(undefined8 *)(param_2 + 0x2a0);
  uVar3 = *(undefined8 *)(param_2 + 0x2a8);
  *(undefined8 *)(param_1 + 0x290) = *(undefined8 *)(param_2 + 0x290);
  *(undefined8 *)(param_1 + 0x298) = uVar1;
  *(undefined8 *)(param_1 + 0x2a0) = uVar2;
  *(undefined8 *)(param_1 + 0x2a8) = uVar3;
  *(undefined1 *)(param_1 + 0x2b0) = *(undefined1 *)(param_2 + 0x2b0);
  return param_1;
}



// FUNCTION 1492bdb9e FUN_1492bdb9e body=38 status=ok
// SIG undefined FUN_1492bdb9e(void)

undefined8 FUN_1492bdb9e(undefined8 param_1,int param_2)

{
  FUN_14926a114();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492bdc72 FUN_1492bdc72 body=59 status=ok
// SIG undefined FUN_1492bdc72(void)

undefined8 FUN_1492bdc72(longlong *param_1)

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



// FUNCTION 1492bdd14 FUN_1492bdd14 body=85 status=ok
// SIG undefined FUN_1492bdd14(void)

void FUN_1492bdd14(undefined8 param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_2 + 0x44) = 0;
  *(undefined4 *)(param_2 + 0x48) = 0;
  *(undefined4 *)(param_2 + 0x4c) = 0x3ff00000;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 4) = 0x3f800000;
  *(undefined1 **)(param_2 + 8) = &DAT_3f8000003f800000;
  *(undefined8 *)(param_2 + 0x10) = 0x3f80000000000000;
  *(undefined8 *)(param_2 + 0x18) = 0x3f800000;
  *(undefined8 *)(param_2 + 0x20) = 0x3f80000000000000;
  puVar2 = &DAT_14c846480;
  puVar3 = (undefined8 *)(param_2 + 0x30);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 1492bdd6a FUN_1492bdd6a body=85 status=ok
// SIG undefined FUN_1492bdd6a(void)

void FUN_1492bdd6a(undefined8 param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_2 + 0x44) = 0;
  *(undefined4 *)(param_2 + 0x48) = 0;
  *(undefined4 *)(param_2 + 0x4c) = 0x3ff00000;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 4) = 0x3f800000;
  *(undefined1 **)(param_2 + 8) = &DAT_3f8000003f800000;
  *(undefined8 *)(param_2 + 0x10) = 0x3f80000000000000;
  *(undefined8 *)(param_2 + 0x18) = 0x3f800000;
  *(undefined8 *)(param_2 + 0x20) = 0x3f80000000000000;
  puVar2 = &DAT_14c846480;
  puVar3 = (undefined8 *)(param_2 + 0x30);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 1492bddd8 FUN_1492bddd8 body=68 status=ok
// SIG undefined FUN_1492bddd8(void)

undefined8 FUN_1492bddd8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x90);
      lVar1 = lVar1 + 0x90;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492bde44 FUN_1492bde44 body=59 status=ok
// SIG undefined FUN_1492bde44(void)

undefined8 FUN_1492bde44(longlong *param_1)

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



// FUNCTION 1492bdf40 FUN_1492bdf40 body=63 status=ok
// SIG undefined FUN_1492bdf40(void)

undefined1 FUN_1492bdf40(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1492be100(param_2,param_3);
    param_3 = param_3 + 0x98;
    param_2 = param_2 + 0x98;
  }
  return 1;
}



// FUNCTION 1492bdfa8 FUN_1492bdfa8 body=59 status=ok
// SIG undefined FUN_1492bdfa8(void)

undefined8 FUN_1492bdfa8(longlong *param_1)

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



// FUNCTION 1492bdff4 FUN_1492bdff4 body=40 status=ok
// SIG undefined FUN_1492bdff4(void)

void FUN_1492bdff4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x98) == '\x01') {
    FUN_1492be06a(param_2);
    *(undefined1 *)(param_2 + 0x98) = 0;
  }
  return;
}



// FUNCTION 1492be06a FUN_1492be06a body=149 status=ok
// SIG undefined FUN_1492be06a(void)

void FUN_1492be06a(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1492be100 FUN_1492be100 body=151 status=ok
// SIG undefined FUN_1492be100(void)

undefined4 * FUN_1492be100(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_1405b70a4(param_1 + 2,param_2 + 2);
  FUN_144a67f5c(param_1 + 6,param_2 + 6);
  FUN_1405b70a4(param_1 + 10,param_2 + 10);
  FUN_144a67f5c(param_1 + 0xe,param_2 + 0xe);
  FUN_1492ad734(param_1 + 0x12,param_2 + 0x12);
  FUN_14054c6c4(param_1 + 0x16,param_2 + 0x16);
  FUN_14054c6c4(param_1 + 0x1a,param_2 + 0x1a);
  FUN_144a67f5c(param_1 + 0x1e,param_2 + 0x1e);
  FUN_144756208(param_1 + 0x22,param_2 + 0x22);
  return param_1;
}



// FUNCTION 1492be1cc FUN_1492be1cc body=185 status=ok
// SIG undefined FUN_1492be1cc(void)

undefined8 FUN_1492be1cc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      lVar1 = param_2 + lVar3;
      lVar2 = param_3 + lVar3;
      FUN_1491c05d4(param_2 + lVar3 + 0x10,param_3 + lVar3 + 0x10);
      memcpy((void *)(lVar1 + 0x1f0),(void *)(lVar2 + 0x1f0),200);
      FUN_1492be5ba(lVar1 + 0x2b8,lVar2 + 0x2b8);
      memcpy((void *)(lVar1 + 0x2c8),(void *)(lVar2 + 0x2c8),0xa8);
      FUN_1492be100(lVar1 + 0x370,lVar2 + 0x370);
      lVar3 = lVar3 + 0x410;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492be2ae FUN_1492be2ae body=59 status=ok
// SIG undefined FUN_1492be2ae(void)

undefined8 FUN_1492be2ae(longlong *param_1)

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



// FUNCTION 1492be2fa FUN_1492be2fa body=40 status=ok
// SIG undefined FUN_1492be2fa(void)

void FUN_1492be2fa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x410) == '\x01') {
    FUN_1492be570(param_2);
    *(undefined1 *)(param_2 + 0x410) = 0;
  }
  return;
}



// FUNCTION 1492be370 FUN_1492be370 body=473 status=ok
// SIG undefined FUN_1492be370(void)

undefined8 * FUN_1492be370(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_1 + 2);
  *param_1 = &PTR_FUN_14bc01120;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x6e) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  memset(param_1 + 0x6f,0,0x90);
  param_1[0x42] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x40] = DAT_14c8464e0;
  param_1[0x41] = uVar1;
  param_1[0x45] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x43] = DAT_14c8464e0;
  param_1[0x44] = uVar1;
  uVar1 = DAT_14c8464e8;
  param_1[0x46] = DAT_14c8464e0;
  param_1[0x47] = uVar1;
  param_1[0x48] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x49] = DAT_14c8464e0;
  param_1[0x4a] = uVar1;
  param_1[0x4b] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x4c) = 1;
  *(undefined8 *)((longlong)param_1 + 0x264) = 0x3f80000000000000;
  *(undefined4 *)((longlong)param_1 + 0x26c) = 0xc;
  param_1[0x4e] = 0x3ff0000000000000;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0x54] = DAT_14c8464e0;
  param_1[0x55] = uVar1;
  param_1[0x56] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x59) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2cc) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x5a) = 1;
  uVar12 = uRam000000014c8464d8;
  uVar11 = DAT_14c8464d0;
  uVar10 = DAT_14c8464c8;
  uVar9 = DAT_14c8464c0;
  uVar8 = DAT_14c8464b8;
  uVar7 = DAT_14c8464b0;
  uVar6 = DAT_14c8464a8;
  uVar5 = DAT_14c8464a0;
  uVar4 = DAT_14c846498;
  uVar3 = DAT_14c846490;
  uVar2 = DAT_14c846488;
  uVar1 = DAT_14c846480;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2e4) = 0x3f800000;
  param_1[0x5d] = &DAT_3f8000003f800000;
  param_1[0x5e] = 0x3f80000000000000;
  param_1[0x5f] = 0x3f800000;
  param_1[0x60] = 0x3f80000000000000;
  param_1[0x62] = uVar1;
  param_1[99] = uVar2;
  param_1[100] = uVar3;
  param_1[0x65] = uVar4;
  param_1[0x66] = uVar5;
  param_1[0x67] = uVar6;
  param_1[0x68] = uVar7;
  param_1[0x69] = uVar8;
  param_1[0x6a] = uVar9;
  param_1[0x6b] = uVar10;
  param_1[0x6c] = uVar11;
  param_1[0x6d] = uVar12;
  return param_1;
}



// FUNCTION 1492be54a FUN_1492be54a body=38 status=ok
// SIG undefined FUN_1492be54a(void)

undefined8 FUN_1492be54a(undefined8 param_1,int param_2)

{
  FUN_1492be570();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492be570 FUN_1492be570 body=74 status=ok
// SIG undefined FUN_1492be570(void)

void FUN_1492be570(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc01120;
  FUN_1492be06a(param_1 + 0x6e);
  if (param_1[0x57] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  return;
}



// FUNCTION 1492be5ba FUN_1492be5ba body=89 status=ok
// SIG undefined FUN_1492be5ba(void)

undefined8 * FUN_1492be5ba(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1492be614(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x30);
      }
    }
  }
  return param_1;
}



// FUNCTION 1492be614 FUN_1492be614 body=115 status=ok
// SIG undefined FUN_1492be614(void)

void FUN_1492be614(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,0x10);
    iVar2 = (int)(uVar1 / 0x30);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x30,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}


