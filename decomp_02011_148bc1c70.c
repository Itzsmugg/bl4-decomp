// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148bc1c70 FUN_148bc1c70 body=519 status=ok
// SIG undefined FUN_148bc1c70(void)

void FUN_148bc1c70(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_40 [24];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_58 = 0;
  uStack_50 = 0;
  FUN_140e6158c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_5c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  puVar2 = local_40;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = (undefined4)local_58;
  uStack_6c = local_58._4_4_;
  uStack_68 = (undefined4)uStack_50;
  uStack_64 = uStack_50._4_4_;
  local_78 = local_5c;
  FUN_148e1a354(local_20,local_28,puVar2);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc1e7b FUN_148bc1e7b body=55 status=ok
// SIG undefined FUN_148bc1e7b(void)

void FUN_148bc1e7b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3c70 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3c70 = FUN_14171c317(FUN_1465bb255,uVar1,L"EUnlockableItemMovementType");
  }
  return;
}



// FUNCTION 148bc1f00 FUN_148bc1f00 body=45 status=ok
// SIG undefined FUN_148bc1f00(void)

longlong FUN_148bc1f00(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_1411d0104(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc1f34 FUN_148bc1f34 body=45 status=ok
// SIG undefined FUN_148bc1f34(void)

longlong FUN_148bc1f34(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_1458357c8(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc1f68 FUN_148bc1f68 body=45 status=ok
// SIG undefined FUN_148bc1f68(void)

longlong FUN_148bc1f68(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_140f000e4(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc1f96 FUN_148bc1f96 body=45 status=ok
// SIG undefined FUN_148bc1f96(void)

longlong FUN_148bc1f96(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145cc6870(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc1fc4 FUN_148bc1fc4 body=45 status=ok
// SIG undefined FUN_148bc1fc4(void)

longlong FUN_148bc1fc4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_14117f406(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc1ff2 FUN_148bc1ff2 body=45 status=ok
// SIG undefined FUN_148bc1ff2(void)

longlong FUN_148bc1ff2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_1410a2da6(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc2020 FUN_148bc2020 body=45 status=ok
// SIG undefined FUN_148bc2020(void)

longlong FUN_148bc2020(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_1408ee338(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc204e FUN_148bc204e body=45 status=ok
// SIG undefined FUN_148bc204e(void)

longlong FUN_148bc204e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_1457448ba(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc207c FUN_148bc207c body=76 status=ok
// SIG undefined FUN_148bc207c(void)

void FUN_148bc207c(undefined8 param_1,undefined8 *param_2)

{
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_145af66ee(param_2);
  *param_2 = &PTR_FUN_14b65a210;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  return;
}



// FUNCTION 148bc20c8 FUN_148bc20c8 body=47 status=ok
// SIG undefined FUN_148bc20c8(void)

void FUN_148bc20c8(undefined8 param_1,undefined8 *param_2)

{
  FUN_145af66ee(param_2);
  *param_2 = &PTR_FUN_14b65a210;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  return;
}



// FUNCTION 148bc211c FUN_148bc211c body=91 status=ok
// SIG undefined FUN_148bc211c(void)

undefined8 FUN_148bc211c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
    do {
      *(undefined2 *)(param_2 + -0x30) = *(undefined2 *)(param_3 + -0x30);
      FUN_1401f3db8(param_2 + -0x28,param_3 + -0x28);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_141859652(param_2,param_3);
      param_3 = param_3 + 0x50;
      param_2 = param_2 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bc21a0 FUN_148bc21a0 body=59 status=ok
// SIG undefined FUN_148bc21a0(void)

undefined8 FUN_148bc21a0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc21e6 FUN_148bc21e6 body=32 status=ok
// SIG undefined FUN_148bc21e6(void)

void FUN_148bc21e6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_14584efb0(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 148bc2254 FUN_148bc2254 body=38 status=ok
// SIG undefined FUN_148bc2254(void)

undefined8 FUN_148bc2254(undefined8 param_1,int param_2)

{
  FUN_14584efb0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc227a FUN_148bc227a body=55 status=ok
// SIG undefined FUN_148bc227a(void)

void FUN_148bc227a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba38b8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba38b8 = FUN_140002ddd(FUN_1465ba665,uVar1,L"GbxStatusEffectAspectData_Movement");
  }
  return;
}



// FUNCTION 148bc22d6 FUN_148bc22d6 body=43 status=ok
// SIG undefined FUN_148bc22d6(void)

void FUN_148bc22d6(undefined8 param_1,undefined8 *param_2)

{
  FUN_145af66ee(param_2);
  *param_2 = &PTR_FUN_14b65a440;
  param_2[7] = 0;
  param_2[8] = 0;
  *(undefined8 *)((longlong)param_2 + 0x41) = 0;
  *(undefined8 *)((longlong)param_2 + 0x49) = 0;
  return;
}



// FUNCTION 148bc2326 FUN_148bc2326 body=97 status=ok
// SIG undefined FUN_148bc2326(void)

undefined8 FUN_148bc2326(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
    do {
      *(undefined2 *)(param_2 + -0x30) = *(undefined2 *)(param_3 + -0x30);
      FUN_1401f3db8(param_2 + -0x28,param_3 + -0x28);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_141859652(param_2,param_3);
      *(undefined1 *)(param_2 + 0x18) = *(undefined1 *)(param_3 + 0x18);
      param_3 = param_3 + 0x58;
      param_2 = param_2 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bc23b0 FUN_148bc23b0 body=59 status=ok
// SIG undefined FUN_148bc23b0(void)

undefined8 FUN_148bc23b0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc23f6 FUN_148bc23f6 body=32 status=ok
// SIG undefined FUN_148bc23f6(void)

void FUN_148bc23f6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_14584efb0(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 148bc24de FUN_148bc24de body=74 status=ok
// SIG undefined FUN_148bc24de(void)

undefined1 FUN_148bc24de(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      *(undefined1 *)(param_2 + -0x10) = *(undefined1 *)(param_3 + -0x10);
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_148bbde38(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bc2550 FUN_148bc2550 body=59 status=ok
// SIG undefined FUN_148bc2550(void)

undefined8 FUN_148bc2550(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc2596 FUN_148bc2596 body=48 status=ok
// SIG undefined FUN_148bc2596(void)

void FUN_148bc2596(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 5) == '\x01') {
    *param_2 = &PTR_FUN_14b65a5e0;
    if (param_2[3] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 5) = 0;
  }
  return;
}



// FUNCTION 148bc2614 FUN_148bc2614 body=57 status=ok
// SIG undefined FUN_148bc2614(void)

undefined8 * FUN_148bc2614(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b65a5e0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc264e FUN_148bc264e body=55 status=ok
// SIG undefined FUN_148bc264e(void)

void FUN_148bc264e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3900 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3900 = FUN_140002ddd(FUN_1465ba789,uVar1,L"GbxStatusEffectConditionData_FFYL");
  }
  return;
}



// FUNCTION 148bc2714 FUN_148bc2714 body=59 status=ok
// SIG undefined FUN_148bc2714(void)

undefined8 FUN_148bc2714(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc27b4 FUN_148bc27b4 body=29 status=ok
// SIG undefined FUN_148bc27b4(void)

undefined8 FUN_148bc27b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc27d2 FUN_148bc27d2 body=55 status=ok
// SIG undefined FUN_148bc27d2(void)

void FUN_148bc27d2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3918 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3918 = FUN_140002ddd(FUN_1465ba81f,uVar1,L"GbxStatusEffectConditionData_HasElemental");
  }
  return;
}



// FUNCTION 148bc2872 FUN_148bc2872 body=59 status=ok
// SIG undefined FUN_148bc2872(void)

undefined8 FUN_148bc2872(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc2912 FUN_148bc2912 body=29 status=ok
// SIG undefined FUN_148bc2912(void)

undefined8 FUN_148bc2912(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc2930 FUN_148bc2930 body=55 status=ok
// SIG undefined FUN_148bc2930(void)

void FUN_148bc2930(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3ae8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3ae8 = FUN_140002ddd(FUN_1465bad27,uVar1,L"ElementalHitReaction");
  }
  return;
}



// FUNCTION 148bc2a5a FUN_148bc2a5a body=59 status=ok
// SIG undefined FUN_148bc2a5a(void)

undefined8 FUN_148bc2a5a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc2b8c FUN_148bc2b8c body=59 status=ok
// SIG undefined FUN_148bc2b8c(void)

undefined8 FUN_148bc2b8c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc2c2c FUN_148bc2c2c body=29 status=ok
// SIG undefined FUN_148bc2c2c(void)

undefined8 FUN_148bc2c2c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc2c4a FUN_148bc2c4a body=55 status=ok
// SIG undefined FUN_148bc2c4a(void)

void FUN_148bc2c4a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3c88 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3c88 =
         FUN_140002ddd(FUN_1465bb2bb,uVar1,L"GbxUnlockableItemData_CharacterMovementType");
  }
  return;
}



// FUNCTION 148bc2cec FUN_148bc2cec body=85 status=ok
// SIG undefined FUN_148bc2cec(void)

undefined8 FUN_148bc2cec(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_145c0fe5a(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined4 *)(param_2 + 0x20 + lVar1) = *(undefined4 *)(param_3 + 0x20 + lVar1);
      lVar1 = lVar1 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bc2d6a FUN_148bc2d6a body=59 status=ok
// SIG undefined FUN_148bc2d6a(void)

undefined8 FUN_148bc2d6a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc2e0a FUN_148bc2e0a body=29 status=ok
// SIG undefined FUN_148bc2e0a(void)

undefined8 FUN_148bc2e0a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc2e28 FUN_148bc2e28 body=55 status=ok
// SIG undefined FUN_148bc2e28(void)

void FUN_148bc2e28(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3d68 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3d68 = FUN_140002ddd(FUN_1465bb351,uVar1,L"GbxUnlockConditionData_Challenge");
  }
  return;
}



// FUNCTION 148bc2ece FUN_148bc2ece body=59 status=ok
// SIG undefined FUN_148bc2ece(void)

undefined8 FUN_148bc2ece(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc2f6a FUN_148bc2f6a body=55 status=ok
// SIG undefined FUN_148bc2f6a(void)

void FUN_148bc2f6a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3d80 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3d80 = FUN_140002ddd(FUN_1465bb3e7,uVar1,L"GbxUnlockConditionData_MovementGrant");
  }
  return;
}



// FUNCTION 148bc2fc0 FUN_148bc2fc0 body=75 status=ok
// SIG undefined FUN_148bc2fc0(void)

undefined1 FUN_148bc2fc0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      FUN_141855c14(param_2 + -0x18,param_3 + -0x18);
      FUN_140d02432(param_2,param_3);
      param_3 = param_3 + 0x70;
      param_2 = param_2 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bc3034 FUN_148bc3034 body=59 status=ok
// SIG undefined FUN_148bc3034(void)

undefined8 FUN_148bc3034(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc30c8 FUN_148bc30c8 body=144 status=ok
// SIG undefined FUN_148bc30c8(void)

undefined8 * FUN_148bc30c8(undefined8 *param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_14b65b2d0;
  FUN_1447325ac(&DAT_14cb790d0,&local_20,1);
  param_1[1] = local_20;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0xf00000d0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc315a FUN_148bc315a body=55 status=ok
// SIG undefined FUN_148bc315a(void)

void FUN_148bc315a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3d98 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3d98 = FUN_140002ddd(FUN_1465bb47d,uVar1,L"GbxUnlockConditionData_PlayerLevel");
  }
  return;
}



// FUNCTION 148bc31c6 FUN_148bc31c6 body=95 status=ok
// SIG undefined FUN_148bc31c6(void)

undefined8 FUN_148bc31c6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_2 + 8 + lVar1) = *(undefined8 *)(param_3 + 8 + lVar1);
      FUN_141855c14(param_2 + 0x10 + lVar1,param_3 + 0x10 + lVar1);
      *(undefined8 *)(param_2 + 0x28 + lVar1) = *(undefined8 *)(param_3 + 0x28 + lVar1);
      lVar1 = lVar1 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bc324e FUN_148bc324e body=59 status=ok
// SIG undefined FUN_148bc324e(void)

undefined8 FUN_148bc324e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc32fc FUN_148bc32fc body=37 status=ok
// SIG undefined FUN_148bc32fc(void)

void FUN_148bc32fc(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xc0);
  FUN_148bc349e(param_2);
  return;
}



// FUNCTION 148bc3342 FUN_148bc3342 body=136 status=ok
// SIG undefined FUN_148bc3342(void)

undefined8 FUN_148bc3342(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0xb8;
    do {
      *(undefined1 *)(param_2 + -0xa8 + lVar1) = *(undefined1 *)(param_3 + -0xa8 + lVar1);
      *(undefined8 *)(param_2 + -0xb0 + lVar1) = *(undefined8 *)(param_3 + -0xb0 + lVar1);
      puVar3 = (undefined8 *)(param_3 + lVar1 + -0xa0);
      puVar4 = (undefined8 *)(param_2 + lVar1 + -0xa0);
      for (lVar2 = 0xf; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      *(undefined1 *)(param_2 + -0x28 + lVar1) = *(undefined1 *)(param_3 + -0x28 + lVar1);
      *(undefined1 *)(param_2 + -0x10 + lVar1) = *(undefined1 *)(param_3 + -0x10 + lVar1);
      *(undefined8 *)(param_2 + -0x18 + lVar1) = *(undefined8 *)(param_3 + -0x18 + lVar1);
      *(undefined4 *)(param_2 + -8 + lVar1) = *(undefined4 *)(param_3 + -8 + lVar1);
      *(undefined1 *)(param_2 + lVar1) = *(undefined1 *)(param_3 + lVar1);
      lVar1 = lVar1 + 0xc0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bc33f2 FUN_148bc33f2 body=59 status=ok
// SIG undefined FUN_148bc33f2(void)

undefined8 FUN_148bc33f2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc349e FUN_148bc349e body=168 status=ok
// SIG undefined FUN_148bc349e(void)

void FUN_148bc349e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_14a1ca850;
  param_1[1] = DAT_14c9ab028;
  *(undefined1 *)(param_1 + 2) = 2;
  *param_1 = &PTR_FUN_14a1a0a60;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x21) = 0;
  *(undefined8 *)((longlong)param_1 + 0x29) = 0;
  uVar1 = DAT_14c846500;
  param_1[9] = DAT_14c8464f8;
  param_1[10] = uVar1;
  param_1[0xb] = DAT_14c846508;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0xf] = DAT_14c8464e0;
  param_1[0x10] = uVar1;
  param_1[0x11] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x13] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0x16) = 0x447a0000;
  *(undefined1 *)(param_1 + 0x17) = 0;
  return;
}



// FUNCTION 148bc3548 FUN_148bc3548 body=37 status=ok
// SIG undefined FUN_148bc3548(void)

void FUN_148bc3548(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x138);
  FUN_148bc36e4(param_2);
  return;
}



// FUNCTION 148bc35ba FUN_148bc35ba body=63 status=ok
// SIG undefined FUN_148bc35ba(void)

undefined1 FUN_148bc35ba(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bc3802(param_2,param_3);
    param_3 = param_3 + 0x138;
    param_2 = param_2 + 0x138;
  }
  return 1;
}



// FUNCTION 148bc3622 FUN_148bc3622 body=59 status=ok
// SIG undefined FUN_148bc3622(void)

undefined8 FUN_148bc3622(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc366e FUN_148bc366e body=40 status=ok
// SIG undefined FUN_148bc366e(void)

void FUN_148bc366e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x138) == '\x01') {
    FUN_148bc37c0(param_2);
    *(undefined1 *)(param_2 + 0x138) = 0;
  }
  return;
}



// FUNCTION 148bc36e4 FUN_148bc36e4 body=125 status=ok
// SIG undefined FUN_148bc36e4(void)

undefined8 * FUN_148bc36e4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  *param_1 = &PTR_FUN_14b65b840;
  FUN_148bc349e(param_1 + 8);
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  return param_1;
}



// FUNCTION 148bc3762 FUN_148bc3762 body=38 status=ok
// SIG undefined FUN_148bc3762(void)

undefined8 FUN_148bc3762(undefined8 param_1,int param_2)

{
  FUN_148bc37c0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc3788 FUN_148bc3788 body=55 status=ok
// SIG undefined FUN_148bc3788(void)

void FUN_148bc3788(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3df8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3df8 = FUN_140002ddd(FUN_1465bb66f,uVar1,L"GpsGeneratorSettings_Critters");
  }
  return;
}



// FUNCTION 148bc37c0 FUN_148bc37c0 body=65 status=ok
// SIG undefined FUN_148bc37c0(void)

void FUN_148bc37c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b65b840;
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 148bc3802 FUN_148bc3802 body=238 status=ok
// SIG undefined FUN_148bc3802(void)

longlong FUN_148bc3802(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_1470d00c2(param_1 + 0x28,param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  puVar9 = (undefined8 *)(param_2 + 0x58);
  puVar10 = (undefined8 *)(param_1 + 0x58);
  for (lVar8 = 0xf; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  *(undefined1 *)(param_1 + 0xd0) = *(undefined1 *)(param_2 + 0xd0);
  *(undefined1 *)(param_1 + 0xe8) = *(undefined1 *)(param_2 + 0xe8);
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
  *(undefined1 *)(param_1 + 0xf8) = *(undefined1 *)(param_2 + 0xf8);
  *(undefined1 *)(param_1 + 0x100) = *(undefined1 *)(param_2 + 0x100);
  FUN_148bc38f0(param_1 + 0x108,param_2 + 0x108);
  *(undefined1 *)(param_1 + 0x118) = *(undefined1 *)(param_2 + 0x118);
  FUN_148bc38f0(param_1 + 0x120,param_2 + 0x120);
  *(undefined1 *)(param_1 + 0x130) = *(undefined1 *)(param_2 + 0x130);
  return param_1;
}



// FUNCTION 148bc38f0 FUN_148bc38f0 body=79 status=ok
// SIG undefined FUN_148bc38f0(void)

undefined8 * FUN_148bc38f0(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148bc3940(param_1,iVar1);
      FUN_148bc39b3(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148bc3940 FUN_148bc3940 body=115 status=ok
// SIG undefined FUN_148bc3940(void)

void FUN_148bc3940(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148bc39b3 FUN_148bc39b3 body=52 status=ok
// SIG undefined FUN_148bc39b3(void)

void FUN_148bc39b3(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148bc39e8(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 148bc39e8 FUN_148bc39e8 body=71 status=ok
// SIG undefined FUN_148bc39e8(void)

undefined8 * FUN_148bc39e8(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 148bc3a30 FUN_148bc3a30 body=122 status=ok
// SIG undefined FUN_148bc3a30(void)

void FUN_148bc3a30(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 7,0,0x410);
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
  param_2[6] = 2;
  *(undefined4 *)((longlong)param_2 + 0x3dc) = 0x10;
  param_2[0x7d] = 0;
  param_2[0x7e] = 0;
  param_2[0x7f] = 0;
  param_2[0x80] = 0;
  param_2[0x81] = 0xffffffff00000000;
  *param_2 = &PTR_FUN_14b65ba40;
  param_2[0x83] = 0;
  param_2[0x84] = 0;
  return;
}



// FUNCTION 148bc3b4c FUN_148bc3b4c body=63 status=ok
// SIG undefined FUN_148bc3b4c(void)

undefined1 FUN_148bc3b4c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bc3d1a(param_2,param_3);
    param_3 = param_3 + 0x448;
    param_2 = param_2 + 0x448;
  }
  return 1;
}



// FUNCTION 148bc3bb4 FUN_148bc3bb4 body=59 status=ok
// SIG undefined FUN_148bc3bb4(void)

undefined8 FUN_148bc3bb4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc3c00 FUN_148bc3c00 body=72 status=ok
// SIG undefined FUN_148bc3c00(void)

void FUN_148bc3c00(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  if (*(char *)(param_2 + 0x89) == '\x01') {
    *param_2 = &PTR_FUN_14b65ba40;
    plVar2 = (longlong *)param_2[0x84];
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    FUN_1405f0b44(param_2);
    *(undefined1 *)(param_2 + 0x89) = 0;
  }
  return;
}



// FUNCTION 148bc3c96 FUN_148bc3c96 body=75 status=ok
// SIG undefined FUN_148bc3c96(void)

undefined8 * FUN_148bc3c96(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b65ba40;
  plVar2 = (longlong *)param_1[0x84];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_1405f0b44(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc3ce2 FUN_148bc3ce2 body=55 status=ok
// SIG undefined FUN_148bc3ce2(void)

void FUN_148bc3ce2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3e10 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3e10 = FUN_140002ddd(FUN_1465bb705,uVar1,L"GpsGenerator_Critters");
  }
  return;
}



// FUNCTION 148bc3d1a FUN_148bc3d1a body=116 status=ok
// SIG undefined FUN_148bc3d1a(void)

longlong FUN_148bc3d1a(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  FUN_147f2f73c();
  uVar2 = *(undefined8 *)(param_2 + 0x418);
  lVar3 = *(longlong *)(param_2 + 0x420);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x420);
  *(undefined8 *)(param_1 + 0x418) = uVar2;
  *(longlong *)(param_1 + 0x420) = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  uVar2 = *(undefined8 *)(param_2 + 0x428);
  uVar5 = *(undefined8 *)(param_2 + 0x430);
  uVar6 = *(undefined8 *)(param_2 + 0x43c);
  *(undefined8 *)(param_1 + 0x434) = *(undefined8 *)(param_2 + 0x434);
  *(undefined8 *)(param_1 + 0x43c) = uVar6;
  *(undefined8 *)(param_1 + 0x428) = uVar2;
  *(undefined8 *)(param_1 + 0x430) = uVar5;
  return param_1;
}



// FUNCTION 148bc3d90 FUN_148bc3d90 body=68 status=ok
// SIG undefined FUN_148bc3d90(void)

void FUN_148bc3d90(undefined8 param_1,undefined8 *param_2)

{
  FUN_1412ebe6c(param_2);
  *param_2 = &PTR_FUN_14b2df1d0;
  FUN_140fbcb60(param_2 + 0x39);
  *(undefined1 *)(param_2 + 0x42) = 0;
  *param_2 = &PTR_FUN_14b65bc90;
  *(undefined1 *)(param_2 + 0x43) = 1;
  return;
}



// FUNCTION 148bc3dfc FUN_148bc3dfc body=109 status=ok
// SIG undefined FUN_148bc3dfc(void)

undefined1 FUN_148bc3dfc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f313ac(param_2,param_3);
    FUN_140c19bee(param_2 + 0x1c8,param_3 + 0x1c8);
    *(undefined1 *)(param_2 + 0x210) = *(undefined1 *)(param_3 + 0x210);
    *(undefined1 *)(param_2 + 0x218) = *(undefined1 *)(param_3 + 0x218);
    param_2 = param_2 + 0x220;
    param_3 = param_3 + 0x220;
  }
  return 1;
}



// FUNCTION 148bc3e92 FUN_148bc3e92 body=59 status=ok
// SIG undefined FUN_148bc3e92(void)

undefined8 FUN_148bc3e92(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc3ede FUN_148bc3ede body=60 status=ok
// SIG undefined FUN_148bc3ede(void)

void FUN_148bc3ede(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x44) == '\x01') {
    *param_2 = &PTR_FUN_14b2df1d0;
    FUN_1412dafa6(param_2 + 0x39);
    FUN_140ff0132(param_2);
    *(undefined1 *)(param_2 + 0x44) = 0;
  }
  return;
}



// FUNCTION 148bc3f6a FUN_148bc3f6a body=48 status=ok
// SIG undefined FUN_148bc3f6a(void)

void FUN_148bc3f6a(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x448);
  FUN_14874ede0(param_2);
  *param_2 = &PTR_FUN_14b65be90;
  return;
}



// FUNCTION 148bc3f9a FUN_148bc3f9a body=32 status=ok
// SIG undefined FUN_148bc3f9a(void)

void FUN_148bc3f9a(undefined8 param_1,undefined8 *param_2)

{
  FUN_14874ede0(param_2);
  *param_2 = &PTR_FUN_14b65be90;
  return;
}



// FUNCTION 148bc3fde FUN_148bc3fde body=104 status=ok
// SIG undefined FUN_148bc3fde(void)

undefined1 FUN_148bc3fde(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f2f73c(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x41c);
    uVar2 = *(undefined4 *)(param_3 + 0x420);
    uVar3 = *(undefined4 *)(param_3 + 0x424);
    uVar4 = *(undefined4 *)(param_3 + 0x428);
    uVar5 = *(undefined4 *)(param_3 + 0x42c);
    uVar6 = *(undefined4 *)(param_3 + 0x430);
    uVar7 = *(undefined4 *)(param_3 + 0x434);
    uVar8 = *(undefined4 *)(param_3 + 0x434);
    uVar9 = *(undefined4 *)(param_3 + 0x438);
    uVar10 = *(undefined4 *)(param_3 + 0x43c);
    uVar11 = *(undefined4 *)(param_3 + 0x440);
    *(undefined4 *)(param_2 + 0x418) = *(undefined4 *)(param_3 + 0x418);
    *(undefined4 *)(param_2 + 0x41c) = uVar1;
    *(undefined4 *)(param_2 + 0x420) = uVar2;
    *(undefined4 *)(param_2 + 0x424) = uVar3;
    *(undefined4 *)(param_2 + 0x428) = uVar4;
    *(undefined4 *)(param_2 + 0x42c) = uVar5;
    *(undefined4 *)(param_2 + 0x430) = uVar6;
    *(undefined4 *)(param_2 + 0x434) = uVar7;
    *(undefined4 *)(param_2 + 0x434) = uVar8;
    *(undefined4 *)(param_2 + 0x438) = uVar9;
    *(undefined4 *)(param_2 + 0x43c) = uVar10;
    *(undefined4 *)(param_2 + 0x440) = uVar11;
    param_2 = param_2 + 0x448;
    param_3 = param_3 + 0x448;
  }
  return 1;
}



// FUNCTION 148bc406e FUN_148bc406e body=59 status=ok
// SIG undefined FUN_148bc406e(void)

undefined8 FUN_148bc406e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc40ba FUN_148bc40ba body=38 status=ok
// SIG undefined FUN_148bc40ba(void)

void FUN_148bc40ba(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x448) == '\x01') {
    FUN_1405f0b44(param_2);
    *(undefined1 *)(param_2 + 0x448) = 0;
  }
  return;
}



// FUNCTION 148bc412e FUN_148bc412e body=38 status=ok
// SIG undefined FUN_148bc412e(void)

undefined8 FUN_148bc412e(undefined8 param_1,int param_2)

{
  FUN_1405f0b44();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc4154 FUN_148bc4154 body=55 status=ok
// SIG undefined FUN_148bc4154(void)

void FUN_148bc4154(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3e40 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3e40 = FUN_140002ddd(FUN_1465bb7fa,uVar1,L"GpsGenerator_LootableObjects");
  }
  return;
}



// FUNCTION 148bc418c FUN_148bc418c body=37 status=ok
// SIG undefined FUN_148bc418c(void)

void FUN_148bc418c(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x210);
  FUN_148bc4326(param_2);
  return;
}



// FUNCTION 148bc41fe FUN_148bc41fe body=63 status=ok
// SIG undefined FUN_148bc41fe(void)

undefined1 FUN_148bc41fe(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bc45bc(param_2,param_3);
    param_3 = param_3 + 0x210;
    param_2 = param_2 + 0x210;
  }
  return 1;
}



// FUNCTION 148bc4266 FUN_148bc4266 body=59 status=ok
// SIG undefined FUN_148bc4266(void)

undefined8 FUN_148bc4266(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc42b2 FUN_148bc42b2 body=38 status=ok
// SIG undefined FUN_148bc42b2(void)

void FUN_148bc42b2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x210) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x210) = 0;
  }
  return;
}



// FUNCTION 148bc4326 FUN_148bc4326 body=562 status=ok
// SIG undefined FUN_148bc4326(void)

undefined8 * FUN_148bc4326(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[7] = &PTR_FUN_14a1a0a00;
  *(undefined2 *)(param_1 + 10) = 1;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x3f800000;
  *param_1 = &PTR_FUN_14b65c0e0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xc] = &PTR_FUN_14a1a0a60;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x81) = 0;
  *(undefined8 *)((longlong)param_1 + 0x89) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x17] = DAT_14c846508;
  uVar4 = DAT_14c846500;
  param_1[0x15] = DAT_14c8464f8;
  param_1[0x16] = uVar4;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x1b) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xe4) = uVar3;
  param_1[0x1d] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x1f] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0x22) = 0x461c4000;
  param_1[0x24] = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  param_1[0x23] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0x26) = 0x43480000;
  param_1[0x28] = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  param_1[0x27] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0x2a) = 0x447a0000;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  param_1[0x2d] = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  param_1[0x2c] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0x2f) = 0x42c80000;
  *(undefined1 *)(param_1 + 0x30) = 0;
  FUN_1414db220(&local_38,0x42c80000,0x43fa0000,1);
  param_1[0x32] = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  param_1[0x31] = &PTR_FUN_14a1a06d0;
  param_1[0x34] = local_38;
  *(undefined1 *)(param_1 + 0x35) = 0;
  param_1[0x37] = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  param_1[0x36] = &PTR_FUN_14a1a0a00;
  *(undefined2 *)(param_1 + 0x39) = 0;
  param_1[0x3b] = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  param_1[0x3a] = &PTR_FUN_14a1a0a00;
  *(undefined2 *)(param_1 + 0x3d) = 1;
  param_1[0x3f] = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  param_1[0x3e] = &PTR_FUN_14a1a0a00;
  *(undefined2 *)(param_1 + 0x41) = 0;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc455a FUN_148bc455a body=38 status=ok
// SIG undefined FUN_148bc455a(void)

undefined8 FUN_148bc455a(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc4580 FUN_148bc4580 body=55 status=ok
// SIG undefined FUN_148bc4580(void)

void FUN_148bc4580(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3e58 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3e58 = FUN_140002ddd(FUN_1465bb891,uVar1,L"GpsModifierSettings_ProjectWater");
  }
  return;
}



// FUNCTION 148bc45bc FUN_148bc45bc body=515 status=ok
// SIG undefined FUN_148bc45bc(void)

longlong FUN_148bc45bc(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_1470d00c2(param_1 + 0x28,param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 0x48);
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined1 *)(param_1 + 0x70) = *(undefined1 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  puVar9 = (undefined8 *)(param_2 + 0x78);
  puVar10 = (undefined8 *)(param_1 + 0x78);
  for (lVar8 = 0xf; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  *(undefined1 *)(param_1 + 0xf0) = *(undefined1 *)(param_2 + 0xf0);
  *(undefined1 *)(param_1 + 0x108) = *(undefined1 *)(param_2 + 0x108);
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_2 + 0x100);
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_2 + 0x110);
  *(undefined1 *)(param_1 + 0x128) = *(undefined1 *)(param_2 + 0x128);
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0x120);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
  *(undefined1 *)(param_1 + 0x148) = *(undefined1 *)(param_2 + 0x148);
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
  *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_2 + 0x150);
  *(undefined1 *)(param_1 + 0x158) = *(undefined1 *)(param_2 + 0x158);
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_2 + 0x168);
  *(undefined1 *)(param_1 + 0x170) = *(undefined1 *)(param_2 + 0x170);
  *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_2 + 0x178);
  *(undefined1 *)(param_1 + 0x180) = *(undefined1 *)(param_2 + 0x180);
  *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_2 + 400);
  *(undefined1 *)(param_1 + 0x198) = *(undefined1 *)(param_2 + 0x198);
  *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_2 + 0x1a0);
  *(undefined1 *)(param_1 + 0x1a8) = *(undefined1 *)(param_2 + 0x1a8);
  *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(param_2 + 0x1b8);
  *(undefined1 *)(param_1 + 0x1c0) = *(undefined1 *)(param_2 + 0x1c0);
  *(undefined2 *)(param_1 + 0x1c8) = *(undefined2 *)(param_2 + 0x1c8);
  *(undefined1 *)(param_1 + 0x1e0) = *(undefined1 *)(param_2 + 0x1e0);
  *(undefined8 *)(param_1 + 0x1d8) = *(undefined8 *)(param_2 + 0x1d8);
  *(undefined2 *)(param_1 + 0x1e8) = *(undefined2 *)(param_2 + 0x1e8);
  *(undefined1 *)(param_1 + 0x200) = *(undefined1 *)(param_2 + 0x200);
  *(undefined8 *)(param_1 + 0x1f8) = *(undefined8 *)(param_2 + 0x1f8);
  *(undefined2 *)(param_1 + 0x208) = *(undefined2 *)(param_2 + 0x208);
  return param_1;
}



// FUNCTION 148bc48b4 FUN_148bc48b4 body=63 status=ok
// SIG undefined FUN_148bc48b4(void)

undefined1 FUN_148bc48b4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bc49ee(param_2,param_3);
    param_3 = param_3 + 0xa0;
    param_2 = param_2 + 0xa0;
  }
  return 1;
}



// FUNCTION 148bc491c FUN_148bc491c body=59 status=ok
// SIG undefined FUN_148bc491c(void)

undefined8 FUN_148bc491c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc49b6 FUN_148bc49b6 body=55 status=ok
// SIG undefined FUN_148bc49b6(void)

void FUN_148bc49b6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3e70 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3e70 = FUN_140002ddd(FUN_1465bb927,uVar1,L"GpsModifier_ProjectWater");
  }
  return;
}



// FUNCTION 148bc49ee FUN_148bc49ee body=138 status=ok
// SIG undefined FUN_148bc49ee(void)

longlong FUN_148bc49ee(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (param_2 != param_1) {
    FUN_1470d03b0(param_1 + 8,param_2 + 8);
    FUN_1470d03b0(param_1 + 0x20,param_2 + 0x20);
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined4 *)(param_2 + 0x3c);
  uVar2 = *(undefined4 *)(param_2 + 0x40);
  uVar3 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined2 *)(param_1 + 0x54) = *(undefined2 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  FUN_148bc4a78(param_1 + 0x60,param_2 + 0x60);
  uVar4 = *(undefined8 *)(param_2 + 0x78);
  uVar5 = *(undefined8 *)(param_2 + 0x80);
  uVar6 = *(undefined8 *)(param_2 + 0x88);
  uVar7 = *(undefined8 *)(param_2 + 0x90);
  uVar8 = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = uVar4;
  *(undefined8 *)(param_1 + 0x80) = uVar5;
  *(undefined8 *)(param_1 + 0x88) = uVar6;
  *(undefined8 *)(param_1 + 0x90) = uVar7;
  *(undefined8 *)(param_1 + 0x98) = uVar8;
  return param_1;
}



// FUNCTION 148bc4a78 FUN_148bc4a78 body=88 status=ok
// SIG undefined FUN_148bc4a78(void)

undefined8 * FUN_148bc4a78(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14840c8f4(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 148bc4ad2 FUN_148bc4ad2 body=39 status=ok
// SIG undefined FUN_148bc4ad2(void)

void FUN_148bc4ad2(undefined8 param_1,undefined8 *param_2)

{
  FUN_140d710e4(param_2);
  *param_2 = &PTR_FUN_14b65c530;
  *(undefined1 *)(param_2 + 0x10) = 0;
  return;
}



// FUNCTION 148bc4b22 FUN_148bc4b22 body=207 status=ok
// SIG undefined FUN_148bc4b22(void)

undefined8 FUN_148bc4b22(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 148bc4c1a FUN_148bc4c1a body=59 status=ok
// SIG undefined FUN_148bc4c1a(void)

undefined8 FUN_148bc4c1a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc4c66 FUN_148bc4c66 body=38 status=ok
// SIG undefined FUN_148bc4c66(void)

void FUN_148bc4c66(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 148bc4d76 FUN_148bc4d76 body=118 status=ok
// SIG undefined FUN_148bc4d76(void)

undefined8 FUN_148bc4d76(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 148bc4e14 FUN_148bc4e14 body=59 status=ok
// SIG undefined FUN_148bc4e14(void)

undefined8 FUN_148bc4e14(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc4e5a FUN_148bc4e5a body=32 status=ok
// SIG undefined FUN_148bc4e5a(void)

void FUN_148bc4e5a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 148bc4f7a FUN_148bc4f7a body=55 status=ok
// SIG undefined FUN_148bc4f7a(void)

void FUN_148bc4f7a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4080 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4080 = FUN_14171c317(FUN_1465bc6b5,uVar1,L"EGrappleNotify");
  }
  return;
}



// FUNCTION 148bc505c FUN_148bc505c body=48 status=ok
// SIG undefined FUN_148bc505c(void)

longlong FUN_148bc505c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc508c FUN_148bc508c body=48 status=ok
// SIG undefined FUN_148bc508c(void)

longlong FUN_148bc508c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc50bc FUN_148bc50bc body=48 status=ok
// SIG undefined FUN_148bc50bc(void)

longlong FUN_148bc50bc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc50ec FUN_148bc50ec body=48 status=ok
// SIG undefined FUN_148bc50ec(void)

longlong FUN_148bc50ec(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b8;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc511c FUN_148bc511c body=48 status=ok
// SIG undefined FUN_148bc511c(void)

longlong FUN_148bc511c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c0;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc514c FUN_148bc514c body=48 status=ok
// SIG undefined FUN_148bc514c(void)

longlong FUN_148bc514c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x408;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc517c FUN_148bc517c body=48 status=ok
// SIG undefined FUN_148bc517c(void)

longlong FUN_148bc517c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x410;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc51ac FUN_148bc51ac body=48 status=ok
// SIG undefined FUN_148bc51ac(void)

longlong FUN_148bc51ac(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x418;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc51dc FUN_148bc51dc body=48 status=ok
// SIG undefined FUN_148bc51dc(void)

longlong FUN_148bc51dc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x420;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc520c FUN_148bc520c body=48 status=ok
// SIG undefined FUN_148bc520c(void)

longlong FUN_148bc520c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x428;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc523c FUN_148bc523c body=48 status=ok
// SIG undefined FUN_148bc523c(void)

longlong FUN_148bc523c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x458;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc526c FUN_148bc526c body=48 status=ok
// SIG undefined FUN_148bc526c(void)

longlong FUN_148bc526c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x460;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc529c FUN_148bc529c body=48 status=ok
// SIG undefined FUN_148bc529c(void)

longlong FUN_148bc529c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x468;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc52cc FUN_148bc52cc body=48 status=ok
// SIG undefined FUN_148bc52cc(void)

longlong FUN_148bc52cc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x470;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc52fc FUN_148bc52fc body=48 status=ok
// SIG undefined FUN_148bc52fc(void)

longlong FUN_148bc52fc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x478;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc532c FUN_148bc532c body=48 status=ok
// SIG undefined FUN_148bc532c(void)

longlong FUN_148bc532c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x480;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc535c FUN_148bc535c body=48 status=ok
// SIG undefined FUN_148bc535c(void)

longlong FUN_148bc535c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x488;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc538c FUN_148bc538c body=48 status=ok
// SIG undefined FUN_148bc538c(void)

longlong FUN_148bc538c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x490;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc53bc FUN_148bc53bc body=48 status=ok
// SIG undefined FUN_148bc53bc(void)

longlong FUN_148bc53bc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x498;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc53ec FUN_148bc53ec body=48 status=ok
// SIG undefined FUN_148bc53ec(void)

longlong FUN_148bc53ec(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a0;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc541c FUN_148bc541c body=48 status=ok
// SIG undefined FUN_148bc541c(void)

longlong FUN_148bc541c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a8;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc544c FUN_148bc544c body=48 status=ok
// SIG undefined FUN_148bc544c(void)

longlong FUN_148bc544c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4b0;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc547c FUN_148bc547c body=48 status=ok
// SIG undefined FUN_148bc547c(void)

longlong FUN_148bc547c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a98;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc54ac FUN_148bc54ac body=48 status=ok
// SIG undefined FUN_148bc54ac(void)

longlong FUN_148bc54ac(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1aa0;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc54dc FUN_148bc54dc body=48 status=ok
// SIG undefined FUN_148bc54dc(void)

longlong FUN_148bc54dc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1aa8;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc550c FUN_148bc550c body=48 status=ok
// SIG undefined FUN_148bc550c(void)

longlong FUN_148bc550c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ab0;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc553c FUN_148bc553c body=48 status=ok
// SIG undefined FUN_148bc553c(void)

longlong FUN_148bc553c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ad0;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc556c FUN_148bc556c body=48 status=ok
// SIG undefined FUN_148bc556c(void)

longlong FUN_148bc556c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ad8;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc559c FUN_148bc559c body=48 status=ok
// SIG undefined FUN_148bc559c(void)

longlong FUN_148bc559c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ae0;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc55cc FUN_148bc55cc body=45 status=ok
// SIG undefined FUN_148bc55cc(void)

longlong FUN_148bc55cc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_14071fe68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc55fa FUN_148bc55fa body=45 status=ok
// SIG undefined FUN_148bc55fa(void)

longlong FUN_148bc55fa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x50;
  thunk_FUN_14071fe68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc5628 FUN_148bc5628 body=45 status=ok
// SIG undefined FUN_148bc5628(void)

longlong FUN_148bc5628(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x58;
  thunk_FUN_14071fe68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc5656 FUN_148bc5656 body=48 status=ok
// SIG undefined FUN_148bc5656(void)

longlong FUN_148bc5656(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc5686 FUN_148bc5686 body=48 status=ok
// SIG undefined FUN_148bc5686(void)

longlong FUN_148bc5686(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc56b6 FUN_148bc56b6 body=48 status=ok
// SIG undefined FUN_148bc56b6(void)

longlong FUN_148bc56b6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc56e6 FUN_148bc56e6 body=48 status=ok
// SIG undefined FUN_148bc56e6(void)

longlong FUN_148bc56e6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b8;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc5716 FUN_148bc5716 body=48 status=ok
// SIG undefined FUN_148bc5716(void)

longlong FUN_148bc5716(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c0;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc5746 FUN_148bc5746 body=48 status=ok
// SIG undefined FUN_148bc5746(void)

longlong FUN_148bc5746(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x408;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc5776 FUN_148bc5776 body=48 status=ok
// SIG undefined FUN_148bc5776(void)

longlong FUN_148bc5776(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x410;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc57a6 FUN_148bc57a6 body=48 status=ok
// SIG undefined FUN_148bc57a6(void)

longlong FUN_148bc57a6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x418;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc57d6 FUN_148bc57d6 body=48 status=ok
// SIG undefined FUN_148bc57d6(void)

longlong FUN_148bc57d6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x420;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc5806 FUN_148bc5806 body=48 status=ok
// SIG undefined FUN_148bc5806(void)

longlong FUN_148bc5806(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x428;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc5836 FUN_148bc5836 body=48 status=ok
// SIG undefined FUN_148bc5836(void)

longlong FUN_148bc5836(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x458;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc5866 FUN_148bc5866 body=48 status=ok
// SIG undefined FUN_148bc5866(void)

longlong FUN_148bc5866(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x460;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc5896 FUN_148bc5896 body=48 status=ok
// SIG undefined FUN_148bc5896(void)

longlong FUN_148bc5896(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x468;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc58c6 FUN_148bc58c6 body=48 status=ok
// SIG undefined FUN_148bc58c6(void)

longlong FUN_148bc58c6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x470;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc58f6 FUN_148bc58f6 body=48 status=ok
// SIG undefined FUN_148bc58f6(void)

longlong FUN_148bc58f6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x478;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc5926 FUN_148bc5926 body=48 status=ok
// SIG undefined FUN_148bc5926(void)

longlong FUN_148bc5926(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x480;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc5956 FUN_148bc5956 body=48 status=ok
// SIG undefined FUN_148bc5956(void)

longlong FUN_148bc5956(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x488;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc5986 FUN_148bc5986 body=48 status=ok
// SIG undefined FUN_148bc5986(void)

longlong FUN_148bc5986(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x490;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc59b6 FUN_148bc59b6 body=48 status=ok
// SIG undefined FUN_148bc59b6(void)

longlong FUN_148bc59b6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x498;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc59e6 FUN_148bc59e6 body=48 status=ok
// SIG undefined FUN_148bc59e6(void)

longlong FUN_148bc59e6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a0;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc5a16 FUN_148bc5a16 body=48 status=ok
// SIG undefined FUN_148bc5a16(void)

longlong FUN_148bc5a16(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a8;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc5a46 FUN_148bc5a46 body=48 status=ok
// SIG undefined FUN_148bc5a46(void)

longlong FUN_148bc5a46(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4b0;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc5a76 FUN_148bc5a76 body=48 status=ok
// SIG undefined FUN_148bc5a76(void)

longlong FUN_148bc5a76(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a98;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc5aa6 FUN_148bc5aa6 body=48 status=ok
// SIG undefined FUN_148bc5aa6(void)

longlong FUN_148bc5aa6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1aa0;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc5ad6 FUN_148bc5ad6 body=48 status=ok
// SIG undefined FUN_148bc5ad6(void)

longlong FUN_148bc5ad6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1aa8;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc5b06 FUN_148bc5b06 body=48 status=ok
// SIG undefined FUN_148bc5b06(void)

longlong FUN_148bc5b06(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ab0;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc5b36 FUN_148bc5b36 body=48 status=ok
// SIG undefined FUN_148bc5b36(void)

longlong FUN_148bc5b36(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ad0;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc5b66 FUN_148bc5b66 body=48 status=ok
// SIG undefined FUN_148bc5b66(void)

longlong FUN_148bc5b66(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ad8;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc5b96 FUN_148bc5b96 body=48 status=ok
// SIG undefined FUN_148bc5b96(void)

longlong FUN_148bc5b96(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ae0;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc5bc6 FUN_148bc5bc6 body=48 status=ok
// SIG undefined FUN_148bc5bc6(void)

longlong FUN_148bc5bc6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc5bf6 FUN_148bc5bf6 body=48 status=ok
// SIG undefined FUN_148bc5bf6(void)

longlong FUN_148bc5bf6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc5c26 FUN_148bc5c26 body=48 status=ok
// SIG undefined FUN_148bc5c26(void)

longlong FUN_148bc5c26(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc5c56 FUN_148bc5c56 body=48 status=ok
// SIG undefined FUN_148bc5c56(void)

longlong FUN_148bc5c56(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b8;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc5c86 FUN_148bc5c86 body=48 status=ok
// SIG undefined FUN_148bc5c86(void)

longlong FUN_148bc5c86(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c0;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc5cb6 FUN_148bc5cb6 body=48 status=ok
// SIG undefined FUN_148bc5cb6(void)

longlong FUN_148bc5cb6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x408;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc5ce6 FUN_148bc5ce6 body=48 status=ok
// SIG undefined FUN_148bc5ce6(void)

longlong FUN_148bc5ce6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x410;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc5d16 FUN_148bc5d16 body=48 status=ok
// SIG undefined FUN_148bc5d16(void)

longlong FUN_148bc5d16(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x418;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc5d46 FUN_148bc5d46 body=48 status=ok
// SIG undefined FUN_148bc5d46(void)

longlong FUN_148bc5d46(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x420;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc5d76 FUN_148bc5d76 body=48 status=ok
// SIG undefined FUN_148bc5d76(void)

longlong FUN_148bc5d76(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x428;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc5da6 FUN_148bc5da6 body=48 status=ok
// SIG undefined FUN_148bc5da6(void)

longlong FUN_148bc5da6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x458;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc5dd6 FUN_148bc5dd6 body=48 status=ok
// SIG undefined FUN_148bc5dd6(void)

longlong FUN_148bc5dd6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x460;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc5e06 FUN_148bc5e06 body=48 status=ok
// SIG undefined FUN_148bc5e06(void)

longlong FUN_148bc5e06(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x468;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc5e36 FUN_148bc5e36 body=48 status=ok
// SIG undefined FUN_148bc5e36(void)

longlong FUN_148bc5e36(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x470;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc5e66 FUN_148bc5e66 body=48 status=ok
// SIG undefined FUN_148bc5e66(void)

longlong FUN_148bc5e66(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x478;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc5e96 FUN_148bc5e96 body=48 status=ok
// SIG undefined FUN_148bc5e96(void)

longlong FUN_148bc5e96(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x480;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc5ec6 FUN_148bc5ec6 body=48 status=ok
// SIG undefined FUN_148bc5ec6(void)

longlong FUN_148bc5ec6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x488;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc5ef6 FUN_148bc5ef6 body=48 status=ok
// SIG undefined FUN_148bc5ef6(void)

longlong FUN_148bc5ef6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x490;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc5f26 FUN_148bc5f26 body=48 status=ok
// SIG undefined FUN_148bc5f26(void)

longlong FUN_148bc5f26(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x498;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc5f56 FUN_148bc5f56 body=48 status=ok
// SIG undefined FUN_148bc5f56(void)

longlong FUN_148bc5f56(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a0;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc5f86 FUN_148bc5f86 body=48 status=ok
// SIG undefined FUN_148bc5f86(void)

longlong FUN_148bc5f86(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a8;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc5fb6 FUN_148bc5fb6 body=48 status=ok
// SIG undefined FUN_148bc5fb6(void)

longlong FUN_148bc5fb6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4b0;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc5fe6 FUN_148bc5fe6 body=48 status=ok
// SIG undefined FUN_148bc5fe6(void)

longlong FUN_148bc5fe6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a98;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc6016 FUN_148bc6016 body=48 status=ok
// SIG undefined FUN_148bc6016(void)

longlong FUN_148bc6016(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1aa0;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc6046 FUN_148bc6046 body=48 status=ok
// SIG undefined FUN_148bc6046(void)

longlong FUN_148bc6046(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1aa8;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc6076 FUN_148bc6076 body=48 status=ok
// SIG undefined FUN_148bc6076(void)

longlong FUN_148bc6076(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ab0;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc60a6 FUN_148bc60a6 body=48 status=ok
// SIG undefined FUN_148bc60a6(void)

longlong FUN_148bc60a6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ad0;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc60d6 FUN_148bc60d6 body=48 status=ok
// SIG undefined FUN_148bc60d6(void)

longlong FUN_148bc60d6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ad8;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc6106 FUN_148bc6106 body=48 status=ok
// SIG undefined FUN_148bc6106(void)

longlong FUN_148bc6106(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ae0;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc613a FUN_148bc613a body=48 status=ok
// SIG undefined FUN_148bc613a(void)

longlong FUN_148bc613a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc616a FUN_148bc616a body=48 status=ok
// SIG undefined FUN_148bc616a(void)

longlong FUN_148bc616a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc619a FUN_148bc619a body=48 status=ok
// SIG undefined FUN_148bc619a(void)

longlong FUN_148bc619a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc61ca FUN_148bc61ca body=48 status=ok
// SIG undefined FUN_148bc61ca(void)

longlong FUN_148bc61ca(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b8;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc61fa FUN_148bc61fa body=48 status=ok
// SIG undefined FUN_148bc61fa(void)

longlong FUN_148bc61fa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c0;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc622a FUN_148bc622a body=48 status=ok
// SIG undefined FUN_148bc622a(void)

longlong FUN_148bc622a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x408;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc625a FUN_148bc625a body=48 status=ok
// SIG undefined FUN_148bc625a(void)

longlong FUN_148bc625a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x410;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc628a FUN_148bc628a body=48 status=ok
// SIG undefined FUN_148bc628a(void)

longlong FUN_148bc628a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x418;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc62ba FUN_148bc62ba body=48 status=ok
// SIG undefined FUN_148bc62ba(void)

longlong FUN_148bc62ba(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x420;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc62ea FUN_148bc62ea body=48 status=ok
// SIG undefined FUN_148bc62ea(void)

longlong FUN_148bc62ea(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x428;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc631a FUN_148bc631a body=48 status=ok
// SIG undefined FUN_148bc631a(void)

longlong FUN_148bc631a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x458;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc634a FUN_148bc634a body=48 status=ok
// SIG undefined FUN_148bc634a(void)

longlong FUN_148bc634a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x460;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc637a FUN_148bc637a body=48 status=ok
// SIG undefined FUN_148bc637a(void)

longlong FUN_148bc637a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x468;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc63aa FUN_148bc63aa body=48 status=ok
// SIG undefined FUN_148bc63aa(void)

longlong FUN_148bc63aa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x470;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc63da FUN_148bc63da body=48 status=ok
// SIG undefined FUN_148bc63da(void)

longlong FUN_148bc63da(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x478;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc640a FUN_148bc640a body=48 status=ok
// SIG undefined FUN_148bc640a(void)

longlong FUN_148bc640a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x480;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc643a FUN_148bc643a body=48 status=ok
// SIG undefined FUN_148bc643a(void)

longlong FUN_148bc643a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x488;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc646a FUN_148bc646a body=48 status=ok
// SIG undefined FUN_148bc646a(void)

longlong FUN_148bc646a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x490;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc649a FUN_148bc649a body=48 status=ok
// SIG undefined FUN_148bc649a(void)

longlong FUN_148bc649a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x498;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc64ca FUN_148bc64ca body=48 status=ok
// SIG undefined FUN_148bc64ca(void)

longlong FUN_148bc64ca(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a0;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc64fa FUN_148bc64fa body=48 status=ok
// SIG undefined FUN_148bc64fa(void)

longlong FUN_148bc64fa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a8;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc652a FUN_148bc652a body=48 status=ok
// SIG undefined FUN_148bc652a(void)

longlong FUN_148bc652a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4b0;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc655a FUN_148bc655a body=48 status=ok
// SIG undefined FUN_148bc655a(void)

longlong FUN_148bc655a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a98;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc658a FUN_148bc658a body=48 status=ok
// SIG undefined FUN_148bc658a(void)

longlong FUN_148bc658a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1aa0;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc65ba FUN_148bc65ba body=48 status=ok
// SIG undefined FUN_148bc65ba(void)

longlong FUN_148bc65ba(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1aa8;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc65ea FUN_148bc65ea body=48 status=ok
// SIG undefined FUN_148bc65ea(void)

longlong FUN_148bc65ea(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ab0;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc661a FUN_148bc661a body=48 status=ok
// SIG undefined FUN_148bc661a(void)

longlong FUN_148bc661a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ad0;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc664a FUN_148bc664a body=48 status=ok
// SIG undefined FUN_148bc664a(void)

longlong FUN_148bc664a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ad8;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc667e FUN_148bc667e body=48 status=ok
// SIG undefined FUN_148bc667e(void)

longlong FUN_148bc667e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ae0;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc66ae FUN_148bc66ae body=55 status=ok
// SIG undefined FUN_148bc66ae(void)

void FUN_148bc66ae(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x88);
  FUN_140d710e4(param_2);
  *param_2 = &PTR_FUN_14b6669a0;
  *(undefined1 *)(param_2 + 0x10) = 0;
  return;
}



// FUNCTION 148bc66e6 FUN_148bc66e6 body=39 status=ok
// SIG undefined FUN_148bc66e6(void)

void FUN_148bc66e6(undefined8 param_1,undefined8 *param_2)

{
  FUN_140d710e4(param_2);
  *param_2 = &PTR_FUN_14b6669a0;
  *(undefined1 *)(param_2 + 0x10) = 0;
  return;
}



// FUNCTION 148bc6752 FUN_148bc6752 body=207 status=ok
// SIG undefined FUN_148bc6752(void)

undefined8 FUN_148bc6752(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 148bc684a FUN_148bc684a body=59 status=ok
// SIG undefined FUN_148bc684a(void)

undefined8 FUN_148bc684a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc6896 FUN_148bc6896 body=38 status=ok
// SIG undefined FUN_148bc6896(void)

void FUN_148bc6896(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 148bc690a FUN_148bc690a body=38 status=ok
// SIG undefined FUN_148bc690a(void)

undefined8 FUN_148bc690a(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc6930 FUN_148bc6930 body=55 status=ok
// SIG undefined FUN_148bc6930(void)

void FUN_148bc6930(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3eb8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3eb8 = FUN_140002ddd(FUN_1465bbfc5,uVar1,L"GpsTestSettings_ExoMarkedTarget");
  }
  return;
}



// FUNCTION 148bc6a06 FUN_148bc6a06 body=118 status=ok
// SIG undefined FUN_148bc6a06(void)

undefined8 FUN_148bc6a06(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 148bc6aa4 FUN_148bc6aa4 body=59 status=ok
// SIG undefined FUN_148bc6aa4(void)

undefined8 FUN_148bc6aa4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc6aea FUN_148bc6aea body=32 status=ok
// SIG undefined FUN_148bc6aea(void)

void FUN_148bc6aea(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 148bc6b58 FUN_148bc6b58 body=38 status=ok
// SIG undefined FUN_148bc6b58(void)

undefined8 FUN_148bc6b58(undefined8 param_1,int param_2)

{
  FUN_140f9d4d6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bc6b7e FUN_148bc6b7e body=55 status=ok
// SIG undefined FUN_148bc6b7e(void)

void FUN_148bc6b7e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3ed0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3ed0 = FUN_140002ddd(FUN_1465bc057,uVar1,L"GpsTest_ExoMarkedTarget");
  }
  return;
}



// FUNCTION 148bc6be6 FUN_148bc6be6 body=63 status=ok
// SIG undefined FUN_148bc6be6(void)

undefined1 FUN_148bc6be6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bc6d0e(param_2,param_3);
    param_3 = param_3 + 0x1b8;
    param_2 = param_2 + 0x1b8;
  }
  return 1;
}



// FUNCTION 148bc6c4e FUN_148bc6c4e body=59 status=ok
// SIG undefined FUN_148bc6c4e(void)

undefined8 FUN_148bc6c4e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc6c9a FUN_148bc6c9a body=38 status=ok
// SIG undefined FUN_148bc6c9a(void)

void FUN_148bc6c9a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1b8) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x1b8) = 0;
  }
  return;
}



// FUNCTION 148bc6d0e FUN_148bc6d0e body=387 status=ok
// SIG undefined FUN_148bc6d0e(void)

longlong FUN_148bc6d0e(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_1470d00c2(param_1 + 0x28,param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 0x48);
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_2 + 0x50);
  *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  puVar9 = (undefined8 *)(param_2 + 0x98);
  puVar10 = (undefined8 *)(param_1 + 0x98);
  for (lVar8 = 0xf; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  *(undefined1 *)(param_1 + 0x110) = *(undefined1 *)(param_2 + 0x110);
  *(undefined1 *)(param_1 + 0x128) = *(undefined1 *)(param_2 + 0x128);
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0x120);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
  *(undefined1 *)(param_1 + 0x148) = *(undefined1 *)(param_2 + 0x148);
  *(undefined2 *)(param_1 + 0x150) = *(undefined2 *)(param_2 + 0x150);
  *(undefined1 *)(param_1 + 0x168) = *(undefined1 *)(param_2 + 0x168);
  *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_2 + 0x160);
  *(undefined2 *)(param_1 + 0x170) = *(undefined2 *)(param_2 + 0x170);
  *(undefined1 *)(param_1 + 0x188) = *(undefined1 *)(param_2 + 0x188);
  *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_2 + 0x180);
  *(undefined2 *)(param_1 + 400) = *(undefined2 *)(param_2 + 400);
  *(undefined1 *)(param_1 + 0x1a8) = *(undefined1 *)(param_2 + 0x1a8);
  *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_2 + 0x1a0);
  *(undefined2 *)(param_1 + 0x1b0) = *(undefined2 *)(param_2 + 0x1b0);
  return param_1;
}



// FUNCTION 148bc6f1a FUN_148bc6f1a body=63 status=ok
// SIG undefined FUN_148bc6f1a(void)

undefined1 FUN_148bc6f1a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bc705a(param_2,param_3);
    param_3 = param_3 + 0x98;
    param_2 = param_2 + 0x98;
  }
  return 1;
}



// FUNCTION 148bc6f82 FUN_148bc6f82 body=59 status=ok
// SIG undefined FUN_148bc6f82(void)

undefined8 FUN_148bc6f82(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc6fce FUN_148bc6fce body=62 status=ok
// SIG undefined FUN_148bc6fce(void)

void FUN_148bc6fce(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x13) == '\x01') {
    *param_2 = &PTR_FUN_14b666fe0;
    if (param_2[0xd] != 0) {
      FUN_1400020a8();
    }
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0x13) = 0;
  }
  return;
}



// FUNCTION 148bc705a FUN_148bc705a body=134 status=ok
// SIG undefined FUN_148bc705a(void)

longlong FUN_148bc705a(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_2 != param_1) {
    FUN_1470d03b0(param_1 + 8,param_2 + 8);
    FUN_1470d03b0(param_1 + 0x20,param_2 + 0x20);
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined2 *)(param_1 + 0x54) = *(undefined2 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  FUN_148bc4a78(param_1 + 0x68,param_2 + 0x68);
  uVar1 = *(undefined8 *)(param_2 + 0x80);
  uVar2 = *(undefined8 *)(param_2 + 0x85);
  uVar3 = *(undefined8 *)(param_2 + 0x8d);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  *(undefined8 *)(param_1 + 0x85) = uVar2;
  *(undefined8 *)(param_1 + 0x8d) = uVar3;
  return param_1;
}



// FUNCTION 148bc70e2 FUN_148bc70e2 body=39 status=ok
// SIG undefined FUN_148bc70e2(void)

void FUN_148bc70e2(undefined8 param_1,undefined8 *param_2)

{
  FUN_140d710e4(param_2);
  *param_2 = &PTR_FUN_14b667220;
  *(undefined1 *)(param_2 + 0x10) = 0;
  return;
}



// FUNCTION 148bc7132 FUN_148bc7132 body=207 status=ok
// SIG undefined FUN_148bc7132(void)

undefined8 FUN_148bc7132(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 148bc722a FUN_148bc722a body=59 status=ok
// SIG undefined FUN_148bc722a(void)

undefined8 FUN_148bc722a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc7276 FUN_148bc7276 body=38 status=ok
// SIG undefined FUN_148bc7276(void)

void FUN_148bc7276(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 148bc7346 FUN_148bc7346 body=118 status=ok
// SIG undefined FUN_148bc7346(void)

undefined8 FUN_148bc7346(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 148bc73e4 FUN_148bc73e4 body=59 status=ok
// SIG undefined FUN_148bc73e4(void)

undefined8 FUN_148bc73e4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bc742a FUN_148bc742a body=32 status=ok
// SIG undefined FUN_148bc742a(void)

void FUN_148bc742a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}


