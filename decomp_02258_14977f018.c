// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14977f018 FUN_14977f018 body=93 status=ok
// SIG undefined FUN_14977f018(void)

void FUN_14977f018(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25888 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25888 = FUN_140002ddd(FUN_146756ed9,uVar2,L"HashStringDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25888,param_1);
  return;
}



// FUNCTION 14977f076 FUN_14977f076 body=55 status=ok
// SIG undefined FUN_14977f076(void)

void FUN_14977f076(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25888 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25888 = FUN_140002ddd(FUN_146756ed9,uVar1,L"HashStringDataflowNode");
  }
  return;
}



// FUNCTION 14977f0ae FUN_14977f0ae body=233 status=ok
// SIG undefined FUN_14977f0ae(void)

ulonglong FUN_14977f0ae(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FHashStringDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14977f148;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14977f148;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14977f148;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14977f148:
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



// FUNCTION 14977f19a FUN_14977f19a body=49 status=ok
// SIG undefined FUN_14977f19a(void)

void FUN_14977f19a(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5e4a0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *(undefined8 *)((longlong)param_2 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1ac) = 0;
  return;
}



// FUNCTION 14977f1cc FUN_14977f1cc body=49 status=ok
// SIG undefined FUN_14977f1cc(void)

void FUN_14977f1cc(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5e4a0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *(undefined8 *)((longlong)param_2 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1ac) = 0;
  return;
}



// FUNCTION 14977f222 FUN_14977f222 body=90 status=ok
// SIG undefined FUN_14977f222(void)

undefined1 FUN_14977f222(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    uVar4 = *(undefined4 *)(param_3 + 0x1a4);
    uVar5 = *(undefined4 *)(param_3 + 0x1a8);
    uVar6 = *(undefined4 *)(param_3 + 0x1ac);
    uVar7 = *(undefined4 *)(param_3 + 0x1b0);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    *(undefined4 *)(param_2 + 0x1a4) = uVar4;
    *(undefined4 *)(param_2 + 0x1a8) = uVar5;
    *(undefined4 *)(param_2 + 0x1ac) = uVar6;
    *(undefined4 *)(param_2 + 0x1b0) = uVar7;
    param_2 = param_2 + 0x1b8;
    param_3 = param_3 + 0x1b8;
  }
  return 1;
}



// FUNCTION 14977f2a4 FUN_14977f2a4 body=59 status=ok
// SIG undefined FUN_14977f2a4(void)

undefined8 FUN_14977f2a4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14977f2f0 FUN_14977f2f0 body=40 status=ok
// SIG undefined FUN_14977f2f0(void)

void FUN_14977f2f0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1b8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1b8) = 0;
  }
  return;
}



// FUNCTION 14977f366 FUN_14977f366 body=38 status=ok
// SIG undefined FUN_14977f366(void)

undefined8 FUN_14977f366(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14977f38c FUN_14977f38c body=38 status=ok
// SIG undefined FUN_14977f38c(void)

undefined8 FUN_14977f38c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FHashVectorDataflowNode",1);
  return param_2;
}



// FUNCTION 14977f3b2 FUN_14977f3b2 body=38 status=ok
// SIG undefined FUN_14977f3b2(void)

undefined8 FUN_14977f3b2(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"HashVector",1);
  return param_2;
}



// FUNCTION 14977f3d8 FUN_14977f3d8 body=38 status=ok
// SIG undefined FUN_14977f3d8(void)

undefined8 FUN_14977f3d8(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Utilities|Vector",1);
  return param_2;
}



// FUNCTION 14977f3fe FUN_14977f3fe body=32 status=ok
// SIG undefined FUN_14977f3fe(void)

undefined8 FUN_14977f3fe(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14977f41e FUN_14977f41e body=123 status=ok
// SIG undefined FUN_14977f41e(void)

void FUN_14977f41e(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc258a0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc258a0 = FUN_140002ddd(FUN_146756f6f,uVar1,L"HashVectorDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc258a0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014977f496. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14977f49a FUN_14977f49a body=93 status=ok
// SIG undefined FUN_14977f49a(void)

void FUN_14977f49a(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc258a0 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc258a0 = FUN_140002ddd(FUN_146756f6f,uVar2,L"HashVectorDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc258a0,param_1);
  return;
}



// FUNCTION 14977f4f8 FUN_14977f4f8 body=55 status=ok
// SIG undefined FUN_14977f4f8(void)

void FUN_14977f4f8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc258a0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc258a0 = FUN_140002ddd(FUN_146756f6f,uVar1,L"HashVectorDataflowNode");
  }
  return;
}



// FUNCTION 14977f530 FUN_14977f530 body=233 status=ok
// SIG undefined FUN_14977f530(void)

ulonglong FUN_14977f530(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FHashVectorDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14977f5ca;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14977f5ca;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14977f5ca;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14977f5ca:
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



// FUNCTION 14977f61c FUN_14977f61c body=82 status=ok
// SIG undefined FUN_14977f61c(void)

void FUN_14977f61c(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5e740;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4b] = 0;
  param_2[0x4c] = 0x8000000000;
  param_2[0x4d] = 0;
  param_2[0x4e] = 0;
  return;
}



// FUNCTION 14977f66e FUN_14977f66e body=82 status=ok
// SIG undefined FUN_14977f66e(void)

void FUN_14977f66e(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5e740;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4b] = 0;
  param_2[0x4c] = 0x8000000000;
  param_2[0x4d] = 0;
  param_2[0x4e] = 0;
  return;
}



// FUNCTION 14977f6e4 FUN_14977f6e4 body=63 status=ok
// SIG undefined FUN_14977f6e4(void)

undefined1 FUN_14977f6e4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14977fb10(param_2,param_3);
    param_3 = param_3 + 0x278;
    param_2 = param_2 + 0x278;
  }
  return 1;
}



// FUNCTION 14977f74c FUN_14977f74c body=59 status=ok
// SIG undefined FUN_14977f74c(void)

undefined8 FUN_14977f74c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14977f798 FUN_14977f798 body=40 status=ok
// SIG undefined FUN_14977f798(void)

void FUN_14977f798(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x278) == '\x01') {
    FUN_14977fac2(param_2);
    *(undefined1 *)(param_2 + 0x278) = 0;
  }
  return;
}



// FUNCTION 14977f80e FUN_14977f80e body=38 status=ok
// SIG undefined FUN_14977f80e(void)

undefined8 FUN_14977f80e(undefined8 param_1,int param_2)

{
  FUN_14977fac2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14977f834 FUN_14977f834 body=38 status=ok
// SIG undefined FUN_14977f834(void)

undefined8 FUN_14977f834(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FGetBoundingBoxesFromCollectionDataflowNode",1);
  return param_2;
}



// FUNCTION 14977f85a FUN_14977f85a body=38 status=ok
// SIG undefined FUN_14977f85a(void)

undefined8 FUN_14977f85a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GetBoundingBoxesFromCollection",1);
  return param_2;
}



// FUNCTION 14977f880 FUN_14977f880 body=38 status=ok
// SIG undefined FUN_14977f880(void)

undefined8 FUN_14977f880(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Utilities",1);
  return param_2;
}



// FUNCTION 14977f8a6 FUN_14977f8a6 body=32 status=ok
// SIG undefined FUN_14977f8a6(void)

undefined8 FUN_14977f8a6(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14977f8c6 FUN_14977f8c6 body=123 status=ok
// SIG undefined FUN_14977f8c6(void)

void FUN_14977f8c6(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc258b8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc258b8 = FUN_140002ddd(FUN_146757005,uVar1,L"GetBoundingBoxesFromCollectionDataflowNode")
    ;
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc258b8,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014977f93e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14977f942 FUN_14977f942 body=93 status=ok
// SIG undefined FUN_14977f942(void)

void FUN_14977f942(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc258b8 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc258b8 = FUN_140002ddd(FUN_146757005,uVar2,L"GetBoundingBoxesFromCollectionDataflowNode")
    ;
  }
  FUN_1468fbe3e(uVar1,DAT_14cc258b8,param_1);
  return;
}



// FUNCTION 14977f9a0 FUN_14977f9a0 body=55 status=ok
// SIG undefined FUN_14977f9a0(void)

void FUN_14977f9a0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc258b8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc258b8 = FUN_140002ddd(FUN_146757005,uVar1,L"GetBoundingBoxesFromCollectionDataflowNode")
    ;
  }
  return;
}



// FUNCTION 14977f9d8 FUN_14977f9d8 body=233 status=ok
// SIG undefined FUN_14977f9d8(void)

ulonglong FUN_14977f9d8(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FGetBoundingBoxesFromCollectionDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14977fa72;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14977fa72;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14977fa72;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14977fa72:
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



// FUNCTION 14977fac2 FUN_14977fac2 body=77 status=ok
// SIG undefined FUN_14977fac2(void)

void FUN_14977fac2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be5e740;
  if (param_1[0x4d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 14977fb10 FUN_14977fb10 body=86 status=ok
// SIG undefined FUN_14977fb10(void)

longlong FUN_14977fb10(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x248,param_2 + 0x248);
  }
  FUN_1478cae74(param_1 + 0x268,param_2 + 0x268);
  return param_1;
}



// FUNCTION 14977fb68 FUN_14977fb68 body=54 status=ok
// SIG undefined FUN_14977fb68(void)

void FUN_14977fb68(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5ea00;
  FUN_1414db454(param_2 + 0x33);
  *(undefined4 *)(param_2 + 0x49) = 0xffffffff;
  return;
}



// FUNCTION 14977fb9e FUN_14977fb9e body=54 status=ok
// SIG undefined FUN_14977fb9e(void)

void FUN_14977fb9e(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5ea00;
  FUN_1414db454(param_2 + 0x33);
  *(undefined4 *)(param_2 + 0x49) = 0xffffffff;
  return;
}



// FUNCTION 14977fbf8 FUN_14977fbf8 body=97 status=ok
// SIG undefined FUN_14977fbf8(void)

undefined8 FUN_14977fbf8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    FUN_146ecd102(param_2 + 0x198,param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x248) = *(undefined4 *)(param_3 + 0x248);
    param_2 = param_2 + 0x250;
    param_3 = param_3 + 0x250;
  }
  return 1;
}



// FUNCTION 14977fc82 FUN_14977fc82 body=59 status=ok
// SIG undefined FUN_14977fc82(void)

undefined8 FUN_14977fc82(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14977fcce FUN_14977fcce body=62 status=ok
// SIG undefined FUN_14977fcce(void)

void FUN_14977fcce(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x4a) == '\x01') {
    *param_2 = &PTR_FUN_14be5ea00;
    FUN_14054b30a(param_2 + 0x33);
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x4a) = 0;
  }
  return;
}



// FUNCTION 14977fd5a FUN_14977fd5a body=63 status=ok
// SIG undefined FUN_14977fd5a(void)

undefined8 * FUN_14977fd5a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be5ea00;
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14977fd9a FUN_14977fd9a body=38 status=ok
// SIG undefined FUN_14977fd9a(void)

undefined8 FUN_14977fd9a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FGetRootIndexFromCollectionDataflowNode",1);
  return param_2;
}



// FUNCTION 14977fdc0 FUN_14977fdc0 body=38 status=ok
// SIG undefined FUN_14977fdc0(void)

undefined8 FUN_14977fdc0(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GetRootIndexFromCollection",1);
  return param_2;
}



// FUNCTION 14977fde6 FUN_14977fde6 body=38 status=ok
// SIG undefined FUN_14977fde6(void)

undefined8 FUN_14977fde6(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Utilities",1);
  return param_2;
}



// FUNCTION 14977fe0c FUN_14977fe0c body=32 status=ok
// SIG undefined FUN_14977fe0c(void)

undefined8 FUN_14977fe0c(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14977fe2c FUN_14977fe2c body=123 status=ok
// SIG undefined FUN_14977fe2c(void)

void FUN_14977fe2c(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc258d0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc258d0 = FUN_140002ddd(FUN_14675709b,uVar1,L"GetRootIndexFromCollectionDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc258d0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014977fea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14977fea8 FUN_14977fea8 body=93 status=ok
// SIG undefined FUN_14977fea8(void)

void FUN_14977fea8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc258d0 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc258d0 = FUN_140002ddd(FUN_14675709b,uVar2,L"GetRootIndexFromCollectionDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc258d0,param_1);
  return;
}



// FUNCTION 14977ff06 FUN_14977ff06 body=55 status=ok
// SIG undefined FUN_14977ff06(void)

void FUN_14977ff06(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc258d0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc258d0 = FUN_140002ddd(FUN_14675709b,uVar1,L"GetRootIndexFromCollectionDataflowNode");
  }
  return;
}



// FUNCTION 14977ff3e FUN_14977ff3e body=233 status=ok
// SIG undefined FUN_14977ff3e(void)

ulonglong FUN_14977ff3e(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FGetRootIndexFromCollectionDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14977ffd8;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14977ffd8;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14977ffd8;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14977ffd8:
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



// FUNCTION 14978002a FUN_14978002a body=82 status=ok
// SIG undefined FUN_14978002a(void)

void FUN_14978002a(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5ecc0;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4b] = 0;
  param_2[0x4c] = 0x8000000000;
  param_2[0x4d] = 0;
  param_2[0x4e] = 0;
  return;
}



// FUNCTION 14978007c FUN_14978007c body=82 status=ok
// SIG undefined FUN_14978007c(void)

void FUN_14978007c(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5ecc0;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4b] = 0;
  param_2[0x4c] = 0x8000000000;
  param_2[0x4d] = 0;
  param_2[0x4e] = 0;
  return;
}



// FUNCTION 1497800f2 FUN_1497800f2 body=63 status=ok
// SIG undefined FUN_1497800f2(void)

undefined1 FUN_1497800f2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14978051e(param_2,param_3);
    param_3 = param_3 + 0x278;
    param_2 = param_2 + 0x278;
  }
  return 1;
}



// FUNCTION 14978015a FUN_14978015a body=59 status=ok
// SIG undefined FUN_14978015a(void)

undefined8 FUN_14978015a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497801a6 FUN_1497801a6 body=40 status=ok
// SIG undefined FUN_1497801a6(void)

void FUN_1497801a6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x278) == '\x01') {
    FUN_1497804d0(param_2);
    *(undefined1 *)(param_2 + 0x278) = 0;
  }
  return;
}



// FUNCTION 14978021c FUN_14978021c body=38 status=ok
// SIG undefined FUN_14978021c(void)

undefined8 FUN_14978021c(undefined8 param_1,int param_2)

{
  FUN_1497804d0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149780242 FUN_149780242 body=38 status=ok
// SIG undefined FUN_149780242(void)

undefined8 FUN_149780242(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FGetCentroidsFromCollectionDataflowNode",1);
  return param_2;
}



// FUNCTION 149780268 FUN_149780268 body=38 status=ok
// SIG undefined FUN_149780268(void)

undefined8 FUN_149780268(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GetCentroidsFromCollection",1);
  return param_2;
}



// FUNCTION 14978028e FUN_14978028e body=38 status=ok
// SIG undefined FUN_14978028e(void)

undefined8 FUN_14978028e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Utilities",1);
  return param_2;
}



// FUNCTION 1497802b4 FUN_1497802b4 body=32 status=ok
// SIG undefined FUN_1497802b4(void)

undefined8 FUN_1497802b4(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 1497802d4 FUN_1497802d4 body=123 status=ok
// SIG undefined FUN_1497802d4(void)

void FUN_1497802d4(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc258e8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc258e8 = FUN_140002ddd(FUN_146757131,uVar1,L"GetCentroidsFromCollectionDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc258e8,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014978034c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149780350 FUN_149780350 body=93 status=ok
// SIG undefined FUN_149780350(void)

void FUN_149780350(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc258e8 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc258e8 = FUN_140002ddd(FUN_146757131,uVar2,L"GetCentroidsFromCollectionDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc258e8,param_1);
  return;
}



// FUNCTION 1497803ae FUN_1497803ae body=55 status=ok
// SIG undefined FUN_1497803ae(void)

void FUN_1497803ae(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc258e8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc258e8 = FUN_140002ddd(FUN_146757131,uVar1,L"GetCentroidsFromCollectionDataflowNode");
  }
  return;
}



// FUNCTION 1497803e6 FUN_1497803e6 body=233 status=ok
// SIG undefined FUN_1497803e6(void)

ulonglong FUN_1497803e6(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FGetCentroidsFromCollectionDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149780480;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149780480;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149780480;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149780480:
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



// FUNCTION 1497804d0 FUN_1497804d0 body=77 status=ok
// SIG undefined FUN_1497804d0(void)

void FUN_1497804d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be5ecc0;
  if (param_1[0x4d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 14978051e FUN_14978051e body=86 status=ok
// SIG undefined FUN_14978051e(void)

longlong FUN_14978051e(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x248,param_2 + 0x248);
  }
  FUN_1405b70a4(param_1 + 0x268,param_2 + 0x268);
  return param_1;
}



// FUNCTION 1497805aa FUN_1497805aa body=114 status=ok
// SIG undefined FUN_1497805aa(void)

undefined8 FUN_1497805aa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    FUN_146ecd102(param_2 + 0x198,param_3 + 0x198);
    memcpy((void *)(param_2 + 0x248),(void *)(param_3 + 0x248),0x89);
    param_2 = param_2 + 0x2d8;
    param_3 = param_3 + 0x2d8;
  }
  return 1;
}



// FUNCTION 149780644 FUN_149780644 body=59 status=ok
// SIG undefined FUN_149780644(void)

undefined8 FUN_149780644(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149780690 FUN_149780690 body=62 status=ok
// SIG undefined FUN_149780690(void)

void FUN_149780690(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x5b) == '\x01') {
    *param_2 = &PTR_FUN_14be5f0e0;
    FUN_14054b30a(param_2 + 0x33);
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x5b) = 0;
  }
  return;
}



// FUNCTION 14978071c FUN_14978071c body=148 status=ok
// SIG undefined FUN_14978071c(void)

undefined8 * FUN_14978071c(undefined8 *param_1)

{
  FUN_146fc02b8();
  *param_1 = &PTR_FUN_14be5f0e0;
  FUN_1414db454(param_1 + 0x33);
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x251) = 0;
  *(undefined8 *)((longlong)param_1 + 0x259) = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0x3ff0000000000000;
  param_1[0x51] = 0x3ff0000000000000;
  param_1[0x52] = 0x3ff0000000000000;
  *(undefined4 *)(param_1 + 0x53) = 0x3f800000;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  return param_1;
}



// FUNCTION 1497807b0 FUN_1497807b0 body=63 status=ok
// SIG undefined FUN_1497807b0(void)

undefined8 * FUN_1497807b0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be5f0e0;
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497807f0 FUN_1497807f0 body=38 status=ok
// SIG undefined FUN_1497807f0(void)

undefined8 FUN_1497807f0(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FTransformCollectionDataflowNode",1);
  return param_2;
}



// FUNCTION 149780816 FUN_149780816 body=38 status=ok
// SIG undefined FUN_149780816(void)

undefined8 FUN_149780816(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"TransformCollection",1);
  return param_2;
}



// FUNCTION 14978083c FUN_14978083c body=38 status=ok
// SIG undefined FUN_14978083c(void)

undefined8 FUN_14978083c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Transform",1);
  return param_2;
}



// FUNCTION 149780862 FUN_149780862 body=32 status=ok
// SIG undefined FUN_149780862(void)

undefined8 FUN_149780862(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149780882 FUN_149780882 body=123 status=ok
// SIG undefined FUN_149780882(void)

void FUN_149780882(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25918 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25918 = FUN_140002ddd(FUN_1467571f7,uVar1,L"TransformCollectionDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25918,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001497808fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 1497808fe FUN_1497808fe body=93 status=ok
// SIG undefined FUN_1497808fe(void)

void FUN_1497808fe(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25918 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25918 = FUN_140002ddd(FUN_1467571f7,uVar2,L"TransformCollectionDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25918,param_1);
  return;
}



// FUNCTION 14978095c FUN_14978095c body=55 status=ok
// SIG undefined FUN_14978095c(void)

void FUN_14978095c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25918 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25918 = FUN_140002ddd(FUN_1467571f7,uVar1,L"TransformCollectionDataflowNode");
  }
  return;
}



// FUNCTION 149780994 FUN_149780994 body=233 status=ok
// SIG undefined FUN_149780994(void)

ulonglong FUN_149780994(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FTransformCollectionDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149780a2e;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149780a2e;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149780a2e;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149780a2e:
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



// FUNCTION 149780a7e FUN_149780a7e body=323 status=ok
// SIG undefined FUN_149780a7e(void)

undefined8 * FUN_149780a7e(undefined8 param_1,undefined8 *param_2)

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



// FUNCTION 149780bc4 FUN_149780bc4 body=46 status=ok
// SIG undefined FUN_149780bc4(void)

void FUN_149780bc4(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5f3a0;
  FUN_1414db454(param_2 + 0x33);
  return;
}



// FUNCTION 149780bf2 FUN_149780bf2 body=46 status=ok
// SIG undefined FUN_149780bf2(void)

void FUN_149780bf2(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5f3a0;
  FUN_1414db454(param_2 + 0x33);
  return;
}



// FUNCTION 149780c44 FUN_149780c44 body=85 status=ok
// SIG undefined FUN_149780c44(void)

undefined1 FUN_149780c44(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    FUN_146ecd102(param_2 + 0x198,param_3 + 0x198);
    param_2 = param_2 + 0x248;
    param_3 = param_3 + 0x248;
  }
  return 1;
}



// FUNCTION 149780cc2 FUN_149780cc2 body=59 status=ok
// SIG undefined FUN_149780cc2(void)

undefined8 FUN_149780cc2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149780d0e FUN_149780d0e body=62 status=ok
// SIG undefined FUN_149780d0e(void)

void FUN_149780d0e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x49) == '\x01') {
    *param_2 = &PTR_FUN_14be5f3a0;
    FUN_14054b30a(param_2 + 0x33);
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x49) = 0;
  }
  return;
}



// FUNCTION 149780d9a FUN_149780d9a body=63 status=ok
// SIG undefined FUN_149780d9a(void)

undefined8 * FUN_149780d9a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be5f3a0;
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149780dda FUN_149780dda body=38 status=ok
// SIG undefined FUN_149780dda(void)

undefined8 FUN_149780dda(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FBakeTransformsInCollectionDataflowNode",1);
  return param_2;
}



// FUNCTION 149780e00 FUN_149780e00 body=38 status=ok
// SIG undefined FUN_149780e00(void)

undefined8 FUN_149780e00(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"BakeTransformsInCollection",1);
  return param_2;
}



// FUNCTION 149780e26 FUN_149780e26 body=38 status=ok
// SIG undefined FUN_149780e26(void)

undefined8 FUN_149780e26(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Transform",1);
  return param_2;
}



// FUNCTION 149780e4c FUN_149780e4c body=32 status=ok
// SIG undefined FUN_149780e4c(void)

undefined8 FUN_149780e4c(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149780e6c FUN_149780e6c body=123 status=ok
// SIG undefined FUN_149780e6c(void)

void FUN_149780e6c(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25930 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25930 = FUN_140002ddd(FUN_14675728d,uVar1,L"BakeTransformsInCollectionDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25930,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149780ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149780ee8 FUN_149780ee8 body=93 status=ok
// SIG undefined FUN_149780ee8(void)

void FUN_149780ee8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25930 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25930 = FUN_140002ddd(FUN_14675728d,uVar2,L"BakeTransformsInCollectionDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25930,param_1);
  return;
}



// FUNCTION 149780f46 FUN_149780f46 body=55 status=ok
// SIG undefined FUN_149780f46(void)

void FUN_149780f46(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25930 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25930 = FUN_140002ddd(FUN_14675728d,uVar1,L"BakeTransformsInCollectionDataflowNode");
  }
  return;
}



// FUNCTION 149780f7e FUN_149780f7e body=233 status=ok
// SIG undefined FUN_149780f7e(void)

ulonglong FUN_149780f7e(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FBakeTransformsInCollectionDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149781018;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149781018;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149781018;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149781018:
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



// FUNCTION 149781068 FUN_149781068 body=323 status=ok
// SIG undefined FUN_149781068(void)

undefined8 * FUN_149781068(undefined8 param_1,undefined8 *param_2)

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



// FUNCTION 1497811ae FUN_1497811ae body=143 status=ok
// SIG undefined FUN_1497811ae(void)

void FUN_1497811ae(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5f660;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  *(undefined1 *)(param_2 + 0x37) = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0x3ff0000000000000;
  param_2[0x3c] = 0x3ff0000000000000;
  param_2[0x3d] = 0x3ff0000000000000;
  *(undefined4 *)(param_2 + 0x3e) = 0x3f800000;
  param_2[0x3f] = 0;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  param_2[0x42] = 0;
  param_2[0x43] = 0;
  param_2[0x44] = 0;
  *(undefined1 *)(param_2 + 0x45) = 0;
  return;
}



// FUNCTION 14978123e FUN_14978123e body=143 status=ok
// SIG undefined FUN_14978123e(void)

void FUN_14978123e(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5f660;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  *(undefined1 *)(param_2 + 0x37) = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0x3ff0000000000000;
  param_2[0x3c] = 0x3ff0000000000000;
  param_2[0x3d] = 0x3ff0000000000000;
  *(undefined4 *)(param_2 + 0x3e) = 0x3f800000;
  param_2[0x3f] = 0;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  param_2[0x42] = 0;
  param_2[0x43] = 0;
  param_2[0x44] = 0;
  *(undefined1 *)(param_2 + 0x45) = 0;
  return;
}



// FUNCTION 1497812f2 FUN_1497812f2 body=63 status=ok
// SIG undefined FUN_1497812f2(void)

undefined1 FUN_1497812f2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149781814(param_2,param_3);
    param_3 = param_3 + 0x230;
    param_2 = param_2 + 0x230;
  }
  return 1;
}



// FUNCTION 14978135a FUN_14978135a body=59 status=ok
// SIG undefined FUN_14978135a(void)

undefined8 FUN_14978135a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497813a6 FUN_1497813a6 body=40 status=ok
// SIG undefined FUN_1497813a6(void)

void FUN_1497813a6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x230) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x230) = 0;
  }
  return;
}



// FUNCTION 14978141c FUN_14978141c body=38 status=ok
// SIG undefined FUN_14978141c(void)

undefined8 FUN_14978141c(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149781442 FUN_149781442 body=38 status=ok
// SIG undefined FUN_149781442(void)

undefined8 FUN_149781442(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FTransformMeshDataflowNode",1);
  return param_2;
}



// FUNCTION 149781468 FUN_149781468 body=38 status=ok
// SIG undefined FUN_149781468(void)

undefined8 FUN_149781468(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"TransformMesh",1);
  return param_2;
}



// FUNCTION 14978148e FUN_14978148e body=38 status=ok
// SIG undefined FUN_14978148e(void)

undefined8 FUN_14978148e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Transform",1);
  return param_2;
}



// FUNCTION 1497814b4 FUN_1497814b4 body=32 status=ok
// SIG undefined FUN_1497814b4(void)

undefined8 FUN_1497814b4(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 1497814d4 FUN_1497814d4 body=123 status=ok
// SIG undefined FUN_1497814d4(void)

void FUN_1497814d4(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25948 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25948 = FUN_140002ddd(FUN_146757323,uVar1,L"TransformMeshDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25948,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014978154c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149781550 FUN_149781550 body=93 status=ok
// SIG undefined FUN_149781550(void)

void FUN_149781550(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25948 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25948 = FUN_140002ddd(FUN_146757323,uVar2,L"TransformMeshDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25948,param_1);
  return;
}



// FUNCTION 1497815ae FUN_1497815ae body=55 status=ok
// SIG undefined FUN_1497815ae(void)

void FUN_1497815ae(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25948 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25948 = FUN_140002ddd(FUN_146757323,uVar1,L"TransformMeshDataflowNode");
  }
  return;
}



// FUNCTION 1497815e6 FUN_1497815e6 body=233 status=ok
// SIG undefined FUN_1497815e6(void)

ulonglong FUN_1497815e6(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FTransformMeshDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149781680;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149781680;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149781680;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149781680:
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



// FUNCTION 1497816d0 FUN_1497816d0 body=323 status=ok
// SIG undefined FUN_1497816d0(void)

undefined8 * FUN_1497816d0(undefined8 param_1,undefined8 *param_2)

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
  FUN_1446ddc76(&local_88,"FDynamicMesh3",1);
  FUN_1446ddc76(&local_48,&DAT_14a1ac36b,1);
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



// FUNCTION 149781814 FUN_149781814 body=97 status=ok
// SIG undefined FUN_149781814(void)

longlong FUN_149781814(longlong param_1,longlong param_2)

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
  memcpy((void *)(param_1 + 0x1a0),(void *)(param_2 + 0x1a0),0x89);
  return param_1;
}



// FUNCTION 149781876 FUN_149781876 body=57 status=ok
// SIG undefined FUN_149781876(void)

void FUN_149781876(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5fa40;
  *(undefined1 *)(param_2 + 0x33) = 0;
  *(undefined1 *)((longlong)param_2 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x19c) = 0;
  return;
}



// FUNCTION 1497818b0 FUN_1497818b0 body=57 status=ok
// SIG undefined FUN_1497818b0(void)

void FUN_1497818b0(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5fa40;
  *(undefined1 *)(param_2 + 0x33) = 0;
  *(undefined1 *)((longlong)param_2 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x19c) = 0;
  return;
}



// FUNCTION 14978190e FUN_14978190e body=90 status=ok
// SIG undefined FUN_14978190e(void)

undefined8 FUN_14978190e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined8 *)(param_3 + 0x19d);
    *(undefined8 *)(param_2 + 0x198) = *(undefined8 *)(param_3 + 0x198);
    *(undefined8 *)(param_2 + 0x19d) = uVar1;
    param_2 = param_2 + 0x1a8;
    param_3 = param_3 + 0x1a8;
  }
  return 1;
}



// FUNCTION 149781990 FUN_149781990 body=59 status=ok
// SIG undefined FUN_149781990(void)

undefined8 FUN_149781990(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497819dc FUN_1497819dc body=40 status=ok
// SIG undefined FUN_1497819dc(void)

void FUN_1497819dc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 149781a52 FUN_149781a52 body=38 status=ok
// SIG undefined FUN_149781a52(void)

undefined8 FUN_149781a52(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149781a78 FUN_149781a78 body=38 status=ok
// SIG undefined FUN_149781a78(void)

undefined8 FUN_149781a78(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FCompareIntDataflowNode",1);
  return param_2;
}



// FUNCTION 149781a9e FUN_149781a9e body=38 status=ok
// SIG undefined FUN_149781a9e(void)

undefined8 FUN_149781a9e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"CompareInt",1);
  return param_2;
}



// FUNCTION 149781ac4 FUN_149781ac4 body=38 status=ok
// SIG undefined FUN_149781ac4(void)

undefined8 FUN_149781ac4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Compare",1);
  return param_2;
}



// FUNCTION 149781aea FUN_149781aea body=32 status=ok
// SIG undefined FUN_149781aea(void)

undefined8 FUN_149781aea(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149781b0a FUN_149781b0a body=123 status=ok
// SIG undefined FUN_149781b0a(void)

void FUN_149781b0a(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25978 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25978 = FUN_140002ddd(FUN_1467573e9,uVar1,L"CompareIntDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25978,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149781b82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149781b86 FUN_149781b86 body=93 status=ok
// SIG undefined FUN_149781b86(void)

void FUN_149781b86(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25978 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25978 = FUN_140002ddd(FUN_1467573e9,uVar2,L"CompareIntDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25978,param_1);
  return;
}



// FUNCTION 149781be4 FUN_149781be4 body=55 status=ok
// SIG undefined FUN_149781be4(void)

void FUN_149781be4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25978 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25978 = FUN_140002ddd(FUN_1467573e9,uVar1,L"CompareIntDataflowNode");
  }
  return;
}



// FUNCTION 149781c1c FUN_149781c1c body=233 status=ok
// SIG undefined FUN_149781c1c(void)

ulonglong FUN_149781c1c(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FCompareIntDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149781cb6;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149781cb6;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149781cb6;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149781cb6:
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



// FUNCTION 149781d08 FUN_149781d08 body=57 status=ok
// SIG undefined FUN_149781d08(void)

void FUN_149781d08(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5fce0;
  *(undefined1 *)(param_2 + 0x33) = 0;
  *(undefined1 *)((longlong)param_2 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x19c) = 0;
  return;
}



// FUNCTION 149781d42 FUN_149781d42 body=57 status=ok
// SIG undefined FUN_149781d42(void)

void FUN_149781d42(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5fce0;
  *(undefined1 *)(param_2 + 0x33) = 0;
  *(undefined1 *)((longlong)param_2 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x19c) = 0;
  return;
}



// FUNCTION 149781da0 FUN_149781da0 body=90 status=ok
// SIG undefined FUN_149781da0(void)

undefined8 FUN_149781da0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined8 *)(param_3 + 0x19d);
    *(undefined8 *)(param_2 + 0x198) = *(undefined8 *)(param_3 + 0x198);
    *(undefined8 *)(param_2 + 0x19d) = uVar1;
    param_2 = param_2 + 0x1a8;
    param_3 = param_3 + 0x1a8;
  }
  return 1;
}



// FUNCTION 149781e22 FUN_149781e22 body=59 status=ok
// SIG undefined FUN_149781e22(void)

undefined8 FUN_149781e22(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149781e6e FUN_149781e6e body=40 status=ok
// SIG undefined FUN_149781e6e(void)

void FUN_149781e6e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 149781ee4 FUN_149781ee4 body=38 status=ok
// SIG undefined FUN_149781ee4(void)

undefined8 FUN_149781ee4(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149781f0a FUN_149781f0a body=38 status=ok
// SIG undefined FUN_149781f0a(void)

undefined8 FUN_149781f0a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FCompareFloatDataflowNode",1);
  return param_2;
}



// FUNCTION 149781f30 FUN_149781f30 body=38 status=ok
// SIG undefined FUN_149781f30(void)

undefined8 FUN_149781f30(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"CompareFloat",1);
  return param_2;
}



// FUNCTION 149781f56 FUN_149781f56 body=38 status=ok
// SIG undefined FUN_149781f56(void)

undefined8 FUN_149781f56(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Compare",1);
  return param_2;
}



// FUNCTION 149781f7c FUN_149781f7c body=32 status=ok
// SIG undefined FUN_149781f7c(void)

undefined8 FUN_149781f7c(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149781f9c FUN_149781f9c body=123 status=ok
// SIG undefined FUN_149781f9c(void)

void FUN_149781f9c(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25990 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25990 = FUN_140002ddd(FUN_14675747f,uVar1,L"CompareFloatDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25990,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149782014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149782018 FUN_149782018 body=93 status=ok
// SIG undefined FUN_149782018(void)

void FUN_149782018(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25990 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25990 = FUN_140002ddd(FUN_14675747f,uVar2,L"CompareFloatDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25990,param_1);
  return;
}



// FUNCTION 149782076 FUN_149782076 body=55 status=ok
// SIG undefined FUN_149782076(void)

void FUN_149782076(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25990 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25990 = FUN_140002ddd(FUN_14675747f,uVar1,L"CompareFloatDataflowNode");
  }
  return;
}



// FUNCTION 1497820ae FUN_1497820ae body=233 status=ok
// SIG undefined FUN_1497820ae(void)

ulonglong FUN_1497820ae(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FCompareFloatDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149782148;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149782148;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149782148;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149782148:
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



// FUNCTION 14978219a FUN_14978219a body=60 status=ok
// SIG undefined FUN_14978219a(void)

void FUN_14978219a(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5ff80;
  param_2[0x36] = 0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *(undefined1 *)(param_2 + 0x35) = 0;
  return;
}



// FUNCTION 1497821d6 FUN_1497821d6 body=60 status=ok
// SIG undefined FUN_1497821d6(void)

void FUN_1497821d6(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5ff80;
  param_2[0x36] = 0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *(undefined1 *)(param_2 + 0x35) = 0;
  return;
}



// FUNCTION 149782236 FUN_149782236 body=63 status=ok
// SIG undefined FUN_149782236(void)

undefined1 FUN_149782236(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149782614(param_2,param_3);
    param_3 = param_3 + 0x1b8;
    param_2 = param_2 + 0x1b8;
  }
  return 1;
}



// FUNCTION 14978229e FUN_14978229e body=59 status=ok
// SIG undefined FUN_14978229e(void)

undefined8 FUN_14978229e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497822ea FUN_1497822ea body=40 status=ok
// SIG undefined FUN_1497822ea(void)

void FUN_1497822ea(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1b8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1b8) = 0;
  }
  return;
}



// FUNCTION 149782360 FUN_149782360 body=38 status=ok
// SIG undefined FUN_149782360(void)

undefined8 FUN_149782360(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149782386 FUN_149782386 body=38 status=ok
// SIG undefined FUN_149782386(void)

undefined8 FUN_149782386(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FBranchMeshDataflowNode",1);
  return param_2;
}



// FUNCTION 1497823ac FUN_1497823ac body=38 status=ok
// SIG undefined FUN_1497823ac(void)

undefined8 FUN_1497823ac(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"BranchMesh",1);
  return param_2;
}



// FUNCTION 1497823d2 FUN_1497823d2 body=38 status=ok
// SIG undefined FUN_1497823d2(void)

undefined8 FUN_1497823d2(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Utilities|FlowControl",1);
  return param_2;
}



// FUNCTION 1497823f8 FUN_1497823f8 body=32 status=ok
// SIG undefined FUN_1497823f8(void)

undefined8 FUN_1497823f8(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149782418 FUN_149782418 body=123 status=ok
// SIG undefined FUN_149782418(void)

void FUN_149782418(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc259a8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc259a8 = FUN_140002ddd(FUN_146757515,uVar1,L"BranchMeshDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc259a8,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149782490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149782494 FUN_149782494 body=93 status=ok
// SIG undefined FUN_149782494(void)

void FUN_149782494(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc259a8 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc259a8 = FUN_140002ddd(FUN_146757515,uVar2,L"BranchMeshDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc259a8,param_1);
  return;
}



// FUNCTION 1497824f2 FUN_1497824f2 body=55 status=ok
// SIG undefined FUN_1497824f2(void)

void FUN_1497824f2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc259a8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc259a8 = FUN_140002ddd(FUN_146757515,uVar1,L"BranchMeshDataflowNode");
  }
  return;
}



// FUNCTION 14978252a FUN_14978252a body=233 status=ok
// SIG undefined FUN_14978252a(void)

ulonglong FUN_14978252a(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FBranchMeshDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_1497825c4;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1497825c4;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_1497825c4;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_1497825c4:
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



// FUNCTION 149782614 FUN_149782614 body=174 status=ok
// SIG undefined FUN_149782614(void)

longlong FUN_149782614(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  
  FUN_146fc06e2();
  lVar2 = *(longlong *)(param_2 + 0x198);
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 0x198);
    }
  }
  bVar1 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x198) = lVar2;
  lVar2 = *(longlong *)(param_2 + 0x1a0);
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 0x1a0);
      bVar1 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x1a0) = lVar2;
  *(undefined1 *)(param_1 + 0x1a8) = *(undefined1 *)(param_2 + 0x1a8);
  lVar2 = *(longlong *)(param_2 + 0x1b0);
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 0x1b0);
    }
  }
  *(longlong *)(param_1 + 0x1b0) = lVar2;
  return param_1;
}



// FUNCTION 1497826f8 FUN_1497826f8 body=63 status=ok
// SIG undefined FUN_1497826f8(void)

undefined1 FUN_1497826f8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149782b34(param_2,param_3);
    param_3 = param_3 + 0x3b0;
    param_2 = param_2 + 0x3b0;
  }
  return 1;
}



// FUNCTION 149782760 FUN_149782760 body=59 status=ok
// SIG undefined FUN_149782760(void)

undefined8 FUN_149782760(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149782802 FUN_149782802 body=75 status=ok
// SIG undefined FUN_149782802(void)

undefined8 * FUN_149782802(undefined8 *param_1)

{
  FUN_146fc02b8();
  *param_1 = &PTR_FUN_14be60230;
  FUN_1414db454(param_1 + 0x33);
  FUN_1414db454(param_1 + 0x49);
  *(undefined1 *)(param_1 + 0x5f) = 0;
  FUN_1414db454(param_1 + 0x60);
  return param_1;
}



// FUNCTION 14978284e FUN_14978284e body=87 status=ok
// SIG undefined FUN_14978284e(void)

undefined8 * FUN_14978284e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be60230;
  FUN_14054b30a(param_1 + 0x60);
  FUN_14054b30a(param_1 + 0x49);
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497828a6 FUN_1497828a6 body=38 status=ok
// SIG undefined FUN_1497828a6(void)

undefined8 FUN_1497828a6(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FBranchCollectionDataflowNode",1);
  return param_2;
}



// FUNCTION 1497828cc FUN_1497828cc body=38 status=ok
// SIG undefined FUN_1497828cc(void)

undefined8 FUN_1497828cc(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"BranchCollection",1);
  return param_2;
}



// FUNCTION 1497828f2 FUN_1497828f2 body=38 status=ok
// SIG undefined FUN_1497828f2(void)

undefined8 FUN_1497828f2(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Utilities|FlowControl",1);
  return param_2;
}



// FUNCTION 149782918 FUN_149782918 body=32 status=ok
// SIG undefined FUN_149782918(void)

undefined8 FUN_149782918(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149782938 FUN_149782938 body=123 status=ok
// SIG undefined FUN_149782938(void)

void FUN_149782938(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc259c0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc259c0 = FUN_140002ddd(FUN_1467575ab,uVar1,L"BranchCollectionDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc259c0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001497829b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 1497829b4 FUN_1497829b4 body=93 status=ok
// SIG undefined FUN_1497829b4(void)

void FUN_1497829b4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc259c0 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc259c0 = FUN_140002ddd(FUN_1467575ab,uVar2,L"BranchCollectionDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc259c0,param_1);
  return;
}



// FUNCTION 149782a12 FUN_149782a12 body=55 status=ok
// SIG undefined FUN_149782a12(void)

void FUN_149782a12(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc259c0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc259c0 = FUN_140002ddd(FUN_1467575ab,uVar1,L"BranchCollectionDataflowNode");
  }
  return;
}



// FUNCTION 149782a4a FUN_149782a4a body=233 status=ok
// SIG undefined FUN_149782a4a(void)

ulonglong FUN_149782a4a(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FBranchCollectionDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149782ae4;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149782ae4;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149782ae4;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149782ae4:
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



// FUNCTION 149782b34 FUN_149782b34 body=93 status=ok
// SIG undefined FUN_149782b34(void)

longlong FUN_149782b34(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  FUN_146ecd102(param_1 + 0x248,param_2 + 0x248);
  *(undefined1 *)(param_1 + 0x2f8) = *(undefined1 *)(param_2 + 0x2f8);
  FUN_146ecd102(param_1 + 0x300,param_2 + 0x300);
  return param_1;
}



// FUNCTION 149782b92 FUN_149782b92 body=86 status=ok
// SIG undefined FUN_149782b92(void)

void FUN_149782b92(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x76) == '\x01') {
    *param_1 = &PTR_FUN_14be60230;
    FUN_14054b30a(param_1 + 0x60);
    FUN_14054b30a(param_1 + 0x49);
    FUN_14054b30a(param_1 + 0x33);
    FUN_146fc8eba(param_1);
    *(undefined1 *)(param_1 + 0x76) = 0;
  }
  return;
}



// FUNCTION 149782be8 FUN_149782be8 body=54 status=ok
// SIG undefined FUN_149782be8(void)

void FUN_149782be8(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be604d0;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x49] = 0;
  param_2[0x4a] = 0;
  return;
}



// FUNCTION 149782c1e FUN_149782c1e body=54 status=ok
// SIG undefined FUN_149782c1e(void)

void FUN_149782c1e(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be604d0;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x49] = 0;
  param_2[0x4a] = 0;
  return;
}



// FUNCTION 149782c78 FUN_149782c78 body=108 status=ok
// SIG undefined FUN_149782c78(void)

undefined1 FUN_149782c78(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    FUN_146ecd102(param_2 + 0x198,param_3 + 0x198);
    FUN_144a787a6(param_2 + 0x248,param_3 + 0x248);
    param_2 = param_2 + 600;
    param_3 = param_3 + 600;
  }
  return 1;
}



// FUNCTION 149782d0c FUN_149782d0c body=59 status=ok
// SIG undefined FUN_149782d0c(void)

undefined8 FUN_149782d0c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149782d58 FUN_149782d58 body=40 status=ok
// SIG undefined FUN_149782d58(void)

void FUN_149782d58(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 600) == '\x01') {
    FUN_149783082(param_2);
    *(undefined1 *)(param_2 + 600) = 0;
  }
  return;
}



// FUNCTION 149782dce FUN_149782dce body=38 status=ok
// SIG undefined FUN_149782dce(void)

undefined8 FUN_149782dce(undefined8 param_1,int param_2)

{
  FUN_149783082();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149782df4 FUN_149782df4 body=38 status=ok
// SIG undefined FUN_149782df4(void)

undefined8 FUN_149782df4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FGetSchemaDataflowNode",1);
  return param_2;
}



// FUNCTION 149782e1a FUN_149782e1a body=38 status=ok
// SIG undefined FUN_149782e1a(void)

undefined8 FUN_149782e1a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GetSchema",1);
  return param_2;
}



// FUNCTION 149782e40 FUN_149782e40 body=38 status=ok
// SIG undefined FUN_149782e40(void)

undefined8 FUN_149782e40(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Utilities",1);
  return param_2;
}



// FUNCTION 149782e66 FUN_149782e66 body=32 status=ok
// SIG undefined FUN_149782e66(void)

undefined8 FUN_149782e66(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149782e86 FUN_149782e86 body=123 status=ok
// SIG undefined FUN_149782e86(void)

void FUN_149782e86(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc259d8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc259d8 = FUN_140002ddd(FUN_146757641,uVar1,L"GetSchemaDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc259d8,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149782efe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149782f02 FUN_149782f02 body=93 status=ok
// SIG undefined FUN_149782f02(void)

void FUN_149782f02(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc259d8 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc259d8 = FUN_140002ddd(FUN_146757641,uVar2,L"GetSchemaDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc259d8,param_1);
  return;
}



// FUNCTION 149782f60 FUN_149782f60 body=55 status=ok
// SIG undefined FUN_149782f60(void)

void FUN_149782f60(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc259d8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc259d8 = FUN_140002ddd(FUN_146757641,uVar1,L"GetSchemaDataflowNode");
  }
  return;
}



// FUNCTION 149782f98 FUN_149782f98 body=233 status=ok
// SIG undefined FUN_149782f98(void)

ulonglong FUN_149782f98(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FGetSchemaDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149783032;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149783032;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149783032;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149783032:
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



// FUNCTION 149783082 FUN_149783082 body=60 status=ok
// SIG undefined FUN_149783082(void)

void FUN_149783082(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be604d0;
  if (param_1[0x49] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 1497830c0 FUN_1497830c0 body=100 status=ok
// SIG undefined FUN_1497830c0(void)

void FUN_1497830c0(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be60770;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4b] = 0;
  param_2[0x4c] = 0x8000000000;
  *(undefined1 *)(param_2 + 0x4d) = 1;
  *(undefined8 *)((longlong)param_2 + 0x26c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x274) = 0x3f80000000000000;
  *(undefined1 *)((longlong)param_2 + 0x27c) = 0;
  return;
}



// FUNCTION 149783124 FUN_149783124 body=100 status=ok
// SIG undefined FUN_149783124(void)

void FUN_149783124(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be60770;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4b] = 0;
  param_2[0x4c] = 0x8000000000;
  *(undefined1 *)(param_2 + 0x4d) = 1;
  *(undefined8 *)((longlong)param_2 + 0x26c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x274) = 0x3f80000000000000;
  *(undefined1 *)((longlong)param_2 + 0x27c) = 0;
  return;
}



// FUNCTION 1497831ac FUN_1497831ac body=63 status=ok
// SIG undefined FUN_1497831ac(void)

undefined1 FUN_1497831ac(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1497835c6(param_2,param_3);
    param_3 = param_3 + 0x280;
    param_2 = param_2 + 0x280;
  }
  return 1;
}



// FUNCTION 149783214 FUN_149783214 body=59 status=ok
// SIG undefined FUN_149783214(void)

undefined8 FUN_149783214(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149783260 FUN_149783260 body=40 status=ok
// SIG undefined FUN_149783260(void)

void FUN_149783260(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x280) == '\x01') {
    FUN_14978358a(param_2);
    *(undefined1 *)(param_2 + 0x280) = 0;
  }
  return;
}



// FUNCTION 1497832d6 FUN_1497832d6 body=38 status=ok
// SIG undefined FUN_1497832d6(void)

undefined8 FUN_1497832d6(undefined8 param_1,int param_2)

{
  FUN_14978358a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497832fc FUN_1497832fc body=38 status=ok
// SIG undefined FUN_1497832fc(void)

undefined8 FUN_1497832fc(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FRemoveOnBreakDataflowNode",1);
  return param_2;
}



// FUNCTION 149783322 FUN_149783322 body=38 status=ok
// SIG undefined FUN_149783322(void)

undefined8 FUN_149783322(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"RemoveOnBreak",1);
  return param_2;
}



// FUNCTION 149783348 FUN_149783348 body=38 status=ok
// SIG undefined FUN_149783348(void)

undefined8 FUN_149783348(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Utilities",1);
  return param_2;
}



// FUNCTION 14978336e FUN_14978336e body=32 status=ok
// SIG undefined FUN_14978336e(void)

undefined8 FUN_14978336e(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14978338e FUN_14978338e body=123 status=ok
// SIG undefined FUN_14978338e(void)

void FUN_14978338e(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc259f0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc259f0 = FUN_140002ddd(FUN_1467576d7,uVar1,L"RemoveOnBreakDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc259f0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149783406. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14978340a FUN_14978340a body=93 status=ok
// SIG undefined FUN_14978340a(void)

void FUN_14978340a(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc259f0 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc259f0 = FUN_140002ddd(FUN_1467576d7,uVar2,L"RemoveOnBreakDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc259f0,param_1);
  return;
}



// FUNCTION 149783468 FUN_149783468 body=55 status=ok
// SIG undefined FUN_149783468(void)

void FUN_149783468(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc259f0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc259f0 = FUN_140002ddd(FUN_1467576d7,uVar1,L"RemoveOnBreakDataflowNode");
  }
  return;
}



// FUNCTION 1497834a0 FUN_1497834a0 body=233 status=ok
// SIG undefined FUN_1497834a0(void)

ulonglong FUN_1497834a0(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FRemoveOnBreakDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14978353a;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14978353a;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14978353a;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14978353a:
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



// FUNCTION 14978358a FUN_14978358a body=60 status=ok
// SIG undefined FUN_14978358a(void)

void FUN_14978358a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be60770;
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 1497835c6 FUN_1497835c6 body=94 status=ok
// SIG undefined FUN_1497835c6(void)

longlong FUN_1497835c6(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x248,param_2 + 0x248);
  }
  *(undefined8 *)(param_1 + 0x275) = *(undefined8 *)(param_2 + 0x275);
  uVar1 = *(undefined8 *)(param_2 + 0x270);
  *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_2 + 0x268);
  *(undefined8 *)(param_1 + 0x270) = uVar1;
  return param_1;
}



// FUNCTION 149783626 FUN_149783626 body=81 status=ok
// SIG undefined FUN_149783626(void)

void FUN_149783626(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be60aa0;
  *(undefined2 *)(param_2 + 0x33) = 0;
  FUN_1414db454(param_2 + 0x34);
  param_2[0x4c] = 0;
  param_2[0x4d] = 0x8000000000;
  return;
}



// FUNCTION 149783678 FUN_149783678 body=81 status=ok
// SIG undefined FUN_149783678(void)

void FUN_149783678(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be60aa0;
  *(undefined2 *)(param_2 + 0x33) = 0;
  FUN_1414db454(param_2 + 0x34);
  param_2[0x4c] = 0;
  param_2[0x4d] = 0x8000000000;
  return;
}



// FUNCTION 1497836ee FUN_1497836ee body=63 status=ok
// SIG undefined FUN_1497836ee(void)

undefined1 FUN_1497836ee(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149783b08(param_2,param_3);
    param_3 = param_3 + 0x270;
    param_2 = param_2 + 0x270;
  }
  return 1;
}



// FUNCTION 149783756 FUN_149783756 body=59 status=ok
// SIG undefined FUN_149783756(void)

undefined8 FUN_149783756(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497837a2 FUN_1497837a2 body=40 status=ok
// SIG undefined FUN_1497837a2(void)

void FUN_1497837a2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x270) == '\x01') {
    FUN_149783acc(param_2);
    *(undefined1 *)(param_2 + 0x270) = 0;
  }
  return;
}



// FUNCTION 149783818 FUN_149783818 body=38 status=ok
// SIG undefined FUN_149783818(void)

undefined8 FUN_149783818(undefined8 param_1,int param_2)

{
  FUN_149783acc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14978383e FUN_14978383e body=38 status=ok
// SIG undefined FUN_14978383e(void)

undefined8 FUN_14978383e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FSetAnchorStateDataflowNode",1);
  return param_2;
}



// FUNCTION 149783864 FUN_149783864 body=38 status=ok
// SIG undefined FUN_149783864(void)

undefined8 FUN_149783864(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"SetAnchorState",1);
  return param_2;
}



// FUNCTION 14978388a FUN_14978388a body=38 status=ok
// SIG undefined FUN_14978388a(void)

undefined8 FUN_14978388a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Utilities",1);
  return param_2;
}



// FUNCTION 1497838b0 FUN_1497838b0 body=32 status=ok
// SIG undefined FUN_1497838b0(void)

undefined8 FUN_1497838b0(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 1497838d0 FUN_1497838d0 body=123 status=ok
// SIG undefined FUN_1497838d0(void)

void FUN_1497838d0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25a20 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25a20 = FUN_140002ddd(FUN_14675779d,uVar1,L"SetAnchorStateDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25a20,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149783948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14978394c FUN_14978394c body=93 status=ok
// SIG undefined FUN_14978394c(void)

void FUN_14978394c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25a20 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25a20 = FUN_140002ddd(FUN_14675779d,uVar2,L"SetAnchorStateDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25a20,param_1);
  return;
}



// FUNCTION 1497839aa FUN_1497839aa body=55 status=ok
// SIG undefined FUN_1497839aa(void)

void FUN_1497839aa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25a20 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25a20 = FUN_140002ddd(FUN_14675779d,uVar1,L"SetAnchorStateDataflowNode");
  }
  return;
}



// FUNCTION 1497839e2 FUN_1497839e2 body=233 status=ok
// SIG undefined FUN_1497839e2(void)

ulonglong FUN_1497839e2(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FSetAnchorStateDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149783a7c;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149783a7c;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149783a7c;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149783a7c:
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



// FUNCTION 149783acc FUN_149783acc body=60 status=ok
// SIG undefined FUN_149783acc(void)

void FUN_149783acc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be60aa0;
  if (param_1[0x4c] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x34);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 149783b08 FUN_149783b08 body=82 status=ok
// SIG undefined FUN_149783b08(void)

longlong FUN_149783b08(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  *(undefined2 *)(param_1 + 0x198) = *(undefined2 *)(param_2 + 0x198);
  FUN_146ecd102(param_1 + 0x1a0,param_2 + 0x1a0);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x250,param_2 + 0x250);
  }
  return param_1;
}



// FUNCTION 149783b5c FUN_149783b5c body=81 status=ok
// SIG undefined FUN_149783b5c(void)

void FUN_149783b5c(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be610c0;
  *(undefined1 *)(param_2 + 0x33) = 0;
  *(undefined8 *)((longlong)param_2 + 0x19c) = 0x3f800000;
  *(undefined4 *)((longlong)param_2 + 0x1a3) = 0;
  *(undefined1 *)((longlong)param_2 + 0x1a7) = 1;
  FUN_1414db454(param_2 + 0x35);
  return;
}



// FUNCTION 149783bae FUN_149783bae body=81 status=ok
// SIG undefined FUN_149783bae(void)

void FUN_149783bae(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be610c0;
  *(undefined1 *)(param_2 + 0x33) = 0;
  *(undefined8 *)((longlong)param_2 + 0x19c) = 0x3f800000;
  *(undefined4 *)((longlong)param_2 + 0x1a3) = 0;
  *(undefined1 *)((longlong)param_2 + 0x1a7) = 1;
  FUN_1414db454(param_2 + 0x35);
  return;
}



// FUNCTION 149783c24 FUN_149783c24 body=99 status=ok
// SIG undefined FUN_149783c24(void)

undefined1 FUN_149783c24(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
    FUN_146ecd102(param_2 + 0x1a8,param_3 + 0x1a8);
    param_2 = param_2 + 600;
    param_3 = param_3 + 600;
  }
  return 1;
}



// FUNCTION 149783cb0 FUN_149783cb0 body=59 status=ok
// SIG undefined FUN_149783cb0(void)

undefined8 FUN_149783cb0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149783cfc FUN_149783cfc body=62 status=ok
// SIG undefined FUN_149783cfc(void)

void FUN_149783cfc(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x4b) == '\x01') {
    *param_2 = &PTR_FUN_14be610c0;
    FUN_14054b30a(param_2 + 0x35);
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x4b) = 0;
  }
  return;
}



// FUNCTION 149783d88 FUN_149783d88 body=63 status=ok
// SIG undefined FUN_149783d88(void)

undefined8 * FUN_149783d88(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be610c0;
  FUN_14054b30a(param_1 + 0x35);
  FUN_146fc8eba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149783dc8 FUN_149783dc8 body=38 status=ok
// SIG undefined FUN_149783dc8(void)

undefined8 FUN_149783dc8(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FProximityDataflowNode",1);
  return param_2;
}



// FUNCTION 149783dee FUN_149783dee body=38 status=ok
// SIG undefined FUN_149783dee(void)

undefined8 FUN_149783dee(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Proximity",1);
  return param_2;
}



// FUNCTION 149783e14 FUN_149783e14 body=38 status=ok
// SIG undefined FUN_149783e14(void)

undefined8 FUN_149783e14(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Utilities",1);
  return param_2;
}



// FUNCTION 149783e3a FUN_149783e3a body=32 status=ok
// SIG undefined FUN_149783e3a(void)

undefined8 FUN_149783e3a(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149783e5a FUN_149783e5a body=123 status=ok
// SIG undefined FUN_149783e5a(void)

void FUN_149783e5a(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25a80 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25a80 = FUN_140002ddd(FUN_1467578c1,uVar1,L"ProximityDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25a80,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149783ed2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149783ed6 FUN_149783ed6 body=93 status=ok
// SIG undefined FUN_149783ed6(void)

void FUN_149783ed6(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25a80 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25a80 = FUN_140002ddd(FUN_1467578c1,uVar2,L"ProximityDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25a80,param_1);
  return;
}



// FUNCTION 149783f34 FUN_149783f34 body=55 status=ok
// SIG undefined FUN_149783f34(void)

void FUN_149783f34(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25a80 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25a80 = FUN_140002ddd(FUN_1467578c1,uVar1,L"ProximityDataflowNode");
  }
  return;
}



// FUNCTION 149783f6c FUN_149783f6c body=233 status=ok
// SIG undefined FUN_149783f6c(void)

ulonglong FUN_149783f6c(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FProximityDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149784006;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149784006;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149784006;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149784006:
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



// FUNCTION 149784058 FUN_149784058 body=114 status=ok
// SIG undefined FUN_149784058(void)

void FUN_149784058(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be61350;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4a] = 0;
  param_2[0x4b] = 0;
  *(undefined4 *)(param_2 + 0x4c) = 0;
  *(undefined4 *)((longlong)param_2 + 0x264) = 0;
  *(undefined4 *)(param_2 + 0x4d) = 0;
  *(undefined4 *)((longlong)param_2 + 0x26c) = 0x3ff00000;
  param_2[0x4e] = 0;
  param_2[0x4f] = 0;
  param_2[0x50] = 0;
  param_2[0x51] = 0;
  param_2[0x52] = 0x3ff0000000000000;
  param_2[0x53] = 0x3ff0000000000000;
  param_2[0x54] = 0x3ff0000000000000;
  param_2[0x55] = 0;
  return;
}



// FUNCTION 1497840ca FUN_1497840ca body=114 status=ok
// SIG undefined FUN_1497840ca(void)

void FUN_1497840ca(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be61350;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4a] = 0;
  param_2[0x4b] = 0;
  *(undefined4 *)(param_2 + 0x4c) = 0;
  *(undefined4 *)((longlong)param_2 + 0x264) = 0;
  *(undefined4 *)(param_2 + 0x4d) = 0;
  *(undefined4 *)((longlong)param_2 + 0x26c) = 0x3ff00000;
  param_2[0x4e] = 0;
  param_2[0x4f] = 0;
  param_2[0x50] = 0;
  param_2[0x51] = 0;
  param_2[0x52] = 0x3ff0000000000000;
  param_2[0x53] = 0x3ff0000000000000;
  param_2[0x54] = 0x3ff0000000000000;
  param_2[0x55] = 0;
  return;
}



// FUNCTION 149784160 FUN_149784160 body=116 status=ok
// SIG undefined FUN_149784160(void)

undefined1 FUN_149784160(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    FUN_146ecd102(param_2 + 0x198,param_3 + 0x198);
    puVar2 = (undefined8 *)(param_3 + 0x250);
    puVar3 = (undefined8 *)(param_2 + 0x250);
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    param_2 = param_2 + 0x2b0;
    param_3 = param_3 + 0x2b0;
  }
  return 1;
}



// FUNCTION 1497841fc FUN_1497841fc body=59 status=ok
// SIG undefined FUN_1497841fc(void)

undefined8 FUN_1497841fc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149784248 FUN_149784248 body=62 status=ok
// SIG undefined FUN_149784248(void)

void FUN_149784248(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x56) == '\x01') {
    *param_2 = &PTR_FUN_14be61350;
    FUN_14054b30a(param_2 + 0x33);
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x56) = 0;
  }
  return;
}



// FUNCTION 1497842d4 FUN_1497842d4 body=63 status=ok
// SIG undefined FUN_1497842d4(void)

undefined8 * FUN_1497842d4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be61350;
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149784314 FUN_149784314 body=38 status=ok
// SIG undefined FUN_149784314(void)

undefined8 FUN_149784314(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FCollectionSetPivotDataflowNode",1);
  return param_2;
}



// FUNCTION 14978433a FUN_14978433a body=38 status=ok
// SIG undefined FUN_14978433a(void)

undefined8 FUN_14978433a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"SetPivot",1);
  return param_2;
}



// FUNCTION 149784360 FUN_149784360 body=38 status=ok
// SIG undefined FUN_149784360(void)

undefined8 FUN_149784360(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Utilities",1);
  return param_2;
}



// FUNCTION 149784386 FUN_149784386 body=32 status=ok
// SIG undefined FUN_149784386(void)

undefined8 FUN_149784386(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 1497843a6 FUN_1497843a6 body=123 status=ok
// SIG undefined FUN_1497843a6(void)

void FUN_1497843a6(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25a98 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25a98 = FUN_140002ddd(FUN_146757957,uVar1,L"CollectionSetPivotDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25a98,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014978441e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149784422 FUN_149784422 body=93 status=ok
// SIG undefined FUN_149784422(void)

void FUN_149784422(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25a98 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25a98 = FUN_140002ddd(FUN_146757957,uVar2,L"CollectionSetPivotDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25a98,param_1);
  return;
}



// FUNCTION 149784480 FUN_149784480 body=55 status=ok
// SIG undefined FUN_149784480(void)

void FUN_149784480(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25a98 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25a98 = FUN_140002ddd(FUN_146757957,uVar1,L"CollectionSetPivotDataflowNode");
  }
  return;
}



// FUNCTION 1497844b8 FUN_1497844b8 body=233 status=ok
// SIG undefined FUN_1497844b8(void)

ulonglong FUN_1497844b8(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FCollectionSetPivotDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149784552;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149784552;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149784552;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149784552:
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



// FUNCTION 1497845d8 FUN_1497845d8 body=63 status=ok
// SIG undefined FUN_1497845d8(void)

undefined1 FUN_1497845d8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149784a70(param_2,param_3);
    param_3 = param_3 + 0x278;
    param_2 = param_2 + 0x278;
  }
  return 1;
}



// FUNCTION 149784640 FUN_149784640 body=59 status=ok
// SIG undefined FUN_149784640(void)

undefined8 FUN_149784640(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14978468c FUN_14978468c body=40 status=ok
// SIG undefined FUN_14978468c(void)

void FUN_14978468c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x278) == '\x01') {
    FUN_149784a22(param_2);
    *(undefined1 *)(param_2 + 0x278) = 0;
  }
  return;
}



// FUNCTION 149784702 FUN_149784702 body=107 status=ok
// SIG undefined FUN_149784702(void)

undefined8 * FUN_149784702(undefined8 *param_1)

{
  FUN_146fc02b8();
  *param_1 = &PTR_FUN_14be61e60;
  FUN_1414db454(param_1 + 0x33);
  *(undefined1 *)(param_1 + 0x49) = 0;
  FUN_1400b22c2(param_1 + 0x4a,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 0x4c,&DAT_149e02088);
  *(undefined1 *)(param_1 + 0x4e) = 2;
  *(undefined4 *)((longlong)param_1 + 0x274) = 0;
  return param_1;
}



// FUNCTION 14978476e FUN_14978476e body=38 status=ok
// SIG undefined FUN_14978476e(void)

undefined8 FUN_14978476e(undefined8 param_1,int param_2)

{
  FUN_149784a22();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149784794 FUN_149784794 body=38 status=ok
// SIG undefined FUN_149784794(void)

undefined8 FUN_149784794(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FAddCustomCollectionAttributeDataflowNode",1);
  return param_2;
}



// FUNCTION 1497847ba FUN_1497847ba body=38 status=ok
// SIG undefined FUN_1497847ba(void)

undefined8 FUN_1497847ba(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"AddCustomCollectionAttribute",1);
  return param_2;
}



// FUNCTION 1497847e0 FUN_1497847e0 body=38 status=ok
// SIG undefined FUN_1497847e0(void)

undefined8 FUN_1497847e0(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Utilities",1);
  return param_2;
}



// FUNCTION 149784806 FUN_149784806 body=32 status=ok
// SIG undefined FUN_149784806(void)

undefined8 FUN_149784806(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149784826 FUN_149784826 body=123 status=ok
// SIG undefined FUN_149784826(void)

void FUN_149784826(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25ae0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25ae0 = FUN_140002ddd(FUN_146757a4d,uVar1,L"AddCustomCollectionAttributeDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25ae0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014978489e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}


