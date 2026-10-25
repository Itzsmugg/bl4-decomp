// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145e4ebe0 FUN_145e4ebe0 body=123 status=ok
// SIG undefined FUN_145e4ebe0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e4ebe0(void)

{
  _DAT_14c9c9158 = L"BASE";
  DAT_14c9c9182 = 4;
  _DAT_14c9c9160 = FUN_140b35ae4();
  _DAT_14c9c9168 = DAT_14c9c45f8;
  _DAT_14c9c9170 = &LAB_14682652b;
  DAT_14c9c45f8 = &DAT_14c9c9158;
  DAT_14c9c464d = DAT_14c9c464d + '\x01';
  _DAT_14c9c9178 = 0x100000000;
  if (*(char *)(_DAT_14c9c9160 + 100) != '\0') {
    DAT_14c9c464e = DAT_14c9c464e + '\x01';
  }
  return;
}



// FUNCTION 145e4ec5c FUN_145e4ec5c body=261 status=ok
// SIG undefined FUN_145e4ec5c(void)

void FUN_145e4ec5c(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c7d48) {
    FUN_144b3d300(&DAT_14c9c7d48);
    if (DAT_14c9c7d48 == -1) {
      FUN_145e4ed62(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x10;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c7cc8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142be54b5);
      _Init_thread_footer(&DAT_14c9c7d48);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e4ed62 FUN_145e4ed62 body=226 status=ok
// SIG undefined FUN_145e4ed62(void)

longlong * FUN_145e4ed62(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462bdf88;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e4ee4a FUN_145e4ee4a body=132 status=ok
// SIG undefined FUN_145e4ee4a(void)

undefined1 * FUN_145e4ee4a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SceneDepthTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x11;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e4ee46;
}



// FUNCTION 145e4eece FUN_145e4eece body=138 status=ok
// SIG undefined FUN_145e4eece(void)

code * FUN_145e4eece(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWDepthTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float3>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000012;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e4ee4a;
}



// FUNCTION 145e4ef58 FUN_145e4ef58 body=205 status=ok
// SIG undefined FUN_145e4ef58(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e4ef58(void)

{
  if ((DAT_14c9c62cf & 2) == 0) {
    DAT_14c9c62cf = DAT_14c9c62cf | 2;
    _DAT_14c9c6270 = L"FBuildTileConesCS";
    _DAT_14c9c6288 = FUN_146826540;
    _DAT_14c9c6290 = FUN_146825d77;
    _DAT_14c9c6298 = FUN_146825fd6;
    _DAT_14c9c62a0 = FUN_1407e02ea;
    _DAT_14c9c62a8 = FUN_146826273;
    _DAT_14c9c6280 = FUN_14714ecc8;
    _DAT_14c9c62c0 = 0xffffffff000000e0;
    _DAT_14c9c62c8 = 8;
    DAT_14c9c62cc = 0;
    _DAT_14c9c62b0 = &LAB_14714ecf2;
    FUN_145e4f026();
    FUN_1407e00cc(&DAT_14c9c6268);
    return;
  }
  return;
}



// FUNCTION 145e4f026 FUN_145e4f026 body=123 status=ok
// SIG undefined FUN_145e4f026(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e4f026(void)

{
  _DAT_14c9c94e0 = L"BASE";
  DAT_14c9c950a = 4;
  _DAT_14c9c94e8 = FUN_140b35ae4();
  _DAT_14c9c94f0 = DAT_14c9c6278;
  _DAT_14c9c94f8 = &LAB_14682652b;
  DAT_14c9c6278 = &DAT_14c9c94e0;
  DAT_14c9c62cd = DAT_14c9c62cd + '\x01';
  _DAT_14c9c9500 = 0x100000000;
  if (*(char *)(_DAT_14c9c94e8 + 100) != '\0') {
    DAT_14c9c62ce = DAT_14c9c62ce + '\x01';
  }
  return;
}



// FUNCTION 145e4f0a2 FUN_145e4f0a2 body=226 status=ok
// SIG undefined FUN_145e4f0a2(void)

longlong * FUN_145e4f0a2(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462befbe;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e4f18a FUN_145e4f18a body=138 status=ok
// SIG undefined FUN_145e4f18a(void)

code * FUN_145e4f18a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWTileConeAxisAndCos";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<FVector4f>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000076;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e4f214;
}



// FUNCTION 145e4f214 FUN_145e4f214 body=138 status=ok
// SIG undefined FUN_145e4f214(void)

undefined1 * FUN_145e4f214(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1447e4f80();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"View";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewUniformShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x75;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e4f186;
}



// FUNCTION 145e4f29e FUN_145e4f29e body=205 status=ok
// SIG undefined FUN_145e4f29e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e4f29e(void)

{
  if ((DAT_14c9c7b77 & 2) == 0) {
    DAT_14c9c7b77 = DAT_14c9c7b77 | 2;
    _DAT_14c9c7b18 = L"FGenerateDistanceFieldAssetStreamingRequestsCS";
    _DAT_14c9c7b30 = FUN_146826540;
    _DAT_14c9c7b38 = FUN_146825d77;
    _DAT_14c9c7b40 = FUN_146825fd6;
    _DAT_14c9c7b48 = FUN_1407e02ea;
    _DAT_14c9c7b50 = FUN_146826273;
    _DAT_14c9c7b28 = FUN_14714fc50;
    _DAT_14c9c7b68 = 0xffffffff000000e0;
    _DAT_14c9c7b70 = 8;
    DAT_14c9c7b74 = 0;
    _DAT_14c9c7b58 = &LAB_14714fc7a;
    FUN_145e4f36c();
    FUN_1407e00cc(&DAT_14c9c7b10);
    return;
  }
  return;
}



// FUNCTION 145e4f36c FUN_145e4f36c body=123 status=ok
// SIG undefined FUN_145e4f36c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e4f36c(void)

{
  _DAT_14c9c9a08 = L"BASE";
  DAT_14c9c9a32 = 4;
  _DAT_14c9c9a10 = FUN_140b35ae4();
  _DAT_14c9c9a18 = DAT_14c9c7b20;
  _DAT_14c9c9a20 = &LAB_14682652b;
  DAT_14c9c7b20 = &DAT_14c9c9a08;
  DAT_14c9c7b75 = DAT_14c9c7b75 + '\x01';
  _DAT_14c9c9a28 = 0x100000000;
  if (*(char *)(_DAT_14c9c9a10 + 100) != '\0') {
    DAT_14c9c7b76 = DAT_14c9c7b76 + '\x01';
  }
  return;
}



// FUNCTION 145e4f3e8 FUN_145e4f3e8 body=226 status=ok
// SIG undefined FUN_145e4f3e8(void)

longlong * FUN_145e4f3e8(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462c1726;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e4f4d0 FUN_145e4f4d0 body=132 status=ok
// SIG undefined FUN_145e4f4d0(void)

undefined1 * FUN_145e4f4d0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWDistanceFieldAssetStreamingRequests";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x11f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e4f4cc;
}



// FUNCTION 145e4f554 FUN_145e4f554 body=144 status=ok
// SIG undefined FUN_145e4f554(void)

code * FUN_145e4f554(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1401d6c66();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"DistanceFieldAtlasParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FDistanceFieldAtlasParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x4000000122;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462c17ae;
}



// FUNCTION 145e4f5e4 FUN_145e4f5e4 body=205 status=ok
// SIG undefined FUN_145e4f5e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e4f5e4(void)

{
  if ((DAT_14c9cb6ff & 2) == 0) {
    DAT_14c9cb6ff = DAT_14c9cb6ff | 2;
    _DAT_14c9cb6a0 = L"FGenerateConservativeDepthBufferCS";
    _DAT_14c9cb6b8 = FUN_146826540;
    _DAT_14c9cb6c0 = FUN_146825d77;
    _DAT_14c9cb6c8 = FUN_146825fd6;
    _DAT_14c9cb6d0 = FUN_1407e02ea;
    _DAT_14c9cb6d8 = FUN_146826273;
    _DAT_14c9cb6b0 = FUN_14715a5a2;
    _DAT_14c9cb6f0 = 0xffffffff000000e0;
    _DAT_14c9cb6f8 = 8;
    DAT_14c9cb6fc = 0;
    _DAT_14c9cb6e0 = &LAB_14715a5cc;
    FUN_145e4f6b2();
    FUN_1407e00cc(&DAT_14c9cb698);
    return;
  }
  return;
}



// FUNCTION 145e4f6b2 FUN_145e4f6b2 body=123 status=ok
// SIG undefined FUN_145e4f6b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e4f6b2(void)

{
  _DAT_14c9cf3a0 = L"BASE";
  DAT_14c9cf3ca = 4;
  _DAT_14c9cf3a8 = FUN_140b35ae4();
  _DAT_14c9cf3b0 = DAT_14c9cb6a8;
  _DAT_14c9cf3b8 = &LAB_14682652b;
  DAT_14c9cb6a8 = &DAT_14c9cf3a0;
  DAT_14c9cb6fd = DAT_14c9cb6fd + '\x01';
  _DAT_14c9cf3c0 = 0x100000000;
  if (*(char *)(_DAT_14c9cf3a8 + 100) != '\0') {
    DAT_14c9cb6fe = DAT_14c9cb6fe + '\x01';
  }
  return;
}



// FUNCTION 145e4f72e FUN_145e4f72e body=226 status=ok
// SIG undefined FUN_145e4f72e(void)

longlong * FUN_145e4f72e(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462c3b46;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e4f816 FUN_145e4f816 body=138 status=ok
// SIG undefined FUN_145e4f816(void)

code * FUN_145e4f816(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ConservativeDepthTextureUAV";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000014;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462c3c56;
}



// FUNCTION 145e4f8a0 FUN_145e4f8a0 body=138 status=ok
// SIG undefined FUN_145e4f8a0(void)

code * FUN_145e4f8a0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ConservativeDepthTextureSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000015;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e4f816;
}



// FUNCTION 145e4f92a FUN_145e4f92a body=205 status=ok
// SIG undefined FUN_145e4f92a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e4f92a(void)

{
  if ((DAT_14c9cba77 & 2) == 0) {
    DAT_14c9cba77 = DAT_14c9cba77 | 2;
    _DAT_14c9cba18 = L"FBuildHeightfieldComposeTilesCS";
    _DAT_14c9cba30 = FUN_146826540;
    _DAT_14c9cba38 = FUN_146825d77;
    _DAT_14c9cba40 = FUN_146825fd6;
    _DAT_14c9cba48 = FUN_1407e02ea;
    _DAT_14c9cba50 = FUN_146826273;
    _DAT_14c9cba28 = FUN_14715a80c;
    _DAT_14c9cba68 = 0xffffffff000000e0;
    _DAT_14c9cba70 = 8;
    DAT_14c9cba74 = 0;
    _DAT_14c9cba58 = &LAB_14715a836;
    FUN_145e4f9f8();
    FUN_1407e00cc(&DAT_14c9cba10);
    return;
  }
  return;
}



// FUNCTION 145e4f9f8 FUN_145e4f9f8 body=123 status=ok
// SIG undefined FUN_145e4f9f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e4f9f8(void)

{
  _DAT_14c9cf430 = L"BASE";
  DAT_14c9cf45a = 4;
  _DAT_14c9cf438 = FUN_140b35ae4();
  _DAT_14c9cf440 = DAT_14c9cba20;
  _DAT_14c9cf448 = &LAB_14682652b;
  DAT_14c9cba20 = &DAT_14c9cf430;
  DAT_14c9cba75 = DAT_14c9cba75 + '\x01';
  _DAT_14c9cf450 = 0x100000000;
  if (*(char *)(_DAT_14c9cf438 + 100) != '\0') {
    DAT_14c9cba76 = DAT_14c9cba76 + '\x01';
  }
  return;
}



// FUNCTION 145e4fa74 FUN_145e4fa74 body=226 status=ok
// SIG undefined FUN_145e4fa74(void)

longlong * FUN_145e4fa74(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462c3df0;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e4fb5c FUN_145e4fb5c body=138 status=ok
// SIG undefined FUN_145e4fb5c(void)

code * FUN_145e4fb5c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PageUpdateTileBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000066;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462c3e78;
}



// FUNCTION 145e4fbe6 FUN_145e4fbe6 body=138 status=ok
// SIG undefined FUN_145e4fbe6(void)

code * FUN_145e4fbe6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MarkedHeightfieldPageBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000067;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e4fb5c;
}



// FUNCTION 145e4fc70 FUN_145e4fc70 body=205 status=ok
// SIG undefined FUN_145e4fc70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e4fc70(void)

{
  if ((DAT_14c9cc3df & 2) == 0) {
    DAT_14c9cc3df = DAT_14c9cc3df | 2;
    _DAT_14c9cc380 = L"FCullObjectsToGridCS";
    _DAT_14c9cc398 = FUN_146826540;
    _DAT_14c9cc3a0 = FUN_146825d77;
    _DAT_14c9cc3a8 = FUN_146825fd6;
    _DAT_14c9cc3b0 = FUN_1407e02ea;
    _DAT_14c9cc3b8 = FUN_146826273;
    _DAT_14c9cc390 = FUN_14715acb0;
    _DAT_14c9cc3d0 = 0xffffffff000000e0;
    _DAT_14c9cc3d8 = 8;
    DAT_14c9cc3dc = 0;
    _DAT_14c9cc3c0 = &LAB_14715acda;
    FUN_145e4fd3e();
    FUN_1407e00cc(&DAT_14c9cc378);
    return;
  }
  return;
}



// FUNCTION 145e4fd3e FUN_145e4fd3e body=123 status=ok
// SIG undefined FUN_145e4fd3e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e4fd3e(void)

{
  _DAT_14c9cf550 = L"BASE";
  DAT_14c9cf57a = 4;
  _DAT_14c9cf558 = FUN_140b35ae4();
  _DAT_14c9cf560 = DAT_14c9cc388;
  _DAT_14c9cf568 = &LAB_14682652b;
  DAT_14c9cc388 = &DAT_14c9cf550;
  DAT_14c9cc3dd = DAT_14c9cc3dd + '\x01';
  _DAT_14c9cf570 = 0x100000000;
  if (*(char *)(_DAT_14c9cf558 + 100) != '\0') {
    DAT_14c9cc3de = DAT_14c9cc3de + '\x01';
  }
  return;
}



// FUNCTION 145e4fdbe FUN_145e4fdbe body=138 status=ok
// SIG undefined FUN_145e4fdbe(void)

code * FUN_145e4fdbe(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CullGridCoordToTranslatedWorldCenterScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000654;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471633d8;
}



// FUNCTION 145e4fe48 FUN_145e4fe48 body=138 status=ok
// SIG undefined FUN_145e4fe48(void)

code * FUN_145e4fe48(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CullTileWorldExtent";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa000000656;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14716334e;
}



// FUNCTION 145e4fed2 FUN_145e4fed2 body=205 status=ok
// SIG undefined FUN_145e4fed2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e4fed2(void)

{
  if ((DAT_14c9cc62f & 2) == 0) {
    DAT_14c9cc62f = DAT_14c9cc62f | 2;
    _DAT_14c9cc5d0 = L"FCompositeObjectsIntoPagesCS";
    _DAT_14c9cc5e8 = FUN_146826540;
    _DAT_14c9cc5f0 = FUN_146825d77;
    _DAT_14c9cc5f8 = FUN_146825fd6;
    _DAT_14c9cc600 = FUN_1407e02ea;
    _DAT_14c9cc608 = FUN_146826273;
    _DAT_14c9cc5e0 = FUN_14715ae38;
    _DAT_14c9cc620 = 0xffffffff000000e0;
    _DAT_14c9cc628 = 8;
    DAT_14c9cc62c = 0;
    _DAT_14c9cc610 = &LAB_14715ae62;
    FUN_145e4ffa0();
    FUN_1407e00cc(&DAT_14c9cc5c8);
    return;
  }
  return;
}



// FUNCTION 145e4ffa0 FUN_145e4ffa0 body=123 status=ok
// SIG undefined FUN_145e4ffa0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e4ffa0(void)

{
  _DAT_14c9cf5b0 = L"BASE";
  DAT_14c9cf5da = 4;
  _DAT_14c9cf5b8 = FUN_140b35ae4();
  _DAT_14c9cf5c0 = DAT_14c9cc5d8;
  _DAT_14c9cf5c8 = &LAB_14682652b;
  DAT_14c9cc5d8 = &DAT_14c9cf5b0;
  DAT_14c9cc62d = DAT_14c9cc62d + '\x01';
  _DAT_14c9cf5d0 = 0x100000000;
  if (*(char *)(_DAT_14c9cf5b8 + 100) != '\0') {
    DAT_14c9cc62e = DAT_14c9cc62e + '\x01';
  }
  return;
}



// FUNCTION 145e5001c FUN_145e5001c body=226 status=ok
// SIG undefined FUN_145e5001c(void)

longlong * FUN_145e5001c(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462c48a2;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e50104 FUN_145e50104 body=138 status=ok
// SIG undefined FUN_145e50104(void)

code * FUN_145e50104(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ComposeTileBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000006b8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147164484;
}



// FUNCTION 145e5018e FUN_145e5018e body=138 status=ok
// SIG undefined FUN_145e5018e(void)

code * FUN_145e5018e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWPageTableCombinedTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture3D<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000006ba;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471643fa;
}



// FUNCTION 145e50218 FUN_145e50218 body=205 status=ok
// SIG undefined FUN_145e50218(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e50218(void)

{
  if ((DAT_14c9ccacf & 2) == 0) {
    DAT_14c9ccacf = DAT_14c9ccacf | 2;
    _DAT_14c9cca70 = L"FPageFreeListReturnCS";
    _DAT_14c9cca88 = FUN_146826540;
    _DAT_14c9cca90 = FUN_146825d77;
    _DAT_14c9cca98 = FUN_146825fd6;
    _DAT_14c9ccaa0 = FUN_1407e02ea;
    _DAT_14c9ccaa8 = FUN_146826273;
    _DAT_14c9cca80 = FUN_14715b148;
    _DAT_14c9ccac0 = 0xffffffff000000e0;
    _DAT_14c9ccac8 = 8;
    DAT_14c9ccacc = 0;
    _DAT_14c9ccab0 = &LAB_14715b172;
    FUN_145e502e6();
    FUN_1407e00cc(&DAT_14c9cca68);
    return;
  }
  return;
}



// FUNCTION 145e502e6 FUN_145e502e6 body=123 status=ok
// SIG undefined FUN_145e502e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e502e6(void)

{
  _DAT_14c9cf670 = L"BASE";
  DAT_14c9cf69a = 4;
  _DAT_14c9cf678 = FUN_140b35ae4();
  _DAT_14c9cf680 = DAT_14c9cca78;
  _DAT_14c9cf688 = &LAB_14682652b;
  DAT_14c9cca78 = &DAT_14c9cf670;
  DAT_14c9ccacd = DAT_14c9ccacd + '\x01';
  _DAT_14c9cf690 = 0x100000000;
  if (*(char *)(_DAT_14c9cf678 + 100) != '\0') {
    DAT_14c9ccace = DAT_14c9ccace + '\x01';
  }
  return;
}



// FUNCTION 145e50362 FUN_145e50362 body=226 status=ok
// SIG undefined FUN_145e50362(void)

longlong * FUN_145e50362(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462c4e1a;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e5044a FUN_145e5044a body=138 status=ok
// SIG undefined FUN_145e5044a(void)

code * FUN_145e5044a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PageFreeListReturnAllocatorBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000788;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e504d4;
}



// FUNCTION 145e504d4 FUN_145e504d4 body=138 status=ok
// SIG undefined FUN_145e504d4(void)

code * FUN_145e504d4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWPageFreeListBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000787;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471654a4;
}



// FUNCTION 145e5055e FUN_145e5055e body=292 status=ok
// SIG undefined FUN_145e5055e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e5055e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d0d68) {
    FUN_144b3d300(&DAT_14c9d0d68);
    if (DAT_14c9d0d68 == -1) {
      FUN_145e507cc();
      FUN_145e50682();
      FUN_140db5666(&DAT_14c9d0cc0,0,&DAT_14c9d0c58,L"FDeepShadowVisualizePS",
                    L"/Engine/Private/HairStrands/HairStrandsDebug.usf",L"VisualizeDomPS",3,2,
                    FUN_14716b580,FUN_14716b520,FUN_1462c5da8,&LAB_14716b51c,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9d3e98);
      _DAT_14c9d0cc0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c33ae5);
      _Init_thread_footer(&DAT_14c9d0d68);
    }
  }
  return &DAT_14c9d0cc0;
}



// FUNCTION 145e50682 FUN_145e50682 body=205 status=ok
// SIG undefined FUN_145e50682(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e50682(void)

{
  if ((DAT_14c9d0cbf & 2) == 0) {
    DAT_14c9d0cbf = DAT_14c9d0cbf | 2;
    _DAT_14c9d0c60 = L"FDeepShadowVisualizePS";
    _DAT_14c9d0c78 = FUN_146826540;
    _DAT_14c9d0c80 = FUN_146825d77;
    _DAT_14c9d0c88 = FUN_146825fd6;
    _DAT_14c9d0c90 = FUN_1407e02ea;
    _DAT_14c9d0c98 = FUN_146826273;
    _DAT_14c9d0c70 = FUN_14716b4ec;
    _DAT_14c9d0cb0 = 0xffffffff000000e0;
    _DAT_14c9d0cb8 = 8;
    DAT_14c9d0cbc = 0;
    _DAT_14c9d0ca0 = &LAB_14716b518;
    FUN_145e50750();
    FUN_1407e00cc(&DAT_14c9d0c58);
    return;
  }
  return;
}



// FUNCTION 145e50750 FUN_145e50750 body=123 status=ok
// SIG undefined FUN_145e50750(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e50750(void)

{
  _DAT_14c9d4e78 = L"BASE";
  DAT_14c9d4ea2 = 4;
  _DAT_14c9d4e80 = FUN_140b35ae4();
  _DAT_14c9d4e88 = DAT_14c9d0c68;
  _DAT_14c9d4e90 = &LAB_14682652b;
  DAT_14c9d0c68 = &DAT_14c9d4e78;
  DAT_14c9d0cbd = DAT_14c9d0cbd + '\x01';
  _DAT_14c9d4e98 = 0x100000000;
  if (*(char *)(_DAT_14c9d4e80 + 100) != '\0') {
    DAT_14c9d0cbe = DAT_14c9d0cbe + '\x01';
  }
  return;
}



// FUNCTION 145e507cc FUN_145e507cc body=261 status=ok
// SIG undefined FUN_145e507cc(void)

void FUN_145e507cc(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d3f18) {
    FUN_144b3d300(&DAT_14c9d3f18);
    if (DAT_14c9d3f18 == -1) {
      FUN_145e508d2(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x160;
      local_58 = 0x246;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9d3e98,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c4949b);
      _Init_thread_footer(&DAT_14c9d3f18);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e508d2 FUN_145e508d2 body=226 status=ok
// SIG undefined FUN_145e508d2(void)

longlong * FUN_145e508d2(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462c72e8;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e509ba FUN_145e509ba body=132 status=ok
// SIG undefined FUN_145e509ba(void)

undefined1 * FUN_145e509ba(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DomScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x247;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e509b6;
}



// FUNCTION 145e50a3e FUN_145e50a3e body=138 status=ok
// SIG undefined FUN_145e50a3e(void)

code * FUN_145e50a3e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InvOutputResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000249;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471713a8;
}



// FUNCTION 145e50ac8 FUN_145e50ac8 body=292 status=ok
// SIG undefined FUN_145e50ac8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e50ac8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d2728) {
    FUN_144b3d300(&DAT_14c9d2728);
    if (DAT_14c9d2728 == -1) {
      FUN_145e50d36();
      FUN_145e50bec();
      FUN_140db5666(&DAT_14c9d2680,0,&DAT_14c9d2618,L"FHairCoverageLUTCS",
                    L"/Engine/Private/HairStrands/HairStrandsLUT.usf",L"MainCS",5,1,FUN_14716e21a,
                    FUN_14716e1ba,&LAB_1462c5f94,&LAB_14716e1b6,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14c9d4b58);
      _DAT_14c9d2680 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c3f923);
      _Init_thread_footer(&DAT_14c9d2728);
    }
  }
  return &DAT_14c9d2680;
}



// FUNCTION 145e50bec FUN_145e50bec body=205 status=ok
// SIG undefined FUN_145e50bec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e50bec(void)

{
  if ((DAT_14c9d267f & 2) == 0) {
    DAT_14c9d267f = DAT_14c9d267f | 2;
    _DAT_14c9d2620 = L"FHairCoverageLUTCS";
    _DAT_14c9d2638 = FUN_146826540;
    _DAT_14c9d2640 = FUN_146825d77;
    _DAT_14c9d2648 = FUN_146825fd6;
    _DAT_14c9d2650 = FUN_1407e02ea;
    _DAT_14c9d2658 = FUN_146826273;
    _DAT_14c9d2630 = FUN_14716e186;
    _DAT_14c9d2670 = 0xffffffff000000e0;
    _DAT_14c9d2678 = 8;
    DAT_14c9d267c = 0;
    _DAT_14c9d2660 = &LAB_14716e1b2;
    FUN_145e50cba();
    FUN_1407e00cc(&DAT_14c9d2618);
    return;
  }
  return;
}



// FUNCTION 145e50cba FUN_145e50cba body=123 status=ok
// SIG undefined FUN_145e50cba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e50cba(void)

{
  _DAT_14c9d5238 = L"BASE";
  DAT_14c9d5262 = 4;
  _DAT_14c9d5240 = FUN_140b35ae4();
  _DAT_14c9d5248 = DAT_14c9d2628;
  _DAT_14c9d5250 = &LAB_14682652b;
  DAT_14c9d2628 = &DAT_14c9d5238;
  DAT_14c9d267d = DAT_14c9d267d + '\x01';
  _DAT_14c9d5258 = 0x100000000;
  if (*(char *)(_DAT_14c9d5240 + 100) != '\0') {
    DAT_14c9d267e = DAT_14c9d267e + '\x01';
  }
  return;
}



// FUNCTION 145e50d36 FUN_145e50d36 body=261 status=ok
// SIG undefined FUN_145e50d36(void)

void FUN_145e50d36(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d4bd8) {
    FUN_144b3d300(&DAT_14c9d4bd8);
    if (DAT_14c9d4bd8 == -1) {
      FUN_145e50e3c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x104;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9d4b58,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c4e31e);
      _Init_thread_footer(&DAT_14c9d4bd8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e50e3c FUN_145e50e3c body=226 status=ok
// SIG undefined FUN_145e50e3c(void)

longlong * FUN_145e50e3c(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462c9e0a;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e50f24 FUN_145e50f24 body=132 status=ok
// SIG undefined FUN_145e50f24(void)

undefined1 * FUN_145e50f24(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutputResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x105;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e50f20;
}



// FUNCTION 145e50fa8 FUN_145e50fa8 body=138 status=ok
// SIG undefined FUN_145e50fa8(void)

code * FUN_145e50fa8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InputBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000106;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e50f24;
}



// FUNCTION 145e51032 FUN_145e51032 body=292 status=ok
// SIG undefined FUN_145e51032(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e51032(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d59a8) {
    FUN_144b3d300(&DAT_14c9d59a8);
    if (DAT_14c9d59a8 == -1) {
      FUN_145e512a0();
      FUN_145e51156();
      FUN_140db5666(&DAT_14c9d5900,0,&DAT_14c9d5898,L"FHairMacroGroupAABBCS",
                    L"/Engine/Private/HairStrands/HairStrandsAABB.usf",L"Main",5,1,FUN_14717ced4,
                    FUN_14717ce74,&LAB_1462ca37e,&LAB_14717ce70,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14c9d9e88);
      _DAT_14c9d5900 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c581bd);
      _Init_thread_footer(&DAT_14c9d59a8);
    }
  }
  return &DAT_14c9d5900;
}



// FUNCTION 145e51156 FUN_145e51156 body=205 status=ok
// SIG undefined FUN_145e51156(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e51156(void)

{
  if ((DAT_14c9d58ff & 2) == 0) {
    DAT_14c9d58ff = DAT_14c9d58ff | 2;
    _DAT_14c9d58a0 = L"FHairMacroGroupAABBCS";
    _DAT_14c9d58b8 = FUN_146826540;
    _DAT_14c9d58c0 = FUN_146825d77;
    _DAT_14c9d58c8 = FUN_146825fd6;
    _DAT_14c9d58d0 = FUN_1407e02ea;
    _DAT_14c9d58d8 = FUN_146826273;
    _DAT_14c9d58b0 = FUN_14717ce42;
    _DAT_14c9d58f0 = 0xffffffff000000e0;
    _DAT_14c9d58f8 = 8;
    DAT_14c9d58fc = 0;
    _DAT_14c9d58e0 = &LAB_14717ce6c;
    FUN_145e51224();
    FUN_1407e00cc(&DAT_14c9d5898);
    return;
  }
  return;
}



// FUNCTION 145e51224 FUN_145e51224 body=123 status=ok
// SIG undefined FUN_145e51224(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e51224(void)

{
  _DAT_14c9db690 = L"BASE";
  DAT_14c9db6ba = 4;
  _DAT_14c9db698 = FUN_140b35ae4();
  _DAT_14c9db6a0 = DAT_14c9d58a8;
  _DAT_14c9db6a8 = &LAB_14682652b;
  DAT_14c9d58a8 = &DAT_14c9db690;
  DAT_14c9d58fd = DAT_14c9d58fd + '\x01';
  _DAT_14c9db6b0 = 0x100000000;
  if (*(char *)(_DAT_14c9db698 + 100) != '\0') {
    DAT_14c9d58fe = DAT_14c9d58fe + '\x01';
  }
  return;
}



// FUNCTION 145e512a0 FUN_145e512a0 body=261 status=ok
// SIG undefined FUN_145e512a0(void)

void FUN_145e512a0(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d9f08) {
    FUN_144b3d300(&DAT_14c9d9f08);
    if (DAT_14c9d9f08 == -1) {
      FUN_145e513a6(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0x1a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9d9e88,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c6f266);
      _Init_thread_footer(&DAT_14c9d9f08);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e513a6 FUN_145e513a6 body=226 status=ok
// SIG undefined FUN_145e513a6(void)

longlong * FUN_145e513a6(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462ca7f8;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e5148e FUN_145e5148e body=132 status=ok
// SIG undefined FUN_145e5148e(void)

undefined1 * FUN_145e5148e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PassCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e5148a;
}



// FUNCTION 145e51512 FUN_145e51512 body=138 status=ok
// SIG undefined FUN_145e51512(void)

code * FUN_145e51512(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NumPixelPerVoxel";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000020;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147185d32;
}



// FUNCTION 145e5159c FUN_145e5159c body=292 status=ok
// SIG undefined FUN_145e5159c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e5159c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d66a8) {
    FUN_144b3d300(&DAT_14c9d66a8);
    if (DAT_14c9d66a8 == -1) {
      FUN_145e5180a();
      FUN_145e516c0();
      FUN_140db5666(&DAT_14c9d6600,0,&DAT_14c9d6598,L"FHairTileClearCS",
                    L"/Engine/Private/HairStrands/HairStrandsVisibilityTile.usf",L"TileMainCS",5,1,
                    FUN_14717ee00,FUN_14717eda0,&LAB_1462ca3c8,&LAB_14717ed9c,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9da130);
      _DAT_14c9d6600 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c60785);
      _Init_thread_footer(&DAT_14c9d66a8);
    }
  }
  return &DAT_14c9d6600;
}



// FUNCTION 145e516c0 FUN_145e516c0 body=205 status=ok
// SIG undefined FUN_145e516c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e516c0(void)

{
  if ((DAT_14c9d65ff & 2) == 0) {
    DAT_14c9d65ff = DAT_14c9d65ff | 2;
    _DAT_14c9d65a0 = L"FHairTileClearCS";
    _DAT_14c9d65b8 = FUN_146826540;
    _DAT_14c9d65c0 = FUN_146825d77;
    _DAT_14c9d65c8 = FUN_146825fd6;
    _DAT_14c9d65d0 = FUN_1407e02ea;
    _DAT_14c9d65d8 = FUN_146826273;
    _DAT_14c9d65b0 = FUN_14717ed6e;
    _DAT_14c9d65f0 = 0xffffffff000000e0;
    _DAT_14c9d65f8 = 8;
    DAT_14c9d65fc = 0;
    _DAT_14c9d65e0 = &LAB_14717ed98;
    FUN_145e5178e();
    FUN_1407e00cc(&DAT_14c9d6598);
    return;
  }
  return;
}



// FUNCTION 145e5178e FUN_145e5178e body=123 status=ok
// SIG undefined FUN_145e5178e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e5178e(void)

{
  _DAT_14c9db918 = L"BASE";
  DAT_14c9db942 = 4;
  _DAT_14c9db920 = FUN_140b35ae4();
  _DAT_14c9db928 = DAT_14c9d65a8;
  _DAT_14c9db930 = &LAB_14682652b;
  DAT_14c9d65a8 = &DAT_14c9db918;
  DAT_14c9d65fd = DAT_14c9d65fd + '\x01';
  _DAT_14c9db938 = 0x100000000;
  if (*(char *)(_DAT_14c9db920 + 100) != '\0') {
    DAT_14c9d65fe = DAT_14c9d65fe + '\x01';
  }
  return;
}



// FUNCTION 145e5180a FUN_145e5180a body=261 status=ok
// SIG undefined FUN_145e5180a(void)

void FUN_145e5180a(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9da1b0) {
    FUN_144b3d300(&DAT_14c9da1b0);
    if (DAT_14c9da1b0 == -1) {
      FUN_145e51910(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0x1be;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9da130,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c7047a);
      _Init_thread_footer(&DAT_14c9da1b0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e51910 FUN_145e51910 body=226 status=ok
// SIG undefined FUN_145e51910(void)

longlong * FUN_145e51910(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462caf88;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e519f8 FUN_145e519f8 body=132 status=ok
// SIG undefined FUN_145e519f8(void)

undefined1 * FUN_145e519f8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Resolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1bf;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e519f4;
}



// FUNCTION 145e51a7c FUN_145e51a7c body=138 status=ok
// SIG undefined FUN_145e51a7c(void)

code * FUN_145e51a7c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TileType";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c000001c3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471881de;
}



// FUNCTION 145e51b06 FUN_145e51b06 body=292 status=ok
// SIG undefined FUN_145e51b06(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e51b06(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d7428) {
    FUN_144b3d300(&DAT_14c9d7428);
    if (DAT_14c9d7428 == -1) {
      FUN_145e51d74();
      FUN_145e51c2a();
      FUN_140db5666(&DAT_14c9d7380,0,&DAT_14c9d7318,L"FHairLightSampleClearPS",
                    L"/Engine/Private/HairStrands/HairStrandsLightSample.usf",L"ClearPS",3,2,
                    FUN_147181336,FUN_1471812d6,&LAB_1462ca40e,&LAB_1471812d2,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9da570);
      _DAT_14c9d7380 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c647b4);
      _Init_thread_footer(&DAT_14c9d7428);
    }
  }
  return &DAT_14c9d7380;
}



// FUNCTION 145e51c2a FUN_145e51c2a body=205 status=ok
// SIG undefined FUN_145e51c2a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e51c2a(void)

{
  if ((DAT_14c9d737f & 2) == 0) {
    DAT_14c9d737f = DAT_14c9d737f | 2;
    _DAT_14c9d7320 = L"FHairLightSampleClearPS";
    _DAT_14c9d7338 = FUN_146826540;
    _DAT_14c9d7340 = FUN_146825d77;
    _DAT_14c9d7348 = FUN_146825fd6;
    _DAT_14c9d7350 = FUN_1407e02ea;
    _DAT_14c9d7358 = FUN_146826273;
    _DAT_14c9d7330 = FUN_1471812a4;
    _DAT_14c9d7370 = 0xffffffff000000e0;
    _DAT_14c9d7378 = 8;
    DAT_14c9d737c = 0;
    _DAT_14c9d7360 = &LAB_1471812ce;
    FUN_145e51cf8();
    FUN_1407e00cc(&DAT_14c9d7318);
    return;
  }
  return;
}



// FUNCTION 145e51cf8 FUN_145e51cf8 body=123 status=ok
// SIG undefined FUN_145e51cf8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e51cf8(void)

{
  _DAT_14c9dba98 = L"BASE";
  DAT_14c9dbac2 = 4;
  _DAT_14c9dbaa0 = FUN_140b35ae4();
  _DAT_14c9dbaa8 = DAT_14c9d7328;
  _DAT_14c9dbab0 = &LAB_14682652b;
  DAT_14c9d7328 = &DAT_14c9dba98;
  DAT_14c9d737d = DAT_14c9d737d + '\x01';
  _DAT_14c9dbab8 = 0x100000000;
  if (*(char *)(_DAT_14c9dbaa0 + 100) != '\0') {
    DAT_14c9d737e = DAT_14c9d737e + '\x01';
  }
  return;
}



// FUNCTION 145e51d74 FUN_145e51d74 body=261 status=ok
// SIG undefined FUN_145e51d74(void)

void FUN_145e51d74(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9da5f0) {
    FUN_144b3d300(&DAT_14c9da5f0);
    if (DAT_14c9da5f0 == -1) {
      FUN_145e51e7a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x110;
      local_58 = 0x16d;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9da570,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c71ca9);
      _Init_thread_footer(&DAT_14c9da5f0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e51e7a FUN_145e51e7a body=226 status=ok
// SIG undefined FUN_145e51e7a(void)

longlong * FUN_145e51e7a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462cbeda;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e51f62 FUN_145e51f62 body=132 status=ok
// SIG undefined FUN_145e51f62(void)

undefined1 * FUN_145e51f62(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MaxViewportResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x16e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e51f5e;
}



// FUNCTION 145e51fe6 FUN_145e51fe6 body=138 status=ok
// SIG undefined FUN_145e51fe6(void)

code * FUN_145e51fe6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HairNodeCountBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000016f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e51f62;
}



// FUNCTION 145e52070 FUN_145e52070 body=292 status=ok
// SIG undefined FUN_145e52070(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e52070(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d7840) {
    FUN_144b3d300(&DAT_14c9d7840);
    if (DAT_14c9d7840 == -1) {
      FUN_145e522de();
      FUN_145e52194();
      FUN_140db5666(&DAT_14c9d7798,0,&DAT_14c9d7730,L"FUpdateSampleCoverageCS",
                    L"/Engine/Private/HairStrands/HairStrandsVisibilityComputeSampleCoverage.usf",
                    L"MainCS",5,1,FUN_147181c12,FUN_147181bb2,&LAB_1462ca418,&LAB_147181bae,
                    &LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9da728);
      _DAT_14c9d7798 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c6604b);
      _Init_thread_footer(&DAT_14c9d7840);
    }
  }
  return &DAT_14c9d7798;
}



// FUNCTION 145e52194 FUN_145e52194 body=205 status=ok
// SIG undefined FUN_145e52194(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e52194(void)

{
  if ((DAT_14c9d7797 & 2) == 0) {
    DAT_14c9d7797 = DAT_14c9d7797 | 2;
    _DAT_14c9d7738 = L"FUpdateSampleCoverageCS";
    _DAT_14c9d7750 = FUN_146826540;
    _DAT_14c9d7758 = FUN_146825d77;
    _DAT_14c9d7760 = FUN_146825fd6;
    _DAT_14c9d7768 = FUN_1407e02ea;
    _DAT_14c9d7770 = FUN_146826273;
    _DAT_14c9d7748 = FUN_147181b80;
    _DAT_14c9d7788 = 0xffffffff000000e0;
    _DAT_14c9d7790 = 8;
    DAT_14c9d7794 = 0;
    _DAT_14c9d7778 = &LAB_147181baa;
    FUN_145e52262();
    FUN_1407e00cc(&DAT_14c9d7730);
    return;
  }
  return;
}



// FUNCTION 145e52262 FUN_145e52262 body=123 status=ok
// SIG undefined FUN_145e52262(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e52262(void)

{
  _DAT_14c9dbb28 = L"BASE";
  DAT_14c9dbb52 = 4;
  _DAT_14c9dbb30 = FUN_140b35ae4();
  _DAT_14c9dbb38 = DAT_14c9d7740;
  _DAT_14c9dbb40 = &LAB_14682652b;
  DAT_14c9d7740 = &DAT_14c9dbb28;
  DAT_14c9d7795 = DAT_14c9d7795 + '\x01';
  _DAT_14c9dbb48 = 0x100000000;
  if (*(char *)(_DAT_14c9dbb30 + 100) != '\0') {
    DAT_14c9d7796 = DAT_14c9d7796 + '\x01';
  }
  return;
}



// FUNCTION 145e522de FUN_145e522de body=261 status=ok
// SIG undefined FUN_145e522de(void)

void FUN_145e522de(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9da7a8) {
    FUN_144b3d300(&DAT_14c9da7a8);
    if (DAT_14c9da7a8 == -1) {
      FUN_145e523e4(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x394;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9da728,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c71cb5);
      _Init_thread_footer(&DAT_14c9da7a8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e523e4 FUN_145e523e4 body=226 status=ok
// SIG undefined FUN_145e523e4(void)

longlong * FUN_145e523e4(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462cc072;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e524cc FUN_145e524cc body=132 status=ok
// SIG undefined FUN_145e524cc(void)

undefined1 * FUN_145e524cc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Resolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x395;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e524c8;
}



// FUNCTION 145e52550 FUN_145e52550 body=138 status=ok
// SIG undefined FUN_145e52550(void)

code * FUN_145e52550(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InNodeDataBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<FPackedHairSample>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000397;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14718b772;
}



// FUNCTION 145e525da FUN_145e525da body=292 status=ok
// SIG undefined FUN_145e525da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e525da(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d87e8) {
    FUN_144b3d300(&DAT_14c9d87e8);
    if (DAT_14c9d87e8 == -1) {
      FUN_145e52848();
      FUN_145e526fe();
      FUN_140db5666(&DAT_14c9d8740,0,&DAT_14c9d86d8,L"FCopyIndirectBufferCS",
                    L"/Engine/Private/HairStrands/HairStrandsVisibilityCopyIndirectArg.usf",
                    L"CopyCS",5,1,FUN_147184510,FUN_1471844b0,&LAB_1462ca436,&LAB_1471844ac,
                    &LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9da9d0);
      _DAT_14c9d8740 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c6611d);
      _Init_thread_footer(&DAT_14c9d87e8);
    }
  }
  return &DAT_14c9d8740;
}



// FUNCTION 145e526fe FUN_145e526fe body=205 status=ok
// SIG undefined FUN_145e526fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e526fe(void)

{
  if ((DAT_14c9d873f & 2) == 0) {
    DAT_14c9d873f = DAT_14c9d873f | 2;
    _DAT_14c9d86e0 = L"FCopyIndirectBufferCS";
    _DAT_14c9d86f8 = FUN_146826540;
    _DAT_14c9d8700 = FUN_146825d77;
    _DAT_14c9d8708 = FUN_146825fd6;
    _DAT_14c9d8710 = FUN_1407e02ea;
    _DAT_14c9d8718 = FUN_146826273;
    _DAT_14c9d86f0 = FUN_14718447e;
    _DAT_14c9d8730 = 0xffffffff000000e0;
    _DAT_14c9d8738 = 8;
    DAT_14c9d873c = 0;
    _DAT_14c9d8720 = &LAB_1471844a8;
    FUN_145e527cc();
    FUN_1407e00cc(&DAT_14c9d86d8);
    return;
  }
  return;
}



// FUNCTION 145e527cc FUN_145e527cc body=123 status=ok
// SIG undefined FUN_145e527cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e527cc(void)

{
  _DAT_14c9dc098 = L"BASE";
  DAT_14c9dc0c2 = 4;
  _DAT_14c9dc0a0 = FUN_140b35ae4();
  _DAT_14c9dc0a8 = DAT_14c9d86e8;
  _DAT_14c9dc0b0 = &LAB_14682652b;
  DAT_14c9d86e8 = &DAT_14c9dc098;
  DAT_14c9d873d = DAT_14c9d873d + '\x01';
  _DAT_14c9dc0b8 = 0x100000000;
  if (*(char *)(_DAT_14c9dc0a0 + 100) != '\0') {
    DAT_14c9d873e = DAT_14c9d873e + '\x01';
  }
  return;
}



// FUNCTION 145e52848 FUN_145e52848 body=261 status=ok
// SIG undefined FUN_145e52848(void)

void FUN_145e52848(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9daa50) {
    FUN_144b3d300(&DAT_14c9daa50);
    if (DAT_14c9daa50 == -1) {
      FUN_145e5294e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x79b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9da9d0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c71cf1);
      _Init_thread_footer(&DAT_14c9daa50);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e5294e FUN_145e5294e body=226 status=ok
// SIG undefined FUN_145e5294e(void)

longlong * FUN_145e5294e(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462cc556;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e52a36 FUN_145e52a36 body=132 status=ok
// SIG undefined FUN_145e52a36(void)

undefined1 * FUN_145e52a36(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ThreadGroupSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x79c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e52a32;
}



// FUNCTION 145e52aba FUN_145e52aba body=138 status=ok
// SIG undefined FUN_145e52aba(void)

code * FUN_145e52aba(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CounterBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000079e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14718c004;
}



// FUNCTION 145e52b44 FUN_145e52b44 body=292 status=ok
// SIG undefined FUN_145e52b44(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e52b44(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9de910) {
    FUN_144b3d300(&DAT_14c9de910);
    if (DAT_14c9de910 == -1) {
      FUN_145e52db2();
      FUN_145e52c68();
      FUN_140db5666(&DAT_14c9de868,0,&DAT_14c9de800,L"FDilateExistenceMaskCS",
                    L"/Engine/Private/HeterogeneousVolumes/HeterogeneousVolumesLiveShadingGlobalPipeline.usf"
                    ,L"DilateExistenceMaskCS",5,1,FUN_14719ad68,FUN_14719ad08,&LAB_14719accc,
                    &LAB_14719acc8,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9e07f8);
      _DAT_14c9de868 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c9866f);
      _Init_thread_footer(&DAT_14c9de910);
    }
  }
  return &DAT_14c9de868;
}



// FUNCTION 145e52c68 FUN_145e52c68 body=205 status=ok
// SIG undefined FUN_145e52c68(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e52c68(void)

{
  if ((DAT_14c9de867 & 2) == 0) {
    DAT_14c9de867 = DAT_14c9de867 | 2;
    _DAT_14c9de808 = L"FDilateExistenceMaskCS";
    _DAT_14c9de820 = FUN_146826540;
    _DAT_14c9de828 = FUN_146825d77;
    _DAT_14c9de830 = FUN_146825fd6;
    _DAT_14c9de838 = FUN_1407e02ea;
    _DAT_14c9de840 = FUN_146826273;
    _DAT_14c9de818 = FUN_14719ac9a;
    _DAT_14c9de858 = 0xffffffff000000e0;
    _DAT_14c9de860 = 8;
    DAT_14c9de864 = 0;
    _DAT_14c9de848 = &LAB_14719acc4;
    FUN_145e52d36();
    FUN_1407e00cc(&DAT_14c9de800);
    return;
  }
  return;
}



// FUNCTION 145e52d36 FUN_145e52d36 body=123 status=ok
// SIG undefined FUN_145e52d36(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e52d36(void)

{
  _DAT_14c9e1900 = L"BASE";
  DAT_14c9e192a = 4;
  _DAT_14c9e1908 = FUN_140b35ae4();
  _DAT_14c9e1910 = DAT_14c9de810;
  _DAT_14c9e1918 = &LAB_14682652b;
  DAT_14c9de810 = &DAT_14c9e1900;
  DAT_14c9de865 = DAT_14c9de865 + '\x01';
  _DAT_14c9e1920 = 0x100000000;
  if (*(char *)(_DAT_14c9e1908 + 100) != '\0') {
    DAT_14c9de866 = DAT_14c9de866 + '\x01';
  }
  return;
}



// FUNCTION 145e52db2 FUN_145e52db2 body=261 status=ok
// SIG undefined FUN_145e52db2(void)

void FUN_145e52db2(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e0878) {
    FUN_144b3d300(&DAT_14c9e0878);
    if (DAT_14c9e0878 == -1) {
      FUN_145e52eb8(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x162;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e07f8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ca0e39);
      _Init_thread_footer(&DAT_14c9e0878);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e52eb8 FUN_145e52eb8 body=226 status=ok
// SIG undefined FUN_145e52eb8(void)

longlong * FUN_145e52eb8(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462cf294;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e52fa0 FUN_145e52fa0 body=132 status=ok
// SIG undefined FUN_145e52fa0(void)

undefined1 * FUN_145e52fa0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TextureResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x163;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e52f9c;
}



// FUNCTION 145e53024 FUN_145e53024 body=138 status=ok
// SIG undefined FUN_145e53024(void)

code * FUN_145e53024(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TextureSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000165;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a7470;
}



// FUNCTION 145e530ae FUN_145e530ae body=292 status=ok
// SIG undefined FUN_145e530ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e530ae(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9deb60) {
    FUN_144b3d300(&DAT_14c9deb60);
    if (DAT_14c9deb60 == -1) {
      FUN_145e5331c();
      FUN_145e531d2();
      FUN_140db5666(&DAT_14c9deab8,0,&DAT_14c9dea50,L"FConvertTexture3DFixedPointToFloatCS",
                    L"/Engine/Private/HeterogeneousVolumes/HeterogeneousVolumesLiveShadingGlobalPipeline.usf"
                    ,L"ConvertTexture3DFixedPointToFloatCS",5,1,FUN_14719b046,FUN_14719afe6,
                    &LAB_14719afaa,&LAB_14719afa6,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9e09c0)
      ;
      _DAT_14c9deab8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c99d42);
      _Init_thread_footer(&DAT_14c9deb60);
    }
  }
  return &DAT_14c9deab8;
}



// FUNCTION 145e531d2 FUN_145e531d2 body=205 status=ok
// SIG undefined FUN_145e531d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e531d2(void)

{
  if ((DAT_14c9deab7 & 2) == 0) {
    DAT_14c9deab7 = DAT_14c9deab7 | 2;
    _DAT_14c9dea58 = L"FConvertTexture3DFixedPointToFloatCS";
    _DAT_14c9dea70 = FUN_146826540;
    _DAT_14c9dea78 = FUN_146825d77;
    _DAT_14c9dea80 = FUN_146825fd6;
    _DAT_14c9dea88 = FUN_1407e02ea;
    _DAT_14c9dea90 = FUN_146826273;
    _DAT_14c9dea68 = FUN_14719af78;
    _DAT_14c9deaa8 = 0xffffffff000000e0;
    _DAT_14c9deab0 = 8;
    DAT_14c9deab4 = 0;
    _DAT_14c9dea98 = &LAB_14719afa2;
    FUN_145e532a0();
    FUN_1407e00cc(&DAT_14c9dea50);
    return;
  }
  return;
}



// FUNCTION 145e532a0 FUN_145e532a0 body=123 status=ok
// SIG undefined FUN_145e532a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e532a0(void)

{
  _DAT_14c9e1960 = L"BASE";
  DAT_14c9e198a = 4;
  _DAT_14c9e1968 = FUN_140b35ae4();
  _DAT_14c9e1970 = DAT_14c9dea60;
  _DAT_14c9e1978 = &LAB_14682652b;
  DAT_14c9dea60 = &DAT_14c9e1960;
  DAT_14c9deab5 = DAT_14c9deab5 + '\x01';
  _DAT_14c9e1980 = 0x100000000;
  if (*(char *)(_DAT_14c9e1968 + 100) != '\0') {
    DAT_14c9deab6 = DAT_14c9deab6 + '\x01';
  }
  return;
}



// FUNCTION 145e5331c FUN_145e5331c body=261 status=ok
// SIG undefined FUN_145e5331c(void)

void FUN_145e5331c(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e0a40) {
    FUN_144b3d300(&DAT_14c9e0a40);
    if (DAT_14c9e0a40 == -1) {
      FUN_145e53422(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x299;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e09c0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ca0e5d);
      _Init_thread_footer(&DAT_14c9e0a40);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e53422 FUN_145e53422 body=226 status=ok
// SIG undefined FUN_145e53422(void)

longlong * FUN_145e53422(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462cf3a4;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e5350a FUN_145e5350a body=132 status=ok
// SIG undefined FUN_145e5350a(void)

undefined1 * FUN_145e5350a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TextureResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x29a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e53506;
}



// FUNCTION 145e5358e FUN_145e5358e body=138 status=ok
// SIG undefined FUN_145e5358e(void)

code * FUN_145e5358e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"UIntTexture3D";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture3D<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000029b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e5350a;
}



// FUNCTION 145e53618 FUN_145e53618 body=292 status=ok
// SIG undefined FUN_145e53618(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e53618(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9dfd98) {
    FUN_144b3d300(&DAT_14c9dfd98);
    if (DAT_14c9dfd98 == -1) {
      FUN_145e53886();
      FUN_145e5373c();
      FUN_140db5666(&DAT_14c9dfcf0,0,&DAT_14c9dfc88,L"FGenerateMips3D",
                    L"/Engine/Private/HeterogeneousVolumes/HeterogeneousVolumesPreshadingPipeline.usf"
                    ,L"GenerateMips3D",5,1,FUN_14719f80c,FUN_14719f7ac,&LAB_14719f770,&LAB_14719f76c
                    ,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9e1370);
      _DAT_14c9dfcf0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c9e683);
      _Init_thread_footer(&DAT_14c9dfd98);
    }
  }
  return &DAT_14c9dfcf0;
}



// FUNCTION 145e5373c FUN_145e5373c body=205 status=ok
// SIG undefined FUN_145e5373c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e5373c(void)

{
  if ((DAT_14c9dfcef & 2) == 0) {
    DAT_14c9dfcef = DAT_14c9dfcef | 2;
    _DAT_14c9dfc90 = L"FGenerateMips3D";
    _DAT_14c9dfca8 = FUN_146826540;
    _DAT_14c9dfcb0 = FUN_146825d77;
    _DAT_14c9dfcb8 = FUN_146825fd6;
    _DAT_14c9dfcc0 = FUN_1407e02ea;
    _DAT_14c9dfcc8 = FUN_146826273;
    _DAT_14c9dfca0 = FUN_14719f73e;
    _DAT_14c9dfce0 = 0xffffffff000000e0;
    _DAT_14c9dfce8 = 8;
    DAT_14c9dfcec = 0;
    _DAT_14c9dfcd0 = &LAB_14719f768;
    FUN_145e5380a();
    FUN_1407e00cc(&DAT_14c9dfc88);
    return;
  }
  return;
}



// FUNCTION 145e5380a FUN_145e5380a body=123 status=ok
// SIG undefined FUN_145e5380a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e5380a(void)

{
  _DAT_14c9e1cb8 = L"BASE";
  DAT_14c9e1ce2 = 4;
  _DAT_14c9e1cc0 = FUN_140b35ae4();
  _DAT_14c9e1cc8 = DAT_14c9dfc98;
  _DAT_14c9e1cd0 = &LAB_14682652b;
  DAT_14c9dfc98 = &DAT_14c9e1cb8;
  DAT_14c9dfced = DAT_14c9dfced + '\x01';
  _DAT_14c9e1cd8 = 0x100000000;
  if (*(char *)(_DAT_14c9e1cc0 + 100) != '\0') {
    DAT_14c9dfcee = DAT_14c9dfcee + '\x01';
  }
  return;
}



// FUNCTION 145e53886 FUN_145e53886 body=261 status=ok
// SIG undefined FUN_145e53886(void)

void FUN_145e53886(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e13f0) {
    FUN_144b3d300(&DAT_14c9e13f0);
    if (DAT_14c9e13f0 == -1) {
      FUN_145e5398c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x59f;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e1370,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ca48c3);
      _Init_thread_footer(&DAT_14c9e13f0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e5398c FUN_145e5398c body=226 status=ok
// SIG undefined FUN_145e5398c(void)

longlong * FUN_145e5398c(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462d1160;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e53a74 FUN_145e53a74 body=132 status=ok
// SIG undefined FUN_145e53a74(void)

undefined1 * FUN_145e53a74(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InputTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture3D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5a1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e53a70;
}



// FUNCTION 145e53af8 FUN_145e53af8 body=138 status=ok
// SIG undefined FUN_145e53af8(void)

code * FUN_145e53af8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TextureResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000005a4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471b0bfc;
}



// FUNCTION 145e53b82 FUN_145e53b82 body=292 status=ok
// SIG undefined FUN_145e53b82(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e53b82(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e2070) {
    FUN_144b3d300(&DAT_14c9e2070);
    if (DAT_14c9e2070 == -1) {
      FUN_145e53df0();
      FUN_145e53ca6();
      FUN_140db5666(&DAT_14c9e1fc8,0,&DAT_14c9e1f60,L"FCopyTexture3D",
                    L"/Engine/Private/HeterogeneousVolumes/HeterogeneousVolumesPreshadingPipeline.usf"
                    ,L"CopyTexture3D",5,1,FUN_1471b5a1c,FUN_1471b59bc,&LAB_1471b5980,&LAB_1471b597c,
                    &LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9e5980);
      _DAT_14c9e1fc8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142caaeb4);
      _Init_thread_footer(&DAT_14c9e2070);
    }
  }
  return &DAT_14c9e1fc8;
}



// FUNCTION 145e53ca6 FUN_145e53ca6 body=205 status=ok
// SIG undefined FUN_145e53ca6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e53ca6(void)

{
  if ((DAT_14c9e1fc7 & 2) == 0) {
    DAT_14c9e1fc7 = DAT_14c9e1fc7 | 2;
    _DAT_14c9e1f68 = L"FCopyTexture3D";
    _DAT_14c9e1f80 = FUN_146826540;
    _DAT_14c9e1f88 = FUN_146825d77;
    _DAT_14c9e1f90 = FUN_146825fd6;
    _DAT_14c9e1f98 = FUN_1407e02ea;
    _DAT_14c9e1fa0 = FUN_146826273;
    _DAT_14c9e1f78 = FUN_1471b594e;
    _DAT_14c9e1fb8 = 0xffffffff000000e0;
    _DAT_14c9e1fc0 = 8;
    DAT_14c9e1fc4 = 0;
    _DAT_14c9e1fa8 = &LAB_1471b5978;
    FUN_145e53d74();
    FUN_1407e00cc(&DAT_14c9e1f60);
    return;
  }
  return;
}



// FUNCTION 145e53d74 FUN_145e53d74 body=123 status=ok
// SIG undefined FUN_145e53d74(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e53d74(void)

{
  _DAT_14c9e6b90 = L"BASE";
  DAT_14c9e6bba = 4;
  _DAT_14c9e6b98 = FUN_140b35ae4();
  _DAT_14c9e6ba0 = DAT_14c9e1f70;
  _DAT_14c9e6ba8 = &LAB_14682652b;
  DAT_14c9e1f70 = &DAT_14c9e6b90;
  DAT_14c9e1fc5 = DAT_14c9e1fc5 + '\x01';
  _DAT_14c9e6bb0 = 0x100000000;
  if (*(char *)(_DAT_14c9e6b98 + 100) != '\0') {
    DAT_14c9e1fc6 = DAT_14c9e1fc6 + '\x01';
  }
  return;
}



// FUNCTION 145e53df0 FUN_145e53df0 body=261 status=ok
// SIG undefined FUN_145e53df0(void)

void FUN_145e53df0(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e5a00) {
    FUN_144b3d300(&DAT_14c9e5a00);
    if (DAT_14c9e5a00 == -1) {
      FUN_145e53ef6(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x23;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e5980,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142cccef2);
      _Init_thread_footer(&DAT_14c9e5a00);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e53ef6 FUN_145e53ef6 body=226 status=ok
// SIG undefined FUN_145e53ef6(void)

longlong * FUN_145e53ef6(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462d1560;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e53fde FUN_145e53fde body=132 status=ok
// SIG undefined FUN_145e53fde(void)

undefined1 * FUN_145e53fde(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InputTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture3D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x25;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e53fda;
}



// FUNCTION 145e54062 FUN_145e54062 body=138 status=ok
// SIG undefined FUN_145e54062(void)

code * FUN_145e54062(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TextureResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000027;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471bf1a4;
}



// FUNCTION 145e540ec FUN_145e540ec body=292 status=ok
// SIG undefined FUN_145e540ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e540ec(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e22c0) {
    FUN_144b3d300(&DAT_14c9e22c0);
    if (DAT_14c9e22c0 == -1) {
      FUN_145e5435a();
      FUN_145e54210();
      FUN_140db5666(&DAT_14c9e2218,0,&DAT_14c9e21b0,L"FAllocateSparseVoxels",
                    L"/Engine/Private/HeterogeneousVolumes/HeterogeneousVolumesSparseVoxelPipeline.usf"
                    ,L"AllocateSparseVoxels",5,1,FUN_1471b5d40,FUN_1471b5ce0,&LAB_1471b5ca4,
                    &LAB_1471b5ca0,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9e5a90);
      _DAT_14c9e2218 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142cab249);
      _Init_thread_footer(&DAT_14c9e22c0);
    }
  }
  return &DAT_14c9e2218;
}



// FUNCTION 145e54210 FUN_145e54210 body=205 status=ok
// SIG undefined FUN_145e54210(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e54210(void)

{
  if ((DAT_14c9e2217 & 2) == 0) {
    DAT_14c9e2217 = DAT_14c9e2217 | 2;
    _DAT_14c9e21b8 = L"FAllocateSparseVoxels";
    _DAT_14c9e21d0 = FUN_146826540;
    _DAT_14c9e21d8 = FUN_146825d77;
    _DAT_14c9e21e0 = FUN_146825fd6;
    _DAT_14c9e21e8 = FUN_1407e02ea;
    _DAT_14c9e21f0 = FUN_146826273;
    _DAT_14c9e21c8 = FUN_1471b5c72;
    _DAT_14c9e2208 = 0xffffffff000000e0;
    _DAT_14c9e2210 = 8;
    DAT_14c9e2214 = 0;
    _DAT_14c9e21f8 = &LAB_1471b5c9c;
    FUN_145e542de();
    FUN_1407e00cc(&DAT_14c9e21b0);
    return;
  }
  return;
}



// FUNCTION 145e542de FUN_145e542de body=123 status=ok
// SIG undefined FUN_145e542de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e542de(void)

{
  _DAT_14c9e6bf0 = L"BASE";
  DAT_14c9e6c1a = 4;
  _DAT_14c9e6bf8 = FUN_140b35ae4();
  _DAT_14c9e6c00 = DAT_14c9e21c0;
  _DAT_14c9e6c08 = &LAB_14682652b;
  DAT_14c9e21c0 = &DAT_14c9e6bf0;
  DAT_14c9e2215 = DAT_14c9e2215 + '\x01';
  _DAT_14c9e6c10 = 0x100000000;
  if (*(char *)(_DAT_14c9e6bf8 + 100) != '\0') {
    DAT_14c9e2216 = DAT_14c9e2216 + '\x01';
  }
  return;
}



// FUNCTION 145e5435a FUN_145e5435a body=261 status=ok
// SIG undefined FUN_145e5435a(void)

void FUN_145e5435a(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e5b10) {
    FUN_144b3d300(&DAT_14c9e5b10);
    if (DAT_14c9e5b10 == -1) {
      FUN_145e54460(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x74;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e5a90,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142cccf0a);
      _Init_thread_footer(&DAT_14c9e5b10);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e54460 FUN_145e54460 body=226 status=ok
// SIG undefined FUN_145e54460(void)

longlong * FUN_145e54460(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462d166a;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e54548 FUN_145e54548 body=132 status=ok
// SIG undefined FUN_145e54548(void)

undefined1 * FUN_145e54548(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VoxelMinTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture3D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x76;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e54544;
}



// FUNCTION 145e545cc FUN_145e545cc body=138 status=ok
// SIG undefined FUN_145e545cc(void)

code * FUN_145e545cc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWNumVoxelsBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000007b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471bf22e;
}



// FUNCTION 145e54656 FUN_145e54656 body=292 status=ok
// SIG undefined FUN_145e54656(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e54656(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e3128) {
    FUN_144b3d300(&DAT_14c9e3128);
    if (DAT_14c9e3128 == -1) {
      FUN_145e548c4();
      FUN_145e5477a();
      FUN_140db5666(&DAT_14c9e3080,0,&DAT_14c9e3018,L"FSetRasterizeBottomLevelGridIndirectArgs",
                    L"/Engine/Private/HeterogeneousVolumes/HeterogeneousVolumesVoxelGridPipeline.usf"
                    ,L"SetRasterizeBottomLevelGridIndirectArgs",5,1,FUN_1471b6ae2,FUN_1471b6a82,
                    &LAB_1471b6a46,&LAB_1471b6a42,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9e5ed0)
      ;
      _DAT_14c9e3080 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142cad898);
      _Init_thread_footer(&DAT_14c9e3128);
    }
  }
  return &DAT_14c9e3080;
}



// FUNCTION 145e5477a FUN_145e5477a body=205 status=ok
// SIG undefined FUN_145e5477a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e5477a(void)

{
  if ((DAT_14c9e307f & 2) == 0) {
    DAT_14c9e307f = DAT_14c9e307f | 2;
    _DAT_14c9e3020 = L"FSetRasterizeBottomLevelGridIndirectArgs";
    _DAT_14c9e3038 = FUN_146826540;
    _DAT_14c9e3040 = FUN_146825d77;
    _DAT_14c9e3048 = FUN_146825fd6;
    _DAT_14c9e3050 = FUN_1407e02ea;
    _DAT_14c9e3058 = FUN_146826273;
    _DAT_14c9e3030 = FUN_1471b6a14;
    _DAT_14c9e3070 = 0xffffffff000000e0;
    _DAT_14c9e3078 = 8;
    DAT_14c9e307c = 0;
    _DAT_14c9e3060 = &LAB_1471b6a3e;
    FUN_145e54848();
    FUN_1407e00cc(&DAT_14c9e3018);
    return;
  }
  return;
}



// FUNCTION 145e54848 FUN_145e54848 body=123 status=ok
// SIG undefined FUN_145e54848(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e54848(void)

{
  _DAT_14c9e6d70 = L"BASE";
  DAT_14c9e6d9a = 4;
  _DAT_14c9e6d78 = FUN_140b35ae4();
  _DAT_14c9e6d80 = DAT_14c9e3028;
  _DAT_14c9e6d88 = &LAB_14682652b;
  DAT_14c9e3028 = &DAT_14c9e6d70;
  DAT_14c9e307d = DAT_14c9e307d + '\x01';
  _DAT_14c9e6d90 = 0x100000000;
  if (*(char *)(_DAT_14c9e6d78 + 100) != '\0') {
    DAT_14c9e307e = DAT_14c9e307e + '\x01';
  }
  return;
}



// FUNCTION 145e548c4 FUN_145e548c4 body=261 status=ok
// SIG undefined FUN_145e548c4(void)

void FUN_145e548c4(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e5f50) {
    FUN_144b3d300(&DAT_14c9e5f50);
    if (DAT_14c9e5f50 == -1) {
      FUN_145e549ca(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x328;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e5ed0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142cccf6a);
      _Init_thread_footer(&DAT_14c9e5f50);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e549ca FUN_145e549ca body=226 status=ok
// SIG undefined FUN_145e549ca(void)

longlong * FUN_145e549ca(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462d210e;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e54ab2 FUN_145e54ab2 body=132 status=ok
// SIG undefined FUN_145e54ab2(void)

undefined1 * FUN_145e54ab2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MaxDispatchThreadGroupsPerDimension";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x329;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e54aae;
}



// FUNCTION 145e54b36 FUN_145e54b36 body=138 status=ok
// SIG undefined FUN_145e54b36(void)

code * FUN_145e54b36(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RasterTileAllocatorBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000032b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e54ab2;
}



// FUNCTION 145e54bc0 FUN_145e54bc0 body=292 status=ok
// SIG undefined FUN_145e54bc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e54bc0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e3378) {
    FUN_144b3d300(&DAT_14c9e3378);
    if (DAT_14c9e3378 == -1) {
      FUN_145e54e2e();
      FUN_145e54ce4();
      FUN_140db5666(&DAT_14c9e32d0,0,&DAT_14c9e3268,L"FTopLevelCreateBitmaskCS",
                    L"/Engine/Private/HeterogeneousVolumes/HeterogeneousVolumesVoxelGridPipeline.usf"
                    ,L"TopLevelCreateBitmaskCS",5,1,FUN_1471b6cc8,FUN_1471b6c68,&LAB_1471b6c2c,
                    &LAB_1471b6c28,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9e5fe0);
      _DAT_14c9e32d0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142cad904);
      _Init_thread_footer(&DAT_14c9e3378);
    }
  }
  return &DAT_14c9e32d0;
}



// FUNCTION 145e54ce4 FUN_145e54ce4 body=205 status=ok
// SIG undefined FUN_145e54ce4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e54ce4(void)

{
  if ((DAT_14c9e32cf & 2) == 0) {
    DAT_14c9e32cf = DAT_14c9e32cf | 2;
    _DAT_14c9e3270 = L"FTopLevelCreateBitmaskCS";
    _DAT_14c9e3288 = FUN_146826540;
    _DAT_14c9e3290 = FUN_146825d77;
    _DAT_14c9e3298 = FUN_146825fd6;
    _DAT_14c9e32a0 = FUN_1407e02ea;
    _DAT_14c9e32a8 = FUN_146826273;
    _DAT_14c9e3280 = FUN_1471b6bfa;
    _DAT_14c9e32c0 = 0xffffffff000000e0;
    _DAT_14c9e32c8 = 8;
    DAT_14c9e32cc = 0;
    _DAT_14c9e32b0 = &LAB_1471b6c24;
    FUN_145e54db2();
    FUN_1407e00cc(&DAT_14c9e3268);
    return;
  }
  return;
}



// FUNCTION 145e54db2 FUN_145e54db2 body=123 status=ok
// SIG undefined FUN_145e54db2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e54db2(void)

{
  _DAT_14c9e6dd0 = L"BASE";
  DAT_14c9e6dfa = 4;
  _DAT_14c9e6dd8 = FUN_140b35ae4();
  _DAT_14c9e6de0 = DAT_14c9e3278;
  _DAT_14c9e6de8 = &LAB_14682652b;
  DAT_14c9e3278 = &DAT_14c9e6dd0;
  DAT_14c9e32cd = DAT_14c9e32cd + '\x01';
  _DAT_14c9e6df0 = 0x100000000;
  if (*(char *)(_DAT_14c9e6dd8 + 100) != '\0') {
    DAT_14c9e32ce = DAT_14c9e32ce + '\x01';
  }
  return;
}



// FUNCTION 145e54e2e FUN_145e54e2e body=261 status=ok
// SIG undefined FUN_145e54e2e(void)

void FUN_145e54e2e(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e6060) {
    FUN_144b3d300(&DAT_14c9e6060);
    if (DAT_14c9e6060 == -1) {
      FUN_145e54f34(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x3d2;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e5fe0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142cccf82);
      _Init_thread_footer(&DAT_14c9e6060);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e54f34 FUN_145e54f34 body=226 status=ok
// SIG undefined FUN_145e54f34(void)

longlong * FUN_145e54f34(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462d2196;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e5501c FUN_145e5501c body=132 status=ok
// SIG undefined FUN_145e5501c(void)

undefined1 * FUN_145e5501c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TopLevelGridResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3d3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e55018;
}



// FUNCTION 145e550a0 FUN_145e550a0 body=138 status=ok
// SIG undefined FUN_145e550a0(void)

code * FUN_145e550a0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TopLevelGridBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<FTopLevelGridData>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000003d6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e5501c;
}



// FUNCTION 145e5512a FUN_145e5512a body=292 status=ok
// SIG undefined FUN_145e5512a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e5512a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e35c8) {
    FUN_144b3d300(&DAT_14c9e35c8);
    if (DAT_14c9e35c8 == -1) {
      FUN_145e55398();
      FUN_145e5524e();
      FUN_140db5666(&DAT_14c9e3520,0,&DAT_14c9e34b8,L"FDownsampleMajorantVoxelGridCS",
                    L"/Engine/Private/HeterogeneousVolumes/HeterogeneousVolumesVoxelGridPipeline.usf"
                    ,L"DownsampleMajorantVoxelGridCS",5,1,FUN_1471b6fec,FUN_1471b6f8c,&LAB_1471b6f50
                    ,&LAB_1471b6f4c,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9e60f0);
      _DAT_14c9e3520 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142cad91c);
      _Init_thread_footer(&DAT_14c9e35c8);
    }
  }
  return &DAT_14c9e3520;
}



// FUNCTION 145e5524e FUN_145e5524e body=205 status=ok
// SIG undefined FUN_145e5524e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e5524e(void)

{
  if ((DAT_14c9e351f & 2) == 0) {
    DAT_14c9e351f = DAT_14c9e351f | 2;
    _DAT_14c9e34c0 = L"FDownsampleMajorantVoxelGridCS";
    _DAT_14c9e34d8 = FUN_146826540;
    _DAT_14c9e34e0 = FUN_146825d77;
    _DAT_14c9e34e8 = FUN_146825fd6;
    _DAT_14c9e34f0 = FUN_1407e02ea;
    _DAT_14c9e34f8 = FUN_146826273;
    _DAT_14c9e34d0 = FUN_1471b6f1e;
    _DAT_14c9e3510 = 0xffffffff000000e0;
    _DAT_14c9e3518 = 8;
    DAT_14c9e351c = 0;
    _DAT_14c9e3500 = &LAB_1471b6f48;
    FUN_145e5531c();
    FUN_1407e00cc(&DAT_14c9e34b8);
    return;
  }
  return;
}



// FUNCTION 145e5531c FUN_145e5531c body=123 status=ok
// SIG undefined FUN_145e5531c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e5531c(void)

{
  _DAT_14c9e6e30 = L"BASE";
  DAT_14c9e6e5a = 4;
  _DAT_14c9e6e38 = FUN_140b35ae4();
  _DAT_14c9e6e40 = DAT_14c9e34c8;
  _DAT_14c9e6e48 = &LAB_14682652b;
  DAT_14c9e34c8 = &DAT_14c9e6e30;
  DAT_14c9e351d = DAT_14c9e351d + '\x01';
  _DAT_14c9e6e50 = 0x100000000;
  if (*(char *)(_DAT_14c9e6e38 + 100) != '\0') {
    DAT_14c9e351e = DAT_14c9e351e + '\x01';
  }
  return;
}



// FUNCTION 145e55398 FUN_145e55398 body=261 status=ok
// SIG undefined FUN_145e55398(void)

void FUN_145e55398(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e6170) {
    FUN_144b3d300(&DAT_14c9e6170);
    if (DAT_14c9e6170 == -1) {
      FUN_145e5549e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x455;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e60f0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142cccf9a);
      _Init_thread_footer(&DAT_14c9e6170);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e5549e FUN_145e5549e body=226 status=ok
// SIG undefined FUN_145e5549e(void)

longlong * FUN_145e5549e(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462d2328;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e55586 FUN_145e55586 body=132 status=ok
// SIG undefined FUN_145e55586(void)

undefined1 * FUN_145e55586(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InputDimensions";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x456;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e55582;
}



// FUNCTION 145e5560a FUN_145e5560a body=138 status=ok
// SIG undefined FUN_145e5560a(void)

code * FUN_145e5560a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InputBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<FScalarGridData>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000457;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e55586;
}



// FUNCTION 145e55694 FUN_145e55694 body=292 status=ok
// SIG undefined FUN_145e55694(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e55694(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e3fd0) {
    FUN_144b3d300(&DAT_14c9e3fd0);
    if (DAT_14c9e3fd0 == -1) {
      FUN_145e55902();
      FUN_145e557b8();
      FUN_140db5666(&DAT_14c9e3f28,0,&DAT_14c9e3ec0,L"FIESAtlasAddTexturePS",
                    L"/Engine/Private/IESAtlas.usf",L"MainPS",3,1,FUN_1471ba300,FUN_1471ba2a0,
                    &LAB_1471ba282,&LAB_1471ba27e,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9e6530)
      ;
      _DAT_14c9e3f28 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142cbd4db);
      _Init_thread_footer(&DAT_14c9e3fd0);
    }
  }
  return &DAT_14c9e3f28;
}



// FUNCTION 145e557b8 FUN_145e557b8 body=205 status=ok
// SIG undefined FUN_145e557b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e557b8(void)

{
  if ((DAT_14c9e3f27 & 2) == 0) {
    DAT_14c9e3f27 = DAT_14c9e3f27 | 2;
    _DAT_14c9e3ec8 = L"FIESAtlasAddTexturePS";
    _DAT_14c9e3ee0 = FUN_146826540;
    _DAT_14c9e3ee8 = FUN_146825d77;
    _DAT_14c9e3ef0 = FUN_146825fd6;
    _DAT_14c9e3ef8 = FUN_1407e02ea;
    _DAT_14c9e3f00 = FUN_146826273;
    _DAT_14c9e3ed8 = FUN_1471ba250;
    _DAT_14c9e3f18 = 0xffffffff000000e0;
    _DAT_14c9e3f20 = 8;
    DAT_14c9e3f24 = 0;
    _DAT_14c9e3f08 = &LAB_1471ba27a;
    FUN_145e55886();
    FUN_1407e00cc(&DAT_14c9e3ec0);
    return;
  }
  return;
}



// FUNCTION 145e55886 FUN_145e55886 body=123 status=ok
// SIG undefined FUN_145e55886(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e55886(void)

{
  _DAT_14c9e6fb0 = L"BASE";
  DAT_14c9e6fda = 4;
  _DAT_14c9e6fb8 = FUN_140b35ae4();
  _DAT_14c9e6fc0 = DAT_14c9e3ed0;
  _DAT_14c9e6fc8 = &LAB_14682652b;
  DAT_14c9e3ed0 = &DAT_14c9e6fb0;
  DAT_14c9e3f25 = DAT_14c9e3f25 + '\x01';
  _DAT_14c9e6fd0 = 0x100000000;
  if (*(char *)(_DAT_14c9e6fb8 + 100) != '\0') {
    DAT_14c9e3f26 = DAT_14c9e3f26 + '\x01';
  }
  return;
}



// FUNCTION 145e55902 FUN_145e55902 body=261 status=ok
// SIG undefined FUN_145e55902(void)

void FUN_145e55902(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e65b0) {
    FUN_144b3d300(&DAT_14c9e65b0);
    if (DAT_14c9e65b0 == -1) {
      FUN_145e55a08(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x120;
      local_58 = 0x119;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e6530,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142cccffa);
      _Init_thread_footer(&DAT_14c9e65b0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e55a08 FUN_145e55a08 body=226 status=ok
// SIG undefined FUN_145e55a08(void)

longlong * FUN_145e55a08(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462d2d8c;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e55af0 FUN_145e55af0 body=132 status=ok
// SIG undefined FUN_145e55af0(void)

undefined1 * FUN_145e55af0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x11a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e55aec;
}



// FUNCTION 145e55b74 FUN_145e55b74 body=138 status=ok
// SIG undefined FUN_145e55b74(void)

code * FUN_145e55b74(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000011b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e55af0;
}



// FUNCTION 145e55bfe FUN_145e55bfe body=205 status=ok
// SIG undefined FUN_145e55bfe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e55bfe(void)

{
  if ((DAT_14c9e9af7 & 2) == 0) {
    DAT_14c9e9af7 = DAT_14c9e9af7 | 2;
    _DAT_14c9e9a98 = L"FCopyStencilToLightingChannelsPS";
    _DAT_14c9e9ab0 = FUN_146826540;
    _DAT_14c9e9ab8 = FUN_146825d77;
    _DAT_14c9e9ac0 = FUN_146825fd6;
    _DAT_14c9e9ac8 = FUN_1407e02ea;
    _DAT_14c9e9ad0 = FUN_146826273;
    _DAT_14c9e9aa8 = FUN_1471d2f12;
    _DAT_14c9e9ae8 = 0xffffffff000000e0;
    _DAT_14c9e9af0 = 8;
    DAT_14c9e9af4 = 0;
    _DAT_14c9e9ad8 = &LAB_1471d2f3c;
    FUN_145e55ccc();
    FUN_1407e00cc(&DAT_14c9e9a90);
    return;
  }
  return;
}



// FUNCTION 145e55ccc FUN_145e55ccc body=123 status=ok
// SIG undefined FUN_145e55ccc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e55ccc(void)

{
  _DAT_14c9eb998 = L"BASE";
  DAT_14c9eb9c2 = 4;
  _DAT_14c9eb9a0 = FUN_140b35ae4();
  _DAT_14c9eb9a8 = DAT_14c9e9aa0;
  _DAT_14c9eb9b0 = &LAB_14682652b;
  DAT_14c9e9aa0 = &DAT_14c9eb998;
  DAT_14c9e9af5 = DAT_14c9e9af5 + '\x01';
  _DAT_14c9eb9b8 = 0x100000000;
  if (*(char *)(_DAT_14c9eb9a0 + 100) != '\0') {
    DAT_14c9e9af6 = DAT_14c9e9af6 + '\x01';
  }
  return;
}



// FUNCTION 145e55d48 FUN_145e55d48 body=226 status=ok
// SIG undefined FUN_145e55d48(void)

longlong * FUN_145e55d48(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462d6802;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e55e30 FUN_145e55e30 body=138 status=ok
// SIG undefined FUN_145e55e30(void)

code * FUN_145e55e30(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SceneStencilTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000ce3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462d688a;
}



// FUNCTION 145e55eba FUN_145e55eba body=138 status=ok
// SIG undefined FUN_145e55eba(void)

code * FUN_145e55eba(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NaniteShadingMask";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000ce4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e55e30;
}



// FUNCTION 145e55f44 FUN_145e55f44 body=205 status=ok
// SIG undefined FUN_145e55f44(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e55f44(void)

{
  if ((DAT_14c9ee117 & 2) == 0) {
    DAT_14c9ee117 = DAT_14c9ee117 | 2;
    _DAT_14c9ee0b8 = L"FCompactCulledObjectsCS";
    _DAT_14c9ee0d0 = FUN_146826540;
    _DAT_14c9ee0d8 = FUN_146825d77;
    _DAT_14c9ee0e0 = FUN_146825fd6;
    _DAT_14c9ee0e8 = FUN_1407e02ea;
    _DAT_14c9ee0f0 = FUN_146826273;
    _DAT_14c9ee0c8 = FUN_1471ded78;
    _DAT_14c9ee108 = 0xffffffff000000e0;
    _DAT_14c9ee110 = 8;
    DAT_14c9ee114 = 0;
    _DAT_14c9ee0f8 = &LAB_1471deda2;
    FUN_145e56012();
    FUN_1407e00cc(&DAT_14c9ee0b0);
    return;
  }
  return;
}



// FUNCTION 145e56012 FUN_145e56012 body=123 status=ok
// SIG undefined FUN_145e56012(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e56012(void)

{
  _DAT_14c9f1a08 = L"BASE";
  DAT_14c9f1a32 = 4;
  _DAT_14c9f1a10 = FUN_140b35ae4();
  _DAT_14c9f1a18 = DAT_14c9ee0c0;
  _DAT_14c9f1a20 = &LAB_14682652b;
  DAT_14c9ee0c0 = &DAT_14c9f1a08;
  DAT_14c9ee115 = DAT_14c9ee115 + '\x01';
  _DAT_14c9f1a28 = 0x100000000;
  if (*(char *)(_DAT_14c9f1a10 + 100) != '\0') {
    DAT_14c9ee116 = DAT_14c9ee116 + '\x01';
  }
  return;
}



// FUNCTION 145e5608e FUN_145e5608e body=226 status=ok
// SIG undefined FUN_145e5608e(void)

longlong * FUN_145e5608e(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462d8ad2;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e56176 FUN_145e56176 body=138 status=ok
// SIG undefined FUN_145e56176(void)

code * FUN_145e56176(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWGridCulledMeshSDFObjectIndicesArray";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000010f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471e2334;
}



// FUNCTION 145e56200 FUN_145e56200 body=138 status=ok
// SIG undefined FUN_145e56200(void)

code * FUN_145e56200(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GridCulledHeightfieldObjectStartOffsetArray";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000111;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e56176;
}



// FUNCTION 145e5628a FUN_145e5628a body=292 status=ok
// SIG undefined FUN_145e5628a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e5628a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ef2d0) {
    FUN_144b3d300(&DAT_14c9ef2d0);
    if (DAT_14c9ef2d0 == -1) {
      FUN_145e564f8();
      FUN_145e563ae();
      FUN_140db5666(&DAT_14c9ef228,0,&DAT_14c9ef1c0,L"FClearProbePDFs",
                    L"/Engine/Private/Lumen/LumenRadianceCache.usf",L"ClearProbePDFs",5,1,
                    FUN_1471dfb48,FUN_1471dfae8,&LAB_1462d7368,&LAB_1471dfae4,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9f0f78);
      _DAT_14c9ef228 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d260b5);
      _Init_thread_footer(&DAT_14c9ef2d0);
    }
  }
  return &DAT_14c9ef228;
}



// FUNCTION 145e563ae FUN_145e563ae body=205 status=ok
// SIG undefined FUN_145e563ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e563ae(void)

{
  if ((DAT_14c9ef227 & 2) == 0) {
    DAT_14c9ef227 = DAT_14c9ef227 | 2;
    _DAT_14c9ef1c8 = L"FClearProbePDFs";
    _DAT_14c9ef1e0 = FUN_146826540;
    _DAT_14c9ef1e8 = FUN_146825d77;
    _DAT_14c9ef1f0 = FUN_146825fd6;
    _DAT_14c9ef1f8 = FUN_1407e02ea;
    _DAT_14c9ef200 = FUN_146826273;
    _DAT_14c9ef1d8 = FUN_1471dfab6;
    _DAT_14c9ef218 = 0xffffffff000000e0;
    _DAT_14c9ef220 = 8;
    DAT_14c9ef224 = 0;
    _DAT_14c9ef208 = &LAB_1471dfae0;
    FUN_145e5647c();
    FUN_1407e00cc(&DAT_14c9ef1c0);
    return;
  }
  return;
}



// FUNCTION 145e5647c FUN_145e5647c body=123 status=ok
// SIG undefined FUN_145e5647c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e5647c(void)

{
  _DAT_14c9f1d30 = L"BASE";
  DAT_14c9f1d5a = 4;
  _DAT_14c9f1d38 = FUN_140b35ae4();
  _DAT_14c9f1d40 = DAT_14c9ef1d0;
  _DAT_14c9f1d48 = &LAB_14682652b;
  DAT_14c9ef1d0 = &DAT_14c9f1d30;
  DAT_14c9ef225 = DAT_14c9ef225 + '\x01';
  _DAT_14c9f1d50 = 0x100000000;
  if (*(char *)(_DAT_14c9f1d38 + 100) != '\0') {
    DAT_14c9ef226 = DAT_14c9ef226 + '\x01';
  }
  return;
}



// FUNCTION 145e564f8 FUN_145e564f8 body=261 status=ok
// SIG undefined FUN_145e564f8(void)

void FUN_145e564f8(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f0ff8) {
    FUN_144b3d300(&DAT_14c9f0ff8);
    if (DAT_14c9f0ff8 == -1) {
      FUN_145e565fe(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x289;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f0f78,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d26367);
      _Init_thread_footer(&DAT_14c9f0ff8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e565fe FUN_145e565fe body=226 status=ok
// SIG undefined FUN_145e565fe(void)

longlong * FUN_145e565fe(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462d99ee;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e566e6 FUN_145e566e6 body=132 status=ok
// SIG undefined FUN_145e566e6(void)

undefined1 * FUN_145e566e6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWRadianceProbeSH_PDF";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e566e2;
}



// FUNCTION 145e5676a FUN_145e5676a body=138 status=ok
// SIG undefined FUN_145e5676a(void)

code * FUN_145e5676a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ClearProbePDFsIndirectArgs";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000028b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xf;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e566e6;
}



// FUNCTION 145e567f4 FUN_145e567f4 body=292 status=ok
// SIG undefined FUN_145e567f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e567f4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f2590) {
    FUN_144b3d300(&DAT_14c9f2590);
    if (DAT_14c9f2590 == -1) {
      FUN_145e56a62();
      FUN_145e56918();
      FUN_140db5666(&DAT_14c9f24e8,0,&DAT_14c9f2480,
                    L"FLumenRadianceCacheHardwareRayTracingIndirectArgsCS",
                    L"/Engine/Private/Lumen/LumenRadianceCacheHardwareRayTracing.usf",
                    L"LumenRadianceCacheHardwareRayTracingIndirectArgsCS",5,4,FUN_1471ec338,
                    FUN_1471ec2d8,&LAB_1462db3c0,&LAB_1471ec2d4,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14c9f5ea8);
      _DAT_14c9f24e8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d33088);
      _Init_thread_footer(&DAT_14c9f2590);
    }
  }
  return &DAT_14c9f24e8;
}



// FUNCTION 145e56918 FUN_145e56918 body=205 status=ok
// SIG undefined FUN_145e56918(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e56918(void)

{
  if ((DAT_14c9f24e7 & 2) == 0) {
    DAT_14c9f24e7 = DAT_14c9f24e7 | 2;
    _DAT_14c9f2488 = L"FLumenRadianceCacheHardwareRayTracingIndirectArgsCS";
    _DAT_14c9f24a0 = FUN_146826540;
    _DAT_14c9f24a8 = FUN_146825d77;
    _DAT_14c9f24b0 = FUN_146825fd6;
    _DAT_14c9f24b8 = FUN_1407e02ea;
    _DAT_14c9f24c0 = FUN_146826273;
    _DAT_14c9f2498 = FUN_1471ec2a6;
    _DAT_14c9f24d8 = 0xffffffff000000e0;
    _DAT_14c9f24e0 = 8;
    DAT_14c9f24e4 = 0;
    _DAT_14c9f24c8 = &LAB_1471ec2d0;
    FUN_145e569e6();
    FUN_1407e00cc(&DAT_14c9f2480);
    return;
  }
  return;
}



// FUNCTION 145e569e6 FUN_145e569e6 body=123 status=ok
// SIG undefined FUN_145e569e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e569e6(void)

{
  _DAT_14c9f7910 = L"BASE";
  DAT_14c9f793a = 4;
  _DAT_14c9f7918 = FUN_140b35ae4();
  _DAT_14c9f7920 = DAT_14c9f2490;
  _DAT_14c9f7928 = &LAB_14682652b;
  DAT_14c9f2490 = &DAT_14c9f7910;
  DAT_14c9f24e5 = DAT_14c9f24e5 + '\x01';
  _DAT_14c9f7930 = 0x100000000;
  if (*(char *)(_DAT_14c9f7918 + 100) != '\0') {
    DAT_14c9f24e6 = DAT_14c9f24e6 + '\x01';
  }
  return;
}



// FUNCTION 145e56a62 FUN_145e56a62 body=261 status=ok
// SIG undefined FUN_145e56a62(void)

void FUN_145e56a62(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f5f28) {
    FUN_144b3d300(&DAT_14c9f5f28);
    if (DAT_14c9f5f28 == -1) {
      FUN_145e56b68(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 199;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f5ea8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d57afb);
      _Init_thread_footer(&DAT_14c9f5f28);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e56b68 FUN_145e56b68 body=226 status=ok
// SIG undefined FUN_145e56b68(void)

longlong * FUN_145e56b68(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462dbeec;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e56c50 FUN_145e56c50 body=132 status=ok
// SIG undefined FUN_145e56c50(void)

undefined1 * FUN_145e56c50(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CompactedTraceTexelAllocator";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 200;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e56c4c;
}



// FUNCTION 145e56cd4 FUN_145e56cd4 body=138 status=ok
// SIG undefined FUN_145e56cd4(void)

code * FUN_145e56cd4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWHardwareRayTracingIndirectArgs";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000000c9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e56c50;
}



// FUNCTION 145e56d5e FUN_145e56d5e body=205 status=ok
// SIG undefined FUN_145e56d5e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e56d5e(void)

{
  if ((DAT_14c9f29d7 & 2) == 0) {
    DAT_14c9f29d7 = DAT_14c9f29d7 | 2;
    _DAT_14c9f2978 = L"FBuildRadiosityTilesCS";
    _DAT_14c9f2990 = FUN_146826540;
    _DAT_14c9f2998 = FUN_146825d77;
    _DAT_14c9f29a0 = FUN_146825fd6;
    _DAT_14c9f29a8 = FUN_1407e02ea;
    _DAT_14c9f29b0 = FUN_146826273;
    _DAT_14c9f2988 = FUN_1471ed070;
    _DAT_14c9f29c8 = 0xffffffff000000e0;
    _DAT_14c9f29d0 = 8;
    DAT_14c9f29d4 = 0;
    _DAT_14c9f29b8 = &LAB_1471ed09a;
    FUN_145e56e2c();
    FUN_1407e00cc(&DAT_14c9f2970);
    return;
  }
  return;
}



// FUNCTION 145e56e2c FUN_145e56e2c body=123 status=ok
// SIG undefined FUN_145e56e2c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e56e2c(void)

{
  _DAT_14c9f79a0 = L"BASE";
  DAT_14c9f79ca = 4;
  _DAT_14c9f79a8 = FUN_140b35ae4();
  _DAT_14c9f79b0 = DAT_14c9f2980;
  _DAT_14c9f79b8 = &LAB_14682652b;
  DAT_14c9f2980 = &DAT_14c9f79a0;
  DAT_14c9f29d5 = DAT_14c9f29d5 + '\x01';
  _DAT_14c9f79c0 = 0x100000000;
  if (*(char *)(_DAT_14c9f79a8 + 100) != '\0') {
    DAT_14c9f29d6 = DAT_14c9f29d6 + '\x01';
  }
  return;
}



// FUNCTION 145e56ea8 FUN_145e56ea8 body=226 status=ok
// SIG undefined FUN_145e56ea8(void)

longlong * FUN_145e56ea8(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462dc1a8;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e56f90 FUN_145e56f90 body=138 status=ok
// SIG undefined FUN_145e56f90(void)

code * FUN_145e56f90(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CardPageIndexData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x380000010d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471f3e48;
}



// FUNCTION 145e5701a FUN_145e5701a body=138 status=ok
// SIG undefined FUN_145e5701a(void)

code * FUN_145e5701a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MaxCardTiles";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x440000010f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462dc230;
}



// FUNCTION 145e570a4 FUN_145e570a4 body=205 status=ok
// SIG undefined FUN_145e570a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e570a4(void)

{
  if ((DAT_14c9f903f & 2) == 0) {
    DAT_14c9f903f = DAT_14c9f903f | 2;
    _DAT_14c9f8fe0 = L"FInitializeLightTileIndirectArgsCS";
    _DAT_14c9f8ff8 = FUN_146826540;
    _DAT_14c9f9000 = FUN_146825d77;
    _DAT_14c9f9008 = FUN_146825fd6;
    _DAT_14c9f9010 = FUN_1407e02ea;
    _DAT_14c9f9018 = FUN_146826273;
    _DAT_14c9f8ff0 = FUN_147204daa;
    _DAT_14c9f9030 = 0xffffffff000000e0;
    _DAT_14c9f9038 = 8;
    DAT_14c9f903c = 0;
    _DAT_14c9f9020 = &LAB_147204dd4;
    FUN_145e57172();
    FUN_1407e00cc(&DAT_14c9f8fd8);
    return;
  }
  return;
}



// FUNCTION 145e57172 FUN_145e57172 body=123 status=ok
// SIG undefined FUN_145e57172(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e57172(void)

{
  _DAT_14c9ffc48 = L"BASE";
  DAT_14c9ffc72 = 4;
  _DAT_14c9ffc50 = FUN_140b35ae4();
  _DAT_14c9ffc58 = DAT_14c9f8fe8;
  _DAT_14c9ffc60 = &LAB_14682652b;
  DAT_14c9f8fe8 = &DAT_14c9ffc48;
  DAT_14c9f903d = DAT_14c9f903d + '\x01';
  _DAT_14c9ffc68 = 0x100000000;
  if (*(char *)(_DAT_14c9ffc50 + 100) != '\0') {
    DAT_14c9f903e = DAT_14c9f903e + '\x01';
  }
  return;
}



// FUNCTION 145e571ee FUN_145e571ee body=226 status=ok
// SIG undefined FUN_145e571ee(void)

longlong * FUN_145e571ee(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462e20d4;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e572d6 FUN_145e572d6 body=138 status=ok
// SIG undefined FUN_145e572d6(void)

code * FUN_145e572d6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LightTileAllocator";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000222;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14720a704;
}



// FUNCTION 145e57360 FUN_145e57360 body=138 status=ok
// SIG undefined FUN_145e57360(void)

code * FUN_145e57360(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VertexCountPerInstanceIndirect";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000224;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462e215c;
}



// FUNCTION 145e573ea FUN_145e573ea body=205 status=ok
// SIG undefined FUN_145e573ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e573ea(void)

{
  if ((DAT_14c9fb51f & 2) == 0) {
    DAT_14c9fb51f = DAT_14c9fb51f | 2;
    _DAT_14c9fb4c0 = L"FBuildCardsUpdateListCS";
    _DAT_14c9fb4d8 = FUN_146826540;
    _DAT_14c9fb4e0 = FUN_146825d77;
    _DAT_14c9fb4e8 = FUN_146825fd6;
    _DAT_14c9fb4f0 = FUN_1407e02ea;
    _DAT_14c9fb4f8 = FUN_146826273;
    _DAT_14c9fb4d0 = FUN_147207e4a;
    _DAT_14c9fb510 = 0xffffffff000000e0;
    _DAT_14c9fb518 = 8;
    DAT_14c9fb51c = 0;
    _DAT_14c9fb500 = &LAB_147207e74;
    FUN_145e574b8();
    FUN_1407e00cc(&DAT_14c9fb4b8);
    return;
  }
  return;
}



// FUNCTION 145e574b8 FUN_145e574b8 body=123 status=ok
// SIG undefined FUN_145e574b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e574b8(void)

{
  _DAT_14ca00208 = L"BASE";
  DAT_14ca00232 = 4;
  _DAT_14ca00210 = FUN_140b35ae4();
  _DAT_14ca00218 = DAT_14c9fb4c8;
  _DAT_14ca00220 = &LAB_14682652b;
  DAT_14c9fb4c8 = &DAT_14ca00208;
  DAT_14c9fb51d = DAT_14c9fb51d + '\x01';
  _DAT_14ca00228 = 0x100000000;
  if (*(char *)(_DAT_14ca00210 + 100) != '\0') {
    DAT_14c9fb51e = DAT_14c9fb51e + '\x01';
  }
  return;
}



// FUNCTION 145e57538 FUN_145e57538 body=138 status=ok
// SIG undefined FUN_145e57538(void)

code * FUN_145e57538(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWCardPageTileAllocator";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000019b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14721574e;
}



// FUNCTION 145e575c2 FUN_145e575c2 body=138 status=ok
// SIG undefined FUN_145e575c2(void)

code * FUN_145e575c2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CardPageHighResLastUsedBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x48000001a0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147215526;
}



// FUNCTION 145e5764c FUN_145e5764c body=205 status=ok
// SIG undefined FUN_145e5764c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e5764c(void)

{
  if ((DAT_14c9fc39f & 2) == 0) {
    DAT_14c9fc39f = DAT_14c9fc39f | 2;
    _DAT_14c9fc340 = L"FScreenProbeConvertToIrradianceCS";
    _DAT_14c9fc358 = FUN_146826540;
    _DAT_14c9fc360 = FUN_146825d77;
    _DAT_14c9fc368 = FUN_146825fd6;
    _DAT_14c9fc370 = FUN_1407e02ea;
    _DAT_14c9fc378 = FUN_146826273;
    _DAT_14c9fc350 = FUN_147208778;
    _DAT_14c9fc390 = 0xffffffff000000e0;
    _DAT_14c9fc398 = 8;
    DAT_14c9fc39c = 0;
    _DAT_14c9fc380 = &LAB_1472087a2;
    FUN_145e5771a();
    FUN_1407e00cc(&DAT_14c9fc338);
    return;
  }
  return;
}



// FUNCTION 145e5771a FUN_145e5771a body=123 status=ok
// SIG undefined FUN_145e5771a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e5771a(void)

{
  _DAT_14ca004c8 = L"BASE";
  DAT_14ca004f2 = 4;
  _DAT_14ca004d0 = FUN_140b35ae4();
  _DAT_14ca004d8 = DAT_14c9fc348;
  _DAT_14ca004e0 = &LAB_14682652b;
  DAT_14c9fc348 = &DAT_14ca004c8;
  DAT_14c9fc39d = DAT_14c9fc39d + '\x01';
  _DAT_14ca004e8 = 0x100000000;
  if (*(char *)(_DAT_14ca004d0 + 100) != '\0') {
    DAT_14c9fc39e = DAT_14c9fc39e + '\x01';
  }
  return;
}



// FUNCTION 145e57796 FUN_145e57796 body=226 status=ok
// SIG undefined FUN_145e57796(void)

longlong * FUN_145e57796(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462e56c6;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e5787e FUN_145e5787e body=138 status=ok
// SIG undefined FUN_145e5787e(void)

code * FUN_145e5787e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ScreenProbeRadiance";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000100;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e57908;
}



// FUNCTION 145e57908 FUN_145e57908 body=138 status=ok
// SIG undefined FUN_145e57908(void)

code * FUN_145e57908(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWScreenProbeIrradianceWithBorder";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float3>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000000ff;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462e57e4;
}



// FUNCTION 145e57992 FUN_145e57992 body=205 status=ok
// SIG undefined FUN_145e57992(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e57992(void)

{
  if ((DAT_14c9fd3ff & 2) == 0) {
    DAT_14c9fd3ff = DAT_14c9fd3ff | 2;
    _DAT_14c9fd3a0 = L"FScreenProbeTileClassificationBuildListsCS";
    _DAT_14c9fd3b8 = FUN_146826540;
    _DAT_14c9fd3c0 = FUN_146825d77;
    _DAT_14c9fd3c8 = FUN_146825fd6;
    _DAT_14c9fd3d0 = FUN_1407e02ea;
    _DAT_14c9fd3d8 = FUN_146826273;
    _DAT_14c9fd3b0 = FUN_1472092dc;
    _DAT_14c9fd3f0 = 0xffffffff000000e0;
    _DAT_14c9fd3f8 = 8;
    DAT_14c9fd3fc = 0;
    _DAT_14c9fd3e0 = &LAB_147209306;
    FUN_145e57a60();
    FUN_1407e00cc(&DAT_14c9fd398);
    return;
  }
  return;
}



// FUNCTION 145e57a60 FUN_145e57a60 body=123 status=ok
// SIG undefined FUN_145e57a60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e57a60(void)

{
  _DAT_14ca006d8 = L"BASE";
  DAT_14ca00702 = 4;
  _DAT_14ca006e0 = FUN_140b35ae4();
  _DAT_14ca006e8 = DAT_14c9fd3a8;
  _DAT_14ca006f0 = &LAB_14682652b;
  DAT_14c9fd3a8 = &DAT_14ca006d8;
  DAT_14c9fd3fd = DAT_14c9fd3fd + '\x01';
  _DAT_14ca006f8 = 0x100000000;
  if (*(char *)(_DAT_14ca006e0 + 100) != '\0') {
    DAT_14c9fd3fe = DAT_14c9fd3fe + '\x01';
  }
  return;
}



// FUNCTION 145e57adc FUN_145e57adc body=226 status=ok
// SIG undefined FUN_145e57adc(void)

longlong * FUN_145e57adc(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462e6644;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e57bc4 FUN_145e57bc4 body=132 status=ok
// SIG undefined FUN_145e57bc4(void)

undefined1 * FUN_145e57bc4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWIntegrateIndirectArgs";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x363;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e57bc0;
}



// FUNCTION 145e57c48 FUN_145e57c48 body=144 status=ok
// SIG undefined FUN_145e57c48(void)

code * FUN_145e57c48(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1447e4f80();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"View";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewUniformShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x2000000366;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_147217dae;
}



// FUNCTION 145e57cd8 FUN_145e57cd8 body=292 status=ok
// SIG undefined FUN_145e57cd8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e57cd8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca00c80) {
    FUN_144b3d300(&DAT_14ca00c80);
    if (DAT_14ca00c80 == -1) {
      FUN_145e57f46();
      FUN_145e57dfc();
      FUN_140db5666(&DAT_14ca00bd8,0,&DAT_14ca00b70,
                    L"FLumenScreenProbeGatherHardwareRayTracingIndirectArgsCS",
                    L"/Engine/Private/Lumen/LumenScreenProbeHardwareRayTracing.usf",
                    L"FLumenScreenProbeHardwareRayTracingIndirectArgsCS",5,1,FUN_14721feba,
                    FUN_14721fe5a,&LAB_1462e72de,&LAB_14721fe56,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca05928);
      _DAT_14ca00bd8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142daca77);
      _Init_thread_footer(&DAT_14ca00c80);
    }
  }
  return &DAT_14ca00bd8;
}



// FUNCTION 145e57dfc FUN_145e57dfc body=205 status=ok
// SIG undefined FUN_145e57dfc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e57dfc(void)

{
  if ((DAT_14ca00bd7 & 2) == 0) {
    DAT_14ca00bd7 = DAT_14ca00bd7 | 2;
    _DAT_14ca00b78 = L"FLumenScreenProbeGatherHardwareRayTracingIndirectArgsCS";
    _DAT_14ca00b90 = FUN_146826540;
    _DAT_14ca00b98 = FUN_146825d77;
    _DAT_14ca00ba0 = FUN_146825fd6;
    _DAT_14ca00ba8 = FUN_1407e02ea;
    _DAT_14ca00bb0 = FUN_146826273;
    _DAT_14ca00b88 = FUN_14721fe28;
    _DAT_14ca00bc8 = 0xffffffff000000e0;
    _DAT_14ca00bd0 = 8;
    DAT_14ca00bd4 = 0;
    _DAT_14ca00bb8 = &LAB_14721fe52;
    FUN_145e57eca();
    FUN_1407e00cc(&DAT_14ca00b70);
    return;
  }
  return;
}



// FUNCTION 145e57eca FUN_145e57eca body=123 status=ok
// SIG undefined FUN_145e57eca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e57eca(void)

{
  _DAT_14ca07748 = L"BASE";
  DAT_14ca07772 = 4;
  _DAT_14ca07750 = FUN_140b35ae4();
  _DAT_14ca07758 = DAT_14ca00b80;
  _DAT_14ca07760 = &LAB_14682652b;
  DAT_14ca00b80 = &DAT_14ca07748;
  DAT_14ca00bd5 = DAT_14ca00bd5 + '\x01';
  _DAT_14ca07768 = 0x100000000;
  if (*(char *)(_DAT_14ca07750 + 100) != '\0') {
    DAT_14ca00bd6 = DAT_14ca00bd6 + '\x01';
  }
  return;
}



// FUNCTION 145e57f46 FUN_145e57f46 body=261 status=ok
// SIG undefined FUN_145e57f46(void)

void FUN_145e57f46(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca059a8) {
    FUN_144b3d300(&DAT_14ca059a8);
    if (DAT_14ca059a8 == -1) {
      FUN_145e5804c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0xcf;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca05928,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142dd2a17);
      _Init_thread_footer(&DAT_14ca059a8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e5804c FUN_145e5804c body=226 status=ok
// SIG undefined FUN_145e5804c(void)

longlong * FUN_145e5804c(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462e77d4;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e58134 FUN_145e58134 body=132 status=ok
// SIG undefined FUN_145e58134(void)

undefined1 * FUN_145e58134(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CompactedTraceTexelAllocator";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e58130;
}



// FUNCTION 145e581b8 FUN_145e581b8 body=138 status=ok
// SIG undefined FUN_145e581b8(void)

code * FUN_145e581b8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWHardwareRayTracingIndirectArgs";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000d1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e58134;
}



// FUNCTION 145e58242 FUN_145e58242 body=205 status=ok
// SIG undefined FUN_145e58242(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e58242(void)

{
  if ((DAT_14ca01437 & 2) == 0) {
    DAT_14ca01437 = DAT_14ca01437 | 2;
    _DAT_14ca013d8 = L"FScreenProbeTraceScreenTexturesCS";
    _DAT_14ca013f0 = FUN_146826540;
    _DAT_14ca013f8 = FUN_146825d77;
    _DAT_14ca01400 = FUN_146825fd6;
    _DAT_14ca01408 = FUN_1407e02ea;
    _DAT_14ca01410 = FUN_146826273;
    _DAT_14ca013e8 = FUN_147220f32;
    _DAT_14ca01428 = 0xffffffff000000e0;
    _DAT_14ca01430 = 8;
    DAT_14ca01434 = 0;
    _DAT_14ca01418 = &LAB_147220f5c;
    FUN_145e58310();
    FUN_1407e00cc(&DAT_14ca013d0);
    return;
  }
  return;
}



// FUNCTION 145e58310 FUN_145e58310 body=123 status=ok
// SIG undefined FUN_145e58310(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e58310(void)

{
  _DAT_14ca07868 = L"BASE";
  DAT_14ca07892 = 4;
  _DAT_14ca07870 = FUN_140b35ae4();
  _DAT_14ca07878 = DAT_14ca013e0;
  _DAT_14ca07880 = &LAB_14682652b;
  DAT_14ca013e0 = &DAT_14ca07868;
  DAT_14ca01435 = DAT_14ca01435 + '\x01';
  _DAT_14ca07888 = 0x100000000;
  if (*(char *)(_DAT_14ca07870 + 100) != '\0') {
    DAT_14ca01436 = DAT_14ca01436 + '\x01';
  }
  return;
}



// FUNCTION 145e58390 FUN_145e58390 body=138 status=ok
// SIG undefined FUN_145e58390(void)

code * FUN_145e58390(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LightingChannelsTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1f8000000bd;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147229cd2;
}



// FUNCTION 145e5841a FUN_145e5841a body=138 status=ok
// SIG undefined FUN_145e5841a(void)

code * FUN_145e5841a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NumThicknessStepsToDetermineCertainty";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20c000000c1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147229b34;
}



// FUNCTION 145e584a4 FUN_145e584a4 body=292 status=ok
// SIG undefined FUN_145e584a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e584a4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca15260) {
    FUN_144b3d300(&DAT_14ca15260);
    if (DAT_14ca15260 == -1) {
      FUN_145e58712();
      FUN_145e585c8();
      FUN_140db5666(&DAT_14ca151b8,0,&DAT_14ca15150,L"FInitClusterBatches_CS",
                    L"/Engine/Private/Nanite/NaniteClusterCulling.usf",L"InitClusterBatches",5,1,
                    FUN_147252830,FUN_1472527d0,&LAB_1462eecfe,&LAB_1472527cc,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca17d70);
      _DAT_14ca151b8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e0a573);
      _Init_thread_footer(&DAT_14ca15260);
    }
  }
  return &DAT_14ca151b8;
}



// FUNCTION 145e585c8 FUN_145e585c8 body=205 status=ok
// SIG undefined FUN_145e585c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e585c8(void)

{
  if ((DAT_14ca151b7 & 2) == 0) {
    DAT_14ca151b7 = DAT_14ca151b7 | 2;
    _DAT_14ca15158 = L"FInitClusterBatches_CS";
    _DAT_14ca15170 = FUN_146826540;
    _DAT_14ca15178 = FUN_146825d77;
    _DAT_14ca15180 = FUN_146825fd6;
    _DAT_14ca15188 = FUN_1407e02ea;
    _DAT_14ca15190 = FUN_146826273;
    _DAT_14ca15168 = FUN_14725279c;
    _DAT_14ca151a8 = 0xffffffff000000e0;
    _DAT_14ca151b0 = 8;
    DAT_14ca151b4 = 0;
    _DAT_14ca15198 = &LAB_1472527c8;
    FUN_145e58696();
    FUN_1407e00cc(&DAT_14ca15150);
    return;
  }
  return;
}



// FUNCTION 145e58696 FUN_145e58696 body=123 status=ok
// SIG undefined FUN_145e58696(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e58696(void)

{
  _DAT_14ca19190 = L"BASE";
  DAT_14ca191ba = 4;
  _DAT_14ca19198 = FUN_140b35ae4();
  _DAT_14ca191a0 = DAT_14ca15160;
  _DAT_14ca191a8 = &LAB_14682652b;
  DAT_14ca15160 = &DAT_14ca19190;
  DAT_14ca151b5 = DAT_14ca151b5 + '\x01';
  _DAT_14ca191b0 = 0x100000000;
  if (*(char *)(_DAT_14ca19198 + 100) != '\0') {
    DAT_14ca151b6 = DAT_14ca151b6 + '\x01';
  }
  return;
}



// FUNCTION 145e58712 FUN_145e58712 body=261 status=ok
// SIG undefined FUN_145e58712(void)

void FUN_145e58712(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca17df0) {
    FUN_144b3d300(&DAT_14ca17df0);
    if (DAT_14ca17df0 == -1) {
      FUN_145e58818(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x456;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca17d70,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e27687);
      _Init_thread_footer(&DAT_14ca17df0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e58818 FUN_145e58818 body=226 status=ok
// SIG undefined FUN_145e58818(void)

longlong * FUN_145e58818(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462f1708;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e58900 FUN_145e58900 body=132 status=ok
// SIG undefined FUN_145e58900(void)

undefined1 * FUN_145e58900(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutMainAndPostNodesAndClusterBatches";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x457;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e588fc;
}



// FUNCTION 145e58984 FUN_145e58984 body=138 status=ok
// SIG undefined FUN_145e58984(void)

code * FUN_145e58984(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MaxCandidateClusters";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000458;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e58900;
}



// FUNCTION 145e58a0e FUN_145e58a0e body=292 status=ok
// SIG undefined FUN_145e58a0e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e58a0e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca15388) {
    FUN_144b3d300(&DAT_14ca15388);
    if (DAT_14ca15388 == -1) {
      FUN_145e58c7c();
      FUN_145e58b32();
      FUN_140db5666(&DAT_14ca152e0,0,&DAT_14ca15278,L"FInitCandidateNodes_CS",
                    L"/Engine/Private/Nanite/NaniteClusterCulling.usf",L"InitCandidateNodes",5,1,
                    FUN_14725294e,FUN_1472528ee,&LAB_1462eed08,&LAB_1472528ea,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca17df8);
      _DAT_14ca152e0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e0a57f);
      _Init_thread_footer(&DAT_14ca15388);
    }
  }
  return &DAT_14ca152e0;
}



// FUNCTION 145e58b32 FUN_145e58b32 body=205 status=ok
// SIG undefined FUN_145e58b32(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e58b32(void)

{
  if ((DAT_14ca152df & 2) == 0) {
    DAT_14ca152df = DAT_14ca152df | 2;
    _DAT_14ca15280 = L"FInitCandidateNodes_CS";
    _DAT_14ca15298 = FUN_146826540;
    _DAT_14ca152a0 = FUN_146825d77;
    _DAT_14ca152a8 = FUN_146825fd6;
    _DAT_14ca152b0 = FUN_1407e02ea;
    _DAT_14ca152b8 = FUN_146826273;
    _DAT_14ca15290 = FUN_1472528ba;
    _DAT_14ca152d0 = 0xffffffff000000e0;
    _DAT_14ca152d8 = 8;
    DAT_14ca152dc = 0;
    _DAT_14ca152c0 = &LAB_1472528e6;
    FUN_145e58c00();
    FUN_1407e00cc(&DAT_14ca15278);
    return;
  }
  return;
}



// FUNCTION 145e58c00 FUN_145e58c00 body=123 status=ok
// SIG undefined FUN_145e58c00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e58c00(void)

{
  _DAT_14ca191c0 = L"BASE";
  DAT_14ca191ea = 4;
  _DAT_14ca191c8 = FUN_140b35ae4();
  _DAT_14ca191d0 = DAT_14ca15288;
  _DAT_14ca191d8 = &LAB_14682652b;
  DAT_14ca15288 = &DAT_14ca191c0;
  DAT_14ca152dd = DAT_14ca152dd + '\x01';
  _DAT_14ca191e0 = 0x100000000;
  if (*(char *)(_DAT_14ca191c8 + 100) != '\0') {
    DAT_14ca152de = DAT_14ca152de + '\x01';
  }
  return;
}



// FUNCTION 145e58c7c FUN_145e58c7c body=261 status=ok
// SIG undefined FUN_145e58c7c(void)

void FUN_145e58c7c(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca17e78) {
    FUN_144b3d300(&DAT_14ca17e78);
    if (DAT_14ca17e78 == -1) {
      FUN_145e58d82(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x463;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca17df8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e27693);
      _Init_thread_footer(&DAT_14ca17e78);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e58d82 FUN_145e58d82 body=226 status=ok
// SIG undefined FUN_145e58d82(void)

longlong * FUN_145e58d82(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462f1790;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e58e6a FUN_145e58e6a body=132 status=ok
// SIG undefined FUN_145e58e6a(void)

undefined1 * FUN_145e58e6a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutMainAndPostNodesAndClusterBatches";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x464;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e58e66;
}



// FUNCTION 145e58eee FUN_145e58eee body=138 status=ok
// SIG undefined FUN_145e58eee(void)

code * FUN_145e58eee(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MaxCandidateClusters";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000465;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e58e6a;
}



// FUNCTION 145e58f78 FUN_145e58f78 body=292 status=ok
// SIG undefined FUN_145e58f78(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e58f78(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca1a7f0) {
    FUN_144b3d300(&DAT_14ca1a7f0);
    if (DAT_14ca1a7f0 == -1) {
      FUN_145e591e6();
      FUN_145e5909c();
      FUN_140db5666(&DAT_14ca1a748,0,&DAT_14ca1a6e0,L"FInitClusterBatchesCS",
                    L"/Engine/Private/Nanite/NaniteStreamOut.usf",L"InitClusterBatches",5,1,
                    FUN_147263996,FUN_147263936,&LAB_1462f3496,&LAB_147263932,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca1b700);
      _DAT_14ca1a748 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e56be8);
      _Init_thread_footer(&DAT_14ca1a7f0);
    }
  }
  return &DAT_14ca1a748;
}



// FUNCTION 145e5909c FUN_145e5909c body=205 status=ok
// SIG undefined FUN_145e5909c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e5909c(void)

{
  if ((DAT_14ca1a747 & 2) == 0) {
    DAT_14ca1a747 = DAT_14ca1a747 | 2;
    _DAT_14ca1a6e8 = L"FInitClusterBatchesCS";
    _DAT_14ca1a700 = FUN_146826540;
    _DAT_14ca1a708 = FUN_146825d77;
    _DAT_14ca1a710 = FUN_146825fd6;
    _DAT_14ca1a718 = FUN_1407e02ea;
    _DAT_14ca1a720 = FUN_146826273;
    _DAT_14ca1a6f8 = FUN_147263904;
    _DAT_14ca1a738 = 0xffffffff000000e0;
    _DAT_14ca1a740 = 8;
    DAT_14ca1a744 = 0;
    _DAT_14ca1a728 = &LAB_14726392e;
    FUN_145e5916a();
    FUN_1407e00cc(&DAT_14ca1a6e0);
    return;
  }
  return;
}



// FUNCTION 145e5916a FUN_145e5916a body=123 status=ok
// SIG undefined FUN_145e5916a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e5916a(void)

{
  _DAT_14ca1c058 = L"BASE";
  DAT_14ca1c082 = 4;
  _DAT_14ca1c060 = FUN_140b35ae4();
  _DAT_14ca1c068 = DAT_14ca1a6f0;
  _DAT_14ca1c070 = &LAB_14682652b;
  DAT_14ca1a6f0 = &DAT_14ca1c058;
  DAT_14ca1a745 = DAT_14ca1a745 + '\x01';
  _DAT_14ca1c078 = 0x100000000;
  if (*(char *)(_DAT_14ca1c060 + 100) != '\0') {
    DAT_14ca1a746 = DAT_14ca1a746 + '\x01';
  }
  return;
}



// FUNCTION 145e591e6 FUN_145e591e6 body=261 status=ok
// SIG undefined FUN_145e591e6(void)

void FUN_145e591e6(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca1b780) {
    FUN_144b3d300(&DAT_14ca1b780);
    if (DAT_14ca1b780 == -1) {
      FUN_145e592ec(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x2d;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca1b700,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e5a69c);
      _Init_thread_footer(&DAT_14ca1b780);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e592ec FUN_145e592ec body=226 status=ok
// SIG undefined FUN_145e592ec(void)

longlong * FUN_145e592ec(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462f3e04;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e593d4 FUN_145e593d4 body=132 status=ok
// SIG undefined FUN_145e593d4(void)

undefined1 * FUN_145e593d4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NodesAndClusterBatches";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e593d0;
}



// FUNCTION 145e59458 FUN_145e59458 body=138 status=ok
// SIG undefined FUN_145e59458(void)

code * FUN_145e59458(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MaxCandidateClusters";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000002f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e593d4;
}



// FUNCTION 145e594e2 FUN_145e594e2 body=292 status=ok
// SIG undefined FUN_145e594e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e594e2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca1a918) {
    FUN_144b3d300(&DAT_14ca1a918);
    if (DAT_14ca1a918 == -1) {
      FUN_145e59750();
      FUN_145e59606();
      FUN_140db5666(&DAT_14ca1a870,0,&DAT_14ca1a808,L"FInitCandidateNodesCS",
                    L"/Engine/Private/Nanite/NaniteStreamOut.usf",L"InitCandidateNodes",5,1,
                    FUN_147263a5c,FUN_1472639fc,&LAB_1462f34a0,&LAB_1472639f8,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca1b788);
      _DAT_14ca1a870 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e56bf4);
      _Init_thread_footer(&DAT_14ca1a918);
    }
  }
  return &DAT_14ca1a870;
}



// FUNCTION 145e59606 FUN_145e59606 body=205 status=ok
// SIG undefined FUN_145e59606(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e59606(void)

{
  if ((DAT_14ca1a86f & 2) == 0) {
    DAT_14ca1a86f = DAT_14ca1a86f | 2;
    _DAT_14ca1a810 = L"FInitCandidateNodesCS";
    _DAT_14ca1a828 = FUN_146826540;
    _DAT_14ca1a830 = FUN_146825d77;
    _DAT_14ca1a838 = FUN_146825fd6;
    _DAT_14ca1a840 = FUN_1407e02ea;
    _DAT_14ca1a848 = FUN_146826273;
    _DAT_14ca1a820 = FUN_1472639ca;
    _DAT_14ca1a860 = 0xffffffff000000e0;
    _DAT_14ca1a868 = 8;
    DAT_14ca1a86c = 0;
    _DAT_14ca1a850 = &LAB_1472639f4;
    FUN_145e596d4();
    FUN_1407e00cc(&DAT_14ca1a808);
    return;
  }
  return;
}



// FUNCTION 145e596d4 FUN_145e596d4 body=123 status=ok
// SIG undefined FUN_145e596d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e596d4(void)

{
  _DAT_14ca1c088 = L"BASE";
  DAT_14ca1c0b2 = 4;
  _DAT_14ca1c090 = FUN_140b35ae4();
  _DAT_14ca1c098 = DAT_14ca1a818;
  _DAT_14ca1c0a0 = &LAB_14682652b;
  DAT_14ca1a818 = &DAT_14ca1c088;
  DAT_14ca1a86d = DAT_14ca1a86d + '\x01';
  _DAT_14ca1c0a8 = 0x100000000;
  if (*(char *)(_DAT_14ca1c090 + 100) != '\0') {
    DAT_14ca1a86e = DAT_14ca1a86e + '\x01';
  }
  return;
}



// FUNCTION 145e59750 FUN_145e59750 body=261 status=ok
// SIG undefined FUN_145e59750(void)

void FUN_145e59750(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca1b808) {
    FUN_144b3d300(&DAT_14ca1b808);
    if (DAT_14ca1b808 == -1) {
      FUN_145e59856(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x3a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca1b788,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e5a6a8);
      _Init_thread_footer(&DAT_14ca1b808);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e59856 FUN_145e59856 body=226 status=ok
// SIG undefined FUN_145e59856(void)

longlong * FUN_145e59856(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462f3e8c;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e5993e FUN_145e5993e body=132 status=ok
// SIG undefined FUN_145e5993e(void)

undefined1 * FUN_145e5993e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NodesAndClusterBatches";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e5993a;
}



// FUNCTION 145e599c2 FUN_145e599c2 body=138 status=ok
// SIG undefined FUN_145e599c2(void)

code * FUN_145e599c2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MaxCandidateClusters";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000003c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e5993e;
}



// FUNCTION 145e59a4c FUN_145e59a4c body=292 status=ok
// SIG undefined FUN_145e59a4c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e59a4c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2c9a0) {
    FUN_144b3d300(&DAT_14ca2c9a0);
    if (DAT_14ca2c9a0 == -1) {
      FUN_145e59cba();
      FUN_145e59b70();
      FUN_140db5666(&DAT_14ca2c8f8,0,&DAT_14ca2c890,L"FMSAADecodeAndCopyRectPS_Mobile",
                    L"/Engine/Private/PostProcessMobile.usf",L"MSAADecodeAndCopyRectPS",3,1,
                    FUN_14729531c,FUN_1472952bc,&LAB_147295296,&LAB_147295292,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca323d0);
      _DAT_14ca2c8f8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142ef8e0c);
      _Init_thread_footer(&DAT_14ca2c9a0);
    }
  }
  return &DAT_14ca2c8f8;
}



// FUNCTION 145e59b70 FUN_145e59b70 body=205 status=ok
// SIG undefined FUN_145e59b70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e59b70(void)

{
  if ((DAT_14ca2c8f7 & 2) == 0) {
    DAT_14ca2c8f7 = DAT_14ca2c8f7 | 2;
    _DAT_14ca2c898 = L"FMSAADecodeAndCopyRectPS_Mobile";
    _DAT_14ca2c8b0 = FUN_146826540;
    _DAT_14ca2c8b8 = FUN_146825d77;
    _DAT_14ca2c8c0 = FUN_146825fd6;
    _DAT_14ca2c8c8 = FUN_1407e02ea;
    _DAT_14ca2c8d0 = FUN_146826273;
    _DAT_14ca2c8a8 = FUN_147295262;
    _DAT_14ca2c8e8 = 0xffffffff000000e0;
    _DAT_14ca2c8f0 = 8;
    DAT_14ca2c8f4 = 0;
    _DAT_14ca2c8d8 = &LAB_14729528e;
    FUN_145e59c3e();
    FUN_1407e00cc(&DAT_14ca2c890);
    return;
  }
  return;
}



// FUNCTION 145e59c3e FUN_145e59c3e body=123 status=ok
// SIG undefined FUN_145e59c3e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e59c3e(void)

{
  _DAT_14ca34368 = L"BASE";
  DAT_14ca34392 = 4;
  _DAT_14ca34370 = FUN_140b35ae4();
  _DAT_14ca34378 = DAT_14ca2c8a0;
  _DAT_14ca34380 = &LAB_14682652b;
  DAT_14ca2c8a0 = &DAT_14ca34368;
  DAT_14ca2c8f5 = DAT_14ca2c8f5 + '\x01';
  _DAT_14ca34388 = 0x100000000;
  if (*(char *)(_DAT_14ca34370 + 100) != '\0') {
    DAT_14ca2c8f6 = DAT_14ca2c8f6 + '\x01';
  }
  return;
}



// FUNCTION 145e59cba FUN_145e59cba body=261 status=ok
// SIG undefined FUN_145e59cba(void)

void FUN_145e59cba(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca32450) {
    FUN_144b3d300(&DAT_14ca32450);
    if (DAT_14ca32450 == -1) {
      FUN_145e59dc0(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x110;
      local_58 = 0xbc;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca323d0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f13e89);
      _Init_thread_footer(&DAT_14ca32450);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e59dc0 FUN_145e59dc0 body=226 status=ok
// SIG undefined FUN_145e59dc0(void)

longlong * FUN_145e59dc0(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462fbcc8;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e59ea8 FUN_145e59ea8 body=132 status=ok
// SIG undefined FUN_145e59ea8(void)

undefined1 * FUN_145e59ea8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InputTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xbd;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e59ea4;
}



// FUNCTION 145e59f2c FUN_145e59f2c body=138 status=ok
// SIG undefined FUN_145e59f2c(void)

code * FUN_145e59f2c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InputSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000be;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e59ea8;
}



// FUNCTION 145e59fb6 FUN_145e59fb6 body=292 status=ok
// SIG undefined FUN_145e59fb6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e59fb6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2faf8) {
    FUN_144b3d300(&DAT_14ca2faf8);
    if (DAT_14ca2faf8 == -1) {
      FUN_145e5a224();
      FUN_145e5a0da();
      FUN_140db5666(&DAT_14ca2fa50,0,&DAT_14ca2f9e8,L"FSubsurfaceViewportCopyPS",
                    L"/Engine/Private/PostProcessSubsurface.usf",L"SubsurfaceViewportCopyPS",3,1,
                    FUN_14729958e,FUN_14729952e,&LAB_147299516,&LAB_147299512,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca339a8);
      _DAT_14ca2fa50 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f06040);
      _Init_thread_footer(&DAT_14ca2faf8);
    }
  }
  return &DAT_14ca2fa50;
}



// FUNCTION 145e5a0da FUN_145e5a0da body=205 status=ok
// SIG undefined FUN_145e5a0da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e5a0da(void)

{
  if ((DAT_14ca2fa4f & 2) == 0) {
    DAT_14ca2fa4f = DAT_14ca2fa4f | 2;
    _DAT_14ca2f9f0 = L"FSubsurfaceViewportCopyPS";
    _DAT_14ca2fa08 = FUN_146826540;
    _DAT_14ca2fa10 = FUN_146825d77;
    _DAT_14ca2fa18 = FUN_146825fd6;
    _DAT_14ca2fa20 = FUN_1407e02ea;
    _DAT_14ca2fa28 = FUN_146826273;
    _DAT_14ca2fa00 = FUN_1472994e2;
    _DAT_14ca2fa40 = 0xffffffff000000e0;
    _DAT_14ca2fa48 = 8;
    DAT_14ca2fa4c = 0;
    _DAT_14ca2fa30 = &LAB_14729950e;
    FUN_145e5a1a8();
    FUN_1407e00cc(&DAT_14ca2f9e8);
    return;
  }
  return;
}



// FUNCTION 145e5a1a8 FUN_145e5a1a8 body=123 status=ok
// SIG undefined FUN_145e5a1a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e5a1a8(void)

{
  _DAT_14ca34b90 = L"BASE";
  DAT_14ca34bba = 4;
  _DAT_14ca34b98 = FUN_140b35ae4();
  _DAT_14ca34ba0 = DAT_14ca2f9f8;
  _DAT_14ca34ba8 = &LAB_14682652b;
  DAT_14ca2f9f8 = &DAT_14ca34b90;
  DAT_14ca2fa4d = DAT_14ca2fa4d + '\x01';
  _DAT_14ca34bb0 = 0x100000000;
  if (*(char *)(_DAT_14ca34b98 + 100) != '\0') {
    DAT_14ca2fa4e = DAT_14ca2fa4e + '\x01';
  }
  return;
}



// FUNCTION 145e5a224 FUN_145e5a224 body=261 status=ok
// SIG undefined FUN_145e5a224(void)

void FUN_145e5a224(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca33a28) {
    FUN_144b3d300(&DAT_14ca33a28);
    if (DAT_14ca33a28 == -1) {
      FUN_145e5a32a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x110;
      local_58 = 0x194;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca339a8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f14081);
      _Init_thread_footer(&DAT_14ca33a28);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e5a32a FUN_145e5a32a body=226 status=ok
// SIG undefined FUN_145e5a32a(void)

longlong * FUN_145e5a32a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462fdd98;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


