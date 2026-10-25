// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 149759c96 FUN_149759c96 body=38 status=ok
// SIG undefined FUN_149759c96(void)

undefined8 FUN_149759c96(undefined8 param_1,int param_2)

{
  FUN_149759f4a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149759cbc FUN_149759cbc body=38 status=ok
// SIG undefined FUN_149759cbc(void)

undefined8 FUN_149759cbc(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FClusterMergeToNeighborsDataflowNode",1);
  return param_2;
}



// FUNCTION 149759ce2 FUN_149759ce2 body=38 status=ok
// SIG undefined FUN_149759ce2(void)

undefined8 FUN_149759ce2(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"ClusterMergeToNeighbors",1);
  return param_2;
}



// FUNCTION 149759d08 FUN_149759d08 body=38 status=ok
// SIG undefined FUN_149759d08(void)

undefined8 FUN_149759d08(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Cluster",1);
  return param_2;
}



// FUNCTION 149759d2e FUN_149759d2e body=32 status=ok
// SIG undefined FUN_149759d2e(void)

undefined8 FUN_149759d2e(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149759d4e FUN_149759d4e body=123 status=ok
// SIG undefined FUN_149759d4e(void)

void FUN_149759d4e(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24c78 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24c78 = FUN_140002ddd(FUN_14675263d,uVar1,L"ClusterMergeToNeighborsDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24c78,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149759dc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149759dca FUN_149759dca body=93 status=ok
// SIG undefined FUN_149759dca(void)

void FUN_149759dca(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24c78 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24c78 = FUN_140002ddd(FUN_14675263d,uVar2,L"ClusterMergeToNeighborsDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24c78,param_1);
  return;
}



// FUNCTION 149759e28 FUN_149759e28 body=55 status=ok
// SIG undefined FUN_149759e28(void)

void FUN_149759e28(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24c78 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24c78 = FUN_140002ddd(FUN_14675263d,uVar1,L"ClusterMergeToNeighborsDataflowNode");
  }
  return;
}



// FUNCTION 149759e60 FUN_149759e60 body=233 status=ok
// SIG undefined FUN_149759e60(void)

ulonglong FUN_149759e60(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FClusterMergeToNeighborsDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149759efa;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149759efa;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149759efa;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149759efa:
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



// FUNCTION 149759f4a FUN_149759f4a body=60 status=ok
// SIG undefined FUN_149759f4a(void)

void FUN_149759f4a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be49e00;
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 149759f86 FUN_149759f86 body=94 status=ok
// SIG undefined FUN_149759f86(void)

longlong FUN_149759f86(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x248,param_2 + 0x248);
  }
  *(undefined2 *)(param_1 + 0x270) = *(undefined2 *)(param_2 + 0x270);
  *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_2 + 0x268);
  return param_1;
}



// FUNCTION 149759fe6 FUN_149759fe6 body=72 status=ok
// SIG undefined FUN_149759fe6(void)

void FUN_149759fe6(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be4a0b0;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4b] = 0;
  param_2[0x4c] = 0x8000000000;
  return;
}



// FUNCTION 14975a02e FUN_14975a02e body=72 status=ok
// SIG undefined FUN_14975a02e(void)

void FUN_14975a02e(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be4a0b0;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4b] = 0;
  param_2[0x4c] = 0x8000000000;
  return;
}



// FUNCTION 14975a09a FUN_14975a09a body=63 status=ok
// SIG undefined FUN_14975a09a(void)

undefined1 FUN_14975a09a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14975a4b4(param_2,param_3);
    param_3 = param_3 + 0x268;
    param_2 = param_2 + 0x268;
  }
  return 1;
}



// FUNCTION 14975a102 FUN_14975a102 body=59 status=ok
// SIG undefined FUN_14975a102(void)

undefined8 FUN_14975a102(longlong *param_1)

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



// FUNCTION 14975a14e FUN_14975a14e body=40 status=ok
// SIG undefined FUN_14975a14e(void)

void FUN_14975a14e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x268) == '\x01') {
    FUN_14975a478(param_2);
    *(undefined1 *)(param_2 + 0x268) = 0;
  }
  return;
}



// FUNCTION 14975a1c4 FUN_14975a1c4 body=38 status=ok
// SIG undefined FUN_14975a1c4(void)

undefined8 FUN_14975a1c4(undefined8 param_1,int param_2)

{
  FUN_14975a478();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14975a1ea FUN_14975a1ea body=38 status=ok
// SIG undefined FUN_14975a1ea(void)

undefined8 FUN_14975a1ea(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FClusterMergeDataflowNode",1);
  return param_2;
}



// FUNCTION 14975a210 FUN_14975a210 body=38 status=ok
// SIG undefined FUN_14975a210(void)

undefined8 FUN_14975a210(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"ClusterMerge",1);
  return param_2;
}



// FUNCTION 14975a236 FUN_14975a236 body=38 status=ok
// SIG undefined FUN_14975a236(void)

undefined8 FUN_14975a236(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Cluster",1);
  return param_2;
}



// FUNCTION 14975a25c FUN_14975a25c body=32 status=ok
// SIG undefined FUN_14975a25c(void)

undefined8 FUN_14975a25c(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14975a27c FUN_14975a27c body=123 status=ok
// SIG undefined FUN_14975a27c(void)

void FUN_14975a27c(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24c90 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24c90 = FUN_140002ddd(FUN_1467526d3,uVar1,L"ClusterMergeDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24c90,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014975a2f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14975a2f8 FUN_14975a2f8 body=93 status=ok
// SIG undefined FUN_14975a2f8(void)

void FUN_14975a2f8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24c90 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24c90 = FUN_140002ddd(FUN_1467526d3,uVar2,L"ClusterMergeDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24c90,param_1);
  return;
}



// FUNCTION 14975a356 FUN_14975a356 body=55 status=ok
// SIG undefined FUN_14975a356(void)

void FUN_14975a356(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24c90 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24c90 = FUN_140002ddd(FUN_1467526d3,uVar1,L"ClusterMergeDataflowNode");
  }
  return;
}



// FUNCTION 14975a38e FUN_14975a38e body=233 status=ok
// SIG undefined FUN_14975a38e(void)

ulonglong FUN_14975a38e(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FClusterMergeDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14975a428;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14975a428;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14975a428;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14975a428:
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



// FUNCTION 14975a478 FUN_14975a478 body=60 status=ok
// SIG undefined FUN_14975a478(void)

void FUN_14975a478(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be4a0b0;
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 14975a4b4 FUN_14975a4b4 body=68 status=ok
// SIG undefined FUN_14975a4b4(void)

longlong FUN_14975a4b4(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x248,param_2 + 0x248);
  }
  return param_1;
}



// FUNCTION 14975a4fa FUN_14975a4fa body=46 status=ok
// SIG undefined FUN_14975a4fa(void)

void FUN_14975a4fa(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be4a350;
  FUN_1414db454(param_2 + 0x33);
  return;
}



// FUNCTION 14975a528 FUN_14975a528 body=46 status=ok
// SIG undefined FUN_14975a528(void)

void FUN_14975a528(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be4a350;
  FUN_1414db454(param_2 + 0x33);
  return;
}



// FUNCTION 14975a57a FUN_14975a57a body=85 status=ok
// SIG undefined FUN_14975a57a(void)

undefined1 FUN_14975a57a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    FUN_146ecd102(param_2 + 0x198,param_3 + 0x198);
    param_2 = param_2 + 0x248;
    param_3 = param_3 + 0x248;
  }
  return 1;
}



// FUNCTION 14975a5f8 FUN_14975a5f8 body=59 status=ok
// SIG undefined FUN_14975a5f8(void)

undefined8 FUN_14975a5f8(longlong *param_1)

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



// FUNCTION 14975a644 FUN_14975a644 body=62 status=ok
// SIG undefined FUN_14975a644(void)

void FUN_14975a644(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x49) == '\x01') {
    *param_2 = &PTR_FUN_14be4a350;
    FUN_14054b30a(param_2 + 0x33);
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x49) = 0;
  }
  return;
}



// FUNCTION 14975a6d0 FUN_14975a6d0 body=63 status=ok
// SIG undefined FUN_14975a6d0(void)

undefined8 * FUN_14975a6d0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be4a350;
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14975a710 FUN_14975a710 body=38 status=ok
// SIG undefined FUN_14975a710(void)

undefined8 FUN_14975a710(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FClusterIsolatedRootsDataflowNode",1);
  return param_2;
}



// FUNCTION 14975a736 FUN_14975a736 body=38 status=ok
// SIG undefined FUN_14975a736(void)

undefined8 FUN_14975a736(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"ClusterIsolatedRoots",1);
  return param_2;
}



// FUNCTION 14975a75c FUN_14975a75c body=38 status=ok
// SIG undefined FUN_14975a75c(void)

undefined8 FUN_14975a75c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Cluster",1);
  return param_2;
}



// FUNCTION 14975a782 FUN_14975a782 body=32 status=ok
// SIG undefined FUN_14975a782(void)

undefined8 FUN_14975a782(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14975a7a2 FUN_14975a7a2 body=123 status=ok
// SIG undefined FUN_14975a7a2(void)

void FUN_14975a7a2(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24ca8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24ca8 = FUN_140002ddd(FUN_146752769,uVar1,L"ClusterIsolatedRootsDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24ca8,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014975a81a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14975a81e FUN_14975a81e body=93 status=ok
// SIG undefined FUN_14975a81e(void)

void FUN_14975a81e(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24ca8 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24ca8 = FUN_140002ddd(FUN_146752769,uVar2,L"ClusterIsolatedRootsDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24ca8,param_1);
  return;
}



// FUNCTION 14975a87c FUN_14975a87c body=55 status=ok
// SIG undefined FUN_14975a87c(void)

void FUN_14975a87c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24ca8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24ca8 = FUN_140002ddd(FUN_146752769,uVar1,L"ClusterIsolatedRootsDataflowNode");
  }
  return;
}



// FUNCTION 14975a8b4 FUN_14975a8b4 body=233 status=ok
// SIG undefined FUN_14975a8b4(void)

ulonglong FUN_14975a8b4(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FClusterIsolatedRootsDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14975a94e;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14975a94e;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14975a94e;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14975a94e:
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



// FUNCTION 14975a9a0 FUN_14975a9a0 body=82 status=ok
// SIG undefined FUN_14975a9a0(void)

void FUN_14975a9a0(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be4a600;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4b] = 0;
  param_2[0x4c] = 0x8000000000;
  *(undefined4 *)(param_2 + 0x4d) = 1;
  return;
}



// FUNCTION 14975a9f2 FUN_14975a9f2 body=82 status=ok
// SIG undefined FUN_14975a9f2(void)

void FUN_14975a9f2(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be4a600;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4b] = 0;
  param_2[0x4c] = 0x8000000000;
  *(undefined4 *)(param_2 + 0x4d) = 1;
  return;
}



// FUNCTION 14975aa68 FUN_14975aa68 body=63 status=ok
// SIG undefined FUN_14975aa68(void)

undefined1 FUN_14975aa68(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14975ae82(param_2,param_3);
    param_3 = param_3 + 0x270;
    param_2 = param_2 + 0x270;
  }
  return 1;
}



// FUNCTION 14975aad0 FUN_14975aad0 body=59 status=ok
// SIG undefined FUN_14975aad0(void)

undefined8 FUN_14975aad0(longlong *param_1)

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



// FUNCTION 14975ab1c FUN_14975ab1c body=40 status=ok
// SIG undefined FUN_14975ab1c(void)

void FUN_14975ab1c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x270) == '\x01') {
    FUN_14975ae46(param_2);
    *(undefined1 *)(param_2 + 0x270) = 0;
  }
  return;
}



// FUNCTION 14975ab92 FUN_14975ab92 body=38 status=ok
// SIG undefined FUN_14975ab92(void)

undefined8 FUN_14975ab92(undefined8 param_1,int param_2)

{
  FUN_14975ae46();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14975abb8 FUN_14975abb8 body=38 status=ok
// SIG undefined FUN_14975abb8(void)

undefined8 FUN_14975abb8(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FClusterMagnetDataflowNode",1);
  return param_2;
}



// FUNCTION 14975abde FUN_14975abde body=38 status=ok
// SIG undefined FUN_14975abde(void)

undefined8 FUN_14975abde(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"ClusterMagnet",1);
  return param_2;
}



// FUNCTION 14975ac04 FUN_14975ac04 body=38 status=ok
// SIG undefined FUN_14975ac04(void)

undefined8 FUN_14975ac04(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Cluster",1);
  return param_2;
}



// FUNCTION 14975ac2a FUN_14975ac2a body=32 status=ok
// SIG undefined FUN_14975ac2a(void)

undefined8 FUN_14975ac2a(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14975ac4a FUN_14975ac4a body=123 status=ok
// SIG undefined FUN_14975ac4a(void)

void FUN_14975ac4a(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24cc0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24cc0 = FUN_140002ddd(FUN_1467527ff,uVar1,L"ClusterMagnetDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24cc0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014975acc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14975acc6 FUN_14975acc6 body=93 status=ok
// SIG undefined FUN_14975acc6(void)

void FUN_14975acc6(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24cc0 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24cc0 = FUN_140002ddd(FUN_1467527ff,uVar2,L"ClusterMagnetDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24cc0,param_1);
  return;
}



// FUNCTION 14975ad24 FUN_14975ad24 body=55 status=ok
// SIG undefined FUN_14975ad24(void)

void FUN_14975ad24(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24cc0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24cc0 = FUN_140002ddd(FUN_1467527ff,uVar1,L"ClusterMagnetDataflowNode");
  }
  return;
}



// FUNCTION 14975ad5c FUN_14975ad5c body=233 status=ok
// SIG undefined FUN_14975ad5c(void)

ulonglong FUN_14975ad5c(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FClusterMagnetDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14975adf6;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14975adf6;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14975adf6;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14975adf6:
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



// FUNCTION 14975ae46 FUN_14975ae46 body=60 status=ok
// SIG undefined FUN_14975ae46(void)

void FUN_14975ae46(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be4a600;
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 14975ae82 FUN_14975ae82 body=78 status=ok
// SIG undefined FUN_14975ae82(void)

longlong FUN_14975ae82(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x248,param_2 + 0x248);
  }
  *(undefined4 *)(param_1 + 0x268) = *(undefined4 *)(param_2 + 0x268);
  return param_1;
}



// FUNCTION 14975aed2 FUN_14975aed2 body=71 status=ok
// SIG undefined FUN_14975aed2(void)

void FUN_14975aed2(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be4a8a0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  FUN_1400b22c2(param_2 + 0x36,&DAT_149e02088);
  return;
}



// FUNCTION 14975af1a FUN_14975af1a body=71 status=ok
// SIG undefined FUN_14975af1a(void)

void FUN_14975af1a(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be4a8a0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  FUN_1400b22c2(param_2 + 0x36,&DAT_149e02088);
  return;
}



// FUNCTION 14975af86 FUN_14975af86 body=113 status=ok
// SIG undefined FUN_14975af86(void)

undefined8 FUN_14975af86(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
    FUN_144a787a6(param_2 + 0x1b0,param_3 + 0x1b0);
    param_2 = param_2 + 0x1c0;
    param_3 = param_3 + 0x1c0;
  }
  return 1;
}



// FUNCTION 14975b020 FUN_14975b020 body=59 status=ok
// SIG undefined FUN_14975b020(void)

undefined8 FUN_14975b020(longlong *param_1)

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



// FUNCTION 14975b06c FUN_14975b06c body=67 status=ok
// SIG undefined FUN_14975b06c(void)

void FUN_14975b06c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    *param_2 = &PTR_FUN_14be4a8a0;
    if (param_2[0x36] != 0) {
      FUN_1400020a8();
    }
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 14975b0fe FUN_14975b0fe body=68 status=ok
// SIG undefined FUN_14975b0fe(void)

undefined8 * FUN_14975b0fe(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be4a8a0;
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14975b142 FUN_14975b142 body=38 status=ok
// SIG undefined FUN_14975b142(void)

undefined8 FUN_14975b142(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FVectorToStringDataflowNode",1);
  return param_2;
}



// FUNCTION 14975b168 FUN_14975b168 body=38 status=ok
// SIG undefined FUN_14975b168(void)

undefined8 FUN_14975b168(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"VectorToString",1);
  return param_2;
}



// FUNCTION 14975b18e FUN_14975b18e body=38 status=ok
// SIG undefined FUN_14975b18e(void)

undefined8 FUN_14975b18e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Utilities|String",1);
  return param_2;
}



// FUNCTION 14975b1b4 FUN_14975b1b4 body=32 status=ok
// SIG undefined FUN_14975b1b4(void)

undefined8 FUN_14975b1b4(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14975b1d4 FUN_14975b1d4 body=123 status=ok
// SIG undefined FUN_14975b1d4(void)

void FUN_14975b1d4(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24cd8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24cd8 = FUN_140002ddd(FUN_146752895,uVar1,L"VectorToStringDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24cd8,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014975b24c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14975b250 FUN_14975b250 body=93 status=ok
// SIG undefined FUN_14975b250(void)

void FUN_14975b250(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24cd8 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24cd8 = FUN_140002ddd(FUN_146752895,uVar2,L"VectorToStringDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24cd8,param_1);
  return;
}



// FUNCTION 14975b2ae FUN_14975b2ae body=55 status=ok
// SIG undefined FUN_14975b2ae(void)

void FUN_14975b2ae(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24cd8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24cd8 = FUN_140002ddd(FUN_146752895,uVar1,L"VectorToStringDataflowNode");
  }
  return;
}



// FUNCTION 14975b2e6 FUN_14975b2e6 body=233 status=ok
// SIG undefined FUN_14975b2e6(void)

ulonglong FUN_14975b2e6(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FVectorToStringDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14975b380;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14975b380;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14975b380;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14975b380:
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



// FUNCTION 14975b3d2 FUN_14975b3d2 body=63 status=ok
// SIG undefined FUN_14975b3d2(void)

void FUN_14975b3d2(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be4ab40;
  *(undefined4 *)(param_2 + 0x33) = 0;
  FUN_1400b22c2(param_2 + 0x34,&DAT_149e02088);
  return;
}



// FUNCTION 14975b412 FUN_14975b412 body=63 status=ok
// SIG undefined FUN_14975b412(void)

void FUN_14975b412(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be4ab40;
  *(undefined4 *)(param_2 + 0x33) = 0;
  FUN_1400b22c2(param_2 + 0x34,&DAT_149e02088);
  return;
}



// FUNCTION 14975b476 FUN_14975b476 body=101 status=ok
// SIG undefined FUN_14975b476(void)

undefined1 FUN_14975b476(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    FUN_144a787a6(param_2 + 0x1a0,param_3 + 0x1a0);
    param_2 = param_2 + 0x1b0;
    param_3 = param_3 + 0x1b0;
  }
  return 1;
}



// FUNCTION 14975b504 FUN_14975b504 body=59 status=ok
// SIG undefined FUN_14975b504(void)

undefined8 FUN_14975b504(longlong *param_1)

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



// FUNCTION 14975b550 FUN_14975b550 body=67 status=ok
// SIG undefined FUN_14975b550(void)

void FUN_14975b550(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x36) == '\x01') {
    *param_2 = &PTR_FUN_14be4ab40;
    if (param_2[0x34] != 0) {
      FUN_1400020a8();
    }
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x36) = 0;
  }
  return;
}



// FUNCTION 14975b5e2 FUN_14975b5e2 body=68 status=ok
// SIG undefined FUN_14975b5e2(void)

undefined8 * FUN_14975b5e2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be4ab40;
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14975b626 FUN_14975b626 body=38 status=ok
// SIG undefined FUN_14975b626(void)

undefined8 FUN_14975b626(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FFloatToStringDataflowNode",1);
  return param_2;
}



// FUNCTION 14975b64c FUN_14975b64c body=38 status=ok
// SIG undefined FUN_14975b64c(void)

undefined8 FUN_14975b64c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FloatToString",1);
  return param_2;
}



// FUNCTION 14975b672 FUN_14975b672 body=38 status=ok
// SIG undefined FUN_14975b672(void)

undefined8 FUN_14975b672(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Utilities|String",1);
  return param_2;
}



// FUNCTION 14975b698 FUN_14975b698 body=32 status=ok
// SIG undefined FUN_14975b698(void)

undefined8 FUN_14975b698(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14975b6b8 FUN_14975b6b8 body=123 status=ok
// SIG undefined FUN_14975b6b8(void)

void FUN_14975b6b8(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24cf0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24cf0 = FUN_140002ddd(FUN_14675292b,uVar1,L"FloatToStringDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24cf0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014975b730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14975b734 FUN_14975b734 body=93 status=ok
// SIG undefined FUN_14975b734(void)

void FUN_14975b734(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24cf0 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24cf0 = FUN_140002ddd(FUN_14675292b,uVar2,L"FloatToStringDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24cf0,param_1);
  return;
}



// FUNCTION 14975b792 FUN_14975b792 body=55 status=ok
// SIG undefined FUN_14975b792(void)

void FUN_14975b792(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24cf0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24cf0 = FUN_140002ddd(FUN_14675292b,uVar1,L"FloatToStringDataflowNode");
  }
  return;
}



// FUNCTION 14975b7ca FUN_14975b7ca body=233 status=ok
// SIG undefined FUN_14975b7ca(void)

ulonglong FUN_14975b7ca(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FFloatToStringDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14975b864;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14975b864;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14975b864;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14975b864:
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



// FUNCTION 14975b8b6 FUN_14975b8b6 body=63 status=ok
// SIG undefined FUN_14975b8b6(void)

void FUN_14975b8b6(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be4ade0;
  *(undefined4 *)(param_2 + 0x33) = 0;
  FUN_1400b22c2(param_2 + 0x34,&DAT_149e02088);
  return;
}



// FUNCTION 14975b8f6 FUN_14975b8f6 body=63 status=ok
// SIG undefined FUN_14975b8f6(void)

void FUN_14975b8f6(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be4ade0;
  *(undefined4 *)(param_2 + 0x33) = 0;
  FUN_1400b22c2(param_2 + 0x34,&DAT_149e02088);
  return;
}



// FUNCTION 14975b95a FUN_14975b95a body=97 status=ok
// SIG undefined FUN_14975b95a(void)

undefined8 FUN_14975b95a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    FUN_144a787a6(param_2 + 0x1a0,param_3 + 0x1a0);
    param_2 = param_2 + 0x1b0;
    param_3 = param_3 + 0x1b0;
  }
  return 1;
}



// FUNCTION 14975b9e4 FUN_14975b9e4 body=59 status=ok
// SIG undefined FUN_14975b9e4(void)

undefined8 FUN_14975b9e4(longlong *param_1)

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



// FUNCTION 14975ba30 FUN_14975ba30 body=67 status=ok
// SIG undefined FUN_14975ba30(void)

void FUN_14975ba30(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x36) == '\x01') {
    *param_2 = &PTR_FUN_14be4ade0;
    if (param_2[0x34] != 0) {
      FUN_1400020a8();
    }
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x36) = 0;
  }
  return;
}



// FUNCTION 14975bac2 FUN_14975bac2 body=68 status=ok
// SIG undefined FUN_14975bac2(void)

undefined8 * FUN_14975bac2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be4ade0;
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14975bb06 FUN_14975bb06 body=38 status=ok
// SIG undefined FUN_14975bb06(void)

undefined8 FUN_14975bb06(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FIntToStringDataflowNode",1);
  return param_2;
}



// FUNCTION 14975bb2c FUN_14975bb2c body=38 status=ok
// SIG undefined FUN_14975bb2c(void)

undefined8 FUN_14975bb2c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"IntToString",1);
  return param_2;
}



// FUNCTION 14975bb52 FUN_14975bb52 body=38 status=ok
// SIG undefined FUN_14975bb52(void)

undefined8 FUN_14975bb52(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Utilities|String",1);
  return param_2;
}



// FUNCTION 14975bb78 FUN_14975bb78 body=32 status=ok
// SIG undefined FUN_14975bb78(void)

undefined8 FUN_14975bb78(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14975bb98 FUN_14975bb98 body=123 status=ok
// SIG undefined FUN_14975bb98(void)

void FUN_14975bb98(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24d08 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24d08 = FUN_140002ddd(FUN_1467529c1,uVar1,L"IntToStringDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24d08,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014975bc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14975bc14 FUN_14975bc14 body=93 status=ok
// SIG undefined FUN_14975bc14(void)

void FUN_14975bc14(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24d08 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24d08 = FUN_140002ddd(FUN_1467529c1,uVar2,L"IntToStringDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24d08,param_1);
  return;
}



// FUNCTION 14975bc72 FUN_14975bc72 body=55 status=ok
// SIG undefined FUN_14975bc72(void)

void FUN_14975bc72(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24d08 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24d08 = FUN_140002ddd(FUN_1467529c1,uVar1,L"IntToStringDataflowNode");
  }
  return;
}



// FUNCTION 14975bcaa FUN_14975bcaa body=233 status=ok
// SIG undefined FUN_14975bcaa(void)

ulonglong FUN_14975bcaa(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FIntToStringDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14975bd44;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14975bd44;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14975bd44;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14975bd44:
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



// FUNCTION 14975bd96 FUN_14975bd96 body=60 status=ok
// SIG undefined FUN_14975bd96(void)

void FUN_14975bd96(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be4b080;
  *(undefined1 *)(param_2 + 0x33) = 0;
  FUN_1400b22c2(param_2 + 0x34,&DAT_149e02088);
  return;
}



// FUNCTION 14975bdd2 FUN_14975bdd2 body=60 status=ok
// SIG undefined FUN_14975bdd2(void)

void FUN_14975bdd2(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be4b080;
  *(undefined1 *)(param_2 + 0x33) = 0;
  FUN_1400b22c2(param_2 + 0x34,&DAT_149e02088);
  return;
}



// FUNCTION 14975be32 FUN_14975be32 body=97 status=ok
// SIG undefined FUN_14975be32(void)

undefined1 FUN_14975be32(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    *(undefined1 *)(param_2 + 0x198) = *(undefined1 *)(param_3 + 0x198);
    FUN_144a787a6(param_2 + 0x1a0,param_3 + 0x1a0);
    param_2 = param_2 + 0x1b0;
    param_3 = param_3 + 0x1b0;
  }
  return 1;
}



// FUNCTION 14975bebc FUN_14975bebc body=59 status=ok
// SIG undefined FUN_14975bebc(void)

undefined8 FUN_14975bebc(longlong *param_1)

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



// FUNCTION 14975bf08 FUN_14975bf08 body=67 status=ok
// SIG undefined FUN_14975bf08(void)

void FUN_14975bf08(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x36) == '\x01') {
    *param_2 = &PTR_FUN_14be4b080;
    if (param_2[0x34] != 0) {
      FUN_1400020a8();
    }
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x36) = 0;
  }
  return;
}



// FUNCTION 14975bf9a FUN_14975bf9a body=68 status=ok
// SIG undefined FUN_14975bf9a(void)

undefined8 * FUN_14975bf9a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be4b080;
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14975bfde FUN_14975bfde body=38 status=ok
// SIG undefined FUN_14975bfde(void)

undefined8 FUN_14975bfde(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FBoolToStringDataflowNode",1);
  return param_2;
}



// FUNCTION 14975c004 FUN_14975c004 body=38 status=ok
// SIG undefined FUN_14975c004(void)

undefined8 FUN_14975c004(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"BoolToString",1);
  return param_2;
}



// FUNCTION 14975c02a FUN_14975c02a body=38 status=ok
// SIG undefined FUN_14975c02a(void)

undefined8 FUN_14975c02a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Utilities|String",1);
  return param_2;
}



// FUNCTION 14975c050 FUN_14975c050 body=32 status=ok
// SIG undefined FUN_14975c050(void)

undefined8 FUN_14975c050(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14975c070 FUN_14975c070 body=123 status=ok
// SIG undefined FUN_14975c070(void)

void FUN_14975c070(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24d20 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24d20 = FUN_140002ddd(FUN_146752a57,uVar1,L"BoolToStringDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24d20,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014975c0e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14975c0ec FUN_14975c0ec body=93 status=ok
// SIG undefined FUN_14975c0ec(void)

void FUN_14975c0ec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24d20 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24d20 = FUN_140002ddd(FUN_146752a57,uVar2,L"BoolToStringDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24d20,param_1);
  return;
}



// FUNCTION 14975c14a FUN_14975c14a body=55 status=ok
// SIG undefined FUN_14975c14a(void)

void FUN_14975c14a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24d20 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24d20 = FUN_140002ddd(FUN_146752a57,uVar1,L"BoolToStringDataflowNode");
  }
  return;
}



// FUNCTION 14975c182 FUN_14975c182 body=233 status=ok
// SIG undefined FUN_14975c182(void)

ulonglong FUN_14975c182(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FBoolToStringDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14975c21c;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14975c21c;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14975c21c;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14975c21c:
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



// FUNCTION 14975c26e FUN_14975c26e body=43 status=ok
// SIG undefined FUN_14975c26e(void)

void FUN_14975c26e(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be4b320;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 14975c29a FUN_14975c29a body=43 status=ok
// SIG undefined FUN_14975c29a(void)

void FUN_14975c29a(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be4b320;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 14975c2ea FUN_14975c2ea body=76 status=ok
// SIG undefined FUN_14975c2ea(void)

undefined8 FUN_14975c2ea(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    *(undefined8 *)(param_2 + 0x198) = *(undefined8 *)(param_3 + 0x198);
    param_2 = param_2 + 0x1a0;
    param_3 = param_3 + 0x1a0;
  }
  return 1;
}



// FUNCTION 14975c35e FUN_14975c35e body=59 status=ok
// SIG undefined FUN_14975c35e(void)

undefined8 FUN_14975c35e(longlong *param_1)

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



// FUNCTION 14975c3aa FUN_14975c3aa body=40 status=ok
// SIG undefined FUN_14975c3aa(void)

void FUN_14975c3aa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a0) = 0;
  }
  return;
}



// FUNCTION 14975c420 FUN_14975c420 body=38 status=ok
// SIG undefined FUN_14975c420(void)

undefined8 FUN_14975c420(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14975c446 FUN_14975c446 body=38 status=ok
// SIG undefined FUN_14975c446(void)

undefined8 FUN_14975c446(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FIntToFloatDataflowNode",1);
  return param_2;
}



// FUNCTION 14975c46c FUN_14975c46c body=38 status=ok
// SIG undefined FUN_14975c46c(void)

undefined8 FUN_14975c46c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"IntToFloat",1);
  return param_2;
}



// FUNCTION 14975c492 FUN_14975c492 body=38 status=ok
// SIG undefined FUN_14975c492(void)

undefined8 FUN_14975c492(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Conversions",1);
  return param_2;
}



// FUNCTION 14975c4b8 FUN_14975c4b8 body=32 status=ok
// SIG undefined FUN_14975c4b8(void)

undefined8 FUN_14975c4b8(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14975c4d8 FUN_14975c4d8 body=123 status=ok
// SIG undefined FUN_14975c4d8(void)

void FUN_14975c4d8(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24d38 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24d38 = FUN_140002ddd(FUN_146752aed,uVar1,L"IntToFloatDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24d38,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014975c550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14975c554 FUN_14975c554 body=93 status=ok
// SIG undefined FUN_14975c554(void)

void FUN_14975c554(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24d38 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24d38 = FUN_140002ddd(FUN_146752aed,uVar2,L"IntToFloatDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24d38,param_1);
  return;
}



// FUNCTION 14975c5b2 FUN_14975c5b2 body=55 status=ok
// SIG undefined FUN_14975c5b2(void)

void FUN_14975c5b2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24d38 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24d38 = FUN_140002ddd(FUN_146752aed,uVar1,L"IntToFloatDataflowNode");
  }
  return;
}



// FUNCTION 14975c5ea FUN_14975c5ea body=233 status=ok
// SIG undefined FUN_14975c5ea(void)

ulonglong FUN_14975c5ea(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FIntToFloatDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14975c684;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14975c684;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14975c684;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14975c684:
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



// FUNCTION 14975c6d6 FUN_14975c6d6 body=53 status=ok
// SIG undefined FUN_14975c6d6(void)

void FUN_14975c6d6(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be4b5b0;
  *(undefined4 *)(param_2 + 0x33) = 0;
  param_2[0x34] = 0;
  return;
}



// FUNCTION 14975c70c FUN_14975c70c body=53 status=ok
// SIG undefined FUN_14975c70c(void)

void FUN_14975c70c(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be4b5b0;
  *(undefined4 *)(param_2 + 0x33) = 0;
  param_2[0x34] = 0;
  return;
}



// FUNCTION 14975c766 FUN_14975c766 body=76 status=ok
// SIG undefined FUN_14975c766(void)

undefined1 FUN_14975c766(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 14975c7da FUN_14975c7da body=59 status=ok
// SIG undefined FUN_14975c7da(void)

undefined8 FUN_14975c7da(longlong *param_1)

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



// FUNCTION 14975c826 FUN_14975c826 body=40 status=ok
// SIG undefined FUN_14975c826(void)

void FUN_14975c826(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 14975c89c FUN_14975c89c body=38 status=ok
// SIG undefined FUN_14975c89c(void)

undefined8 FUN_14975c89c(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14975c8c2 FUN_14975c8c2 body=38 status=ok
// SIG undefined FUN_14975c8c2(void)

undefined8 FUN_14975c8c2(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FIntToDoubleDataflowNode",1);
  return param_2;
}



// FUNCTION 14975c8e8 FUN_14975c8e8 body=38 status=ok
// SIG undefined FUN_14975c8e8(void)

undefined8 FUN_14975c8e8(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"IntToDouble",1);
  return param_2;
}



// FUNCTION 14975c90e FUN_14975c90e body=38 status=ok
// SIG undefined FUN_14975c90e(void)

undefined8 FUN_14975c90e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Conversions",1);
  return param_2;
}



// FUNCTION 14975c934 FUN_14975c934 body=32 status=ok
// SIG undefined FUN_14975c934(void)

undefined8 FUN_14975c934(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14975c954 FUN_14975c954 body=123 status=ok
// SIG undefined FUN_14975c954(void)

void FUN_14975c954(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24d50 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24d50 = FUN_140002ddd(FUN_146752b83,uVar1,L"IntToDoubleDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24d50,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014975c9cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14975c9d0 FUN_14975c9d0 body=93 status=ok
// SIG undefined FUN_14975c9d0(void)

void FUN_14975c9d0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24d50 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24d50 = FUN_140002ddd(FUN_146752b83,uVar2,L"IntToDoubleDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24d50,param_1);
  return;
}



// FUNCTION 14975ca2e FUN_14975ca2e body=55 status=ok
// SIG undefined FUN_14975ca2e(void)

void FUN_14975ca2e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24d50 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24d50 = FUN_140002ddd(FUN_146752b83,uVar1,L"IntToDoubleDataflowNode");
  }
  return;
}



// FUNCTION 14975ca66 FUN_14975ca66 body=233 status=ok
// SIG undefined FUN_14975ca66(void)

ulonglong FUN_14975ca66(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FIntToDoubleDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14975cb00;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14975cb00;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14975cb00;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14975cb00:
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



// FUNCTION 14975cb52 FUN_14975cb52 body=53 status=ok
// SIG undefined FUN_14975cb52(void)

void FUN_14975cb52(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be4b850;
  *(undefined4 *)(param_2 + 0x33) = 0;
  param_2[0x34] = 0;
  return;
}



// FUNCTION 14975cb88 FUN_14975cb88 body=53 status=ok
// SIG undefined FUN_14975cb88(void)

void FUN_14975cb88(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be4b850;
  *(undefined4 *)(param_2 + 0x33) = 0;
  param_2[0x34] = 0;
  return;
}



// FUNCTION 14975cbe2 FUN_14975cbe2 body=76 status=ok
// SIG undefined FUN_14975cbe2(void)

undefined1 FUN_14975cbe2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 14975cc56 FUN_14975cc56 body=59 status=ok
// SIG undefined FUN_14975cc56(void)

undefined8 FUN_14975cc56(longlong *param_1)

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



// FUNCTION 14975cca2 FUN_14975cca2 body=40 status=ok
// SIG undefined FUN_14975cca2(void)

void FUN_14975cca2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 14975cd18 FUN_14975cd18 body=38 status=ok
// SIG undefined FUN_14975cd18(void)

undefined8 FUN_14975cd18(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14975cd3e FUN_14975cd3e body=38 status=ok
// SIG undefined FUN_14975cd3e(void)

undefined8 FUN_14975cd3e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FFloatToDoubleDataflowNode",1);
  return param_2;
}



// FUNCTION 14975cd64 FUN_14975cd64 body=38 status=ok
// SIG undefined FUN_14975cd64(void)

undefined8 FUN_14975cd64(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FloatToDouble",1);
  return param_2;
}



// FUNCTION 14975cd8a FUN_14975cd8a body=38 status=ok
// SIG undefined FUN_14975cd8a(void)

undefined8 FUN_14975cd8a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Conversions",1);
  return param_2;
}



// FUNCTION 14975cdb0 FUN_14975cdb0 body=32 status=ok
// SIG undefined FUN_14975cdb0(void)

undefined8 FUN_14975cdb0(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14975cdd0 FUN_14975cdd0 body=123 status=ok
// SIG undefined FUN_14975cdd0(void)

void FUN_14975cdd0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24d68 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24d68 = FUN_140002ddd(FUN_146752c19,uVar1,L"FloatToDoubleDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24d68,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014975ce48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14975ce4c FUN_14975ce4c body=93 status=ok
// SIG undefined FUN_14975ce4c(void)

void FUN_14975ce4c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24d68 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24d68 = FUN_140002ddd(FUN_146752c19,uVar2,L"FloatToDoubleDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24d68,param_1);
  return;
}



// FUNCTION 14975ceaa FUN_14975ceaa body=55 status=ok
// SIG undefined FUN_14975ceaa(void)

void FUN_14975ceaa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24d68 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24d68 = FUN_140002ddd(FUN_146752c19,uVar1,L"FloatToDoubleDataflowNode");
  }
  return;
}



// FUNCTION 14975cee2 FUN_14975cee2 body=233 status=ok
// SIG undefined FUN_14975cee2(void)

ulonglong FUN_14975cee2(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FFloatToDoubleDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14975cf7c;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14975cf7c;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14975cf7c;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14975cf7c:
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



// FUNCTION 14975cfce FUN_14975cfce body=50 status=ok
// SIG undefined FUN_14975cfce(void)

void FUN_14975cfce(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be4bc40;
  *(undefined1 *)(param_2 + 0x33) = 2;
  *(undefined8 *)((longlong)param_2 + 0x19c) = 0;
  return;
}



// FUNCTION 14975d000 FUN_14975d000 body=50 status=ok
// SIG undefined FUN_14975d000(void)

void FUN_14975d000(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be4bc40;
  *(undefined1 *)(param_2 + 0x33) = 2;
  *(undefined8 *)((longlong)param_2 + 0x19c) = 0;
  return;
}



// FUNCTION 14975d056 FUN_14975d056 body=88 status=ok
// SIG undefined FUN_14975d056(void)

undefined8 FUN_14975d056(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 14975d0d6 FUN_14975d0d6 body=59 status=ok
// SIG undefined FUN_14975d0d6(void)

undefined8 FUN_14975d0d6(longlong *param_1)

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



// FUNCTION 14975d122 FUN_14975d122 body=40 status=ok
// SIG undefined FUN_14975d122(void)

void FUN_14975d122(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 14975d198 FUN_14975d198 body=38 status=ok
// SIG undefined FUN_14975d198(void)

undefined8 FUN_14975d198(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14975d1be FUN_14975d1be body=38 status=ok
// SIG undefined FUN_14975d1be(void)

undefined8 FUN_14975d1be(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FFloatToIntDataflowNode",1);
  return param_2;
}



// FUNCTION 14975d1e4 FUN_14975d1e4 body=38 status=ok
// SIG undefined FUN_14975d1e4(void)

undefined8 FUN_14975d1e4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FloatToInt",1);
  return param_2;
}



// FUNCTION 14975d20a FUN_14975d20a body=38 status=ok
// SIG undefined FUN_14975d20a(void)

undefined8 FUN_14975d20a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Conversions",1);
  return param_2;
}



// FUNCTION 14975d230 FUN_14975d230 body=32 status=ok
// SIG undefined FUN_14975d230(void)

undefined8 FUN_14975d230(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14975d250 FUN_14975d250 body=123 status=ok
// SIG undefined FUN_14975d250(void)

void FUN_14975d250(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24d98 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24d98 = FUN_140002ddd(FUN_146752cdf,uVar1,L"FloatToIntDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24d98,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014975d2c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14975d2cc FUN_14975d2cc body=93 status=ok
// SIG undefined FUN_14975d2cc(void)

void FUN_14975d2cc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24d98 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24d98 = FUN_140002ddd(FUN_146752cdf,uVar2,L"FloatToIntDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24d98,param_1);
  return;
}



// FUNCTION 14975d32a FUN_14975d32a body=55 status=ok
// SIG undefined FUN_14975d32a(void)

void FUN_14975d32a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24d98 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24d98 = FUN_140002ddd(FUN_146752cdf,uVar1,L"FloatToIntDataflowNode");
  }
  return;
}



// FUNCTION 14975d362 FUN_14975d362 body=233 status=ok
// SIG undefined FUN_14975d362(void)

ulonglong FUN_14975d362(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FFloatToIntDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14975d3fc;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14975d3fc;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14975d3fc;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14975d3fc:
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



// FUNCTION 14975d44e FUN_14975d44e body=49 status=ok
// SIG undefined FUN_14975d44e(void)

void FUN_14975d44e(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be4bed0;
  *(undefined4 *)(param_2 + 0x33) = 0;
  *(undefined1 *)((longlong)param_2 + 0x19c) = 0;
  return;
}



// FUNCTION 14975d480 FUN_14975d480 body=49 status=ok
// SIG undefined FUN_14975d480(void)

void FUN_14975d480(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be4bed0;
  *(undefined4 *)(param_2 + 0x33) = 0;
  *(undefined1 *)((longlong)param_2 + 0x19c) = 0;
  return;
}



// FUNCTION 14975d4d6 FUN_14975d4d6 body=86 status=ok
// SIG undefined FUN_14975d4d6(void)

undefined8 FUN_14975d4d6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined1 *)(param_2 + 0x19c) = *(undefined1 *)(param_3 + 0x19c);
    param_2 = param_2 + 0x1a0;
    param_3 = param_3 + 0x1a0;
  }
  return 1;
}



// FUNCTION 14975d554 FUN_14975d554 body=59 status=ok
// SIG undefined FUN_14975d554(void)

undefined8 FUN_14975d554(longlong *param_1)

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



// FUNCTION 14975d5a0 FUN_14975d5a0 body=40 status=ok
// SIG undefined FUN_14975d5a0(void)

void FUN_14975d5a0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a0) = 0;
  }
  return;
}



// FUNCTION 14975d616 FUN_14975d616 body=38 status=ok
// SIG undefined FUN_14975d616(void)

undefined8 FUN_14975d616(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14975d63c FUN_14975d63c body=38 status=ok
// SIG undefined FUN_14975d63c(void)

undefined8 FUN_14975d63c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FIntToBoolDataflowNode",1);
  return param_2;
}



// FUNCTION 14975d662 FUN_14975d662 body=38 status=ok
// SIG undefined FUN_14975d662(void)

undefined8 FUN_14975d662(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"IntToBool",1);
  return param_2;
}



// FUNCTION 14975d688 FUN_14975d688 body=38 status=ok
// SIG undefined FUN_14975d688(void)

undefined8 FUN_14975d688(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Conversions",1);
  return param_2;
}



// FUNCTION 14975d6ae FUN_14975d6ae body=32 status=ok
// SIG undefined FUN_14975d6ae(void)

undefined8 FUN_14975d6ae(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14975d6ce FUN_14975d6ce body=123 status=ok
// SIG undefined FUN_14975d6ce(void)

void FUN_14975d6ce(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24db0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24db0 = FUN_140002ddd(FUN_146752d75,uVar1,L"IntToBoolDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24db0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014975d746. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14975d74a FUN_14975d74a body=93 status=ok
// SIG undefined FUN_14975d74a(void)

void FUN_14975d74a(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24db0 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24db0 = FUN_140002ddd(FUN_146752d75,uVar2,L"IntToBoolDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24db0,param_1);
  return;
}



// FUNCTION 14975d7a8 FUN_14975d7a8 body=55 status=ok
// SIG undefined FUN_14975d7a8(void)

void FUN_14975d7a8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24db0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24db0 = FUN_140002ddd(FUN_146752d75,uVar1,L"IntToBoolDataflowNode");
  }
  return;
}



// FUNCTION 14975d7e0 FUN_14975d7e0 body=233 status=ok
// SIG undefined FUN_14975d7e0(void)

ulonglong FUN_14975d7e0(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FIntToBoolDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14975d87a;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14975d87a;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14975d87a;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14975d87a:
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



// FUNCTION 14975d8cc FUN_14975d8cc body=49 status=ok
// SIG undefined FUN_14975d8cc(void)

void FUN_14975d8cc(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be4c170;
  *(undefined1 *)(param_2 + 0x33) = 0;
  *(undefined4 *)((longlong)param_2 + 0x19c) = 0;
  return;
}



// FUNCTION 14975d8fe FUN_14975d8fe body=49 status=ok
// SIG undefined FUN_14975d8fe(void)

void FUN_14975d8fe(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be4c170;
  *(undefined1 *)(param_2 + 0x33) = 0;
  *(undefined4 *)((longlong)param_2 + 0x19c) = 0;
  return;
}



// FUNCTION 14975d954 FUN_14975d954 body=76 status=ok
// SIG undefined FUN_14975d954(void)

undefined8 FUN_14975d954(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    *(undefined8 *)(param_2 + 0x198) = *(undefined8 *)(param_3 + 0x198);
    param_2 = param_2 + 0x1a0;
    param_3 = param_3 + 0x1a0;
  }
  return 1;
}



// FUNCTION 14975d9c8 FUN_14975d9c8 body=59 status=ok
// SIG undefined FUN_14975d9c8(void)

undefined8 FUN_14975d9c8(longlong *param_1)

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



// FUNCTION 14975da14 FUN_14975da14 body=40 status=ok
// SIG undefined FUN_14975da14(void)

void FUN_14975da14(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a0) = 0;
  }
  return;
}



// FUNCTION 14975da8a FUN_14975da8a body=38 status=ok
// SIG undefined FUN_14975da8a(void)

undefined8 FUN_14975da8a(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14975dab0 FUN_14975dab0 body=38 status=ok
// SIG undefined FUN_14975dab0(void)

undefined8 FUN_14975dab0(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FBoolToIntDataflowNode",1);
  return param_2;
}



// FUNCTION 14975dad6 FUN_14975dad6 body=38 status=ok
// SIG undefined FUN_14975dad6(void)

undefined8 FUN_14975dad6(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"BoolToInt",1);
  return param_2;
}



// FUNCTION 14975dafc FUN_14975dafc body=38 status=ok
// SIG undefined FUN_14975dafc(void)

undefined8 FUN_14975dafc(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Conversions",1);
  return param_2;
}



// FUNCTION 14975db22 FUN_14975db22 body=32 status=ok
// SIG undefined FUN_14975db22(void)

undefined8 FUN_14975db22(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14975db42 FUN_14975db42 body=123 status=ok
// SIG undefined FUN_14975db42(void)

void FUN_14975db42(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24dc8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24dc8 = FUN_140002ddd(FUN_146752e0b,uVar1,L"BoolToIntDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24dc8,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014975dbba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14975dbbe FUN_14975dbbe body=93 status=ok
// SIG undefined FUN_14975dbbe(void)

void FUN_14975dbbe(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24dc8 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24dc8 = FUN_140002ddd(FUN_146752e0b,uVar2,L"BoolToIntDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24dc8,param_1);
  return;
}



// FUNCTION 14975dc1c FUN_14975dc1c body=55 status=ok
// SIG undefined FUN_14975dc1c(void)

void FUN_14975dc1c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24dc8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24dc8 = FUN_140002ddd(FUN_146752e0b,uVar1,L"BoolToIntDataflowNode");
  }
  return;
}



// FUNCTION 14975dc54 FUN_14975dc54 body=233 status=ok
// SIG undefined FUN_14975dc54(void)

ulonglong FUN_14975dc54(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FBoolToIntDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14975dcee;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14975dcee;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14975dcee;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14975dcee:
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



// FUNCTION 14975dd40 FUN_14975dd40 body=77 status=ok
// SIG undefined FUN_14975dd40(void)

void FUN_14975dd40(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be4c410;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4b] = 0;
  param_2[0x4c] = 0x8000000000;
  param_2[0x4d] = 0;
  return;
}



// FUNCTION 14975dd8e FUN_14975dd8e body=77 status=ok
// SIG undefined FUN_14975dd8e(void)

void FUN_14975dd8e(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be4c410;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4b] = 0;
  param_2[0x4c] = 0x8000000000;
  param_2[0x4d] = 0;
  return;
}



// FUNCTION 14975de00 FUN_14975de00 body=63 status=ok
// SIG undefined FUN_14975de00(void)

undefined1 FUN_14975de00(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14975e21a(param_2,param_3);
    param_3 = param_3 + 0x270;
    param_2 = param_2 + 0x270;
  }
  return 1;
}



// FUNCTION 14975de68 FUN_14975de68 body=59 status=ok
// SIG undefined FUN_14975de68(void)

undefined8 FUN_14975de68(longlong *param_1)

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



// FUNCTION 14975deb4 FUN_14975deb4 body=40 status=ok
// SIG undefined FUN_14975deb4(void)

void FUN_14975deb4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x270) == '\x01') {
    FUN_14975e1de(param_2);
    *(undefined1 *)(param_2 + 0x270) = 0;
  }
  return;
}



// FUNCTION 14975df2a FUN_14975df2a body=38 status=ok
// SIG undefined FUN_14975df2a(void)

undefined8 FUN_14975df2a(undefined8 param_1,int param_2)

{
  FUN_14975e1de();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14975df50 FUN_14975df50 body=38 status=ok
// SIG undefined FUN_14975df50(void)

undefined8 FUN_14975df50(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FConvexHullToMeshDataflowNode",1);
  return param_2;
}



// FUNCTION 14975df76 FUN_14975df76 body=38 status=ok
// SIG undefined FUN_14975df76(void)

undefined8 FUN_14975df76(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Convex Hull to Mesh",1);
  return param_2;
}



// FUNCTION 14975df9c FUN_14975df9c body=38 status=ok
// SIG undefined FUN_14975df9c(void)

undefined8 FUN_14975df9c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Mesh",1);
  return param_2;
}



// FUNCTION 14975dfc2 FUN_14975dfc2 body=32 status=ok
// SIG undefined FUN_14975dfc2(void)

undefined8 FUN_14975dfc2(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14975dfe2 FUN_14975dfe2 body=123 status=ok
// SIG undefined FUN_14975dfe2(void)

void FUN_14975dfe2(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24de0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24de0 = FUN_140002ddd(FUN_146752ea1,uVar1,L"ConvexHullToMeshDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24de0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014975e05a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14975e05e FUN_14975e05e body=93 status=ok
// SIG undefined FUN_14975e05e(void)

void FUN_14975e05e(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24de0 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24de0 = FUN_140002ddd(FUN_146752ea1,uVar2,L"ConvexHullToMeshDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24de0,param_1);
  return;
}



// FUNCTION 14975e0bc FUN_14975e0bc body=55 status=ok
// SIG undefined FUN_14975e0bc(void)

void FUN_14975e0bc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24de0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24de0 = FUN_140002ddd(FUN_146752ea1,uVar1,L"ConvexHullToMeshDataflowNode");
  }
  return;
}



// FUNCTION 14975e0f4 FUN_14975e0f4 body=233 status=ok
// SIG undefined FUN_14975e0f4(void)

ulonglong FUN_14975e0f4(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FConvexHullToMeshDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14975e18e;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14975e18e;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14975e18e;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14975e18e:
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



// FUNCTION 14975e1de FUN_14975e1de body=60 status=ok
// SIG undefined FUN_14975e1de(void)

void FUN_14975e1de(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be4c410;
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 14975e21a FUN_14975e21a body=110 status=ok
// SIG undefined FUN_14975e21a(void)

longlong FUN_14975e21a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x248,param_2 + 0x248);
  }
  lVar1 = *(longlong *)(param_2 + 0x268);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x268);
    }
  }
  *(longlong *)(param_1 + 0x268) = lVar1;
  return param_1;
}



// FUNCTION 14975e28a FUN_14975e28a body=70 status=ok
// SIG undefined FUN_14975e28a(void)

void FUN_14975e28a(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be4c6c0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  *(undefined4 *)(param_2 + 0x37) = 8;
  param_2[0x38] = 0;
  return;
}



// FUNCTION 14975e2d0 FUN_14975e2d0 body=70 status=ok
// SIG undefined FUN_14975e2d0(void)

void FUN_14975e2d0(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be4c6c0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  *(undefined4 *)(param_2 + 0x37) = 8;
  param_2[0x38] = 0;
  return;
}



// FUNCTION 14975e33a FUN_14975e33a body=63 status=ok
// SIG undefined FUN_14975e33a(void)

undefined1 FUN_14975e33a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14975e75a(param_2,param_3);
    param_3 = param_3 + 0x1c8;
    param_2 = param_2 + 0x1c8;
  }
  return 1;
}



// FUNCTION 14975e3a2 FUN_14975e3a2 body=59 status=ok
// SIG undefined FUN_14975e3a2(void)

undefined8 FUN_14975e3a2(longlong *param_1)

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



// FUNCTION 14975e3ee FUN_14975e3ee body=40 status=ok
// SIG undefined FUN_14975e3ee(void)

void FUN_14975e3ee(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1c8) == '\x01') {
    FUN_14975e718(param_2);
    *(undefined1 *)(param_2 + 0x1c8) = 0;
  }
  return;
}



// FUNCTION 14975e464 FUN_14975e464 body=38 status=ok
// SIG undefined FUN_14975e464(void)

undefined8 FUN_14975e464(undefined8 param_1,int param_2)

{
  FUN_14975e718();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14975e48a FUN_14975e48a body=38 status=ok
// SIG undefined FUN_14975e48a(void)

undefined8 FUN_14975e48a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FSphereCoveringToMeshDataflowNode",1);
  return param_2;
}



// FUNCTION 14975e4b0 FUN_14975e4b0 body=38 status=ok
// SIG undefined FUN_14975e4b0(void)

undefined8 FUN_14975e4b0(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Sphere Covering to Mesh",1);
  return param_2;
}



// FUNCTION 14975e4d6 FUN_14975e4d6 body=38 status=ok
// SIG undefined FUN_14975e4d6(void)

undefined8 FUN_14975e4d6(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Mesh",1);
  return param_2;
}



// FUNCTION 14975e4fc FUN_14975e4fc body=32 status=ok
// SIG undefined FUN_14975e4fc(void)

undefined8 FUN_14975e4fc(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14975e51c FUN_14975e51c body=123 status=ok
// SIG undefined FUN_14975e51c(void)

void FUN_14975e51c(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24df8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24df8 = FUN_140002ddd(FUN_146752f37,uVar1,L"SphereCoveringToMeshDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24df8,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014975e594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14975e598 FUN_14975e598 body=93 status=ok
// SIG undefined FUN_14975e598(void)

void FUN_14975e598(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24df8 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24df8 = FUN_140002ddd(FUN_146752f37,uVar2,L"SphereCoveringToMeshDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24df8,param_1);
  return;
}



// FUNCTION 14975e5f6 FUN_14975e5f6 body=55 status=ok
// SIG undefined FUN_14975e5f6(void)

void FUN_14975e5f6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24df8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24df8 = FUN_140002ddd(FUN_146752f37,uVar1,L"SphereCoveringToMeshDataflowNode");
  }
  return;
}



// FUNCTION 14975e62e FUN_14975e62e body=233 status=ok
// SIG undefined FUN_14975e62e(void)

ulonglong FUN_14975e62e(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FSphereCoveringToMeshDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14975e6c8;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14975e6c8;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14975e6c8;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14975e6c8:
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



// FUNCTION 14975e718 FUN_14975e718 body=65 status=ok
// SIG undefined FUN_14975e718(void)

void FUN_14975e718(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be4c6c0;
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 14975e75a FUN_14975e75a body=117 status=ok
// SIG undefined FUN_14975e75a(void)

longlong FUN_14975e75a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_146fc06e2();
  FUN_1405b70a4(param_1 + 0x198,param_2 + 0x198);
  FUN_1408fdf38(param_1 + 0x1a8,param_2 + 0x1a8);
  *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_2 + 0x1b8);
  lVar1 = *(longlong *)(param_2 + 0x1c0);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x1c0);
    }
  }
  *(longlong *)(param_1 + 0x1c0) = lVar1;
  return param_1;
}



// FUNCTION 14975e7d0 FUN_14975e7d0 body=59 status=ok
// SIG undefined FUN_14975e7d0(void)

void FUN_14975e7d0(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be4c970;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  *(undefined4 *)(param_2 + 0x37) = 0;
  return;
}



// FUNCTION 14975e80c FUN_14975e80c body=59 status=ok
// SIG undefined FUN_14975e80c(void)

void FUN_14975e80c(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be4c970;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  *(undefined4 *)(param_2 + 0x37) = 0;
  return;
}



// FUNCTION 14975e86c FUN_14975e86c body=120 status=ok
// SIG undefined FUN_14975e86c(void)

undefined8 FUN_14975e86c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    FUN_1405b70a4(param_2 + 0x198,param_3 + 0x198);
    FUN_1408fdf38(param_2 + 0x1a8,param_3 + 0x1a8);
    *(undefined4 *)(param_2 + 0x1b8) = *(undefined4 *)(param_3 + 0x1b8);
    param_2 = param_2 + 0x1c0;
    param_3 = param_3 + 0x1c0;
  }
  return 1;
}



// FUNCTION 14975e90c FUN_14975e90c body=59 status=ok
// SIG undefined FUN_14975e90c(void)

undefined8 FUN_14975e90c(longlong *param_1)

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



// FUNCTION 14975e958 FUN_14975e958 body=40 status=ok
// SIG undefined FUN_14975e958(void)

void FUN_14975e958(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1c0) == '\x01') {
    FUN_14975ed56(param_2);
    *(undefined1 *)(param_2 + 0x1c0) = 0;
  }
  return;
}



// FUNCTION 14975e9ce FUN_14975e9ce body=38 status=ok
// SIG undefined FUN_14975e9ce(void)

undefined8 FUN_14975e9ce(undefined8 param_1,int param_2)

{
  FUN_14975ed56();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14975e9f4 FUN_14975e9f4 body=38 status=ok
// SIG undefined FUN_14975e9f4(void)

undefined8 FUN_14975e9f4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FSphereCoveringCountSpheresNode",1);
  return param_2;
}



// FUNCTION 14975ea1a FUN_14975ea1a body=38 status=ok
// SIG undefined FUN_14975ea1a(void)

undefined8 FUN_14975ea1a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Get Sphere Covering Sphere Count",1);
  return param_2;
}



// FUNCTION 14975ea40 FUN_14975ea40 body=38 status=ok
// SIG undefined FUN_14975ea40(void)

undefined8 FUN_14975ea40(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"SphereCovering",1);
  return param_2;
}



// FUNCTION 14975ea66 FUN_14975ea66 body=32 status=ok
// SIG undefined FUN_14975ea66(void)

undefined8 FUN_14975ea66(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14975ea86 FUN_14975ea86 body=123 status=ok
// SIG undefined FUN_14975ea86(void)

void FUN_14975ea86(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24e10 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24e10 = FUN_140002ddd(FUN_146752fcd,uVar1,L"SphereCoveringCountSpheresNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24e10,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014975eafe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14975eb02 FUN_14975eb02 body=93 status=ok
// SIG undefined FUN_14975eb02(void)

void FUN_14975eb02(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24e10 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24e10 = FUN_140002ddd(FUN_146752fcd,uVar2,L"SphereCoveringCountSpheresNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24e10,param_1);
  return;
}



// FUNCTION 14975eb60 FUN_14975eb60 body=55 status=ok
// SIG undefined FUN_14975eb60(void)

void FUN_14975eb60(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24e10 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24e10 = FUN_140002ddd(FUN_146752fcd,uVar1,L"SphereCoveringCountSpheresNode");
  }
  return;
}



// FUNCTION 14975eb98 FUN_14975eb98 body=210 status=ok
// SIG undefined FUN_14975eb98(void)

void FUN_14975eb98(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x1b8) {
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x198;
    uVar2 = FUN_146fb4872(param_1,&local_58);
    lVar1 = FUN_149799e60(uVar2,param_2,param_1 + 0x198);
    local_5c = *(undefined4 *)(lVar1 + 8);
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x1b8;
    lVar1 = FUN_146fb78aa(param_1,&local_58);
    if (lVar1 != 0) {
      FUN_149700500(lVar1,&local_5c,param_2);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14975ec6c FUN_14975ec6c body=233 status=ok
// SIG undefined FUN_14975ec6c(void)

ulonglong FUN_14975ec6c(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FSphereCoveringCountSpheresNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14975ed06;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14975ed06;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14975ed06;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14975ed06:
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



// FUNCTION 14975ed56 FUN_14975ed56 body=65 status=ok
// SIG undefined FUN_14975ed56(void)

void FUN_14975ed56(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be4c970;
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 14975ed98 FUN_14975ed98 body=60 status=ok
// SIG undefined FUN_14975ed98(void)

void FUN_14975ed98(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be4cc30;
  param_2[0x33] = 0;
  *(undefined1 *)(param_2 + 0x34) = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  return;
}



// FUNCTION 14975edd4 FUN_14975edd4 body=60 status=ok
// SIG undefined FUN_14975edd4(void)

void FUN_14975edd4(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be4cc30;
  param_2[0x33] = 0;
  *(undefined1 *)(param_2 + 0x34) = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  return;
}



// FUNCTION 14975ee34 FUN_14975ee34 body=63 status=ok
// SIG undefined FUN_14975ee34(void)

undefined1 FUN_14975ee34(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14975f24c(param_2,param_3);
    param_3 = param_3 + 0x1b8;
    param_2 = param_2 + 0x1b8;
  }
  return 1;
}



// FUNCTION 14975ee9c FUN_14975ee9c body=59 status=ok
// SIG undefined FUN_14975ee9c(void)

undefined8 FUN_14975ee9c(longlong *param_1)

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



// FUNCTION 14975eee8 FUN_14975eee8 body=67 status=ok
// SIG undefined FUN_14975eee8(void)

void FUN_14975eee8(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x37) == '\x01') {
    *param_2 = &PTR_FUN_14be4cc30;
    if (param_2[0x35] != 0) {
      FUN_1400020a8();
    }
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x37) = 0;
  }
  return;
}


