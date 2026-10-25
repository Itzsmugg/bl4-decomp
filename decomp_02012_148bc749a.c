// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148bc749a FUN_148bc749a body=39 status=ok
// SIG undefined FUN_148bc749a(void)

void FUN_148bc749a(undefined8 param_1,undefined8 *param_2)

{
  FUN_140d710e4(param_2);
  *param_2 = &PTR_FUN_14b667670;
  *(undefined1 *)(param_2 + 0x10) = 1;
  return;
}



// FUNCTION 148bc74ea FUN_148bc74ea body=207 status=ok
// SIG undefined FUN_148bc74ea(void)

undefined8 FUN_148bc74ea(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_1470d00c2(param_2 + 0x28 + lVar10,param_3 + 0x28 + lVar10);
      *(undefined8 *)(param_2 + 0x40 + lVar10) = *(undefined8 *)(param_3 + 0x40 + lVar10);
      *(undefined1 *)(param_2 + 0x48 + lVar10) = *(undefined1 *)(param_3 + 0x48 + lVar10);
      *(undefined2 *)(param_2 + 0x50 + lVar10) = *(undefined2 *)(param_3 + 0x50 + lVar10);
      *(undefined1 *)(param_2 + 0x68 + lVar10) = *(undefined1 *)(param_3 + 0x68 + lVar10);
      *(undefined8 *)(param_2 + 0x60 + lVar10) = *(undefined8 *)(param_3 + 0x60 + lVar10);
      *(undefined4 *)(param_2 + 0x70 + lVar10) = *(undefined4 *)(param_3 + 0x70 + lVar10);
      *(undefined8 *)(param_2 + 0x78 + lVar10) = *(undefined8 *)(param_3 + 0x78 + lVar10);
      *(undefined1 *)(param_2 + 0x80 + lVar10) = *(undefined1 *)(param_3 + 0x80 + lVar10);
      lVar10 = lVar10 + 0x88;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bc75e2 FUN_148bc75e2 body=59 status=ok
// SIG undefined FUN_148bc75e2(void)

undefined8 FUN_148bc75e2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc762e FUN_148bc762e body=38 status=ok
// SIG undefined FUN_148bc762e(void)

void FUN_148bc762e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 148bc76fe FUN_148bc76fe body=118 status=ok
// SIG undefined FUN_148bc76fe(void)

undefined8 FUN_148bc76fe(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      FUN_1470d03b0(param_2 + 8,param_3 + 8);
      FUN_1470d03b0(param_2 + 0x20,param_3 + 0x20);
    }
    *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_3 + 0x48);
    uVar1 = *(undefined8 *)(param_3 + 0x40);
    *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_3 + 0x38);
    *(undefined8 *)(param_2 + 0x40) = uVar1;
    *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_3 + 0x50);
    *(undefined2 *)(param_2 + 0x54) = *(undefined2 *)(param_3 + 0x54);
    *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_3 + 0x58);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 148bc779c FUN_148bc779c body=59 status=ok
// SIG undefined FUN_148bc779c(void)

undefined8 FUN_148bc779c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc77e2 FUN_148bc77e2 body=32 status=ok
// SIG undefined FUN_148bc77e2(void)

void FUN_148bc77e2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 148bc7852 FUN_148bc7852 body=103 status=ok
// SIG undefined FUN_148bc7852(void)

void FUN_148bc7852(undefined8 param_1,undefined8 *param_2)

{
  FUN_1409e6ae2(param_2);
  *param_2 = &PTR_FUN_14b667ab0;
  *(undefined4 *)(param_2 + 0x8b) = 0x3f800000;
  param_2[0x8c] = 0;
  param_2[0x8d] = 0;
  param_2[0x8e] = 0;
  param_2[0x8f] = 0;
  param_2[0x90] = 0;
  param_2[0x91] = 0;
  *(undefined4 *)(param_2 + 0x92) = 0xf00000d0;
  param_2[0x93] = 0;
  *(undefined4 *)(param_2 + 0x94) = 0x3f800000;
  *(undefined2 *)(param_2 + 0x95) = 0x100;
  return;
}



// FUNCTION 148bc78d0 FUN_148bc78d0 body=99 status=ok
// SIG undefined FUN_148bc78d0(void)

undefined8 FUN_148bc78d0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b897b2(param_2,param_3);
    FUN_140d02432(param_2 + 0x458,param_3 + 0x458);
    *(undefined2 *)(param_2 + 0x4a8) = *(undefined2 *)(param_3 + 0x4a8);
    param_2 = param_2 + 0x4b0;
    param_3 = param_3 + 0x4b0;
  }
  return 1;
}



// FUNCTION 148bc795c FUN_148bc795c body=59 status=ok
// SIG undefined FUN_148bc795c(void)

undefined8 FUN_148bc795c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc79a8 FUN_148bc79a8 body=38 status=ok
// SIG undefined FUN_148bc79a8(void)

void FUN_148bc79a8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x4b0) == '\x01') {
    FUN_14075380c(param_2);
    *(undefined1 *)(param_2 + 0x4b0) = 0;
  }
  return;
}



// FUNCTION 148bc7a2e FUN_148bc7a2e body=141 status=ok
// SIG undefined FUN_148bc7a2e(void)

undefined8 FUN_148bc7a2e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b897b2(param_2,param_3);
    FUN_140d02432(param_2 + 0x458,param_3 + 0x458);
    *(undefined2 *)(param_2 + 0x4a8) = *(undefined2 *)(param_3 + 0x4a8);
    *(undefined8 *)(param_2 + 0x4cd) = *(undefined8 *)(param_3 + 0x4cd);
    uVar1 = *(undefined4 *)(param_3 + 0x4b0);
    uVar2 = *(undefined4 *)(param_3 + 0x4b4);
    uVar3 = *(undefined4 *)(param_3 + 0x4b8);
    uVar4 = *(undefined4 *)(param_3 + 0x4bc);
    uVar5 = *(undefined4 *)(param_3 + 0x4c4);
    uVar6 = *(undefined4 *)(param_3 + 0x4c8);
    uVar7 = *(undefined4 *)(param_3 + 0x4cc);
    *(undefined4 *)(param_2 + 0x4c0) = *(undefined4 *)(param_3 + 0x4c0);
    *(undefined4 *)(param_2 + 0x4c4) = uVar5;
    *(undefined4 *)(param_2 + 0x4c8) = uVar6;
    *(undefined4 *)(param_2 + 0x4cc) = uVar7;
    *(undefined4 *)(param_2 + 0x4b0) = uVar1;
    *(undefined4 *)(param_2 + 0x4b4) = uVar2;
    *(undefined4 *)(param_2 + 0x4b8) = uVar3;
    *(undefined4 *)(param_2 + 0x4bc) = uVar4;
    param_2 = param_2 + 0x4d8;
    param_3 = param_3 + 0x4d8;
  }
  return 1;
}



// FUNCTION 148bc7ae4 FUN_148bc7ae4 body=59 status=ok
// SIG undefined FUN_148bc7ae4(void)

undefined8 FUN_148bc7ae4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc7b30 FUN_148bc7b30 body=38 status=ok
// SIG undefined FUN_148bc7b30(void)

void FUN_148bc7b30(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x4d8) == '\x01') {
    FUN_14075380c(param_2);
    *(undefined1 *)(param_2 + 0x4d8) = 0;
  }
  return;
}



// FUNCTION 148bc7b96 FUN_148bc7b96 body=148 status=ok
// SIG undefined FUN_148bc7b96(void)

undefined8 * FUN_148bc7b96(undefined8 *param_1)

{
  FUN_1409e6ae2();
  *(undefined4 *)(param_1 + 0x8b) = 0x3f800000;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  *(undefined4 *)(param_1 + 0x92) = 0xf00000d0;
  param_1[0x93] = 0;
  *(undefined4 *)(param_1 + 0x94) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x95) = 0x100;
  *param_1 = &PTR_FUN_14b667d70;
  param_1[0x96] = 0x4316000043fa0000;
  param_1[0x97] = 0x4316000043fa0000;
  param_1[0x98] = 0x43fa000044e10000;
  param_1[0x99] = 0x43160000c3c80000;
  *(undefined4 *)(param_1 + 0x9a) = 0x42480000;
  *(undefined1 *)((longlong)param_1 + 0x4d4) = 1;
  return param_1;
}



// FUNCTION 148bc7c2c FUN_148bc7c2c body=103 status=ok
// SIG undefined FUN_148bc7c2c(void)

void FUN_148bc7c2c(undefined8 param_1,undefined8 *param_2)

{
  FUN_1409e6ae2(param_2);
  *(undefined4 *)(param_2 + 0x8b) = 0x3f800000;
  param_2[0x8c] = 0;
  param_2[0x8d] = 0;
  param_2[0x8e] = 0;
  param_2[0x8f] = 0;
  param_2[0x90] = 0;
  param_2[0x91] = 0;
  *(undefined4 *)(param_2 + 0x92) = 0xf00000d0;
  param_2[0x93] = 0;
  *(undefined4 *)(param_2 + 0x94) = 0x3f800000;
  *(undefined2 *)(param_2 + 0x95) = 0x100;
  *param_2 = &PTR_FUN_14b668030;
  return;
}



// FUNCTION 148bc7caa FUN_148bc7caa body=99 status=ok
// SIG undefined FUN_148bc7caa(void)

undefined8 FUN_148bc7caa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b897b2(param_2,param_3);
    FUN_140d02432(param_2 + 0x458,param_3 + 0x458);
    *(undefined2 *)(param_2 + 0x4a8) = *(undefined2 *)(param_3 + 0x4a8);
    param_2 = param_2 + 0x4b0;
    param_3 = param_3 + 0x4b0;
  }
  return 1;
}



// FUNCTION 148bc7d36 FUN_148bc7d36 body=59 status=ok
// SIG undefined FUN_148bc7d36(void)

undefined8 FUN_148bc7d36(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc7d82 FUN_148bc7d82 body=38 status=ok
// SIG undefined FUN_148bc7d82(void)

void FUN_148bc7d82(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x4b0) == '\x01') {
    FUN_14075380c(param_2);
    *(undefined1 *)(param_2 + 0x4b0) = 0;
  }
  return;
}



// FUNCTION 148bc7dde FUN_148bc7dde body=103 status=ok
// SIG undefined FUN_148bc7dde(void)

void FUN_148bc7dde(undefined8 param_1,undefined8 *param_2)

{
  FUN_1409e6ae2(param_2);
  *(undefined4 *)(param_2 + 0x8b) = 0x3f800000;
  param_2[0x8c] = 0;
  param_2[0x8d] = 0;
  param_2[0x8e] = 0;
  param_2[0x8f] = 0;
  param_2[0x90] = 0;
  param_2[0x91] = 0;
  *(undefined4 *)(param_2 + 0x92) = 0xf00000d0;
  param_2[0x93] = 0;
  *(undefined4 *)(param_2 + 0x94) = 0x3f800000;
  *(undefined2 *)(param_2 + 0x95) = 0x100;
  *param_2 = &PTR_FUN_14b6682f0;
  return;
}



// FUNCTION 148bc7e5c FUN_148bc7e5c body=99 status=ok
// SIG undefined FUN_148bc7e5c(void)

undefined8 FUN_148bc7e5c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b897b2(param_2,param_3);
    FUN_140d02432(param_2 + 0x458,param_3 + 0x458);
    *(undefined2 *)(param_2 + 0x4a8) = *(undefined2 *)(param_3 + 0x4a8);
    param_2 = param_2 + 0x4b0;
    param_3 = param_3 + 0x4b0;
  }
  return 1;
}



// FUNCTION 148bc7ee8 FUN_148bc7ee8 body=59 status=ok
// SIG undefined FUN_148bc7ee8(void)

undefined8 FUN_148bc7ee8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc7f34 FUN_148bc7f34 body=38 status=ok
// SIG undefined FUN_148bc7f34(void)

void FUN_148bc7f34(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x4b0) == '\x01') {
    FUN_14075380c(param_2);
    *(undefined1 *)(param_2 + 0x4b0) = 0;
  }
  return;
}



// FUNCTION 148bc7fae FUN_148bc7fae body=63 status=ok
// SIG undefined FUN_148bc7fae(void)

undefined1 FUN_148bc7fae(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bc80d8(param_2,param_3);
    param_3 = param_3 + 0x590;
    param_2 = param_2 + 0x590;
  }
  return 1;
}



// FUNCTION 148bc8016 FUN_148bc8016 body=59 status=ok
// SIG undefined FUN_148bc8016(void)

undefined8 FUN_148bc8016(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc8062 FUN_148bc8062 body=40 status=ok
// SIG undefined FUN_148bc8062(void)

void FUN_148bc8062(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x590) == '\x01') {
    FUN_145a0d438(param_2);
    *(undefined1 *)(param_2 + 0x590) = 0;
  }
  return;
}



// FUNCTION 148bc80d8 FUN_148bc80d8 body=1018 status=ok
// SIG undefined FUN_148bc80d8(void)

longlong FUN_148bc80d8(longlong param_1,longlong param_2)

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
  undefined8 uVar16;
  
  if (*(char *)(param_2 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  uVar1 = *(undefined4 *)(param_2 + 0x18);
  uVar2 = *(undefined4 *)(param_2 + 0x1c);
  uVar3 = *(undefined4 *)(param_2 + 0x20);
  uVar4 = *(undefined4 *)(param_2 + 0x24);
  uVar5 = *(undefined4 *)(param_2 + 0x28);
  uVar6 = *(undefined4 *)(param_2 + 0x2c);
  uVar7 = *(undefined4 *)(param_2 + 0x30);
  uVar8 = *(undefined4 *)(param_2 + 0x34);
  uVar9 = *(undefined4 *)(param_2 + 0x38);
  uVar10 = *(undefined4 *)(param_2 + 0x3c);
  uVar11 = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x38) = uVar9;
  *(undefined4 *)(param_1 + 0x3c) = uVar10;
  *(undefined4 *)(param_1 + 0x40) = uVar11;
  *(undefined4 *)(param_1 + 0x28) = uVar5;
  *(undefined4 *)(param_1 + 0x2c) = uVar6;
  *(undefined4 *)(param_1 + 0x30) = uVar7;
  *(undefined4 *)(param_1 + 0x34) = uVar8;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  *(undefined4 *)(param_1 + 0x24) = uVar4;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  *(undefined2 *)(param_1 + 0xbc) = *(undefined2 *)(param_2 + 0xbc);
  FUN_14093c00e(param_1 + 0xc0,param_2 + 0xc0);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  uVar1 = *(undefined4 *)(param_2 + 0xdc);
  uVar2 = *(undefined4 *)(param_2 + 0xe0);
  uVar3 = *(undefined4 *)(param_2 + 0xe4);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  *(undefined4 *)(param_1 + 0xdc) = uVar1;
  *(undefined4 *)(param_1 + 0xe0) = uVar2;
  *(undefined4 *)(param_1 + 0xe4) = uVar3;
  FUN_144a787a6(param_1 + 0xe8,param_2 + 0xe8);
  *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_2 + 0x168);
  *(undefined2 *)(param_1 + 0x16c) = *(undefined2 *)(param_2 + 0x16c);
  FUN_14093c00e(param_1 + 0x170,param_2 + 0x170);
  *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_2 + 0x180);
  uVar1 = *(undefined4 *)(param_2 + 0x18c);
  uVar2 = *(undefined4 *)(param_2 + 400);
  uVar3 = *(undefined4 *)(param_2 + 0x194);
  *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_2 + 0x188);
  *(undefined4 *)(param_1 + 0x18c) = uVar1;
  *(undefined4 *)(param_1 + 400) = uVar2;
  *(undefined4 *)(param_1 + 0x194) = uVar3;
  FUN_144a787a6(param_1 + 0x198,param_2 + 0x198);
  *(undefined4 *)(param_1 + 0x218) = *(undefined4 *)(param_2 + 0x218);
  *(undefined2 *)(param_1 + 0x21c) = *(undefined2 *)(param_2 + 0x21c);
  FUN_14093c00e(param_1 + 0x220,param_2 + 0x220);
  *(undefined8 *)(param_1 + 0x230) = *(undefined8 *)(param_2 + 0x230);
  uVar1 = *(undefined4 *)(param_2 + 0x23c);
  uVar2 = *(undefined4 *)(param_2 + 0x240);
  uVar3 = *(undefined4 *)(param_2 + 0x244);
  *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(param_2 + 0x238);
  *(undefined4 *)(param_1 + 0x23c) = uVar1;
  *(undefined4 *)(param_1 + 0x240) = uVar2;
  *(undefined4 *)(param_1 + 0x244) = uVar3;
  FUN_144a787a6(param_1 + 0x248,param_2 + 0x248);
  *(undefined1 *)(param_1 + 600) = *(undefined1 *)(param_2 + 600);
  *(undefined2 *)(param_1 + 0x2d4) = *(undefined2 *)(param_2 + 0x2d4);
  *(undefined4 *)(param_1 + 0x2d0) = *(undefined4 *)(param_2 + 0x2d0);
  FUN_14093c00e(param_1 + 0x2d8,param_2 + 0x2d8);
  *(undefined8 *)(param_1 + 0x2e8) = *(undefined8 *)(param_2 + 0x2e8);
  uVar1 = *(undefined4 *)(param_2 + 0x2f4);
  uVar2 = *(undefined4 *)(param_2 + 0x2f8);
  uVar3 = *(undefined4 *)(param_2 + 0x2fc);
  *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(param_2 + 0x2f0);
  *(undefined4 *)(param_1 + 0x2f4) = uVar1;
  *(undefined4 *)(param_1 + 0x2f8) = uVar2;
  *(undefined4 *)(param_1 + 0x2fc) = uVar3;
  FUN_144a787a6(param_1 + 0x300,param_2 + 0x300);
  *(undefined4 *)(param_1 + 0x380) = *(undefined4 *)(param_2 + 0x380);
  *(undefined2 *)(param_1 + 900) = *(undefined2 *)(param_2 + 900);
  FUN_14093c00e(param_1 + 0x388,param_2 + 0x388);
  *(undefined8 *)(param_1 + 0x398) = *(undefined8 *)(param_2 + 0x398);
  uVar1 = *(undefined4 *)(param_2 + 0x3a4);
  uVar2 = *(undefined4 *)(param_2 + 0x3a8);
  uVar3 = *(undefined4 *)(param_2 + 0x3ac);
  *(undefined4 *)(param_1 + 0x3a0) = *(undefined4 *)(param_2 + 0x3a0);
  *(undefined4 *)(param_1 + 0x3a4) = uVar1;
  *(undefined4 *)(param_1 + 0x3a8) = uVar2;
  *(undefined4 *)(param_1 + 0x3ac) = uVar3;
  FUN_144a787a6(param_1 + 0x3b0,param_2 + 0x3b0);
  uVar1 = *(undefined4 *)(param_2 + 0x3c0);
  uVar2 = *(undefined4 *)(param_2 + 0x3c4);
  uVar3 = *(undefined4 *)(param_2 + 0x3c8);
  uVar4 = *(undefined4 *)(param_2 + 0x3cc);
  uVar5 = *(undefined4 *)(param_2 + 0x3d0);
  uVar6 = *(undefined4 *)(param_2 + 0x3d4);
  uVar7 = *(undefined4 *)(param_2 + 0x3d8);
  uVar8 = *(undefined4 *)(param_2 + 0x3dc);
  uVar9 = *(undefined4 *)(param_2 + 0x3e0);
  uVar10 = *(undefined4 *)(param_2 + 0x3e4);
  uVar11 = *(undefined4 *)(param_2 + 1000);
  uVar12 = *(undefined4 *)(param_2 + 0x3ec);
  uVar13 = *(undefined4 *)(param_2 + 0x3f4);
  uVar14 = *(undefined4 *)(param_2 + 0x3f8);
  uVar15 = *(undefined4 *)(param_2 + 0x3fc);
  *(undefined4 *)(param_1 + 0x3f0) = *(undefined4 *)(param_2 + 0x3f0);
  *(undefined4 *)(param_1 + 0x3f4) = uVar13;
  *(undefined4 *)(param_1 + 0x3f8) = uVar14;
  *(undefined4 *)(param_1 + 0x3fc) = uVar15;
  *(undefined4 *)(param_1 + 0x3e0) = uVar9;
  *(undefined4 *)(param_1 + 0x3e4) = uVar10;
  *(undefined4 *)(param_1 + 1000) = uVar11;
  *(undefined4 *)(param_1 + 0x3ec) = uVar12;
  *(undefined4 *)(param_1 + 0x3d0) = uVar5;
  *(undefined4 *)(param_1 + 0x3d4) = uVar6;
  *(undefined4 *)(param_1 + 0x3d8) = uVar7;
  *(undefined4 *)(param_1 + 0x3dc) = uVar8;
  *(undefined4 *)(param_1 + 0x3c0) = uVar1;
  *(undefined4 *)(param_1 + 0x3c4) = uVar2;
  *(undefined4 *)(param_1 + 0x3c8) = uVar3;
  *(undefined4 *)(param_1 + 0x3cc) = uVar4;
  *(undefined2 *)(param_1 + 0x400) = *(undefined2 *)(param_2 + 0x400);
  *(undefined1 *)(param_1 + 0x402) = *(undefined1 *)(param_2 + 0x402);
  *(undefined8 *)(param_1 + 0x408) = *(undefined8 *)(param_2 + 0x408);
  *(undefined4 *)(param_1 + 0x410) = *(undefined4 *)(param_2 + 0x410);
  FUN_1447715ec(param_1 + 0x418,param_2 + 0x418);
  *(undefined1 *)(param_1 + 0x440) = *(undefined1 *)(param_2 + 0x440);
  *(undefined2 *)(param_1 + 0x448) = *(undefined2 *)(param_2 + 0x448);
  *(undefined1 *)(param_1 + 0x44a) = *(undefined1 *)(param_2 + 0x44a);
  *(undefined8 *)(param_1 + 0x450) = *(undefined8 *)(param_2 + 0x450);
  *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_2 + 0x458);
  FUN_1447715ec(param_1 + 0x460,param_2 + 0x460);
  *(undefined1 *)(param_1 + 0x488) = *(undefined1 *)(param_2 + 0x488);
  *(undefined2 *)(param_1 + 0x490) = *(undefined2 *)(param_2 + 0x490);
  *(undefined1 *)(param_1 + 0x492) = *(undefined1 *)(param_2 + 0x492);
  *(undefined8 *)(param_1 + 0x498) = *(undefined8 *)(param_2 + 0x498);
  *(undefined4 *)(param_1 + 0x4a0) = *(undefined4 *)(param_2 + 0x4a0);
  FUN_1447715ec(param_1 + 0x4a8,param_2 + 0x4a8);
  *(undefined1 *)(param_1 + 0x4d0) = *(undefined1 *)(param_2 + 0x4d0);
  *(undefined8 *)(param_1 + 0x4d8) = *(undefined8 *)(param_2 + 0x4d8);
  uVar1 = *(undefined4 *)(param_2 + 0x4e4);
  uVar2 = *(undefined4 *)(param_2 + 0x4e8);
  uVar3 = *(undefined4 *)(param_2 + 0x4ec);
  *(undefined4 *)(param_1 + 0x4e0) = *(undefined4 *)(param_2 + 0x4e0);
  *(undefined4 *)(param_1 + 0x4e4) = uVar1;
  *(undefined4 *)(param_1 + 0x4e8) = uVar2;
  *(undefined4 *)(param_1 + 0x4ec) = uVar3;
  FUN_144a787a6(param_1 + 0x4f0,param_2 + 0x4f0);
  *(undefined1 *)(param_1 + 0x500) = *(undefined1 *)(param_2 + 0x500);
  *(undefined8 *)(param_1 + 0x508) = *(undefined8 *)(param_2 + 0x508);
  uVar1 = *(undefined4 *)(param_2 + 0x514);
  uVar2 = *(undefined4 *)(param_2 + 0x518);
  uVar3 = *(undefined4 *)(param_2 + 0x51c);
  *(undefined4 *)(param_1 + 0x510) = *(undefined4 *)(param_2 + 0x510);
  *(undefined4 *)(param_1 + 0x514) = uVar1;
  *(undefined4 *)(param_1 + 0x518) = uVar2;
  *(undefined4 *)(param_1 + 0x51c) = uVar3;
  FUN_144a787a6(param_1 + 0x520,param_2 + 0x520);
  uVar16 = *(undefined8 *)(param_2 + 0x538);
  uVar1 = *(undefined4 *)(param_2 + 0x540);
  uVar2 = *(undefined4 *)(param_2 + 0x544);
  uVar3 = *(undefined4 *)(param_2 + 0x548);
  uVar4 = *(undefined4 *)(param_2 + 0x54c);
  *(undefined8 *)(param_1 + 0x530) = *(undefined8 *)(param_2 + 0x530);
  *(undefined8 *)(param_1 + 0x538) = uVar16;
  *(undefined4 *)(param_1 + 0x540) = uVar1;
  *(undefined4 *)(param_1 + 0x544) = uVar2;
  *(undefined4 *)(param_1 + 0x548) = uVar3;
  *(undefined4 *)(param_1 + 0x54c) = uVar4;
  *(undefined8 *)(param_1 + 0x550) = *(undefined8 *)(param_2 + 0x550);
  *(undefined8 *)(param_1 + 0x558) = *(undefined8 *)(param_2 + 0x558);
  uVar1 = *(undefined4 *)(param_2 + 0x564);
  uVar2 = *(undefined4 *)(param_2 + 0x568);
  uVar3 = *(undefined4 *)(param_2 + 0x56c);
  *(undefined4 *)(param_1 + 0x560) = *(undefined4 *)(param_2 + 0x560);
  *(undefined4 *)(param_1 + 0x564) = uVar1;
  *(undefined4 *)(param_1 + 0x568) = uVar2;
  *(undefined4 *)(param_1 + 0x56c) = uVar3;
  FUN_144a787a6(param_1 + 0x570,param_2 + 0x570);
  uVar16 = *(undefined8 *)(param_2 + 0x588);
  *(undefined8 *)(param_1 + 0x580) = *(undefined8 *)(param_2 + 0x580);
  *(undefined8 *)(param_1 + 0x588) = uVar16;
  return param_1;
}



// FUNCTION 148bc84d4 FUN_148bc84d4 body=57 status=ok
// SIG undefined FUN_148bc84d4(void)

void FUN_148bc84d4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4020 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4020 = FUN_140002ddd(FUN_1465bc5c3,uVar1,L"GrappleDef");
  }
  return;
}



// FUNCTION 148bc85c6 FUN_148bc85c6 body=59 status=ok
// SIG undefined FUN_148bc85c6(void)

undefined8 FUN_148bc85c6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc869c FUN_148bc869c body=110 status=ok
// SIG undefined FUN_148bc869c(void)

undefined1 FUN_148bc869c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3) = lVar2;
      *(undefined8 *)(param_2 + 8 + lVar3) = *(undefined8 *)(param_3 + 8 + lVar3);
      *(undefined4 *)(param_2 + 0x10 + lVar3) = *(undefined4 *)(param_3 + 0x10 + lVar3);
      lVar3 = lVar3 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bc8732 FUN_148bc8732 body=111 status=ok
// SIG undefined FUN_148bc8732(void)

void FUN_148bc8732(longlong *param_1,longlong param_2)

{
  uint uVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  uVar1 = ((uint)(*(ulonglong *)(param_2 + 8) >> 0x14) & 0xffff ^
          (uint)(*(ulonglong *)(param_2 + 8) >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  FUN_144a78877(uVar1 >> 0x10 ^ uVar1,*(undefined4 *)(param_2 + 0x10));
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc8808 FUN_148bc8808 body=115 status=ok
// SIG undefined FUN_148bc8808(void)

void FUN_148bc8808(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 4;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_2[0x10] = 0;
  *(undefined4 *)(param_2 + 0x11) = 0x100;
  *(undefined1 *)((longlong)param_2 + 0x8c) = 0;
  *(undefined4 *)(param_2 + 0x12) = 0;
  *(undefined1 *)((longlong)param_2 + 0x94) = 0;
  *(undefined4 *)(param_2 + 0x13) = 0;
  *(undefined1 *)((longlong)param_2 + 0x9c) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0;
  *(undefined1 *)((longlong)param_2 + 0xa4) = 0;
  param_2[0x15] = 0;
  *(undefined1 *)(param_2 + 0x16) = 0;
  param_2[0x17] = 0;
  return;
}



// FUNCTION 148bc88bc FUN_148bc88bc body=59 status=ok
// SIG undefined FUN_148bc88bc(void)

undefined8 FUN_148bc88bc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc89ae FUN_148bc89ae body=120 status=ok
// SIG undefined FUN_148bc89ae(void)

undefined1 FUN_148bc89ae(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3) = lVar2;
      *(undefined8 *)(param_2 + 8 + lVar3) = *(undefined8 *)(param_3 + 8 + lVar3);
      *(undefined4 *)(param_2 + 0x10 + lVar3) = *(undefined4 *)(param_3 + 0x10 + lVar3);
      *(undefined8 *)(param_2 + 0x18 + lVar3) = *(undefined8 *)(param_3 + 0x18 + lVar3);
      lVar3 = lVar3 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bc8a4e FUN_148bc8a4e body=59 status=ok
// SIG undefined FUN_148bc8a4e(void)

undefined8 FUN_148bc8a4e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc8b9c FUN_148bc8b9c body=54 status=ok
// SIG undefined FUN_148bc8b9c(void)

undefined1 FUN_148bc8b9c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bc8c9a(param_2,param_3);
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return 1;
}



// FUNCTION 148bc8bfa FUN_148bc8bfa body=59 status=ok
// SIG undefined FUN_148bc8bfa(void)

undefined8 FUN_148bc8bfa(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc8c9a FUN_148bc8c9a body=109 status=ok
// SIG undefined FUN_148bc8c9a(void)

longlong * FUN_148bc8c9a(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar2 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *param_2;
    }
  }
  bVar1 = DAT_14c950c29;
  *param_1 = lVar2;
  lVar2 = param_2[1];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[1];
    }
  }
  param_1[1] = lVar2;
  plVar3 = param_2 + 2;
  plVar4 = param_1 + 2;
  for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
    *plVar4 = *plVar3;
    plVar3 = plVar3 + 1;
    plVar4 = plVar4 + 1;
  }
  return param_1;
}



// FUNCTION 148bc8d3c FUN_148bc8d3c body=124 status=ok
// SIG undefined FUN_148bc8d3c(void)

undefined1 FUN_148bc8d3c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3) = lVar2;
      *(undefined8 *)(param_2 + 8 + lVar3) = *(undefined8 *)(param_3 + 8 + lVar3);
      *(undefined4 *)(param_2 + 0x10 + lVar3) = *(undefined4 *)(param_3 + 0x10 + lVar3);
      *(undefined4 *)(param_2 + 0x18 + lVar3) = *(undefined4 *)(param_3 + 0x18 + lVar3);
      lVar3 = lVar3 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bc8de0 FUN_148bc8de0 body=59 status=ok
// SIG undefined FUN_148bc8de0(void)

undefined8 FUN_148bc8de0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc8f00 FUN_148bc8f00 body=59 status=ok
// SIG undefined FUN_148bc8f00(void)

undefined8 FUN_148bc8f00(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc9020 FUN_148bc9020 body=59 status=ok
// SIG undefined FUN_148bc9020(void)

undefined8 FUN_148bc9020(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc906c FUN_148bc906c body=38 status=ok
// SIG undefined FUN_148bc906c(void)

void FUN_148bc906c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x98) == '\x01') {
    FUN_14053087a(param_2);
    *(undefined1 *)(param_2 + 0x98) = 0;
  }
  return;
}



// FUNCTION 148bc917c FUN_148bc917c body=54 status=ok
// SIG undefined FUN_148bc917c(void)

undefined1 FUN_148bc917c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140eb23de(param_2,param_3);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 148bc91da FUN_148bc91da body=59 status=ok
// SIG undefined FUN_148bc91da(void)

undefined8 FUN_148bc91da(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc932e FUN_148bc932e body=54 status=ok
// SIG undefined FUN_148bc932e(void)

undefined1 FUN_148bc932e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1459334aa(param_2,param_3);
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return 1;
}



// FUNCTION 148bc938c FUN_148bc938c body=59 status=ok
// SIG undefined FUN_148bc938c(void)

undefined8 FUN_148bc938c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc9476 FUN_148bc9476 body=54 status=ok
// SIG undefined FUN_148bc9476(void)

undefined1 FUN_148bc9476(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bc9574(param_2,param_3);
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return 1;
}



// FUNCTION 148bc94d4 FUN_148bc94d4 body=59 status=ok
// SIG undefined FUN_148bc94d4(void)

undefined8 FUN_148bc94d4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc9574 FUN_148bc9574 body=129 status=ok
// SIG undefined FUN_148bc9574(void)

longlong * FUN_148bc9574(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *param_2;
    }
  }
  bVar1 = DAT_14c950c29;
  *param_1 = lVar2;
  param_1[1] = param_2[1];
  *(int *)(param_1 + 2) = (int)param_2[2];
  lVar2 = param_2[3];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[3];
    }
  }
  param_1[3] = lVar2;
  param_1[4] = param_2[4];
  *(int *)(param_1 + 5) = (int)param_2[5];
  *(char *)(param_1 + 6) = (char)param_2[6];
  return param_1;
}



// FUNCTION 148bc96a2 FUN_148bc96a2 body=59 status=ok
// SIG undefined FUN_148bc96a2(void)

undefined8 FUN_148bc96a2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc97b6 FUN_148bc97b6 body=54 status=ok
// SIG undefined FUN_148bc97b6(void)

undefined1 FUN_148bc97b6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bc98b4(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 148bc9814 FUN_148bc9814 body=59 status=ok
// SIG undefined FUN_148bc9814(void)

undefined8 FUN_148bc9814(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc98b4 FUN_148bc98b4 body=171 status=ok
// SIG undefined FUN_148bc98b4(void)

longlong * FUN_148bc98b4(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *param_2;
    }
  }
  bVar1 = DAT_14c950c29;
  *param_1 = lVar2;
  lVar2 = param_2[1];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[1];
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[1] = lVar2;
  lVar2 = param_2[2];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[2];
    }
  }
  param_1[2] = lVar2;
  param_1[3] = param_2[3];
  *(int *)(param_1 + 4) = (int)param_2[4];
  lVar2 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = lVar2;
  param_1[7] = param_2[7];
  lVar2 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = lVar2;
  return param_1;
}



// FUNCTION 148bc9a9a FUN_148bc9a9a body=68 status=ok
// SIG undefined FUN_148bc9a9a(void)

undefined8 FUN_148bc9a9a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x98);
      lVar1 = lVar1 + 0x98;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bc9b06 FUN_148bc9b06 body=59 status=ok
// SIG undefined FUN_148bc9b06(void)

undefined8 FUN_148bc9b06(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc9bfa FUN_148bc9bfa body=59 status=ok
// SIG undefined FUN_148bc9bfa(void)

undefined8 FUN_148bc9bfa(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc9c46 FUN_148bc9c46 body=38 status=ok
// SIG undefined FUN_148bc9c46(void)

void FUN_148bc9c46(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x390) == '\x01') {
    FUN_140cbdcd0(param_2);
    *(undefined1 *)(param_2 + 0x390) = 0;
  }
  return;
}



// FUNCTION 148bc9ce0 FUN_148bc9ce0 body=55 status=ok
// SIG undefined FUN_148bc9ce0(void)

void FUN_148bc9ce0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba44c0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba44c0 = FUN_14171c317(FUN_1465bdc0a,uVar1,L"EAtt_GrenadeBehaviorPayloadDamageAmp");
  }
  return;
}



// FUNCTION 148bc9de0 FUN_148bc9de0 body=221 status=ok
// SIG undefined FUN_148bc9de0(void)

void FUN_148bc9de0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = 0;
  local_60 = 0;
  local_5c = 0;
  local_48 = DAT_14c8464f0;
  local_58 = (undefined4)DAT_14c8464e0;
  uStack_54 = DAT_14c8464e0._4_4_;
  uStack_50 = (undefined4)DAT_14c8464e8;
  uStack_4c = DAT_14c8464e8._4_4_;
  local_40 = 0;
  uStack_38 = 0;
  local_20 = DAT_14c8464f0;
  local_30 = (undefined4)DAT_14c8464e0;
  uStack_2c = DAT_14c8464e0._4_4_;
  uStack_28 = (undefined4)DAT_14c8464e8;
  uStack_24 = DAT_14c8464e8._4_4_;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  puVar1 = &local_68;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14417a4d2(param_1,puVar1);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc9efa FUN_148bc9efa body=48 status=ok
// SIG undefined FUN_148bc9efa(void)

longlong FUN_148bc9efa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_145c402f6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc9f32 FUN_148bc9f32 body=48 status=ok
// SIG undefined FUN_148bc9f32(void)

longlong FUN_148bc9f32(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_145c402f6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc9f6a FUN_148bc9f6a body=48 status=ok
// SIG undefined FUN_148bc9f6a(void)

longlong FUN_148bc9f6a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_145c402f6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc9fb2 FUN_148bc9fb2 body=48 status=ok
// SIG undefined FUN_148bc9fb2(void)

longlong FUN_148bc9fb2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x530;
  FUN_145c402f6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc9fea FUN_148bc9fea body=48 status=ok
// SIG undefined FUN_148bc9fea(void)

longlong FUN_148bc9fea(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x538;
  FUN_145c402f6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bca022 FUN_148bca022 body=48 status=ok
// SIG undefined FUN_148bca022(void)

longlong FUN_148bca022(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x540;
  FUN_145c402f6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bca05a FUN_148bca05a body=48 status=ok
// SIG undefined FUN_148bca05a(void)

longlong FUN_148bca05a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x8c0;
  FUN_145c402f6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bca092 FUN_148bca092 body=48 status=ok
// SIG undefined FUN_148bca092(void)

longlong FUN_148bca092(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x8c8;
  FUN_145c402f6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bca0da FUN_148bca0da body=48 status=ok
// SIG undefined FUN_148bca0da(void)

longlong FUN_148bca0da(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x8d0;
  FUN_145c402f6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bca112 FUN_148bca112 body=48 status=ok
// SIG undefined FUN_148bca112(void)

longlong FUN_148bca112(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x8d8;
  FUN_145c402f6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bca158 FUN_148bca158 body=48 status=ok
// SIG undefined FUN_148bca158(void)

longlong FUN_148bca158(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x8e0;
  FUN_145c402f6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bca1b8 FUN_148bca1b8 body=48 status=ok
// SIG undefined FUN_148bca1b8(void)

longlong FUN_148bca1b8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x8e8;
  FUN_145c402f6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bca1fe FUN_148bca1fe body=48 status=ok
// SIG undefined FUN_148bca1fe(void)

longlong FUN_148bca1fe(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_145ccf476(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bca236 FUN_148bca236 body=48 status=ok
// SIG undefined FUN_148bca236(void)

longlong FUN_148bca236(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_145ccf476(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bca26e FUN_148bca26e body=48 status=ok
// SIG undefined FUN_148bca26e(void)

longlong FUN_148bca26e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_145ccf476(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bca2b6 FUN_148bca2b6 body=48 status=ok
// SIG undefined FUN_148bca2b6(void)

longlong FUN_148bca2b6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x530;
  FUN_145ccf476(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bca2ee FUN_148bca2ee body=48 status=ok
// SIG undefined FUN_148bca2ee(void)

longlong FUN_148bca2ee(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x538;
  FUN_145ccf476(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bca326 FUN_148bca326 body=48 status=ok
// SIG undefined FUN_148bca326(void)

longlong FUN_148bca326(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x540;
  FUN_145ccf476(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bca35e FUN_148bca35e body=48 status=ok
// SIG undefined FUN_148bca35e(void)

longlong FUN_148bca35e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x8c0;
  FUN_145ccf476(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bca396 FUN_148bca396 body=48 status=ok
// SIG undefined FUN_148bca396(void)

longlong FUN_148bca396(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x8c8;
  FUN_145ccf476(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bca3ce FUN_148bca3ce body=48 status=ok
// SIG undefined FUN_148bca3ce(void)

longlong FUN_148bca3ce(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x8d0;
  FUN_145ccf476(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bca406 FUN_148bca406 body=48 status=ok
// SIG undefined FUN_148bca406(void)

longlong FUN_148bca406(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x8d8;
  FUN_145ccf476(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bca43e FUN_148bca43e body=48 status=ok
// SIG undefined FUN_148bca43e(void)

longlong FUN_148bca43e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x8e0;
  FUN_145ccf476(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bca46e FUN_148bca46e body=48 status=ok
// SIG undefined FUN_148bca46e(void)

longlong FUN_148bca46e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x8e8;
  FUN_145ccf476(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bca49e FUN_148bca49e body=48 status=ok
// SIG undefined FUN_148bca49e(void)

longlong FUN_148bca49e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xdd8;
  FUN_145ccf476(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bca4d6 FUN_148bca4d6 body=48 status=ok
// SIG undefined FUN_148bca4d6(void)

longlong FUN_148bca4d6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xde0;
  FUN_145ccf476(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bca51c FUN_148bca51c body=48 status=ok
// SIG undefined FUN_148bca51c(void)

longlong FUN_148bca51c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xde8;
  FUN_145ccf476(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bca54c FUN_148bca54c body=48 status=ok
// SIG undefined FUN_148bca54c(void)

longlong FUN_148bca54c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xdf0;
  FUN_145ccf476(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bca5ca FUN_148bca5ca body=48 status=ok
// SIG undefined FUN_148bca5ca(void)

longlong FUN_148bca5ca(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_145cd115e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bca5fa FUN_148bca5fa body=48 status=ok
// SIG undefined FUN_148bca5fa(void)

longlong FUN_148bca5fa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_145cd115e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bca62a FUN_148bca62a body=48 status=ok
// SIG undefined FUN_148bca62a(void)

longlong FUN_148bca62a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_145cd115e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bca65a FUN_148bca65a body=48 status=ok
// SIG undefined FUN_148bca65a(void)

longlong FUN_148bca65a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b8;
  FUN_145cd115e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bca68a FUN_148bca68a body=48 status=ok
// SIG undefined FUN_148bca68a(void)

longlong FUN_148bca68a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c0;
  FUN_145cd115e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bca6ba FUN_148bca6ba body=48 status=ok
// SIG undefined FUN_148bca6ba(void)

longlong FUN_148bca6ba(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x408;
  FUN_145cd115e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bca6ea FUN_148bca6ea body=48 status=ok
// SIG undefined FUN_148bca6ea(void)

longlong FUN_148bca6ea(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x410;
  FUN_145cd115e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bca71a FUN_148bca71a body=48 status=ok
// SIG undefined FUN_148bca71a(void)

longlong FUN_148bca71a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x418;
  FUN_145cd115e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bca74a FUN_148bca74a body=48 status=ok
// SIG undefined FUN_148bca74a(void)

longlong FUN_148bca74a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x420;
  FUN_145cd115e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bca77a FUN_148bca77a body=48 status=ok
// SIG undefined FUN_148bca77a(void)

longlong FUN_148bca77a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x428;
  FUN_145cd115e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bca7aa FUN_148bca7aa body=48 status=ok
// SIG undefined FUN_148bca7aa(void)

longlong FUN_148bca7aa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x458;
  FUN_145cd115e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bca7da FUN_148bca7da body=48 status=ok
// SIG undefined FUN_148bca7da(void)

longlong FUN_148bca7da(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x460;
  FUN_145cd115e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bca80a FUN_148bca80a body=48 status=ok
// SIG undefined FUN_148bca80a(void)

longlong FUN_148bca80a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x468;
  FUN_145cd115e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bca83a FUN_148bca83a body=48 status=ok
// SIG undefined FUN_148bca83a(void)

longlong FUN_148bca83a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x470;
  FUN_145cd115e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bca86a FUN_148bca86a body=48 status=ok
// SIG undefined FUN_148bca86a(void)

longlong FUN_148bca86a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x478;
  FUN_145cd115e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bca89a FUN_148bca89a body=48 status=ok
// SIG undefined FUN_148bca89a(void)

longlong FUN_148bca89a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x480;
  FUN_145cd115e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bca8ca FUN_148bca8ca body=48 status=ok
// SIG undefined FUN_148bca8ca(void)

longlong FUN_148bca8ca(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x488;
  FUN_145cd115e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bca8fa FUN_148bca8fa body=48 status=ok
// SIG undefined FUN_148bca8fa(void)

longlong FUN_148bca8fa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x490;
  FUN_145cd115e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bca92a FUN_148bca92a body=48 status=ok
// SIG undefined FUN_148bca92a(void)

longlong FUN_148bca92a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x498;
  FUN_145cd115e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bca95a FUN_148bca95a body=48 status=ok
// SIG undefined FUN_148bca95a(void)

longlong FUN_148bca95a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a0;
  FUN_145cd115e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bca98a FUN_148bca98a body=48 status=ok
// SIG undefined FUN_148bca98a(void)

longlong FUN_148bca98a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a8;
  FUN_145cd115e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bca9ba FUN_148bca9ba body=48 status=ok
// SIG undefined FUN_148bca9ba(void)

longlong FUN_148bca9ba(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4b0;
  FUN_145cd115e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bca9ea FUN_148bca9ea body=48 status=ok
// SIG undefined FUN_148bca9ea(void)

longlong FUN_148bca9ea(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a98;
  FUN_145cd115e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bcaa1a FUN_148bcaa1a body=48 status=ok
// SIG undefined FUN_148bcaa1a(void)

longlong FUN_148bcaa1a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1aa0;
  FUN_145cd115e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bcaa4a FUN_148bcaa4a body=48 status=ok
// SIG undefined FUN_148bcaa4a(void)

longlong FUN_148bcaa4a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1aa8;
  FUN_145cd115e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bcaa7a FUN_148bcaa7a body=48 status=ok
// SIG undefined FUN_148bcaa7a(void)

longlong FUN_148bcaa7a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ab0;
  FUN_145cd115e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bcaaaa FUN_148bcaaaa body=48 status=ok
// SIG undefined FUN_148bcaaaa(void)

longlong FUN_148bcaaaa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ad0;
  FUN_145cd115e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bcaada FUN_148bcaada body=48 status=ok
// SIG undefined FUN_148bcaada(void)

longlong FUN_148bcaada(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ad8;
  FUN_145cd115e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bcab0a FUN_148bcab0a body=48 status=ok
// SIG undefined FUN_148bcab0a(void)

longlong FUN_148bcab0a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ae0;
  FUN_145cd115e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bcab3a FUN_148bcab3a body=48 status=ok
// SIG undefined FUN_148bcab3a(void)

longlong FUN_148bcab3a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x25f8;
  FUN_145cd115e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bcab6a FUN_148bcab6a body=45 status=ok
// SIG undefined FUN_148bcab6a(void)

longlong FUN_148bcab6a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_141001552(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bcab98 FUN_148bcab98 body=45 status=ok
// SIG undefined FUN_148bcab98(void)

longlong FUN_148bcab98(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x50;
  FUN_141001552(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bcabc6 FUN_148bcabc6 body=45 status=ok
// SIG undefined FUN_148bcabc6(void)

longlong FUN_148bcabc6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x58;
  FUN_141001552(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bcac4c FUN_148bcac4c body=54 status=ok
// SIG undefined FUN_148bcac4c(void)

undefined1 FUN_148bcac4c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bcadbc(param_2,param_3);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 148bcacaa FUN_148bcacaa body=59 status=ok
// SIG undefined FUN_148bcacaa(void)

undefined8 FUN_148bcacaa(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bcacf0 FUN_148bcacf0 body=32 status=ok
// SIG undefined FUN_148bcacf0(void)

void FUN_148bcacf0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_140e1118a(param_2);
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 148bcad5e FUN_148bcad5e body=38 status=ok
// SIG undefined FUN_148bcad5e(void)

undefined8 FUN_148bcad5e(undefined8 param_1,int param_2)

{
  FUN_140e1118a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bcad84 FUN_148bcad84 body=55 status=ok
// SIG undefined FUN_148bcad84(void)

void FUN_148bcad84(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4418 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4418 = FUN_140002ddd(FUN_1465bd8f9,uVar1,L"GrenadeBehavior");
  }
  return;
}



// FUNCTION 148bcadbc FUN_148bcadbc body=95 status=ok
// SIG undefined FUN_148bcadbc(void)

longlong FUN_148bcadbc(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *(undefined8 *)(param_2 + 8);
  lVar4 = *(longlong *)(param_2 + 0x10);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(longlong *)(param_1 + 0x10) = lVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  return param_1;
}



// FUNCTION 148bcae60 FUN_148bcae60 body=99 status=ok
// SIG undefined FUN_148bcae60(void)

undefined8 FUN_148bcae60(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
    do {
      uVar2 = *(undefined4 *)(param_3 + -0x34);
      uVar3 = *(undefined4 *)(param_3 + -0x30);
      uVar4 = *(undefined4 *)(param_3 + -0x2c);
      *(undefined4 *)(param_2 + -0x38) = *(undefined4 *)(param_3 + -0x38);
      *(undefined4 *)(param_2 + -0x34) = uVar2;
      *(undefined4 *)(param_2 + -0x30) = uVar3;
      *(undefined4 *)(param_2 + -0x2c) = uVar4;
      FUN_1418443e8(param_2 + -0x28,param_3 + -0x28);
      uVar1 = *(undefined8 *)(param_3 + -0xb);
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      *(undefined8 *)(param_2 + -0xb) = uVar1;
      FUN_1401f3db8(param_2,param_3);
      param_3 = param_3 + 0x58;
      param_2 = param_2 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bcaeec FUN_148bcaeec body=59 status=ok
// SIG undefined FUN_148bcaeec(void)

undefined8 FUN_148bcaeec(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bcaf32 FUN_148bcaf32 body=32 status=ok
// SIG undefined FUN_148bcaf32(void)

void FUN_148bcaf32(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_148bcaf90(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 148bcaf90 FUN_148bcaf90 body=65 status=ok
// SIG undefined FUN_148bcaf90(void)

void FUN_148bcaf90(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b6736a0;
  plVar3 = (longlong *)param_1[9];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148bcafcd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148bcb03a FUN_148bcb03a body=107 status=ok
// SIG undefined FUN_148bcb03a(void)

undefined8 FUN_148bcb03a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
    do {
      *(undefined8 *)(param_2 + -0x40) = *(undefined8 *)(param_3 + -0x40);
      uVar1 = *(undefined4 *)(param_3 + -0x34);
      uVar2 = *(undefined4 *)(param_3 + -0x30);
      uVar3 = *(undefined4 *)(param_3 + -0x2c);
      *(undefined4 *)(param_2 + -0x38) = *(undefined4 *)(param_3 + -0x38);
      *(undefined4 *)(param_2 + -0x34) = uVar1;
      *(undefined4 *)(param_2 + -0x30) = uVar2;
      *(undefined4 *)(param_2 + -0x2c) = uVar3;
      FUN_144a787a6(param_2 + -0x28,param_3 + -0x28);
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_144a787a6(param_2,param_3);
      param_3 = param_3 + 0x58;
      param_2 = param_2 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bcb0ce FUN_148bcb0ce body=59 status=ok
// SIG undefined FUN_148bcb0ce(void)

undefined8 FUN_148bcb0ce(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bcb114 FUN_148bcb114 body=32 status=ok
// SIG undefined FUN_148bcb114(void)

void FUN_148bcb114(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_14097122c(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 148bcb182 FUN_148bcb182 body=38 status=ok
// SIG undefined FUN_148bcb182(void)

undefined8 FUN_148bcb182(undefined8 param_1,int param_2)

{
  FUN_14097122c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bcb1a8 FUN_148bcb1a8 body=55 status=ok
// SIG undefined FUN_148bcb1a8(void)

void FUN_148bcb1a8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4448 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4448 = FUN_140002ddd(FUN_1465bd987,uVar1,L"GrenadeBehaviorDef");
  }
  return;
}



// FUNCTION 148bcb1fe FUN_148bcb1fe body=63 status=ok
// SIG undefined FUN_148bcb1fe(void)

undefined1 FUN_148bcb1fe(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bcb31a(param_2,param_3);
    param_3 = param_3 + 0xe0;
    param_2 = param_2 + 0xe0;
  }
  return 1;
}



// FUNCTION 148bcb266 FUN_148bcb266 body=59 status=ok
// SIG undefined FUN_148bcb266(void)

undefined8 FUN_148bcb266(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bcb2b2 FUN_148bcb2b2 body=38 status=ok
// SIG undefined FUN_148bcb2b2(void)

void FUN_148bcb2b2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe0) == '\x01') {
    FUN_1409711e6(param_2);
    *(undefined1 *)(param_2 + 0xe0) = 0;
  }
  return;
}



// FUNCTION 148bcb31a FUN_148bcb31a body=158 status=ok
// SIG undefined FUN_148bcb31a(void)

longlong FUN_148bcb31a(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  uVar1 = *(undefined4 *)(param_2 + 0x3c);
  uVar2 = *(undefined4 *)(param_2 + 0x40);
  uVar3 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  FUN_144a787a6(param_1 + 0x48,param_2 + 0x48);
  if ((*(longlong *)(param_1 + 0x58) != *(longlong *)(param_2 + 0x58)) ||
     (*(int *)(param_1 + 0x60) != *(int *)(param_2 + 0x60))) {
    *(longlong *)(param_1 + 0x58) = *(longlong *)(param_2 + 0x58);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  FUN_148bcb3b8(param_1 + 0x70,param_2 + 0x70);
  FUN_144a7bb84(param_1 + 0xc0,param_2 + 0xc0);
  *(undefined1 *)(param_1 + 0xd8) = *(undefined1 *)(param_2 + 0xd8);
  return param_1;
}



// FUNCTION 148bcb3b8 FUN_148bcb3b8 body=122 status=ok
// SIG undefined FUN_148bcb3b8(void)

longlong FUN_148bcb3b8(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_148bcb432(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148bcb432 FUN_148bcb432 body=228 status=ok
// SIG undefined FUN_148bcb432(void)

longlong * FUN_148bcb432(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1409712a0(param_1,(ulonglong)uVar1);
    lVar3 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar3 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar3) < uVar1) {
      FUN_140549c28(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2);
    if (0 < (int)uVar1) {
      lVar3 = *param_1;
      lVar2 = *param_2;
      lVar4 = 0;
      uVar5 = 0;
      do {
        plVar6 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar6 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar6 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar3 + lVar4) = *(undefined4 *)(lVar2 + lVar4);
          *(undefined4 *)(lVar3 + 4 + lVar4) = *(undefined4 *)(lVar2 + 4 + lVar4);
        }
        else {
          *(undefined8 *)(lVar3 + lVar4) = *(undefined8 *)(lVar2 + lVar4);
          *(undefined8 *)(lVar3 + 8 + lVar4) = *(undefined8 *)(lVar2 + 8 + lVar4);
          *(undefined4 *)(lVar3 + 0x10 + lVar4) = *(undefined4 *)(lVar2 + 0x10 + lVar4);
          *(undefined8 *)(lVar3 + 0x18 + lVar4) = 0;
          *(undefined8 *)(lVar3 + 0x20 + lVar4) = *(undefined8 *)(lVar2 + 0x20 + lVar4);
        }
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + 0x28;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 148bcb55a FUN_148bcb55a body=54 status=ok
// SIG undefined FUN_148bcb55a(void)

undefined1 FUN_148bcb55a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bcb66c(param_2,param_3);
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return 1;
}



// FUNCTION 148bcb5b8 FUN_148bcb5b8 body=59 status=ok
// SIG undefined FUN_148bcb5b8(void)

undefined8 FUN_148bcb5b8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bcb5fe FUN_148bcb5fe body=32 status=ok
// SIG undefined FUN_148bcb5fe(void)

void FUN_148bcb5fe(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_140e11140(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 148bcb66c FUN_148bcb66c body=90 status=ok
// SIG undefined FUN_148bcb66c(void)

longlong FUN_148bcb66c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  FUN_148bcadbc();
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = *(longlong *)(param_2 + 0x28);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  *(longlong *)(param_1 + 0x28) = lVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  return param_1;
}



// FUNCTION 148bcb6f4 FUN_148bcb6f4 body=115 status=ok
// SIG undefined FUN_148bcb6f4(void)

undefined8 FUN_148bcb6f4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
    do {
      *(undefined8 *)(param_2 + -0x40) = *(undefined8 *)(param_3 + -0x40);
      uVar1 = *(undefined4 *)(param_3 + -0x34);
      uVar2 = *(undefined4 *)(param_3 + -0x30);
      uVar3 = *(undefined4 *)(param_3 + -0x2c);
      *(undefined4 *)(param_2 + -0x38) = *(undefined4 *)(param_3 + -0x38);
      *(undefined4 *)(param_2 + -0x34) = uVar1;
      *(undefined4 *)(param_2 + -0x30) = uVar2;
      *(undefined4 *)(param_2 + -0x2c) = uVar3;
      FUN_144a787a6(param_2 + -0x28,param_3 + -0x28);
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_144a787a6(param_2,param_3);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      param_3 = param_3 + 0x60;
      param_2 = param_2 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bcb790 FUN_148bcb790 body=59 status=ok
// SIG undefined FUN_148bcb790(void)

undefined8 FUN_148bcb790(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bcb7d6 FUN_148bcb7d6 body=32 status=ok
// SIG undefined FUN_148bcb7d6(void)

void FUN_148bcb7d6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_14097122c(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 148bcb89a FUN_148bcb89a body=74 status=ok
// SIG undefined FUN_148bcb89a(void)

undefined1 FUN_148bcb89a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bcadbc(param_2,param_3);
    *(undefined1 *)(param_2 + 0x20) = *(undefined1 *)(param_3 + 0x20);
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return 1;
}



// FUNCTION 148bcb90c FUN_148bcb90c body=59 status=ok
// SIG undefined FUN_148bcb90c(void)

undefined8 FUN_148bcb90c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bcb952 FUN_148bcb952 body=32 status=ok
// SIG undefined FUN_148bcb952(void)

void FUN_148bcb952(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_140e1118a(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 148bcb9c0 FUN_148bcb9c0 body=38 status=ok
// SIG undefined FUN_148bcb9c0(void)

undefined8 FUN_148bcb9c0(undefined8 param_1,int param_2)

{
  FUN_140e1118a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bcb9e6 FUN_148bcb9e6 body=55 status=ok
// SIG undefined FUN_148bcb9e6(void)

void FUN_148bcb9e6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba44a8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba44a8 = FUN_140002ddd(FUN_1465bdba9,uVar1,L"GrenadeBehavior_Payload");
  }
  return;
}



// FUNCTION 148bcba5a FUN_148bcba5a body=63 status=ok
// SIG undefined FUN_148bcba5a(void)

undefined1 FUN_148bcba5a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bcbb9a(param_2,param_3);
    param_3 = param_3 + 0x128;
    param_2 = param_2 + 0x128;
  }
  return 1;
}



// FUNCTION 148bcbac2 FUN_148bcbac2 body=59 status=ok
// SIG undefined FUN_148bcbac2(void)

undefined8 FUN_148bcbac2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bcbb0e FUN_148bcbb0e body=62 status=ok
// SIG undefined FUN_148bcbb0e(void)

void FUN_148bcbb0e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x25) == '\x01') {
    *param_2 = &PTR_FUN_14b677890;
    if (param_2[0xf] != 0) {
      FUN_1400020a8();
    }
    FUN_14097122c(param_2);
    *(undefined1 *)(param_2 + 0x25) = 0;
  }
  return;
}



// FUNCTION 148bcbb9a FUN_148bcbb9a body=154 status=ok
// SIG undefined FUN_148bcbb9a(void)

longlong FUN_148bcbb9a(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  uVar1 = *(undefined4 *)(param_2 + 0x3c);
  uVar2 = *(undefined4 *)(param_2 + 0x40);
  uVar3 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  FUN_144a787a6(param_1 + 0x48,param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  uVar1 = *(undefined4 *)(param_2 + 0x6c);
  uVar2 = *(undefined4 *)(param_2 + 0x70);
  uVar3 = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  *(undefined4 *)(param_1 + 0x74) = uVar3;
  FUN_144a787a6(param_1 + 0x78,param_2 + 0x78);
  FUN_140d02432(param_1 + 0x88,param_2 + 0x88);
  FUN_140d02432(param_1 + 0xd8,param_2 + 0xd8);
  return param_1;
}



// FUNCTION 148bcbc36 FUN_148bcbc36 body=65 status=ok
// SIG undefined FUN_148bcbc36(void)

undefined8 * FUN_148bcbc36(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b677890;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_14097122c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bcbc78 FUN_148bcbc78 body=55 status=ok
// SIG undefined FUN_148bcbc78(void)

void FUN_148bcbc78(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba44d8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba44d8 = FUN_140002ddd(FUN_1465bdc71,uVar1,L"GrenadeBehaviorDef_PayloadDamageAmp");
  }
  return;
}



// FUNCTION 148bcbd24 FUN_148bcbd24 body=54 status=ok
// SIG undefined FUN_148bcbd24(void)

undefined1 FUN_148bcbd24(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bcbeec(param_2,param_3);
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return 1;
}



// FUNCTION 148bcbd82 FUN_148bcbd82 body=59 status=ok
// SIG undefined FUN_148bcbd82(void)

undefined8 FUN_148bcbd82(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bcbdc8 FUN_148bcbdc8 body=34 status=ok
// SIG undefined FUN_148bcbdc8(void)

void FUN_148bcbdc8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_148bcbe96(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 148bcbe38 FUN_148bcbe38 body=38 status=ok
// SIG undefined FUN_148bcbe38(void)

undefined8 FUN_148bcbe38(undefined8 param_1,int param_2)

{
  FUN_148bcbe96();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bcbe5e FUN_148bcbe5e body=55 status=ok
// SIG undefined FUN_148bcbe5e(void)

void FUN_148bcbe5e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba44f0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba44f0 = FUN_140002ddd(FUN_1465bdd07,uVar1,L"GrenadeBehavior_PayloadDamageAmp");
  }
  return;
}



// FUNCTION 148bcbe96 FUN_148bcbe96 body=85 status=ok
// SIG undefined FUN_148bcbe96(void)

void FUN_148bcbe96(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b6741a0;
  plVar3 = (longlong *)param_1[8];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_140e1118a(param_1);
  return;
}



// FUNCTION 148bcbeec FUN_148bcbeec body=125 status=ok
// SIG undefined FUN_148bcbeec(void)

longlong FUN_148bcbeec(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  FUN_148bcadbc();
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  FUN_148bcbf6a(param_1 + 0x28,param_2 + 0x28);
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  lVar4 = *(longlong *)(param_2 + 0x40);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  *(longlong *)(param_1 + 0x40) = lVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  return param_1;
}



// FUNCTION 148bcbf6a FUN_148bcbf6a body=88 status=ok
// SIG undefined FUN_148bcbf6a(void)

undefined8 * FUN_148bcbf6a(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148bcbfc2(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 148bcbfc2 FUN_148bcbfc2 body=98 status=ok
// SIG undefined FUN_148bcbfc2(void)

void FUN_148bcbfc2(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,4);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148bcc026 FUN_148bcc026 body=98 status=ok
// SIG undefined FUN_148bcc026(void)

void FUN_148bcc026(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xb8);
  *(undefined4 *)((longlong)param_2 + 8) = 0x3005;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined4 *)((longlong)param_2 + 0x50) = 0xf00000d0;
  *(undefined4 *)((longlong)param_2 + 0x60) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  *(undefined8 *)((longlong)param_2 + 0x80) = 0;
  *(undefined8 *)((longlong)param_2 + 0x88) = 0;
  *(undefined8 *)((longlong)param_2 + 0x90) = 0;
  *(undefined8 *)((longlong)param_2 + 0x98) = 0;
  *(undefined4 *)((longlong)param_2 + 0xa0) = 0xf00000d0;
  *(undefined4 *)((longlong)param_2 + 0xb0) = 0x3f800000;
  return;
}



// FUNCTION 148bcc102 FUN_148bcc102 body=63 status=ok
// SIG undefined FUN_148bcc102(void)

undefined1 FUN_148bcc102(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bcc212(param_2,param_3);
    param_3 = param_3 + 0xb8;
    param_2 = param_2 + 0xb8;
  }
  return 1;
}



// FUNCTION 148bcc16a FUN_148bcc16a body=59 status=ok
// SIG undefined FUN_148bcc16a(void)

undefined8 FUN_148bcc16a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bcc212 FUN_148bcc212 body=84 status=ok
// SIG undefined FUN_148bcc212(void)

longlong * FUN_148bcc212(longlong *param_1,longlong *param_2)

{
  if ((*param_1 != *param_2) || ((int)param_1[1] != (int)param_2[1])) {
    *param_1 = *param_2;
    *(int *)(param_1 + 1) = (int)param_2[1];
    param_1[2] = 0;
  }
  FUN_140d02432(param_1 + 3,param_2 + 3);
  FUN_140d02432(param_1 + 0xd,param_2 + 0xd);
  return param_1;
}



// FUNCTION 148bcc286 FUN_148bcc286 body=63 status=ok
// SIG undefined FUN_148bcc286(void)

undefined1 FUN_148bcc286(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bcc3aa(param_2,param_3);
    param_3 = param_3 + 0x7b0;
    param_2 = param_2 + 0x7b0;
  }
  return 1;
}



// FUNCTION 148bcc2ee FUN_148bcc2ee body=59 status=ok
// SIG undefined FUN_148bcc2ee(void)

undefined8 FUN_148bcc2ee(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bcc33a FUN_148bcc33a body=38 status=ok
// SIG undefined FUN_148bcc33a(void)

void FUN_148bcc33a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x7b0) == '\x01') {
    FUN_1410b9a9a(param_2);
    *(undefined1 *)(param_2 + 0x7b0) = 0;
  }
  return;
}



// FUNCTION 148bcc3aa FUN_148bcc3aa body=805 status=ok
// SIG undefined FUN_148bcc3aa(void)

longlong FUN_148bcc3aa(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  uVar1 = *(undefined4 *)(param_2 + 0x3c);
  uVar2 = *(undefined4 *)(param_2 + 0x40);
  uVar3 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  FUN_144a787a6(param_1 + 0x48,param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(param_2 + 0x60);
  FUN_140d02432(param_1 + 0x68,param_2 + 0x68);
  *(undefined1 *)(param_1 + 0xb8) = *(undefined1 *)(param_2 + 0xb8);
  FUN_148bcc212(param_1 + 0xc0,param_2 + 0xc0);
  FUN_148bcc212(param_1 + 0x178,param_2 + 0x178);
  FUN_148bcc212(param_1 + 0x230,param_2 + 0x230);
  FUN_140d02432(param_1 + 0x2e8,param_2 + 0x2e8);
  *(undefined8 *)(param_1 + 0x338) = *(undefined8 *)(param_2 + 0x338);
  uVar1 = *(undefined4 *)(param_2 + 0x344);
  uVar2 = *(undefined4 *)(param_2 + 0x348);
  uVar3 = *(undefined4 *)(param_2 + 0x34c);
  *(undefined4 *)(param_1 + 0x340) = *(undefined4 *)(param_2 + 0x340);
  *(undefined4 *)(param_1 + 0x344) = uVar1;
  *(undefined4 *)(param_1 + 0x348) = uVar2;
  *(undefined4 *)(param_1 + 0x34c) = uVar3;
  FUN_144a787a6(param_1 + 0x350,param_2 + 0x350);
  if ((*(longlong *)(param_1 + 0x360) != *(longlong *)(param_2 + 0x360)) ||
     (*(int *)(param_1 + 0x368) != *(int *)(param_2 + 0x368))) {
    *(longlong *)(param_1 + 0x360) = *(longlong *)(param_2 + 0x360);
    *(undefined4 *)(param_1 + 0x368) = *(undefined4 *)(param_2 + 0x368);
    *(undefined8 *)(param_1 + 0x370) = 0;
  }
  uVar1 = *(undefined4 *)(param_2 + 0x37c);
  uVar2 = *(undefined4 *)(param_2 + 0x380);
  uVar3 = *(undefined4 *)(param_2 + 900);
  *(undefined4 *)(param_1 + 0x378) = *(undefined4 *)(param_2 + 0x378);
  *(undefined4 *)(param_1 + 0x37c) = uVar1;
  *(undefined4 *)(param_1 + 0x380) = uVar2;
  *(undefined4 *)(param_1 + 900) = uVar3;
  FUN_144a7bb84(param_1 + 0x388,param_2 + 0x388);
  FUN_144a7bb84(param_1 + 0x3a0,param_2 + 0x3a0);
  FUN_14123c256(param_1 + 0x3b8,param_2 + 0x3b8);
  *(undefined8 *)(param_1 + 0x3d0) = *(undefined8 *)(param_2 + 0x3d0);
  uVar1 = *(undefined4 *)(param_2 + 0x3dc);
  uVar2 = *(undefined4 *)(param_2 + 0x3e0);
  uVar3 = *(undefined4 *)(param_2 + 0x3e4);
  *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_2 + 0x3d8);
  *(undefined4 *)(param_1 + 0x3dc) = uVar1;
  *(undefined4 *)(param_1 + 0x3e0) = uVar2;
  *(undefined4 *)(param_1 + 0x3e4) = uVar3;
  FUN_144a787a6(param_1 + 1000,param_2 + 1000);
  FUN_140d02432(param_1 + 0x3f8,param_2 + 0x3f8);
  FUN_140d02432(param_1 + 0x448,param_2 + 0x448);
  *(undefined8 *)(param_1 + 0x498) = *(undefined8 *)(param_2 + 0x498);
  FUN_140d02432(param_1 + 0x4a0,param_2 + 0x4a0);
  FUN_140d02432(param_1 + 0x4f0,param_2 + 0x4f0);
  FUN_140d02432(param_1 + 0x540,param_2 + 0x540);
  FUN_140d02432(param_1 + 0x590,param_2 + 0x590);
  if ((*(longlong *)(param_1 + 0x5e0) != *(longlong *)(param_2 + 0x5e0)) ||
     (*(int *)(param_1 + 0x5e8) != *(int *)(param_2 + 0x5e8))) {
    *(longlong *)(param_1 + 0x5e0) = *(longlong *)(param_2 + 0x5e0);
    *(undefined4 *)(param_1 + 0x5e8) = *(undefined4 *)(param_2 + 0x5e8);
    *(undefined8 *)(param_1 + 0x5f0) = 0;
  }
  FUN_140d02432(param_1 + 0x5f8,param_2 + 0x5f8);
  FUN_140d02432(param_1 + 0x648,param_2 + 0x648);
  FUN_140d02432(param_1 + 0x698,param_2 + 0x698);
  *(undefined1 *)(param_1 + 0x6e8) = *(undefined1 *)(param_2 + 0x6e8);
  if ((*(longlong *)(param_1 + 0x6f0) != *(longlong *)(param_2 + 0x6f0)) ||
     (*(int *)(param_1 + 0x6f8) != *(int *)(param_2 + 0x6f8))) {
    *(longlong *)(param_1 + 0x6f0) = *(longlong *)(param_2 + 0x6f0);
    *(undefined4 *)(param_1 + 0x6f8) = *(undefined4 *)(param_2 + 0x6f8);
    *(undefined8 *)(param_1 + 0x700) = 0;
  }
  *(undefined8 *)(param_1 + 0x708) = *(undefined8 *)(param_2 + 0x708);
  uVar1 = *(undefined4 *)(param_2 + 0x714);
  uVar2 = *(undefined4 *)(param_2 + 0x718);
  uVar3 = *(undefined4 *)(param_2 + 0x71c);
  *(undefined4 *)(param_1 + 0x710) = *(undefined4 *)(param_2 + 0x710);
  *(undefined4 *)(param_1 + 0x714) = uVar1;
  *(undefined4 *)(param_1 + 0x718) = uVar2;
  *(undefined4 *)(param_1 + 0x71c) = uVar3;
  FUN_144a787a6(param_1 + 0x720,param_2 + 0x720);
  FUN_140d02432(param_1 + 0x730,param_2 + 0x730);
  uVar4 = *(undefined8 *)(param_2 + 0x788);
  uVar5 = *(undefined8 *)(param_2 + 0x790);
  uVar6 = *(undefined8 *)(param_2 + 0x798);
  uVar7 = *(undefined8 *)(param_2 + 0x7a0);
  uVar8 = *(undefined8 *)(param_2 + 0x7a8);
  *(undefined8 *)(param_1 + 0x780) = *(undefined8 *)(param_2 + 0x780);
  *(undefined8 *)(param_1 + 0x788) = uVar4;
  *(undefined8 *)(param_1 + 0x790) = uVar5;
  *(undefined8 *)(param_1 + 0x798) = uVar6;
  *(undefined8 *)(param_1 + 0x7a0) = uVar7;
  *(undefined8 *)(param_1 + 0x7a8) = uVar8;
  return param_1;
}



// FUNCTION 148bcc6d0 FUN_148bcc6d0 body=57 status=ok
// SIG undefined FUN_148bcc6d0(void)

void FUN_148bcc6d0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4520 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4520 = FUN_140002ddd(FUN_1465bde35,uVar1,L"GrenadeBehaviorDef_PayloadLingering");
  }
  return;
}



// FUNCTION 148bcc834 FUN_148bcc834 body=63 status=ok
// SIG undefined FUN_148bcc834(void)

undefined1 FUN_148bcc834(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bcca56(param_2,param_3);
    param_3 = param_3 + 0xe8;
    param_2 = param_2 + 0xe8;
  }
  return 1;
}



// FUNCTION 148bcc89c FUN_148bcc89c body=59 status=ok
// SIG undefined FUN_148bcc89c(void)

undefined8 FUN_148bcc89c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bcc8e8 FUN_148bcc8e8 body=40 status=ok
// SIG undefined FUN_148bcc8e8(void)

void FUN_148bcc8e8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe8) == '\x01') {
    FUN_148bcc9bc(param_2);
    *(undefined1 *)(param_2 + 0xe8) = 0;
  }
  return;
}



// FUNCTION 148bcc95e FUN_148bcc95e body=38 status=ok
// SIG undefined FUN_148bcc95e(void)

undefined8 FUN_148bcc95e(undefined8 param_1,int param_2)

{
  FUN_148bcc9bc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bcc984 FUN_148bcc984 body=55 status=ok
// SIG undefined FUN_148bcc984(void)

void FUN_148bcc984(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4538 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4538 = FUN_140002ddd(FUN_1465bdecb,uVar1,L"GrenadeBehavior_PayloadLingering");
  }
  return;
}



// FUNCTION 148bcc9bc FUN_148bcc9bc body=153 status=ok
// SIG undefined FUN_148bcc9bc(void)

void FUN_148bcc9bc(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b674610;
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x1a];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = (longlong *)param_1[0x13];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[6];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_140e1118a(param_1);
  return;
}



// FUNCTION 148bcca56 FUN_148bcca56 body=310 status=ok
// SIG undefined FUN_148bcca56(void)

longlong FUN_148bcca56(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  FUN_148bcadbc();
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  lVar8 = *(longlong *)(param_2 + 0x30);
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(longlong *)(param_1 + 0x30) = lVar8;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  puVar9 = (undefined8 *)(param_2 + 0x38);
  puVar10 = (undefined8 *)(param_1 + 0x38);
  for (lVar8 = 0xb; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  uVar3 = *(undefined8 *)(param_2 + 0x90);
  lVar8 = *(longlong *)(param_2 + 0x98);
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 0xc) = *(int *)(lVar8 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x90) = uVar3;
  *(longlong *)(param_1 + 0x98) = lVar8;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  uVar5 = *(undefined4 *)(param_2 + 0xa4);
  uVar6 = *(undefined4 *)(param_2 + 0xa8);
  uVar7 = *(undefined4 *)(param_2 + 0xac);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0xa4) = uVar5;
  *(undefined4 *)(param_1 + 0xa8) = uVar6;
  *(undefined4 *)(param_1 + 0xac) = uVar7;
  FUN_141818ba6(param_1 + 0xb0,param_2 + 0xb0);
  uVar3 = *(undefined8 *)(param_2 + 200);
  lVar8 = *(longlong *)(param_2 + 0xd0);
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 200) = uVar3;
  *(longlong *)(param_1 + 0xd0) = lVar8;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  FUN_140bf093e(param_1 + 0xd8,param_2 + 0xd8);
  return param_1;
}



// FUNCTION 148bccbac FUN_148bccbac body=63 status=ok
// SIG undefined FUN_148bccbac(void)

undefined1 FUN_148bccbac(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bccce4(param_2,param_3);
    param_3 = param_3 + 0x368;
    param_2 = param_2 + 0x368;
  }
  return 1;
}



// FUNCTION 148bccc14 FUN_148bccc14 body=59 status=ok
// SIG undefined FUN_148bccc14(void)

undefined8 FUN_148bccc14(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bccc60 FUN_148bccc60 body=65 status=ok
// SIG undefined FUN_148bccc60(void)

void FUN_148bccc60(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x6d) == '\x01') {
    *param_2 = &PTR_FUN_14b6778d0;
    if (param_2[0x52] != 0) {
      FUN_1400020a8();
    }
    FUN_14097122c(param_2);
    *(undefined1 *)(param_2 + 0x6d) = 0;
  }
  return;
}



// FUNCTION 148bccce4 FUN_148bccce4 body=405 status=ok
// SIG undefined FUN_148bccce4(void)

longlong FUN_148bccce4(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  uVar1 = *(undefined4 *)(param_2 + 0x3c);
  uVar2 = *(undefined4 *)(param_2 + 0x40);
  uVar3 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  FUN_144a787a6(param_1 + 0x48,param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  FUN_140d02432(param_1 + 0x60,param_2 + 0x60);
  FUN_140d02432(param_1 + 0xb0,param_2 + 0xb0);
  uVar1 = *(undefined4 *)(param_2 + 0x104);
  uVar2 = *(undefined4 *)(param_2 + 0x108);
  uVar3 = *(undefined4 *)(param_2 + 0x10c);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
  *(undefined4 *)(param_1 + 0x104) = uVar1;
  *(undefined4 *)(param_1 + 0x108) = uVar2;
  *(undefined4 *)(param_1 + 0x10c) = uVar3;
  FUN_140d02432(param_1 + 0x110,param_2 + 0x110);
  FUN_140d02432(param_1 + 0x160,param_2 + 0x160);
  *(byte *)(param_1 + 0x1b0) = *(byte *)(param_1 + 0x1b0) & 0xfe | *(byte *)(param_2 + 0x1b0) & 1;
  FUN_140d02432(param_1 + 0x1b8,param_2 + 0x1b8);
  *(byte *)(param_1 + 0x208) = *(byte *)(param_1 + 0x208) & 0xfe | *(byte *)(param_2 + 0x208) & 1;
  FUN_140d02432(param_1 + 0x210,param_2 + 0x210);
  uVar4 = *(undefined8 *)(param_2 + 0x268);
  *(undefined8 *)(param_1 + 0x260) = *(undefined8 *)(param_2 + 0x260);
  *(undefined8 *)(param_1 + 0x268) = uVar4;
  *(undefined8 *)(param_1 + 0x26f) = *(undefined8 *)(param_2 + 0x26f);
  *(undefined8 *)(param_1 + 0x278) = *(undefined8 *)(param_2 + 0x278);
  uVar1 = *(undefined4 *)(param_2 + 0x284);
  uVar2 = *(undefined4 *)(param_2 + 0x288);
  uVar3 = *(undefined4 *)(param_2 + 0x28c);
  *(undefined4 *)(param_1 + 0x280) = *(undefined4 *)(param_2 + 0x280);
  *(undefined4 *)(param_1 + 0x284) = uVar1;
  *(undefined4 *)(param_1 + 0x288) = uVar2;
  *(undefined4 *)(param_1 + 0x28c) = uVar3;
  FUN_144a787a6(param_1 + 0x290,param_2 + 0x290);
  *(undefined2 *)(param_1 + 0x2a0) = *(undefined2 *)(param_2 + 0x2a0);
  FUN_140d02432(param_1 + 0x2a8,param_2 + 0x2a8);
  *(undefined8 *)(param_1 + 0x2f8) = *(undefined8 *)(param_2 + 0x2f8);
  FUN_140d02432(param_1 + 0x300,param_2 + 0x300);
  FUN_144a7bb84(param_1 + 0x350,param_2 + 0x350);
  return param_1;
}



// FUNCTION 148bcce7a FUN_148bcce7a body=37 status=ok
// SIG undefined FUN_148bcce7a(void)

void FUN_148bcce7a(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x1a8);
  FUN_148bccff6(param_2);
  return;
}



// FUNCTION 148bccecc FUN_148bccecc body=63 status=ok
// SIG undefined FUN_148bccecc(void)

undefined1 FUN_148bccecc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bcd19a(param_2,param_3);
    param_3 = param_3 + 0x1a8;
    param_2 = param_2 + 0x1a8;
  }
  return 1;
}



// FUNCTION 148bccf34 FUN_148bccf34 body=59 status=ok
// SIG undefined FUN_148bccf34(void)

undefined8 FUN_148bccf34(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bccf80 FUN_148bccf80 body=40 status=ok
// SIG undefined FUN_148bccf80(void)

void FUN_148bccf80(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    FUN_148bcd118(param_2);
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 148bccff6 FUN_148bccff6 body=195 status=ok
// SIG undefined FUN_148bccff6(void)

undefined8 * FUN_148bccff6(undefined8 *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x11) = 0;
  *(undefined8 *)((longlong)param_1 + 0x19) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b674c20;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = &DAT_100000004;
  param_1[8] = &DAT_3f8000003f800000;
  param_1[9] = 0xbf80000000000000;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[10] = 0;
  memset(param_1 + 0xc,0,0x100);
  *(undefined4 *)(param_1 + 0x26) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 100) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x162) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined8 *)((longlong)param_1 + 0x191) = 0;
  *(undefined8 *)((longlong)param_1 + 0x199) = 0;
  return param_1;
}



// FUNCTION 148bcd0ba FUN_148bcd0ba body=38 status=ok
// SIG undefined FUN_148bcd0ba(void)

undefined8 FUN_148bcd0ba(undefined8 param_1,int param_2)

{
  FUN_148bcd118();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bcd0e0 FUN_148bcd0e0 body=55 status=ok
// SIG undefined FUN_148bcd0e0(void)

void FUN_148bcd0e0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba45b0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba45b0 = FUN_140002ddd(FUN_1465be085,uVar1,L"GrenadeBehavior_PayloadMirv");
  }
  return;
}



// FUNCTION 148bcd118 FUN_148bcd118 body=129 status=ok
// SIG undefined FUN_148bcd118(void)

void FUN_148bcd118(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b674c20;
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x2f];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = (longlong *)param_1[6];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_140e1118a(param_1);
  return;
}



// FUNCTION 148bcd19a FUN_148bcd19a body=238 status=ok
// SIG undefined FUN_148bcd19a(void)

longlong FUN_148bcd19a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  FUN_148bcadbc();
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  lVar4 = *(longlong *)(param_2 + 0x30);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(longlong *)(param_1 + 0x30) = lVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  memcpy((void *)(param_1 + 0x38),(void *)(param_2 + 0x38),0x138);
  uVar3 = *(undefined8 *)(param_2 + 0x170);
  lVar4 = *(longlong *)(param_2 + 0x178);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x178);
  *(undefined8 *)(param_1 + 0x170) = uVar3;
  *(longlong *)(param_1 + 0x178) = lVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  FUN_140bf093e(param_1 + 0x180,param_2 + 0x180);
  uVar3 = *(undefined8 *)(param_2 + 0x198);
  *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_2 + 400);
  *(undefined8 *)(param_1 + 0x198) = uVar3;
  *(undefined1 *)(param_1 + 0x1a0) = *(undefined1 *)(param_2 + 0x1a0);
  return param_1;
}



// FUNCTION 148bcd2a8 FUN_148bcd2a8 body=63 status=ok
// SIG undefined FUN_148bcd2a8(void)

undefined1 FUN_148bcd2a8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bcd3c4(param_2,param_3);
    param_3 = param_3 + 0x1f0;
    param_2 = param_2 + 0x1f0;
  }
  return 1;
}



// FUNCTION 148bcd310 FUN_148bcd310 body=59 status=ok
// SIG undefined FUN_148bcd310(void)

undefined8 FUN_148bcd310(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bcd35c FUN_148bcd35c body=38 status=ok
// SIG undefined FUN_148bcd35c(void)

void FUN_148bcd35c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1f0) == '\x01') {
    FUN_14097122c(param_2);
    *(undefined1 *)(param_2 + 0x1f0) = 0;
  }
  return;
}



// FUNCTION 148bcd3c4 FUN_148bcd3c4 body=172 status=ok
// SIG undefined FUN_148bcd3c4(void)

longlong FUN_148bcd3c4(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  uVar1 = *(undefined4 *)(param_2 + 0x3c);
  uVar2 = *(undefined4 *)(param_2 + 0x40);
  uVar3 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  FUN_144a787a6(param_1 + 0x48,param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  FUN_140d02432(param_1 + 0x60,param_2 + 0x60);
  FUN_140d02432(param_1 + 0xb0,param_2 + 0xb0);
  FUN_140d02432(param_1 + 0x100,param_2 + 0x100);
  FUN_140d02432(param_1 + 0x150,param_2 + 0x150);
  FUN_140d02432(param_1 + 0x1a0,param_2 + 0x1a0);
  return param_1;
}



// FUNCTION 148bcd472 FUN_148bcd472 body=85 status=ok
// SIG undefined FUN_148bcd472(void)

void FUN_148bcd472(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x98);
  *param_2 = &PTR_FUN_14b6750e0;
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 7) = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  *(undefined8 *)((longlong)param_2 + 0x8a) = 0;
  *(undefined8 *)((longlong)param_2 + 0x92) = 0;
  return;
}



// FUNCTION 148bcd52c FUN_148bcd52c body=63 status=ok
// SIG undefined FUN_148bcd52c(void)

undefined1 FUN_148bcd52c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bcd748(param_2,param_3);
    param_3 = param_3 + 0xa0;
    param_2 = param_2 + 0xa0;
  }
  return 1;
}



// FUNCTION 148bcd594 FUN_148bcd594 body=59 status=ok
// SIG undefined FUN_148bcd594(void)

undefined8 FUN_148bcd594(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bcd5e0 FUN_148bcd5e0 body=40 status=ok
// SIG undefined FUN_148bcd5e0(void)

void FUN_148bcd5e0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_148bcd6b4(param_2);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 148bcd656 FUN_148bcd656 body=38 status=ok
// SIG undefined FUN_148bcd656(void)

undefined8 FUN_148bcd656(undefined8 param_1,int param_2)

{
  FUN_148bcd6b4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bcd67c FUN_148bcd67c body=55 status=ok
// SIG undefined FUN_148bcd67c(void)

void FUN_148bcd67c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba45f8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba45f8 = FUN_140002ddd(FUN_1465be1a9,uVar1,L"GrenadeBehavior_PayloadShooting");
  }
  return;
}



// FUNCTION 148bcd6b4 FUN_148bcd6b4 body=147 status=ok
// SIG undefined FUN_148bcd6b4(void)

void FUN_148bcd6b4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b6750e0;
  plVar3 = (longlong *)param_1[0xe];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = (longlong *)param_1[0xc];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = (longlong *)param_1[6];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_140e1118a(param_1);
  return;
}



// FUNCTION 148bcd748 FUN_148bcd748 body=276 status=ok
// SIG undefined FUN_148bcd748(void)

longlong FUN_148bcd748(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  FUN_148bcadbc();
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  lVar4 = *(longlong *)(param_2 + 0x30);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(longlong *)(param_1 + 0x30) = lVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  uVar6 = *(undefined4 *)(param_2 + 0x38);
  uVar7 = *(undefined4 *)(param_2 + 0x3c);
  uVar8 = *(undefined4 *)(param_2 + 0x40);
  uVar9 = *(undefined4 *)(param_2 + 0x44);
  uVar10 = *(undefined4 *)(param_2 + 0x4c);
  uVar11 = *(undefined4 *)(param_2 + 0x50);
  uVar12 = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = uVar10;
  *(undefined4 *)(param_1 + 0x50) = uVar11;
  *(undefined4 *)(param_1 + 0x54) = uVar12;
  *(undefined4 *)(param_1 + 0x38) = uVar6;
  *(undefined4 *)(param_1 + 0x3c) = uVar7;
  *(undefined4 *)(param_1 + 0x40) = uVar8;
  *(undefined4 *)(param_1 + 0x44) = uVar9;
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  lVar4 = *(longlong *)(param_2 + 0x60);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  *(longlong *)(param_1 + 0x60) = lVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  uVar3 = *(undefined8 *)(param_2 + 0x68);
  lVar4 = *(longlong *)(param_2 + 0x70);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x68) = uVar3;
  *(longlong *)(param_1 + 0x70) = lVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  *(undefined2 *)(param_1 + 0x98) = *(undefined2 *)(param_2 + 0x98);
  uVar3 = *(undefined8 *)(param_2 + 0x78);
  uVar13 = *(undefined8 *)(param_2 + 0x80);
  uVar14 = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x90) = uVar14;
  *(undefined8 *)(param_1 + 0x78) = uVar3;
  *(undefined8 *)(param_1 + 0x80) = uVar13;
  return param_1;
}



// FUNCTION 148bcd87c FUN_148bcd87c body=63 status=ok
// SIG undefined FUN_148bcd87c(void)

undefined1 FUN_148bcd87c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bcd9bc(param_2,param_3);
    param_3 = param_3 + 0x1c8;
    param_2 = param_2 + 0x1c8;
  }
  return 1;
}



// FUNCTION 148bcd8e4 FUN_148bcd8e4 body=59 status=ok
// SIG undefined FUN_148bcd8e4(void)

undefined8 FUN_148bcd8e4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bcd930 FUN_148bcd930 body=65 status=ok
// SIG undefined FUN_148bcd930(void)

void FUN_148bcd930(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x39) == '\x01') {
    *param_2 = &PTR_FUN_14b6778f0;
    if (param_2[0x36] != 0) {
      FUN_1400020a8();
    }
    FUN_14097122c(param_2);
    *(undefined1 *)(param_2 + 0x39) = 0;
  }
  return;
}



// FUNCTION 148bcd9bc FUN_148bcd9bc body=260 status=ok
// SIG undefined FUN_148bcd9bc(void)

longlong FUN_148bcd9bc(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  uVar1 = *(undefined4 *)(param_2 + 0x3c);
  uVar2 = *(undefined4 *)(param_2 + 0x40);
  uVar3 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  FUN_144a787a6(param_1 + 0x48,param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  if ((*(longlong *)(param_1 + 0x60) != *(longlong *)(param_2 + 0x60)) ||
     (*(int *)(param_1 + 0x68) != *(int *)(param_2 + 0x68))) {
    *(longlong *)(param_1 + 0x60) = *(longlong *)(param_2 + 0x60);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  FUN_140d02432(param_1 + 0x78,param_2 + 0x78);
  FUN_140d02432(param_1 + 200,param_2 + 200);
  FUN_140d02432(param_1 + 0x118,param_2 + 0x118);
  if ((*(longlong *)(param_1 + 0x168) != *(longlong *)(param_2 + 0x168)) ||
     (*(int *)(param_1 + 0x170) != *(int *)(param_2 + 0x170))) {
    *(longlong *)(param_1 + 0x168) = *(longlong *)(param_2 + 0x168);
    *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_2 + 0x170);
    *(undefined8 *)(param_1 + 0x178) = 0;
  }
  FUN_14118c70e(param_1 + 0x180,param_2 + 0x180);
  *(undefined1 *)(param_1 + 0x1c0) = *(undefined1 *)(param_2 + 0x1c0);
  return param_1;
}



// FUNCTION 148bcdac2 FUN_148bcdac2 body=57 status=ok
// SIG undefined FUN_148bcdac2(void)

void FUN_148bcdac2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4628 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4628 = FUN_140002ddd(FUN_1465be26f,uVar1,L"GrenadeBehaviorDef_PayloadSingularity");
  }
  return;
}



// FUNCTION 148bcdb30 FUN_148bcdb30 body=54 status=ok
// SIG undefined FUN_148bcdb30(void)

undefined1 FUN_148bcdb30(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bcdc44(param_2,param_3);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 148bcdb8e FUN_148bcdb8e body=59 status=ok
// SIG undefined FUN_148bcdb8e(void)

undefined8 FUN_148bcdb8e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bcdbd4 FUN_148bcdbd4 body=34 status=ok
// SIG undefined FUN_148bcdbd4(void)

void FUN_148bcdbd4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_148bcdcc0(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 148bcdc44 FUN_148bcdc44 body=122 status=ok
// SIG undefined FUN_148bcdc44(void)

longlong FUN_148bcdc44(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  FUN_148bcadbc();
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  lVar4 = *(longlong *)(param_2 + 0x30);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(longlong *)(param_1 + 0x30) = lVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  uVar6 = *(undefined8 *)(param_2 + 0x40);
  uVar7 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = uVar7;
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  *(undefined8 *)(param_1 + 0x40) = uVar6;
  return param_1;
}



// FUNCTION 148bcdcc0 FUN_148bcdcc0 body=71 status=ok
// SIG undefined FUN_148bcdcc0(void)

void FUN_148bcdcc0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b677910;
  plVar3 = (longlong *)param_1[6];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_140e1118a(param_1);
  return;
}



// FUNCTION 148bcdd08 FUN_148bcdd08 body=38 status=ok
// SIG undefined FUN_148bcdd08(void)

undefined8 FUN_148bcdd08(undefined8 param_1,int param_2)

{
  FUN_148bcdcc0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bcdd2e FUN_148bcdd2e body=55 status=ok
// SIG undefined FUN_148bcdd2e(void)

void FUN_148bcdd2e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4640 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4640 = FUN_140002ddd(FUN_1465be305,uVar1,L"GrenadeBehavior_PayloadSingularity");
  }
  return;
}



// FUNCTION 148bcdd84 FUN_148bcdd84 body=63 status=ok
// SIG undefined FUN_148bcdd84(void)

undefined1 FUN_148bcdd84(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bcdea0(param_2,param_3);
    param_3 = param_3 + 0xa0;
    param_2 = param_2 + 0xa0;
  }
  return 1;
}



// FUNCTION 148bcddec FUN_148bcddec body=59 status=ok
// SIG undefined FUN_148bcddec(void)

undefined8 FUN_148bcddec(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bcde38 FUN_148bcde38 body=38 status=ok
// SIG undefined FUN_148bcde38(void)

void FUN_148bcde38(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_14097122c(param_2);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 148bcdea0 FUN_148bcdea0 body=161 status=ok
// SIG undefined FUN_148bcdea0(void)

longlong FUN_148bcdea0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  uVar1 = *(undefined4 *)(param_2 + 0x3c);
  uVar2 = *(undefined4 *)(param_2 + 0x40);
  uVar3 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  FUN_144a787a6(param_1 + 0x48,param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  if ((*(longlong *)(param_1 + 0x60) != *(longlong *)(param_2 + 0x60)) ||
     (*(int *)(param_1 + 0x68) != *(int *)(param_2 + 0x68))) {
    *(longlong *)(param_1 + 0x60) = *(longlong *)(param_2 + 0x60);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  *(undefined1 *)(param_1 + 0x78) = *(undefined1 *)(param_2 + 0x78);
  FUN_144a7bb84(param_1 + 0x80,param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  return param_1;
}



// FUNCTION 148bcdfae FUN_148bcdfae body=54 status=ok
// SIG undefined FUN_148bcdfae(void)

undefined1 FUN_148bcdfae(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bce168(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 148bce00c FUN_148bce00c body=59 status=ok
// SIG undefined FUN_148bce00c(void)

undefined8 FUN_148bce00c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bce052 FUN_148bce052 body=34 status=ok
// SIG undefined FUN_148bce052(void)

void FUN_148bce052(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_148bce120(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 148bce0c2 FUN_148bce0c2 body=38 status=ok
// SIG undefined FUN_148bce0c2(void)

undefined8 FUN_148bce0c2(undefined8 param_1,int param_2)

{
  FUN_148bce120();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bce0e8 FUN_148bce0e8 body=55 status=ok
// SIG undefined FUN_148bce0e8(void)

void FUN_148bce0e8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4670 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4670 = FUN_140002ddd(FUN_1465be3fb,uVar1,L"GrenadeBehavior_PayloadSpawnActor");
  }
  return;
}



// FUNCTION 148bce120 FUN_148bce120 body=71 status=ok
// SIG undefined FUN_148bce120(void)

void FUN_148bce120(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b6757d0;
  plVar3 = (longlong *)param_1[6];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_140e1118a(param_1);
  return;
}



// FUNCTION 148bce168 FUN_148bce168 body=106 status=ok
// SIG undefined FUN_148bce168(void)

longlong FUN_148bce168(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  FUN_148bcadbc();
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  lVar4 = *(longlong *)(param_2 + 0x30);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(longlong *)(param_1 + 0x30) = lVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  *(undefined2 *)(param_1 + 0x38) = *(undefined2 *)(param_2 + 0x38);
  return param_1;
}



// FUNCTION 148bce200 FUN_148bce200 body=63 status=ok
// SIG undefined FUN_148bce200(void)

undefined1 FUN_148bce200(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bce328(param_2,param_3);
    param_3 = param_3 + 0x248;
    param_2 = param_2 + 0x248;
  }
  return 1;
}



// FUNCTION 148bce268 FUN_148bce268 body=59 status=ok
// SIG undefined FUN_148bce268(void)

undefined8 FUN_148bce268(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bce2b4 FUN_148bce2b4 body=38 status=ok
// SIG undefined FUN_148bce2b4(void)

void FUN_148bce2b4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x248) == '\x01') {
    FUN_14097122c(param_2);
    *(undefined1 *)(param_2 + 0x248) = 0;
  }
  return;
}



// FUNCTION 148bce328 FUN_148bce328 body=201 status=ok
// SIG undefined FUN_148bce328(void)

longlong FUN_148bce328(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  uVar1 = *(undefined4 *)(param_2 + 0x3c);
  uVar2 = *(undefined4 *)(param_2 + 0x40);
  uVar3 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  FUN_144a787a6(param_1 + 0x48,param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  FUN_140d02432(param_1 + 0x60,param_2 + 0x60);
  *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(param_2 + 0xb0);
  FUN_140d02432(param_1 + 0xb8,param_2 + 0xb8);
  FUN_140d02432(param_1 + 0x108,param_2 + 0x108);
  FUN_140d02432(param_1 + 0x158,param_2 + 0x158);
  FUN_140d02432(param_1 + 0x1a8,param_2 + 0x1a8);
  FUN_140d02432(param_1 + 0x1f8,param_2 + 0x1f8);
  return param_1;
}



// FUNCTION 148bce472 FUN_148bce472 body=54 status=ok
// SIG undefined FUN_148bce472(void)

undefined1 FUN_148bce472(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bce62c(param_2,param_3);
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return 1;
}



// FUNCTION 148bce4d0 FUN_148bce4d0 body=59 status=ok
// SIG undefined FUN_148bce4d0(void)

undefined8 FUN_148bce4d0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bce516 FUN_148bce516 body=34 status=ok
// SIG undefined FUN_148bce516(void)

void FUN_148bce516(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_148bce5e4(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 148bce586 FUN_148bce586 body=38 status=ok
// SIG undefined FUN_148bce586(void)

undefined8 FUN_148bce586(undefined8 param_1,int param_2)

{
  FUN_148bce5e4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bce5ac FUN_148bce5ac body=55 status=ok
// SIG undefined FUN_148bce5ac(void)

void FUN_148bce5ac(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba46b8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba46b8 = FUN_140002ddd(FUN_1465be51f,uVar1,L"GrenadeBehavior_PayloadSpring");
  }
  return;
}



// FUNCTION 148bce5e4 FUN_148bce5e4 body=71 status=ok
// SIG undefined FUN_148bce5e4(void)

void FUN_148bce5e4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b675cf0;
  plVar3 = (longlong *)param_1[6];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_140e1118a(param_1);
  return;
}



// FUNCTION 148bce62c FUN_148bce62c body=114 status=ok
// SIG undefined FUN_148bce62c(void)

longlong FUN_148bce62c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  FUN_148bcadbc();
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  lVar4 = *(longlong *)(param_2 + 0x30);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(longlong *)(param_1 + 0x30) = lVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  uVar6 = *(undefined8 *)(param_2 + 0x40);
  uVar7 = *(undefined8 *)(param_2 + 0x4f);
  *(undefined8 *)(param_1 + 0x47) = *(undefined8 *)(param_2 + 0x47);
  *(undefined8 *)(param_1 + 0x4f) = uVar7;
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  *(undefined8 *)(param_1 + 0x40) = uVar6;
  return param_1;
}



// FUNCTION 148bce6be FUN_148bce6be body=63 status=ok
// SIG undefined FUN_148bce6be(void)

undefined1 FUN_148bce6be(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bce7da(param_2,param_3);
    param_3 = param_3 + 0x1c8;
    param_2 = param_2 + 0x1c8;
  }
  return 1;
}



// FUNCTION 148bce726 FUN_148bce726 body=59 status=ok
// SIG undefined FUN_148bce726(void)

undefined8 FUN_148bce726(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bce772 FUN_148bce772 body=38 status=ok
// SIG undefined FUN_148bce772(void)

void FUN_148bce772(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1c8) == '\x01') {
    FUN_14097122c(param_2);
    *(undefined1 *)(param_2 + 0x1c8) = 0;
  }
  return;
}



// FUNCTION 148bce7da FUN_148bce7da body=198 status=ok
// SIG undefined FUN_148bce7da(void)

longlong FUN_148bce7da(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  uVar1 = *(undefined4 *)(param_2 + 0x3c);
  uVar2 = *(undefined4 *)(param_2 + 0x40);
  uVar3 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  FUN_144a787a6(param_1 + 0x48,param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  FUN_140d02432(param_1 + 0x60,param_2 + 0x60);
  FUN_140d02432(param_1 + 0xb0,param_2 + 0xb0);
  FUN_140d02432(param_1 + 0x100,param_2 + 0x100);
  FUN_140d02432(param_1 + 0x150,param_2 + 0x150);
  *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_2 + 0x1a0);
  *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_2 + 0x1a8);
  FUN_144a7bb84(param_1 + 0x1b0,param_2 + 0x1b0);
  return param_1;
}



// FUNCTION 148bce932 FUN_148bce932 body=54 status=ok
// SIG undefined FUN_148bce932(void)

undefined1 FUN_148bce932(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bceb00(param_2,param_3);
    param_3 = param_3 + 0x78;
    param_2 = param_2 + 0x78;
  }
  return 1;
}



// FUNCTION 148bce990 FUN_148bce990 body=59 status=ok
// SIG undefined FUN_148bce990(void)

undefined8 FUN_148bce990(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


