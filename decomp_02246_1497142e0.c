// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1497142e0 FUN_1497142e0 body=142 status=ok
// SIG undefined FUN_1497142e0(void)

longlong FUN_1497142e0(longlong param_1,longlong param_2)

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
  FUN_1497129cc(param_1 + 0x250,param_2 + 0x250);
  FUN_140c99494(param_1 + 0x260,param_2 + 0x260);
  FUN_1474af444(param_1 + 0x270,param_2 + 0x270);
  return param_1;
}



// FUNCTION 149714370 FUN_149714370 body=86 status=ok
// SIG undefined FUN_149714370(void)

void FUN_149714370(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be209c0;
  param_2[0x33] = 0;
  *(undefined1 *)(param_2 + 0x34) = 0;
  FUN_1414db454(param_2 + 0x35);
  param_2[0x4b] = 0;
  param_2[0x4c] = 0;
  param_2[0x4d] = 0;
  param_2[0x4e] = 0;
  param_2[0x4f] = 0;
  param_2[0x50] = 0;
  return;
}



// FUNCTION 1497143c6 FUN_1497143c6 body=86 status=ok
// SIG undefined FUN_1497143c6(void)

void FUN_1497143c6(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be209c0;
  param_2[0x33] = 0;
  *(undefined1 *)(param_2 + 0x34) = 0;
  FUN_1414db454(param_2 + 0x35);
  param_2[0x4b] = 0;
  param_2[0x4c] = 0;
  param_2[0x4d] = 0;
  param_2[0x4e] = 0;
  param_2[0x4f] = 0;
  param_2[0x50] = 0;
  return;
}



// FUNCTION 149714440 FUN_149714440 body=63 status=ok
// SIG undefined FUN_149714440(void)

undefined1 FUN_149714440(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1497149d8(param_2,param_3);
    param_3 = param_3 + 0x288;
    param_2 = param_2 + 0x288;
  }
  return 1;
}



// FUNCTION 1497144a8 FUN_1497144a8 body=59 status=ok
// SIG undefined FUN_1497144a8(void)

undefined8 FUN_1497144a8(longlong *param_1)

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



// FUNCTION 1497144f4 FUN_1497144f4 body=40 status=ok
// SIG undefined FUN_1497144f4(void)

void FUN_1497144f4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x288) == '\x01') {
    FUN_149714968(param_2);
    *(undefined1 *)(param_2 + 0x288) = 0;
  }
  return;
}



// FUNCTION 14971456a FUN_14971456a body=43 status=ok
// SIG undefined FUN_14971456a(void)

undefined8 FUN_14971456a(undefined8 param_1,int param_2)

{
  FUN_149714968();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x288);
  }
  return param_1;
}



// FUNCTION 149714596 FUN_149714596 body=38 status=ok
// SIG undefined FUN_149714596(void)

undefined8 FUN_149714596(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FBlueprintToCollectionDataflowNode",1);
  return param_2;
}



// FUNCTION 1497145bc FUN_1497145bc body=38 status=ok
// SIG undefined FUN_1497145bc(void)

undefined8 FUN_1497145bc(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"BlueprintToCollection",1);
  return param_2;
}



// FUNCTION 1497145e2 FUN_1497145e2 body=38 status=ok
// SIG undefined FUN_1497145e2(void)

undefined8 FUN_1497145e2(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Asset",1);
  return param_2;
}



// FUNCTION 149714608 FUN_149714608 body=32 status=ok
// SIG undefined FUN_149714608(void)

undefined8 FUN_149714608(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149714628 FUN_149714628 body=123 status=ok
// SIG undefined FUN_149714628(void)

void FUN_149714628(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc246f8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc246f8 = FUN_140002ddd(FUN_146750950,uVar1,L"BlueprintToCollectionDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc246f8,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001497146a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 1497146a4 FUN_1497146a4 body=93 status=ok
// SIG undefined FUN_1497146a4(void)

void FUN_1497146a4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc246f8 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc246f8 = FUN_140002ddd(FUN_146750950,uVar2,L"BlueprintToCollectionDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc246f8,param_1);
  return;
}



// FUNCTION 149714702 FUN_149714702 body=55 status=ok
// SIG undefined FUN_149714702(void)

void FUN_149714702(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc246f8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc246f8 = FUN_140002ddd(FUN_146750950,uVar1,L"BlueprintToCollectionDataflowNode");
  }
  return;
}



// FUNCTION 14971473a FUN_14971473a body=233 status=ok
// SIG undefined FUN_14971473a(void)

ulonglong FUN_14971473a(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FBlueprintToCollectionDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_1497147d4;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1497147d4;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_1497147d4;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_1497147d4:
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



// FUNCTION 149714824 FUN_149714824 body=323 status=ok
// SIG undefined FUN_149714824(void)

undefined8 * FUN_149714824(undefined8 param_1,undefined8 *param_2)

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



// FUNCTION 149714968 FUN_149714968 body=112 status=ok
// SIG undefined FUN_149714968(void)

void FUN_149714968(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be209c0;
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
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 1497149d8 FUN_1497149d8 body=154 status=ok
// SIG undefined FUN_1497149d8(void)

longlong FUN_1497149d8(longlong param_1,longlong param_2)

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
  *(undefined1 *)(param_1 + 0x1a0) = *(undefined1 *)(param_2 + 0x1a0);
  FUN_146ecd102(param_1 + 0x1a8,param_2 + 0x1a8);
  FUN_1497129cc(param_1 + 600,param_2 + 600);
  FUN_140c99494(param_1 + 0x268,param_2 + 0x268);
  FUN_1474af444(param_1 + 0x278,param_2 + 0x278);
  return param_1;
}



// FUNCTION 149714aa8 FUN_149714aa8 body=63 status=ok
// SIG undefined FUN_149714aa8(void)

undefined1 FUN_149714aa8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149714fa0(param_2,param_3);
    param_3 = param_3 + 0x260;
    param_2 = param_2 + 0x260;
  }
  return 1;
}



// FUNCTION 149714b10 FUN_149714b10 body=59 status=ok
// SIG undefined FUN_149714b10(void)

undefined8 FUN_149714b10(longlong *param_1)

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



// FUNCTION 149714b5c FUN_149714b5c body=40 status=ok
// SIG undefined FUN_149714b5c(void)

void FUN_149714b5c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x260) == '\x01') {
    FUN_149714f2c(param_2);
    *(undefined1 *)(param_2 + 0x260) = 0;
  }
  return;
}



// FUNCTION 149714bd2 FUN_149714bd2 body=159 status=ok
// SIG undefined FUN_149714bd2(void)

undefined8 * FUN_149714bd2(undefined8 *param_1)

{
  FUN_146fc02b8();
  *param_1 = &PTR_FUN_14be20e00;
  param_1[0x37] = 0;
  param_1[0x38] = 0x8000000000;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0x3f800000;
  param_1[0x41] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x42) = 1;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *(undefined8 *)((longlong)param_1 + 0x254) = 0x80;
  return param_1;
}



// FUNCTION 149714c72 FUN_149714c72 body=43 status=ok
// SIG undefined FUN_149714c72(void)

undefined8 FUN_149714c72(undefined8 param_1,int param_2)

{
  FUN_149714f2c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x260);
  }
  return param_1;
}



// FUNCTION 149714c9e FUN_149714c9e body=38 status=ok
// SIG undefined FUN_149714c9e(void)

undefined8 FUN_149714c9e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FRadialFalloffFieldDataflowNode",1);
  return param_2;
}



// FUNCTION 149714cc4 FUN_149714cc4 body=38 status=ok
// SIG undefined FUN_149714cc4(void)

undefined8 FUN_149714cc4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"RadialFalloffField",1);
  return param_2;
}



// FUNCTION 149714cea FUN_149714cea body=38 status=ok
// SIG undefined FUN_149714cea(void)

undefined8 FUN_149714cea(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Fields",1);
  return param_2;
}



// FUNCTION 149714d10 FUN_149714d10 body=32 status=ok
// SIG undefined FUN_149714d10(void)

undefined8 FUN_149714d10(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149714d30 FUN_149714d30 body=123 status=ok
// SIG undefined FUN_149714d30(void)

void FUN_149714d30(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24728 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24728 = FUN_140002ddd(FUN_1467509e1,uVar1,L"RadialFalloffFieldDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24728,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149714da8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149714dac FUN_149714dac body=93 status=ok
// SIG undefined FUN_149714dac(void)

void FUN_149714dac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24728 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24728 = FUN_140002ddd(FUN_1467509e1,uVar2,L"RadialFalloffFieldDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24728,param_1);
  return;
}



// FUNCTION 149714e0a FUN_149714e0a body=55 status=ok
// SIG undefined FUN_149714e0a(void)

void FUN_149714e0a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24728 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24728 = FUN_140002ddd(FUN_1467509e1,uVar1,L"RadialFalloffFieldDataflowNode");
  }
  return;
}



// FUNCTION 149714e42 FUN_149714e42 body=233 status=ok
// SIG undefined FUN_149714e42(void)

ulonglong FUN_149714e42(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FRadialFalloffFieldDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149714edc;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149714edc;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149714edc;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149714edc:
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



// FUNCTION 149714f2c FUN_149714f2c body=116 status=ok
// SIG undefined FUN_149714f2c(void)

void FUN_149714f2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be20e00;
  if (param_1[0x49] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x45] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x43] != 0) {
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



// FUNCTION 149714fa0 FUN_149714fa0 body=238 status=ok
// SIG undefined FUN_149714fa0(void)

longlong FUN_149714fa0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_146fc06e2();
  FUN_140de4b5e(param_1 + 0x198,param_2 + 0x198);
  if (param_1 == param_2) {
    puVar2 = (undefined8 *)(param_2 + 0x1c8);
    puVar3 = (undefined8 *)(param_1 + 0x1c8);
    for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    *(undefined1 *)(param_1 + 0x210) = *(undefined1 *)(param_2 + 0x210);
    FUN_144a67f5c(param_1 + 0x218,param_2 + 0x218);
    FUN_14054c6c4(param_1 + 0x228,param_2 + 0x228);
  }
  else {
    FUN_144a69486(param_1 + 0x1a8,param_2 + 0x1a8);
    puVar2 = (undefined8 *)(param_2 + 0x1c8);
    puVar3 = (undefined8 *)(param_1 + 0x1c8);
    for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    *(undefined1 *)(param_1 + 0x210) = *(undefined1 *)(param_2 + 0x210);
    FUN_144a67f5c(param_1 + 0x218,param_2 + 0x218);
    FUN_14054c6c4(param_1 + 0x228,param_2 + 0x228);
    FUN_144a69486(param_1 + 0x238,param_2 + 0x238);
  }
  *(undefined4 *)(param_1 + 600) = *(undefined4 *)(param_2 + 600);
  return param_1;
}



// FUNCTION 1497150c4 FUN_1497150c4 body=63 status=ok
// SIG undefined FUN_1497150c4(void)

undefined1 FUN_1497150c4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1497155d6(param_2,param_3);
    param_3 = param_3 + 0x2c0;
    param_2 = param_2 + 0x2c0;
  }
  return 1;
}



// FUNCTION 14971512c FUN_14971512c body=59 status=ok
// SIG undefined FUN_14971512c(void)

undefined8 FUN_14971512c(longlong *param_1)

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



// FUNCTION 149715178 FUN_149715178 body=40 status=ok
// SIG undefined FUN_149715178(void)

void FUN_149715178(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2c0) == '\x01') {
    FUN_149715562(param_2);
    *(undefined1 *)(param_2 + 0x2c0) = 0;
  }
  return;
}



// FUNCTION 1497151ee FUN_1497151ee body=185 status=ok
// SIG undefined FUN_1497151ee(void)

undefined8 * FUN_1497151ee(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_146fc02b8();
  *param_1 = &PTR_FUN_14be210b0;
  param_1[0x37] = 0;
  param_1[0x38] = 0x8000000000;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x40;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x4c] = 0x3f800000;
  param_1[0x4d] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x4e) = 1;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b4) = 0x80;
  return param_1;
}



// FUNCTION 1497152a8 FUN_1497152a8 body=43 status=ok
// SIG undefined FUN_1497152a8(void)

undefined8 FUN_1497152a8(undefined8 param_1,int param_2)

{
  FUN_149715562();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x2c0);
  }
  return param_1;
}



// FUNCTION 1497152d4 FUN_1497152d4 body=38 status=ok
// SIG undefined FUN_1497152d4(void)

undefined8 FUN_1497152d4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FBoxFalloffFieldDataflowNode",1);
  return param_2;
}



// FUNCTION 1497152fa FUN_1497152fa body=38 status=ok
// SIG undefined FUN_1497152fa(void)

undefined8 FUN_1497152fa(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"BoxFalloffField",1);
  return param_2;
}



// FUNCTION 149715320 FUN_149715320 body=38 status=ok
// SIG undefined FUN_149715320(void)

undefined8 FUN_149715320(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Fields",1);
  return param_2;
}



// FUNCTION 149715346 FUN_149715346 body=32 status=ok
// SIG undefined FUN_149715346(void)

undefined8 FUN_149715346(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149715366 FUN_149715366 body=123 status=ok
// SIG undefined FUN_149715366(void)

void FUN_149715366(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24740 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24740 = FUN_140002ddd(FUN_146750a40,uVar1,L"BoxFalloffFieldDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24740,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001497153de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 1497153e2 FUN_1497153e2 body=93 status=ok
// SIG undefined FUN_1497153e2(void)

void FUN_1497153e2(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24740 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24740 = FUN_140002ddd(FUN_146750a40,uVar2,L"BoxFalloffFieldDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24740,param_1);
  return;
}



// FUNCTION 149715440 FUN_149715440 body=55 status=ok
// SIG undefined FUN_149715440(void)

void FUN_149715440(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24740 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24740 = FUN_140002ddd(FUN_146750a40,uVar1,L"BoxFalloffFieldDataflowNode");
  }
  return;
}



// FUNCTION 149715478 FUN_149715478 body=233 status=ok
// SIG undefined FUN_149715478(void)

ulonglong FUN_149715478(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FBoxFalloffFieldDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149715512;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149715512;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149715512;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149715512:
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



// FUNCTION 149715562 FUN_149715562 body=116 status=ok
// SIG undefined FUN_149715562(void)

void FUN_149715562(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be210b0;
  if (param_1[0x55] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x51] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4f] != 0) {
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



// FUNCTION 1497155d6 FUN_1497155d6 body=211 status=ok
// SIG undefined FUN_1497155d6(void)

longlong FUN_1497155d6(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_140de4b5e(param_1 + 0x198,param_2 + 0x198);
  if (param_1 == param_2) {
    memcpy((void *)(param_1 + 0x1c8),(void *)(param_2 + 0x1c8),0xa9);
    FUN_144a67f5c(param_1 + 0x278,param_2 + 0x278);
    FUN_14054c6c4(param_1 + 0x288,param_2 + 0x288);
  }
  else {
    FUN_144a69486(param_1 + 0x1a8,param_2 + 0x1a8);
    memcpy((void *)(param_1 + 0x1c8),(void *)(param_2 + 0x1c8),0xa9);
    FUN_144a67f5c(param_1 + 0x278,param_2 + 0x278);
    FUN_14054c6c4(param_1 + 0x288,param_2 + 0x288);
    FUN_144a69486(param_1 + 0x298,param_2 + 0x298);
  }
  *(undefined4 *)(param_1 + 0x2b8) = *(undefined4 *)(param_2 + 0x2b8);
  return param_1;
}



// FUNCTION 1497156de FUN_1497156de body=63 status=ok
// SIG undefined FUN_1497156de(void)

undefined1 FUN_1497156de(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149715bf0(param_2,param_3);
    param_3 = param_3 + 0x278;
    param_2 = param_2 + 0x278;
  }
  return 1;
}



// FUNCTION 149715746 FUN_149715746 body=59 status=ok
// SIG undefined FUN_149715746(void)

undefined8 FUN_149715746(longlong *param_1)

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



// FUNCTION 149715792 FUN_149715792 body=40 status=ok
// SIG undefined FUN_149715792(void)

void FUN_149715792(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x278) == '\x01') {
    FUN_149715b7c(param_2);
    *(undefined1 *)(param_2 + 0x278) = 0;
  }
  return;
}



// FUNCTION 149715808 FUN_149715808 body=185 status=ok
// SIG undefined FUN_149715808(void)

undefined8 * FUN_149715808(undefined8 *param_1)

{
  FUN_146fc02b8();
  *param_1 = &PTR_FUN_14be21350;
  param_1[0x37] = 0;
  param_1[0x38] = 0x8000000000;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0x3ff0000000000000;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0x3f800000;
  param_1[0x44] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x45) = 1;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined8 *)((longlong)param_1 + 0x26c) = 0x80;
  return param_1;
}



// FUNCTION 1497158c2 FUN_1497158c2 body=43 status=ok
// SIG undefined FUN_1497158c2(void)

undefined8 FUN_1497158c2(undefined8 param_1,int param_2)

{
  FUN_149715b7c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x278);
  }
  return param_1;
}



// FUNCTION 1497158ee FUN_1497158ee body=38 status=ok
// SIG undefined FUN_1497158ee(void)

undefined8 FUN_1497158ee(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FPlaneFalloffFieldDataflowNode",1);
  return param_2;
}



// FUNCTION 149715914 FUN_149715914 body=38 status=ok
// SIG undefined FUN_149715914(void)

undefined8 FUN_149715914(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"PlaneFalloffField",1);
  return param_2;
}



// FUNCTION 14971593a FUN_14971593a body=38 status=ok
// SIG undefined FUN_14971593a(void)

undefined8 FUN_14971593a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Fields",1);
  return param_2;
}



// FUNCTION 149715960 FUN_149715960 body=32 status=ok
// SIG undefined FUN_149715960(void)

undefined8 FUN_149715960(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149715980 FUN_149715980 body=123 status=ok
// SIG undefined FUN_149715980(void)

void FUN_149715980(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24758 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24758 = FUN_140002ddd(FUN_146750aa0,uVar1,L"PlaneFalloffFieldDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24758,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001497159f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 1497159fc FUN_1497159fc body=93 status=ok
// SIG undefined FUN_1497159fc(void)

void FUN_1497159fc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24758 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24758 = FUN_140002ddd(FUN_146750aa0,uVar2,L"PlaneFalloffFieldDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24758,param_1);
  return;
}



// FUNCTION 149715a5a FUN_149715a5a body=55 status=ok
// SIG undefined FUN_149715a5a(void)

void FUN_149715a5a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24758 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24758 = FUN_140002ddd(FUN_146750aa0,uVar1,L"PlaneFalloffFieldDataflowNode");
  }
  return;
}



// FUNCTION 149715a92 FUN_149715a92 body=233 status=ok
// SIG undefined FUN_149715a92(void)

ulonglong FUN_149715a92(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FPlaneFalloffFieldDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149715b2c;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149715b2c;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149715b2c;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149715b2c:
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



// FUNCTION 149715b7c FUN_149715b7c body=116 status=ok
// SIG undefined FUN_149715b7c(void)

void FUN_149715b7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be21350;
  if (param_1[0x4c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x48] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x46] != 0) {
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



// FUNCTION 149715bf0 FUN_149715bf0 body=238 status=ok
// SIG undefined FUN_149715bf0(void)

longlong FUN_149715bf0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_146fc06e2();
  FUN_140de4b5e(param_1 + 0x198,param_2 + 0x198);
  if (param_1 == param_2) {
    puVar2 = (undefined8 *)(param_2 + 0x1c8);
    puVar3 = (undefined8 *)(param_1 + 0x1c8);
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    *(undefined1 *)(param_1 + 0x228) = *(undefined1 *)(param_2 + 0x228);
    FUN_144a67f5c(param_1 + 0x230,param_2 + 0x230);
    FUN_14054c6c4(param_1 + 0x240,param_2 + 0x240);
  }
  else {
    FUN_144a69486(param_1 + 0x1a8,param_2 + 0x1a8);
    puVar2 = (undefined8 *)(param_2 + 0x1c8);
    puVar3 = (undefined8 *)(param_1 + 0x1c8);
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    *(undefined1 *)(param_1 + 0x228) = *(undefined1 *)(param_2 + 0x228);
    FUN_144a67f5c(param_1 + 0x230,param_2 + 0x230);
    FUN_14054c6c4(param_1 + 0x240,param_2 + 0x240);
    FUN_144a69486(param_1 + 0x250,param_2 + 0x250);
  }
  *(undefined4 *)(param_1 + 0x270) = *(undefined4 *)(param_2 + 0x270);
  return param_1;
}



// FUNCTION 149715d14 FUN_149715d14 body=63 status=ok
// SIG undefined FUN_149715d14(void)

undefined1 FUN_149715d14(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1497161e6(param_2,param_3);
    param_3 = param_3 + 0x238;
    param_2 = param_2 + 0x238;
  }
  return 1;
}



// FUNCTION 149715d7c FUN_149715d7c body=59 status=ok
// SIG undefined FUN_149715d7c(void)

undefined8 FUN_149715d7c(longlong *param_1)

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



// FUNCTION 149715dc8 FUN_149715dc8 body=40 status=ok
// SIG undefined FUN_149715dc8(void)

void FUN_149715dc8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x238) == '\x01') {
    FUN_149716182(param_2);
    *(undefined1 *)(param_2 + 0x238) = 0;
  }
  return;
}



// FUNCTION 149715e3e FUN_149715e3e body=138 status=ok
// SIG undefined FUN_149715e3e(void)

undefined8 * FUN_149715e3e(undefined8 *param_1)

{
  FUN_146fc02b8();
  *param_1 = &PTR_FUN_14be21740;
  param_1[0x37] = 0;
  param_1[0x38] = 0x8000000000;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 1;
  *(undefined1 *)(param_1 + 0x41) = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  return param_1;
}



// FUNCTION 149715ec8 FUN_149715ec8 body=43 status=ok
// SIG undefined FUN_149715ec8(void)

undefined8 FUN_149715ec8(undefined8 param_1,int param_2)

{
  FUN_149716182();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x238);
  }
  return param_1;
}



// FUNCTION 149715ef4 FUN_149715ef4 body=38 status=ok
// SIG undefined FUN_149715ef4(void)

undefined8 FUN_149715ef4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FRadialIntMaskFieldDataflowNode",1);
  return param_2;
}



// FUNCTION 149715f1a FUN_149715f1a body=38 status=ok
// SIG undefined FUN_149715f1a(void)

undefined8 FUN_149715f1a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"RadialIntMaskField",1);
  return param_2;
}



// FUNCTION 149715f40 FUN_149715f40 body=38 status=ok
// SIG undefined FUN_149715f40(void)

undefined8 FUN_149715f40(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Fields",1);
  return param_2;
}



// FUNCTION 149715f66 FUN_149715f66 body=32 status=ok
// SIG undefined FUN_149715f66(void)

undefined8 FUN_149715f66(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149715f86 FUN_149715f86 body=123 status=ok
// SIG undefined FUN_149715f86(void)

void FUN_149715f86(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24788 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24788 = FUN_140002ddd(FUN_146750b2f,uVar1,L"RadialIntMaskFieldDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24788,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149715ffe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149716002 FUN_149716002 body=93 status=ok
// SIG undefined FUN_149716002(void)

void FUN_149716002(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24788 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24788 = FUN_140002ddd(FUN_146750b2f,uVar2,L"RadialIntMaskFieldDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24788,param_1);
  return;
}



// FUNCTION 149716060 FUN_149716060 body=55 status=ok
// SIG undefined FUN_149716060(void)

void FUN_149716060(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24788 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24788 = FUN_140002ddd(FUN_146750b2f,uVar1,L"RadialIntMaskFieldDataflowNode");
  }
  return;
}



// FUNCTION 149716098 FUN_149716098 body=233 status=ok
// SIG undefined FUN_149716098(void)

ulonglong FUN_149716098(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FRadialIntMaskFieldDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149716132;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149716132;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149716132;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149716132:
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



// FUNCTION 149716182 FUN_149716182 body=99 status=ok
// SIG undefined FUN_149716182(void)

void FUN_149716182(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be21740;
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x42] != 0) {
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



// FUNCTION 1497161e6 FUN_1497161e6 body=152 status=ok
// SIG undefined FUN_1497161e6(void)

longlong FUN_1497161e6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_146fc06e2();
  FUN_140de4b5e(param_1 + 0x198,param_2 + 0x198);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x1a8,param_2 + 0x1a8);
  }
  puVar2 = (undefined8 *)(param_2 + 0x1c8);
  puVar3 = (undefined8 *)(param_1 + 0x1c8);
  for (lVar1 = 8; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_1 + 0x208) = *(undefined1 *)(param_2 + 0x208);
  FUN_14054c6c4(param_1 + 0x210,param_2 + 0x210);
  FUN_14054c6c4(param_1 + 0x220,param_2 + 0x220);
  *(undefined4 *)(param_1 + 0x230) = *(undefined4 *)(param_2 + 0x230);
  return param_1;
}



// FUNCTION 149716280 FUN_149716280 body=98 status=ok
// SIG undefined FUN_149716280(void)

void FUN_149716280(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be219f0;
  param_2[0x37] = 0;
  *(undefined4 *)(param_2 + 0x38) = 0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c4) = 0x3f80000000000080;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  *(undefined4 *)(param_2 + 0x3e) = 0;
  return;
}



// FUNCTION 1497162e2 FUN_1497162e2 body=98 status=ok
// SIG undefined FUN_1497162e2(void)

void FUN_1497162e2(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be219f0;
  param_2[0x37] = 0;
  *(undefined4 *)(param_2 + 0x38) = 0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c4) = 0x3f80000000000080;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  *(undefined4 *)(param_2 + 0x3e) = 0;
  return;
}



// FUNCTION 149716368 FUN_149716368 body=63 status=ok
// SIG undefined FUN_149716368(void)

undefined1 FUN_149716368(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1497167b0(param_2,param_3);
    param_3 = param_3 + 0x1f8;
    param_2 = param_2 + 0x1f8;
  }
  return 1;
}



// FUNCTION 1497163d0 FUN_1497163d0 body=59 status=ok
// SIG undefined FUN_1497163d0(void)

undefined8 FUN_1497163d0(longlong *param_1)

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



// FUNCTION 14971641c FUN_14971641c body=40 status=ok
// SIG undefined FUN_14971641c(void)

void FUN_14971641c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1f8) == '\x01') {
    FUN_14971674c(param_2);
    *(undefined1 *)(param_2 + 0x1f8) = 0;
  }
  return;
}



// FUNCTION 149716492 FUN_149716492 body=43 status=ok
// SIG undefined FUN_149716492(void)

undefined8 FUN_149716492(undefined8 param_1,int param_2)

{
  FUN_14971674c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x1f8);
  }
  return param_1;
}



// FUNCTION 1497164be FUN_1497164be body=38 status=ok
// SIG undefined FUN_1497164be(void)

undefined8 FUN_1497164be(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FUniformScalarFieldDataflowNode",1);
  return param_2;
}



// FUNCTION 1497164e4 FUN_1497164e4 body=38 status=ok
// SIG undefined FUN_1497164e4(void)

undefined8 FUN_1497164e4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"UniformScalarField",1);
  return param_2;
}



// FUNCTION 14971650a FUN_14971650a body=38 status=ok
// SIG undefined FUN_14971650a(void)

undefined8 FUN_14971650a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Fields",1);
  return param_2;
}



// FUNCTION 149716530 FUN_149716530 body=32 status=ok
// SIG undefined FUN_149716530(void)

undefined8 FUN_149716530(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149716550 FUN_149716550 body=123 status=ok
// SIG undefined FUN_149716550(void)

void FUN_149716550(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc247a0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc247a0 = FUN_140002ddd(FUN_146750b8e,uVar1,L"UniformScalarFieldDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc247a0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001497165c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 1497165cc FUN_1497165cc body=93 status=ok
// SIG undefined FUN_1497165cc(void)

void FUN_1497165cc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc247a0 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc247a0 = FUN_140002ddd(FUN_146750b8e,uVar2,L"UniformScalarFieldDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc247a0,param_1);
  return;
}



// FUNCTION 14971662a FUN_14971662a body=55 status=ok
// SIG undefined FUN_14971662a(void)

void FUN_14971662a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc247a0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc247a0 = FUN_140002ddd(FUN_146750b8e,uVar1,L"UniformScalarFieldDataflowNode");
  }
  return;
}



// FUNCTION 149716662 FUN_149716662 body=233 status=ok
// SIG undefined FUN_149716662(void)

ulonglong FUN_149716662(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FUniformScalarFieldDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_1497166fc;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1497166fc;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_1497166fc;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_1497166fc:
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



// FUNCTION 14971674c FUN_14971674c body=99 status=ok
// SIG undefined FUN_14971674c(void)

void FUN_14971674c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be219f0;
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
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



// FUNCTION 1497167b0 FUN_1497167b0 body=128 status=ok
// SIG undefined FUN_1497167b0(void)

longlong FUN_1497167b0(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_140de4b5e(param_1 + 0x198,param_2 + 0x198);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x1a8,param_2 + 0x1a8);
  }
  *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_2 + 0x1c8);
  FUN_144a67f5c(param_1 + 0x1d0,param_2 + 0x1d0);
  FUN_14054c6c4(param_1 + 0x1e0,param_2 + 0x1e0);
  *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(param_2 + 0x1f0);
  return param_1;
}



// FUNCTION 149716832 FUN_149716832 body=122 status=ok
// SIG undefined FUN_149716832(void)

void FUN_149716832(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be21ca0;
  param_2[0x37] = 0;
  *(undefined4 *)(param_2 + 0x38) = 0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c4) = 0x3f80000000000080;
  param_2[0x3a] = 0x3ff0000000000000;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  param_2[0x40] = 0;
  *(undefined4 *)(param_2 + 0x41) = 0;
  return;
}



// FUNCTION 1497168ac FUN_1497168ac body=122 status=ok
// SIG undefined FUN_1497168ac(void)

void FUN_1497168ac(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be21ca0;
  param_2[0x37] = 0;
  *(undefined4 *)(param_2 + 0x38) = 0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c4) = 0x3f80000000000080;
  param_2[0x3a] = 0x3ff0000000000000;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  param_2[0x40] = 0;
  *(undefined4 *)(param_2 + 0x41) = 0;
  return;
}



// FUNCTION 14971694a FUN_14971694a body=63 status=ok
// SIG undefined FUN_14971694a(void)

undefined1 FUN_14971694a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149716d92(param_2,param_3);
    param_3 = param_3 + 0x210;
    param_2 = param_2 + 0x210;
  }
  return 1;
}



// FUNCTION 1497169b2 FUN_1497169b2 body=59 status=ok
// SIG undefined FUN_1497169b2(void)

undefined8 FUN_1497169b2(longlong *param_1)

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



// FUNCTION 1497169fe FUN_1497169fe body=40 status=ok
// SIG undefined FUN_1497169fe(void)

void FUN_1497169fe(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x210) == '\x01') {
    FUN_149716d2e(param_2);
    *(undefined1 *)(param_2 + 0x210) = 0;
  }
  return;
}



// FUNCTION 149716a74 FUN_149716a74 body=43 status=ok
// SIG undefined FUN_149716a74(void)

undefined8 FUN_149716a74(undefined8 param_1,int param_2)

{
  FUN_149716d2e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x210);
  }
  return param_1;
}



// FUNCTION 149716aa0 FUN_149716aa0 body=38 status=ok
// SIG undefined FUN_149716aa0(void)

undefined8 FUN_149716aa0(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FUniformVectorFieldDataflowNode",1);
  return param_2;
}



// FUNCTION 149716ac6 FUN_149716ac6 body=38 status=ok
// SIG undefined FUN_149716ac6(void)

undefined8 FUN_149716ac6(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"UniformVectorField",1);
  return param_2;
}



// FUNCTION 149716aec FUN_149716aec body=38 status=ok
// SIG undefined FUN_149716aec(void)

undefined8 FUN_149716aec(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Fields",1);
  return param_2;
}



// FUNCTION 149716b12 FUN_149716b12 body=32 status=ok
// SIG undefined FUN_149716b12(void)

undefined8 FUN_149716b12(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149716b32 FUN_149716b32 body=123 status=ok
// SIG undefined FUN_149716b32(void)

void FUN_149716b32(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc247b8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc247b8 = FUN_140002ddd(FUN_146750bee,uVar1,L"UniformVectorFieldDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc247b8,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149716baa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149716bae FUN_149716bae body=93 status=ok
// SIG undefined FUN_149716bae(void)

void FUN_149716bae(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc247b8 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc247b8 = FUN_140002ddd(FUN_146750bee,uVar2,L"UniformVectorFieldDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc247b8,param_1);
  return;
}



// FUNCTION 149716c0c FUN_149716c0c body=55 status=ok
// SIG undefined FUN_149716c0c(void)

void FUN_149716c0c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc247b8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc247b8 = FUN_140002ddd(FUN_146750bee,uVar1,L"UniformVectorFieldDataflowNode");
  }
  return;
}



// FUNCTION 149716c44 FUN_149716c44 body=233 status=ok
// SIG undefined FUN_149716c44(void)

ulonglong FUN_149716c44(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FUniformVectorFieldDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149716cde;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149716cde;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149716cde;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149716cde:
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



// FUNCTION 149716d2e FUN_149716d2e body=99 status=ok
// SIG undefined FUN_149716d2e(void)

void FUN_149716d2e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be21ca0;
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3d] != 0) {
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



// FUNCTION 149716d92 FUN_149716d92 body=140 status=ok
// SIG undefined FUN_149716d92(void)

longlong FUN_149716d92(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  FUN_146fc06e2();
  FUN_140de4b5e(param_1 + 0x198,param_2 + 0x198);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x1a8,param_2 + 0x1a8);
  }
  uVar1 = *(undefined4 *)(param_2 + 0x1c8);
  uVar2 = *(undefined4 *)(param_2 + 0x1cc);
  uVar3 = *(undefined4 *)(param_2 + 0x1d0);
  uVar4 = *(undefined4 *)(param_2 + 0x1d4);
  uVar5 = *(undefined4 *)(param_2 + 0x1dc);
  uVar6 = *(undefined4 *)(param_2 + 0x1e0);
  uVar7 = *(undefined4 *)(param_2 + 0x1e4);
  *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_2 + 0x1d8);
  *(undefined4 *)(param_1 + 0x1dc) = uVar5;
  *(undefined4 *)(param_1 + 0x1e0) = uVar6;
  *(undefined4 *)(param_1 + 0x1e4) = uVar7;
  *(undefined4 *)(param_1 + 0x1c8) = uVar1;
  *(undefined4 *)(param_1 + 0x1cc) = uVar2;
  *(undefined4 *)(param_1 + 0x1d0) = uVar3;
  *(undefined4 *)(param_1 + 0x1d4) = uVar4;
  FUN_1405b70a4(param_1 + 0x1e8,param_2 + 0x1e8);
  FUN_14054c6c4(param_1 + 0x1f8,param_2 + 0x1f8);
  *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_2 + 0x208);
  return param_1;
}



// FUNCTION 149716e20 FUN_149716e20 body=108 status=ok
// SIG undefined FUN_149716e20(void)

void FUN_149716e20(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be21f50;
  param_2[0x37] = 0;
  *(undefined4 *)(param_2 + 0x38) = 0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c4) = 0x3f80000000000080;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  *(undefined8 *)((longlong)param_2 + 0x1fc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x204) = 0;
  return;
}



// FUNCTION 149716e8c FUN_149716e8c body=108 status=ok
// SIG undefined FUN_149716e8c(void)

void FUN_149716e8c(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be21f50;
  param_2[0x37] = 0;
  *(undefined4 *)(param_2 + 0x38) = 0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c4) = 0x3f80000000000080;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  *(undefined8 *)((longlong)param_2 + 0x1fc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x204) = 0;
  return;
}



// FUNCTION 149716f1c FUN_149716f1c body=63 status=ok
// SIG undefined FUN_149716f1c(void)

undefined1 FUN_149716f1c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149717364(param_2,param_3);
    param_3 = param_3 + 0x210;
    param_2 = param_2 + 0x210;
  }
  return 1;
}



// FUNCTION 149716f84 FUN_149716f84 body=59 status=ok
// SIG undefined FUN_149716f84(void)

undefined8 FUN_149716f84(longlong *param_1)

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



// FUNCTION 149716fd0 FUN_149716fd0 body=40 status=ok
// SIG undefined FUN_149716fd0(void)

void FUN_149716fd0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x210) == '\x01') {
    FUN_149717300(param_2);
    *(undefined1 *)(param_2 + 0x210) = 0;
  }
  return;
}



// FUNCTION 149717046 FUN_149717046 body=43 status=ok
// SIG undefined FUN_149717046(void)

undefined8 FUN_149717046(undefined8 param_1,int param_2)

{
  FUN_149717300();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x210);
  }
  return param_1;
}



// FUNCTION 149717072 FUN_149717072 body=38 status=ok
// SIG undefined FUN_149717072(void)

undefined8 FUN_149717072(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FRadialVectorFieldDataflowNode",1);
  return param_2;
}



// FUNCTION 149717098 FUN_149717098 body=38 status=ok
// SIG undefined FUN_149717098(void)

undefined8 FUN_149717098(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"RadialVectorField",1);
  return param_2;
}



// FUNCTION 1497170be FUN_1497170be body=38 status=ok
// SIG undefined FUN_1497170be(void)

undefined8 FUN_1497170be(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Fields",1);
  return param_2;
}



// FUNCTION 1497170e4 FUN_1497170e4 body=32 status=ok
// SIG undefined FUN_1497170e4(void)

undefined8 FUN_1497170e4(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149717104 FUN_149717104 body=123 status=ok
// SIG undefined FUN_149717104(void)

void FUN_149717104(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc247d0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc247d0 = FUN_140002ddd(FUN_146750c4e,uVar1,L"RadialVectorFieldDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc247d0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014971717c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149717180 FUN_149717180 body=93 status=ok
// SIG undefined FUN_149717180(void)

void FUN_149717180(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc247d0 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc247d0 = FUN_140002ddd(FUN_146750c4e,uVar2,L"RadialVectorFieldDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc247d0,param_1);
  return;
}



// FUNCTION 1497171de FUN_1497171de body=55 status=ok
// SIG undefined FUN_1497171de(void)

void FUN_1497171de(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc247d0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc247d0 = FUN_140002ddd(FUN_146750c4e,uVar1,L"RadialVectorFieldDataflowNode");
  }
  return;
}



// FUNCTION 149717216 FUN_149717216 body=233 status=ok
// SIG undefined FUN_149717216(void)

ulonglong FUN_149717216(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FRadialVectorFieldDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_1497172b0;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1497172b0;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_1497172b0;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_1497172b0:
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



// FUNCTION 149717300 FUN_149717300 body=99 status=ok
// SIG undefined FUN_149717300(void)

void FUN_149717300(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be21f50;
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3d] != 0) {
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



// FUNCTION 149717364 FUN_149717364 body=140 status=ok
// SIG undefined FUN_149717364(void)

longlong FUN_149717364(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  FUN_146fc06e2();
  FUN_140de4b5e(param_1 + 0x198,param_2 + 0x198);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x1a8,param_2 + 0x1a8);
  }
  uVar1 = *(undefined4 *)(param_2 + 0x1c8);
  uVar2 = *(undefined4 *)(param_2 + 0x1cc);
  uVar3 = *(undefined4 *)(param_2 + 0x1d0);
  uVar4 = *(undefined4 *)(param_2 + 0x1d4);
  uVar5 = *(undefined4 *)(param_2 + 0x1dc);
  uVar6 = *(undefined4 *)(param_2 + 0x1e0);
  uVar7 = *(undefined4 *)(param_2 + 0x1e4);
  *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_2 + 0x1d8);
  *(undefined4 *)(param_1 + 0x1dc) = uVar5;
  *(undefined4 *)(param_1 + 0x1e0) = uVar6;
  *(undefined4 *)(param_1 + 0x1e4) = uVar7;
  *(undefined4 *)(param_1 + 0x1c8) = uVar1;
  *(undefined4 *)(param_1 + 0x1cc) = uVar2;
  *(undefined4 *)(param_1 + 0x1d0) = uVar3;
  *(undefined4 *)(param_1 + 0x1d4) = uVar4;
  FUN_1405b70a4(param_1 + 0x1e8,param_2 + 0x1e8);
  FUN_14054c6c4(param_1 + 0x1f8,param_2 + 0x1f8);
  *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_2 + 0x208);
  return param_1;
}



// FUNCTION 1497173f2 FUN_1497173f2 body=98 status=ok
// SIG undefined FUN_1497173f2(void)

void FUN_1497173f2(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be22200;
  param_2[0x37] = 0;
  *(undefined4 *)(param_2 + 0x38) = 0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c4) = 0x3f80000000000080;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  *(undefined4 *)(param_2 + 0x3e) = 0;
  return;
}



// FUNCTION 149717454 FUN_149717454 body=98 status=ok
// SIG undefined FUN_149717454(void)

void FUN_149717454(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be22200;
  param_2[0x37] = 0;
  *(undefined4 *)(param_2 + 0x38) = 0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c4) = 0x3f80000000000080;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  *(undefined4 *)(param_2 + 0x3e) = 0;
  return;
}



// FUNCTION 1497174da FUN_1497174da body=63 status=ok
// SIG undefined FUN_1497174da(void)

undefined1 FUN_1497174da(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149717922(param_2,param_3);
    param_3 = param_3 + 0x1f8;
    param_2 = param_2 + 0x1f8;
  }
  return 1;
}



// FUNCTION 149717542 FUN_149717542 body=59 status=ok
// SIG undefined FUN_149717542(void)

undefined8 FUN_149717542(longlong *param_1)

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



// FUNCTION 14971758e FUN_14971758e body=40 status=ok
// SIG undefined FUN_14971758e(void)

void FUN_14971758e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1f8) == '\x01') {
    FUN_1497178be(param_2);
    *(undefined1 *)(param_2 + 0x1f8) = 0;
  }
  return;
}



// FUNCTION 149717604 FUN_149717604 body=43 status=ok
// SIG undefined FUN_149717604(void)

undefined8 FUN_149717604(undefined8 param_1,int param_2)

{
  FUN_1497178be();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x1f8);
  }
  return param_1;
}



// FUNCTION 149717630 FUN_149717630 body=38 status=ok
// SIG undefined FUN_149717630(void)

undefined8 FUN_149717630(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FRandomVectorFieldDataflowNode",1);
  return param_2;
}



// FUNCTION 149717656 FUN_149717656 body=38 status=ok
// SIG undefined FUN_149717656(void)

undefined8 FUN_149717656(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"RandomVectorField",1);
  return param_2;
}



// FUNCTION 14971767c FUN_14971767c body=38 status=ok
// SIG undefined FUN_14971767c(void)

undefined8 FUN_14971767c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Fields",1);
  return param_2;
}



// FUNCTION 1497176a2 FUN_1497176a2 body=32 status=ok
// SIG undefined FUN_1497176a2(void)

undefined8 FUN_1497176a2(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 1497176c2 FUN_1497176c2 body=123 status=ok
// SIG undefined FUN_1497176c2(void)

void FUN_1497176c2(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc247e8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc247e8 = FUN_140002ddd(FUN_146750cae,uVar1,L"RandomVectorFieldDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc247e8,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014971773a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14971773e FUN_14971773e body=93 status=ok
// SIG undefined FUN_14971773e(void)

void FUN_14971773e(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc247e8 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc247e8 = FUN_140002ddd(FUN_146750cae,uVar2,L"RandomVectorFieldDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc247e8,param_1);
  return;
}



// FUNCTION 14971779c FUN_14971779c body=55 status=ok
// SIG undefined FUN_14971779c(void)

void FUN_14971779c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc247e8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc247e8 = FUN_140002ddd(FUN_146750cae,uVar1,L"RandomVectorFieldDataflowNode");
  }
  return;
}



// FUNCTION 1497177d4 FUN_1497177d4 body=233 status=ok
// SIG undefined FUN_1497177d4(void)

ulonglong FUN_1497177d4(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FRandomVectorFieldDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14971786e;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14971786e;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14971786e;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14971786e:
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



// FUNCTION 1497178be FUN_1497178be body=99 status=ok
// SIG undefined FUN_1497178be(void)

void FUN_1497178be(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be22200;
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
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



// FUNCTION 149717922 FUN_149717922 body=128 status=ok
// SIG undefined FUN_149717922(void)

longlong FUN_149717922(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_140de4b5e(param_1 + 0x198,param_2 + 0x198);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x1a8,param_2 + 0x1a8);
  }
  *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_2 + 0x1c8);
  FUN_1405b70a4(param_1 + 0x1d0,param_2 + 0x1d0);
  FUN_14054c6c4(param_1 + 0x1e0,param_2 + 0x1e0);
  *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(param_2 + 0x1f0);
  return param_1;
}



// FUNCTION 1497179a4 FUN_1497179a4 body=137 status=ok
// SIG undefined FUN_1497179a4(void)

void FUN_1497179a4(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be224b0;
  param_2[0x37] = 0;
  param_2[0x38] = 0x8000000000;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x39] = 0x3f80000000000000;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x3a;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_2[0x48] = 0;
  param_2[0x49] = 0;
  param_2[0x46] = 0;
  param_2[0x47] = 0;
  *(undefined4 *)(param_2 + 0x4a) = 0;
  return;
}



// FUNCTION 149717a2e FUN_149717a2e body=137 status=ok
// SIG undefined FUN_149717a2e(void)

void FUN_149717a2e(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be224b0;
  param_2[0x37] = 0;
  param_2[0x38] = 0x8000000000;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x39] = 0x3f80000000000000;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x3a;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_2[0x48] = 0;
  param_2[0x49] = 0;
  param_2[0x46] = 0;
  param_2[0x47] = 0;
  *(undefined4 *)(param_2 + 0x4a) = 0;
  return;
}



// FUNCTION 149717adc FUN_149717adc body=63 status=ok
// SIG undefined FUN_149717adc(void)

undefined1 FUN_149717adc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149717f24(param_2,param_3);
    param_3 = param_3 + 0x260;
    param_2 = param_2 + 0x260;
  }
  return 1;
}



// FUNCTION 149717b44 FUN_149717b44 body=59 status=ok
// SIG undefined FUN_149717b44(void)

undefined8 FUN_149717b44(longlong *param_1)

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



// FUNCTION 149717b90 FUN_149717b90 body=40 status=ok
// SIG undefined FUN_149717b90(void)

void FUN_149717b90(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x260) == '\x01') {
    FUN_149717ec0(param_2);
    *(undefined1 *)(param_2 + 0x260) = 0;
  }
  return;
}



// FUNCTION 149717c06 FUN_149717c06 body=43 status=ok
// SIG undefined FUN_149717c06(void)

undefined8 FUN_149717c06(undefined8 param_1,int param_2)

{
  FUN_149717ec0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x260);
  }
  return param_1;
}



// FUNCTION 149717c32 FUN_149717c32 body=38 status=ok
// SIG undefined FUN_149717c32(void)

undefined8 FUN_149717c32(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FNoiseFieldDataflowNode",1);
  return param_2;
}



// FUNCTION 149717c58 FUN_149717c58 body=38 status=ok
// SIG undefined FUN_149717c58(void)

undefined8 FUN_149717c58(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"NoiseField",1);
  return param_2;
}



// FUNCTION 149717c7e FUN_149717c7e body=38 status=ok
// SIG undefined FUN_149717c7e(void)

undefined8 FUN_149717c7e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Fields",1);
  return param_2;
}



// FUNCTION 149717ca4 FUN_149717ca4 body=32 status=ok
// SIG undefined FUN_149717ca4(void)

undefined8 FUN_149717ca4(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149717cc4 FUN_149717cc4 body=123 status=ok
// SIG undefined FUN_149717cc4(void)

void FUN_149717cc4(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24800 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24800 = FUN_140002ddd(FUN_146750d0e,uVar1,L"NoiseFieldDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24800,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149717d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149717d40 FUN_149717d40 body=93 status=ok
// SIG undefined FUN_149717d40(void)

void FUN_149717d40(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24800 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24800 = FUN_140002ddd(FUN_146750d0e,uVar2,L"NoiseFieldDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24800,param_1);
  return;
}



// FUNCTION 149717d9e FUN_149717d9e body=55 status=ok
// SIG undefined FUN_149717d9e(void)

void FUN_149717d9e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24800 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24800 = FUN_140002ddd(FUN_146750d0e,uVar1,L"NoiseFieldDataflowNode");
  }
  return;
}



// FUNCTION 149717dd6 FUN_149717dd6 body=233 status=ok
// SIG undefined FUN_149717dd6(void)

ulonglong FUN_149717dd6(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FNoiseFieldDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149717e70;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149717e70;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149717e70;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149717e70:
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



// FUNCTION 149717ec0 FUN_149717ec0 body=99 status=ok
// SIG undefined FUN_149717ec0(void)

void FUN_149717ec0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be224b0;
  if (param_1[0x48] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x46] != 0) {
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



// FUNCTION 149717f24 FUN_149717f24 body=139 status=ok
// SIG undefined FUN_149717f24(void)

longlong FUN_149717f24(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_146fc06e2();
  FUN_140de4b5e(param_1 + 0x198,param_2 + 0x198);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x1a8,param_2 + 0x1a8);
  }
  puVar2 = (undefined8 *)(param_2 + 0x1c8);
  puVar3 = (undefined8 *)(param_1 + 0x1c8);
  for (lVar1 = 0xd; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_144a67f5c(param_1 + 0x230,param_2 + 0x230);
  FUN_14054c6c4(param_1 + 0x240,param_2 + 0x240);
  *(undefined4 *)(param_1 + 0x250) = *(undefined4 *)(param_2 + 0x250);
  return param_1;
}



// FUNCTION 149717fb0 FUN_149717fb0 body=92 status=ok
// SIG undefined FUN_149717fb0(void)

void FUN_149717fb0(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be22740;
  param_2[0x37] = 0;
  *(undefined4 *)(param_2 + 0x38) = 0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c4) = 0x80;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  *(undefined4 *)(param_2 + 0x3e) = 0;
  return;
}



// FUNCTION 14971800c FUN_14971800c body=92 status=ok
// SIG undefined FUN_14971800c(void)

void FUN_14971800c(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be22740;
  param_2[0x37] = 0;
  *(undefined4 *)(param_2 + 0x38) = 0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c4) = 0x80;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  *(undefined4 *)(param_2 + 0x3e) = 0;
  return;
}



// FUNCTION 14971808c FUN_14971808c body=63 status=ok
// SIG undefined FUN_14971808c(void)

undefined1 FUN_14971808c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1497184d4(param_2,param_3);
    param_3 = param_3 + 0x1f8;
    param_2 = param_2 + 0x1f8;
  }
  return 1;
}



// FUNCTION 1497180f4 FUN_1497180f4 body=59 status=ok
// SIG undefined FUN_1497180f4(void)

undefined8 FUN_1497180f4(longlong *param_1)

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



// FUNCTION 149718140 FUN_149718140 body=40 status=ok
// SIG undefined FUN_149718140(void)

void FUN_149718140(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1f8) == '\x01') {
    FUN_149718470(param_2);
    *(undefined1 *)(param_2 + 0x1f8) = 0;
  }
  return;
}



// FUNCTION 1497181b6 FUN_1497181b6 body=43 status=ok
// SIG undefined FUN_1497181b6(void)

undefined8 FUN_1497181b6(undefined8 param_1,int param_2)

{
  FUN_149718470();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x1f8);
  }
  return param_1;
}



// FUNCTION 1497181e2 FUN_1497181e2 body=38 status=ok
// SIG undefined FUN_1497181e2(void)

undefined8 FUN_1497181e2(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FUniformIntegerFieldDataflowNode",1);
  return param_2;
}



// FUNCTION 149718208 FUN_149718208 body=38 status=ok
// SIG undefined FUN_149718208(void)

undefined8 FUN_149718208(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"UniformIntegerField",1);
  return param_2;
}



// FUNCTION 14971822e FUN_14971822e body=38 status=ok
// SIG undefined FUN_14971822e(void)

undefined8 FUN_14971822e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Fields",1);
  return param_2;
}



// FUNCTION 149718254 FUN_149718254 body=32 status=ok
// SIG undefined FUN_149718254(void)

undefined8 FUN_149718254(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149718274 FUN_149718274 body=123 status=ok
// SIG undefined FUN_149718274(void)

void FUN_149718274(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24818 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24818 = FUN_140002ddd(FUN_146750d6e,uVar1,L"UniformIntegerFieldDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24818,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001497182ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 1497182f0 FUN_1497182f0 body=93 status=ok
// SIG undefined FUN_1497182f0(void)

void FUN_1497182f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24818 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24818 = FUN_140002ddd(FUN_146750d6e,uVar2,L"UniformIntegerFieldDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24818,param_1);
  return;
}



// FUNCTION 14971834e FUN_14971834e body=55 status=ok
// SIG undefined FUN_14971834e(void)

void FUN_14971834e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24818 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24818 = FUN_140002ddd(FUN_146750d6e,uVar1,L"UniformIntegerFieldDataflowNode");
  }
  return;
}



// FUNCTION 149718386 FUN_149718386 body=233 status=ok
// SIG undefined FUN_149718386(void)

ulonglong FUN_149718386(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FUniformIntegerFieldDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149718420;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149718420;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149718420;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149718420:
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



// FUNCTION 149718470 FUN_149718470 body=99 status=ok
// SIG undefined FUN_149718470(void)

void FUN_149718470(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be22740;
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
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



// FUNCTION 1497184d4 FUN_1497184d4 body=124 status=ok
// SIG undefined FUN_1497184d4(void)

longlong FUN_1497184d4(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_140de4b5e(param_1 + 0x198,param_2 + 0x198);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x1a8,param_2 + 0x1a8);
  }
  *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_2 + 0x1c8);
  FUN_14054c6c4(param_1 + 0x1d0,param_2 + 0x1d0);
  FUN_14054c6c4(param_1 + 0x1e0,param_2 + 0x1e0);
  *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(param_2 + 0x1f0);
  return param_1;
}



// FUNCTION 149718586 FUN_149718586 body=63 status=ok
// SIG undefined FUN_149718586(void)

undefined1 FUN_149718586(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149718a60(param_2,param_3);
    param_3 = param_3 + 0x238;
    param_2 = param_2 + 0x238;
  }
  return 1;
}



// FUNCTION 1497185ee FUN_1497185ee body=59 status=ok
// SIG undefined FUN_1497185ee(void)

undefined8 FUN_1497185ee(longlong *param_1)

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



// FUNCTION 14971863a FUN_14971863a body=40 status=ok
// SIG undefined FUN_14971863a(void)

void FUN_14971863a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x238) == '\x01') {
    FUN_1497189fc(param_2);
    *(undefined1 *)(param_2 + 0x238) = 0;
  }
  return;
}



// FUNCTION 1497186b0 FUN_1497186b0 body=145 status=ok
// SIG undefined FUN_1497186b0(void)

undefined8 * FUN_1497186b0(undefined8 *param_1)

{
  FUN_146fc02b8();
  *param_1 = &PTR_FUN_14be22b40;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0x3f80000000000080;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0x3f800000447a0000;
  *(undefined2 *)(param_1 + 0x41) = 0x100;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  return param_1;
}



// FUNCTION 149718742 FUN_149718742 body=43 status=ok
// SIG undefined FUN_149718742(void)

undefined8 FUN_149718742(undefined8 param_1,int param_2)

{
  FUN_1497189fc();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x238);
  }
  return param_1;
}



// FUNCTION 14971876e FUN_14971876e body=38 status=ok
// SIG undefined FUN_14971876e(void)

undefined8 FUN_14971876e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FWaveScalarFieldDataflowNode",1);
  return param_2;
}



// FUNCTION 149718794 FUN_149718794 body=38 status=ok
// SIG undefined FUN_149718794(void)

undefined8 FUN_149718794(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"WaveScalarField",1);
  return param_2;
}



// FUNCTION 1497187ba FUN_1497187ba body=38 status=ok
// SIG undefined FUN_1497187ba(void)

undefined8 FUN_1497187ba(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Fields",1);
  return param_2;
}



// FUNCTION 1497187e0 FUN_1497187e0 body=32 status=ok
// SIG undefined FUN_1497187e0(void)

undefined8 FUN_1497187e0(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149718800 FUN_149718800 body=123 status=ok
// SIG undefined FUN_149718800(void)

void FUN_149718800(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24848 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24848 = FUN_140002ddd(FUN_146750dfd,uVar1,L"WaveScalarFieldDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24848,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149718878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14971887c FUN_14971887c body=93 status=ok
// SIG undefined FUN_14971887c(void)

void FUN_14971887c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24848 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24848 = FUN_140002ddd(FUN_146750dfd,uVar2,L"WaveScalarFieldDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24848,param_1);
  return;
}



// FUNCTION 1497188da FUN_1497188da body=55 status=ok
// SIG undefined FUN_1497188da(void)

void FUN_1497188da(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24848 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24848 = FUN_140002ddd(FUN_146750dfd,uVar1,L"WaveScalarFieldDataflowNode");
  }
  return;
}



// FUNCTION 149718912 FUN_149718912 body=233 status=ok
// SIG undefined FUN_149718912(void)

ulonglong FUN_149718912(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FWaveScalarFieldDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_1497189ac;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1497189ac;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_1497189ac;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_1497189ac:
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



// FUNCTION 1497189fc FUN_1497189fc body=99 status=ok
// SIG undefined FUN_1497189fc(void)

void FUN_1497189fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be22b40;
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x42] != 0) {
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



// FUNCTION 149718a60 FUN_149718a60 body=154 status=ok
// SIG undefined FUN_149718a60(void)

longlong FUN_149718a60(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_146fc06e2();
  FUN_140de4b5e(param_1 + 0x198,param_2 + 0x198);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x1a8,param_2 + 0x1a8);
  }
  puVar2 = (undefined8 *)(param_2 + 0x1c8);
  puVar3 = (undefined8 *)(param_1 + 0x1c8);
  for (lVar1 = 8; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)(param_1 + 0x208) = *(undefined2 *)(param_2 + 0x208);
  FUN_144a67f5c(param_1 + 0x210,param_2 + 0x210);
  FUN_14054c6c4(param_1 + 0x220,param_2 + 0x220);
  *(undefined4 *)(param_1 + 0x230) = *(undefined4 *)(param_2 + 0x230);
  return param_1;
}



// FUNCTION 149718afc FUN_149718afc body=96 status=ok
// SIG undefined FUN_149718afc(void)

void FUN_149718afc(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be23000;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  *(undefined4 *)(param_2 + 0x3b) = 0x3f800000;
  *(undefined2 *)((longlong)param_2 + 0x1dc) = 2;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  return;
}



// FUNCTION 149718b5c FUN_149718b5c body=96 status=ok
// SIG undefined FUN_149718b5c(void)

void FUN_149718b5c(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be23000;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  *(undefined4 *)(param_2 + 0x3b) = 0x3f800000;
  *(undefined2 *)((longlong)param_2 + 0x1dc) = 2;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  return;
}



// FUNCTION 149718be0 FUN_149718be0 body=63 status=ok
// SIG undefined FUN_149718be0(void)

undefined1 FUN_149718be0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14971904a(param_2,param_3);
    param_3 = param_3 + 0x200;
    param_2 = param_2 + 0x200;
  }
  return 1;
}



// FUNCTION 149718c48 FUN_149718c48 body=59 status=ok
// SIG undefined FUN_149718c48(void)

undefined8 FUN_149718c48(longlong *param_1)

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



// FUNCTION 149718c94 FUN_149718c94 body=40 status=ok
// SIG undefined FUN_149718c94(void)

void FUN_149718c94(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x200) == '\x01') {
    FUN_149718fc4(param_2);
    *(undefined1 *)(param_2 + 0x200) = 0;
  }
  return;
}



// FUNCTION 149718d0a FUN_149718d0a body=43 status=ok
// SIG undefined FUN_149718d0a(void)

undefined8 FUN_149718d0a(undefined8 param_1,int param_2)

{
  FUN_149718fc4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x200);
  }
  return param_1;
}



// FUNCTION 149718d36 FUN_149718d36 body=38 status=ok
// SIG undefined FUN_149718d36(void)

undefined8 FUN_149718d36(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FSumScalarFieldDataflowNode",1);
  return param_2;
}



// FUNCTION 149718d5c FUN_149718d5c body=38 status=ok
// SIG undefined FUN_149718d5c(void)

undefined8 FUN_149718d5c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"SumScalarField",1);
  return param_2;
}



// FUNCTION 149718d82 FUN_149718d82 body=38 status=ok
// SIG undefined FUN_149718d82(void)

undefined8 FUN_149718d82(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Fields",1);
  return param_2;
}



// FUNCTION 149718da8 FUN_149718da8 body=32 status=ok
// SIG undefined FUN_149718da8(void)

undefined8 FUN_149718da8(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149718dc8 FUN_149718dc8 body=123 status=ok
// SIG undefined FUN_149718dc8(void)

void FUN_149718dc8(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24878 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24878 = FUN_140002ddd(FUN_146750e8b,uVar1,L"SumScalarFieldDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24878,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149718e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149718e44 FUN_149718e44 body=93 status=ok
// SIG undefined FUN_149718e44(void)

void FUN_149718e44(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24878 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24878 = FUN_140002ddd(FUN_146750e8b,uVar2,L"SumScalarFieldDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24878,param_1);
  return;
}



// FUNCTION 149718ea2 FUN_149718ea2 body=55 status=ok
// SIG undefined FUN_149718ea2(void)

void FUN_149718ea2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24878 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24878 = FUN_140002ddd(FUN_146750e8b,uVar1,L"SumScalarFieldDataflowNode");
  }
  return;
}



// FUNCTION 149718eda FUN_149718eda body=233 status=ok
// SIG undefined FUN_149718eda(void)

ulonglong FUN_149718eda(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FSumScalarFieldDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149718f74;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149718f74;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149718f74;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149718f74:
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



// FUNCTION 149718fc4 FUN_149718fc4 body=133 status=ok
// SIG undefined FUN_149718fc4(void)

void FUN_149718fc4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be23000;
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
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



// FUNCTION 14971904a FUN_14971904a body=158 status=ok
// SIG undefined FUN_14971904a(void)

longlong FUN_14971904a(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_144a67f5c(param_1 + 0x198,param_2 + 0x198);
  FUN_14054c6c4(param_1 + 0x1a8,param_2 + 0x1a8);
  FUN_144a67f5c(param_1 + 0x1b8,param_2 + 0x1b8);
  FUN_14054c6c4(param_1 + 0x1c8,param_2 + 0x1c8);
  *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_2 + 0x1d8);
  *(undefined2 *)(param_1 + 0x1dc) = *(undefined2 *)(param_2 + 0x1dc);
  FUN_144a67f5c(param_1 + 0x1e0,param_2 + 0x1e0);
  FUN_14054c6c4(param_1 + 0x1f0,param_2 + 0x1f0);
  return param_1;
}



// FUNCTION 1497190ea FUN_1497190ea body=110 status=ok
// SIG undefined FUN_1497190ea(void)

void FUN_1497190ea(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be23490;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  param_2[0x3e] = 0;
  *(undefined4 *)(param_2 + 0x3f) = 0x3f800000;
  *(undefined2 *)((longlong)param_2 + 0x1fc) = 2;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  param_2[0x42] = 0;
  param_2[0x43] = 0;
  return;
}



// FUNCTION 149719158 FUN_149719158 body=110 status=ok
// SIG undefined FUN_149719158(void)

void FUN_149719158(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be23490;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  param_2[0x3e] = 0;
  *(undefined4 *)(param_2 + 0x3f) = 0x3f800000;
  *(undefined2 *)((longlong)param_2 + 0x1fc) = 2;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  param_2[0x42] = 0;
  param_2[0x43] = 0;
  return;
}



// FUNCTION 1497191ea FUN_1497191ea body=63 status=ok
// SIG undefined FUN_1497191ea(void)

undefined1 FUN_1497191ea(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149719676(param_2,param_3);
    param_3 = param_3 + 0x220;
    param_2 = param_2 + 0x220;
  }
  return 1;
}



// FUNCTION 149719252 FUN_149719252 body=59 status=ok
// SIG undefined FUN_149719252(void)

undefined8 FUN_149719252(longlong *param_1)

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



// FUNCTION 14971929e FUN_14971929e body=40 status=ok
// SIG undefined FUN_14971929e(void)

void FUN_14971929e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x220) == '\x01') {
    FUN_1497195ce(param_2);
    *(undefined1 *)(param_2 + 0x220) = 0;
  }
  return;
}



// FUNCTION 149719314 FUN_149719314 body=43 status=ok
// SIG undefined FUN_149719314(void)

undefined8 FUN_149719314(undefined8 param_1,int param_2)

{
  FUN_1497195ce();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x220);
  }
  return param_1;
}



// FUNCTION 149719340 FUN_149719340 body=38 status=ok
// SIG undefined FUN_149719340(void)

undefined8 FUN_149719340(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FSumVectorFieldDataflowNode",1);
  return param_2;
}



// FUNCTION 149719366 FUN_149719366 body=38 status=ok
// SIG undefined FUN_149719366(void)

undefined8 FUN_149719366(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"SumVectorField",1);
  return param_2;
}



// FUNCTION 14971938c FUN_14971938c body=38 status=ok
// SIG undefined FUN_14971938c(void)

undefined8 FUN_14971938c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Fields",1);
  return param_2;
}



// FUNCTION 1497193b2 FUN_1497193b2 body=32 status=ok
// SIG undefined FUN_1497193b2(void)

undefined8 FUN_1497193b2(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 1497193d2 FUN_1497193d2 body=123 status=ok
// SIG undefined FUN_1497193d2(void)

void FUN_1497193d2(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc248a8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc248a8 = FUN_140002ddd(FUN_146750f19,uVar1,L"SumVectorFieldDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc248a8,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014971944a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14971944e FUN_14971944e body=93 status=ok
// SIG undefined FUN_14971944e(void)

void FUN_14971944e(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc248a8 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc248a8 = FUN_140002ddd(FUN_146750f19,uVar2,L"SumVectorFieldDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc248a8,param_1);
  return;
}



// FUNCTION 1497194ac FUN_1497194ac body=55 status=ok
// SIG undefined FUN_1497194ac(void)

void FUN_1497194ac(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc248a8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc248a8 = FUN_140002ddd(FUN_146750f19,uVar1,L"SumVectorFieldDataflowNode");
  }
  return;
}



// FUNCTION 1497194e4 FUN_1497194e4 body=233 status=ok
// SIG undefined FUN_1497194e4(void)

ulonglong FUN_1497194e4(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FSumVectorFieldDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14971957e;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14971957e;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14971957e;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14971957e:
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



// FUNCTION 1497195ce FUN_1497195ce body=167 status=ok
// SIG undefined FUN_1497195ce(void)

void FUN_1497195ce(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be23490;
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
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



// FUNCTION 149719676 FUN_149719676 body=192 status=ok
// SIG undefined FUN_149719676(void)

longlong FUN_149719676(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_144a67f5c(param_1 + 0x198,param_2 + 0x198);
  FUN_14054c6c4(param_1 + 0x1a8,param_2 + 0x1a8);
  FUN_1405b70a4(param_1 + 0x1b8,param_2 + 0x1b8);
  FUN_14054c6c4(param_1 + 0x1c8,param_2 + 0x1c8);
  FUN_1405b70a4(param_1 + 0x1d8,param_2 + 0x1d8);
  FUN_14054c6c4(param_1 + 0x1e8,param_2 + 0x1e8);
  *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(param_2 + 0x1f8);
  *(undefined2 *)(param_1 + 0x1fc) = *(undefined2 *)(param_2 + 0x1fc);
  FUN_1405b70a4(param_1 + 0x200,param_2 + 0x200);
  FUN_14054c6c4(param_1 + 0x210,param_2 + 0x210);
  return param_1;
}



// FUNCTION 149719738 FUN_149719738 body=67 status=ok
// SIG undefined FUN_149719738(void)

void FUN_149719738(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be23740;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  return;
}



// FUNCTION 14971977c FUN_14971977c body=67 status=ok
// SIG undefined FUN_14971977c(void)

void FUN_14971977c(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be23740;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  return;
}



// FUNCTION 1497197e4 FUN_1497197e4 body=63 status=ok
// SIG undefined FUN_1497197e4(void)

undefined1 FUN_1497197e4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149719c1a(param_2,param_3);
    param_3 = param_3 + 0x1d0;
    param_2 = param_2 + 0x1d0;
  }
  return 1;
}



// FUNCTION 14971984c FUN_14971984c body=59 status=ok
// SIG undefined FUN_14971984c(void)

undefined8 FUN_14971984c(longlong *param_1)

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



// FUNCTION 149719898 FUN_149719898 body=40 status=ok
// SIG undefined FUN_149719898(void)

void FUN_149719898(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1d0) == '\x01') {
    FUN_149719bc8(param_2);
    *(undefined1 *)(param_2 + 0x1d0) = 0;
  }
  return;
}



// FUNCTION 14971990e FUN_14971990e body=43 status=ok
// SIG undefined FUN_14971990e(void)

undefined8 FUN_14971990e(undefined8 param_1,int param_2)

{
  FUN_149719bc8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x1d0);
  }
  return param_1;
}



// FUNCTION 14971993a FUN_14971993a body=38 status=ok
// SIG undefined FUN_14971993a(void)

undefined8 FUN_14971993a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FFieldMakeDenseFloatArrayDataflowNode",1);
  return param_2;
}



// FUNCTION 149719960 FUN_149719960 body=38 status=ok
// SIG undefined FUN_149719960(void)

undefined8 FUN_149719960(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FieldMakeDenseFloatArray",1);
  return param_2;
}



// FUNCTION 149719986 FUN_149719986 body=38 status=ok
// SIG undefined FUN_149719986(void)

undefined8 FUN_149719986(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Fields",1);
  return param_2;
}



// FUNCTION 1497199ac FUN_1497199ac body=32 status=ok
// SIG undefined FUN_1497199ac(void)

undefined8 FUN_1497199ac(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 1497199cc FUN_1497199cc body=123 status=ok
// SIG undefined FUN_1497199cc(void)

void FUN_1497199cc(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc248c0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc248c0 = FUN_140002ddd(FUN_146750f78,uVar1,L"FieldMakeDenseFloatArrayDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc248c0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149719a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149719a48 FUN_149719a48 body=93 status=ok
// SIG undefined FUN_149719a48(void)

void FUN_149719a48(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc248c0 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc248c0 = FUN_140002ddd(FUN_146750f78,uVar2,L"FieldMakeDenseFloatArrayDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc248c0,param_1);
  return;
}



// FUNCTION 149719aa6 FUN_149719aa6 body=55 status=ok
// SIG undefined FUN_149719aa6(void)

void FUN_149719aa6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc248c0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc248c0 = FUN_140002ddd(FUN_146750f78,uVar1,L"FieldMakeDenseFloatArrayDataflowNode");
  }
  return;
}



// FUNCTION 149719ade FUN_149719ade body=233 status=ok
// SIG undefined FUN_149719ade(void)

ulonglong FUN_149719ade(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FFieldMakeDenseFloatArrayDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149719b78;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149719b78;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149719b78;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149719b78:
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



// FUNCTION 149719bc8 FUN_149719bc8 body=82 status=ok
// SIG undefined FUN_149719bc8(void)

void FUN_149719bc8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be23740;
  if (param_1[0x38] != 0) {
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



// FUNCTION 149719c1a FUN_149719c1a body=95 status=ok
// SIG undefined FUN_149719c1a(void)

longlong FUN_149719c1a(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_144a67f5c(param_1 + 0x198,param_2 + 0x198);
  FUN_14054c6c4(param_1 + 0x1a8,param_2 + 0x1a8);
  *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(param_2 + 0x1b8);
  FUN_144a67f5c(param_1 + 0x1c0,param_2 + 0x1c0);
  return param_1;
}



// FUNCTION 149719da2 FUN_149719da2 body=468 status=ok
// SIG undefined FUN_149719da2(void)

void FUN_149719da2(longlong param_1,undefined8 param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_88 [32];
  longlong local_68 [3];
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar2 == param_1 + 0x1a8) {
    local_68[2] = param_1 + 0x198;
    local_68[0] = 0;
    local_68[1] = 0;
    local_50 = 0xffffffff;
    local_48 = 0;
    uVar3 = FUN_146fb4872(param_1,local_68 + 2);
    plVar4 = (longlong *)FUN_14972668e(uVar3,param_2,local_68[2]);
    uVar1 = *(uint *)(plVar4 + 1);
    uVar6 = (ulonglong)uVar1;
    if (uVar6 != 0) {
      if (*(char *)(param_1 + 0x1b8) == '\x01') {
        if ((int)uVar1 < 1) {
          fVar8 = 0.0;
        }
        else {
          fVar8 = 0.0;
          uVar5 = 0;
          do {
            fVar7 = *(float *)(*plVar4 + uVar5 * 4);
            if (fVar8 <= fVar7) {
              fVar8 = fVar7;
            }
            uVar5 = uVar5 + 1;
          } while (uVar6 != uVar5);
        }
      }
      else {
        fVar8 = 1.0;
      }
      if (ABS(fVar8) <= 1e-08) {
        FUN_144750f1c(local_68,&DAT_149e1e308,uVar1);
      }
      else {
        FUN_144750f1c(local_68,param_1 + 0x1bc,uVar1);
        if (0 < (int)uVar1) {
          lVar2 = 0;
          do {
            fVar7 = *(float *)(*plVar4 + lVar2) / fVar8;
            *(float *)(local_68[0] + lVar2 * 4) = *(float *)(local_68[0] + lVar2 * 4) * fVar7;
            *(float *)(local_68[0] + 4 + lVar2 * 4) =
                 *(float *)(local_68[0] + 4 + lVar2 * 4) * fVar7;
            *(float *)(local_68[0] + 8 + lVar2 * 4) =
                 *(float *)(local_68[0] + 8 + lVar2 * 4) * fVar7;
            *(float *)(local_68[0] + 0xc + lVar2 * 4) =
                 fVar7 * *(float *)(local_68[0] + 0xc + lVar2 * 4);
            lVar2 = lVar2 + 4;
          } while (uVar6 << 2 != lVar2);
        }
      }
    }
    local_50 = 0xffffffff;
    local_48 = 0;
    local_68[2] = param_1 + 0x1a8;
    lVar2 = FUN_146fb78aa(param_1);
    if (lVar2 != 0) {
      FUN_149726a82(lVar2,local_68,param_2);
    }
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149719f78 FUN_149719f78 body=291 status=ok
// SIG undefined FUN_149719f78(void)

void FUN_149719f78(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int *piVar5;
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar2 == param_1 + 0x1b0) {
    local_58 = param_1 + 0x1a0;
    local_50 = 0xffffffff;
    local_48 = 0;
    uVar3 = FUN_146fb4872(param_1,&local_58);
    plVar4 = (longlong *)FUN_14972668e(uVar3,param_2,local_58);
    local_58 = param_1 + 0x198;
    local_50 = 0xffffffff;
    local_48 = 0;
    uVar3 = FUN_146fb4872(param_1,&local_58);
    piVar5 = (int *)FUN_146fca67a(uVar3,param_2,local_58);
    iVar1 = *piVar5;
    local_5c = 0;
    if ((-1 < (longlong)iVar1) && (iVar1 < (int)plVar4[1])) {
      local_5c = *(undefined4 *)(*plVar4 + (longlong)iVar1 * 4);
    }
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x1b0;
    lVar2 = FUN_146fb78aa(param_1);
    if (lVar2 != 0) {
      FUN_1497286c4(lVar2,&local_5c,param_2);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14971a09c FUN_14971a09c body=793 status=ok
// SIG undefined FUN_14971a09c(void)

void FUN_14971a09c(longlong param_1,undefined8 param_2,longlong *param_3)

{
  float fVar1;
  void *_Src;
  size_t sVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_98 [32];
  longlong local_78 [3];
  void *local_60;
  int local_58;
  undefined4 local_54;
  size_t local_50;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  sVar2 = (**(code **)(*param_3 + 0x20))(param_3);
  if (sVar2 != param_1 + 0x1b0U) goto LAB_14971a0d3;
  local_50 = param_1 + 0x1a0;
  local_48 = 0xffffffff;
  iVar5 = 0;
  local_40 = 0;
  uVar3 = FUN_146fb4872(param_1,&local_50);
  puVar4 = (undefined8 *)FUN_14972668e(uVar3,param_2,local_50);
  local_60 = (void *)0x0;
  local_58 = *(int *)(puVar4 + 1);
  lVar6 = (longlong)local_58;
  _Src = (void *)*puVar4;
  if (lVar6 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1447c510a(&local_60,local_58,0);
    memcpy(local_60,_Src,lVar6 << 2);
    iVar5 = local_58;
  }
  local_78[0] = 0;
  local_78[1] = 0;
  FUN_144a127d2(local_78,iVar5,1);
  switch(*(undefined1 *)(param_1 + 0x198)) {
  case 0:
    if (0 < local_58) {
      lVar6 = 0;
      do {
        fVar1 = *(float *)((longlong)local_60 + lVar6 * 4);
        *(int *)(local_78[0] + lVar6 * 4) = (int)ROUND(fVar1 + fVar1 + -0.5) >> 1;
        lVar6 = lVar6 + 1;
      } while (lVar6 < local_58);
    }
    break;
  case 1:
    if (0 < local_58) {
      lVar6 = 0;
      do {
        fVar1 = *(float *)((longlong)local_60 + lVar6 * 4);
        *(int *)(local_78[0] + lVar6 * 4) = -((int)ROUND(-0.5 - (fVar1 + fVar1)) >> 1);
        lVar6 = lVar6 + 1;
      } while (lVar6 < local_58);
    }
    break;
  case 2:
    if (0 < local_58) {
      lVar6 = 0;
      do {
        fVar1 = *(float *)((longlong)local_60 + lVar6 * 4);
        *(int *)(local_78[0] + lVar6 * 4) = (int)ROUND(fVar1 + fVar1 + 0.5) >> 1;
        lVar6 = lVar6 + 1;
      } while (lVar6 < local_58);
    }
    break;
  case 3:
    if (0 < local_58) {
      lVar6 = 0;
      do {
        auVar7 = ZEXT416(*(uint *)((longlong)local_60 + lVar6 * 4));
        auVar7 = roundps(auVar7,auVar7,3);
        *(int *)(local_78[0] + lVar6 * 4) = (int)auVar7._0_4_;
        lVar6 = lVar6 + 1;
      } while (lVar6 < local_58);
    }
    break;
  case 4:
    if (local_58 < 1) {
LAB_14971a34a:
      iVar5 = 0;
    }
    else {
      lVar6 = 0;
      iVar5 = 0;
      do {
        fVar1 = *(float *)((longlong)local_60 + lVar6 * 4);
        if ((fVar1 != 0.0) || (NAN(fVar1))) {
          *(int *)(local_78[0] + (longlong)iVar5 * 4) = (int)lVar6;
          iVar5 = iVar5 + 1;
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < local_58);
    }
    goto LAB_14971a34c;
  case 5:
    if (local_58 < 1) goto LAB_14971a34a;
    lVar6 = 0;
    iVar5 = 0;
    do {
      fVar1 = *(float *)((longlong)local_60 + lVar6 * 4);
      if ((fVar1 == 0.0) && (!NAN(fVar1))) {
        *(int *)(local_78[0] + (longlong)iVar5 * 4) = (int)lVar6;
        iVar5 = iVar5 + 1;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < local_58);
LAB_14971a34c:
    FUN_144a1a59e(local_78,iVar5,1);
  }
  local_48 = 0xffffffff;
  local_40 = 0;
  local_50 = param_1 + 0x1b0U;
  lVar6 = FUN_146fb78aa(param_1);
  if (lVar6 != 0) {
    FUN_1496f8d2a(lVar6,local_78,param_2);
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_14971a0d3:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14971a3b6 FUN_14971a3b6 body=298 status=ok
// SIG undefined FUN_14971a3b6(void)

void FUN_14971a3b6(longlong param_1,undefined8 param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar5 = param_1 + 0x1b0;
  lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar2 == lVar5) {
    local_48 = param_1 + 0x1a0;
    local_40 = 0xffffffff;
    local_38 = 0;
    uVar3 = FUN_146fb4872(param_1,&local_48);
    plVar4 = (longlong *)FUN_149728954(uVar3,param_2,local_48);
    local_48 = lVar5;
    if (((int)*(uint *)(plVar4 + 1) < 1) ||
       (uVar1 = *(uint *)(param_1 + 0x198), *(uint *)(plVar4 + 1) <= uVar1)) {
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      local_40 = 0xffffffff;
      local_38 = 0;
      lVar5 = FUN_146fb78aa(param_1);
      if (lVar5 != 0) {
        FUN_149728fe0(lVar5,&local_68,param_2);
      }
    }
    else {
      lVar5 = *plVar4;
      local_40 = 0xffffffff;
      local_38 = 0;
      lVar2 = FUN_146fb78aa(param_1);
      if (lVar2 != 0) {
        FUN_149728d4a(lVar2,lVar5 + (ulonglong)uVar1 * 0x18,param_2);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14971a4e2 FUN_14971a4e2 body=579 status=ok
// SIG undefined FUN_14971a4e2(void)

void FUN_14971a4e2(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [36];
  undefined4 local_54;
  longlong local_50;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 != param_1 + 0x1d8) goto LAB_14971a518;
  local_48 = 0xffffffff;
  local_40 = 0;
  local_50 = param_1 + 0x198;
  lVar1 = FUN_146fb4872(param_1);
  if (*(longlong *)(lVar1 + 0x48) == 0) {
    local_48 = 0xffffffff;
    local_40 = 0;
    local_50 = param_1 + 0x1a8;
    lVar1 = FUN_146fb4872(param_1);
    if (*(longlong *)(lVar1 + 0x48) != 0) {
      local_48 = 0xffffffff;
      local_40 = 0;
      local_50 = param_1 + 0x1a8;
      uVar2 = FUN_146fb4872(param_1,&local_50);
      lVar1 = FUN_149729092(uVar2,param_2,local_50);
      goto LAB_14971a675;
    }
    local_48 = 0xffffffff;
    local_40 = 0;
    local_50 = param_1 + 0x1b8;
    lVar1 = FUN_146fb4872(param_1);
    if (*(longlong *)(lVar1 + 0x48) != 0) {
      local_48 = 0xffffffff;
      local_40 = 0;
      local_50 = param_1 + 0x1b8;
      uVar2 = FUN_146fb4872(param_1,&local_50);
      lVar1 = FUN_149728954(uVar2,param_2,local_50);
      goto LAB_14971a675;
    }
    local_48 = 0xffffffff;
    local_40 = 0;
    local_50 = param_1 + 0x1c8;
    lVar1 = FUN_146fb4872(param_1);
    if (*(longlong *)(lVar1 + 0x48) != 0) {
      local_48 = 0xffffffff;
      local_40 = 0;
      local_50 = param_1 + 0x1c8;
      uVar2 = FUN_146fb4872(param_1,&local_50);
      lVar1 = FUN_149729486(uVar2,param_2,local_50);
      goto LAB_14971a675;
    }
    local_54 = 0;
  }
  else {
    local_48 = 0xffffffff;
    local_40 = 0;
    local_50 = param_1 + 0x198;
    uVar2 = FUN_146fb4872(param_1,&local_50);
    lVar1 = FUN_14972668e(uVar2,param_2,local_50);
LAB_14971a675:
    local_54 = *(undefined4 *)(lVar1 + 8);
  }
  local_40 = 0;
  local_48 = 0xffffffff;
  local_50 = param_1 + 0x1d8;
  lVar1 = FUN_146fb78aa(param_1,&local_50);
  if (lVar1 != 0) {
    FUN_149700500(lVar1,&local_54,param_2);
  }
LAB_14971a518:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14971a726 FUN_14971a726 body=270 status=ok
// SIG undefined FUN_14971a726(void)

void FUN_14971a726(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined4 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined4 local_58;
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x1a8) {
    local_60 = param_1 + 0x198;
    local_58 = 0xffffffff;
    local_50 = 0;
    uVar2 = FUN_146fb4872(param_1,&local_60);
    lVar1 = FUN_14972987c(uVar2,param_2,local_60);
    local_50 = 0;
    local_48 = 0x8000000000;
    FUN_146fd579c(&local_60,*(undefined4 *)(lVar1 + 8),0);
    FUN_146fd5a56(&local_60,lVar1);
    local_70 = 0xffffffff;
    local_68 = 0;
    local_78 = param_1 + 0x1a8;
    lVar1 = FUN_146fb78aa(param_1);
    if (lVar1 != 0) {
      FUN_149729c6c(lVar1,&local_60,param_2);
    }
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14971a836 FUN_14971a836 body=454 status=ok
// SIG undefined FUN_14971a836(void)

void FUN_14971a836(longlong param_1,undefined8 param_2,longlong *param_3)

{
  uint *puVar1;
  float *pfVar2;
  float fVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  int iVar8;
  longlong *plVar9;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined4 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar4 == param_1 + 0x1b0) {
    local_58 = param_1 + 0x198;
    local_50 = 0xffffffff;
    local_48 = (longlong *)0x0;
    uVar5 = FUN_146fb4872(param_1,&local_58);
    plVar6 = (longlong *)FUN_14972668e(uVar5,param_2,local_58);
    local_48 = (longlong *)0x0;
    local_40 = 0x8000000000;
    FUN_146fd579c(&local_58,(int)plVar6[1],0);
    iVar8 = (int)plVar6[1];
    if (0 < iVar8) {
      uVar7 = 0;
      do {
        switch(*(undefined1 *)(param_1 + 0x1a8)) {
        case 0:
          fVar3 = *(float *)(*plVar6 + uVar7 * 4);
          if ((fVar3 == *(float *)(param_1 + 0x1ac)) &&
             (!NAN(fVar3) && !NAN(*(float *)(param_1 + 0x1ac)))) {
LAB_14971a931:
            plVar9 = local_48;
            if (local_48 == (longlong *)0x0) {
              plVar9 = &local_58;
            }
            puVar1 = (uint *)((longlong)plVar9 + (uVar7 >> 5 & 0x7ffffff) * 4);
            *puVar1 = *puVar1 | 1 << ((byte)uVar7 & 0x1f);
            iVar8 = (int)plVar6[1];
          }
          break;
        case 1:
          pfVar2 = (float *)(*plVar6 + uVar7 * 4);
          if (*pfVar2 <= *(float *)(param_1 + 0x1ac) && *(float *)(param_1 + 0x1ac) != *pfVar2)
          goto LAB_14971a931;
          break;
        case 2:
          if (*(float *)(*plVar6 + uVar7 * 4) <= *(float *)(param_1 + 0x1ac)) goto LAB_14971a931;
          break;
        case 3:
          fVar3 = *(float *)(*plVar6 + uVar7 * 4);
          if (*(float *)(param_1 + 0x1ac) <= fVar3 && fVar3 != *(float *)(param_1 + 0x1ac))
          goto LAB_14971a931;
          break;
        case 4:
          if (*(float *)(param_1 + 0x1ac) <= *(float *)(*plVar6 + uVar7 * 4)) goto LAB_14971a931;
        }
        uVar7 = uVar7 + 1;
      } while ((longlong)uVar7 < (longlong)iVar8);
    }
    local_68 = 0xffffffff;
    local_60 = 0;
    local_70 = param_1 + 0x1b0;
    lVar4 = FUN_146fb78aa(param_1);
    if (lVar4 != 0) {
      FUN_149729f38(lVar4,&local_58,param_2);
    }
    if (local_48 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14971a9fe FUN_14971a9fe body=921 status=ok
// SIG undefined FUN_14971a9fe(void)

void FUN_14971a9fe(longlong param_1,undefined8 param_2,longlong *param_3)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  float *pfVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  longlong local_a8 [5];
  undefined4 local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar8 = param_1 + 0x1d0;
  lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar4 != lVar8) goto LAB_14971aa48;
  local_a8[4] = param_1 + 0x198;
  local_80 = 0xffffffff;
  local_78 = 0;
  uVar5 = FUN_146fb4872(param_1,local_a8 + 4);
  local_b0 = (longlong *)FUN_14972668e(uVar5,param_2,local_a8[4]);
  local_80 = 0xffffffff;
  local_78 = 0;
  local_a8[4] = param_1 + 0x1a8;
  uVar5 = FUN_146fb4872(param_1,local_a8 + 4);
  lVar4 = FUN_14972a204(uVar5,param_2,local_a8[4]);
  local_a8[4] = param_1 + 0x1c8;
  local_80 = 0xffffffff;
  local_78 = 0;
  uVar5 = FUN_146fb4872(param_1,local_a8 + 4);
  pfVar6 = (float *)FUN_14972a54c(uVar5,param_2,local_a8[4]);
  fVar1 = *pfVar6;
  local_a8[4] = param_1 + 0x1cc;
  local_80 = 0xffffffff;
  local_78 = 0;
  uVar5 = FUN_146fb4872(param_1,local_a8 + 4);
  pfVar6 = (float *)FUN_14972a54c(uVar5,param_2,local_a8[4]);
  fVar2 = *pfVar6;
  uVar3 = *(uint *)(param_1 + 0x1a0);
  uVar10 = (ulonglong)uVar3;
  local_a8[2] = 0;
  local_a8[3] = 0;
  local_a8[4] = local_a8[4] & 0xffffffff00000000;
  FUN_1448158c6(local_a8 + 2,local_a8 + 4,uVar3);
  local_80 = 0xffffffff;
  local_78 = 0;
  local_a8[4] = param_1 + 0x1a8;
  lVar7 = FUN_146fb4872();
  local_a8[4] = lVar8;
  if (*(longlong *)(lVar7 + 0x48) == 0) {
    if (0 < (int)uVar3) {
      uVar9 = 0;
      fVar11 = 1e-09;
      fVar13 = 1e+09;
      do {
        fVar12 = *(float *)(*local_b0 + uVar9 * 4);
        fVar14 = fVar12;
        if (fVar13 <= fVar12) {
          fVar14 = fVar13;
        }
        if (fVar12 <= fVar11) {
          fVar12 = fVar11;
        }
        uVar9 = uVar9 + 1;
        fVar11 = fVar12;
        fVar13 = fVar14;
      } while (uVar10 != uVar9);
      uVar9 = 0;
      do {
        *(float *)(local_a8[2] + uVar9 * 4) =
             (*(float *)(local_a8[2] + uVar9 * 4) - fVar14) / (fVar12 - fVar14);
        *(float *)(local_a8[2] + uVar9 * 4) =
             *(float *)(local_a8[2] + uVar9 * 4) * (fVar2 - fVar1) + fVar1;
        uVar9 = uVar9 + 1;
      } while (uVar10 != uVar9);
    }
LAB_14971acfc:
    local_80 = 0xffffffff;
    local_78 = 0;
    lVar8 = FUN_146fb78aa(param_1);
    if (lVar8 != 0) {
      FUN_14972a684(lVar8,local_a8 + 2,param_2);
    }
  }
  else {
    if ((int)local_b0[1] == *(int *)(lVar4 + 0x18)) {
      if (0 < (int)uVar3) {
        lVar8 = *(longlong *)(lVar4 + 0x10);
        if (*(longlong *)(lVar4 + 0x10) == 0) {
          lVar8 = lVar4;
        }
        fVar13 = 1e+09;
        fVar11 = 1e-09;
        uVar9 = 0;
        do {
          if ((*(uint *)(lVar8 + (uVar9 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar9 & 0x1f) & 1) != 0) {
            fVar12 = *(float *)(*local_b0 + uVar9 * 4);
            fVar14 = fVar12;
            if (fVar13 <= fVar12) {
              fVar14 = fVar13;
            }
            fVar13 = fVar14;
            if (fVar11 < fVar12) {
              fVar11 = fVar12;
            }
          }
          uVar9 = uVar9 + 1;
        } while (uVar10 != uVar9);
        uVar9 = 0;
        do {
          lVar8 = *(longlong *)(lVar4 + 0x10);
          if (*(longlong *)(lVar4 + 0x10) == 0) {
            lVar8 = lVar4;
          }
          if ((*(uint *)(lVar8 + (uVar9 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar9 & 0x1f) & 1) != 0) {
            *(float *)(local_a8[2] + uVar9 * 4) =
                 (*(float *)(local_a8[2] + uVar9 * 4) - fVar13) / (fVar11 - fVar13);
            *(float *)(local_a8[2] + uVar9 * 4) =
                 *(float *)(local_a8[2] + uVar9 * 4) * (fVar2 - fVar1) + fVar1;
          }
          uVar9 = uVar9 + 1;
        } while (uVar10 != uVar9);
      }
      goto LAB_14971acfc;
    }
    local_a8[0] = 0;
    local_a8[1] = 0;
    local_80 = 0xffffffff;
    local_78 = 0;
    lVar8 = FUN_146fb78aa(param_1);
    if ((lVar8 != 0) && (FUN_14972a684(lVar8,local_a8,param_2), local_a8[0] != 0)) {
      FUN_1400020a8();
    }
  }
  if (local_a8[2] != 0) {
    FUN_1400020a8();
  }
LAB_14971aa48:
  if ((local_70 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14971ad98 FUN_14971ad98 body=936 status=ok
// SIG undefined FUN_14971ad98(void)

void FUN_14971ad98(longlong param_1,undefined8 param_2,longlong *param_3)

{
  float fVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  float *pfVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_c8 [32];
  longlong local_a8 [5];
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar10 = param_1 + 0x1d0;
  lVar5 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar5 != lVar10) goto LAB_14971ade0;
  local_a8[4] = param_1 + 0x198;
  uStack_80._0_4_ = 0xffffffff;
  local_78 = 0;
  uVar6 = FUN_146fb4872(param_1,local_a8 + 4);
  plVar7 = (longlong *)FUN_149728954(uVar6,param_2,local_a8[4]);
  uStack_80._0_4_ = 0xffffffff;
  local_78 = 0;
  local_a8[4] = param_1 + 0x1a8;
  uVar6 = FUN_146fb4872(param_1,local_a8 + 4);
  lVar5 = FUN_14972a204(uVar6,param_2,local_a8[4]);
  local_a8[4] = param_1 + 0x1c8;
  uStack_80 = CONCAT44(uStack_80._4_4_,0xffffffff);
  local_78 = 0;
  uVar6 = FUN_146fb4872(param_1,local_a8 + 4);
  pfVar8 = (float *)FUN_14972a54c(uVar6,param_2,local_a8[4]);
  fVar1 = *pfVar8;
  uVar2 = *(uint *)(plVar7 + 1);
  uVar12 = (ulonglong)uVar2;
  local_a8[2] = 0;
  local_a8[3] = 0;
  local_78 = 0;
  local_a8[4] = 0;
  uStack_80 = 0;
  FUN_1447a8a24(local_a8 + 2,local_a8 + 4,uVar12);
  uStack_80._0_4_ = 0xffffffff;
  local_78 = 0;
  local_a8[4] = param_1 + 0x1a8;
  lVar9 = FUN_146fb4872(param_1,local_a8 + 4);
  local_a8[4] = lVar10;
  if (*(longlong *)(lVar9 + 0x48) == 0) {
    if (0 < (int)uVar2) {
      dVar3 = (double)fVar1;
      lVar10 = 0;
      do {
        lVar5 = *plVar7;
        dVar13 = *(double *)(lVar5 + lVar10);
        dVar14 = *(double *)(lVar5 + 8 + lVar10);
        dVar15 = *(double *)(lVar5 + 0x10 + lVar10);
        dVar4 = dVar15 * dVar15 + dVar13 * dVar13 + dVar14 * dVar14;
        if (9.99999993922529e-09 < dVar4) {
          dVar4 = 1.0 / SQRT(dVar4);
          dVar13 = dVar13 * dVar4;
          dVar14 = dVar14 * dVar4;
          dVar15 = dVar15 * dVar4;
        }
        *(double *)(local_a8[2] + lVar10) = dVar13 * dVar3;
        *(double *)(local_a8[2] + 8 + lVar10) = dVar14 * dVar3;
        *(double *)(local_a8[2] + 0x10 + lVar10) = dVar15 * dVar3;
        lVar10 = lVar10 + 0x18;
      } while (uVar12 * 0x18 != lVar10);
    }
LAB_14971b0a5:
    uStack_80 = CONCAT44(uStack_80._4_4_,0xffffffff);
    local_78 = 0;
    lVar10 = FUN_146fb78aa(param_1);
    if (lVar10 != 0) {
      FUN_14972a942(lVar10,local_a8 + 2,param_2);
    }
  }
  else {
    if ((int)plVar7[1] == *(int *)(lVar5 + 0x18)) {
      if (0 < (int)uVar2) {
        dVar3 = (double)fVar1;
        lVar10 = 0x10;
        uVar11 = 0;
        do {
          lVar9 = *(longlong *)(lVar5 + 0x10);
          if (*(longlong *)(lVar5 + 0x10) == 0) {
            lVar9 = lVar5;
          }
          if ((*(uint *)(lVar9 + (uVar11 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar11 & 0x1f) & 1) != 0)
          {
            lVar9 = *plVar7;
            dVar13 = *(double *)(lVar9 + -0x10 + lVar10);
            dVar14 = *(double *)(lVar9 + -8 + lVar10);
            dVar15 = *(double *)(lVar9 + lVar10);
            dVar4 = dVar15 * dVar15 + dVar13 * dVar13 + dVar14 * dVar14;
            if (9.99999993922529e-09 < dVar4) {
              dVar4 = 1.0 / SQRT(dVar4);
              dVar13 = dVar13 * dVar4;
              dVar14 = dVar14 * dVar4;
              dVar15 = dVar15 * dVar4;
            }
            *(double *)(local_a8[2] + -0x10 + lVar10) = dVar13 * dVar3;
            *(double *)(local_a8[2] + -8 + lVar10) = dVar14 * dVar3;
            *(double *)(local_a8[2] + lVar10) = dVar15 * dVar3;
          }
          uVar11 = uVar11 + 1;
          lVar10 = lVar10 + 0x18;
        } while (uVar12 != uVar11);
      }
      goto LAB_14971b0a5;
    }
    local_a8[0] = 0;
    local_a8[1] = 0;
    uStack_80 = CONCAT44(uStack_80._4_4_,0xffffffff);
    local_78 = 0;
    lVar10 = FUN_146fb78aa(param_1);
    if ((lVar10 != 0) && (FUN_14972a942(lVar10,local_a8,param_2), local_a8[0] != 0)) {
      FUN_1400020a8();
    }
  }
  if (local_a8[2] != 0) {
    FUN_1400020a8();
  }
LAB_14971ade0:
  if ((local_70 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14971b142 FUN_14971b142 body=558 status=ok
// SIG undefined FUN_14971b142(void)

void FUN_14971b142(longlong param_1,undefined8 param_2,longlong *param_3)

{
  void *pvVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  longlong local_88 [3];
  void *local_70;
  int local_68;
  undefined4 local_64;
  void *local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar2 == param_1 + 0x1b8) {
    local_50 = param_1 + 0x198;
    local_48 = 0xffffffff;
    local_40 = 0;
    uVar3 = FUN_146fb4872(param_1,&local_50);
    puVar4 = (undefined8 *)FUN_149729092(uVar3,param_2,local_50);
    local_60 = (void *)0x0;
    local_58 = *(int *)(puVar4 + 1);
    lVar2 = (longlong)local_58;
    pvVar1 = (void *)*puVar4;
    if (lVar2 == 0) {
      local_54 = 0;
    }
    else {
      FUN_144a06ca8(&local_60,local_58,0);
      memcpy(local_60,pvVar1,lVar2 << 2);
    }
    local_50 = param_1 + 0x1a8;
    local_48 = 0xffffffff;
    local_40 = 0;
    uVar3 = FUN_146fb4872(param_1,&local_50);
    puVar4 = (undefined8 *)FUN_149729092(uVar3,param_2,local_50);
    local_70 = (void *)0x0;
    local_68 = *(int *)(puVar4 + 1);
    lVar2 = (longlong)local_68;
    pvVar1 = (void *)*puVar4;
    if (lVar2 == 0) {
      local_64 = 0;
    }
    else {
      FUN_144a06ca8(&local_70,local_68,0);
      memcpy(local_70,pvVar1,lVar2 << 2);
    }
    local_88[0] = 0;
    local_88[1] = 0;
    if (0 < local_58) {
      lVar2 = 0;
      lVar5 = 0;
      do {
        FUN_1449e3bb0(local_88,(longlong)local_60 + lVar2);
        lVar5 = lVar5 + 1;
        lVar2 = lVar2 + 4;
      } while (lVar5 < local_58);
    }
    if (0 < local_68) {
      lVar2 = 0;
      lVar5 = 0;
      do {
        FUN_1449e3bb0(local_88,(longlong)local_70 + lVar2);
        lVar5 = lVar5 + 1;
        lVar2 = lVar2 + 4;
      } while (lVar5 < local_68);
    }
    local_48 = 0xffffffff;
    local_40 = 0;
    local_50 = param_1 + 0x1b8;
    lVar2 = FUN_146fb78aa(param_1);
    if (lVar2 != 0) {
      FUN_1496f8d2a(lVar2,local_88,param_2);
    }
    if (local_88[0] != 0) {
      FUN_1400020a8();
    }
    if (local_70 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_60 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14971b372 FUN_14971b372 body=427 status=ok
// SIG undefined FUN_14971b372(void)

void FUN_14971b372(longlong param_1,undefined8 param_2,longlong *param_3)

{
  uint uVar1;
  void *_Src;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_88 [40];
  void *local_60;
  uint local_58;
  undefined4 local_54;
  longlong local_50;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar5 = param_1 + 0x1a0;
  lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar2 == lVar5) {
    local_48 = 0xffffffff;
    local_40 = 0;
    local_50 = lVar5;
    uVar3 = FUN_146fb4872(param_1,&local_50);
    puVar4 = (undefined8 *)FUN_14972668e(uVar3,param_2,local_50);
    local_60 = (void *)0x0;
    local_58 = *(uint *)(puVar4 + 1);
    lVar2 = (longlong)(int)local_58;
    _Src = (void *)*puVar4;
    if (lVar2 == 0) {
      local_54 = 0;
    }
    else {
      FUN_1447c510a(&local_60,local_58,0);
      memcpy(local_60,_Src,lVar2 << 2);
      if (0 < (int)local_58) {
        uVar1 = *(uint *)(param_1 + 0x198);
        uVar6 = (ulonglong)uVar1;
        if (uVar1 < local_58) {
          iVar7 = ~uVar1 + local_58;
          if (*(char *)(param_1 + 0x19c) == '\x01') {
            if (iVar7 != 0) {
              memmove((void *)((longlong)local_60 + uVar6 * 4),
                      (void *)((longlong)local_60 + uVar6 * 4 + 4),(longlong)iVar7 << 2);
            }
            local_58 = local_58 - 1;
            FUN_1401fef06();
          }
          else {
            if (iVar7 != 0) {
              iVar8 = 1;
              if (iVar7 < 1) {
                iVar8 = iVar7;
              }
              memmove((void *)((longlong)local_60 + uVar6 * 4),
                      (void *)((longlong)local_60 + (ulonglong)(local_58 - iVar8) * 4),
                      (longlong)iVar8 << 2);
            }
            local_58 = local_58 - 1;
          }
        }
      }
    }
    local_48 = 0xffffffff;
    local_40 = 0;
    local_50 = lVar5;
    lVar5 = FUN_146fb78aa(param_1);
    if (lVar5 != 0) {
      FUN_14972ac00(lVar5,&local_60,param_2);
    }
    if (local_60 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14971b51e FUN_14971b51e body=1535 status=ok
// SIG undefined FUN_14971b51e(void)

void FUN_14971b51e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  void *_Src;
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_e8 [40];
  undefined8 local_c0;
  void *local_b8;
  uint local_b0;
  undefined4 local_ac;
  longlong local_a8;
  undefined8 uStack_a0;
  float local_8c;
  void *local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined4 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
  if ((lVar2 != param_1 + 0x1cc) &&
     (lVar2 = (**(code **)(*param_3 + 0x20))(param_3), lVar2 != param_1 + 0x1d0))
  goto LAB_14971b57e;
  local_78 = param_1 + 0x198;
  local_70 = 0xffffffff;
  local_68 = 0;
  uVar3 = FUN_146fb4872(param_1,&local_78);
  plVar4 = (longlong *)FUN_14972668e(uVar3,param_2,local_78);
  local_70 = 0xffffffff;
  local_68 = 0;
  local_78 = param_1 + 0x1a8;
  uVar3 = FUN_146fb4872(param_1,&local_78);
  local_c0 = param_2;
  lVar2 = FUN_14972af6e(uVar3,param_2);
  local_88 = (void *)0x0;
  uStack_80 = 0;
  local_70 = 0xffffffff;
  local_68 = 0;
  local_78 = param_1 + 0x1a8;
  lVar5 = FUN_146fb4872(param_1);
  if (*(longlong *)(lVar5 + 0x48) == 0) {
    iVar11 = (int)plVar4[1];
LAB_14971b6c9:
    if (0 < iVar11) {
      lVar2 = 0;
      do {
        lVar5 = *plVar4;
        lVar10 = (longlong)(int)(uint)uStack_80;
        uVar1 = (uint)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
        if (uStack_80._4_4_ < uVar1) {
          FUN_14475e4ac(&local_88);
        }
        *(undefined4 *)((longlong)local_88 + lVar10 * 4) = *(undefined4 *)(lVar5 + lVar2 * 4);
        lVar2 = lVar2 + 1;
      } while (lVar2 < (int)plVar4[1]);
    }
  }
  else {
    iVar9 = *(int *)(lVar2 + 0x18);
    iVar11 = (int)plVar4[1];
    if (iVar9 != iVar11) goto LAB_14971b6c9;
    if (0 < iVar9) {
      uVar7 = 0;
      do {
        lVar5 = *(longlong *)(lVar2 + 0x10);
        if (*(longlong *)(lVar2 + 0x10) == 0) {
          lVar5 = lVar2;
        }
        if ((*(uint *)(lVar5 + (uVar7 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar7 & 0x1f) & 1) != 0) {
          lVar5 = *plVar4;
          lVar10 = (longlong)(int)(uint)uStack_80;
          uVar1 = (uint)uStack_80 + 1;
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
          if (uStack_80._4_4_ < uVar1) {
            FUN_14475e4ac(&local_88);
          }
          *(undefined4 *)((longlong)local_88 + lVar10 * 4) = *(undefined4 *)(lVar5 + uVar7 * 4);
          iVar9 = (int)plVar4[1];
        }
        uVar7 = uVar7 + 1;
      } while ((longlong)uVar7 < (longlong)iVar9);
    }
  }
  _Src = local_88;
  local_a8 = 0;
  uStack_a0 = 0;
  uVar3 = local_c0;
  switch(*(undefined1 *)(param_1 + 0x1c8)) {
  case 0:
    uVar7 = (ulonglong)(int)(uint)uStack_80;
    local_8c = 3.4028235e+38;
    if (0 < (longlong)uVar7) {
      uVar6 = 0;
      fVar12 = 3.4028235e+38;
      do {
        fVar13 = *(float *)((longlong)local_88 + uVar6 * 4);
        if (fVar12 <= fVar13) {
          fVar13 = fVar12;
        }
        uVar6 = uVar6 + 1;
        fVar12 = fVar13;
      } while (uVar7 != uVar6);
      lVar2 = 0;
      do {
        uVar6 = uStack_a0;
        fVar12 = *(float *)((longlong)local_88 + lVar2 * 4);
        if ((fVar12 == fVar13) && (!NAN(fVar12) && !NAN(fVar13))) {
          lVar5 = (longlong)(int)uStack_a0;
          uVar1 = (int)uStack_a0 + 1;
          uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar1);
          if (uStack_a0._4_4_ < uVar1) {
            FUN_1446f48e2(&local_a8,uVar6 & 0xffffffff);
          }
          *(int *)(local_a8 + lVar5 * 4) = (int)lVar2;
          uVar7 = uStack_80 & 0xffffffff;
        }
        lVar2 = lVar2 + 1;
        uVar3 = local_c0;
        local_8c = fVar13;
      } while (lVar2 < (int)uVar7);
    }
    break;
  case 1:
    uVar7 = (ulonglong)(int)(uint)uStack_80;
    local_8c = 1.1754944e-38;
    if (0 < (longlong)uVar7) {
      uVar6 = 0;
      fVar12 = 1.1754944e-38;
      do {
        fVar13 = *(float *)((longlong)local_88 + uVar6 * 4);
        if (fVar13 <= fVar12) {
          fVar13 = fVar12;
        }
        uVar6 = uVar6 + 1;
        fVar12 = fVar13;
      } while (uVar7 != uVar6);
      lVar2 = 0;
      do {
        uVar6 = uStack_a0;
        fVar12 = *(float *)((longlong)local_88 + lVar2 * 4);
        if ((fVar12 == fVar13) && (!NAN(fVar12) && !NAN(fVar13))) {
          lVar5 = (longlong)(int)uStack_a0;
          uVar1 = (int)uStack_a0 + 1;
          uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar1);
          if (uStack_a0._4_4_ < uVar1) {
            FUN_1446f48e2(&local_a8,uVar6 & 0xffffffff);
          }
          *(int *)(local_a8 + lVar5 * 4) = (int)lVar2;
          uVar7 = uStack_80 & 0xffffffff;
        }
        lVar2 = lVar2 + 1;
        uVar3 = local_c0;
        local_8c = fVar13;
      } while (lVar2 < (int)uVar7);
    }
    break;
  case 2:
    fVar12 = 0.0;
    if (0 < (longlong)(int)(uint)uStack_80) {
      lVar2 = 0;
      fVar12 = 0.0;
      do {
        fVar12 = fVar12 + *(float *)((longlong)local_88 + lVar2 * 4);
        lVar2 = lVar2 + 1;
      } while ((int)(uint)uStack_80 != lVar2);
    }
    local_8c = fVar12 / (float)(int)(uint)uStack_80;
    break;
  case 3:
    local_b8 = (void *)0x0;
    lVar2 = (longlong)(int)(uint)uStack_80;
    local_b0 = (uint)uStack_80;
    if (lVar2 == 0) {
      local_ac = 0;
      uVar1 = 0;
    }
    else {
      FUN_1447c510a(&local_b8,uStack_80 & 0xffffffff,0);
      memcpy(local_b8,_Src,lVar2 << 2);
      uVar1 = local_b0;
    }
    uVar3 = local_c0;
    FUN_147166345(local_b8,uVar1);
    uVar7 = uStack_a0;
    if ((local_b0 & 1) == 0) {
      iVar11 = (int)local_b0 >> 1;
      fVar12 = *(float *)((longlong)local_b8 + (longlong)iVar11 * 4 + -4);
      fVar13 = *(float *)((longlong)local_b8 + (longlong)iVar11 * 4);
      lVar2 = (longlong)(int)uStack_a0;
      uVar1 = (int)uStack_a0 + 1;
      uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar1);
      if (uStack_a0._4_4_ < uVar1) {
        FUN_1446f48e2(&local_a8,uVar7 & 0xffffffff);
      }
      fVar12 = (fVar12 + fVar13) * 0.5;
      *(int *)(local_a8 + lVar2 * 4) = iVar11 + -1;
    }
    else {
      iVar11 = (int)(local_b0 - 1) >> 1;
      fVar12 = *(float *)((longlong)local_b8 + (longlong)iVar11 * 4);
    }
    uVar7 = uStack_a0;
    iVar9 = (int)uStack_a0;
    uVar1 = (int)uStack_a0 + 1;
    uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar1);
    if (uStack_a0._4_4_ < uVar1) {
      FUN_1446f48e2(&local_a8,uVar7 & 0xffffffff);
    }
    *(int *)(local_a8 + (longlong)iVar9 * 4) = iVar11;
    local_8c = fVar12;
    if (local_b8 != (void *)0x0) {
      FUN_1400020a8();
    }
    break;
  case 4:
    uVar7 = (ulonglong)(int)(uint)uStack_80;
    fVar12 = 0.0;
    local_8c = fVar12;
    if (0 < (longlong)uVar7) {
      uVar6 = 0;
      iVar11 = 0;
      do {
        fVar13 = *(float *)((longlong)local_88 + uVar6 * 4);
        uVar8 = 0;
        iVar9 = 0;
        do {
          iVar9 = iVar9 + (uint)(*(float *)((longlong)local_88 + uVar8 * 4) == fVar13);
          if (iVar11 < iVar9) {
            iVar11 = iVar9;
            fVar12 = fVar13;
          }
          uVar8 = uVar8 + 1;
        } while (uVar7 != uVar8);
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar7);
      lVar2 = 0;
      do {
        uVar6 = uStack_a0;
        fVar13 = *(float *)((longlong)local_88 + lVar2 * 4);
        if ((fVar13 == fVar12) && (!NAN(fVar13) && !NAN(fVar12))) {
          lVar5 = (longlong)(int)uStack_a0;
          uVar1 = (int)uStack_a0 + 1;
          uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar1);
          if (uStack_a0._4_4_ < uVar1) {
            FUN_1446f48e2(&local_a8,uVar6 & 0xffffffff);
          }
          *(int *)(local_a8 + lVar5 * 4) = (int)lVar2;
          uVar7 = uStack_80 & 0xffffffff;
        }
        lVar2 = lVar2 + 1;
        uVar3 = local_c0;
        local_8c = fVar12;
      } while (lVar2 < (int)uVar7);
    }
    break;
  case 5:
    if ((longlong)(int)(uint)uStack_80 < 1) {
      local_8c = 0.0;
    }
    else {
      local_8c = 0.0;
      lVar2 = 0;
      do {
        local_8c = local_8c + *(float *)((longlong)local_88 + lVar2 * 4);
        lVar2 = lVar2 + 1;
      } while ((int)(uint)uStack_80 != lVar2);
    }
  }
  local_70 = 0xffffffff;
  local_68 = 0;
  local_78 = param_1 + 0x1cc;
  lVar2 = FUN_146fb78aa(param_1);
  if (lVar2 != 0) {
    FUN_1496fe392(lVar2,&local_8c,uVar3);
  }
  local_78 = param_1 + 0x1d0;
  local_70 = 0xffffffff;
  local_68 = 0;
  lVar2 = FUN_146fb78aa(param_1);
  if (lVar2 != 0) {
    FUN_14972b2b6(lVar2,&local_a8,uVar3);
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_14971b57e:
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14971bb1e FUN_14971bb1e body=674 status=ok
// SIG undefined FUN_14971bb1e(void)

void FUN_14971bb1e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  float fVar1;
  float fVar2;
  void *_Src;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  float *pfVar8;
  uint *puVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined8 uStack_b0;
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  longlong local_98;
  undefined4 local_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar10 = param_1 + 0x198;
  lVar5 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar5 == lVar10) {
    local_90 = 0xffffffff;
    local_88 = 0;
    local_98 = lVar10;
    uVar6 = FUN_146fb4872(param_1,&local_98);
    puVar7 = (undefined8 *)FUN_14972668e(uVar6,param_2,local_98);
    local_a8 = (void *)0x0;
    local_a0 = *(int *)(puVar7 + 1);
    lVar5 = (longlong)local_a0;
    _Src = (void *)*puVar7;
    if (lVar5 == 0) {
      local_9c = 0;
    }
    else {
      FUN_1447c510a(&local_a8,local_a0,0);
      memcpy(local_a8,_Src,lVar5 << 2);
    }
    local_98 = param_1 + 0x1a8;
    local_90 = 0xffffffff;
    local_88 = 0;
    uVar6 = FUN_146fb4872(param_1,&local_98);
    pfVar8 = (float *)FUN_14972a54c(uVar6,param_2,local_98);
    fVar1 = *pfVar8;
    local_98 = param_1 + 0x1ac;
    local_90 = 0xffffffff;
    local_88 = 0;
    uVar6 = FUN_146fb4872(param_1,&local_98);
    pfVar8 = (float *)FUN_14972a54c(uVar6,param_2,local_98);
    fVar2 = *pfVar8;
    local_98 = param_1 + 0x1b0;
    local_90 = 0xffffffff;
    local_88 = 0;
    uVar6 = FUN_146fb4872(param_1,&local_98);
    puVar9 = (uint *)FUN_146fca67a(uVar6,param_2,local_98);
    iVar11 = local_a0;
    uVar12 = *puVar9;
    local_b8 = 0;
    uStack_b0 = 0;
    if (0 < local_a0) {
      FUN_14482f6fa(&local_b8,local_a0);
      do {
        uVar3 = uStack_b0;
        uVar12 = uVar12 * 0xbb38435 + 0x3619636b;
        lVar5 = (longlong)(int)uStack_b0;
        uVar4 = (int)uStack_b0 + 1;
        uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar4);
        if (uStack_b0._4_4_ < uVar4) {
          FUN_14475e4ac(&local_b8,uVar3 & 0xffffffff);
        }
        *(float *)(local_b8 + lVar5 * 4) =
             ((float)(uVar12 >> 9 | 0x3f800000) + -1.0) * (fVar2 - fVar1) + fVar1;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    local_90 = 0xffffffff;
    local_88 = 0;
    local_98 = lVar10;
    lVar10 = FUN_146fb78aa(param_1);
    if (lVar10 != 0) {
      FUN_14972a684(lVar10,&local_b8,param_2);
    }
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    if (local_a8 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_80 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


