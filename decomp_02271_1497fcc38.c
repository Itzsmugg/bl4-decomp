// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1497fcc38 FUN_1497fcc38 body=109 status=ok
// SIG undefined FUN_1497fcc38(void)

undefined4 * FUN_1497fcc38(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14cc26f80,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fcca6 FUN_1497fcca6 body=68 status=ok
// SIG undefined FUN_1497fcca6(void)

undefined8 * FUN_1497fcca6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be85c60;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_14062cff8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497fccea FUN_1497fccea body=68 status=ok
// SIG undefined FUN_1497fccea(void)

undefined8 * FUN_1497fccea(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be85c60;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_14062cff8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497fcd2e FUN_1497fcd2e body=447 status=ok
// SIG undefined FUN_1497fcd2e(void)

undefined8 *
FUN_1497fcd2e(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,longlong *param_6,undefined8 param_7)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 *local_b0;
  undefined1 *local_a8;
  undefined1 local_a0;
  undefined4 local_98;
  longlong local_88 [2];
  undefined2 *local_78;
  int local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_54 [8];
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1497fcb12(local_54,param_7);
  FUN_1400021e4(&DAT_14cc26f80,local_88);
  FUN_1497fcbb8(&local_78,param_7,local_88);
  puVar4 = local_78;
  if (local_70 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  iVar2 = local_70 + -1;
  if (local_70 == 0) {
    iVar2 = 0;
  }
  uVar1 = FUN_144a49b4a(iVar2,puVar4);
  iVar2 = FUN_140aad9fa(param_6,uVar1,&local_78);
  lVar3 = (longlong)iVar2 * 0x28 + *param_6;
  if (lVar3 == 0 || iVar2 == -1) {
    local_68 = 0;
    uStack_60 = 0;
  }
  else {
    local_68 = *(undefined8 *)(lVar3 + 0x10);
    uStack_60 = *(undefined4 *)(lVar3 + 0x18);
    uStack_5c = *(undefined4 *)(lVar3 + 0x1c);
  }
  local_a8 = local_54;
  local_b0 = &local_68;
  local_b8 = param_5;
  local_98 = 0x4b189680;
  local_a0 = 1;
  FUN_1405c237e(param_1,param_2,param_3,param_4);
  *param_1 = &PTR_FUN_14be85c60;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  local_4c = 0;
  FUN_1448158c6(param_1 + 0x11,&local_4c,*(undefined4 *)(param_1 + 2));
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14be85c58;
  FUN_1497fcc38(param_1 + 0x13,param_7);
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1497fceee FUN_1497fceee body=398 status=ok
// SIG undefined FUN_1497fceee(void)

undefined8 *
FUN_1497fceee(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined1 local_a0;
  undefined4 local_98;
  longlong local_88 [2];
  undefined2 *local_78;
  int local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_54;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_54 = 0x3f800000;
  FUN_14190c52e(local_50,param_5);
  FUN_1400021e4(&DAT_14c993d80,local_88);
  FUN_14190c5dc(&local_78,param_5,local_88);
  puVar4 = local_78;
  if (local_70 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  iVar2 = local_70 + -1;
  if (local_70 == 0) {
    iVar2 = 0;
  }
  uVar1 = FUN_144a49b4a(iVar2,puVar4);
  iVar2 = FUN_140aad9fa(param_4,uVar1,&local_78);
  lVar3 = (longlong)iVar2 * 0x28 + *param_4;
  if (lVar3 == 0 || iVar2 == -1) {
    local_68 = 0;
    uStack_60 = 0;
  }
  else {
    local_68 = *(undefined8 *)(lVar3 + 0x10);
    uStack_60 = *(undefined4 *)(lVar3 + 0x18);
    uStack_5c = *(undefined4 *)(lVar3 + 0x1c);
  }
  local_98 = 0x3f800000;
  local_a0 = 1;
  local_a8 = local_50;
  FUN_146e80c0e(param_1,param_2,param_3,&local_68);
  *param_1 = &PTR_FUN_14be85c90;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  FUN_146dd9c38(param_1,param_2);
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14be85c88;
  FUN_14190c65c(param_1 + 0x13,param_5);
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1497fd07e FUN_1497fd07e body=68 status=ok
// SIG undefined FUN_1497fd07e(void)

undefined8 * FUN_1497fd07e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be85c90;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_14062cff8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497fd0c2 FUN_1497fd0c2 body=68 status=ok
// SIG undefined FUN_1497fd0c2(void)

undefined8 * FUN_1497fd0c2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be85c90;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_14062cff8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497fd106 FUN_1497fd106 body=662 status=ok
// SIG undefined FUN_1497fd106(void)

undefined8 *
FUN_1497fd106(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
             undefined8 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  longlong local_d8 [2];
  undefined2 *local_c8;
  int local_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8 [2];
  undefined2 *local_98;
  int local_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined1 local_74 [8];
  undefined4 local_6c;
  undefined1 local_68 [8];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_6c = 0x3f800000;
  FUN_14190c6e8(local_68,param_5);
  local_78 = 0x3f800000;
  FUN_14190c796(local_74,param_5);
  FUN_1400021e4(&DAT_14c994204,local_a8);
  FUN_14190c844(&local_98,param_5,local_a8);
  puVar4 = local_98;
  if (local_90 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  iVar2 = local_90 + -1;
  if (local_90 == 0) {
    iVar2 = 0;
  }
  uVar1 = FUN_144a49b4a(iVar2,puVar4);
  iVar2 = FUN_140aad9fa(param_4,uVar1,&local_98);
  lVar3 = (longlong)iVar2 * 0x28 + *param_4;
  if (lVar3 == 0 || iVar2 == -1) {
    local_88 = 0;
    uStack_80 = 0;
  }
  else {
    local_88 = *(undefined8 *)(lVar3 + 0x10);
    uStack_80 = *(undefined4 *)(lVar3 + 0x18);
    uStack_7c = *(undefined4 *)(lVar3 + 0x1c);
  }
  FUN_1400021e4(&DAT_14c9941fc,local_d8);
  FUN_14190c8c4(&local_c8,param_5,local_d8);
  puVar4 = local_c8;
  if (local_c0 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  iVar2 = local_c0 + -1;
  if (local_c0 == 0) {
    iVar2 = 0;
  }
  uVar1 = FUN_144a49b4a(iVar2,puVar4);
  iVar2 = FUN_140aad9fa(param_4,uVar1,&local_c8);
  lVar3 = (longlong)iVar2 * 0x28 + *param_4;
  if (lVar3 == 0 || iVar2 == -1) {
    local_b8 = 0;
    uStack_b0 = 0;
  }
  else {
    local_b8 = *(undefined8 *)(lVar3 + 0x10);
    uStack_b0 = *(undefined4 *)(lVar3 + 0x18);
    uStack_ac = *(undefined4 *)(lVar3 + 0x1c);
  }
  local_e8 = param_6;
  local_f8 = local_68;
  local_108 = &local_88;
  local_f0 = 0x3f800000;
  local_100 = local_74;
  FUN_146dfb3d4(param_1,param_2,param_3,&local_b8);
  if (local_c8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_d8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_98 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14be85cb8;
  FUN_14190c944(param_1 + 0x13,param_5);
  FUN_14190c9b2((longlong)param_1 + 0x9c,param_5);
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1497fd39e FUN_1497fd39e body=38 status=ok
// SIG undefined FUN_1497fd39e(void)

undefined8 FUN_1497fd39e(undefined8 param_1,int param_2)

{
  FUN_14062cf90();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497fd3c4 FUN_1497fd3c4 body=915 status=ok
// SIG undefined FUN_1497fd3c4(void)

longlong FUN_1497fd3c4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5)

{
  float fVar1;
  float fVar2;
  undefined1 auStack_b8 [40];
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  local_90 = 0.0;
  FUN_140aac69c(&local_88,param_4,&local_90);
  fVar2 = local_84;
  if (10.0 <= local_84) {
    fVar2 = 10.0;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  local_90 = local_88;
  if (10.0 <= local_88) {
    local_90 = 10.0;
  }
  if (local_90 <= 0.0) {
    local_90 = 0.0;
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(float *)(param_1 + 0x80) = local_90;
  *(float *)(param_1 + 0x84) = fVar2 - local_90;
  local_8c = (fVar2 - local_90) + local_90;
  FUN_140aac548(&local_88,param_4,&local_90);
  fVar2 = local_84;
  if (10.0 <= local_84) {
    fVar2 = 10.0;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  fVar1 = local_88;
  if (10.0 <= local_88) {
    fVar1 = 10.0;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(float *)(param_1 + 0xb0) = fVar1;
  *(float *)(param_1 + 0xb4) = fVar2 - fVar1;
  local_90 = 0.0;
  FUN_140aac5ee(&local_88,param_4,&local_90);
  fVar2 = local_84;
  if (10.0 <= local_84) {
    fVar2 = 10.0;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  local_90 = local_88;
  if (10.0 <= local_88) {
    local_90 = 10.0;
  }
  if (local_90 <= 0.0) {
    local_90 = 0.0;
  }
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(float *)(param_1 + 0xe0) = local_90;
  *(float *)(param_1 + 0xe4) = fVar2 - local_90;
  local_8c = (fVar2 - local_90) + local_90;
  FUN_140aac4a2(&local_88,param_4,&local_90);
  fVar2 = local_84;
  if (10.0 <= local_84) {
    fVar2 = 10.0;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  fVar1 = local_88;
  if (10.0 <= local_88) {
    fVar1 = 10.0;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(float *)(param_1 + 0x110) = fVar1;
  *(float *)(param_1 + 0x114) = fVar2 - fVar1;
  local_90 = 0.0;
  FUN_140aac74a(&local_88,param_4,&local_90);
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(float *)(param_1 + 0x140) = local_88 * 0.01;
  *(float *)(param_1 + 0x144) = local_84 * 0.01 - local_88 * 0.01;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  local_88 = 0.0;
  fVar2 = (float)FUN_140aac414(param_4,&local_88);
  fVar2 = fVar2 / 1e+06;
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  *(float *)(param_1 + 0x164) = fVar2;
  *(float *)(param_1 + 0x168) = fVar2 * 0.25;
  FUN_140aac180(param_1 + 0x16c,param_4);
  FUN_140aac1ee(param_1 + 0x170,param_4);
  FUN_140aac25c(param_1 + 0x174,param_4);
  FUN_140aac2ca(param_1 + 0x178,param_4);
  FUN_140aac338(param_1 + 0x17c,param_4);
  FUN_140aac3a6(param_1 + 0x180,param_4);
  FUN_1497fd780(param_1 + 0x184,param_4);
  FUN_1497fd7ee(param_1 + 0x188,param_4);
  FUN_146e4140a(param_1,param_2,param_3);
  FUN_140aacf30(param_1,param_4,param_5);
  FUN_146e410ae(param_1,param_2);
  if ((local_80 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fd758 FUN_1497fd758 body=9 status=ok
// SIG undefined FUN_1497fd758(void)

void FUN_1497fd758(longlong param_1)

{
  FUN_140b4d4ca(param_1 + 0x10);
  return;
}



// FUNCTION 1497fd762 FUN_1497fd762 body=29 status=ok
// SIG undefined FUN_1497fd762(void)

undefined8 FUN_1497fd762(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497fd780 FUN_1497fd780 body=109 status=ok
// SIG undefined FUN_1497fd780(void)

undefined4 * FUN_1497fd780(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c9935d0,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fd7ee FUN_1497fd7ee body=109 status=ok
// SIG undefined FUN_1497fd7ee(void)

undefined4 * FUN_1497fd7ee(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c9935d8,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fd85c FUN_1497fd85c body=476 status=ok
// SIG undefined FUN_1497fd85c(void)

undefined8 *
FUN_1497fd85c(undefined8 *param_1,longlong param_2,undefined8 param_3,longlong *param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 local_8c;
  undefined4 local_84;
  undefined1 local_80 [8];
  longlong local_78 [2];
  undefined2 *local_68;
  int local_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1400021e4(&DAT_14cc26fb8,local_78);
  FUN_1497fda72(&local_68,param_5,local_78);
  puVar4 = local_68;
  if (local_60 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  iVar2 = local_60 + -1;
  if (local_60 == 0) {
    iVar2 = 0;
  }
  uVar1 = FUN_144a49b4a(iVar2,puVar4);
  iVar2 = FUN_140aad9fa(param_4,uVar1,&local_68);
  lVar3 = (longlong)iVar2 * 0x28 + *param_4;
  if (lVar3 == 0 || iVar2 == -1) {
    local_58 = 0;
    uStack_50 = 0;
  }
  else {
    local_58 = *(undefined8 *)(lVar3 + 0x10);
    uStack_50 = *(undefined4 *)(lVar3 + 0x18);
    uStack_4c = *(undefined4 *)(lVar3 + 0x1c);
  }
  FUN_1497fdaf2(local_80,param_5);
  local_8c = 0;
  local_84 = 0xc4752a8f;
  local_a8 = &local_58;
  local_a0 = param_3;
  FUN_1497fdb98(param_1,param_2,&local_8c,local_80);
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14be85d58;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0xc4752a8f;
  *(undefined1 *)((longlong)param_1 + 0x94) = 1;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  FUN_1497fdc32((longlong)param_1 + 0xa4,param_5);
  FUN_1497fdca0(param_1 + 0x15,param_5);
  FUN_1497fdd0e((longlong)param_1 + 0xac,param_5);
  FUN_1497fdd7c(param_1 + 0x16,param_5);
  FUN_1497fddea((longlong)param_1 + 0xb4,param_5);
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1497fda3a FUN_1497fda3a body=25 status=ok
// SIG undefined FUN_1497fda3a(void)

void FUN_1497fda3a(longlong param_1)

{
  longlong lVar1;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14be85d60;
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 1497fda54 FUN_1497fda54 body=29 status=ok
// SIG undefined FUN_1497fda54(void)

undefined8 FUN_1497fda54(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497fda72 FUN_1497fda72 body=127 status=ok
// SIG undefined FUN_1497fda72(void)

undefined8 FUN_1497fda72(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(&DAT_14cc26fb8,local_38);
  local_48 = 0;
  FUN_1408ab21e(param_2,param_1,local_38,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fdaf2 FUN_1497fdaf2 body=164 status=ok
// SIG undefined FUN_1497fdaf2(void)

undefined8 * FUN_1497fdaf2(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14cc26fb8,local_30);
  iVar2 = FUN_144a41c6c(param_2,local_30);
  if (iVar2 == -1) {
    *param_1 = &DAT_3f8000003f800000;
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar2 * 0xc);
    *(undefined4 *)param_1 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + (longlong)iVar2 * 0xc);
    *(undefined4 *)((longlong)param_1 + 4) = uVar1;
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fdb98 FUN_1497fdb98 body=153 status=ok
// SIG undefined FUN_1497fdb98(void)

undefined8 *
FUN_1497fdb98(undefined8 *param_1,longlong param_2,undefined8 *param_3,float *param_4,
             undefined8 param_5,undefined8 param_6)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  int iVar4;
  
  *param_1 = &PTR_FUN_14be85d60;
  param_1[1] = *param_3;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 1);
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  iVar4 = *(int *)(param_2 + 0x14);
  FUN_146ded362(param_1 + 3,param_5,iVar4);
  *(int *)(param_1 + 5) = iVar4;
  if (*(int *)(param_1 + 4) == iVar4) {
    uVar3 = param_1[3];
  }
  else {
    uVar3 = 0;
    iVar4 = 0;
  }
  param_1[6] = uVar3;
  *(int *)(param_1 + 7) = iVar4;
  fVar1 = *param_4;
  fVar2 = param_4[1];
  *(float *)(param_1 + 8) = fVar1;
  *(float *)((longlong)param_1 + 0x44) = fVar2 - fVar1;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x51) = 0;
  *(undefined8 *)((longlong)param_1 + 0x59) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = param_6;
  return param_1;
}



// FUNCTION 1497fdc32 FUN_1497fdc32 body=109 status=ok
// SIG undefined FUN_1497fdc32(void)

undefined4 * FUN_1497fdc32(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14cc26fa8,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fdca0 FUN_1497fdca0 body=109 status=ok
// SIG undefined FUN_1497fdca0(void)

undefined4 * FUN_1497fdca0(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14cc26fb0,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fdd0e FUN_1497fdd0e body=109 status=ok
// SIG undefined FUN_1497fdd0e(void)

undefined4 * FUN_1497fdd0e(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14cc26fb8,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fdd7c FUN_1497fdd7c body=109 status=ok
// SIG undefined FUN_1497fdd7c(void)

undefined4 * FUN_1497fdd7c(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14cc26fc0,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fddea FUN_1497fddea body=109 status=ok
// SIG undefined FUN_1497fddea(void)

undefined4 * FUN_1497fddea(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14cc26fc8,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fde58 FUN_1497fde58 body=57 status=ok
// SIG undefined FUN_1497fde58(void)

undefined8 * FUN_1497fde58(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be85d60;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497fde92 FUN_1497fde92 body=57 status=ok
// SIG undefined FUN_1497fde92(void)

undefined8 * FUN_1497fde92(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be85d60;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497fdecc FUN_1497fdecc body=324 status=ok
// SIG undefined FUN_1497fdecc(void)

undefined8 *
FUN_1497fdecc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,float param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined1 auStack_a8 [39];
  undefined1 local_81;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = FUN_1497fe03a(param_3);
  local_81 = 0;
  uVar1 = FUN_1497fe0ca(param_3);
  uVar3 = FUN_1497fe158(param_3);
  fVar4 = (float)FUN_1497fe1e8(param_3);
  *param_1 = param_2;
  *(float *)(param_1 + 1) = fVar4 * param_4;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
  *(undefined1 *)(param_1 + 2) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = param_5;
  param_1[5] = param_6;
  param_1[6] = param_7;
  param_1[7] = param_8;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 8),4000);
  *(float *)(param_1 + 0xd) = param_4;
  FUN_1497fe278((longlong)param_1 + 0x6c,param_3);
  FUN_1497fe2e6(param_1 + 0xe,param_3);
  FUN_1497fe354((longlong)param_1 + 0x74,param_3);
  FUN_1497fe3c2(param_1 + 0xf,param_3);
  if ((local_80 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fe012 FUN_1497fe012 body=9 status=ok
// SIG undefined FUN_1497fe012(void)

void FUN_1497fe012(longlong param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  return;
}



// FUNCTION 1497fe01c FUN_1497fe01c body=29 status=ok
// SIG undefined FUN_1497fe01c(void)

undefined8 FUN_1497fe01c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497fe03a FUN_1497fe03a body=142 status=ok
// SIG undefined FUN_1497fe03a(void)

undefined4 FUN_1497fe03a(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(&DAT_14c994818,local_40);
  iVar1 = FUN_144a41c6c(param_1,local_40);
  if (iVar1 == -1) {
    uVar2 = 0x42c80000;
  }
  else {
    uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 0xc);
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fe0ca FUN_1497fe0ca body=140 status=ok
// SIG undefined FUN_1497fe0ca(void)

ulonglong FUN_1497fe0ca(longlong param_1,undefined1 *param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c994810,local_30);
  uVar2 = CONCAT71((int7)((ulonglong)param_2 >> 8),*param_2);
  iVar1 = FUN_144a41c6c(param_1,local_30);
  if (iVar1 != -1) {
    uVar2 = (ulonglong)
            (-(uint)(*(float *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 0xc) != 0.0) & 1);
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fe158 FUN_1497fe158 body=142 status=ok
// SIG undefined FUN_1497fe158(void)

undefined4 FUN_1497fe158(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(&DAT_14c994808,local_40);
  iVar1 = FUN_144a41c6c(param_1,local_40);
  if (iVar1 == -1) {
    uVar2 = 0x3f4ccccd;
  }
  else {
    uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 0xc);
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fe1e8 FUN_1497fe1e8 body=142 status=ok
// SIG undefined FUN_1497fe1e8(void)

undefined4 FUN_1497fe1e8(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(&DAT_14c994800,local_40);
  iVar1 = FUN_144a41c6c(param_1,local_40);
  if (iVar1 == -1) {
    uVar2 = 0x3f800000;
  }
  else {
    uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 0xc);
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fe278 FUN_1497fe278 body=109 status=ok
// SIG undefined FUN_1497fe278(void)

undefined4 * FUN_1497fe278(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c994800,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fe2e6 FUN_1497fe2e6 body=109 status=ok
// SIG undefined FUN_1497fe2e6(void)

undefined4 * FUN_1497fe2e6(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c994808,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fe354 FUN_1497fe354 body=109 status=ok
// SIG undefined FUN_1497fe354(void)

undefined4 * FUN_1497fe354(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c994810,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fe3c2 FUN_1497fe3c2 body=109 status=ok
// SIG undefined FUN_1497fe3c2(void)

undefined4 * FUN_1497fe3c2(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c994818,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fe430 FUN_1497fe430 body=41 status=ok
// SIG undefined FUN_1497fe430(void)

void FUN_1497fe430(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1497fe45a(param_1);
    param_1 = param_1 + 0xa0;
  }
  return;
}



// FUNCTION 1497fe45a FUN_1497fe45a body=83 status=ok
// SIG undefined FUN_1497fe45a(void)

void FUN_1497fe45a(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1);
  return;
}



// FUNCTION 1497fe4ae FUN_1497fe4ae body=95 status=ok
// SIG undefined FUN_1497fe4ae(void)

void FUN_1497fe4ae(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,4);
  }
  return;
}



// FUNCTION 1497fe50e FUN_1497fe50e body=132 status=ok
// SIG undefined FUN_1497fe50e(void)

void FUN_1497fe50e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 4,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1497fe594 FUN_1497fe594 body=861 status=ok
// SIG undefined FUN_1497fe594(void)

undefined4 *
FUN_1497fe594(undefined4 *param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 *param_6,longlong *param_7,undefined8 param_8)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined4 uVar7;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 local_94;
  undefined1 local_90 [8];
  longlong local_88 [2];
  undefined2 *local_78;
  int local_70;
  ulonglong local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_1 = *(undefined4 *)(param_2 + 0x14);
  param_1[1] = param_3;
  *(undefined8 *)(param_1 + 2) = param_4;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 4) = *param_5;
  *param_5 = 0;
  param_1[6] = *(undefined4 *)(param_5 + 1);
  param_1[7] = *(undefined4 *)((longlong)param_5 + 0xc);
  param_5[1] = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 8) = *param_6;
  *param_6 = 0;
  param_1[10] = *(undefined4 *)(param_6 + 1);
  param_1[0xb] = *(undefined4 *)((longlong)param_6 + 0xc);
  param_6[1] = 0;
  local_68 = local_68 & 0xffffffffffffff00;
  cVar2 = FUN_1497fe91a(param_8);
  *(char *)(param_1 + 0xc) = cVar2;
  if (cVar2 == '\0') {
    uVar7 = 0x3f800000;
  }
  else {
    uVar7 = 0x4e6e6b28;
  }
  uVar1 = *param_1;
  FUN_1400021e4(&DAT_14c994ad8,local_88);
  FUN_1497fe9a8(&local_78,param_8,local_88);
  iVar4 = local_70 + -1;
  puVar6 = local_78;
  if (local_70 == 0) {
    iVar4 = 0;
    puVar6 = &DAT_149dfb77a;
  }
  uVar3 = FUN_144a49b4a(iVar4,puVar6);
  iVar4 = FUN_140aad9fa(param_7,uVar3,&local_78);
  lVar5 = (longlong)iVar4 * 0x28 + *param_7;
  if (lVar5 == 0 || iVar4 == -1) {
    local_68 = 0;
    uStack_60 = 0;
  }
  else {
    local_68 = *(ulonglong *)(lVar5 + 0x10);
    uStack_60 = *(undefined4 *)(lVar5 + 0x18);
    uStack_5c = *(undefined4 *)(lVar5 + 0x1c);
  }
  local_94 = 0x3f800000;
  FUN_1497fea28(local_90,param_8);
  local_b0 = 0x447a0000;
  local_b8 = 0x10;
  local_a8 = uVar7;
  FUN_140b3a35c(param_1 + 0xe,local_90,&local_68,uVar1);
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0xc) == '\0') {
    uVar7 = 0x3f800000;
  }
  else {
    uVar7 = 0x4e6e6b28;
  }
  uVar1 = *param_1;
  FUN_1400021e4(&DAT_14c994ae0,local_88);
  FUN_1497fead6(&local_78,param_8,local_88);
  puVar6 = local_78;
  if (local_70 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  iVar4 = local_70 + -1;
  if (local_70 == 0) {
    iVar4 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar4,puVar6);
  iVar4 = FUN_140aad9fa(param_7,uVar3,&local_78);
  lVar5 = (longlong)iVar4 * 0x28 + *param_7;
  if (lVar5 == 0 || iVar4 == -1) {
    local_68 = 0;
    uStack_60 = 0;
  }
  else {
    local_68 = *(ulonglong *)(lVar5 + 0x10);
    uStack_60 = *(undefined4 *)(lVar5 + 0x18);
    uStack_5c = *(undefined4 *)(lVar5 + 0x1c);
  }
  local_94 = 0x3f800000;
  FUN_1497feb56(local_90,param_8);
  local_b0 = 0x447a0000;
  local_b8 = 0x10;
  local_a8 = uVar7;
  FUN_140b3a35c(param_1 + 0x20,local_90,&local_68,uVar1);
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 0x3e) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x3a) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x36) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x42) = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x44) = 0;
  FUN_1497fec04(param_1 + 0x45,param_8);
  FUN_1497fec72(param_1 + 0x46,param_8);
  FUN_1497fece0(param_1 + 0x47,param_8);
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fe8f2 FUN_1497fe8f2 body=9 status=ok
// SIG undefined FUN_1497fe8f2(void)

void FUN_1497fe8f2(longlong param_1)

{
  FUN_1497fed4e(param_1 + 0x10);
  return;
}



// FUNCTION 1497fe8fc FUN_1497fe8fc body=29 status=ok
// SIG undefined FUN_1497fe8fc(void)

undefined8 FUN_1497fe8fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497fe91a FUN_1497fe91a body=140 status=ok
// SIG undefined FUN_1497fe91a(void)

ulonglong FUN_1497fe91a(longlong param_1,undefined1 *param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c994ad0,local_30);
  uVar2 = CONCAT71((int7)((ulonglong)param_2 >> 8),*param_2);
  iVar1 = FUN_144a41c6c(param_1,local_30);
  if (iVar1 != -1) {
    uVar2 = (ulonglong)
            (-(uint)(*(float *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 0xc) != 0.0) & 1);
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fe9a8 FUN_1497fe9a8 body=127 status=ok
// SIG undefined FUN_1497fe9a8(void)

undefined8 FUN_1497fe9a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(&DAT_14c994ad8,local_38);
  local_48 = 0;
  FUN_1408ab21e(param_2,param_1,local_38,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fea28 FUN_1497fea28 body=173 status=ok
// SIG undefined FUN_1497fea28(void)

undefined8 * FUN_1497fea28(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c994ad8,local_38);
  uVar1 = *param_3;
  iVar2 = FUN_144a41c6c(param_2,local_38);
  if (iVar2 == -1) {
    *param_1 = CONCAT44(uVar1,uVar1);
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar2 * 0xc);
    *(undefined4 *)param_1 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + (longlong)iVar2 * 0xc);
    *(undefined4 *)((longlong)param_1 + 4) = uVar1;
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fead6 FUN_1497fead6 body=127 status=ok
// SIG undefined FUN_1497fead6(void)

undefined8 FUN_1497fead6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(&DAT_14c994ae0,local_38);
  local_48 = 0;
  FUN_1408ab21e(param_2,param_1,local_38,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497feb56 FUN_1497feb56 body=173 status=ok
// SIG undefined FUN_1497feb56(void)

undefined8 * FUN_1497feb56(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c994ae0,local_38);
  uVar1 = *param_3;
  iVar2 = FUN_144a41c6c(param_2,local_38);
  if (iVar2 == -1) {
    *param_1 = CONCAT44(uVar1,uVar1);
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar2 * 0xc);
    *(undefined4 *)param_1 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + (longlong)iVar2 * 0xc);
    *(undefined4 *)((longlong)param_1 + 4) = uVar1;
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fec04 FUN_1497fec04 body=109 status=ok
// SIG undefined FUN_1497fec04(void)

undefined4 * FUN_1497fec04(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c994ad0,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fec72 FUN_1497fec72 body=109 status=ok
// SIG undefined FUN_1497fec72(void)

undefined4 * FUN_1497fec72(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c994ad8,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fece0 FUN_1497fece0 body=109 status=ok
// SIG undefined FUN_1497fece0(void)

undefined4 * FUN_1497fece0(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c994ae0,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fed4e FUN_1497fed4e body=199 status=ok
// SIG undefined FUN_1497fed4e(void)

void FUN_1497fed4e(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 0x80) = &PTR_FUN_149f57480;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 0x38) = &PTR_FUN_149f57480;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1497fee48 FUN_1497fee48 body=29 status=ok
// SIG undefined FUN_1497fee48(void)

undefined8 FUN_1497fee48(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497fee9e FUN_1497fee9e body=29 status=ok
// SIG undefined FUN_1497fee9e(void)

undefined8 FUN_1497fee9e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497feebc FUN_1497feebc body=1146 status=ok
// SIG undefined FUN_1497feebc(void)

void FUN_1497feebc(longlong param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  float local_fc;
  float local_f8;
  float local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((0.0001 < ABS(*(float *)(param_1 + 0x48))) || (0.0001 < ABS(*(float *)(param_1 + 0x4c)))) {
    local_11c = 0;
    uVar9 = local_f0;
  }
  else {
    uVar9 = CONCAT71((int7)(local_f0 >> 8),ABS(*(float *)(param_1 + 0x50)) <= 0.0001);
    local_11c = (undefined4)uVar9;
  }
  if (*(char *)(param_1 + 0x14) == '\x01') {
    if (*(int *)(param_1 + 0x38) < 1) {
      local_120 = 0;
    }
    else {
      local_120 = (undefined4)CONCAT71((int7)(uVar9 >> 8),0.0001 < ABS(*(float *)(param_1 + 0x44)));
    }
    fVar13 = *(float *)(param_1 + 0x40);
  }
  else {
    fVar13 = 1.0;
    local_120 = 0;
  }
  iVar7 = *(int *)(param_2 + 0x14);
  local_108 = param_4;
  if (0 < iVar7) {
    lVar3 = *(longlong *)(param_2 + 8);
    lVar1 = (longlong)*(int *)(param_2 + 0x10) * 4;
    lVar4 = *(longlong *)(lVar3 + 0x90);
    lVar5 = *(longlong *)(lVar3 + 0x78);
    lVar6 = *(longlong *)(lVar3 + 0x28);
    lVar3 = *(longlong *)(lVar3 + 0x48);
    local_118 = **(longlong **)(param_1 + 0x78);
    local_110 = *(longlong *)(param_1 + 0x30);
    lVar8 = (longlong)*(int *)(param_2 + 0x10) * 3 + 2;
    uVar9 = 0;
    do {
      fVar2 = *(float *)(lVar4 + lVar1 + uVar9 * 4);
      if ((fVar2 != 0.0) || (NAN(fVar2))) {
        local_fc = fVar13;
        if ((char)local_120 != '\0') {
          local_fc = *(float *)(param_1 + 0x44) * *(float *)(local_110 + uVar9 * 4) +
                     *(float *)(param_1 + 0x40);
        }
        fVar2 = *(float *)(lVar1 + lVar5 + uVar9 * 4);
        local_f4 = *(float *)(param_1 + 0x10) * fVar2 * local_fc;
        local_f8 = *(float *)(param_1 + 0xc) * fVar2 * local_fc;
        local_fc = *(float *)(param_1 + 8) * fVar2 * local_fc;
        if ((char)local_11c == '\0') {
          fVar17 = *(float *)(lVar6 + lVar8 * 4) - *(float *)(param_1 + 0x5c);
          fVar18 = *(float *)(lVar6 + -4 + lVar8 * 4) - *(float *)(param_1 + 0x58);
          fVar14 = *(float *)(lVar6 + -8 + lVar8 * 4) - *(float *)(param_1 + 0x54);
          fVar11 = *(float *)(param_1 + 0x48);
          fVar12 = *(float *)(param_1 + 0x4c);
          fVar10 = fVar11 * fVar18 - fVar14 * fVar12;
          fVar16 = *(float *)(param_1 + 0x50);
          fVar15 = fVar14 * fVar16 - fVar17 * fVar11;
          fVar14 = fVar12 * fVar17 - fVar18 * fVar16;
          local_fc = local_fc - (fVar12 * fVar10 - fVar15 * fVar16) * fVar2;
          local_f8 = local_f8 - (fVar16 * fVar14 - fVar10 * fVar11) * fVar2;
          local_f4 = local_f4 - (fVar11 * fVar15 - fVar14 * fVar12) * fVar2;
        }
        if (*(char *)(param_1 + 0x60) == '\x01') {
          fVar11 = *(float *)(param_1 + 0x6c) - *(float *)(lVar3 + lVar8 * 4);
          fVar12 = *(float *)(param_1 + 0x68) - *(float *)(lVar3 + -4 + lVar8 * 4);
          fVar16 = *(float *)(param_1 + 100) - *(float *)(lVar3 + -8 + lVar8 * 4);
          fVar10 = fVar11 * fVar11 + fVar16 * fVar16 + fVar12 * fVar12;
          if (1e-08 < fVar10) {
            fVar10 = 1.0 / SQRT(fVar10);
            fVar14 = ABS(fVar10 * fVar11 * *(float *)(local_118 + lVar8 * 4) +
                         fVar16 * fVar10 * *(float *)(local_118 + -8 + lVar8 * 4) +
                         fVar12 * fVar10 * *(float *)(local_118 + -4 + lVar8 * 4)) *
                     *(float *)(param_1 + 0x70);
            fVar10 = 1.0;
            if (fVar14 <= 1.0) {
              fVar10 = fVar14;
            }
            local_f4 = local_f4 + fVar11 * fVar10 * fVar2;
            local_f8 = local_f8 + fVar12 * fVar10 * fVar2;
            local_fc = local_fc + fVar10 * fVar16 * fVar2;
          }
        }
        local_128 = param_3;
        FUN_146e24590(local_108,param_2,&local_fc,uVar9 & 0xffffffff);
        iVar7 = *(int *)(param_2 + 0x14);
      }
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 3;
    } while ((longlong)uVar9 < (longlong)iVar7);
  }
  if ((local_f0 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497ff370 FUN_1497ff370 body=29 status=ok
// SIG undefined FUN_1497ff370(void)

undefined8 FUN_1497ff370(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497ff38e FUN_1497ff38e body=59 status=ok
// SIG undefined FUN_1497ff38e(void)

void FUN_1497ff38e(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,byte *param_4)

{
  byte bVar1;
  
  bVar1 = *param_4;
  FUN_14462fb3c(*param_1,*param_3,*(undefined4 *)(param_1[1] + 0xc));
  if ((bVar1 & 1) == 0) {
    return;
  }
  FUN_1497ff412(*param_1);
  return;
}



// FUNCTION 1497ff3f4 FUN_1497ff3f4 body=29 status=ok
// SIG undefined FUN_1497ff3f4(void)

undefined8 FUN_1497ff3f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497ff412 FUN_1497ff412 body=78 status=ok
// SIG undefined FUN_1497ff412(void)

void FUN_1497ff412(undefined4 *param_1)

{
  if (*(char *)(param_1 + 0xc) == '\x01') {
    param_1[0x34] = 0;
    if ((int)param_1[0x35] < 0) {
      FUN_14482f6fa(param_1 + 0x32,0);
    }
    FUN_144aa29e6(param_1 + 0x32,*param_1,1);
    return;
  }
  return;
}



// FUNCTION 1497ff498 FUN_1497ff498 body=29 status=ok
// SIG undefined FUN_1497ff498(void)

undefined8 FUN_1497ff498(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497ff4b6 FUN_1497ff4b6 body=46 status=ok
// SIG undefined FUN_1497ff4b6(void)

void FUN_1497ff4b6(undefined8 *param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  byte bVar1;
  
  bVar1 = *param_4;
  FUN_1446301ac(*param_1);
  if ((bVar1 & 1) == 0) {
    return;
  }
  FUN_1497ff52c(*param_1);
  return;
}



// FUNCTION 1497ff50e FUN_1497ff50e body=29 status=ok
// SIG undefined FUN_1497ff50e(void)

undefined8 FUN_1497ff50e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497ff52c FUN_1497ff52c body=132 status=ok
// SIG undefined FUN_1497ff52c(void)

void FUN_1497ff52c(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  plVar1 = (longlong *)(param_1 + 0x1a0);
  iVar3 = *(int *)(param_1 + 0x1ac);
  iVar4 = 0;
  if (iVar3 < 0) {
    *(undefined4 *)(param_1 + 0x1a8) = 0;
    FUN_140163800(plVar1);
    iVar4 = *(int *)(param_1 + 0x1a8);
    iVar3 = *(int *)(param_1 + 0x1ac);
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x1a8) = uVar2 + iVar4;
  if ((uint)(iVar3 - iVar4) < uVar2) {
    FUN_140aacb36(plVar1);
  }
  memset((void *)((longlong)iVar4 * 0xc + *plVar1),0,(longlong)(int)uVar2 * 0xc);
  return;
}



// FUNCTION 1497ff5e8 FUN_1497ff5e8 body=29 status=ok
// SIG undefined FUN_1497ff5e8(void)

undefined8 FUN_1497ff5e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497ff630 FUN_1497ff630 body=29 status=ok
// SIG undefined FUN_1497ff630(void)

undefined8 FUN_1497ff630(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497ff64e FUN_1497ff64e body=115 status=ok
// SIG undefined FUN_1497ff64e(void)

void FUN_1497ff64e(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (*(int *)(param_1 + 0xbc) < 0) {
    FUN_14482f6fa(param_1 + 0xb0,0);
  }
  FUN_144aa29e6(param_1 + 0xb0,*(undefined4 *)(param_1 + 0x10),1);
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(int *)(param_1 + 0xcc) < 0) {
    FUN_14482f6fa(param_1 + 0xc0,0);
  }
  FUN_144aa29e6(param_1 + 0xc0,*(undefined4 *)(param_1 + 0x10),1);
  return;
}



// FUNCTION 1497ff6fa FUN_1497ff6fa body=29 status=ok
// SIG undefined FUN_1497ff6fa(void)

undefined8 FUN_1497ff6fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497ff750 FUN_1497ff750 body=29 status=ok
// SIG undefined FUN_1497ff750(void)

undefined8 FUN_1497ff750(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497ff7bc FUN_1497ff7bc body=29 status=ok
// SIG undefined FUN_1497ff7bc(void)

undefined8 FUN_1497ff7bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497ff812 FUN_1497ff812 body=29 status=ok
// SIG undefined FUN_1497ff812(void)

undefined8 FUN_1497ff812(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497ff862 FUN_1497ff862 body=29 status=ok
// SIG undefined FUN_1497ff862(void)

undefined8 FUN_1497ff862(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497ff880 FUN_1497ff880 body=84 status=ok
// SIG undefined FUN_1497ff880(void)

void FUN_1497ff880(longlong *param_1,uint param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_144630626(lVar1);
  FUN_144630744(lVar1 + 0x208);
  if ((param_2 & 1) == 0) {
    return;
  }
  lVar1 = *param_1;
  FUN_146e7d426(lVar1);
  FUN_146e80d04(lVar1 + 0x208);
  return;
}



// FUNCTION 1497ff90c FUN_1497ff90c body=29 status=ok
// SIG undefined FUN_1497ff90c(void)

undefined8 FUN_1497ff90c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497ff954 FUN_1497ff954 body=29 status=ok
// SIG undefined FUN_1497ff954(void)

undefined8 FUN_1497ff954(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497ff9aa FUN_1497ff9aa body=29 status=ok
// SIG undefined FUN_1497ff9aa(void)

undefined8 FUN_1497ff9aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497ffa00 FUN_1497ffa00 body=29 status=ok
// SIG undefined FUN_1497ffa00(void)

undefined8 FUN_1497ffa00(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497ffa6c FUN_1497ffa6c body=29 status=ok
// SIG undefined FUN_1497ffa6c(void)

undefined8 FUN_1497ffa6c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497ffac2 FUN_1497ffac2 body=29 status=ok
// SIG undefined FUN_1497ffac2(void)

undefined8 FUN_1497ffac2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497ffb0a FUN_1497ffb0a body=29 status=ok
// SIG undefined FUN_1497ffb0a(void)

undefined8 FUN_1497ffb0a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497ffb60 FUN_1497ffb60 body=29 status=ok
// SIG undefined FUN_1497ffb60(void)

undefined8 FUN_1497ffb60(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497ffba8 FUN_1497ffba8 body=29 status=ok
// SIG undefined FUN_1497ffba8(void)

undefined8 FUN_1497ffba8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497ffbfe FUN_1497ffbfe body=29 status=ok
// SIG undefined FUN_1497ffbfe(void)

undefined8 FUN_1497ffbfe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497ffc46 FUN_1497ffc46 body=29 status=ok
// SIG undefined FUN_1497ffc46(void)

undefined8 FUN_1497ffc46(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497ffc9c FUN_1497ffc9c body=29 status=ok
// SIG undefined FUN_1497ffc9c(void)

undefined8 FUN_1497ffc9c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497ffce4 FUN_1497ffce4 body=29 status=ok
// SIG undefined FUN_1497ffce4(void)

undefined8 FUN_1497ffce4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497ffd3a FUN_1497ffd3a body=29 status=ok
// SIG undefined FUN_1497ffd3a(void)

undefined8 FUN_1497ffd3a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497ffd58 FUN_1497ffd58 body=562 status=ok
// SIG undefined FUN_1497ffd58(void)

void FUN_1497ffd58(longlong param_1,float *param_2,longlong param_3,float param_4,int param_5,
                  float param_6)

{
  int *piVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if (0.0001 <= param_6) {
    lVar4 = (longlong)param_5;
    piVar1 = (int *)(*(longlong *)(param_1 + 8) + lVar4 * 0xc);
    fVar12 = *(float *)(*(longlong *)(param_1 + 0x20) + lVar4 * 4);
    lVar5 = (longlong)*(int *)(param_3 + 0x10);
    lVar3 = *(longlong *)(*(longlong *)(param_3 + 8) + 0x90);
    fVar9 = (1.0 - fVar12) * *(float *)(lVar3 + (piVar1[2] + lVar5) * 4) +
            *(float *)(lVar3 + (piVar1[1] + lVar5) * 4) * fVar12;
    fVar14 = *(float *)(lVar3 + (*piVar1 + lVar5) * 4);
    if ((((fVar14 != 0.0) || (NAN(fVar14))) || (fVar9 != 0.0)) || (NAN(fVar9))) {
      lVar3 = *(longlong *)(*(longlong *)(param_3 + 8) + 0xa8);
      lVar6 = (*piVar1 + lVar5) * 0x10;
      lVar7 = (piVar1[1] + lVar5) * 0x10;
      lVar5 = (piVar1[2] + lVar5) * 0x10;
      fVar10 = *(float *)(lVar3 + 8 + lVar5);
      fVar13 = *(float *)(lVar3 + 4 + lVar5);
      fVar10 = *(float *)(lVar3 + 8 + lVar6) -
               ((*(float *)(lVar3 + 8 + lVar7) - fVar10) * fVar12 + fVar10);
      fVar11 = *(float *)(lVar3 + lVar6) -
               ((*(float *)(lVar3 + lVar7) - *(float *)(lVar3 + lVar5)) * fVar12 +
               *(float *)(lVar3 + lVar5));
      fVar12 = *(float *)(lVar3 + 4 + lVar6) -
               ((*(float *)(lVar3 + 4 + lVar7) - fVar13) * fVar12 + fVar13);
      fVar13 = SQRT(fVar10 * fVar10 + fVar11 * fVar11 + fVar12 * fVar12);
      if (1e-08 < fVar13) {
        lVar3 = *(longlong *)(param_1 + 0x88);
        fVar8 = 1.0 / (param_6 * param_4 * param_4);
        fVar2 = *(float *)(lVar3 + lVar4 * 4);
        fVar14 = ((fVar13 - *(float *)(*(longlong *)(param_1 + 0x30) + lVar4 * 4)) - fVar8 * fVar2)
                 / (fVar8 + fVar9 + fVar14);
        *param_2 = (fVar11 / fVar13) * fVar14;
        param_2[1] = (fVar12 / fVar13) * fVar14;
        param_2[2] = (fVar10 / fVar13) * fVar14;
        *(float *)(lVar3 + lVar4 * 4) = fVar14 + fVar2;
        return;
      }
    }
  }
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  return;
}



// FUNCTION 1497fffd8 FUN_1497fffd8 body=29 status=ok
// SIG undefined FUN_1497fffd8(void)

undefined8 FUN_1497fffd8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14980002e FUN_14980002e body=29 status=ok
// SIG undefined FUN_14980002e(void)

undefined8 FUN_14980002e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149800084 FUN_149800084 body=29 status=ok
// SIG undefined FUN_149800084(void)

undefined8 FUN_149800084(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498000da FUN_1498000da body=29 status=ok
// SIG undefined FUN_1498000da(void)

undefined8 FUN_1498000da(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149800122 FUN_149800122 body=29 status=ok
// SIG undefined FUN_149800122(void)

undefined8 FUN_149800122(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149800140 FUN_149800140 body=88 status=ok
// SIG undefined FUN_149800140(void)

void FUN_149800140(longlong *param_1,undefined8 param_2,undefined4 *param_3,byte *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if ((*param_4 & 1) == 0) {
    return;
  }
  uVar1 = *param_3;
  lVar3 = *param_1;
  uVar2 = *(undefined4 *)(param_1[1] + 0xc);
  FUN_14462ff66(lVar3 + 0x18,uVar1,uVar2);
  FUN_14462ff66(lVar3 + 0x60,uVar1,uVar2);
  return;
}



// FUNCTION 1498001c2 FUN_1498001c2 body=29 status=ok
// SIG undefined FUN_1498001c2(void)

undefined8 FUN_1498001c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149800218 FUN_149800218 body=29 status=ok
// SIG undefined FUN_149800218(void)

undefined8 FUN_149800218(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14980023e FUN_14980023e body=124 status=ok
// SIG undefined FUN_14980023e(void)

void FUN_14980023e(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = (longlong)param_2;
  lVar1 = *param_1;
  FUN_1498002ba(lVar1,param_1[1],
                *(undefined4 *)
                 (*(longlong *)(lVar1 + 0x30) +
                 (ulonglong)*(byte *)(*(longlong *)(lVar1 + 0x20) + lVar2) * 4),
                *(undefined4 *)
                 (*(longlong *)(lVar1 + 0x78) +
                 (ulonglong)*(byte *)(*(longlong *)(lVar1 + 0x68) + lVar2) * 4),
                *(undefined4 *)param_1[2],param_2,lVar2 * 0xc + *(longlong *)param_1[3],
                *(longlong *)param_1[4] + lVar2 * 0xc);
  return;
}



// FUNCTION 1498002ba FUN_1498002ba body=336 status=ok
// SIG undefined FUN_1498002ba(void)

void FUN_1498002ba(longlong param_1,longlong param_2,float param_3,float param_4,float param_5,
                  int param_6,float *param_7,float *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  lVar7 = (longlong)*(int *)(param_1 + 0x10) + (longlong)param_6;
  lVar6 = *(int *)(param_2 + 0x10) + lVar7;
  fVar9 = *(float *)(*(longlong *)(*(longlong *)(param_2 + 8) + 0x90) + lVar6 * 4);
  if ((fVar9 != 0.0) || (NAN(fVar9))) {
    lVar5 = *(longlong *)(*(longlong *)(param_2 + 8) + 0xa8);
    lVar6 = lVar6 * 0x10;
    fVar9 = *(float *)(lVar5 + 8 + lVar6);
    fVar1 = param_7[2];
    fVar10 = *(float *)(lVar5 + 4 + lVar6);
    fVar2 = param_7[1];
    fVar11 = *(float *)(lVar5 + lVar6) - (*(float *)(lVar5 + lVar6) - *param_7) * param_3;
    *(float *)(lVar5 + lVar6) = fVar11;
    fVar10 = fVar10 - (fVar10 - fVar2) * param_3;
    *(float *)(lVar5 + 4 + lVar6) = fVar10;
    fVar9 = fVar9 - (fVar9 - fVar1) * param_3;
    *(float *)(lVar5 + 8 + lVar6) = fVar9;
    lVar8 = (longlong)(int)lVar7 + (longlong)*(int *)(param_2 + 0x10);
    lVar7 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x28);
    fVar1 = *(float *)(lVar7 + 8 + lVar8 * 0xc);
    fVar2 = *(float *)(lVar7 + 4 + lVar8 * 0xc);
    fVar3 = param_8[2];
    fVar4 = param_8[1];
    *(float *)(lVar5 + lVar6) =
         fVar11 - ((fVar11 - *(float *)(lVar7 + lVar8 * 0xc)) - param_5 * *param_8) * param_4;
    *(float *)(lVar5 + 4 + lVar6) = fVar10 - ((fVar10 - fVar2) - fVar4 * param_5) * param_4;
    *(float *)(lVar5 + 8 + lVar6) = fVar9 - ((fVar9 - fVar1) - fVar3 * param_5) * param_4;
  }
  return;
}



// FUNCTION 14980040a FUN_14980040a body=110 status=ok
// SIG undefined FUN_14980040a(void)

void FUN_14980040a(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *param_2;
  lVar2 = *param_1;
  lVar3 = (longlong)iVar1 * 0xc;
  FUN_1498002ba(lVar2,param_1[1],
                *(undefined4 *)
                 (*(longlong *)(lVar2 + 0x30) +
                 (ulonglong)*(byte *)(*(longlong *)(lVar2 + 0x20) + (longlong)iVar1) * 4),
                (int)param_1[2],*(undefined4 *)param_1[3],iVar1,lVar3 + *(longlong *)param_1[4],
                *(longlong *)param_1[5] + lVar3);
  return;
}



// FUNCTION 149800480 FUN_149800480 body=114 status=ok
// SIG undefined FUN_149800480(void)

void FUN_149800480(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0xc;
  FUN_1498002ba(lVar1,param_1[1],*(undefined4 *)param_1[2],
                *(undefined4 *)
                 (*(longlong *)(lVar1 + 0x78) +
                 (ulonglong)*(byte *)(*(longlong *)(lVar1 + 0x68) + (longlong)param_2) * 4),
                *(undefined4 *)param_1[3],param_2,lVar2 + *(longlong *)param_1[4],
                *(longlong *)param_1[5] + lVar2);
  return;
}



// FUNCTION 1498004f2 FUN_1498004f2 body=101 status=ok
// SIG undefined FUN_1498004f2(void)

void FUN_1498004f2(undefined8 *param_1,int *param_2)

{
  longlong lVar1;
  
  lVar1 = (longlong)*param_2 * 0xc;
  FUN_1498002ba(*param_1,param_1[1],*(undefined4 *)param_1[2],*(undefined4 *)param_1[3],
                *(undefined4 *)param_1[4],*param_2,lVar1 + *(longlong *)param_1[5],
                *(longlong *)param_1[6] + lVar1);
  return;
}



// FUNCTION 149800590 FUN_149800590 body=29 status=ok
// SIG undefined FUN_149800590(void)

undefined8 FUN_149800590(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498005e6 FUN_1498005e6 body=29 status=ok
// SIG undefined FUN_1498005e6(void)

undefined8 FUN_1498005e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14980063c FUN_14980063c body=29 status=ok
// SIG undefined FUN_14980063c(void)

undefined8 FUN_14980063c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149800692 FUN_149800692 body=29 status=ok
// SIG undefined FUN_149800692(void)

undefined8 FUN_149800692(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498006e8 FUN_1498006e8 body=29 status=ok
// SIG undefined FUN_1498006e8(void)

undefined8 FUN_1498006e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149800706 FUN_149800706 body=540 status=ok
// SIG undefined FUN_149800706(void)

void FUN_149800706(longlong param_1,float *param_2,longlong param_3,float param_4,int param_5,
                  float param_6)

{
  int *piVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if (0.0001 <= param_6) {
    lVar4 = (longlong)param_5;
    piVar1 = (int *)(*(longlong *)(param_1 + 8) + lVar4 * 0xc);
    fVar12 = *(float *)(*(longlong *)(param_1 + 0x20) + lVar4 * 4);
    lVar3 = *(longlong *)(param_3 + 0x90);
    fVar9 = (1.0 - fVar12) * *(float *)(lVar3 + (longlong)piVar1[2] * 4) +
            *(float *)(lVar3 + (longlong)piVar1[1] * 4) * fVar12;
    fVar14 = *(float *)(lVar3 + (longlong)*piVar1 * 4);
    if ((((fVar14 != 0.0) || (NAN(fVar14))) || (fVar9 != 0.0)) || (NAN(fVar9))) {
      lVar3 = *(longlong *)(param_3 + 0xa8);
      lVar5 = (longlong)*piVar1 * 0x10;
      lVar7 = (longlong)piVar1[1] * 0x10;
      lVar6 = (longlong)piVar1[2] * 0x10;
      fVar10 = *(float *)(lVar3 + 8 + lVar6);
      fVar13 = *(float *)(lVar3 + 4 + lVar6);
      fVar10 = *(float *)(lVar3 + 8 + lVar5) -
               ((*(float *)(lVar3 + 8 + lVar7) - fVar10) * fVar12 + fVar10);
      fVar11 = *(float *)(lVar3 + lVar5) -
               ((*(float *)(lVar3 + lVar7) - *(float *)(lVar3 + lVar6)) * fVar12 +
               *(float *)(lVar3 + lVar6));
      fVar12 = *(float *)(lVar3 + 4 + lVar5) -
               ((*(float *)(lVar3 + 4 + lVar7) - fVar13) * fVar12 + fVar13);
      fVar13 = SQRT(fVar10 * fVar10 + fVar11 * fVar11 + fVar12 * fVar12);
      if (1e-08 < fVar13) {
        lVar3 = *(longlong *)(param_1 + 0x88);
        fVar8 = 1.0 / (param_6 * param_4 * param_4);
        fVar2 = *(float *)(lVar3 + lVar4 * 4);
        fVar14 = ((fVar13 - *(float *)(*(longlong *)(param_1 + 0x30) + lVar4 * 4)) - fVar8 * fVar2)
                 / (fVar8 + fVar9 + fVar14);
        *param_2 = (fVar11 / fVar13) * fVar14;
        param_2[1] = (fVar12 / fVar13) * fVar14;
        param_2[2] = (fVar10 / fVar13) * fVar14;
        *(float *)(lVar3 + lVar4 * 4) = fVar14 + fVar2;
        return;
      }
    }
  }
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  return;
}



// FUNCTION 14980092a FUN_14980092a body=124 status=ok
// SIG undefined FUN_14980092a(void)

void FUN_14980092a(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = (longlong)param_2;
  lVar1 = *param_1;
  FUN_1498009a6(lVar1,param_1[1],
                *(undefined4 *)
                 (*(longlong *)(lVar1 + 0x30) +
                 (ulonglong)*(byte *)(*(longlong *)(lVar1 + 0x20) + lVar2) * 4),
                *(undefined4 *)
                 (*(longlong *)(lVar1 + 0x78) +
                 (ulonglong)*(byte *)(*(longlong *)(lVar1 + 0x68) + lVar2) * 4),
                *(undefined4 *)param_1[2],param_2,lVar2 * 0xc + *(longlong *)param_1[3],
                *(longlong *)param_1[4] + lVar2 * 0xc);
  return;
}



// FUNCTION 1498009a6 FUN_1498009a6 body=314 status=ok
// SIG undefined FUN_1498009a6(void)

void FUN_1498009a6(longlong param_1,longlong param_2,float param_3,float param_4,float param_5,
                  int param_6,float *param_7,float *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  lVar8 = (longlong)*(int *)(param_1 + 0x10) + (longlong)param_6;
  fVar9 = *(float *)(*(longlong *)(param_2 + 0x90) + lVar8 * 4);
  if ((fVar9 != 0.0) || (NAN(fVar9))) {
    lVar5 = *(longlong *)(param_2 + 0xa8);
    lVar7 = lVar8 * 0x10;
    fVar9 = *(float *)(lVar5 + 8 + lVar7);
    fVar1 = param_7[2];
    fVar10 = *(float *)(lVar5 + 4 + lVar7);
    fVar2 = param_7[1];
    fVar11 = *(float *)(lVar5 + lVar7) - (*(float *)(lVar5 + lVar7) - *param_7) * param_3;
    *(float *)(lVar5 + lVar7) = fVar11;
    fVar10 = fVar10 - (fVar10 - fVar2) * param_3;
    *(float *)(lVar5 + 4 + lVar7) = fVar10;
    fVar9 = fVar9 - (fVar9 - fVar1) * param_3;
    *(float *)(lVar5 + 8 + lVar7) = fVar9;
    lVar6 = *(longlong *)(param_2 + 0x28);
    fVar1 = *(float *)(lVar6 + 8 + lVar8 * 0xc);
    fVar2 = *(float *)(lVar6 + 4 + lVar8 * 0xc);
    fVar3 = param_8[2];
    fVar4 = param_8[1];
    *(float *)(lVar5 + lVar7) =
         fVar11 - ((fVar11 - *(float *)(lVar6 + lVar8 * 0xc)) - param_5 * *param_8) * param_4;
    *(float *)(lVar5 + 4 + lVar7) = fVar10 - ((fVar10 - fVar2) - fVar4 * param_5) * param_4;
    *(float *)(lVar5 + 8 + lVar7) = fVar9 - ((fVar9 - fVar1) - fVar3 * param_5) * param_4;
  }
  return;
}



// FUNCTION 149800ae8 FUN_149800ae8 body=114 status=ok
// SIG undefined FUN_149800ae8(void)

void FUN_149800ae8(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0xc;
  FUN_1498009a6(lVar1,param_1[1],*(undefined4 *)param_1[2],
                *(undefined4 *)
                 (*(longlong *)(lVar1 + 0x78) +
                 (ulonglong)*(byte *)(*(longlong *)(lVar1 + 0x68) + (longlong)param_2) * 4),
                *(undefined4 *)param_1[3],param_2,lVar2 + *(longlong *)param_1[4],
                *(longlong *)param_1[5] + lVar2);
  return;
}



// FUNCTION 149800b5a FUN_149800b5a body=191 status=ok
// SIG undefined FUN_149800b5a(void)

void FUN_149800b5a(undefined8 param_1,longlong param_2,int param_3)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [44];
  float local_3c;
  float local_38;
  float local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  fVar1 = *(float *)(*(longlong *)(param_2 + 0x90) + (longlong)param_3 * 4);
  if (0.0 < fVar1) {
    FUN_149800c1a(0,&local_3c,param_2,param_3);
    lVar2 = *(longlong *)(param_2 + 0xa8);
    lVar3 = (longlong)param_3 * 0x10;
    *(float *)(lVar2 + lVar3) = *(float *)(lVar2 + lVar3) - local_3c * fVar1;
    *(float *)(lVar2 + 4 + lVar3) = *(float *)(lVar2 + 4 + lVar3) - local_38 * fVar1;
    *(float *)(lVar2 + 8 + lVar3) = *(float *)(lVar2 + 8 + lVar3) - fVar1 * local_34;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149800c1a FUN_149800c1a body=224 status=ok
// SIG undefined FUN_149800c1a(void)

void FUN_149800c1a(longlong param_1,float *param_2,longlong param_3,int param_4)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  lVar4 = (longlong)param_4;
  fVar1 = *(float *)(*(longlong *)(param_3 + 0x90) + lVar4 * 4);
  fVar6 = 0.0;
  fVar8 = 0.0;
  fVar9 = 0.0;
  if ((fVar1 != 0.0) || (NAN(fVar1))) {
    lVar2 = *(longlong *)(param_3 + 0xa8);
    lVar5 = lVar4 * 0x10;
    lVar3 = **(longlong **)(param_1 + 8);
    fVar9 = *(float *)(lVar2 + 8 + lVar5) - *(float *)(lVar3 + 8 + lVar4 * 0xc);
    fVar8 = *(float *)(lVar2 + 4 + lVar5) - *(float *)(lVar3 + 4 + lVar4 * 0xc);
    fVar7 = *(float *)(lVar2 + lVar5) - *(float *)(lVar3 + lVar4 * 0xc);
    fVar10 = SQRT(fVar9 * fVar9 + fVar7 * fVar7 + fVar8 * fVar8);
    fVar11 = fVar10 - *(float *)(*(longlong *)(param_1 + 0x18) +
                                (lVar4 - *(int *)(param_1 + 0x10)) * 4);
    fVar6 = *(float *)(param_1 + 0x28);
    fVar9 = (fVar11 * (fVar9 / fVar10) * fVar6) / fVar1;
    fVar8 = ((fVar8 / fVar10) * fVar11 * fVar6) / fVar1;
    fVar6 = ((fVar7 / fVar10) * fVar11 * fVar6) / fVar1;
  }
  *param_2 = fVar6;
  param_2[1] = fVar8;
  param_2[2] = fVar9;
  return;
}



// FUNCTION 149800cfa FUN_149800cfa body=68 status=ok
// SIG undefined FUN_149800cfa(void)

void FUN_149800cfa(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_149800d3e();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_140240048(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 149800d3e FUN_149800d3e body=322 status=ok
// SIG undefined FUN_149800d3e(void)

void FUN_149800d3e(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x74 + (longlong)iVar4 * 0x80) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149800e82 FUN_149800e82 body=319 status=ok
// SIG undefined FUN_149800e82(void)

undefined4 * FUN_149800e82(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint *puVar7;
  int iVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1493cf95e(param_1,local_50);
  puVar6 = (undefined8 *)param_3[1];
  uVar3 = *(uint *)*param_3;
  *local_48 = uVar3;
  puVar7 = local_48 + 4;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined8 *)puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 2;
  }
  local_48[0x1c] = 0xffffffff;
  local_54 = local_50[0];
  local_68 = 0;
  cVar1 = FUN_1493cfa44(param_1,uVar3,local_48);
  if (cVar1 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar5) {
      uVar2 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar4 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar4 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      local_48[0x1d] = uVar3;
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      local_48[0x1c] =
           *(uint *)(lVar4 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar4 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_1493cfb72(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149800fc2 FUN_149800fc2 body=147 status=ok
// SIG undefined FUN_149800fc2(void)

void FUN_149800fc2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
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



// FUNCTION 149801056 FUN_149801056 body=62 status=ok
// SIG undefined FUN_149801056(void)

void FUN_149801056(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_149801094(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,4);
  }
  return;
}



// FUNCTION 149801094 FUN_149801094 body=112 status=ok
// SIG undefined FUN_149801094(void)

ulonglong FUN_149801094(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1498010ce;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x18,4);
      param_2 = param_2 / 0x18;
    }
  }
LAB_1498010ce:
  return param_2 & 0xffffffff;
}



// FUNCTION 149801104 FUN_149801104 body=96 status=ok
// SIG undefined FUN_149801104(void)

void FUN_149801104(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 149801164 FUN_149801164 body=96 status=ok
// SIG undefined FUN_149801164(void)

void FUN_149801164(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 1498011c4 FUN_1498011c4 body=96 status=ok
// SIG undefined FUN_1498011c4(void)

void FUN_1498011c4(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 149801224 FUN_149801224 body=96 status=ok
// SIG undefined FUN_149801224(void)

void FUN_149801224(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 149801284 FUN_149801284 body=122 status=ok
// SIG undefined FUN_149801284(void)

void FUN_149801284(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x168) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x168) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x168 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1498012fe FUN_1498012fe body=138 status=ok
// SIG undefined FUN_1498012fe(void)

void FUN_1498012fe(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar1 >> 0x10 ^ uVar1) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x168) == param_2) {
          FUN_149801388(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x168 + *param_1 + 0x160);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 149801388 FUN_149801388 body=138 status=ok
// SIG undefined FUN_149801388(void)

void FUN_149801388(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x168;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x164 + lVar2);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x160 + lVar6 * 0x168);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar1 + lVar6 * 0x168 + 0x160);
  }
  *puVar3 = *(undefined4 *)(lVar1 + lVar2 + 0x160);
  FUN_14062bdec(*param_1 + lVar2 + 0x10);
  FUN_149801284(param_1,param_2);
  return;
}



// FUNCTION 149801412 FUN_149801412 body=114 status=ok
// SIG undefined FUN_149801412(void)

void FUN_149801412(longlong *param_1,int param_2)

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



// FUNCTION 149801484 FUN_149801484 body=132 status=ok
// SIG undefined FUN_149801484(void)

void FUN_149801484(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14980150a FUN_14980150a body=95 status=ok
// SIG undefined FUN_14980150a(void)

void FUN_14980150a(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 14980156a FUN_14980156a body=413 status=ok
// SIG undefined FUN_14980156a(void)

void FUN_14980156a(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar7 = param_2 - iVar1;
  if (uVar7 != 0 && iVar1 <= (int)param_2) {
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_14474875a(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_1446efaca(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar9 * 0x10 + lVar2 + -0xc);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = iVar8 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar9 = uVar9 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar8 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -4;
      } while ((longlong)iVar11 < (longlong)uVar9);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar7;
      if (param_2 != 0) {
        plVar6 = param_1 + 2;
        uVar12 = uVar7 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar6,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar7 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar6;
        }
        if (uVar7 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = (int)param_1[5];
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar6 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar7) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar7);
      FUN_1447c6044(param_1 + 2,uVar3,uVar7,0);
      return;
    }
  }
  return;
}



// FUNCTION 149801708 FUN_149801708 body=477 status=ok
// SIG undefined FUN_149801708(void)

void FUN_149801708(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
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
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
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
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar6 = (longlong)iVar4 * 0x10;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0xc + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 8 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498018e6 FUN_1498018e6 body=132 status=ok
// SIG undefined FUN_1498018e6(void)

void FUN_1498018e6(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14980196c FUN_14980196c body=312 status=ok
// SIG undefined FUN_14980196c(void)

undefined4 * FUN_14980196c(longlong param_1,undefined4 *param_2,ulonglong *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_149801aa6(param_1,local_48);
  uVar5 = *param_3;
  *local_40 = uVar5;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_149801b8c(param_1,uVar3,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0xc) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_149801708(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149801aa6 FUN_149801aa6 body=229 status=ok
// SIG undefined FUN_149801aa6(void)

int * FUN_149801aa6(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1446efaca(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 149801b8c FUN_149801b8c body=124 status=ok
// SIG undefined FUN_149801b8c(void)

undefined8 FUN_149801b8c(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        plVar1 = (longlong *)(*param_1 + (longlong)iVar2 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x10) == *param_3) {
          *plVar1 = *param_3;
          FUN_149801c08(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = (int)plVar1[1];
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 149801c08 FUN_149801c08 body=114 status=ok
// SIG undefined FUN_149801c08(void)

void FUN_149801c08(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 149801c7a FUN_149801c7a body=114 status=ok
// SIG undefined FUN_149801c7a(void)

void FUN_149801c7a(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
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



// FUNCTION 149801cec FUN_149801cec body=132 status=ok
// SIG undefined FUN_149801cec(void)

void FUN_149801cec(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar1 >> 0x10 ^ uVar1) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x18) == param_2) {
          FUN_149801d70(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 149801d70 FUN_149801d70 body=87 status=ok
// SIG undefined FUN_149801d70(void)

void FUN_149801d70(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x18 + 0x10);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x10);
  FUN_149801c7a();
  return;
}



// FUNCTION 149801dc8 FUN_149801dc8 body=114 status=ok
// SIG undefined FUN_149801dc8(void)

void FUN_149801dc8(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 149801e3a FUN_149801e3a body=459 status=ok
// SIG undefined FUN_149801e3a(void)

undefined8 *
FUN_149801e3a(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x808;
  *param_1 = &PTR_FUN_149f51c30;
  param_1[4] = 0;
  param_1[4] = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  param_1[6] = 0;
  param_1[6] = *param_4;
  *param_4 = 0;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_4 + 1);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_4 + 0xc);
  param_4[1] = 0;
  param_1[8] = 0x7f7fffff7f7fffff;
  param_1[9] = 0xff7fffff7f7fffff;
  param_1[10] = &DAT_ff7fffffff7fffff;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  if ((longlong)*(int *)(param_1 + 7) < 1) {
    fVar4 = -3.4028235e+38;
    fVar5 = 3.4028235e+38;
    fVar8 = 3.4028235e+38;
    fVar6 = -3.4028235e+38;
    fVar9 = 3.4028235e+38;
    fVar7 = -3.4028235e+38;
  }
  else {
    lVar2 = param_1[6];
    fVar5 = 3.4028235e+38;
    fVar4 = -3.4028235e+38;
    lVar3 = 0;
    fVar6 = -3.4028235e+38;
    fVar7 = -3.4028235e+38;
    fVar8 = 3.4028235e+38;
    fVar9 = 3.4028235e+38;
    do {
      fVar1 = *(float *)(lVar2 + 8 + lVar3);
      if (fVar1 <= fVar9) {
        fVar9 = fVar1;
      }
      fVar1 = *(float *)(lVar2 + 4 + lVar3);
      if (fVar1 <= fVar8) {
        fVar8 = fVar1;
      }
      if (*(float *)(lVar2 + lVar3) <= fVar5) {
        fVar5 = *(float *)(lVar2 + lVar3);
      }
      *(float *)(param_1 + 8) = fVar5;
      *(float *)((longlong)param_1 + 0x44) = fVar8;
      *(float *)(param_1 + 9) = fVar9;
      fVar1 = *(float *)(lVar2 + 8 + lVar3);
      if (fVar7 <= fVar1) {
        fVar7 = fVar1;
      }
      fVar1 = *(float *)(lVar2 + 4 + lVar3);
      if (fVar6 <= fVar1) {
        fVar6 = fVar1;
      }
      if (fVar4 <= *(float *)(lVar2 + lVar3)) {
        fVar4 = *(float *)(lVar2 + lVar3);
      }
      *(float *)((longlong)param_1 + 0x4c) = fVar4;
      *(float *)(param_1 + 10) = fVar6;
      *(float *)((longlong)param_1 + 0x54) = fVar7;
      lVar3 = lVar3 + 0xc;
    } while ((longlong)*(int *)(param_1 + 7) * 0xc != lVar3);
  }
  *(float *)((longlong)param_1 + 0x6c) = (fVar4 - fVar5) * 0.5 + fVar5;
  *(float *)(param_1 + 0xe) = (fVar6 - fVar8) * 0.5 + fVar8;
  *(float *)((longlong)param_1 + 0x74) = (fVar7 - fVar9) * 0.5 + fVar9;
  *(float *)(param_1 + 0xd) = (fVar4 - fVar5) * (fVar6 - fVar8) * (fVar7 - fVar9);
  FUN_1429a5e4c(param_1,param_3,0);
  FUN_1429a5e5c(param_1,SUB84((double)*(float *)(param_1 + 0xd),0));
  return param_1;
}



// FUNCTION 149802006 FUN_149802006 body=42 status=ok
// SIG undefined FUN_149802006(void)

undefined8 * FUN_149802006(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f553e0;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14980203e FUN_14980203e body=228 status=ok
// SIG undefined FUN_14980203e(void)

void FUN_14980203e(longlong *param_1,ulonglong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar5 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    uVar5 = uVar5 >> 0x10 ^ uVar5;
    uVar7 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
    uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar6 +
                    ((longlong)
                     (int)(uVar5 * 0x40 + (uVar7 >> 0x10 ^ uVar7) + (uVar5 >> 2) + 0x9e3779b9 ^
                          uVar5) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      do {
        lVar8 = (longlong)iVar1 * 0x20;
        if ((*(ulonglong *)(lVar4 + lVar8) == uVar2) && (*(ulonglong *)(lVar4 + 8 + lVar8) == uVar3)
           ) {
          FUN_149802122();
          return;
        }
        iVar1 = *(int *)(lVar8 + lVar4 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 149802122 FUN_149802122 body=90 status=ok
// SIG undefined FUN_149802122(void)

void FUN_149802122(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_149801dc8();
  return;
}



// FUNCTION 14980217c FUN_14980217c body=132 status=ok
// SIG undefined FUN_14980217c(void)

void FUN_14980217c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 149802202 FUN_149802202 body=132 status=ok
// SIG undefined FUN_149802202(void)

void FUN_149802202(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 7,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 7)) {
      uVar5 = uVar3 >> 7 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x80,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 149802288 FUN_149802288 body=132 status=ok
// SIG undefined FUN_149802288(void)

void FUN_149802288(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14980230e FUN_14980230e body=132 status=ok
// SIG undefined FUN_14980230e(void)

void FUN_14980230e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 149802394 FUN_149802394 body=132 status=ok
// SIG undefined FUN_149802394(void)

void FUN_149802394(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14980241a FUN_14980241a body=88 status=ok
// SIG undefined FUN_14980241a(void)

void FUN_14980241a(longlong param_1,int param_2,longlong *param_3,float *param_4)

{
  float *pfVar1;
  byte bVar2;
  longlong lVar3;
  
  lVar3 = (longlong)param_2;
  pfVar1 = (float *)(*param_3 + lVar3 * 0xc);
  if ((*pfVar1 == *param_4) && (!NAN(*pfVar1) && !NAN(*param_4))) {
    if ((pfVar1[1] == param_4[1]) && (!NAN(pfVar1[1]) && !NAN(param_4[1]))) {
      if ((pfVar1[2] == param_4[2]) && (!NAN(pfVar1[2]) && !NAN(param_4[2]))) {
        return;
      }
    }
  }
  pfVar1[2] = param_4[2];
  *(undefined8 *)pfVar1 = *(undefined8 *)param_4;
  bVar2 = *(byte *)(*(longlong *)(param_1 + 0x48) + lVar3);
  if (-1 < (char)bVar2) {
    *(byte *)(*(longlong *)(param_1 + 0x48) + lVar3) = bVar2 | 0x80;
  }
  return;
}



// FUNCTION 149802472 FUN_149802472 body=204 status=ok
// SIG undefined FUN_149802472(void)

void FUN_149802472(longlong param_1,undefined8 param_2,float *param_3,float *param_4,
                  undefined1 param_5)

{
  float *pfVar1;
  float fVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = FUN_1409bbfe0(param_1,param_2,param_5);
  fVar2 = *param_3;
  lVar5 = (longlong)iVar4;
  pfVar1 = (float *)(*(longlong *)(param_1 + 0x18) + lVar5 * 0xc);
  if ((*pfVar1 == fVar2) && (pfVar1[1] == fVar2)) {
    if ((pfVar1[2] == fVar2) && (!NAN(pfVar1[2]) && !NAN(fVar2))) goto LAB_1498024cc;
  }
  *pfVar1 = fVar2;
  pfVar1[1] = fVar2;
  pfVar1[2] = fVar2;
  bVar3 = *(byte *)(*(longlong *)(param_1 + 0x48) + lVar5);
  if (-1 < (char)bVar3) {
    *(byte *)(*(longlong *)(param_1 + 0x48) + lVar5) = bVar3 | 0x80;
  }
LAB_1498024cc:
  fVar2 = *param_4;
  pfVar1 = (float *)(*(longlong *)(param_1 + 0x28) + lVar5 * 0xc);
  if ((*pfVar1 == fVar2) && (pfVar1[1] == fVar2)) {
    if ((pfVar1[2] == fVar2) && (!NAN(pfVar1[2]) && !NAN(fVar2))) {
      return;
    }
  }
  *pfVar1 = fVar2;
  pfVar1[1] = fVar2;
  pfVar1[2] = fVar2;
  bVar3 = *(byte *)(*(longlong *)(param_1 + 0x48) + lVar5);
  if (-1 < (char)bVar3) {
    *(byte *)(*(longlong *)(param_1 + 0x48) + lVar5) = bVar3 | 0x80;
  }
  return;
}



// FUNCTION 14980253e FUN_14980253e body=91 status=ok
// SIG undefined FUN_14980253e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14980253e(int param_1)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_1 * 8,8);
  uVar3 = 0x7fffffff;
  if (param_1 <= (int)(uVar1 >> 3)) {
    uVar3 = uVar1 >> 3 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(&DAT_14cc271f8,0,uVar3,8,8);
  }
  _DAT_14cc27204 = iVar2;
  return;
}



// FUNCTION 149802599 FUN_149802599 body=73 status=ok
// SIG undefined FUN_149802599(void)

void FUN_149802599(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  lVar3 = 0;
  bVar2 = DAT_14c950c29;
  do {
    lVar1 = *(longlong *)(param_2 + lVar3 * 8);
    *(longlong *)(param_1 + lVar3 * 8) = lVar1;
    if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
      FUN_14689c22e();
      bVar2 = DAT_14c950c29;
    }
    lVar3 = lVar3 + 1;
  } while (param_3 != (int)lVar3);
  return;
}



// FUNCTION 1498025e2 FUN_1498025e2 body=96 status=ok
// SIG undefined FUN_1498025e2(void)

void FUN_1498025e2(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 149802642 FUN_149802642 body=96 status=ok
// SIG undefined FUN_149802642(void)

void FUN_149802642(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 1498026b0 FUN_1498026b0 body=158 status=ok
// SIG undefined FUN_1498026b0(void)

void FUN_1498026b0(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_144a41c6c();
  if (iVar1 != -1) {
    local_34 = *param_3;
    local_30 = local_34;
    local_2c = local_34;
    FUN_14980241a(param_1,iVar1,param_1 + 0x18,&local_34);
    local_34 = param_3[1];
    local_30 = local_34;
    local_2c = local_34;
    FUN_14980241a(param_1,iVar1,param_1 + 0x28,&local_34);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149802750 FUN_149802750 body=132 status=ok
// SIG undefined FUN_149802750(void)

void FUN_149802750(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1498027d6 FUN_1498027d6 body=157 status=ok
// SIG undefined FUN_1498027d6(void)

void FUN_1498027d6(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_144a41c6c();
  if (iVar1 != -1) {
    local_34 = *param_3;
    local_30 = local_34;
    local_2c = local_34;
    FUN_14980241a(param_1,iVar1,param_1 + 0x18,&local_34);
    local_34 = *param_3;
    local_30 = local_34;
    local_2c = local_34;
    FUN_14980241a(param_1,iVar1,param_1 + 0x28,&local_34);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149802874 FUN_149802874 body=152 status=ok
// SIG undefined FUN_149802874(void)

void FUN_149802874(longlong param_1,ulonglong param_2,char *param_3)

{
  undefined1 auStack_58 [36];
  float local_34;
  float local_30;
  float local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = (float)(int)*param_3;
  local_30 = local_34;
  local_2c = local_34;
  FUN_14980241a(local_34,param_2,param_1 + 0x18,&local_34);
  local_34 = (float)(int)*param_3;
  local_30 = local_34;
  local_2c = local_34;
  FUN_14980241a(param_1,param_2 & 0xffffffff,param_1 + 0x28,&local_34);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14980290e FUN_14980290e body=145 status=ok
// SIG undefined FUN_14980290e(void)

void FUN_14980290e(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar3 = FUN_144a41c6c();
  if (iVar3 != -1) {
    lVar1 = *param_3;
    puVar2 = (undefined8 *)param_3[1];
    local_30 = *(undefined4 *)(puVar2 + 1);
    local_38 = *puVar2;
    FUN_14980241a(lVar1,iVar3,lVar1 + 0x18,&local_38);
    local_30 = *(undefined4 *)(puVar2 + 1);
    local_38 = *puVar2;
    FUN_14980241a(lVar1,iVar3,lVar1 + 0x28,&local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498029ae FUN_1498029ae body=132 status=ok
// SIG undefined FUN_1498029ae(void)

void FUN_1498029ae(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 149802a34 FUN_149802a34 body=96 status=ok
// SIG undefined FUN_149802a34(void)

void FUN_149802a34(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 149802aa2 FUN_149802aa2 body=132 status=ok
// SIG undefined FUN_149802aa2(void)

void FUN_149802aa2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 149802b28 FUN_149802b28 body=347 status=ok
// SIG undefined FUN_149802b28(void)

undefined4 * FUN_149802b28(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined2 *puVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1409bc900(param_1,local_48);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined4 *)param_3[1];
  *local_40 = *puVar1;
  iVar8 = 0;
  *puVar1 = 0;
  *(undefined4 *)(local_40 + 1) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_40 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  *(undefined4 *)(local_40 + 2) = *puVar2;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  if (*(int *)(local_40 + 1) == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)*local_40;
    iVar8 = *(int *)(local_40 + 1) + -1;
  }
  uVar4 = FUN_144a49b4a(iVar8,puVar7);
  local_58 = 0;
  cVar3 = FUN_1409bc7bc(param_1,uVar4,local_40,&local_4c);
  if (cVar3 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar6) {
      uVar5 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x1c) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_1409bd292(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149802c84 FUN_149802c84 body=132 status=ok
// SIG undefined FUN_149802c84(void)

void FUN_149802c84(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 149802d0a FUN_149802d0a body=114 status=ok
// SIG undefined FUN_149802d0a(void)

void FUN_149802d0a(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 149802d7c FUN_149802d7c body=132 status=ok
// SIG undefined FUN_149802d7c(void)

void FUN_149802d7c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 149802e02 FUN_149802e02 body=320 status=ok
// SIG undefined FUN_149802e02(void)

void FUN_149802e02(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x560) != 0) {
    plVar1 = (longlong *)(param_1 + 0x580);
    if (*(longlong **)(param_1 + 0x570) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0x570);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(longlong *)(param_1 + 0x520) != 0) {
    plVar1 = (longlong *)(param_1 + 0x540);
    if (*(longlong **)(param_1 + 0x530) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0x530);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  *(undefined4 *)(param_1 + 0x510) = 0;
  if (*(longlong *)(param_1 + 0x508) != 0) {
    FUN_1400020a8();
  }
  FUN_1401bc218(param_1 + 0x4c8);
  FUN_146e2cdb8(param_1 + 0x460);
  *(undefined4 *)(param_1 + 0x458) = 0;
  if (*(longlong *)(param_1 + 0x450) != 0) {
    FUN_1400020a8();
  }
  FUN_14083ed90(param_1 + 0x410);
  FUN_146e2c9be(param_1 + 0x3a8);
  *(undefined4 *)(param_1 + 0x3a0) = 0;
  if (*(longlong *)(param_1 + 0x398) != 0) {
    FUN_1400020a8();
  }
  FUN_14083ed90(param_1 + 0x358);
  FUN_146e2c0ae(param_1 + 0x1a0);
  FUN_140b4d3d6(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_149f51a28;
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_1400020a8();
  }
  FUN_1407fbc7e(param_1 + 0x30);
  return;
}



// FUNCTION 149802f42 FUN_149802f42 body=48 status=ok
// SIG undefined FUN_149802f42(void)

void FUN_149802f42(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 149802f72 FUN_149802f72 body=322 status=ok
// SIG undefined FUN_149802f72(void)

void FUN_149802f72(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498030b6 FUN_1498030b6 body=298 status=ok
// SIG undefined FUN_1498030b6(void)

void FUN_1498030b6(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      lVar1 = *(longlong *)(*local_68 + 8 + (longlong)iStack_4c * 0x18);
      if (lVar1 != 0) {
        FUN_14062c8d2(lVar1);
        FUN_1400020a8(lVar1);
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_144727cd0(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498031e2 FUN_1498031e2 body=114 status=ok
// SIG undefined FUN_1498031e2(void)

void FUN_1498031e2(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
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



// FUNCTION 149803258 FUN_149803258 body=92 status=ok
// SIG undefined FUN_149803258(void)

void FUN_149803258(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_14348e7d6(param_2);
    if (lVar1 != 0) {
      lVar1 = FUN_14348e7d6(param_2);
      if (*(longlong *)(lVar1 + 0x18) != 0) {
        FUN_1497ed048(*(longlong *)(lVar1 + 0x18),param_4,param_5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1498032b4 FUN_1498032b4 body=100 status=ok
// SIG undefined FUN_1498032b4(void)

void FUN_1498032b4(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_14348e7d6(param_2);
    if (lVar1 != 0) {
      lVar1 = FUN_14348e7d6(param_2);
      if (*(longlong *)(lVar1 + 0x18) != 0) {
        FUN_1497ed6ba(param_3,param_4,param_5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 149803322 FUN_149803322 body=47 status=ok
// SIG undefined FUN_149803322(void)

undefined8 FUN_149803322(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    lVar1 = FUN_144a7954a(param_2);
    if (lVar1 != 0) {
      uVar2 = FUN_1497ee99e(param_3);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 149803352 FUN_149803352 body=64 status=ok
// SIG undefined FUN_149803352(void)

undefined8 FUN_149803352(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    FUN_1406cc378(param_2);
    FUN_1401ff858(param_2);
    lVar1 = FUN_14348e7d6(param_2);
    if (lVar1 != 0) {
      lVar1 = FUN_14348e7d6(param_2);
      return *(undefined8 *)(lVar1 + 0x18);
    }
  }
  return 0;
}



// FUNCTION 149803396 FUN_149803396 body=121 status=ok
// SIG undefined FUN_149803396(void)

void FUN_149803396(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  float fVar2;
  
  if (param_3 != 0) {
    fVar2 = (float)FUN_1496e2d1e(param_3);
    if ((param_2 != 0) && ((fVar2 != 0.0 || (NAN(fVar2))))) {
      FUN_149803410(param_2);
      lVar1 = FUN_14348e7de(param_2);
      if (lVar1 != 0) {
        lVar1 = FUN_14348e7de(param_2);
        FUN_1497ee262(param_3,param_5,lVar1 + 0xe0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 149803410 FUN_149803410 body=64 status=ok
// SIG undefined FUN_149803410(void)

void FUN_149803410(undefined8 param_1)

{
  longlong lVar1;
  
  FUN_1406cc378();
  FUN_1401ff858(param_1);
  lVar1 = FUN_14348e7d6(param_1);
  if (lVar1 != 0) {
    lVar1 = FUN_14348e7d6(param_1);
    if (*(longlong *)(lVar1 + 0x18) != 0) {
      *(undefined1 *)(*(longlong *)(lVar1 + 0x18) + 0x480) = 0;
    }
  }
  return;
}



// FUNCTION 149803450 FUN_149803450 body=58 status=ok
// SIG undefined FUN_149803450(void)

undefined8 FUN_149803450(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_14348e7d6(param_2);
    if (lVar1 != 0) {
      lVar1 = FUN_14348e7d6(param_2);
      if (*(longlong *)(lVar1 + 0x18) != 0) {
        *(undefined1 *)(*(longlong *)(lVar1 + 0x18) + 0x480) = 1;
      }
    }
  }
  return 1;
}



// FUNCTION 14980348a FUN_14980348a body=58 status=ok
// SIG undefined FUN_14980348a(void)

undefined8 FUN_14980348a(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_14348e7d6(param_2);
    if (lVar1 != 0) {
      lVar1 = FUN_14348e7d6(param_2);
      if (*(longlong *)(lVar1 + 0x18) != 0) {
        *(undefined1 *)(*(longlong *)(lVar1 + 0x18) + 0x480) = 0;
      }
    }
  }
  return 1;
}



// FUNCTION 1498034d2 FUN_1498034d2 body=34 status=ok
// SIG undefined FUN_1498034d2(void)

undefined8 FUN_1498034d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1498034f4 FUN_1498034f4 body=36 status=ok
// SIG undefined FUN_1498034f4(void)

undefined8 FUN_1498034f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 149803534 FUN_149803534 body=93 status=ok
// SIG undefined FUN_149803534(void)

void FUN_149803534(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be876c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 149803592 FUN_149803592 body=123 status=ok
// SIG undefined FUN_149803592(void)

void FUN_149803592(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be876c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14980360e FUN_14980360e body=21 status=ok
// SIG undefined FUN_14980360e(void)

undefined8 FUN_14980360e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 149803624 FUN_149803624 body=138 status=ok
// SIG undefined FUN_149803624(void)

void FUN_149803624(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498036ee FUN_1498036ee body=152 status=ok
// SIG undefined FUN_1498036ee(void)

void FUN_1498036ee(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14980378e FUN_14980378e body=319 status=ok
// SIG undefined FUN_14980378e(void)

void FUN_14980378e(longlong *param_1,longlong *param_2)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = (int)param_2[1] + -1;
  if ((int)param_2[1] == 0) {
    iVar1 = 0;
  }
  FUN_1402980a2(param_1 + 2,*param_2,iVar1);
  lVar2 = (**(code **)(*param_1 + 0x28))(param_1);
  param_1[5] = lVar2;
  lVar2 = FUN_14001cc68(0x40,0x10);
  local_48 = (void *)0x0;
  local_40 = (int)param_1[3];
  lVar4 = (longlong)local_40;
  _Src = (void *)param_1[2];
  if (lVar4 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar4 * 2);
  }
  (**(code **)(*param_1 + 0x30))(param_1,local_58);
  FUN_1498038ce(lVar2,local_58,&local_48);
  param_1[0xc] = lVar2;
  lVar2 = FUN_14001cc68(param_1[5]);
  param_1[4] = lVar2;
  uVar3 = FUN_14001cc68(param_1[5]);
  *(undefined8 *)(param_1[0xc] + 8) = uVar3;
  memset((void *)param_1[4],0,param_1[5]);
  memset(*(void **)(param_1[0xc] + 8),0,param_1[5]);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498038ce FUN_1498038ce body=577 status=ok
// SIG undefined FUN_1498038ce(void)

undefined8 * FUN_1498038ce(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined1 local_b0;
  void *local_a0;
  int local_98;
  undefined4 local_94;
  undefined1 *local_90;
  ulonglong *local_88;
  longlong local_80;
  undefined4 local_78;
  undefined2 *local_70;
  int local_68;
  undefined1 local_60 [16];
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_1 = &PTR_FUN_14be888f0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  puVar1 = param_1 + 4;
  param_1[3] = 0;
  param_1[4] = 0;
  iVar2 = (int)param_2[1];
  pvVar3 = (void *)*param_2;
  *(int *)(param_1 + 5) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(puVar1,iVar2,0);
    memcpy((void *)*puVar1,pvVar3,(longlong)iVar2 * 2);
  }
  param_1[6] = 0;
  iVar2 = (int)param_3[1];
  pvVar3 = (void *)*param_3;
  *(int *)(param_1 + 7) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 6,iVar2,0);
    memcpy((void *)param_1[6],pvVar3,(longlong)iVar2 * 2);
  }
  FUN_1407753c8(puVar1);
  local_a0 = (void *)0x0;
  local_98 = *(int *)(param_1 + 5);
  lVar6 = (longlong)local_98;
  pvVar3 = (void *)param_1[4];
  if (lVar6 == 0) {
    local_94 = 0;
  }
  else {
    FUN_1446dd670(&local_a0,local_98,0);
    memcpy(local_a0,pvVar3,lVar6 * 2);
  }
  FUN_14146ec20(local_60,&local_a0);
  local_88 = &local_40;
  local_90 = local_60;
  FUN_1407adb6e(&local_80);
  FUN_140230a2e(&local_70,L"TelemetryExporterThread_{0}",&local_80);
  FUN_1407adb3e(local_80,local_78);
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  puVar5 = local_70;
  if (local_68 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  local_b0 = 0;
  local_b8 = 0xffffffffffffffff;
  uVar4 = FUN_1411b1052(param_1,puVar5,0x10000,2);
  param_1[3] = uVar4;
  if (local_70 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 149803b10 FUN_149803b10 body=113 status=ok
// SIG undefined FUN_149803b10(void)

void FUN_149803b10(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14be888f0;
  if (param_1[3] != 0) {
    LOCK();
    *(undefined4 *)((longlong)param_1 + 0x14) = 1;
    UNLOCK();
    (**(code **)(*(longlong *)param_1[3] + 0x18))((longlong *)param_1[3],1);
    plVar1 = (longlong *)param_1[3];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))(plVar1,1);
    }
    param_1[3] = 0;
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149803b82 FUN_149803b82 body=63 status=ok
// SIG undefined FUN_149803b82(void)

undefined8 FUN_149803b82(void)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_145bb105a();
  if (*(longlong *)(lVar2 + 0x110) != 0) {
    uVar3 = FUN_145bb105a();
    cVar1 = FUN_144a7ca96((undefined8 *)(lVar2 + 0x110),uVar3);
    if (cVar1 != '\0') {
      return *(undefined8 *)(lVar2 + 0x110);
    }
  }
  return 0;
}



// FUNCTION 149803bd2 FUN_149803bd2 body=32 status=ok
// SIG undefined FUN_149803bd2(void)

undefined8 FUN_149803bd2(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,"Stat Unit");
  return param_2;
}



// FUNCTION 149803bf2 FUN_149803bf2 body=196 status=ok
// SIG undefined FUN_149803bf2(void)

undefined8
FUN_149803bf2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar1 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14be88e30;
  puVar1[3] = param_3;
  puVar1[4] = param_4;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149803cbe FUN_149803cbe body=472 status=ok
// SIG undefined FUN_149803cbe(void)

void FUN_149803cbe(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong **)(DAT_14cb0d2b0 + 0xc20) != (longlong *)0x0) {
    lVar2 = (**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0xc20) + 0x180))();
    if (lVar2 != 0) {
      uVar3 = (**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0xc20) + 0x180))();
      lVar2 = FUN_1449baec6(uVar3);
      FUN_140056680(local_38,L"Unit");
      cVar1 = (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x170))(lVar2 + 0x28,local_38);
      if (local_38[0] != 0) {
        FUN_1400020a8();
      }
      if (cVar1 != '\0') {
        uVar3 = (**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0xc20) + 0x180))();
        lVar2 = FUN_1449baec6(uVar3);
        lVar2 = (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x150))(lVar2 + 0x28);
        FUN_140056680(local_38,L"GameThreadTime");
        FUN_14463a77a(param_1,DAT_14c75b13c,local_38,lVar2 + 8);
        if (local_38[0] != 0) {
          FUN_1400020a8();
        }
        FUN_140056680(local_38,L"RenderThreadTime");
        FUN_14463a77a(param_1,DAT_14c75b13c,local_38,lVar2);
        if (local_38[0] != 0) {
          FUN_1400020a8();
        }
        FUN_140056680(local_38,L"RHITTime");
        FUN_14463a77a(param_1,DAT_14c75b13c,local_38,lVar2 + 0x94);
        if (local_38[0] != 0) {
          FUN_1400020a8();
        }
        FUN_140056680(local_38,L"GPUFrameTime");
        FUN_14463a77a(param_1,DAT_14c75b13c,local_38,lVar2 + 0x10);
        if (local_38[0] != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149803e9a FUN_149803e9a body=43 status=ok
// SIG undefined FUN_149803e9a(void)

undefined8 FUN_149803e9a(undefined8 param_1,int param_2)

{
  FUN_149803b10();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 149803ec6 FUN_149803ec6 body=53 status=ok
// SIG undefined FUN_149803ec6(void)

undefined8 * FUN_149803ec6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149e668b0;
  FUN_14019e1de();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 149803efc FUN_149803efc body=32 status=ok
// SIG undefined FUN_149803efc(void)

undefined8 FUN_149803efc(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FGbxTelemetryCSVExporter");
  return param_2;
}



// FUNCTION 149803f3c FUN_149803f3c body=46 status=ok
// SIG undefined FUN_149803f3c(void)

void FUN_149803f3c(undefined8 param_1,longlong param_2)

{
  FUN_1447a1747(*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10));
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149803f80 FUN_149803f80 body=75 status=ok
// SIG undefined FUN_149803f80(void)

undefined8 FUN_149803f80(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_2 + lVar1) = *(undefined8 *)(param_3 + lVar1);
      FUN_140bee9ec();
      lVar1 = lVar1 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149803ff4 FUN_149803ff4 body=59 status=ok
// SIG undefined FUN_149803ff4(void)

undefined8 FUN_149803ff4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149804092 FUN_149804092 body=50 status=ok
// SIG undefined FUN_149804092(void)

void FUN_149804092(longlong param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_1447a1747(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 1498040c6 FUN_1498040c6 body=9 status=ok
// SIG undefined FUN_1498040c6(void)

void FUN_1498040c6(longlong param_1)

{
  FUN_1498041a0(param_1 + 0x10);
  return;
}



// FUNCTION 1498040d0 FUN_1498040d0 body=34 status=ok
// SIG undefined FUN_1498040d0(void)

undefined8 FUN_1498040d0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 1498040f2 FUN_1498040f2 body=98 status=ok
// SIG undefined FUN_1498040f2(void)

undefined8 * FUN_1498040f2(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 1) = 0;
  FUN_1405bceb4();
  *param_1 = &PTR_LAB_14be88c80;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 7),4000);
  param_1[0xc] = 0;
  return param_1;
}



// FUNCTION 149804154 FUN_149804154 body=43 status=ok
// SIG undefined FUN_149804154(void)

undefined8 FUN_149804154(undefined8 param_1,int param_2)

{
  FUN_1498041a0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 149804180 FUN_149804180 body=32 status=ok
// SIG undefined FUN_149804180(void)

undefined8 FUN_149804180(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FGbxTelemetryStatUnitExporter");
  return param_2;
}



// FUNCTION 1498041a0 FUN_1498041a0 body=64 status=ok
// SIG undefined FUN_1498041a0(void)

void FUN_1498041a0(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14be88c80;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_149e668b0;
  FUN_14019e1de(param_1);
  return;
}



// FUNCTION 1498041e0 FUN_1498041e0 body=20 status=ok
// SIG undefined FUN_1498041e0(void)

void FUN_1498041e0(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_LAB_149e668b0;
  FUN_14019e1de(param_1 + 0x10);
  return;
}



// FUNCTION 1498041f4 FUN_1498041f4 body=34 status=ok
// SIG undefined FUN_1498041f4(void)

undefined8 FUN_1498041f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 149804216 FUN_149804216 body=36 status=ok
// SIG undefined FUN_149804216(void)

undefined8 FUN_149804216(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 149804256 FUN_149804256 body=93 status=ok
// SIG undefined FUN_149804256(void)

void FUN_149804256(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be88d80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1498042b4 FUN_1498042b4 body=126 status=ok
// SIG undefined FUN_1498042b4(void)

void FUN_1498042b4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be88d80;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149804323. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 149804332 FUN_149804332 body=21 status=ok
// SIG undefined FUN_149804332(void)

undefined8 FUN_149804332(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 149804348 FUN_149804348 body=34 status=ok
// SIG undefined FUN_149804348(void)

undefined8 FUN_149804348(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 149804386 FUN_149804386 body=93 status=ok
// SIG undefined FUN_149804386(void)

void FUN_149804386(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be88e30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1498043e4 FUN_1498043e4 body=93 status=ok
// SIG undefined FUN_1498043e4(void)

void FUN_1498043e4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be88e30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 149804442 FUN_149804442 body=126 status=ok
// SIG undefined FUN_149804442(void)

void FUN_149804442(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be88e30;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498044b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498044cc FUN_1498044cc body=21 status=ok
// SIG undefined FUN_1498044cc(void)

undefined8 FUN_1498044cc(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498044e2 FUN_1498044e2 body=192 status=ok
// SIG undefined FUN_1498044e2(void)

undefined8 * FUN_1498044e2(undefined8 *param_1,int param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_14be88ee0;
  *(int *)(param_1 + 1) = param_2;
  param_1[2] = 0;
  iVar1 = (int)param_3[1];
  lVar2 = *param_3;
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_149806828(param_1 + 2,iVar1);
    FUN_149806880(param_1[2],lVar2,iVar1);
    param_2 = *(int *)(param_1 + 1);
  }
  param_1[4] = 0;
  param_1[5] = 0;
  if (param_2 != 0) {
    FUN_1498045a2(param_1);
    FUN_149804602(param_1);
    FUN_149804662(param_1);
    FUN_1498046c2(param_1);
    FUN_149804722(param_1);
    FUN_149804782(param_1);
    FUN_1498047e2(param_1);
  }
  FUN_1498067de(*param_3,(int)param_3[1]);
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 1498045a2 FUN_1498045a2 body=96 status=ok
// SIG undefined FUN_1498045a2(void)

void FUN_1498045a2(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar2 = 0;
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14be8a6e0;
  iVar1 = *(int *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x2c) < iVar1 + 1U) {
    FUN_1498068b0((longlong *)(param_1 + 0x20),iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x20) + (longlong)iVar1 * 8) = puVar2;
  return;
}



// FUNCTION 149804602 FUN_149804602 body=96 status=ok
// SIG undefined FUN_149804602(void)

void FUN_149804602(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar2 = 0;
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14be8a710;
  iVar1 = *(int *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x2c) < iVar1 + 1U) {
    FUN_1498068b0((longlong *)(param_1 + 0x20),iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x20) + (longlong)iVar1 * 8) = puVar2;
  return;
}



// FUNCTION 149804662 FUN_149804662 body=96 status=ok
// SIG undefined FUN_149804662(void)

void FUN_149804662(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar2 = 0;
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14be8a740;
  iVar1 = *(int *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x2c) < iVar1 + 1U) {
    FUN_1498068b0((longlong *)(param_1 + 0x20),iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x20) + (longlong)iVar1 * 8) = puVar2;
  return;
}



// FUNCTION 1498046c2 FUN_1498046c2 body=96 status=ok
// SIG undefined FUN_1498046c2(void)

void FUN_1498046c2(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar2 = 0;
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14be8a770;
  iVar1 = *(int *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x2c) < iVar1 + 1U) {
    FUN_1498068b0((longlong *)(param_1 + 0x20),iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x20) + (longlong)iVar1 * 8) = puVar2;
  return;
}



// FUNCTION 149804722 FUN_149804722 body=96 status=ok
// SIG undefined FUN_149804722(void)

void FUN_149804722(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar2 = 0;
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14be8a7a0;
  iVar1 = *(int *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x2c) < iVar1 + 1U) {
    FUN_1498068b0((longlong *)(param_1 + 0x20),iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x20) + (longlong)iVar1 * 8) = puVar2;
  return;
}



// FUNCTION 149804782 FUN_149804782 body=96 status=ok
// SIG undefined FUN_149804782(void)

void FUN_149804782(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar2 = 0;
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14be8a7d0;
  iVar1 = *(int *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x2c) < iVar1 + 1U) {
    FUN_1498068b0((longlong *)(param_1 + 0x20),iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x20) + (longlong)iVar1 * 8) = puVar2;
  return;
}



// FUNCTION 1498047e2 FUN_1498047e2 body=96 status=ok
// SIG undefined FUN_1498047e2(void)

void FUN_1498047e2(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar2 = 0;
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14be8a800;
  iVar1 = *(int *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x2c) < iVar1 + 1U) {
    FUN_1498068b0((longlong *)(param_1 + 0x20),iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x20) + (longlong)iVar1 * 8) = puVar2;
  return;
}



// FUNCTION 149804842 FUN_149804842 body=163 status=ok
// SIG undefined FUN_149804842(void)

undefined8 FUN_149804842(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = FUN_14001cc68(0x30,0x10);
  local_40 = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  local_38 = iVar1;
  if (iVar1 == 0) {
    local_34 = 0;
  }
  else {
    FUN_149806828(&local_40,iVar1);
    FUN_149806880(local_40,uVar2,iVar1);
  }
  FUN_1498044e2(uVar3,*(undefined4 *)(param_1 + 8),&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498048e6 FUN_1498048e6 body=224 status=ok
// SIG undefined FUN_1498048e6(void)

undefined1 * FUN_1498048e6(undefined1 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x78) = 1;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0x84) = 0;
  *(int *)(param_1 + 0x8c) = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 1;
  *(undefined4 *)(param_1 + 0x98) = 1;
  *(undefined4 *)(param_1 + 0x9c) = 0x10001;
  *(undefined4 *)(param_1 + 0xa0) = 0x101;
  *(undefined2 *)(param_1 + 0xa4) = 0xff00;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  FUN_144894d4c(param_1 + 0x110);
  uVar1 = DAT_14c967818;
  *(undefined8 *)(param_1 + 0xa40) = DAT_14c967818;
  *(undefined8 *)(param_1 + 0xa48) = 0;
  *(undefined8 *)(param_1 + 0xa50) = 0;
  *(undefined8 *)(param_1 + 0xa58) = uVar1;
  *(undefined8 *)(param_1 + 0xa60) = 0;
  *(undefined8 *)(param_1 + 0xa68) = 0;
  *(undefined8 *)(param_1 + 0xa88) = 0;
  *(undefined8 *)(param_1 + 0xa78) = 0;
  *(undefined8 *)(param_1 + 0xa80) = 0;
  return param_1;
}



// FUNCTION 1498049c6 FUN_1498049c6 body=288 status=ok
// SIG undefined FUN_1498049c6(void)

void FUN_1498049c6(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  ulonglong uVar5;
  longlong *plVar6;
  
  lVar2 = DAT_14cc27470;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar1 + 0xc60) == 0x40000002) {
    uVar5 = 0;
  }
  else {
    bVar3 = FUN_144a61b4f();
    uVar5 = (ulonglong)(bVar3 ^ 1);
  }
  if (0 < *(int *)(lVar2 + uVar5 * 4)) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc27d78) {
      FUN_144b3d300(&DAT_14cc27d78);
      if (DAT_14cc27d78 == -1) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        plVar6 = (longlong *)
                 (**(code **)(*DAT_14c8407a8 + 200))
                           (DAT_14c8407a8,L"r.FidelityFX.FSR.Post.FilmGrain",1);
        if (plVar6 == (longlong *)0x0) {
          DAT_14cc27d70 = 0;
        }
        else {
          DAT_14cc27d70 = (**(code **)(*plVar6 + 0x68))(plVar6);
        }
        _Init_thread_footer(&DAT_14cc27d78);
      }
    }
    lVar2 = DAT_14cc27d70;
    if (*(int *)(lVar1 + 0xc60) == 0x40000002) {
      uVar5 = 0;
    }
    else {
      bVar3 = FUN_144a61b4f();
      uVar5 = (ulonglong)(bVar3 ^ 1);
    }
    if (0 < *(int *)(lVar2 + uVar5 * 4)) {
      *(undefined8 *)(param_3 + 0x2ac0) = 0;
    }
    cVar4 = FUN_14463baff();
    if (cVar4 != '\0') {
      *(undefined8 *)(param_3 + 0x280c) = 0;
    }
  }
  return;
}



// FUNCTION 149804ae6 FUN_149804ae6 body=42 status=ok
// SIG undefined FUN_149804ae6(void)

void FUN_149804ae6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 149804b30 FUN_149804b30 body=96 status=ok
// SIG undefined FUN_149804b30(void)

undefined8 FUN_149804b30(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e7ad8c();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cc27d90,1);
  return uVar3;
}



// FUNCTION 149804b90 FUN_149804b90 body=52 status=ok
// SIG undefined FUN_149804b90(void)

void FUN_149804b90(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 149804bc4 FUN_149804bc4 body=42 status=ok
// SIG undefined FUN_149804bc4(void)

void FUN_149804bc4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 149804bf2 FUN_149804bf2 body=96 status=ok
// SIG undefined FUN_149804bf2(void)

undefined8 FUN_149804bf2(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f82568();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cc27ea0,1);
  return uVar3;
}



// FUNCTION 149804c52 FUN_149804c52 body=52 status=ok
// SIG undefined FUN_149804c52(void)

void FUN_149804c52(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 149804c86 FUN_149804c86 body=192 status=ok
// SIG undefined FUN_149804c86(void)

void FUN_149804c86(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc276e8) {
    FUN_144b3d300();
    if (DAT_14cc276e8 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar1 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.FidelityFX.FSR.Post.ExperimentalChromaticAberration",1);
      if (plVar1 == (longlong *)0x0) {
        DAT_14cc276e0 = 0;
      }
      else {
        DAT_14cc276e0 = (**(code **)(*plVar1 + 0x68))(plVar1);
      }
      _Init_thread_footer();
    }
  }
  if (*(int *)(DAT_14cc276e0 + 4) < 1) {
    bVar2 = false;
  }
  else {
    bVar2 = 0.01 < *(float *)(*(longlong *)(param_1 + 8) + 0x10);
  }
  *(bool *)(*(longlong *)(param_1 + 8) + 0x22) = bVar2;
  return;
}



// FUNCTION 149804d46 FUN_149804d46 body=569 status=ok
// SIG undefined FUN_149804d46(void)

void FUN_149804d46(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_2c;
  undefined2 local_24;
  undefined2 local_22;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_1 + 8);
  if (*(char *)(lVar1 + 0x22) == '\x01') {
    if (*(char *)(lVar1 + 0x23) == '\x01') {
      lVar3 = *(longlong *)(lVar1 + 0xc0);
      local_1e = *(undefined1 *)(lVar3 + 0x92);
      local_50 = *(undefined8 *)(lVar3 + 0x60);
      local_1d = *(undefined1 *)(lVar3 + 0x93);
      local_1c = *(undefined1 *)(lVar3 + 0x94);
      local_2c = *(undefined8 *)(lVar3 + 0x84);
      local_24 = *(undefined2 *)(lVar3 + 0x8c);
      local_22 = *(undefined2 *)(lVar3 + 0x8e);
      local_20 = *(undefined1 *)(lVar3 + 0x90);
      local_1f = *(undefined1 *)(lVar3 + 0x91);
      local_48 = *(undefined8 *)(lVar3 + 0x68);
      uStack_40 = *(undefined8 *)(lVar3 + 0x70);
      local_38 = *(undefined4 *)(lVar3 + 0x78);
      local_30 = *(undefined4 *)(lVar3 + 0x80);
      local_1b = *(undefined1 *)(lVar3 + 0x95);
      local_34 = *(undefined4 *)(lVar3 + 0x7c);
      if ((*(uint *)(lVar1 + 0x18) | 2) == 3) {
        local_1d = *(undefined1 *)(*(longlong *)(param_4 + 0x20) + 0x93);
      }
    }
    else {
      lVar3 = *(longlong *)(lVar1 + 0xc0);
      local_1e = *(undefined1 *)(lVar3 + 0x92);
      local_50 = *(undefined8 *)(lVar3 + 0x60);
      local_1d = *(undefined1 *)(lVar3 + 0x93);
      local_1c = *(undefined1 *)(lVar3 + 0x94);
      local_2c = *(undefined8 *)(lVar3 + 0x84);
      local_24 = *(undefined2 *)(lVar3 + 0x8c);
      local_22 = *(undefined2 *)(lVar3 + 0x8e);
      local_20 = *(undefined1 *)(lVar3 + 0x90);
      local_1f = *(undefined1 *)(lVar3 + 0x91);
      local_48 = *(undefined8 *)(lVar3 + 0x68);
      uStack_40 = *(undefined8 *)(lVar3 + 0x70);
      local_38 = *(undefined4 *)(lVar3 + 0x78);
      local_30 = *(undefined4 *)(lVar3 + 0x80);
      local_1b = *(undefined1 *)(lVar3 + 0x95);
      local_34 = *(undefined4 *)(lVar3 + 0x7c);
    }
    *(longlong *)(lVar1 + 0xf0) = lVar3;
    *(undefined4 *)(lVar1 + 0xf8) = *(undefined4 *)(lVar1 + 200);
    *(undefined4 *)(lVar1 + 0xfc) = *(undefined4 *)(lVar1 + 0xcc);
    *(undefined4 *)(lVar1 + 0x100) = *(undefined4 *)(lVar1 + 0xd0);
    *(undefined4 *)(lVar1 + 0x104) = *(undefined4 *)(lVar1 + 0xd4);
    uVar2 = FUN_14472bf7a(param_2,&local_50,L"FFX-ChromAb-Output",1);
    *(undefined8 *)(*(longlong *)(param_1 + 8) + 0xf0) = uVar2;
    FUN_14477b16e(*(longlong *)(param_1 + 8) + 0x110,param_3 + 0x2510);
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x40c) =
         *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x10);
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x410) =
         *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x14);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149804f80 FUN_149804f80 body=177 status=ok
// SIG undefined FUN_149804f80(void)

void FUN_149804f80(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145f82568();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14cc27ea0,param_4);
  local_78 = &DAT_14cc27ea0;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_149806f16(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149805032 FUN_149805032 body=42 status=ok
// SIG undefined FUN_149805032(void)

void FUN_149805032(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 149805060 FUN_149805060 body=96 status=ok
// SIG undefined FUN_149805060(void)

undefined8 FUN_149805060(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145dbf1e0();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cc27f28,1);
  return uVar3;
}



// FUNCTION 1498050c0 FUN_1498050c0 body=52 status=ok
// SIG undefined FUN_1498050c0(void)

void FUN_1498050c0(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1498050f4 FUN_1498050f4 body=42 status=ok
// SIG undefined FUN_1498050f4(void)

void FUN_1498050f4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 149805126 FUN_149805126 body=96 status=ok
// SIG undefined FUN_149805126(void)

undefined8 FUN_149805126(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145ee455a();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cc28038,1);
  return uVar3;
}



// FUNCTION 149805186 FUN_149805186 body=52 status=ok
// SIG undefined FUN_149805186(void)

void FUN_149805186(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1498051ba FUN_1498051ba body=203 status=ok
// SIG undefined FUN_1498051ba(void)

void FUN_1498051ba(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  byte *pbVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  wchar_t *_Str1;
  
  sVar3 = FUN_144b2876a(param_3);
  *(bool *)(*(longlong *)(param_1 + 8) + 1) = 0 < DAT_14c7679e4 && sVar3 == 0;
  *(bool *)(*(longlong *)(param_1 + 8) + 2) = 0 < DAT_14cc27710;
  cVar2 = FUN_144848644();
  if (cVar2 != '\0') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc27984) {
      FUN_144b3d300(&DAT_14cc27984);
      if (DAT_14cc27984 == -1) {
        _Str1 = (wchar_t *)(**(code **)(*DAT_14ca83900 + 0x20))();
        iVar4 = wcscmp(_Str1,L"D3D11");
        DAT_14cc27980 = iVar4 == 0;
        _Init_thread_footer(&DAT_14cc27984);
      }
    }
    if (DAT_14cc27980 == '\x01') {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 8) + 1);
      *pbVar1 = *pbVar1 & 0 < DAT_14cc27728;
    }
  }
  return;
}



// FUNCTION 149805286 FUN_149805286 body=357 status=ok
// SIG undefined FUN_149805286(void)

void FUN_149805286(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  bool bVar9;
  undefined1 auStack_b8 [32];
  undefined8 local_98 [14];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = *(undefined4 *)(param_4 + 0x24);
  uVar2 = *(undefined4 *)(param_4 + 0x28);
  uVar3 = *(undefined4 *)(param_4 + 0x2c);
  uVar5 = *(undefined8 *)(param_4 + 0x30);
  lVar6 = *(longlong *)(param_1 + 8);
  *(undefined4 *)(lVar6 + 0xc0) = *(undefined4 *)(param_4 + 0x20);
  *(undefined4 *)(lVar6 + 0xc4) = uVar1;
  *(undefined4 *)(lVar6 + 200) = uVar2;
  *(undefined4 *)(lVar6 + 0xcc) = uVar3;
  *(undefined8 *)(lVar6 + 0xd0) = uVar5;
  bVar9 = true;
  uVar5 = FUN_14472bf7a(param_2,*(longlong *)(param_1 + 8) + 0x70,L"FFX-FSR-Output",1);
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 0xc0) = uVar5;
  lVar6 = *(longlong *)(param_1 + 8);
  *(undefined8 *)(lVar6 + 200) = *(undefined8 *)(param_3 + 0x4d8);
  *(undefined8 *)(lVar6 + 0xd0) = *(undefined8 *)(param_3 + 0x4e0);
  lVar6 = *(longlong *)(param_1 + 8);
  *(undefined8 *)(lVar6 + 0xa58) = *(undefined8 *)(*(longlong *)(lVar6 + 0xc0) + 0x84);
  *(undefined8 *)(lVar6 + 0xa60) = *(undefined8 *)(lVar6 + 200);
  *(undefined8 *)(lVar6 + 0xa68) = *(undefined8 *)(lVar6 + 0xd0);
  uVar1 = *(undefined4 *)(param_4 + 0x28);
  uVar2 = *(undefined4 *)(param_4 + 0x2c);
  uVar3 = *(undefined4 *)(param_4 + 0x30);
  uVar4 = *(undefined4 *)(param_4 + 0x34);
  lVar6 = *(longlong *)(param_1 + 8);
  *(undefined8 *)(lVar6 + 0xa40) = *(undefined8 *)(*(longlong *)(param_4 + 0x20) + 0x84);
  *(undefined4 *)(lVar6 + 0xa48) = uVar1;
  *(undefined4 *)(lVar6 + 0xa4c) = uVar2;
  *(undefined4 *)(lVar6 + 0xa50) = uVar3;
  *(undefined4 *)(lVar6 + 0xa54) = uVar4;
  lVar6 = *(longlong *)(param_1 + 8);
  if (((*(int *)(lVar6 + 0xa48) == *(int *)(lVar6 + 0xa60)) &&
      (*(int *)(lVar6 + 0xa4c) == *(int *)(lVar6 + 0xa64))) &&
     (*(int *)(lVar6 + 0xa50) == *(int *)(lVar6 + 0xa68))) {
    bVar9 = *(int *)(lVar6 + 0xa54) != *(int *)(lVar6 + 0xa6c);
  }
  *(bool *)(lVar6 + 0x20) = bVar9;
  FUN_144a2c7c2(local_98,*(longlong *)(param_1 + 8) + 0xa58);
  puVar7 = local_98;
  puVar8 = (undefined8 *)(*(longlong *)(param_1 + 8) + 0x9d0);
  for (lVar6 = 0xe; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498053ec FUN_1498053ec body=142 status=ok
// SIG undefined FUN_1498053ec(void)

undefined4 * FUN_1498053ec(undefined4 *param_1,undefined8 param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  bVar1 = *param_3;
  bVar2 = param_3[0xc];
  bVar3 = param_3[0xd];
  iVar4 = *(int *)(param_3 + 8);
  iVar5 = *(int *)(param_3 + 4);
  FUN_145ee42ec();
  FUN_1448e935e(param_2,&local_38,&DAT_14cc278c0,
                iVar5 * 2 + ((uint)bVar2 * 2 + (uint)bVar3 * 4 + iVar4) * 8 | (uint)bVar1);
  FUN_145ee42ec();
  *param_1 = local_38;
  param_1[1] = uStack_34;
  param_1[2] = uStack_30;
  param_1[3] = uStack_2c;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14980547c FUN_14980547c body=142 status=ok
// SIG undefined FUN_14980547c(void)

undefined4 * FUN_14980547c(undefined4 *param_1,undefined8 param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  bVar1 = *param_3;
  bVar2 = param_3[0xc];
  bVar3 = param_3[0xd];
  iVar4 = *(int *)(param_3 + 8);
  iVar5 = *(int *)(param_3 + 4);
  FUN_145dbef72();
  FUN_1448e935e(param_2,&local_38,&DAT_14cc27798,
                iVar5 * 2 + ((uint)bVar2 * 2 + (uint)bVar3 * 4 + iVar4) * 8 | (uint)bVar1);
  FUN_145dbef72();
  *param_1 = local_38;
  param_1[1] = uStack_34;
  param_1[2] = uStack_30;
  param_1[3] = uStack_2c;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14980550b FUN_14980550b body=177 status=ok
// SIG undefined FUN_14980550b(void)

void FUN_14980550b(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145dbf1e0();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14cc27f28,param_4);
  local_78 = &DAT_14cc27f28;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_149807660(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498055be FUN_1498055be body=316 status=ok
// SIG undefined FUN_1498055be(void)

void FUN_1498055be(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  iVar3 = (**(code **)(*DAT_14cc27990 + 0xb0))();
  if (iVar3 < 1) {
    bVar2 = false;
  }
  else {
    bVar2 = 0.0 < *(float *)(*(longlong *)(param_1 + 8) + 8);
  }
  *(bool *)(*(longlong *)(param_1 + 8) + 4) = bVar2;
  lVar1 = *(longlong *)(param_1 + 8);
  fVar6 = 0.0;
  if (*(longlong *)(param_3 + 8) == 0) {
    fVar7 = 0.0;
  }
  else {
    fVar7 = 0.0;
    uVar4 = *(uint *)(*(longlong *)(param_3 + 8) + 0xac) & 7;
    if (uVar4 != 0) {
      fVar7 = 0.5;
      uVar5 = uVar4;
      do {
        fVar6 = fVar6 + (float)(uVar5 & 1) * fVar7;
        fVar7 = fVar7 * 0.5;
        bVar2 = 1 < uVar5;
        uVar5 = uVar5 >> 1;
      } while (bVar2);
      fVar7 = 0.0;
      fVar8 = 0.33333334;
      do {
        fVar7 = fVar7 + (float)(uVar4 % 3) * fVar8;
        fVar8 = fVar8 * 0.33333334;
        bVar2 = 2 < uVar4;
        uVar4 = uVar4 / 3;
      } while (bVar2);
    }
  }
  *(float *)(lVar1 + 0x50) = fVar6;
  *(float *)(lVar1 + 0x54) = fVar7;
  *(undefined8 *)(lVar1 + 0x58) = 0;
  *(float *)(lVar1 + 0x60) = *(float *)(lVar1 + 8);
  *(float *)(lVar1 + 100) = *(float *)(lVar1 + 8) * -0.5 + 1.0;
  *(undefined4 *)(lVar1 + 0x68) = *(undefined4 *)(lVar1 + 0xc);
  *(undefined4 *)(lVar1 + 0x6c) = 0;
  return;
}


