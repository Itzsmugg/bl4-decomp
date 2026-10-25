// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 149764c60 FUN_149764c60 body=40 status=ok
// SIG undefined FUN_149764c60(void)

void FUN_149764c60(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x370) == '\x01') {
    FUN_14976508e(param_2);
    *(undefined1 *)(param_2 + 0x370) = 0;
  }
  return;
}



// FUNCTION 149764cd6 FUN_149764cd6 body=260 status=ok
// SIG undefined FUN_149764cd6(void)

undefined8 * FUN_149764cd6(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_146fc02b8();
  *param_1 = &PTR_FUN_14be4fa00;
  FUN_1414db454(param_1 + 0x33);
  param_1[0x52] = 0;
  param_1[0x53] = 0x8000000000;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x54;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x60] = 0;
  *(undefined1 *)(param_1 + 0x61) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30c) = 0;
  *(undefined1 *)(param_1 + 0x62) = 0;
  *(undefined8 *)((longlong)param_1 + 0x314) = 0x20000000a;
  *(undefined1 **)((longlong)param_1 + 0x31c) = &DAT_200000002;
  *(undefined8 *)((longlong)param_1 + 0x324) = 0x3f00000000000000;
  *(undefined4 *)((longlong)param_1 + 0x32c) = 0x3fc00000;
  *(undefined1 *)(param_1 + 0x66) = 1;
  *(undefined8 *)((longlong)param_1 + 0x334) = 0x4334000043340000;
  *(undefined8 *)((longlong)param_1 + 0x33c) = 0x43340000;
  *(undefined4 *)((longlong)param_1 + 0x344) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x69) = 1;
  *(undefined4 *)((longlong)param_1 + 0x34c) = 0x42480000;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0x8000000000;
  return param_1;
}



// FUNCTION 149764dda FUN_149764dda body=38 status=ok
// SIG undefined FUN_149764dda(void)

undefined8 FUN_149764dda(undefined8 param_1,int param_2)

{
  FUN_14976508e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149764e00 FUN_149764e00 body=38 status=ok
// SIG undefined FUN_149764e00(void)

undefined8 FUN_149764e00(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FMeshCutterDataflowNode",1);
  return param_2;
}



// FUNCTION 149764e26 FUN_149764e26 body=38 status=ok
// SIG undefined FUN_149764e26(void)

undefined8 FUN_149764e26(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"MeshCutter",1);
  return param_2;
}



// FUNCTION 149764e4c FUN_149764e4c body=38 status=ok
// SIG undefined FUN_149764e4c(void)

undefined8 FUN_149764e4c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Fracture",1);
  return param_2;
}



// FUNCTION 149764e72 FUN_149764e72 body=32 status=ok
// SIG undefined FUN_149764e72(void)

undefined8 FUN_149764e72(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149764e92 FUN_149764e92 body=123 status=ok
// SIG undefined FUN_149764e92(void)

void FUN_149764e92(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24fe8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24fe8 = FUN_140002ddd(FUN_146753a89,uVar1,L"MeshCutterDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24fe8,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149764f0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149764f0e FUN_149764f0e body=93 status=ok
// SIG undefined FUN_149764f0e(void)

void FUN_149764f0e(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24fe8 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24fe8 = FUN_140002ddd(FUN_146753a89,uVar2,L"MeshCutterDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24fe8,param_1);
  return;
}



// FUNCTION 149764f6c FUN_149764f6c body=55 status=ok
// SIG undefined FUN_149764f6c(void)

void FUN_149764f6c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24fe8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24fe8 = FUN_140002ddd(FUN_146753a89,uVar1,L"MeshCutterDataflowNode");
  }
  return;
}



// FUNCTION 149764fa4 FUN_149764fa4 body=233 status=ok
// SIG undefined FUN_149764fa4(void)

ulonglong FUN_149764fa4(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FMeshCutterDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14976503e;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14976503e;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14976503e;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14976503e:
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



// FUNCTION 14976508e FUN_14976508e body=77 status=ok
// SIG undefined FUN_14976508e(void)

void FUN_14976508e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be4fa00;
  if (param_1[0x6c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 1497650dc FUN_1497650dc body=239 status=ok
// SIG undefined FUN_1497650dc(void)

longlong FUN_1497650dc(longlong param_1,longlong param_2)

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
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  uVar1 = *(undefined4 *)(param_2 + 0x24c);
  uVar2 = *(undefined4 *)(param_2 + 0x250);
  uVar3 = *(undefined4 *)(param_2 + 0x254);
  uVar4 = *(undefined4 *)(param_2 + 600);
  uVar5 = *(undefined4 *)(param_2 + 0x25c);
  uVar6 = *(undefined4 *)(param_2 + 0x260);
  uVar7 = *(undefined4 *)(param_2 + 0x264);
  uVar8 = *(undefined4 *)(param_2 + 0x268);
  uVar9 = *(undefined4 *)(param_2 + 0x26c);
  uVar10 = *(undefined4 *)(param_2 + 0x270);
  uVar11 = *(undefined4 *)(param_2 + 0x274);
  *(undefined4 *)(param_1 + 0x248) = *(undefined4 *)(param_2 + 0x248);
  *(undefined4 *)(param_1 + 0x24c) = uVar1;
  *(undefined4 *)(param_1 + 0x250) = uVar2;
  *(undefined4 *)(param_1 + 0x254) = uVar3;
  *(undefined4 *)(param_1 + 600) = uVar4;
  *(undefined4 *)(param_1 + 0x25c) = uVar5;
  *(undefined4 *)(param_1 + 0x260) = uVar6;
  *(undefined4 *)(param_1 + 0x264) = uVar7;
  *(undefined4 *)(param_1 + 0x268) = uVar8;
  *(undefined4 *)(param_1 + 0x26c) = uVar9;
  *(undefined4 *)(param_1 + 0x270) = uVar10;
  *(undefined4 *)(param_1 + 0x274) = uVar11;
  *(undefined8 *)(param_1 + 0x278) = *(undefined8 *)(param_2 + 0x278);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x280,param_2 + 0x280);
  }
  puVar13 = (undefined8 *)(param_2 + 0x2a0);
  puVar14 = (undefined8 *)(param_1 + 0x2a0);
  for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar14 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar14 = puVar14 + 1;
  }
  lVar12 = *(longlong *)(param_2 + 0x300);
  if (DAT_14c950c29 == '\x01') {
    if (lVar12 == 0) {
      lVar12 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar12 = *(longlong *)(param_2 + 0x300);
    }
  }
  *(longlong *)(param_1 + 0x300) = lVar12;
  puVar13 = (undefined8 *)(param_2 + 0x308);
  puVar14 = (undefined8 *)(param_1 + 0x308);
  for (lVar12 = 9; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar14 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar14 = puVar14 + 1;
  }
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x350,param_2 + 0x350);
  }
  return param_1;
}



// FUNCTION 1497651cc FUN_1497651cc body=61 status=ok
// SIG undefined FUN_1497651cc(void)

void FUN_1497651cc(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be4fca0;
  FUN_1400b22c2(param_2 + 0x33,&DAT_149e02088);
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  return;
}



// FUNCTION 14976520a FUN_14976520a body=61 status=ok
// SIG undefined FUN_14976520a(void)

void FUN_14976520a(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be4fca0;
  FUN_1400b22c2(param_2 + 0x33,&DAT_149e02088);
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  return;
}



// FUNCTION 14976526c FUN_14976526c body=108 status=ok
// SIG undefined FUN_14976526c(void)

undefined1 FUN_14976526c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    FUN_144a787a6(param_2 + 0x198,param_3 + 0x198);
    FUN_144a787a6(param_2 + 0x1a8,param_3 + 0x1a8);
    param_2 = param_2 + 0x1b8;
    param_3 = param_3 + 0x1b8;
  }
  return 1;
}



// FUNCTION 149765300 FUN_149765300 body=59 status=ok
// SIG undefined FUN_149765300(void)

undefined8 FUN_149765300(longlong *param_1)

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



// FUNCTION 14976534c FUN_14976534c body=40 status=ok
// SIG undefined FUN_14976534c(void)

void FUN_14976534c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1b8) == '\x01') {
    FUN_149765676(param_2);
    *(undefined1 *)(param_2 + 0x1b8) = 0;
  }
  return;
}



// FUNCTION 1497653c2 FUN_1497653c2 body=38 status=ok
// SIG undefined FUN_1497653c2(void)

undefined8 FUN_1497653c2(undefined8 param_1,int param_2)

{
  FUN_149765676();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497653e8 FUN_1497653e8 body=38 status=ok
// SIG undefined FUN_1497653e8(void)

undefined8 FUN_1497653e8(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FMakeLiteralStringDataflowNode",1);
  return param_2;
}



// FUNCTION 14976540e FUN_14976540e body=38 status=ok
// SIG undefined FUN_14976540e(void)

undefined8 FUN_14976540e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"MakeLiteralString",1);
  return param_2;
}



// FUNCTION 149765434 FUN_149765434 body=38 status=ok
// SIG undefined FUN_149765434(void)

undefined8 FUN_149765434(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Utilities|String",1);
  return param_2;
}



// FUNCTION 14976545a FUN_14976545a body=32 status=ok
// SIG undefined FUN_14976545a(void)

undefined8 FUN_14976545a(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14976547a FUN_14976547a body=123 status=ok
// SIG undefined FUN_14976547a(void)

void FUN_14976547a(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25000 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25000 = FUN_140002ddd(FUN_146753b1f,uVar1,L"MakeLiteralStringDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25000,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001497654f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 1497654f6 FUN_1497654f6 body=93 status=ok
// SIG undefined FUN_1497654f6(void)

void FUN_1497654f6(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25000 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25000 = FUN_140002ddd(FUN_146753b1f,uVar2,L"MakeLiteralStringDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25000,param_1);
  return;
}



// FUNCTION 149765554 FUN_149765554 body=55 status=ok
// SIG undefined FUN_149765554(void)

void FUN_149765554(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25000 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25000 = FUN_140002ddd(FUN_146753b1f,uVar1,L"MakeLiteralStringDataflowNode");
  }
  return;
}



// FUNCTION 14976558c FUN_14976558c body=233 status=ok
// SIG undefined FUN_14976558c(void)

ulonglong FUN_14976558c(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FMakeLiteralStringDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149765626;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149765626;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149765626;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149765626:
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



// FUNCTION 149765676 FUN_149765676 body=65 status=ok
// SIG undefined FUN_149765676(void)

void FUN_149765676(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be4fca0;
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 1497656b8 FUN_1497656b8 body=49 status=ok
// SIG undefined FUN_1497656b8(void)

void FUN_1497656b8(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be4ff30;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  return;
}



// FUNCTION 1497656ea FUN_1497656ea body=49 status=ok
// SIG undefined FUN_1497656ea(void)

void FUN_1497656ea(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be4ff30;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  return;
}



// FUNCTION 149765740 FUN_149765740 body=108 status=ok
// SIG undefined FUN_149765740(void)

undefined1 FUN_149765740(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    FUN_1405b70a4(param_2 + 0x198,param_3 + 0x198);
    FUN_1405b70a4(param_2 + 0x1a8,param_3 + 0x1a8);
    param_2 = param_2 + 0x1b8;
    param_3 = param_3 + 0x1b8;
  }
  return 1;
}



// FUNCTION 1497657d4 FUN_1497657d4 body=59 status=ok
// SIG undefined FUN_1497657d4(void)

undefined8 FUN_1497657d4(longlong *param_1)

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



// FUNCTION 149765820 FUN_149765820 body=40 status=ok
// SIG undefined FUN_149765820(void)

void FUN_149765820(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1b8) == '\x01') {
    FUN_149765b4a(param_2);
    *(undefined1 *)(param_2 + 0x1b8) = 0;
  }
  return;
}



// FUNCTION 149765896 FUN_149765896 body=38 status=ok
// SIG undefined FUN_149765896(void)

undefined8 FUN_149765896(undefined8 param_1,int param_2)

{
  FUN_149765b4a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497658bc FUN_1497658bc body=38 status=ok
// SIG undefined FUN_1497658bc(void)

undefined8 FUN_1497658bc(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FMakePointsDataflowNode",1);
  return param_2;
}



// FUNCTION 1497658e2 FUN_1497658e2 body=38 status=ok
// SIG undefined FUN_1497658e2(void)

undefined8 FUN_1497658e2(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"MakePoints",1);
  return param_2;
}



// FUNCTION 149765908 FUN_149765908 body=38 status=ok
// SIG undefined FUN_149765908(void)

undefined8 FUN_149765908(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Generators|Point",1);
  return param_2;
}



// FUNCTION 14976592e FUN_14976592e body=32 status=ok
// SIG undefined FUN_14976592e(void)

undefined8 FUN_14976592e(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14976594e FUN_14976594e body=123 status=ok
// SIG undefined FUN_14976594e(void)

void FUN_14976594e(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25018 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25018 = FUN_140002ddd(FUN_146753bb5,uVar1,L"MakePointsDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25018,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001497659c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 1497659ca FUN_1497659ca body=93 status=ok
// SIG undefined FUN_1497659ca(void)

void FUN_1497659ca(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25018 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25018 = FUN_140002ddd(FUN_146753bb5,uVar2,L"MakePointsDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25018,param_1);
  return;
}



// FUNCTION 149765a28 FUN_149765a28 body=55 status=ok
// SIG undefined FUN_149765a28(void)

void FUN_149765a28(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25018 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25018 = FUN_140002ddd(FUN_146753bb5,uVar1,L"MakePointsDataflowNode");
  }
  return;
}



// FUNCTION 149765a60 FUN_149765a60 body=233 status=ok
// SIG undefined FUN_149765a60(void)

ulonglong FUN_149765a60(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FMakePointsDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149765afa;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149765afa;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149765afa;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149765afa:
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



// FUNCTION 149765b4a FUN_149765b4a body=65 status=ok
// SIG undefined FUN_149765b4a(void)

void FUN_149765b4a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be4ff30;
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 149765b8c FUN_149765b8c body=150 status=ok
// SIG undefined FUN_149765b8c(void)

void FUN_149765b8c(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be50290;
  *(undefined1 *)(param_2 + 0x33) = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0x4024000000000000;
  param_2[0x38] = 0x4024000000000000;
  param_2[0x39] = 0x4024000000000000;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0x4024000000000000;
  param_2[0x3e] = 0x4024000000000000;
  param_2[0x3f] = 0x4024000000000000;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  param_2[0x42] = 0;
  param_2[0x43] = 0;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  *(undefined1 *)(param_2 + 0x46) = 0;
  return;
}



// FUNCTION 149765c22 FUN_149765c22 body=150 status=ok
// SIG undefined FUN_149765c22(void)

void FUN_149765c22(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be50290;
  *(undefined1 *)(param_2 + 0x33) = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0x4024000000000000;
  param_2[0x38] = 0x4024000000000000;
  param_2[0x39] = 0x4024000000000000;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0x4024000000000000;
  param_2[0x3e] = 0x4024000000000000;
  param_2[0x3f] = 0x4024000000000000;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  param_2[0x42] = 0;
  param_2[0x43] = 0;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  *(undefined1 *)(param_2 + 0x46) = 0;
  return;
}



// FUNCTION 149765cdc FUN_149765cdc body=91 status=ok
// SIG undefined FUN_149765cdc(void)

undefined8 FUN_149765cdc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    memcpy((void *)(param_2 + 0x198),(void *)(param_3 + 0x198),0xa0);
    param_2 = param_2 + 0x238;
    param_3 = param_3 + 0x238;
  }
  return 1;
}



// FUNCTION 149765d60 FUN_149765d60 body=59 status=ok
// SIG undefined FUN_149765d60(void)

undefined8 FUN_149765d60(longlong *param_1)

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



// FUNCTION 149765dac FUN_149765dac body=40 status=ok
// SIG undefined FUN_149765dac(void)

void FUN_149765dac(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x238) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x238) = 0;
  }
  return;
}



// FUNCTION 149765e22 FUN_149765e22 body=38 status=ok
// SIG undefined FUN_149765e22(void)

undefined8 FUN_149765e22(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149765e48 FUN_149765e48 body=38 status=ok
// SIG undefined FUN_149765e48(void)

undefined8 FUN_149765e48(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FMakeBoxDataflowNode",1);
  return param_2;
}



// FUNCTION 149765e6e FUN_149765e6e body=38 status=ok
// SIG undefined FUN_149765e6e(void)

undefined8 FUN_149765e6e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"MakeBox",1);
  return param_2;
}



// FUNCTION 149765e94 FUN_149765e94 body=38 status=ok
// SIG undefined FUN_149765e94(void)

undefined8 FUN_149765e94(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Generators|Box",1);
  return param_2;
}



// FUNCTION 149765eba FUN_149765eba body=32 status=ok
// SIG undefined FUN_149765eba(void)

undefined8 FUN_149765eba(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149765eda FUN_149765eda body=123 status=ok
// SIG undefined FUN_149765eda(void)

void FUN_149765eda(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25048 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25048 = FUN_140002ddd(FUN_146753c7b,uVar1,L"MakeBoxDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25048,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149765f52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149765f56 FUN_149765f56 body=93 status=ok
// SIG undefined FUN_149765f56(void)

void FUN_149765f56(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25048 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25048 = FUN_140002ddd(FUN_146753c7b,uVar2,L"MakeBoxDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25048,param_1);
  return;
}



// FUNCTION 149765fb4 FUN_149765fb4 body=55 status=ok
// SIG undefined FUN_149765fb4(void)

void FUN_149765fb4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25048 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25048 = FUN_140002ddd(FUN_146753c7b,uVar1,L"MakeBoxDataflowNode");
  }
  return;
}



// FUNCTION 149765fec FUN_149765fec body=233 status=ok
// SIG undefined FUN_149765fec(void)

ulonglong FUN_149765fec(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FMakeBoxDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149766086;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149766086;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149766086;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149766086:
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



// FUNCTION 1497660d6 FUN_1497660d6 body=323 status=ok
// SIG undefined FUN_1497660d6(void)

undefined8 * FUN_1497660d6(undefined8 param_1,undefined8 *param_2)

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
  FUN_1446ddc76(&local_48,&DAT_149e3b538,1);
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



// FUNCTION 14976621c FUN_14976621c body=77 status=ok
// SIG undefined FUN_14976621c(void)

void FUN_14976621c(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be50530;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  *(undefined4 *)(param_2 + 0x36) = 0x41200000;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  return;
}



// FUNCTION 14976626a FUN_14976626a body=77 status=ok
// SIG undefined FUN_14976626a(void)

void FUN_14976626a(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be50530;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  *(undefined4 *)(param_2 + 0x36) = 0x41200000;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  return;
}



// FUNCTION 1497662dc FUN_1497662dc body=118 status=ok
// SIG undefined FUN_1497662dc(void)

undefined1 FUN_1497662dc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
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
    uVar12 = *(undefined4 *)(param_3 + 0x1c8);
    uVar13 = *(undefined4 *)(param_3 + 0x1cc);
    uVar14 = *(undefined4 *)(param_3 + 0x1d0);
    uVar15 = *(undefined4 *)(param_3 + 0x1d4);
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
    *(undefined4 *)(param_2 + 0x1c8) = uVar12;
    *(undefined4 *)(param_2 + 0x1cc) = uVar13;
    *(undefined4 *)(param_2 + 0x1d0) = uVar14;
    *(undefined4 *)(param_2 + 0x1d4) = uVar15;
    param_2 = param_2 + 0x1d8;
    param_3 = param_3 + 0x1d8;
  }
  return 1;
}



// FUNCTION 14976637a FUN_14976637a body=59 status=ok
// SIG undefined FUN_14976637a(void)

undefined8 FUN_14976637a(longlong *param_1)

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



// FUNCTION 1497663c6 FUN_1497663c6 body=40 status=ok
// SIG undefined FUN_1497663c6(void)

void FUN_1497663c6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1d8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1d8) = 0;
  }
  return;
}



// FUNCTION 14976643c FUN_14976643c body=38 status=ok
// SIG undefined FUN_14976643c(void)

undefined8 FUN_14976643c(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149766462 FUN_149766462 body=38 status=ok
// SIG undefined FUN_149766462(void)

undefined8 FUN_149766462(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FMakeSphereDataflowNode",1);
  return param_2;
}



// FUNCTION 149766488 FUN_149766488 body=38 status=ok
// SIG undefined FUN_149766488(void)

undefined8 FUN_149766488(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"MakeSphere",1);
  return param_2;
}



// FUNCTION 1497664ae FUN_1497664ae body=38 status=ok
// SIG undefined FUN_1497664ae(void)

undefined8 FUN_1497664ae(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Generators|Sphere",1);
  return param_2;
}



// FUNCTION 1497664d4 FUN_1497664d4 body=32 status=ok
// SIG undefined FUN_1497664d4(void)

undefined8 FUN_1497664d4(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 1497664f4 FUN_1497664f4 body=123 status=ok
// SIG undefined FUN_1497664f4(void)

void FUN_1497664f4(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25060 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25060 = FUN_140002ddd(FUN_146753d11,uVar1,L"MakeSphereDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25060,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014976656c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149766570 FUN_149766570 body=93 status=ok
// SIG undefined FUN_149766570(void)

void FUN_149766570(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25060 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25060 = FUN_140002ddd(FUN_146753d11,uVar2,L"MakeSphereDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25060,param_1);
  return;
}



// FUNCTION 1497665ce FUN_1497665ce body=55 status=ok
// SIG undefined FUN_1497665ce(void)

void FUN_1497665ce(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25060 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25060 = FUN_140002ddd(FUN_146753d11,uVar1,L"MakeSphereDataflowNode");
  }
  return;
}



// FUNCTION 149766606 FUN_149766606 body=233 status=ok
// SIG undefined FUN_149766606(void)

ulonglong FUN_149766606(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FMakeSphereDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_1497666a0;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1497666a0;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_1497666a0;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_1497666a0:
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



// FUNCTION 1497666f2 FUN_1497666f2 body=43 status=ok
// SIG undefined FUN_1497666f2(void)

void FUN_1497666f2(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be507e0;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 14976671e FUN_14976671e body=43 status=ok
// SIG undefined FUN_14976671e(void)

void FUN_14976671e(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be507e0;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 14976676e FUN_14976676e body=76 status=ok
// SIG undefined FUN_14976676e(void)

undefined8 FUN_14976676e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    *(undefined8 *)(param_2 + 0x198) = *(undefined8 *)(param_3 + 0x198);
    param_2 = param_2 + 0x1a0;
    param_3 = param_3 + 0x1a0;
  }
  return 1;
}



// FUNCTION 1497667e2 FUN_1497667e2 body=59 status=ok
// SIG undefined FUN_1497667e2(void)

undefined8 FUN_1497667e2(longlong *param_1)

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



// FUNCTION 14976682e FUN_14976682e body=40 status=ok
// SIG undefined FUN_14976682e(void)

void FUN_14976682e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a0) = 0;
  }
  return;
}



// FUNCTION 1497668a4 FUN_1497668a4 body=38 status=ok
// SIG undefined FUN_1497668a4(void)

undefined8 FUN_1497668a4(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497668ca FUN_1497668ca body=38 status=ok
// SIG undefined FUN_1497668ca(void)

undefined8 FUN_1497668ca(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FMakeLiteralFloatDataflowNode",1);
  return param_2;
}



// FUNCTION 1497668f0 FUN_1497668f0 body=38 status=ok
// SIG undefined FUN_1497668f0(void)

undefined8 FUN_1497668f0(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"MakeLiteralFloat",1);
  return param_2;
}



// FUNCTION 149766916 FUN_149766916 body=38 status=ok
// SIG undefined FUN_149766916(void)

undefined8 FUN_149766916(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Float",1);
  return param_2;
}



// FUNCTION 14976693c FUN_14976693c body=32 status=ok
// SIG undefined FUN_14976693c(void)

undefined8 FUN_14976693c(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14976695c FUN_14976695c body=123 status=ok
// SIG undefined FUN_14976695c(void)

void FUN_14976695c(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25078 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25078 = FUN_140002ddd(FUN_146753da7,uVar1,L"MakeLiteralFloatDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25078,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001497669d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 1497669d8 FUN_1497669d8 body=93 status=ok
// SIG undefined FUN_1497669d8(void)

void FUN_1497669d8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25078 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25078 = FUN_140002ddd(FUN_146753da7,uVar2,L"MakeLiteralFloatDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25078,param_1);
  return;
}



// FUNCTION 149766a36 FUN_149766a36 body=55 status=ok
// SIG undefined FUN_149766a36(void)

void FUN_149766a36(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25078 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25078 = FUN_140002ddd(FUN_146753da7,uVar1,L"MakeLiteralFloatDataflowNode");
  }
  return;
}



// FUNCTION 149766a6e FUN_149766a6e body=233 status=ok
// SIG undefined FUN_149766a6e(void)

ulonglong FUN_149766a6e(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FMakeLiteralFloatDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149766b08;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149766b08;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149766b08;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149766b08:
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



// FUNCTION 149766b5a FUN_149766b5a body=43 status=ok
// SIG undefined FUN_149766b5a(void)

void FUN_149766b5a(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be50a80;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 149766b86 FUN_149766b86 body=43 status=ok
// SIG undefined FUN_149766b86(void)

void FUN_149766b86(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be50a80;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 149766bd6 FUN_149766bd6 body=76 status=ok
// SIG undefined FUN_149766bd6(void)

undefined8 FUN_149766bd6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    *(undefined8 *)(param_2 + 0x198) = *(undefined8 *)(param_3 + 0x198);
    param_2 = param_2 + 0x1a0;
    param_3 = param_3 + 0x1a0;
  }
  return 1;
}



// FUNCTION 149766c4a FUN_149766c4a body=59 status=ok
// SIG undefined FUN_149766c4a(void)

undefined8 FUN_149766c4a(longlong *param_1)

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



// FUNCTION 149766c96 FUN_149766c96 body=40 status=ok
// SIG undefined FUN_149766c96(void)

void FUN_149766c96(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a0) = 0;
  }
  return;
}



// FUNCTION 149766d0c FUN_149766d0c body=38 status=ok
// SIG undefined FUN_149766d0c(void)

undefined8 FUN_149766d0c(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149766d32 FUN_149766d32 body=38 status=ok
// SIG undefined FUN_149766d32(void)

undefined8 FUN_149766d32(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FMakeLiteralIntDataflowNode",1);
  return param_2;
}



// FUNCTION 149766d58 FUN_149766d58 body=38 status=ok
// SIG undefined FUN_149766d58(void)

undefined8 FUN_149766d58(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"MakeLiteralInt",1);
  return param_2;
}



// FUNCTION 149766d7e FUN_149766d7e body=38 status=ok
// SIG undefined FUN_149766d7e(void)

undefined8 FUN_149766d7e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Int",1);
  return param_2;
}



// FUNCTION 149766da4 FUN_149766da4 body=32 status=ok
// SIG undefined FUN_149766da4(void)

undefined8 FUN_149766da4(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149766dc4 FUN_149766dc4 body=123 status=ok
// SIG undefined FUN_149766dc4(void)

void FUN_149766dc4(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25090 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25090 = FUN_140002ddd(FUN_146753e3d,uVar1,L"MakeLiteralIntDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25090,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149766e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149766e40 FUN_149766e40 body=93 status=ok
// SIG undefined FUN_149766e40(void)

void FUN_149766e40(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25090 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25090 = FUN_140002ddd(FUN_146753e3d,uVar2,L"MakeLiteralIntDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25090,param_1);
  return;
}



// FUNCTION 149766e9e FUN_149766e9e body=55 status=ok
// SIG undefined FUN_149766e9e(void)

void FUN_149766e9e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25090 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25090 = FUN_140002ddd(FUN_146753e3d,uVar1,L"MakeLiteralIntDataflowNode");
  }
  return;
}



// FUNCTION 149766ed6 FUN_149766ed6 body=233 status=ok
// SIG undefined FUN_149766ed6(void)

ulonglong FUN_149766ed6(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FMakeLiteralIntDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149766f70;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149766f70;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149766f70;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149766f70:
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



// FUNCTION 149766fc2 FUN_149766fc2 body=41 status=ok
// SIG undefined FUN_149766fc2(void)

void FUN_149766fc2(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be50d20;
  *(undefined2 *)(param_2 + 0x33) = 0;
  return;
}



// FUNCTION 149766fec FUN_149766fec body=41 status=ok
// SIG undefined FUN_149766fec(void)

void FUN_149766fec(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be50d20;
  *(undefined2 *)(param_2 + 0x33) = 0;
  return;
}



// FUNCTION 14976703a FUN_14976703a body=76 status=ok
// SIG undefined FUN_14976703a(void)

undefined8 FUN_14976703a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    *(undefined2 *)(param_2 + 0x198) = *(undefined2 *)(param_3 + 0x198);
    param_2 = param_2 + 0x1a0;
    param_3 = param_3 + 0x1a0;
  }
  return 1;
}



// FUNCTION 1497670ae FUN_1497670ae body=59 status=ok
// SIG undefined FUN_1497670ae(void)

undefined8 FUN_1497670ae(longlong *param_1)

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



// FUNCTION 1497670fa FUN_1497670fa body=40 status=ok
// SIG undefined FUN_1497670fa(void)

void FUN_1497670fa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a0) = 0;
  }
  return;
}



// FUNCTION 149767170 FUN_149767170 body=38 status=ok
// SIG undefined FUN_149767170(void)

undefined8 FUN_149767170(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149767196 FUN_149767196 body=38 status=ok
// SIG undefined FUN_149767196(void)

undefined8 FUN_149767196(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FMakeLiteralBoolDataflowNode",1);
  return param_2;
}



// FUNCTION 1497671bc FUN_1497671bc body=38 status=ok
// SIG undefined FUN_1497671bc(void)

undefined8 FUN_1497671bc(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"MakeLiteralBool",1);
  return param_2;
}



// FUNCTION 1497671e2 FUN_1497671e2 body=38 status=ok
// SIG undefined FUN_1497671e2(void)

undefined8 FUN_1497671e2(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Boolean",1);
  return param_2;
}



// FUNCTION 149767208 FUN_149767208 body=32 status=ok
// SIG undefined FUN_149767208(void)

undefined8 FUN_149767208(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149767228 FUN_149767228 body=123 status=ok
// SIG undefined FUN_149767228(void)

void FUN_149767228(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc250a8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc250a8 = FUN_140002ddd(FUN_146753ed3,uVar1,L"MakeLiteralBoolDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc250a8,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001497672a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 1497672a4 FUN_1497672a4 body=93 status=ok
// SIG undefined FUN_1497672a4(void)

void FUN_1497672a4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc250a8 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc250a8 = FUN_140002ddd(FUN_146753ed3,uVar2,L"MakeLiteralBoolDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc250a8,param_1);
  return;
}



// FUNCTION 149767302 FUN_149767302 body=55 status=ok
// SIG undefined FUN_149767302(void)

void FUN_149767302(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc250a8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc250a8 = FUN_140002ddd(FUN_146753ed3,uVar1,L"MakeLiteralBoolDataflowNode");
  }
  return;
}



// FUNCTION 14976733a FUN_14976733a body=233 status=ok
// SIG undefined FUN_14976733a(void)

ulonglong FUN_14976733a(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FMakeLiteralBoolDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_1497673d4;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1497673d4;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_1497673d4;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_1497673d4:
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



// FUNCTION 149767426 FUN_149767426 body=68 status=ok
// SIG undefined FUN_149767426(void)

void FUN_149767426(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be50fc0;
  param_2[0x33] = 0;
  *(undefined4 *)(param_2 + 0x34) = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  return;
}



// FUNCTION 14976746a FUN_14976746a body=68 status=ok
// SIG undefined FUN_14976746a(void)

void FUN_14976746a(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be50fc0;
  param_2[0x33] = 0;
  *(undefined4 *)(param_2 + 0x34) = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  return;
}



// FUNCTION 1497674d2 FUN_1497674d2 body=104 status=ok
// SIG undefined FUN_1497674d2(void)

undefined8 FUN_1497674d2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
    *(undefined8 *)(param_2 + 0x1b8) = *(undefined8 *)(param_3 + 0x1b8);
    param_2 = param_2 + 0x1c0;
    param_3 = param_3 + 0x1c0;
  }
  return 1;
}



// FUNCTION 149767562 FUN_149767562 body=59 status=ok
// SIG undefined FUN_149767562(void)

undefined8 FUN_149767562(longlong *param_1)

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



// FUNCTION 1497675ae FUN_1497675ae body=40 status=ok
// SIG undefined FUN_1497675ae(void)

void FUN_1497675ae(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1c0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1c0) = 0;
  }
  return;
}



// FUNCTION 149767624 FUN_149767624 body=38 status=ok
// SIG undefined FUN_149767624(void)

undefined8 FUN_149767624(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14976764a FUN_14976764a body=38 status=ok
// SIG undefined FUN_14976764a(void)

undefined8 FUN_14976764a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FMakeLiteralVectorDataflowNode",1);
  return param_2;
}



// FUNCTION 149767670 FUN_149767670 body=38 status=ok
// SIG undefined FUN_149767670(void)

undefined8 FUN_149767670(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"MakeLiteralVector",1);
  return param_2;
}



// FUNCTION 149767696 FUN_149767696 body=38 status=ok
// SIG undefined FUN_149767696(void)

undefined8 FUN_149767696(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Vector",1);
  return param_2;
}



// FUNCTION 1497676bc FUN_1497676bc body=32 status=ok
// SIG undefined FUN_1497676bc(void)

undefined8 FUN_1497676bc(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 1497676dc FUN_1497676dc body=123 status=ok
// SIG undefined FUN_1497676dc(void)

void FUN_1497676dc(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc250c0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc250c0 = FUN_140002ddd(FUN_146753f69,uVar1,L"MakeLiteralVectorDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc250c0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149767754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149767758 FUN_149767758 body=93 status=ok
// SIG undefined FUN_149767758(void)

void FUN_149767758(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc250c0 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc250c0 = FUN_140002ddd(FUN_146753f69,uVar2,L"MakeLiteralVectorDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc250c0,param_1);
  return;
}



// FUNCTION 1497677b6 FUN_1497677b6 body=55 status=ok
// SIG undefined FUN_1497677b6(void)

void FUN_1497677b6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc250c0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc250c0 = FUN_140002ddd(FUN_146753f69,uVar1,L"MakeLiteralVectorDataflowNode");
  }
  return;
}



// FUNCTION 1497677ee FUN_1497677ee body=233 status=ok
// SIG undefined FUN_1497677ee(void)

ulonglong FUN_1497677ee(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FMakeLiteralVectorDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149767888;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149767888;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149767888;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149767888:
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



// FUNCTION 1497678da FUN_1497678da body=111 status=ok
// SIG undefined FUN_1497678da(void)

void FUN_1497678da(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be51270;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0x3ff0000000000000;
  param_2[0x3a] = 0x3ff0000000000000;
  param_2[0x3b] = 0x3ff0000000000000;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x3c;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 14976794a FUN_14976794a body=111 status=ok
// SIG undefined FUN_14976794a(void)

void FUN_14976794a(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be51270;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0x3ff0000000000000;
  param_2[0x3a] = 0x3ff0000000000000;
  param_2[0x3b] = 0x3ff0000000000000;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x3c;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 1497679de FUN_1497679de body=91 status=ok
// SIG undefined FUN_1497679de(void)

undefined8 FUN_1497679de(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    memcpy((void *)(param_2 + 0x198),(void *)(param_3 + 0x198),0xa8);
    param_2 = param_2 + 0x240;
    param_3 = param_3 + 0x240;
  }
  return 1;
}



// FUNCTION 149767a62 FUN_149767a62 body=59 status=ok
// SIG undefined FUN_149767a62(void)

undefined8 FUN_149767a62(longlong *param_1)

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



// FUNCTION 149767aae FUN_149767aae body=40 status=ok
// SIG undefined FUN_149767aae(void)

void FUN_149767aae(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x240) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x240) = 0;
  }
  return;
}



// FUNCTION 149767b24 FUN_149767b24 body=38 status=ok
// SIG undefined FUN_149767b24(void)

undefined8 FUN_149767b24(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149767b4a FUN_149767b4a body=38 status=ok
// SIG undefined FUN_149767b4a(void)

undefined8 FUN_149767b4a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FMakeTransformDataflowNode",1);
  return param_2;
}



// FUNCTION 149767b70 FUN_149767b70 body=38 status=ok
// SIG undefined FUN_149767b70(void)

undefined8 FUN_149767b70(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"MakeTransform",1);
  return param_2;
}



// FUNCTION 149767b96 FUN_149767b96 body=38 status=ok
// SIG undefined FUN_149767b96(void)

undefined8 FUN_149767b96(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Generators|Transform",1);
  return param_2;
}



// FUNCTION 149767bbc FUN_149767bbc body=32 status=ok
// SIG undefined FUN_149767bbc(void)

undefined8 FUN_149767bbc(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149767bdc FUN_149767bdc body=123 status=ok
// SIG undefined FUN_149767bdc(void)

void FUN_149767bdc(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc250d8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc250d8 = FUN_140002ddd(FUN_146753fff,uVar1,L"MakeTransformDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc250d8,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149767c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149767c58 FUN_149767c58 body=93 status=ok
// SIG undefined FUN_149767c58(void)

void FUN_149767c58(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc250d8 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc250d8 = FUN_140002ddd(FUN_146753fff,uVar2,L"MakeTransformDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc250d8,param_1);
  return;
}



// FUNCTION 149767cb6 FUN_149767cb6 body=55 status=ok
// SIG undefined FUN_149767cb6(void)

void FUN_149767cb6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc250d8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc250d8 = FUN_140002ddd(FUN_146753fff,uVar1,L"MakeTransformDataflowNode");
  }
  return;
}



// FUNCTION 149767cee FUN_149767cee body=233 status=ok
// SIG undefined FUN_149767cee(void)

ulonglong FUN_149767cee(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FMakeTransformDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149767d88;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149767d88;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149767d88;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149767d88:
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



// FUNCTION 149767dda FUN_149767dda body=56 status=ok
// SIG undefined FUN_149767dda(void)

void FUN_149767dda(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be51510;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  return;
}



// FUNCTION 149767e12 FUN_149767e12 body=56 status=ok
// SIG undefined FUN_149767e12(void)

void FUN_149767e12(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be51510;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  return;
}



// FUNCTION 149767e6e FUN_149767e6e body=118 status=ok
// SIG undefined FUN_149767e6e(void)

undefined8 FUN_149767e6e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 149767f0c FUN_149767f0c body=59 status=ok
// SIG undefined FUN_149767f0c(void)

undefined8 FUN_149767f0c(longlong *param_1)

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



// FUNCTION 149767f58 FUN_149767f58 body=40 status=ok
// SIG undefined FUN_149767f58(void)

void FUN_149767f58(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1d0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1d0) = 0;
  }
  return;
}



// FUNCTION 149767fce FUN_149767fce body=38 status=ok
// SIG undefined FUN_149767fce(void)

undefined8 FUN_149767fce(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149767ff4 FUN_149767ff4 body=38 status=ok
// SIG undefined FUN_149767ff4(void)

undefined8 FUN_149767ff4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FMakeQuaternionDataflowNode",1);
  return param_2;
}



// FUNCTION 14976801a FUN_14976801a body=38 status=ok
// SIG undefined FUN_14976801a(void)

undefined8 FUN_14976801a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"MakeQuaternion",1);
  return param_2;
}



// FUNCTION 149768040 FUN_149768040 body=38 status=ok
// SIG undefined FUN_149768040(void)

undefined8 FUN_149768040(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Vector",1);
  return param_2;
}



// FUNCTION 149768066 FUN_149768066 body=32 status=ok
// SIG undefined FUN_149768066(void)

undefined8 FUN_149768066(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149768086 FUN_149768086 body=123 status=ok
// SIG undefined FUN_149768086(void)

void FUN_149768086(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc250f0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc250f0 = FUN_140002ddd(FUN_146754095,uVar1,L"MakeQuaternionDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc250f0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001497680fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149768102 FUN_149768102 body=93 status=ok
// SIG undefined FUN_149768102(void)

void FUN_149768102(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc250f0 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc250f0 = FUN_140002ddd(FUN_146754095,uVar2,L"MakeQuaternionDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc250f0,param_1);
  return;
}



// FUNCTION 149768160 FUN_149768160 body=55 status=ok
// SIG undefined FUN_149768160(void)

void FUN_149768160(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc250f0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc250f0 = FUN_140002ddd(FUN_146754095,uVar1,L"MakeQuaternionDataflowNode");
  }
  return;
}



// FUNCTION 149768198 FUN_149768198 body=233 status=ok
// SIG undefined FUN_149768198(void)

ulonglong FUN_149768198(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FMakeQuaternionDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149768232;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149768232;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149768232;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149768232:
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



// FUNCTION 149768284 FUN_149768284 body=62 status=ok
// SIG undefined FUN_149768284(void)

void FUN_149768284(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be517b0;
  *(undefined4 *)(param_2 + 0x33) = 1;
  *(undefined8 *)((longlong)param_2 + 0x19c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1a4) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1ac) = 0;
  return;
}



// FUNCTION 1497682c2 FUN_1497682c2 body=62 status=ok
// SIG undefined FUN_1497682c2(void)

void FUN_1497682c2(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be517b0;
  *(undefined4 *)(param_2 + 0x33) = 1;
  *(undefined8 *)((longlong)param_2 + 0x19c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1a4) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1ac) = 0;
  return;
}



// FUNCTION 149768324 FUN_149768324 body=99 status=ok
// SIG undefined FUN_149768324(void)

undefined8 FUN_149768324(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    *(undefined8 *)(param_2 + 0x198) = *(undefined8 *)(param_3 + 0x198);
    FUN_144a67f5c(param_2 + 0x1a0,param_3 + 0x1a0);
    param_2 = param_2 + 0x1b0;
    param_3 = param_3 + 0x1b0;
  }
  return 1;
}



// FUNCTION 1497683b0 FUN_1497683b0 body=59 status=ok
// SIG undefined FUN_1497683b0(void)

undefined8 FUN_1497683b0(longlong *param_1)

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



// FUNCTION 1497683fc FUN_1497683fc body=67 status=ok
// SIG undefined FUN_1497683fc(void)

void FUN_1497683fc(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x36) == '\x01') {
    *param_2 = &PTR_FUN_14be517b0;
    if (param_2[0x34] != 0) {
      FUN_1400020a8();
    }
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x36) = 0;
  }
  return;
}



// FUNCTION 14976848e FUN_14976848e body=68 status=ok
// SIG undefined FUN_14976848e(void)

undefined8 * FUN_14976848e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be517b0;
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497684d2 FUN_1497684d2 body=38 status=ok
// SIG undefined FUN_1497684d2(void)

undefined8 FUN_1497684d2(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FMakeFloatArrayDataflowNode",1);
  return param_2;
}



// FUNCTION 1497684f8 FUN_1497684f8 body=38 status=ok
// SIG undefined FUN_1497684f8(void)

undefined8 FUN_1497684f8(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"MakeFloatArray",1);
  return param_2;
}



// FUNCTION 14976851e FUN_14976851e body=38 status=ok
// SIG undefined FUN_14976851e(void)

undefined8 FUN_14976851e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Float",1);
  return param_2;
}



// FUNCTION 149768544 FUN_149768544 body=32 status=ok
// SIG undefined FUN_149768544(void)

undefined8 FUN_149768544(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149768564 FUN_149768564 body=123 status=ok
// SIG undefined FUN_149768564(void)

void FUN_149768564(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25108 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25108 = FUN_140002ddd(FUN_14675412b,uVar1,L"MakeFloatArrayDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25108,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001497685dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 1497685e0 FUN_1497685e0 body=93 status=ok
// SIG undefined FUN_1497685e0(void)

void FUN_1497685e0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25108 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25108 = FUN_140002ddd(FUN_14675412b,uVar2,L"MakeFloatArrayDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25108,param_1);
  return;
}



// FUNCTION 14976863e FUN_14976863e body=55 status=ok
// SIG undefined FUN_14976863e(void)

void FUN_14976863e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25108 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25108 = FUN_140002ddd(FUN_14675412b,uVar1,L"MakeFloatArrayDataflowNode");
  }
  return;
}



// FUNCTION 149768676 FUN_149768676 body=233 status=ok
// SIG undefined FUN_149768676(void)

ulonglong FUN_149768676(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FMakeFloatArrayDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149768710;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149768710;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149768710;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149768710:
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



// FUNCTION 149768762 FUN_149768762 body=53 status=ok
// SIG undefined FUN_149768762(void)

void FUN_149768762(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be51a50;
  param_2[0x33] = 0;
  *(undefined4 *)(param_2 + 0x34) = 0;
  return;
}



// FUNCTION 149768798 FUN_149768798 body=53 status=ok
// SIG undefined FUN_149768798(void)

void FUN_149768798(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be51a50;
  param_2[0x33] = 0;
  *(undefined4 *)(param_2 + 0x34) = 0;
  return;
}



// FUNCTION 1497687f2 FUN_1497687f2 body=88 status=ok
// SIG undefined FUN_1497687f2(void)

undefined8 FUN_1497687f2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 149768872 FUN_149768872 body=59 status=ok
// SIG undefined FUN_149768872(void)

undefined8 FUN_149768872(longlong *param_1)

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



// FUNCTION 1497688be FUN_1497688be body=40 status=ok
// SIG undefined FUN_1497688be(void)

void FUN_1497688be(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 149768934 FUN_149768934 body=38 status=ok
// SIG undefined FUN_149768934(void)

undefined8 FUN_149768934(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14976895a FUN_14976895a body=38 status=ok
// SIG undefined FUN_14976895a(void)

undefined8 FUN_14976895a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FAddDataflowNode",1);
  return param_2;
}



// FUNCTION 149768980 FUN_149768980 body=38 status=ok
// SIG undefined FUN_149768980(void)

undefined8 FUN_149768980(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,&DAT_149ebc865,1);
  return param_2;
}



// FUNCTION 1497689a6 FUN_1497689a6 body=38 status=ok
// SIG undefined FUN_1497689a6(void)

undefined8 FUN_1497689a6(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Float",1);
  return param_2;
}



// FUNCTION 1497689cc FUN_1497689cc body=32 status=ok
// SIG undefined FUN_1497689cc(void)

undefined8 FUN_1497689cc(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 1497689ec FUN_1497689ec body=123 status=ok
// SIG undefined FUN_1497689ec(void)

void FUN_1497689ec(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25120 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25120 = FUN_140002ddd(FUN_1467541c1,uVar1,L"AddDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25120,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149768a64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149768a68 FUN_149768a68 body=93 status=ok
// SIG undefined FUN_149768a68(void)

void FUN_149768a68(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25120 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25120 = FUN_140002ddd(FUN_1467541c1,uVar2,L"AddDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25120,param_1);
  return;
}



// FUNCTION 149768ac6 FUN_149768ac6 body=55 status=ok
// SIG undefined FUN_149768ac6(void)

void FUN_149768ac6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25120 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25120 = FUN_140002ddd(FUN_1467541c1,uVar1,L"AddDataflowNode");
  }
  return;
}



// FUNCTION 149768afe FUN_149768afe body=233 status=ok
// SIG undefined FUN_149768afe(void)

ulonglong FUN_149768afe(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FAddDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149768b98;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149768b98;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149768b98;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149768b98:
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



// FUNCTION 149768bea FUN_149768bea body=53 status=ok
// SIG undefined FUN_149768bea(void)

void FUN_149768bea(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be51ce0;
  param_2[0x33] = 0;
  *(undefined4 *)(param_2 + 0x34) = 0;
  return;
}



// FUNCTION 149768c20 FUN_149768c20 body=53 status=ok
// SIG undefined FUN_149768c20(void)

void FUN_149768c20(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be51ce0;
  param_2[0x33] = 0;
  *(undefined4 *)(param_2 + 0x34) = 0;
  return;
}



// FUNCTION 149768c7a FUN_149768c7a body=88 status=ok
// SIG undefined FUN_149768c7a(void)

undefined8 FUN_149768c7a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 149768cfa FUN_149768cfa body=59 status=ok
// SIG undefined FUN_149768cfa(void)

undefined8 FUN_149768cfa(longlong *param_1)

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



// FUNCTION 149768d46 FUN_149768d46 body=40 status=ok
// SIG undefined FUN_149768d46(void)

void FUN_149768d46(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 149768dbc FUN_149768dbc body=38 status=ok
// SIG undefined FUN_149768dbc(void)

undefined8 FUN_149768dbc(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149768de2 FUN_149768de2 body=38 status=ok
// SIG undefined FUN_149768de2(void)

undefined8 FUN_149768de2(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FSubtractDataflowNode",1);
  return param_2;
}



// FUNCTION 149768e08 FUN_149768e08 body=38 status=ok
// SIG undefined FUN_149768e08(void)

undefined8 FUN_149768e08(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Subtract",1);
  return param_2;
}



// FUNCTION 149768e2e FUN_149768e2e body=38 status=ok
// SIG undefined FUN_149768e2e(void)

undefined8 FUN_149768e2e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Float",1);
  return param_2;
}



// FUNCTION 149768e54 FUN_149768e54 body=32 status=ok
// SIG undefined FUN_149768e54(void)

undefined8 FUN_149768e54(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149768e74 FUN_149768e74 body=123 status=ok
// SIG undefined FUN_149768e74(void)

void FUN_149768e74(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25138 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25138 = FUN_140002ddd(FUN_146754257,uVar1,L"SubtractDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25138,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149768eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149768ef0 FUN_149768ef0 body=93 status=ok
// SIG undefined FUN_149768ef0(void)

void FUN_149768ef0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25138 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25138 = FUN_140002ddd(FUN_146754257,uVar2,L"SubtractDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25138,param_1);
  return;
}



// FUNCTION 149768f4e FUN_149768f4e body=55 status=ok
// SIG undefined FUN_149768f4e(void)

void FUN_149768f4e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25138 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25138 = FUN_140002ddd(FUN_146754257,uVar1,L"SubtractDataflowNode");
  }
  return;
}



// FUNCTION 149768f86 FUN_149768f86 body=233 status=ok
// SIG undefined FUN_149768f86(void)

ulonglong FUN_149768f86(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FSubtractDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149769020;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149769020;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149769020;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149769020:
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



// FUNCTION 149769072 FUN_149769072 body=53 status=ok
// SIG undefined FUN_149769072(void)

void FUN_149769072(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be51f70;
  param_2[0x33] = 0;
  *(undefined4 *)(param_2 + 0x34) = 0;
  return;
}



// FUNCTION 1497690a8 FUN_1497690a8 body=53 status=ok
// SIG undefined FUN_1497690a8(void)

void FUN_1497690a8(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be51f70;
  param_2[0x33] = 0;
  *(undefined4 *)(param_2 + 0x34) = 0;
  return;
}



// FUNCTION 149769102 FUN_149769102 body=88 status=ok
// SIG undefined FUN_149769102(void)

undefined8 FUN_149769102(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 149769182 FUN_149769182 body=59 status=ok
// SIG undefined FUN_149769182(void)

undefined8 FUN_149769182(longlong *param_1)

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



// FUNCTION 1497691ce FUN_1497691ce body=40 status=ok
// SIG undefined FUN_1497691ce(void)

void FUN_1497691ce(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 149769244 FUN_149769244 body=38 status=ok
// SIG undefined FUN_149769244(void)

undefined8 FUN_149769244(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14976926a FUN_14976926a body=38 status=ok
// SIG undefined FUN_14976926a(void)

undefined8 FUN_14976926a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FMultiplyDataflowNode",1);
  return param_2;
}



// FUNCTION 149769290 FUN_149769290 body=38 status=ok
// SIG undefined FUN_149769290(void)

undefined8 FUN_149769290(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Multiply",1);
  return param_2;
}



// FUNCTION 1497692b6 FUN_1497692b6 body=38 status=ok
// SIG undefined FUN_1497692b6(void)

undefined8 FUN_1497692b6(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Float",1);
  return param_2;
}



// FUNCTION 1497692dc FUN_1497692dc body=32 status=ok
// SIG undefined FUN_1497692dc(void)

undefined8 FUN_1497692dc(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 1497692fc FUN_1497692fc body=123 status=ok
// SIG undefined FUN_1497692fc(void)

void FUN_1497692fc(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25150 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25150 = FUN_140002ddd(FUN_1467542ed,uVar1,L"MultiplyDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25150,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149769374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149769378 FUN_149769378 body=93 status=ok
// SIG undefined FUN_149769378(void)

void FUN_149769378(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25150 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25150 = FUN_140002ddd(FUN_1467542ed,uVar2,L"MultiplyDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25150,param_1);
  return;
}



// FUNCTION 1497693d6 FUN_1497693d6 body=55 status=ok
// SIG undefined FUN_1497693d6(void)

void FUN_1497693d6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25150 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25150 = FUN_140002ddd(FUN_1467542ed,uVar1,L"MultiplyDataflowNode");
  }
  return;
}



// FUNCTION 14976940e FUN_14976940e body=233 status=ok
// SIG undefined FUN_14976940e(void)

ulonglong FUN_14976940e(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FMultiplyDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_1497694a8;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1497694a8;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_1497694a8;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_1497694a8:
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



// FUNCTION 1497694fa FUN_1497694fa body=53 status=ok
// SIG undefined FUN_1497694fa(void)

void FUN_1497694fa(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be52200;
  param_2[0x33] = 0;
  *(undefined4 *)(param_2 + 0x34) = 0;
  return;
}



// FUNCTION 149769530 FUN_149769530 body=53 status=ok
// SIG undefined FUN_149769530(void)

void FUN_149769530(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be52200;
  param_2[0x33] = 0;
  *(undefined4 *)(param_2 + 0x34) = 0;
  return;
}



// FUNCTION 14976958a FUN_14976958a body=88 status=ok
// SIG undefined FUN_14976958a(void)

undefined8 FUN_14976958a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 14976960a FUN_14976960a body=59 status=ok
// SIG undefined FUN_14976960a(void)

undefined8 FUN_14976960a(longlong *param_1)

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



// FUNCTION 149769656 FUN_149769656 body=40 status=ok
// SIG undefined FUN_149769656(void)

void FUN_149769656(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 1497696cc FUN_1497696cc body=38 status=ok
// SIG undefined FUN_1497696cc(void)

undefined8 FUN_1497696cc(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497696f2 FUN_1497696f2 body=38 status=ok
// SIG undefined FUN_1497696f2(void)

undefined8 FUN_1497696f2(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FSafeDivideDataflowNode",1);
  return param_2;
}



// FUNCTION 149769718 FUN_149769718 body=38 status=ok
// SIG undefined FUN_149769718(void)

undefined8 FUN_149769718(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"SafeDivide",1);
  return param_2;
}



// FUNCTION 14976973e FUN_14976973e body=38 status=ok
// SIG undefined FUN_14976973e(void)

undefined8 FUN_14976973e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Float",1);
  return param_2;
}



// FUNCTION 149769764 FUN_149769764 body=32 status=ok
// SIG undefined FUN_149769764(void)

undefined8 FUN_149769764(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149769784 FUN_149769784 body=123 status=ok
// SIG undefined FUN_149769784(void)

void FUN_149769784(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25168 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25168 = FUN_140002ddd(FUN_146754383,uVar1,L"SafeDivideDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25168,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001497697fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149769800 FUN_149769800 body=93 status=ok
// SIG undefined FUN_149769800(void)

void FUN_149769800(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25168 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25168 = FUN_140002ddd(FUN_146754383,uVar2,L"SafeDivideDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25168,param_1);
  return;
}



// FUNCTION 14976985e FUN_14976985e body=55 status=ok
// SIG undefined FUN_14976985e(void)

void FUN_14976985e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25168 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25168 = FUN_140002ddd(FUN_146754383,uVar1,L"SafeDivideDataflowNode");
  }
  return;
}



// FUNCTION 149769896 FUN_149769896 body=233 status=ok
// SIG undefined FUN_149769896(void)

ulonglong FUN_149769896(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FSafeDivideDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149769930;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149769930;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149769930;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149769930:
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



// FUNCTION 149769982 FUN_149769982 body=53 status=ok
// SIG undefined FUN_149769982(void)

void FUN_149769982(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  *(undefined4 *)(param_2 + 0x34) = 0;
  *param_2 = &PTR_FUN_14be52490;
  return;
}



// FUNCTION 1497699b8 FUN_1497699b8 body=53 status=ok
// SIG undefined FUN_1497699b8(void)

void FUN_1497699b8(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  param_2[0x33] = 0;
  *(undefined4 *)(param_2 + 0x34) = 0;
  *param_2 = &PTR_FUN_14be52490;
  return;
}



// FUNCTION 149769a12 FUN_149769a12 body=88 status=ok
// SIG undefined FUN_149769a12(void)

undefined8 FUN_149769a12(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 149769a92 FUN_149769a92 body=59 status=ok
// SIG undefined FUN_149769a92(void)

undefined8 FUN_149769a92(longlong *param_1)

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



// FUNCTION 149769ade FUN_149769ade body=40 status=ok
// SIG undefined FUN_149769ade(void)

void FUN_149769ade(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 149769b54 FUN_149769b54 body=38 status=ok
// SIG undefined FUN_149769b54(void)

undefined8 FUN_149769b54(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149769b7a FUN_149769b7a body=38 status=ok
// SIG undefined FUN_149769b7a(void)

undefined8 FUN_149769b7a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FDivideDataflowNode",1);
  return param_2;
}



// FUNCTION 149769ba0 FUN_149769ba0 body=38 status=ok
// SIG undefined FUN_149769ba0(void)

undefined8 FUN_149769ba0(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Divide",1);
  return param_2;
}



// FUNCTION 149769bc6 FUN_149769bc6 body=38 status=ok
// SIG undefined FUN_149769bc6(void)

undefined8 FUN_149769bc6(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Float",1);
  return param_2;
}



// FUNCTION 149769bec FUN_149769bec body=32 status=ok
// SIG undefined FUN_149769bec(void)

undefined8 FUN_149769bec(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149769c0c FUN_149769c0c body=123 status=ok
// SIG undefined FUN_149769c0c(void)

void FUN_149769c0c(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25180 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25180 = FUN_140002ddd(FUN_146754419,uVar1,L"DivideDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25180,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149769c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149769c88 FUN_149769c88 body=93 status=ok
// SIG undefined FUN_149769c88(void)

void FUN_149769c88(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25180 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25180 = FUN_140002ddd(FUN_146754419,uVar2,L"DivideDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25180,param_1);
  return;
}



// FUNCTION 149769ce6 FUN_149769ce6 body=55 status=ok
// SIG undefined FUN_149769ce6(void)

void FUN_149769ce6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25180 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25180 = FUN_140002ddd(FUN_146754419,uVar1,L"DivideDataflowNode");
  }
  return;
}



// FUNCTION 149769d1e FUN_149769d1e body=233 status=ok
// SIG undefined FUN_149769d1e(void)

ulonglong FUN_149769d1e(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FDivideDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149769db8;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149769db8;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149769db8;
  }
  uVar2 = FUN_149769896(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149769db8:
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



// FUNCTION 149769e0a FUN_149769e0a body=42 status=ok
// SIG undefined FUN_149769e0a(void)

void FUN_149769e0a(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be52720;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  return;
}



// FUNCTION 149769e34 FUN_149769e34 body=42 status=ok
// SIG undefined FUN_149769e34(void)

void FUN_149769e34(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be52720;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  return;
}



// FUNCTION 149769e82 FUN_149769e82 body=76 status=ok
// SIG undefined FUN_149769e82(void)

undefined1 FUN_149769e82(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 149769ef6 FUN_149769ef6 body=59 status=ok
// SIG undefined FUN_149769ef6(void)

undefined8 FUN_149769ef6(longlong *param_1)

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



// FUNCTION 149769f42 FUN_149769f42 body=40 status=ok
// SIG undefined FUN_149769f42(void)

void FUN_149769f42(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 149769fb8 FUN_149769fb8 body=38 status=ok
// SIG undefined FUN_149769fb8(void)

undefined8 FUN_149769fb8(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149769fde FUN_149769fde body=38 status=ok
// SIG undefined FUN_149769fde(void)

undefined8 FUN_149769fde(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FDivisionDataflowNode",1);
  return param_2;
}



// FUNCTION 14976a004 FUN_14976a004 body=38 status=ok
// SIG undefined FUN_14976a004(void)

undefined8 FUN_14976a004(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Division (Whole and Remainder)",1);
  return param_2;
}



// FUNCTION 14976a02a FUN_14976a02a body=38 status=ok
// SIG undefined FUN_14976a02a(void)

undefined8 FUN_14976a02a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Float",1);
  return param_2;
}



// FUNCTION 14976a050 FUN_14976a050 body=32 status=ok
// SIG undefined FUN_14976a050(void)

undefined8 FUN_14976a050(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}


