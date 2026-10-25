// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14978a3d8 FUN_14978a3d8 body=38 status=ok
// SIG undefined FUN_14978a3d8(void)

undefined8 FUN_14978a3d8(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Selection|Transform",1);
  return param_2;
}



// FUNCTION 14978a3fe FUN_14978a3fe body=32 status=ok
// SIG undefined FUN_14978a3fe(void)

undefined8 FUN_14978a3fe(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14978a41e FUN_14978a41e body=123 status=ok
// SIG undefined FUN_14978a41e(void)

void FUN_14978a41e(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25c98 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25c98 =
         FUN_140002ddd(FUN_146758535,uVar1,L"CollectionTransformSelectionSetOperationDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25c98,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014978a496. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14978a49a FUN_14978a49a body=93 status=ok
// SIG undefined FUN_14978a49a(void)

void FUN_14978a49a(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25c98 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25c98 =
         FUN_140002ddd(FUN_146758535,uVar2,L"CollectionTransformSelectionSetOperationDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25c98,param_1);
  return;
}



// FUNCTION 14978a4f8 FUN_14978a4f8 body=55 status=ok
// SIG undefined FUN_14978a4f8(void)

void FUN_14978a4f8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25c98 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25c98 =
         FUN_140002ddd(FUN_146758535,uVar1,L"CollectionTransformSelectionSetOperationDataflowNode");
  }
  return;
}



// FUNCTION 14978a530 FUN_14978a530 body=233 status=ok
// SIG undefined FUN_14978a530(void)

ulonglong FUN_14978a530(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FCollectionTransformSelectionSetOperationDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14978a5ca;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14978a5ca;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14978a5ca;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14978a5ca:
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



// FUNCTION 14978a61a FUN_14978a61a body=82 status=ok
// SIG undefined FUN_14978a61a(void)

void FUN_14978a61a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be65010;
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 14978a66c FUN_14978a66c body=97 status=ok
// SIG undefined FUN_14978a66c(void)

longlong FUN_14978a66c(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  *(undefined1 *)(param_1 + 0x198) = *(undefined1 *)(param_2 + 0x198);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x1a0,param_2 + 0x1a0);
    FUN_144a69486(param_1 + 0x1c0,param_2 + 0x1c0);
    FUN_144a69486(param_1 + 0x1e0,param_2 + 0x1e0);
  }
  return param_1;
}



// FUNCTION 14978a6ce FUN_14978a6ce body=82 status=ok
// SIG undefined FUN_14978a6ce(void)

void FUN_14978a6ce(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be652e0;
  param_2[0x35] = 0;
  param_2[0x36] = 0x8000000000;
  FUN_1414db454(param_2 + 0x37);
  param_2[0x4d] = 0;
  param_2[0x4e] = 0;
  return;
}



// FUNCTION 14978a720 FUN_14978a720 body=82 status=ok
// SIG undefined FUN_14978a720(void)

void FUN_14978a720(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be652e0;
  param_2[0x35] = 0;
  param_2[0x36] = 0x8000000000;
  FUN_1414db454(param_2 + 0x37);
  param_2[0x4d] = 0;
  param_2[0x4e] = 0;
  return;
}



// FUNCTION 14978a796 FUN_14978a796 body=63 status=ok
// SIG undefined FUN_14978a796(void)

undefined1 FUN_14978a796(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14978abc2(param_2,param_3);
    param_3 = param_3 + 0x278;
    param_2 = param_2 + 0x278;
  }
  return 1;
}



// FUNCTION 14978a7fe FUN_14978a7fe body=59 status=ok
// SIG undefined FUN_14978a7fe(void)

undefined8 FUN_14978a7fe(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14978a84a FUN_14978a84a body=40 status=ok
// SIG undefined FUN_14978a84a(void)

void FUN_14978a84a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x278) == '\x01') {
    FUN_14978ab74(param_2);
    *(undefined1 *)(param_2 + 0x278) = 0;
  }
  return;
}



// FUNCTION 14978a8c0 FUN_14978a8c0 body=38 status=ok
// SIG undefined FUN_14978a8c0(void)

undefined8 FUN_14978a8c0(undefined8 param_1,int param_2)

{
  FUN_14978ab74();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14978a8e6 FUN_14978a8e6 body=38 status=ok
// SIG undefined FUN_14978a8e6(void)

undefined8 FUN_14978a8e6(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FCollectionTransformSelectionInfoDataflowNode",1);
  return param_2;
}



// FUNCTION 14978a90c FUN_14978a90c body=38 status=ok
// SIG undefined FUN_14978a90c(void)

undefined8 FUN_14978a90c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"CollectionTransformSelectionInfo",1);
  return param_2;
}



// FUNCTION 14978a932 FUN_14978a932 body=38 status=ok
// SIG undefined FUN_14978a932(void)

undefined8 FUN_14978a932(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Selection|Transform",1);
  return param_2;
}



// FUNCTION 14978a958 FUN_14978a958 body=32 status=ok
// SIG undefined FUN_14978a958(void)

undefined8 FUN_14978a958(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14978a978 FUN_14978a978 body=123 status=ok
// SIG undefined FUN_14978a978(void)

void FUN_14978a978(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25cb0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25cb0 =
         FUN_140002ddd(FUN_1467585cb,uVar1,L"CollectionTransformSelectionInfoDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25cb0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014978a9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14978a9f4 FUN_14978a9f4 body=93 status=ok
// SIG undefined FUN_14978a9f4(void)

void FUN_14978a9f4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25cb0 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25cb0 =
         FUN_140002ddd(FUN_1467585cb,uVar2,L"CollectionTransformSelectionInfoDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25cb0,param_1);
  return;
}



// FUNCTION 14978aa52 FUN_14978aa52 body=55 status=ok
// SIG undefined FUN_14978aa52(void)

void FUN_14978aa52(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25cb0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25cb0 =
         FUN_140002ddd(FUN_1467585cb,uVar1,L"CollectionTransformSelectionInfoDataflowNode");
  }
  return;
}



// FUNCTION 14978aa8a FUN_14978aa8a body=233 status=ok
// SIG undefined FUN_14978aa8a(void)

ulonglong FUN_14978aa8a(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FCollectionTransformSelectionInfoDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14978ab24;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14978ab24;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14978ab24;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14978ab24:
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



// FUNCTION 14978ab74 FUN_14978ab74 body=77 status=ok
// SIG undefined FUN_14978ab74(void)

void FUN_14978ab74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be652e0;
  if (param_1[0x4d] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x37);
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 14978abc2 FUN_14978abc2 body=86 status=ok
// SIG undefined FUN_14978abc2(void)

longlong FUN_14978abc2(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x198,param_2 + 0x198);
  }
  FUN_146ecd102(param_1 + 0x1b8,param_2 + 0x1b8);
  FUN_144a787a6(param_1 + 0x268,param_2 + 0x268);
  return param_1;
}



// FUNCTION 14978ac1a FUN_14978ac1a body=72 status=ok
// SIG undefined FUN_14978ac1a(void)

void FUN_14978ac1a(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be655a0;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4b] = 0;
  param_2[0x4c] = 0x8000000000;
  return;
}



// FUNCTION 14978ac62 FUN_14978ac62 body=72 status=ok
// SIG undefined FUN_14978ac62(void)

void FUN_14978ac62(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be655a0;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4b] = 0;
  param_2[0x4c] = 0x8000000000;
  return;
}



// FUNCTION 14978acce FUN_14978acce body=63 status=ok
// SIG undefined FUN_14978acce(void)

undefined1 FUN_14978acce(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14978b0e8(param_2,param_3);
    param_3 = param_3 + 0x268;
    param_2 = param_2 + 0x268;
  }
  return 1;
}



// FUNCTION 14978ad36 FUN_14978ad36 body=59 status=ok
// SIG undefined FUN_14978ad36(void)

undefined8 FUN_14978ad36(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14978ad82 FUN_14978ad82 body=40 status=ok
// SIG undefined FUN_14978ad82(void)

void FUN_14978ad82(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x268) == '\x01') {
    FUN_14978b0ac(param_2);
    *(undefined1 *)(param_2 + 0x268) = 0;
  }
  return;
}



// FUNCTION 14978adf8 FUN_14978adf8 body=38 status=ok
// SIG undefined FUN_14978adf8(void)

undefined8 FUN_14978adf8(undefined8 param_1,int param_2)

{
  FUN_14978b0ac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14978ae1e FUN_14978ae1e body=38 status=ok
// SIG undefined FUN_14978ae1e(void)

undefined8 FUN_14978ae1e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FCollectionTransformSelectionNoneDataflowNode",1);
  return param_2;
}



// FUNCTION 14978ae44 FUN_14978ae44 body=38 status=ok
// SIG undefined FUN_14978ae44(void)

undefined8 FUN_14978ae44(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"CollectionTransformSelectNone",1);
  return param_2;
}



// FUNCTION 14978ae6a FUN_14978ae6a body=38 status=ok
// SIG undefined FUN_14978ae6a(void)

undefined8 FUN_14978ae6a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Selection|Transform",1);
  return param_2;
}



// FUNCTION 14978ae90 FUN_14978ae90 body=32 status=ok
// SIG undefined FUN_14978ae90(void)

undefined8 FUN_14978ae90(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14978aeb0 FUN_14978aeb0 body=123 status=ok
// SIG undefined FUN_14978aeb0(void)

void FUN_14978aeb0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25cc8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25cc8 =
         FUN_140002ddd(FUN_146758661,uVar1,L"CollectionTransformSelectionNoneDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25cc8,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014978af28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14978af2c FUN_14978af2c body=93 status=ok
// SIG undefined FUN_14978af2c(void)

void FUN_14978af2c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25cc8 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25cc8 =
         FUN_140002ddd(FUN_146758661,uVar2,L"CollectionTransformSelectionNoneDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25cc8,param_1);
  return;
}



// FUNCTION 14978af8a FUN_14978af8a body=55 status=ok
// SIG undefined FUN_14978af8a(void)

void FUN_14978af8a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25cc8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25cc8 =
         FUN_140002ddd(FUN_146758661,uVar1,L"CollectionTransformSelectionNoneDataflowNode");
  }
  return;
}



// FUNCTION 14978afc2 FUN_14978afc2 body=233 status=ok
// SIG undefined FUN_14978afc2(void)

ulonglong FUN_14978afc2(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FCollectionTransformSelectionNoneDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14978b05c;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14978b05c;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14978b05c;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14978b05c:
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



// FUNCTION 14978b0ac FUN_14978b0ac body=60 status=ok
// SIG undefined FUN_14978b0ac(void)

void FUN_14978b0ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be655a0;
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 14978b0e8 FUN_14978b0e8 body=68 status=ok
// SIG undefined FUN_14978b0e8(void)

longlong FUN_14978b0e8(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x248,param_2 + 0x248);
  }
  return param_1;
}



// FUNCTION 14978b12e FUN_14978b12e body=60 status=ok
// SIG undefined FUN_14978b12e(void)

void FUN_14978b12e(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be65860;
  param_2[0x35] = 0;
  param_2[0x36] = 0x8000000000;
  return;
}



// FUNCTION 14978b16a FUN_14978b16a body=60 status=ok
// SIG undefined FUN_14978b16a(void)

void FUN_14978b16a(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be65860;
  param_2[0x35] = 0;
  param_2[0x36] = 0x8000000000;
  return;
}



// FUNCTION 14978b1ca FUN_14978b1ca body=90 status=ok
// SIG undefined FUN_14978b1ca(void)

undefined1 FUN_14978b1ca(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    if (param_2 != param_3) {
      FUN_144a69486(param_2 + 0x198,param_3 + 0x198);
    }
    param_3 = param_3 + 0x1b8;
    param_2 = param_2 + 0x1b8;
  }
  return 1;
}



// FUNCTION 14978b24c FUN_14978b24c body=59 status=ok
// SIG undefined FUN_14978b24c(void)

undefined8 FUN_14978b24c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14978b298 FUN_14978b298 body=67 status=ok
// SIG undefined FUN_14978b298(void)

void FUN_14978b298(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x37) == '\x01') {
    *param_2 = &PTR_FUN_14be65860;
    if (param_2[0x35] != 0) {
      FUN_1400020a8();
    }
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x37) = 0;
  }
  return;
}



// FUNCTION 14978b32a FUN_14978b32a body=68 status=ok
// SIG undefined FUN_14978b32a(void)

undefined8 * FUN_14978b32a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be65860;
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14978b36e FUN_14978b36e body=38 status=ok
// SIG undefined FUN_14978b36e(void)

undefined8 FUN_14978b36e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FCollectionTransformSelectionInvertDataflowNode",1);
  return param_2;
}



// FUNCTION 14978b394 FUN_14978b394 body=38 status=ok
// SIG undefined FUN_14978b394(void)

undefined8 FUN_14978b394(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"CollectionTransformSelectInvert",1);
  return param_2;
}



// FUNCTION 14978b3ba FUN_14978b3ba body=38 status=ok
// SIG undefined FUN_14978b3ba(void)

undefined8 FUN_14978b3ba(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Selection|Transform",1);
  return param_2;
}



// FUNCTION 14978b3e0 FUN_14978b3e0 body=32 status=ok
// SIG undefined FUN_14978b3e0(void)

undefined8 FUN_14978b3e0(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14978b400 FUN_14978b400 body=123 status=ok
// SIG undefined FUN_14978b400(void)

void FUN_14978b400(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25ce0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25ce0 =
         FUN_140002ddd(FUN_1467586f7,uVar1,L"CollectionTransformSelectionInvertDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25ce0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014978b478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14978b47c FUN_14978b47c body=93 status=ok
// SIG undefined FUN_14978b47c(void)

void FUN_14978b47c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25ce0 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25ce0 =
         FUN_140002ddd(FUN_1467586f7,uVar2,L"CollectionTransformSelectionInvertDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25ce0,param_1);
  return;
}



// FUNCTION 14978b4da FUN_14978b4da body=55 status=ok
// SIG undefined FUN_14978b4da(void)

void FUN_14978b4da(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25ce0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25ce0 =
         FUN_140002ddd(FUN_1467586f7,uVar1,L"CollectionTransformSelectionInvertDataflowNode");
  }
  return;
}



// FUNCTION 14978b512 FUN_14978b512 body=233 status=ok
// SIG undefined FUN_14978b512(void)

ulonglong FUN_14978b512(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FCollectionTransformSelectionInvertDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14978b5ac;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14978b5ac;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14978b5ac;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14978b5ac:
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



// FUNCTION 14978b5fe FUN_14978b5fe body=96 status=ok
// SIG undefined FUN_14978b5fe(void)

void FUN_14978b5fe(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be65b20;
  *(undefined1 *)(param_2 + 0x33) = 0;
  *(undefined8 *)((longlong)param_2 + 0x19c) = 0x3f00000000000000;
  FUN_1414db454(param_2 + 0x35);
  param_2[0x4d] = 0;
  param_2[0x4e] = 0x8000000000;
  return;
}



// FUNCTION 14978b65e FUN_14978b65e body=96 status=ok
// SIG undefined FUN_14978b65e(void)

void FUN_14978b65e(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be65b20;
  *(undefined1 *)(param_2 + 0x33) = 0;
  *(undefined8 *)((longlong)param_2 + 0x19c) = 0x3f00000000000000;
  FUN_1414db454(param_2 + 0x35);
  param_2[0x4d] = 0;
  param_2[0x4e] = 0x8000000000;
  return;
}



// FUNCTION 14978b6e2 FUN_14978b6e2 body=63 status=ok
// SIG undefined FUN_14978b6e2(void)

undefined1 FUN_14978b6e2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14978bafc(param_2,param_3);
    param_3 = param_3 + 0x278;
    param_2 = param_2 + 0x278;
  }
  return 1;
}



// FUNCTION 14978b74a FUN_14978b74a body=59 status=ok
// SIG undefined FUN_14978b74a(void)

undefined8 FUN_14978b74a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14978b796 FUN_14978b796 body=40 status=ok
// SIG undefined FUN_14978b796(void)

void FUN_14978b796(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x278) == '\x01') {
    FUN_14978bac0(param_2);
    *(undefined1 *)(param_2 + 0x278) = 0;
  }
  return;
}



// FUNCTION 14978b80c FUN_14978b80c body=38 status=ok
// SIG undefined FUN_14978b80c(void)

undefined8 FUN_14978b80c(undefined8 param_1,int param_2)

{
  FUN_14978bac0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14978b832 FUN_14978b832 body=38 status=ok
// SIG undefined FUN_14978b832(void)

undefined8 FUN_14978b832(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FCollectionTransformSelectionRandomDataflowNode",1);
  return param_2;
}



// FUNCTION 14978b858 FUN_14978b858 body=38 status=ok
// SIG undefined FUN_14978b858(void)

undefined8 FUN_14978b858(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"CollectionTransformSelectRandom",1);
  return param_2;
}



// FUNCTION 14978b87e FUN_14978b87e body=38 status=ok
// SIG undefined FUN_14978b87e(void)

undefined8 FUN_14978b87e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Selection|Transform",1);
  return param_2;
}



// FUNCTION 14978b8a4 FUN_14978b8a4 body=32 status=ok
// SIG undefined FUN_14978b8a4(void)

undefined8 FUN_14978b8a4(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14978b8c4 FUN_14978b8c4 body=123 status=ok
// SIG undefined FUN_14978b8c4(void)

void FUN_14978b8c4(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25cf8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25cf8 =
         FUN_140002ddd(FUN_14675878d,uVar1,L"CollectionTransformSelectionRandomDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25cf8,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014978b93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14978b940 FUN_14978b940 body=93 status=ok
// SIG undefined FUN_14978b940(void)

void FUN_14978b940(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25cf8 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25cf8 =
         FUN_140002ddd(FUN_14675878d,uVar2,L"CollectionTransformSelectionRandomDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25cf8,param_1);
  return;
}



// FUNCTION 14978b99e FUN_14978b99e body=55 status=ok
// SIG undefined FUN_14978b99e(void)

void FUN_14978b99e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25cf8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25cf8 =
         FUN_140002ddd(FUN_14675878d,uVar1,L"CollectionTransformSelectionRandomDataflowNode");
  }
  return;
}



// FUNCTION 14978b9d6 FUN_14978b9d6 body=233 status=ok
// SIG undefined FUN_14978b9d6(void)

ulonglong FUN_14978b9d6(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FCollectionTransformSelectionRandomDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14978ba70;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14978ba70;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14978ba70;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14978ba70:
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



// FUNCTION 14978bac0 FUN_14978bac0 body=60 status=ok
// SIG undefined FUN_14978bac0(void)

void FUN_14978bac0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be65b20;
  if (param_1[0x4d] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x35);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 14978bafc FUN_14978bafc body=94 status=ok
// SIG undefined FUN_14978bafc(void)

longlong FUN_14978bafc(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_2 + 0x198);
  *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_2 + 0x1a0);
  FUN_146ecd102(param_1 + 0x1a8,param_2 + 0x1a8);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 600,param_2 + 600);
  }
  return param_1;
}



// FUNCTION 14978bb5c FUN_14978bb5c body=72 status=ok
// SIG undefined FUN_14978bb5c(void)

void FUN_14978bb5c(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be65de0;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4b] = 0;
  param_2[0x4c] = 0x8000000000;
  return;
}



// FUNCTION 14978bba4 FUN_14978bba4 body=72 status=ok
// SIG undefined FUN_14978bba4(void)

void FUN_14978bba4(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be65de0;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4b] = 0;
  param_2[0x4c] = 0x8000000000;
  return;
}



// FUNCTION 14978bc10 FUN_14978bc10 body=63 status=ok
// SIG undefined FUN_14978bc10(void)

undefined1 FUN_14978bc10(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14978c02a(param_2,param_3);
    param_3 = param_3 + 0x268;
    param_2 = param_2 + 0x268;
  }
  return 1;
}



// FUNCTION 14978bc78 FUN_14978bc78 body=59 status=ok
// SIG undefined FUN_14978bc78(void)

undefined8 FUN_14978bc78(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14978bcc4 FUN_14978bcc4 body=40 status=ok
// SIG undefined FUN_14978bcc4(void)

void FUN_14978bcc4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x268) == '\x01') {
    FUN_14978bfee(param_2);
    *(undefined1 *)(param_2 + 0x268) = 0;
  }
  return;
}



// FUNCTION 14978bd3a FUN_14978bd3a body=38 status=ok
// SIG undefined FUN_14978bd3a(void)

undefined8 FUN_14978bd3a(undefined8 param_1,int param_2)

{
  FUN_14978bfee();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14978bd60 FUN_14978bd60 body=38 status=ok
// SIG undefined FUN_14978bd60(void)

undefined8 FUN_14978bd60(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FCollectionTransformSelectionRootDataflowNode",1);
  return param_2;
}



// FUNCTION 14978bd86 FUN_14978bd86 body=38 status=ok
// SIG undefined FUN_14978bd86(void)

undefined8 FUN_14978bd86(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"CollectionTransformSelectRoot",1);
  return param_2;
}



// FUNCTION 14978bdac FUN_14978bdac body=38 status=ok
// SIG undefined FUN_14978bdac(void)

undefined8 FUN_14978bdac(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Selection|Transform",1);
  return param_2;
}



// FUNCTION 14978bdd2 FUN_14978bdd2 body=32 status=ok
// SIG undefined FUN_14978bdd2(void)

undefined8 FUN_14978bdd2(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14978bdf2 FUN_14978bdf2 body=123 status=ok
// SIG undefined FUN_14978bdf2(void)

void FUN_14978bdf2(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25d10 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25d10 =
         FUN_140002ddd(FUN_146758823,uVar1,L"CollectionTransformSelectionRootDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25d10,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014978be6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14978be6e FUN_14978be6e body=93 status=ok
// SIG undefined FUN_14978be6e(void)

void FUN_14978be6e(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25d10 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25d10 =
         FUN_140002ddd(FUN_146758823,uVar2,L"CollectionTransformSelectionRootDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25d10,param_1);
  return;
}



// FUNCTION 14978becc FUN_14978becc body=55 status=ok
// SIG undefined FUN_14978becc(void)

void FUN_14978becc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25d10 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25d10 =
         FUN_140002ddd(FUN_146758823,uVar1,L"CollectionTransformSelectionRootDataflowNode");
  }
  return;
}



// FUNCTION 14978bf04 FUN_14978bf04 body=233 status=ok
// SIG undefined FUN_14978bf04(void)

ulonglong FUN_14978bf04(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FCollectionTransformSelectionRootDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14978bf9e;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14978bf9e;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14978bf9e;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14978bf9e:
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



// FUNCTION 14978bfee FUN_14978bfee body=60 status=ok
// SIG undefined FUN_14978bfee(void)

void FUN_14978bfee(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be65de0;
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 14978c02a FUN_14978c02a body=68 status=ok
// SIG undefined FUN_14978c02a(void)

longlong FUN_14978c02a(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x248,param_2 + 0x248);
  }
  return param_1;
}



// FUNCTION 14978c070 FUN_14978c070 body=82 status=ok
// SIG undefined FUN_14978c070(void)

void FUN_14978c070(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be660a0;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4d] = 0;
  param_2[0x4e] = 0x8000000000;
  param_2[0x49] = 0;
  param_2[0x4a] = 0;
  return;
}



// FUNCTION 14978c0c2 FUN_14978c0c2 body=82 status=ok
// SIG undefined FUN_14978c0c2(void)

void FUN_14978c0c2(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be660a0;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4d] = 0;
  param_2[0x4e] = 0x8000000000;
  param_2[0x49] = 0;
  param_2[0x4a] = 0;
  return;
}



// FUNCTION 14978c138 FUN_14978c138 body=63 status=ok
// SIG undefined FUN_14978c138(void)

undefined1 FUN_14978c138(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14978c564(param_2,param_3);
    param_3 = param_3 + 0x278;
    param_2 = param_2 + 0x278;
  }
  return 1;
}



// FUNCTION 14978c1a0 FUN_14978c1a0 body=59 status=ok
// SIG undefined FUN_14978c1a0(void)

undefined8 FUN_14978c1a0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14978c1ec FUN_14978c1ec body=40 status=ok
// SIG undefined FUN_14978c1ec(void)

void FUN_14978c1ec(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x278) == '\x01') {
    FUN_14978c516(param_2);
    *(undefined1 *)(param_2 + 0x278) = 0;
  }
  return;
}



// FUNCTION 14978c262 FUN_14978c262 body=38 status=ok
// SIG undefined FUN_14978c262(void)

undefined8 FUN_14978c262(undefined8 param_1,int param_2)

{
  FUN_14978c516();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14978c288 FUN_14978c288 body=38 status=ok
// SIG undefined FUN_14978c288(void)

undefined8 FUN_14978c288(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FCollectionTransformSelectionCustomDataflowNode",1);
  return param_2;
}



// FUNCTION 14978c2ae FUN_14978c2ae body=38 status=ok
// SIG undefined FUN_14978c2ae(void)

undefined8 FUN_14978c2ae(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"CollectionTransformSelectCustom",1);
  return param_2;
}



// FUNCTION 14978c2d4 FUN_14978c2d4 body=38 status=ok
// SIG undefined FUN_14978c2d4(void)

undefined8 FUN_14978c2d4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Selection|Transform",1);
  return param_2;
}



// FUNCTION 14978c2fa FUN_14978c2fa body=32 status=ok
// SIG undefined FUN_14978c2fa(void)

undefined8 FUN_14978c2fa(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14978c31a FUN_14978c31a body=123 status=ok
// SIG undefined FUN_14978c31a(void)

void FUN_14978c31a(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25d28 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25d28 =
         FUN_140002ddd(FUN_1467588b9,uVar1,L"CollectionTransformSelectionCustomDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25d28,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014978c392. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14978c396 FUN_14978c396 body=93 status=ok
// SIG undefined FUN_14978c396(void)

void FUN_14978c396(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25d28 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25d28 =
         FUN_140002ddd(FUN_1467588b9,uVar2,L"CollectionTransformSelectionCustomDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25d28,param_1);
  return;
}



// FUNCTION 14978c3f4 FUN_14978c3f4 body=55 status=ok
// SIG undefined FUN_14978c3f4(void)

void FUN_14978c3f4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25d28 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25d28 =
         FUN_140002ddd(FUN_1467588b9,uVar1,L"CollectionTransformSelectionCustomDataflowNode");
  }
  return;
}



// FUNCTION 14978c42c FUN_14978c42c body=233 status=ok
// SIG undefined FUN_14978c42c(void)

ulonglong FUN_14978c42c(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FCollectionTransformSelectionCustomDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14978c4c6;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14978c4c6;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14978c4c6;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14978c4c6:
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



// FUNCTION 14978c516 FUN_14978c516 body=77 status=ok
// SIG undefined FUN_14978c516(void)

void FUN_14978c516(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be660a0;
  if (param_1[0x4d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x49] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 14978c564 FUN_14978c564 body=85 status=ok
// SIG undefined FUN_14978c564(void)

longlong FUN_14978c564(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  FUN_144a787a6(param_1 + 0x248,param_2 + 0x248);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 600,param_2 + 600);
  }
  return param_1;
}



// FUNCTION 14978c5ba FUN_14978c5ba body=82 status=ok
// SIG undefined FUN_14978c5ba(void)

void FUN_14978c5ba(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be66360;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4d] = 0;
  param_2[0x4e] = 0x8000000000;
  param_2[0x49] = 0;
  param_2[0x4a] = 0;
  return;
}



// FUNCTION 14978c60c FUN_14978c60c body=82 status=ok
// SIG undefined FUN_14978c60c(void)

void FUN_14978c60c(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be66360;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4d] = 0;
  param_2[0x4e] = 0x8000000000;
  param_2[0x49] = 0;
  param_2[0x4a] = 0;
  return;
}



// FUNCTION 14978c682 FUN_14978c682 body=63 status=ok
// SIG undefined FUN_14978c682(void)

undefined1 FUN_14978c682(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14978caae(param_2,param_3);
    param_3 = param_3 + 0x278;
    param_2 = param_2 + 0x278;
  }
  return 1;
}



// FUNCTION 14978c6ea FUN_14978c6ea body=59 status=ok
// SIG undefined FUN_14978c6ea(void)

undefined8 FUN_14978c6ea(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14978c736 FUN_14978c736 body=40 status=ok
// SIG undefined FUN_14978c736(void)

void FUN_14978c736(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x278) == '\x01') {
    FUN_14978ca60(param_2);
    *(undefined1 *)(param_2 + 0x278) = 0;
  }
  return;
}



// FUNCTION 14978c7ac FUN_14978c7ac body=38 status=ok
// SIG undefined FUN_14978c7ac(void)

undefined8 FUN_14978c7ac(undefined8 param_1,int param_2)

{
  FUN_14978ca60();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14978c7d2 FUN_14978c7d2 body=38 status=ok
// SIG undefined FUN_14978c7d2(void)

undefined8 FUN_14978c7d2(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FCollectionTransformSelectionFromIndexArrayDataflowNode",1);
  return param_2;
}



// FUNCTION 14978c7f8 FUN_14978c7f8 body=38 status=ok
// SIG undefined FUN_14978c7f8(void)

undefined8 FUN_14978c7f8(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"CollectionTransformSelectionFromIndexArray",1);
  return param_2;
}



// FUNCTION 14978c81e FUN_14978c81e body=38 status=ok
// SIG undefined FUN_14978c81e(void)

undefined8 FUN_14978c81e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Selection|Array",1);
  return param_2;
}



// FUNCTION 14978c844 FUN_14978c844 body=32 status=ok
// SIG undefined FUN_14978c844(void)

undefined8 FUN_14978c844(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14978c864 FUN_14978c864 body=123 status=ok
// SIG undefined FUN_14978c864(void)

void FUN_14978c864(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25d40 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25d40 =
         FUN_140002ddd(FUN_14675894f,uVar1,L"CollectionTransformSelectionFromIndexArrayDataflowNode"
                      );
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25d40,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014978c8dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14978c8e0 FUN_14978c8e0 body=93 status=ok
// SIG undefined FUN_14978c8e0(void)

void FUN_14978c8e0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25d40 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25d40 =
         FUN_140002ddd(FUN_14675894f,uVar2,L"CollectionTransformSelectionFromIndexArrayDataflowNode"
                      );
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25d40,param_1);
  return;
}



// FUNCTION 14978c93e FUN_14978c93e body=55 status=ok
// SIG undefined FUN_14978c93e(void)

void FUN_14978c93e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25d40 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25d40 =
         FUN_140002ddd(FUN_14675894f,uVar1,L"CollectionTransformSelectionFromIndexArrayDataflowNode"
                      );
  }
  return;
}



// FUNCTION 14978c976 FUN_14978c976 body=233 status=ok
// SIG undefined FUN_14978c976(void)

ulonglong FUN_14978c976(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FCollectionTransformSelectionFromIndexArrayDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14978ca10;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14978ca10;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14978ca10;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14978ca10:
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



// FUNCTION 14978ca60 FUN_14978ca60 body=77 status=ok
// SIG undefined FUN_14978ca60(void)

void FUN_14978ca60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be66360;
  if (param_1[0x4d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x49] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 14978caae FUN_14978caae body=85 status=ok
// SIG undefined FUN_14978caae(void)

longlong FUN_14978caae(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  FUN_14054c6c4(param_1 + 0x248,param_2 + 0x248);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 600,param_2 + 600);
  }
  return param_1;
}



// FUNCTION 14978cb04 FUN_14978cb04 body=74 status=ok
// SIG undefined FUN_14978cb04(void)

void FUN_14978cb04(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be66660;
  param_2[0x35] = 0;
  param_2[0x36] = 0x8000000000;
  FUN_1414db454(param_2 + 0x37);
  return;
}



// FUNCTION 14978cb4e FUN_14978cb4e body=74 status=ok
// SIG undefined FUN_14978cb4e(void)

void FUN_14978cb4e(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be66660;
  param_2[0x35] = 0;
  param_2[0x36] = 0x8000000000;
  FUN_1414db454(param_2 + 0x37);
  return;
}



// FUNCTION 14978cbbc FUN_14978cbbc body=63 status=ok
// SIG undefined FUN_14978cbbc(void)

undefined1 FUN_14978cbbc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14978cfd6(param_2,param_3);
    param_3 = param_3 + 0x268;
    param_2 = param_2 + 0x268;
  }
  return 1;
}



// FUNCTION 14978cc24 FUN_14978cc24 body=59 status=ok
// SIG undefined FUN_14978cc24(void)

undefined8 FUN_14978cc24(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14978cc70 FUN_14978cc70 body=40 status=ok
// SIG undefined FUN_14978cc70(void)

void FUN_14978cc70(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x268) == '\x01') {
    FUN_14978cf9a(param_2);
    *(undefined1 *)(param_2 + 0x268) = 0;
  }
  return;
}



// FUNCTION 14978cce6 FUN_14978cce6 body=38 status=ok
// SIG undefined FUN_14978cce6(void)

undefined8 FUN_14978cce6(undefined8 param_1,int param_2)

{
  FUN_14978cf9a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14978cd0c FUN_14978cd0c body=38 status=ok
// SIG undefined FUN_14978cd0c(void)

undefined8 FUN_14978cd0c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FCollectionTransformSelectionParentDataflowNode",1);
  return param_2;
}



// FUNCTION 14978cd32 FUN_14978cd32 body=38 status=ok
// SIG undefined FUN_14978cd32(void)

undefined8 FUN_14978cd32(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"CollectionTransformSelectParent",1);
  return param_2;
}



// FUNCTION 14978cd58 FUN_14978cd58 body=38 status=ok
// SIG undefined FUN_14978cd58(void)

undefined8 FUN_14978cd58(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Selection|Transform",1);
  return param_2;
}



// FUNCTION 14978cd7e FUN_14978cd7e body=32 status=ok
// SIG undefined FUN_14978cd7e(void)

undefined8 FUN_14978cd7e(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14978cd9e FUN_14978cd9e body=123 status=ok
// SIG undefined FUN_14978cd9e(void)

void FUN_14978cd9e(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25d58 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25d58 =
         FUN_140002ddd(FUN_1467589e5,uVar1,L"CollectionTransformSelectionParentDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25d58,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014978ce16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14978ce1a FUN_14978ce1a body=93 status=ok
// SIG undefined FUN_14978ce1a(void)

void FUN_14978ce1a(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25d58 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25d58 =
         FUN_140002ddd(FUN_1467589e5,uVar2,L"CollectionTransformSelectionParentDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25d58,param_1);
  return;
}



// FUNCTION 14978ce78 FUN_14978ce78 body=55 status=ok
// SIG undefined FUN_14978ce78(void)

void FUN_14978ce78(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25d58 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25d58 =
         FUN_140002ddd(FUN_1467589e5,uVar1,L"CollectionTransformSelectionParentDataflowNode");
  }
  return;
}



// FUNCTION 14978ceb0 FUN_14978ceb0 body=233 status=ok
// SIG undefined FUN_14978ceb0(void)

ulonglong FUN_14978ceb0(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FCollectionTransformSelectionParentDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14978cf4a;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14978cf4a;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14978cf4a;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14978cf4a:
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



// FUNCTION 14978cf9a FUN_14978cf9a body=60 status=ok
// SIG undefined FUN_14978cf9a(void)

void FUN_14978cf9a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be66660;
  FUN_14054b30a(param_1 + 0x37);
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 14978cfd6 FUN_14978cfd6 body=69 status=ok
// SIG undefined FUN_14978cfd6(void)

longlong FUN_14978cfd6(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x198,param_2 + 0x198);
  }
  FUN_146ecd102(param_1 + 0x1b8,param_2 + 0x1b8);
  return param_1;
}



// FUNCTION 14978d01c FUN_14978d01c body=87 status=ok
// SIG undefined FUN_14978d01c(void)

void FUN_14978d01c(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be66920;
  param_2[0x35] = 0;
  param_2[0x36] = 0x8000000000;
  *(undefined4 *)(param_2 + 0x37) = 100;
  *(undefined1 *)((longlong)param_2 + 0x1bc) = 0;
  *(undefined4 *)(param_2 + 0x38) = 0;
  return;
}



// FUNCTION 14978d074 FUN_14978d074 body=87 status=ok
// SIG undefined FUN_14978d074(void)

void FUN_14978d074(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be66920;
  param_2[0x35] = 0;
  param_2[0x36] = 0x8000000000;
  *(undefined4 *)(param_2 + 0x37) = 100;
  *(undefined1 *)((longlong)param_2 + 0x1bc) = 0;
  *(undefined4 *)(param_2 + 0x38) = 0;
  return;
}



// FUNCTION 14978d0f0 FUN_14978d0f0 body=116 status=ok
// SIG undefined FUN_14978d0f0(void)

undefined8 FUN_14978d0f0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    if (param_2 != param_3) {
      FUN_144a69486(param_2 + 0x198,param_3 + 0x198);
    }
    *(undefined4 *)(param_2 + 0x1c0) = *(undefined4 *)(param_3 + 0x1c0);
    *(undefined8 *)(param_2 + 0x1b8) = *(undefined8 *)(param_3 + 0x1b8);
    param_2 = param_2 + 0x1c8;
    param_3 = param_3 + 0x1c8;
  }
  return 1;
}



// FUNCTION 14978d18c FUN_14978d18c body=59 status=ok
// SIG undefined FUN_14978d18c(void)

undefined8 FUN_14978d18c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14978d1d8 FUN_14978d1d8 body=67 status=ok
// SIG undefined FUN_14978d1d8(void)

void FUN_14978d1d8(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x39) == '\x01') {
    *param_2 = &PTR_FUN_14be66920;
    if (param_2[0x35] != 0) {
      FUN_1400020a8();
    }
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x39) = 0;
  }
  return;
}



// FUNCTION 14978d26a FUN_14978d26a body=68 status=ok
// SIG undefined FUN_14978d26a(void)

undefined8 * FUN_14978d26a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be66920;
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14978d2ae FUN_14978d2ae body=38 status=ok
// SIG undefined FUN_14978d2ae(void)

undefined8 FUN_14978d2ae(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FCollectionTransformSelectionByPercentageDataflowNode",1);
  return param_2;
}



// FUNCTION 14978d2d4 FUN_14978d2d4 body=38 status=ok
// SIG undefined FUN_14978d2d4(void)

undefined8 FUN_14978d2d4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"CollectionTransformSelectByPercentage",1);
  return param_2;
}



// FUNCTION 14978d2fa FUN_14978d2fa body=38 status=ok
// SIG undefined FUN_14978d2fa(void)

undefined8 FUN_14978d2fa(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Selection|Transform",1);
  return param_2;
}



// FUNCTION 14978d320 FUN_14978d320 body=32 status=ok
// SIG undefined FUN_14978d320(void)

undefined8 FUN_14978d320(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14978d340 FUN_14978d340 body=123 status=ok
// SIG undefined FUN_14978d340(void)

void FUN_14978d340(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25d70 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25d70 =
         FUN_140002ddd(FUN_146758a7b,uVar1,L"CollectionTransformSelectionByPercentageDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25d70,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014978d3b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14978d3bc FUN_14978d3bc body=93 status=ok
// SIG undefined FUN_14978d3bc(void)

void FUN_14978d3bc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25d70 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25d70 =
         FUN_140002ddd(FUN_146758a7b,uVar2,L"CollectionTransformSelectionByPercentageDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25d70,param_1);
  return;
}



// FUNCTION 14978d41a FUN_14978d41a body=55 status=ok
// SIG undefined FUN_14978d41a(void)

void FUN_14978d41a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25d70 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25d70 =
         FUN_140002ddd(FUN_146758a7b,uVar1,L"CollectionTransformSelectionByPercentageDataflowNode");
  }
  return;
}



// FUNCTION 14978d452 FUN_14978d452 body=233 status=ok
// SIG undefined FUN_14978d452(void)

ulonglong FUN_14978d452(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FCollectionTransformSelectionByPercentageDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14978d4ec;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14978d4ec;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14978d4ec;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14978d4ec:
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



// FUNCTION 14978d53e FUN_14978d53e body=74 status=ok
// SIG undefined FUN_14978d53e(void)

void FUN_14978d53e(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be66bf0;
  param_2[0x35] = 0;
  param_2[0x36] = 0x8000000000;
  FUN_1414db454(param_2 + 0x37);
  return;
}



// FUNCTION 14978d588 FUN_14978d588 body=74 status=ok
// SIG undefined FUN_14978d588(void)

void FUN_14978d588(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be66bf0;
  param_2[0x35] = 0;
  param_2[0x36] = 0x8000000000;
  FUN_1414db454(param_2 + 0x37);
  return;
}



// FUNCTION 14978d5f6 FUN_14978d5f6 body=63 status=ok
// SIG undefined FUN_14978d5f6(void)

undefined1 FUN_14978d5f6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14978da10(param_2,param_3);
    param_3 = param_3 + 0x268;
    param_2 = param_2 + 0x268;
  }
  return 1;
}



// FUNCTION 14978d65e FUN_14978d65e body=59 status=ok
// SIG undefined FUN_14978d65e(void)

undefined8 FUN_14978d65e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14978d6aa FUN_14978d6aa body=40 status=ok
// SIG undefined FUN_14978d6aa(void)

void FUN_14978d6aa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x268) == '\x01') {
    FUN_14978d9d4(param_2);
    *(undefined1 *)(param_2 + 0x268) = 0;
  }
  return;
}



// FUNCTION 14978d720 FUN_14978d720 body=38 status=ok
// SIG undefined FUN_14978d720(void)

undefined8 FUN_14978d720(undefined8 param_1,int param_2)

{
  FUN_14978d9d4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14978d746 FUN_14978d746 body=38 status=ok
// SIG undefined FUN_14978d746(void)

undefined8 FUN_14978d746(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FCollectionTransformSelectionChildrenDataflowNode",1);
  return param_2;
}



// FUNCTION 14978d76c FUN_14978d76c body=38 status=ok
// SIG undefined FUN_14978d76c(void)

undefined8 FUN_14978d76c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"CollectionTransformSelectChildren",1);
  return param_2;
}



// FUNCTION 14978d792 FUN_14978d792 body=38 status=ok
// SIG undefined FUN_14978d792(void)

undefined8 FUN_14978d792(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Selection|Transform",1);
  return param_2;
}



// FUNCTION 14978d7b8 FUN_14978d7b8 body=32 status=ok
// SIG undefined FUN_14978d7b8(void)

undefined8 FUN_14978d7b8(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14978d7d8 FUN_14978d7d8 body=123 status=ok
// SIG undefined FUN_14978d7d8(void)

void FUN_14978d7d8(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25d88 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25d88 =
         FUN_140002ddd(FUN_146758b11,uVar1,L"CollectionTransformSelectionChildrenDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25d88,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014978d850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14978d854 FUN_14978d854 body=93 status=ok
// SIG undefined FUN_14978d854(void)

void FUN_14978d854(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25d88 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25d88 =
         FUN_140002ddd(FUN_146758b11,uVar2,L"CollectionTransformSelectionChildrenDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25d88,param_1);
  return;
}



// FUNCTION 14978d8b2 FUN_14978d8b2 body=55 status=ok
// SIG undefined FUN_14978d8b2(void)

void FUN_14978d8b2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25d88 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25d88 =
         FUN_140002ddd(FUN_146758b11,uVar1,L"CollectionTransformSelectionChildrenDataflowNode");
  }
  return;
}



// FUNCTION 14978d8ea FUN_14978d8ea body=233 status=ok
// SIG undefined FUN_14978d8ea(void)

ulonglong FUN_14978d8ea(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FCollectionTransformSelectionChildrenDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14978d984;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14978d984;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14978d984;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14978d984:
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



// FUNCTION 14978d9d4 FUN_14978d9d4 body=60 status=ok
// SIG undefined FUN_14978d9d4(void)

void FUN_14978d9d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be66bf0;
  FUN_14054b30a(param_1 + 0x37);
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 14978da10 FUN_14978da10 body=69 status=ok
// SIG undefined FUN_14978da10(void)

longlong FUN_14978da10(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x198,param_2 + 0x198);
  }
  FUN_146ecd102(param_1 + 0x1b8,param_2 + 0x1b8);
  return param_1;
}



// FUNCTION 14978da56 FUN_14978da56 body=74 status=ok
// SIG undefined FUN_14978da56(void)

void FUN_14978da56(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be66ec0;
  param_2[0x35] = 0;
  param_2[0x36] = 0x8000000000;
  FUN_1414db454(param_2 + 0x37);
  return;
}



// FUNCTION 14978daa0 FUN_14978daa0 body=74 status=ok
// SIG undefined FUN_14978daa0(void)

void FUN_14978daa0(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be66ec0;
  param_2[0x35] = 0;
  param_2[0x36] = 0x8000000000;
  FUN_1414db454(param_2 + 0x37);
  return;
}



// FUNCTION 14978db0e FUN_14978db0e body=63 status=ok
// SIG undefined FUN_14978db0e(void)

undefined1 FUN_14978db0e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14978df28(param_2,param_3);
    param_3 = param_3 + 0x268;
    param_2 = param_2 + 0x268;
  }
  return 1;
}



// FUNCTION 14978db76 FUN_14978db76 body=59 status=ok
// SIG undefined FUN_14978db76(void)

undefined8 FUN_14978db76(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14978dbc2 FUN_14978dbc2 body=40 status=ok
// SIG undefined FUN_14978dbc2(void)

void FUN_14978dbc2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x268) == '\x01') {
    FUN_14978deec(param_2);
    *(undefined1 *)(param_2 + 0x268) = 0;
  }
  return;
}



// FUNCTION 14978dc38 FUN_14978dc38 body=38 status=ok
// SIG undefined FUN_14978dc38(void)

undefined8 FUN_14978dc38(undefined8 param_1,int param_2)

{
  FUN_14978deec();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14978dc5e FUN_14978dc5e body=38 status=ok
// SIG undefined FUN_14978dc5e(void)

undefined8 FUN_14978dc5e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FCollectionTransformSelectionSiblingsDataflowNode",1);
  return param_2;
}



// FUNCTION 14978dc84 FUN_14978dc84 body=38 status=ok
// SIG undefined FUN_14978dc84(void)

undefined8 FUN_14978dc84(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"CollectionTransformSelectSiblings",1);
  return param_2;
}



// FUNCTION 14978dcaa FUN_14978dcaa body=38 status=ok
// SIG undefined FUN_14978dcaa(void)

undefined8 FUN_14978dcaa(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Selection|Transform",1);
  return param_2;
}



// FUNCTION 14978dcd0 FUN_14978dcd0 body=32 status=ok
// SIG undefined FUN_14978dcd0(void)

undefined8 FUN_14978dcd0(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14978dcf0 FUN_14978dcf0 body=123 status=ok
// SIG undefined FUN_14978dcf0(void)

void FUN_14978dcf0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25da0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25da0 =
         FUN_140002ddd(FUN_146758ba7,uVar1,L"CollectionTransformSelectionSiblingsDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25da0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014978dd68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14978dd6c FUN_14978dd6c body=93 status=ok
// SIG undefined FUN_14978dd6c(void)

void FUN_14978dd6c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25da0 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25da0 =
         FUN_140002ddd(FUN_146758ba7,uVar2,L"CollectionTransformSelectionSiblingsDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25da0,param_1);
  return;
}



// FUNCTION 14978ddca FUN_14978ddca body=55 status=ok
// SIG undefined FUN_14978ddca(void)

void FUN_14978ddca(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25da0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25da0 =
         FUN_140002ddd(FUN_146758ba7,uVar1,L"CollectionTransformSelectionSiblingsDataflowNode");
  }
  return;
}



// FUNCTION 14978de02 FUN_14978de02 body=233 status=ok
// SIG undefined FUN_14978de02(void)

ulonglong FUN_14978de02(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FCollectionTransformSelectionSiblingsDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14978de9c;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14978de9c;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14978de9c;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14978de9c:
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



// FUNCTION 14978deec FUN_14978deec body=60 status=ok
// SIG undefined FUN_14978deec(void)

void FUN_14978deec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be66ec0;
  FUN_14054b30a(param_1 + 0x37);
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 14978df28 FUN_14978df28 body=69 status=ok
// SIG undefined FUN_14978df28(void)

longlong FUN_14978df28(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x198,param_2 + 0x198);
  }
  FUN_146ecd102(param_1 + 0x1b8,param_2 + 0x1b8);
  return param_1;
}



// FUNCTION 14978df6e FUN_14978df6e body=74 status=ok
// SIG undefined FUN_14978df6e(void)

void FUN_14978df6e(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be67190;
  param_2[0x35] = 0;
  param_2[0x36] = 0x8000000000;
  FUN_1414db454(param_2 + 0x37);
  return;
}



// FUNCTION 14978dfb8 FUN_14978dfb8 body=74 status=ok
// SIG undefined FUN_14978dfb8(void)

void FUN_14978dfb8(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be67190;
  param_2[0x35] = 0;
  param_2[0x36] = 0x8000000000;
  FUN_1414db454(param_2 + 0x37);
  return;
}



// FUNCTION 14978e026 FUN_14978e026 body=63 status=ok
// SIG undefined FUN_14978e026(void)

undefined1 FUN_14978e026(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14978e440(param_2,param_3);
    param_3 = param_3 + 0x268;
    param_2 = param_2 + 0x268;
  }
  return 1;
}



// FUNCTION 14978e08e FUN_14978e08e body=59 status=ok
// SIG undefined FUN_14978e08e(void)

undefined8 FUN_14978e08e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14978e0da FUN_14978e0da body=40 status=ok
// SIG undefined FUN_14978e0da(void)

void FUN_14978e0da(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x268) == '\x01') {
    FUN_14978e404(param_2);
    *(undefined1 *)(param_2 + 0x268) = 0;
  }
  return;
}



// FUNCTION 14978e150 FUN_14978e150 body=38 status=ok
// SIG undefined FUN_14978e150(void)

undefined8 FUN_14978e150(undefined8 param_1,int param_2)

{
  FUN_14978e404();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14978e176 FUN_14978e176 body=38 status=ok
// SIG undefined FUN_14978e176(void)

undefined8 FUN_14978e176(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FCollectionTransformSelectionLevelDataflowNode",1);
  return param_2;
}



// FUNCTION 14978e19c FUN_14978e19c body=38 status=ok
// SIG undefined FUN_14978e19c(void)

undefined8 FUN_14978e19c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"CollectionTransformSelectLevels",1);
  return param_2;
}



// FUNCTION 14978e1c2 FUN_14978e1c2 body=38 status=ok
// SIG undefined FUN_14978e1c2(void)

undefined8 FUN_14978e1c2(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Selection|Transform",1);
  return param_2;
}



// FUNCTION 14978e1e8 FUN_14978e1e8 body=32 status=ok
// SIG undefined FUN_14978e1e8(void)

undefined8 FUN_14978e1e8(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14978e208 FUN_14978e208 body=123 status=ok
// SIG undefined FUN_14978e208(void)

void FUN_14978e208(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25db8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25db8 =
         FUN_140002ddd(FUN_146758c3d,uVar1,L"CollectionTransformSelectionLevelDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25db8,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014978e280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14978e284 FUN_14978e284 body=93 status=ok
// SIG undefined FUN_14978e284(void)

void FUN_14978e284(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25db8 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25db8 =
         FUN_140002ddd(FUN_146758c3d,uVar2,L"CollectionTransformSelectionLevelDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25db8,param_1);
  return;
}



// FUNCTION 14978e2e2 FUN_14978e2e2 body=55 status=ok
// SIG undefined FUN_14978e2e2(void)

void FUN_14978e2e2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25db8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25db8 =
         FUN_140002ddd(FUN_146758c3d,uVar1,L"CollectionTransformSelectionLevelDataflowNode");
  }
  return;
}



// FUNCTION 14978e31a FUN_14978e31a body=233 status=ok
// SIG undefined FUN_14978e31a(void)

ulonglong FUN_14978e31a(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FCollectionTransformSelectionLevelDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14978e3b4;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14978e3b4;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14978e3b4;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14978e3b4:
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



// FUNCTION 14978e404 FUN_14978e404 body=60 status=ok
// SIG undefined FUN_14978e404(void)

void FUN_14978e404(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be67190;
  FUN_14054b30a(param_1 + 0x37);
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 14978e440 FUN_14978e440 body=69 status=ok
// SIG undefined FUN_14978e440(void)

longlong FUN_14978e440(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x198,param_2 + 0x198);
  }
  FUN_146ecd102(param_1 + 0x1b8,param_2 + 0x1b8);
  return param_1;
}



// FUNCTION 14978e486 FUN_14978e486 body=89 status=ok
// SIG undefined FUN_14978e486(void)

void FUN_14978e486(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be67450;
  FUN_1414db454(param_2 + 0x33);
  *(undefined4 *)(param_2 + 0x49) = 1;
  *(undefined1 *)((longlong)param_2 + 0x24c) = 0;
  param_2[0x4c] = 0;
  param_2[0x4d] = 0x8000000000;
  return;
}



// FUNCTION 14978e4e0 FUN_14978e4e0 body=89 status=ok
// SIG undefined FUN_14978e4e0(void)

void FUN_14978e4e0(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be67450;
  FUN_1414db454(param_2 + 0x33);
  *(undefined4 *)(param_2 + 0x49) = 1;
  *(undefined1 *)((longlong)param_2 + 0x24c) = 0;
  param_2[0x4c] = 0;
  param_2[0x4d] = 0x8000000000;
  return;
}



// FUNCTION 14978e55e FUN_14978e55e body=63 status=ok
// SIG undefined FUN_14978e55e(void)

undefined1 FUN_14978e55e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14978e978(param_2,param_3);
    param_3 = param_3 + 0x270;
    param_2 = param_2 + 0x270;
  }
  return 1;
}



// FUNCTION 14978e5c6 FUN_14978e5c6 body=59 status=ok
// SIG undefined FUN_14978e5c6(void)

undefined8 FUN_14978e5c6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14978e612 FUN_14978e612 body=40 status=ok
// SIG undefined FUN_14978e612(void)

void FUN_14978e612(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x270) == '\x01') {
    FUN_14978e93c(param_2);
    *(undefined1 *)(param_2 + 0x270) = 0;
  }
  return;
}



// FUNCTION 14978e688 FUN_14978e688 body=38 status=ok
// SIG undefined FUN_14978e688(void)

undefined8 FUN_14978e688(undefined8 param_1,int param_2)

{
  FUN_14978e93c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14978e6ae FUN_14978e6ae body=38 status=ok
// SIG undefined FUN_14978e6ae(void)

undefined8 FUN_14978e6ae(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FCollectionTransformSelectionTargetLevelDataflowNode",1);
  return param_2;
}



// FUNCTION 14978e6d4 FUN_14978e6d4 body=38 status=ok
// SIG undefined FUN_14978e6d4(void)

undefined8 FUN_14978e6d4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"CollectionTransformSelectTargetLevel",1);
  return param_2;
}



// FUNCTION 14978e6fa FUN_14978e6fa body=38 status=ok
// SIG undefined FUN_14978e6fa(void)

undefined8 FUN_14978e6fa(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Selection|Transform",1);
  return param_2;
}



// FUNCTION 14978e720 FUN_14978e720 body=32 status=ok
// SIG undefined FUN_14978e720(void)

undefined8 FUN_14978e720(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14978e740 FUN_14978e740 body=123 status=ok
// SIG undefined FUN_14978e740(void)

void FUN_14978e740(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25dd0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25dd0 =
         FUN_140002ddd(FUN_146758cd3,uVar1,L"CollectionTransformSelectionTargetLevelDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25dd0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014978e7b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14978e7bc FUN_14978e7bc body=93 status=ok
// SIG undefined FUN_14978e7bc(void)

void FUN_14978e7bc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25dd0 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25dd0 =
         FUN_140002ddd(FUN_146758cd3,uVar2,L"CollectionTransformSelectionTargetLevelDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25dd0,param_1);
  return;
}



// FUNCTION 14978e81a FUN_14978e81a body=55 status=ok
// SIG undefined FUN_14978e81a(void)

void FUN_14978e81a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25dd0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25dd0 =
         FUN_140002ddd(FUN_146758cd3,uVar1,L"CollectionTransformSelectionTargetLevelDataflowNode");
  }
  return;
}



// FUNCTION 14978e852 FUN_14978e852 body=233 status=ok
// SIG undefined FUN_14978e852(void)

ulonglong FUN_14978e852(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FCollectionTransformSelectionTargetLevelDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14978e8ec;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14978e8ec;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14978e8ec;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14978e8ec:
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



// FUNCTION 14978e93c FUN_14978e93c body=60 status=ok
// SIG undefined FUN_14978e93c(void)

void FUN_14978e93c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be67450;
  if (param_1[0x4c] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 14978e978 FUN_14978e978 body=92 status=ok
// SIG undefined FUN_14978e978(void)

longlong FUN_14978e978(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  *(undefined4 *)(param_1 + 0x248) = *(undefined4 *)(param_2 + 0x248);
  *(undefined1 *)(param_1 + 0x24c) = *(undefined1 *)(param_2 + 0x24c);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x250,param_2 + 0x250);
  }
  return param_1;
}



// FUNCTION 14978e9d6 FUN_14978e9d6 body=79 status=ok
// SIG undefined FUN_14978e9d6(void)

void FUN_14978e9d6(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be67720;
  param_2[0x35] = 0;
  param_2[0x36] = 0x8000000000;
  FUN_1414db454(param_2 + 0x37);
  *(undefined1 *)(param_2 + 0x4d) = 1;
  return;
}



// FUNCTION 14978ea26 FUN_14978ea26 body=79 status=ok
// SIG undefined FUN_14978ea26(void)

void FUN_14978ea26(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be67720;
  param_2[0x35] = 0;
  param_2[0x36] = 0x8000000000;
  FUN_1414db454(param_2 + 0x37);
  *(undefined1 *)(param_2 + 0x4d) = 1;
  return;
}



// FUNCTION 14978ea9a FUN_14978ea9a body=63 status=ok
// SIG undefined FUN_14978ea9a(void)

undefined1 FUN_14978ea9a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14978eeb4(param_2,param_3);
    param_3 = param_3 + 0x270;
    param_2 = param_2 + 0x270;
  }
  return 1;
}



// FUNCTION 14978eb02 FUN_14978eb02 body=59 status=ok
// SIG undefined FUN_14978eb02(void)

undefined8 FUN_14978eb02(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14978eb4e FUN_14978eb4e body=40 status=ok
// SIG undefined FUN_14978eb4e(void)

void FUN_14978eb4e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x270) == '\x01') {
    FUN_14978ee78(param_2);
    *(undefined1 *)(param_2 + 0x270) = 0;
  }
  return;
}



// FUNCTION 14978ebc4 FUN_14978ebc4 body=38 status=ok
// SIG undefined FUN_14978ebc4(void)

undefined8 FUN_14978ebc4(undefined8 param_1,int param_2)

{
  FUN_14978ee78();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14978ebea FUN_14978ebea body=38 status=ok
// SIG undefined FUN_14978ebea(void)

undefined8 FUN_14978ebea(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FCollectionTransformSelectionContactDataflowNode",1);
  return param_2;
}



// FUNCTION 14978ec10 FUN_14978ec10 body=38 status=ok
// SIG undefined FUN_14978ec10(void)

undefined8 FUN_14978ec10(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"CollectionTransformSelectContact",1);
  return param_2;
}



// FUNCTION 14978ec36 FUN_14978ec36 body=38 status=ok
// SIG undefined FUN_14978ec36(void)

undefined8 FUN_14978ec36(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Selection|Transform",1);
  return param_2;
}



// FUNCTION 14978ec5c FUN_14978ec5c body=32 status=ok
// SIG undefined FUN_14978ec5c(void)

undefined8 FUN_14978ec5c(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14978ec7c FUN_14978ec7c body=123 status=ok
// SIG undefined FUN_14978ec7c(void)

void FUN_14978ec7c(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25de8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25de8 =
         FUN_140002ddd(FUN_146758d69,uVar1,L"CollectionTransformSelectionContactDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25de8,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014978ecf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14978ecf8 FUN_14978ecf8 body=93 status=ok
// SIG undefined FUN_14978ecf8(void)

void FUN_14978ecf8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25de8 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25de8 =
         FUN_140002ddd(FUN_146758d69,uVar2,L"CollectionTransformSelectionContactDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25de8,param_1);
  return;
}



// FUNCTION 14978ed56 FUN_14978ed56 body=55 status=ok
// SIG undefined FUN_14978ed56(void)

void FUN_14978ed56(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25de8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25de8 =
         FUN_140002ddd(FUN_146758d69,uVar1,L"CollectionTransformSelectionContactDataflowNode");
  }
  return;
}



// FUNCTION 14978ed8e FUN_14978ed8e body=233 status=ok
// SIG undefined FUN_14978ed8e(void)

ulonglong FUN_14978ed8e(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FCollectionTransformSelectionContactDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14978ee28;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14978ee28;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14978ee28;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14978ee28:
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



// FUNCTION 14978ee78 FUN_14978ee78 body=60 status=ok
// SIG undefined FUN_14978ee78(void)

void FUN_14978ee78(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be67720;
  FUN_14054b30a(param_1 + 0x37);
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 14978eeb4 FUN_14978eeb4 body=78 status=ok
// SIG undefined FUN_14978eeb4(void)

longlong FUN_14978eeb4(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x198,param_2 + 0x198);
  }
  FUN_146ecd102(param_1 + 0x1b8,param_2 + 0x1b8);
  *(undefined1 *)(param_1 + 0x268) = *(undefined1 *)(param_2 + 0x268);
  return param_1;
}



// FUNCTION 14978ef04 FUN_14978ef04 body=72 status=ok
// SIG undefined FUN_14978ef04(void)

void FUN_14978ef04(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be679f0;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4b] = 0;
  param_2[0x4c] = 0x8000000000;
  return;
}



// FUNCTION 14978ef4c FUN_14978ef4c body=72 status=ok
// SIG undefined FUN_14978ef4c(void)

void FUN_14978ef4c(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be679f0;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4b] = 0;
  param_2[0x4c] = 0x8000000000;
  return;
}



// FUNCTION 14978efb8 FUN_14978efb8 body=63 status=ok
// SIG undefined FUN_14978efb8(void)

undefined1 FUN_14978efb8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14978f3d2(param_2,param_3);
    param_3 = param_3 + 0x268;
    param_2 = param_2 + 0x268;
  }
  return 1;
}



// FUNCTION 14978f020 FUN_14978f020 body=59 status=ok
// SIG undefined FUN_14978f020(void)

undefined8 FUN_14978f020(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14978f06c FUN_14978f06c body=40 status=ok
// SIG undefined FUN_14978f06c(void)

void FUN_14978f06c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x268) == '\x01') {
    FUN_14978f396(param_2);
    *(undefined1 *)(param_2 + 0x268) = 0;
  }
  return;
}



// FUNCTION 14978f0e2 FUN_14978f0e2 body=38 status=ok
// SIG undefined FUN_14978f0e2(void)

undefined8 FUN_14978f0e2(undefined8 param_1,int param_2)

{
  FUN_14978f396();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14978f108 FUN_14978f108 body=38 status=ok
// SIG undefined FUN_14978f108(void)

undefined8 FUN_14978f108(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FCollectionTransformSelectionLeafDataflowNode",1);
  return param_2;
}



// FUNCTION 14978f12e FUN_14978f12e body=38 status=ok
// SIG undefined FUN_14978f12e(void)

undefined8 FUN_14978f12e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"CollectionTransformSelectLeaf",1);
  return param_2;
}



// FUNCTION 14978f154 FUN_14978f154 body=38 status=ok
// SIG undefined FUN_14978f154(void)

undefined8 FUN_14978f154(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Selection|Transform",1);
  return param_2;
}



// FUNCTION 14978f17a FUN_14978f17a body=32 status=ok
// SIG undefined FUN_14978f17a(void)

undefined8 FUN_14978f17a(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14978f19a FUN_14978f19a body=123 status=ok
// SIG undefined FUN_14978f19a(void)

void FUN_14978f19a(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25e00 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25e00 =
         FUN_140002ddd(FUN_146758dff,uVar1,L"CollectionTransformSelectionLeafDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25e00,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014978f212. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14978f216 FUN_14978f216 body=93 status=ok
// SIG undefined FUN_14978f216(void)

void FUN_14978f216(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25e00 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25e00 =
         FUN_140002ddd(FUN_146758dff,uVar2,L"CollectionTransformSelectionLeafDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25e00,param_1);
  return;
}



// FUNCTION 14978f274 FUN_14978f274 body=55 status=ok
// SIG undefined FUN_14978f274(void)

void FUN_14978f274(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25e00 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25e00 =
         FUN_140002ddd(FUN_146758dff,uVar1,L"CollectionTransformSelectionLeafDataflowNode");
  }
  return;
}



// FUNCTION 14978f2ac FUN_14978f2ac body=233 status=ok
// SIG undefined FUN_14978f2ac(void)

ulonglong FUN_14978f2ac(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FCollectionTransformSelectionLeafDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14978f346;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14978f346;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14978f346;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14978f346:
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



// FUNCTION 14978f396 FUN_14978f396 body=60 status=ok
// SIG undefined FUN_14978f396(void)

void FUN_14978f396(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be679f0;
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 14978f3d2 FUN_14978f3d2 body=68 status=ok
// SIG undefined FUN_14978f3d2(void)

longlong FUN_14978f3d2(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x248,param_2 + 0x248);
  }
  return param_1;
}



// FUNCTION 14978f418 FUN_14978f418 body=72 status=ok
// SIG undefined FUN_14978f418(void)

void FUN_14978f418(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be67cb0;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4b] = 0;
  param_2[0x4c] = 0x8000000000;
  return;
}



// FUNCTION 14978f460 FUN_14978f460 body=72 status=ok
// SIG undefined FUN_14978f460(void)

void FUN_14978f460(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be67cb0;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4b] = 0;
  param_2[0x4c] = 0x8000000000;
  return;
}



// FUNCTION 14978f4cc FUN_14978f4cc body=63 status=ok
// SIG undefined FUN_14978f4cc(void)

undefined1 FUN_14978f4cc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14978f8e6(param_2,param_3);
    param_3 = param_3 + 0x268;
    param_2 = param_2 + 0x268;
  }
  return 1;
}



// FUNCTION 14978f534 FUN_14978f534 body=59 status=ok
// SIG undefined FUN_14978f534(void)

undefined8 FUN_14978f534(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14978f580 FUN_14978f580 body=40 status=ok
// SIG undefined FUN_14978f580(void)

void FUN_14978f580(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x268) == '\x01') {
    FUN_14978f8aa(param_2);
    *(undefined1 *)(param_2 + 0x268) = 0;
  }
  return;
}



// FUNCTION 14978f5f6 FUN_14978f5f6 body=38 status=ok
// SIG undefined FUN_14978f5f6(void)

undefined8 FUN_14978f5f6(undefined8 param_1,int param_2)

{
  FUN_14978f8aa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


