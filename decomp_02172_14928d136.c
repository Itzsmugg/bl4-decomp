// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14928d136 FUN_14928d136 body=110 status=ok
// SIG undefined FUN_14928d136(void)

undefined8 FUN_14928d136(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_1491c05d4(param_2 + 0x10 + lVar1,param_3 + 0x10 + lVar1);
      memcpy((void *)(param_2 + 0x1f0 + lVar1),(void *)(param_3 + 0x1f0 + lVar1),0xf1);
      lVar1 = lVar1 + 0x2f0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14928d1cc FUN_14928d1cc body=59 status=ok
// SIG undefined FUN_14928d1cc(void)

undefined8 FUN_14928d1cc(longlong *param_1)

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



// FUNCTION 14928d218 FUN_14928d218 body=49 status=ok
// SIG undefined FUN_14928d218(void)

void FUN_14928d218(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x5e) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x5e) = 0;
  }
  return;
}



// FUNCTION 14928d298 FUN_14928d298 body=152 status=ok
// SIG undefined FUN_14928d298(void)

undefined8 * FUN_14928d298(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_1 + 2);
  *param_1 = &PTR_FUN_14bbd7fd0;
  *(undefined8 *)((longlong)param_1 + 0x26c) = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x50;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x3e;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_1 + 0x4a) = 1;
  *(undefined8 *)((longlong)param_1 + 0x254) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x25c) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x264) = 0x4120000000000000;
  *(undefined1 *)(param_1 + 0x5c) = 1;
  return param_1;
}



// FUNCTION 14928d330 FUN_14928d330 body=52 status=ok
// SIG undefined FUN_14928d330(void)

undefined8 * FUN_14928d330(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14928d39a FUN_14928d39a body=110 status=ok
// SIG undefined FUN_14928d39a(void)

undefined8 FUN_14928d39a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_1491c05d4(param_2 + 0x10 + lVar1,param_3 + 0x10 + lVar1);
      memcpy((void *)(param_2 + 0x1f0 + lVar1),(void *)(param_3 + 0x1f0 + lVar1),0xf1);
      lVar1 = lVar1 + 0x2f0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14928d430 FUN_14928d430 body=59 status=ok
// SIG undefined FUN_14928d430(void)

undefined8 FUN_14928d430(longlong *param_1)

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



// FUNCTION 14928d47c FUN_14928d47c body=49 status=ok
// SIG undefined FUN_14928d47c(void)

void FUN_14928d47c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x5e) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x5e) = 0;
  }
  return;
}



// FUNCTION 14928d4fc FUN_14928d4fc body=158 status=ok
// SIG undefined FUN_14928d4fc(void)

undefined8 * FUN_14928d4fc(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_1 + 2);
  *param_1 = &PTR_FUN_14bbd81c0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x50;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x3e;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_1 + 0x4a) = 1;
  *(undefined8 *)((longlong)param_1 + 0x254) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x25c) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x264) = 0x4120000000000000;
  *(undefined1 *)((longlong)param_1 + 0x26c) = 1;
  param_1[0x4e] = 0;
  *(undefined1 *)(param_1 + 0x5c) = 1;
  return param_1;
}



// FUNCTION 14928d59a FUN_14928d59a body=52 status=ok
// SIG undefined FUN_14928d59a(void)

undefined8 * FUN_14928d59a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14928d604 FUN_14928d604 body=54 status=ok
// SIG undefined FUN_14928d604(void)

undefined1 FUN_14928d604(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144756208(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 14928d662 FUN_14928d662 body=59 status=ok
// SIG undefined FUN_14928d662(void)

undefined8 FUN_14928d662(longlong *param_1)

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



// FUNCTION 14928d6a8 FUN_14928d6a8 body=37 status=ok
// SIG undefined FUN_14928d6a8(void)

void FUN_14928d6a8(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 14928d71e FUN_14928d71e body=142 status=ok
// SIG undefined FUN_14928d71e(void)

void FUN_14928d71e(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbd8510;
  *(undefined8 *)((longlong)param_2 + 0x21c) = 0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  param_2[0x53] = 0;
  param_2[0x54] = 0;
  *(undefined1 *)(param_2 + 0x40) = 1;
  *(undefined8 *)((longlong)param_2 + 0x204) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x20c) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_2 + 0x214) = 0x4120000000000000;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x46;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_2 + 0x52) = 1;
  return;
}



// FUNCTION 14928d7ac FUN_14928d7ac body=142 status=ok
// SIG undefined FUN_14928d7ac(void)

void FUN_14928d7ac(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbd8510;
  *(undefined8 *)((longlong)param_2 + 0x21c) = 0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  param_2[0x53] = 0;
  param_2[0x54] = 0;
  *(undefined1 *)(param_2 + 0x40) = 1;
  *(undefined8 *)((longlong)param_2 + 0x204) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x20c) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_2 + 0x214) = 0x4120000000000000;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x46;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_2 + 0x52) = 1;
  return;
}



// FUNCTION 14928d85e FUN_14928d85e body=157 status=ok
// SIG undefined FUN_14928d85e(void)

undefined8 FUN_14928d85e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_144756208(lVar1 + 0x1f0,lVar2 + 0x1f0);
      memcpy((void *)(lVar1 + 0x200),(void *)(lVar2 + 0x200),0x91);
      FUN_144756208(lVar1 + 0x298,lVar2 + 0x298);
      lVar3 = lVar3 + 0x2b0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14928d924 FUN_14928d924 body=59 status=ok
// SIG undefined FUN_14928d924(void)

undefined8 FUN_14928d924(longlong *param_1)

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



// FUNCTION 14928d970 FUN_14928d970 body=40 status=ok
// SIG undefined FUN_14928d970(void)

void FUN_14928d970(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2b0) == '\x01') {
    FUN_14928da0c(param_2);
    *(undefined1 *)(param_2 + 0x2b0) = 0;
  }
  return;
}



// FUNCTION 14928d9e6 FUN_14928d9e6 body=38 status=ok
// SIG undefined FUN_14928d9e6(void)

undefined8 FUN_14928d9e6(undefined8 param_1,int param_2)

{
  FUN_14928da0c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14928da0c FUN_14928da0c body=79 status=ok
// SIG undefined FUN_14928da0c(void)

void FUN_14928da0c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bbd8510;
  if (param_1[0x53] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  return;
}



// FUNCTION 14928da90 FUN_14928da90 body=157 status=ok
// SIG undefined FUN_14928da90(void)

undefined8 FUN_14928da90(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_144756208(lVar1 + 0x1f0,lVar2 + 0x1f0);
      FUN_14054c6c4(lVar1 + 0x200,lVar2 + 0x200);
      memcpy((void *)(lVar1 + 0x210),(void *)(lVar2 + 0x210),0x91);
      lVar3 = lVar3 + 0x2b0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14928db56 FUN_14928db56 body=59 status=ok
// SIG undefined FUN_14928db56(void)

undefined8 FUN_14928db56(longlong *param_1)

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



// FUNCTION 14928dba2 FUN_14928dba2 body=40 status=ok
// SIG undefined FUN_14928dba2(void)

void FUN_14928dba2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2b0) == '\x01') {
    FUN_14928dcd6(param_2);
    *(undefined1 *)(param_2 + 0x2b0) = 0;
  }
  return;
}



// FUNCTION 14928dc18 FUN_14928dc18 body=151 status=ok
// SIG undefined FUN_14928dc18(void)

undefined8 * FUN_14928dc18(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_1 + 2);
  *param_1 = &PTR_FUN_14bbd8700;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x48;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_1 + 0x42) = 1;
  *(undefined1 **)((longlong)param_1 + 0x214) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)param_1 + 0x21c) = &DAT_3f8000003f800000;
  *(undefined8 *)((longlong)param_1 + 0x224) = 0x4120000000000000;
  *(undefined1 *)((longlong)param_1 + 0x22c) = 1;
  param_1[0x46] = 0;
  *(undefined1 *)(param_1 + 0x54) = 1;
  return param_1;
}



// FUNCTION 14928dcb0 FUN_14928dcb0 body=38 status=ok
// SIG undefined FUN_14928dcb0(void)

undefined8 FUN_14928dcb0(undefined8 param_1,int param_2)

{
  FUN_14928dcd6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14928dcd6 FUN_14928dcd6 body=79 status=ok
// SIG undefined FUN_14928dcd6(void)

void FUN_14928dcd6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bbd8700;
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



// FUNCTION 14928dd26 FUN_14928dd26 body=148 status=ok
// SIG undefined FUN_14928dd26(void)

void FUN_14928dd26(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bad5830;
  param_2[2] = &PTR_FUN_14bad5c20;
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined2 *)(param_2 + 5) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x34) = 0;
  *(undefined4 *)((longlong)param_2 + 0x3c) = 0;
  param_2[8] = 0x3f91111111111111;
  param_2[9] = 0x800;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x10;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  *param_2 = &PTR_FUN_14bbd88f0;
  return;
}



// FUNCTION 14928ddba FUN_14928ddba body=148 status=ok
// SIG undefined FUN_14928ddba(void)

void FUN_14928ddba(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bad5830;
  param_2[2] = &PTR_FUN_14bad5c20;
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined2 *)(param_2 + 5) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x34) = 0;
  *(undefined4 *)((longlong)param_2 + 0x3c) = 0;
  param_2[8] = 0x3f91111111111111;
  param_2[9] = 0x800;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x10;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  *param_2 = &PTR_FUN_14bbd88f0;
  return;
}



// FUNCTION 14928de72 FUN_14928de72 body=205 status=ok
// SIG undefined FUN_14928de72(void)

undefined8 FUN_14928de72(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  void *_Src;
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
      lVar1 = param_3 + lVar14;
      uVar3 = *(undefined4 *)(lVar1 + 0x18);
      uVar4 = *(undefined4 *)(lVar1 + 0x1c);
      uVar5 = *(undefined4 *)(lVar1 + 0x20);
      uVar6 = *(undefined4 *)(lVar1 + 0x24);
      uVar7 = *(undefined4 *)(lVar1 + 0x28);
      uVar8 = *(undefined4 *)(lVar1 + 0x2c);
      uVar9 = *(undefined4 *)(lVar1 + 0x30);
      uVar10 = *(undefined4 *)(lVar1 + 0x34);
      uVar11 = *(undefined4 *)(lVar1 + 0x3c);
      uVar12 = *(undefined4 *)(lVar1 + 0x40);
      uVar13 = *(undefined4 *)(lVar1 + 0x44);
      lVar2 = param_2 + 0x48 + lVar14;
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(lVar1 + 0x38);
      *(undefined4 *)(lVar2 + -0xc) = uVar11;
      *(undefined4 *)(lVar2 + -8) = uVar12;
      *(undefined4 *)(lVar2 + -4) = uVar13;
      *(undefined4 *)(lVar2 + -0x20) = uVar7;
      *(undefined4 *)(lVar2 + -0x1c) = uVar8;
      *(undefined4 *)(lVar2 + -0x18) = uVar9;
      *(undefined4 *)(lVar2 + -0x14) = uVar10;
      *(undefined4 *)(lVar2 + -0x30) = uVar3;
      *(undefined4 *)(lVar2 + -0x2c) = uVar4;
      *(undefined4 *)(lVar2 + -0x28) = uVar5;
      *(undefined4 *)(lVar2 + -0x24) = uVar6;
      FUN_14591e93c();
      _Src = (void *)(param_3 + 0x60 + lVar14);
      memcpy((void *)(param_2 + lVar14 + 0x60),_Src,0x98);
      FUN_1490e1992(param_2 + lVar14 + 0xf8,param_3 + lVar14 + 0xf8);
      FUN_145c50a48(param_2 + lVar14 + 0x108,param_3 + lVar14 + 0x108);
      *(undefined8 *)(param_2 + lVar14 + 0x118) = *(undefined8 *)((longlong)_Src + 0xb8);
      lVar14 = lVar14 + 0x120;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14928df68 FUN_14928df68 body=59 status=ok
// SIG undefined FUN_14928df68(void)

undefined8 FUN_14928df68(longlong *param_1)

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



// FUNCTION 14928dfb4 FUN_14928dfb4 body=49 status=ok
// SIG undefined FUN_14928dfb4(void)

void FUN_14928dfb4(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x24) == '\x01') {
    *param_2 = &PTR_FUN_14bad5830;
    FUN_140f8ceac(param_2 + 2);
    *(undefined1 *)(param_2 + 0x24) = 0;
  }
  return;
}



// FUNCTION 14928e034 FUN_14928e034 body=52 status=ok
// SIG undefined FUN_14928e034(void)

undefined8 * FUN_14928e034(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bad5830;
  FUN_140f8ceac(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14928e09e FUN_14928e09e body=63 status=ok
// SIG undefined FUN_14928e09e(void)

undefined1 FUN_14928e09e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14928e2cc(param_2,param_3);
    param_3 = param_3 + 0x150;
    param_2 = param_2 + 0x150;
  }
  return 1;
}



// FUNCTION 14928e106 FUN_14928e106 body=59 status=ok
// SIG undefined FUN_14928e106(void)

undefined8 FUN_14928e106(longlong *param_1)

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



// FUNCTION 14928e1a8 FUN_14928e1a8 body=212 status=ok
// SIG undefined FUN_14928e1a8(void)

undefined8 * FUN_14928e1a8(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_14bad5830;
  param_1[2] = &PTR_FUN_14bad5c20;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[8] = 0x3f91111111111111;
  param_1[9] = 0x800;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x10;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *param_1 = &PTR_FUN_14bbd8ad0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x24) = 1;
  param_1[0x27] = 0;
  FUN_14020fad6(param_1 + 0x25,L"Timer");
  *(undefined1 *)(param_1 + 0x28) = 0;
  return param_1;
}



// FUNCTION 14928e27c FUN_14928e27c body=79 status=ok
// SIG undefined FUN_14928e27c(void)

undefined8 * FUN_14928e27c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbd8ad0;
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bad5830;
  FUN_140f8ceac(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14928e2cc FUN_14928e2cc body=181 status=ok
// SIG undefined FUN_14928e2cc(void)

longlong FUN_14928e2cc(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
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
  
  uVar1 = *(undefined4 *)(param_2 + 0x18);
  uVar2 = *(undefined4 *)(param_2 + 0x1c);
  uVar3 = *(undefined4 *)(param_2 + 0x20);
  uVar4 = *(undefined4 *)(param_2 + 0x24);
  uVar5 = *(undefined4 *)(param_2 + 0x28);
  uVar6 = *(undefined4 *)(param_2 + 0x2c);
  uVar7 = *(undefined4 *)(param_2 + 0x30);
  uVar8 = *(undefined4 *)(param_2 + 0x34);
  uVar9 = *(undefined4 *)(param_2 + 0x3c);
  uVar10 = *(undefined4 *)(param_2 + 0x40);
  uVar11 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = uVar9;
  *(undefined4 *)(param_1 + 0x40) = uVar10;
  *(undefined4 *)(param_1 + 0x44) = uVar11;
  *(undefined4 *)(param_1 + 0x28) = uVar5;
  *(undefined4 *)(param_1 + 0x2c) = uVar6;
  *(undefined4 *)(param_1 + 0x30) = uVar7;
  *(undefined4 *)(param_1 + 0x34) = uVar8;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  *(undefined4 *)(param_1 + 0x24) = uVar4;
  FUN_14591e93c(param_1 + 0x48,param_2 + 0x48);
  memcpy((void *)(param_1 + 0x60),(void *)(param_2 + 0x60),0x98);
  FUN_1490e1992(param_1 + 0xf8,param_2 + 0xf8);
  FUN_145c50a48(param_1 + 0x108,param_2 + 0x108);
  *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_2 + 0x118);
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_2 + 0x120);
  FUN_144a787a6(param_1 + 0x128,param_2 + 0x128);
  *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_2 + 0x138);
  *(undefined1 *)(param_1 + 0x140) = *(undefined1 *)(param_2 + 0x140);
  return param_1;
}



// FUNCTION 14928e382 FUN_14928e382 body=76 status=ok
// SIG undefined FUN_14928e382(void)

void FUN_14928e382(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x2a) == '\x01') {
    *param_1 = &PTR_FUN_14bbd8ad0;
    if (param_1[0x25] != 0) {
      FUN_1400020a8();
    }
    *param_1 = &PTR_FUN_14bad5830;
    FUN_140f8ceac(param_1 + 2);
    *(undefined1 *)(param_1 + 0x2a) = 0;
  }
  return;
}



// FUNCTION 14928e4ea FUN_14928e4ea body=59 status=ok
// SIG undefined FUN_14928e4ea(void)

undefined8 FUN_14928e4ea(longlong *param_1)

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



// FUNCTION 14928e58a FUN_14928e58a body=29 status=ok
// SIG undefined FUN_14928e58a(void)

undefined8 FUN_14928e58a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14928e6cc FUN_14928e6cc body=59 status=ok
// SIG undefined FUN_14928e6cc(void)

undefined8 FUN_14928e6cc(longlong *param_1)

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



// FUNCTION 14928e76c FUN_14928e76c body=29 status=ok
// SIG undefined FUN_14928e76c(void)

undefined8 FUN_14928e76c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14928e88c FUN_14928e88c body=59 status=ok
// SIG undefined FUN_14928e88c(void)

undefined8 FUN_14928e88c(longlong *param_1)

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



// FUNCTION 14928e92c FUN_14928e92c body=29 status=ok
// SIG undefined FUN_14928e92c(void)

undefined8 FUN_14928e92c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14928ea56 FUN_14928ea56 body=59 status=ok
// SIG undefined FUN_14928ea56(void)

undefined8 FUN_14928ea56(longlong *param_1)

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



// FUNCTION 14928eaf6 FUN_14928eaf6 body=29 status=ok
// SIG undefined FUN_14928eaf6(void)

undefined8 FUN_14928eaf6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14928eb14 FUN_14928eb14 body=100 status=ok
// SIG undefined FUN_14928eb14(void)

void FUN_14928eb14(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bbd9470;
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
  *(undefined1 *)(param_2 + 0xe) = 1;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0x4120000000000000;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0;
  return;
}



// FUNCTION 14928eb78 FUN_14928eb78 body=100 status=ok
// SIG undefined FUN_14928eb78(void)

void FUN_14928eb78(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bbd9470;
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
  *(undefined1 *)(param_2 + 0xe) = 1;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0x4120000000000000;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0;
  return;
}



// FUNCTION 14928ec00 FUN_14928ec00 body=53 status=ok
// SIG undefined FUN_14928ec00(void)

undefined8 FUN_14928ec00(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0x10;
    do {
      *(undefined4 *)(param_2 + 0x70 + lVar1) = *(undefined4 *)(param_3 + 0x70 + lVar1);
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 0xe; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x90;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14928ec5e FUN_14928ec5e body=59 status=ok
// SIG undefined FUN_14928ec5e(void)

undefined8 FUN_14928ec5e(longlong *param_1)

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



// FUNCTION 14928ed0a FUN_14928ed0a body=29 status=ok
// SIG undefined FUN_14928ed0a(void)

undefined8 FUN_14928ed0a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14928ed28 FUN_14928ed28 body=107 status=ok
// SIG undefined FUN_14928ed28(void)

void FUN_14928ed28(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bbd9660;
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
  *(undefined1 *)(param_2 + 0xe) = 1;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0x4120000000000000;
  *(undefined1 *)((longlong)param_2 + 0x7c) = 1;
  param_2[0x10] = 0;
  return;
}



// FUNCTION 14928ed94 FUN_14928ed94 body=107 status=ok
// SIG undefined FUN_14928ed94(void)

void FUN_14928ed94(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bbd9660;
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
  *(undefined1 *)(param_2 + 0xe) = 1;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0x4120000000000000;
  *(undefined1 *)((longlong)param_2 + 0x7c) = 1;
  param_2[0x10] = 0;
  return;
}



// FUNCTION 14928ee24 FUN_14928ee24 body=44 status=ok
// SIG undefined FUN_14928ee24(void)

undefined8 FUN_14928ee24(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      for (lVar2 = 0xf; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x90;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14928ee78 FUN_14928ee78 body=59 status=ok
// SIG undefined FUN_14928ee78(void)

undefined8 FUN_14928ee78(longlong *param_1)

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



// FUNCTION 14928ef24 FUN_14928ef24 body=29 status=ok
// SIG undefined FUN_14928ef24(void)

undefined8 FUN_14928ef24(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14928ef42 FUN_14928ef42 body=134 status=ok
// SIG undefined FUN_14928ef42(void)

void FUN_14928ef42(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  memset(param_2,0,0xc0);
  *param_2 = &PTR_FUN_14bbd9850;
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
  param_2[0xc] = 0x3ff0000000000000;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  uVar1 = DAT_14c846518;
  param_2[0x14] = DAT_14c846510;
  param_2[0x15] = uVar1;
  param_2[0x16] = DAT_14c846520;
  return;
}



// FUNCTION 14928f05a FUN_14928f05a body=71 status=ok
// SIG undefined FUN_14928f05a(void)

undefined8 FUN_14928f05a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0x10;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0xa8);
      lVar1 = lVar1 + 0xc0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14928f0ca FUN_14928f0ca body=59 status=ok
// SIG undefined FUN_14928f0ca(void)

undefined8 FUN_14928f0ca(longlong *param_1)

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



// FUNCTION 14928f176 FUN_14928f176 body=29 status=ok
// SIG undefined FUN_14928f176(void)

undefined8 FUN_14928f176(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14928f28c FUN_14928f28c body=71 status=ok
// SIG undefined FUN_14928f28c(void)

undefined8 FUN_14928f28c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 8;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0xa8);
      lVar1 = lVar1 + 0xb0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14928f2fc FUN_14928f2fc body=59 status=ok
// SIG undefined FUN_14928f2fc(void)

undefined8 FUN_14928f2fc(longlong *param_1)

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



// FUNCTION 14928f3a8 FUN_14928f3a8 body=29 status=ok
// SIG undefined FUN_14928f3a8(void)

undefined8 FUN_14928f3a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14928f4b2 FUN_14928f4b2 body=59 status=ok
// SIG undefined FUN_14928f4b2(void)

undefined8 FUN_14928f4b2(longlong *param_1)

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



// FUNCTION 14928f552 FUN_14928f552 body=29 status=ok
// SIG undefined FUN_14928f552(void)

undefined8 FUN_14928f552(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14928f670 FUN_14928f670 body=59 status=ok
// SIG undefined FUN_14928f670(void)

undefined8 FUN_14928f670(longlong *param_1)

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



// FUNCTION 14928f710 FUN_14928f710 body=29 status=ok
// SIG undefined FUN_14928f710(void)

undefined8 FUN_14928f710(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14928f82e FUN_14928f82e body=59 status=ok
// SIG undefined FUN_14928f82e(void)

undefined8 FUN_14928f82e(longlong *param_1)

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



// FUNCTION 14928f8ce FUN_14928f8ce body=29 status=ok
// SIG undefined FUN_14928f8ce(void)

undefined8 FUN_14928f8ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14928f9a2 FUN_14928f9a2 body=59 status=ok
// SIG undefined FUN_14928f9a2(void)

undefined8 FUN_14928f9a2(longlong *param_1)

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



// FUNCTION 14928fa42 FUN_14928fa42 body=29 status=ok
// SIG undefined FUN_14928fa42(void)

undefined8 FUN_14928fa42(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14928fb4c FUN_14928fb4c body=59 status=ok
// SIG undefined FUN_14928fb4c(void)

undefined8 FUN_14928fb4c(longlong *param_1)

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



// FUNCTION 14928fbec FUN_14928fbec body=29 status=ok
// SIG undefined FUN_14928fbec(void)

undefined8 FUN_14928fbec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14928fcc0 FUN_14928fcc0 body=59 status=ok
// SIG undefined FUN_14928fcc0(void)

undefined8 FUN_14928fcc0(longlong *param_1)

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



// FUNCTION 14928fd60 FUN_14928fd60 body=29 status=ok
// SIG undefined FUN_14928fd60(void)

undefined8 FUN_14928fd60(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14928fe7e FUN_14928fe7e body=59 status=ok
// SIG undefined FUN_14928fe7e(void)

undefined8 FUN_14928fe7e(longlong *param_1)

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



// FUNCTION 14928ff1e FUN_14928ff1e body=29 status=ok
// SIG undefined FUN_14928ff1e(void)

undefined8 FUN_14928ff1e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14928ffd8 FUN_14928ffd8 body=44 status=ok
// SIG undefined FUN_14928ffd8(void)

undefined8 FUN_14928ffd8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x90;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14929002c FUN_14929002c body=59 status=ok
// SIG undefined FUN_14929002c(void)

undefined8 FUN_14929002c(longlong *param_1)

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



// FUNCTION 1492900d8 FUN_1492900d8 body=29 status=ok
// SIG undefined FUN_1492900d8(void)

undefined8 FUN_1492900d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149290196 FUN_149290196 body=59 status=ok
// SIG undefined FUN_149290196(void)

undefined8 FUN_149290196(longlong *param_1)

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



// FUNCTION 149290236 FUN_149290236 body=29 status=ok
// SIG undefined FUN_149290236(void)

undefined8 FUN_149290236(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492902f4 FUN_1492902f4 body=59 status=ok
// SIG undefined FUN_1492902f4(void)

undefined8 FUN_1492902f4(longlong *param_1)

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



// FUNCTION 149290394 FUN_149290394 body=29 status=ok
// SIG undefined FUN_149290394(void)

undefined8 FUN_149290394(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149290452 FUN_149290452 body=59 status=ok
// SIG undefined FUN_149290452(void)

undefined8 FUN_149290452(longlong *param_1)

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



// FUNCTION 1492904f2 FUN_1492904f2 body=29 status=ok
// SIG undefined FUN_1492904f2(void)

undefined8 FUN_1492904f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492905b0 FUN_1492905b0 body=59 status=ok
// SIG undefined FUN_1492905b0(void)

undefined8 FUN_1492905b0(longlong *param_1)

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



// FUNCTION 149290650 FUN_149290650 body=29 status=ok
// SIG undefined FUN_149290650(void)

undefined8 FUN_149290650(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14929070e FUN_14929070e body=59 status=ok
// SIG undefined FUN_14929070e(void)

undefined8 FUN_14929070e(longlong *param_1)

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



// FUNCTION 1492907ae FUN_1492907ae body=29 status=ok
// SIG undefined FUN_1492907ae(void)

undefined8 FUN_1492907ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14929085c FUN_14929085c body=59 status=ok
// SIG undefined FUN_14929085c(void)

undefined8 FUN_14929085c(longlong *param_1)

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



// FUNCTION 1492908fc FUN_1492908fc body=29 status=ok
// SIG undefined FUN_1492908fc(void)

undefined8 FUN_1492908fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492909c4 FUN_1492909c4 body=59 status=ok
// SIG undefined FUN_1492909c4(void)

undefined8 FUN_1492909c4(longlong *param_1)

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



// FUNCTION 149290a64 FUN_149290a64 body=29 status=ok
// SIG undefined FUN_149290a64(void)

undefined8 FUN_149290a64(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149290b42 FUN_149290b42 body=42 status=ok
// SIG undefined FUN_149290b42(void)

undefined8 FUN_149290b42(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 149290b94 FUN_149290b94 body=59 status=ok
// SIG undefined FUN_149290b94(void)

undefined8 FUN_149290b94(longlong *param_1)

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



// FUNCTION 149290c34 FUN_149290c34 body=29 status=ok
// SIG undefined FUN_149290c34(void)

undefined8 FUN_149290c34(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149290d2c FUN_149290d2c body=42 status=ok
// SIG undefined FUN_149290d2c(void)

undefined8 FUN_149290d2c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 149290d7e FUN_149290d7e body=59 status=ok
// SIG undefined FUN_149290d7e(void)

undefined8 FUN_149290d7e(longlong *param_1)

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



// FUNCTION 149290e1e FUN_149290e1e body=29 status=ok
// SIG undefined FUN_149290e1e(void)

undefined8 FUN_149290e1e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149290f3e FUN_149290f3e body=59 status=ok
// SIG undefined FUN_149290f3e(void)

undefined8 FUN_149290f3e(longlong *param_1)

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



// FUNCTION 149290fde FUN_149290fde body=29 status=ok
// SIG undefined FUN_149290fde(void)

undefined8 FUN_149290fde(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149291112 FUN_149291112 body=59 status=ok
// SIG undefined FUN_149291112(void)

undefined8 FUN_149291112(longlong *param_1)

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



// FUNCTION 1492911b2 FUN_1492911b2 body=29 status=ok
// SIG undefined FUN_1492911b2(void)

undefined8 FUN_1492911b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492912c8 FUN_1492912c8 body=59 status=ok
// SIG undefined FUN_1492912c8(void)

undefined8 FUN_1492912c8(longlong *param_1)

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



// FUNCTION 149291368 FUN_149291368 body=29 status=ok
// SIG undefined FUN_149291368(void)

undefined8 FUN_149291368(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14929140a FUN_14929140a body=42 status=ok
// SIG undefined FUN_14929140a(void)

undefined8 FUN_14929140a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 14929145c FUN_14929145c body=59 status=ok
// SIG undefined FUN_14929145c(void)

undefined8 FUN_14929145c(longlong *param_1)

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



// FUNCTION 1492914fc FUN_1492914fc body=29 status=ok
// SIG undefined FUN_1492914fc(void)

undefined8 FUN_1492914fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149291606 FUN_149291606 body=59 status=ok
// SIG undefined FUN_149291606(void)

undefined8 FUN_149291606(longlong *param_1)

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



// FUNCTION 1492916a6 FUN_1492916a6 body=29 status=ok
// SIG undefined FUN_1492916a6(void)

undefined8 FUN_1492916a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14929180c FUN_14929180c body=71 status=ok
// SIG undefined FUN_14929180c(void)

undefined8 FUN_14929180c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0x10;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x120);
      lVar1 = lVar1 + 0x130;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14929187c FUN_14929187c body=59 status=ok
// SIG undefined FUN_14929187c(void)

undefined8 FUN_14929187c(longlong *param_1)

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



// FUNCTION 149291928 FUN_149291928 body=29 status=ok
// SIG undefined FUN_149291928(void)

undefined8 FUN_149291928(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149291a8e FUN_149291a8e body=71 status=ok
// SIG undefined FUN_149291a8e(void)

undefined8 FUN_149291a8e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0x10;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x120);
      lVar1 = lVar1 + 0x130;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149291afe FUN_149291afe body=59 status=ok
// SIG undefined FUN_149291afe(void)

undefined8 FUN_149291afe(longlong *param_1)

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



// FUNCTION 149291baa FUN_149291baa body=29 status=ok
// SIG undefined FUN_149291baa(void)

undefined8 FUN_149291baa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149291d10 FUN_149291d10 body=71 status=ok
// SIG undefined FUN_149291d10(void)

undefined8 FUN_149291d10(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0x10;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x120);
      lVar1 = lVar1 + 0x130;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149291d80 FUN_149291d80 body=59 status=ok
// SIG undefined FUN_149291d80(void)

undefined8 FUN_149291d80(longlong *param_1)

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



// FUNCTION 149291e2c FUN_149291e2c body=29 status=ok
// SIG undefined FUN_149291e2c(void)

undefined8 FUN_149291e2c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149291eba FUN_149291eba body=42 status=ok
// SIG undefined FUN_149291eba(void)

undefined8 FUN_149291eba(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 149291f0c FUN_149291f0c body=59 status=ok
// SIG undefined FUN_149291f0c(void)

undefined8 FUN_149291f0c(longlong *param_1)

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



// FUNCTION 149291fac FUN_149291fac body=29 status=ok
// SIG undefined FUN_149291fac(void)

undefined8 FUN_149291fac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14929203a FUN_14929203a body=42 status=ok
// SIG undefined FUN_14929203a(void)

undefined8 FUN_14929203a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 14929208c FUN_14929208c body=59 status=ok
// SIG undefined FUN_14929208c(void)

undefined8 FUN_14929208c(longlong *param_1)

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



// FUNCTION 14929212c FUN_14929212c body=29 status=ok
// SIG undefined FUN_14929212c(void)

undefined8 FUN_14929212c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492921ba FUN_1492921ba body=42 status=ok
// SIG undefined FUN_1492921ba(void)

undefined8 FUN_1492921ba(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 14929220c FUN_14929220c body=59 status=ok
// SIG undefined FUN_14929220c(void)

undefined8 FUN_14929220c(longlong *param_1)

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



// FUNCTION 1492922ac FUN_1492922ac body=29 status=ok
// SIG undefined FUN_1492922ac(void)

undefined8 FUN_1492922ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14929233a FUN_14929233a body=42 status=ok
// SIG undefined FUN_14929233a(void)

undefined8 FUN_14929233a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 14929238c FUN_14929238c body=59 status=ok
// SIG undefined FUN_14929238c(void)

undefined8 FUN_14929238c(longlong *param_1)

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



// FUNCTION 14929242c FUN_14929242c body=29 status=ok
// SIG undefined FUN_14929242c(void)

undefined8 FUN_14929242c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492924ba FUN_1492924ba body=42 status=ok
// SIG undefined FUN_1492924ba(void)

undefined8 FUN_1492924ba(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 14929250c FUN_14929250c body=59 status=ok
// SIG undefined FUN_14929250c(void)

undefined8 FUN_14929250c(longlong *param_1)

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



// FUNCTION 1492925ac FUN_1492925ac body=29 status=ok
// SIG undefined FUN_1492925ac(void)

undefined8 FUN_1492925ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492926a0 FUN_1492926a0 body=59 status=ok
// SIG undefined FUN_1492926a0(void)

undefined8 FUN_1492926a0(longlong *param_1)

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



// FUNCTION 149292740 FUN_149292740 body=29 status=ok
// SIG undefined FUN_149292740(void)

undefined8 FUN_149292740(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14929275e FUN_14929275e body=93 status=ok
// SIG undefined FUN_14929275e(void)

void FUN_14929275e(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x90);
  *(undefined4 *)((longlong)param_2 + 0x20) = 0;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)((longlong)param_2 + 0x28) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0x3ff00000;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  *(undefined8 *)((longlong)param_2 + 0x80) = 0;
  return;
}



// FUNCTION 14929281e FUN_14929281e body=68 status=ok
// SIG undefined FUN_14929281e(void)

undefined8 FUN_14929281e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x88);
      lVar1 = lVar1 + 0x90;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14929288a FUN_14929288a body=59 status=ok
// SIG undefined FUN_14929288a(void)

undefined8 FUN_14929288a(longlong *param_1)

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



// FUNCTION 149292948 FUN_149292948 body=44 status=ok
// SIG undefined FUN_149292948(void)

void FUN_149292948(undefined8 param_1,longlong *param_2)

{
  FUN_1474f9a9f(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14929298a FUN_14929298a body=54 status=ok
// SIG undefined FUN_14929298a(void)

undefined1 FUN_14929298a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1474f99c6(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1492929e8 FUN_1492929e8 body=59 status=ok
// SIG undefined FUN_1492929e8(void)

undefined8 FUN_1492929e8(longlong *param_1)

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



// FUNCTION 149292a86 FUN_149292a86 body=50 status=ok
// SIG undefined FUN_149292a86(void)

void FUN_149292a86(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_1474f9a9f(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 149292ab8 FUN_149292ab8 body=124 status=ok
// SIG undefined FUN_149292ab8(void)

void FUN_149292ab8(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x260);
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbddb40;
  param_2[0x3e] = 0;
  *(undefined2 *)(param_2 + 0x3f) = 0;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  param_2[0x42] = 0;
  param_2[0x43] = 0;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x46] = 0;
  param_2[0x47] = 0;
  param_2[0x48] = 0;
  param_2[0x49] = 0;
  param_2[0x4a] = 0;
  param_2[0x4b] = 0;
  return;
}



// FUNCTION 149292b34 FUN_149292b34 body=108 status=ok
// SIG undefined FUN_149292b34(void)

void FUN_149292b34(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbddb40;
  param_2[0x3e] = 0;
  *(undefined2 *)(param_2 + 0x3f) = 0;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  param_2[0x42] = 0;
  param_2[0x43] = 0;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x46] = 0;
  param_2[0x47] = 0;
  param_2[0x48] = 0;
  param_2[0x49] = 0;
  param_2[0x4a] = 0;
  param_2[0x4b] = 0;
  return;
}



// FUNCTION 149292bc4 FUN_149292bc4 body=63 status=ok
// SIG undefined FUN_149292bc4(void)

undefined1 FUN_149292bc4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149292d86(param_2,param_3);
    param_3 = param_3 + 0x260;
    param_2 = param_2 + 0x260;
  }
  return 1;
}



// FUNCTION 149292c2c FUN_149292c2c body=59 status=ok
// SIG undefined FUN_149292c2c(void)

undefined8 FUN_149292c2c(longlong *param_1)

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



// FUNCTION 149292c78 FUN_149292c78 body=40 status=ok
// SIG undefined FUN_149292c78(void)

void FUN_149292c78(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x260) == '\x01') {
    FUN_149292d14(param_2);
    *(undefined1 *)(param_2 + 0x260) = 0;
  }
  return;
}



// FUNCTION 149292cee FUN_149292cee body=38 status=ok
// SIG undefined FUN_149292cee(void)

undefined8 FUN_149292cee(undefined8 param_1,int param_2)

{
  FUN_149292d14();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149292d14 FUN_149292d14 body=114 status=ok
// SIG undefined FUN_149292d14(void)

void FUN_149292d14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bbddb40;
  FUN_1474f9a9f(param_1[0x4a],*(undefined4 *)(param_1 + 0x4b));
  if (param_1[0x4a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x48] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  return;
}



// FUNCTION 149292d86 FUN_149292d86 body=145 status=ok
// SIG undefined FUN_149292d86(void)

longlong FUN_149292d86(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
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
  
  FUN_1491c05d4(param_1 + 0x10,param_2 + 0x10);
  uVar1 = *(undefined4 *)(param_2 + 500);
  uVar2 = *(undefined4 *)(param_2 + 0x1f8);
  uVar3 = *(undefined4 *)(param_2 + 0x1fc);
  uVar4 = *(undefined4 *)(param_2 + 0x200);
  uVar5 = *(undefined4 *)(param_2 + 0x204);
  uVar6 = *(undefined4 *)(param_2 + 0x208);
  uVar7 = *(undefined4 *)(param_2 + 0x20c);
  uVar8 = *(undefined4 *)(param_2 + 0x210);
  uVar9 = *(undefined4 *)(param_2 + 0x214);
  uVar10 = *(undefined4 *)(param_2 + 0x218);
  uVar11 = *(undefined4 *)(param_2 + 0x21c);
  uVar12 = *(undefined4 *)(param_2 + 0x220);
  uVar13 = *(undefined4 *)(param_2 + 0x224);
  uVar14 = *(undefined4 *)(param_2 + 0x228);
  uVar15 = *(undefined4 *)(param_2 + 0x22c);
  *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(param_2 + 0x1f0);
  *(undefined4 *)(param_1 + 500) = uVar1;
  *(undefined4 *)(param_1 + 0x1f8) = uVar2;
  *(undefined4 *)(param_1 + 0x1fc) = uVar3;
  *(undefined4 *)(param_1 + 0x200) = uVar4;
  *(undefined4 *)(param_1 + 0x204) = uVar5;
  *(undefined4 *)(param_1 + 0x208) = uVar6;
  *(undefined4 *)(param_1 + 0x20c) = uVar7;
  *(undefined4 *)(param_1 + 0x210) = uVar8;
  *(undefined4 *)(param_1 + 0x214) = uVar9;
  *(undefined4 *)(param_1 + 0x218) = uVar10;
  *(undefined4 *)(param_1 + 0x21c) = uVar11;
  *(undefined4 *)(param_1 + 0x220) = uVar12;
  *(undefined4 *)(param_1 + 0x224) = uVar13;
  *(undefined4 *)(param_1 + 0x228) = uVar14;
  *(undefined4 *)(param_1 + 0x22c) = uVar15;
  FUN_149292e18(param_1 + 0x230,param_2 + 0x230);
  FUN_149292e18(param_1 + 0x240,param_2 + 0x240);
  FUN_1474f99c6(param_1 + 0x250,param_2 + 0x250);
  return param_1;
}



// FUNCTION 149292e18 FUN_149292e18 body=89 status=ok
// SIG undefined FUN_149292e18(void)

undefined8 * FUN_149292e18(undefined8 *param_1,undefined8 *param_2)

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
      FUN_149292e72(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x90);
      }
    }
  }
  return param_1;
}



// FUNCTION 149292e72 FUN_149292e72 body=115 status=ok
// SIG undefined FUN_149292e72(void)

void FUN_149292e72(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x90,0x10);
    iVar2 = (int)(uVar1 / 0x90);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x90,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 149292ee6 FUN_149292ee6 body=37 status=ok
// SIG undefined FUN_149292ee6(void)

void FUN_149292ee6(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x2e0);
  FUN_146711396(param_2);
  return;
}



// FUNCTION 149292f38 FUN_149292f38 body=110 status=ok
// SIG undefined FUN_149292f38(void)

undefined8 FUN_149292f38(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_1491c05d4(param_2 + 0x10 + lVar1,param_3 + 0x10 + lVar1);
      memcpy((void *)(param_2 + 0x1f0 + lVar1),(void *)(param_3 + 0x1f0 + lVar1),0xe8);
      lVar1 = lVar1 + 0x2e0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149292fce FUN_149292fce body=59 status=ok
// SIG undefined FUN_149292fce(void)

undefined8 FUN_149292fce(longlong *param_1)

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



// FUNCTION 14929301a FUN_14929301a body=49 status=ok
// SIG undefined FUN_14929301a(void)

void FUN_14929301a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x5c) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x5c) = 0;
  }
  return;
}



// FUNCTION 14929309a FUN_14929309a body=52 status=ok
// SIG undefined FUN_14929309a(void)

undefined8 * FUN_14929309a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149293160 FUN_149293160 body=39 status=ok
// SIG undefined FUN_149293160(void)

undefined8 FUN_149293160(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      for (lVar2 = 0xd; lVar2 != 0; lVar2 = lVar2 + -1) {
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



// FUNCTION 1492931b0 FUN_1492931b0 body=59 status=ok
// SIG undefined FUN_1492931b0(void)

undefined8 FUN_1492931b0(longlong *param_1)

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



// FUNCTION 149293354 FUN_149293354 body=110 status=ok
// SIG undefined FUN_149293354(void)

undefined1 FUN_149293354(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
    do {
      puVar2 = (undefined8 *)(param_3 + -0x60);
      puVar3 = (undefined8 *)(param_2 + -0x60);
      for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      FUN_1492934f4(param_2,param_3);
      puVar2 = (undefined8 *)(param_3 + 0x10);
      puVar3 = (undefined8 *)(param_2 + 0x10);
      for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      param_3 = param_3 + 0xe0;
      param_2 = param_2 + 0xe0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492933ea FUN_1492933ea body=59 status=ok
// SIG undefined FUN_1492933ea(void)

undefined8 FUN_1492933ea(longlong *param_1)

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



// FUNCTION 149293436 FUN_149293436 body=54 status=ok
// SIG undefined FUN_149293436(void)

void FUN_149293436(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x1c) == '\x01') {
    *param_2 = &PTR_FUN_14bbde0d0;
    if (param_2[0xe] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x1c) = 0;
  }
  return;
}



// FUNCTION 1492934ba FUN_1492934ba body=57 status=ok
// SIG undefined FUN_1492934ba(void)

undefined8 * FUN_1492934ba(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbde0d0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492934f4 FUN_1492934f4 body=85 status=ok
// SIG undefined FUN_1492934f4(void)

undefined8 * FUN_1492934f4(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14929354a(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x70);
      }
    }
  }
  return param_1;
}



// FUNCTION 14929354a FUN_14929354a body=111 status=ok
// SIG undefined FUN_14929354a(void)

void FUN_14929354a(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x70,0x10);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 4;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x70,0x10);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1492935ba FUN_1492935ba body=180 status=ok
// SIG undefined FUN_1492935ba(void)

void FUN_1492935ba(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbde2c0;
  param_2[0x3e] = 0;
  *(undefined2 *)(param_2 + 0x3f) = 0x101;
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
  param_2[0x4e] = 0;
  param_2[0x4f] = 0;
  *(undefined4 *)(param_2 + 0x50) = 0;
  *(undefined4 *)((longlong)param_2 + 0x284) = 0;
  *(undefined4 *)(param_2 + 0x51) = 0;
  *(undefined4 *)((longlong)param_2 + 0x28c) = 0x3ff00000;
  param_2[0x52] = 0;
  param_2[0x53] = 0;
  param_2[0x54] = 0;
  param_2[0x55] = 0;
  param_2[0x56] = 0x3ff0000000000000;
  param_2[0x57] = 0x3ff0000000000000;
  param_2[0x58] = 0x3ff0000000000000;
  param_2[0x59] = 0;
  return;
}



// FUNCTION 14929366e FUN_14929366e body=180 status=ok
// SIG undefined FUN_14929366e(void)

void FUN_14929366e(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbde2c0;
  param_2[0x3e] = 0;
  *(undefined2 *)(param_2 + 0x3f) = 0x101;
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
  param_2[0x4e] = 0;
  param_2[0x4f] = 0;
  *(undefined4 *)(param_2 + 0x50) = 0;
  *(undefined4 *)((longlong)param_2 + 0x284) = 0;
  *(undefined4 *)(param_2 + 0x51) = 0;
  *(undefined4 *)((longlong)param_2 + 0x28c) = 0x3ff00000;
  param_2[0x52] = 0;
  param_2[0x53] = 0;
  param_2[0x54] = 0;
  param_2[0x55] = 0;
  param_2[0x56] = 0x3ff0000000000000;
  param_2[0x57] = 0x3ff0000000000000;
  param_2[0x58] = 0x3ff0000000000000;
  param_2[0x59] = 0;
  return;
}



// FUNCTION 149293746 FUN_149293746 body=110 status=ok
// SIG undefined FUN_149293746(void)

undefined8 FUN_149293746(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_1491c05d4(param_2 + 0x10 + lVar1,param_3 + 0x10 + lVar1);
      memcpy((void *)(param_2 + 0x1f0 + lVar1),(void *)(param_3 + 0x1f0 + lVar1),0xe0);
      lVar1 = lVar1 + 0x2d0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492937dc FUN_1492937dc body=59 status=ok
// SIG undefined FUN_1492937dc(void)

undefined8 FUN_1492937dc(longlong *param_1)

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



// FUNCTION 149293828 FUN_149293828 body=49 status=ok
// SIG undefined FUN_149293828(void)

void FUN_149293828(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x5a) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x5a) = 0;
  }
  return;
}



// FUNCTION 1492938a8 FUN_1492938a8 body=52 status=ok
// SIG undefined FUN_1492938a8(void)

undefined8 * FUN_1492938a8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149293912 FUN_149293912 body=110 status=ok
// SIG undefined FUN_149293912(void)

undefined8 FUN_149293912(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_1491c05d4(param_2 + 0x10 + lVar1,param_3 + 0x10 + lVar1);
      memcpy((void *)(param_2 + 0x1f0 + lVar1),(void *)(param_3 + 0x1f0 + lVar1),0x305);
      lVar1 = lVar1 + 0x500;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492939a8 FUN_1492939a8 body=59 status=ok
// SIG undefined FUN_1492939a8(void)

undefined8 FUN_1492939a8(longlong *param_1)

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



// FUNCTION 1492939f4 FUN_1492939f4 body=49 status=ok
// SIG undefined FUN_1492939f4(void)

void FUN_1492939f4(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 149293a74 FUN_149293a74 body=445 status=ok
// SIG undefined FUN_149293a74(void)

undefined8 * FUN_149293a74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_1 + 2);
  *param_1 = &PTR_FUN_14bbde4b0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined8 *)((longlong)param_1 + 0x20c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x214) = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  *(undefined4 *)((longlong)param_1 + 0x234) = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  *(undefined4 *)((longlong)param_1 + 0x23c) = 0x3ff00000;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0x3ff0000000000000;
  param_1[0x4d] = 0x3ff0000000000000;
  param_1[0x4e] = 0x3ff0000000000000;
  param_1[0x4f] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0x3f800000;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2a4) = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2ac) = 0x3ff00000;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0x3ff0000000000000;
  param_1[0x5b] = 0x3ff0000000000000;
  param_1[0x5c] = 0x3ff0000000000000;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 0x304) = 0;
  *(undefined4 *)(param_1 + 0x61) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30c) = 0x3ff00000;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[0x66] = 0x3ff0000000000000;
  param_1[0x67] = 0x3ff0000000000000;
  param_1[0x68] = 0x3ff0000000000000;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x364) = 0;
  *(undefined4 *)(param_1 + 0x6d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x36c) = 0x3ff00000;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0x3ff0000000000000;
  param_1[0x73] = 0x3ff0000000000000;
  param_1[0x74] = 0x3ff0000000000000;
  param_1[0x75] = 0;
  *(undefined4 *)(param_1 + 0x76) = 0x3f800000;
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
  param_1[0x80] = 0x3ff0000000000000;
  param_1[0x81] = 0x3ff0000000000000;
  param_1[0x82] = 0x3ff0000000000000;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  *(undefined4 *)(param_1 + 0x86) = 0;
  *(undefined4 *)((longlong)param_1 + 0x434) = 0;
  *(undefined4 *)(param_1 + 0x87) = 0;
  *(undefined4 *)((longlong)param_1 + 0x43c) = 0x3ff00000;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8c] = 0x3ff0000000000000;
  param_1[0x8d] = 0x3ff0000000000000;
  param_1[0x8e] = 0x3ff0000000000000;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  *(undefined4 *)(param_1 + 0x92) = 0;
  *(undefined4 *)((longlong)param_1 + 0x494) = 0;
  *(undefined4 *)(param_1 + 0x93) = 0;
  *(undefined4 *)((longlong)param_1 + 0x49c) = 0x3ff00000;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x98] = 0x3ff0000000000000;
  param_1[0x99] = 0x3ff0000000000000;
  param_1[0x9a] = 0x3ff0000000000000;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x9d) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x4f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4ec) = 0;
  return param_1;
}



// FUNCTION 149293c32 FUN_149293c32 body=52 status=ok
// SIG undefined FUN_149293c32(void)

undefined8 * FUN_149293c32(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149293c68 FUN_149293c68 body=82 status=ok
// SIG undefined FUN_149293c68(void)

void FUN_149293c68(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bbde6a0;
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined4 *)(param_2 + 6) = 0;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 7) = 0;
  *(undefined4 *)((longlong)param_2 + 0x3c) = 0x3ff00000;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[1] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 4;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_2[2] = 0x3f800000;
  param_2[3] = 0x3f80000000000000;
  return;
}



// FUNCTION 149293cba FUN_149293cba body=82 status=ok
// SIG undefined FUN_149293cba(void)

void FUN_149293cba(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bbde6a0;
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined4 *)(param_2 + 6) = 0;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 7) = 0;
  *(undefined4 *)((longlong)param_2 + 0x3c) = 0x3ff00000;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[1] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 4;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_2[2] = 0x3f800000;
  param_2[3] = 0x3f80000000000000;
  return;
}



// FUNCTION 149293d30 FUN_149293d30 body=42 status=ok
// SIG undefined FUN_149293d30(void)

undefined8 FUN_149293d30(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 149293d82 FUN_149293d82 body=59 status=ok
// SIG undefined FUN_149293d82(void)

undefined8 FUN_149293d82(longlong *param_1)

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



// FUNCTION 149293e2e FUN_149293e2e body=29 status=ok
// SIG undefined FUN_149293e2e(void)

undefined8 FUN_149293e2e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149293e4c FUN_149293e4c body=68 status=ok
// SIG undefined FUN_149293e4c(void)

void FUN_149293e4c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbde890;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0x3f800000;
  param_2[0x40] = 0x3f80000000000000;
  return;
}



// FUNCTION 149293e90 FUN_149293e90 body=68 status=ok
// SIG undefined FUN_149293e90(void)

void FUN_149293e90(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbde890;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0x3f800000;
  param_2[0x40] = 0x3f80000000000000;
  return;
}



// FUNCTION 149293ef8 FUN_149293ef8 body=111 status=ok
// SIG undefined FUN_149293ef8(void)

undefined8 FUN_149293ef8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      FUN_1491c05d4(param_2 + 0x10 + lVar6,param_3 + 0x10 + lVar6);
      puVar1 = (undefined4 *)(param_3 + 0x1f0 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x1f0 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      *(undefined8 *)(param_2 + 0x200 + lVar6) = *(undefined8 *)(param_3 + 0x200 + lVar6);
      lVar6 = lVar6 + 0x210;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149293f90 FUN_149293f90 body=59 status=ok
// SIG undefined FUN_149293f90(void)

undefined8 FUN_149293f90(longlong *param_1)

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



// FUNCTION 149293fdc FUN_149293fdc body=49 status=ok
// SIG undefined FUN_149293fdc(void)

void FUN_149293fdc(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x42) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x42) = 0;
  }
  return;
}



// FUNCTION 14929405c FUN_14929405c body=52 status=ok
// SIG undefined FUN_14929405c(void)

undefined8 * FUN_14929405c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149294092 FUN_149294092 body=64 status=ok
// SIG undefined FUN_149294092(void)

void FUN_149294092(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbdea80;
  param_2[0x3e] = 0;
  *(undefined4 *)(param_2 + 0x3f) = 0;
  return;
}



// FUNCTION 1492940d2 FUN_1492940d2 body=64 status=ok
// SIG undefined FUN_1492940d2(void)

void FUN_1492940d2(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbdea80;
  param_2[0x3e] = 0;
  *(undefined4 *)(param_2 + 0x3f) = 0;
  return;
}



// FUNCTION 149294136 FUN_149294136 body=109 status=ok
// SIG undefined FUN_149294136(void)

undefined8 FUN_149294136(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_1491c05d4(param_2 + 0x10 + lVar1,param_3 + 0x10 + lVar1);
      *(undefined8 *)(param_2 + 0x1f0 + lVar1) = *(undefined8 *)(param_3 + 0x1f0 + lVar1);
      *(undefined4 *)(param_2 + 0x1f8 + lVar1) = *(undefined4 *)(param_3 + 0x1f8 + lVar1);
      lVar1 = lVar1 + 0x200;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492941cc FUN_1492941cc body=59 status=ok
// SIG undefined FUN_1492941cc(void)

undefined8 FUN_1492941cc(longlong *param_1)

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



// FUNCTION 149294218 FUN_149294218 body=49 status=ok
// SIG undefined FUN_149294218(void)

void FUN_149294218(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 149294298 FUN_149294298 body=52 status=ok
// SIG undefined FUN_149294298(void)

undefined8 * FUN_149294298(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492942ce FUN_1492942ce body=78 status=ok
// SIG undefined FUN_1492942ce(void)

void FUN_1492942ce(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbdec70;
  param_2[0x3e] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x40;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 14929431c FUN_14929431c body=78 status=ok
// SIG undefined FUN_14929431c(void)

void FUN_14929431c(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbdec70;
  param_2[0x3e] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x40;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 14929438e FUN_14929438e body=114 status=ok
// SIG undefined FUN_14929438e(void)

undefined1 FUN_14929438e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      for (lVar1 = 0xe; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar2 = lVar2 + 0x260;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149294428 FUN_149294428 body=59 status=ok
// SIG undefined FUN_149294428(void)

undefined8 FUN_149294428(longlong *param_1)

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



// FUNCTION 149294474 FUN_149294474 body=49 status=ok
// SIG undefined FUN_149294474(void)

void FUN_149294474(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x4c) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x4c) = 0;
  }
  return;
}



// FUNCTION 1492944f4 FUN_1492944f4 body=52 status=ok
// SIG undefined FUN_1492944f4(void)

undefined8 * FUN_1492944f4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14929452a FUN_14929452a body=51 status=ok
// SIG undefined FUN_14929452a(void)

void FUN_14929452a(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x1f0);
  *param_2 = &PTR_FUN_14bbdee60;
  FUN_1412ca278(param_2 + 2);
  return;
}



// FUNCTION 149294596 FUN_149294596 body=70 status=ok
// SIG undefined FUN_149294596(void)

undefined1 FUN_149294596(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      FUN_1491c05d4(param_2,param_3);
      param_3 = param_3 + 0x1f0;
      param_2 = param_2 + 0x1f0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149294604 FUN_149294604 body=59 status=ok
// SIG undefined FUN_149294604(void)

undefined8 FUN_149294604(longlong *param_1)

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



// FUNCTION 149294650 FUN_149294650 body=49 status=ok
// SIG undefined FUN_149294650(void)

void FUN_149294650(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x3e) == '\x01') {
    *param_2 = &PTR_FUN_14bbdee60;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x3e) = 0;
  }
  return;
}



// FUNCTION 1492946d0 FUN_1492946d0 body=52 status=ok
// SIG undefined FUN_1492946d0(void)

undefined8 * FUN_1492946d0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbdee60;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149294704 FUN_149294704 body=29 status=ok
// SIG undefined FUN_149294704(void)

undefined8 FUN_149294704(undefined8 param_1,undefined8 param_2)

{
  FUN_1446f57c6(&DAT_14cc07488);
  return param_2;
}



// FUNCTION 149294726 FUN_149294726 body=51 status=ok
// SIG undefined FUN_149294726(void)

void FUN_149294726(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x1f0);
  *param_2 = &PTR_FUN_14bbdf050;
  FUN_1412ca278(param_2 + 2);
  return;
}



// FUNCTION 149294792 FUN_149294792 body=70 status=ok
// SIG undefined FUN_149294792(void)

undefined1 FUN_149294792(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      FUN_1491c05d4(param_2,param_3);
      param_3 = param_3 + 0x1f0;
      param_2 = param_2 + 0x1f0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149294800 FUN_149294800 body=59 status=ok
// SIG undefined FUN_149294800(void)

undefined8 FUN_149294800(longlong *param_1)

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



// FUNCTION 14929484c FUN_14929484c body=49 status=ok
// SIG undefined FUN_14929484c(void)

void FUN_14929484c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x3e) == '\x01') {
    *param_2 = &PTR_FUN_14bbdf050;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x3e) = 0;
  }
  return;
}



// FUNCTION 1492948cc FUN_1492948cc body=52 status=ok
// SIG undefined FUN_1492948cc(void)

undefined8 * FUN_1492948cc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbdf050;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149294900 FUN_149294900 body=29 status=ok
// SIG undefined FUN_149294900(void)

undefined8 FUN_149294900(undefined8 param_1,undefined8 param_2)

{
  FUN_1446f57c6(&DAT_14cc07498);
  return param_2;
}



// FUNCTION 149294922 FUN_149294922 body=51 status=ok
// SIG undefined FUN_149294922(void)

void FUN_149294922(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x1f0);
  *param_2 = &PTR_FUN_14bbdf240;
  FUN_1412ca278(param_2 + 2);
  return;
}



// FUNCTION 14929498e FUN_14929498e body=70 status=ok
// SIG undefined FUN_14929498e(void)

undefined1 FUN_14929498e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      FUN_1491c05d4(param_2,param_3);
      param_3 = param_3 + 0x1f0;
      param_2 = param_2 + 0x1f0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492949fc FUN_1492949fc body=59 status=ok
// SIG undefined FUN_1492949fc(void)

undefined8 FUN_1492949fc(longlong *param_1)

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



// FUNCTION 149294a48 FUN_149294a48 body=49 status=ok
// SIG undefined FUN_149294a48(void)

void FUN_149294a48(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x3e) == '\x01') {
    *param_2 = &PTR_FUN_14bbdf240;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x3e) = 0;
  }
  return;
}



// FUNCTION 149294ac8 FUN_149294ac8 body=52 status=ok
// SIG undefined FUN_149294ac8(void)

undefined8 * FUN_149294ac8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbdf240;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149294afc FUN_149294afc body=29 status=ok
// SIG undefined FUN_149294afc(void)

undefined8 FUN_149294afc(undefined8 param_1,undefined8 param_2)

{
  FUN_1446f57c6(&DAT_14cc074a8);
  return param_2;
}



// FUNCTION 149294b86 FUN_149294b86 body=59 status=ok
// SIG undefined FUN_149294b86(void)

undefined8 FUN_149294b86(longlong *param_1)

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



// FUNCTION 149294c26 FUN_149294c26 body=29 status=ok
// SIG undefined FUN_149294c26(void)

undefined8 FUN_149294c26(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149294c44 FUN_149294c44 body=59 status=ok
// SIG undefined FUN_149294c44(void)

void FUN_149294c44(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x1f0);
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbdf620;
  return;
}



// FUNCTION 149294c80 FUN_149294c80 body=43 status=ok
// SIG undefined FUN_149294c80(void)

void FUN_149294c80(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbdf620;
  return;
}



// FUNCTION 149294cd0 FUN_149294cd0 body=70 status=ok
// SIG undefined FUN_149294cd0(void)

undefined1 FUN_149294cd0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      FUN_1491c05d4(param_2,param_3);
      param_3 = param_3 + 0x1f0;
      param_2 = param_2 + 0x1f0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149294d3e FUN_149294d3e body=59 status=ok
// SIG undefined FUN_149294d3e(void)

undefined8 FUN_149294d3e(longlong *param_1)

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



// FUNCTION 149294d8a FUN_149294d8a body=49 status=ok
// SIG undefined FUN_149294d8a(void)

void FUN_149294d8a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x3e) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x3e) = 0;
  }
  return;
}



// FUNCTION 149294e0a FUN_149294e0a body=52 status=ok
// SIG undefined FUN_149294e0a(void)

undefined8 * FUN_149294e0a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149294ec4 FUN_149294ec4 body=78 status=ok
// SIG undefined FUN_149294ec4(void)

undefined1 FUN_149294ec4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x20);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0x13);
      uVar6 = *(undefined4 *)(param_3 + -0xf);
      uVar7 = *(undefined4 *)(param_3 + -0xb);
      *(undefined4 *)(param_2 + -0x17) = *(undefined4 *)(param_3 + -0x17);
      *(undefined4 *)(param_2 + -0x13) = uVar5;
      *(undefined4 *)(param_2 + -0xf) = uVar6;
      *(undefined4 *)(param_2 + -0xb) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      FUN_1444888de(param_2,param_3);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149294f3a FUN_149294f3a body=59 status=ok
// SIG undefined FUN_149294f3a(void)

undefined8 FUN_149294f3a(longlong *param_1)

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



// FUNCTION 149294f80 FUN_149294f80 body=48 status=ok
// SIG undefined FUN_149294f80(void)

void FUN_149294f80(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 7) == '\x01') {
    *param_2 = &PTR_FUN_14bbdf810;
    if (param_2[5] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 7) = 0;
  }
  return;
}



// FUNCTION 149294ffe FUN_149294ffe body=57 status=ok
// SIG undefined FUN_149294ffe(void)

undefined8 * FUN_149294ffe(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbdf810;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492950bc FUN_1492950bc body=78 status=ok
// SIG undefined FUN_1492950bc(void)

undefined1 FUN_1492950bc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x20);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0x13);
      uVar6 = *(undefined4 *)(param_3 + -0xf);
      uVar7 = *(undefined4 *)(param_3 + -0xb);
      *(undefined4 *)(param_2 + -0x17) = *(undefined4 *)(param_3 + -0x17);
      *(undefined4 *)(param_2 + -0x13) = uVar5;
      *(undefined4 *)(param_2 + -0xf) = uVar6;
      *(undefined4 *)(param_2 + -0xb) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      FUN_1444888de(param_2,param_3);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149295132 FUN_149295132 body=59 status=ok
// SIG undefined FUN_149295132(void)

undefined8 FUN_149295132(longlong *param_1)

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



// FUNCTION 149295178 FUN_149295178 body=48 status=ok
// SIG undefined FUN_149295178(void)

void FUN_149295178(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 7) == '\x01') {
    *param_2 = &PTR_FUN_14bbdfa00;
    if (param_2[5] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 7) = 0;
  }
  return;
}



// FUNCTION 1492951f6 FUN_1492951f6 body=57 status=ok
// SIG undefined FUN_1492951f6(void)

undefined8 * FUN_1492951f6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbdfa00;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149295290 FUN_149295290 body=76 status=ok
// SIG undefined FUN_149295290(void)

undefined8 FUN_149295290(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      FUN_1444888de(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149295304 FUN_149295304 body=59 status=ok
// SIG undefined FUN_149295304(void)

undefined8 FUN_149295304(longlong *param_1)

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



// FUNCTION 14929534a FUN_14929534a body=48 status=ok
// SIG undefined FUN_14929534a(void)

void FUN_14929534a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 5) == '\x01') {
    *param_2 = &PTR_FUN_14bbdfbf0;
    if (param_2[3] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 5) = 0;
  }
  return;
}



// FUNCTION 1492953c8 FUN_1492953c8 body=57 status=ok
// SIG undefined FUN_1492953c8(void)

undefined8 * FUN_1492953c8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbdfbf0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149295462 FUN_149295462 body=76 status=ok
// SIG undefined FUN_149295462(void)

undefined8 FUN_149295462(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      FUN_1444888de(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492954d6 FUN_1492954d6 body=59 status=ok
// SIG undefined FUN_1492954d6(void)

undefined8 FUN_1492954d6(longlong *param_1)

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



// FUNCTION 14929551c FUN_14929551c body=48 status=ok
// SIG undefined FUN_14929551c(void)

void FUN_14929551c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 5) == '\x01') {
    *param_2 = &PTR_FUN_14bbe1e40;
    if (param_2[3] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 5) = 0;
  }
  return;
}



// FUNCTION 149295610 FUN_149295610 body=78 status=ok
// SIG undefined FUN_149295610(void)

undefined8 FUN_149295610(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      uVar1 = *(undefined8 *)(param_3 + -0x10);
      *(undefined8 *)(param_2 + -9) = *(undefined8 *)(param_3 + -9);
      *(undefined8 *)(param_2 + -0x10) = uVar1;
      FUN_1444888de(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149295686 FUN_149295686 body=59 status=ok
// SIG undefined FUN_149295686(void)

undefined8 FUN_149295686(longlong *param_1)

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



// FUNCTION 1492956cc FUN_1492956cc body=48 status=ok
// SIG undefined FUN_1492956cc(void)

void FUN_1492956cc(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 5) == '\x01') {
    *param_2 = &PTR_FUN_14bbdff40;
    if (param_2[3] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 5) = 0;
  }
  return;
}



// FUNCTION 14929574a FUN_14929574a body=57 status=ok
// SIG undefined FUN_14929574a(void)

undefined8 * FUN_14929574a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbdff40;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492957f4 FUN_1492957f4 body=70 status=ok
// SIG undefined FUN_1492957f4(void)

undefined1 FUN_1492957f4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_1444888de(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149295862 FUN_149295862 body=59 status=ok
// SIG undefined FUN_149295862(void)

undefined8 FUN_149295862(longlong *param_1)

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



// FUNCTION 1492958a8 FUN_1492958a8 body=48 status=ok
// SIG undefined FUN_1492958a8(void)

void FUN_1492958a8(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 5) == '\x01') {
    *param_2 = &PTR_FUN_14bbe1ed0;
    if (param_2[3] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 5) = 0;
  }
  return;
}



// FUNCTION 149295978 FUN_149295978 body=68 status=ok
// SIG undefined FUN_149295978(void)

undefined1 FUN_149295978(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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


