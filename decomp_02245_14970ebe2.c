// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14970ebe2 FUN_14970ebe2 body=43 status=ok
// SIG undefined FUN_14970ebe2(void)

undefined8 FUN_14970ebe2(undefined8 param_1,int param_2)

{
  FUN_14970ee9c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x1c0);
  }
  return param_1;
}



// FUNCTION 14970ec0e FUN_14970ec0e body=38 status=ok
// SIG undefined FUN_14970ec0e(void)

undefined8 FUN_14970ec0e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FFloatArrayToIntArrayDataflowNode",1);
  return param_2;
}



// FUNCTION 14970ec34 FUN_14970ec34 body=38 status=ok
// SIG undefined FUN_14970ec34(void)

undefined8 FUN_14970ec34(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FloatArrayToIntArray",1);
  return param_2;
}



// FUNCTION 14970ec5a FUN_14970ec5a body=38 status=ok
// SIG undefined FUN_14970ec5a(void)

undefined8 FUN_14970ec5a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Conversions",1);
  return param_2;
}



// FUNCTION 14970ec80 FUN_14970ec80 body=32 status=ok
// SIG undefined FUN_14970ec80(void)

undefined8 FUN_14970ec80(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14970eca0 FUN_14970eca0 body=123 status=ok
// SIG undefined FUN_14970eca0(void)

void FUN_14970eca0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24548 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24548 = FUN_140002ddd(FUN_1467502f5,uVar1,L"FloatArrayToIntArrayDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24548,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014970ed18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14970ed1c FUN_14970ed1c body=93 status=ok
// SIG undefined FUN_14970ed1c(void)

void FUN_14970ed1c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24548 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24548 = FUN_140002ddd(FUN_1467502f5,uVar2,L"FloatArrayToIntArrayDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24548,param_1);
  return;
}



// FUNCTION 14970ed7a FUN_14970ed7a body=55 status=ok
// SIG undefined FUN_14970ed7a(void)

void FUN_14970ed7a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24548 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24548 = FUN_140002ddd(FUN_1467502f5,uVar1,L"FloatArrayToIntArrayDataflowNode");
  }
  return;
}



// FUNCTION 14970edb2 FUN_14970edb2 body=233 status=ok
// SIG undefined FUN_14970edb2(void)

ulonglong FUN_14970edb2(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FFloatArrayToIntArrayDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14970ee4c;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14970ee4c;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14970ee4c;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14970ee4c:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14970ee9c FUN_14970ee9c body=65 status=ok
// SIG undefined FUN_14970ee9c(void)

void FUN_14970ee9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be1dae0;
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 14970eede FUN_14970eede body=70 status=ok
// SIG undefined FUN_14970eede(void)

void FUN_14970eede(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be1dda0;
  *(undefined4 *)(param_2 + 0x33) = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  return;
}



// FUNCTION 14970ef24 FUN_14970ef24 body=70 status=ok
// SIG undefined FUN_14970ef24(void)

void FUN_14970ef24(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be1dda0;
  *(undefined4 *)(param_2 + 0x33) = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  return;
}



// FUNCTION 14970ef8e FUN_14970ef8e body=125 status=ok
// SIG undefined FUN_14970ef8e(void)

undefined8 FUN_14970ef8e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    FUN_1405b70a4(param_2 + 0x1a0,param_3 + 0x1a0);
    uVar1 = *(undefined4 *)(param_3 + 0x1b4);
    uVar2 = *(undefined4 *)(param_3 + 0x1b8);
    uVar3 = *(undefined4 *)(param_3 + 0x1bc);
    *(undefined4 *)(param_2 + 0x1b0) = *(undefined4 *)(param_3 + 0x1b0);
    *(undefined4 *)(param_2 + 0x1b4) = uVar1;
    *(undefined4 *)(param_2 + 0x1b8) = uVar2;
    *(undefined4 *)(param_2 + 0x1bc) = uVar3;
    *(undefined8 *)(param_2 + 0x1c0) = *(undefined8 *)(param_3 + 0x1c0);
    param_2 = param_2 + 0x1c8;
    param_3 = param_3 + 0x1c8;
  }
  return 1;
}



// FUNCTION 14970f034 FUN_14970f034 body=59 status=ok
// SIG undefined FUN_14970f034(void)

undefined8 FUN_14970f034(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14970f080 FUN_14970f080 body=67 status=ok
// SIG undefined FUN_14970f080(void)

void FUN_14970f080(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x39) == '\x01') {
    *param_2 = &PTR_FUN_14be1dda0;
    if (param_2[0x34] != 0) {
      FUN_1400020a8();
    }
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x39) = 0;
  }
  return;
}



// FUNCTION 14970f112 FUN_14970f112 body=73 status=ok
// SIG undefined FUN_14970f112(void)

undefined8 * FUN_14970f112(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be1dda0;
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x1c8);
  }
  return param_1;
}



// FUNCTION 14970f15c FUN_14970f15c body=38 status=ok
// SIG undefined FUN_14970f15c(void)

undefined8 FUN_14970f15c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FGetArrayElementDataflowNode",1);
  return param_2;
}



// FUNCTION 14970f182 FUN_14970f182 body=38 status=ok
// SIG undefined FUN_14970f182(void)

undefined8 FUN_14970f182(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GetArrayElement",1);
  return param_2;
}



// FUNCTION 14970f1a8 FUN_14970f1a8 body=38 status=ok
// SIG undefined FUN_14970f1a8(void)

undefined8 FUN_14970f1a8(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Utilities|Array",1);
  return param_2;
}



// FUNCTION 14970f1ce FUN_14970f1ce body=32 status=ok
// SIG undefined FUN_14970f1ce(void)

undefined8 FUN_14970f1ce(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14970f1ee FUN_14970f1ee body=123 status=ok
// SIG undefined FUN_14970f1ee(void)

void FUN_14970f1ee(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24560 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24560 = FUN_140002ddd(FUN_146750354,uVar1,L"GetArrayElementDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24560,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014970f266. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14970f26a FUN_14970f26a body=93 status=ok
// SIG undefined FUN_14970f26a(void)

void FUN_14970f26a(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24560 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24560 = FUN_140002ddd(FUN_146750354,uVar2,L"GetArrayElementDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24560,param_1);
  return;
}



// FUNCTION 14970f2c8 FUN_14970f2c8 body=55 status=ok
// SIG undefined FUN_14970f2c8(void)

void FUN_14970f2c8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24560 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24560 = FUN_140002ddd(FUN_146750354,uVar1,L"GetArrayElementDataflowNode");
  }
  return;
}



// FUNCTION 14970f300 FUN_14970f300 body=233 status=ok
// SIG undefined FUN_14970f300(void)

ulonglong FUN_14970f300(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FGetArrayElementDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14970f39a;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14970f39a;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14970f39a;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14970f39a:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14970f3ec FUN_14970f3ec body=73 status=ok
// SIG undefined FUN_14970f3ec(void)

void FUN_14970f3ec(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be1e040;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  *(undefined4 *)(param_2 + 0x3b) = 0;
  return;
}



// FUNCTION 14970f436 FUN_14970f436 body=73 status=ok
// SIG undefined FUN_14970f436(void)

void FUN_14970f436(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be1e040;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  *(undefined4 *)(param_2 + 0x3b) = 0;
  return;
}



// FUNCTION 14970f4a4 FUN_14970f4a4 body=63 status=ok
// SIG undefined FUN_14970f4a4(void)

undefined1 FUN_14970f4a4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14970f8ec(param_2,param_3);
    param_3 = param_3 + 0x1e0;
    param_2 = param_2 + 0x1e0;
  }
  return 1;
}



// FUNCTION 14970f50c FUN_14970f50c body=59 status=ok
// SIG undefined FUN_14970f50c(void)

undefined8 FUN_14970f50c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14970f558 FUN_14970f558 body=40 status=ok
// SIG undefined FUN_14970f558(void)

void FUN_14970f558(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1e0) == '\x01') {
    FUN_14970f888(param_2);
    *(undefined1 *)(param_2 + 0x1e0) = 0;
  }
  return;
}



// FUNCTION 14970f5ce FUN_14970f5ce body=43 status=ok
// SIG undefined FUN_14970f5ce(void)

undefined8 FUN_14970f5ce(undefined8 param_1,int param_2)

{
  FUN_14970f888();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x1e0);
  }
  return param_1;
}



// FUNCTION 14970f5fa FUN_14970f5fa body=38 status=ok
// SIG undefined FUN_14970f5fa(void)

undefined8 FUN_14970f5fa(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FGetNumArrayElementsDataflowNode",1);
  return param_2;
}



// FUNCTION 14970f620 FUN_14970f620 body=38 status=ok
// SIG undefined FUN_14970f620(void)

undefined8 FUN_14970f620(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GetNumArrayElements",1);
  return param_2;
}



// FUNCTION 14970f646 FUN_14970f646 body=38 status=ok
// SIG undefined FUN_14970f646(void)

undefined8 FUN_14970f646(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Utilities|Array",1);
  return param_2;
}



// FUNCTION 14970f66c FUN_14970f66c body=32 status=ok
// SIG undefined FUN_14970f66c(void)

undefined8 FUN_14970f66c(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14970f68c FUN_14970f68c body=123 status=ok
// SIG undefined FUN_14970f68c(void)

void FUN_14970f68c(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24578 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24578 = FUN_140002ddd(FUN_1467503b4,uVar1,L"GetNumArrayElementsDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24578,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014970f704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14970f708 FUN_14970f708 body=93 status=ok
// SIG undefined FUN_14970f708(void)

void FUN_14970f708(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24578 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24578 = FUN_140002ddd(FUN_1467503b4,uVar2,L"GetNumArrayElementsDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24578,param_1);
  return;
}



// FUNCTION 14970f766 FUN_14970f766 body=55 status=ok
// SIG undefined FUN_14970f766(void)

void FUN_14970f766(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24578 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24578 = FUN_140002ddd(FUN_1467503b4,uVar1,L"GetNumArrayElementsDataflowNode");
  }
  return;
}



// FUNCTION 14970f79e FUN_14970f79e body=233 status=ok
// SIG undefined FUN_14970f79e(void)

ulonglong FUN_14970f79e(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FGetNumArrayElementsDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14970f838;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14970f838;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14970f838;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14970f838:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14970f888 FUN_14970f888 body=99 status=ok
// SIG undefined FUN_14970f888(void)

void FUN_14970f888(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be1e040;
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 14970f8ec FUN_14970f8ec body=107 status=ok
// SIG undefined FUN_14970f8ec(void)

longlong FUN_14970f8ec(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_144a67f5c(param_1 + 0x198,param_2 + 0x198);
  FUN_14054c6c4(param_1 + 0x1a8,param_2 + 0x1a8);
  FUN_1405b70a4(param_1 + 0x1b8,param_2 + 0x1b8);
  FUN_140de4b5e(param_1 + 0x1c8,param_2 + 0x1c8);
  *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_2 + 0x1d8);
  return param_1;
}



// FUNCTION 14970f958 FUN_14970f958 body=70 status=ok
// SIG undefined FUN_14970f958(void)

void FUN_14970f958(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be1e2f0;
  param_2[0x37] = 0;
  param_2[0x38] = 0x8000000000;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  return;
}



// FUNCTION 14970f99e FUN_14970f99e body=70 status=ok
// SIG undefined FUN_14970f99e(void)

void FUN_14970f99e(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be1e2f0;
  param_2[0x37] = 0;
  param_2[0x38] = 0x8000000000;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  return;
}



// FUNCTION 14970fa08 FUN_14970fa08 body=63 status=ok
// SIG undefined FUN_14970fa08(void)

undefined1 FUN_14970fa08(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14970fe2e(param_2,param_3);
    param_3 = param_3 + 0x1c8;
    param_2 = param_2 + 0x1c8;
  }
  return 1;
}



// FUNCTION 14970fa70 FUN_14970fa70 body=59 status=ok
// SIG undefined FUN_14970fa70(void)

undefined8 FUN_14970fa70(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14970fabc FUN_14970fabc body=40 status=ok
// SIG undefined FUN_14970fabc(void)

void FUN_14970fabc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1c8) == '\x01') {
    FUN_14970fdec(param_2);
    *(undefined1 *)(param_2 + 0x1c8) = 0;
  }
  return;
}



// FUNCTION 14970fb32 FUN_14970fb32 body=43 status=ok
// SIG undefined FUN_14970fb32(void)

undefined8 FUN_14970fb32(undefined8 param_1,int param_2)

{
  FUN_14970fdec();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x1c8);
  }
  return param_1;
}



// FUNCTION 14970fb5e FUN_14970fb5e body=38 status=ok
// SIG undefined FUN_14970fb5e(void)

undefined8 FUN_14970fb5e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FBoolArrayToFaceSelectionDataflowNode",1);
  return param_2;
}



// FUNCTION 14970fb84 FUN_14970fb84 body=38 status=ok
// SIG undefined FUN_14970fb84(void)

undefined8 FUN_14970fb84(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"BoolArrayToFaceSelection",1);
  return param_2;
}



// FUNCTION 14970fbaa FUN_14970fbaa body=38 status=ok
// SIG undefined FUN_14970fbaa(void)

undefined8 FUN_14970fbaa(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Utilities|Array",1);
  return param_2;
}



// FUNCTION 14970fbd0 FUN_14970fbd0 body=32 status=ok
// SIG undefined FUN_14970fbd0(void)

undefined8 FUN_14970fbd0(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14970fbf0 FUN_14970fbf0 body=123 status=ok
// SIG undefined FUN_14970fbf0(void)

void FUN_14970fbf0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24590 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24590 = FUN_140002ddd(FUN_146750414,uVar1,L"BoolArrayToFaceSelectionDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24590,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014970fc68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14970fc6c FUN_14970fc6c body=93 status=ok
// SIG undefined FUN_14970fc6c(void)

void FUN_14970fc6c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24590 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24590 = FUN_140002ddd(FUN_146750414,uVar2,L"BoolArrayToFaceSelectionDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24590,param_1);
  return;
}



// FUNCTION 14970fcca FUN_14970fcca body=55 status=ok
// SIG undefined FUN_14970fcca(void)

void FUN_14970fcca(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24590 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24590 = FUN_140002ddd(FUN_146750414,uVar1,L"BoolArrayToFaceSelectionDataflowNode");
  }
  return;
}



// FUNCTION 14970fd02 FUN_14970fd02 body=233 status=ok
// SIG undefined FUN_14970fd02(void)

ulonglong FUN_14970fd02(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FBoolArrayToFaceSelectionDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14970fd9c;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14970fd9c;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14970fd9c;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14970fd9c:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14970fdec FUN_14970fdec body=65 status=ok
// SIG undefined FUN_14970fdec(void)

void FUN_14970fdec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be1e2f0;
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 14970fe2e FUN_14970fe2e body=68 status=ok
// SIG undefined FUN_14970fe2e(void)

longlong FUN_14970fe2e(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_1447cd5a6(param_1 + 0x198,param_2 + 0x198);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x1a8,param_2 + 0x1a8);
  }
  return param_1;
}



// FUNCTION 14970fe74 FUN_14970fe74 body=87 status=ok
// SIG undefined FUN_14970fe74(void)

void FUN_14970fe74(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be1e700;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *(undefined1 *)(param_2 + 0x35) = 3;
  *(undefined4 *)((longlong)param_2 + 0x1ac) = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0x8000000000;
  return;
}



// FUNCTION 14970fecc FUN_14970fecc body=87 status=ok
// SIG undefined FUN_14970fecc(void)

void FUN_14970fecc(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be1e700;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *(undefined1 *)(param_2 + 0x35) = 3;
  *(undefined4 *)((longlong)param_2 + 0x1ac) = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0x8000000000;
  return;
}



// FUNCTION 14970ff48 FUN_14970ff48 body=63 status=ok
// SIG undefined FUN_14970ff48(void)

undefined1 FUN_14970ff48(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14971036e(param_2,param_3);
    param_3 = param_3 + 0x1d0;
    param_2 = param_2 + 0x1d0;
  }
  return 1;
}



// FUNCTION 14970ffb0 FUN_14970ffb0 body=59 status=ok
// SIG undefined FUN_14970ffb0(void)

undefined8 FUN_14970ffb0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14970fffc FUN_14970fffc body=40 status=ok
// SIG undefined FUN_14970fffc(void)

void FUN_14970fffc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1d0) == '\x01') {
    FUN_14971032c(param_2);
    *(undefined1 *)(param_2 + 0x1d0) = 0;
  }
  return;
}



// FUNCTION 149710072 FUN_149710072 body=43 status=ok
// SIG undefined FUN_149710072(void)

undefined8 FUN_149710072(undefined8 param_1,int param_2)

{
  FUN_14971032c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x1d0);
  }
  return param_1;
}



// FUNCTION 14971009e FUN_14971009e body=38 status=ok
// SIG undefined FUN_14971009e(void)

undefined8 FUN_14971009e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FFloatArrayToVertexSelectionDataflowNode",1);
  return param_2;
}



// FUNCTION 1497100c4 FUN_1497100c4 body=38 status=ok
// SIG undefined FUN_1497100c4(void)

undefined8 FUN_1497100c4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FloatArrayToVertexSelection",1);
  return param_2;
}



// FUNCTION 1497100ea FUN_1497100ea body=38 status=ok
// SIG undefined FUN_1497100ea(void)

undefined8 FUN_1497100ea(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Utilities|Array",1);
  return param_2;
}



// FUNCTION 149710110 FUN_149710110 body=32 status=ok
// SIG undefined FUN_149710110(void)

undefined8 FUN_149710110(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149710130 FUN_149710130 body=123 status=ok
// SIG undefined FUN_149710130(void)

void FUN_149710130(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc245c0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc245c0 = FUN_140002ddd(FUN_1467504a3,uVar1,L"FloatArrayToVertexSelectionDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc245c0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001497101a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 1497101ac FUN_1497101ac body=93 status=ok
// SIG undefined FUN_1497101ac(void)

void FUN_1497101ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc245c0 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc245c0 = FUN_140002ddd(FUN_1467504a3,uVar2,L"FloatArrayToVertexSelectionDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc245c0,param_1);
  return;
}



// FUNCTION 14971020a FUN_14971020a body=55 status=ok
// SIG undefined FUN_14971020a(void)

void FUN_14971020a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc245c0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc245c0 = FUN_140002ddd(FUN_1467504a3,uVar1,L"FloatArrayToVertexSelectionDataflowNode");
  }
  return;
}



// FUNCTION 149710242 FUN_149710242 body=233 status=ok
// SIG undefined FUN_149710242(void)

ulonglong FUN_149710242(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FFloatArrayToVertexSelectionDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_1497102dc;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1497102dc;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_1497102dc;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_1497102dc:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14971032c FUN_14971032c body=65 status=ok
// SIG undefined FUN_14971032c(void)

void FUN_14971032c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be1e700;
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 14971036e FUN_14971036e body=82 status=ok
// SIG undefined FUN_14971036e(void)

longlong FUN_14971036e(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_144a67f5c(param_1 + 0x198,param_2 + 0x198);
  *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(param_2 + 0x1a8);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x1b0,param_2 + 0x1b0);
  }
  return param_1;
}



// FUNCTION 1497103c2 FUN_1497103c2 body=94 status=ok
// SIG undefined FUN_1497103c2(void)

void FUN_1497103c2(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be1e9c0;
  param_2[0x37] = 0;
  param_2[0x38] = 0x8000000000;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x39] = 0x3f80000000000000;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  return;
}



// FUNCTION 149710420 FUN_149710420 body=94 status=ok
// SIG undefined FUN_149710420(void)

void FUN_149710420(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be1e9c0;
  param_2[0x37] = 0;
  param_2[0x38] = 0x8000000000;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x39] = 0x3f80000000000000;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  return;
}



// FUNCTION 1497104a2 FUN_1497104a2 body=63 status=ok
// SIG undefined FUN_1497104a2(void)

undefined1 FUN_1497104a2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1497108d8(param_2,param_3);
    param_3 = param_3 + 0x1e0;
    param_2 = param_2 + 0x1e0;
  }
  return 1;
}



// FUNCTION 14971050a FUN_14971050a body=59 status=ok
// SIG undefined FUN_14971050a(void)

undefined8 FUN_14971050a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149710556 FUN_149710556 body=40 status=ok
// SIG undefined FUN_149710556(void)

void FUN_149710556(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1e0) == '\x01') {
    FUN_149710886(param_2);
    *(undefined1 *)(param_2 + 0x1e0) = 0;
  }
  return;
}



// FUNCTION 1497105cc FUN_1497105cc body=43 status=ok
// SIG undefined FUN_1497105cc(void)

undefined8 FUN_1497105cc(undefined8 param_1,int param_2)

{
  FUN_149710886();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x1e0);
  }
  return param_1;
}



// FUNCTION 1497105f8 FUN_1497105f8 body=38 status=ok
// SIG undefined FUN_1497105f8(void)

undefined8 FUN_1497105f8(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FFloatArrayNormalizeDataflowNode",1);
  return param_2;
}



// FUNCTION 14971061e FUN_14971061e body=38 status=ok
// SIG undefined FUN_14971061e(void)

undefined8 FUN_14971061e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FloatArrayNormalize",1);
  return param_2;
}



// FUNCTION 149710644 FUN_149710644 body=38 status=ok
// SIG undefined FUN_149710644(void)

undefined8 FUN_149710644(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Float",1);
  return param_2;
}



// FUNCTION 14971066a FUN_14971066a body=32 status=ok
// SIG undefined FUN_14971066a(void)

undefined8 FUN_14971066a(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14971068a FUN_14971068a body=123 status=ok
// SIG undefined FUN_14971068a(void)

void FUN_14971068a(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc245d8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc245d8 = FUN_140002ddd(FUN_146750502,uVar1,L"FloatArrayNormalizeDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc245d8,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149710702. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149710706 FUN_149710706 body=93 status=ok
// SIG undefined FUN_149710706(void)

void FUN_149710706(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc245d8 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc245d8 = FUN_140002ddd(FUN_146750502,uVar2,L"FloatArrayNormalizeDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc245d8,param_1);
  return;
}



// FUNCTION 149710764 FUN_149710764 body=55 status=ok
// SIG undefined FUN_149710764(void)

void FUN_149710764(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc245d8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc245d8 = FUN_140002ddd(FUN_146750502,uVar1,L"FloatArrayNormalizeDataflowNode");
  }
  return;
}



// FUNCTION 14971079c FUN_14971079c body=233 status=ok
// SIG undefined FUN_14971079c(void)

ulonglong FUN_14971079c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FFloatArrayNormalizeDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149710836;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149710836;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149710836;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149710836:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 149710886 FUN_149710886 body=82 status=ok
// SIG undefined FUN_149710886(void)

void FUN_149710886(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be1e9c0;
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 1497108d8 FUN_1497108d8 body=100 status=ok
// SIG undefined FUN_1497108d8(void)

longlong FUN_1497108d8(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_144a67f5c(param_1 + 0x198,param_2 + 0x198);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x1a8,param_2 + 0x1a8);
  }
  *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(param_2 + 0x1c8);
  FUN_144a67f5c(param_1 + 0x1d0,param_2 + 0x1d0);
  return param_1;
}



// FUNCTION 14971093e FUN_14971093e body=87 status=ok
// SIG undefined FUN_14971093e(void)

void FUN_14971093e(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be1ec70;
  param_2[0x37] = 0;
  *(undefined4 *)(param_2 + 0x38) = 0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c4) = 0x3f80000000000080;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  return;
}



// FUNCTION 149710996 FUN_149710996 body=87 status=ok
// SIG undefined FUN_149710996(void)

void FUN_149710996(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be1ec70;
  param_2[0x37] = 0;
  *(undefined4 *)(param_2 + 0x38) = 0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c4) = 0x3f80000000000080;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  return;
}



// FUNCTION 149710a12 FUN_149710a12 body=63 status=ok
// SIG undefined FUN_149710a12(void)

undefined1 FUN_149710a12(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149710e48(param_2,param_3);
    param_3 = param_3 + 0x1e0;
    param_2 = param_2 + 0x1e0;
  }
  return 1;
}



// FUNCTION 149710a7a FUN_149710a7a body=59 status=ok
// SIG undefined FUN_149710a7a(void)

undefined8 FUN_149710a7a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149710ac6 FUN_149710ac6 body=40 status=ok
// SIG undefined FUN_149710ac6(void)

void FUN_149710ac6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1e0) == '\x01') {
    FUN_149710df6(param_2);
    *(undefined1 *)(param_2 + 0x1e0) = 0;
  }
  return;
}



// FUNCTION 149710b3c FUN_149710b3c body=43 status=ok
// SIG undefined FUN_149710b3c(void)

undefined8 FUN_149710b3c(undefined8 param_1,int param_2)

{
  FUN_149710df6();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x1e0);
  }
  return param_1;
}



// FUNCTION 149710b68 FUN_149710b68 body=38 status=ok
// SIG undefined FUN_149710b68(void)

undefined8 FUN_149710b68(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FVectorArrayNormalizeDataflowNode",1);
  return param_2;
}



// FUNCTION 149710b8e FUN_149710b8e body=38 status=ok
// SIG undefined FUN_149710b8e(void)

undefined8 FUN_149710b8e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"VectorArrayNormalize",1);
  return param_2;
}



// FUNCTION 149710bb4 FUN_149710bb4 body=38 status=ok
// SIG undefined FUN_149710bb4(void)

undefined8 FUN_149710bb4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Vector",1);
  return param_2;
}



// FUNCTION 149710bda FUN_149710bda body=32 status=ok
// SIG undefined FUN_149710bda(void)

undefined8 FUN_149710bda(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149710bfa FUN_149710bfa body=123 status=ok
// SIG undefined FUN_149710bfa(void)

void FUN_149710bfa(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc245f0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc245f0 = FUN_140002ddd(FUN_146750562,uVar1,L"VectorArrayNormalizeDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc245f0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149710c72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149710c76 FUN_149710c76 body=93 status=ok
// SIG undefined FUN_149710c76(void)

void FUN_149710c76(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc245f0 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc245f0 = FUN_140002ddd(FUN_146750562,uVar2,L"VectorArrayNormalizeDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc245f0,param_1);
  return;
}



// FUNCTION 149710cd4 FUN_149710cd4 body=55 status=ok
// SIG undefined FUN_149710cd4(void)

void FUN_149710cd4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc245f0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc245f0 = FUN_140002ddd(FUN_146750562,uVar1,L"VectorArrayNormalizeDataflowNode");
  }
  return;
}



// FUNCTION 149710d0c FUN_149710d0c body=233 status=ok
// SIG undefined FUN_149710d0c(void)

ulonglong FUN_149710d0c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FVectorArrayNormalizeDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149710da6;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149710da6;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149710da6;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149710da6:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 149710df6 FUN_149710df6 body=82 status=ok
// SIG undefined FUN_149710df6(void)

void FUN_149710df6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be1ec70;
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 149710e48 FUN_149710e48 body=102 status=ok
// SIG undefined FUN_149710e48(void)

longlong FUN_149710e48(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_1405b70a4(param_1 + 0x198,param_2 + 0x198);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x1a8,param_2 + 0x1a8);
  }
  *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_2 + 0x1c8);
  FUN_1405b70a4(param_1 + 0x1d0,param_2 + 0x1d0);
  return param_1;
}



// FUNCTION 149710eb0 FUN_149710eb0 body=56 status=ok
// SIG undefined FUN_149710eb0(void)

void FUN_149710eb0(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be1ef30;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  return;
}



// FUNCTION 149710ee8 FUN_149710ee8 body=56 status=ok
// SIG undefined FUN_149710ee8(void)

void FUN_149710ee8(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be1ef30;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  return;
}



// FUNCTION 149710f44 FUN_149710f44 body=63 status=ok
// SIG undefined FUN_149710f44(void)

undefined1 FUN_149710f44(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14971137a(param_2,param_3);
    param_3 = param_3 + 0x1c8;
    param_2 = param_2 + 0x1c8;
  }
  return 1;
}



// FUNCTION 149710fac FUN_149710fac body=59 status=ok
// SIG undefined FUN_149710fac(void)

undefined8 FUN_149710fac(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149710ff8 FUN_149710ff8 body=40 status=ok
// SIG undefined FUN_149710ff8(void)

void FUN_149710ff8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1c8) == '\x01') {
    FUN_149711328(param_2);
    *(undefined1 *)(param_2 + 0x1c8) = 0;
  }
  return;
}



// FUNCTION 14971106e FUN_14971106e body=43 status=ok
// SIG undefined FUN_14971106e(void)

undefined8 FUN_14971106e(undefined8 param_1,int param_2)

{
  FUN_149711328();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x1c8);
  }
  return param_1;
}



// FUNCTION 14971109a FUN_14971109a body=38 status=ok
// SIG undefined FUN_14971109a(void)

undefined8 FUN_14971109a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FUnionIntArraysDataflowNode",1);
  return param_2;
}



// FUNCTION 1497110c0 FUN_1497110c0 body=38 status=ok
// SIG undefined FUN_1497110c0(void)

undefined8 FUN_1497110c0(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"UnionIntArrays",1);
  return param_2;
}



// FUNCTION 1497110e6 FUN_1497110e6 body=38 status=ok
// SIG undefined FUN_1497110e6(void)

undefined8 FUN_1497110e6(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Utilities",1);
  return param_2;
}



// FUNCTION 14971110c FUN_14971110c body=32 status=ok
// SIG undefined FUN_14971110c(void)

undefined8 FUN_14971110c(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14971112c FUN_14971112c body=123 status=ok
// SIG undefined FUN_14971112c(void)

void FUN_14971112c(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24608 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24608 = FUN_140002ddd(FUN_1467505c2,uVar1,L"UnionIntArraysDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24608,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001497111a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 1497111a8 FUN_1497111a8 body=93 status=ok
// SIG undefined FUN_1497111a8(void)

void FUN_1497111a8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24608 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24608 = FUN_140002ddd(FUN_1467505c2,uVar2,L"UnionIntArraysDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24608,param_1);
  return;
}



// FUNCTION 149711206 FUN_149711206 body=55 status=ok
// SIG undefined FUN_149711206(void)

void FUN_149711206(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24608 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24608 = FUN_140002ddd(FUN_1467505c2,uVar1,L"UnionIntArraysDataflowNode");
  }
  return;
}



// FUNCTION 14971123e FUN_14971123e body=233 status=ok
// SIG undefined FUN_14971123e(void)

ulonglong FUN_14971123e(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FUnionIntArraysDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_1497112d8;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1497112d8;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_1497112d8;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_1497112d8:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 149711328 FUN_149711328 body=82 status=ok
// SIG undefined FUN_149711328(void)

void FUN_149711328(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be1ef30;
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 14971137a FUN_14971137a body=81 status=ok
// SIG undefined FUN_14971137a(void)

longlong FUN_14971137a(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_14054c6c4(param_1 + 0x198,param_2 + 0x198);
  FUN_14054c6c4(param_1 + 0x1a8,param_2 + 0x1a8);
  FUN_14054c6c4(param_1 + 0x1b8,param_2 + 0x1b8);
  return param_1;
}



// FUNCTION 1497113cc FUN_1497113cc body=59 status=ok
// SIG undefined FUN_1497113cc(void)

void FUN_1497113cc(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be1f1e0;
  *(undefined4 *)(param_2 + 0x33) = 0;
  *(undefined1 *)((longlong)param_2 + 0x19c) = 1;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  return;
}



// FUNCTION 149711408 FUN_149711408 body=59 status=ok
// SIG undefined FUN_149711408(void)

void FUN_149711408(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be1f1e0;
  *(undefined4 *)(param_2 + 0x33) = 0;
  *(undefined1 *)((longlong)param_2 + 0x19c) = 1;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  return;
}



// FUNCTION 149711468 FUN_149711468 body=109 status=ok
// SIG undefined FUN_149711468(void)

undefined8 FUN_149711468(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined1 *)(param_2 + 0x19c) = *(undefined1 *)(param_3 + 0x19c);
    FUN_144a67f5c(param_2 + 0x1a0,param_3 + 0x1a0);
    param_2 = param_2 + 0x1b0;
    param_3 = param_3 + 0x1b0;
  }
  return 1;
}



// FUNCTION 1497114fe FUN_1497114fe body=59 status=ok
// SIG undefined FUN_1497114fe(void)

undefined8 FUN_1497114fe(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14971154a FUN_14971154a body=67 status=ok
// SIG undefined FUN_14971154a(void)

void FUN_14971154a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x36) == '\x01') {
    *param_2 = &PTR_FUN_14be1f1e0;
    if (param_2[0x34] != 0) {
      FUN_1400020a8();
    }
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x36) = 0;
  }
  return;
}



// FUNCTION 1497115dc FUN_1497115dc body=73 status=ok
// SIG undefined FUN_1497115dc(void)

undefined8 * FUN_1497115dc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be1f1e0;
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x1b0);
  }
  return param_1;
}



// FUNCTION 149711626 FUN_149711626 body=38 status=ok
// SIG undefined FUN_149711626(void)

undefined8 FUN_149711626(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FRemoveFloatArrayElementDataflowNode",1);
  return param_2;
}



// FUNCTION 14971164c FUN_14971164c body=38 status=ok
// SIG undefined FUN_14971164c(void)

undefined8 FUN_14971164c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"RemoveFloatArrayElement",1);
  return param_2;
}



// FUNCTION 149711672 FUN_149711672 body=38 status=ok
// SIG undefined FUN_149711672(void)

undefined8 FUN_149711672(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Utilities|Array",1);
  return param_2;
}



// FUNCTION 149711698 FUN_149711698 body=32 status=ok
// SIG undefined FUN_149711698(void)

undefined8 FUN_149711698(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 1497116b8 FUN_1497116b8 body=123 status=ok
// SIG undefined FUN_1497116b8(void)

void FUN_1497116b8(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24620 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24620 = FUN_140002ddd(FUN_146750622,uVar1,L"RemoveFloatArrayElementDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24620,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149711730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149711734 FUN_149711734 body=93 status=ok
// SIG undefined FUN_149711734(void)

void FUN_149711734(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24620 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24620 = FUN_140002ddd(FUN_146750622,uVar2,L"RemoveFloatArrayElementDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24620,param_1);
  return;
}



// FUNCTION 149711792 FUN_149711792 body=55 status=ok
// SIG undefined FUN_149711792(void)

void FUN_149711792(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24620 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24620 = FUN_140002ddd(FUN_146750622,uVar1,L"RemoveFloatArrayElementDataflowNode");
  }
  return;
}



// FUNCTION 1497117ca FUN_1497117ca body=233 status=ok
// SIG undefined FUN_1497117ca(void)

ulonglong FUN_1497117ca(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FRemoveFloatArrayElementDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149711864;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149711864;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149711864;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149711864:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1497118b6 FUN_1497118b6 body=94 status=ok
// SIG undefined FUN_1497118b6(void)

void FUN_1497118b6(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be1f670;
  param_2[0x37] = 0;
  param_2[0x38] = 0x8000000000;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *(undefined1 *)(param_2 + 0x39) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1cc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1d4) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1dc) = 0;
  return;
}



// FUNCTION 149711914 FUN_149711914 body=94 status=ok
// SIG undefined FUN_149711914(void)

void FUN_149711914(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be1f670;
  param_2[0x37] = 0;
  param_2[0x38] = 0x8000000000;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *(undefined1 *)(param_2 + 0x39) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1cc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1d4) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1dc) = 0;
  return;
}



// FUNCTION 149711996 FUN_149711996 body=63 status=ok
// SIG undefined FUN_149711996(void)

undefined1 FUN_149711996(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149711dcc(param_2,param_3);
    param_3 = param_3 + 0x1e0;
    param_2 = param_2 + 0x1e0;
  }
  return 1;
}



// FUNCTION 1497119fe FUN_1497119fe body=59 status=ok
// SIG undefined FUN_1497119fe(void)

undefined8 FUN_1497119fe(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149711a4a FUN_149711a4a body=40 status=ok
// SIG undefined FUN_149711a4a(void)

void FUN_149711a4a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1e0) == '\x01') {
    FUN_149711d7a(param_2);
    *(undefined1 *)(param_2 + 0x1e0) = 0;
  }
  return;
}



// FUNCTION 149711ac0 FUN_149711ac0 body=43 status=ok
// SIG undefined FUN_149711ac0(void)

undefined8 FUN_149711ac0(undefined8 param_1,int param_2)

{
  FUN_149711d7a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x1e0);
  }
  return param_1;
}



// FUNCTION 149711aec FUN_149711aec body=38 status=ok
// SIG undefined FUN_149711aec(void)

undefined8 FUN_149711aec(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FFloatArrayComputeStatisticsDataflowNode",1);
  return param_2;
}



// FUNCTION 149711b12 FUN_149711b12 body=38 status=ok
// SIG undefined FUN_149711b12(void)

undefined8 FUN_149711b12(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FloatArrayComputeStatistics",1);
  return param_2;
}



// FUNCTION 149711b38 FUN_149711b38 body=38 status=ok
// SIG undefined FUN_149711b38(void)

undefined8 FUN_149711b38(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Utilities|Array",1);
  return param_2;
}



// FUNCTION 149711b5e FUN_149711b5e body=32 status=ok
// SIG undefined FUN_149711b5e(void)

undefined8 FUN_149711b5e(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149711b7e FUN_149711b7e body=123 status=ok
// SIG undefined FUN_149711b7e(void)

void FUN_149711b7e(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24650 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24650 = FUN_140002ddd(FUN_1467506b1,uVar1,L"FloatArrayComputeStatisticsDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24650,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149711bf6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149711bfa FUN_149711bfa body=93 status=ok
// SIG undefined FUN_149711bfa(void)

void FUN_149711bfa(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24650 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24650 = FUN_140002ddd(FUN_1467506b1,uVar2,L"FloatArrayComputeStatisticsDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24650,param_1);
  return;
}



// FUNCTION 149711c58 FUN_149711c58 body=55 status=ok
// SIG undefined FUN_149711c58(void)

void FUN_149711c58(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24650 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24650 = FUN_140002ddd(FUN_1467506b1,uVar1,L"FloatArrayComputeStatisticsDataflowNode");
  }
  return;
}



// FUNCTION 149711c90 FUN_149711c90 body=233 status=ok
// SIG undefined FUN_149711c90(void)

ulonglong FUN_149711c90(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FFloatArrayComputeStatisticsDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149711d2a;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149711d2a;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149711d2a;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149711d2a:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 149711d7a FUN_149711d7a body=82 status=ok
// SIG undefined FUN_149711d7a(void)

void FUN_149711d7a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be1f670;
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 149711dcc FUN_149711dcc body=100 status=ok
// SIG undefined FUN_149711dcc(void)

longlong FUN_149711dcc(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_144a67f5c(param_1 + 0x198,param_2 + 0x198);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x1a8,param_2 + 0x1a8);
  }
  *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(param_2 + 0x1c8);
  FUN_14054c6c4(param_1 + 0x1d0,param_2 + 0x1d0);
  return param_1;
}



// FUNCTION 149711e32 FUN_149711e32 body=63 status=ok
// SIG undefined FUN_149711e32(void)

void FUN_149711e32(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be1f930;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *(undefined4 *)(param_2 + 0x35) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1ac) = 0x3f800000;
  return;
}



// FUNCTION 149711e72 FUN_149711e72 body=63 status=ok
// SIG undefined FUN_149711e72(void)

void FUN_149711e72(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be1f930;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *(undefined4 *)(param_2 + 0x35) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1ac) = 0x3f800000;
  return;
}



// FUNCTION 149711ed6 FUN_149711ed6 body=111 status=ok
// SIG undefined FUN_149711ed6(void)

undefined8 FUN_149711ed6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    FUN_144a67f5c(param_2 + 0x198,param_3 + 0x198);
    *(undefined8 *)(param_2 + 0x1a8) = *(undefined8 *)(param_3 + 0x1a8);
    *(undefined4 *)(param_2 + 0x1b0) = *(undefined4 *)(param_3 + 0x1b0);
    param_2 = param_2 + 0x1b8;
    param_3 = param_3 + 0x1b8;
  }
  return 1;
}



// FUNCTION 149711f6e FUN_149711f6e body=59 status=ok
// SIG undefined FUN_149711f6e(void)

undefined8 FUN_149711f6e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149711fba FUN_149711fba body=67 status=ok
// SIG undefined FUN_149711fba(void)

void FUN_149711fba(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x37) == '\x01') {
    *param_2 = &PTR_FUN_14be1f930;
    if (param_2[0x33] != 0) {
      FUN_1400020a8();
    }
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x37) = 0;
  }
  return;
}



// FUNCTION 14971204c FUN_14971204c body=73 status=ok
// SIG undefined FUN_14971204c(void)

undefined8 * FUN_14971204c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be1f930;
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x1b8);
  }
  return param_1;
}



// FUNCTION 149712096 FUN_149712096 body=38 status=ok
// SIG undefined FUN_149712096(void)

undefined8 FUN_149712096(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FRandomizeFloatArrayDataflowNode",1);
  return param_2;
}



// FUNCTION 1497120bc FUN_1497120bc body=38 status=ok
// SIG undefined FUN_1497120bc(void)

undefined8 FUN_1497120bc(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"RandomizeFloatArray",1);
  return param_2;
}



// FUNCTION 1497120e2 FUN_1497120e2 body=38 status=ok
// SIG undefined FUN_1497120e2(void)

undefined8 FUN_1497120e2(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Utilities|Array",1);
  return param_2;
}



// FUNCTION 149712108 FUN_149712108 body=32 status=ok
// SIG undefined FUN_149712108(void)

undefined8 FUN_149712108(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149712128 FUN_149712128 body=123 status=ok
// SIG undefined FUN_149712128(void)

void FUN_149712128(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24668 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24668 = FUN_140002ddd(FUN_146750710,uVar1,L"RandomizeFloatArrayDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24668,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001497121a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 1497121a4 FUN_1497121a4 body=93 status=ok
// SIG undefined FUN_1497121a4(void)

void FUN_1497121a4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24668 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24668 = FUN_140002ddd(FUN_146750710,uVar2,L"RandomizeFloatArrayDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24668,param_1);
  return;
}



// FUNCTION 149712202 FUN_149712202 body=55 status=ok
// SIG undefined FUN_149712202(void)

void FUN_149712202(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24668 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24668 = FUN_140002ddd(FUN_146750710,uVar1,L"RandomizeFloatArrayDataflowNode");
  }
  return;
}



// FUNCTION 14971223a FUN_14971223a body=233 status=ok
// SIG undefined FUN_14971223a(void)

ulonglong FUN_14971223a(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FRandomizeFloatArrayDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_1497122d4;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1497122d4;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_1497122d4;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_1497122d4:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 149712326 FUN_149712326 body=68 status=ok
// SIG undefined FUN_149712326(void)

void FUN_149712326(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be1fbe0;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x49] = 0;
  param_2[0x4a] = 0;
  param_2[0x4b] = 0;
  param_2[0x4c] = 0;
  param_2[0x4d] = 0;
  param_2[0x4e] = 0;
  return;
}



// FUNCTION 14971236a FUN_14971236a body=68 status=ok
// SIG undefined FUN_14971236a(void)

void FUN_14971236a(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be1fbe0;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x49] = 0;
  param_2[0x4a] = 0;
  param_2[0x4b] = 0;
  param_2[0x4c] = 0;
  param_2[0x4d] = 0;
  param_2[0x4e] = 0;
  return;
}



// FUNCTION 1497123d2 FUN_1497123d2 body=63 status=ok
// SIG undefined FUN_1497123d2(void)

undefined1 FUN_1497123d2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14971296a(param_2,param_3);
    param_3 = param_3 + 0x278;
    param_2 = param_2 + 0x278;
  }
  return 1;
}



// FUNCTION 14971243a FUN_14971243a body=59 status=ok
// SIG undefined FUN_14971243a(void)

undefined8 FUN_14971243a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149712486 FUN_149712486 body=40 status=ok
// SIG undefined FUN_149712486(void)

void FUN_149712486(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x278) == '\x01') {
    FUN_1497128fa(param_2);
    *(undefined1 *)(param_2 + 0x278) = 0;
  }
  return;
}



// FUNCTION 1497124fc FUN_1497124fc body=43 status=ok
// SIG undefined FUN_1497124fc(void)

undefined8 FUN_1497124fc(undefined8 param_1,int param_2)

{
  FUN_1497128fa();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x278);
  }
  return param_1;
}



// FUNCTION 149712528 FUN_149712528 body=38 status=ok
// SIG undefined FUN_149712528(void)

undefined8 FUN_149712528(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FGeometryCollectionTerminalDataflowNode",1);
  return param_2;
}



// FUNCTION 14971254e FUN_14971254e body=38 status=ok
// SIG undefined FUN_14971254e(void)

undefined8 FUN_14971254e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollectionTerminal",1);
  return param_2;
}



// FUNCTION 149712574 FUN_149712574 body=38 status=ok
// SIG undefined FUN_149712574(void)

undefined8 FUN_149712574(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Terminal",1);
  return param_2;
}



// FUNCTION 14971259a FUN_14971259a body=32 status=ok
// SIG undefined FUN_14971259a(void)

undefined8 FUN_14971259a(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 1497125ba FUN_1497125ba body=123 status=ok
// SIG undefined FUN_1497125ba(void)

void FUN_1497125ba(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24680 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24680 = FUN_140002ddd(FUN_146750770,uVar1,L"GeometryCollectionTerminalDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24680,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149712632. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149712636 FUN_149712636 body=93 status=ok
// SIG undefined FUN_149712636(void)

void FUN_149712636(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24680 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24680 = FUN_140002ddd(FUN_146750770,uVar2,L"GeometryCollectionTerminalDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24680,param_1);
  return;
}



// FUNCTION 149712694 FUN_149712694 body=55 status=ok
// SIG undefined FUN_149712694(void)

void FUN_149712694(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24680 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24680 = FUN_140002ddd(FUN_146750770,uVar1,L"GeometryCollectionTerminalDataflowNode");
  }
  return;
}



// FUNCTION 1497126cc FUN_1497126cc body=233 status=ok
// SIG undefined FUN_1497126cc(void)

ulonglong FUN_1497126cc(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FGeometryCollectionTerminalDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149712766;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149712766;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149712766;
  }
  uVar2 = FUN_146fd961e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149712766:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1497127b6 FUN_1497127b6 body=323 status=ok
// SIG undefined FUN_1497127b6(void)

undefined8 * FUN_1497127b6(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1400b22c2(local_80,"SurfaceRender");
  FUN_1446ddc76(&local_88,"FGeometryCollection",1);
  FUN_1446ddc76(&local_48,"Collection",1);
  local_98 = (undefined8 *)0x0;
  local_90 = 1;
  FUN_1401b309e(&local_98,1,0);
  *local_98 = local_48;
  FUN_1496fe870(&local_70,local_80,local_88,&local_98);
  *(undefined4 *)(param_2 + 1) = 1;
  FUN_1496fcee0(param_2,0);
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = 0;
  *puVar1 = local_70;
  local_70 = 0;
  *(undefined4 *)(puVar1 + 1) = (undefined4)local_68;
  *(undefined4 *)((longlong)puVar1 + 0xc) = local_68._4_4_;
  local_68 = 0;
  puVar1[2] = local_60;
  puVar1[3] = 0;
  puVar1[3] = local_58;
  local_58 = 0;
  *(undefined4 *)(puVar1 + 4) = (undefined4)local_50;
  *(undefined4 *)((longlong)puVar1 + 0x24) = local_50._4_4_;
  local_50 = 0;
  if (local_98 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497128fa FUN_1497128fa body=112 status=ok
// SIG undefined FUN_1497128fa(void)

void FUN_1497128fa(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be1fbe0;
  FUN_140e285a6(param_1[0x4d],*(undefined4 *)(param_1 + 0x4e));
  if (param_1[0x4d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x49] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 14971296a FUN_14971296a body=98 status=ok
// SIG undefined FUN_14971296a(void)

longlong FUN_14971296a(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  FUN_1497129cc(param_1 + 0x248,param_2 + 0x248);
  FUN_140c99494(param_1 + 600,param_2 + 600);
  FUN_1474af444(param_1 + 0x268,param_2 + 0x268);
  return param_1;
}



// FUNCTION 1497129cc FUN_1497129cc body=79 status=ok
// SIG undefined FUN_1497129cc(void)

undefined8 * FUN_1497129cc(undefined8 *param_1,undefined8 *param_2)

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
      FUN_149712a1c(param_1,iVar1);
      FUN_149712a7e(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 149712a1c FUN_149712a1c body=98 status=ok
// SIG undefined FUN_149712a1c(void)

void FUN_149712a1c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 149712a7e FUN_149712a7e body=82 status=ok
// SIG undefined FUN_149712a7e(void)

void FUN_149712a7e(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 149712ad2 FUN_149712ad2 body=43 status=ok
// SIG undefined FUN_149712ad2(void)

void FUN_149712ad2(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be1fea0;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 149712afe FUN_149712afe body=43 status=ok
// SIG undefined FUN_149712afe(void)

void FUN_149712afe(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be1fea0;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 149712b4e FUN_149712b4e body=104 status=ok
// SIG undefined FUN_149712b4e(void)

undefined1 FUN_149712b4e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    lVar1 = *(longlong *)(param_3 + 0x198);
    if (DAT_14c950c29 == '\x01') {
      if (lVar1 == 0) {
        lVar1 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar1 = *(longlong *)(param_3 + 0x198);
      }
    }
    param_3 = param_3 + 0x1a0;
    *(longlong *)(param_2 + 0x198) = lVar1;
    param_2 = param_2 + 0x1a0;
  }
  return 1;
}



// FUNCTION 149712bde FUN_149712bde body=59 status=ok
// SIG undefined FUN_149712bde(void)

undefined8 FUN_149712bde(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149712c2a FUN_149712c2a body=40 status=ok
// SIG undefined FUN_149712c2a(void)

void FUN_149712c2a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a0) = 0;
  }
  return;
}



// FUNCTION 149712ca0 FUN_149712ca0 body=43 status=ok
// SIG undefined FUN_149712ca0(void)

undefined8 FUN_149712ca0(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x1a0);
  }
  return param_1;
}



// FUNCTION 149712ccc FUN_149712ccc body=38 status=ok
// SIG undefined FUN_149712ccc(void)

undefined8 FUN_149712ccc(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FGetGeometryCollectionAssetDataflowNode",1);
  return param_2;
}



// FUNCTION 149712cf2 FUN_149712cf2 body=38 status=ok
// SIG undefined FUN_149712cf2(void)

undefined8 FUN_149712cf2(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GetGeometryCollectionAsset",1);
  return param_2;
}



// FUNCTION 149712d18 FUN_149712d18 body=38 status=ok
// SIG undefined FUN_149712d18(void)

undefined8 FUN_149712d18(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Asset",1);
  return param_2;
}



// FUNCTION 149712d3e FUN_149712d3e body=32 status=ok
// SIG undefined FUN_149712d3e(void)

undefined8 FUN_149712d3e(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149712d5e FUN_149712d5e body=123 status=ok
// SIG undefined FUN_149712d5e(void)

void FUN_149712d5e(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24698 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24698 = FUN_140002ddd(FUN_1467507d0,uVar1,L"GetGeometryCollectionAssetDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24698,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149712dd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149712dda FUN_149712dda body=93 status=ok
// SIG undefined FUN_149712dda(void)

void FUN_149712dda(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24698 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24698 = FUN_140002ddd(FUN_1467507d0,uVar2,L"GetGeometryCollectionAssetDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24698,param_1);
  return;
}



// FUNCTION 149712e38 FUN_149712e38 body=55 status=ok
// SIG undefined FUN_149712e38(void)

void FUN_149712e38(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24698 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24698 = FUN_140002ddd(FUN_1467507d0,uVar1,L"GetGeometryCollectionAssetDataflowNode");
  }
  return;
}



// FUNCTION 149712e70 FUN_149712e70 body=233 status=ok
// SIG undefined FUN_149712e70(void)

ulonglong FUN_149712e70(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FGetGeometryCollectionAssetDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149712f0a;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149712f0a;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149712f0a;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149712f0a:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 149712f5c FUN_149712f5c body=53 status=ok
// SIG undefined FUN_149712f5c(void)

void FUN_149712f5c(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be20170;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  return;
}



// FUNCTION 149712f92 FUN_149712f92 body=53 status=ok
// SIG undefined FUN_149712f92(void)

void FUN_149712f92(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be20170;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  return;
}



// FUNCTION 149712fec FUN_149712fec body=63 status=ok
// SIG undefined FUN_149712fec(void)

undefined1 FUN_149712fec(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149713412(param_2,param_3);
    param_3 = param_3 + 0x1b0;
    param_2 = param_2 + 0x1b0;
  }
  return 1;
}



// FUNCTION 149713054 FUN_149713054 body=59 status=ok
// SIG undefined FUN_149713054(void)

undefined8 FUN_149713054(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497130a0 FUN_1497130a0 body=40 status=ok
// SIG undefined FUN_1497130a0(void)

void FUN_1497130a0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1b0) == '\x01') {
    FUN_1497133d0(param_2);
    *(undefined1 *)(param_2 + 0x1b0) = 0;
  }
  return;
}



// FUNCTION 149713116 FUN_149713116 body=43 status=ok
// SIG undefined FUN_149713116(void)

undefined8 FUN_149713116(undefined8 param_1,int param_2)

{
  FUN_1497133d0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x1b0);
  }
  return param_1;
}



// FUNCTION 149713142 FUN_149713142 body=38 status=ok
// SIG undefined FUN_149713142(void)

undefined8 FUN_149713142(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FGetGeometryCollectionSourcesDataflowNode",1);
  return param_2;
}



// FUNCTION 149713168 FUN_149713168 body=38 status=ok
// SIG undefined FUN_149713168(void)

undefined8 FUN_149713168(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GetGeometryCollectionSources",1);
  return param_2;
}



// FUNCTION 14971318e FUN_14971318e body=38 status=ok
// SIG undefined FUN_14971318e(void)

undefined8 FUN_14971318e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Asset",1);
  return param_2;
}



// FUNCTION 1497131b4 FUN_1497131b4 body=32 status=ok
// SIG undefined FUN_1497131b4(void)

undefined8 FUN_1497131b4(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 1497131d4 FUN_1497131d4 body=123 status=ok
// SIG undefined FUN_1497131d4(void)

void FUN_1497131d4(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc246b0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc246b0 = FUN_140002ddd(FUN_146750830,uVar1,L"GetGeometryCollectionSourcesDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc246b0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014971324c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149713250 FUN_149713250 body=93 status=ok
// SIG undefined FUN_149713250(void)

void FUN_149713250(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc246b0 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc246b0 = FUN_140002ddd(FUN_146750830,uVar2,L"GetGeometryCollectionSourcesDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc246b0,param_1);
  return;
}



// FUNCTION 1497132ae FUN_1497132ae body=55 status=ok
// SIG undefined FUN_1497132ae(void)

void FUN_1497132ae(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc246b0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc246b0 = FUN_140002ddd(FUN_146750830,uVar1,L"GetGeometryCollectionSourcesDataflowNode");
  }
  return;
}



// FUNCTION 1497132e6 FUN_1497132e6 body=233 status=ok
// SIG undefined FUN_1497132e6(void)

ulonglong FUN_1497132e6(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FGetGeometryCollectionSourcesDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149713380;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149713380;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149713380;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149713380:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1497133d0 FUN_1497133d0 body=66 status=ok
// SIG undefined FUN_1497133d0(void)

void FUN_1497133d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be20170;
  FUN_145c7a166(param_1[0x34],*(undefined4 *)(param_1 + 0x35));
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 149713412 FUN_149713412 body=91 status=ok
// SIG undefined FUN_149713412(void)

longlong FUN_149713412(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_146fc06e2();
  lVar1 = *(longlong *)(param_2 + 0x198);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x198);
    }
  }
  *(longlong *)(param_1 + 0x198) = lVar1;
  FUN_14971346e(param_1 + 0x1a0,param_2 + 0x1a0);
  return param_1;
}



// FUNCTION 14971346e FUN_14971346e body=95 status=ok
// SIG undefined FUN_14971346e(void)

undefined8 * FUN_14971346e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145c7a166(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1497134ce(param_1,iVar1);
      FUN_149713540(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1497134ce FUN_1497134ce body=114 status=ok
// SIG undefined FUN_1497134ce(void)

void FUN_1497134ce(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xb0,0x10);
    iVar2 = (int)(uVar1 / 0xb0);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xb0,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 149713540 FUN_149713540 body=60 status=ok
// SIG undefined FUN_149713540(void)

void FUN_149713540(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14971357c(param_1,param_2);
    param_1 = param_1 + 0xb0;
    param_2 = param_2 + 0xb0;
  }
  return;
}



// FUNCTION 14971357c FUN_14971357c body=330 status=ok
// SIG undefined FUN_14971357c(void)

undefined4 * FUN_14971357c(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  *(undefined8 *)(param_1 + 4) = 0;
  iVar1 = param_2[6];
  pvVar2 = *(void **)(param_2 + 4);
  param_1[6] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[7] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy(*(void **)(param_1 + 4),pvVar2,(longlong)iVar1 * 2);
  }
  puVar8 = (undefined8 *)(param_2 + 8);
  puVar9 = (undefined8 *)(param_1 + 8);
  for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  iVar1 = param_2[0x22];
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  param_1[0x22] = iVar1;
  if (iVar1 == 0) {
    param_1[0x23] = 0;
  }
  else {
    FUN_140c99534(param_1 + 0x20,iVar1,0);
    FUN_140c994e3(*(undefined8 *)(param_1 + 0x20),uVar3,iVar1);
  }
  *(undefined8 *)(param_1 + 0x24) = 0;
  iVar1 = param_2[0x26];
  pvVar2 = *(void **)(param_2 + 0x24);
  param_1[0x26] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x27] = 0;
  }
  else {
    FUN_1447c510a(param_1 + 0x24,iVar1,0);
    memcpy(*(void **)(param_1 + 0x24),pvVar2,(longlong)iVar1 << 2);
  }
  *(undefined1 *)((longlong)param_1 + 0xa2) = *(undefined1 *)((longlong)param_2 + 0xa2);
  *(undefined2 *)(param_1 + 0x28) = *(undefined2 *)(param_2 + 0x28);
  return param_1;
}



// FUNCTION 1497136c8 FUN_1497136c8 body=85 status=ok
// SIG undefined FUN_1497136c8(void)

void FUN_1497136c8(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be20430;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  FUN_1414db454(param_2 + 0x35);
  param_2[0x4b] = 0;
  param_2[0x4c] = 0;
  param_2[0x4d] = 0;
  param_2[0x4e] = 0;
  param_2[0x4f] = 0;
  param_2[0x50] = 0;
  return;
}



// FUNCTION 14971371e FUN_14971371e body=85 status=ok
// SIG undefined FUN_14971371e(void)

void FUN_14971371e(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be20430;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  FUN_1414db454(param_2 + 0x35);
  param_2[0x4b] = 0;
  param_2[0x4c] = 0;
  param_2[0x4d] = 0;
  param_2[0x4e] = 0;
  param_2[0x4f] = 0;
  param_2[0x50] = 0;
  return;
}



// FUNCTION 149713798 FUN_149713798 body=63 status=ok
// SIG undefined FUN_149713798(void)

undefined1 FUN_149713798(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149713c10(param_2,param_3);
    param_3 = param_3 + 0x288;
    param_2 = param_2 + 0x288;
  }
  return 1;
}



// FUNCTION 149713800 FUN_149713800 body=59 status=ok
// SIG undefined FUN_149713800(void)

undefined8 FUN_149713800(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14971384c FUN_14971384c body=40 status=ok
// SIG undefined FUN_14971384c(void)

void FUN_14971384c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x288) == '\x01') {
    FUN_149713b7c(param_2);
    *(undefined1 *)(param_2 + 0x288) = 0;
  }
  return;
}



// FUNCTION 1497138c2 FUN_1497138c2 body=43 status=ok
// SIG undefined FUN_1497138c2(void)

undefined8 FUN_1497138c2(undefined8 param_1,int param_2)

{
  FUN_149713b7c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x288);
  }
  return param_1;
}



// FUNCTION 1497138ee FUN_1497138ee body=38 status=ok
// SIG undefined FUN_1497138ee(void)

undefined8 FUN_1497138ee(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FCreateGeometryCollectionFromSourcesDataflowNode",1);
  return param_2;
}



// FUNCTION 149713914 FUN_149713914 body=38 status=ok
// SIG undefined FUN_149713914(void)

undefined8 FUN_149713914(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"CreateGeometryCollectionFromSources",1);
  return param_2;
}



// FUNCTION 14971393a FUN_14971393a body=38 status=ok
// SIG undefined FUN_14971393a(void)

undefined8 FUN_14971393a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Asset",1);
  return param_2;
}



// FUNCTION 149713960 FUN_149713960 body=32 status=ok
// SIG undefined FUN_149713960(void)

undefined8 FUN_149713960(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149713980 FUN_149713980 body=123 status=ok
// SIG undefined FUN_149713980(void)

void FUN_149713980(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc246c8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc246c8 =
         FUN_140002ddd(FUN_146750890,uVar1,L"CreateGeometryCollectionFromSourcesDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc246c8,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001497139f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 1497139fc FUN_1497139fc body=93 status=ok
// SIG undefined FUN_1497139fc(void)

void FUN_1497139fc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc246c8 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc246c8 =
         FUN_140002ddd(FUN_146750890,uVar2,L"CreateGeometryCollectionFromSourcesDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc246c8,param_1);
  return;
}



// FUNCTION 149713a5a FUN_149713a5a body=55 status=ok
// SIG undefined FUN_149713a5a(void)

void FUN_149713a5a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc246c8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc246c8 =
         FUN_140002ddd(FUN_146750890,uVar1,L"CreateGeometryCollectionFromSourcesDataflowNode");
  }
  return;
}



// FUNCTION 149713a92 FUN_149713a92 body=233 status=ok
// SIG undefined FUN_149713a92(void)

ulonglong FUN_149713a92(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FCreateGeometryCollectionFromSourcesDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149713b2c;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149713b2c;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149713b2c;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149713b2c:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 149713b7c FUN_149713b7c body=147 status=ok
// SIG undefined FUN_149713b7c(void)

void FUN_149713b7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be20430;
  FUN_140e285a6(param_1[0x4f],*(undefined4 *)(param_1 + 0x50));
  if (param_1[0x4f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x35);
  FUN_145c7a166(param_1[0x33],*(undefined4 *)(param_1 + 0x34));
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 149713c10 FUN_149713c10 body=115 status=ok
// SIG undefined FUN_149713c10(void)

longlong FUN_149713c10(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_14971346e(param_1 + 0x198,param_2 + 0x198);
  FUN_146ecd102(param_1 + 0x1a8,param_2 + 0x1a8);
  FUN_1497129cc(param_1 + 600,param_2 + 600);
  FUN_140c99494(param_1 + 0x268,param_2 + 0x268);
  FUN_1474af444(param_1 + 0x278,param_2 + 0x278);
  return param_1;
}



// FUNCTION 149713c84 FUN_149713c84 body=79 status=ok
// SIG undefined FUN_149713c84(void)

void FUN_149713c84(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be20700;
  param_2[0x33] = 0;
  FUN_1414db454(param_2 + 0x34);
  param_2[0x4a] = 0;
  param_2[0x4b] = 0;
  param_2[0x4c] = 0;
  param_2[0x4d] = 0;
  param_2[0x4e] = 0;
  param_2[0x4f] = 0;
  return;
}



// FUNCTION 149713cd4 FUN_149713cd4 body=79 status=ok
// SIG undefined FUN_149713cd4(void)

void FUN_149713cd4(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be20700;
  param_2[0x33] = 0;
  FUN_1414db454(param_2 + 0x34);
  param_2[0x4a] = 0;
  param_2[0x4b] = 0;
  param_2[0x4c] = 0;
  param_2[0x4d] = 0;
  param_2[0x4e] = 0;
  param_2[0x4f] = 0;
  return;
}



// FUNCTION 149713d48 FUN_149713d48 body=63 status=ok
// SIG undefined FUN_149713d48(void)

undefined1 FUN_149713d48(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1497142e0(param_2,param_3);
    param_3 = param_3 + 0x280;
    param_2 = param_2 + 0x280;
  }
  return 1;
}



// FUNCTION 149713db0 FUN_149713db0 body=59 status=ok
// SIG undefined FUN_149713db0(void)

undefined8 FUN_149713db0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149713dfc FUN_149713dfc body=40 status=ok
// SIG undefined FUN_149713dfc(void)

void FUN_149713dfc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x280) == '\x01') {
    FUN_149714270(param_2);
    *(undefined1 *)(param_2 + 0x280) = 0;
  }
  return;
}



// FUNCTION 149713e72 FUN_149713e72 body=43 status=ok
// SIG undefined FUN_149713e72(void)

undefined8 FUN_149713e72(undefined8 param_1,int param_2)

{
  FUN_149714270();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x280);
  }
  return param_1;
}



// FUNCTION 149713e9e FUN_149713e9e body=38 status=ok
// SIG undefined FUN_149713e9e(void)

undefined8 FUN_149713e9e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FGeometryCollectionToCollectionDataflowNode",1);
  return param_2;
}



// FUNCTION 149713ec4 FUN_149713ec4 body=38 status=ok
// SIG undefined FUN_149713ec4(void)

undefined8 FUN_149713ec4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollectionToCollection",1);
  return param_2;
}



// FUNCTION 149713eea FUN_149713eea body=38 status=ok
// SIG undefined FUN_149713eea(void)

undefined8 FUN_149713eea(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Asset",1);
  return param_2;
}



// FUNCTION 149713f10 FUN_149713f10 body=32 status=ok
// SIG undefined FUN_149713f10(void)

undefined8 FUN_149713f10(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149713f30 FUN_149713f30 body=123 status=ok
// SIG undefined FUN_149713f30(void)

void FUN_149713f30(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc246e0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc246e0 = FUN_140002ddd(FUN_1467508f0,uVar1,L"GeometryCollectionToCollectionDataflowNode")
    ;
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc246e0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149713fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149713fac FUN_149713fac body=93 status=ok
// SIG undefined FUN_149713fac(void)

void FUN_149713fac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc246e0 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc246e0 = FUN_140002ddd(FUN_1467508f0,uVar2,L"GeometryCollectionToCollectionDataflowNode")
    ;
  }
  FUN_1468fbe3e(uVar1,DAT_14cc246e0,param_1);
  return;
}



// FUNCTION 14971400a FUN_14971400a body=55 status=ok
// SIG undefined FUN_14971400a(void)

void FUN_14971400a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc246e0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc246e0 = FUN_140002ddd(FUN_1467508f0,uVar1,L"GeometryCollectionToCollectionDataflowNode")
    ;
  }
  return;
}



// FUNCTION 149714042 FUN_149714042 body=233 status=ok
// SIG undefined FUN_149714042(void)

ulonglong FUN_149714042(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FGeometryCollectionToCollectionDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_1497140dc;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1497140dc;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_1497140dc;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_1497140dc:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14971412c FUN_14971412c body=323 status=ok
// SIG undefined FUN_14971412c(void)

undefined8 * FUN_14971412c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1400b22c2(local_80,"SurfaceRender");
  FUN_1446ddc76(&local_88,"FGeometryCollection",1);
  FUN_1446ddc76(&local_48,"Collection",1);
  local_98 = (undefined8 *)0x0;
  local_90 = 1;
  FUN_1401b309e(&local_98,1,0);
  *local_98 = local_48;
  FUN_1496fe870(&local_70,local_80,local_88,&local_98);
  *(undefined4 *)(param_2 + 1) = 1;
  FUN_1496fcee0(param_2,0);
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = 0;
  *puVar1 = local_70;
  local_70 = 0;
  *(undefined4 *)(puVar1 + 1) = (undefined4)local_68;
  *(undefined4 *)((longlong)puVar1 + 0xc) = local_68._4_4_;
  local_68 = 0;
  puVar1[2] = local_60;
  puVar1[3] = 0;
  puVar1[3] = local_58;
  local_58 = 0;
  *(undefined4 *)(puVar1 + 4) = (undefined4)local_50;
  *(undefined4 *)((longlong)puVar1 + 0x24) = local_50._4_4_;
  local_50 = 0;
  if (local_98 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149714270 FUN_149714270 body=112 status=ok
// SIG undefined FUN_149714270(void)

void FUN_149714270(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be20700;
  FUN_140e285a6(param_1[0x4e],*(undefined4 *)(param_1 + 0x4f));
  if (param_1[0x4e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4a] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x34);
  FUN_146fc8eba(param_1);
  return;
}


