// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148ca20ee FUN_148ca20ee body=48 status=ok
// SIG undefined FUN_148ca20ee(void)

longlong FUN_148ca20ee(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x8d0;
  FUN_140ef64b4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca211e FUN_148ca211e body=48 status=ok
// SIG undefined FUN_148ca211e(void)

longlong FUN_148ca211e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x8d8;
  FUN_140ef64b4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca214e FUN_148ca214e body=48 status=ok
// SIG undefined FUN_148ca214e(void)

longlong FUN_148ca214e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x8e0;
  FUN_140ef64b4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca217e FUN_148ca217e body=48 status=ok
// SIG undefined FUN_148ca217e(void)

longlong FUN_148ca217e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x8e8;
  FUN_140ef64b4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca21ae FUN_148ca21ae body=48 status=ok
// SIG undefined FUN_148ca21ae(void)

longlong FUN_148ca21ae(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xdd8;
  FUN_140ef64b4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca21de FUN_148ca21de body=48 status=ok
// SIG undefined FUN_148ca21de(void)

longlong FUN_148ca21de(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xde0;
  FUN_140ef64b4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca220e FUN_148ca220e body=48 status=ok
// SIG undefined FUN_148ca220e(void)

longlong FUN_148ca220e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xde8;
  FUN_140ef64b4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca223e FUN_148ca223e body=48 status=ok
// SIG undefined FUN_148ca223e(void)

longlong FUN_148ca223e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xdf0;
  FUN_140ef64b4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca226e FUN_148ca226e body=117 status=ok
// SIG undefined FUN_148ca226e(void)

void FUN_148ca226e(undefined8 param_1,undefined8 *param_2)

{
  FUN_1412dbdbe(param_2);
  *param_2 = &PTR_FUN_14b8ec600;
  *(undefined1 *)(param_2 + 0x2c) = 0;
  *(undefined4 *)((longlong)param_2 + 0x164) = 0x42c80000;
  param_2[0x31] = 0;
  *(undefined4 *)(param_2 + 0x32) = 0;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  *(undefined8 *)((longlong)param_2 + 0x194) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x19c) = 0;
  param_2[0x35] = 0;
  *(undefined4 *)(param_2 + 0x36) = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  return;
}



// FUNCTION 148ca22fa FUN_148ca22fa body=122 status=ok
// SIG undefined FUN_148ca22fa(void)

undefined8 FUN_148ca22fa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148729034(param_2,param_3);
    *(undefined8 *)(param_2 + 0x160) = *(undefined8 *)(param_3 + 0x160);
    FUN_140d2c7b6(param_2 + 0x168,param_3 + 0x168);
    FUN_1406fa324(param_2 + 0x1b8,param_3 + 0x1b8);
    param_2 = param_2 + 0x1c8;
    param_3 = param_3 + 0x1c8;
  }
  return 1;
}



// FUNCTION 148ca239c FUN_148ca239c body=59 status=ok
// SIG undefined FUN_148ca239c(void)

undefined8 FUN_148ca239c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca23e8 FUN_148ca23e8 body=40 status=ok
// SIG undefined FUN_148ca23e8(void)

void FUN_148ca23e8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1c8) == '\x01') {
    FUN_1458890ac(param_2);
    *(undefined1 *)(param_2 + 0x1c8) = 0;
  }
  return;
}



// FUNCTION 148ca2522 FUN_148ca2522 body=133 status=ok
// SIG undefined FUN_148ca2522(void)

undefined8 FUN_148ca2522(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined1 *puVar1;
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
  longlong lVar14;
  
  if (param_4 != 0) {
    lVar14 = 0;
    do {
      puVar1 = (undefined1 *)(param_3 + lVar14);
      lVar2 = param_2 + 8 + lVar14;
      *(undefined1 *)(lVar2 + -8) = *puVar1;
      FUN_140d02432(lVar2,puVar1 + 8);
      uVar3 = *(undefined4 *)(puVar1 + 0x5c);
      uVar4 = *(undefined4 *)(puVar1 + 0x60);
      uVar5 = *(undefined4 *)(puVar1 + 100);
      uVar6 = *(undefined4 *)(puVar1 + 0x68);
      uVar7 = *(undefined4 *)(puVar1 + 0x6c);
      uVar8 = *(undefined4 *)(puVar1 + 0x70);
      uVar9 = *(undefined4 *)(puVar1 + 0x74);
      uVar10 = *(undefined4 *)(puVar1 + 0x78);
      uVar11 = *(undefined4 *)(puVar1 + 0x7c);
      uVar12 = *(undefined4 *)(puVar1 + 0x80);
      uVar13 = *(undefined4 *)(puVar1 + 0x84);
      *(undefined4 *)(lVar2 + 0x50) = *(undefined4 *)(puVar1 + 0x58);
      *(undefined4 *)(lVar2 + 0x54) = uVar3;
      *(undefined4 *)(lVar2 + 0x58) = uVar4;
      *(undefined4 *)(lVar2 + 0x5c) = uVar5;
      *(undefined4 *)(lVar2 + 0x60) = uVar6;
      *(undefined4 *)(lVar2 + 100) = uVar7;
      *(undefined4 *)(lVar2 + 0x68) = uVar8;
      *(undefined4 *)(lVar2 + 0x6c) = uVar9;
      *(undefined4 *)(lVar2 + 0x70) = uVar10;
      *(undefined4 *)(lVar2 + 0x74) = uVar11;
      *(undefined4 *)(lVar2 + 0x78) = uVar12;
      *(undefined4 *)(lVar2 + 0x7c) = uVar13;
      *(undefined8 *)(lVar2 + 0x80) = *(undefined8 *)(puVar1 + 0x88);
      lVar14 = lVar14 + 0x90;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148ca25d0 FUN_148ca25d0 body=59 status=ok
// SIG undefined FUN_148ca25d0(void)

undefined8 FUN_148ca25d0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca26e4 FUN_148ca26e4 body=141 status=ok
// SIG undefined FUN_148ca26e4(void)

undefined8 FUN_148ca26e4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
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
  longlong lVar14;
  
  if (param_4 != 0) {
    lVar14 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar14);
      lVar2 = param_2 + 0x10 + lVar14;
      *(undefined8 *)(lVar2 + -0x10) = *puVar1;
      *(undefined1 *)(lVar2 + -8) = *(undefined1 *)(puVar1 + 1);
      FUN_140d02432(lVar2,puVar1 + 2);
      uVar3 = *(undefined4 *)((longlong)puVar1 + 100);
      uVar4 = *(undefined4 *)(puVar1 + 0xd);
      uVar5 = *(undefined4 *)((longlong)puVar1 + 0x6c);
      uVar6 = *(undefined4 *)(puVar1 + 0xe);
      uVar7 = *(undefined4 *)((longlong)puVar1 + 0x74);
      uVar8 = *(undefined4 *)(puVar1 + 0xf);
      uVar9 = *(undefined4 *)((longlong)puVar1 + 0x7c);
      uVar10 = *(undefined4 *)(puVar1 + 0x10);
      uVar11 = *(undefined4 *)((longlong)puVar1 + 0x84);
      uVar12 = *(undefined4 *)(puVar1 + 0x11);
      uVar13 = *(undefined4 *)((longlong)puVar1 + 0x8c);
      *(undefined4 *)(lVar2 + 0x50) = *(undefined4 *)(puVar1 + 0xc);
      *(undefined4 *)(lVar2 + 0x54) = uVar3;
      *(undefined4 *)(lVar2 + 0x58) = uVar4;
      *(undefined4 *)(lVar2 + 0x5c) = uVar5;
      *(undefined4 *)(lVar2 + 0x60) = uVar6;
      *(undefined4 *)(lVar2 + 100) = uVar7;
      *(undefined4 *)(lVar2 + 0x68) = uVar8;
      *(undefined4 *)(lVar2 + 0x6c) = uVar9;
      *(undefined4 *)(lVar2 + 0x70) = uVar10;
      *(undefined4 *)(lVar2 + 0x74) = uVar11;
      *(undefined4 *)(lVar2 + 0x78) = uVar12;
      *(undefined4 *)(lVar2 + 0x7c) = uVar13;
      *(undefined8 *)(lVar2 + 0x80) = puVar1[0x12];
      lVar14 = lVar14 + 0x98;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148ca279a FUN_148ca279a body=59 status=ok
// SIG undefined FUN_148ca279a(void)

undefined8 FUN_148ca279a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca285a FUN_148ca285a body=190 status=ok
// SIG undefined FUN_148ca285a(void)

undefined8 FUN_148ca285a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
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
  longlong lVar14;
  
  if (param_4 != 0) {
    lVar14 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar14);
      lVar2 = param_2 + 0x10 + lVar14;
      *(undefined8 *)(lVar2 + -0x10) = *puVar1;
      *(undefined1 *)(lVar2 + -8) = *(undefined1 *)(puVar1 + 1);
      FUN_140d02432(lVar2,puVar1 + 2);
      uVar3 = *(undefined4 *)((longlong)puVar1 + 100);
      uVar4 = *(undefined4 *)(puVar1 + 0xd);
      uVar5 = *(undefined4 *)((longlong)puVar1 + 0x6c);
      uVar6 = *(undefined4 *)(puVar1 + 0xe);
      uVar7 = *(undefined4 *)((longlong)puVar1 + 0x74);
      uVar8 = *(undefined4 *)(puVar1 + 0xf);
      uVar9 = *(undefined4 *)((longlong)puVar1 + 0x7c);
      uVar10 = *(undefined4 *)(puVar1 + 0x10);
      uVar11 = *(undefined4 *)((longlong)puVar1 + 0x84);
      uVar12 = *(undefined4 *)(puVar1 + 0x11);
      uVar13 = *(undefined4 *)((longlong)puVar1 + 0x8c);
      *(undefined4 *)(lVar2 + 0x50) = *(undefined4 *)(puVar1 + 0xc);
      *(undefined4 *)(lVar2 + 0x54) = uVar3;
      *(undefined4 *)(lVar2 + 0x58) = uVar4;
      *(undefined4 *)(lVar2 + 0x5c) = uVar5;
      *(undefined4 *)(lVar2 + 0x60) = uVar6;
      *(undefined4 *)(lVar2 + 100) = uVar7;
      *(undefined4 *)(lVar2 + 0x68) = uVar8;
      *(undefined4 *)(lVar2 + 0x6c) = uVar9;
      *(undefined4 *)(lVar2 + 0x70) = uVar10;
      *(undefined4 *)(lVar2 + 0x74) = uVar11;
      *(undefined4 *)(lVar2 + 0x78) = uVar12;
      *(undefined4 *)(lVar2 + 0x7c) = uVar13;
      *(undefined8 *)(lVar2 + 0x80) = puVar1[0x12];
      FUN_148c9e2f2(param_2 + lVar14 + 0x98,param_3 + lVar14 + 0x98);
      lVar14 = lVar14 + 0xe8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148ca2940 FUN_148ca2940 body=59 status=ok
// SIG undefined FUN_148ca2940(void)

undefined8 FUN_148ca2940(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca298c FUN_148ca298c body=69 status=ok
// SIG undefined FUN_148ca298c(void)

void FUN_148ca298c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe8) == '\x01') {
    *(undefined4 *)(param_2 + 0xe0) = 0;
    if (*(longlong *)(param_2 + 0xd8) != 0) {
      FUN_1400020a8();
    }
    FUN_140bb61f0(param_2 + 0x98);
    *(undefined1 *)(param_2 + 0xe8) = 0;
  }
  return;
}



// FUNCTION 148ca2a14 FUN_148ca2a14 body=147 status=ok
// SIG undefined FUN_148ca2a14(void)

void FUN_148ca2a14(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0xf00000d0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
  *(undefined2 *)(param_1 + 0xc) = 1;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0xe] = DAT_14c8464e0;
  param_1[0xf] = uVar1;
  param_1[0x10] = DAT_14c8464f0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



// FUNCTION 148ca2ace FUN_148ca2ace body=88 status=ok
// SIG undefined FUN_148ca2ace(void)

undefined8 FUN_148ca2ace(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar6);
      lVar2 = param_2 + 0x20 + lVar6;
      *(undefined8 *)(lVar2 + -0x20) = *puVar1;
      *(undefined8 *)(lVar2 + -0x18) = puVar1[1];
      uVar3 = *(undefined4 *)((longlong)puVar1 + 0x14);
      uVar4 = *(undefined4 *)(puVar1 + 3);
      uVar5 = *(undefined4 *)((longlong)puVar1 + 0x1c);
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(puVar1 + 2);
      *(undefined4 *)(lVar2 + -0xc) = uVar3;
      *(undefined4 *)(lVar2 + -8) = uVar4;
      *(undefined4 *)(lVar2 + -4) = uVar5;
      FUN_144a787a6();
      lVar6 = lVar6 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148ca2b4e FUN_148ca2b4e body=59 status=ok
// SIG undefined FUN_148ca2b4e(void)

undefined8 FUN_148ca2b4e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca2b94 FUN_148ca2b94 body=38 status=ok
// SIG undefined FUN_148ca2b94(void)

void FUN_148ca2b94(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    if (*(longlong *)(param_2 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 148ca2c32 FUN_148ca2c32 body=54 status=ok
// SIG undefined FUN_148ca2c32(void)

undefined1 FUN_148ca2c32(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148ca2d4a(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 148ca2c90 FUN_148ca2c90 body=59 status=ok
// SIG undefined FUN_148ca2c90(void)

undefined8 FUN_148ca2c90(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca2cd6 FUN_148ca2cd6 body=37 status=ok
// SIG undefined FUN_148ca2cd6(void)

void FUN_148ca2cd6(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 148ca2d4a FUN_148ca2d4a body=79 status=ok
// SIG undefined FUN_148ca2d4a(void)

undefined8 * FUN_148ca2d4a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148ca2d9a(param_1,iVar1);
      FUN_148ca2dfc(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148ca2d9a FUN_148ca2d9a body=98 status=ok
// SIG undefined FUN_148ca2d9a(void)

void FUN_148ca2d9a(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,8);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148ca2dfc FUN_148ca2dfc body=82 status=ok
// SIG undefined FUN_148ca2dfc(void)

void FUN_148ca2dfc(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 148ca2e50 FUN_148ca2e50 body=37 status=ok
// SIG undefined FUN_148ca2e50(void)

void FUN_148ca2e50(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x278);
  FUN_148ca2fc6(param_2);
  return;
}



// FUNCTION 148ca2e9c FUN_148ca2e9c body=63 status=ok
// SIG undefined FUN_148ca2e9c(void)

undefined1 FUN_148ca2e9c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148ca3144(param_2,param_3);
    param_3 = param_3 + 0x278;
    param_2 = param_2 + 0x278;
  }
  return 1;
}



// FUNCTION 148ca2f04 FUN_148ca2f04 body=59 status=ok
// SIG undefined FUN_148ca2f04(void)

undefined8 FUN_148ca2f04(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca2f50 FUN_148ca2f50 body=40 status=ok
// SIG undefined FUN_148ca2f50(void)

void FUN_148ca2f50(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x278) == '\x01') {
    FUN_148c9ce7c(param_2);
    *(undefined1 *)(param_2 + 0x278) = 0;
  }
  return;
}



// FUNCTION 148ca2fc6 FUN_148ca2fc6 body=382 status=ok
// SIG undefined FUN_148ca2fc6(void)

void FUN_148ca2fc6(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0x101;
  *(undefined1 *)((longlong)param_1 + 10) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x24] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x22] = DAT_14c8464e0;
  param_1[0x23] = uVar1;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0xf00000d0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x3f800000;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *(undefined8 *)((longlong)param_1 + 0x254) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x25c) = 0;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  return;
}



// FUNCTION 148ca3144 FUN_148ca3144 body=212 status=ok
// SIG undefined FUN_148ca3144(void)

undefined8 * FUN_148ca3144(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined4 *)((longlong)param_1 + 7) = *(undefined4 *)((longlong)param_2 + 7);
  *param_1 = *param_2;
  FUN_148c9dade(param_1 + 2,param_2 + 2);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  FUN_148c9dbd2(param_1 + 0xd,param_2 + 0xd);
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
  FUN_148c9dcc2(param_1 + 0x18,param_2 + 0x18);
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x114);
  uVar2 = *(undefined4 *)(param_2 + 0x23);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x11c);
  *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)(param_2 + 0x22);
  *(undefined4 *)((longlong)param_1 + 0x114) = uVar1;
  *(undefined4 *)(param_1 + 0x23) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x11c) = uVar3;
  param_1[0x24] = param_2[0x24];
  FUN_148c9ddb2(param_1 + 0x25,param_2 + 0x25);
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x17c);
  uVar2 = *(undefined4 *)(param_2 + 0x30);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x184);
  *(undefined4 *)(param_1 + 0x2f) = *(undefined4 *)(param_2 + 0x2f);
  *(undefined4 *)((longlong)param_1 + 0x17c) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x184) = uVar3;
  FUN_148c9dea6(param_1 + 0x31,param_2 + 0x31);
  FUN_140d02432(param_1 + 0x3b,param_2 + 0x3b);
  FUN_148c9df9c(param_1 + 0x45,param_2 + 0x45);
  return param_1;
}



// FUNCTION 148ca3286 FUN_148ca3286 body=59 status=ok
// SIG undefined FUN_148ca3286(void)

undefined8 FUN_148ca3286(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca331a FUN_148ca331a body=55 status=ok
// SIG undefined FUN_148ca331a(void)

void FUN_148ca331a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbd0a8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbd0a8 = FUN_140002ddd(FUN_14660dbf3,uVar1,L"OakVehicleValueResolver");
  }
  return;
}



// FUNCTION 148ca336e FUN_148ca336e body=125 status=ok
// SIG undefined FUN_148ca336e(void)

void FUN_148ca336e(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xb40);
  FUN_140b1ac70(param_2);
  param_2[0x161] = 0;
  *(undefined4 *)(param_2 + 0x162) = 0;
  param_2[0x15a] = 0;
  param_2[0x15b] = 0;
  param_2[0x15c] = 0;
  param_2[0x15d] = 0;
  param_2[0x15e] = 0;
  *(undefined8 *)((longlong)param_2 + 0xb14) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0xb1c) = 0;
  param_2[0x165] = 0;
  *(undefined4 *)(param_2 + 0x166) = 0;
  *param_2 = &PTR_FUN_14b8ef220;
  return;
}



// FUNCTION 148ca33ec FUN_148ca33ec body=107 status=ok
// SIG undefined FUN_148ca33ec(void)

void FUN_148ca33ec(undefined8 param_1,undefined8 *param_2)

{
  FUN_140b1ac70(param_2);
  param_2[0x161] = 0;
  *(undefined4 *)(param_2 + 0x162) = 0;
  param_2[0x15a] = 0;
  param_2[0x15b] = 0;
  param_2[0x15c] = 0;
  param_2[0x15d] = 0;
  param_2[0x15e] = 0;
  *(undefined8 *)((longlong)param_2 + 0xb14) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0xb1c) = 0;
  param_2[0x165] = 0;
  *(undefined4 *)(param_2 + 0x166) = 0;
  *param_2 = &PTR_FUN_14b8ef220;
  return;
}



// FUNCTION 148ca347c FUN_148ca347c body=63 status=ok
// SIG undefined FUN_148ca347c(void)

undefined1 FUN_148ca347c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_141852950(param_2,param_3);
    param_3 = param_3 + 0xb40;
    param_2 = param_2 + 0xb40;
  }
  return 1;
}



// FUNCTION 148ca34e4 FUN_148ca34e4 body=59 status=ok
// SIG undefined FUN_148ca34e4(void)

undefined8 FUN_148ca34e4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca3530 FUN_148ca3530 body=38 status=ok
// SIG undefined FUN_148ca3530(void)

void FUN_148ca3530(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb40) == '\x01') {
    FUN_140998e52(param_2);
    *(undefined1 *)(param_2 + 0xb40) = 0;
  }
  return;
}



// FUNCTION 148ca3612 FUN_148ca3612 body=64 status=ok
// SIG undefined FUN_148ca3612(void)

undefined4 FUN_148ca3612(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return *param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca36ba FUN_148ca36ba body=118 status=ok
// SIG undefined FUN_148ca36ba(void)

void FUN_148ca36ba(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xe8);
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_2 + 0x90) = 0;
  *(undefined8 *)((longlong)param_2 + 0x98) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb8) = 0xf;
  *(undefined1 *)((longlong)param_2 + 0xc0) = 1;
  *(undefined8 *)((longlong)param_2 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_2 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xdf) = 0;
  return;
}



// FUNCTION 148ca37cc FUN_148ca37cc body=90 status=ok
// SIG undefined FUN_148ca37cc(void)

undefined8 FUN_148ca37cc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1407b25f0(param_2,param_3);
    *(undefined8 *)(param_2 + 0xe8) = *(undefined8 *)(param_3 + 0xe8);
    uVar1 = *(undefined4 *)(param_3 + 0xdc);
    uVar2 = *(undefined4 *)(param_3 + 0xe0);
    uVar3 = *(undefined4 *)(param_3 + 0xe4);
    *(undefined4 *)(param_2 + 0xd8) = *(undefined4 *)(param_3 + 0xd8);
    *(undefined4 *)(param_2 + 0xdc) = uVar1;
    *(undefined4 *)(param_2 + 0xe0) = uVar2;
    *(undefined4 *)(param_2 + 0xe4) = uVar3;
    param_2 = param_2 + 0xf0;
    param_3 = param_3 + 0xf0;
  }
  return 1;
}



// FUNCTION 148ca384e FUN_148ca384e body=59 status=ok
// SIG undefined FUN_148ca384e(void)

undefined8 FUN_148ca384e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca389a FUN_148ca389a body=38 status=ok
// SIG undefined FUN_148ca389a(void)

void FUN_148ca389a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf0) == '\x01') {
    FUN_140368b56(param_2);
    *(undefined1 *)(param_2 + 0xf0) = 0;
  }
  return;
}



// FUNCTION 148ca3958 FUN_148ca3958 body=54 status=ok
// SIG undefined FUN_148ca3958(void)

undefined1 FUN_148ca3958(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148ca3a6a(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 148ca39b6 FUN_148ca39b6 body=59 status=ok
// SIG undefined FUN_148ca39b6(void)

undefined8 FUN_148ca39b6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca39fc FUN_148ca39fc body=32 status=ok
// SIG undefined FUN_148ca39fc(void)

void FUN_148ca39fc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_1418d1fc2(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 148ca3a6a FUN_148ca3a6a body=100 status=ok
// SIG undefined FUN_148ca3a6a(void)

longlong * FUN_148ca3a6a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *param_2;
    }
  }
  *param_1 = lVar1;
  *(int *)(param_1 + 1) = (int)param_2[1];
  FUN_140bee9ec(param_1 + 2,param_2 + 2);
  FUN_14054c6c4(param_1 + 4,param_2 + 4);
  param_1[6] = param_2[6];
  *(int *)(param_1 + 7) = (int)param_2[7];
  return param_1;
}



// FUNCTION 148ca3b1e FUN_148ca3b1e body=59 status=ok
// SIG undefined FUN_148ca3b1e(void)

undefined8 FUN_148ca3b1e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca3bbc FUN_148ca3bbc body=48 status=ok
// SIG undefined FUN_148ca3bbc(void)

void FUN_148ca3bbc(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_14107c533(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 148ca3bec FUN_148ca3bec body=100 status=ok
// SIG undefined FUN_148ca3bec(void)

void FUN_148ca3bec(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xe8);
  *(undefined4 *)((longlong)param_2 + 0x7c) = 0x80;
  *(undefined4 *)((longlong)param_2 + 0x80) = 0xffffffff;
  *(undefined8 *)((longlong)param_2 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_2 + 200) = 0xf;
  *(undefined1 *)((longlong)param_2 + 0xd0) = 1;
  *(undefined8 *)((longlong)param_2 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xdc) = 0;
  return;
}



// FUNCTION 148ca3cdc FUN_148ca3cdc body=63 status=ok
// SIG undefined FUN_148ca3cdc(void)

undefined1 FUN_148ca3cdc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148ca3e06(param_2,param_3);
    param_3 = param_3 + 0xe8;
    param_2 = param_2 + 0xe8;
  }
  return 1;
}



// FUNCTION 148ca3d44 FUN_148ca3d44 body=59 status=ok
// SIG undefined FUN_148ca3d44(void)

undefined8 FUN_148ca3d44(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca3d90 FUN_148ca3d90 body=39 status=ok
// SIG undefined FUN_148ca3d90(void)

void FUN_148ca3d90(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe8) == '\x01') {
    FUN_140368b56(param_2 + 0x10);
    *(undefined1 *)(param_2 + 0xe8) = 0;
  }
  return;
}



// FUNCTION 148ca3e06 FUN_148ca3e06 body=76 status=ok
// SIG undefined FUN_148ca3e06(void)

longlong * FUN_148ca3e06(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *param_2;
    }
  }
  *param_1 = lVar1;
  *(int *)(param_1 + 1) = (int)param_2[1];
  FUN_1407b25f0(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 148ca3ec0 FUN_148ca3ec0 body=59 status=ok
// SIG undefined FUN_148ca3ec0(void)

undefined8 FUN_148ca3ec0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca3f80 FUN_148ca3f80 body=63 status=ok
// SIG undefined FUN_148ca3f80(void)

undefined1 FUN_148ca3f80(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148ca409c(param_2,param_3);
    param_3 = param_3 + 0x5c8;
    param_2 = param_2 + 0x5c8;
  }
  return 1;
}



// FUNCTION 148ca3fe8 FUN_148ca3fe8 body=59 status=ok
// SIG undefined FUN_148ca3fe8(void)

undefined8 FUN_148ca3fe8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca4034 FUN_148ca4034 body=40 status=ok
// SIG undefined FUN_148ca4034(void)

void FUN_148ca4034(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x5c8) == '\x01') {
    FUN_1457416fa(param_2);
    *(undefined1 *)(param_2 + 0x5c8) = 0;
  }
  return;
}



// FUNCTION 148ca409c FUN_148ca409c body=407 status=ok
// SIG undefined FUN_148ca409c(void)

longlong FUN_148ca409c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_148b897b2();
  plVar1 = *(longlong **)(param_2 + 0x458);
  plVar2 = *(longlong **)(param_1 + 0x458);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x458) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x460) = *(undefined4 *)(param_2 + 0x460);
  FUN_148ca4288(param_1 + 0x468,param_2 + 0x468);
  *(undefined4 *)(param_1 + 0x4b8) = *(undefined4 *)(param_2 + 0x4b8);
  *(undefined2 *)(param_1 + 0x4bc) = *(undefined2 *)(param_2 + 0x4bc);
  FUN_148ca4234(param_1 + 0x4c0,param_2 + 0x4c0);
  *(undefined8 *)(param_1 + 0x4d8) = *(undefined8 *)(param_2 + 0x4d8);
  *(undefined1 *)(param_1 + 0x4e0) = *(undefined1 *)(param_2 + 0x4e0);
  *(undefined8 *)(param_1 + 0x4e8) = *(undefined8 *)(param_2 + 0x4e8);
  uVar3 = *(undefined4 *)(param_2 + 0x4f4);
  uVar4 = *(undefined4 *)(param_2 + 0x4f8);
  uVar5 = *(undefined4 *)(param_2 + 0x4fc);
  *(undefined4 *)(param_1 + 0x4f0) = *(undefined4 *)(param_2 + 0x4f0);
  *(undefined4 *)(param_1 + 0x4f4) = uVar3;
  *(undefined4 *)(param_1 + 0x4f8) = uVar4;
  *(undefined4 *)(param_1 + 0x4fc) = uVar5;
  FUN_144a787a6(param_1 + 0x500,param_2 + 0x500);
  *(undefined8 *)(param_1 + 0x510) = *(undefined8 *)(param_2 + 0x510);
  *(undefined1 *)(param_1 + 0x518) = *(undefined1 *)(param_2 + 0x518);
  *(undefined8 *)(param_1 + 0x520) = *(undefined8 *)(param_2 + 0x520);
  uVar3 = *(undefined4 *)(param_2 + 0x52c);
  uVar4 = *(undefined4 *)(param_2 + 0x530);
  uVar5 = *(undefined4 *)(param_2 + 0x534);
  *(undefined4 *)(param_1 + 0x528) = *(undefined4 *)(param_2 + 0x528);
  *(undefined4 *)(param_1 + 0x52c) = uVar3;
  *(undefined4 *)(param_1 + 0x530) = uVar4;
  *(undefined4 *)(param_1 + 0x534) = uVar5;
  FUN_144a787a6(param_1 + 0x538,param_2 + 0x538);
  *(undefined1 *)(param_1 + 0x548) = *(undefined1 *)(param_2 + 0x548);
  FUN_144a7bb84(param_1 + 0x550,param_2 + 0x550);
  FUN_144a7bb84(param_1 + 0x568,param_2 + 0x568);
  FUN_144a7bb84(param_1 + 0x580,param_2 + 0x580);
  FUN_144a7bb84(param_1 + 0x598,param_2 + 0x598);
  FUN_144a7bb84(param_1 + 0x5b0,param_2 + 0x5b0);
  return param_1;
}



// FUNCTION 148ca4234 FUN_148ca4234 body=84 status=ok
// SIG undefined FUN_148ca4234(void)

longlong * FUN_148ca4234(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 148ca4288 FUN_148ca4288 body=122 status=ok
// SIG undefined FUN_148ca4288(void)

longlong FUN_148ca4288(longlong param_1,longlong param_2)

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
    FUN_148ca4302(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148ca4302 FUN_148ca4302 body=240 status=ok
// SIG undefined FUN_148ca4302(void)

longlong * FUN_148ca4302(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140fb3a94(param_1,(ulonglong)uVar1);
    lVar3 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar3 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar3) < uVar1) {
      FUN_1447711aa(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar3 = *param_1;
      lVar2 = *param_2;
      lVar6 = 0;
      uVar5 = 0;
      do {
        plVar4 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar4 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar4 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar3 + lVar6) = *(undefined4 *)(lVar2 + lVar6);
          *(undefined4 *)(lVar3 + 4 + lVar6) = *(undefined4 *)(lVar2 + 4 + lVar6);
        }
        else {
          *(undefined8 *)(lVar3 + lVar6) = *(undefined8 *)(lVar2 + lVar6);
          plVar4 = *(longlong **)(lVar2 + 8 + lVar6);
          *(longlong **)(lVar3 + 8 + lVar6) = plVar4;
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 8))();
          }
          *(undefined4 *)(lVar3 + 0x10 + lVar6) = *(undefined4 *)(lVar2 + 0x10 + lVar6);
          *(undefined8 *)(lVar3 + 0x18 + lVar6) = *(undefined8 *)(lVar2 + 0x18 + lVar6);
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x20;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 148ca4478 FUN_148ca4478 body=59 status=ok
// SIG undefined FUN_148ca4478(void)

undefined8 FUN_148ca4478(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca4518 FUN_148ca4518 body=55 status=ok
// SIG undefined FUN_148ca4518(void)

void FUN_148ca4518(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbd3a0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbd3a0 = FUN_140002ddd(FUN_14660e841,uVar1,L"OakVendingMachineValueResolver");
  }
  return;
}



// FUNCTION 148ca456c FUN_148ca456c body=92 status=ok
// SIG undefined FUN_148ca456c(void)

void FUN_148ca456c(undefined8 param_1,undefined8 *param_2)

{
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[0xd] = 0;
  *param_2 = &PTR_FUN_14b8f1450;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  FUN_144a7a8f6(param_2 + 6);
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  return;
}



// FUNCTION 148ca45c8 FUN_148ca45c8 body=87 status=ok
// SIG undefined FUN_148ca45c8(void)

void FUN_148ca45c8(undefined8 param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_2 + 1) = 0;
  *(undefined2 *)((longlong)param_2 + 0xc) = 0;
  *param_2 = &PTR_FUN_14b8f1450;
  *(undefined1 *)((longlong)param_2 + 0x14) = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  FUN_144a7a8f6(param_2 + 6);
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  return;
}



// FUNCTION 148ca4644 FUN_148ca4644 body=54 status=ok
// SIG undefined FUN_148ca4644(void)

undefined1 FUN_148ca4644(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148ca4756(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 148ca46a2 FUN_148ca46a2 body=59 status=ok
// SIG undefined FUN_148ca46a2(void)

undefined8 FUN_148ca46a2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca4756 FUN_148ca4756 body=128 status=ok
// SIG undefined FUN_148ca4756(void)

longlong FUN_148ca4756(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  if (param_2 != param_1) {
    if (*(char *)(param_2 + 0x14) == '\x01') {
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
      uVar1 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x14) != '\x01') goto LAB_148ca478a;
      uVar1 = 0;
    }
    *(undefined1 *)(param_1 + 0x14) = uVar1;
  }
LAB_148ca478a:
  FUN_14184b2ce(param_1 + 0x18,param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  FUN_1418c3a72(param_1 + 0x40,param_2 + 0x40);
  FUN_1418ce9f8(param_1 + 0x58,param_2 + 0x58);
  return param_1;
}



// FUNCTION 148ca47d8 FUN_148ca47d8 body=49 status=ok
// SIG undefined FUN_148ca47d8(void)

void FUN_148ca47d8(undefined8 param_1,undefined8 *param_2)

{
  FUN_143ec0ece(param_2);
  *param_2 = &PTR_FUN_14b8eeb90;
  *(undefined1 *)(param_2 + 0x2a) = 0;
  *(undefined4 *)((longlong)param_2 + 0x154) = 0;
  return;
}



// FUNCTION 148ca4820 FUN_148ca4820 body=76 status=ok
// SIG undefined FUN_148ca4820(void)

undefined8 FUN_148ca4820(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148a0f5e4(param_2,param_3);
    *(undefined8 *)(param_2 + 0x150) = *(undefined8 *)(param_3 + 0x150);
    param_2 = param_2 + 0x158;
    param_3 = param_3 + 0x158;
  }
  return 1;
}



// FUNCTION 148ca4894 FUN_148ca4894 body=59 status=ok
// SIG undefined FUN_148ca4894(void)

undefined8 FUN_148ca4894(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca48e0 FUN_148ca48e0 body=57 status=ok
// SIG undefined FUN_148ca48e0(void)

void FUN_148ca48e0(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x2b) == '\x01') {
    *param_2 = &PTR_FUN_14b490d30;
    if (param_2[0x28] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x2b) = 0;
  }
  return;
}



// FUNCTION 148ca49e2 FUN_148ca49e2 body=411 status=ok
// SIG undefined FUN_148ca49e2(void)

void FUN_148ca49e2(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_58 [44];
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  iVar1 = local_28;
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148f183dc(local_20,local_24,iVar1 != 0,local_2c != 0);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca4b7e FUN_148ca4b7e body=232 status=ok
// SIG undefined FUN_148ca4b7e(void)

void FUN_148ca4b7e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_21 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1458dbfba(local_20,local_21);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca4c68 FUN_148ca4c68 body=172 status=ok
// SIG undefined FUN_148ca4c68(void)

void FUN_148ca4c68(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_28;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148f18312(plVar1);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca4d28 FUN_148ca4d28 body=504 status=ok
// SIG undefined FUN_148ca4d28(void)

void FUN_148ca4d28(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  iVar2 = local_30;
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  iVar1 = local_34;
  local_38 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_38 != 0;
  FUN_148f18314(local_28,local_2c,iVar2 != 0,iVar1 != 0);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca4f28 FUN_148ca4f28 body=324 status=ok
// SIG undefined FUN_148ca4f28(void)

void FUN_148ca4f28(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  int local_20;
  undefined4 local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148f18590(local_18,local_1c,local_20 != 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca5074 FUN_148ca5074 body=322 status=ok
// SIG undefined FUN_148ca5074(void)

void FUN_148ca5074(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  int local_20;
  undefined4 local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148f184f8(local_18,local_1c,local_20 != 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca51be FUN_148ca51be body=576 status=ok
// SIG undefined FUN_148ca51be(void)

void FUN_148ca51be(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_1d;
  undefined4 local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_1d = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1d);
  }
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_40 = local_2c;
  local_48 = local_28;
  FUN_14435b7d2(local_18,local_1c,local_1d,local_24);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca54a8 FUN_148ca54a8 body=191 status=ok
// SIG undefined FUN_148ca54a8(void)

void FUN_148ca54a8(longlong param_1,longlong param_2,void *param_3)

{
  undefined1 auStack_148 [32];
  undefined1 local_128 [184];
  undefined1 local_70 [32];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_148;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  memcpy(local_128,(void *)(param_1 + 0x1ae8),0xb8);
  FUN_144b23946(local_70,param_1 + 0x1ba0);
  local_50 = *(undefined8 *)(param_1 + 0x1bc0);
  uStack_48 = *(undefined8 *)(param_1 + 0x1bc8);
  local_40 = *(undefined8 *)(param_1 + 0x1bd0);
  uStack_38 = *(undefined8 *)(param_1 + 0x1bd8);
  local_30 = *(undefined8 *)(param_1 + 0x1be0);
  memcpy(param_3,local_128,0x100);
  if ((local_28 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca55bc FUN_148ca55bc body=37 status=ok
// SIG undefined FUN_148ca55bc(void)

void FUN_148ca55bc(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1402096b0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148ca57d4 FUN_148ca57d4 body=45 status=ok
// SIG undefined FUN_148ca57d4(void)

longlong FUN_148ca57d4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14584e494(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca5802 FUN_148ca5802 body=48 status=ok
// SIG undefined FUN_148ca5802(void)

longlong FUN_148ca5802(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x178;
  FUN_14584e494(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca5888 FUN_148ca5888 body=90 status=ok
// SIG undefined FUN_148ca5888(void)

undefined8 FUN_148ca5888(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_144a787a6(param_2,param_3);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_3 + 0x18);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148ca590a FUN_148ca590a body=59 status=ok
// SIG undefined FUN_148ca590a(void)

undefined8 FUN_148ca590a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca5950 FUN_148ca5950 body=48 status=ok
// SIG undefined FUN_148ca5950(void)

void FUN_148ca5950(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 8) == '\x01') {
    *param_2 = &PTR_FUN_14b4911c0;
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 148ca59ce FUN_148ca59ce body=55 status=ok
// SIG undefined FUN_148ca59ce(void)

void FUN_148ca59ce(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbd4b8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbd4b8 = FUN_140002ddd(FUN_14660f05f,uVar1,L"OakWeaponAttributeContextResolver");
  }
  return;
}



// FUNCTION 148ca5a06 FUN_148ca5a06 body=63 status=ok
// SIG undefined FUN_148ca5a06(void)

void FUN_148ca5a06(undefined8 param_1,undefined8 *param_2)

{
  FUN_143ec113e(param_2);
  *param_2 = &PTR_FUN_14b8f9960;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  param_2[0x40] = 0;
  return;
}



// FUNCTION 148ca5a5c FUN_148ca5a5c body=63 status=ok
// SIG undefined FUN_148ca5a5c(void)

undefined1 FUN_148ca5a5c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148ca5b78(param_2,param_3);
    param_3 = param_3 + 0x208;
    param_2 = param_2 + 0x208;
  }
  return 1;
}



// FUNCTION 148ca5ac4 FUN_148ca5ac4 body=59 status=ok
// SIG undefined FUN_148ca5ac4(void)

undefined8 FUN_148ca5ac4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca5b10 FUN_148ca5b10 body=38 status=ok
// SIG undefined FUN_148ca5b10(void)

void FUN_148ca5b10(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x208) == '\x01') {
    FUN_1405b05ec(param_2);
    *(undefined1 *)(param_2 + 0x208) = 0;
  }
  return;
}



// FUNCTION 148ca5b78 FUN_148ca5b78 body=98 status=ok
// SIG undefined FUN_148ca5b78(void)

longlong FUN_148ca5b78(longlong param_1,longlong param_2)

{
  FUN_148a10158();
  FUN_140c2104c(param_1 + 0x1c8,param_2 + 0x1c8);
  FUN_140c2104c(param_1 + 0x1d8,param_2 + 0x1d8);
  FUN_140c2104c(param_1 + 0x1e8,param_2 + 0x1e8);
  FUN_140c2104c(param_1 + 0x1f8,param_2 + 0x1f8);
  return param_1;
}



// FUNCTION 148ca5bdc FUN_148ca5bdc body=72 status=ok
// SIG undefined FUN_148ca5bdc(void)

void FUN_148ca5bdc(undefined8 param_1,undefined8 *param_2)

{
  FUN_140fe591a(param_2);
  *param_2 = &PTR_FUN_14b8f9b10;
  memset(param_2 + 0x108,0,0xcc);
  *(undefined4 *)((longlong)param_2 + 0x90c) = 1;
  param_2[0x122] = 0;
  param_2[0x123] = 0;
  return;
}



// FUNCTION 148ca5c48 FUN_148ca5c48 body=63 status=ok
// SIG undefined FUN_148ca5c48(void)

undefined1 FUN_148ca5c48(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148ca5e00(param_2,param_3);
    param_3 = param_3 + 0x920;
    param_2 = param_2 + 0x920;
  }
  return 1;
}



// FUNCTION 148ca5cb0 FUN_148ca5cb0 body=59 status=ok
// SIG undefined FUN_148ca5cb0(void)

undefined8 FUN_148ca5cb0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca5cfc FUN_148ca5cfc body=38 status=ok
// SIG undefined FUN_148ca5cfc(void)

void FUN_148ca5cfc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x920) == '\x01') {
    FUN_148ca5d70(param_2);
    *(undefined1 *)(param_2 + 0x920) = 0;
  }
  return;
}



// FUNCTION 148ca5d70 FUN_148ca5d70 body=144 status=ok
// SIG undefined FUN_148ca5d70(void)

void FUN_148ca5d70(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14b8f9b10;
  if (param_1[0x122] != 0) {
    FUN_1400020a8();
  }
  lVar1 = 0x8f8;
  do {
    FUN_140adf6d2(*(undefined8 *)((longlong)param_1 + lVar1),
                  *(undefined4 *)((longlong)param_1 + lVar1 + 8));
    if (*(longlong *)((longlong)param_1 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0x8b8);
  lVar1 = 0x8b8;
  do {
    FUN_1405b087a(*(undefined8 *)((longlong)param_1 + lVar1),
                  *(undefined4 *)((longlong)param_1 + lVar1 + 8));
    if (*(longlong *)((longlong)param_1 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0x878);
  FUN_140adf366(param_1);
  return;
}



// FUNCTION 148ca5e00 FUN_148ca5e00 body=176 status=ok
// SIG undefined FUN_148ca5e00(void)

longlong FUN_148ca5e00(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_148a105fe();
  FUN_14123c256(param_1 + 0x840,param_2 + 0x840);
  FUN_14123c256(param_1 + 0x858,param_2 + 0x858);
  FUN_14123c256(param_1 + 0x870,param_2 + 0x870);
  lVar1 = 0x888;
  do {
    FUN_140c2104c(param_1 + lVar1,param_2 + lVar1);
    lVar1 = lVar1 + 0x10;
  } while (lVar1 != 0x8c8);
  lVar1 = 0x8c8;
  do {
    FUN_148a108b0(param_1 + lVar1,param_2 + lVar1);
    lVar1 = lVar1 + 0x10;
  } while (lVar1 != 0x908);
  *(undefined8 *)(param_1 + 0x908) = *(undefined8 *)(param_2 + 0x908);
  FUN_148ca5eb0(param_1 + 0x910,param_2 + 0x910);
  return param_1;
}



// FUNCTION 148ca5eb0 FUN_148ca5eb0 body=89 status=ok
// SIG undefined FUN_148ca5eb0(void)

undefined8 * FUN_148ca5eb0(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148ca5f0a(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x30);
      }
    }
  }
  return param_1;
}



// FUNCTION 148ca5f0a FUN_148ca5f0a body=115 status=ok
// SIG undefined FUN_148ca5f0a(void)

void FUN_148ca5f0a(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    iVar2 = (int)(uVar1 / 0x30);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x30,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148ca5fb0 FUN_148ca5fb0 body=80 status=ok
// SIG undefined FUN_148ca5fb0(void)

undefined1 FUN_148ca5fb0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14123c256(param_2,param_3);
    FUN_14123c256(param_2 + 0x18,param_3 + 0x18);
    FUN_14123c256(param_2 + 0x30,param_3 + 0x30);
    param_2 = param_2 + 0x48;
    param_3 = param_3 + 0x48;
  }
  return 1;
}



// FUNCTION 148ca6028 FUN_148ca6028 body=59 status=ok
// SIG undefined FUN_148ca6028(void)

undefined8 FUN_148ca6028(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca6148 FUN_148ca6148 body=59 status=ok
// SIG undefined FUN_148ca6148(void)

undefined8 FUN_148ca6148(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca61ea FUN_148ca61ea body=54 status=ok
// SIG undefined FUN_148ca61ea(void)

void FUN_148ca61ea(undefined8 param_1,undefined8 *param_2)

{
  FUN_143ec13e8(param_2);
  *param_2 = &PTR_FUN_14b8f9ff0;
  memset(param_2 + 0x82,0,0x88);
  return;
}



// FUNCTION 148ca6236 FUN_148ca6236 body=63 status=ok
// SIG undefined FUN_148ca6236(void)

undefined1 FUN_148ca6236(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148ca6352(param_2,param_3);
    param_3 = param_3 + 0x4a0;
    param_2 = param_2 + 0x4a0;
  }
  return 1;
}



// FUNCTION 148ca629e FUN_148ca629e body=59 status=ok
// SIG undefined FUN_148ca629e(void)

undefined8 FUN_148ca629e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca62ea FUN_148ca62ea body=38 status=ok
// SIG undefined FUN_148ca62ea(void)

void FUN_148ca62ea(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x4a0) == '\x01') {
    FUN_140f14388(param_2);
    *(undefined1 *)(param_2 + 0x4a0) = 0;
  }
  return;
}



// FUNCTION 148ca6352 FUN_148ca6352 body=149 status=ok
// SIG undefined FUN_148ca6352(void)

longlong FUN_148ca6352(longlong param_1,longlong param_2)

{
  FUN_148a11a3e();
  FUN_14123c256(param_1 + 0x410,param_2 + 0x410);
  FUN_14123c256(param_1 + 0x428,param_2 + 0x428);
  FUN_14123c256(param_1 + 0x440,param_2 + 0x440);
  FUN_140c2104c(param_1 + 0x458,param_2 + 0x458);
  FUN_140c2104c(param_1 + 0x468,param_2 + 0x468);
  FUN_140c2104c(param_1 + 0x478,param_2 + 0x478);
  FUN_140c2104c(param_1 + 0x488,param_2 + 0x488);
  return param_1;
}



// FUNCTION 148ca644a FUN_148ca644a body=59 status=ok
// SIG undefined FUN_148ca644a(void)

undefined8 FUN_148ca644a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca650a FUN_148ca650a body=75 status=ok
// SIG undefined FUN_148ca650a(void)

undefined1 FUN_148ca650a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      puVar1 = (undefined4 *)(param_3 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      FUN_1401f3db8();
      lVar6 = lVar6 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148ca657e FUN_148ca657e body=59 status=ok
// SIG undefined FUN_148ca657e(void)

undefined8 FUN_148ca657e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca65c4 FUN_148ca65c4 body=64 status=ok
// SIG undefined FUN_148ca65c4(void)

void FUN_148ca65c4(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x28) == '\x01') {
    plVar3 = *(longlong **)(param_2 + 0x18);
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
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 148ca66b2 FUN_148ca66b2 body=54 status=ok
// SIG undefined FUN_148ca66b2(void)

undefined1 FUN_148ca66b2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148ca6808(param_2,param_3);
    param_3 = param_3 + 0x78;
    param_2 = param_2 + 0x78;
  }
  return 1;
}



// FUNCTION 148ca6710 FUN_148ca6710 body=59 status=ok
// SIG undefined FUN_148ca6710(void)

undefined8 FUN_148ca6710(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca6756 FUN_148ca6756 body=34 status=ok
// SIG undefined FUN_148ca6756(void)

void FUN_148ca6756(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_1457df586(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 148ca67d0 FUN_148ca67d0 body=55 status=ok
// SIG undefined FUN_148ca67d0(void)

void FUN_148ca67d0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbd598 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbd598 = FUN_140002ddd(FUN_14660f4db,uVar1,L"OakWeaponNamingStrategy");
  }
  return;
}



// FUNCTION 148ca6808 FUN_148ca6808 body=103 status=ok
// SIG undefined FUN_148ca6808(void)

longlong FUN_148ca6808(longlong param_1,longlong param_2)

{
  FUN_148ca6870(param_1 + 8,param_2 + 8);
  FUN_148ca68c8(param_1 + 0x18,param_2 + 0x18);
  FUN_148ca68c8(param_1 + 0x28,param_2 + 0x28);
  FUN_148ca68c8(param_1 + 0x38,param_2 + 0x38);
  FUN_14173baee(param_1 + 0x48,param_2 + 0x48);
  FUN_14173baee(param_1 + 0x60,param_2 + 0x60);
  return param_1;
}



// FUNCTION 148ca6870 FUN_148ca6870 body=88 status=ok
// SIG undefined FUN_148ca6870(void)

undefined8 * FUN_148ca6870(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148ca6926(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 148ca68c8 FUN_148ca68c8 body=93 status=ok
// SIG undefined FUN_148ca68c8(void)

undefined8 * FUN_148ca68c8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140feebe9(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148ca6988(param_1,iVar1);
      FUN_148ca69fb(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148ca6926 FUN_148ca6926 body=98 status=ok
// SIG undefined FUN_148ca6926(void)

void FUN_148ca6926(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148ca6988 FUN_148ca6988 body=115 status=ok
// SIG undefined FUN_148ca6988(void)

void FUN_148ca6988(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,8);
    iVar2 = (int)(uVar1 / 0x28);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x28,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148ca69fb FUN_148ca69fb body=68 status=ok
// SIG undefined FUN_148ca69fb(void)

void FUN_148ca69fb(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_3 != 0) {
    param_1 = param_1 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      uVar1 = *(undefined4 *)(param_2 + -0xc);
      uVar2 = *(undefined4 *)(param_2 + -8);
      uVar3 = *(undefined4 *)(param_2 + -4);
      *(undefined4 *)(param_1 + -0x10) = *(undefined4 *)(param_2 + -0x10);
      *(undefined4 *)(param_1 + -0xc) = uVar1;
      *(undefined4 *)(param_1 + -8) = uVar2;
      *(undefined4 *)(param_1 + -4) = uVar3;
      FUN_1401f3da4(param_1,param_2);
      param_1 = param_1 + 0x28;
      param_2 = param_2 + 0x28;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148ca6a66 FUN_148ca6a66 body=63 status=ok
// SIG undefined FUN_148ca6a66(void)

undefined1 FUN_148ca6a66(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148ca6b7a(param_2,param_3);
    param_3 = param_3 + 0x160;
    param_2 = param_2 + 0x160;
  }
  return 1;
}



// FUNCTION 148ca6ace FUN_148ca6ace body=59 status=ok
// SIG undefined FUN_148ca6ace(void)

undefined8 FUN_148ca6ace(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca6b7a FUN_148ca6b7a body=942 status=ok
// SIG undefined FUN_148ca6b7a(void)

undefined4 * FUN_148ca6b7a(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  longlong lVar5;
  
  *param_1 = *param_2;
  if ((*(longlong *)(param_1 + 2) != *(longlong *)(param_2 + 2)) || (param_1[4] != param_2[4])) {
    *(longlong *)(param_1 + 2) = *(longlong *)(param_2 + 2);
    param_1[4] = param_2[4];
    *(undefined8 *)(param_1 + 6) = 0;
  }
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  lVar5 = *(longlong *)(param_2 + 10);
  if (DAT_14c950c29 == 1) {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_14689c22e();
      lVar5 = *(longlong *)(param_2 + 10);
    }
  }
  bVar4 = DAT_14c950c29;
  *(longlong *)(param_1 + 10) = lVar5;
  param_1[0xc] = param_2[0xc];
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  lVar5 = *(longlong *)(param_2 + 0x10);
  if ((bVar4 & 1) != 0) {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_14689c22e();
      lVar5 = *(longlong *)(param_2 + 0x10);
      bVar4 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x10) = lVar5;
  param_1[0x12] = param_2[0x12];
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  lVar5 = *(longlong *)(param_2 + 0x16);
  if ((bVar4 & 1) != 0) {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_14689c22e();
      lVar5 = *(longlong *)(param_2 + 0x16);
      bVar4 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x16) = lVar5;
  param_1[0x18] = param_2[0x18];
  *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
  lVar5 = *(longlong *)(param_2 + 0x1c);
  if ((bVar4 & 1) != 0) {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_14689c22e();
      lVar5 = *(longlong *)(param_2 + 0x1c);
      bVar4 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x1c) = lVar5;
  param_1[0x1e] = param_2[0x1e];
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  lVar5 = *(longlong *)(param_2 + 0x22);
  if ((bVar4 & 1) != 0) {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_14689c22e();
      lVar5 = *(longlong *)(param_2 + 0x22);
      bVar4 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x22) = lVar5;
  param_1[0x24] = param_2[0x24];
  *(undefined8 *)(param_1 + 0x26) = *(undefined8 *)(param_2 + 0x26);
  lVar5 = *(longlong *)(param_2 + 0x28);
  if ((bVar4 & 1) != 0) {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_14689c22e();
      lVar5 = *(longlong *)(param_2 + 0x28);
      bVar4 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x28) = lVar5;
  param_1[0x2a] = param_2[0x2a];
  *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
  lVar5 = *(longlong *)(param_2 + 0x2e);
  if ((bVar4 & 1) != 0) {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_14689c22e();
      lVar5 = *(longlong *)(param_2 + 0x2e);
      bVar4 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x2e) = lVar5;
  param_1[0x30] = param_2[0x30];
  *(undefined8 *)(param_1 + 0x32) = *(undefined8 *)(param_2 + 0x32);
  lVar5 = *(longlong *)(param_2 + 0x34);
  if ((bVar4 & 1) != 0) {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_14689c22e();
      lVar5 = *(longlong *)(param_2 + 0x34);
      bVar4 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x34) = lVar5;
  param_1[0x36] = param_2[0x36];
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  lVar5 = *(longlong *)(param_2 + 0x3a);
  if ((bVar4 & 1) != 0) {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_14689c22e();
      lVar5 = *(longlong *)(param_2 + 0x3a);
      bVar4 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x3a) = lVar5;
  param_1[0x3c] = param_2[0x3c];
  *(undefined8 *)(param_1 + 0x3e) = *(undefined8 *)(param_2 + 0x3e);
  lVar5 = *(longlong *)(param_2 + 0x40);
  if ((bVar4 & 1) != 0) {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_14689c22e();
      lVar5 = *(longlong *)(param_2 + 0x40);
      bVar4 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x40) = lVar5;
  param_1[0x42] = param_2[0x42];
  *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_2 + 0x44);
  lVar5 = *(longlong *)(param_2 + 0x46);
  if ((bVar4 & 1) != 0) {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_14689c22e();
      lVar5 = *(longlong *)(param_2 + 0x46);
      bVar4 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x46) = lVar5;
  param_1[0x48] = param_2[0x48];
  *(undefined8 *)(param_1 + 0x4a) = *(undefined8 *)(param_2 + 0x4a);
  lVar5 = *(longlong *)(param_2 + 0x4c);
  if ((bVar4 & 1) != 0) {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_14689c22e();
      lVar5 = *(longlong *)(param_2 + 0x4c);
    }
  }
  *(longlong *)(param_1 + 0x4c) = lVar5;
  param_1[0x4e] = param_2[0x4e];
  uVar1 = *(undefined8 *)(param_2 + 0x52);
  uVar2 = *(undefined8 *)((longlong)param_2 + 0x14e);
  uVar3 = *(undefined8 *)((longlong)param_2 + 0x156);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x52) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x14e) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x156) = uVar3;
  return param_1;
}



// FUNCTION 148ca6faa FUN_148ca6faa body=59 status=ok
// SIG undefined FUN_148ca6faa(void)

undefined8 FUN_148ca6faa(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca7102 FUN_148ca7102 body=59 status=ok
// SIG undefined FUN_148ca7102(void)

undefined8 FUN_148ca7102(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca7318 FUN_148ca7318 body=59 status=ok
// SIG undefined FUN_148ca7318(void)

undefined8 FUN_148ca7318(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca73ba FUN_148ca73ba body=73 status=ok
// SIG undefined FUN_148ca73ba(void)

void FUN_148ca73ba(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 2,0,0xa0);
  param_2[1] = 0xffffffffffffffff;
  *(undefined4 *)(param_2 + 2) = 0xffffffff;
  memset(param_2 + 3,0,0x8c);
  *param_2 = &PTR_FUN_14b8fbe80;
  return;
}



// FUNCTION 148ca7404 FUN_148ca7404 body=71 status=ok
// SIG undefined FUN_148ca7404(void)

void FUN_148ca7404(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0xffffffffffffffff;
  *(undefined4 *)(param_2 + 2) = 0xffffffff;
  *(undefined2 *)((longlong)param_2 + 0x14) = 0;
  memset(param_2 + 3,0,0x8c);
  *param_2 = &PTR_FUN_14b8fbe80;
  *(undefined2 *)(param_2 + 0x15) = 0;
  return;
}



// FUNCTION 148ca746c FUN_148ca746c body=76 status=ok
// SIG undefined FUN_148ca746c(void)

undefined8 FUN_148ca746c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14098bcca(param_2,param_3);
    *(undefined2 *)(param_2 + 0xa8) = *(undefined2 *)(param_3 + 0xa8);
    param_2 = param_2 + 0xb0;
    param_3 = param_3 + 0xb0;
  }
  return 1;
}



// FUNCTION 148ca74e0 FUN_148ca74e0 body=59 status=ok
// SIG undefined FUN_148ca74e0(void)

undefined8 FUN_148ca74e0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca752c FUN_148ca752c body=38 status=ok
// SIG undefined FUN_148ca752c(void)

void FUN_148ca752c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    FUN_1411d537c(param_2);
    *(undefined1 *)(param_2 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 148ca75d0 FUN_148ca75d0 body=63 status=ok
// SIG undefined FUN_148ca75d0(void)

undefined1 FUN_148ca75d0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14135191a(param_2,param_3);
    param_3 = param_3 + 0x268;
    param_2 = param_2 + 0x268;
  }
  return 1;
}



// FUNCTION 148ca7638 FUN_148ca7638 body=59 status=ok
// SIG undefined FUN_148ca7638(void)

undefined8 FUN_148ca7638(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca7684 FUN_148ca7684 body=38 status=ok
// SIG undefined FUN_148ca7684(void)

void FUN_148ca7684(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x268) == '\x01') {
    FUN_1412d6a62(param_2);
    *(undefined1 *)(param_2 + 0x268) = 0;
  }
  return;
}



// FUNCTION 148ca772e FUN_148ca772e body=63 status=ok
// SIG undefined FUN_148ca772e(void)

undefined1 FUN_148ca772e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c6ad5e(param_2,param_3);
    param_3 = param_3 + 0xb50;
    param_2 = param_2 + 0xb50;
  }
  return 1;
}



// FUNCTION 148ca7796 FUN_148ca7796 body=59 status=ok
// SIG undefined FUN_148ca7796(void)

undefined8 FUN_148ca7796(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca77e2 FUN_148ca77e2 body=40 status=ok
// SIG undefined FUN_148ca77e2(void)

void FUN_148ca77e2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb50) == '\x01') {
    FUN_1458b3782(param_2);
    *(undefined1 *)(param_2 + 0xb50) = 0;
  }
  return;
}



// FUNCTION 148ca7af2 FUN_148ca7af2 body=75 status=ok
// SIG undefined FUN_148ca7af2(void)

void FUN_148ca7af2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_14665fc4a(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca7b7e FUN_148ca7b7e body=63 status=ok
// SIG undefined FUN_148ca7b7e(void)

undefined1 FUN_148ca7b7e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c6b034(param_2,param_3);
    param_3 = param_3 + 0x3a0;
    param_2 = param_2 + 0x3a0;
  }
  return 1;
}



// FUNCTION 148ca7be6 FUN_148ca7be6 body=59 status=ok
// SIG undefined FUN_148ca7be6(void)

undefined8 FUN_148ca7be6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca7c32 FUN_148ca7c32 body=38 status=ok
// SIG undefined FUN_148ca7c32(void)

void FUN_148ca7c32(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x3a0) == '\x01') {
    FUN_1412d6bec(param_2);
    *(undefined1 *)(param_2 + 0x3a0) = 0;
  }
  return;
}



// FUNCTION 148ca7cd6 FUN_148ca7cd6 body=63 status=ok
// SIG undefined FUN_148ca7cd6(void)

undefined1 FUN_148ca7cd6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148ca7dfe(param_2,param_3);
    param_3 = param_3 + 0x90;
    param_2 = param_2 + 0x90;
  }
  return 1;
}



// FUNCTION 148ca7d3e FUN_148ca7d3e body=59 status=ok
// SIG undefined FUN_148ca7d3e(void)

undefined8 FUN_148ca7d3e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca7d8a FUN_148ca7d8a body=38 status=ok
// SIG undefined FUN_148ca7d8a(void)

void FUN_148ca7d8a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x90) == '\x01') {
    FUN_140d471ba(param_2);
    *(undefined1 *)(param_2 + 0x90) = 0;
  }
  return;
}



// FUNCTION 148ca7dfe FUN_148ca7dfe body=185 status=ok
// SIG undefined FUN_148ca7dfe(void)

longlong FUN_148ca7dfe(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_144a787a6();
  FUN_144a787a6(param_1 + 0x10,param_2 + 0x10);
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  FUN_144a787a6(param_1 + 0x30,param_2 + 0x30);
  FUN_144a787a6(param_1 + 0x40,param_2 + 0x40);
  FUN_144a787a6(param_1 + 0x50,param_2 + 0x50);
  plVar1 = *(longlong **)(param_2 + 0x60);
  plVar2 = *(longlong **)(param_1 + 0x60);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x60) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  FUN_148ca7eb8(param_1 + 0x70,param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined2 *)(param_1 + 0x88) = *(undefined2 *)(param_2 + 0x88);
  return param_1;
}



// FUNCTION 148ca7eb8 FUN_148ca7eb8 body=88 status=ok
// SIG undefined FUN_148ca7eb8(void)

undefined8 * FUN_148ca7eb8(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1411e2848(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 148ca7f62 FUN_148ca7f62 body=63 status=ok
// SIG undefined FUN_148ca7f62(void)

undefined1 FUN_148ca7f62(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1457fd360(param_2,param_3);
    param_3 = param_3 + 0x80;
    param_2 = param_2 + 0x80;
  }
  return 1;
}



// FUNCTION 148ca7fca FUN_148ca7fca body=59 status=ok
// SIG undefined FUN_148ca7fca(void)

undefined8 FUN_148ca7fca(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca8016 FUN_148ca8016 body=38 status=ok
// SIG undefined FUN_148ca8016(void)

void FUN_148ca8016(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    FUN_140d4710a(param_2);
    *(undefined1 *)(param_2 + 0x80) = 0;
  }
  return;
}



// FUNCTION 148ca80ba FUN_148ca80ba body=54 status=ok
// SIG undefined FUN_148ca80ba(void)

undefined1 FUN_148ca80ba(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148ca821e(param_2,param_3);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 148ca8118 FUN_148ca8118 body=59 status=ok
// SIG undefined FUN_148ca8118(void)

undefined8 FUN_148ca8118(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca815e FUN_148ca815e body=34 status=ok
// SIG undefined FUN_148ca815e(void)

void FUN_148ca815e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_148ca81ce(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 148ca81ce FUN_148ca81ce body=80 status=ok
// SIG undefined FUN_148ca81ce(void)

void FUN_148ca81ce(longlong *param_1)

{
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x10))();
  }
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ca820d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 148ca821e FUN_148ca821e body=184 status=ok
// SIG undefined FUN_148ca821e(void)

longlong * FUN_148ca821e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_2;
  plVar2 = (longlong *)*param_1;
  if (plVar2 != plVar1) {
    *param_1 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  plVar1 = (longlong *)param_2[2];
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != plVar1) {
    param_1[2] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 3) = (int)param_2[3];
  plVar1 = (longlong *)param_2[4];
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != plVar1) {
    param_1[4] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 5) = (int)param_2[5];
  FUN_144a787a6(param_1 + 6,param_2 + 6);
  *(char *)(param_1 + 8) = (char)param_2[8];
  return param_1;
}



// FUNCTION 148ca8316 FUN_148ca8316 body=80 status=ok
// SIG undefined FUN_148ca8316(void)

undefined1 FUN_148ca8316(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    FUN_148ca848e(param_2 + 0x20,param_3 + 0x20);
    param_2 = param_2 + 0x30;
    param_3 = param_3 + 0x30;
  }
  return 1;
}



// FUNCTION 148ca838e FUN_148ca838e body=59 status=ok
// SIG undefined FUN_148ca838e(void)

undefined8 FUN_148ca838e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca83d4 FUN_148ca83d4 body=34 status=ok
// SIG undefined FUN_148ca83d4(void)

void FUN_148ca83d4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_148ca8444(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 148ca8444 FUN_148ca8444 body=73 status=ok
// SIG undefined FUN_148ca8444(void)

void FUN_148ca8444(longlong *param_1)

{
  FUN_1418d3311(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148ca848e FUN_148ca848e body=93 status=ok
// SIG undefined FUN_148ca848e(void)

undefined8 * FUN_148ca848e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1418d3311(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148ca84ec(param_1,iVar1);
      FUN_148ca855e(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148ca84ec FUN_148ca84ec body=114 status=ok
// SIG undefined FUN_148ca84ec(void)

void FUN_148ca84ec(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x110,8);
    iVar2 = (int)(uVar1 / 0x110);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x110,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148ca855e FUN_148ca855e body=60 status=ok
// SIG undefined FUN_148ca855e(void)

void FUN_148ca855e(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148ca859a(param_1,param_2);
    param_1 = param_1 + 0x110;
    param_2 = param_2 + 0x110;
  }
  return;
}



// FUNCTION 148ca859a FUN_148ca859a body=333 status=ok
// SIG undefined FUN_148ca859a(void)

undefined8 * FUN_148ca859a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  FUN_140dd90de(param_1 + 2,param_2 + 2);
  FUN_140dd90de(param_1 + 5,param_2 + 5);
  FUN_140dd90de(param_1 + 8,param_2 + 8);
  FUN_140dd90de(param_1 + 0xb,param_2 + 0xb);
  FUN_140dd90de(param_1 + 0xe,param_2 + 0xe);
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  FUN_144a787a6(param_1 + 0x11,param_2 + 0x11);
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  FUN_144a787a6(param_1 + 0x14,param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  param_1[0x17] = param_2[0x17];
  FUN_1418c6390(param_1 + 0x19,param_2 + 0x19);
  FUN_148ca86e8(param_1 + 0x1c,param_2 + 0x1c);
  FUN_148ca86e8(param_1 + 0x1f,param_2 + 0x1f);
  return param_1;
}



// FUNCTION 148ca86e8 FUN_148ca86e8 body=71 status=ok
// SIG undefined FUN_148ca86e8(void)

undefined8 * FUN_148ca86e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 148ca875e FUN_148ca875e body=63 status=ok
// SIG undefined FUN_148ca875e(void)

undefined1 FUN_148ca875e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148ca88e8(param_2,param_3);
    param_3 = param_3 + 0x4b8;
    param_2 = param_2 + 0x4b8;
  }
  return 1;
}



// FUNCTION 148ca87c6 FUN_148ca87c6 body=59 status=ok
// SIG undefined FUN_148ca87c6(void)

undefined8 FUN_148ca87c6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca8812 FUN_148ca8812 body=38 status=ok
// SIG undefined FUN_148ca8812(void)

void FUN_148ca8812(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x4b8) == '\x01') {
    FUN_1415b1b76(param_2);
    *(undefined1 *)(param_2 + 0x4b8) = 0;
  }
  return;
}



// FUNCTION 148ca8886 FUN_148ca8886 body=57 status=ok
// SIG undefined FUN_148ca8886(void)

void FUN_148ca8886(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbe688 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbe688 = FUN_140002ddd(FUN_1466104f3,uVar1,L"OakWidgetData_EchoLogs");
  }
  return;
}



// FUNCTION 148ca88bf FUN_148ca88bf body=40 status=ok
// SIG undefined FUN_148ca88bf(void)

void FUN_148ca88bf(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148ca8444(param_1);
    param_1 = param_1 + 0x30;
  }
  return;
}



// FUNCTION 148ca88e8 FUN_148ca88e8 body=295 status=ok
// SIG undefined FUN_148ca88e8(void)

longlong FUN_148ca88e8(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_148c6b034();
  if (*(int *)(param_1 + 0x3a4) != *(int *)(param_2 + 0x3a4)) {
    *(undefined1 *)(param_1 + 0x3a0) = *(undefined1 *)(param_2 + 0x3a0);
    *(undefined4 *)(param_1 + 0x3a4) = *(undefined4 *)(param_2 + 0x3a4);
  }
  if (*(int *)(param_1 + 0x3ac) != *(int *)(param_2 + 0x3ac)) {
    *(undefined1 *)(param_1 + 0x3a8) = *(undefined1 *)(param_2 + 0x3a8);
    *(undefined4 *)(param_1 + 0x3ac) = *(undefined4 *)(param_2 + 0x3ac);
  }
  *(undefined1 *)(param_1 + 0x3b0) = *(undefined1 *)(param_2 + 0x3b0);
  FUN_144a787a6(param_1 + 0x3b8,param_2 + 0x3b8);
  FUN_148ca821e(param_1 + 0x3c8,param_2 + 0x3c8);
  FUN_148ca8a10(param_1 + 0x410,param_2 + 0x410);
  *(undefined8 *)(param_1 + 0x420) = *(undefined8 *)(param_2 + 0x420);
  if (*(int *)(param_1 + 0x438) != *(int *)(param_2 + 0x438) || *(int *)(param_1 + 0x438) == 0) {
    *(int *)(param_1 + 0x438) = *(int *)(param_2 + 0x438);
    FUN_148ca848e(param_1 + 0x428,param_2 + 0x428);
  }
  FUN_148ca848e(param_1 + 0x440,param_2 + 0x440);
  uVar1 = *(undefined4 *)(param_2 + 0x454);
  uVar2 = *(undefined4 *)(param_2 + 0x458);
  uVar3 = *(undefined4 *)(param_2 + 0x45c);
  *(undefined4 *)(param_1 + 0x450) = *(undefined4 *)(param_2 + 0x450);
  *(undefined4 *)(param_1 + 0x454) = uVar1;
  *(undefined4 *)(param_1 + 0x458) = uVar2;
  *(undefined4 *)(param_1 + 0x45c) = uVar3;
  *(undefined4 *)(param_1 + 0x460) = *(undefined4 *)(param_2 + 0x460);
  FUN_148c1fa7c(param_1 + 0x468,param_2 + 0x468);
  return param_1;
}



// FUNCTION 148ca8a10 FUN_148ca8a10 body=95 status=ok
// SIG undefined FUN_148ca8a10(void)

undefined8 * FUN_148ca8a10(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_148ca88bf(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148ca8a70(param_1,iVar1);
      FUN_148ca8ae3(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148ca8a70 FUN_148ca8a70 body=115 status=ok
// SIG undefined FUN_148ca8a70(void)

void FUN_148ca8a70(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    iVar2 = (int)(uVar1 / 0x30);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x30,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148ca8ae3 FUN_148ca8ae3 body=52 status=ok
// SIG undefined FUN_148ca8ae3(void)

void FUN_148ca8ae3(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148ca8b18(param_1,param_2);
    param_1 = param_1 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return;
}



// FUNCTION 148ca8b18 FUN_148ca8b18 body=226 status=ok
// SIG undefined FUN_148ca8b18(void)

undefined8 * FUN_148ca8b18(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  uVar3 = param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_148ca84ec(param_1 + 4,iVar1,0);
    FUN_148ca855e(param_1[4],uVar3,iVar1);
  }
  return param_1;
}



// FUNCTION 148ca8bfc FUN_148ca8bfc body=66 status=ok
// SIG undefined FUN_148ca8bfc(void)

void FUN_148ca8bfc(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x280);
  FUN_1413526be(param_2);
  *(undefined1 *)((longlong)param_2 + 0x268) = 1;
  FUN_140056680((longlong)param_2 + 0x270,&DAT_149dfb77a);
  return;
}



// FUNCTION 148ca8c3e FUN_148ca8c3e body=50 status=ok
// SIG undefined FUN_148ca8c3e(void)

void FUN_148ca8c3e(undefined8 param_1,longlong param_2)

{
  FUN_1413526be(param_2);
  *(undefined1 *)(param_2 + 0x268) = 1;
  FUN_140056680(param_2 + 0x270,&DAT_149dfb77a);
  return;
}



// FUNCTION 148ca8c70 FUN_148ca8c70 body=38 status=ok
// SIG undefined FUN_148ca8c70(void)

void FUN_148ca8c70(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x270) != 0) {
    FUN_1400020a8();
  }
  FUN_1412d6a62(param_2);
  return;
}



// FUNCTION 148ca8cac FUN_148ca8cac body=97 status=ok
// SIG undefined FUN_148ca8cac(void)

undefined1 FUN_148ca8cac(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14135191a(param_2,param_3);
    *(undefined1 *)(param_2 + 0x268) = *(undefined1 *)(param_3 + 0x268);
    FUN_144a787a6(param_2 + 0x270,param_3 + 0x270);
    param_2 = param_2 + 0x280;
    param_3 = param_3 + 0x280;
  }
  return 1;
}



// FUNCTION 148ca8d36 FUN_148ca8d36 body=59 status=ok
// SIG undefined FUN_148ca8d36(void)

undefined8 FUN_148ca8d36(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca8d82 FUN_148ca8d82 body=55 status=ok
// SIG undefined FUN_148ca8d82(void)

void FUN_148ca8d82(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x280) == '\x01') {
    if (*(longlong *)(param_2 + 0x270) != 0) {
      FUN_1400020a8();
    }
    FUN_1412d6a62(param_2);
    *(undefined1 *)(param_2 + 0x280) = 0;
  }
  return;
}



// FUNCTION 148ca8e76 FUN_148ca8e76 body=59 status=ok
// SIG undefined FUN_148ca8e76(void)

undefined8 FUN_148ca8e76(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca8f46 FUN_148ca8f46 body=63 status=ok
// SIG undefined FUN_148ca8f46(void)

undefined1 FUN_148ca8f46(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148ca90aa(param_2,param_3);
    param_3 = param_3 + 0xbc0;
    param_2 = param_2 + 0xbc0;
  }
  return 1;
}



// FUNCTION 148ca8fae FUN_148ca8fae body=59 status=ok
// SIG undefined FUN_148ca8fae(void)

undefined8 FUN_148ca8fae(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca8ffa FUN_148ca8ffa body=40 status=ok
// SIG undefined FUN_148ca8ffa(void)

void FUN_148ca8ffa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xbc0) == '\x01') {
    FUN_145c2d95a(param_2);
    *(undefined1 *)(param_2 + 0xbc0) = 0;
  }
  return;
}



// FUNCTION 148ca9070 FUN_148ca9070 body=57 status=ok
// SIG undefined FUN_148ca9070(void)

void FUN_148ca9070(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbeff8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbeff8 = FUN_140002ddd(FUN_1466106a9,uVar1,L"OakWidgetData_EquipMenu");
  }
  return;
}



// FUNCTION 148ca90aa FUN_148ca90aa body=429 status=ok
// SIG undefined FUN_148ca90aa(void)

longlong FUN_148ca90aa(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_148c6ad5e();
  FUN_148ca9258(param_1 + 0xb50,param_2 + 0xb50);
  FUN_148ca92b0(param_1 + 0xb60,param_2 + 0xb60);
  plVar1 = *(longlong **)(param_2 + 0xb70);
  plVar2 = *(longlong **)(param_1 + 0xb70);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0xb70) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0xb78) = *(undefined4 *)(param_2 + 0xb78);
  *(byte *)(param_1 + 0xb80) = *(byte *)(param_1 + 0xb80) & 0xfe | *(byte *)(param_2 + 0xb80) & 1;
  if (*(int *)(param_1 + 0xb88) != *(int *)(param_2 + 0xb88)) {
    *(undefined1 *)(param_1 + 0xb84) = *(undefined1 *)(param_2 + 0xb84);
    *(undefined4 *)(param_1 + 0xb88) = *(undefined4 *)(param_2 + 0xb88);
  }
  if (*(int *)(param_1 + 0xb90) != *(int *)(param_2 + 0xb90)) {
    *(undefined4 *)(param_1 + 0xb8c) = *(undefined4 *)(param_2 + 0xb8c);
    *(undefined4 *)(param_1 + 0xb90) = *(undefined4 *)(param_2 + 0xb90);
  }
  if (*(int *)(param_1 + 0xb98) != *(int *)(param_2 + 0xb98)) {
    *(undefined4 *)(param_1 + 0xb94) = *(undefined4 *)(param_2 + 0xb94);
    *(undefined4 *)(param_1 + 0xb98) = *(undefined4 *)(param_2 + 0xb98);
  }
  if (*(int *)(param_1 + 0xba0) != *(int *)(param_2 + 0xba0)) {
    *(undefined4 *)(param_1 + 0xb9c) = *(undefined4 *)(param_2 + 0xb9c);
    *(undefined4 *)(param_1 + 0xba0) = *(undefined4 *)(param_2 + 0xba0);
  }
  if (*(int *)(param_1 + 0xba8) != *(int *)(param_2 + 0xba8)) {
    *(undefined4 *)(param_1 + 0xba4) = *(undefined4 *)(param_2 + 0xba4);
    *(undefined4 *)(param_1 + 0xba8) = *(undefined4 *)(param_2 + 0xba8);
  }
  if (*(int *)(param_1 + 0xbb0) != *(int *)(param_2 + 0xbb0)) {
    *(undefined4 *)(param_1 + 0xbac) = *(undefined4 *)(param_2 + 0xbac);
    *(undefined4 *)(param_1 + 0xbb0) = *(undefined4 *)(param_2 + 0xbb0);
  }
  if (*(int *)(param_1 + 3000) != *(int *)(param_2 + 3000)) {
    *(undefined4 *)(param_1 + 0xbb4) = *(undefined4 *)(param_2 + 0xbb4);
    *(undefined4 *)(param_1 + 3000) = *(undefined4 *)(param_2 + 3000);
  }
  *(undefined4 *)(param_1 + 0xbbc) = *(undefined4 *)(param_2 + 0xbbc);
  return param_1;
}



// FUNCTION 148ca9258 FUN_148ca9258 body=88 status=ok
// SIG undefined FUN_148ca9258(void)

undefined8 * FUN_148ca9258(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148ca9310(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 148ca92b0 FUN_148ca92b0 body=95 status=ok
// SIG undefined FUN_148ca92b0(void)

undefined8 * FUN_148ca92b0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145c2d9b9(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148ca9372(param_1,iVar1);
      FUN_148ca93e5(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148ca9310 FUN_148ca9310 body=98 status=ok
// SIG undefined FUN_148ca9310(void)

void FUN_148ca9310(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148ca9372 FUN_148ca9372 body=115 status=ok
// SIG undefined FUN_148ca9372(void)

void FUN_148ca9372(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x280,8);
    iVar2 = (int)(uVar1 / 0x280);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x280,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148ca93e5 FUN_148ca93e5 body=60 status=ok
// SIG undefined FUN_148ca93e5(void)

void FUN_148ca93e5(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148ca9422(param_1,param_2);
    param_1 = param_1 + 0x280;
    param_2 = param_2 + 0x280;
  }
  return;
}



// FUNCTION 148ca9422 FUN_148ca9422 body=130 status=ok
// SIG undefined FUN_148ca9422(void)

longlong FUN_148ca9422(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  
  FUN_148c6b498();
  *(undefined1 *)(param_1 + 0x268) = *(undefined1 *)(param_2 + 0x268);
  *(undefined8 *)(param_1 + 0x270) = 0;
  iVar1 = *(int *)(param_2 + 0x278);
  _Src = *(void **)(param_2 + 0x270);
  *(int *)(param_1 + 0x278) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x27c) = 0;
  }
  else {
    FUN_1446dd670((undefined8 *)(param_1 + 0x270),iVar1,0);
    memcpy(*(void **)(param_1 + 0x270),_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 148ca94a6 FUN_148ca94a6 body=82 status=ok
// SIG undefined FUN_148ca94a6(void)

void FUN_148ca94a6(undefined8 param_1,undefined8 *param_2)

{
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b905400;
  FUN_1456e1756(param_2 + 0x16);
  param_2[0x23] = 0;
  param_2[0x24] = 0;
  *(byte *)(param_2 + 0x25) = *(byte *)(param_2 + 0x25) & 0xfe;
  FUN_140056680(param_2 + 0x26,&DAT_149dfb77a);
  return;
}



// FUNCTION 148ca94f8 FUN_148ca94f8 body=82 status=ok
// SIG undefined FUN_148ca94f8(void)

void FUN_148ca94f8(undefined8 param_1,undefined8 *param_2)

{
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b905400;
  FUN_1456e1756(param_2 + 0x16);
  param_2[0x23] = 0;
  param_2[0x24] = 0;
  *(byte *)(param_2 + 0x25) = *(byte *)(param_2 + 0x25) & 0xfe;
  FUN_140056680(param_2 + 0x26,&DAT_149dfb77a);
  return;
}



// FUNCTION 148ca9568 FUN_148ca9568 body=63 status=ok
// SIG undefined FUN_148ca9568(void)

undefined1 FUN_148ca9568(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148ca96cc(param_2,param_3);
    param_3 = param_3 + 0x140;
    param_2 = param_2 + 0x140;
  }
  return 1;
}



// FUNCTION 148ca95d0 FUN_148ca95d0 body=59 status=ok
// SIG undefined FUN_148ca95d0(void)

undefined8 FUN_148ca95d0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca961c FUN_148ca961c body=40 status=ok
// SIG undefined FUN_148ca961c(void)

void FUN_148ca961c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x140) == '\x01') {
    FUN_145a3c36a(param_2);
    *(undefined1 *)(param_2 + 0x140) = 0;
  }
  return;
}



// FUNCTION 148ca9692 FUN_148ca9692 body=57 status=ok
// SIG undefined FUN_148ca9692(void)

void FUN_148ca9692(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbf010 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbf010 = FUN_140002ddd(FUN_14661073b,uVar1,L"OakWidgetData_EquippedFirmware");
  }
  return;
}



// FUNCTION 148ca96cc FUN_148ca96cc body=106 status=ok
// SIG undefined FUN_148ca96cc(void)

longlong FUN_148ca96cc(longlong param_1,longlong param_2)

{
  FUN_1489fb7d2();
  FUN_148c5648a(param_1 + 0xb0,param_2 + 0xb0);
  FUN_148ca9736(param_1 + 0x118,param_2 + 0x118);
  *(byte *)(param_1 + 0x128) = *(byte *)(param_1 + 0x128) & 0xfe | *(byte *)(param_2 + 0x128) & 1;
  FUN_144a787a6(param_1 + 0x130,param_2 + 0x130);
  return param_1;
}



// FUNCTION 148ca9736 FUN_148ca9736 body=95 status=ok
// SIG undefined FUN_148ca9736(void)

undefined8 * FUN_148ca9736(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145a3c3c1(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148ca9796(param_1,iVar1);
      FUN_148ca9805(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148ca9796 FUN_148ca9796 body=111 status=ok
// SIG undefined FUN_148ca9796(void)

void FUN_148ca9796(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x68,8);
    iVar2 = (int)(uVar1 / 0x68);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x68,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148ca9805 FUN_148ca9805 body=52 status=ok
// SIG undefined FUN_148ca9805(void)

void FUN_148ca9805(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148ca983a(param_1,param_2);
    param_1 = param_1 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return;
}



// FUNCTION 148ca983a FUN_148ca983a body=306 status=ok
// SIG undefined FUN_148ca983a(void)

undefined8 * FUN_148ca983a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  uVar3 = param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_148c56594(param_1 + 2,iVar1,0);
    FUN_148c5660a(param_1[2],uVar3,iVar1);
  }
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  param_1[4] = param_2[4];
  plVar4 = (longlong *)param_2[6];
  param_1[6] = plVar4;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  plVar4 = (longlong *)param_2[8];
  param_1[8] = plVar4;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  param_1[10] = 0;
  iVar1 = *(int *)(param_2 + 0xb);
  pvVar2 = (void *)param_2[10];
  *(int *)(param_1 + 0xb) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 10,iVar1,0);
    memcpy((void *)param_1[10],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  return param_1;
}



// FUNCTION 148ca996e FUN_148ca996e body=37 status=ok
// SIG undefined FUN_148ca996e(void)

void FUN_148ca996e(undefined8 param_1,longlong param_2)

{
  FUN_144a5dc74(param_2);
  *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) & 0xfe;
  FUN_14164d09a(param_2 + 0x18);
  return;
}



// FUNCTION 148ca9994 FUN_148ca9994 body=37 status=ok
// SIG undefined FUN_148ca9994(void)

void FUN_148ca9994(undefined8 param_1,longlong param_2)

{
  FUN_144a5dc74(param_2);
  *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) & 0xfe;
  FUN_14164d09a(param_2 + 0x18);
  return;
}



// FUNCTION 148ca99ba FUN_148ca99ba body=44 status=ok
// SIG undefined FUN_148ca99ba(void)

void FUN_148ca99ba(undefined8 param_1,longlong *param_2)

{
  FUN_1418d33b4(param_2 + 3);
  if ((longlong *)*param_2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ca99db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_2 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 148ca99fc FUN_148ca99fc body=63 status=ok
// SIG undefined FUN_148ca99fc(void)

undefined1 FUN_148ca99fc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148ca9b34(param_2,param_3);
    param_3 = param_3 + 0xf8;
    param_2 = param_2 + 0xf8;
  }
  return 1;
}



// FUNCTION 148ca9a64 FUN_148ca9a64 body=59 status=ok
// SIG undefined FUN_148ca9a64(void)

undefined8 FUN_148ca9a64(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca9ab0 FUN_148ca9ab0 body=53 status=ok
// SIG undefined FUN_148ca9ab0(void)

void FUN_148ca9ab0(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[0x1f] == '\x01') {
    FUN_1418d33b4(param_2 + 3);
    if ((longlong *)*param_2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_2 + 0x10))();
    }
    *(undefined1 *)(param_2 + 0x1f) = 0;
  }
  return;
}



// FUNCTION 148ca9b34 FUN_148ca9b34 body=103 status=ok
// SIG undefined FUN_148ca9b34(void)

longlong * FUN_148ca9b34(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_2;
  plVar2 = (longlong *)*param_1;
  if (plVar2 != plVar1) {
    *param_1 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfe | *(byte *)(param_2 + 2) & 1;
  FUN_148ca9b9c(param_1 + 3,param_2 + 3);
  return param_1;
}



// FUNCTION 148ca9b9c FUN_148ca9b9c body=266 status=ok
// SIG undefined FUN_148ca9b9c(void)

undefined1 * FUN_148ca9b9c(undefined1 *param_1,undefined1 *param_2)

{
  if (*(int *)(param_1 + 4) != *(int *)(param_2 + 4)) {
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  if (*(int *)(param_1 + 0x18) != *(int *)(param_2 + 0x18)) {
    FUN_144a787a6(param_1 + 8,param_2 + 8);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  }
  if (*(int *)(param_1 + 0x30) != *(int *)(param_2 + 0x30)) {
    FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  }
  if (*(int *)(param_1 + 0x48) != *(int *)(param_2 + 0x48)) {
    FUN_144a787a6(param_1 + 0x38,param_2 + 0x38);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  }
  if (*(int *)(param_1 + 0x54) != *(int *)(param_2 + 0x54)) {
    param_1[0x50] = param_2[0x50];
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  }
  if (*(int *)(param_1 + 0x60) != *(int *)(param_2 + 0x60)) {
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  }
  if (*(int *)(param_1 + 0x78) != *(int *)(param_2 + 0x78)) {
    FUN_144a787a6(param_1 + 0x68,param_2 + 0x68);
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  }
  if (*(int *)(param_1 + 0x84) != *(int *)(param_2 + 0x84)) {
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
  }
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  FUN_140bb2e20(param_1 + 0x90,param_2 + 0x90);
  return param_1;
}



// FUNCTION 148ca9cd6 FUN_148ca9cd6 body=54 status=ok
// SIG undefined FUN_148ca9cd6(void)

undefined1 FUN_148ca9cd6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c5648a(param_2,param_3);
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return 1;
}



// FUNCTION 148ca9d34 FUN_148ca9d34 body=59 status=ok
// SIG undefined FUN_148ca9d34(void)

undefined8 FUN_148ca9d34(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca9d7a FUN_148ca9d7a body=34 status=ok
// SIG undefined FUN_148ca9d7a(void)

void FUN_148ca9d7a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_145a5bc32(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 148ca9dec FUN_148ca9dec body=55 status=ok
// SIG undefined FUN_148ca9dec(void)

void FUN_148ca9dec(undefined8 param_1,undefined8 *param_2)

{
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140056680(param_2,&DAT_149dfb77a);
  FUN_140056680(param_2 + 2,&DAT_149dfb77a);
  return;
}



// FUNCTION 148ca9e24 FUN_148ca9e24 body=48 status=ok
// SIG undefined FUN_148ca9e24(void)

void FUN_148ca9e24(undefined8 param_1,longlong param_2)

{
  FUN_140056680(param_2,&DAT_149dfb77a);
  FUN_140056680(param_2 + 0x10,&DAT_149dfb77a);
  return;
}



// FUNCTION 148ca9e54 FUN_148ca9e54 body=47 status=ok
// SIG undefined FUN_148ca9e54(void)

void FUN_148ca9e54(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148ca9e9a FUN_148ca9e9a body=67 status=ok
// SIG undefined FUN_148ca9e9a(void)

undefined1 FUN_148ca9e9a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 148ca9f06 FUN_148ca9f06 body=59 status=ok
// SIG undefined FUN_148ca9f06(void)

undefined8 FUN_148ca9f06(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca9fa4 FUN_148ca9fa4 body=51 status=ok
// SIG undefined FUN_148ca9fa4(void)

void FUN_148ca9fa4(longlong *param_1)

{
  if ((char)param_1[4] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 148ca9fd8 FUN_148ca9fd8 body=98 status=ok
// SIG undefined FUN_148ca9fd8(void)

void FUN_148ca9fd8(undefined8 param_1,undefined8 *param_2)

{
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140056680(param_2,&DAT_149dfb77a);
  FUN_140056680(param_2 + 2,&DAT_149dfb77a);
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  *(undefined1 *)(param_2 + 7) = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined1 *)(param_2 + 6) = 0;
  return;
}



// FUNCTION 148caa03a FUN_148caa03a body=68 status=ok
// SIG undefined FUN_148caa03a(void)

void FUN_148caa03a(undefined8 param_1,longlong param_2)

{
  FUN_140056680(param_2,&DAT_149dfb77a);
  FUN_140056680(param_2 + 0x10,&DAT_149dfb77a);
  *(undefined4 *)(param_2 + 0x34) = 0;
  *(undefined1 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined1 *)(param_2 + 0x30) = 0;
  return;
}



// FUNCTION 148caa07e FUN_148caa07e body=47 status=ok
// SIG undefined FUN_148caa07e(void)

void FUN_148caa07e(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148caa0c4 FUN_148caa0c4 body=54 status=ok
// SIG undefined FUN_148caa0c4(void)

undefined1 FUN_148caa0c4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148caa1be(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 148caa122 FUN_148caa122 body=59 status=ok
// SIG undefined FUN_148caa122(void)

undefined8 FUN_148caa122(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148caa1be FUN_148caa1be body=106 status=ok
// SIG undefined FUN_148caa1be(void)

longlong FUN_148caa1be(longlong param_1,longlong param_2)

{
  FUN_144a787a6();
  FUN_144a787a6(param_1 + 0x10,param_2 + 0x10);
  if (*(int *)(param_1 + 0x24) != *(int *)(param_2 + 0x24)) {
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  }
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_2 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  }
  if (*(int *)(param_1 + 0x34) != *(int *)(param_2 + 0x34)) {
    *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  }
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  return param_1;
}



// FUNCTION 148caa22a FUN_148caa22a body=51 status=ok
// SIG undefined FUN_148caa22a(void)

void FUN_148caa22a(longlong *param_1)

{
  if ((char)param_1[8] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 148caa2e6 FUN_148caa2e6 body=59 status=ok
// SIG undefined FUN_148caa2e6(void)

undefined8 FUN_148caa2e6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148caa388 FUN_148caa388 body=69 status=ok
// SIG undefined FUN_148caa388(void)

void FUN_148caa388(undefined8 param_1,undefined8 *param_2)

{
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[8] = 0;
  FUN_144a5dc74(param_2 + 3);
  FUN_144a5dc74(param_2 + 5);
  FUN_144a5dc74(param_2 + 7);
  return;
}



// FUNCTION 148caa3ce FUN_148caa3ce body=57 status=ok
// SIG undefined FUN_148caa3ce(void)

void FUN_148caa3ce(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  FUN_144a5dc74(param_2 + 3);
  FUN_144a5dc74(param_2 + 5);
  FUN_144a5dc74(param_2 + 7);
  return;
}



// FUNCTION 148caa408 FUN_148caa408 body=66 status=ok
// SIG undefined FUN_148caa408(void)

void FUN_148caa408(undefined8 param_1,longlong param_2)

{
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x38) + 0x10))();
  }
  if (*(longlong **)(param_2 + 0x28) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x28) + 0x10))();
  }
  if (*(longlong **)(param_2 + 0x18) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148caa43f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_2 + 0x18) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 148caa460 FUN_148caa460 body=54 status=ok
// SIG undefined FUN_148caa460(void)

undefined1 FUN_148caa460(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148caa55a(param_2,param_3);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 148caa4be FUN_148caa4be body=59 status=ok
// SIG undefined FUN_148caa4be(void)

undefined8 FUN_148caa4be(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148caa55a FUN_148caa55a body=230 status=ok
// SIG undefined FUN_148caa55a(void)

undefined4 * FUN_148caa55a(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_1[1] != param_2[1]) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  if (param_1[3] != param_2[3]) {
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
  }
  if (param_1[5] != param_2[5]) {
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
  }
  plVar1 = *(longlong **)(param_2 + 6);
  plVar2 = *(longlong **)(param_1 + 6);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 6) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  param_1[8] = param_2[8];
  plVar1 = *(longlong **)(param_2 + 10);
  plVar2 = *(longlong **)(param_1 + 10);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 10) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  param_1[0xc] = param_2[0xc];
  plVar1 = *(longlong **)(param_2 + 0xe);
  plVar2 = *(longlong **)(param_1 + 0xe);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0xe) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  param_1[0x10] = param_2[0x10];
  return param_1;
}



// FUNCTION 148caa642 FUN_148caa642 body=69 status=ok
// SIG undefined FUN_148caa642(void)

void FUN_148caa642(longlong param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x01') {
    if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))();
    }
    if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))();
    }
    if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
    }
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  return;
}



// FUNCTION 148caa6bc FUN_148caa6bc body=63 status=ok
// SIG undefined FUN_148caa6bc(void)

undefined1 FUN_148caa6bc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148caa7e6(param_2,param_3);
    param_3 = param_3 + 0x328;
    param_2 = param_2 + 0x328;
  }
  return 1;
}



// FUNCTION 148caa724 FUN_148caa724 body=59 status=ok
// SIG undefined FUN_148caa724(void)

undefined8 FUN_148caa724(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148caa770 FUN_148caa770 body=40 status=ok
// SIG undefined FUN_148caa770(void)

void FUN_148caa770(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x328) == '\x01') {
    FUN_1461602d4(param_2);
    *(undefined1 *)(param_2 + 0x328) = 0;
  }
  return;
}



// FUNCTION 148caa7e6 FUN_148caa7e6 body=843 status=ok
// SIG undefined FUN_148caa7e6(void)

longlong FUN_148caa7e6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  FUN_1489fb7d2();
  FUN_148caa1be(param_1 + 0xb0,param_2 + 0xb0);
  FUN_148caa1be(param_1 + 0xf0,param_2 + 0xf0);
  if (*(int *)(param_1 + 0x134) != *(int *)(param_2 + 0x134)) {
    *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
    *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_2 + 0x134);
  }
  if (*(int *)(param_1 + 0x13c) != *(int *)(param_2 + 0x13c)) {
    *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_2 + 0x138);
    *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_2 + 0x13c);
  }
  if (*(int *)(param_1 + 0x150) != *(int *)(param_2 + 0x150)) {
    FUN_144a787a6(param_1 + 0x140,param_2 + 0x140);
    *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_2 + 0x150);
  }
  if (*(int *)(param_1 + 0x168) != *(int *)(param_2 + 0x168)) {
    FUN_144a787a6(param_1 + 0x158,param_2 + 0x158);
    *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_2 + 0x168);
  }
  if (*(int *)(param_1 + 0x180) != *(int *)(param_2 + 0x180)) {
    FUN_144a787a6(param_1 + 0x170,param_2 + 0x170);
    *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_2 + 0x180);
  }
  FUN_148caa55a(param_1 + 0x188,param_2 + 0x188);
  FUN_148caa55a(param_1 + 0x1d0,param_2 + 0x1d0);
  if (*(int *)(param_1 + 0x224) != *(int *)(param_2 + 0x224)) {
    *(undefined4 *)(param_1 + 0x220) = *(undefined4 *)(param_2 + 0x220);
    *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)(param_2 + 0x218);
    *(undefined4 *)(param_1 + 0x224) = *(undefined4 *)(param_2 + 0x224);
  }
  if (*(int *)(param_1 + 0x22c) != *(int *)(param_2 + 0x22c)) {
    *(undefined1 *)(param_1 + 0x228) = *(undefined1 *)(param_2 + 0x228);
    *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(param_2 + 0x22c);
  }
  if (*(int *)(param_1 + 0x240) != *(int *)(param_2 + 0x240)) {
    FUN_144a787a6(param_1 + 0x230,param_2 + 0x230);
    *(undefined4 *)(param_1 + 0x240) = *(undefined4 *)(param_2 + 0x240);
  }
  if (*(int *)(param_1 + 600) != *(int *)(param_2 + 600)) {
    FUN_144a787a6(param_1 + 0x248,param_2 + 0x248);
    *(undefined4 *)(param_1 + 600) = *(undefined4 *)(param_2 + 600);
  }
  if (*(int *)(param_1 + 0x270) != *(int *)(param_2 + 0x270)) {
    FUN_144a787a6(param_1 + 0x260,param_2 + 0x260);
    *(undefined4 *)(param_1 + 0x270) = *(undefined4 *)(param_2 + 0x270);
  }
  if (*(int *)(param_1 + 0x288) != *(int *)(param_2 + 0x288)) {
    FUN_144a787a6(param_1 + 0x278,param_2 + 0x278);
    *(undefined4 *)(param_1 + 0x288) = *(undefined4 *)(param_2 + 0x288);
  }
  if (*(int *)(param_1 + 0x2a0) != *(int *)(param_2 + 0x2a0)) {
    FUN_144a787a6(param_1 + 0x290,param_2 + 0x290);
    *(undefined4 *)(param_1 + 0x2a0) = *(undefined4 *)(param_2 + 0x2a0);
  }
  *(undefined1 *)(param_1 + 0x2c8) = *(undefined1 *)(param_2 + 0x2c8);
  uVar3 = *(undefined4 *)(param_2 + 0x2a8);
  uVar4 = *(undefined4 *)(param_2 + 0x2ac);
  uVar5 = *(undefined4 *)(param_2 + 0x2b0);
  uVar6 = *(undefined4 *)(param_2 + 0x2b4);
  uVar7 = *(undefined4 *)(param_2 + 700);
  uVar8 = *(undefined4 *)(param_2 + 0x2c0);
  uVar9 = *(undefined4 *)(param_2 + 0x2c4);
  *(undefined4 *)(param_1 + 0x2b8) = *(undefined4 *)(param_2 + 0x2b8);
  *(undefined4 *)(param_1 + 700) = uVar7;
  *(undefined4 *)(param_1 + 0x2c0) = uVar8;
  *(undefined4 *)(param_1 + 0x2c4) = uVar9;
  *(undefined4 *)(param_1 + 0x2a8) = uVar3;
  *(undefined4 *)(param_1 + 0x2ac) = uVar4;
  *(undefined4 *)(param_1 + 0x2b0) = uVar5;
  *(undefined4 *)(param_1 + 0x2b4) = uVar6;
  FUN_144a787a6(param_1 + 0x2d0,param_2 + 0x2d0);
  if (*(int *)(param_1 + 0x2e4) != *(int *)(param_2 + 0x2e4)) {
    *(undefined1 *)(param_1 + 0x2e0) = *(undefined1 *)(param_2 + 0x2e0);
    *(undefined4 *)(param_1 + 0x2e4) = *(undefined4 *)(param_2 + 0x2e4);
  }
  plVar1 = *(longlong **)(param_2 + 0x2e8);
  plVar2 = *(longlong **)(param_1 + 0x2e8);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x2e8) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(param_2 + 0x2f0);
  if (*(int *)(param_1 + 0x2fc) != *(int *)(param_2 + 0x2fc)) {
    *(undefined4 *)(param_1 + 0x2f8) = *(undefined4 *)(param_2 + 0x2f8);
    *(undefined4 *)(param_1 + 0x2fc) = *(undefined4 *)(param_2 + 0x2fc);
  }
  *(undefined4 *)(param_1 + 800) = *(undefined4 *)(param_2 + 800);
  uVar10 = *(undefined8 *)(param_2 + 0x300);
  uVar11 = *(undefined8 *)(param_2 + 0x308);
  uVar12 = *(undefined8 *)(param_2 + 0x318);
  *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_2 + 0x310);
  *(undefined8 *)(param_1 + 0x318) = uVar12;
  *(undefined8 *)(param_1 + 0x300) = uVar10;
  *(undefined8 *)(param_1 + 0x308) = uVar11;
  return param_1;
}



// FUNCTION 148caab60 FUN_148caab60 body=63 status=ok
// SIG undefined FUN_148caab60(void)

undefined1 FUN_148caab60(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148caac8a(param_2,param_3);
    param_3 = param_3 + 0xe0;
    param_2 = param_2 + 0xe0;
  }
  return 1;
}



// FUNCTION 148caabc8 FUN_148caabc8 body=59 status=ok
// SIG undefined FUN_148caabc8(void)

undefined8 FUN_148caabc8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148caac14 FUN_148caac14 body=40 status=ok
// SIG undefined FUN_148caac14(void)

void FUN_148caac14(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe0) == '\x01') {
    FUN_145c903c6(param_2);
    *(undefined1 *)(param_2 + 0xe0) = 0;
  }
  return;
}



// FUNCTION 148caac8a FUN_148caac8a body=395 status=ok
// SIG undefined FUN_148caac8a(void)

longlong FUN_148caac8a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  FUN_145a0339c();
  *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) & 0xfe | *(byte *)(param_2 + 0x48) & 1;
  plVar1 = *(longlong **)(param_2 + 0x50);
  plVar2 = *(longlong **)(param_1 + 0x50);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x50) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  plVar1 = *(longlong **)(param_2 + 0x60);
  plVar2 = *(longlong **)(param_1 + 0x60);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x60) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  plVar1 = *(longlong **)(param_2 + 0x70);
  plVar2 = *(longlong **)(param_1 + 0x70);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x70) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  plVar1 = *(longlong **)(param_2 + 0x80);
  plVar2 = *(longlong **)(param_1 + 0x80);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x80) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  FUN_144a787a6(param_1 + 0x90,param_2 + 0x90);
  FUN_144a787a6(param_1 + 0xa0,param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  FUN_148c6b1b0(param_1 + 0xb8,param_2 + 0xb8);
  uVar3 = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xd0) = uVar3;
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
  return param_1;
}



// FUNCTION 148caae26 FUN_148caae26 body=59 status=ok
// SIG undefined FUN_148caae26(void)

void FUN_148caae26(undefined8 param_1,longlong *param_2)

{
  FUN_145c903c6(param_2 + 4);
  if ((longlong *)param_2[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_2[2] + 0x10))();
  }
  if ((longlong *)*param_2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148caae56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_2 + 0x10))();
    return;
  }
  return;
}


