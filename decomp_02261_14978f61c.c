// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14978f61c FUN_14978f61c body=38 status=ok
// SIG undefined FUN_14978f61c(void)

undefined8 FUN_14978f61c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FCollectionTransformSelectionClusterDataflowNode",1);
  return param_2;
}



// FUNCTION 14978f642 FUN_14978f642 body=38 status=ok
// SIG undefined FUN_14978f642(void)

undefined8 FUN_14978f642(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"CollectionTransformSelectCluster",1);
  return param_2;
}



// FUNCTION 14978f668 FUN_14978f668 body=38 status=ok
// SIG undefined FUN_14978f668(void)

undefined8 FUN_14978f668(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Selection|Transform",1);
  return param_2;
}



// FUNCTION 14978f68e FUN_14978f68e body=32 status=ok
// SIG undefined FUN_14978f68e(void)

undefined8 FUN_14978f68e(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14978f6ae FUN_14978f6ae body=123 status=ok
// SIG undefined FUN_14978f6ae(void)

void FUN_14978f6ae(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25e18 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25e18 =
         FUN_140002ddd(FUN_146758e95,uVar1,L"CollectionTransformSelectionClusterDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25e18,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014978f726. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14978f72a FUN_14978f72a body=93 status=ok
// SIG undefined FUN_14978f72a(void)

void FUN_14978f72a(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25e18 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25e18 =
         FUN_140002ddd(FUN_146758e95,uVar2,L"CollectionTransformSelectionClusterDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25e18,param_1);
  return;
}



// FUNCTION 14978f788 FUN_14978f788 body=55 status=ok
// SIG undefined FUN_14978f788(void)

void FUN_14978f788(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25e18 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25e18 =
         FUN_140002ddd(FUN_146758e95,uVar1,L"CollectionTransformSelectionClusterDataflowNode");
  }
  return;
}



// FUNCTION 14978f7c0 FUN_14978f7c0 body=233 status=ok
// SIG undefined FUN_14978f7c0(void)

ulonglong FUN_14978f7c0(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FCollectionTransformSelectionClusterDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14978f85a;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14978f85a;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14978f85a;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14978f85a:
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



// FUNCTION 14978f8aa FUN_14978f8aa body=60 status=ok
// SIG undefined FUN_14978f8aa(void)

void FUN_14978f8aa(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be67cb0;
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 14978f8e6 FUN_14978f8e6 body=68 status=ok
// SIG undefined FUN_14978f8e6(void)

longlong FUN_14978f8e6(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x248,param_2 + 0x248);
  }
  return param_1;
}



// FUNCTION 14978f92c FUN_14978f92c body=72 status=ok
// SIG undefined FUN_14978f92c(void)

void FUN_14978f92c(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be67f80;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4b] = 0;
  param_2[0x4c] = 0x8000000000;
  return;
}



// FUNCTION 14978f974 FUN_14978f974 body=72 status=ok
// SIG undefined FUN_14978f974(void)

void FUN_14978f974(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be67f80;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4b] = 0;
  param_2[0x4c] = 0x8000000000;
  return;
}



// FUNCTION 14978f9e0 FUN_14978f9e0 body=63 status=ok
// SIG undefined FUN_14978f9e0(void)

undefined1 FUN_14978f9e0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14978fdfa(param_2,param_3);
    param_3 = param_3 + 0x268;
    param_2 = param_2 + 0x268;
  }
  return 1;
}



// FUNCTION 14978fa48 FUN_14978fa48 body=59 status=ok
// SIG undefined FUN_14978fa48(void)

undefined8 FUN_14978fa48(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14978fa94 FUN_14978fa94 body=40 status=ok
// SIG undefined FUN_14978fa94(void)

void FUN_14978fa94(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x268) == '\x01') {
    FUN_14978fdbe(param_2);
    *(undefined1 *)(param_2 + 0x268) = 0;
  }
  return;
}



// FUNCTION 14978fb0a FUN_14978fb0a body=38 status=ok
// SIG undefined FUN_14978fb0a(void)

undefined8 FUN_14978fb0a(undefined8 param_1,int param_2)

{
  FUN_14978fdbe();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14978fb30 FUN_14978fb30 body=38 status=ok
// SIG undefined FUN_14978fb30(void)

undefined8 FUN_14978fb30(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FCollectionTransformSelectionClusterDataflowNode_v2",1);
  return param_2;
}



// FUNCTION 14978fb56 FUN_14978fb56 body=38 status=ok
// SIG undefined FUN_14978fb56(void)

undefined8 FUN_14978fb56(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"CollectionTransformSelectCluster",1);
  return param_2;
}



// FUNCTION 14978fb7c FUN_14978fb7c body=38 status=ok
// SIG undefined FUN_14978fb7c(void)

undefined8 FUN_14978fb7c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Selection|Transform",1);
  return param_2;
}



// FUNCTION 14978fba2 FUN_14978fba2 body=32 status=ok
// SIG undefined FUN_14978fba2(void)

undefined8 FUN_14978fba2(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14978fbc2 FUN_14978fbc2 body=123 status=ok
// SIG undefined FUN_14978fbc2(void)

void FUN_14978fbc2(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25e30 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25e30 =
         FUN_140002ddd(FUN_146758f2b,uVar1,L"CollectionTransformSelectionClusterDataflowNode_v2");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25e30,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014978fc3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14978fc3e FUN_14978fc3e body=93 status=ok
// SIG undefined FUN_14978fc3e(void)

void FUN_14978fc3e(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25e30 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25e30 =
         FUN_140002ddd(FUN_146758f2b,uVar2,L"CollectionTransformSelectionClusterDataflowNode_v2");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25e30,param_1);
  return;
}



// FUNCTION 14978fc9c FUN_14978fc9c body=55 status=ok
// SIG undefined FUN_14978fc9c(void)

void FUN_14978fc9c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25e30 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25e30 =
         FUN_140002ddd(FUN_146758f2b,uVar1,L"CollectionTransformSelectionClusterDataflowNode_v2");
  }
  return;
}



// FUNCTION 14978fcd4 FUN_14978fcd4 body=233 status=ok
// SIG undefined FUN_14978fcd4(void)

ulonglong FUN_14978fcd4(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FCollectionTransformSelectionClusterDataflowNode_v2",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14978fd6e;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14978fd6e;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14978fd6e;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14978fd6e:
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



// FUNCTION 14978fdbe FUN_14978fdbe body=60 status=ok
// SIG undefined FUN_14978fdbe(void)

void FUN_14978fdbe(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be67f80;
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 14978fdfa FUN_14978fdfa body=68 status=ok
// SIG undefined FUN_14978fdfa(void)

longlong FUN_14978fdfa(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x248,param_2 + 0x248);
  }
  return param_1;
}



// FUNCTION 14978fe40 FUN_14978fe40 body=75 status=ok
// SIG undefined FUN_14978fe40(void)

void FUN_14978fe40(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be682e0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0x447a000000000000;
  *(undefined2 *)(param_2 + 0x36) = 0x100;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  return;
}



// FUNCTION 14978fe8c FUN_14978fe8c body=75 status=ok
// SIG undefined FUN_14978fe8c(void)

void FUN_14978fe8c(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be682e0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0x447a000000000000;
  *(undefined2 *)(param_2 + 0x36) = 0x100;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  return;
}



// FUNCTION 14978fefc FUN_14978fefc body=136 status=ok
// SIG undefined FUN_14978fefc(void)

undefined8 FUN_14978fefc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    FUN_144a67f5c(param_2 + 0x198,param_3 + 0x198);
    *(undefined8 *)(param_2 + 0x1a8) = *(undefined8 *)(param_3 + 0x1a8);
    *(undefined2 *)(param_2 + 0x1b0) = *(undefined2 *)(param_3 + 0x1b0);
    FUN_14054c6c4(param_2 + 0x1b8,param_3 + 0x1b8);
    param_2 = param_2 + 0x1c8;
    param_3 = param_3 + 0x1c8;
  }
  return 1;
}



// FUNCTION 14978ffac FUN_14978ffac body=59 status=ok
// SIG undefined FUN_14978ffac(void)

undefined8 FUN_14978ffac(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14978fff8 FUN_14978fff8 body=40 status=ok
// SIG undefined FUN_14978fff8(void)

void FUN_14978fff8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1c8) == '\x01') {
    FUN_149790322(param_2);
    *(undefined1 *)(param_2 + 0x1c8) = 0;
  }
  return;
}



// FUNCTION 14979006e FUN_14979006e body=38 status=ok
// SIG undefined FUN_14979006e(void)

undefined8 FUN_14979006e(undefined8 param_1,int param_2)

{
  FUN_149790322();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149790094 FUN_149790094 body=38 status=ok
// SIG undefined FUN_149790094(void)

undefined8 FUN_149790094(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FSelectFloatArrayIndicesInRangeDataflowNode",1);
  return param_2;
}



// FUNCTION 1497900ba FUN_1497900ba body=38 status=ok
// SIG undefined FUN_1497900ba(void)

undefined8 FUN_1497900ba(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"SelectFloatArrayIndicesInRange",1);
  return param_2;
}



// FUNCTION 1497900e0 FUN_1497900e0 body=38 status=ok
// SIG undefined FUN_1497900e0(void)

undefined8 FUN_1497900e0(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Selection|Array",1);
  return param_2;
}



// FUNCTION 149790106 FUN_149790106 body=32 status=ok
// SIG undefined FUN_149790106(void)

undefined8 FUN_149790106(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149790126 FUN_149790126 body=123 status=ok
// SIG undefined FUN_149790126(void)

void FUN_149790126(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25e60 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25e60 = FUN_140002ddd(FUN_146758ff3,uVar1,L"SelectFloatArrayIndicesInRangeDataflowNode")
    ;
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25e60,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014979019e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 1497901a2 FUN_1497901a2 body=93 status=ok
// SIG undefined FUN_1497901a2(void)

void FUN_1497901a2(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25e60 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25e60 = FUN_140002ddd(FUN_146758ff3,uVar2,L"SelectFloatArrayIndicesInRangeDataflowNode")
    ;
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25e60,param_1);
  return;
}



// FUNCTION 149790200 FUN_149790200 body=55 status=ok
// SIG undefined FUN_149790200(void)

void FUN_149790200(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25e60 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25e60 = FUN_140002ddd(FUN_146758ff3,uVar1,L"SelectFloatArrayIndicesInRangeDataflowNode")
    ;
  }
  return;
}



// FUNCTION 149790238 FUN_149790238 body=233 status=ok
// SIG undefined FUN_149790238(void)

ulonglong FUN_149790238(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FSelectFloatArrayIndicesInRangeDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_1497902d2;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1497902d2;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_1497902d2;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_1497902d2:
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



// FUNCTION 149790322 FUN_149790322 body=65 status=ok
// SIG undefined FUN_149790322(void)

void FUN_149790322(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be682e0;
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 149790364 FUN_149790364 body=105 status=ok
// SIG undefined FUN_149790364(void)

void FUN_149790364(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be685a0;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x49] = 0x447a000000000000;
  *(undefined2 *)(param_2 + 0x4a) = 0x100;
  *(undefined1 *)((longlong)param_2 + 0x252) = 1;
  param_2[0x4d] = 0;
  param_2[0x4e] = 0x8000000000;
  return;
}



// FUNCTION 1497903ce FUN_1497903ce body=105 status=ok
// SIG undefined FUN_1497903ce(void)

void FUN_1497903ce(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be685a0;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x49] = 0x447a000000000000;
  *(undefined2 *)(param_2 + 0x4a) = 0x100;
  *(undefined1 *)((longlong)param_2 + 0x252) = 1;
  param_2[0x4d] = 0;
  param_2[0x4e] = 0x8000000000;
  return;
}



// FUNCTION 14979045c FUN_14979045c body=63 status=ok
// SIG undefined FUN_14979045c(void)

undefined1 FUN_14979045c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149790876(param_2,param_3);
    param_3 = param_3 + 0x278;
    param_2 = param_2 + 0x278;
  }
  return 1;
}



// FUNCTION 1497904c4 FUN_1497904c4 body=59 status=ok
// SIG undefined FUN_1497904c4(void)

undefined8 FUN_1497904c4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149790510 FUN_149790510 body=40 status=ok
// SIG undefined FUN_149790510(void)

void FUN_149790510(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x278) == '\x01') {
    FUN_14979083a(param_2);
    *(undefined1 *)(param_2 + 0x278) = 0;
  }
  return;
}



// FUNCTION 149790586 FUN_149790586 body=38 status=ok
// SIG undefined FUN_149790586(void)

undefined8 FUN_149790586(undefined8 param_1,int param_2)

{
  FUN_14979083a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497905ac FUN_1497905ac body=38 status=ok
// SIG undefined FUN_1497905ac(void)

undefined8 FUN_1497905ac(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FCollectionTransformSelectionBySizeDataflowNode",1);
  return param_2;
}



// FUNCTION 1497905d2 FUN_1497905d2 body=38 status=ok
// SIG undefined FUN_1497905d2(void)

undefined8 FUN_1497905d2(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"CollectionTransformSelectBySize",1);
  return param_2;
}



// FUNCTION 1497905f8 FUN_1497905f8 body=38 status=ok
// SIG undefined FUN_1497905f8(void)

undefined8 FUN_1497905f8(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Selection|Transform",1);
  return param_2;
}



// FUNCTION 14979061e FUN_14979061e body=32 status=ok
// SIG undefined FUN_14979061e(void)

undefined8 FUN_14979061e(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14979063e FUN_14979063e body=123 status=ok
// SIG undefined FUN_14979063e(void)

void FUN_14979063e(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25e78 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25e78 =
         FUN_140002ddd(FUN_146759089,uVar1,L"CollectionTransformSelectionBySizeDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25e78,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001497906b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 1497906ba FUN_1497906ba body=93 status=ok
// SIG undefined FUN_1497906ba(void)

void FUN_1497906ba(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25e78 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25e78 =
         FUN_140002ddd(FUN_146759089,uVar2,L"CollectionTransformSelectionBySizeDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25e78,param_1);
  return;
}



// FUNCTION 149790718 FUN_149790718 body=55 status=ok
// SIG undefined FUN_149790718(void)

void FUN_149790718(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25e78 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25e78 =
         FUN_140002ddd(FUN_146759089,uVar1,L"CollectionTransformSelectionBySizeDataflowNode");
  }
  return;
}



// FUNCTION 149790750 FUN_149790750 body=233 status=ok
// SIG undefined FUN_149790750(void)

ulonglong FUN_149790750(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FCollectionTransformSelectionBySizeDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_1497907ea;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1497907ea;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_1497907ea;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_1497907ea:
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



// FUNCTION 14979083a FUN_14979083a body=60 status=ok
// SIG undefined FUN_14979083a(void)

void FUN_14979083a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be685a0;
  if (param_1[0x4d] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 149790876 FUN_149790876 body=94 status=ok
// SIG undefined FUN_149790876(void)

longlong FUN_149790876(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  *(undefined8 *)(param_1 + 0x248) = *(undefined8 *)(param_2 + 0x248);
  *(undefined4 *)(param_1 + 0x24f) = *(undefined4 *)(param_2 + 0x24f);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 600,param_2 + 600);
  }
  return param_1;
}



// FUNCTION 1497908d6 FUN_1497908d6 body=98 status=ok
// SIG undefined FUN_1497908d6(void)

void FUN_1497908d6(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be68860;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x49] = 0x447a000000000000;
  *(undefined2 *)(param_2 + 0x4a) = 0x100;
  param_2[0x4d] = 0;
  param_2[0x4e] = 0x8000000000;
  return;
}



// FUNCTION 149790938 FUN_149790938 body=98 status=ok
// SIG undefined FUN_149790938(void)

void FUN_149790938(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be68860;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x49] = 0x447a000000000000;
  *(undefined2 *)(param_2 + 0x4a) = 0x100;
  param_2[0x4d] = 0;
  param_2[0x4e] = 0x8000000000;
  return;
}



// FUNCTION 1497909be FUN_1497909be body=63 status=ok
// SIG undefined FUN_1497909be(void)

undefined1 FUN_1497909be(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149790dd8(param_2,param_3);
    param_3 = param_3 + 0x278;
    param_2 = param_2 + 0x278;
  }
  return 1;
}



// FUNCTION 149790a26 FUN_149790a26 body=59 status=ok
// SIG undefined FUN_149790a26(void)

undefined8 FUN_149790a26(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149790a72 FUN_149790a72 body=40 status=ok
// SIG undefined FUN_149790a72(void)

void FUN_149790a72(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x278) == '\x01') {
    FUN_149790d9c(param_2);
    *(undefined1 *)(param_2 + 0x278) = 0;
  }
  return;
}



// FUNCTION 149790ae8 FUN_149790ae8 body=38 status=ok
// SIG undefined FUN_149790ae8(void)

undefined8 FUN_149790ae8(undefined8 param_1,int param_2)

{
  FUN_149790d9c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149790b0e FUN_149790b0e body=38 status=ok
// SIG undefined FUN_149790b0e(void)

undefined8 FUN_149790b0e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FCollectionTransformSelectionByVolumeDataflowNode",1);
  return param_2;
}



// FUNCTION 149790b34 FUN_149790b34 body=38 status=ok
// SIG undefined FUN_149790b34(void)

undefined8 FUN_149790b34(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"CollectionTransformSelectByVolume",1);
  return param_2;
}



// FUNCTION 149790b5a FUN_149790b5a body=38 status=ok
// SIG undefined FUN_149790b5a(void)

undefined8 FUN_149790b5a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Selection|Transform",1);
  return param_2;
}



// FUNCTION 149790b80 FUN_149790b80 body=32 status=ok
// SIG undefined FUN_149790b80(void)

undefined8 FUN_149790b80(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149790ba0 FUN_149790ba0 body=123 status=ok
// SIG undefined FUN_149790ba0(void)

void FUN_149790ba0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25e90 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25e90 =
         FUN_140002ddd(FUN_14675911f,uVar1,L"CollectionTransformSelectionByVolumeDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25e90,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149790c18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149790c1c FUN_149790c1c body=93 status=ok
// SIG undefined FUN_149790c1c(void)

void FUN_149790c1c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25e90 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25e90 =
         FUN_140002ddd(FUN_14675911f,uVar2,L"CollectionTransformSelectionByVolumeDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25e90,param_1);
  return;
}



// FUNCTION 149790c7a FUN_149790c7a body=55 status=ok
// SIG undefined FUN_149790c7a(void)

void FUN_149790c7a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25e90 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25e90 =
         FUN_140002ddd(FUN_14675911f,uVar1,L"CollectionTransformSelectionByVolumeDataflowNode");
  }
  return;
}



// FUNCTION 149790cb2 FUN_149790cb2 body=233 status=ok
// SIG undefined FUN_149790cb2(void)

ulonglong FUN_149790cb2(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FCollectionTransformSelectionByVolumeDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149790d4c;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149790d4c;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149790d4c;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149790d4c:
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



// FUNCTION 149790d9c FUN_149790d9c body=60 status=ok
// SIG undefined FUN_149790d9c(void)

void FUN_149790d9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be68860;
  if (param_1[0x4d] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 149790dd8 FUN_149790dd8 body=96 status=ok
// SIG undefined FUN_149790dd8(void)

longlong FUN_149790dd8(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  *(undefined8 *)(param_1 + 0x248) = *(undefined8 *)(param_2 + 0x248);
  *(undefined2 *)(param_1 + 0x250) = *(undefined2 *)(param_2 + 0x250);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 600,param_2 + 600);
  }
  return param_1;
}



// FUNCTION 149790e6e FUN_149790e6e body=63 status=ok
// SIG undefined FUN_149790e6e(void)

undefined1 FUN_149790e6e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14979133c(param_2,param_3);
    param_3 = param_3 + 0x310;
    param_2 = param_2 + 0x310;
  }
  return 1;
}



// FUNCTION 149790ed6 FUN_149790ed6 body=59 status=ok
// SIG undefined FUN_149790ed6(void)

undefined8 FUN_149790ed6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149790f22 FUN_149790f22 body=40 status=ok
// SIG undefined FUN_149790f22(void)

void FUN_149790f22(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x310) == '\x01') {
    FUN_149791300(param_2);
    *(undefined1 *)(param_2 + 0x310) = 0;
  }
  return;
}



// FUNCTION 149790f98 FUN_149790f98 body=179 status=ok
// SIG undefined FUN_149790f98(void)

undefined8 * FUN_149790f98(undefined8 *param_1)

{
  FUN_146fc02b8();
  *param_1 = &PTR_FUN_14be68c30;
  FUN_1414db454(param_1 + 0x33);
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  *(undefined4 *)(param_1 + 0x52) = 0;
  *(undefined4 *)((longlong)param_1 + 0x294) = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  *(undefined4 *)((longlong)param_1 + 0x29c) = 0x3ff00000;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0x3ff0000000000000;
  param_1[0x59] = 0x3ff0000000000000;
  param_1[0x5a] = 0x3ff0000000000000;
  param_1[0x5b] = 0;
  *(undefined2 *)(param_1 + 0x5c) = 0x102;
  param_1[0x5f] = 0;
  param_1[0x60] = 0x8000000000;
  return param_1;
}



// FUNCTION 14979104c FUN_14979104c body=38 status=ok
// SIG undefined FUN_14979104c(void)

undefined8 FUN_14979104c(undefined8 param_1,int param_2)

{
  FUN_149791300();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149791072 FUN_149791072 body=38 status=ok
// SIG undefined FUN_149791072(void)

undefined8 FUN_149791072(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FCollectionTransformSelectionInBoxDataflowNode",1);
  return param_2;
}



// FUNCTION 149791098 FUN_149791098 body=38 status=ok
// SIG undefined FUN_149791098(void)

undefined8 FUN_149791098(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"CollectionTransformSelectInBox",1);
  return param_2;
}



// FUNCTION 1497910be FUN_1497910be body=38 status=ok
// SIG undefined FUN_1497910be(void)

undefined8 FUN_1497910be(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Selection|Transform",1);
  return param_2;
}



// FUNCTION 1497910e4 FUN_1497910e4 body=32 status=ok
// SIG undefined FUN_1497910e4(void)

undefined8 FUN_1497910e4(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149791104 FUN_149791104 body=123 status=ok
// SIG undefined FUN_149791104(void)

void FUN_149791104(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25ec0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25ec0 =
         FUN_140002ddd(FUN_1467591e5,uVar1,L"CollectionTransformSelectionInBoxDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25ec0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014979117c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149791180 FUN_149791180 body=93 status=ok
// SIG undefined FUN_149791180(void)

void FUN_149791180(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25ec0 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25ec0 =
         FUN_140002ddd(FUN_1467591e5,uVar2,L"CollectionTransformSelectionInBoxDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25ec0,param_1);
  return;
}



// FUNCTION 1497911de FUN_1497911de body=55 status=ok
// SIG undefined FUN_1497911de(void)

void FUN_1497911de(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25ec0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25ec0 =
         FUN_140002ddd(FUN_1467591e5,uVar1,L"CollectionTransformSelectionInBoxDataflowNode");
  }
  return;
}



// FUNCTION 149791216 FUN_149791216 body=233 status=ok
// SIG undefined FUN_149791216(void)

ulonglong FUN_149791216(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FCollectionTransformSelectionInBoxDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_1497912b0;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1497912b0;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_1497912b0;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_1497912b0:
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



// FUNCTION 149791300 FUN_149791300 body=60 status=ok
// SIG undefined FUN_149791300(void)

void FUN_149791300(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be68c30;
  if (param_1[0x5f] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 14979133c FUN_14979133c body=91 status=ok
// SIG undefined FUN_14979133c(void)

longlong FUN_14979133c(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  memcpy((void *)(param_1 + 0x248),(void *)(param_2 + 0x248),0x9a);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x2e8,param_2 + 0x2e8);
  }
  return param_1;
}



// FUNCTION 1497913cc FUN_1497913cc body=63 status=ok
// SIG undefined FUN_1497913cc(void)

undefined1 FUN_1497913cc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14979188c(param_2,param_3);
    param_3 = param_3 + 0x300;
    param_2 = param_2 + 0x300;
  }
  return 1;
}



// FUNCTION 149791434 FUN_149791434 body=59 status=ok
// SIG undefined FUN_149791434(void)

undefined8 FUN_149791434(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149791480 FUN_149791480 body=40 status=ok
// SIG undefined FUN_149791480(void)

void FUN_149791480(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x300) == '\x01') {
    FUN_149791850(param_2);
    *(undefined1 *)(param_2 + 0x300) = 0;
  }
  return;
}



// FUNCTION 1497914f6 FUN_1497914f6 body=165 status=ok
// SIG undefined FUN_1497914f6(void)

undefined8 * FUN_1497914f6(undefined8 *param_1)

{
  FUN_146fc02b8();
  *param_1 = &PTR_FUN_14be68ef0;
  FUN_1414db454(param_1 + 0x33);
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x284) = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28c) = 0x3ff00000;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0x3ff0000000000000;
  param_1[0x57] = 0x3ff0000000000000;
  param_1[0x58] = 0x3ff0000000000000;
  param_1[0x59] = 0;
  *(undefined2 *)(param_1 + 0x5a) = 0x102;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0x8000000000;
  return param_1;
}



// FUNCTION 14979159c FUN_14979159c body=38 status=ok
// SIG undefined FUN_14979159c(void)

undefined8 FUN_14979159c(undefined8 param_1,int param_2)

{
  FUN_149791850();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497915c2 FUN_1497915c2 body=38 status=ok
// SIG undefined FUN_1497915c2(void)

undefined8 FUN_1497915c2(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FCollectionTransformSelectionInSphereDataflowNode",1);
  return param_2;
}



// FUNCTION 1497915e8 FUN_1497915e8 body=38 status=ok
// SIG undefined FUN_1497915e8(void)

undefined8 FUN_1497915e8(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"CollectionTransformSelectInSphere",1);
  return param_2;
}



// FUNCTION 14979160e FUN_14979160e body=38 status=ok
// SIG undefined FUN_14979160e(void)

undefined8 FUN_14979160e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Selection|Transform",1);
  return param_2;
}



// FUNCTION 149791634 FUN_149791634 body=32 status=ok
// SIG undefined FUN_149791634(void)

undefined8 FUN_149791634(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149791654 FUN_149791654 body=123 status=ok
// SIG undefined FUN_149791654(void)

void FUN_149791654(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25ed8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25ed8 =
         FUN_140002ddd(FUN_14675927b,uVar1,L"CollectionTransformSelectionInSphereDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25ed8,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001497916cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 1497916d0 FUN_1497916d0 body=93 status=ok
// SIG undefined FUN_1497916d0(void)

void FUN_1497916d0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25ed8 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25ed8 =
         FUN_140002ddd(FUN_14675927b,uVar2,L"CollectionTransformSelectionInSphereDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25ed8,param_1);
  return;
}



// FUNCTION 14979172e FUN_14979172e body=55 status=ok
// SIG undefined FUN_14979172e(void)

void FUN_14979172e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25ed8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25ed8 =
         FUN_140002ddd(FUN_14675927b,uVar1,L"CollectionTransformSelectionInSphereDataflowNode");
  }
  return;
}



// FUNCTION 149791766 FUN_149791766 body=233 status=ok
// SIG undefined FUN_149791766(void)

ulonglong FUN_149791766(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FCollectionTransformSelectionInSphereDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149791800;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149791800;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149791800;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149791800:
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



// FUNCTION 149791850 FUN_149791850 body=60 status=ok
// SIG undefined FUN_149791850(void)

void FUN_149791850(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be68ef0;
  if (param_1[0x5d] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 14979188c FUN_14979188c body=91 status=ok
// SIG undefined FUN_14979188c(void)

longlong FUN_14979188c(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  memcpy((void *)(param_1 + 0x248),(void *)(param_2 + 0x248),0x8a);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x2d8,param_2 + 0x2d8);
  }
  return param_1;
}



// FUNCTION 14979191c FUN_14979191c body=63 status=ok
// SIG undefined FUN_14979191c(void)

undefined1 FUN_14979191c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149791de0(param_2,param_3);
    param_3 = param_3 + 0x298;
    param_2 = param_2 + 0x298;
  }
  return 1;
}



// FUNCTION 149791984 FUN_149791984 body=59 status=ok
// SIG undefined FUN_149791984(void)

undefined8 FUN_149791984(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497919d0 FUN_1497919d0 body=40 status=ok
// SIG undefined FUN_1497919d0(void)

void FUN_1497919d0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x298) == '\x01') {
    FUN_149791d82(param_2);
    *(undefined1 *)(param_2 + 0x298) = 0;
  }
  return;
}



// FUNCTION 149791a46 FUN_149791a46 body=136 status=ok
// SIG undefined FUN_149791a46(void)

undefined8 * FUN_149791a46(undefined8 *param_1)

{
  FUN_146fc02b8();
  *param_1 = &PTR_FUN_14be691c0;
  FUN_1414db454(param_1 + 0x33);
  FUN_1400b22c2(param_1 + 0x49,"Transform");
  FUN_1400b22c2(param_1 + 0x4b,&DAT_149e02088);
  param_1[0x4d] = 0x447a000000000000;
  *(undefined2 *)(param_1 + 0x4e) = 0x100;
  param_1[0x51] = 0;
  param_1[0x52] = 0x8000000000;
  return param_1;
}



// FUNCTION 149791ace FUN_149791ace body=38 status=ok
// SIG undefined FUN_149791ace(void)

undefined8 FUN_149791ace(undefined8 param_1,int param_2)

{
  FUN_149791d82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149791af4 FUN_149791af4 body=38 status=ok
// SIG undefined FUN_149791af4(void)

undefined8 FUN_149791af4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FCollectionTransformSelectionByFloatAttrDataflowNode",1);
  return param_2;
}



// FUNCTION 149791b1a FUN_149791b1a body=38 status=ok
// SIG undefined FUN_149791b1a(void)

undefined8 FUN_149791b1a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"CollectionTransformSelectByFloatAttribute",1);
  return param_2;
}



// FUNCTION 149791b40 FUN_149791b40 body=38 status=ok
// SIG undefined FUN_149791b40(void)

undefined8 FUN_149791b40(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Selection|Transform",1);
  return param_2;
}



// FUNCTION 149791b66 FUN_149791b66 body=32 status=ok
// SIG undefined FUN_149791b66(void)

undefined8 FUN_149791b66(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149791b86 FUN_149791b86 body=123 status=ok
// SIG undefined FUN_149791b86(void)

void FUN_149791b86(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25ef0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25ef0 =
         FUN_140002ddd(FUN_146759311,uVar1,L"CollectionTransformSelectionByFloatAttrDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25ef0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149791bfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149791c02 FUN_149791c02 body=93 status=ok
// SIG undefined FUN_149791c02(void)

void FUN_149791c02(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25ef0 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25ef0 =
         FUN_140002ddd(FUN_146759311,uVar2,L"CollectionTransformSelectionByFloatAttrDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25ef0,param_1);
  return;
}



// FUNCTION 149791c60 FUN_149791c60 body=55 status=ok
// SIG undefined FUN_149791c60(void)

void FUN_149791c60(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25ef0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25ef0 =
         FUN_140002ddd(FUN_146759311,uVar1,L"CollectionTransformSelectionByFloatAttrDataflowNode");
  }
  return;
}



// FUNCTION 149791c98 FUN_149791c98 body=233 status=ok
// SIG undefined FUN_149791c98(void)

ulonglong FUN_149791c98(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FCollectionTransformSelectionByFloatAttrDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149791d32;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149791d32;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149791d32;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149791d32:
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



// FUNCTION 149791d82 FUN_149791d82 body=94 status=ok
// SIG undefined FUN_149791d82(void)

void FUN_149791d82(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be691c0;
  if (param_1[0x51] != 0) {
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



// FUNCTION 149791de0 FUN_149791de0 body=130 status=ok
// SIG undefined FUN_149791de0(void)

longlong FUN_149791de0(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  FUN_144a787a6(param_1 + 0x248,param_2 + 0x248);
  FUN_144a787a6(param_1 + 600,param_2 + 600);
  *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_2 + 0x268);
  *(undefined2 *)(param_1 + 0x270) = *(undefined2 *)(param_2 + 0x270);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x278,param_2 + 0x278);
  }
  return param_1;
}



// FUNCTION 149791e98 FUN_149791e98 body=63 status=ok
// SIG undefined FUN_149791e98(void)

undefined1 FUN_149791e98(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14979235c(param_2,param_3);
    param_3 = param_3 + 0x298;
    param_2 = param_2 + 0x298;
  }
  return 1;
}



// FUNCTION 149791f00 FUN_149791f00 body=59 status=ok
// SIG undefined FUN_149791f00(void)

undefined8 FUN_149791f00(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149791f4c FUN_149791f4c body=40 status=ok
// SIG undefined FUN_149791f4c(void)

void FUN_149791f4c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x298) == '\x01') {
    FUN_1497922fe(param_2);
    *(undefined1 *)(param_2 + 0x298) = 0;
  }
  return;
}



// FUNCTION 149791fc2 FUN_149791fc2 body=136 status=ok
// SIG undefined FUN_149791fc2(void)

undefined8 * FUN_149791fc2(undefined8 *param_1)

{
  FUN_146fc02b8();
  *param_1 = &PTR_FUN_14be69490;
  FUN_1414db454(param_1 + 0x33);
  FUN_1400b22c2(param_1 + 0x49,"Transform");
  FUN_1400b22c2(param_1 + 0x4b,&DAT_149e02088);
  param_1[0x4d] = 0x3e800000000;
  *(undefined2 *)(param_1 + 0x4e) = 0x100;
  param_1[0x51] = 0;
  param_1[0x52] = 0x8000000000;
  return param_1;
}



// FUNCTION 14979204a FUN_14979204a body=38 status=ok
// SIG undefined FUN_14979204a(void)

undefined8 FUN_14979204a(undefined8 param_1,int param_2)

{
  FUN_1497922fe();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149792070 FUN_149792070 body=38 status=ok
// SIG undefined FUN_149792070(void)

undefined8 FUN_149792070(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FCollectionTransformSelectionByIntAttrDataflowNode",1);
  return param_2;
}



// FUNCTION 149792096 FUN_149792096 body=38 status=ok
// SIG undefined FUN_149792096(void)

undefined8 FUN_149792096(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"CollectionTransformSelectByIntAttribute",1);
  return param_2;
}



// FUNCTION 1497920bc FUN_1497920bc body=38 status=ok
// SIG undefined FUN_1497920bc(void)

undefined8 FUN_1497920bc(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Selection|Transform",1);
  return param_2;
}



// FUNCTION 1497920e2 FUN_1497920e2 body=32 status=ok
// SIG undefined FUN_1497920e2(void)

undefined8 FUN_1497920e2(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149792102 FUN_149792102 body=123 status=ok
// SIG undefined FUN_149792102(void)

void FUN_149792102(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25f08 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25f08 =
         FUN_140002ddd(FUN_1467593a7,uVar1,L"CollectionTransformSelectionByIntAttrDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25f08,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014979217a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14979217e FUN_14979217e body=93 status=ok
// SIG undefined FUN_14979217e(void)

void FUN_14979217e(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25f08 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25f08 =
         FUN_140002ddd(FUN_1467593a7,uVar2,L"CollectionTransformSelectionByIntAttrDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25f08,param_1);
  return;
}



// FUNCTION 1497921dc FUN_1497921dc body=55 status=ok
// SIG undefined FUN_1497921dc(void)

void FUN_1497921dc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25f08 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25f08 =
         FUN_140002ddd(FUN_1467593a7,uVar1,L"CollectionTransformSelectionByIntAttrDataflowNode");
  }
  return;
}



// FUNCTION 149792214 FUN_149792214 body=233 status=ok
// SIG undefined FUN_149792214(void)

ulonglong FUN_149792214(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FCollectionTransformSelectionByIntAttrDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_1497922ae;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1497922ae;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_1497922ae;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_1497922ae:
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



// FUNCTION 1497922fe FUN_1497922fe body=94 status=ok
// SIG undefined FUN_1497922fe(void)

void FUN_1497922fe(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be69490;
  if (param_1[0x51] != 0) {
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



// FUNCTION 14979235c FUN_14979235c body=130 status=ok
// SIG undefined FUN_14979235c(void)

longlong FUN_14979235c(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  FUN_144a787a6(param_1 + 0x248,param_2 + 0x248);
  FUN_144a787a6(param_1 + 600,param_2 + 600);
  *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_2 + 0x268);
  *(undefined2 *)(param_1 + 0x270) = *(undefined2 *)(param_2 + 0x270);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x278,param_2 + 0x278);
  }
  return param_1;
}



// FUNCTION 1497923e0 FUN_1497923e0 body=82 status=ok
// SIG undefined FUN_1497923e0(void)

void FUN_1497923e0(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be69760;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4d] = 0;
  param_2[0x4e] = 0x8000000000;
  param_2[0x49] = 0;
  param_2[0x4a] = 0;
  return;
}



// FUNCTION 149792432 FUN_149792432 body=82 status=ok
// SIG undefined FUN_149792432(void)

void FUN_149792432(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be69760;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4d] = 0;
  param_2[0x4e] = 0x8000000000;
  param_2[0x49] = 0;
  param_2[0x4a] = 0;
  return;
}



// FUNCTION 1497924a8 FUN_1497924a8 body=63 status=ok
// SIG undefined FUN_1497924a8(void)

undefined1 FUN_1497924a8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1497928d4(param_2,param_3);
    param_3 = param_3 + 0x278;
    param_2 = param_2 + 0x278;
  }
  return 1;
}



// FUNCTION 149792510 FUN_149792510 body=59 status=ok
// SIG undefined FUN_149792510(void)

undefined8 FUN_149792510(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14979255c FUN_14979255c body=40 status=ok
// SIG undefined FUN_14979255c(void)

void FUN_14979255c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x278) == '\x01') {
    FUN_149792886(param_2);
    *(undefined1 *)(param_2 + 0x278) = 0;
  }
  return;
}



// FUNCTION 1497925d2 FUN_1497925d2 body=38 status=ok
// SIG undefined FUN_1497925d2(void)

undefined8 FUN_1497925d2(undefined8 param_1,int param_2)

{
  FUN_149792886();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497925f8 FUN_1497925f8 body=38 status=ok
// SIG undefined FUN_1497925f8(void)

undefined8 FUN_1497925f8(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FCollectionVertexSelectionCustomDataflowNode",1);
  return param_2;
}



// FUNCTION 14979261e FUN_14979261e body=38 status=ok
// SIG undefined FUN_14979261e(void)

undefined8 FUN_14979261e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"CollectionVertexSelectCustom",1);
  return param_2;
}



// FUNCTION 149792644 FUN_149792644 body=38 status=ok
// SIG undefined FUN_149792644(void)

undefined8 FUN_149792644(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Selection|Vertex",1);
  return param_2;
}



// FUNCTION 14979266a FUN_14979266a body=32 status=ok
// SIG undefined FUN_14979266a(void)

undefined8 FUN_14979266a(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14979268a FUN_14979268a body=123 status=ok
// SIG undefined FUN_14979268a(void)

void FUN_14979268a(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25f20 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25f20 =
         FUN_140002ddd(FUN_14675943d,uVar1,L"CollectionVertexSelectionCustomDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25f20,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149792702. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149792706 FUN_149792706 body=93 status=ok
// SIG undefined FUN_149792706(void)

void FUN_149792706(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25f20 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25f20 =
         FUN_140002ddd(FUN_14675943d,uVar2,L"CollectionVertexSelectionCustomDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25f20,param_1);
  return;
}



// FUNCTION 149792764 FUN_149792764 body=55 status=ok
// SIG undefined FUN_149792764(void)

void FUN_149792764(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25f20 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25f20 =
         FUN_140002ddd(FUN_14675943d,uVar1,L"CollectionVertexSelectionCustomDataflowNode");
  }
  return;
}



// FUNCTION 14979279c FUN_14979279c body=233 status=ok
// SIG undefined FUN_14979279c(void)

ulonglong FUN_14979279c(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FCollectionVertexSelectionCustomDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149792836;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149792836;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149792836;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149792836:
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



// FUNCTION 149792886 FUN_149792886 body=77 status=ok
// SIG undefined FUN_149792886(void)

void FUN_149792886(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be69760;
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



// FUNCTION 1497928d4 FUN_1497928d4 body=85 status=ok
// SIG undefined FUN_1497928d4(void)

longlong FUN_1497928d4(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  FUN_144a787a6(param_1 + 0x248,param_2 + 0x248);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 600,param_2 + 600);
  }
  return param_1;
}



// FUNCTION 14979292a FUN_14979292a body=82 status=ok
// SIG undefined FUN_14979292a(void)

void FUN_14979292a(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be69a40;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4d] = 0;
  param_2[0x4e] = 0x8000000000;
  param_2[0x49] = 0;
  param_2[0x4a] = 0;
  return;
}



// FUNCTION 14979297c FUN_14979297c body=82 status=ok
// SIG undefined FUN_14979297c(void)

void FUN_14979297c(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be69a40;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4d] = 0;
  param_2[0x4e] = 0x8000000000;
  param_2[0x49] = 0;
  param_2[0x4a] = 0;
  return;
}



// FUNCTION 1497929f2 FUN_1497929f2 body=63 status=ok
// SIG undefined FUN_1497929f2(void)

undefined1 FUN_1497929f2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149792e1e(param_2,param_3);
    param_3 = param_3 + 0x278;
    param_2 = param_2 + 0x278;
  }
  return 1;
}



// FUNCTION 149792a5a FUN_149792a5a body=59 status=ok
// SIG undefined FUN_149792a5a(void)

undefined8 FUN_149792a5a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149792aa6 FUN_149792aa6 body=40 status=ok
// SIG undefined FUN_149792aa6(void)

void FUN_149792aa6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x278) == '\x01') {
    FUN_149792dd0(param_2);
    *(undefined1 *)(param_2 + 0x278) = 0;
  }
  return;
}



// FUNCTION 149792b1c FUN_149792b1c body=38 status=ok
// SIG undefined FUN_149792b1c(void)

undefined8 FUN_149792b1c(undefined8 param_1,int param_2)

{
  FUN_149792dd0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149792b42 FUN_149792b42 body=38 status=ok
// SIG undefined FUN_149792b42(void)

undefined8 FUN_149792b42(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FCollectionFaceSelectionCustomDataflowNode",1);
  return param_2;
}



// FUNCTION 149792b68 FUN_149792b68 body=38 status=ok
// SIG undefined FUN_149792b68(void)

undefined8 FUN_149792b68(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"CollectionFaceSelectCustom",1);
  return param_2;
}



// FUNCTION 149792b8e FUN_149792b8e body=38 status=ok
// SIG undefined FUN_149792b8e(void)

undefined8 FUN_149792b8e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Selection|Face",1);
  return param_2;
}



// FUNCTION 149792bb4 FUN_149792bb4 body=32 status=ok
// SIG undefined FUN_149792bb4(void)

undefined8 FUN_149792bb4(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149792bd4 FUN_149792bd4 body=123 status=ok
// SIG undefined FUN_149792bd4(void)

void FUN_149792bd4(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25f38 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25f38 = FUN_140002ddd(FUN_1467594d3,uVar1,L"CollectionFaceSelectionCustomDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25f38,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149792c4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149792c50 FUN_149792c50 body=93 status=ok
// SIG undefined FUN_149792c50(void)

void FUN_149792c50(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25f38 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25f38 = FUN_140002ddd(FUN_1467594d3,uVar2,L"CollectionFaceSelectionCustomDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25f38,param_1);
  return;
}



// FUNCTION 149792cae FUN_149792cae body=55 status=ok
// SIG undefined FUN_149792cae(void)

void FUN_149792cae(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25f38 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25f38 = FUN_140002ddd(FUN_1467594d3,uVar1,L"CollectionFaceSelectionCustomDataflowNode");
  }
  return;
}



// FUNCTION 149792ce6 FUN_149792ce6 body=233 status=ok
// SIG undefined FUN_149792ce6(void)

ulonglong FUN_149792ce6(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FCollectionFaceSelectionCustomDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149792d80;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149792d80;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149792d80;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149792d80:
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



// FUNCTION 149792dd0 FUN_149792dd0 body=77 status=ok
// SIG undefined FUN_149792dd0(void)

void FUN_149792dd0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be69a40;
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



// FUNCTION 149792e1e FUN_149792e1e body=85 status=ok
// SIG undefined FUN_149792e1e(void)

longlong FUN_149792e1e(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  FUN_144a787a6(param_1 + 0x248,param_2 + 0x248);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 600,param_2 + 600);
  }
  return param_1;
}



// FUNCTION 149792e74 FUN_149792e74 body=105 status=ok
// SIG undefined FUN_149792e74(void)

void FUN_149792e74(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be69d20;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4b] = 0;
  param_2[0x4c] = 0x8000000000;
  param_2[0x4f] = 0;
  param_2[0x50] = 0x8000000000;
  param_2[0x53] = 0;
  param_2[0x54] = 0x8000000000;
  *(undefined1 *)(param_2 + 0x55) = 0;
  return;
}



// FUNCTION 149792ede FUN_149792ede body=105 status=ok
// SIG undefined FUN_149792ede(void)

void FUN_149792ede(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be69d20;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4b] = 0;
  param_2[0x4c] = 0x8000000000;
  param_2[0x4f] = 0;
  param_2[0x50] = 0x8000000000;
  param_2[0x53] = 0;
  param_2[0x54] = 0x8000000000;
  *(undefined1 *)(param_2 + 0x55) = 0;
  return;
}



// FUNCTION 149792f6c FUN_149792f6c body=63 status=ok
// SIG undefined FUN_149792f6c(void)

undefined1 FUN_149792f6c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1497933a8(param_2,param_3);
    param_3 = param_3 + 0x2b0;
    param_2 = param_2 + 0x2b0;
  }
  return 1;
}



// FUNCTION 149792fd4 FUN_149792fd4 body=59 status=ok
// SIG undefined FUN_149792fd4(void)

undefined8 FUN_149792fd4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149793020 FUN_149793020 body=40 status=ok
// SIG undefined FUN_149793020(void)

void FUN_149793020(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2b0) == '\x01') {
    FUN_14979334a(param_2);
    *(undefined1 *)(param_2 + 0x2b0) = 0;
  }
  return;
}



// FUNCTION 149793096 FUN_149793096 body=38 status=ok
// SIG undefined FUN_149793096(void)

undefined8 FUN_149793096(undefined8 param_1,int param_2)

{
  FUN_14979334a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497930bc FUN_1497930bc body=38 status=ok
// SIG undefined FUN_1497930bc(void)

undefined8 FUN_1497930bc(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FCollectionSelectionConvertDataflowNode",1);
  return param_2;
}



// FUNCTION 1497930e2 FUN_1497930e2 body=38 status=ok
// SIG undefined FUN_1497930e2(void)

undefined8 FUN_1497930e2(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"CollectionSelectionConvert",1);
  return param_2;
}



// FUNCTION 149793108 FUN_149793108 body=38 status=ok
// SIG undefined FUN_149793108(void)

undefined8 FUN_149793108(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Selection",1);
  return param_2;
}



// FUNCTION 14979312e FUN_14979312e body=32 status=ok
// SIG undefined FUN_14979312e(void)

undefined8 FUN_14979312e(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14979314e FUN_14979314e body=123 status=ok
// SIG undefined FUN_14979314e(void)

void FUN_14979314e(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25f50 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25f50 = FUN_140002ddd(FUN_146759569,uVar1,L"CollectionSelectionConvertDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25f50,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001497931c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 1497931ca FUN_1497931ca body=93 status=ok
// SIG undefined FUN_1497931ca(void)

void FUN_1497931ca(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25f50 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25f50 = FUN_140002ddd(FUN_146759569,uVar2,L"CollectionSelectionConvertDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25f50,param_1);
  return;
}



// FUNCTION 149793228 FUN_149793228 body=55 status=ok
// SIG undefined FUN_149793228(void)

void FUN_149793228(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25f50 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25f50 = FUN_140002ddd(FUN_146759569,uVar1,L"CollectionSelectionConvertDataflowNode");
  }
  return;
}



// FUNCTION 149793260 FUN_149793260 body=233 status=ok
// SIG undefined FUN_149793260(void)

ulonglong FUN_149793260(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FCollectionSelectionConvertDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_1497932fa;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1497932fa;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_1497932fa;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_1497932fa:
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



// FUNCTION 14979334a FUN_14979334a body=94 status=ok
// SIG undefined FUN_14979334a(void)

void FUN_14979334a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be69d20;
  if (param_1[0x53] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 1497933a8 FUN_1497933a8 body=112 status=ok
// SIG undefined FUN_1497933a8(void)

longlong FUN_1497933a8(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x248,param_2 + 0x248);
    FUN_144a69486(param_1 + 0x268,param_2 + 0x268);
    FUN_144a69486(param_1 + 0x288,param_2 + 0x288);
  }
  *(undefined1 *)(param_1 + 0x2a8) = *(undefined1 *)(param_2 + 0x2a8);
  return param_1;
}



// FUNCTION 14979341a FUN_14979341a body=60 status=ok
// SIG undefined FUN_14979341a(void)

void FUN_14979341a(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be69fe0;
  param_2[0x35] = 0;
  param_2[0x36] = 0x8000000000;
  return;
}



// FUNCTION 149793456 FUN_149793456 body=60 status=ok
// SIG undefined FUN_149793456(void)

void FUN_149793456(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be69fe0;
  param_2[0x35] = 0;
  param_2[0x36] = 0x8000000000;
  return;
}



// FUNCTION 1497934b6 FUN_1497934b6 body=90 status=ok
// SIG undefined FUN_1497934b6(void)

undefined1 FUN_1497934b6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 149793538 FUN_149793538 body=59 status=ok
// SIG undefined FUN_149793538(void)

undefined8 FUN_149793538(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149793584 FUN_149793584 body=67 status=ok
// SIG undefined FUN_149793584(void)

void FUN_149793584(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x37) == '\x01') {
    *param_2 = &PTR_FUN_14be69fe0;
    if (param_2[0x35] != 0) {
      FUN_1400020a8();
    }
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x37) = 0;
  }
  return;
}



// FUNCTION 149793616 FUN_149793616 body=68 status=ok
// SIG undefined FUN_149793616(void)

undefined8 * FUN_149793616(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be69fe0;
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14979365a FUN_14979365a body=38 status=ok
// SIG undefined FUN_14979365a(void)

undefined8 FUN_14979365a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FCollectionFaceSelectionInvertDataflowNode",1);
  return param_2;
}



// FUNCTION 149793680 FUN_149793680 body=38 status=ok
// SIG undefined FUN_149793680(void)

undefined8 FUN_149793680(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"CollectionFaceSelectInvert",1);
  return param_2;
}



// FUNCTION 1497936a6 FUN_1497936a6 body=38 status=ok
// SIG undefined FUN_1497936a6(void)

undefined8 FUN_1497936a6(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Selection|Face",1);
  return param_2;
}



// FUNCTION 1497936cc FUN_1497936cc body=32 status=ok
// SIG undefined FUN_1497936cc(void)

undefined8 FUN_1497936cc(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 1497936ec FUN_1497936ec body=123 status=ok
// SIG undefined FUN_1497936ec(void)

void FUN_1497936ec(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25f68 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25f68 = FUN_140002ddd(FUN_1467595ff,uVar1,L"CollectionFaceSelectionInvertDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25f68,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149793764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149793768 FUN_149793768 body=93 status=ok
// SIG undefined FUN_149793768(void)

void FUN_149793768(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25f68 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25f68 = FUN_140002ddd(FUN_1467595ff,uVar2,L"CollectionFaceSelectionInvertDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25f68,param_1);
  return;
}



// FUNCTION 1497937c6 FUN_1497937c6 body=55 status=ok
// SIG undefined FUN_1497937c6(void)

void FUN_1497937c6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25f68 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25f68 = FUN_140002ddd(FUN_1467595ff,uVar1,L"CollectionFaceSelectionInvertDataflowNode");
  }
  return;
}



// FUNCTION 1497937fe FUN_1497937fe body=233 status=ok
// SIG undefined FUN_1497937fe(void)

ulonglong FUN_1497937fe(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FCollectionFaceSelectionInvertDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149793898;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149793898;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149793898;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149793898:
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



// FUNCTION 1497938ea FUN_1497938ea body=87 status=ok
// SIG undefined FUN_1497938ea(void)

void FUN_1497938ea(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be6a2a0;
  param_2[0x35] = 0;
  param_2[0x36] = 0x8000000000;
  *(undefined4 *)(param_2 + 0x37) = 100;
  *(undefined1 *)((longlong)param_2 + 0x1bc) = 0;
  *(undefined4 *)(param_2 + 0x38) = 0;
  return;
}



// FUNCTION 149793942 FUN_149793942 body=87 status=ok
// SIG undefined FUN_149793942(void)

void FUN_149793942(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be6a2a0;
  param_2[0x35] = 0;
  param_2[0x36] = 0x8000000000;
  *(undefined4 *)(param_2 + 0x37) = 100;
  *(undefined1 *)((longlong)param_2 + 0x1bc) = 0;
  *(undefined4 *)(param_2 + 0x38) = 0;
  return;
}



// FUNCTION 1497939be FUN_1497939be body=116 status=ok
// SIG undefined FUN_1497939be(void)

undefined8 FUN_1497939be(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 149793a5a FUN_149793a5a body=59 status=ok
// SIG undefined FUN_149793a5a(void)

undefined8 FUN_149793a5a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149793aa6 FUN_149793aa6 body=67 status=ok
// SIG undefined FUN_149793aa6(void)

void FUN_149793aa6(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x39) == '\x01') {
    *param_2 = &PTR_FUN_14be6a2a0;
    if (param_2[0x35] != 0) {
      FUN_1400020a8();
    }
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x39) = 0;
  }
  return;
}



// FUNCTION 149793b38 FUN_149793b38 body=68 status=ok
// SIG undefined FUN_149793b38(void)

undefined8 * FUN_149793b38(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be6a2a0;
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149793b7c FUN_149793b7c body=38 status=ok
// SIG undefined FUN_149793b7c(void)

undefined8 FUN_149793b7c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FCollectionVertexSelectionByPercentageDataflowNode",1);
  return param_2;
}



// FUNCTION 149793ba2 FUN_149793ba2 body=38 status=ok
// SIG undefined FUN_149793ba2(void)

undefined8 FUN_149793ba2(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"CollectionVertexSelectByPercentage",1);
  return param_2;
}



// FUNCTION 149793bc8 FUN_149793bc8 body=38 status=ok
// SIG undefined FUN_149793bc8(void)

undefined8 FUN_149793bc8(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Selection|Vertex",1);
  return param_2;
}



// FUNCTION 149793bee FUN_149793bee body=32 status=ok
// SIG undefined FUN_149793bee(void)

undefined8 FUN_149793bee(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149793c0e FUN_149793c0e body=123 status=ok
// SIG undefined FUN_149793c0e(void)

void FUN_149793c0e(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25f80 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25f80 =
         FUN_140002ddd(FUN_146759695,uVar1,L"CollectionVertexSelectionByPercentageDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25f80,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149793c86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149793c8a FUN_149793c8a body=93 status=ok
// SIG undefined FUN_149793c8a(void)

void FUN_149793c8a(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25f80 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25f80 =
         FUN_140002ddd(FUN_146759695,uVar2,L"CollectionVertexSelectionByPercentageDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25f80,param_1);
  return;
}



// FUNCTION 149793ce8 FUN_149793ce8 body=55 status=ok
// SIG undefined FUN_149793ce8(void)

void FUN_149793ce8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25f80 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25f80 =
         FUN_140002ddd(FUN_146759695,uVar1,L"CollectionVertexSelectionByPercentageDataflowNode");
  }
  return;
}



// FUNCTION 149793d20 FUN_149793d20 body=233 status=ok
// SIG undefined FUN_149793d20(void)

ulonglong FUN_149793d20(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FCollectionVertexSelectionByPercentageDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149793dba;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149793dba;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149793dba;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149793dba:
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



// FUNCTION 149793e0c FUN_149793e0c body=93 status=ok
// SIG undefined FUN_149793e0c(void)

void FUN_149793e0c(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be6a570;
  *(undefined1 *)(param_2 + 0x33) = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0x8000000000;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0x8000000000;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0x8000000000;
  return;
}



// FUNCTION 149793e6a FUN_149793e6a body=93 status=ok
// SIG undefined FUN_149793e6a(void)

void FUN_149793e6a(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be6a570;
  *(undefined1 *)(param_2 + 0x33) = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0x8000000000;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0x8000000000;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0x8000000000;
  return;
}



// FUNCTION 149793eec FUN_149793eec body=63 status=ok
// SIG undefined FUN_149793eec(void)

undefined1 FUN_149793eec(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14979431c(param_2,param_3);
    param_3 = param_3 + 0x200;
    param_2 = param_2 + 0x200;
  }
  return 1;
}



// FUNCTION 149793f54 FUN_149793f54 body=59 status=ok
// SIG undefined FUN_149793f54(void)

undefined8 FUN_149793f54(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149793fa0 FUN_149793fa0 body=40 status=ok
// SIG undefined FUN_149793fa0(void)

void FUN_149793fa0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x200) == '\x01') {
    FUN_1497942ca(param_2);
    *(undefined1 *)(param_2 + 0x200) = 0;
  }
  return;
}



// FUNCTION 149794016 FUN_149794016 body=38 status=ok
// SIG undefined FUN_149794016(void)

undefined8 FUN_149794016(undefined8 param_1,int param_2)

{
  FUN_1497942ca();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14979403c FUN_14979403c body=38 status=ok
// SIG undefined FUN_14979403c(void)

undefined8 FUN_14979403c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FCollectionVertexSelectionSetOperationDataflowNode",1);
  return param_2;
}



// FUNCTION 149794062 FUN_149794062 body=38 status=ok
// SIG undefined FUN_149794062(void)

undefined8 FUN_149794062(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"CollectionVertexSelectionSetOperation",1);
  return param_2;
}



// FUNCTION 149794088 FUN_149794088 body=38 status=ok
// SIG undefined FUN_149794088(void)

undefined8 FUN_149794088(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Selection|Vertex",1);
  return param_2;
}



// FUNCTION 1497940ae FUN_1497940ae body=32 status=ok
// SIG undefined FUN_1497940ae(void)

undefined8 FUN_1497940ae(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 1497940ce FUN_1497940ce body=123 status=ok
// SIG undefined FUN_1497940ce(void)

void FUN_1497940ce(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25f98 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25f98 =
         FUN_140002ddd(FUN_14675972b,uVar1,L"CollectionVertexSelectionSetOperationDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25f98,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149794146. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14979414a FUN_14979414a body=93 status=ok
// SIG undefined FUN_14979414a(void)

void FUN_14979414a(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25f98 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25f98 =
         FUN_140002ddd(FUN_14675972b,uVar2,L"CollectionVertexSelectionSetOperationDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25f98,param_1);
  return;
}



// FUNCTION 1497941a8 FUN_1497941a8 body=55 status=ok
// SIG undefined FUN_1497941a8(void)

void FUN_1497941a8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25f98 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25f98 =
         FUN_140002ddd(FUN_14675972b,uVar1,L"CollectionVertexSelectionSetOperationDataflowNode");
  }
  return;
}



// FUNCTION 1497941e0 FUN_1497941e0 body=233 status=ok
// SIG undefined FUN_1497941e0(void)

ulonglong FUN_1497941e0(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FCollectionVertexSelectionSetOperationDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14979427a;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14979427a;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14979427a;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14979427a:
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



// FUNCTION 1497942ca FUN_1497942ca body=82 status=ok
// SIG undefined FUN_1497942ca(void)

void FUN_1497942ca(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be6a570;
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



// FUNCTION 14979431c FUN_14979431c body=97 status=ok
// SIG undefined FUN_14979431c(void)

longlong FUN_14979431c(longlong param_1,longlong param_2)

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



// FUNCTION 1497943b2 FUN_1497943b2 body=63 status=ok
// SIG undefined FUN_1497943b2(void)

undefined1 FUN_1497943b2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14979492e(param_2,param_3);
    param_3 = param_3 + 0x338;
    param_2 = param_2 + 0x338;
  }
  return 1;
}



// FUNCTION 14979441a FUN_14979441a body=59 status=ok
// SIG undefined FUN_14979441a(void)

undefined8 FUN_14979441a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149794466 FUN_149794466 body=40 status=ok
// SIG undefined FUN_149794466(void)

void FUN_149794466(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x338) == '\x01') {
    FUN_14979486a(param_2);
    *(undefined1 *)(param_2 + 0x338) = 0;
  }
  return;
}



// FUNCTION 1497944dc FUN_1497944dc body=217 status=ok
// SIG undefined FUN_1497944dc(void)

undefined8 * FUN_1497944dc(undefined8 *param_1)

{
  FUN_146fc02b8();
  *param_1 = &PTR_FUN_14be6aa20;
  FUN_1414db454(param_1 + 0x33);
  FUN_1400b22c2(param_1 + 0x49,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 0x4b,&DAT_149e02088);
  *(undefined1 *)(param_1 + 0x4d) = 1;
  FUN_1400b22c2(param_1 + 0x4e,"Internal");
  *(undefined1 *)(param_1 + 0x50) = 0;
  FUN_1400b22c2(param_1 + 0x51,&DAT_149dfbe6e);
  param_1[0x55] = 0;
  param_1[0x56] = 0x8000000000;
  param_1[0x59] = 0;
  param_1[0x5a] = 0x8000000000;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0x8000000000;
  param_1[0x61] = 0;
  param_1[0x62] = 0x8000000000;
  param_1[0x65] = 0;
  param_1[0x66] = 0x8000000000;
  return param_1;
}



// FUNCTION 1497945b6 FUN_1497945b6 body=38 status=ok
// SIG undefined FUN_1497945b6(void)

undefined8 FUN_1497945b6(undefined8 param_1,int param_2)

{
  FUN_14979486a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497945dc FUN_1497945dc body=38 status=ok
// SIG undefined FUN_1497945dc(void)

undefined8 FUN_1497945dc(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FCollectionSelectionByAttrDataflowNode",1);
  return param_2;
}



// FUNCTION 149794602 FUN_149794602 body=38 status=ok
// SIG undefined FUN_149794602(void)

undefined8 FUN_149794602(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"CollectionSelectByAttr",1);
  return param_2;
}



// FUNCTION 149794628 FUN_149794628 body=38 status=ok
// SIG undefined FUN_149794628(void)

undefined8 FUN_149794628(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Selection|All",1);
  return param_2;
}



// FUNCTION 14979464e FUN_14979464e body=32 status=ok
// SIG undefined FUN_14979464e(void)

undefined8 FUN_14979464e(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14979466e FUN_14979466e body=123 status=ok
// SIG undefined FUN_14979466e(void)

void FUN_14979466e(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25fe0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25fe0 = FUN_140002ddd(FUN_14675981f,uVar1,L"CollectionSelectionByAttrDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25fe0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001497946e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 1497946ea FUN_1497946ea body=93 status=ok
// SIG undefined FUN_1497946ea(void)

void FUN_1497946ea(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25fe0 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25fe0 = FUN_140002ddd(FUN_14675981f,uVar2,L"CollectionSelectionByAttrDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25fe0,param_1);
  return;
}



// FUNCTION 149794748 FUN_149794748 body=55 status=ok
// SIG undefined FUN_149794748(void)

void FUN_149794748(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25fe0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25fe0 = FUN_140002ddd(FUN_14675981f,uVar1,L"CollectionSelectionByAttrDataflowNode");
  }
  return;
}



// FUNCTION 149794780 FUN_149794780 body=233 status=ok
// SIG undefined FUN_149794780(void)

ulonglong FUN_149794780(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FCollectionSelectionByAttrDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14979481a;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14979481a;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14979481a;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14979481a:
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



// FUNCTION 14979486a FUN_14979486a body=196 status=ok
// SIG undefined FUN_14979486a(void)

void FUN_14979486a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be6aa20;
  if (param_1[0x65] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x61] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x59] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x55] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x51] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4e] != 0) {
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



// FUNCTION 14979492e FUN_14979492e body=228 status=ok
// SIG undefined FUN_14979492e(void)

longlong FUN_14979492e(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  FUN_144a787a6(param_1 + 0x248,param_2 + 0x248);
  FUN_144a787a6(param_1 + 600,param_2 + 600);
  *(undefined1 *)(param_1 + 0x268) = *(undefined1 *)(param_2 + 0x268);
  FUN_144a787a6(param_1 + 0x270,param_2 + 0x270);
  *(undefined1 *)(param_1 + 0x280) = *(undefined1 *)(param_2 + 0x280);
  FUN_144a787a6(param_1 + 0x288,param_2 + 0x288);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x298,param_2 + 0x298);
    FUN_144a69486(param_1 + 0x2b8,param_2 + 0x2b8);
    FUN_144a69486(param_1 + 0x2d8,param_2 + 0x2d8);
    FUN_144a69486(param_1 + 0x2f8,param_2 + 0x2f8);
    FUN_144a69486(param_1 + 0x318,param_2 + 0x318);
  }
  return param_1;
}



// FUNCTION 149794a14 FUN_149794a14 body=94 status=ok
// SIG undefined FUN_149794a14(void)

void FUN_149794a14(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be6acf0;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4d] = 0;
  param_2[0x4e] = 0x8000000000;
  param_2[0x49] = 0;
  param_2[0x4a] = 0;
  param_2[0x51] = 0;
  param_2[0x52] = 0x8000000000;
  return;
}



// FUNCTION 149794a72 FUN_149794a72 body=94 status=ok
// SIG undefined FUN_149794a72(void)

void FUN_149794a72(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be6acf0;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4d] = 0;
  param_2[0x4e] = 0x8000000000;
  param_2[0x49] = 0;
  param_2[0x4a] = 0;
  param_2[0x51] = 0;
  param_2[0x52] = 0x8000000000;
  return;
}



// FUNCTION 149794aee FUN_149794aee body=63 status=ok
// SIG undefined FUN_149794aee(void)

undefined1 FUN_149794aee(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149794f00(param_2,param_3);
    param_3 = param_3 + 0x298;
    param_2 = param_2 + 0x298;
  }
  return 1;
}



// FUNCTION 149794b56 FUN_149794b56 body=59 status=ok
// SIG undefined FUN_149794b56(void)

undefined8 FUN_149794b56(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149794ba2 FUN_149794ba2 body=40 status=ok
// SIG undefined FUN_149794ba2(void)

void FUN_149794ba2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x298) == '\x01') {
    FUN_149794eac(param_2);
    *(undefined1 *)(param_2 + 0x298) = 0;
  }
  return;
}



// FUNCTION 149794c18 FUN_149794c18 body=38 status=ok
// SIG undefined FUN_149794c18(void)

undefined8 FUN_149794c18(undefined8 param_1,int param_2)

{
  FUN_149794eac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149794c3e FUN_149794c3e body=38 status=ok
// SIG undefined FUN_149794c3e(void)

undefined8 FUN_149794c3e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FGeometrySelectionToVertexSelectionDataflowNode",1);
  return param_2;
}



// FUNCTION 149794c64 FUN_149794c64 body=38 status=ok
// SIG undefined FUN_149794c64(void)

undefined8 FUN_149794c64(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometrySelectionToVertexSelection",1);
  return param_2;
}



// FUNCTION 149794c8a FUN_149794c8a body=38 status=ok
// SIG undefined FUN_149794c8a(void)

undefined8 FUN_149794c8a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Selection|All",1);
  return param_2;
}



// FUNCTION 149794cb0 FUN_149794cb0 body=32 status=ok
// SIG undefined FUN_149794cb0(void)

undefined8 FUN_149794cb0(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}


