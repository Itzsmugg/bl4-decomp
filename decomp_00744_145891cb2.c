// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145891cb2 FUN_145891cb2 body=40 status=ok
// SIG undefined FUN_145891cb2(void)

undefined8 FUN_145891cb2(undefined8 param_1,int param_2)

{
  FUN_145891cda();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145891cda FUN_145891cda body=96 status=ok
// SIG undefined FUN_145891cda(void)

void FUN_145891cda(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b692f60;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(param_1 + 5);
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 145891d48 FUN_145891d48 body=40 status=ok
// SIG undefined FUN_145891d48(void)

undefined8 FUN_145891d48(undefined8 param_1,int param_2)

{
  FUN_145891d70();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145891d70 FUN_145891d70 body=115 status=ok
// SIG undefined FUN_145891d70(void)

void FUN_145891d70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b5dc2a0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 145891dec FUN_145891dec body=133 status=ok
// SIG undefined FUN_145891dec(void)

undefined8 * FUN_145891dec(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b0dd450;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_144a5dc74(param_1 + 6);
  *(undefined2 *)(param_1 + 8) = 2;
  *param_1 = &PTR_FUN_14b1412c0;
  *(undefined2 *)(param_1 + 0xd) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x51) = 0;
  *(undefined8 *)((longlong)param_1 + 0x59) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  FUN_140c25b54(param_1 + 0xd);
  return param_1;
}



// FUNCTION 145891e72 FUN_145891e72 body=21 status=ok
// SIG undefined FUN_145891e72(void)

void FUN_145891e72(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1412b4212();
  FUN_14589206c(uVar1);
  return;
}



// FUNCTION 145891e88 FUN_145891e88 body=9 status=ok
// SIG undefined FUN_145891e88(void)

void FUN_145891e88(longlong param_1)

{
  FUN_1412b4282(param_1 + 0x10);
  return;
}



// FUNCTION 145891e92 FUN_145891e92 body=244 status=ok
// SIG undefined FUN_145891e92(void)

undefined8
FUN_145891e92(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar1 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14aa6ea50;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_40[2] = lVar3;
  *local_40 = &PTR_FUN_14b42bc50;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_3);
  puVar1[4] = param_4;
  FUN_1412b4546(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145891f92 FUN_145891f92 body=208 status=ok
// SIG undefined FUN_145891f92(void)

undefined8 FUN_145891f92(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [40];
  char local_70 [4];
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_50 [40];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70[0] = '\0';
  local_6c = 0;
  local_64 = 0;
  FUN_144928b90(local_50,3);
  local_60 = DAT_14cb8cbd0;
  local_58 = DAT_14cb8cbd8;
  FUN_1411efe9e(local_50);
  lVar1 = FUN_140149a73(param_1,0);
  if (lVar1 != 0) {
    FUN_14039fc7b(local_50,local_70,lVar1,0);
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  uVar2 = 1;
  if (local_70[0] == '\x01') {
    uVar2 = FUN_1412b46ca(local_70);
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14589206c FUN_14589206c body=783 status=ok
// SIG undefined FUN_14589206c(void)

undefined8 * FUN_14589206c(undefined8 *param_1)

{
  FUN_14589237c();
  *param_1 = &PTR_FUN_14b7127b0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0xc;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0x3f00000044160000;
  *(undefined1 *)(param_1 + 0x53) = 1;
  FUN_1412b46dc(param_1 + 0x54);
  FUN_1412b46dc(param_1 + 0x7b);
  param_1[0xa2] = 0x43fa000000000000;
  *(undefined4 *)(param_1 + 0xa3) = 0x54800000;
  *(undefined1 *)((longlong)param_1 + 0x51c) = 0x19;
  *(undefined8 *)((longlong)param_1 + 0x51d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x524) = 0x710500000000;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0x7107;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  *(undefined4 *)(param_1 + 0xab) = 0x7103;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  *(undefined4 *)(param_1 + 0xae) = 0x7108;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  *(undefined4 *)(param_1 + 0xb1) = 10;
  param_1[0xb7] = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5cc) = 0;
  param_1[0xbb] = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  param_1[0xc1] = 0;
  *(undefined4 *)(param_1 + 0xc2) = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x614) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x61c) = 0;
  param_1[0xc5] = 0;
  *(undefined4 *)(param_1 + 0xc6) = 0;
  param_1[199] = 0;
  *(undefined4 *)(param_1 + 200) = 0x7106;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  *(undefined4 *)(param_1 + 0xcb) = 0x7106;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  *(undefined4 *)(param_1 + 0xce) = 0x7106;
  param_1[0xd4] = 0;
  *(undefined4 *)(param_1 + 0xd5) = 0;
  param_1[0xd1] = 0;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6ac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6b4) = 0;
  param_1[0xd8] = 0;
  *(undefined4 *)(param_1 + 0xd9) = 0;
  *(undefined2 *)(param_1 + 0xda) = 1;
  *(undefined1 *)((longlong)param_1 + 0x6d2) = 1;
  FUN_144928b90(param_1 + 0xdb,0);
  *(undefined1 *)(param_1 + 0xe2) = 0;
  *(undefined2 *)(param_1 + 0xe3) = 1;
  *(undefined1 *)((longlong)param_1 + 0x71a) = 1;
  FUN_144928b90(param_1 + 0xe4,0);
  *(undefined1 *)(param_1 + 0xeb) = 0;
  *(undefined2 *)(param_1 + 0xec) = 1;
  *(undefined1 *)((longlong)param_1 + 0x762) = 1;
  FUN_144928b90(param_1 + 0xed,0);
  *(undefined1 *)(param_1 + 0xf4) = 0;
  *(undefined2 *)(param_1 + 0xf5) = 1;
  *(undefined1 *)((longlong)param_1 + 0x7aa) = 1;
  FUN_144928b90(param_1 + 0xf6,0);
  *(undefined1 *)(param_1 + 0xfd) = 0;
  *(undefined2 *)(param_1 + 0xfe) = 1;
  *(undefined1 *)((longlong)param_1 + 0x7f2) = 1;
  FUN_144928b90(param_1 + 0xff,0);
  *(undefined1 *)(param_1 + 0x106) = 0;
  *(undefined2 *)(param_1 + 0x107) = 1;
  *(undefined1 *)((longlong)param_1 + 0x83a) = 1;
  FUN_144928b90(param_1 + 0x108,0);
  *(undefined1 *)(param_1 + 0x10f) = 0;
  *(undefined2 *)(param_1 + 0x110) = 1;
  *(undefined1 *)((longlong)param_1 + 0x882) = 1;
  FUN_144928b90(param_1 + 0x111,0);
  *(undefined1 *)(param_1 + 0x118) = 0;
  param_1[0x119] = 0;
  *(undefined4 *)(param_1 + 0x11a) = 0;
  param_1[0x11b] = 0;
  param_1[0x11c] = 0;
  param_1[0x11d] = 0;
  param_1[0x11e] = 0;
  param_1[0x11f] = 0;
  param_1[0x120] = 0;
  FUN_1412b47aa(param_1 + 0x121);
  *(undefined1 *)((longlong)param_1 + 0x761) = 1;
  *(undefined1 *)((longlong)param_1 + 0x7a9) = 1;
  *(undefined1 *)((longlong)param_1 + 0x881) = 1;
  *(undefined4 *)((longlong)param_1 + 0x96c) = 0;
  return param_1;
}



// FUNCTION 14589237c FUN_14589237c body=426 status=ok
// SIG undefined FUN_14589237c(void)

undefined8 * FUN_14589237c(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b0ef2f0;
  param_1[3] = 0x437a000000000000;
  *(undefined4 *)(param_1 + 4) = 0x3f19999a;
  *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0x7001;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x7004;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0x7106;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0x7104;
  param_1[0x1f] = 0;
  *(undefined2 *)(param_1 + 0x20) = 1;
  *(undefined1 *)((longlong)param_1 + 0x102) = 1;
  FUN_144928b90(param_1 + 0x21,0);
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined2 *)(param_1 + 0x29) = 1;
  *(undefined1 *)((longlong)param_1 + 0x14a) = 1;
  FUN_144928b90(param_1 + 0x2a,0);
  *(undefined1 *)(param_1 + 0x31) = 0;
  *(undefined2 *)(param_1 + 0x32) = 1;
  *(undefined1 *)((longlong)param_1 + 0x192) = 1;
  FUN_144928b90(param_1 + 0x33,0);
  *(undefined1 *)(param_1 + 0x3a) = 0;
  *(undefined2 *)(param_1 + 0x3b) = 1;
  *(undefined1 *)((longlong)param_1 + 0x1da) = 1;
  FUN_144928b90(param_1 + 0x3c,0);
  *(undefined1 *)(param_1 + 0x43) = 0;
  *(byte *)(param_1 + 0x44) = *(byte *)(param_1 + 0x44) & 0xfc;
  param_1[0x4a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x224) = 0;
  *(undefined8 *)((longlong)param_1 + 0x22c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x234) = 0;
  *(undefined8 *)((longlong)param_1 + 0x23c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x23d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x245) = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0x7f7fffff;
  *(undefined1 *)((longlong)param_1 + 0x101) = 1;
  *(undefined1 *)((longlong)param_1 + 0x149) = 1;
  *(undefined1 *)((longlong)param_1 + 0x191) = 1;
  *(undefined1 *)((longlong)param_1 + 0x1d9) = 1;
  return param_1;
}



// FUNCTION 145892526 FUN_145892526 body=98 status=ok
// SIG undefined FUN_145892526(void)

void FUN_145892526(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1412b486a(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bcc7900;
  puVar1[0x29] = 0;
  puVar1[0x2a] = 0;
  *(undefined1 *)(puVar1 + 0x2b) = 1;
  puVar1[0x2c] = 0;
  puVar1[0x2d] = 0;
  *(undefined1 *)(puVar1 + 0x2e) = 0;
  puVar1[0x2f] = 0;
  puVar1[0x30] = 0;
  puVar1[0x31] = 0;
  puVar1[0x32] = 0;
  puVar1[0x33] = 0;
  puVar1[0x34] = 0;
  puVar1[0x35] = 0;
  return;
}



// FUNCTION 145892588 FUN_145892588 body=40 status=ok
// SIG undefined FUN_145892588(void)

undefined8 FUN_145892588(undefined8 param_1,int param_2)

{
  FUN_1458925b0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458925b0 FUN_1458925b0 body=87 status=ok
// SIG undefined FUN_1458925b0(void)

void FUN_1458925b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b879e80;
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  FUN_145892607(param_1[0x28],*(undefined4 *)(param_1 + 0x29));
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  FUN_140ee3dc0(param_1);
  return;
}



// FUNCTION 145892607 FUN_145892607 body=62 status=ok
// SIG undefined FUN_145892607(void)

void FUN_145892607(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if ((longlong *)plVar1[-2] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar1[-2] + 0x10))();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145892646 FUN_145892646 body=40 status=ok
// SIG undefined FUN_145892646(void)

undefined8 FUN_145892646(undefined8 param_1,int param_2)

{
  FUN_14589266e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14589266e FUN_14589266e body=179 status=ok
// SIG undefined FUN_14589266e(void)

void FUN_14589266e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab20650;
  *(undefined4 *)(param_1 + 0xa1) = 0;
  if (param_1[0xa0] != 0) {
    FUN_1400020a8();
  }
  FUN_145892722(param_1 + 0x98);
  if (param_1[0x96] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x94) = 0;
  if (param_1[0x93] != 0) {
    FUN_1400020a8();
  }
  FUN_145a58d38(param_1 + 0x8b);
  *(undefined4 *)(param_1 + 0x8a) = 0;
  if (param_1[0x89] != 0) {
    FUN_1400020a8();
  }
  FUN_140105116(param_1 + 0x81);
  FUN_1458927b2(param_1);
  return;
}



// FUNCTION 145892722 FUN_145892722 body=53 status=ok
// SIG undefined FUN_145892722(void)

void FUN_145892722(longlong *param_1)

{
  FUN_145892758();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145892758 FUN_145892758 body=90 status=ok
// SIG undefined FUN_145892758(void)

void FUN_145892758(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1405357e8(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1458927b2 FUN_1458927b2 body=243 status=ok
// SIG undefined FUN_1458927b2(void)

void FUN_1458927b2(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14ab280a0;
  *(undefined4 *)(param_1 + 0x7e) = 0;
  if (param_1[0x7d] != 0) {
    FUN_1400020a8();
  }
  FUN_14005bbf2(param_1 + 0x75);
  *(undefined4 *)(param_1 + 0x74) = 0;
  if (param_1[0x73] != 0) {
    FUN_1400020a8();
  }
  FUN_14005bbf2(param_1 + 0x6b);
  FUN_1458929d8(param_1 + 0x61);
  puVar2 = (undefined8 *)param_1[0x5f];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined8 *)param_1[0x5e];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  FUN_1458928a6(param_1 + 0x50);
  FUN_1458928f2(param_1 + 0x30);
  FUN_1458928a6(param_1 + 0x27);
  FUN_1458928f2(param_1 + 6);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1458928a6 FUN_1458928a6 body=76 status=ok
// SIG undefined FUN_1458928a6(void)

void FUN_1458928a6(longlong *param_1)

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
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458928f2 FUN_1458928f2 body=90 status=ok
// SIG undefined FUN_1458928f2(void)

void FUN_1458928f2(longlong *param_1)

{
  FUN_145892984(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_14589294c(param_1 + 2);
  FUN_14482129f(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14589294c FUN_14589294c body=55 status=ok
// SIG undefined FUN_14589294c(void)

void FUN_14589294c(longlong *param_1)

{
  FUN_14047403c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145892984 FUN_145892984 body=83 status=ok
// SIG undefined FUN_145892984(void)

void FUN_145892984(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_14005bbf2(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_14589294c(param_1);
  return;
}



// FUNCTION 1458929d8 FUN_1458929d8 body=98 status=ok
// SIG undefined FUN_1458929d8(void)

void FUN_1458929d8(undefined8 *param_1)

{
  if (*(int *)((longlong)param_1 + 0xc) != -1) {
    *(undefined4 *)(param_1 + 9) = 0;
    if (param_1[8] != 0) {
      FUN_1400020a8();
    }
    FUN_14472eaf0(param_1);
    *param_1 = 0;
    param_1[1] = 0xffffffff00000000;
    param_1[4] = 0;
    param_1[5] = 0x8000000000;
    param_1[6] = 0xffffffff;
    param_1[8] = 0;
    *(undefined4 *)(param_1 + 9) = 0;
  }
  return;
}



// FUNCTION 145892a3a FUN_145892a3a body=211 status=ok
// SIG undefined FUN_145892a3a(void)

void FUN_145892a3a(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined4 local_28;
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = *(longlong **)(param_1 + 0x118);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x7b8))(plVar1,0,1,0xffffffff);
    if (lVar2 != 0) {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x7b8))
                        (*(longlong **)(param_1 + 0x118),0,1,0xffffffff);
      uVar3 = FUN_145892b20(uVar3);
      local_30 = &LAB_145892b7a;
      local_28 = 0;
      FUN_145892c06(uVar3,local_20,param_1);
      (**(code **)(**(longlong **)(param_1 + 0x118) + 0x7b8))
                (*(longlong **)(param_1 + 0x118),0,1,0xffffffff);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145892b20 FUN_145892b20 body=90 status=ok
// SIG undefined FUN_145892b20(void)

undefined8 * FUN_145892b20(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x158);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x28,0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 2;
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)0x0;
    }
    else {
      *(undefined8 **)(param_1 + 0x158) = puVar1;
    }
  }
  return puVar1 + 2;
}



// FUNCTION 145892c06 FUN_145892c06 body=199 status=ok
// SIG undefined FUN_145892c06(void)

undefined8
FUN_145892c06(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = 0;
  local_50 = 0;
  puVar3 = (undefined8 *)FUN_144a72ab6(0x30,&local_58);
  *puVar3 = &PTR_LAB_14b51f1d0;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14b51f160;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145892cce(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145892cce FUN_145892cce body=216 status=ok
// SIG undefined FUN_145892cce(void)

undefined8 * FUN_145892cce(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145892db4 FUN_145892db4 body=24 status=ok
// SIG undefined FUN_145892db4(void)

bool FUN_145892db4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145892dd2 FUN_145892dd2 body=221 status=ok
// SIG undefined FUN_145892dd2(void)

longlong FUN_145892dd2(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c99e270 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14702a894;
    local_40 = &LAB_145abcf03;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x180;
    FUN_14081cfa3(L"/Script/PropertyPath",L"PropertyPathTestObject",&DAT_14c99e270,FUN_146295ec8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c99e270;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145892eb6 FUN_145892eb6 body=221 status=ok
// SIG undefined FUN_145892eb6(void)

longlong FUN_145892eb6(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c99e980 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1470459cf;
    local_40 = FUN_146296f99;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/AudioExtensions",L"SoundfieldEncodingSettingsBase",&DAT_14c99e980,
                  &DAT_1470459ce);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c99e980;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145892f9a FUN_145892f9a body=221 status=ok
// SIG undefined FUN_145892f9a(void)

longlong FUN_145892f9a(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb0a398 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147d5e88e;
    local_40 = &LAB_1464063da;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 200;
    FUN_14081cfa3(L"/Script/Engine",L"StreamableRenderAsset",&DAT_14cb0a398,FUN_1464063b8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb0a398;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14589307e FUN_14589307e body=221 status=ok
// SIG undefined FUN_14589307e(void)

longlong FUN_14589307e(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cae8130 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147b85f3e;
    local_40 = &LAB_1463e543a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/Engine",L"BlueprintAsyncActionBase",&DAT_14cae8130,FUN_1463e5418);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cae8130;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145893162 FUN_145893162 body=221 status=ok
// SIG undefined FUN_145893162(void)

longlong FUN_145893162(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab8328 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147748b39;
    local_40 = FUN_1463566c2;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/UMG",L"RichTextBlockDecorator",&DAT_14cab8328,&DAT_147748b38);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab8328;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145893246 FUN_145893246 body=221 status=ok
// SIG undefined FUN_145893246(void)

longlong FUN_145893246(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cabbe30 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1477f6734;
    local_40 = FUN_146363892;
    local_48 = L"EditorPerProjectUserSettings";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x58;
    FUN_14081cfa3(L"/Script/MovieSceneCapture",L"MovieSceneCaptureProtocolBase",&DAT_14cabbe30,
                  FUN_146363870);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cabbe30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14589332a FUN_14589332a body=221 status=ok
// SIG undefined FUN_14589332a(void)

longlong FUN_14589332a(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cabc5c8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147811eb2;
    local_40 = FUN_14636618f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/MediaAssets",L"MediaPlaylist",&DAT_14cabc5c8,FUN_146366168);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cabc5c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145893418 FUN_145893418 body=221 status=ok
// SIG undefined FUN_145893418(void)

longlong FUN_145893418(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb1d678 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147e73d6f;
    local_40 = &LAB_146107640;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x88;
    FUN_14081cfa3(L"/Script/NavigationSystem",L"NavigationPath",&DAT_14cb1d678,FUN_146423b64);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1d678;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458934fc FUN_1458934fc body=221 status=ok
// SIG undefined FUN_1458934fc(void)

longlong FUN_1458934fc(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb1e058 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147e9a775;
    local_40 = &LAB_145aaa894;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/AIModule",L"AISenseConfig",&DAT_14cb1e058,&DAT_147e9a774);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1e058;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458935e0 FUN_1458935e0 body=221 status=ok
// SIG undefined FUN_1458935e0(void)

longlong FUN_1458935e0(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb36270 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14806368c;
    local_40 = FUN_1464661cd;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x60;
    FUN_14081cfa3(L"/Script/Niagara",L"NiagaraDataChannelHandler",&DAT_14cb36270,FUN_1464661a6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb36270;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458936c4 FUN_1458936c4 body=221 status=ok
// SIG undefined FUN_1458936c4(void)

longlong FUN_1458936c4(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb51258 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1485ef627;
    local_40 = &LAB_145d15330;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 400;
    FUN_14081cfa3(L"/Script/GbxSpline",L"GbxSplineClutterObject",&DAT_14cb51258,FUN_1464a5a38);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb51258;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458937a8 FUN_1458937a8 body=221 status=ok
// SIG undefined FUN_1458937a8(void)

longlong FUN_1458937a8(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc003e8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1490d9405;
    local_40 = &LAB_145c7315d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/RigVM",L"RigVM",&DAT_14cc003e8,FUN_14668280a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc003e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14589388c FUN_14589388c body=221 status=ok
// SIG undefined FUN_14589388c(void)

longlong FUN_14589388c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc0bdc8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1492ed3d1;
    local_40 = FUN_14671cd15;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/InterchangeCore",L"InterchangeTranslatorSettings",&DAT_14cc0bdc8,
                  FUN_14671ccee);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc0bdc8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145893970 FUN_145893970 body=221 status=ok
// SIG undefined FUN_145893970(void)

longlong FUN_145893970(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc0d980 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_149351bf2;
    local_40 = &LAB_1459488f9;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x1b0;
    FUN_14081cfa3(L"/Script/VariantManagerContent",L"PropertyValue",&DAT_14cc0d980,FUN_146722d76);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc0d980;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145893a54 FUN_145893a54 body=221 status=ok
// SIG undefined FUN_145893a54(void)

longlong FUN_145893a54(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc2dd60 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_149882609;
    local_40 = FUN_14676a558;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/IKRig",L"IKRigSolver",&DAT_14cc2dd60,&DAT_149882608);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc2dd60;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145893b38 FUN_145893b38 body=221 status=ok
// SIG undefined FUN_145893b38(void)

longlong FUN_145893b38(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc32810 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_149911dd6;
    local_40 = &LAB_145c1e990;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x88;
    FUN_14081cfa3(L"/Script/AppleImageUtils",L"AppleImageUtilsBaseAsyncTaskBlueprintProxy",
                  &DAT_14cc32810,FUN_146772592);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc32810;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145893c16 FUN_145893c16 body=52 status=ok
// SIG undefined FUN_145893c16(void)

void FUN_145893c16(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145893c4a(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b7c07a0;
  *(undefined1 *)(puVar1 + 0x95) = 0;
  puVar1[0x96] = 0;
  puVar1[0x97] = 0;
  return;
}



// FUNCTION 145893c4a FUN_145893c4a body=100 status=ok
// SIG undefined FUN_145893c4a(void)

undefined8 * FUN_145893c4a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_145893cae(param_1,uVar1);
  *param_1 = &PTR_FUN_14b6ca430;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x6000;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  *(undefined4 *)(param_1 + 0x93) = 0x6000;
  param_1[0x94] = 0;
  *(undefined1 *)(param_1 + 0x7d) = 1;
  return param_1;
}



// FUNCTION 145893cae FUN_145893cae body=376 status=ok
// SIG undefined FUN_145893cae(void)

undefined8 * FUN_145893cae(undefined8 *param_1)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1405ba846();
  *param_1 = &PTR_FUN_14b909a50;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  *(undefined1 *)(param_1 + 0x7d) = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  *(undefined4 *)(param_1 + 0x81) = 0x4000;
  param_1[0x82] = 0;
  *(undefined1 *)(param_1 + 0x83) = 1;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  *(undefined1 *)(param_1 + 0x8c) = 0;
  FUN_1446f470e(&local_20,L"ZoneTravelStation",1);
  if (param_1[0x80] != local_20) {
    param_1[0x82] = 0;
  }
  param_1[0x80] = local_20;
  local_38 = 0x4024000000000000;
  local_30 = 0x4018000000000000;
  local_28 = 0x4010000000000000;
  FUN_14084f00a(param_1[0x75]);
  FUN_1412b4aa2(local_58,0);
  FUN_144a7e2ee(local_58,2,1);
  FUN_144a7e2ee(local_58,6,1);
  (**(code **)(*(longlong *)param_1[0x75] + 0x948))((longlong *)param_1[0x75],local_58);
  FUN_1412b4a80(param_1[0x75] + 0x410,1);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145893e28 FUN_145893e28 body=67 status=ok
// SIG undefined FUN_145893e28(void)

void FUN_145893e28(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_145893e6c();
  lVar1 = FUN_14479d2ce(param_1 + 0xd8);
  if (lVar1 != 0) {
    uVar2 = FUN_140343d7a(param_1);
    FUN_145893efe(lVar1,uVar2);
    return;
  }
  return;
}



// FUNCTION 145893e6c FUN_145893e6c body=62 status=ok
// SIG undefined FUN_145893e6c(void)

void FUN_145893e6c(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_14479d2ce(param_1 + 0xd8);
  if (lVar1 != 0) {
    uVar2 = FUN_140343d7a(param_1);
    FUN_145893eaa(lVar1,uVar2);
    return;
  }
  return;
}



// FUNCTION 145893eaa FUN_145893eaa body=83 status=ok
// SIG undefined FUN_145893eaa(void)

undefined8 FUN_145893eaa(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if ((param_2 == 0) || (*(longlong *)(param_1 + 0x690) != param_2)) {
    uVar1 = 0;
  }
  else {
    FUN_145893efe(param_1,param_2);
    *(undefined8 *)(param_1 + 0x690) = 0;
    *(undefined8 *)(param_1 + 0x698) = 0;
    *(undefined8 *)(param_1 + 0x6a0) = 0;
    *(undefined8 *)(param_1 + 0x6a8) = 0;
    FUN_145c96ebc(param_1,param_2,0);
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 145893efe FUN_145893efe body=105 status=ok
// SIG undefined FUN_145893efe(void)

undefined8 FUN_145893efe(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x690) != 0) {
    if (*(longlong *)(param_1 + 0x690) != param_2) {
      return 0;
    }
    if (*(char *)(param_1 + 0x6b0) == '\0') {
      return 0;
    }
    if ((*(longlong *)(param_1 + 0x698) != 0) &&
       (*(longlong **)(param_1 + 0x6a0) != (longlong *)0x0)) {
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x6a0) + 0x50))();
      FUN_140c4a7e8(uVar1,*(undefined1 *)(param_1 + 0x6b0),1);
      *(undefined1 *)(param_1 + 0x6b0) = 0;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 145893f72 FUN_145893f72 body=60 status=ok
// SIG undefined FUN_145893f72(void)

undefined8 * FUN_145893f72(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  memset(param_1 + 8,0,0xb0);
  *param_1 = &PTR_FUN_14a6aa5f0;
  return param_1;
}



// FUNCTION 145893fae FUN_145893fae body=38 status=ok
// SIG undefined FUN_145893fae(void)

undefined8 FUN_145893fae(undefined8 param_1,int param_2)

{
  FUN_1412b7f2a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145893fd4 FUN_145893fd4 body=154 status=ok
// SIG undefined FUN_145893fd4(void)

bool FUN_145893fd4(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145894070 FUN_145894070 body=46 status=ok
// SIG undefined FUN_145894070(void)

void FUN_145894070(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_14589409e(param_2);
  if ((cVar1 == '\0') && (*(longlong *)(param_1 + 0x78) == 0)) {
    return;
  }
  FUN_14606f8b6(param_1);
  return;
}



// FUNCTION 14589409e FUN_14589409e body=93 status=ok
// SIG undefined FUN_14589409e(void)

undefined1 FUN_14589409e(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_1 != 0) {
    lVar2 = FUN_140ebc504();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) &&
       (lVar2 = *(longlong *)(param_1 + 0xa90), lVar2 != 0)) {
      uVar3 = FUN_140fe7bec();
      cVar1 = FUN_1448093f4(lVar2,uVar3);
      if (cVar1 != '\0') {
        return *(undefined1 *)(lVar2 + 0x500);
      }
    }
  }
  return 0;
}



// FUNCTION 1458940fc FUN_1458940fc body=101 status=ok
// SIG undefined FUN_1458940fc(void)

void FUN_1458940fc(void)

{
  if (DAT_14c9a3388 != 0) {
    FUN_1400020a8();
  }
  DAT_14c9a3380 = 0;
  if (DAT_14c9a3378 != 0) {
    FUN_1400020a8();
  }
  FUN_145894162();
  FUN_1412b7f97(DAT_14c9a3328,DAT_14c9a3330);
  if (DAT_14c9a3328 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145894162 FUN_145894162 body=54 status=ok
// SIG undefined FUN_145894162(void)

void FUN_145894162(void)

{
  FUN_145894198();
  if (DAT_14c9a3358 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c9a3338 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145894198 FUN_145894198 body=397 status=ok
// SIG undefined FUN_145894198(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145894198(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = 0x100000000;
  local_38 = &DAT_14c9a3348;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if (DAT_14c9a3360 != 0) {
    FUN_1449c0562(&local_40);
  }
  local_68 = &DAT_14c9a3338;
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  if (iStack_2c < *(int *)(local_38 + 0x18)) {
    do {
      lVar1 = *local_68;
      lVar2 = (longlong)iStack_4c * 0x20;
      FUN_1412b7fd3(*(undefined8 *)(lVar1 + 8 + lVar2),*(undefined4 *)(lVar1 + 0x10 + lVar2));
      if (*(longlong *)(lVar1 + 8 + lVar2) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < *(int *)(local_58 + 0x18));
  }
  DAT_14c9a3340 = 0;
  if (DAT_14c9a3344 != 0) {
    FUN_1446f4a44(&DAT_14c9a3338,0);
  }
  _DAT_14c9a3368 = 0xffffffff;
  DAT_14c9a3360 = 0;
  if (0x80 < DAT_14c9a3364) {
    DAT_14c9a3364 = 0x80;
    FUN_1446efbd8(&DAT_14c9a3348,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145894326 FUN_145894326 body=40 status=ok
// SIG undefined FUN_145894326(void)

undefined8 FUN_145894326(undefined8 param_1,int param_2)

{
  FUN_14589434e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14589434e FUN_14589434e body=120 status=ok
// SIG undefined FUN_14589434e(void)

void FUN_14589434e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b7d3700;
  param_1[0x761] = &PTR_FUN_14b7d3fe0;
  *(undefined4 *)(param_1 + 0x795) = 0;
  if (param_1[0x794] != 0) {
    FUN_1400020a8();
  }
  FUN_1458943c6(param_1 + 0x78c);
  if (param_1[0x78a] != 0) {
    FUN_1400020a8();
  }
  FUN_1458943fe(param_1 + 0x762);
  FUN_1458944b8(param_1);
  return;
}



// FUNCTION 1458943c6 FUN_1458943c6 body=55 status=ok
// SIG undefined FUN_1458943c6(void)

void FUN_1458943c6(longlong *param_1)

{
  FUN_14589443e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458943fe FUN_1458943fe body=64 status=ok
// SIG undefined FUN_1458943fe(void)

void FUN_1458943fe(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  if (*(longlong *)(param_1 + 0x38) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14589443e FUN_14589443e body=121 status=ok
// SIG undefined FUN_14589443e(void)

void FUN_14589443e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1458944b8 FUN_1458944b8 body=417 status=ok
// SIG undefined FUN_1458944b8(void)

void FUN_1458944b8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b3b1160;
  if (param_1[0x75e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x75b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x757] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x754) = 0;
  if (param_1[0x753] != 0) {
    FUN_1400020a8();
  }
  FUN_140478010(param_1 + 0x74b);
  plVar3 = (longlong *)param_1[0x74a];
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
  plVar3 = (longlong *)param_1[0x745];
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
  FUN_1412b8006(param_1[0x738],*(undefined4 *)(param_1 + 0x739));
  if (param_1[0x738] != 0) {
    FUN_1400020a8();
  }
  FUN_1412b8054(param_1 + 0x5e0);
  FUN_144760e21(param_1[0x5d9],*(undefined4 *)(param_1 + 0x5da));
  if (param_1[0x5d9] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x5d6],*(undefined4 *)(param_1 + 0x5d7));
  if (param_1[0x5d6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x5d3],*(undefined4 *)(param_1 + 0x5d4));
  if (param_1[0x5d3] != 0) {
    FUN_1400020a8();
  }
  FUN_14589465a(param_1);
  return;
}



// FUNCTION 14589465a FUN_14589465a body=300 status=ok
// SIG undefined FUN_14589465a(void)

void FUN_14589465a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a7089b0;
  if (param_1[0x5c7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5c5] != 0) {
    FUN_1400020a8();
  }
  FUN_1400e59f7(param_1[0x5c3],*(undefined4 *)(param_1 + 0x5c4));
  if (param_1[0x5c3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5c0] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5bb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5b2] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5b0] != 0) {
    FUN_1400020a8();
  }
  FUN_1412b8054(param_1 + 0x46a);
  FUN_1412b8054(param_1 + 0x322);
  FUN_144760e21(param_1[0x31d],*(undefined4 *)(param_1 + 0x31e));
  if (param_1[0x31d] != 0) {
    FUN_1400020a8();
  }
  FUN_1412b8054(param_1 + 0x1d2);
  FUN_1412b8054(param_1 + 0x88);
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 145894786 FUN_145894786 body=1 status=ok
// SIG undefined FUN_145894786(void)

void FUN_145894786(void)

{
  return;
}



// FUNCTION 145894788 CoUninitialize body=7 status=ok
// SIG void CoUninitialize(void)

void __stdcall CoUninitialize(void)

{
                    /* WARNING: Could not recover jumptable at 0x000145894788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CoUninitialize();
  return;
}



// FUNCTION 1458947a0 FUN_1458947a0 body=41 status=ok
// SIG undefined FUN_1458947a0(void)

void FUN_1458947a0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  FUN_1446e7478(param_2,param_1,uVar1,0);
  return;
}



// FUNCTION 1458947da FUN_1458947da body=41 status=ok
// SIG undefined FUN_1458947da(void)

void FUN_1458947da(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  FUN_1446e7478(param_2,param_1,uVar1,0);
  return;
}



// FUNCTION 145894814 FUN_145894814 body=41 status=ok
// SIG undefined FUN_145894814(void)

void FUN_145894814(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  FUN_1446e7478(param_2,param_1,uVar1,1);
  return;
}



// FUNCTION 14589483e FUN_14589483e body=135 status=ok
// SIG undefined FUN_14589483e(void)

void FUN_14589483e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  bool bVar8;
  
  FUN_1458948c6(param_1 + 0x298);
  plVar3 = *(longlong **)(param_1 + 0x290);
  if (plVar3 != (longlong *)0x0) {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) {
        return;
      }
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar7 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x288);
    if (((lVar4 != 0) && (cVar6 = FUN_14287c1c6(lVar4), cVar6 != '\0')) &&
       (*(longlong **)(lVar4 + 0x510) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)(lVar4 + 0x510) + 0x58))();
    }
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
                    /* WARNING: Could not recover jumptable at 0x0001458948c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1458948c6 FUN_1458948c6 body=391 status=ok
// SIG undefined FUN_1458948c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1458948c6(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  if (((param_1[4] != 0) && (plVar3 = (longlong *)param_1[5], plVar3 != (longlong *)0x0)) &&
     (0 < (int)plVar3[1])) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        (**(code **)(_DAT_00000000 + 0x1b8))(0);
        goto LAB_1458948db;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    (**(code **)(*(longlong *)param_1[4] + 0x1b8))();
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
LAB_1458948db:
  if (((*param_1 != 0) && (plVar3 = (longlong *)param_1[1], plVar3 != (longlong *)0x0)) &&
     (0 < (int)plVar3[1])) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        (**(code **)(_DAT_00000000 + 0x38))(0);
        goto LAB_1458948e5;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    (**(code **)(*(longlong *)*param_1 + 0x38))();
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
LAB_1458948e5:
  plVar3 = (longlong *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[5];
  param_1[4] = 0;
  param_1[5] = 0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[3];
  param_1[2] = 0;
  param_1[3] = 0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  *(undefined1 *)(param_1 + 9) = 0;
  return;
}



// FUNCTION 145894a4e FUN_145894a4e body=184 status=ok
// SIG undefined FUN_145894a4e(void)

void FUN_145894a4e(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68 [24];
  undefined1 local_50 [56];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  puVar1 = local_68;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145894b08(local_50,puVar1);
  FUN_1403719a4(param_3,local_50);
  FUN_144a2da94(local_50);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145894b08 FUN_145894b08 body=53 status=ok
// SIG undefined FUN_145894b08(void)

void FUN_145894b08(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_1[3] = param_2[2];
  uVar1 = param_2[1];
  param_1[1] = *param_2;
  param_1[2] = uVar1;
  *param_1 = 0;
  *(undefined2 *)(param_1 + 4) = 0x18;
  *(undefined1 *)(param_1 + 5) = 4;
  *(byte *)(param_1 + 6) = (byte)~DAT_14c9a8994 >> 3 & 4;
  return;
}



// FUNCTION 145894b3e FUN_145894b3e body=76 status=ok
// SIG undefined FUN_145894b3e(void)

undefined8 FUN_145894b3e(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_145894b8a(param_2);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x000145894b7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 145894b8a FUN_145894b8a body=191 status=ok
// SIG undefined FUN_145894b8a(void)

longlong FUN_145894b8a(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined *puVar7;
  
  FUN_145894c4a();
  lVar3 = *param_1;
  if (DAT_14cb759d0 != DAT_14cb759fc) {
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    puVar7 = &DAT_14cb75a00;
    if (DAT_14cb75a08 != (undefined *)0x0) {
      puVar7 = DAT_14cb75a08;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14cb75a10 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14cb759c8 + (longlong)iVar2 * 0x18);
      if (*plVar1 == lVar3) {
        if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
          return plVar1[1];
        }
        break;
      }
      iVar2 = (int)plVar1[2];
    }
  }
  lVar5 = DAT_14cb759c0;
  if (lVar3 != 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 145894c4a FUN_145894c4a body=152 status=ok
// SIG undefined FUN_145894c4a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145894c4a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb75a18) {
    FUN_144b3d300(&DAT_14cb75a18);
    if (DAT_14cb75a18 == -1) {
      DAT_14cb759e8 = 0;
      DAT_14cb759f0 = 0;
      DAT_14cb759c8 = 0;
      _DAT_14cb759d0 = 0;
      _DAT_14cb759f4 = 0xffffffff00000080;
      DAT_14cb759fc = 0;
      DAT_14cb75a08 = 0;
      DAT_14cb75a10 = 0;
      atexit(FUN_143cd94bb);
      _Init_thread_footer(&DAT_14cb75a18);
      return;
    }
  }
  return;
}



// FUNCTION 145894ce8 FUN_145894ce8 body=57 status=ok
// SIG undefined FUN_145894ce8(void)

void FUN_145894ce8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb235c0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb235c0 = FUN_140002ddd(FUN_14643e261,uVar1,L"GpsTest_NavTrace");
  }
  return;
}



// FUNCTION 145894d22 FUN_145894d22 body=40 status=ok
// SIG undefined FUN_145894d22(void)

undefined8 FUN_145894d22(undefined8 param_1,int param_2)

{
  FUN_145894d4a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145894d4a FUN_145894d4a body=207 status=ok
// SIG undefined FUN_145894d4a(void)

void FUN_145894d4a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a91d830;
  *(undefined4 *)(param_1 + 0x8f) = 0;
  if (param_1[0x8e] != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(param_1 + 0x86);
  if (param_1[0x84] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x82] != 0) {
    FUN_1400020a8();
  }
  FUN_145894e19(param_1[0x7e],*(undefined4 *)(param_1 + 0x7f));
  if (param_1[0x7e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x78] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x75] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 145894e19 FUN_145894e19 body=49 status=ok
// SIG undefined FUN_145894e19(void)

void FUN_145894e19(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x38);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145894e4a FUN_145894e4a body=43 status=ok
// SIG undefined FUN_145894e4a(void)

undefined8 FUN_145894e4a(undefined8 param_1,int param_2)

{
  FUN_1412b94b8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x970);
  }
  return param_1;
}



// FUNCTION 145894e7a FUN_145894e7a body=228 status=ok
// SIG undefined FUN_145894e7a(void)

longlong FUN_145894e7a(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb61d68 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_141117124;
    local_38 = &LAB_1486dfaac;
    local_40 = &LAB_145d25ba8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 1000;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerGroup",&DAT_14cb61d68,FUN_1464f58f0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb61d68;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145894f5f FUN_145894f5f body=46 status=ok
// SIG undefined FUN_145894f5f(void)

void FUN_145894f5f(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145894f8e(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a4ee010;
  puVar1[10] = &PTR_FUN_14a4ee2f0;
  return;
}



// FUNCTION 145894f8e FUN_145894f8e body=88 status=ok
// SIG undefined FUN_145894f8e(void)

undefined8 * FUN_145894f8e(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 7) = 1;
  *param_1 = &PTR_FUN_14a5d6290;
  param_1[10] = &PTR_FUN_14a5d6570;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  return param_1;
}



// FUNCTION 145894fe6 FUN_145894fe6 body=78 status=ok
// SIG undefined FUN_145894fe6(void)

void FUN_145894fe6(longlong *param_1)

{
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145895034 FUN_145895034 body=283 status=ok
// SIG undefined FUN_145895034(void)

void FUN_145895034(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  
  if ((*(longlong *)(param_1 + 0xd8) != 0) &&
     (uVar8 = FUN_144a750a0(param_2,param_1 + 0xd8), uVar8 != 0xffffffff)) {
    uVar11 = (ulonglong)uVar8;
    lVar13 = (longlong)(int)uVar8;
    if (*(char *)(param_3[4] + lVar13) == '\0') {
      FUN_1458955a6(param_3,uVar8);
    }
    puVar1 = (undefined4 *)(*param_3 + 0x20 + lVar13 * 0x60);
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    uVar3 = *(undefined8 *)(*param_3 + 0x30 + lVar13 * 0x60);
    *(undefined4 *)(param_1 + 0x458) = *puVar1;
    *(undefined4 *)(param_1 + 0x45c) = uVar4;
    *(undefined4 *)(param_1 + 0x460) = uVar5;
    *(undefined4 *)(param_1 + 0x464) = uVar6;
    *(undefined8 *)(param_1 + 0x468) = uVar3;
    uVar8 = (uint)*(byte *)(param_1 + 0xfc);
    if (*(byte *)(param_1 + 0xfc) == 0) {
      lVar9 = *(longlong *)(param_2 + 0x20);
    }
    else {
      lVar9 = *(longlong *)(param_2 + 0x20);
      uVar10 = uVar11;
      do {
        uVar11 = 0xffffffff;
        iVar12 = (int)uVar10;
        if (((iVar12 != -1) && (-1 < iVar12)) && (iVar12 < *(int *)(param_2 + 0x28))) {
          uVar11 = (ulonglong)*(uint *)(lVar9 + 8 + uVar10 * 0xc);
        }
        uVar8 = uVar8 - 1;
        uVar10 = uVar11;
      } while (uVar8 != 0);
      if ((int)uVar11 == -1) {
        return;
      }
      lVar13 = (longlong)(int)uVar11;
    }
    *(undefined8 *)(param_1 + 0x450) = *(undefined8 *)(lVar9 + lVar13 * 0xc);
    if (*(char *)(param_3[4] + lVar13) == '\0') {
      FUN_1458955a6(param_3,uVar11);
    }
    puVar2 = (undefined8 *)(*param_3 + 0x20 + lVar13 * 0x60);
    uVar7 = puVar2[1];
    uVar3 = *(undefined8 *)(*param_3 + 0x30 + lVar13 * 0x60);
    *(undefined8 *)(param_1 + 0x470) = *puVar2;
    *(undefined8 *)(param_1 + 0x478) = uVar7;
    *(undefined8 *)(param_1 + 0x480) = uVar3;
  }
  return;
}



// FUNCTION 145895150 FUN_145895150 body=147 status=ok
// SIG undefined FUN_145895150(void)

void FUN_145895150(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  FUN_144756208();
  uVar4 = *(uint *)(param_1 + 8);
  if (-1 < (int)uVar4) {
    plVar1 = (longlong *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = 0;
    if (*(uint *)(param_1 + 0x2c) == uVar4) {
      iVar3 = 0;
      uVar2 = uVar4;
    }
    else {
      FUN_144893a1c(plVar1);
      uVar4 = *(uint *)(param_1 + 8);
      iVar3 = *(int *)(param_1 + 0x28);
      uVar2 = *(uint *)(param_1 + 0x2c);
    }
    *(uint *)(param_1 + 0x28) = uVar4 + iVar3;
    if (uVar2 - iVar3 < uVar4) {
      FUN_1447403be(plVar1);
    }
    memset((void *)((longlong)iVar3 + *plVar1),0,(longlong)(int)uVar4);
    *(undefined1 *)*plVar1 = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar4);
}



// FUNCTION 1458951e4 FUN_1458951e4 body=207 status=ok
// SIG undefined FUN_1458951e4(void)

void FUN_1458951e4(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  longlong *local_50;
  undefined8 *local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((longlong)(int)param_2[1] != 0) {
    lVar2 = (longlong)(int)param_2[1] * 0x4d0;
    plVar1 = (longlong *)(*param_2 + 0x450);
    do {
      if (plVar1[-0x6f] != 0) {
        local_50 = plVar1 + -0x6f;
        local_48 = &DAT_14caddeb0;
        FUN_1458952b4(param_1,local_3c,&local_50,0);
      }
      if (*plVar1 != 0) {
        local_48 = &DAT_14caddeb0;
        local_50 = plVar1;
        FUN_1458952b4(param_1,local_3c,&local_50,0);
      }
      plVar1 = plVar1 + 0x9a;
      lVar2 = lVar2 + -0x4d0;
    } while (lVar2 != 0);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458952b4 FUN_1458952b4 body=360 status=ok
// SIG undefined FUN_1458952b4(void)

undefined4 *
FUN_1458952b4(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1458954be(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = uVar3;
  *(undefined4 *)(local_40 + 2) = uVar4;
  *(undefined4 *)((longlong)local_40 + 0x14) = uVar5;
  local_40[3] = *(undefined8 *)(puVar1 + 4);
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_4c = local_48[0];
  uVar11 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar8 = (uint)uVar2 & 0xffff;
  uVar11 = ((uint)uVar2 << 0x10 | uVar8) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar8 >> 4);
  local_58 = param_4;
  cVar6 = FUN_14589541e(param_1,uVar11,local_40);
  if (cVar6 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar8) {
      uVar7 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar11 = *(int *)(param_1 + 0x48) - 1U & uVar11;
      *(uint *)((longlong)local_40 + 0x24) = uVar11;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_1412ba4e4(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14589541e FUN_14589541e body=160 status=ok
// SIG undefined FUN_14589541e(void)

void FUN_14589541e(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 uVar8;
  longlong *plVar9;
  int iVar10;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar9 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[8];
    }
    iVar10 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar10 != -1) {
      do {
        plVar9 = (longlong *)(*param_1 + (longlong)iVar10 * 0x28);
        if (*plVar9 == *param_3) {
          lVar5 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar6 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          uVar3 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar7 = param_3[3];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x1c);
          *(int *)(plVar9 + 2) = (int)param_3[2];
          *(undefined4 *)((longlong)plVar9 + 0x14) = uVar3;
          *(int *)(plVar9 + 3) = (int)lVar7;
          *(undefined4 *)((longlong)plVar9 + 0x1c) = uVar4;
          *(int *)plVar9 = (int)lVar5;
          *(undefined4 *)((longlong)plVar9 + 4) = uVar1;
          *(int *)(plVar9 + 1) = (int)lVar6;
          *(undefined4 *)((longlong)plVar9 + 0xc) = uVar2;
          FUN_1487d7d1a((int)lVar5,*param_4,1);
          *param_4 = iVar10;
          uVar8 = 1;
          goto LAB_145895488;
        }
        iVar10 = (int)plVar9[4];
      } while (iVar10 != -1);
    }
  }
  uVar8 = 0;
LAB_145895488:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar8;
  }
  return;
}



// FUNCTION 1458954be FUN_1458954be body=231 status=ok
// SIG undefined FUN_1458954be(void)

int * FUN_1458954be(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_140549c28(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x28) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 1458955a6 FUN_1458955a6 body=4144 status=ok
// SIG undefined FUN_1458955a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1458955a6(longlong *param_1,int param_2)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  char cVar11;
  int iVar12;
  double *pdVar13;
  double *pdVar14;
  int iVar15;
  longlong lVar16;
  undefined4 uVar17;
  uint uVar18;
  longlong lVar19;
  wchar_t *pwVar20;
  ulonglong uVar21;
  longlong lVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  double dVar29;
  undefined1 auVar31 [16];
  double dVar36;
  undefined1 auVar32 [16];
  double dVar30;
  double dVar37;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar38;
  double dVar39;
  double dVar42;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar43;
  undefined1 auVar44 [16];
  undefined1 auStack_428 [40];
  wchar_t *local_400;
  undefined1 local_3f8 [16];
  double *local_3e8;
  double *local_3e0;
  undefined1 local_3d8 [16];
  double *local_3c8;
  double *local_3c0;
  undefined1 local_3b8 [16];
  double *local_3a8;
  double *local_3a0;
  undefined1 local_398 [16];
  double *local_388;
  double *local_380;
  undefined1 local_378 [16];
  double *local_368;
  double *local_360;
  undefined1 local_358 [16];
  double *local_348;
  double *local_340;
  double *local_338;
  undefined1 *local_330;
  double local_328 [2];
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  double local_2f8;
  double dStack_2f0;
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  int local_2bc;
  undefined1 local_2b8 [16];
  int local_29c;
  double local_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188 [4];
  double local_168 [10];
  undefined1 local_118 [16];
  double local_108;
  undefined1 local_f8 [8];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_428;
  local_2b8 = ZEXT816(0);
  iVar12 = (int)param_1[5];
  local_29c = param_2;
  if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar12);
  }
  if (iVar12 == 0) {
    uVar18 = 0;
    iVar12 = 0;
  }
  else {
    FUN_14589663c(local_2b8);
    iVar12 = local_2b8._8_4_;
    uVar18 = local_2b8._12_4_;
  }
  local_2b8._8_4_ = iVar12 + 1U;
  if (uVar18 < iVar12 + 1U) {
    FUN_1487d7954(local_2b8,iVar12);
  }
  *(int *)(local_2b8._0_8_ + (longlong)iVar12 * 4) = param_2;
  do {
    uVar17 = (int)&local_29c;
    FUN_1458965d8(param_1,&local_2bc);
    iVar12 = local_2bc;
    auVar34 = _DAT_149934d80;
    if (*(char *)(param_1[4] + (longlong)local_2bc) == '\0') {
      uVar17 = local_2b8._8_4_;
      lVar22 = (longlong)(int)local_2b8._8_4_;
      uVar18 = local_2b8._8_4_ + 1;
      local_2b8._8_4_ = uVar18;
      if ((uint)local_2b8._12_4_ < uVar18) {
        FUN_1487d7954(local_2b8,uVar17);
      }
      *(int *)(local_2b8._0_8_ + lVar22 * 4) = param_2;
      local_29c = iVar12;
      iVar12 = local_2b8._8_4_;
    }
    else {
      lVar22 = *param_1;
      lVar16 = (longlong)param_2 * 0x60;
      pdVar13 = (double *)(lVar22 + lVar16);
      lVar19 = (longlong)local_2bc * 0x60;
      pdVar14 = (double *)(lVar22 + lVar19);
      local_2f8 = 0.0;
      dStack_2f0 = 0.0;
      local_308 = ZEXT816(0);
      local_2d8 = ZEXT816(0x3ff0000000000000);
      auVar26 = *(undefined1 (*) [16])(lVar22 + 0x40 + lVar19);
      dVar2 = auVar26._0_8_;
      dVar4 = auVar26._8_8_;
      auVar44 = *(undefined1 (*) [16])(lVar22 + 0x50 + lVar19);
      dVar3 = auVar44._0_8_;
      auVar1 = *(undefined1 (*) [16])(lVar22 + 0x40 + lVar16);
      auVar32 = *(undefined1 (*) [16])(lVar22 + 0x50 + lVar16);
      auVar26 = minpd(auVar1,auVar26);
      auVar31 = minpd(auVar32,auVar44);
      auVar27._8_8_ = -(ulonglong)(auVar26._8_8_ < 0.0);
      auVar27._0_8_ = -(ulonglong)(auVar26._0_8_ < 0.0);
      iVar15 = movmskpd((int)lVar22,auVar27);
      auVar26._8_8_ = -(ulonglong)(auVar31._8_8_ < 0.0);
      auVar26._0_8_ = -(ulonglong)(auVar31._0_8_ < 0.0);
      uVar18 = movmskpd(uVar17,auVar26);
      if ((uVar18 & 0x3fffffff) == 0 && iVar15 == 0) {
        dVar29 = *pdVar13;
        dVar42 = pdVar13[1];
        dVar36 = pdVar13[2];
        dVar38 = pdVar13[3];
        dVar7 = *pdVar14;
        dVar8 = pdVar14[1];
        dVar9 = pdVar14[2];
        dVar10 = pdVar14[3];
        dVar25 = pdVar14[3];
        dVar30 = pdVar14[3];
        dVar37 = pdVar14[1];
        dVar28 = pdVar14[1];
        dVar39 = pdVar14[2];
        dVar43 = pdVar14[2];
        local_328[0] = dVar42 * dVar39 * -1.0 +
                       dVar36 * dVar37 + dVar38 * *pdVar14 * 1.0 + dVar29 * dVar25;
        local_328[1] = dVar29 * dVar43 * 1.0 +
                       dVar38 * dVar28 + dVar36 * *pdVar14 * -1.0 + dVar42 * dVar30;
        local_318._0_8_ =
             dVar38 * dVar39 * 1.0 + ((*pdVar14 * dVar42 * 1.0 + dVar36 * dVar25) - dVar29 * dVar37)
        ;
        local_318._8_8_ =
             dVar36 * dVar43 * -1.0 +
             ((*pdVar14 * dVar29 * -1.0 + dVar38 * dVar30) - dVar42 * dVar28);
        dVar37 = pdVar13[4] * dVar2;
        dVar28 = pdVar13[5] * dVar4;
        dVar39 = pdVar13[6] * dVar3;
        dVar43 = pdVar13[7] * auVar44._8_8_;
        dVar29 = dVar28 * dVar7 - dVar8 * dVar37;
        dVar36 = dVar39 * dVar8 - dVar9 * dVar28;
        dVar38 = dVar37 * dVar9 - dVar7 * dVar39;
        dVar42 = dVar43 * dVar10 - dVar10 * dVar43;
        dVar36 = dVar36 + dVar36;
        dVar38 = dVar38 + dVar38;
        dVar29 = dVar29 + dVar29;
        dVar42 = dVar42 + dVar42;
        local_308._0_8_ = (dVar29 * dVar8 - dVar9 * dVar38) + dVar25 * dVar36 + dVar37 + pdVar14[4];
        local_308._8_8_ = (dVar36 * dVar9 - dVar29 * dVar7) + dVar30 * dVar38 + dVar28 + pdVar14[5];
        dStack_2f0 = (dVar42 * dVar10 - dVar42 * dVar10) + dVar30 * dVar42 + dVar43 + pdVar14[7];
        local_2f8 = (dVar38 * dVar7 - dVar8 * dVar36) + dVar25 * dVar29 + dVar39 + pdVar14[6];
      }
      else {
        dVar30 = *pdVar14;
        dVar37 = pdVar14[1];
        dVar25 = pdVar14[2];
        dVar28 = dVar37 + dVar37;
        dVar39 = dVar25 + dVar25;
        dVar43 = dVar30 * (dVar30 + dVar30);
        local_1f8 = ((double)DAT_149934d80 - (dVar25 * dVar39 + dVar37 * dVar28)) * dVar2;
        dStack_1d0 = (DAT_149934d80._8_8_ - (dVar25 * dVar39 + dVar43)) * dVar4;
        local_1a8 = (1.0 - (dVar43 + dVar37 * dVar28)) * dVar3;
        dVar25 = pdVar14[3];
        dVar43 = dVar39 * dVar25;
        dVar29 = (dVar30 + dVar30) * pdVar14[3];
        dVar25 = dVar28 * dVar25;
        dStack_1f0 = (dVar28 * dVar30 + dVar43) * dVar2;
        local_1c8 = (dVar39 * dVar37 + dVar29) * dVar4;
        local_1b8 = (dVar25 + *pdVar14 * dVar39) * dVar3;
        local_1d8 = (dVar28 * dVar30 - dVar43) * dVar4;
        dStack_1b0 = (dVar39 * dVar37 - dVar29) * dVar3;
        local_1e8 = (*pdVar14 * dVar39 - dVar25) * dVar2;
        uStack_1e0 = 0;
        uStack_1c0 = 0;
        uStack_1a0 = 0;
        local_198 = pdVar14[4];
        dStack_190 = pdVar14[5];
        local_188[0] = pdVar14[6];
        local_188[1] = 1.0;
        dVar30 = *pdVar13;
        dVar37 = pdVar13[1];
        dVar28 = pdVar13[2];
        local_268 = pdVar13[8];
        local_258 = pdVar13[9];
        dStack_230 = pdVar13[10];
        dVar29 = dVar37 + dVar37;
        dVar39 = dVar28 + dVar28;
        dVar25 = dVar30 * (dVar30 + dVar30);
        local_278 = ((double)DAT_149934d80 - (dVar28 * dVar39 + dVar37 * dVar29)) * local_268;
        dStack_250 = (DAT_149934d80._8_8_ - (dVar28 * dVar39 + dVar25)) * local_258;
        local_228 = (1.0 - (dVar25 + dVar37 * dVar29)) * dStack_230;
        dVar25 = pdVar13[3];
        dVar28 = dVar39 * dVar25;
        dVar43 = (dVar30 + dVar30) * pdVar13[3];
        dVar25 = dVar29 * dVar25;
        dStack_270 = (dVar29 * dVar30 + dVar28) * local_268;
        local_248 = (dVar39 * dVar37 + dVar43) * local_258;
        local_238 = (dVar25 + *pdVar13 * dVar39) * dStack_230;
        local_268 = (*pdVar13 * dVar39 - dVar25) * local_268;
        local_258 = (dVar29 * dVar30 - dVar28) * local_258;
        dStack_230 = (dVar39 * dVar37 - dVar43) * dStack_230;
        uStack_260 = 0;
        uStack_240 = 0;
        uStack_220 = 0;
        local_218 = pdVar13[4];
        dStack_210 = pdVar13[5];
        local_208 = pdVar13[6];
        uStack_200 = 0x3ff0000000000000;
        FUN_1447fea8d(local_188 + 2);
        FUN_144a1c686(local_188 + 2,0x3e45798ee0000000);
        auVar31._8_8_ = -(ulonglong)(0.0 <= auVar1._8_8_ * dVar4);
        auVar31._0_8_ = -(ulonglong)(0.0 <= auVar1._0_8_ * dVar2);
        auVar26 = blendvpd(_DAT_149936790,auVar34,auVar31);
        uVar21 = -(ulonglong)(0.0 <= auVar32._0_8_ * dVar3);
        dVar25 = (double)(~uVar21 & 0xbff0000000000000 | uVar21 & 0x3ff0000000000000);
        dVar30 = auVar26._0_8_;
        local_168[0] = local_168[0] * dVar30;
        local_188[3] = local_188[3] * dVar30;
        local_188[2] = local_188[2] * dVar30;
        dVar30 = auVar26._8_8_;
        local_168[4] = local_168[4] * dVar30;
        local_168[3] = local_168[3] * dVar30;
        local_168[2] = dVar30 * local_168[2];
        local_168[8] = local_168[8] * dVar25;
        local_168[7] = local_168[7] * dVar25;
        local_168[6] = dVar25 * local_168[6];
        pdVar14 = &local_298;
        FUN_14481fd10();
        dVar25 = (double)CONCAT44(uStack_28c,uStack_290);
        dVar30 = local_288 * local_288 + local_298 * local_298;
        dVar37 = dStack_280 * dStack_280 + dVar25 * dVar25;
        auVar35._0_8_ = dVar30 + dVar37;
        auVar35._8_8_ = dVar30 + dVar37;
        auVar24._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar35._8_8_);
        auVar24._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar35._0_8_);
        auVar26 = sqrtpd(auVar35,auVar35);
        auVar34 = divpd(auVar34,auVar26);
        auVar41._0_8_ = auVar34._0_8_ * local_288;
        auVar41._8_8_ = auVar34._8_8_ * dStack_280;
        local_328[0] = (double)((ulonglong)(local_298 * auVar34._0_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar35._0_8_));
        local_328[1] = (double)((ulonglong)(dVar25 * auVar34._8_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar35._8_8_));
        local_318 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar41,auVar24);
        pdVar13 = local_188 + 2;
        dStack_2f0 = 0.0;
        local_308 = local_118;
        local_2f8 = local_108;
      }
      dVar3 = auVar32._0_8_ * dVar3;
      dVar25 = auVar32._8_8_ * auVar44._8_8_;
      dVar4 = auVar1._8_8_ * dVar4;
      dVar2 = auVar1._0_8_ * dVar2;
      local_2e8._8_4_ = SUB84(dVar4,0);
      local_2e8._0_8_ = dVar2;
      local_2e8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      local_2d8._8_4_ = SUB84(dVar25,0);
      local_2d8._0_8_ = dVar3;
      local_2d8._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
      auVar34._8_8_ =
           -(ulonglong)((double)((ulonglong)local_328[1] & 0x7ff0000000000000) == INFINITY);
      auVar34._0_8_ =
           -(ulonglong)((double)((ulonglong)local_328[0] & 0x7ff0000000000000) == INFINITY);
      iVar15 = movmskpd((int)pdVar13,auVar34);
      auVar44._8_8_ = -(ulonglong)((double)(local_318._8_8_ & 0x7ff0000000000000) == INFINITY);
      auVar44._0_8_ = -(ulonglong)((double)(local_318._0_8_ & 0x7ff0000000000000) == INFINITY);
      uVar18 = movmskpd((int)pdVar14,auVar44);
      if ((uVar18 & 0x3fffffff) == 0 && iVar15 == 0) {
        auVar32._8_8_ = -(ulonglong)((double)(local_308._8_8_ & 0x7ff0000000000000) == INFINITY);
        auVar32._0_8_ = -(ulonglong)((double)(local_308._0_8_ & 0x7ff0000000000000) == INFINITY);
        iVar15 = movmskpd(iVar15,auVar32);
        auVar1._8_8_ = -(ulonglong)
                        ((double)((ulonglong)dStack_2f0 & 0x7ff0000000000000) == INFINITY);
        auVar1._0_8_ = -(ulonglong)((double)((ulonglong)local_2f8 & 0x7ff0000000000000) == INFINITY)
        ;
        uVar18 = movmskpd(0,auVar1);
        if ((uVar18 & 0x3fffffff) != 0 || iVar15 != 0) goto LAB_145895b45;
        lVar22 = -(ulonglong)((double)((ulonglong)dVar4 & 0x7ff0000000000000) == INFINITY);
        auVar5._8_4_ = (int)lVar22;
        auVar5._0_8_ = -(ulonglong)((double)((ulonglong)dVar2 & 0x7ff0000000000000) == INFINITY);
        auVar5._12_4_ = (int)((ulonglong)lVar22 >> 0x20);
        iVar15 = movmskpd(iVar15,auVar5);
        lVar22 = -(ulonglong)((double)((ulonglong)dVar25 & 0x7ff0000000000000) == INFINITY);
        auVar6._8_4_ = (int)lVar22;
        auVar6._0_8_ = -(ulonglong)((double)((ulonglong)dVar3 & 0x7ff0000000000000) == INFINITY);
        auVar6._12_4_ = (int)((ulonglong)lVar22 >> 0x20);
        uVar18 = movmskpd(0,auVar6);
        if ((uVar18 & 0x3fffffff) != 0 || iVar15 != 0) goto LAB_145895b45;
        lVar16 = (longlong)local_29c;
      }
      else {
LAB_145895b45:
        cVar11 = FUN_144a78e48(*param_1 + lVar16);
        local_400 = L"false";
        if (cVar11 != '\0') {
          local_400 = L"true";
        }
        cVar11 = FUN_144a78e48(lVar19 + *param_1);
        pwVar20 = L"false";
        if (cVar11 != '\0') {
          pwVar20 = L"true";
        }
        FUN_140056680(&local_1f8,L"NaN created in during FTransform Multiplication\n");
        FUN_142787b30(local_188 + 2,param_2);
        FUN_142787b30(local_168 + 2,iVar12);
        FUN_140230a18(local_168 + 6,local_400);
        FUN_140230a18(local_118,pwVar20);
        local_338 = local_188 + 2;
        local_330 = local_f8;
        FUN_1407adb6e(&local_298);
        FUN_140230a2e(&local_278,
                      L"\tBoneIndex {0} : ParentBoneIndex {1} BoneTransformNaN={2} : ParentTransformNaN={3}\n"
                      ,&local_298);
        iVar12 = dStack_270._0_4_ + -1;
        if (dStack_270._0_4_ == 0) {
          iVar12 = 0;
        }
        FUN_1400020e8(&local_1f8,local_278,iVar12);
        if (local_278 != 0.0) {
          FUN_1400020a8();
        }
        FUN_1407adb3e(local_298,uStack_290);
        if (local_298 != 0.0) {
          FUN_1400020a8();
        }
        lVar22 = 0x80;
        do {
          if (*(longlong *)((longlong)local_188 + lVar22) != 0) {
            FUN_1400020a8();
          }
          lVar22 = lVar22 + -0x20;
        } while (lVar22 != 0);
        FUN_1467f64aa(lVar16 + *param_1,local_358);
        FUN_14146ec20(local_188 + 2,local_358);
        local_340 = local_168 + 2;
        local_348 = local_188 + 2;
        FUN_1407adb6e(&local_298);
        FUN_140230a2e(&local_278,L"\tBone {0}\n",&local_298);
        iVar12 = dStack_270._0_4_ + -1;
        if (dStack_270._0_4_ == 0) {
          iVar12 = 0;
        }
        FUN_1400020e8(&local_1f8,local_278,iVar12);
        if (local_278 != 0.0) {
          FUN_1400020a8();
        }
        FUN_1407adb3e(local_298,uStack_290);
        if (local_298 != 0.0) {
          FUN_1400020a8();
        }
        if (local_168[0] != 0.0) {
          FUN_1400020a8();
        }
        lVar22 = (longlong)local_2bc;
        FUN_1467f64aa(*param_1 + lVar22 * 0x60,local_378);
        FUN_14146ec20(local_188 + 2,local_378);
        local_360 = local_168 + 2;
        local_368 = local_188 + 2;
        FUN_1407adb6e(&local_298);
        FUN_140230a2e(&local_278,L"\tParent {0}\n",&local_298);
        iVar12 = dStack_270._0_4_ + -1;
        if (dStack_270._0_4_ == 0) {
          iVar12 = 0;
        }
        FUN_1400020e8(&local_1f8,local_278,iVar12);
        if (local_278 != 0.0) {
          FUN_1400020a8();
        }
        FUN_1407adb3e(local_298,uStack_290);
        if (local_298 != 0.0) {
          FUN_1400020a8();
        }
        if (local_168[0] != 0.0) {
          FUN_1400020a8();
        }
        FUN_1467f64aa(local_328,local_398);
        FUN_14146ec20(local_188 + 2,local_398);
        local_380 = local_168 + 2;
        local_388 = local_188 + 2;
        FUN_1407adb6e(&local_298);
        FUN_140230a2e(&local_278,L"\tResult {0}\n",&local_298);
        iVar12 = dStack_270._0_4_ + -1;
        if (dStack_270._0_4_ == 0) {
          iVar12 = 0;
        }
        FUN_1400020e8(&local_1f8,local_278,iVar12);
        if (local_278 != 0.0) {
          FUN_1400020a8();
        }
        FUN_1407adb3e(local_298,uStack_290);
        if (local_298 != 0.0) {
          FUN_1400020a8();
        }
        if (local_168[0] != 0.0) {
          FUN_1400020a8();
        }
        lVar16 = (longlong)local_29c;
        FUN_1468028f2(local_3b8,lVar16 * 0x60 + *param_1,0x60,0);
        FUN_14146ec20(local_188 + 2,local_3b8);
        local_3a0 = local_168 + 2;
        local_3a8 = local_188 + 2;
        FUN_1407adb6e(&local_298);
        FUN_140230a2e(&local_278,L"\tBone B64 {0}\n",&local_298);
        iVar12 = dStack_270._0_4_ + -1;
        if (dStack_270._0_4_ == 0) {
          iVar12 = 0;
        }
        FUN_1400020e8(&local_1f8,local_278,iVar12);
        if (local_278 != 0.0) {
          FUN_1400020a8();
        }
        FUN_1407adb3e(local_298,uStack_290);
        if (local_298 != 0.0) {
          FUN_1400020a8();
        }
        if (local_168[0] != 0.0) {
          FUN_1400020a8();
        }
        FUN_1468028f2(local_3d8,lVar22 * 0x60 + *param_1,0x60,0);
        FUN_14146ec20(local_188 + 2,local_3d8);
        local_3c0 = local_168 + 2;
        local_3c8 = local_188 + 2;
        FUN_1407adb6e(&local_298);
        FUN_140230a2e(&local_278,L"\tParent B64 {0}\n",&local_298);
        iVar12 = dStack_270._0_4_ + -1;
        if (dStack_270._0_4_ == 0) {
          iVar12 = 0;
        }
        FUN_1400020e8(&local_1f8,local_278,iVar12);
        if (local_278 != 0.0) {
          FUN_1400020a8();
        }
        FUN_1407adb3e(local_298,uStack_290);
        if (local_298 != 0.0) {
          FUN_1400020a8();
        }
        if (local_168[0] != 0.0) {
          FUN_1400020a8();
        }
        FUN_1468028f2(local_3f8,local_328,0x60,0);
        FUN_14146ec20(local_188 + 2,local_3f8);
        local_3e0 = local_168 + 2;
        local_3e8 = local_188 + 2;
        FUN_1407adb6e(&local_298);
        FUN_140230a2e(&local_278,L"\tResult B64 {0}\n",&local_298);
        iVar12 = dStack_270._0_4_ + -1;
        if (dStack_270._0_4_ == 0) {
          iVar12 = 0;
        }
        FUN_1400020e8(&local_1f8,local_278,iVar12);
        if (local_278 != 0.0) {
          FUN_1400020a8();
        }
        FUN_1407adb3e(local_298,uStack_290);
        if (local_298 != 0.0) {
          FUN_1400020a8();
        }
        if (local_168[0] != 0.0) {
          FUN_1400020a8();
        }
        if (local_1f8 != 0.0) {
          FUN_1400020a8();
        }
      }
      lVar22 = lVar16 * 0x60;
      pdVar13 = local_328;
      pdVar14 = (double *)(*param_1 + lVar22);
      for (lVar19 = 0xc; lVar19 != 0; lVar19 = lVar19 + -1) {
        *pdVar14 = *pdVar13;
        pdVar13 = pdVar13 + 1;
        pdVar14 = pdVar14 + 1;
      }
      lVar19 = *param_1;
      dVar2 = *(double *)(lVar19 + lVar22);
      dVar3 = ((double *)(lVar19 + lVar22))[1];
      pdVar13 = (double *)(lVar19 + 0x10 + lVar22);
      dVar4 = *pdVar13;
      dVar25 = pdVar13[1];
      dVar30 = dVar4 * dVar4 + dVar2 * dVar2;
      dVar37 = dVar25 * dVar25 + dVar3 * dVar3;
      auVar33._0_8_ = dVar30 + dVar37;
      auVar33._8_8_ = dVar30 + dVar37;
      auVar23._8_8_ = -(ulonglong)(1e-08 <= auVar33._8_8_);
      auVar23._0_8_ = -(ulonglong)(1e-08 <= auVar33._0_8_);
      auVar34 = sqrtpd(auVar33,auVar33);
      auVar26 = divpd(_DAT_149934d80,auVar34);
      auVar40._0_8_ = auVar26._0_8_ * dVar4;
      auVar40._8_8_ = auVar26._8_8_ * dVar25;
      auVar34 = blendvpd(_DAT_149935300,auVar40,auVar23);
      *(ulonglong *)(lVar19 + lVar22) =
           (ulonglong)(dVar2 * auVar26._0_8_) & -(ulonglong)(1e-08 <= auVar33._0_8_);
      ((ulonglong *)(lVar19 + lVar22))[1] =
           (ulonglong)(dVar3 * auVar26._8_8_) & -(ulonglong)(1e-08 <= auVar33._8_8_);
      *(undefined1 (*) [16])(lVar19 + 0x10 + lVar22) = auVar34;
      *(undefined1 *)(param_1[4] + lVar16) = 1;
      local_29c = *(int *)(local_2b8._0_8_ + -4 + (longlong)(int)local_2b8._8_4_ * 4);
      iVar12 = local_2b8._8_4_ + -1;
      local_2b8._8_4_ = iVar12;
    }
    param_2 = local_29c;
    if (iVar12 == 0) {
      if (local_2b8._0_8_ != 0) {
        FUN_1400020a8();
      }
      if ((local_f0 ^ (ulonglong)auStack_428) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  } while( true );
}



// FUNCTION 1458965d8 FUN_1458965d8 body=99 status=ok
// SIG undefined FUN_1458965d8(void)

undefined4 * FUN_1458965d8(longlong param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (lVar2 == 0) {
    lVar2 = FUN_14479d2ce(param_1 + 0x10);
    uVar3 = 0xffffffff;
    if ((lVar2 == 0) || (lVar2 = FUN_1487d79da(lVar2), lVar2 == 0)) goto LAB_14589660c;
  }
  iVar1 = *param_3;
  uVar3 = 0xffffffff;
  if ((-1 < (longlong)iVar1) && (iVar1 < *(int *)(lVar2 + 0x28))) {
    uVar3 = *(undefined4 *)(*(longlong *)(lVar2 + 0x20) + 8 + (longlong)iVar1 * 0xc);
  }
LAB_14589660c:
  *param_2 = uVar3;
  return param_2;
}



// FUNCTION 14589663c FUN_14589663c body=86 status=ok
// SIG undefined FUN_14589663c(void)

void FUN_14589663c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 2,4);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 2)) {
    uVar2 = uVar1 >> 2 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,4,4);
  }
  return;
}



// FUNCTION 14589669c FUN_14589669c body=81 status=ok
// SIG undefined FUN_14589669c(void)

undefined8 * FUN_14589669c(void)

{
  if (DAT_14cb52ac0 == (undefined8 *)0x0) {
    DAT_14cb52ac0 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *DAT_14cb52ac0 = 0;
    DAT_14cb52ac0[1] = 0;
    DAT_14cb52ac0[2] = 0;
    *DAT_14cb52ac0 = &PTR_FUN_14afc82d0;
    FUN_1412ba776();
  }
  return DAT_14cb52ac0;
}



// FUNCTION 1458966ee FUN_1458966ee body=37 status=ok
// SIG undefined FUN_1458966ee(void)

void FUN_1458966ee(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x140);
  FUN_1412ba84a(param_2);
  return;
}



// FUNCTION 1458967a0 FUN_1458967a0 body=287 status=ok
// SIG undefined FUN_1458967a0(void)

void FUN_1458967a0(longlong param_1,float param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar2 = FUN_144904448((longlong *)(param_1 + 0x48));
  if (cVar2 != '\0') {
    plVar1 = *(longlong **)(param_1 + 0x48);
    if (((plVar1 == (longlong *)0x0) || (*(longlong *)(param_1 + 0x50) == -1)) ||
       (*plVar1 != *(longlong *)(param_1 + 0x50))) {
      local_48 = (longlong *)0x0;
    }
    else {
      *(int *)(plVar1 + 0x21) = (int)plVar1[0x21] + 1;
      local_48 = plVar1;
      uVar3 = FUN_1458968c0();
      local_58 = 0;
      FUN_1447997cc(plVar1,uVar3,param_2,param_3);
      if (*(char *)(param_1 + 0x60) == '\0') {
        cVar2 = FUN_1412ba97e(param_1);
        if (cVar2 == '\0') {
          param_4 = 0;
        }
      }
      uVar3 = FUN_140316ff8();
      uVar3 = FUN_1405f79bc(uVar3);
      local_58 = 0;
      FUN_1447997cc(plVar1,uVar3,param_4,0);
      cVar2 = FUN_1412ba97e(param_1);
      if (cVar2 == '\0') {
        uVar4 = 7;
        if (param_2 < 0.99) {
          uVar4 = 0x1f;
        }
        *(undefined1 *)(plVar1 + 0x16) = uVar4;
      }
    }
    FUN_144a61ac8(&local_48);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458968c0 FUN_1458968c0 body=207 status=ok
// SIG undefined FUN_1458968c0(void)

longlong FUN_1458968c0(void)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar2 = (longlong *)FUN_144a7e30a();
  lVar5 = plVar2[0x22];
  if (lVar5 == 0) {
    (**(code **)(*plVar2 + 1000))(plVar2);
    lVar5 = plVar2[0x22];
    if (lVar5 == 0) {
      return 0;
    }
  }
  lVar4 = *(longlong *)(lVar5 + 0x270);
  if (lVar4 == 0) {
    uVar3 = FUN_1407f787c();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(lVar5 + 0x270) = lVar4;
  }
  if (*(longlong *)(lVar5 + 0x278) != 0) {
    return *(longlong *)(lVar5 + 0x278);
  }
  if (lVar4 == 0) {
    return 0;
  }
  if (*(longlong *)(lVar5 + 0x268) != 0) {
    plVar2 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar1 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar1 == '\0')) {
      lVar4 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar4 = FUN_144aff482(uVar3,(longlong *)(lVar5 + 0x268));
    }
    *(longlong *)(lVar5 + 0x278) = lVar4;
    return lVar4;
  }
  return 0;
}



// FUNCTION 14589699e FUN_14589699e body=1152 status=ok
// SIG undefined FUN_14589699e(void)

void FUN_14589699e(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  bool bVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  longlong *plVar25;
  longlong lVar26;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  uint local_90;
  uint local_8c;
  ulonglong local_88;
  longlong local_80;
  longlong *local_78;
  longlong local_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar12 = *(uint *)(param_1 + 0x20);
  lVar26 = (longlong)(int)uVar12;
  if (lVar26 != 0) {
    local_78 = (longlong *)(param_1 + 0x18);
    plVar14 = *(longlong **)(param_1 + 0x18);
    local_98 = plVar14 + 3;
    uVar15 = 0;
    bVar21 = *plVar14 == 0;
    uVar23 = 0;
    do {
      lVar19 = (longlong)(int)uVar23;
      uVar5 = uVar23 + 1;
      if ((int)(uVar23 + 1) < (int)uVar12) {
        uVar5 = uVar12;
      }
      plVar7 = local_98 + lVar19 * 3;
      lVar20 = lVar19;
      uVar16 = uVar23;
      do {
        lVar20 = lVar20 + 1;
        uVar6 = uVar5;
        if (lVar26 <= lVar20) break;
        lVar4 = *plVar7;
        uVar16 = uVar16 + 1;
        plVar7 = plVar7 + 3;
        uVar6 = uVar16;
      } while (bVar21 == (lVar4 == 0));
      iVar11 = uVar6 - uVar23;
      if (bVar21 == false) {
        if (uVar15 != uVar23) {
          memmove(plVar14 + (longlong)(int)uVar15 * 3,plVar14 + lVar19 * 3,(longlong)iVar11 * 0x18);
        }
        uVar15 = uVar15 + iVar11;
      }
      else {
        FUN_1458398bd(plVar14 + lVar19 * 3,iVar11);
      }
      plVar7 = local_78;
      bVar21 = (bool)(bVar21 ^ 1);
      uVar23 = uVar6;
    } while (lVar20 < lVar26);
    *(uint *)(param_1 + 0x20) = uVar15;
    plVar14 = *(longlong **)(param_1 + 0x18);
    if (1 < (int)uVar15) {
      lVar26 = 0;
      plVar10 = plVar14;
      do {
        if ((lVar26 + 1U < (ulonglong)uVar15) && (*(int *)(plVar10[3] + 8) < *(int *)(*plVar10 + 8))
           ) {
          local_58 = plVar10[2];
          local_68 = *plVar10;
          lStack_60 = plVar10[1];
          plVar10[2] = plVar10[5];
          *plVar10 = plVar10[3];
          plVar10[1] = plVar10[4];
          plVar10[5] = local_58;
          plVar10[3] = local_68;
          plVar10[4] = lStack_60;
        }
        lVar26 = lVar26 + 2;
        plVar10 = plVar10 + 6;
      } while ((int)lVar26 < (int)uVar15);
      if (uVar15 != 2) {
        local_88 = 2;
        do {
          iVar11 = (int)local_88;
          local_90 = iVar11 * 2;
          local_70 = (longlong)(int)local_90;
          local_80 = 0;
          do {
            local_8c = uVar15 - (int)local_80;
            if ((int)local_90 <= (int)(uVar15 - (int)local_80)) {
              local_8c = local_90;
            }
            if (iVar11 < (int)local_8c && 0 < iVar11) {
              local_98 = plVar14 + local_80 * 3;
              iVar24 = 0;
              uVar13 = local_88;
              while( true ) {
                iVar18 = (int)uVar13;
                iVar22 = 0;
                if (iVar18 - iVar24 != 0 && iVar24 <= iVar18) {
                  iVar22 = 0;
                  uVar12 = iVar18 - iVar24;
                  do {
                    iVar2 = (uVar12 >> 1) + iVar22;
                    if (*(int *)(local_98[(longlong)iVar24 * 3 + (longlong)iVar2 * 3] + 8) <=
                        *(int *)(local_98[(longlong)iVar18 * 3] + 8)) {
                      iVar22 = iVar2 + (uVar12 & 1);
                    }
                    bVar21 = 1 < uVar12;
                    uVar12 = uVar12 >> 1;
                  } while (bVar21);
                }
                iVar22 = iVar22 + iVar24;
                if (iVar18 - iVar22 == 0 || iVar18 < iVar22) break;
                uVar12 = local_8c - iVar18;
                if (uVar12 == 0 || (int)local_8c < iVar18) {
                  iVar24 = 0;
                }
                else {
                  plVar10 = local_98 + (longlong)iVar22 * 3;
                  iVar24 = 0;
                  uVar13 = (ulonglong)uVar12;
                  do {
                    uVar13 = uVar13 >> 1;
                    uVar23 = (uint)uVar13 + iVar24;
                    if (*(int *)((local_98 + (longlong)iVar18 * 3)[(ulonglong)uVar23 * 3] + 8) <
                        *(int *)(*plVar10 + 8)) {
                      iVar24 = uVar23 + (uVar12 & 1);
                    }
                    bVar21 = 1 < uVar12;
                    uVar12 = (uint)uVar13;
                  } while (bVar21);
                  uVar13 = (ulonglong)(uint)(iVar18 + iVar24);
                  if (0 < iVar24) {
                    plVar3 = plVar10 + (longlong)((iVar18 + iVar24) - iVar22) * 3;
                    plVar9 = plVar10 + (longlong)(iVar18 - iVar22) * 3;
                    plVar25 = plVar10 + (longlong)(iVar18 - iVar22) * 3;
                    do {
                      while( true ) {
                        plVar1 = plVar9 + 3;
                        local_58 = plVar10[2];
                        local_68 = *plVar10;
                        lStack_60 = plVar10[1];
                        plVar10[2] = plVar9[2];
                        lVar26 = plVar9[1];
                        *plVar10 = *plVar9;
                        plVar10[1] = lVar26;
                        plVar10 = plVar10 + 3;
                        plVar9[2] = local_58;
                        *plVar9 = local_68;
                        plVar9[1] = lStack_60;
                        if (plVar1 == plVar3) break;
                        plVar9 = plVar1;
                        if (plVar10 == plVar25) {
                          plVar25 = plVar1;
                        }
                      }
                      plVar9 = plVar25;
                    } while (plVar10 != plVar25);
                  }
                }
                if (((int)local_8c <= (int)uVar13) ||
                   (iVar24 = iVar22 + iVar24 + 1, (int)uVar13 <= iVar24)) break;
              }
            }
            local_80 = local_80 + local_70;
          } while (local_80 < (longlong)(ulonglong)uVar15);
          local_88 = (ulonglong)local_90;
        } while ((int)local_90 < (int)uVar15);
      }
      if (*(int *)(param_1 + 0x20) < 2) {
        iVar11 = 1;
      }
      else {
        uVar13 = 0;
        uVar17 = 1;
        lVar26 = 0x18;
        do {
          lVar19 = FUN_1412ba9fc(*plVar7 + lVar26);
          iVar11 = *(int *)(lVar19 + 8);
          lVar19 = FUN_1412ba9fc((longlong)(int)uVar13 * 0x18 + *plVar7);
          if (iVar11 != *(int *)(lVar19 + 8)) {
            uVar12 = (int)uVar13 + 1;
            uVar13 = (ulonglong)uVar12;
            if (uVar17 != uVar13) {
              FUN_1401f3db8(*plVar7 + (longlong)(int)uVar12 * 0x18,*plVar7 + lVar26);
            }
          }
          uVar17 = uVar17 + 1;
          lVar26 = lVar26 + 0x18;
        } while ((longlong)uVar17 < (longlong)*(int *)(param_1 + 0x20));
        iVar11 = (int)uVar13 + 1;
      }
      FUN_145896e20(plVar7,iVar11);
      plVar14 = *(longlong **)(param_1 + 0x18);
      uVar15 = *(uint *)(param_1 + 0x20);
    }
    if (uVar15 != 0) {
      lVar26 = (longlong)(int)uVar15 * 0x18;
      do {
        plVar7 = (longlong *)FUN_1412ba9fc(plVar14);
        lVar19 = FUN_1412ba9fc(plVar14);
        uVar8 = (**(code **)(*plVar7 + 0x10))(plVar7,*(undefined4 *)(lVar19 + 8));
        lVar19 = FUN_1412ba9fc(plVar14);
        *(undefined8 *)(lVar19 + 0x10) = uVar8;
        plVar14 = plVar14 + 3;
        lVar26 = lVar26 + -0x18;
      } while (lVar26 != 0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145896e20 FUN_145896e20 body=122 status=ok
// SIG undefined FUN_145896e20(void)

void FUN_145896e20(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_148838eea(param_1,iVar1);
    }
    FUN_148838ed4((longlong)iVar1 * 0x18 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_148838f7e(param_1,param_2,iVar1 - param_2);
    FUN_148838fe0(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 145896ea4 FUN_145896ea4 body=94 status=ok
// SIG undefined FUN_145896ea4(void)

undefined8 FUN_145896ea4(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  
  plVar1 = (longlong *)*param_1;
  if (((plVar1 != (longlong *)0x0) && ((int)plVar1[1] != 0)) &&
     ((longlong *)*plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*(longlong *)*plVar1 + 0x30))();
    if (((cVar2 != '\0') && (param_2 != 0)) &&
       (((int)((longlong *)*param_1)[1] != 0 &&
        (plVar1 = *(longlong **)*param_1, plVar1 != (longlong *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x000145896ef6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 145896f1e FUN_145896f1e body=91 status=ok
// SIG undefined FUN_145896f1e(void)

bool FUN_145896f1e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_145896f4e;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_145896f4e:
  return lVar6 == param_2;
}



// FUNCTION 145896f7a FUN_145896f7a body=91 status=ok
// SIG undefined FUN_145896f7a(void)

bool FUN_145896f7a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_145896faa;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_145896faa:
  return lVar6 == param_2;
}



// FUNCTION 145896fd6 FUN_145896fd6 body=168 status=ok
// SIG undefined FUN_145896fd6(void)

undefined8 * FUN_145896fd6(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined8 *puVar2;
  
  cVar1 = FUN_14589707e(*(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(param_2 + 8) * 2));
  if (cVar1 == '\0') {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = (undefined8 *)FUN_14001cc68(0x168);
    memset(puVar2 + 4,0,0x148);
    *puVar2 = &PTR_FUN_14a312a70;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined8 *)((longlong)puVar2 + 0x3c) = 0xffffffff00000080;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    FUN_141222082(puVar2 + 0xe,0);
    puVar2[0x29] = 0;
    puVar2[0x2a] = 0;
    puVar2[0x2b] = 0;
    *(undefined2 *)(puVar2 + 0x2c) = 1;
  }
  return puVar2;
}



// FUNCTION 14589707e FUN_14589707e body=184 status=ok
// SIG undefined FUN_14589707e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_14589707e(ulonglong param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  
  cVar1 = FUN_144a7e3e8();
  if ((cVar1 == '\0') || ((&DAT_14ca814b8)[(param_1 & 0xffff) * 0xf] == 1)) {
    bVar2 = false;
  }
  else {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14ca970a0) {
      FUN_144b3d300(&DAT_14ca970a0);
      if (DAT_14ca970a0 == -1) {
        FUN_140056680(&DAT_14ca97088,L"r.SplineMesh.SceneTextures");
        _DAT_14ca97098 = 0;
        atexit((_func_5014 *)&LAB_143226578);
        _Init_thread_footer(&DAT_14ca970a0);
      }
    }
    iVar3 = FUN_144a7e43e(&DAT_14ca97088,param_1 & 0xffffffff);
    bVar2 = 0 < iVar3;
  }
  return bVar2;
}



// FUNCTION 145897136 FUN_145897136 body=120 status=ok
// SIG undefined FUN_145897136(void)

undefined8 FUN_145897136(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
    do {
      uVar1 = *(undefined8 *)(param_3 + -0x50);
      *(undefined8 *)(param_2 + -0x49) = *(undefined8 *)(param_3 + -0x49);
      *(undefined8 *)(param_2 + -0x50) = uVar1;
      FUN_144a787a6(param_2 + -0x40,param_3 + -0x40);
      FUN_144a787a6(param_2 + -0x30,param_3 + -0x30);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0x10);
      uVar6 = *(undefined4 *)(param_3 + -0xc);
      uVar7 = *(undefined4 *)(param_3 + -8);
      uVar8 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x20) = *(undefined4 *)(param_3 + -0x20);
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      *(undefined4 *)(param_2 + -0x10) = uVar5;
      *(undefined4 *)(param_2 + -0xc) = uVar6;
      *(undefined4 *)(param_2 + -8) = uVar7;
      *(undefined4 *)(param_2 + -4) = uVar8;
      FUN_1458971ae(param_2,param_3);
      param_3 = param_3 + 0x60;
      param_2 = param_2 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1458971ae FUN_1458971ae body=92 status=ok
// SIG undefined FUN_1458971ae(void)

undefined8 * FUN_1458971ae(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14708bfa8(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x1c);
      }
    }
  }
  return param_1;
}



// FUNCTION 14589720a FUN_14589720a body=40 status=ok
// SIG undefined FUN_14589720a(void)

undefined8 FUN_14589720a(undefined8 param_1,int param_2)

{
  FUN_145897232();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145897232 FUN_145897232 body=211 status=ok
// SIG undefined FUN_145897232(void)

void FUN_145897232(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b0a7950;
  *(undefined4 *)(param_1 + 0x36) = 0;
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  FUN_140c85ee4(param_1 + 0x2d);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  FUN_140e90ef8(param_1 + 0x23);
  *(undefined4 *)(param_1 + 0x22) = 0;
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  FUN_140e90ec0(param_1 + 0x19);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_14064e7da(param_1 + 0xf);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145897306 FUN_145897306 body=135 status=ok
// SIG undefined FUN_145897306(void)

longlong FUN_145897306(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_14589738e();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1;
    if (lVar3 + lVar2 * 0x14 != 0) goto LAB_145897353;
  }
  local_30 = param_3;
  FUN_145897448(param_1,&local_24,param_2);
  lVar2 = (longlong)local_24;
  lVar3 = *param_1;
LAB_145897353:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + lVar2 * 0x14 + 8;
}



// FUNCTION 14589738e FUN_14589738e body=185 status=ok
// SIG undefined FUN_14589738e(void)

int FUN_14589738e(longlong *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        local_48 = *param_3;
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x14);
        cVar1 = FUN_14088c7fa(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_1458973b7;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_1458973b7:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 145897448 FUN_145897448 body=274 status=ok
// SIG undefined FUN_145897448(void)

undefined4 * FUN_145897448(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1458975ea(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0xffffffff00000000;
  cVar1 = FUN_14589755c(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 2) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0xc) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_1458976d2(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14589755c FUN_14589755c body=141 status=ok
// SIG undefined FUN_14589755c(void)

undefined8 FUN_14589755c(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_30 = *param_3;
    iVar2 = FUN_145c490d8();
    if (iVar2 != -1) {
      lVar1 = *param_1;
      uVar3 = *param_3;
      *(undefined4 *)(lVar1 + 8 + (longlong)iVar2 * 0x14) = *(undefined4 *)(param_3 + 1);
      *(undefined8 *)(lVar1 + (longlong)iVar2 * 0x14) = uVar3;
      FUN_148f12f2c(param_1,*param_4);
      *param_4 = iVar2;
      uVar3 = 1;
      goto LAB_145897580;
    }
  }
  uVar3 = 0;
LAB_145897580:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458975ea FUN_1458975ea body=231 status=ok
// SIG undefined FUN_1458975ea(void)

int * FUN_1458975ea(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_140171ad2(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x14);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x14) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x14 + *param_1;
  return param_2;
}



// FUNCTION 1458976d2 FUN_1458976d2 body=445 status=ok
// SIG undefined FUN_1458976d2(void)

void FUN_1458976d2(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar6 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x14);
        uVar10 = (longlong)(int)((uint)((ulonglong)uVar4 >> 0x20) ^ (uint)uVar4) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x10 + lVar6 * 0x14) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0xc + lVar6 * 0x14) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145897890 FUN_145897890 body=40 status=ok
// SIG undefined FUN_145897890(void)

undefined8 FUN_145897890(undefined8 param_1,int param_2)

{
  FUN_1458978b8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458978b8 FUN_1458978b8 body=76 status=ok
// SIG undefined FUN_1458978b8(void)

void FUN_1458978b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b0094b0;
  param_1[0x86] = &PTR_FUN_14b009b20;
  FUN_14028f4a8(param_1 + 0x8a);
  if (param_1[0x87] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_1402d9b92(param_1);
  return;
}



// FUNCTION 145897912 FUN_145897912 body=45 status=ok
// SIG undefined FUN_145897912(void)

undefined8 FUN_145897912(undefined8 param_1,int param_2)

{
  FUN_145897940();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 145897940 FUN_145897940 body=57 status=ok
// SIG undefined FUN_145897940(void)

void FUN_145897940(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b0f8dc0;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14589797a FUN_14589797a body=144 status=ok
// SIG undefined FUN_14589797a(void)

bool FUN_14589797a(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145897a0c FUN_145897a0c body=58 status=ok
// SIG undefined FUN_145897a0c(void)

void FUN_145897a0c(longlong param_1)

{
  FUN_140eafca4(param_1,1,*(undefined8 *)(param_1 + 0x118));
  FUN_140f6c7cc(param_1);
  FUN_140da129a(param_1);
  FUN_1447f69b6(param_1 + 0xd0);
  return;
}



// FUNCTION 145897b7a FUN_145897b7a body=45 status=ok
// SIG undefined FUN_145897b7a(void)

void FUN_145897b7a(longlong param_1)

{
  FUN_140e02d42(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145897ba8 FUN_145897ba8 body=114 status=ok
// SIG undefined FUN_145897ba8(void)

void FUN_145897ba8(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 145897c1a FUN_145897c1a body=670 status=ok
// SIG undefined FUN_145897c1a(void)

void FUN_145897c1a(longlong param_1,char param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong lVar4;
  int7 iVar5;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined1 local_8c [4];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(longlong *)(param_1 + 0x18) == 0) goto LAB_145897e4c;
  if (param_2 == '\0') {
    uVar3 = FUN_14042831e();
    FUN_14130b0ce(*(undefined8 *)(param_1 + 0x18),uVar3,0,0);
    local_b8 = 0;
    FUN_140e16d82(*(longlong *)(param_1 + 0x18) + 0x60e8,DAT_14cbe7210,0,0);
    FUN_140bc1ec4(*(longlong *)(param_1 + 0x18) + 0x60e8,DAT_14cbe7210,0xff,0);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_d8);
  }
  FUN_140dc8e1a(*(longlong *)(param_1 + 0x18) + 0x60e8,0);
  local_b8 = 0;
  FUN_140e16d82(*(longlong *)(param_1 + 0x18) + 0x60e8,DAT_14cbe7210,1,0);
  local_b0 = 0;
  local_b8 = 0;
  FUN_140d78b8a(*(longlong *)(param_1 + 0x18) + 0x60e8,DAT_14cbe7210,0xff,1);
  FUN_1412bb140(*(longlong *)(param_1 + 0x18) + 0x60e8,DAT_14cbe7210,1);
  if (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x6190)) {
    plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x6188) + 0x20);
    if ((DAT_14c950c29 == '\x01') && (plVar2 != (longlong *)0x0)) {
      FUN_1456cec3c(plVar2);
    }
    else if (plVar2 == (longlong *)0x0) goto LAB_145897d79;
    lVar4 = FUN_145908c4c();
    iVar1 = *(int *)(lVar4 + 0x38);
    iVar5 = (int7)(int3)((uint)iVar1 >> 8);
    if ((*(int *)(plVar2[2] + 0x38) < iVar1) ||
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)iVar1 * 8) != lVar4 + 0x30)) {
      (**(code **)(*plVar2 + 0x800))(plVar2,CONCAT71(iVar5,1));
    }
    else {
      (**(code **)(plVar2[0x20d] + 0x18))(plVar2 + 0x20d,CONCAT71(iVar5,1),1);
    }
  }
LAB_145897d79:
  FUN_140ee959c(*(longlong *)(param_1 + 0x18) + 0x60e8,0);
  lVar4 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10e0) + 0x58))
                    (*(longlong *)(param_1 + 0x18) + 0x10e0,&DAT_14cb8d438);
  if (lVar4 != 0) {
    local_68 = 0;
    local_60 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_5c = 0xffffffff00000080;
    local_54 = 0;
    local_48 = 0;
    local_40 = 0;
    local_a8 = 0;
    FUN_14485c47a(&local_a8,*(undefined8 *)(param_1 + 0x18));
    local_a0 = &DAT_14c9a63f0;
    local_98 = &local_a8;
    FUN_1406c57ae(&local_88,local_8c,&local_a0,0);
    FUN_145897ed6(lVar4 + 0x1288,&local_88);
    FUN_140a87c14(lVar4 + 0x1288,0,0);
    local_40 = 0;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_140535736(&local_88);
  }
LAB_145897e4c:
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145897ed6 FUN_145897ed6 body=30 status=ok
// SIG undefined FUN_145897ed6(void)

void FUN_145897ed6(longlong param_1)

{
  FUN_140535930(param_1 + 0x30);
  FUN_1406c6e60(param_1);
  return;
}



// FUNCTION 145897f32 FUN_145897f32 body=190 status=ok
// SIG undefined FUN_145897f32(void)

void FUN_145897f32(undefined8 param_1,undefined8 *param_2)

{
  void **ppvVar1;
  void *_Src;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  void *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1408db4c4(&local_48,param_1,0,1);
  _Src = local_38;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = local_48;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_44;
  *(undefined4 *)(param_2 + 2) = uStack_40;
  *(undefined4 *)((longlong)param_2 + 0x14) = uStack_3c;
  ppvVar1 = (void **)(param_2 + 3);
  if (ppvVar1 != &local_38) {
    *(int *)(param_2 + 4) = local_30;
    if (local_30 == 0 && *(int *)((longlong)param_2 + 0x24) == 0) {
      *(undefined4 *)((longlong)param_2 + 0x24) = 0;
    }
    else {
      FUN_1446dd670(ppvVar1,local_30);
      if (local_30 != 0) {
        memcpy(*ppvVar1,_Src,(longlong)local_30 * 2);
      }
    }
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145897ff1 FUN_145897ff1 body=43 status=ok
// SIG undefined FUN_145897ff1(void)

void FUN_145897ff1(void)

{
  FUN_145d755d2();
  DAT_14c91eb09 = 1;
  atexit(FUN_14626eaac);
  FUN_1412bb1f6();
  FUN_145d75473();
  return;
}



// FUNCTION 14589801c FUN_14589801c body=40 status=ok
// SIG undefined FUN_14589801c(void)

undefined8 FUN_14589801c(undefined8 param_1,int param_2)

{
  FUN_145898044();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145898044 FUN_145898044 body=96 status=ok
// SIG undefined FUN_145898044(void)

void FUN_145898044(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a5d6290;
  param_1[10] = &PTR_FUN_14a5d6570;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1458980ac FUN_1458980ac body=128 status=ok
// SIG undefined FUN_1458980ac(void)

undefined8 * FUN_1458980ac(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_14480568a(param_1,uVar1);
  *param_1 = &PTR_FUN_14b2d04e0;
  param_1[5] = &PTR_FUN_14b2d0ee0;
  param_1[6] = &PTR_LAB_14b2d0f20;
  param_1[0x55] = &PTR_FUN_14b2d0f70;
  param_1[0x56] = &PTR_FUN_14b2d0ff0;
  param_1[0x57] = &PTR_FUN_14b2d1000;
  param_1[0xc4] = 0;
  FUN_140b967fa(param_1,1);
  return param_1;
}



// FUNCTION 145898142 FUN_145898142 body=154 status=ok
// SIG undefined FUN_145898142(void)

void FUN_145898142(longlong param_1)

{
  if (*(char *)(param_1 + 0x178) != '\x03') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cbc1e68) {
      FUN_144b3d300(&DAT_14cbc1e68);
      if (DAT_14cbc1e68 == -1) {
        FUN_1446ddc76(&DAT_14cbc1e60,"ClientWeaponsRestricted",1);
        _Init_thread_footer(&DAT_14cbc1e68);
      }
    }
    FUN_1412bb140(param_1 + 0x60e8,DAT_14cbc1e60,*(undefined1 *)(param_1 + 0x62f9));
    return;
  }
  return;
}



// FUNCTION 1458981dc FUN_1458981dc body=278 status=ok
// SIG undefined FUN_1458981dc(void)

void FUN_1458981dc(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  plVar1 = (longlong *)(**(code **)(*param_2 + 8))(param_2);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = FUN_144a6c4d8();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) goto LAB_14589822e;
  }
  plVar1 = (longlong *)0x0;
LAB_14589822e:
  lVar2 = FUN_14001cc68(0x180,0x10);
  FUN_140d50c94(lVar2,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x38));
  *(longlong *)(param_1 + 0x18) = lVar2;
  *(undefined1 *)(lVar2 + 8) = 1;
  FUN_1412bcb7a(lVar2,0,*(undefined8 *)(param_1 + 0x10));
  if (plVar1 != (longlong *)0x0) {
    lVar2 = FUN_14102013a();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x48);
      if (lVar2 != 0) {
        lVar3 = FUN_144a745da();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
          (**(code **)(*plVar1 + 0x638))(plVar1,lVar2);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0001458982e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x670))(plVar1,4);
      return;
    }
  }
  return;
}



// FUNCTION 1458982f2 FUN_1458982f2 body=187 status=ok
// SIG undefined FUN_1458982f2(void)

longlong * FUN_1458982f2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)FUN_1412bcf36(*(undefined8 *)(param_1 + 0x40),param_2,0);
    if (plVar1 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
    lVar2 = FUN_14081cebe();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      if (*(char *)(param_1 + 8) == '\x01') {
        (**(code **)(*plVar1 + 0x720))(plVar1,0);
      }
      FUN_140b506a4(plVar1);
      if (*(char *)(param_1 + 8) == '\x01') {
        if ((*(byte *)((longlong)plVar1 + 0x2d6) & 2) != 0) {
          *(byte *)((longlong)plVar1 + 0x2d6) = *(byte *)((longlong)plVar1 + 0x2d6) & 0xfd;
          FUN_1448215fa(plVar1);
        }
        FUN_140c0573e(plVar1,1);
        *(byte *)((longlong)plVar1 + 0x2dd) = *(byte *)((longlong)plVar1 + 0x2dd) | 0x10;
      }
      (**(code **)(*plVar1 + 0x2b8))(plVar1,0,0);
      return plVar1;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 1458983ae FUN_1458983ae body=111 status=ok
// SIG undefined FUN_1458983ae(void)

void FUN_1458983ae(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0xf0,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0xf0)) {
      uVar2 = uVar1 / 0xf0 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xf0,8);
  }
  return;
}



// FUNCTION 14589841e FUN_14589841e body=40 status=ok
// SIG undefined FUN_14589841e(void)

undefined8 FUN_14589841e(undefined8 param_1,int param_2)

{
  FUN_145898446();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145898446 FUN_145898446 body=69 status=ok
// SIG undefined FUN_145898446(void)

void FUN_145898446(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4d10e0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_14589848c(param_1 + 8);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14589848c FUN_14589848c body=53 status=ok
// SIG undefined FUN_14589848c(void)

void FUN_14589848c(longlong *param_1)

{
  FUN_1412bd1d0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458984c2 FUN_1458984c2 body=103 status=ok
// SIG undefined FUN_1458984c2(void)

ulonglong FUN_1458984c2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_14589850c:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14589850c;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
    }
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 14589852a FUN_14589852a body=86 status=ok
// SIG undefined FUN_14589852a(void)

void FUN_14589852a(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  if (param_2 != 0) {
    lVar3 = FUN_144a7a5f4();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
         ) == lVar3 + 0x30)) goto LAB_145898564;
  }
  param_2 = 0;
LAB_145898564:
  uVar2 = FUN_145898580(uVar1,param_2);
  FUN_1402a7054(param_1,uVar2);
  return;
}



// FUNCTION 145898580 FUN_145898580 body=339 status=ok
// SIG undefined FUN_145898580(void)

undefined8 FUN_145898580(longlong param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  byte extraout_AL;
  undefined7 uVar8;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined7 extraout_var;
  byte bVar9;
  bool bVar10;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  undefined8 uStack_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar1 = *(char *)(param_1 + 0x10);
  bVar9 = cVar1 == '\0';
  bVar10 = param_2 == 0;
  uVar8 = (undefined7)(local_40 >> 8);
  if (bVar10 || (bool)bVar9) goto LAB_145898699;
  cVar2 = *(char *)(param_2 + 0xe39);
  if (*(char *)(param_1 + 0x11) == '\x01') {
    uVar3 = FUN_140a2d0c8(param_2);
    local_58 = 0;
    uStack_50 = 0;
    uVar4 = FUN_140428d10();
    lVar5 = FUN_14477b664(uVar4);
    lVar6 = FUN_140428d10();
    uVar4 = FUN_140428d10();
    FUN_1402d1bfa(&local_48,uVar4,uVar3);
    if (local_48 != 0) {
      uStack_50 = 0;
    }
    local_60 = local_48;
    lVar7 = FUN_140428d10();
    if (lVar6 == 0) {
LAB_145898654:
      lVar7 = lVar6;
    }
    else if (lVar7 == 0) {
      lVar7 = 0;
    }
    else if ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38)) &&
            (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
             lVar7 + 0x30)) goto LAB_145898654;
    if (lVar5 != lVar7) {
      uStack_50 = 0;
    }
    uVar4 = FUN_14477b664(lVar7);
    local_58 = FUN_14477b664(uVar4);
    if ((local_48 != 0) && (local_58 != 0)) {
      uStack_50 = uVar3;
    }
    FUN_1458986d4(param_1 + 0x18,&local_60);
    bVar9 = extraout_AL;
    uVar8 = extraout_var;
  }
  else {
    bVar9 = 1;
  }
  bVar10 = cVar2 == cVar1;
LAB_145898699:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return CONCAT71(uVar8,bVar10 & bVar9);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458986d4 FUN_1458986d4 body=269 status=ok
// SIG undefined FUN_1458986d4(void)

undefined8 FUN_1458986d4(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = param_1[1];
  if ((longlong)(int)lVar2 == 0) {
    uVar6 = 0;
  }
  else {
    lVar1 = *param_1;
    lVar8 = 0;
    do {
      if (*(longlong *)(lVar1 + 8 + lVar8) == 0) {
        uVar6 = FUN_140428d10();
        uVar6 = FUN_14477b664(uVar6);
        *(undefined8 *)(lVar1 + 8 + lVar8) = uVar6;
      }
      lVar7 = param_2[1];
      if (lVar7 == 0) {
        lVar7 = FUN_140428d10();
      }
      uVar6 = *param_2;
      uVar5 = FUN_14477b664(lVar7);
      local_50 = uVar6;
      uVar3 = FUN_144a7891a(uVar5);
      local_58 = *(undefined8 *)(lVar1 + lVar8);
      uVar6 = *(undefined8 *)(lVar1 + 8 + lVar8);
      uVar4 = FUN_144a7891a(uVar6);
      local_60 = &local_50;
      local_68 = uVar5;
      uVar6 = FUN_144a789b8(uVar4,uVar6,&local_58,uVar3);
    } while (((char)uVar6 == '\0') &&
            (bVar9 = (longlong)(int)lVar2 * 0x18 + -0x18 != lVar8, lVar8 = lVar8 + 0x18, bVar9));
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458987e8 FUN_1458987e8 body=228 status=ok
// SIG undefined FUN_1458987e8(void)

longlong FUN_1458987e8(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c99f910 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_147061ac9;
    local_40 = FUN_14629cec1;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/TypedElementRuntime",L"TypedElementSelectionInterface",&DAT_14c99f910,
                  FUN_14629ce9a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c99f910;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458988d2 FUN_1458988d2 body=228 status=ok
// SIG undefined FUN_1458988d2(void)

longlong FUN_1458988d2(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9a53d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_1470cc1e1;
    local_40 = FUN_1462ad2ba;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxEngine",L"GbxGameplayDebuggerDataProvider",&DAT_14c9a53d0,
                  &DAT_1470cc1e0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a53d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458989be FUN_1458989be body=228 status=ok
// SIG undefined FUN_1458989be(void)

longlong FUN_1458989be(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab4340 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146343f66;
    local_38 = &LAB_1475969ff;
    local_40 = &LAB_1458bee25;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0xb0;
    FUN_14081cfa3(L"/Script/Constraints",L"TickableTransformConstraint",&DAT_14cab4340,
                  &DAT_1475969fe);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab4340;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145898aa8 FUN_145898aa8 body=228 status=ok
// SIG undefined FUN_145898aa8(void)

longlong FUN_145898aa8(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cabcfb8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4ce0c;
    local_38 = &LAB_147824f9d;
    local_40 = &LAB_145f98366;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x6a0;
    FUN_14081cfa3(L"/Script/MRMesh",L"MRMeshComponent",&DAT_14cabcfb8,FUN_146368d04);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cabcfb8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145898b94 FUN_145898b94 body=228 status=ok
// SIG undefined FUN_145898b94(void)

longlong FUN_145898b94(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cad20b0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b47bc4;
    local_38 = &LAB_1479ff9a3;
    local_40 = &LAB_145d093c3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000005;
    local_60 = 0x10;
    local_68 = 0x310;
    FUN_14081cfa3(L"/Script/Engine",L"ReflectionCaptureComponent",&DAT_14cad20b0,&DAT_1479ff9a2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad20b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145898c84 FUN_145898c84 body=228 status=ok
// SIG undefined FUN_145898c84(void)

longlong FUN_145898c84(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cad1300 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463b73f6;
    local_38 = &LAB_1479dcdfd;
    local_40 = &LAB_14597bc23;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x650;
    FUN_14081cfa3(L"/Script/Engine",L"DrawSphereComponent",&DAT_14cad1300,&DAT_1479dcdfc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad1300;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145898d74 FUN_145898d74 body=228 status=ok
// SIG undefined FUN_145898d74(void)

longlong FUN_145898d74(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb1de48 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_147e95e39;
    local_40 = FUN_14642549f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GameplayTasks",L"GameplayTaskOwnerInterface",&DAT_14cb1de48,
                  &DAT_147e95e38);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1de48;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145898e5e FUN_145898e5e body=228 status=ok
// SIG undefined FUN_145898e5e(void)

longlong FUN_145898e5e(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb247b0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e9e4fe;
    local_38 = &LAB_147f62791;
    local_40 = &LAB_146442838;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xd8;
    FUN_14081cfa3(L"/Script/GbxDestruction",L"GbxDestructibleData",&DAT_14cb247b0,&DAT_147f62790);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb247b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145898f48 FUN_145898f48 body=228 status=ok
// SIG undefined FUN_145898f48(void)

longlong FUN_145898f48(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb28c08 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146340e96;
    local_38 = &LAB_147fc5227;
    local_40 = &LAB_146455351;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0xe8;
    FUN_14081cfa3(L"/Script/TemplateSequence",L"TemplateSequence",&DAT_14cb28c08,&DAT_147fc5226);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb28c08;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145899032 FUN_145899032 body=228 status=ok
// SIG undefined FUN_145899032(void)

longlong FUN_145899032(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb2b7d8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463b1128;
    local_38 = &LAB_14802c4ce;
    local_40 = &LAB_1460d99e1;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0x1f0;
    FUN_14081cfa3(L"/Script/EngineCameras",L"LegacyCameraShake",&DAT_14cb2b7d8,FUN_14645d2d6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb2b7d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14589911c FUN_14589911c body=228 status=ok
// SIG undefined FUN_14589911c(void)

longlong FUN_14589911c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb44ce8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459912f4;
    local_38 = &LAB_14821e555;
    local_40 = &LAB_14647f65a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x220;
    FUN_14081cfa3(L"/Script/CommonUI",L"CommonAnimatedSwitcher",&DAT_14cb44ce8,FUN_14647f638);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb44ce8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145899208 FUN_145899208 body=228 status=ok
// SIG undefined FUN_145899208(void)

longlong FUN_145899208(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb4c700 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145a7b656;
    local_38 = &LAB_1484ca337;
    local_40 = FUN_146492f0e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/ModelingComponents",L"MeshSurfacePointMeshEditingToolBuilder",
                  &DAT_14cb4c700,&DAT_1484ca336);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4c700;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458992f4 FUN_1458992f4 body=228 status=ok
// SIG undefined FUN_1458992f4(void)

longlong FUN_1458992f4(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb62050 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458dac44;
    local_38 = &LAB_1486e0705;
    local_40 = &LAB_1464f650b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x100;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxProfileProgressRoleAllPlayers",&DAT_14cb62050,
                  &DAT_1486e0704);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb62050;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458993e6 FUN_1458993e6 body=228 status=ok
// SIG undefined FUN_1458993e6(void)

longlong FUN_1458993e6(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb682c8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464b60de;
    local_38 = &LAB_1487436c7;
    local_40 = &LAB_14651abe7;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0xd8;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxTrick_AnimBase",&DAT_14cb682c8,&DAT_1487436c6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb682c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458994d2 FUN_1458994d2 body=228 status=ok
// SIG undefined FUN_1458994d2(void)

longlong FUN_1458994d2(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb95be0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_148a3ab2d;
    local_40 = FUN_146579ae3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x1000000c;
    local_60 = 8;
    local_68 = 0x3b8;
    FUN_14081cfa3(L"/Script/OnlineSubsystemUtils",L"OnlineBeaconHostObject",&DAT_14cb95be0,
                  &DAT_148a3ab2c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb95be0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458995bc FUN_1458995bc body=228 status=ok
// SIG undefined FUN_1458995bc(void)

longlong FUN_1458995bc(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb9c1d8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14647f43c;
    local_38 = &LAB_148b4e46f;
    local_40 = &LAB_14659965c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x538;
    FUN_14081cfa3(L"/Script/GbxUIUMG",L"GbxUIUMGActivatableWidget",&DAT_14cb9c1d8,&DAT_148b4e46e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9c1d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458996a6 FUN_1458996a6 body=228 status=ok
// SIG undefined FUN_1458996a6(void)

longlong FUN_1458996a6(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbf5f18 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_141117124;
    local_38 = &LAB_149011096;
    local_40 = &LAB_14610a505;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x1000000c;
    local_60 = 8;
    local_68 = 0x540;
    FUN_14081cfa3(L"/Script/Lobby",L"LobbyBeaconState",&DAT_14cbf5f18,FUN_1466725a2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbf5f18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14589978c FUN_14589978c body=416 status=ok
// SIG undefined FUN_14589978c(void)

void FUN_14589978c(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  longlong *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [48];
  undefined1 local_68 [4];
  undefined8 local_64;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong lStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_68[0] = 0;
  local_64 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  lStack_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1412bd664(local_98,local_68);
  local_b8 = local_38;
  local_b0 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plStack_30 + 0xc) = *(int *)((longlong)plStack_30 + 0xc) + 1;
    UNLOCK();
  }
  local_a8 = (undefined4)local_28;
  uStack_a4 = local_28._4_4_;
  uStack_a0 = (undefined4)uStack_20;
  uStack_9c = uStack_20._4_4_;
  FUN_14589992e(&local_b8,local_98);
  if ((lStack_40 != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(lStack_40 + 0x50));
  }
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_30 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_30 + 0x10))();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14589992e FUN_14589992e body=287 status=ok
// SIG undefined FUN_14589992e(void)

void FUN_14589992e(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1458999d3;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar7 = iVar6 == iVar5;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar7);
    lVar4 = *param_1;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      local_38 = lVar4;
      local_30 = plVar3;
      local_40 = FUN_140206ee8(param_2);
      if (local_40 == 0) {
        local_40 = 0;
      }
      else {
        FUN_140942716(&local_40);
      }
      FUN_140bd765a(param_1,local_40,0);
      if ((local_40 != 0) && ((DAT_14cb26569 & 1) != 0)) {
        FUN_1400848c0(*(undefined8 *)(local_40 + 0x50));
      }
    }
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
LAB_1458999d3:
    plVar3 = (longlong *)param_1[1];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
  }
  if ((*(longlong *)(param_2 + 0x28) != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x50));
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145899a4e FUN_145899a4e body=148 status=ok
// SIG undefined FUN_145899a4e(void)

bool FUN_145899a4e(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145899ae4 FUN_145899ae4 body=63 status=ok
// SIG undefined FUN_145899ae4(void)

undefined1 FUN_145899ae4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_145899b24(param_2,param_3);
    param_3 = param_3 + 0x1a8;
    param_2 = param_2 + 0x1a8;
  }
  return 1;
}



// FUNCTION 145899b24 FUN_145899b24 body=618 status=ok
// SIG undefined FUN_145899b24(void)

undefined1 * FUN_145899b24(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  longlong lVar3;
  
  *param_1 = *param_2;
  if ((*(longlong *)(param_1 + 8) != *(longlong *)(param_2 + 8)) ||
     (*(int *)(param_1 + 0x10) != *(int *)(param_2 + 0x10))) {
    *(longlong *)(param_1 + 8) = *(longlong *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  FUN_1412bdb18(param_1 + 0x20,param_2 + 0x20);
  FUN_1412bdb18(param_1 + 0x80,param_2 + 0x80);
  lVar3 = *(longlong *)(param_2 + 0xe0);
  if (DAT_14c950c29 == 1) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_14689c22e();
      lVar3 = *(longlong *)(param_2 + 0xe0);
    }
  }
  bVar2 = DAT_14c950c29;
  *(longlong *)(param_1 + 0xe0) = lVar3;
  lVar3 = *(longlong *)(param_2 + 0xe8);
  if ((bVar2 & 1) != 0) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_14689c22e();
      lVar3 = *(longlong *)(param_2 + 0xe8);
      bVar2 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0xe8) = lVar3;
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0xf0);
  lVar3 = *(longlong *)(param_2 + 0xf8);
  if ((bVar2 & 1) != 0) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_14689c22e();
      lVar3 = *(longlong *)(param_2 + 0xf8);
      bVar2 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0xf8) = lVar3;
  lVar3 = *(longlong *)(param_2 + 0x100);
  if ((bVar2 & 1) != 0) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_14689c22e();
      lVar3 = *(longlong *)(param_2 + 0x100);
    }
  }
  *(longlong *)(param_1 + 0x100) = lVar3;
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_2 + 0x110);
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_2 + 0x108);
  if ((*(longlong *)(param_1 + 0x118) != *(longlong *)(param_2 + 0x118)) ||
     (*(int *)(param_1 + 0x120) != *(int *)(param_2 + 0x120))) {
    *(longlong *)(param_1 + 0x118) = *(longlong *)(param_2 + 0x118);
    *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_2 + 0x120);
    *(undefined8 *)(param_1 + 0x128) = 0;
  }
  FUN_14118c70e(param_1 + 0x130,param_2 + 0x130);
  if ((*(longlong *)(param_1 + 0x170) != *(longlong *)(param_2 + 0x170)) ||
     (*(int *)(param_1 + 0x178) != *(int *)(param_2 + 0x178))) {
    *(longlong *)(param_1 + 0x170) = *(longlong *)(param_2 + 0x170);
    *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_2 + 0x178);
    *(undefined8 *)(param_1 + 0x180) = 0;
  }
  *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_2 + 0x188);
  lVar3 = *(longlong *)(param_2 + 400);
  if (DAT_14c950c29 == 1) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_14689c22e();
      lVar3 = *(longlong *)(param_2 + 400);
    }
  }
  *(longlong *)(param_1 + 400) = lVar3;
  uVar1 = *(undefined8 *)(param_2 + 0x1a0);
  *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_2 + 0x198);
  *(undefined8 *)(param_1 + 0x1a0) = uVar1;
  return param_1;
}



// FUNCTION 145899d8e FUN_145899d8e body=38 status=ok
// SIG undefined FUN_145899d8e(void)

undefined8 FUN_145899d8e(undefined8 param_1,int param_2)

{
  FUN_1412bde06();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145899db4 FUN_145899db4 body=33 status=ok
// SIG undefined FUN_145899db4(void)

void FUN_145899db4(longlong param_1)

{
  FUN_1410ea50c();
  *(undefined1 *)(param_1 + 0x2a2) = 1;
  FUN_145899dd6(param_1);
  return;
}



// FUNCTION 145899dd6 FUN_145899dd6 body=135 status=ok
// SIG undefined FUN_145899dd6(void)

void FUN_145899dd6(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  code *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_1407f4ede();
  if (lVar1 != 0) {
    lVar2 = FUN_1407f4df8();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      local_28 = FUN_140de0f20;
      local_20 = 0;
      FUN_145899e5e(param_1,lVar1,param_1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145899e5e FUN_145899e5e body=349 status=ok
// SIG undefined FUN_145899e5e(void)

void FUN_145899e5e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar5 = *(undefined4 *)(param_4 + 1);
  uVar3 = *param_4;
  lVar1 = param_1 + 0x138;
  local_58 = uVar3;
  local_50 = uVar5;
  uVar4 = FUN_1412bde64(param_2,2);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(lVar1,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar2 * 4) = uVar4;
  local_58 = uVar3;
  local_50 = uVar5;
  uVar4 = FUN_1412bde64(param_2,8,param_3);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(lVar1,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar2 * 4) = uVar4;
  local_58 = uVar3;
  local_50 = uVar5;
  uVar5 = FUN_1412bde64(param_2,0x10,param_3);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(lVar1,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar2 * 4) = uVar5;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    FUN_1411a3386(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145899fbc FUN_145899fbc body=199 status=ok
// SIG undefined FUN_145899fbc(void)

void FUN_145899fbc(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStack_78 [32];
  code *local_58;
  undefined8 local_48;
  undefined **local_38;
  longlong *local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar5 = *(longlong **)(param_1 + 0x70);
  if (plVar5 != (longlong *)0x0) {
    iVar4 = (int)plVar5[1];
    do {
      if (iVar4 == 0) goto LAB_14589a02f;
      LOCK();
      iVar3 = (int)plVar5[1];
      bVar6 = iVar4 == iVar3;
      if (bVar6) {
        *(int *)(plVar5 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar6);
    if (*(longlong *)(param_1 + 0x68) != 0) {
      local_48 = 0;
      local_38 = &PTR_LAB_14b42dff0;
      local_58 = FUN_14899915e;
      local_30 = param_2;
      FUN_14589a084(*(longlong *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x78));
    }
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
LAB_14589a02f:
  if (*param_2 != 0) {
    plVar5 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar5 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14589a084 FUN_14589a084 body=255 status=ok
// SIG undefined FUN_14589a084(void)

void FUN_14589a084(longlong param_1,longlong param_2,longlong *param_3)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    plVar6 = *(longlong **)(param_1 + 0x28);
    lVar3 = (longlong)*(int *)(param_1 + 0x30) * 0x30;
    do {
      if (*plVar6 == param_2) {
        if ((plVar6 != (longlong *)0x0) && (lVar3 = (longlong)(int)plVar6[2], 0 < lVar3)) {
          uVar7 = lVar3 + 1;
          lVar3 = lVar3 << 4;
          do {
            lVar3 = lVar3 + -0x10;
            cVar2 = FUN_144729dda(plVar6[1] + lVar3);
            if (cVar2 != '\0') {
              local_48 = FUN_14479d2ce(plVar6[1] + lVar3);
              pcVar1 = (code *)*param_3;
              plVar5 = (longlong *)param_3[2];
              if ((longlong *)param_3[2] == (longlong *)0x0) {
                plVar5 = param_3 + 4;
              }
              uVar4 = (**(code **)(*plVar5 + 8))();
              (*pcVar1)(uVar4,&local_48);
            }
            uVar7 = uVar7 - 1;
          } while (1 < uVar7);
        }
        break;
      }
      plVar6 = plVar6 + 6;
      lVar3 = lVar3 + -0x30;
    } while (lVar3 != 0);
  }
  if (*param_3 != 0) {
    plVar6 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14589a190 FUN_14589a190 body=31 status=ok
// SIG undefined FUN_14589a190(void)

undefined8 FUN_14589a190(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14589a1be FUN_14589a1be body=45 status=ok
// SIG undefined FUN_14589a1be(void)

undefined8 FUN_14589a1be(undefined8 param_1,int param_2)

{
  FUN_14589a1ec();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14589a1ec FUN_14589a1ec body=71 status=ok
// SIG undefined FUN_14589a1ec(void)

void FUN_14589a1ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab99dd0;
  FUN_1412bef15(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 14589a234 FUN_14589a234 body=151 status=ok
// SIG undefined FUN_14589a234(void)

undefined1 * FUN_14589a234(longlong param_1,undefined1 *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (lVar2 == 0) {
    *param_2 = 1;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uStack_20 = 0;
  }
  else {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    uStack_20 = *(undefined8 *)(param_1 + 0x10);
    lVar2 = *(longlong *)(param_1 + 0x18);
  }
  local_28 = *(undefined8 *)(param_1 + 8);
  FUN_14589a2ce(param_2,lVar2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14589a2ce FUN_14589a2ce body=101 status=ok
// SIG undefined FUN_14589a2ce(void)

undefined1 * FUN_14589a2ce(undefined1 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = 1;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (param_3[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_3[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 8) = *param_3;
  *(undefined8 *)(param_1 + 0x10) = param_3[1];
  *(undefined8 *)(param_1 + 0x18) = param_2;
  plVar3 = (longlong *)param_3[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
    }
  }
  return param_1;
}



// FUNCTION 14589a334 FUN_14589a334 body=203 status=ok
// SIG undefined FUN_14589a334(void)

void FUN_14589a334(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((longlong)*(int *)(param_1 + 0x48) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x40);
    lVar4 = (longlong)*(int *)(param_1 + 0x48) << 4;
    do {
      FUN_14589a400(lVar5);
      lVar5 = lVar5 + 0x10;
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != 0);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
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
  plVar3 = DAT_14cc31618;
  DAT_14cc31610 = 0;
  if (DAT_14cc31618 != (longlong *)0x0) {
    DAT_14cc31618 = (longlong *)0x0;
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
  FUN_140457ffc(&DAT_14c872d10,param_1);
  FUN_140457ffc(&DAT_14c872cf8,param_1);
  return;
}



// FUNCTION 14589a400 FUN_14589a400 body=26 status=ok
// SIG undefined FUN_14589a400(void)

void FUN_14589a400(undefined8 param_1)

{
  FUN_1458f4784();
  FUN_14589a41a(param_1);
  return;
}



// FUNCTION 14589a41a FUN_14589a41a body=305 status=ok
// SIG undefined FUN_14589a41a(void)

void FUN_14589a41a(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined *puVar6;
  int iVar7;
  int *piVar8;
  longlong lVar9;
  
  if (DAT_14cabc6e0 != DAT_14cabc70c) {
    iVar2 = *(int *)(param_1 + 1);
    if (iVar2 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = (undefined2 *)*param_1;
    }
    iVar7 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar7 = 0;
    }
    iVar2 = FUN_144a49b4a(iVar7,puVar5);
    puVar6 = &DAT_14cabc710;
    if (DAT_14cabc718 != (undefined *)0x0) {
      puVar6 = DAT_14cabc718;
    }
    uVar3 = (longlong)iVar2 & (longlong)DAT_14cabc720 - 1U;
    iVar2 = *(int *)(puVar6 + uVar3 * 4);
    if (iVar2 != -1) {
      piVar8 = (int *)(puVar6 + uVar3 * 4);
      lVar4 = DAT_14cabc6d8;
      do {
        puVar1 = (undefined8 *)(lVar4 + (longlong)iVar2 * 0x28);
        iVar7 = *(int *)(puVar1 + 1);
        if (iVar7 == *(int *)(param_1 + 1)) {
          if (iVar7 < 2) {
LAB_14589a4ba:
            puVar6 = &DAT_14cabc710;
            if (DAT_14cabc718 != (undefined *)0x0) {
              puVar6 = DAT_14cabc718;
            }
            lVar4 = DAT_14cabc6d8 + (longlong)iVar2 * 0x28;
            lVar9 = (longlong)*(int *)(lVar4 + 0x24);
            iVar7 = *(int *)(puVar6 + lVar9 * 4);
            if (iVar7 == iVar2) {
              piVar8 = (int *)(puVar6 + lVar9 * 4);
            }
            else {
              do {
                piVar8 = (int *)(DAT_14cabc6d8 + (longlong)iVar7 * 0x28 + 0x20);
                iVar7 = *piVar8;
              } while (iVar7 != iVar2);
            }
            *piVar8 = *(int *)(lVar4 + 0x20);
            FUN_14589a54c();
            return;
          }
          iVar2 = FUN_144a80a00(*puVar1,*param_1);
          lVar4 = DAT_14cabc6d8;
          if (iVar2 == 0) {
            iVar2 = *piVar8;
            goto LAB_14589a4ba;
          }
        }
        else if (*(int *)(param_1 + 1) + iVar7 == 1) goto LAB_14589a4ba;
        iVar2 = *(int *)(puVar1 + 4);
        piVar8 = (int *)(puVar1 + 4);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 14589a54c FUN_14589a54c body=65 status=ok
// SIG undefined FUN_14589a54c(void)

void FUN_14589a54c(int param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(DAT_14cabc6d8 + (longlong)param_1 * 0x28);
  FUN_1449db362(plVar1 + 2);
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  FUN_14589a58e(param_1);
  return;
}



// FUNCTION 14589a58e FUN_14589a58e body=128 status=ok
// SIG undefined FUN_14589a58e(void)

void FUN_14589a58e(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cabc6d8;
  if (DAT_14cabc70c != 0) {
    *(int *)(DAT_14cabc6d8 + (longlong)DAT_14cabc708 * 0x28) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x28) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cabc70c) {
    iVar4 = DAT_14cabc708;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x28) = iVar4;
  DAT_14cabc70c = DAT_14cabc70c + 1;
  puVar3 = &DAT_14cabc6e8;
  if (DAT_14cabc6f8 != (undefined *)0x0) {
    puVar3 = DAT_14cabc6f8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cabc708 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 14589a60e FUN_14589a60e body=286 status=ok
// SIG undefined FUN_14589a60e(void)

undefined4 * FUN_14589a60e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14589a7b2(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_40 = uVar5;
  *(undefined8 *)(local_40 + 1) = *puVar1;
  local_40[3] = 0xffffffff;
  local_4c = local_48[0];
  cVar3 = FUN_14589a72e(param_1,uVar5,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar4 < 4) {
      iVar7 = 1;
    }
    else {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_40[4] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[3] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_14589a8a6(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14589a72e FUN_14589a72e body=131 status=ok
// SIG undefined FUN_14589a72e(void)

undefined8 FUN_14589a72e(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar4 * 0x14);
        if (*piVar1 == *param_3) {
          uVar2 = *(undefined8 *)param_3;
          piVar1[2] = param_3[2];
          *(undefined8 *)piVar1 = uVar2;
          FUN_14895534e(param_1,*param_4);
          *param_4 = iVar4;
          return 1;
        }
        iVar4 = piVar1[3];
      } while (iVar4 != -1);
    }
  }
  return 0;
}



// FUNCTION 14589a7b2 FUN_14589a7b2 body=243 status=ok
// SIG undefined FUN_14589a7b2(void)

int * FUN_14589a7b2(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_140171ad2(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x14);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x14) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x14 + *param_1;
  return param_2;
}



// FUNCTION 14589a8a6 FUN_14589a8a6 body=428 status=ok
// SIG undefined FUN_14589a8a6(void)

void FUN_14589a8a6(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar6 = (longlong)iVar5;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0x14);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x10 + lVar6 * 0x14) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0xc + lVar6 * 0x14) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14589aa6c FUN_14589aa6c body=468 status=ok
// SIG undefined FUN_14589aa6c(void)

void FUN_14589aa6c(longlong *param_1)

{
  void *pvVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  void *local_78;
  int local_70;
  undefined4 local_6c;
  longlong *local_68;
  undefined4 local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14101e326();
  lVar5 = DAT_14cb0d2b0;
  if ((DAT_14cb0d2b0 != 0) &&
     ((*(longlong *)(DAT_14cb0d2b0 + 0x2c8) != 0 ||
      (FUN_145876474(DAT_14cb0d2b0), *(longlong *)(lVar5 + 0x2c8) != 0)))) {
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x338))(param_1);
    if ((longlong)(int)plVar2[1] != 0) {
      lVar5 = *plVar2;
      lVar4 = (longlong)(int)plVar2[1] * 0x28;
      do {
        FUN_1412bf9f0(lVar5);
        lVar3 = FUN_1412bf9f0(lVar5);
        if (lVar3 != 0) {
          if (*(int *)((longlong)param_1 + 0x164) == -1) {
            lVar3 = FUN_1412bf9f0(lVar5);
            local_58 = (void *)0x0;
            local_50 = *(int *)(lVar3 + 0x38);
            lVar6 = (longlong)local_50;
            pvVar1 = *(void **)(lVar3 + 0x30);
            if (lVar6 == 0) {
              local_4c = 0;
            }
            else {
              FUN_1446dd670(&local_58,local_50,0);
              memcpy(local_58,pvVar1,lVar6 * 2);
            }
            FUN_1458433a4(param_1,&local_58);
          }
          lVar3 = FUN_1412bf9f0(lVar5);
          local_68 = *(longlong **)(lVar3 + 0x40);
          if (local_68 != (longlong *)0x0) {
            (**(code **)(*local_68 + 8))();
          }
          local_60 = *(undefined4 *)(lVar3 + 0x48);
          lVar3 = FUN_1412bf9f0(lVar5);
          local_78 = (void *)0x0;
          local_70 = *(int *)(lVar3 + 0x38);
          lVar6 = (longlong)local_70;
          pvVar1 = *(void **)(lVar3 + 0x30);
          if (lVar6 == 0) {
            local_6c = 0;
          }
          else {
            FUN_1446dd670(&local_78,local_70,0);
            memcpy(local_78,pvVar1,lVar6 * 2);
          }
          FUN_14100d696(param_1,&local_78);
        }
        lVar5 = lVar5 + 0x28;
        lVar4 = lVar4 + -0x28;
      } while (lVar4 != 0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14589ac42 FUN_14589ac42 body=20 status=ok
// SIG undefined FUN_14589ac42(void)

longlong FUN_14589ac42(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1402735c8();
  return lVar1 + 0x920;
}



// FUNCTION 14589ac56 FUN_14589ac56 body=20 status=ok
// SIG undefined FUN_14589ac56(void)

longlong FUN_14589ac56(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1402735c8();
  return lVar1 + 0x940;
}



// FUNCTION 14589ac6a FUN_14589ac6a body=444 status=ok
// SIG undefined FUN_14589ac6a(void)

undefined8 * FUN_14589ac6a(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_88 [40];
  longlong *local_60;
  longlong *local_58;
  undefined1 *local_50;
  undefined4 local_48;
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = (**(code **)(*(longlong *)*param_3 + 8))();
  if (lVar3 != 0) {
    lVar4 = FUN_144a2f878();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      local_50 = (undefined1 *)
                 CONCAT71(local_50._1_7_,*(char *)(lVar3 + 0x5d30) == *(char *)(param_1 + 0x10));
      local_40 = param_3[1];
      local_38 = (longlong *)param_3[2];
      if (local_38 == (longlong *)0x0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(local_38 + 1) = (int)local_38[1] + 1;
        UNLOCK();
        plVar5 = local_38;
      }
      local_58 = (longlong *)FUN_14589ae27(&local_40,&local_50);
      local_60 = local_58 + 2;
      FUN_14589af46();
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
      plVar5 = local_60;
      FUN_14485c47a(local_60 + 8,lVar3);
      local_50 = &LAB_140de98ca;
      local_48 = 0;
      FUN_14589b0ce(&local_40,&local_60);
      FUN_14589afe8(lVar3 + 0x4e28,&local_50,&local_40);
      FUN_1449db362(&local_40);
      plVar1 = local_58;
      *param_2 = plVar5;
      param_2[1] = local_58;
      if (local_58 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_58 + 1) = (int)local_58[1] + 1;
        UNLOCK();
        if (local_58 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_58 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*local_58)(local_58);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14589ae27 FUN_14589ae27 body=149 status=ok
// SIG undefined FUN_14589ae27(void)

undefined8 * FUN_14589ae27(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14b99f1f0;
  uVar1 = *param_2;
  local_30 = *param_1;
  local_28 = param_1[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_14589aebe(puVar2 + 2,&local_30,uVar1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14589aebe FUN_14589aebe body=136 status=ok
// SIG undefined FUN_14589aebe(void)

undefined8 * FUN_14589aebe(undefined8 *param_1,undefined8 *param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xf0 | param_3 * '\x02';
  *param_1 = &PTR_FUN_14b99f230;
  param_1[6] = *param_2;
  lVar3 = param_2[1];
  param_1[7] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  *param_1 = &PTR_FUN_14b99f210;
  param_1[8] = 0;
  plVar4 = (longlong *)param_2[1];
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
  return param_1;
}



// FUNCTION 14589af46 FUN_14589af46 body=162 status=ok
// SIG undefined FUN_14589af46(void)

void FUN_14589af46(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14589af85;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14589af85;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_14589af85:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014589afe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14589afe8 FUN_14589afe8 body=216 status=ok
// SIG undefined FUN_14589afe8(void)

undefined8 * FUN_14589afe8(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14589b0ce FUN_14589b0ce body=300 status=ok
// SIG undefined FUN_14589b0ce(void)

longlong * FUN_14589b0ce(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  uVar6 = *param_2;
  plVar7 = (longlong *)param_2[1];
  if (plVar7 == (longlong *)0x0) {
    *puVar5 = &PTR_LAB_14b99f2c0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b99f250;
    puVar5[3] = uVar6;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b99f2c0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b99f250;
    puVar5[3] = uVar6;
    puVar5[4] = plVar7;
    LOCK();
    *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  return param_1;
}



// FUNCTION 14589b202 FUN_14589b202 body=330 status=ok
// SIG undefined FUN_14589b202(void)

undefined8 * FUN_14589b202(undefined8 *param_1)

{
  FUN_14589b34c();
  *param_1 = &PTR_FUN_14bd732a0;
  param_1[5] = &PTR_FUN_14bd73660;
  param_1[0x13] = &PTR_FUN_14bd73680;
  param_1[0x17] = &PTR_FUN_14bd736b0;
  param_1[0x18] = &PTR_FUN_14bd736c0;
  param_1[0x35] = &PTR_FUN_14bd736d8;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = 0x140400000;
  *(undefined1 *)((longlong)param_1 + 500) = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(undefined8 *)((longlong)param_1 + 0x24c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x254) = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c4) = 0x140400000;
  *(undefined1 *)((longlong)param_1 + 0x2cc) = 0;
  param_1[0x5a] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x314) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x304) = 0;
  return param_1;
}



// FUNCTION 14589b34c FUN_14589b34c body=215 status=ok
// SIG undefined FUN_14589b34c(void)

undefined8 * FUN_14589b34c(undefined8 *param_1)

{
  FUN_1412c18ae();
  *param_1 = &PTR_FUN_14bd74810;
  param_1[5] = &PTR_FUN_14bd74bb0;
  param_1[0x13] = &PTR_FUN_14bd74bd0;
  param_1[0x17] = &PTR_FUN_14bd74c00;
  param_1[0x18] = &PTR_FUN_14bd74c10;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0x13f400000;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined2 *)(param_1 + 0x24) = 1;
  *(undefined1 *)((longlong)param_1 + 0x122) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0x3f800000;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  return param_1;
}



// FUNCTION 14589b424 FUN_14589b424 body=40 status=ok
// SIG undefined FUN_14589b424(void)

undefined8 FUN_14589b424(undefined8 param_1,int param_2)

{
  FUN_14589b44c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14589b44c FUN_14589b44c body=59 status=ok
// SIG undefined FUN_14589b44c(void)

void FUN_14589b44c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab0d0d0;
  FUN_14589b487(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14589b487 FUN_14589b487 body=44 status=ok
// SIG undefined FUN_14589b487(void)

void FUN_14589b487(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = 0;
    do {
      FUN_1459a5f9a(*(undefined8 *)(param_1 + lVar1 * 8));
      lVar1 = lVar1 + 1;
    } while (param_2 != (int)lVar1);
  }
  return;
}



// FUNCTION 14589b4be FUN_14589b4be body=223 status=ok
// SIG undefined FUN_14589b4be(void)

undefined8 * FUN_14589b4be(undefined8 *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140312256();
  *param_1 = &PTR_FUN_14aafedc0;
  param_1[0x72] = 0;
  FUN_1446f470e(&local_20,L"VirtualTextureComponent",1);
  uVar2 = FUN_14589b59e();
  local_30 = 0;
  local_38 = 1;
  lVar3 = FUN_14048696c(param_1,local_20,uVar2,uVar2);
  if (lVar3 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar3);
  }
  bVar1 = DAT_14c950c29;
  param_1[0x72] = lVar3;
  if ((lVar3 != 0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(lVar3);
    lVar3 = param_1[0x72];
  }
  param_1[0x39] = lVar3;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14589b59e FUN_14589b59e body=228 status=ok
// SIG undefined FUN_14589b59e(void)

longlong FUN_14589b59e(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cad2178 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b47bc4;
    local_38 = &LAB_147a00a60;
    local_40 = &LAB_1457e6e10;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x340;
    FUN_14081cfa3(L"/Script/Engine",L"RuntimeVirtualTextureComponent",&DAT_14cad2178,FUN_1463bad96);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad2178;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14589b684 FUN_14589b684 body=155 status=ok
// SIG undefined FUN_14589b684(void)

void FUN_14589b684(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [40];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14589b720(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14589b720 FUN_14589b720 body=12 status=ok
// SIG undefined FUN_14589b720(void)

undefined8 FUN_14589b720(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_98 [32];
  undefined4 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  wchar_t *pwStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  code **ppcStack_40;
  code *pcStack_38;
  code *pcStack_30;
  code *pcStack_28;
  ulonglong uStack_20;
  
  if (param_1 == 0) {
    return 0;
  }
  uStack_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x168);
  if (*(longlong *)(param_1 + 0x168) == 0) {
    if (param_1 == 0) goto LAB_14124e5f1;
  }
  else {
    do {
      param_1 = lVar1;
      lVar1 = *(longlong *)(param_1 + 0x168);
    } while (*(longlong *)(param_1 + 0x168) != 0);
  }
  if (DAT_14caf64b8 == 0) {
    ppcStack_40 = &pcStack_28;
    pcStack_28 = FUN_141030f22;
    pcStack_30 = FUN_14081d0ea;
    pcStack_38 = FUN_142b4754c;
    puStack_48 = &LAB_147c45ce0;
    puStack_50 = &LAB_1463f1ff4;
    pwStack_58 = L"Game";
    uStack_60 = 0x4000000000;
    uStack_68 = 0x10000004;
    uStack_70 = 8;
    uStack_78 = 0x428;
    FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
  }
  lVar1 = *(longlong *)(param_1 + 0x10);
  iVar2 = *(int *)(lVar1 + 0x38);
  if ((iVar2 < *(int *)(DAT_14caf64b8 + 0x38)) ||
     (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) !=
      DAT_14caf64b8 + 0x30)) {
    if (DAT_14cad3ae0 == 0) {
      ppcStack_40 = &pcStack_28;
      pcStack_28 = FUN_141030f22;
      pcStack_30 = FUN_14081d0ea;
      pcStack_38 = FUN_142b4754c;
      puStack_48 = &LAB_147a36475;
      puStack_50 = &LAB_1463c0cc7;
      pwStack_58 = L"Engine";
      uStack_60 = 0;
      uStack_68 = 0x10000005;
      uStack_70 = 8;
      uStack_78 = 0x428;
      FUN_14081cfa3(L"/Script/Engine",L"Controller",&DAT_14cad3ae0,FUN_1463c0ca0);
      lVar1 = *(longlong *)(param_1 + 0x10);
      iVar2 = *(int *)(lVar1 + 0x38);
    }
    if ((iVar2 < *(int *)(DAT_14cad3ae0 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cad3ae0 + 0x38) * 8) !=
        DAT_14cad3ae0 + 0x30)) {
LAB_14124e5f1:
      if ((uStack_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uStack_20 ^ (ulonglong)auStack_98);
}



// FUNCTION 14589b72c FUN_14589b72c body=384 status=ok
// SIG undefined FUN_14589b72c(void)

void FUN_14589b72c(longlong param_1,longlong param_2)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined1 *)(param_1 + 0x40f8) = 0;
  *(undefined8 *)(param_1 + 0x3b68) = 0;
  if ((*(longlong **)(&DAT_00001ce8 + param_1) != (longlong *)0x0) &&
     (cVar2 = (**(code **)(**(longlong **)(&DAT_00001ce8 + param_1) + 0x700))(), cVar2 != '\0')) {
    *(byte *)(param_1 + 0x3ba0) = *(byte *)(param_1 + 0x3ba0) & 0xfe;
  }
  FUN_14589b8ae(param_1 + 0x3bd0);
  FUN_14589b8ae(param_1 + 0x3d80);
  if (*(char *)(param_2 + 1) == '\0') {
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)(param_2 + 8);
  }
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar3);
  }
  local_30 = *(undefined8 *)(param_2 + 0x28);
  local_40 = *(undefined4 *)(param_2 + 0x18);
  uStack_3c = *(undefined4 *)(param_2 + 0x1c);
  uStack_38 = *(undefined4 *)(param_2 + 0x20);
  uStack_34 = *(undefined4 *)(param_2 + 0x24);
  local_48 = lVar3;
  FUN_14589ba16(param_1 + 0x3bb8);
  if ((longlong)*(int *)(param_1 + 0x41a0) != 0) {
    lVar3 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_1 + 0x4198) + 8 + lVar3) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x4198) + lVar3) != 0)) {
        FUN_1404f44a8(param_1 + 0x4198,param_1);
        break;
      }
      lVar3 = lVar3 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x41a0) * 0x10 != lVar3);
  }
  if (*(longlong **)(&DAT_00001ce8 + param_1) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(&DAT_00001ce8 + param_1) + 0x9b8))();
    lVar3 = *(longlong *)(&DAT_00001ce8 + param_1);
    pcVar1 = *(code **)(*(longlong *)(lVar3 + 0x1108) + 0x10);
    if (pcVar1 == (code *)&LAB_144801c46) {
      lVar3 = lVar3 + 0x1600;
    }
    else {
      lVar3 = (*pcVar1)(lVar3 + 0x1108);
    }
    FUN_1400bc8c2(lVar3 + 0x108,&DAT_14cb760c8);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14589b8ae FUN_14589b8ae body=251 status=ok
// SIG undefined FUN_14589b8ae(void)

void FUN_14589b8ae(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  FUN_1412c2a40();
  if (*(longlong *)(param_1 + 0x38) != 0) {
    iVar1 = *(int *)(param_1 + 0x188);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x180);
      lVar6 = 0;
      do {
        lVar5 = *(longlong *)(lVar2 + lVar6);
        if ((lVar5 != 0) && ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0)) {
          lVar5 = FUN_140288b94();
          plVar3 = *(longlong **)(lVar2 + lVar6);
          if (((plVar3 != (longlong *)0x0) &&
              (((lVar5 != 0 && (lVar4 = plVar3[2], lVar4 != 0)) &&
               (*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38))))) &&
             (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
              lVar5 + 0x30)) {
            FUN_14589b9aa(*(undefined8 *)(param_1 + 0x38),plVar3);
            (**(code **)(*plVar3 + 0x4a0))(plVar3,&DAT_14cadad9c);
            (**(code **)(*plVar3 + 0x2b0))(plVar3);
          }
        }
        lVar6 = lVar6 + 0x18;
      } while ((longlong)iVar1 * 0x18 != lVar6);
    }
    *(undefined4 *)(param_1 + 0x188) = 0;
    if (*(int *)(param_1 + 0x18c) < 0) {
      FUN_14880e1a0(param_1 + 0x180);
      return;
    }
  }
  return;
}



// FUNCTION 14589b9aa FUN_14589b9aa body=107 status=ok
// SIG undefined FUN_14589b9aa(void)

void FUN_14589b9aa(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != (longlong *)0x0) {
    local_28 = 0;
    FUN_14485c47a(&local_28,param_1);
    local_20 = DAT_14cb760d0;
    (**(code **)(*param_2 + 0xa88))(param_2,&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14589ba16 FUN_14589ba16 body=119 status=ok
// SIG undefined FUN_14589ba16(void)

void FUN_14589ba16(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (local_38 == 0) {
      local_38 = 0;
    }
    else {
      FUN_1456cec3c();
      local_38 = *param_2;
    }
  }
  local_30 = (undefined4)param_2[1];
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_28 = (undefined4)param_2[2];
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0x14);
  local_20 = param_2[3];
  FUN_1447cd2ec(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14589ba8e FUN_14589ba8e body=81 status=ok
// SIG undefined FUN_14589ba8e(void)

void FUN_14589ba8e(longlong *param_1,undefined4 param_2)

{
  uint uVar1;
  
  FUN_144a7e84a();
  uVar1 = *(uint *)(param_1 + 0x5d);
  (**(code **)(*param_1 + 0x5e0))
            (param_1,uVar1 & 0xffffff01,(uVar1 & 0x20) >> 5,(uVar1 & 0x40) >> 6,param_2);
  return;
}



// FUNCTION 14589bae0 FUN_14589bae0 body=40 status=ok
// SIG undefined FUN_14589bae0(void)

undefined8 FUN_14589bae0(undefined8 param_1,int param_2)

{
  FUN_14589bb08();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14589bb08 FUN_14589bb08 body=210 status=ok
// SIG undefined FUN_14589bb08(void)

void FUN_14589bb08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ae39fe0;
  FUN_14589bbda(param_1[0x1b],*(undefined4 *)(param_1 + 0x1c));
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_1412c2c53(param_1[0x19],*(undefined4 *)(param_1 + 0x1a));
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_14589bc68(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0xb] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xb] + 0x10))();
  }
  if ((longlong *)param_1[9] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[9] + 0x10))();
  }
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[7] + 0x10))();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14589bbda FUN_14589bbda body=41 status=ok
// SIG undefined FUN_14589bbda(void)

void FUN_14589bbda(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14589bc04(param_1);
    param_1 = param_1 + 0xc0;
  }
  return;
}



// FUNCTION 14589bc04 FUN_14589bc04 body=100 status=ok
// SIG undefined FUN_14589bc04(void)

void FUN_14589bc04(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  param_1[2] = (longlong)&PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x16];
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
  FUN_144a65a1e(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14589bc68 FUN_14589bc68 body=47 status=ok
// SIG undefined FUN_14589bc68(void)

void FUN_14589bc68(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14589bc98 FUN_14589bc98 body=1875 status=ok
// SIG undefined FUN_14589bc98(void)

void FUN_14589bc98(longlong *param_1,char param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  undefined4 local_b8;
  undefined2 local_b0;
  undefined4 local_ac;
  undefined8 *local_a8;
  ulonglong uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((*param_1 == 0) || (lVar6 = *(longlong *)(&DAT_00006850 + *param_1), lVar6 == 0)) {
    FUN_144a7e912(param_1 + 0x16);
  }
  else {
    lVar10 = *(longlong *)(lVar6 + 0x44c0);
    cVar4 = FUN_144a7e912(param_1 + 0x16);
    plVar12 = param_1 + 0x23;
    if (cVar4 != '\0') {
      plVar12 = param_1 + 0x16;
    }
    cVar4 = FUN_144a7e912(plVar12);
    if (cVar4 != '\0') {
      if (param_2 == '\0') {
        lVar9 = *param_1;
        if (param_1[0x54] == 0) {
LAB_14589bd58:
          *(undefined1 *)(param_1 + 8) = 2;
          if (lVar9 != 0) {
LAB_14589bd61:
            FUN_144a62f0c(lVar9,*(undefined8 *)(lVar9 + 0x28),0x4d);
          }
        }
        else {
          if (lVar9 != 0) {
            if (*(longlong *)(&DAT_00006850 + lVar9) != 0) {
              FUN_1412c2f4c(*(longlong *)(&DAT_00006850 + lVar9),param_1 + 0x54);
              lVar9 = *param_1;
              goto LAB_14589bd58;
            }
            *(undefined1 *)(param_1 + 8) = 2;
            goto LAB_14589bd61;
          }
          *(undefined1 *)(param_1 + 8) = 2;
        }
        FUN_14589c8c6(param_1,plVar12);
        cVar4 = FUN_1412c32aa(plVar12);
        if (cVar4 != '\0') {
          FUN_1409c9c98(param_1,1);
          plVar12 = (longlong *)(lVar6 + 0x178);
          cVar4 = (**(code **)(*(longlong *)(lVar6 + 0x178) + 0xd8))(plVar12);
          if (((cVar4 != '\0') && (*(char *)(lVar10 + 0x3d3) != '\0')) ||
             ((cVar4 = (**(code **)(*plVar12 + 0xd8))(plVar12), cVar4 == '\0' &&
              (*(char *)(lVar10 + 0x3d2) == '\x01')))) {
            FUN_14589d044(param_1);
          }
          if (lVar10 != 0) {
            if (*(char *)(lVar10 + 0x3d0) == '\x01') {
              FUN_1400bc96c(lVar6 + 0x1b70,&DAT_14cbcb2c8);
            }
            if (*(char *)(lVar10 + 0x3d1) == '\x01') {
              FUN_1400bc96c(lVar6 + 0x1b98,&DAT_14cbcb2c8);
            }
          }
        }
        if ((*param_1 != 0) && (*(char *)(*param_1 + 0x178) == '\x03')) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_e8);
        }
        goto LAB_14589c0cb;
      }
      FUN_14589c430(param_1);
      if (((param_1[0x55] != 0) && (*param_1 != 0)) &&
         (*(longlong *)(&DAT_00006850 + *param_1) != 0)) {
        FUN_1412c2f4c(*(longlong *)(&DAT_00006850 + *param_1),param_1 + 0x55);
      }
      FUN_1400bc8c2(lVar6 + 0x1b70,&DAT_14cbcb2c8);
      FUN_1400bc8c2(lVar6 + 0x1b98,&DAT_14cbcb2c8);
      FUN_1400bc8c2(lVar6 + 0x1b98,&DAT_14cbcb2d0);
      if (((*(char *)(lVar10 + 0x3c1) == '\x01') && (*param_1 != 0)) &&
         (lVar9 = *(longlong *)(*param_1 + 0x3c0), lVar9 != 0)) {
        lVar8 = FUN_144a5dd5e();
        if (((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar8 + 0x38) * 8) != lVar8 + 0x30)) ||
           (lVar9 = *(longlong *)(lVar9 + 0x32f0), lVar9 == 0)) goto LAB_14589be54;
        local_a8 = (undefined8 *)0x0;
        uStack_a0 = 0;
        local_98 = (undefined4)DAT_14c8464e0;
        uStack_94 = DAT_14c8464e0._4_4_;
        uStack_90 = (undefined4)DAT_14c8464e8;
        uStack_8c = DAT_14c8464e8._4_4_;
        local_88 = DAT_14c8464f0;
        local_80 = (undefined4)DAT_14c8464f8;
        uStack_7c = DAT_14c8464f8._4_4_;
        uStack_78 = (undefined4)DAT_14c846500;
        uStack_74 = DAT_14c846500._4_4_;
        local_70 = DAT_14c846508;
        local_68 = (undefined4)DAT_14c8464e0;
        uStack_64 = DAT_14c8464e0._4_4_;
        uStack_60 = (undefined4)DAT_14c8464e8;
        uStack_5c = DAT_14c8464e8._4_4_;
        local_58 = DAT_14c8464f0;
        FUN_14029d902(lVar9);
        local_c8 = *plVar12;
        if ((local_c8 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        local_c0 = plVar12[1];
        local_b8 = (undefined4)plVar12[2];
        local_ac = 0;
        local_b0 = 1;
        FUN_148dabece(lVar9,&local_a8,&local_c8);
        bVar13 = local_b0._1_1_ == '\0';
      }
      else {
LAB_14589be54:
        bVar13 = false;
      }
      cVar4 = FUN_14136a3ac(param_1);
      if ((cVar4 == '\0') || (bVar13)) {
        uVar7 = FUN_1412c3498(plVar12);
        puVar5 = (undefined8 *)FUN_1412c3498(plVar12);
        FUN_14136a5f7(param_1 + 0x6d,*puVar5,uVar7);
        if ((lVar10 != 0) && (*(char *)(lVar10 + 0x500) == '\x01')) {
          plVar12 = (longlong *)param_1[0x4b];
          if (plVar12 != (longlong *)0x0) {
            (**(code **)(*plVar12 + 0xa88))(plVar12,param_1 + 0x52);
            (**(code **)(*(longlong *)param_1[0x4b] + 0x2b0))();
            param_1[0x4b] = 0;
          }
          param_1[0x4c] = 0;
          param_1[0x4d] = 0;
          *(undefined4 *)(param_1 + 0x4e) = 0;
          uVar3 = DAT_14c8464e8._4_4_;
          uVar2 = (undefined4)DAT_14c8464e8;
          uVar1 = DAT_14c8464e0._4_4_;
          *(undefined4 *)(param_1 + 0x4f) = (undefined4)DAT_14c8464e0;
          *(undefined4 *)((longlong)param_1 + 0x27c) = uVar1;
          *(undefined4 *)(param_1 + 0x50) = uVar2;
          *(undefined4 *)((longlong)param_1 + 0x284) = uVar3;
          param_1[0x51] = DAT_14c8464f0;
        }
        FUN_1409c9c98(param_1,0);
      }
      else {
        cVar4 = FUN_1412c32aa(plVar12);
        if (cVar4 != '\0') {
          FUN_14589cf00(param_1);
          FUN_14136a512(param_1,plVar12);
          FUN_14589c77c(param_1,plVar12);
        }
        FUN_141009ce2(lVar6,0x40000);
        *(undefined1 *)(param_1 + 8) = 0;
        lVar6 = *param_1;
        if (lVar6 != 0) {
          FUN_144a62f0c(lVar6,*(undefined8 *)(lVar6 + 0x28),0x4d);
        }
        FUN_14589c4e4(param_1,plVar12);
        if ((*param_1 != 0) && (*(char *)(*param_1 + 0x178) == '\x03')) {
          lVar6 = *plVar12;
          if ((lVar6 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c(lVar6);
          }
          if (((lVar6 != 0) && ((longlong *)plVar12[1] != (longlong *)0x0)) &&
             (cVar4 = (**(code **)(*(longlong *)plVar12[1] + 0x58))(), cVar4 != '\0')) {
            lVar6 = *plVar12;
            if ((lVar6 != 0 & DAT_14c950c29) == 1) {
              FUN_1456cec3c(lVar6);
            }
            plVar11 = (longlong *)0x0;
            if (lVar6 != 0) {
              plVar11 = (longlong *)plVar12[1];
            }
            puVar5 = (undefined8 *)(**(code **)(*plVar11 + 0x20))(plVar11);
            *puVar5 = 0;
            puVar5[1] = 0;
            lVar6 = *plVar12;
            if ((lVar6 != 0 & DAT_14c950c29) == 1) {
              FUN_1456cec3c(lVar6);
            }
            plVar11 = (longlong *)0x0;
            if (lVar6 != 0) {
              plVar11 = (longlong *)plVar12[1];
            }
            lVar6 = (**(code **)(*plVar11 + 0x20))(plVar11);
            if ((*(longlong *)(lVar6 + 0x18) != 0) &&
               (*(longlong **)(lVar6 + 0x20) != (longlong *)0x0)) {
              (**(code **)(**(longlong **)(lVar6 + 0x20) + 0x28))();
            }
          }
        }
        cVar4 = FUN_1412c32aa(plVar12);
        if (cVar4 == '\0') {
          *(undefined1 *)(plVar12 + 3) = 0;
          *plVar12 = 0;
          plVar12[1] = 0;
          *(undefined4 *)(plVar12 + 2) = 0;
          lVar6 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          plVar12[4] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          plVar12[5] = lVar6;
          plVar12[6] = DAT_14c8464f0;
          plVar12[7] = 0;
          uVar3 = DAT_14c8464e8._4_4_;
          uVar2 = (undefined4)DAT_14c8464e8;
          uVar1 = DAT_14c8464e0._4_4_;
          *(undefined4 *)(plVar12 + 8) = (undefined4)DAT_14c8464e0;
          *(undefined4 *)((longlong)plVar12 + 0x44) = uVar1;
          *(undefined4 *)(plVar12 + 9) = uVar2;
          *(undefined4 *)((longlong)plVar12 + 0x4c) = uVar3;
          plVar12[10] = DAT_14c8464f0;
          if ((longlong *)plVar12[0xb] != (longlong *)0x0) {
            (**(code **)(*(longlong *)plVar12[0xb] + 0x2b0))();
            plVar12[0xb] = 0;
          }
        }
        lVar6 = *param_1;
        if ((lVar6 != 0) && (*(char *)(lVar6 + 0x178) == '\x03')) {
          param_1[0x30] = 0;
          param_1[0x31] = 0;
          *(undefined4 *)(param_1 + 0x32) = 0;
          FUN_144a62f0c(lVar6,*(undefined8 *)(lVar6 + 0x28),0x4d);
        }
        if (lVar10 != 0) {
          uVar1 = *(undefined4 *)(lVar10 + 0x3f4);
          local_a8 = (undefined8 *)0x0;
          uStack_a0 = uStack_a0 & 0xffffffff00000000;
          FUN_1446efa72(&local_a8,0,2,0x10);
          uStack_a0 = CONCAT44(uStack_a0._4_4_,2);
          *local_a8 = &PTR_LAB_14a1c8830;
          LOCK();
          UNLOCK();
          lVar10 = DAT_14c758608 + 1;
          lVar6 = DAT_14c758608 + 1;
          if (lVar10 == 0) {
            LOCK();
            UNLOCK();
            lVar10 = DAT_14c758608 + 2;
            lVar6 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar6;
          local_a8[2] = lVar10;
          *local_a8 = &PTR_FUN_14b974c10;
          local_a8[3] = param_1;
          if ((*param_1 != 0) && (*(longlong *)(&DAT_00006850 + *param_1) != 0)) {
            FUN_14136a272(*(longlong *)(&DAT_00006850 + *param_1),param_1 + 0x59,&local_a8,uVar1);
          }
          FUN_1449db362(&local_a8);
        }
        lVar6 = *param_1;
        if ((lVar6 != 0) && (*(char *)(lVar6 + 0x178) == '\x03')) {
          FUN_1447f69b6(lVar6 + 0x5638);
        }
      }
      goto LAB_14589c0cb;
    }
  }
  if (param_2 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_e8);
  }
LAB_14589c0cb:
  if ((local_50 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14589c430 FUN_14589c430 body=179 status=ok
// SIG undefined FUN_14589c430(void)

void FUN_14589c430(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*param_1 != 0) && (lVar1 = *(longlong *)(&DAT_00006850 + *param_1), lVar1 != 0)) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    lVar2 = lVar1 + 0x1110;
    if (*(longlong *)(lVar1 + 0x1140) != 0) {
      lVar2 = *(longlong *)(lVar1 + 0x1140);
    }
    if ((longlong)*(int *)(lVar1 + 0x1148) != 0) {
      lVar3 = (longlong)*(int *)(lVar1 + 0x1148) * 0xc;
      do {
        if (*(longlong *)(lVar2 + 4) == DAT_14cbcb2c8) {
          if (lVar2 != 0) {
            FUN_1409df526(lVar1,&DAT_14cbcb2c8);
          }
          break;
        }
        lVar2 = lVar2 + 0xc;
        lVar3 = lVar3 + -0xc;
      } while (lVar3 != 0);
    }
  }
  if (((param_1[0x57] != 0) && (*param_1 != 0)) && (*(longlong *)(&DAT_00006850 + *param_1) != 0)) {
    FUN_1412c2f4c(*(longlong *)(&DAT_00006850 + *param_1),param_1 + 0x57);
    return;
  }
  return;
}



// FUNCTION 14589c4e4 FUN_14589c4e4 body=470 status=ok
// SIG undefined FUN_14589c4e4(void)

void FUN_14589c4e4(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  
  if ((*param_1 == 0) || (*(longlong *)(&DAT_00006850 + *param_1) == 0)) {
    lVar9 = 0;
  }
  else {
    lVar9 = *(longlong *)(*(longlong *)(&DAT_00006850 + *param_1) + 0x44c0);
  }
  plVar5 = (longlong *)FUN_1412c3498(param_2);
  plVar5 = (longlong *)*plVar5;
  if (plVar5 != (longlong *)0x0) {
    uVar6 = FUN_140437b04();
    plVar7 = (longlong *)(**(code **)(*plVar5 + 0x288))(plVar5,uVar6);
    if (plVar7 != (longlong *)0x0) {
      uVar6 = FUN_140437b04();
      plVar8 = (longlong *)FUN_144718840(plVar7,uVar6);
      if ((plVar7 != plVar8) && (plVar8 != (longlong *)0x0)) {
        uVar6 = FUN_1412c3498(param_2);
        FUN_14136a5f7(param_1 + 0x65,plVar5,uVar6);
        if ((lVar9 != 0) && (*(char *)(lVar9 + 0x500) == '\x01')) {
          plVar7 = (longlong *)param_1[0x4b];
          if (plVar7 != (longlong *)0x0) {
            (**(code **)(*plVar7 + 0xa88))(plVar7,param_1 + 0x52);
            (**(code **)(*(longlong *)param_1[0x4b] + 0x2b0))();
            param_1[0x4b] = 0;
          }
          param_1[0x4c] = 0;
          param_1[0x4d] = 0;
          *(undefined4 *)(param_1 + 0x4e) = 0;
          uVar3 = DAT_14c8464e8._4_4_;
          uVar2 = (undefined4)DAT_14c8464e8;
          uVar1 = DAT_14c8464e0._4_4_;
          *(undefined4 *)(param_1 + 0x4f) = (undefined4)DAT_14c8464e0;
          *(undefined4 *)((longlong)param_1 + 0x27c) = uVar1;
          *(undefined4 *)(param_1 + 0x50) = uVar2;
          *(undefined4 *)((longlong)param_1 + 0x284) = uVar3;
          param_1[0x51] = DAT_14c8464f0;
        }
        lVar9 = *param_2;
        if ((lVar9 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar9);
        }
        uVar6 = 0;
        if ((lVar9 != 0) && ((longlong *)param_2[1] != (longlong *)0x0)) {
          uVar6 = (**(code **)(*(longlong *)param_2[1] + 0x10))();
        }
        lVar9 = FUN_1412c348c(uVar6);
        if (lVar9 != 0) {
          cVar4 = FUN_148cc6424(lVar9);
          if (cVar4 != '\0') {
            FUN_148cc63fa(lVar9,plVar5);
            return;
          }
        }
                    /* WARNING: Could not recover jumptable at 0x00014589c5fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar8 + 0x48))(plVar8,*param_1,param_2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14589c6ba FUN_14589c6ba body=193 status=ok
// SIG undefined FUN_14589c6ba(void)

void FUN_14589c6ba(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_54;
  undefined8 local_50;
  undefined4 local_48;
  longlong local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_54 = 0;
  local_50 = DAT_14c9a63f8;
  local_48 = 0xffffffff;
  local_68 = DAT_14cbcb0b8;
  local_60 = 0xffffffff;
  FUN_140f8b8f2(param_1 + -0x1600);
  FUN_1458cfba8(param_1,param_2,param_3);
  FUN_141460aa2(&local_50);
  FUN_141460ac0(param_1 + -0xeb8,&DAT_14cbcd508,&local_50);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14589c77c FUN_14589c77c body=142 status=ok
// SIG undefined FUN_14589c77c(void)

void FUN_14589c77c(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  
  if ((*param_1 == 0) || (*(longlong *)(&DAT_00006850 + *param_1) == 0)) {
    bVar3 = 0;
    bVar4 = false;
  }
  else {
    bVar4 = *(longlong *)(*(longlong *)(&DAT_00006850 + *param_1) + 0x44c0) != 0;
    bVar3 = 1;
  }
  cVar1 = FUN_144a7e912(param_2);
  if ((((cVar1 != '\0') && (cVar1 = FUN_1412c32aa(param_2), cVar1 != '\0')) &&
      (cVar1 = FUN_14136a3ac(param_1), cVar1 != '\0')) &&
     (bVar2 = FUN_140666516(param_1,param_2), (bVar4 & bVar3 & bVar2) == 1)) {
    FUN_14589c80a(param_1,param_2);
    *(undefined1 *)(param_1 + 0x37) = 2;
  }
  return;
}



// FUNCTION 14589c80a FUN_14589c80a body=188 status=ok
// SIG undefined FUN_14589c80a(void)

void FUN_14589c80a(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  if (((*param_1 != 0) && (lVar1 = *(longlong *)(&DAT_00006850 + *param_1), lVar1 != 0)) &&
     (*(longlong *)(lVar1 + 0x44c0) != 0)) {
    cVar2 = FUN_144a7e912(param_2);
    if (cVar2 != '\0') {
      cVar2 = FUN_1412c32aa(param_2);
      if (cVar2 != '\0') {
        *(undefined4 *)((longlong)param_1 + 0x1bc) = 0;
        if (((param_1[0x56] != 0) && (*param_1 != 0)) &&
           (*(longlong *)(&DAT_00006850 + *param_1) != 0)) {
          FUN_1412c2f4c(*(longlong *)(&DAT_00006850 + *param_1),param_1 + 0x56);
        }
        if (((&DAT_00001100)[lVar1] == '\n') && (*(longlong *)(lVar1 + 0x110) != 0)) {
          uVar3 = FUN_14880889c(lVar1);
          FUN_1409df526(lVar1,uVar3);
        }
        FUN_1412c36b6(param_1,param_2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14589c8c6 FUN_14589c8c6 body=1399 status=ok
// SIG undefined FUN_14589c8c6(void)

void FUN_14589c8c6(longlong *param_1,longlong *param_2)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  double dVar6;
  char cVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 auStack_168 [32];
  undefined1 local_148;
  undefined1 local_140;
  double local_130;
  double local_128;
  double local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  double dStack_110;
  double local_108;
  undefined1 local_100 [24];
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  double local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_168;
  plVar8 = (longlong *)FUN_1412c3498(param_2);
  plVar8 = (longlong *)*plVar8;
  if (plVar8 == (longlong *)0x0) goto LAB_14589ccfc;
  uVar9 = FUN_140437b04();
  plVar10 = (longlong *)(**(code **)(*plVar8 + 0x288))(plVar8,uVar9);
  if (plVar10 == (longlong *)0x0) goto LAB_14589ccfc;
  uVar9 = FUN_140437b04();
  plVar11 = (longlong *)FUN_144718840(plVar10,uVar9);
  if ((plVar10 == plVar11) || (plVar11 == (longlong *)0x0)) goto LAB_14589ccfc;
  if ((*param_1 != 0) &&
     ((*(longlong *)(&DAT_00006850 + *param_1) != 0 &&
      (lVar12 = *(longlong *)(*(longlong *)(&DAT_00006850 + *param_1) + 0x44c0), lVar12 != 0)))) {
    plVar10 = (longlong *)param_1[0x4b];
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0xa88))(plVar10,param_1 + 0x52);
      (**(code **)(*(longlong *)param_1[0x4b] + 0xa68))();
      param_1[0x4b] = 0;
    }
    param_1[0x4c] = 0;
    param_1[0x4d] = 0;
    *(undefined4 *)(param_1 + 0x4e) = 0;
    uVar5 = DAT_14c8464e8._4_4_;
    uVar4 = (undefined4)DAT_14c8464e8;
    uVar3 = DAT_14c8464e0._4_4_;
    *(undefined4 *)(param_1 + 0x4f) = (undefined4)DAT_14c8464e0;
    *(undefined4 *)((longlong)param_1 + 0x27c) = uVar3;
    *(undefined4 *)(param_1 + 0x50) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x284) = uVar5;
    param_1[0x51] = DAT_14c8464f0;
    if (param_1[0x4a] == 0) {
      lVar12 = FUN_1402d1dc0(lVar12 + 0x4d8);
      if ((lVar12 != 0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(lVar12);
        param_1[0x4a] = lVar12;
        goto LAB_14589c9e1;
      }
      param_1[0x4a] = lVar12;
      if (lVar12 != 0) goto LAB_14589c9e1;
      plVar10 = (longlong *)param_1[0x4b];
    }
    else {
LAB_14589c9e1:
      uVar9 = FUN_1412c3498(param_2);
      FUN_14066734e(uVar9,&local_e8);
      FUN_140258d06(param_1,&local_118);
      local_d8 = local_b8 - local_108;
      dStack_e0 = (double)CONCAT44(uStack_bc,uStack_c0) - dStack_110;
      local_e8 = (double)CONCAT44(uStack_c4,local_c8) - (double)CONCAT44(uStack_114,local_118);
      FUN_144a79a9c(&local_e8,local_100);
      FUN_140258d06(param_1,&local_118);
      FUN_144a7484c(local_100,&local_e8);
      uStack_c0 = SUB84(dStack_110,0);
      uStack_bc = (undefined4)((ulonglong)dStack_110 >> 0x20);
      local_c8 = local_118;
      uStack_c4 = uStack_114;
      local_b8 = local_108;
      uStack_b0 = 0;
      local_a8 = 0x3ff0000000000000;
      uStack_a0 = 0x3ff0000000000000;
      local_98 = 0x3ff0000000000000;
      uStack_90 = 0;
      lVar12 = param_1[0x4a];
      if (*param_1 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = FUN_1447210f0();
      }
      local_140 = 1;
      local_148 = 0;
      plVar10 = (longlong *)FUN_1405837ac(uVar9,lVar12,&local_e8,1);
      if (plVar10 == (longlong *)0x0) {
LAB_14589cdb3:
        plVar10 = (longlong *)0x0;
      }
      else {
        lVar12 = FUN_144a7e9aa();
        if ((*(int *)(plVar10[2] + 0x38) < *(int *)(lVar12 + 0x38)) ||
           (*(longlong *)(*(longlong *)(plVar10[2] + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8)
            != lVar12 + 0x30)) goto LAB_14589cdb3;
        if (DAT_14c950c29 == 1) {
          FUN_1456cec3c(plVar10);
        }
      }
      param_1[0x4b] = (longlong)plVar10;
    }
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0xa80))(plVar10,param_1 + 0x52);
      lVar12 = param_1[0x4b];
      uVar9 = FUN_1412c3498(param_2);
      FUN_14066734e(uVar9,&local_e8);
      dVar6 = local_b8;
      dVar1 = (double)CONCAT44(uStack_c4,local_c8);
      dVar2 = (double)CONCAT44(uStack_bc,uStack_c0);
      FUN_140258d06(param_1,&local_e8);
      dVar2 = dVar2 - dStack_e0;
      dVar1 = dVar1 - local_e8;
      local_130 = SQRT((dVar6 - local_d8) * (dVar6 - local_d8) + dVar1 * dVar1 + dVar2 * dVar2);
      local_120 = DAT_14c8463b0 * local_130;
      local_128 = DAT_14c8463a8 * local_130;
      local_130 = local_130 * DAT_14c8463a0;
      FUN_1404e0f62(lVar12,DAT_14cbcb2f0);
      (**(code **)(*(longlong *)param_1[0x4b] + 0xa60))((longlong *)param_1[0x4b],1);
      uVar9 = FUN_1412c3498(param_2);
      FUN_14066734e(uVar9,&local_e8);
      *(undefined4 *)(param_1 + 0x4f) = local_c8;
      *(undefined4 *)((longlong)param_1 + 0x27c) = uStack_c4;
      *(undefined4 *)(param_1 + 0x50) = uStack_c0;
      *(undefined4 *)((longlong)param_1 + 0x284) = uStack_bc;
      param_1[0x51] = (longlong)local_b8;
      lVar12 = *param_2;
      if (DAT_14c950c29 == 1) {
        if (lVar12 == 0) {
          lVar12 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar12 = *param_2;
        }
      }
      param_1[0x4c] = lVar12;
      param_1[0x4d] = param_2[1];
      *(int *)(param_1 + 0x4e) = (int)param_2[2];
    }
  }
  lVar12 = *param_2;
  if ((lVar12 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar12);
  }
  uVar9 = 0;
  if ((lVar12 != 0) && ((longlong *)param_2[1] != (longlong *)0x0)) {
    uVar9 = (**(code **)(*(longlong *)param_2[1] + 0x10))();
  }
  lVar12 = FUN_1412c348c(uVar9);
  if (lVar12 == 0) {
    uVar9 = FUN_1412c3498(param_2);
    FUN_14136a5f7(param_1 + 99,plVar8,uVar9);
  }
  else {
    cVar7 = FUN_148cc6424(lVar12);
    uVar9 = FUN_1412c3498(param_2);
    FUN_14136a5f7(param_1 + 99,plVar8,uVar9);
    if (cVar7 != '\0') goto LAB_14589ccfc;
  }
  (**(code **)(*plVar11 + 0x40))(plVar11,*param_1,param_2);
LAB_14589ccfc:
  if ((local_80 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14589ce3e FUN_14589ce3e body=193 status=ok
// SIG undefined FUN_14589ce3e(void)

void FUN_14589ce3e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_54;
  undefined8 local_50;
  undefined4 local_48;
  longlong local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_54 = 0;
  local_50 = DAT_14c9a6400;
  local_48 = 0xffffffff;
  local_68 = DAT_14cbcb0b8;
  local_60 = 0xffffffff;
  FUN_140f8b8f2(param_1 + -0x1600);
  FUN_14581f2e6(param_1,param_2,param_3);
  FUN_141460aa2(&local_50);
  FUN_141460ac0(param_1 + -0xeb8,&DAT_14cbcd500,&local_50);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14589cf00 FUN_14589cf00 body=323 status=ok
// SIG undefined FUN_14589cf00(void)

void FUN_14589cf00(longlong *param_1)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*param_1 != 0) && (lVar2 = *(longlong *)(&DAT_00006850 + *param_1), lVar2 != 0)) {
    if (*(longlong *)(lVar2 + 0x44c0) != 0) {
      fVar1 = *(float *)(*(longlong *)(lVar2 + 0x44c0) + 0x3e4);
      if (0.0 < fVar1) {
        local_40 = (undefined8 *)0x0;
        local_38 = 0;
        FUN_1446efa72(&local_40,0,2,0x10);
        local_38 = 2;
        *local_40 = &PTR_LAB_14a1c8830;
        LOCK();
        UNLOCK();
        lVar4 = DAT_14c758608 + 1;
        lVar3 = DAT_14c758608 + 1;
        if (lVar4 == 0) {
          LOCK();
          UNLOCK();
          lVar4 = DAT_14c758608 + 2;
          lVar3 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar3;
        local_40[2] = lVar4;
        *local_40 = &PTR_FUN_14b974ba0;
        local_40[3] = param_1;
        if ((*param_1 != 0) && (*(longlong *)(&DAT_00006850 + *param_1) != 0)) {
          FUN_14136a272(*(longlong *)(&DAT_00006850 + *param_1),param_1 + 0x58,&local_40,fVar1);
        }
        FUN_1449db362(&local_40);
      }
    }
    FUN_140257a06(lVar2,&DAT_14cbcb2d8,0xc);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14589d044 FUN_14589d044 body=440 status=ok
// SIG undefined FUN_14589d044(void)

void FUN_14589d044(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*param_1 == 0) || (lVar3 = *(longlong *)(&DAT_00006850 + *param_1), lVar3 == 0)) {
    lVar2 = 0;
    lVar3 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar3 + 0x44c0);
  }
  fVar4 = (float)FUN_14589d1fe(param_1);
  if ((lVar2 != 0) && (lVar3 != 0)) {
    if (0.0 < fVar4) {
      *(float *)(param_1 + 0x38) =
           (float)(((double)*(float *)(lVar2 + 0x3d4) *
                   SQRT(*(double *)(lVar3 + 0x138) * *(double *)(lVar3 + 0x138) +
                        *(double *)(lVar3 + 0x128) * *(double *)(lVar3 + 0x128) +
                        *(double *)(lVar3 + 0x130) * *(double *)(lVar3 + 0x130))) / (double)fVar4);
      local_40 = (undefined8 *)0x0;
      local_38 = 0;
      FUN_1446efa72(&local_40,0,2,0x10);
      local_38 = 2;
      *local_40 = &PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar1 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar1 == 0) {
        LOCK();
        UNLOCK();
        lVar1 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      local_40[2] = lVar1;
      *local_40 = &PTR_FUN_14b974b30;
      local_40[3] = param_1;
      if ((*param_1 != 0) && (*(longlong *)(&DAT_00006850 + *param_1) != 0)) {
        FUN_14136a272(*(longlong *)(&DAT_00006850 + *param_1),param_1 + 0x57,&local_40,fVar4);
      }
      FUN_1449db362(&local_40);
      FUN_140257a06(lVar3,&DAT_14cbcb2c8,0xc);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14589d1fe FUN_14589d1fe body=139 status=ok
// SIG undefined FUN_14589d1fe(void)

void FUN_14589d1fe(longlong *param_1)

{
  longlong lVar1;
  float fVar2;
  undefined1 auStack_48 [40];
  float local_20;
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  fVar2 = 0.0;
  if (((*param_1 != 0) && (*(longlong *)(&DAT_00006850 + *param_1) != 0)) &&
     (lVar1 = *(longlong *)(*(longlong *)(&DAT_00006850 + *param_1) + 0x44c0), lVar1 != 0)) {
    if (*(char *)(lVar1 + 0x3d8) == '\0') {
      fVar2 = *(float *)(lVar1 + 0x3dc);
    }
    else {
      local_1c = 0.0;
      local_20 = 0.0;
      FUN_145933a24(0,&local_1c,&local_20);
      fVar2 = local_20 - local_1c;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(fVar2);
}



// FUNCTION 14589d28a FUN_14589d28a body=45 status=ok
// SIG undefined FUN_14589d28a(void)

undefined8 FUN_14589d28a(undefined8 param_1,int param_2)

{
  FUN_14589d2b8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x188);
  }
  return param_1;
}



// FUNCTION 14589d2b8 FUN_14589d2b8 body=79 status=ok
// SIG undefined FUN_14589d2b8(void)

void FUN_14589d2b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b0c4660;
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b0bc210;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_1412218b2(param_1);
  return;
}



// FUNCTION 14589d308 FUN_14589d308 body=161 status=ok
// SIG undefined FUN_14589d308(void)

void FUN_14589d308(undefined8 param_1,undefined1 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  uVar2 = FUN_1411eefea();
  local_48 = 0;
  FUN_14123d74c(uVar2,&local_38,1,0x10);
  lVar1 = local_38;
  lVar4 = (longlong)(int)uStack_30;
  if (lVar4 != 0) {
    lVar3 = 0;
    do {
      FUN_14589d3aa(*(undefined8 *)(lVar1 + lVar3),param_2);
      lVar3 = lVar3 + 8;
    } while (lVar4 * 8 != lVar3);
  }
  if (local_38 != 0) {
    FUN_1400020a8(local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14589d3aa FUN_14589d3aa body=90 status=ok
// SIG undefined FUN_14589d3aa(void)

void FUN_14589d3aa(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_1403b9dac(0,param_2,local_28);
  FUN_1403b9c84(local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14589d40e FUN_14589d40e body=141 status=ok
// SIG undefined FUN_14589d40e(void)

undefined8 * FUN_14589d40e(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_14007ca06();
  FUN_14589d49c(param_1,uVar2);
  *param_1 = &PTR_FUN_14aaee970;
  param_1[8] = 0x800000008;
  param_1[9] = 0x900000008;
  param_1[10] = 0x8000000ff;
  puVar1 = param_1 + 0xb;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  FUN_14589d4cc(puVar1,&DAT_14cb0f118);
  FUN_14589d4cc(puVar1,&DAT_14cb0f130);
  FUN_14589d4cc(puVar1,&DAT_14cb0e380);
  FUN_14589d4cc(puVar1,&DAT_14cb0e398);
  return param_1;
}



// FUNCTION 14589d49c FUN_14589d49c body=47 status=ok
// SIG undefined FUN_14589d49c(void)

undefined8 * FUN_14589d49c(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_149ecbd50;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 14589d4cc FUN_14589d4cc body=81 status=ok
// SIG undefined FUN_14589d4cc(void)

void FUN_14589d4cc(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar4 = FUN_14589d51e();
  if (iVar4 == -1) {
    iVar4 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar4 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
      FUN_14589d57a(param_1,iVar4);
    }
    lVar2 = *param_1;
    *(undefined8 *)(lVar2 + 0x10 + (longlong)iVar4 * 0x18) = param_2[2];
    uVar3 = param_2[1];
    puVar1 = (undefined8 *)(lVar2 + (longlong)iVar4 * 0x18);
    *puVar1 = *param_2;
    puVar1[1] = uVar3;
  }
  return;
}



// FUNCTION 14589d51e FUN_14589d51e body=92 status=ok
// SIG undefined FUN_14589d51e(void)

int FUN_14589d51e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar1 = *param_1;
    uVar2 = 0;
    do {
      if ((((*param_2 == *(longlong *)(lVar1 + uVar2)) &&
           (param_2[1] == *(longlong *)(lVar1 + 8 + uVar2))) &&
          (*(int *)((longlong)param_2 + 0x14) == *(int *)(lVar1 + 0x14 + uVar2))) &&
         ((char)param_2[2] == *(char *)(lVar1 + 0x10 + uVar2))) {
        return (int)(uVar2 >> 3) * -0x55555555;
      }
      uVar2 = uVar2 + 0x18;
    } while ((longlong)(int)param_1[1] * 0x18 != uVar2);
  }
  return -1;
}



// FUNCTION 14589d57a FUN_14589d57a body=147 status=ok
// SIG undefined FUN_14589d57a(void)

void FUN_14589d57a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x18,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14589d60e FUN_14589d60e body=66 status=ok
// SIG undefined FUN_14589d60e(void)

longlong FUN_14589d60e(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1481d9c04(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x68 + *param_1;
  FUN_14589d650(lVar2,1);
  return lVar2;
}



// FUNCTION 14589d650 FUN_14589d650 body=63 status=ok
// SIG undefined FUN_14589d650(void)

void FUN_14589d650(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 0x60);
  do {
    *(undefined8 *)(puVar1 + -0xc) = 0;
    puVar1[-10] = 0;
    *(undefined8 *)(puVar1 + -0x18) = 0;
    *(undefined8 *)(puVar1 + -0x16) = 0;
    *(undefined8 *)(puVar1 + -0x14) = 0;
    *(undefined8 *)(puVar1 + -0x12) = 0;
    *(undefined8 *)(puVar1 + -9) = 0xffffffff00000080;
    puVar1[-7] = 0;
    *(undefined8 *)(puVar1 + -4) = 0;
    puVar1[-2] = 0;
    *puVar1 = 0xffffffff;
    puVar1 = puVar1 + 0x1a;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}



// FUNCTION 14589d690 FUN_14589d690 body=229 status=ok
// SIG undefined FUN_14589d690(void)

void FUN_14589d690(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1400f3ad8(param_1 + 0x44);
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      if (*(longlong *)(param_1 + 0x78) != 0) {
        FUN_14480f766(lVar1 + 0x3d50);
      }
      *(undefined8 *)(param_1 + 0x78) = 0;
      if (*(longlong *)(param_1 + 0x88) != 0) {
        FUN_14480f766(lVar1 + 0x3cd8);
      }
      *(undefined8 *)(param_1 + 0x88) = 0;
      if (*(longlong *)(param_1 + 0x90) != 0) {
        FUN_14480f766(lVar1 + 0x3d08);
      }
      *(undefined8 *)(param_1 + 0x90) = 0;
      if (*(longlong *)(param_1 + 0x98) != 0) {
        FUN_14480f766(lVar1 + 0x3cf0);
      }
      *(undefined8 *)(param_1 + 0x98) = 0;
      FUN_14589d776(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14589d776 FUN_14589d776 body=251 status=ok
// SIG undefined FUN_14589d776(void)

void FUN_14589d776(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1402815f4(param_1,&local_38);
  pcVar3 = *(char **)(local_38 + 0x1d0);
  AcquireSRWLockExclusive((PSRWLOCK)(pcVar3 + 0x38));
  *(int *)(pcVar3 + 0x30) = *(int *)(pcVar3 + 0x30) + 1;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if (*pcVar3 == '\0') {
    if (*(int *)(pcVar3 + 4) != 0) goto LAB_14589d7da;
    iVar4 = 1;
  }
  else {
    iVar4 = *(int *)(pcVar3 + 4) + 1;
  }
  *pcVar3 = '\0';
  *(int *)(pcVar3 + 4) = iVar4;
LAB_14589d7da:
  iVar4 = *(int *)(pcVar3 + 0x1c);
  FUN_1412c5aa4(*(undefined8 *)(pcVar3 + 0x10),*(undefined4 *)(pcVar3 + 0x18));
  pcVar3[0x18] = '\0';
  pcVar3[0x19] = '\0';
  pcVar3[0x1a] = '\0';
  pcVar3[0x1b] = '\0';
  if ((iVar4 < 0) && (*(int *)(pcVar3 + 0x1c) != 0)) {
    FUN_148e2ceec(pcVar3 + 0x10);
  }
  *(int *)(pcVar3 + 0x20) = *(int *)(pcVar3 + 0x20) + 1;
  FUN_1412c5c68(param_1);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x00014589d820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)(pcVar3 + 0x38));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14589d872 FUN_14589d872 body=347 status=ok
// SIG undefined FUN_14589d872(void)

void FUN_14589d872(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  code *local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = FUN_1400f3ad8(param_1 + 0x44);
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      local_48 = thunk_FUN_144253548;
      local_40 = 0;
      FUN_14589dbce(lVar1 + 0x3d50,&local_38,param_1,&local_48);
      *(undefined8 *)(param_1 + 0x78) = local_38;
      local_48 = FUN_148e25cda;
      local_40 = 0;
      FUN_14589dace(lVar1 + 0x3cd8,&local_38,param_1,&local_48);
      *(undefined8 *)(param_1 + 0x88) = local_38;
      local_48 = FUN_144254ccc;
      local_40 = 0;
      FUN_14589d9ce(lVar1 + 0x3d08,&local_38,param_1,&local_48);
      *(undefined8 *)(param_1 + 0x90) = local_38;
      local_48 = FUN_144254dee;
      local_40 = 0;
      FUN_14589d9ce(lVar1 + 0x3cf0,&local_38,param_1,&local_48);
      *(undefined8 *)(param_1 + 0x98) = local_38;
      FUN_1412c57c6(param_1);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14589d9ce FUN_14589d9ce body=254 status=ok
// SIG undefined FUN_14589d9ce(void)

undefined8
FUN_14589d9ce(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b40ec50;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9a86b0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1412c5acc(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14589dace FUN_14589dace body=254 status=ok
// SIG undefined FUN_14589dace(void)

undefined8
FUN_14589dace(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9a8560;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14589dbce FUN_14589dbce body=254 status=ok
// SIG undefined FUN_14589dbce(void)

undefined8
FUN_14589dbce(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b9a8640;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9a85d0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14589dcce(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14589dcce FUN_14589dcce body=216 status=ok
// SIG undefined FUN_14589dcce(void)

undefined8 * FUN_14589dcce(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14589ddb4 FUN_14589ddb4 body=24 status=ok
// SIG undefined FUN_14589ddb4(void)

bool FUN_14589ddb4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14589ddcc FUN_14589ddcc body=98 status=ok
// SIG undefined FUN_14589ddcc(void)

void FUN_14589ddcc(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_144a8232a(&DAT_14cb7bde0);
  if ((*param_2 == *plVar2) && (plVar2 = *(longlong **)(param_1 + 0xe0), plVar2 != (longlong *)0x0))
  {
    cVar1 = FUN_1407eda54(*param_3);
    if ((char)plVar2[0xc6] != cVar1) {
      *(char *)(plVar2 + 0xc6) = cVar1;
                    /* WARNING: Could not recover jumptable at 0x00014589de27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x9f8))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14589de2e FUN_14589de2e body=106 status=ok
// SIG undefined FUN_14589de2e(void)

void FUN_14589de2e(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(param_1 + 0xa8);
  if (plVar2 != (longlong *)0x0) {
    uVar1 = FUN_1412c5dd0();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_1412c5dd0();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if ((plVar2 != plVar3) && (plVar3 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014589de8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x18))(plVar3,param_1,*(code **)(*plVar3 + 0x18));
        return;
      }
    }
  }
  return;
}



// FUNCTION 14589de98 FUN_14589de98 body=122 status=ok
// SIG undefined FUN_14589de98(void)

void FUN_14589de98(longlong param_1)

{
  undefined1 uVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + -0x218) == '\x03') {
    if (*(longlong *)(param_1 + 0xe8) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined1 *)(*(longlong *)(param_1 + 0xe8) + 0x630);
    }
    FUN_1411bee87(local_20,uVar1);
    FUN_140bfca4e(param_1 + 0x10,&DAT_14cb7bde0,local_20,0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14589df14 FUN_14589df14 body=154 status=ok
// SIG undefined FUN_14589df14(void)

void FUN_14589df14(longlong param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x960) != 0) {
    bVar1 = *(byte *)(param_1 + 0x692);
    *(byte *)(param_1 + 0x692) = bVar1 | 0x10;
    FUN_1435c0142(param_1,1);
    *(byte *)(param_1 + 0x692) = *(byte *)(param_1 + 0x692) & 0xef | bVar1 & 0x10;
  }
  iVar3 = *(int *)(param_1 + 0x8e8);
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x8e0) + lVar4 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
        *(undefined8 *)(*(longlong *)(param_1 + 0x8e0) + lVar4 * 8) = 0;
        iVar3 = *(int *)(param_1 + 0x8e8);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  switchD_143c3d4dc::caseD_1f(param_1);
  return;
}



// FUNCTION 14589dfae FUN_14589dfae body=340 status=ok
// SIG undefined FUN_14589dfae(void)

void FUN_14589dfae(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  longlong **local_78;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar3 = (longlong *)FUN_14001cc68(0x1a8,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b4f30a0;
  plVar1 = plVar3 + 2;
  local_58 = (longlong *)*param_5;
  local_78 = &local_58;
  *param_5 = 0;
  local_50 = (longlong *)CONCAT44(local_50._4_4_,*(undefined4 *)(param_5 + 1));
  *(undefined4 *)(param_5 + 1) = 0;
  FUN_14589e1a6(plVar1,*param_2,param_3,param_4);
  local_68 = plVar1;
  local_60 = plVar3;
  FUN_14589e104(&local_68,plVar1);
  local_58 = plVar1;
  local_50 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    FUN_1411d7792(param_1,&local_58);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_1411d7792(param_1);
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
  }
  plVar1 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_60 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


