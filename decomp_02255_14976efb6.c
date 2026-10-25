// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14976efb6 FUN_14976efb6 body=38 status=ok
// SIG undefined FUN_14976efb6(void)

undefined8 FUN_14976efb6(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Float",1);
  return param_2;
}



// FUNCTION 14976efdc FUN_14976efdc body=32 status=ok
// SIG undefined FUN_14976efdc(void)

undefined8 FUN_14976efdc(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14976effc FUN_14976effc body=123 status=ok
// SIG undefined FUN_14976effc(void)

void FUN_14976effc(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25348 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25348 = FUN_140002ddd(FUN_146754f3b,uVar1,L"ClampDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25348,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014976f074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14976f078 FUN_14976f078 body=93 status=ok
// SIG undefined FUN_14976f078(void)

void FUN_14976f078(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25348 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25348 = FUN_140002ddd(FUN_146754f3b,uVar2,L"ClampDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25348,param_1);
  return;
}



// FUNCTION 14976f0d6 FUN_14976f0d6 body=55 status=ok
// SIG undefined FUN_14976f0d6(void)

void FUN_14976f0d6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25348 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25348 = FUN_140002ddd(FUN_146754f3b,uVar1,L"ClampDataflowNode");
  }
  return;
}



// FUNCTION 14976f10e FUN_14976f10e body=233 status=ok
// SIG undefined FUN_14976f10e(void)

ulonglong FUN_14976f10e(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FClampDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14976f1a8;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14976f1a8;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14976f1a8;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14976f1a8:
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



// FUNCTION 14976f1fa FUN_14976f1fa body=57 status=ok
// SIG undefined FUN_14976f1fa(void)

void FUN_14976f1fa(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be55810;
  param_2[0x33] = 0;
  param_2[0x34] = 0x3f800000;
  param_2[0x35] = 0x3f800000;
  return;
}



// FUNCTION 14976f234 FUN_14976f234 body=57 status=ok
// SIG undefined FUN_14976f234(void)

void FUN_14976f234(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be55810;
  param_2[0x33] = 0;
  param_2[0x34] = 0x3f800000;
  param_2[0x35] = 0x3f800000;
  return;
}



// FUNCTION 14976f292 FUN_14976f292 body=90 status=ok
// SIG undefined FUN_14976f292(void)

undefined8 FUN_14976f292(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    *(undefined8 *)(param_2 + 0x1a8) = *(undefined8 *)(param_3 + 0x1a8);
    param_2 = param_2 + 0x1b0;
    param_3 = param_3 + 0x1b0;
  }
  return 1;
}



// FUNCTION 14976f314 FUN_14976f314 body=59 status=ok
// SIG undefined FUN_14976f314(void)

undefined8 FUN_14976f314(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14976f360 FUN_14976f360 body=40 status=ok
// SIG undefined FUN_14976f360(void)

void FUN_14976f360(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1b0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1b0) = 0;
  }
  return;
}



// FUNCTION 14976f3d6 FUN_14976f3d6 body=38 status=ok
// SIG undefined FUN_14976f3d6(void)

undefined8 FUN_14976f3d6(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14976f3fc FUN_14976f3fc body=38 status=ok
// SIG undefined FUN_14976f3fc(void)

undefined8 FUN_14976f3fc(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FFitDataflowNode",1);
  return param_2;
}



// FUNCTION 14976f422 FUN_14976f422 body=38 status=ok
// SIG undefined FUN_14976f422(void)

undefined8 FUN_14976f422(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,&DAT_14be55931,1);
  return param_2;
}



// FUNCTION 14976f448 FUN_14976f448 body=38 status=ok
// SIG undefined FUN_14976f448(void)

undefined8 FUN_14976f448(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Float",1);
  return param_2;
}



// FUNCTION 14976f46e FUN_14976f46e body=32 status=ok
// SIG undefined FUN_14976f46e(void)

undefined8 FUN_14976f46e(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14976f48e FUN_14976f48e body=123 status=ok
// SIG undefined FUN_14976f48e(void)

void FUN_14976f48e(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25360 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25360 = FUN_140002ddd(FUN_146754fd1,uVar1,L"FitDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25360,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014976f506. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14976f50a FUN_14976f50a body=93 status=ok
// SIG undefined FUN_14976f50a(void)

void FUN_14976f50a(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25360 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25360 = FUN_140002ddd(FUN_146754fd1,uVar2,L"FitDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25360,param_1);
  return;
}



// FUNCTION 14976f568 FUN_14976f568 body=55 status=ok
// SIG undefined FUN_14976f568(void)

void FUN_14976f568(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25360 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25360 = FUN_140002ddd(FUN_146754fd1,uVar1,L"FitDataflowNode");
  }
  return;
}



// FUNCTION 14976f5a0 FUN_14976f5a0 body=233 status=ok
// SIG undefined FUN_14976f5a0(void)

ulonglong FUN_14976f5a0(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FFitDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14976f63a;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14976f63a;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14976f63a;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14976f63a:
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



// FUNCTION 14976f68c FUN_14976f68c body=57 status=ok
// SIG undefined FUN_14976f68c(void)

void FUN_14976f68c(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be55aa0;
  param_2[0x33] = 0;
  param_2[0x34] = 0x3f800000;
  param_2[0x35] = 0x3f800000;
  return;
}



// FUNCTION 14976f6c6 FUN_14976f6c6 body=57 status=ok
// SIG undefined FUN_14976f6c6(void)

void FUN_14976f6c6(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be55aa0;
  param_2[0x33] = 0;
  param_2[0x34] = 0x3f800000;
  param_2[0x35] = 0x3f800000;
  return;
}



// FUNCTION 14976f724 FUN_14976f724 body=90 status=ok
// SIG undefined FUN_14976f724(void)

undefined8 FUN_14976f724(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    *(undefined8 *)(param_2 + 0x1a8) = *(undefined8 *)(param_3 + 0x1a8);
    param_2 = param_2 + 0x1b0;
    param_3 = param_3 + 0x1b0;
  }
  return 1;
}



// FUNCTION 14976f7a6 FUN_14976f7a6 body=59 status=ok
// SIG undefined FUN_14976f7a6(void)

undefined8 FUN_14976f7a6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14976f7f2 FUN_14976f7f2 body=40 status=ok
// SIG undefined FUN_14976f7f2(void)

void FUN_14976f7f2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1b0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1b0) = 0;
  }
  return;
}



// FUNCTION 14976f868 FUN_14976f868 body=38 status=ok
// SIG undefined FUN_14976f868(void)

undefined8 FUN_14976f868(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14976f88e FUN_14976f88e body=38 status=ok
// SIG undefined FUN_14976f88e(void)

undefined8 FUN_14976f88e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FEFitDataflowNode",1);
  return param_2;
}



// FUNCTION 14976f8b4 FUN_14976f8b4 body=38 status=ok
// SIG undefined FUN_14976f8b4(void)

undefined8 FUN_14976f8b4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,&DAT_14be55bc2,1);
  return param_2;
}



// FUNCTION 14976f8da FUN_14976f8da body=38 status=ok
// SIG undefined FUN_14976f8da(void)

undefined8 FUN_14976f8da(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Float",1);
  return param_2;
}



// FUNCTION 14976f900 FUN_14976f900 body=32 status=ok
// SIG undefined FUN_14976f900(void)

undefined8 FUN_14976f900(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14976f920 FUN_14976f920 body=123 status=ok
// SIG undefined FUN_14976f920(void)

void FUN_14976f920(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25378 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25378 = FUN_140002ddd(FUN_146755067,uVar1,L"EFitDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25378,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014976f998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14976f99c FUN_14976f99c body=93 status=ok
// SIG undefined FUN_14976f99c(void)

void FUN_14976f99c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25378 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25378 = FUN_140002ddd(FUN_146755067,uVar2,L"EFitDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25378,param_1);
  return;
}



// FUNCTION 14976f9fa FUN_14976f9fa body=55 status=ok
// SIG undefined FUN_14976f9fa(void)

void FUN_14976f9fa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25378 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25378 = FUN_140002ddd(FUN_146755067,uVar1,L"EFitDataflowNode");
  }
  return;
}



// FUNCTION 14976fa32 FUN_14976fa32 body=233 status=ok
// SIG undefined FUN_14976fa32(void)

ulonglong FUN_14976fa32(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FEFitDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14976facc;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14976facc;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14976facc;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14976facc:
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



// FUNCTION 14976fb1e FUN_14976fb1e body=53 status=ok
// SIG undefined FUN_14976fb1e(void)

void FUN_14976fb1e(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be55d30;
  param_2[0x33] = 0;
  *(undefined4 *)(param_2 + 0x34) = 0;
  return;
}



// FUNCTION 14976fb54 FUN_14976fb54 body=53 status=ok
// SIG undefined FUN_14976fb54(void)

void FUN_14976fb54(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be55d30;
  param_2[0x33] = 0;
  *(undefined4 *)(param_2 + 0x34) = 0;
  return;
}



// FUNCTION 14976fbae FUN_14976fbae body=88 status=ok
// SIG undefined FUN_14976fbae(void)

undefined8 FUN_14976fbae(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    *(undefined8 *)(param_2 + 0x198) = *(undefined8 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x1a0) = *(undefined4 *)(param_3 + 0x1a0);
    param_2 = param_2 + 0x1a8;
    param_3 = param_3 + 0x1a8;
  }
  return 1;
}



// FUNCTION 14976fc2e FUN_14976fc2e body=59 status=ok
// SIG undefined FUN_14976fc2e(void)

undefined8 FUN_14976fc2e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14976fc7a FUN_14976fc7a body=40 status=ok
// SIG undefined FUN_14976fc7a(void)

void FUN_14976fc7a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 14976fcf0 FUN_14976fcf0 body=38 status=ok
// SIG undefined FUN_14976fcf0(void)

undefined8 FUN_14976fcf0(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14976fd16 FUN_14976fd16 body=38 status=ok
// SIG undefined FUN_14976fd16(void)

undefined8 FUN_14976fd16(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FPowDataflowNode",1);
  return param_2;
}



// FUNCTION 14976fd3c FUN_14976fd3c body=38 status=ok
// SIG undefined FUN_14976fd3c(void)

undefined8 FUN_14976fd3c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,&DAT_149fb8985,1);
  return param_2;
}



// FUNCTION 14976fd62 FUN_14976fd62 body=38 status=ok
// SIG undefined FUN_14976fd62(void)

undefined8 FUN_14976fd62(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Float",1);
  return param_2;
}



// FUNCTION 14976fd88 FUN_14976fd88 body=32 status=ok
// SIG undefined FUN_14976fd88(void)

undefined8 FUN_14976fd88(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14976fda8 FUN_14976fda8 body=123 status=ok
// SIG undefined FUN_14976fda8(void)

void FUN_14976fda8(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25390 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25390 = FUN_140002ddd(FUN_1467550fd,uVar1,L"PowDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25390,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014976fe20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14976fe24 FUN_14976fe24 body=93 status=ok
// SIG undefined FUN_14976fe24(void)

void FUN_14976fe24(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25390 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25390 = FUN_140002ddd(FUN_1467550fd,uVar2,L"PowDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25390,param_1);
  return;
}



// FUNCTION 14976fe82 FUN_14976fe82 body=55 status=ok
// SIG undefined FUN_14976fe82(void)

void FUN_14976fe82(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25390 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25390 = FUN_140002ddd(FUN_1467550fd,uVar1,L"PowDataflowNode");
  }
  return;
}



// FUNCTION 14976feba FUN_14976feba body=233 status=ok
// SIG undefined FUN_14976feba(void)

ulonglong FUN_14976feba(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FPowDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14976ff54;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14976ff54;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14976ff54;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14976ff54:
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



// FUNCTION 14976ffa6 FUN_14976ffa6 body=53 status=ok
// SIG undefined FUN_14976ffa6(void)

void FUN_14976ffa6(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be55fc0;
  param_2[0x33] = 0x3f800000;
  *(undefined4 *)(param_2 + 0x34) = 0;
  return;
}



// FUNCTION 14976ffdc FUN_14976ffdc body=53 status=ok
// SIG undefined FUN_14976ffdc(void)

void FUN_14976ffdc(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be55fc0;
  param_2[0x33] = 0x3f800000;
  *(undefined4 *)(param_2 + 0x34) = 0;
  return;
}



// FUNCTION 149770036 FUN_149770036 body=88 status=ok
// SIG undefined FUN_149770036(void)

undefined8 FUN_149770036(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    *(undefined8 *)(param_2 + 0x198) = *(undefined8 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x1a0) = *(undefined4 *)(param_3 + 0x1a0);
    param_2 = param_2 + 0x1a8;
    param_3 = param_3 + 0x1a8;
  }
  return 1;
}



// FUNCTION 1497700b6 FUN_1497700b6 body=59 status=ok
// SIG undefined FUN_1497700b6(void)

undefined8 FUN_1497700b6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149770102 FUN_149770102 body=40 status=ok
// SIG undefined FUN_149770102(void)

void FUN_149770102(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 149770178 FUN_149770178 body=38 status=ok
// SIG undefined FUN_149770178(void)

undefined8 FUN_149770178(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14977019e FUN_14977019e body=38 status=ok
// SIG undefined FUN_14977019e(void)

undefined8 FUN_14977019e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FLogDataflowNode",1);
  return param_2;
}



// FUNCTION 1497701c4 FUN_1497701c4 body=38 status=ok
// SIG undefined FUN_1497701c4(void)

undefined8 FUN_1497701c4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,&DAT_149fb87b5,1);
  return param_2;
}



// FUNCTION 1497701ea FUN_1497701ea body=38 status=ok
// SIG undefined FUN_1497701ea(void)

undefined8 FUN_1497701ea(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Float",1);
  return param_2;
}



// FUNCTION 149770210 FUN_149770210 body=32 status=ok
// SIG undefined FUN_149770210(void)

undefined8 FUN_149770210(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149770230 FUN_149770230 body=123 status=ok
// SIG undefined FUN_149770230(void)

void FUN_149770230(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc253a8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc253a8 = FUN_140002ddd(FUN_146755193,uVar1,L"LogDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc253a8,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001497702a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 1497702ac FUN_1497702ac body=93 status=ok
// SIG undefined FUN_1497702ac(void)

void FUN_1497702ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc253a8 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc253a8 = FUN_140002ddd(FUN_146755193,uVar2,L"LogDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc253a8,param_1);
  return;
}



// FUNCTION 14977030a FUN_14977030a body=55 status=ok
// SIG undefined FUN_14977030a(void)

void FUN_14977030a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc253a8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc253a8 = FUN_140002ddd(FUN_146755193,uVar1,L"LogDataflowNode");
  }
  return;
}



// FUNCTION 149770342 FUN_149770342 body=233 status=ok
// SIG undefined FUN_149770342(void)

ulonglong FUN_149770342(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FLogDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_1497703dc;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1497703dc;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_1497703dc;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_1497703dc:
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



// FUNCTION 14977042e FUN_14977042e body=43 status=ok
// SIG undefined FUN_14977042e(void)

void FUN_14977042e(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be56250;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 14977045a FUN_14977045a body=43 status=ok
// SIG undefined FUN_14977045a(void)

void FUN_14977045a(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be56250;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 1497704aa FUN_1497704aa body=76 status=ok
// SIG undefined FUN_1497704aa(void)

undefined8 FUN_1497704aa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    *(undefined8 *)(param_2 + 0x198) = *(undefined8 *)(param_3 + 0x198);
    param_2 = param_2 + 0x1a0;
    param_3 = param_3 + 0x1a0;
  }
  return 1;
}



// FUNCTION 14977051e FUN_14977051e body=59 status=ok
// SIG undefined FUN_14977051e(void)

undefined8 FUN_14977051e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14977056a FUN_14977056a body=40 status=ok
// SIG undefined FUN_14977056a(void)

void FUN_14977056a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a0) = 0;
  }
  return;
}



// FUNCTION 1497705e0 FUN_1497705e0 body=38 status=ok
// SIG undefined FUN_1497705e0(void)

undefined8 FUN_1497705e0(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149770606 FUN_149770606 body=38 status=ok
// SIG undefined FUN_149770606(void)

undefined8 FUN_149770606(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FLogeDataflowNode",1);
  return param_2;
}



// FUNCTION 14977062c FUN_14977062c body=38 status=ok
// SIG undefined FUN_14977062c(void)

undefined8 FUN_14977062c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,&DAT_14a94f420,1);
  return param_2;
}



// FUNCTION 149770652 FUN_149770652 body=38 status=ok
// SIG undefined FUN_149770652(void)

undefined8 FUN_149770652(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Float",1);
  return param_2;
}



// FUNCTION 149770678 FUN_149770678 body=32 status=ok
// SIG undefined FUN_149770678(void)

undefined8 FUN_149770678(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149770698 FUN_149770698 body=123 status=ok
// SIG undefined FUN_149770698(void)

void FUN_149770698(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc253c0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc253c0 = FUN_140002ddd(FUN_146755229,uVar1,L"LogeDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc253c0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149770710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149770714 FUN_149770714 body=93 status=ok
// SIG undefined FUN_149770714(void)

void FUN_149770714(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc253c0 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc253c0 = FUN_140002ddd(FUN_146755229,uVar2,L"LogeDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc253c0,param_1);
  return;
}



// FUNCTION 149770772 FUN_149770772 body=55 status=ok
// SIG undefined FUN_149770772(void)

void FUN_149770772(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc253c0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc253c0 = FUN_140002ddd(FUN_146755229,uVar1,L"LogeDataflowNode");
  }
  return;
}



// FUNCTION 1497707aa FUN_1497707aa body=233 status=ok
// SIG undefined FUN_1497707aa(void)

ulonglong FUN_1497707aa(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FLogeDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149770844;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149770844;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149770844;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149770844:
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



// FUNCTION 149770896 FUN_149770896 body=47 status=ok
// SIG undefined FUN_149770896(void)

void FUN_149770896(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be564e0;
  param_2[0x33] = 0x3f80000000000000;
  param_2[0x34] = 0;
  return;
}



// FUNCTION 1497708c6 FUN_1497708c6 body=47 status=ok
// SIG undefined FUN_1497708c6(void)

void FUN_1497708c6(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be564e0;
  param_2[0x33] = 0x3f80000000000000;
  param_2[0x34] = 0;
  return;
}



// FUNCTION 14977091a FUN_14977091a body=76 status=ok
// SIG undefined FUN_14977091a(void)

undefined1 FUN_14977091a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    param_2 = param_2 + 0x1a8;
    param_3 = param_3 + 0x1a8;
  }
  return 1;
}



// FUNCTION 14977098e FUN_14977098e body=59 status=ok
// SIG undefined FUN_14977098e(void)

undefined8 FUN_14977098e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497709da FUN_1497709da body=40 status=ok
// SIG undefined FUN_1497709da(void)

void FUN_1497709da(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 149770a50 FUN_149770a50 body=38 status=ok
// SIG undefined FUN_149770a50(void)

undefined8 FUN_149770a50(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149770a76 FUN_149770a76 body=38 status=ok
// SIG undefined FUN_149770a76(void)

undefined8 FUN_149770a76(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FLerpDataflowNode",1);
  return param_2;
}



// FUNCTION 149770a9c FUN_149770a9c body=38 status=ok
// SIG undefined FUN_149770a9c(void)

undefined8 FUN_149770a9c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,&DAT_149e3bc24,1);
  return param_2;
}



// FUNCTION 149770ac2 FUN_149770ac2 body=38 status=ok
// SIG undefined FUN_149770ac2(void)

undefined8 FUN_149770ac2(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Float",1);
  return param_2;
}



// FUNCTION 149770ae8 FUN_149770ae8 body=32 status=ok
// SIG undefined FUN_149770ae8(void)

undefined8 FUN_149770ae8(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149770b08 FUN_149770b08 body=123 status=ok
// SIG undefined FUN_149770b08(void)

void FUN_149770b08(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc253d8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc253d8 = FUN_140002ddd(FUN_1467552bf,uVar1,L"LerpDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc253d8,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149770b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149770b84 FUN_149770b84 body=93 status=ok
// SIG undefined FUN_149770b84(void)

void FUN_149770b84(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc253d8 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc253d8 = FUN_140002ddd(FUN_1467552bf,uVar2,L"LerpDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc253d8,param_1);
  return;
}



// FUNCTION 149770be2 FUN_149770be2 body=55 status=ok
// SIG undefined FUN_149770be2(void)

void FUN_149770be2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc253d8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc253d8 = FUN_140002ddd(FUN_1467552bf,uVar1,L"LerpDataflowNode");
  }
  return;
}



// FUNCTION 149770c1a FUN_149770c1a body=233 status=ok
// SIG undefined FUN_149770c1a(void)

ulonglong FUN_149770c1a(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FLerpDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149770cb4;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149770cb4;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149770cb4;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149770cb4:
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



// FUNCTION 149770d06 FUN_149770d06 body=46 status=ok
// SIG undefined FUN_149770d06(void)

void FUN_149770d06(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be56770;
  param_2[0x33] = 0;
  param_2[0x34] = 0x3f800000;
  return;
}



// FUNCTION 149770d34 FUN_149770d34 body=46 status=ok
// SIG undefined FUN_149770d34(void)

void FUN_149770d34(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be56770;
  param_2[0x33] = 0;
  param_2[0x34] = 0x3f800000;
  return;
}



// FUNCTION 149770d86 FUN_149770d86 body=76 status=ok
// SIG undefined FUN_149770d86(void)

undefined1 FUN_149770d86(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    param_2 = param_2 + 0x1a8;
    param_3 = param_3 + 0x1a8;
  }
  return 1;
}



// FUNCTION 149770dfa FUN_149770dfa body=59 status=ok
// SIG undefined FUN_149770dfa(void)

undefined8 FUN_149770dfa(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149770e46 FUN_149770e46 body=40 status=ok
// SIG undefined FUN_149770e46(void)

void FUN_149770e46(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 149770ebc FUN_149770ebc body=38 status=ok
// SIG undefined FUN_149770ebc(void)

undefined8 FUN_149770ebc(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149770ee2 FUN_149770ee2 body=38 status=ok
// SIG undefined FUN_149770ee2(void)

undefined8 FUN_149770ee2(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FWrapDataflowNode",1);
  return param_2;
}



// FUNCTION 149770f08 FUN_149770f08 body=38 status=ok
// SIG undefined FUN_149770f08(void)

undefined8 FUN_149770f08(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,&DAT_14a96b7e0,1);
  return param_2;
}



// FUNCTION 149770f2e FUN_149770f2e body=38 status=ok
// SIG undefined FUN_149770f2e(void)

undefined8 FUN_149770f2e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Float",1);
  return param_2;
}



// FUNCTION 149770f54 FUN_149770f54 body=32 status=ok
// SIG undefined FUN_149770f54(void)

undefined8 FUN_149770f54(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149770f74 FUN_149770f74 body=123 status=ok
// SIG undefined FUN_149770f74(void)

void FUN_149770f74(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc253f0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc253f0 = FUN_140002ddd(FUN_146755355,uVar1,L"WrapDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc253f0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149770fec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149770ff0 FUN_149770ff0 body=93 status=ok
// SIG undefined FUN_149770ff0(void)

void FUN_149770ff0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc253f0 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc253f0 = FUN_140002ddd(FUN_146755355,uVar2,L"WrapDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc253f0,param_1);
  return;
}



// FUNCTION 14977104e FUN_14977104e body=55 status=ok
// SIG undefined FUN_14977104e(void)

void FUN_14977104e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc253f0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc253f0 = FUN_140002ddd(FUN_146755355,uVar1,L"WrapDataflowNode");
  }
  return;
}



// FUNCTION 149771086 FUN_149771086 body=233 status=ok
// SIG undefined FUN_149771086(void)

ulonglong FUN_149771086(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FWrapDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149771120;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149771120;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149771120;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149771120:
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



// FUNCTION 149771172 FUN_149771172 body=43 status=ok
// SIG undefined FUN_149771172(void)

void FUN_149771172(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be56a00;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 14977119e FUN_14977119e body=43 status=ok
// SIG undefined FUN_14977119e(void)

void FUN_14977119e(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be56a00;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 1497711ee FUN_1497711ee body=76 status=ok
// SIG undefined FUN_1497711ee(void)

undefined8 FUN_1497711ee(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    *(undefined8 *)(param_2 + 0x198) = *(undefined8 *)(param_3 + 0x198);
    param_2 = param_2 + 0x1a0;
    param_3 = param_3 + 0x1a0;
  }
  return 1;
}



// FUNCTION 149771262 FUN_149771262 body=59 status=ok
// SIG undefined FUN_149771262(void)

undefined8 FUN_149771262(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497712ae FUN_1497712ae body=40 status=ok
// SIG undefined FUN_1497712ae(void)

void FUN_1497712ae(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a0) = 0;
  }
  return;
}



// FUNCTION 149771324 FUN_149771324 body=38 status=ok
// SIG undefined FUN_149771324(void)

undefined8 FUN_149771324(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14977134a FUN_14977134a body=38 status=ok
// SIG undefined FUN_14977134a(void)

undefined8 FUN_14977134a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FExpDataflowNode",1);
  return param_2;
}



// FUNCTION 149771370 FUN_149771370 body=38 status=ok
// SIG undefined FUN_149771370(void)

undefined8 FUN_149771370(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,&DAT_149fb8695,1);
  return param_2;
}



// FUNCTION 149771396 FUN_149771396 body=38 status=ok
// SIG undefined FUN_149771396(void)

undefined8 FUN_149771396(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Float",1);
  return param_2;
}



// FUNCTION 1497713bc FUN_1497713bc body=32 status=ok
// SIG undefined FUN_1497713bc(void)

undefined8 FUN_1497713bc(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 1497713dc FUN_1497713dc body=123 status=ok
// SIG undefined FUN_1497713dc(void)

void FUN_1497713dc(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25408 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25408 = FUN_140002ddd(FUN_1467553eb,uVar1,L"ExpDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25408,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149771454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149771458 FUN_149771458 body=93 status=ok
// SIG undefined FUN_149771458(void)

void FUN_149771458(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25408 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25408 = FUN_140002ddd(FUN_1467553eb,uVar2,L"ExpDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25408,param_1);
  return;
}



// FUNCTION 1497714b6 FUN_1497714b6 body=55 status=ok
// SIG undefined FUN_1497714b6(void)

void FUN_1497714b6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25408 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25408 = FUN_140002ddd(FUN_1467553eb,uVar1,L"ExpDataflowNode");
  }
  return;
}



// FUNCTION 1497714ee FUN_1497714ee body=233 status=ok
// SIG undefined FUN_1497714ee(void)

ulonglong FUN_1497714ee(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FExpDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149771588;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149771588;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149771588;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149771588:
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



// FUNCTION 1497715da FUN_1497715da body=43 status=ok
// SIG undefined FUN_1497715da(void)

void FUN_1497715da(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be56c90;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 149771606 FUN_149771606 body=43 status=ok
// SIG undefined FUN_149771606(void)

void FUN_149771606(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be56c90;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 149771656 FUN_149771656 body=76 status=ok
// SIG undefined FUN_149771656(void)

undefined8 FUN_149771656(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    *(undefined8 *)(param_2 + 0x198) = *(undefined8 *)(param_3 + 0x198);
    param_2 = param_2 + 0x1a0;
    param_3 = param_3 + 0x1a0;
  }
  return 1;
}



// FUNCTION 1497716ca FUN_1497716ca body=59 status=ok
// SIG undefined FUN_1497716ca(void)

undefined8 FUN_1497716ca(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149771716 FUN_149771716 body=40 status=ok
// SIG undefined FUN_149771716(void)

void FUN_149771716(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a0) = 0;
  }
  return;
}



// FUNCTION 14977178c FUN_14977178c body=38 status=ok
// SIG undefined FUN_14977178c(void)

undefined8 FUN_14977178c(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497717b2 FUN_1497717b2 body=38 status=ok
// SIG undefined FUN_1497717b2(void)

undefined8 FUN_1497717b2(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FSinDataflowNode",1);
  return param_2;
}



// FUNCTION 1497717d8 FUN_1497717d8 body=38 status=ok
// SIG undefined FUN_1497717d8(void)

undefined8 FUN_1497717d8(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,&DAT_149fb8bf5,1);
  return param_2;
}



// FUNCTION 1497717fe FUN_1497717fe body=38 status=ok
// SIG undefined FUN_1497717fe(void)

undefined8 FUN_1497717fe(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Trigonometry",1);
  return param_2;
}



// FUNCTION 149771824 FUN_149771824 body=32 status=ok
// SIG undefined FUN_149771824(void)

undefined8 FUN_149771824(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149771844 FUN_149771844 body=123 status=ok
// SIG undefined FUN_149771844(void)

void FUN_149771844(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25420 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25420 = FUN_140002ddd(FUN_146755481,uVar1,L"SinDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25420,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001497718bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 1497718c0 FUN_1497718c0 body=93 status=ok
// SIG undefined FUN_1497718c0(void)

void FUN_1497718c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25420 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25420 = FUN_140002ddd(FUN_146755481,uVar2,L"SinDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25420,param_1);
  return;
}



// FUNCTION 14977191e FUN_14977191e body=55 status=ok
// SIG undefined FUN_14977191e(void)

void FUN_14977191e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25420 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25420 = FUN_140002ddd(FUN_146755481,uVar1,L"SinDataflowNode");
  }
  return;
}



// FUNCTION 149771956 FUN_149771956 body=233 status=ok
// SIG undefined FUN_149771956(void)

ulonglong FUN_149771956(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FSinDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_1497719f0;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1497719f0;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_1497719f0;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_1497719f0:
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



// FUNCTION 149771a42 FUN_149771a42 body=43 status=ok
// SIG undefined FUN_149771a42(void)

void FUN_149771a42(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be56f30;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 149771a6e FUN_149771a6e body=43 status=ok
// SIG undefined FUN_149771a6e(void)

void FUN_149771a6e(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be56f30;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 149771abe FUN_149771abe body=76 status=ok
// SIG undefined FUN_149771abe(void)

undefined8 FUN_149771abe(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    *(undefined8 *)(param_2 + 0x198) = *(undefined8 *)(param_3 + 0x198);
    param_2 = param_2 + 0x1a0;
    param_3 = param_3 + 0x1a0;
  }
  return 1;
}



// FUNCTION 149771b32 FUN_149771b32 body=59 status=ok
// SIG undefined FUN_149771b32(void)

undefined8 FUN_149771b32(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149771b7e FUN_149771b7e body=40 status=ok
// SIG undefined FUN_149771b7e(void)

void FUN_149771b7e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a0) = 0;
  }
  return;
}



// FUNCTION 149771bf4 FUN_149771bf4 body=38 status=ok
// SIG undefined FUN_149771bf4(void)

undefined8 FUN_149771bf4(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149771c1a FUN_149771c1a body=38 status=ok
// SIG undefined FUN_149771c1a(void)

undefined8 FUN_149771c1a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FArcSinDataflowNode",1);
  return param_2;
}



// FUNCTION 149771c40 FUN_149771c40 body=38 status=ok
// SIG undefined FUN_149771c40(void)

undefined8 FUN_149771c40(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"ArcSin",1);
  return param_2;
}



// FUNCTION 149771c66 FUN_149771c66 body=38 status=ok
// SIG undefined FUN_149771c66(void)

undefined8 FUN_149771c66(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Trigonometry",1);
  return param_2;
}



// FUNCTION 149771c8c FUN_149771c8c body=32 status=ok
// SIG undefined FUN_149771c8c(void)

undefined8 FUN_149771c8c(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149771cac FUN_149771cac body=123 status=ok
// SIG undefined FUN_149771cac(void)

void FUN_149771cac(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25438 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25438 = FUN_140002ddd(FUN_146755517,uVar1,L"ArcSinDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25438,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149771d24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149771d28 FUN_149771d28 body=93 status=ok
// SIG undefined FUN_149771d28(void)

void FUN_149771d28(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25438 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25438 = FUN_140002ddd(FUN_146755517,uVar2,L"ArcSinDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25438,param_1);
  return;
}



// FUNCTION 149771d86 FUN_149771d86 body=55 status=ok
// SIG undefined FUN_149771d86(void)

void FUN_149771d86(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25438 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25438 = FUN_140002ddd(FUN_146755517,uVar1,L"ArcSinDataflowNode");
  }
  return;
}



// FUNCTION 149771dbe FUN_149771dbe body=233 status=ok
// SIG undefined FUN_149771dbe(void)

ulonglong FUN_149771dbe(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FArcSinDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149771e58;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149771e58;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149771e58;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149771e58:
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



// FUNCTION 149771eaa FUN_149771eaa body=43 status=ok
// SIG undefined FUN_149771eaa(void)

void FUN_149771eaa(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be571c0;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 149771ed6 FUN_149771ed6 body=43 status=ok
// SIG undefined FUN_149771ed6(void)

void FUN_149771ed6(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be571c0;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 149771f26 FUN_149771f26 body=76 status=ok
// SIG undefined FUN_149771f26(void)

undefined8 FUN_149771f26(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    *(undefined8 *)(param_2 + 0x198) = *(undefined8 *)(param_3 + 0x198);
    param_2 = param_2 + 0x1a0;
    param_3 = param_3 + 0x1a0;
  }
  return 1;
}



// FUNCTION 149771f9a FUN_149771f9a body=59 status=ok
// SIG undefined FUN_149771f9a(void)

undefined8 FUN_149771f9a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149771fe6 FUN_149771fe6 body=40 status=ok
// SIG undefined FUN_149771fe6(void)

void FUN_149771fe6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a0) = 0;
  }
  return;
}



// FUNCTION 14977205c FUN_14977205c body=38 status=ok
// SIG undefined FUN_14977205c(void)

undefined8 FUN_14977205c(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149772082 FUN_149772082 body=38 status=ok
// SIG undefined FUN_149772082(void)

undefined8 FUN_149772082(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FCosDataflowNode",1);
  return param_2;
}



// FUNCTION 1497720a8 FUN_1497720a8 body=38 status=ok
// SIG undefined FUN_1497720a8(void)

undefined8 FUN_1497720a8(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,&DAT_149fb8ba5,1);
  return param_2;
}



// FUNCTION 1497720ce FUN_1497720ce body=38 status=ok
// SIG undefined FUN_1497720ce(void)

undefined8 FUN_1497720ce(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Trigonometry",1);
  return param_2;
}



// FUNCTION 1497720f4 FUN_1497720f4 body=32 status=ok
// SIG undefined FUN_1497720f4(void)

undefined8 FUN_1497720f4(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149772114 FUN_149772114 body=123 status=ok
// SIG undefined FUN_149772114(void)

void FUN_149772114(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25450 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25450 = FUN_140002ddd(FUN_1467555ad,uVar1,L"CosDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25450,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014977218c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149772190 FUN_149772190 body=93 status=ok
// SIG undefined FUN_149772190(void)

void FUN_149772190(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25450 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25450 = FUN_140002ddd(FUN_1467555ad,uVar2,L"CosDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25450,param_1);
  return;
}



// FUNCTION 1497721ee FUN_1497721ee body=55 status=ok
// SIG undefined FUN_1497721ee(void)

void FUN_1497721ee(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25450 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25450 = FUN_140002ddd(FUN_1467555ad,uVar1,L"CosDataflowNode");
  }
  return;
}



// FUNCTION 149772226 FUN_149772226 body=233 status=ok
// SIG undefined FUN_149772226(void)

ulonglong FUN_149772226(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FCosDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_1497722c0;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1497722c0;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_1497722c0;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_1497722c0:
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



// FUNCTION 149772312 FUN_149772312 body=43 status=ok
// SIG undefined FUN_149772312(void)

void FUN_149772312(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be57450;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 14977233e FUN_14977233e body=43 status=ok
// SIG undefined FUN_14977233e(void)

void FUN_14977233e(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be57450;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 14977238e FUN_14977238e body=76 status=ok
// SIG undefined FUN_14977238e(void)

undefined8 FUN_14977238e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    *(undefined8 *)(param_2 + 0x198) = *(undefined8 *)(param_3 + 0x198);
    param_2 = param_2 + 0x1a0;
    param_3 = param_3 + 0x1a0;
  }
  return 1;
}



// FUNCTION 149772402 FUN_149772402 body=59 status=ok
// SIG undefined FUN_149772402(void)

undefined8 FUN_149772402(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14977244e FUN_14977244e body=40 status=ok
// SIG undefined FUN_14977244e(void)

void FUN_14977244e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a0) = 0;
  }
  return;
}



// FUNCTION 1497724c4 FUN_1497724c4 body=38 status=ok
// SIG undefined FUN_1497724c4(void)

undefined8 FUN_1497724c4(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497724ea FUN_1497724ea body=38 status=ok
// SIG undefined FUN_1497724ea(void)

undefined8 FUN_1497724ea(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FArcCosDataflowNode",1);
  return param_2;
}



// FUNCTION 149772510 FUN_149772510 body=38 status=ok
// SIG undefined FUN_149772510(void)

undefined8 FUN_149772510(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"ArcCos",1);
  return param_2;
}



// FUNCTION 149772536 FUN_149772536 body=38 status=ok
// SIG undefined FUN_149772536(void)

undefined8 FUN_149772536(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Trigonometry",1);
  return param_2;
}



// FUNCTION 14977255c FUN_14977255c body=32 status=ok
// SIG undefined FUN_14977255c(void)

undefined8 FUN_14977255c(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14977257c FUN_14977257c body=123 status=ok
// SIG undefined FUN_14977257c(void)

void FUN_14977257c(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25468 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25468 = FUN_140002ddd(FUN_146755643,uVar1,L"ArcCosDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25468,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001497725f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 1497725f8 FUN_1497725f8 body=93 status=ok
// SIG undefined FUN_1497725f8(void)

void FUN_1497725f8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25468 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25468 = FUN_140002ddd(FUN_146755643,uVar2,L"ArcCosDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25468,param_1);
  return;
}



// FUNCTION 149772656 FUN_149772656 body=55 status=ok
// SIG undefined FUN_149772656(void)

void FUN_149772656(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25468 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25468 = FUN_140002ddd(FUN_146755643,uVar1,L"ArcCosDataflowNode");
  }
  return;
}



// FUNCTION 14977268e FUN_14977268e body=233 status=ok
// SIG undefined FUN_14977268e(void)

ulonglong FUN_14977268e(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FArcCosDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149772728;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149772728;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149772728;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149772728:
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



// FUNCTION 14977277a FUN_14977277a body=43 status=ok
// SIG undefined FUN_14977277a(void)

void FUN_14977277a(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be576e0;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 1497727a6 FUN_1497727a6 body=43 status=ok
// SIG undefined FUN_1497727a6(void)

void FUN_1497727a6(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be576e0;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 1497727f6 FUN_1497727f6 body=76 status=ok
// SIG undefined FUN_1497727f6(void)

undefined8 FUN_1497727f6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    *(undefined8 *)(param_2 + 0x198) = *(undefined8 *)(param_3 + 0x198);
    param_2 = param_2 + 0x1a0;
    param_3 = param_3 + 0x1a0;
  }
  return 1;
}



// FUNCTION 14977286a FUN_14977286a body=59 status=ok
// SIG undefined FUN_14977286a(void)

undefined8 FUN_14977286a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497728b6 FUN_1497728b6 body=40 status=ok
// SIG undefined FUN_1497728b6(void)

void FUN_1497728b6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a0) = 0;
  }
  return;
}



// FUNCTION 14977292c FUN_14977292c body=38 status=ok
// SIG undefined FUN_14977292c(void)

undefined8 FUN_14977292c(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149772952 FUN_149772952 body=38 status=ok
// SIG undefined FUN_149772952(void)

undefined8 FUN_149772952(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FTanDataflowNode",1);
  return param_2;
}



// FUNCTION 149772978 FUN_149772978 body=38 status=ok
// SIG undefined FUN_149772978(void)

undefined8 FUN_149772978(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,&DAT_149fb8c35,1);
  return param_2;
}



// FUNCTION 14977299e FUN_14977299e body=38 status=ok
// SIG undefined FUN_14977299e(void)

undefined8 FUN_14977299e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Trigonometry",1);
  return param_2;
}



// FUNCTION 1497729c4 FUN_1497729c4 body=32 status=ok
// SIG undefined FUN_1497729c4(void)

undefined8 FUN_1497729c4(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 1497729e4 FUN_1497729e4 body=123 status=ok
// SIG undefined FUN_1497729e4(void)

void FUN_1497729e4(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25480 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25480 = FUN_140002ddd(FUN_1467556d9,uVar1,L"TanDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25480,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149772a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149772a60 FUN_149772a60 body=93 status=ok
// SIG undefined FUN_149772a60(void)

void FUN_149772a60(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25480 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25480 = FUN_140002ddd(FUN_1467556d9,uVar2,L"TanDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25480,param_1);
  return;
}



// FUNCTION 149772abe FUN_149772abe body=55 status=ok
// SIG undefined FUN_149772abe(void)

void FUN_149772abe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25480 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25480 = FUN_140002ddd(FUN_1467556d9,uVar1,L"TanDataflowNode");
  }
  return;
}



// FUNCTION 149772af6 FUN_149772af6 body=233 status=ok
// SIG undefined FUN_149772af6(void)

ulonglong FUN_149772af6(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FTanDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149772b90;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149772b90;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149772b90;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149772b90:
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



// FUNCTION 149772be2 FUN_149772be2 body=43 status=ok
// SIG undefined FUN_149772be2(void)

void FUN_149772be2(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be57970;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 149772c0e FUN_149772c0e body=43 status=ok
// SIG undefined FUN_149772c0e(void)

void FUN_149772c0e(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be57970;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 149772c5e FUN_149772c5e body=76 status=ok
// SIG undefined FUN_149772c5e(void)

undefined8 FUN_149772c5e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    *(undefined8 *)(param_2 + 0x198) = *(undefined8 *)(param_3 + 0x198);
    param_2 = param_2 + 0x1a0;
    param_3 = param_3 + 0x1a0;
  }
  return 1;
}



// FUNCTION 149772cd2 FUN_149772cd2 body=59 status=ok
// SIG undefined FUN_149772cd2(void)

undefined8 FUN_149772cd2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149772d1e FUN_149772d1e body=40 status=ok
// SIG undefined FUN_149772d1e(void)

void FUN_149772d1e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a0) = 0;
  }
  return;
}



// FUNCTION 149772d94 FUN_149772d94 body=38 status=ok
// SIG undefined FUN_149772d94(void)

undefined8 FUN_149772d94(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149772dba FUN_149772dba body=38 status=ok
// SIG undefined FUN_149772dba(void)

undefined8 FUN_149772dba(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FArcTanDataflowNode",1);
  return param_2;
}



// FUNCTION 149772de0 FUN_149772de0 body=38 status=ok
// SIG undefined FUN_149772de0(void)

undefined8 FUN_149772de0(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"ArcTan",1);
  return param_2;
}



// FUNCTION 149772e06 FUN_149772e06 body=38 status=ok
// SIG undefined FUN_149772e06(void)

undefined8 FUN_149772e06(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Trigonometry",1);
  return param_2;
}



// FUNCTION 149772e2c FUN_149772e2c body=32 status=ok
// SIG undefined FUN_149772e2c(void)

undefined8 FUN_149772e2c(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149772e4c FUN_149772e4c body=123 status=ok
// SIG undefined FUN_149772e4c(void)

void FUN_149772e4c(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25498 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25498 = FUN_140002ddd(FUN_14675576f,uVar1,L"ArcTanDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25498,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149772ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149772ec8 FUN_149772ec8 body=93 status=ok
// SIG undefined FUN_149772ec8(void)

void FUN_149772ec8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25498 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25498 = FUN_140002ddd(FUN_14675576f,uVar2,L"ArcTanDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25498,param_1);
  return;
}



// FUNCTION 149772f26 FUN_149772f26 body=55 status=ok
// SIG undefined FUN_149772f26(void)

void FUN_149772f26(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25498 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25498 = FUN_140002ddd(FUN_14675576f,uVar1,L"ArcTanDataflowNode");
  }
  return;
}



// FUNCTION 149772f5e FUN_149772f5e body=233 status=ok
// SIG undefined FUN_149772f5e(void)

ulonglong FUN_149772f5e(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FArcTanDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149772ff8;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149772ff8;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149772ff8;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149772ff8:
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



// FUNCTION 14977304a FUN_14977304a body=53 status=ok
// SIG undefined FUN_14977304a(void)

void FUN_14977304a(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be57c00;
  param_2[0x33] = 0;
  *(undefined4 *)(param_2 + 0x34) = 0;
  return;
}



// FUNCTION 149773080 FUN_149773080 body=53 status=ok
// SIG undefined FUN_149773080(void)

void FUN_149773080(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be57c00;
  param_2[0x33] = 0;
  *(undefined4 *)(param_2 + 0x34) = 0;
  return;
}



// FUNCTION 1497730da FUN_1497730da body=88 status=ok
// SIG undefined FUN_1497730da(void)

undefined8 FUN_1497730da(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    *(undefined8 *)(param_2 + 0x198) = *(undefined8 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x1a0) = *(undefined4 *)(param_3 + 0x1a0);
    param_2 = param_2 + 0x1a8;
    param_3 = param_3 + 0x1a8;
  }
  return 1;
}



// FUNCTION 14977315a FUN_14977315a body=59 status=ok
// SIG undefined FUN_14977315a(void)

undefined8 FUN_14977315a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497731a6 FUN_1497731a6 body=40 status=ok
// SIG undefined FUN_1497731a6(void)

void FUN_1497731a6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 14977321c FUN_14977321c body=38 status=ok
// SIG undefined FUN_14977321c(void)

undefined8 FUN_14977321c(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149773242 FUN_149773242 body=38 status=ok
// SIG undefined FUN_149773242(void)

undefined8 FUN_149773242(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FArcTan2DataflowNode",1);
  return param_2;
}



// FUNCTION 149773268 FUN_149773268 body=38 status=ok
// SIG undefined FUN_149773268(void)

undefined8 FUN_149773268(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"ArcTan2",1);
  return param_2;
}



// FUNCTION 14977328e FUN_14977328e body=38 status=ok
// SIG undefined FUN_14977328e(void)

undefined8 FUN_14977328e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Trigonometry",1);
  return param_2;
}



// FUNCTION 1497732b4 FUN_1497732b4 body=32 status=ok
// SIG undefined FUN_1497732b4(void)

undefined8 FUN_1497732b4(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 1497732d4 FUN_1497732d4 body=123 status=ok
// SIG undefined FUN_1497732d4(void)

void FUN_1497732d4(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc254b0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc254b0 = FUN_140002ddd(FUN_146755805,uVar1,L"ArcTan2DataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc254b0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014977334c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149773350 FUN_149773350 body=93 status=ok
// SIG undefined FUN_149773350(void)

void FUN_149773350(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc254b0 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc254b0 = FUN_140002ddd(FUN_146755805,uVar2,L"ArcTan2DataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc254b0,param_1);
  return;
}



// FUNCTION 1497733ae FUN_1497733ae body=55 status=ok
// SIG undefined FUN_1497733ae(void)

void FUN_1497733ae(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc254b0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc254b0 = FUN_140002ddd(FUN_146755805,uVar1,L"ArcTan2DataflowNode");
  }
  return;
}



// FUNCTION 1497733e6 FUN_1497733e6 body=233 status=ok
// SIG undefined FUN_1497733e6(void)

ulonglong FUN_1497733e6(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FArcTan2DataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149773480;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149773480;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149773480;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149773480:
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



// FUNCTION 1497734d2 FUN_1497734d2 body=46 status=ok
// SIG undefined FUN_1497734d2(void)

void FUN_1497734d2(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be57e90;
  param_2[0x33] = 0;
  param_2[0x34] = 0x3f800000;
  return;
}



// FUNCTION 149773500 FUN_149773500 body=46 status=ok
// SIG undefined FUN_149773500(void)

void FUN_149773500(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be57e90;
  param_2[0x33] = 0;
  param_2[0x34] = 0x3f800000;
  return;
}



// FUNCTION 149773552 FUN_149773552 body=76 status=ok
// SIG undefined FUN_149773552(void)

undefined1 FUN_149773552(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    param_2 = param_2 + 0x1a8;
    param_3 = param_3 + 0x1a8;
  }
  return 1;
}



// FUNCTION 1497735c6 FUN_1497735c6 body=59 status=ok
// SIG undefined FUN_1497735c6(void)

undefined8 FUN_1497735c6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149773612 FUN_149773612 body=40 status=ok
// SIG undefined FUN_149773612(void)

void FUN_149773612(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 149773688 FUN_149773688 body=38 status=ok
// SIG undefined FUN_149773688(void)

undefined8 FUN_149773688(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497736ae FUN_1497736ae body=38 status=ok
// SIG undefined FUN_1497736ae(void)

undefined8 FUN_1497736ae(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FNormalizeToRangeDataflowNode",1);
  return param_2;
}



// FUNCTION 1497736d4 FUN_1497736d4 body=38 status=ok
// SIG undefined FUN_1497736d4(void)

undefined8 FUN_1497736d4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"NormalizeToRange",1);
  return param_2;
}



// FUNCTION 1497736fa FUN_1497736fa body=38 status=ok
// SIG undefined FUN_1497736fa(void)

undefined8 FUN_1497736fa(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Float",1);
  return param_2;
}



// FUNCTION 149773720 FUN_149773720 body=32 status=ok
// SIG undefined FUN_149773720(void)

undefined8 FUN_149773720(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149773740 FUN_149773740 body=123 status=ok
// SIG undefined FUN_149773740(void)

void FUN_149773740(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc254c8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc254c8 = FUN_140002ddd(FUN_14675589b,uVar1,L"NormalizeToRangeDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc254c8,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001497737b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 1497737bc FUN_1497737bc body=93 status=ok
// SIG undefined FUN_1497737bc(void)

void FUN_1497737bc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc254c8 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc254c8 = FUN_140002ddd(FUN_14675589b,uVar2,L"NormalizeToRangeDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc254c8,param_1);
  return;
}



// FUNCTION 14977381a FUN_14977381a body=55 status=ok
// SIG undefined FUN_14977381a(void)

void FUN_14977381a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc254c8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc254c8 = FUN_140002ddd(FUN_14675589b,uVar1,L"NormalizeToRangeDataflowNode");
  }
  return;
}



// FUNCTION 149773852 FUN_149773852 body=233 status=ok
// SIG undefined FUN_149773852(void)

ulonglong FUN_149773852(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FNormalizeToRangeDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_1497738ec;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1497738ec;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_1497738ec;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_1497738ec:
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



// FUNCTION 14977393e FUN_14977393e body=75 status=ok
// SIG undefined FUN_14977393e(void)

void FUN_14977393e(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be58120;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  *(undefined4 *)(param_2 + 0x36) = 0x3f800000;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  return;
}



// FUNCTION 14977398a FUN_14977398a body=75 status=ok
// SIG undefined FUN_14977398a(void)

void FUN_14977398a(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be58120;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  *(undefined4 *)(param_2 + 0x36) = 0x3f800000;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  return;
}



// FUNCTION 1497739fa FUN_1497739fa body=118 status=ok
// SIG undefined FUN_1497739fa(void)

undefined8 FUN_1497739fa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    uVar4 = *(undefined4 *)(param_3 + 0x1a8);
    uVar5 = *(undefined4 *)(param_3 + 0x1ac);
    uVar6 = *(undefined4 *)(param_3 + 0x1b0);
    uVar7 = *(undefined4 *)(param_3 + 0x1b4);
    uVar8 = *(undefined4 *)(param_3 + 0x1b8);
    uVar9 = *(undefined4 *)(param_3 + 0x1bc);
    uVar10 = *(undefined4 *)(param_3 + 0x1c0);
    uVar11 = *(undefined4 *)(param_3 + 0x1c4);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    *(undefined4 *)(param_2 + 0x1a8) = uVar4;
    *(undefined4 *)(param_2 + 0x1ac) = uVar5;
    *(undefined4 *)(param_2 + 0x1b0) = uVar6;
    *(undefined4 *)(param_2 + 0x1b4) = uVar7;
    *(undefined4 *)(param_2 + 0x1b8) = uVar8;
    *(undefined4 *)(param_2 + 0x1bc) = uVar9;
    *(undefined4 *)(param_2 + 0x1c0) = uVar10;
    *(undefined4 *)(param_2 + 0x1c4) = uVar11;
    *(undefined8 *)(param_2 + 0x1c8) = *(undefined8 *)(param_3 + 0x1c8);
    param_2 = param_2 + 0x1d0;
    param_3 = param_3 + 0x1d0;
  }
  return 1;
}



// FUNCTION 149773a98 FUN_149773a98 body=59 status=ok
// SIG undefined FUN_149773a98(void)

undefined8 FUN_149773a98(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149773ae4 FUN_149773ae4 body=40 status=ok
// SIG undefined FUN_149773ae4(void)

void FUN_149773ae4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1d0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1d0) = 0;
  }
  return;
}



// FUNCTION 149773b5a FUN_149773b5a body=38 status=ok
// SIG undefined FUN_149773b5a(void)

undefined8 FUN_149773b5a(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149773b80 FUN_149773b80 body=38 status=ok
// SIG undefined FUN_149773b80(void)

undefined8 FUN_149773b80(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FScaleVectorDataflowNode",1);
  return param_2;
}



// FUNCTION 149773ba6 FUN_149773ba6 body=38 status=ok
// SIG undefined FUN_149773ba6(void)

undefined8 FUN_149773ba6(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"ScaleVector",1);
  return param_2;
}



// FUNCTION 149773bcc FUN_149773bcc body=38 status=ok
// SIG undefined FUN_149773bcc(void)

undefined8 FUN_149773bcc(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Vector",1);
  return param_2;
}



// FUNCTION 149773bf2 FUN_149773bf2 body=32 status=ok
// SIG undefined FUN_149773bf2(void)

undefined8 FUN_149773bf2(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149773c12 FUN_149773c12 body=123 status=ok
// SIG undefined FUN_149773c12(void)

void FUN_149773c12(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc254e0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc254e0 = FUN_140002ddd(FUN_146755931,uVar1,L"ScaleVectorDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc254e0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149773c8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149773c8e FUN_149773c8e body=93 status=ok
// SIG undefined FUN_149773c8e(void)

void FUN_149773c8e(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc254e0 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc254e0 = FUN_140002ddd(FUN_146755931,uVar2,L"ScaleVectorDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc254e0,param_1);
  return;
}



// FUNCTION 149773cec FUN_149773cec body=55 status=ok
// SIG undefined FUN_149773cec(void)

void FUN_149773cec(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc254e0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc254e0 = FUN_140002ddd(FUN_146755931,uVar1,L"ScaleVectorDataflowNode");
  }
  return;
}



// FUNCTION 149773d24 FUN_149773d24 body=233 status=ok
// SIG undefined FUN_149773d24(void)

ulonglong FUN_149773d24(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FScaleVectorDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149773dbe;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149773dbe;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149773dbe;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149773dbe:
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



// FUNCTION 149773e10 FUN_149773e10 body=66 status=ok
// SIG undefined FUN_149773e10(void)

void FUN_149773e10(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be583b0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  *(undefined4 *)(param_2 + 0x39) = 0;
  return;
}



// FUNCTION 149773e52 FUN_149773e52 body=66 status=ok
// SIG undefined FUN_149773e52(void)

void FUN_149773e52(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be583b0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  *(undefined4 *)(param_2 + 0x39) = 0;
  return;
}



// FUNCTION 149773eb8 FUN_149773eb8 body=116 status=ok
// SIG undefined FUN_149773eb8(void)

undefined8 FUN_149773eb8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    uVar4 = *(undefined4 *)(param_3 + 0x1a8);
    uVar5 = *(undefined4 *)(param_3 + 0x1ac);
    uVar6 = *(undefined4 *)(param_3 + 0x1b0);
    uVar7 = *(undefined4 *)(param_3 + 0x1b4);
    uVar8 = *(undefined4 *)(param_3 + 0x1b8);
    uVar9 = *(undefined4 *)(param_3 + 0x1bc);
    uVar10 = *(undefined4 *)(param_3 + 0x1c0);
    uVar11 = *(undefined4 *)(param_3 + 0x1c4);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    *(undefined4 *)(param_2 + 0x1a8) = uVar4;
    *(undefined4 *)(param_2 + 0x1ac) = uVar5;
    *(undefined4 *)(param_2 + 0x1b0) = uVar6;
    *(undefined4 *)(param_2 + 0x1b4) = uVar7;
    *(undefined4 *)(param_2 + 0x1b8) = uVar8;
    *(undefined4 *)(param_2 + 0x1bc) = uVar9;
    *(undefined4 *)(param_2 + 0x1c0) = uVar10;
    *(undefined4 *)(param_2 + 0x1c4) = uVar11;
    *(undefined4 *)(param_2 + 0x1c8) = *(undefined4 *)(param_3 + 0x1c8);
    param_2 = param_2 + 0x1d0;
    param_3 = param_3 + 0x1d0;
  }
  return 1;
}



// FUNCTION 149773f54 FUN_149773f54 body=59 status=ok
// SIG undefined FUN_149773f54(void)

undefined8 FUN_149773f54(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149773fa0 FUN_149773fa0 body=40 status=ok
// SIG undefined FUN_149773fa0(void)

void FUN_149773fa0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1d0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1d0) = 0;
  }
  return;
}



// FUNCTION 149774016 FUN_149774016 body=38 status=ok
// SIG undefined FUN_149774016(void)

undefined8 FUN_149774016(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


