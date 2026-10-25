// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14977948e FUN_14977948e body=62 status=ok
// SIG undefined FUN_14977948e(void)

void FUN_14977948e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x4a) == '\x01') {
    *param_2 = &PTR_FUN_14be5b5c0;
    FUN_14054b30a(param_2 + 0x34);
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x4a) = 0;
  }
  return;
}



// FUNCTION 14977951a FUN_14977951a body=63 status=ok
// SIG undefined FUN_14977951a(void)

undefined8 * FUN_14977951a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be5b5c0;
  FUN_14054b30a(param_1 + 0x34);
  FUN_146fc8eba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14977955a FUN_14977955a body=38 status=ok
// SIG undefined FUN_14977955a(void)

undefined8 FUN_14977955a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FMeshToCollectionDataflowNode",1);
  return param_2;
}



// FUNCTION 149779580 FUN_149779580 body=38 status=ok
// SIG undefined FUN_149779580(void)

undefined8 FUN_149779580(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"MeshToCollection",1);
  return param_2;
}



// FUNCTION 1497795a6 FUN_1497795a6 body=38 status=ok
// SIG undefined FUN_1497795a6(void)

undefined8 FUN_1497795a6(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Mesh|Utilities",1);
  return param_2;
}



// FUNCTION 1497795cc FUN_1497795cc body=32 status=ok
// SIG undefined FUN_1497795cc(void)

undefined8 FUN_1497795cc(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 1497795ec FUN_1497795ec body=123 status=ok
// SIG undefined FUN_1497795ec(void)

void FUN_1497795ec(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc256d8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc256d8 = FUN_140002ddd(FUN_146756519,uVar1,L"MeshToCollectionDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc256d8,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149779664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149779668 FUN_149779668 body=93 status=ok
// SIG undefined FUN_149779668(void)

void FUN_149779668(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc256d8 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc256d8 = FUN_140002ddd(FUN_146756519,uVar2,L"MeshToCollectionDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc256d8,param_1);
  return;
}



// FUNCTION 1497796c6 FUN_1497796c6 body=55 status=ok
// SIG undefined FUN_1497796c6(void)

void FUN_1497796c6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc256d8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc256d8 = FUN_140002ddd(FUN_146756519,uVar1,L"MeshToCollectionDataflowNode");
  }
  return;
}



// FUNCTION 1497796fe FUN_1497796fe body=233 status=ok
// SIG undefined FUN_1497796fe(void)

ulonglong FUN_1497796fe(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FMeshToCollectionDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149779798;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149779798;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149779798;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149779798:
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



// FUNCTION 1497797e8 FUN_1497797e8 body=323 status=ok
// SIG undefined FUN_1497797e8(void)

undefined8 * FUN_1497797e8(undefined8 param_1,undefined8 *param_2)

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



// FUNCTION 14977992c FUN_14977992c body=91 status=ok
// SIG undefined FUN_14977992c(void)

longlong FUN_14977992c(longlong param_1,longlong param_2)

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
  FUN_146ecd102(param_1 + 0x1a0,param_2 + 0x1a0);
  return param_1;
}



// FUNCTION 149779988 FUN_149779988 body=62 status=ok
// SIG undefined FUN_149779988(void)

void FUN_149779988(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5b860;
  FUN_1414db454(param_2 + 0x33);
  *(undefined1 *)(param_2 + 0x49) = 0;
  param_2[0x4a] = 0;
  return;
}



// FUNCTION 1497799c6 FUN_1497799c6 body=62 status=ok
// SIG undefined FUN_1497799c6(void)

void FUN_1497799c6(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5b860;
  FUN_1414db454(param_2 + 0x33);
  *(undefined1 *)(param_2 + 0x49) = 0;
  param_2[0x4a] = 0;
  return;
}



// FUNCTION 149779a28 FUN_149779a28 body=63 status=ok
// SIG undefined FUN_149779a28(void)

undefined1 FUN_149779a28(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149779f7a(param_2,param_3);
    param_3 = param_3 + 600;
    param_2 = param_2 + 600;
  }
  return 1;
}



// FUNCTION 149779a90 FUN_149779a90 body=59 status=ok
// SIG undefined FUN_149779a90(void)

undefined8 FUN_149779a90(longlong *param_1)

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



// FUNCTION 149779adc FUN_149779adc body=62 status=ok
// SIG undefined FUN_149779adc(void)

void FUN_149779adc(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x4b) == '\x01') {
    *param_2 = &PTR_FUN_14be5b860;
    FUN_14054b30a(param_2 + 0x33);
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x4b) = 0;
  }
  return;
}



// FUNCTION 149779b68 FUN_149779b68 body=63 status=ok
// SIG undefined FUN_149779b68(void)

undefined8 * FUN_149779b68(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be5b860;
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149779ba8 FUN_149779ba8 body=38 status=ok
// SIG undefined FUN_149779ba8(void)

undefined8 FUN_149779ba8(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FCollectionToMeshDataflowNode",1);
  return param_2;
}



// FUNCTION 149779bce FUN_149779bce body=38 status=ok
// SIG undefined FUN_149779bce(void)

undefined8 FUN_149779bce(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"CollectionToMesh",1);
  return param_2;
}



// FUNCTION 149779bf4 FUN_149779bf4 body=38 status=ok
// SIG undefined FUN_149779bf4(void)

undefined8 FUN_149779bf4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Mesh|Utilities",1);
  return param_2;
}



// FUNCTION 149779c1a FUN_149779c1a body=32 status=ok
// SIG undefined FUN_149779c1a(void)

undefined8 FUN_149779c1a(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149779c3a FUN_149779c3a body=123 status=ok
// SIG undefined FUN_149779c3a(void)

void FUN_149779c3a(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc256f0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc256f0 = FUN_140002ddd(FUN_1467565af,uVar1,L"CollectionToMeshDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc256f0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149779cb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149779cb6 FUN_149779cb6 body=93 status=ok
// SIG undefined FUN_149779cb6(void)

void FUN_149779cb6(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc256f0 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc256f0 = FUN_140002ddd(FUN_1467565af,uVar2,L"CollectionToMeshDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc256f0,param_1);
  return;
}



// FUNCTION 149779d14 FUN_149779d14 body=55 status=ok
// SIG undefined FUN_149779d14(void)

void FUN_149779d14(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc256f0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc256f0 = FUN_140002ddd(FUN_1467565af,uVar1,L"CollectionToMeshDataflowNode");
  }
  return;
}



// FUNCTION 149779d4c FUN_149779d4c body=233 status=ok
// SIG undefined FUN_149779d4c(void)

ulonglong FUN_149779d4c(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FCollectionToMeshDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149779de6;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149779de6;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149779de6;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149779de6:
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



// FUNCTION 149779e36 FUN_149779e36 body=323 status=ok
// SIG undefined FUN_149779e36(void)

undefined8 * FUN_149779e36(undefined8 param_1,undefined8 *param_2)

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



// FUNCTION 149779f7a FUN_149779f7a body=100 status=ok
// SIG undefined FUN_149779f7a(void)

longlong FUN_149779f7a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  *(undefined1 *)(param_1 + 0x248) = *(undefined1 *)(param_2 + 0x248);
  lVar1 = *(longlong *)(param_2 + 0x250);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x250);
    }
  }
  *(longlong *)(param_1 + 0x250) = lVar1;
  return param_1;
}



// FUNCTION 149779fe0 FUN_149779fe0 body=65 status=ok
// SIG undefined FUN_149779fe0(void)

void FUN_149779fe0(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5bb00;
  param_2[0x33] = 0;
  *(undefined1 *)(param_2 + 0x34) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1a4) = 0;
  param_2[0x35] = 0;
  return;
}



// FUNCTION 14977a022 FUN_14977a022 body=65 status=ok
// SIG undefined FUN_14977a022(void)

void FUN_14977a022(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5bb00;
  param_2[0x33] = 0;
  *(undefined1 *)(param_2 + 0x34) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1a4) = 0;
  param_2[0x35] = 0;
  return;
}



// FUNCTION 14977a088 FUN_14977a088 body=63 status=ok
// SIG undefined FUN_14977a088(void)

undefined1 FUN_14977a088(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14977a5aa(param_2,param_3);
    param_3 = param_3 + 0x1b0;
    param_2 = param_2 + 0x1b0;
  }
  return 1;
}



// FUNCTION 14977a0f0 FUN_14977a0f0 body=59 status=ok
// SIG undefined FUN_14977a0f0(void)

undefined8 FUN_14977a0f0(longlong *param_1)

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



// FUNCTION 14977a13c FUN_14977a13c body=40 status=ok
// SIG undefined FUN_14977a13c(void)

void FUN_14977a13c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1b0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1b0) = 0;
  }
  return;
}



// FUNCTION 14977a1b2 FUN_14977a1b2 body=38 status=ok
// SIG undefined FUN_14977a1b2(void)

undefined8 FUN_14977a1b2(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14977a1d8 FUN_14977a1d8 body=38 status=ok
// SIG undefined FUN_14977a1d8(void)

undefined8 FUN_14977a1d8(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FStaticMeshToMeshDataflowNode",1);
  return param_2;
}



// FUNCTION 14977a1fe FUN_14977a1fe body=38 status=ok
// SIG undefined FUN_14977a1fe(void)

undefined8 FUN_14977a1fe(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"StaticMeshToMesh",1);
  return param_2;
}



// FUNCTION 14977a224 FUN_14977a224 body=38 status=ok
// SIG undefined FUN_14977a224(void)

undefined8 FUN_14977a224(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Mesh|Utilities",1);
  return param_2;
}



// FUNCTION 14977a24a FUN_14977a24a body=32 status=ok
// SIG undefined FUN_14977a24a(void)

undefined8 FUN_14977a24a(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14977a26a FUN_14977a26a body=123 status=ok
// SIG undefined FUN_14977a26a(void)

void FUN_14977a26a(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25708 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25708 = FUN_140002ddd(FUN_146756645,uVar1,L"StaticMeshToMeshDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25708,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014977a2e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14977a2e6 FUN_14977a2e6 body=93 status=ok
// SIG undefined FUN_14977a2e6(void)

void FUN_14977a2e6(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25708 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25708 = FUN_140002ddd(FUN_146756645,uVar2,L"StaticMeshToMeshDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25708,param_1);
  return;
}



// FUNCTION 14977a344 FUN_14977a344 body=55 status=ok
// SIG undefined FUN_14977a344(void)

void FUN_14977a344(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25708 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25708 = FUN_140002ddd(FUN_146756645,uVar1,L"StaticMeshToMeshDataflowNode");
  }
  return;
}



// FUNCTION 14977a37c FUN_14977a37c body=233 status=ok
// SIG undefined FUN_14977a37c(void)

ulonglong FUN_14977a37c(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FStaticMeshToMeshDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14977a416;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14977a416;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14977a416;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14977a416:
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



// FUNCTION 14977a466 FUN_14977a466 body=323 status=ok
// SIG undefined FUN_14977a466(void)

undefined8 * FUN_14977a466(undefined8 param_1,undefined8 *param_2)

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



// FUNCTION 14977a5aa FUN_14977a5aa body=131 status=ok
// SIG undefined FUN_14977a5aa(void)

longlong FUN_14977a5aa(longlong param_1,longlong param_2)

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
  *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_2 + 0x1a0);
  lVar2 = *(longlong *)(param_2 + 0x1a8);
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 0x1a8);
    }
  }
  *(longlong *)(param_1 + 0x1a8) = lVar2;
  return param_1;
}



// FUNCTION 14977a62e FUN_14977a62e body=53 status=ok
// SIG undefined FUN_14977a62e(void)

void FUN_14977a62e(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5bda0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  return;
}



// FUNCTION 14977a664 FUN_14977a664 body=53 status=ok
// SIG undefined FUN_14977a664(void)

void FUN_14977a664(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5bda0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  return;
}



// FUNCTION 14977a6be FUN_14977a6be body=63 status=ok
// SIG undefined FUN_14977a6be(void)

undefined1 FUN_14977a6be(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14977abe0(param_2,param_3);
    param_3 = param_3 + 0x1b0;
    param_2 = param_2 + 0x1b0;
  }
  return 1;
}



// FUNCTION 14977a726 FUN_14977a726 body=59 status=ok
// SIG undefined FUN_14977a726(void)

undefined8 FUN_14977a726(longlong *param_1)

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



// FUNCTION 14977a772 FUN_14977a772 body=40 status=ok
// SIG undefined FUN_14977a772(void)

void FUN_14977a772(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1b0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1b0) = 0;
  }
  return;
}



// FUNCTION 14977a7e8 FUN_14977a7e8 body=38 status=ok
// SIG undefined FUN_14977a7e8(void)

undefined8 FUN_14977a7e8(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14977a80e FUN_14977a80e body=38 status=ok
// SIG undefined FUN_14977a80e(void)

undefined8 FUN_14977a80e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FMeshAppendDataflowNode",1);
  return param_2;
}



// FUNCTION 14977a834 FUN_14977a834 body=38 status=ok
// SIG undefined FUN_14977a834(void)

undefined8 FUN_14977a834(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"MeshAppend",1);
  return param_2;
}



// FUNCTION 14977a85a FUN_14977a85a body=38 status=ok
// SIG undefined FUN_14977a85a(void)

undefined8 FUN_14977a85a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Mesh|Utilities",1);
  return param_2;
}



// FUNCTION 14977a880 FUN_14977a880 body=32 status=ok
// SIG undefined FUN_14977a880(void)

undefined8 FUN_14977a880(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14977a8a0 FUN_14977a8a0 body=123 status=ok
// SIG undefined FUN_14977a8a0(void)

void FUN_14977a8a0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25720 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25720 = FUN_140002ddd(FUN_1467566db,uVar1,L"MeshAppendDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25720,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014977a918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14977a91c FUN_14977a91c body=93 status=ok
// SIG undefined FUN_14977a91c(void)

void FUN_14977a91c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25720 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25720 = FUN_140002ddd(FUN_1467566db,uVar2,L"MeshAppendDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25720,param_1);
  return;
}



// FUNCTION 14977a97a FUN_14977a97a body=55 status=ok
// SIG undefined FUN_14977a97a(void)

void FUN_14977a97a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25720 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25720 = FUN_140002ddd(FUN_1467566db,uVar1,L"MeshAppendDataflowNode");
  }
  return;
}



// FUNCTION 14977a9b2 FUN_14977a9b2 body=233 status=ok
// SIG undefined FUN_14977a9b2(void)

ulonglong FUN_14977a9b2(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FMeshAppendDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14977aa4c;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14977aa4c;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14977aa4c;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14977aa4c:
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



// FUNCTION 14977aa9c FUN_14977aa9c body=323 status=ok
// SIG undefined FUN_14977aa9c(void)

undefined8 * FUN_14977aa9c(undefined8 param_1,undefined8 *param_2)

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



// FUNCTION 14977abe0 FUN_14977abe0 body=162 status=ok
// SIG undefined FUN_14977abe0(void)

longlong FUN_14977abe0(longlong param_1,longlong param_2)

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
  lVar2 = *(longlong *)(param_2 + 0x1a8);
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 0x1a8);
    }
  }
  *(longlong *)(param_1 + 0x1a8) = lVar2;
  return param_1;
}



// FUNCTION 14977ac84 FUN_14977ac84 body=60 status=ok
// SIG undefined FUN_14977ac84(void)

void FUN_14977ac84(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5c140;
  *(undefined1 *)(param_2 + 0x33) = 1;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  return;
}



// FUNCTION 14977acc0 FUN_14977acc0 body=60 status=ok
// SIG undefined FUN_14977acc0(void)

void FUN_14977acc0(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5c140;
  *(undefined1 *)(param_2 + 0x33) = 1;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  return;
}



// FUNCTION 14977ad20 FUN_14977ad20 body=63 status=ok
// SIG undefined FUN_14977ad20(void)

undefined1 FUN_14977ad20(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14977b242(param_2,param_3);
    param_3 = param_3 + 0x1b8;
    param_2 = param_2 + 0x1b8;
  }
  return 1;
}



// FUNCTION 14977ad88 FUN_14977ad88 body=59 status=ok
// SIG undefined FUN_14977ad88(void)

undefined8 FUN_14977ad88(longlong *param_1)

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



// FUNCTION 14977add4 FUN_14977add4 body=40 status=ok
// SIG undefined FUN_14977add4(void)

void FUN_14977add4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1b8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1b8) = 0;
  }
  return;
}



// FUNCTION 14977ae4a FUN_14977ae4a body=38 status=ok
// SIG undefined FUN_14977ae4a(void)

undefined8 FUN_14977ae4a(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14977ae70 FUN_14977ae70 body=38 status=ok
// SIG undefined FUN_14977ae70(void)

undefined8 FUN_14977ae70(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FMeshBooleanDataflowNode",1);
  return param_2;
}



// FUNCTION 14977ae96 FUN_14977ae96 body=38 status=ok
// SIG undefined FUN_14977ae96(void)

undefined8 FUN_14977ae96(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"MeshBoolean",1);
  return param_2;
}



// FUNCTION 14977aebc FUN_14977aebc body=38 status=ok
// SIG undefined FUN_14977aebc(void)

undefined8 FUN_14977aebc(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Mesh|Utilities",1);
  return param_2;
}



// FUNCTION 14977aee2 FUN_14977aee2 body=32 status=ok
// SIG undefined FUN_14977aee2(void)

undefined8 FUN_14977aee2(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14977af02 FUN_14977af02 body=123 status=ok
// SIG undefined FUN_14977af02(void)

void FUN_14977af02(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25750 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25750 = FUN_140002ddd(FUN_1467567a1,uVar1,L"MeshBooleanDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25750,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014977af7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14977af7e FUN_14977af7e body=93 status=ok
// SIG undefined FUN_14977af7e(void)

void FUN_14977af7e(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25750 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25750 = FUN_140002ddd(FUN_1467567a1,uVar2,L"MeshBooleanDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25750,param_1);
  return;
}



// FUNCTION 14977afdc FUN_14977afdc body=55 status=ok
// SIG undefined FUN_14977afdc(void)

void FUN_14977afdc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25750 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25750 = FUN_140002ddd(FUN_1467567a1,uVar1,L"MeshBooleanDataflowNode");
  }
  return;
}



// FUNCTION 14977b014 FUN_14977b014 body=233 status=ok
// SIG undefined FUN_14977b014(void)

ulonglong FUN_14977b014(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FMeshBooleanDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14977b0ae;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14977b0ae;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14977b0ae;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14977b0ae:
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



// FUNCTION 14977b0fe FUN_14977b0fe body=323 status=ok
// SIG undefined FUN_14977b0fe(void)

undefined8 * FUN_14977b0fe(undefined8 param_1,undefined8 *param_2)

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



// FUNCTION 14977b242 FUN_14977b242 body=174 status=ok
// SIG undefined FUN_14977b242(void)

longlong FUN_14977b242(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  
  FUN_146fc06e2();
  *(undefined1 *)(param_1 + 0x198) = *(undefined1 *)(param_2 + 0x198);
  lVar2 = *(longlong *)(param_2 + 0x1a0);
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 0x1a0);
    }
  }
  bVar1 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x1a0) = lVar2;
  lVar2 = *(longlong *)(param_2 + 0x1a8);
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 0x1a8);
      bVar1 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x1a8) = lVar2;
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



// FUNCTION 14977b2f2 FUN_14977b2f2 body=68 status=ok
// SIG undefined FUN_14977b2f2(void)

void FUN_14977b2f2(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5c3e0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  *(undefined4 *)(param_2 + 0x36) = 0x3f800000;
  param_2[0x37] = 0;
  return;
}



// FUNCTION 14977b336 FUN_14977b336 body=68 status=ok
// SIG undefined FUN_14977b336(void)

void FUN_14977b336(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5c3e0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  *(undefined4 *)(param_2 + 0x36) = 0x3f800000;
  param_2[0x37] = 0;
  return;
}



// FUNCTION 14977b39e FUN_14977b39e body=63 status=ok
// SIG undefined FUN_14977b39e(void)

undefined1 FUN_14977b39e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14977b8fa(param_2,param_3);
    param_3 = param_3 + 0x1c0;
    param_2 = param_2 + 0x1c0;
  }
  return 1;
}



// FUNCTION 14977b406 FUN_14977b406 body=59 status=ok
// SIG undefined FUN_14977b406(void)

undefined8 FUN_14977b406(longlong *param_1)

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



// FUNCTION 14977b452 FUN_14977b452 body=67 status=ok
// SIG undefined FUN_14977b452(void)

void FUN_14977b452(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    *param_2 = &PTR_FUN_14be5c3e0;
    if (param_2[0x33] != 0) {
      FUN_1400020a8();
    }
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 14977b4e4 FUN_14977b4e4 body=68 status=ok
// SIG undefined FUN_14977b4e4(void)

undefined8 * FUN_14977b4e4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be5c3e0;
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14977b528 FUN_14977b528 body=38 status=ok
// SIG undefined FUN_14977b528(void)

undefined8 FUN_14977b528(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FMeshCopyToPointsDataflowNode",1);
  return param_2;
}



// FUNCTION 14977b54e FUN_14977b54e body=38 status=ok
// SIG undefined FUN_14977b54e(void)

undefined8 FUN_14977b54e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"MeshCopyToPoints",1);
  return param_2;
}



// FUNCTION 14977b574 FUN_14977b574 body=38 status=ok
// SIG undefined FUN_14977b574(void)

undefined8 FUN_14977b574(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Mesh|Utilities",1);
  return param_2;
}



// FUNCTION 14977b59a FUN_14977b59a body=32 status=ok
// SIG undefined FUN_14977b59a(void)

undefined8 FUN_14977b59a(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14977b5ba FUN_14977b5ba body=123 status=ok
// SIG undefined FUN_14977b5ba(void)

void FUN_14977b5ba(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25768 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25768 = FUN_140002ddd(FUN_146756837,uVar1,L"MeshCopyToPointsDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25768,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014977b632. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14977b636 FUN_14977b636 body=93 status=ok
// SIG undefined FUN_14977b636(void)

void FUN_14977b636(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25768 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25768 = FUN_140002ddd(FUN_146756837,uVar2,L"MeshCopyToPointsDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25768,param_1);
  return;
}



// FUNCTION 14977b694 FUN_14977b694 body=55 status=ok
// SIG undefined FUN_14977b694(void)

void FUN_14977b694(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25768 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25768 = FUN_140002ddd(FUN_146756837,uVar1,L"MeshCopyToPointsDataflowNode");
  }
  return;
}



// FUNCTION 14977b6cc FUN_14977b6cc body=233 status=ok
// SIG undefined FUN_14977b6cc(void)

ulonglong FUN_14977b6cc(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FMeshCopyToPointsDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14977b766;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14977b766;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14977b766;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14977b766:
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



// FUNCTION 14977b7b6 FUN_14977b7b6 body=323 status=ok
// SIG undefined FUN_14977b7b6(void)

undefined8 * FUN_14977b7b6(undefined8 param_1,undefined8 *param_2)

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



// FUNCTION 14977b8fa FUN_14977b8fa body=150 status=ok
// SIG undefined FUN_14977b8fa(void)

longlong FUN_14977b8fa(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  
  FUN_146fc06e2();
  FUN_1405b70a4(param_1 + 0x198,param_2 + 0x198);
  lVar2 = *(longlong *)(param_2 + 0x1a8);
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 0x1a8);
    }
  }
  bVar1 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x1a8) = lVar2;
  *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_2 + 0x1b0);
  lVar2 = *(longlong *)(param_2 + 0x1b8);
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 0x1b8);
    }
  }
  *(longlong *)(param_1 + 0x1b8) = lVar2;
  return param_1;
}



// FUNCTION 14977b992 FUN_14977b992 body=52 status=ok
// SIG undefined FUN_14977b992(void)

void FUN_14977b992(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5c680;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *(undefined4 *)(param_2 + 0x35) = 0;
  return;
}



// FUNCTION 14977b9c6 FUN_14977b9c6 body=52 status=ok
// SIG undefined FUN_14977b9c6(void)

void FUN_14977b9c6(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5c680;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *(undefined4 *)(param_2 + 0x35) = 0;
  return;
}



// FUNCTION 14977ba1e FUN_14977ba1e body=63 status=ok
// SIG undefined FUN_14977ba1e(void)

undefined1 FUN_14977ba1e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14977bdfc(param_2,param_3);
    param_3 = param_3 + 0x1b0;
    param_2 = param_2 + 0x1b0;
  }
  return 1;
}



// FUNCTION 14977ba86 FUN_14977ba86 body=59 status=ok
// SIG undefined FUN_14977ba86(void)

undefined8 FUN_14977ba86(longlong *param_1)

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



// FUNCTION 14977bad2 FUN_14977bad2 body=40 status=ok
// SIG undefined FUN_14977bad2(void)

void FUN_14977bad2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1b0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1b0) = 0;
  }
  return;
}



// FUNCTION 14977bb48 FUN_14977bb48 body=38 status=ok
// SIG undefined FUN_14977bb48(void)

undefined8 FUN_14977bb48(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14977bb6e FUN_14977bb6e body=38 status=ok
// SIG undefined FUN_14977bb6e(void)

undefined8 FUN_14977bb6e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FGetMeshDataDataflowNode",1);
  return param_2;
}



// FUNCTION 14977bb94 FUN_14977bb94 body=38 status=ok
// SIG undefined FUN_14977bb94(void)

undefined8 FUN_14977bb94(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GetMeshData",1);
  return param_2;
}



// FUNCTION 14977bbba FUN_14977bbba body=38 status=ok
// SIG undefined FUN_14977bbba(void)

undefined8 FUN_14977bbba(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Mesh|Utilities",1);
  return param_2;
}



// FUNCTION 14977bbe0 FUN_14977bbe0 body=32 status=ok
// SIG undefined FUN_14977bbe0(void)

undefined8 FUN_14977bbe0(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14977bc00 FUN_14977bc00 body=123 status=ok
// SIG undefined FUN_14977bc00(void)

void FUN_14977bc00(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25780 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25780 = FUN_140002ddd(FUN_1467568cd,uVar1,L"GetMeshDataDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25780,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014977bc78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14977bc7c FUN_14977bc7c body=93 status=ok
// SIG undefined FUN_14977bc7c(void)

void FUN_14977bc7c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25780 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25780 = FUN_140002ddd(FUN_1467568cd,uVar2,L"GetMeshDataDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25780,param_1);
  return;
}



// FUNCTION 14977bcda FUN_14977bcda body=55 status=ok
// SIG undefined FUN_14977bcda(void)

void FUN_14977bcda(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25780 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25780 = FUN_140002ddd(FUN_1467568cd,uVar1,L"GetMeshDataDataflowNode");
  }
  return;
}



// FUNCTION 14977bd12 FUN_14977bd12 body=233 status=ok
// SIG undefined FUN_14977bd12(void)

ulonglong FUN_14977bd12(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FGetMeshDataDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14977bdac;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14977bdac;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14977bdac;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14977bdac:
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



// FUNCTION 14977bdfc FUN_14977bdfc body=97 status=ok
// SIG undefined FUN_14977bdfc(void)

longlong FUN_14977bdfc(longlong param_1,longlong param_2)

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
  *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_2 + 0x1a0);
  *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_2 + 0x1a8);
  return param_1;
}



// FUNCTION 14977be5e FUN_14977be5e body=57 status=ok
// SIG undefined FUN_14977be5e(void)

void FUN_14977be5e(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5c920;
  param_2[0x33] = 0;
  FUN_1414db454(param_2 + 0x34);
  return;
}



// FUNCTION 14977be98 FUN_14977be98 body=57 status=ok
// SIG undefined FUN_14977be98(void)

void FUN_14977be98(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5c920;
  param_2[0x33] = 0;
  FUN_1414db454(param_2 + 0x34);
  return;
}



// FUNCTION 14977bef6 FUN_14977bef6 body=63 status=ok
// SIG undefined FUN_14977bef6(void)

undefined1 FUN_14977bef6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14977c304(param_2,param_3);
    param_3 = param_3 + 0x250;
    param_2 = param_2 + 0x250;
  }
  return 1;
}



// FUNCTION 14977bf5e FUN_14977bf5e body=59 status=ok
// SIG undefined FUN_14977bf5e(void)

undefined8 FUN_14977bf5e(longlong *param_1)

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



// FUNCTION 14977bfaa FUN_14977bfaa body=62 status=ok
// SIG undefined FUN_14977bfaa(void)

void FUN_14977bfaa(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x4a) == '\x01') {
    *param_2 = &PTR_FUN_14be5c920;
    FUN_14054b30a(param_2 + 0x34);
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x4a) = 0;
  }
  return;
}



// FUNCTION 14977c036 FUN_14977c036 body=63 status=ok
// SIG undefined FUN_14977c036(void)

undefined8 * FUN_14977c036(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be5c920;
  FUN_14054b30a(param_1 + 0x34);
  FUN_146fc8eba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14977c076 FUN_14977c076 body=38 status=ok
// SIG undefined FUN_14977c076(void)

undefined8 FUN_14977c076(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FGetCollectionFromAssetDataflowNode",1);
  return param_2;
}



// FUNCTION 14977c09c FUN_14977c09c body=38 status=ok
// SIG undefined FUN_14977c09c(void)

undefined8 FUN_14977c09c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GetCollectionFromAsset",1);
  return param_2;
}



// FUNCTION 14977c0c2 FUN_14977c0c2 body=38 status=ok
// SIG undefined FUN_14977c0c2(void)

undefined8 FUN_14977c0c2(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Asset",1);
  return param_2;
}



// FUNCTION 14977c0e8 FUN_14977c0e8 body=32 status=ok
// SIG undefined FUN_14977c0e8(void)

undefined8 FUN_14977c0e8(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14977c108 FUN_14977c108 body=123 status=ok
// SIG undefined FUN_14977c108(void)

void FUN_14977c108(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25798 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25798 = FUN_140002ddd(FUN_146756963,uVar1,L"GetCollectionFromAssetDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25798,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014977c180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14977c184 FUN_14977c184 body=93 status=ok
// SIG undefined FUN_14977c184(void)

void FUN_14977c184(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25798 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25798 = FUN_140002ddd(FUN_146756963,uVar2,L"GetCollectionFromAssetDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25798,param_1);
  return;
}



// FUNCTION 14977c1e2 FUN_14977c1e2 body=55 status=ok
// SIG undefined FUN_14977c1e2(void)

void FUN_14977c1e2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25798 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25798 = FUN_140002ddd(FUN_146756963,uVar1,L"GetCollectionFromAssetDataflowNode");
  }
  return;
}



// FUNCTION 14977c21a FUN_14977c21a body=233 status=ok
// SIG undefined FUN_14977c21a(void)

ulonglong FUN_14977c21a(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FGetCollectionFromAssetDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14977c2b4;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14977c2b4;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14977c2b4;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14977c2b4:
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



// FUNCTION 14977c304 FUN_14977c304 body=91 status=ok
// SIG undefined FUN_14977c304(void)

longlong FUN_14977c304(longlong param_1,longlong param_2)

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
  FUN_146ecd102(param_1 + 0x1a0,param_2 + 0x1a0);
  return param_1;
}



// FUNCTION 14977c360 FUN_14977c360 body=73 status=ok
// SIG undefined FUN_14977c360(void)

void FUN_14977c360(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5cbd0;
  FUN_1414db454(param_2 + 0x33);
  FUN_1414db454(param_2 + 0x49);
  param_2[0x5f] = 0;
  param_2[0x60] = 0;
  param_2[0x61] = 0;
  param_2[0x62] = 0;
  return;
}



// FUNCTION 14977c3aa FUN_14977c3aa body=73 status=ok
// SIG undefined FUN_14977c3aa(void)

void FUN_14977c3aa(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5cbd0;
  FUN_1414db454(param_2 + 0x33);
  FUN_1414db454(param_2 + 0x49);
  param_2[0x5f] = 0;
  param_2[0x60] = 0;
  param_2[0x61] = 0;
  param_2[0x62] = 0;
  return;
}



// FUNCTION 14977c418 FUN_14977c418 body=63 status=ok
// SIG undefined FUN_14977c418(void)

undefined1 FUN_14977c418(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14977c874(param_2,param_3);
    param_3 = param_3 + 0x318;
    param_2 = param_2 + 0x318;
  }
  return 1;
}



// FUNCTION 14977c480 FUN_14977c480 body=59 status=ok
// SIG undefined FUN_14977c480(void)

undefined8 FUN_14977c480(longlong *param_1)

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



// FUNCTION 14977c4cc FUN_14977c4cc body=40 status=ok
// SIG undefined FUN_14977c4cc(void)

void FUN_14977c4cc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x318) == '\x01') {
    FUN_14977c7f6(param_2);
    *(undefined1 *)(param_2 + 0x318) = 0;
  }
  return;
}



// FUNCTION 14977c542 FUN_14977c542 body=38 status=ok
// SIG undefined FUN_14977c542(void)

undefined8 FUN_14977c542(undefined8 param_1,int param_2)

{
  FUN_14977c7f6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14977c568 FUN_14977c568 body=38 status=ok
// SIG undefined FUN_14977c568(void)

undefined8 FUN_14977c568(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FAppendCollectionAssetsDataflowNode",1);
  return param_2;
}



// FUNCTION 14977c58e FUN_14977c58e body=38 status=ok
// SIG undefined FUN_14977c58e(void)

undefined8 FUN_14977c58e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"AppendCollections",1);
  return param_2;
}



// FUNCTION 14977c5b4 FUN_14977c5b4 body=38 status=ok
// SIG undefined FUN_14977c5b4(void)

undefined8 FUN_14977c5b4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection",1);
  return param_2;
}



// FUNCTION 14977c5da FUN_14977c5da body=32 status=ok
// SIG undefined FUN_14977c5da(void)

undefined8 FUN_14977c5da(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14977c5fa FUN_14977c5fa body=123 status=ok
// SIG undefined FUN_14977c5fa(void)

void FUN_14977c5fa(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc257b0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc257b0 = FUN_140002ddd(FUN_1467569f9,uVar1,L"AppendCollectionAssetsDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc257b0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014977c672. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14977c676 FUN_14977c676 body=93 status=ok
// SIG undefined FUN_14977c676(void)

void FUN_14977c676(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc257b0 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc257b0 = FUN_140002ddd(FUN_1467569f9,uVar2,L"AppendCollectionAssetsDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc257b0,param_1);
  return;
}



// FUNCTION 14977c6d4 FUN_14977c6d4 body=55 status=ok
// SIG undefined FUN_14977c6d4(void)

void FUN_14977c6d4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc257b0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc257b0 = FUN_140002ddd(FUN_1467569f9,uVar1,L"AppendCollectionAssetsDataflowNode");
  }
  return;
}



// FUNCTION 14977c70c FUN_14977c70c body=233 status=ok
// SIG undefined FUN_14977c70c(void)

ulonglong FUN_14977c70c(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FAppendCollectionAssetsDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14977c7a6;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14977c7a6;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14977c7a6;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14977c7a6:
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



// FUNCTION 14977c7f6 FUN_14977c7f6 body=125 status=ok
// SIG undefined FUN_14977c7f6(void)

void FUN_14977c7f6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be5cbd0;
  FUN_1447a1747(param_1[0x61],*(undefined4 *)(param_1 + 0x62));
  if (param_1[0x61] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x5f],*(undefined4 *)(param_1 + 0x60));
  if (param_1[0x5f] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x49);
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 14977c874 FUN_14977c874 body=98 status=ok
// SIG undefined FUN_14977c874(void)

longlong FUN_14977c874(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  FUN_146ecd102(param_1 + 0x248,param_2 + 0x248);
  FUN_140bee9ec(param_1 + 0x2f8,param_2 + 0x2f8);
  FUN_140bee9ec(param_1 + 0x308,param_2 + 0x308);
  return param_1;
}



// FUNCTION 14977c8d8 FUN_14977c8d8 body=79 status=ok
// SIG undefined FUN_14977c8d8(void)

void FUN_14977c8d8(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5ce80;
  *(undefined2 *)(param_2 + 0x33) = 0x101;
  *(undefined8 *)((longlong)param_2 + 0x19c) = 0x40000000ffffffff;
  FUN_1400b22c2(param_2 + 0x35,&DAT_149e02088);
  return;
}



// FUNCTION 14977c928 FUN_14977c928 body=79 status=ok
// SIG undefined FUN_14977c928(void)

void FUN_14977c928(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5ce80;
  *(undefined2 *)(param_2 + 0x33) = 0x101;
  *(undefined8 *)((longlong)param_2 + 0x19c) = 0x40000000ffffffff;
  FUN_1400b22c2(param_2 + 0x35,&DAT_149e02088);
  return;
}



// FUNCTION 14977c99c FUN_14977c99c body=111 status=ok
// SIG undefined FUN_14977c99c(void)

undefined8 FUN_14977c99c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    *(undefined8 *)(param_2 + 0x198) = *(undefined8 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x1a0) = *(undefined4 *)(param_3 + 0x1a0);
    FUN_144a787a6(param_2 + 0x1a8,param_3 + 0x1a8);
    param_2 = param_2 + 0x1b8;
    param_3 = param_3 + 0x1b8;
  }
  return 1;
}



// FUNCTION 14977ca34 FUN_14977ca34 body=59 status=ok
// SIG undefined FUN_14977ca34(void)

undefined8 FUN_14977ca34(longlong *param_1)

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



// FUNCTION 14977ca80 FUN_14977ca80 body=67 status=ok
// SIG undefined FUN_14977ca80(void)

void FUN_14977ca80(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x37) == '\x01') {
    *param_2 = &PTR_FUN_14be5ce80;
    if (param_2[0x35] != 0) {
      FUN_1400020a8();
    }
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x37) = 0;
  }
  return;
}



// FUNCTION 14977cb12 FUN_14977cb12 body=68 status=ok
// SIG undefined FUN_14977cb12(void)

undefined8 * FUN_14977cb12(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be5ce80;
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14977cb56 FUN_14977cb56 body=38 status=ok
// SIG undefined FUN_14977cb56(void)

undefined8 FUN_14977cb56(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FPrintStringDataflowNode",1);
  return param_2;
}



// FUNCTION 14977cb7c FUN_14977cb7c body=38 status=ok
// SIG undefined FUN_14977cb7c(void)

undefined8 FUN_14977cb7c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"PrintString",1);
  return param_2;
}



// FUNCTION 14977cba2 FUN_14977cba2 body=38 status=ok
// SIG undefined FUN_14977cba2(void)

undefined8 FUN_14977cba2(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Development",1);
  return param_2;
}



// FUNCTION 14977cbc8 FUN_14977cbc8 body=32 status=ok
// SIG undefined FUN_14977cbc8(void)

undefined8 FUN_14977cbc8(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14977cbe8 FUN_14977cbe8 body=123 status=ok
// SIG undefined FUN_14977cbe8(void)

void FUN_14977cbe8(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc257c8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc257c8 = FUN_140002ddd(FUN_146756a8f,uVar1,L"PrintStringDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc257c8,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014977cc60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14977cc64 FUN_14977cc64 body=93 status=ok
// SIG undefined FUN_14977cc64(void)

void FUN_14977cc64(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc257c8 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc257c8 = FUN_140002ddd(FUN_146756a8f,uVar2,L"PrintStringDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc257c8,param_1);
  return;
}



// FUNCTION 14977ccc2 FUN_14977ccc2 body=55 status=ok
// SIG undefined FUN_14977ccc2(void)

void FUN_14977ccc2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc257c8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc257c8 = FUN_140002ddd(FUN_146756a8f,uVar1,L"PrintStringDataflowNode");
  }
  return;
}



// FUNCTION 14977ccfa FUN_14977ccfa body=233 status=ok
// SIG undefined FUN_14977ccfa(void)

ulonglong FUN_14977ccfa(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FPrintStringDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14977cd94;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14977cd94;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14977cd94;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14977cd94:
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



// FUNCTION 14977cde6 FUN_14977cde6 body=60 status=ok
// SIG undefined FUN_14977cde6(void)

void FUN_14977cde6(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5d110;
  *(undefined1 *)(param_2 + 0x33) = 1;
  FUN_1400b22c2(param_2 + 0x34,&DAT_149e02088);
  return;
}



// FUNCTION 14977ce22 FUN_14977ce22 body=60 status=ok
// SIG undefined FUN_14977ce22(void)

void FUN_14977ce22(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5d110;
  *(undefined1 *)(param_2 + 0x33) = 1;
  FUN_1400b22c2(param_2 + 0x34,&DAT_149e02088);
  return;
}



// FUNCTION 14977ce82 FUN_14977ce82 body=97 status=ok
// SIG undefined FUN_14977ce82(void)

undefined1 FUN_14977ce82(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 14977cf0c FUN_14977cf0c body=59 status=ok
// SIG undefined FUN_14977cf0c(void)

undefined8 FUN_14977cf0c(longlong *param_1)

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



// FUNCTION 14977cf58 FUN_14977cf58 body=67 status=ok
// SIG undefined FUN_14977cf58(void)

void FUN_14977cf58(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x36) == '\x01') {
    *param_2 = &PTR_FUN_14be5d110;
    if (param_2[0x34] != 0) {
      FUN_1400020a8();
    }
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x36) = 0;
  }
  return;
}



// FUNCTION 14977cfea FUN_14977cfea body=68 status=ok
// SIG undefined FUN_14977cfea(void)

undefined8 * FUN_14977cfea(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be5d110;
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14977d02e FUN_14977d02e body=38 status=ok
// SIG undefined FUN_14977d02e(void)

undefined8 FUN_14977d02e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FLogStringDataflowNode",1);
  return param_2;
}



// FUNCTION 14977d054 FUN_14977d054 body=38 status=ok
// SIG undefined FUN_14977d054(void)

undefined8 FUN_14977d054(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"LogString",1);
  return param_2;
}



// FUNCTION 14977d07a FUN_14977d07a body=38 status=ok
// SIG undefined FUN_14977d07a(void)

undefined8 FUN_14977d07a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Development",1);
  return param_2;
}



// FUNCTION 14977d0a0 FUN_14977d0a0 body=32 status=ok
// SIG undefined FUN_14977d0a0(void)

undefined8 FUN_14977d0a0(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14977d0c0 FUN_14977d0c0 body=123 status=ok
// SIG undefined FUN_14977d0c0(void)

void FUN_14977d0c0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc257e0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc257e0 = FUN_140002ddd(FUN_146756b25,uVar1,L"LogStringDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc257e0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014977d138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14977d13c FUN_14977d13c body=93 status=ok
// SIG undefined FUN_14977d13c(void)

void FUN_14977d13c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc257e0 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc257e0 = FUN_140002ddd(FUN_146756b25,uVar2,L"LogStringDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc257e0,param_1);
  return;
}



// FUNCTION 14977d19a FUN_14977d19a body=55 status=ok
// SIG undefined FUN_14977d19a(void)

void FUN_14977d19a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc257e0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc257e0 = FUN_140002ddd(FUN_146756b25,uVar1,L"LogStringDataflowNode");
  }
  return;
}



// FUNCTION 14977d1d2 FUN_14977d1d2 body=233 status=ok
// SIG undefined FUN_14977d1d2(void)

ulonglong FUN_14977d1d2(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FLogStringDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14977d26c;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14977d26c;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14977d26c;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14977d26c:
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



// FUNCTION 14977d2be FUN_14977d2be body=75 status=ok
// SIG undefined FUN_14977d2be(void)

void FUN_14977d2be(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5d3a0;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x49] = 0;
  param_2[0x4a] = 0;
  param_2[0x4b] = 0;
  param_2[0x4c] = 0;
  param_2[0x4d] = 0;
  param_2[0x4e] = 0;
  *(undefined1 *)(param_2 + 0x4f) = 0;
  return;
}



// FUNCTION 14977d30a FUN_14977d30a body=75 status=ok
// SIG undefined FUN_14977d30a(void)

void FUN_14977d30a(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5d3a0;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x49] = 0;
  param_2[0x4a] = 0;
  param_2[0x4b] = 0;
  param_2[0x4c] = 0;
  param_2[0x4d] = 0;
  param_2[0x4e] = 0;
  *(undefined1 *)(param_2 + 0x4f) = 0;
  return;
}



// FUNCTION 14977d37a FUN_14977d37a body=141 status=ok
// SIG undefined FUN_14977d37a(void)

undefined8 FUN_14977d37a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
    FUN_146ecd102(param_2 + 0x198,param_3 + 0x198);
    uVar1 = *(undefined4 *)(param_3 + 0x24c);
    uVar2 = *(undefined4 *)(param_3 + 0x250);
    uVar3 = *(undefined4 *)(param_3 + 0x254);
    uVar4 = *(undefined4 *)(param_3 + 600);
    uVar5 = *(undefined4 *)(param_3 + 0x25c);
    uVar6 = *(undefined4 *)(param_3 + 0x260);
    uVar7 = *(undefined4 *)(param_3 + 0x264);
    uVar8 = *(undefined4 *)(param_3 + 0x268);
    uVar9 = *(undefined4 *)(param_3 + 0x26c);
    uVar10 = *(undefined4 *)(param_3 + 0x270);
    uVar11 = *(undefined4 *)(param_3 + 0x274);
    *(undefined4 *)(param_2 + 0x248) = *(undefined4 *)(param_3 + 0x248);
    *(undefined4 *)(param_2 + 0x24c) = uVar1;
    *(undefined4 *)(param_2 + 0x250) = uVar2;
    *(undefined4 *)(param_2 + 0x254) = uVar3;
    *(undefined4 *)(param_2 + 600) = uVar4;
    *(undefined4 *)(param_2 + 0x25c) = uVar5;
    *(undefined4 *)(param_2 + 0x260) = uVar6;
    *(undefined4 *)(param_2 + 0x264) = uVar7;
    *(undefined4 *)(param_2 + 0x268) = uVar8;
    *(undefined4 *)(param_2 + 0x26c) = uVar9;
    *(undefined4 *)(param_2 + 0x270) = uVar10;
    *(undefined4 *)(param_2 + 0x274) = uVar11;
    *(undefined8 *)(param_2 + 0x278) = *(undefined8 *)(param_3 + 0x278);
    param_2 = param_2 + 0x280;
    param_3 = param_3 + 0x280;
  }
  return 1;
}



// FUNCTION 14977d430 FUN_14977d430 body=59 status=ok
// SIG undefined FUN_14977d430(void)

undefined8 FUN_14977d430(longlong *param_1)

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



// FUNCTION 14977d47c FUN_14977d47c body=62 status=ok
// SIG undefined FUN_14977d47c(void)

void FUN_14977d47c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    *param_2 = &PTR_FUN_14be5d3a0;
    FUN_14054b30a(param_2 + 0x33);
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 14977d508 FUN_14977d508 body=63 status=ok
// SIG undefined FUN_14977d508(void)

undefined8 * FUN_14977d508(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be5d3a0;
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14977d548 FUN_14977d548 body=38 status=ok
// SIG undefined FUN_14977d548(void)

undefined8 FUN_14977d548(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FBoundingBoxDataflowNode",1);
  return param_2;
}



// FUNCTION 14977d56e FUN_14977d56e body=38 status=ok
// SIG undefined FUN_14977d56e(void)

undefined8 FUN_14977d56e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"BoundingBox",1);
  return param_2;
}



// FUNCTION 14977d594 FUN_14977d594 body=38 status=ok
// SIG undefined FUN_14977d594(void)

undefined8 FUN_14977d594(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Utilities|Box",1);
  return param_2;
}



// FUNCTION 14977d5ba FUN_14977d5ba body=32 status=ok
// SIG undefined FUN_14977d5ba(void)

undefined8 FUN_14977d5ba(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14977d5da FUN_14977d5da body=123 status=ok
// SIG undefined FUN_14977d5da(void)

void FUN_14977d5da(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc257f8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc257f8 = FUN_140002ddd(FUN_146756bbb,uVar1,L"BoundingBoxDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc257f8,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014977d652. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14977d656 FUN_14977d656 body=93 status=ok
// SIG undefined FUN_14977d656(void)

void FUN_14977d656(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc257f8 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc257f8 = FUN_140002ddd(FUN_146756bbb,uVar2,L"BoundingBoxDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc257f8,param_1);
  return;
}



// FUNCTION 14977d6b4 FUN_14977d6b4 body=55 status=ok
// SIG undefined FUN_14977d6b4(void)

void FUN_14977d6b4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc257f8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc257f8 = FUN_140002ddd(FUN_146756bbb,uVar1,L"BoundingBoxDataflowNode");
  }
  return;
}



// FUNCTION 14977d6ec FUN_14977d6ec body=233 status=ok
// SIG undefined FUN_14977d6ec(void)

ulonglong FUN_14977d6ec(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FBoundingBoxDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14977d786;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14977d786;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14977d786;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14977d786:
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



// FUNCTION 14977d7d6 FUN_14977d7d6 body=323 status=ok
// SIG undefined FUN_14977d7d6(void)

undefined8 * FUN_14977d7d6(undefined8 param_1,undefined8 *param_2)

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
  FUN_1446ddc76(&local_88,&DAT_14be503c4,1);
  FUN_1446ddc76(&local_48,"BoundingBox",1);
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



// FUNCTION 14977d91c FUN_14977d91c body=56 status=ok
// SIG undefined FUN_14977d91c(void)

void FUN_14977d91c(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5d760;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  *(undefined1 *)(param_2 + 0x37) = 5;
  return;
}



// FUNCTION 14977d954 FUN_14977d954 body=56 status=ok
// SIG undefined FUN_14977d954(void)

void FUN_14977d954(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5d760;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  *(undefined1 *)(param_2 + 0x37) = 5;
  return;
}



// FUNCTION 14977d9b0 FUN_14977d9b0 body=120 status=ok
// SIG undefined FUN_14977d9b0(void)

undefined1 FUN_14977d9b0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    FUN_1478cae74(param_2 + 0x198,param_3 + 0x198);
    FUN_144a67f5c(param_2 + 0x1a8,param_3 + 0x1a8);
    *(undefined1 *)(param_2 + 0x1b8) = *(undefined1 *)(param_3 + 0x1b8);
    param_2 = param_2 + 0x1c0;
    param_3 = param_3 + 0x1c0;
  }
  return 1;
}



// FUNCTION 14977da50 FUN_14977da50 body=59 status=ok
// SIG undefined FUN_14977da50(void)

undefined8 FUN_14977da50(longlong *param_1)

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



// FUNCTION 14977da9c FUN_14977da9c body=40 status=ok
// SIG undefined FUN_14977da9c(void)

void FUN_14977da9c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1c0) == '\x01') {
    FUN_14977ddc6(param_2);
    *(undefined1 *)(param_2 + 0x1c0) = 0;
  }
  return;
}



// FUNCTION 14977db12 FUN_14977db12 body=38 status=ok
// SIG undefined FUN_14977db12(void)

undefined8 FUN_14977db12(undefined8 param_1,int param_2)

{
  FUN_14977ddc6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14977db38 FUN_14977db38 body=38 status=ok
// SIG undefined FUN_14977db38(void)

undefined8 FUN_14977db38(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FGetBoxLengthsDataflowNode",1);
  return param_2;
}



// FUNCTION 14977db5e FUN_14977db5e body=38 status=ok
// SIG undefined FUN_14977db5e(void)

undefined8 FUN_14977db5e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GetBoxLengths",1);
  return param_2;
}



// FUNCTION 14977db84 FUN_14977db84 body=38 status=ok
// SIG undefined FUN_14977db84(void)

undefined8 FUN_14977db84(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Utilities|Box",1);
  return param_2;
}



// FUNCTION 14977dbaa FUN_14977dbaa body=32 status=ok
// SIG undefined FUN_14977dbaa(void)

undefined8 FUN_14977dbaa(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14977dbca FUN_14977dbca body=123 status=ok
// SIG undefined FUN_14977dbca(void)

void FUN_14977dbca(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25828 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25828 = FUN_140002ddd(FUN_146756c81,uVar1,L"GetBoxLengthsDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25828,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014977dc42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14977dc46 FUN_14977dc46 body=93 status=ok
// SIG undefined FUN_14977dc46(void)

void FUN_14977dc46(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25828 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25828 = FUN_140002ddd(FUN_146756c81,uVar2,L"GetBoxLengthsDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25828,param_1);
  return;
}



// FUNCTION 14977dca4 FUN_14977dca4 body=55 status=ok
// SIG undefined FUN_14977dca4(void)

void FUN_14977dca4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25828 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25828 = FUN_140002ddd(FUN_146756c81,uVar1,L"GetBoxLengthsDataflowNode");
  }
  return;
}



// FUNCTION 14977dcdc FUN_14977dcdc body=233 status=ok
// SIG undefined FUN_14977dcdc(void)

ulonglong FUN_14977dcdc(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FGetBoxLengthsDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14977dd76;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14977dd76;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14977dd76;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14977dd76:
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



// FUNCTION 14977ddc6 FUN_14977ddc6 body=65 status=ok
// SIG undefined FUN_14977ddc6(void)

void FUN_14977ddc6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be5d760;
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 14977de08 FUN_14977de08 body=115 status=ok
// SIG undefined FUN_14977de08(void)

void FUN_14977de08(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5da00;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  *(undefined1 *)(param_2 + 0x39) = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  param_2[0x42] = 0;
  param_2[0x43] = 0;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  *(undefined4 *)(param_2 + 0x46) = 0;
  return;
}



// FUNCTION 14977de7c FUN_14977de7c body=115 status=ok
// SIG undefined FUN_14977de7c(void)

void FUN_14977de7c(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5da00;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  *(undefined1 *)(param_2 + 0x39) = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  param_2[0x42] = 0;
  param_2[0x43] = 0;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  *(undefined4 *)(param_2 + 0x46) = 0;
  return;
}



// FUNCTION 14977df14 FUN_14977df14 body=91 status=ok
// SIG undefined FUN_14977df14(void)

undefined8 FUN_14977df14(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    memcpy((void *)(param_2 + 0x198),(void *)(param_3 + 0x198),0x9c);
    param_2 = param_2 + 0x238;
    param_3 = param_3 + 0x238;
  }
  return 1;
}



// FUNCTION 14977df98 FUN_14977df98 body=59 status=ok
// SIG undefined FUN_14977df98(void)

undefined8 FUN_14977df98(longlong *param_1)

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



// FUNCTION 14977dfe4 FUN_14977dfe4 body=40 status=ok
// SIG undefined FUN_14977dfe4(void)

void FUN_14977dfe4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x238) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x238) = 0;
  }
  return;
}



// FUNCTION 14977e05a FUN_14977e05a body=38 status=ok
// SIG undefined FUN_14977e05a(void)

undefined8 FUN_14977e05a(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14977e080 FUN_14977e080 body=38 status=ok
// SIG undefined FUN_14977e080(void)

undefined8 FUN_14977e080(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FExpandBoundingBoxDataflowNode",1);
  return param_2;
}



// FUNCTION 14977e0a6 FUN_14977e0a6 body=38 status=ok
// SIG undefined FUN_14977e0a6(void)

undefined8 FUN_14977e0a6(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"ExpandBoundingBox",1);
  return param_2;
}



// FUNCTION 14977e0cc FUN_14977e0cc body=38 status=ok
// SIG undefined FUN_14977e0cc(void)

undefined8 FUN_14977e0cc(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Utilities|Box",1);
  return param_2;
}



// FUNCTION 14977e0f2 FUN_14977e0f2 body=32 status=ok
// SIG undefined FUN_14977e0f2(void)

undefined8 FUN_14977e0f2(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14977e112 FUN_14977e112 body=123 status=ok
// SIG undefined FUN_14977e112(void)

void FUN_14977e112(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25840 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25840 = FUN_140002ddd(FUN_146756d17,uVar1,L"ExpandBoundingBoxDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25840,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014977e18a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14977e18e FUN_14977e18e body=93 status=ok
// SIG undefined FUN_14977e18e(void)

void FUN_14977e18e(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25840 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25840 = FUN_140002ddd(FUN_146756d17,uVar2,L"ExpandBoundingBoxDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25840,param_1);
  return;
}



// FUNCTION 14977e1ec FUN_14977e1ec body=55 status=ok
// SIG undefined FUN_14977e1ec(void)

void FUN_14977e1ec(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25840 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25840 = FUN_140002ddd(FUN_146756d17,uVar1,L"ExpandBoundingBoxDataflowNode");
  }
  return;
}



// FUNCTION 14977e224 FUN_14977e224 body=233 status=ok
// SIG undefined FUN_14977e224(void)

ulonglong FUN_14977e224(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FExpandBoundingBoxDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14977e2be;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14977e2be;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14977e2be;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14977e2be:
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



// FUNCTION 14977e310 FUN_14977e310 body=59 status=ok
// SIG undefined FUN_14977e310(void)

void FUN_14977e310(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5dcb0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  *(undefined4 *)(param_2 + 0x37) = 0;
  return;
}



// FUNCTION 14977e34c FUN_14977e34c body=59 status=ok
// SIG undefined FUN_14977e34c(void)

void FUN_14977e34c(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5dcb0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  *(undefined4 *)(param_2 + 0x37) = 0;
  return;
}



// FUNCTION 14977e3ac FUN_14977e3ac body=102 status=ok
// SIG undefined FUN_14977e3ac(void)

undefined8 FUN_14977e3ac(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
    uVar4 = *(undefined4 *)(param_3 + 0x1a8);
    uVar5 = *(undefined4 *)(param_3 + 0x1ac);
    uVar6 = *(undefined4 *)(param_3 + 0x1b0);
    uVar7 = *(undefined4 *)(param_3 + 0x1b4);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    *(undefined4 *)(param_2 + 0x1a8) = uVar4;
    *(undefined4 *)(param_2 + 0x1ac) = uVar5;
    *(undefined4 *)(param_2 + 0x1b0) = uVar6;
    *(undefined4 *)(param_2 + 0x1b4) = uVar7;
    *(undefined4 *)(param_2 + 0x1b8) = *(undefined4 *)(param_3 + 0x1b8);
    param_2 = param_2 + 0x1c0;
    param_3 = param_3 + 0x1c0;
  }
  return 1;
}



// FUNCTION 14977e43a FUN_14977e43a body=59 status=ok
// SIG undefined FUN_14977e43a(void)

undefined8 FUN_14977e43a(longlong *param_1)

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



// FUNCTION 14977e486 FUN_14977e486 body=40 status=ok
// SIG undefined FUN_14977e486(void)

void FUN_14977e486(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1c0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1c0) = 0;
  }
  return;
}



// FUNCTION 14977e4fc FUN_14977e4fc body=38 status=ok
// SIG undefined FUN_14977e4fc(void)

undefined8 FUN_14977e4fc(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14977e522 FUN_14977e522 body=38 status=ok
// SIG undefined FUN_14977e522(void)

undefined8 FUN_14977e522(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FExpandVectorDataflowNode",1);
  return param_2;
}



// FUNCTION 14977e548 FUN_14977e548 body=38 status=ok
// SIG undefined FUN_14977e548(void)

undefined8 FUN_14977e548(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"ExpandVector",1);
  return param_2;
}



// FUNCTION 14977e56e FUN_14977e56e body=38 status=ok
// SIG undefined FUN_14977e56e(void)

undefined8 FUN_14977e56e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Utilities|Vector",1);
  return param_2;
}



// FUNCTION 14977e594 FUN_14977e594 body=32 status=ok
// SIG undefined FUN_14977e594(void)

undefined8 FUN_14977e594(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14977e5b4 FUN_14977e5b4 body=123 status=ok
// SIG undefined FUN_14977e5b4(void)

void FUN_14977e5b4(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25858 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25858 = FUN_140002ddd(FUN_146756dad,uVar1,L"ExpandVectorDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25858,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014977e62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14977e630 FUN_14977e630 body=93 status=ok
// SIG undefined FUN_14977e630(void)

void FUN_14977e630(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25858 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25858 = FUN_140002ddd(FUN_146756dad,uVar2,L"ExpandVectorDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25858,param_1);
  return;
}



// FUNCTION 14977e68e FUN_14977e68e body=55 status=ok
// SIG undefined FUN_14977e68e(void)

void FUN_14977e68e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25858 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25858 = FUN_140002ddd(FUN_146756dad,uVar1,L"ExpandVectorDataflowNode");
  }
  return;
}



// FUNCTION 14977e6c6 FUN_14977e6c6 body=233 status=ok
// SIG undefined FUN_14977e6c6(void)

ulonglong FUN_14977e6c6(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FExpandVectorDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14977e760;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14977e760;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14977e760;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14977e760:
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



// FUNCTION 14977e7e6 FUN_14977e7e6 body=63 status=ok
// SIG undefined FUN_14977e7e6(void)

undefined1 FUN_14977e7e6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14977ec6c(param_2,param_3);
    param_3 = param_3 + 0x1c8;
    param_2 = param_2 + 0x1c8;
  }
  return 1;
}



// FUNCTION 14977e84e FUN_14977e84e body=59 status=ok
// SIG undefined FUN_14977e84e(void)

undefined8 FUN_14977e84e(longlong *param_1)

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



// FUNCTION 14977e89a FUN_14977e89a body=40 status=ok
// SIG undefined FUN_14977e89a(void)

void FUN_14977e89a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1c8) == '\x01') {
    FUN_14977ec1a(param_2);
    *(undefined1 *)(param_2 + 0x1c8) = 0;
  }
  return;
}



// FUNCTION 14977e910 FUN_14977e910 body=86 status=ok
// SIG undefined FUN_14977e910(void)

undefined8 * FUN_14977e910(undefined8 *param_1)

{
  FUN_146fc02b8();
  *param_1 = &PTR_FUN_14be5df60;
  FUN_1400b22c2(param_1 + 0x33,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 0x35,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 0x37,&DAT_149e02088);
  return param_1;
}



// FUNCTION 14977e966 FUN_14977e966 body=38 status=ok
// SIG undefined FUN_14977e966(void)

undefined8 FUN_14977e966(undefined8 param_1,int param_2)

{
  FUN_14977ec1a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14977e98c FUN_14977e98c body=38 status=ok
// SIG undefined FUN_14977e98c(void)

undefined8 FUN_14977e98c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FStringAppendDataflowNode",1);
  return param_2;
}



// FUNCTION 14977e9b2 FUN_14977e9b2 body=38 status=ok
// SIG undefined FUN_14977e9b2(void)

undefined8 FUN_14977e9b2(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"StringAppend",1);
  return param_2;
}



// FUNCTION 14977e9d8 FUN_14977e9d8 body=38 status=ok
// SIG undefined FUN_14977e9d8(void)

undefined8 FUN_14977e9d8(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Utilities|String",1);
  return param_2;
}



// FUNCTION 14977e9fe FUN_14977e9fe body=32 status=ok
// SIG undefined FUN_14977e9fe(void)

undefined8 FUN_14977e9fe(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14977ea1e FUN_14977ea1e body=123 status=ok
// SIG undefined FUN_14977ea1e(void)

void FUN_14977ea1e(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25870 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25870 = FUN_140002ddd(FUN_146756e43,uVar1,L"StringAppendDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25870,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014977ea96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14977ea9a FUN_14977ea9a body=93 status=ok
// SIG undefined FUN_14977ea9a(void)

void FUN_14977ea9a(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25870 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25870 = FUN_140002ddd(FUN_146756e43,uVar2,L"StringAppendDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25870,param_1);
  return;
}



// FUNCTION 14977eaf8 FUN_14977eaf8 body=55 status=ok
// SIG undefined FUN_14977eaf8(void)

void FUN_14977eaf8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25870 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25870 = FUN_140002ddd(FUN_146756e43,uVar1,L"StringAppendDataflowNode");
  }
  return;
}



// FUNCTION 14977eb30 FUN_14977eb30 body=233 status=ok
// SIG undefined FUN_14977eb30(void)

ulonglong FUN_14977eb30(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FStringAppendDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14977ebca;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14977ebca;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14977ebca;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14977ebca:
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



// FUNCTION 14977ec1a FUN_14977ec1a body=82 status=ok
// SIG undefined FUN_14977ec1a(void)

void FUN_14977ec1a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be5df60;
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



// FUNCTION 14977ec6c FUN_14977ec6c body=81 status=ok
// SIG undefined FUN_14977ec6c(void)

longlong FUN_14977ec6c(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_144a787a6(param_1 + 0x198,param_2 + 0x198);
  FUN_144a787a6(param_1 + 0x1a8,param_2 + 0x1a8);
  FUN_144a787a6(param_1 + 0x1b8,param_2 + 0x1b8);
  return param_1;
}



// FUNCTION 14977ecbe FUN_14977ecbe body=61 status=ok
// SIG undefined FUN_14977ecbe(void)

void FUN_14977ecbe(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5e200;
  FUN_1400b22c2(param_2 + 0x33,&DAT_149e02088);
  *(undefined4 *)(param_2 + 0x35) = 0;
  return;
}



// FUNCTION 14977ecfc FUN_14977ecfc body=61 status=ok
// SIG undefined FUN_14977ecfc(void)

void FUN_14977ecfc(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5e200;
  FUN_1400b22c2(param_2 + 0x33,&DAT_149e02088);
  *(undefined4 *)(param_2 + 0x35) = 0;
  return;
}



// FUNCTION 14977ed5e FUN_14977ed5e body=97 status=ok
// SIG undefined FUN_14977ed5e(void)

undefined8 FUN_14977ed5e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    FUN_144a787a6(param_2 + 0x198,param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x1a8) = *(undefined4 *)(param_3 + 0x1a8);
    param_2 = param_2 + 0x1b0;
    param_3 = param_3 + 0x1b0;
  }
  return 1;
}



// FUNCTION 14977ede8 FUN_14977ede8 body=59 status=ok
// SIG undefined FUN_14977ede8(void)

undefined8 FUN_14977ede8(longlong *param_1)

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



// FUNCTION 14977ee34 FUN_14977ee34 body=67 status=ok
// SIG undefined FUN_14977ee34(void)

void FUN_14977ee34(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x36) == '\x01') {
    *param_2 = &PTR_FUN_14be5e200;
    if (param_2[0x33] != 0) {
      FUN_1400020a8();
    }
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x36) = 0;
  }
  return;
}



// FUNCTION 14977eec6 FUN_14977eec6 body=68 status=ok
// SIG undefined FUN_14977eec6(void)

undefined8 * FUN_14977eec6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be5e200;
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14977ef0a FUN_14977ef0a body=38 status=ok
// SIG undefined FUN_14977ef0a(void)

undefined8 FUN_14977ef0a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FHashStringDataflowNode",1);
  return param_2;
}



// FUNCTION 14977ef30 FUN_14977ef30 body=38 status=ok
// SIG undefined FUN_14977ef30(void)

undefined8 FUN_14977ef30(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"HashString",1);
  return param_2;
}



// FUNCTION 14977ef56 FUN_14977ef56 body=38 status=ok
// SIG undefined FUN_14977ef56(void)

undefined8 FUN_14977ef56(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Utilities|String",1);
  return param_2;
}



// FUNCTION 14977ef7c FUN_14977ef7c body=32 status=ok
// SIG undefined FUN_14977ef7c(void)

undefined8 FUN_14977ef7c(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14977ef9c FUN_14977ef9c body=123 status=ok
// SIG undefined FUN_14977ef9c(void)

void FUN_14977ef9c(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25888 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25888 = FUN_140002ddd(FUN_146756ed9,uVar1,L"HashStringDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25888,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014977f014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}


