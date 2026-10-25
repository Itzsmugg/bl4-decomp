// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145e717c6 FUN_145e717c6 body=123 status=ok
// SIG undefined FUN_145e717c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e717c6(void)

{
  _DAT_14c9f1eb0 = L"BASE";
  DAT_14c9f1eda = 4;
  _DAT_14c9f1eb8 = FUN_140b35ae4();
  _DAT_14c9f1ec0 = DAT_14c9efb10;
  _DAT_14c9f1ec8 = &LAB_14682652b;
  DAT_14c9efb10 = &DAT_14c9f1eb0;
  DAT_14c9efb65 = DAT_14c9efb65 + '\x01';
  _DAT_14c9f1ed0 = 0x100000000;
  if (*(char *)(_DAT_14c9f1eb8 + 100) != '\0') {
    DAT_14c9efb66 = DAT_14c9efb66 + '\x01';
  }
  return;
}



// FUNCTION 145e71842 FUN_145e71842 body=261 status=ok
// SIG undefined FUN_145e71842(void)

void FUN_145e71842(void)

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
              0x110) < DAT_14c9f1438) {
    FUN_144b3d300(&DAT_14c9f1438);
    if (DAT_14c9f1438 == -1) {
      FUN_145e71948(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1a0;
      local_58 = 0x3d7;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f13b8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d263f7);
      _Init_thread_footer(&DAT_14c9f1438);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e71948 FUN_145e71948 body=226 status=ok
// SIG undefined FUN_145e71948(void)

longlong * FUN_145e71948(longlong *param_1)

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
  pcVar13 = FUN_1462dac76;
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



// FUNCTION 145e71a30 FUN_145e71a30 body=130 status=ok
// SIG undefined FUN_145e71a30(void)

undefined1 * FUN_145e71a30(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWRadianceCacheProbeOcclusionAtlas";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3d8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e71a2c;
}



// FUNCTION 145e71ab2 FUN_145e71ab2 body=144 status=ok
// SIG undefined FUN_145e71ab2(void)

code * FUN_145e71ab2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_141364c62();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"RadianceCacheParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"LumenRadianceCache::FRadianceCacheInterpolationParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x20000003db;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1471e6d0a;
}



// FUNCTION 145e71b42 FUN_145e71b42 body=205 status=ok
// SIG undefined FUN_145e71b42(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e71b42(void)

{
  if ((DAT_14c9f2c27 & 2) == 0) {
    DAT_14c9f2c27 = DAT_14c9f2c27 | 2;
    _DAT_14c9f2bc8 = L"FLumenRadiosityDistanceFieldTracingCS";
    _DAT_14c9f2be0 = FUN_146826540;
    _DAT_14c9f2be8 = FUN_146825d77;
    _DAT_14c9f2bf0 = FUN_146825fd6;
    _DAT_14c9f2bf8 = FUN_1407e02ea;
    _DAT_14c9f2c00 = FUN_146826273;
    _DAT_14c9f2bd8 = FUN_1471ed1fc;
    _DAT_14c9f2c18 = 0xffffffff000000e0;
    _DAT_14c9f2c20 = 8;
    DAT_14c9f2c24 = 0;
    _DAT_14c9f2c08 = &LAB_1471ed226;
    FUN_145e71c10();
    FUN_1407e00cc(&DAT_14c9f2bc0);
    return;
  }
  return;
}



// FUNCTION 145e71c10 FUN_145e71c10 body=123 status=ok
// SIG undefined FUN_145e71c10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e71c10(void)

{
  _DAT_14c9f7a00 = L"BASE";
  DAT_14c9f7a2a = 4;
  _DAT_14c9f7a08 = FUN_140b35ae4();
  _DAT_14c9f7a10 = DAT_14c9f2bd0;
  _DAT_14c9f7a18 = &LAB_14682652b;
  DAT_14c9f2bd0 = &DAT_14c9f7a00;
  DAT_14c9f2c25 = DAT_14c9f2c25 + '\x01';
  _DAT_14c9f7a20 = 0x100000000;
  if (*(char *)(_DAT_14c9f7a08 + 100) != '\0') {
    DAT_14c9f2c26 = DAT_14c9f2c26 + '\x01';
  }
  return;
}



// FUNCTION 145e71c8c FUN_145e71c8c body=226 status=ok
// SIG undefined FUN_145e71c8c(void)

longlong * FUN_145e71c8c(longlong *param_1)

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
  pcVar13 = FUN_1462dc4e6;
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



// FUNCTION 145e71d74 FUN_145e71d74 body=138 status=ok
// SIG undefined FUN_145e71d74(void)

code * FUN_145e71d74(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxRayIntensity";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1d00000016f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462dc56e;
}



// FUNCTION 145e71dfe FUN_145e71dfe body=142 status=ok
// SIG undefined FUN_145e71dfe(void)

code * FUN_145e71dfe(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145a2f258();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"TracingParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FLumenCardTracingParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x900000016d;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462dc5fe;
}



// FUNCTION 145e71e8c FUN_145e71e8c body=205 status=ok
// SIG undefined FUN_145e71e8c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e71e8c(void)

{
  if ((DAT_14c9fbeff & 2) == 0) {
    DAT_14c9fbeff = DAT_14c9fbeff | 2;
    _DAT_14c9fbea0 = L"FScreenProbeCompositeTracesWithScatterCS";
    _DAT_14c9fbeb8 = FUN_146826540;
    _DAT_14c9fbec0 = FUN_146825d77;
    _DAT_14c9fbec8 = FUN_146825fd6;
    _DAT_14c9fbed0 = FUN_1407e02ea;
    _DAT_14c9fbed8 = FUN_146826273;
    _DAT_14c9fbeb0 = FUN_147208460;
    _DAT_14c9fbef0 = 0xffffffff000000e0;
    _DAT_14c9fbef8 = 8;
    DAT_14c9fbefc = 0;
    _DAT_14c9fbee0 = &LAB_14720848a;
    FUN_145e71f5a();
    FUN_1407e00cc(&DAT_14c9fbe98);
    return;
  }
  return;
}



// FUNCTION 145e71f5a FUN_145e71f5a body=123 status=ok
// SIG undefined FUN_145e71f5a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e71f5a(void)

{
  _DAT_14ca00408 = L"BASE";
  DAT_14ca00432 = 4;
  _DAT_14ca00410 = FUN_140b35ae4();
  _DAT_14ca00418 = DAT_14c9fbea8;
  _DAT_14ca00420 = &LAB_14682652b;
  DAT_14c9fbea8 = &DAT_14ca00408;
  DAT_14c9fbefd = DAT_14c9fbefd + '\x01';
  _DAT_14ca00428 = 0x100000000;
  if (*(char *)(_DAT_14ca00410 + 100) != '\0') {
    DAT_14c9fbefe = DAT_14c9fbefe + '\x01';
  }
  return;
}



// FUNCTION 145e71fd6 FUN_145e71fd6 body=226 status=ok
// SIG undefined FUN_145e71fd6(void)

longlong * FUN_145e71fd6(longlong *param_1)

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
  pcVar13 = FUN_1462e5262;
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



// FUNCTION 145e720be FUN_145e720be body=136 status=ok
// SIG undefined FUN_145e720be(void)

code * FUN_145e720be(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWScreenProbeHitDistance";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000069;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147216ad0;
}



// FUNCTION 145e72146 FUN_145e72146 body=144 status=ok
// SIG undefined FUN_145e72146(void)

code * FUN_145e72146(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1700000006c;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462e52ea;
}



// FUNCTION 145e721d6 FUN_145e721d6 body=205 status=ok
// SIG undefined FUN_145e721d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e721d6(void)

{
  if ((DAT_14ca00d6f & 2) == 0) {
    DAT_14ca00d6f = DAT_14ca00d6f | 2;
    _DAT_14ca00d10 = L"FScreenProbeComputeBRDFProbabilityDensityFunctionCS";
    _DAT_14ca00d28 = FUN_146826540;
    _DAT_14ca00d30 = FUN_146825d77;
    _DAT_14ca00d38 = FUN_146825fd6;
    _DAT_14ca00d40 = FUN_1407e02ea;
    _DAT_14ca00d48 = FUN_146826273;
    _DAT_14ca00d20 = FUN_147220b58;
    _DAT_14ca00d60 = 0xffffffff000000e0;
    _DAT_14ca00d68 = 8;
    DAT_14ca00d6c = 0;
    _DAT_14ca00d50 = &LAB_147220b82;
    FUN_145e722a4();
    FUN_1407e00cc(&DAT_14ca00d08);
    return;
  }
  return;
}



// FUNCTION 145e722a4 FUN_145e722a4 body=123 status=ok
// SIG undefined FUN_145e722a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e722a4(void)

{
  _DAT_14ca07778 = L"BASE";
  DAT_14ca077a2 = 4;
  _DAT_14ca07780 = FUN_140b35ae4();
  _DAT_14ca07788 = DAT_14ca00d18;
  _DAT_14ca07790 = &LAB_14682652b;
  DAT_14ca00d18 = &DAT_14ca07778;
  DAT_14ca00d6d = DAT_14ca00d6d + '\x01';
  _DAT_14ca07798 = 0x100000000;
  if (*(char *)(_DAT_14ca07780 + 100) != '\0') {
    DAT_14ca00d6e = DAT_14ca00d6e + '\x01';
  }
  return;
}



// FUNCTION 145e72320 FUN_145e72320 body=226 status=ok
// SIG undefined FUN_145e72320(void)

longlong * FUN_145e72320(longlong *param_1)

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
  pcVar13 = FUN_1462e785c;
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



// FUNCTION 145e72408 FUN_145e72408 body=136 status=ok
// SIG undefined FUN_145e72408(void)

code * FUN_145e72408(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWBRDFProbabilityDensityFunctionSH";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000057;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147229550;
}



// FUNCTION 145e72490 FUN_145e72490 body=144 status=ok
// SIG undefined FUN_145e72490(void)

code * FUN_145e72490(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1000000058;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145e72408;
}



// FUNCTION 145e72520 FUN_145e72520 body=292 status=ok
// SIG undefined FUN_145e72520(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e72520(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca198b8) {
    FUN_144b3d300(&DAT_14ca198b8);
    if (DAT_14ca198b8 == -1) {
      FUN_145e7278e();
      FUN_145e72644();
      FUN_140db5666(&DAT_14ca19810,0,&DAT_14ca197a8,L"FEmitHitProxyIdPS",
                    L"/Engine/Private/Nanite/NaniteExportGBuffer.usf",L"EmitHitProxyIdPS",3,1,
                    FUN_147262934,FUN_1472628d4,&LAB_1462f2e66,&LAB_1472628d0,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca1b2a8);
      _DAT_14ca19810 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e45bb3);
      _Init_thread_footer(&DAT_14ca198b8);
    }
  }
  return &DAT_14ca19810;
}



// FUNCTION 145e72644 FUN_145e72644 body=205 status=ok
// SIG undefined FUN_145e72644(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e72644(void)

{
  if ((DAT_14ca1980f & 2) == 0) {
    DAT_14ca1980f = DAT_14ca1980f | 2;
    _DAT_14ca197b0 = L"FEmitHitProxyIdPS";
    _DAT_14ca197c8 = FUN_146826540;
    _DAT_14ca197d0 = FUN_146825d77;
    _DAT_14ca197d8 = FUN_146825fd6;
    _DAT_14ca197e0 = FUN_1407e02ea;
    _DAT_14ca197e8 = FUN_146826273;
    _DAT_14ca197c0 = FUN_1472628a2;
    _DAT_14ca19800 = 0xffffffff000000e0;
    _DAT_14ca19808 = 8;
    DAT_14ca1980c = 0;
    _DAT_14ca197f0 = &LAB_1472628cc;
    FUN_145e72712();
    FUN_1407e00cc(&DAT_14ca197a8);
    return;
  }
  return;
}



// FUNCTION 145e72712 FUN_145e72712 body=123 status=ok
// SIG undefined FUN_145e72712(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e72712(void)

{
  _DAT_14ca1bc50 = L"BASE";
  DAT_14ca1bc7a = 4;
  _DAT_14ca1bc58 = FUN_140b35ae4();
  _DAT_14ca1bc60 = DAT_14ca197b8;
  _DAT_14ca1bc68 = &LAB_14682652b;
  DAT_14ca197b8 = &DAT_14ca1bc50;
  DAT_14ca1980d = DAT_14ca1980d + '\x01';
  _DAT_14ca1bc70 = 0x100000000;
  if (*(char *)(_DAT_14ca1bc58 + 100) != '\0') {
    DAT_14ca1980e = DAT_14ca1980e + '\x01';
  }
  return;
}



// FUNCTION 145e7278e FUN_145e7278e body=261 status=ok
// SIG undefined FUN_145e7278e(void)

void FUN_145e7278e(void)

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
              0x110) < DAT_14ca1b328) {
    FUN_144b3d300(&DAT_14ca1b328);
    if (DAT_14ca1b328 == -1) {
      FUN_145e72894(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x170;
      local_58 = 0x2e;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca1b2a8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e5a587);
      _Init_thread_footer(&DAT_14ca1b328);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e72894 FUN_145e72894 body=226 status=ok
// SIG undefined FUN_145e72894(void)

longlong * FUN_145e72894(longlong *param_1)

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
  pcVar13 = FUN_1462f34f0;
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



// FUNCTION 145e7297c FUN_145e7297c body=136 status=ok
// SIG undefined FUN_145e7297c(void)

code * FUN_145e7297c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ViewRect";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000034;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14726597c;
}



// FUNCTION 145e72a04 FUN_145e72a04 body=138 status=ok
// SIG undefined FUN_145e72a04(void)

code * FUN_145e72a04(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VisibleClustersSWHW";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"ByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000032;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462f3578;
}



// FUNCTION 145e72a8e FUN_145e72a8e body=292 status=ok
// SIG undefined FUN_145e72a8e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e72a8e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca20458) {
    FUN_144b3d300(&DAT_14ca20458);
    if (DAT_14ca20458 == -1) {
      FUN_145e72cfc();
      FUN_145e72bb2();
      FUN_140db5666(&DAT_14ca203b0,0,&DAT_14ca20348,L"FTemporalResolveCS",
                    L"/Engine/Private/PathTracing/PathTracingSpatialTemporalDenoising.usf",
                    L"TemporalResolveCS",5,1,FUN_147277696,FUN_147277636,&LAB_1462f520e,
                    &LAB_147277632,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca22678);
      _DAT_14ca203b0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e832c4);
      _Init_thread_footer(&DAT_14ca20458);
    }
  }
  return &DAT_14ca203b0;
}



// FUNCTION 145e72bb2 FUN_145e72bb2 body=205 status=ok
// SIG undefined FUN_145e72bb2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e72bb2(void)

{
  if ((DAT_14ca203af & 2) == 0) {
    DAT_14ca203af = DAT_14ca203af | 2;
    _DAT_14ca20350 = L"FTemporalResolveCS";
    _DAT_14ca20368 = FUN_146826540;
    _DAT_14ca20370 = FUN_146825d77;
    _DAT_14ca20378 = FUN_146825fd6;
    _DAT_14ca20380 = FUN_1407e02ea;
    _DAT_14ca20388 = FUN_146826273;
    _DAT_14ca20360 = FUN_147277602;
    _DAT_14ca203a0 = 0xffffffff000000e0;
    _DAT_14ca203a8 = 8;
    DAT_14ca203ac = 0;
    _DAT_14ca20390 = &LAB_14727762e;
    FUN_145e72c80();
    FUN_1407e00cc(&DAT_14ca20348);
    return;
  }
  return;
}



// FUNCTION 145e72c80 FUN_145e72c80 body=123 status=ok
// SIG undefined FUN_145e72c80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e72c80(void)

{
  _DAT_14ca24f28 = L"BASE";
  DAT_14ca24f52 = 4;
  _DAT_14ca24f30 = FUN_140b35ae4();
  _DAT_14ca24f38 = DAT_14ca20358;
  _DAT_14ca24f40 = &LAB_14682652b;
  DAT_14ca20358 = &DAT_14ca24f28;
  DAT_14ca203ad = DAT_14ca203ad + '\x01';
  _DAT_14ca24f48 = 0x100000000;
  if (*(char *)(_DAT_14ca24f30 + 100) != '\0') {
    DAT_14ca203ae = DAT_14ca203ae + '\x01';
  }
  return;
}



// FUNCTION 145e72cfc FUN_145e72cfc body=261 status=ok
// SIG undefined FUN_145e72cfc(void)

void FUN_145e72cfc(void)

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
              0x110) < DAT_14ca226f8) {
    FUN_144b3d300(&DAT_14ca226f8);
    if (DAT_14ca226f8 == -1) {
      FUN_145e72e02(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xe0;
      local_58 = 0x39a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca22678,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e95e57);
      _Init_thread_footer(&DAT_14ca226f8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e72e02 FUN_145e72e02 body=226 status=ok
// SIG undefined FUN_145e72e02(void)

longlong * FUN_145e72e02(longlong *param_1)

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
  pcVar13 = FUN_1462f72a4;
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



// FUNCTION 145e72eea FUN_145e72eea body=136 status=ok
// SIG undefined FUN_145e72eea(void)

code * FUN_145e72eea(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SourceTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb0000003a0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462f732c;
}



// FUNCTION 145e72f72 FUN_145e72f72 body=138 status=ok
// SIG undefined FUN_145e72f72(void)

code * FUN_145e72f72(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Alpha";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000039d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14727f3b0;
}



// FUNCTION 145e72ffc FUN_145e72ffc body=292 status=ok
// SIG undefined FUN_145e72ffc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e72ffc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca207d0) {
    FUN_144b3d300(&DAT_14ca207d0);
    if (DAT_14ca207d0 == -1) {
      FUN_145e7326a();
      FUN_145e73120();
      FUN_140db5666(&DAT_14ca20728,0,&DAT_14ca206c0,L"FTemporalPrepassCS",
                    L"/Engine/Private/PathTracing/PathTracingSpatialTemporalDenoising.usf",
                    L"TemporalPrepassCS",5,8,FUN_1472779f0,FUN_147277990,&LAB_14108ba38,
                    &LAB_14727798c,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca22810);
      _DAT_14ca20728 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e832e8);
      _Init_thread_footer(&DAT_14ca207d0);
    }
  }
  return &DAT_14ca20728;
}



// FUNCTION 145e73120 FUN_145e73120 body=205 status=ok
// SIG undefined FUN_145e73120(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e73120(void)

{
  if ((DAT_14ca20727 & 2) == 0) {
    DAT_14ca20727 = DAT_14ca20727 | 2;
    _DAT_14ca206c8 = L"FTemporalPrepassCS";
    _DAT_14ca206e0 = FUN_146826540;
    _DAT_14ca206e8 = FUN_146825d77;
    _DAT_14ca206f0 = FUN_146825fd6;
    _DAT_14ca206f8 = FUN_1407e02ea;
    _DAT_14ca20700 = FUN_146826273;
    _DAT_14ca206d8 = FUN_14727795c;
    _DAT_14ca20718 = 0xffffffff000000e0;
    _DAT_14ca20720 = 8;
    DAT_14ca20724 = 0;
    _DAT_14ca20708 = &LAB_147277988;
    FUN_145e731ee();
    FUN_1407e00cc(&DAT_14ca206c0);
    return;
  }
  return;
}



// FUNCTION 145e731ee FUN_145e731ee body=123 status=ok
// SIG undefined FUN_145e731ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e731ee(void)

{
  _DAT_14ca24fb8 = L"BASE";
  DAT_14ca24fe2 = 4;
  _DAT_14ca24fc0 = FUN_140b35ae4();
  _DAT_14ca24fc8 = DAT_14ca206d0;
  _DAT_14ca24fd0 = &LAB_14682652b;
  DAT_14ca206d0 = &DAT_14ca24fb8;
  DAT_14ca20725 = DAT_14ca20725 + '\x01';
  _DAT_14ca24fd8 = 0x100000000;
  if (*(char *)(_DAT_14ca24fc0 + 100) != '\0') {
    DAT_14ca20726 = DAT_14ca20726 + '\x01';
  }
  return;
}



// FUNCTION 145e7326a FUN_145e7326a body=261 status=ok
// SIG undefined FUN_145e7326a(void)

void FUN_145e7326a(void)

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
              0x110) < DAT_14ca22890) {
    FUN_144b3d300(&DAT_14ca22890);
    if (DAT_14ca22890 == -1) {
      FUN_145e73370(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xa0;
      local_58 = 0x6fa;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca22810,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e95e7b);
      _Init_thread_footer(&DAT_14ca22890);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e73370 FUN_145e73370 body=226 status=ok
// SIG undefined FUN_145e73370(void)

longlong * FUN_145e73370(longlong *param_1)

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
  pcVar13 = FUN_1462f7556;
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



// FUNCTION 145e73458 FUN_145e73458 body=136 status=ok
// SIG undefined FUN_145e73458(void)

code * FUN_145e73458(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"AlbedoTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000006fc;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14727f65c;
}



// FUNCTION 145e734e0 FUN_145e734e0 body=138 status=ok
// SIG undefined FUN_145e734e0(void)

code * FUN_145e734e0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NormalTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000006fd;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e73458;
}



// FUNCTION 145e7356a FUN_145e7356a body=292 status=ok
// SIG undefined FUN_145e7356a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e7356a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca20e80) {
    FUN_144b3d300(&DAT_14ca20e80);
    if (DAT_14ca20e80 == -1) {
      FUN_145e737d8();
      FUN_145e7368e();
      FUN_140db5666(&DAT_14ca20dd8,0,&DAT_14ca20d70,L"TPrefilterPlanarReflectionPS<false>",
                    L"/Engine/Private/PlanarReflectionShaders.usf",L"PrefilterPlanarReflectionPS",3,
                    1,FUN_1472780ee,FUN_14727808e,&LAB_14727808a,&LAB_147278086,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca250d8);
      _DAT_14ca20dd8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e845d4);
      _Init_thread_footer(&DAT_14ca20e80);
    }
  }
  return &DAT_14ca20dd8;
}



// FUNCTION 145e7368e FUN_145e7368e body=205 status=ok
// SIG undefined FUN_145e7368e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e7368e(void)

{
  if ((DAT_14ca20dd7 & 2) == 0) {
    DAT_14ca20dd7 = DAT_14ca20dd7 | 2;
    _DAT_14ca20d78 = L"TPrefilterPlanarReflectionPS<false>";
    _DAT_14ca20d90 = FUN_146826540;
    _DAT_14ca20d98 = FUN_146825d77;
    _DAT_14ca20da0 = FUN_146825fd6;
    _DAT_14ca20da8 = FUN_1407e02ea;
    _DAT_14ca20db0 = FUN_146826273;
    _DAT_14ca20d88 = FUN_147278056;
    _DAT_14ca20dc8 = 0xffffffff000000e0;
    _DAT_14ca20dd0 = 8;
    DAT_14ca20dd4 = 0;
    _DAT_14ca20db8 = &LAB_147278082;
    FUN_145e7375c();
    FUN_1407e00cc(&DAT_14ca20d70);
    return;
  }
  return;
}



// FUNCTION 145e7375c FUN_145e7375c body=123 status=ok
// SIG undefined FUN_145e7375c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e7375c(void)

{
  _DAT_14ca250a8 = L"BASE";
  DAT_14ca250d2 = 4;
  _DAT_14ca250b0 = FUN_140b35ae4();
  _DAT_14ca250b8 = DAT_14ca20d80;
  _DAT_14ca250c0 = &LAB_14682652b;
  DAT_14ca20d80 = &DAT_14ca250a8;
  DAT_14ca20dd5 = DAT_14ca20dd5 + '\x01';
  _DAT_14ca250c8 = 0x100000000;
  if (*(char *)(_DAT_14ca250b0 + 100) != '\0') {
    DAT_14ca20dd6 = DAT_14ca20dd6 + '\x01';
  }
  return;
}



// FUNCTION 145e737d8 FUN_145e737d8 body=261 status=ok
// SIG undefined FUN_145e737d8(void)

void FUN_145e737d8(void)

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
              0x110) < DAT_14ca25158) {
    FUN_144b3d300(&DAT_14ca25158);
    if (DAT_14ca25158 == -1) {
      FUN_145e738de(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x160;
      local_58 = 0x94;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca250d8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ea80db);
      _Init_thread_footer(&DAT_14ca25158);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e738de FUN_145e738de body=226 status=ok
// SIG undefined FUN_145e738de(void)

longlong * FUN_145e738de(longlong *param_1)

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
  pcVar13 = FUN_1462f80b6;
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



// FUNCTION 145e739c6 FUN_145e739c6 body=136 status=ok
// SIG undefined FUN_145e739c6(void)

code * FUN_145e739c6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"KernelRadiusY";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000098;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462f813e;
}



// FUNCTION 145e73a4e FUN_145e73a4e body=138 status=ok
// SIG undefined FUN_145e73a4e(void)

code * FUN_145e73a4e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SceneColorInputSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x500000009b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472877e6;
}



// FUNCTION 145e73ad8 FUN_145e73ad8 body=292 status=ok
// SIG undefined FUN_145e73ad8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e73ad8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2d1b8) {
    FUN_144b3d300(&DAT_14ca2d1b8);
    if (DAT_14ca2d1b8 == -1) {
      FUN_145e73d46();
      FUN_145e73bfc();
      FUN_140db5666(&DAT_14ca2d110,0,&DAT_14ca2d0a8,L"FMobileSunMaskPS",
                    L"/Engine/Private/PostProcessMobile.usf",L"SunMaskPS_Mobile",3,0x10,
                    FUN_147295d44,FUN_147295ce4,&LAB_14581f38c,&LAB_147295ce0,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca32788);
      _DAT_14ca2d110 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142efa773);
      _Init_thread_footer(&DAT_14ca2d1b8);
    }
  }
  return &DAT_14ca2d110;
}



// FUNCTION 145e73bfc FUN_145e73bfc body=205 status=ok
// SIG undefined FUN_145e73bfc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e73bfc(void)

{
  if ((DAT_14ca2d10f & 2) == 0) {
    DAT_14ca2d10f = DAT_14ca2d10f | 2;
    _DAT_14ca2d0b0 = L"FMobileSunMaskPS";
    _DAT_14ca2d0c8 = FUN_146826540;
    _DAT_14ca2d0d0 = FUN_146825d77;
    _DAT_14ca2d0d8 = FUN_146825fd6;
    _DAT_14ca2d0e0 = FUN_1407e02ea;
    _DAT_14ca2d0e8 = FUN_146826273;
    _DAT_14ca2d0c0 = FUN_147295cb0;
    _DAT_14ca2d100 = 0xffffffff000000e0;
    _DAT_14ca2d108 = 8;
    DAT_14ca2d10c = 0;
    _DAT_14ca2d0f0 = &LAB_147295cdc;
    FUN_145e73cca();
    FUN_1407e00cc(&DAT_14ca2d0a8);
    return;
  }
  return;
}



// FUNCTION 145e73cca FUN_145e73cca body=123 status=ok
// SIG undefined FUN_145e73cca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e73cca(void)

{
  _DAT_14ca344b8 = L"BASE";
  DAT_14ca344e2 = 4;
  _DAT_14ca344c0 = FUN_140b35ae4();
  _DAT_14ca344c8 = DAT_14ca2d0b8;
  _DAT_14ca344d0 = &LAB_14682652b;
  DAT_14ca2d0b8 = &DAT_14ca344b8;
  DAT_14ca2d10d = DAT_14ca2d10d + '\x01';
  _DAT_14ca344d8 = 0x100000000;
  if (*(char *)(_DAT_14ca344c0 + 100) != '\0') {
    DAT_14ca2d10e = DAT_14ca2d10e + '\x01';
  }
  return;
}



// FUNCTION 145e73d46 FUN_145e73d46 body=261 status=ok
// SIG undefined FUN_145e73d46(void)

void FUN_145e73d46(void)

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
              0x110) < DAT_14ca32808) {
    FUN_144b3d300(&DAT_14ca32808);
    if (DAT_14ca32808 == -1) {
      FUN_145e73e4c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x160;
      local_58 = 0x2b1;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca32788,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f13edd);
      _Init_thread_footer(&DAT_14ca32808);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e73e4c FUN_145e73e4c body=226 status=ok
// SIG undefined FUN_145e73e4c(void)

longlong * FUN_145e73e4c(longlong *param_1)

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
  pcVar13 = FUN_1462fc118;
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



// FUNCTION 145e73f34 FUN_145e73f34 body=136 status=ok
// SIG undefined FUN_145e73f34(void)

code * FUN_145e73f34(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SceneColorSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x38000002b5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14729c2a8;
}



// FUNCTION 145e73fbc FUN_145e73fbc body=138 status=ok
// SIG undefined FUN_145e73fbc(void)

code * FUN_145e73fbc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BloomThreshold";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x54000002b8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14729c194;
}



// FUNCTION 145e74046 FUN_145e74046 body=292 status=ok
// SIG undefined FUN_145e74046(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e74046(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2de70) {
    FUN_144b3d300(&DAT_14ca2de70);
    if (DAT_14ca2de70 == -1) {
      FUN_145e742b4();
      FUN_145e7416a();
      FUN_140db5666(&DAT_14ca2ddc8,0,&DAT_14ca2dd60,L"FMobileDofBlurPS",
                    L"/Engine/Private/PostProcessMobile.usf",L"DofBlurPS_Mobile",3,1,FUN_147296b20,
                    FUN_147296ac0,&LAB_147296aa8,&LAB_147296aa4,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca32d60);
      _DAT_14ca2ddc8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142efd495);
      _Init_thread_footer(&DAT_14ca2de70);
    }
  }
  return &DAT_14ca2ddc8;
}



// FUNCTION 145e7416a FUN_145e7416a body=205 status=ok
// SIG undefined FUN_145e7416a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e7416a(void)

{
  if ((DAT_14ca2ddc7 & 2) == 0) {
    DAT_14ca2ddc7 = DAT_14ca2ddc7 | 2;
    _DAT_14ca2dd68 = L"FMobileDofBlurPS";
    _DAT_14ca2dd80 = FUN_146826540;
    _DAT_14ca2dd88 = FUN_146825d77;
    _DAT_14ca2dd90 = FUN_146825fd6;
    _DAT_14ca2dd98 = FUN_1407e02ea;
    _DAT_14ca2dda0 = FUN_146826273;
    _DAT_14ca2dd78 = FUN_147296a74;
    _DAT_14ca2ddb8 = 0xffffffff000000e0;
    _DAT_14ca2ddc0 = 8;
    DAT_14ca2ddc4 = 0;
    _DAT_14ca2dda8 = &LAB_147296aa0;
    FUN_145e74238();
    FUN_1407e00cc(&DAT_14ca2dd60);
    return;
  }
  return;
}



// FUNCTION 145e74238 FUN_145e74238 body=123 status=ok
// SIG undefined FUN_145e74238(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e74238(void)

{
  _DAT_14ca346c8 = L"BASE";
  DAT_14ca346f2 = 4;
  _DAT_14ca346d0 = FUN_140b35ae4();
  _DAT_14ca346d8 = DAT_14ca2dd70;
  _DAT_14ca346e0 = &LAB_14682652b;
  DAT_14ca2dd70 = &DAT_14ca346c8;
  DAT_14ca2ddc5 = DAT_14ca2ddc5 + '\x01';
  _DAT_14ca346e8 = 0x100000000;
  if (*(char *)(_DAT_14ca346d0 + 100) != '\0') {
    DAT_14ca2ddc6 = DAT_14ca2ddc6 + '\x01';
  }
  return;
}



// FUNCTION 145e742b4 FUN_145e742b4 body=261 status=ok
// SIG undefined FUN_145e742b4(void)

void FUN_145e742b4(void)

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
              0x110) < DAT_14ca32de0) {
    FUN_144b3d300(&DAT_14ca32de0);
    if (DAT_14ca32de0 == -1) {
      FUN_145e743ba(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x140;
      local_58 = 0x5e1;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca32d60,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f13f61);
      _Init_thread_footer(&DAT_14ca32de0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e743ba FUN_145e743ba body=226 status=ok
// SIG undefined FUN_145e743ba(void)

longlong * FUN_145e743ba(longlong *param_1)

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
  pcVar13 = FUN_1462fc816;
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



// FUNCTION 145e744a2 FUN_145e744a2 body=136 status=ok
// SIG undefined FUN_145e744a2(void)

code * FUN_145e744a2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DofNearTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000005e3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462fc89e;
}



// FUNCTION 145e7452a FUN_145e7452a body=138 status=ok
// SIG undefined FUN_145e7452a(void)

code * FUN_145e7452a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DofDownSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x38000005e6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14729d9a4;
}



// FUNCTION 145e745b4 FUN_145e745b4 body=292 status=ok
// SIG undefined FUN_145e745b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e745b4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2e318) {
    FUN_144b3d300(&DAT_14ca2e318);
    if (DAT_14ca2e318 == -1) {
      FUN_145e74822();
      FUN_145e746d8();
      FUN_140db5666(&DAT_14ca2e270,0,&DAT_14ca2e208,L"FMobileAverageLuminanceCS",
                    L"/Engine/Private/PostProcessMobile.usf",L"AverageLuminance_MainCS",5,1,
                    FUN_147296ff8,FUN_147296f98,&LAB_147296f80,&LAB_147296f7c,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca32f80);
      _DAT_14ca2e270 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142efe017);
      _Init_thread_footer(&DAT_14ca2e318);
    }
  }
  return &DAT_14ca2e270;
}



// FUNCTION 145e746d8 FUN_145e746d8 body=205 status=ok
// SIG undefined FUN_145e746d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e746d8(void)

{
  if ((DAT_14ca2e26f & 2) == 0) {
    DAT_14ca2e26f = DAT_14ca2e26f | 2;
    _DAT_14ca2e210 = L"FMobileAverageLuminanceCS";
    _DAT_14ca2e228 = FUN_146826540;
    _DAT_14ca2e230 = FUN_146825d77;
    _DAT_14ca2e238 = FUN_146825fd6;
    _DAT_14ca2e240 = FUN_1407e02ea;
    _DAT_14ca2e248 = FUN_146826273;
    _DAT_14ca2e220 = FUN_147296f4c;
    _DAT_14ca2e260 = 0xffffffff000000e0;
    _DAT_14ca2e268 = 8;
    DAT_14ca2e26c = 0;
    _DAT_14ca2e250 = &LAB_147296f78;
    FUN_145e747a6();
    FUN_1407e00cc(&DAT_14ca2e208);
    return;
  }
  return;
}



// FUNCTION 145e747a6 FUN_145e747a6 body=123 status=ok
// SIG undefined FUN_145e747a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e747a6(void)

{
  _DAT_14ca34788 = L"BASE";
  DAT_14ca347b2 = 4;
  _DAT_14ca34790 = FUN_140b35ae4();
  _DAT_14ca34798 = DAT_14ca2e218;
  _DAT_14ca347a0 = &LAB_14682652b;
  DAT_14ca2e218 = &DAT_14ca34788;
  DAT_14ca2e26d = DAT_14ca2e26d + '\x01';
  _DAT_14ca347a8 = 0x100000000;
  if (*(char *)(_DAT_14ca34790 + 100) != '\0') {
    DAT_14ca2e26e = DAT_14ca2e26e + '\x01';
  }
  return;
}



// FUNCTION 145e74822 FUN_145e74822 body=261 status=ok
// SIG undefined FUN_145e74822(void)

void FUN_145e74822(void)

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
              0x110) < DAT_14ca33000) {
    FUN_144b3d300(&DAT_14ca33000);
    if (DAT_14ca33000 == -1) {
      FUN_145e74928(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xc0;
      local_58 = 0x6d2;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca32f80,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f13f91);
      _Init_thread_footer(&DAT_14ca33000);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e74928 FUN_145e74928 body=226 status=ok
// SIG undefined FUN_145e74928(void)

longlong * FUN_145e74928(longlong *param_1)

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
  pcVar13 = FUN_1462fca3a;
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



// FUNCTION 145e74a10 FUN_145e74a10 body=130 status=ok
// SIG undefined FUN_145e74a10(void)

undefined1 * FUN_145e74a10(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SourceSizeAndInvSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6d3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e74a0c;
}



// FUNCTION 145e74a92 FUN_145e74a92 body=144 status=ok
// SIG undefined FUN_145e74a92(void)

code * FUN_145e74a92(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14147abf6();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"EyeAdaptation";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FEyeAdaptationParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x10000006d4;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145e74a10;
}



// FUNCTION 145e74b22 FUN_145e74b22 body=292 status=ok
// SIG undefined FUN_145e74b22(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e74b22(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca305f8) {
    FUN_144b3d300(&DAT_14ca305f8);
    if (DAT_14ca305f8 == -1) {
      FUN_145e74d90();
      FUN_145e74c46();
      FUN_140db5666(&DAT_14ca30550,0,&DAT_14ca304e8,L"FTestImagePS",
                    L"/Engine/Private/PostProcessTestImage.usf",L"MainPS",3,1,FUN_14729a146,
                    FUN_14729a0e6,&LAB_14729a0ce,&LAB_14729a0ca,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca33e70);
      _DAT_14ca30550 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f0bc3a);
      _Init_thread_footer(&DAT_14ca305f8);
    }
  }
  return &DAT_14ca30550;
}



// FUNCTION 145e74c46 FUN_145e74c46 body=205 status=ok
// SIG undefined FUN_145e74c46(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e74c46(void)

{
  if ((DAT_14ca3054f & 2) == 0) {
    DAT_14ca3054f = DAT_14ca3054f | 2;
    _DAT_14ca304f0 = L"FTestImagePS";
    _DAT_14ca30508 = FUN_146826540;
    _DAT_14ca30510 = FUN_146825d77;
    _DAT_14ca30518 = FUN_146825fd6;
    _DAT_14ca30520 = FUN_1407e02ea;
    _DAT_14ca30528 = FUN_146826273;
    _DAT_14ca30500 = FUN_14729a09a;
    _DAT_14ca30540 = 0xffffffff000000e0;
    _DAT_14ca30548 = 8;
    DAT_14ca3054c = 0;
    _DAT_14ca30530 = &LAB_14729a0c6;
    FUN_145e74d14();
    FUN_1407e00cc(&DAT_14ca304e8);
    return;
  }
  return;
}



// FUNCTION 145e74d14 FUN_145e74d14 body=123 status=ok
// SIG undefined FUN_145e74d14(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e74d14(void)

{
  _DAT_14ca34d40 = L"BASE";
  DAT_14ca34d6a = 4;
  _DAT_14ca34d48 = FUN_140b35ae4();
  _DAT_14ca34d50 = DAT_14ca304f8;
  _DAT_14ca34d58 = &LAB_14682652b;
  DAT_14ca304f8 = &DAT_14ca34d40;
  DAT_14ca3054d = DAT_14ca3054d + '\x01';
  _DAT_14ca34d60 = 0x100000000;
  if (*(char *)(_DAT_14ca34d48 + 100) != '\0') {
    DAT_14ca3054e = DAT_14ca3054e + '\x01';
  }
  return;
}



// FUNCTION 145e74d90 FUN_145e74d90 body=261 status=ok
// SIG undefined FUN_145e74d90(void)

void FUN_145e74d90(void)

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
              0x110) < DAT_14ca33ef0) {
    FUN_144b3d300(&DAT_14ca33ef0);
    if (DAT_14ca33ef0 == -1) {
      FUN_145e74e96(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 400;
      local_58 = 0x10;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca33e70,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f140f9);
      _Init_thread_footer(&DAT_14ca33ef0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e74e96 FUN_145e74e96 body=226 status=ok
// SIG undefined FUN_145e74e96(void)

longlong * FUN_145e74e96(longlong *param_1)

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
  pcVar13 = FUN_1462feb4c;
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



// FUNCTION 145e74f7e FUN_145e74f7e body=136 status=ok
// SIG undefined FUN_145e74f7e(void)

undefined1 * FUN_145e74f7e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14123be74();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Output";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FScreenPassTextureViewportParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x11;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e74f7a;
}



// FUNCTION 145e75006 FUN_145e75006 body=138 status=ok
// SIG undefined FUN_145e75006(void)

code * FUN_145e75006(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FrameTime";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8400000014;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472a0e1c;
}



// FUNCTION 145e75090 FUN_145e75090 body=292 status=ok
// SIG undefined FUN_145e75090(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e75090(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca42510) {
    FUN_144b3d300(&DAT_14ca42510);
    if (DAT_14ca42510 == -1) {
      FUN_145e752fe();
      FUN_145e751b4();
      FUN_140db5666(&DAT_14ca42468,0,&DAT_14ca42400,L"FCopySceneColorToCubeFacePS",
                    L"/Engine/Private/ReflectionEnvironmentShaders.usf",
                    L"CopySceneColorToCubeFaceColorPS",3,1,FUN_1472c6610,FUN_1472c65b0,
                    &LAB_1472c65ac,&LAB_1472c65a8,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca43dd0)
      ;
      _DAT_14ca42468 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f84f3b);
      _Init_thread_footer(&DAT_14ca42510);
    }
  }
  return &DAT_14ca42468;
}



// FUNCTION 145e751b4 FUN_145e751b4 body=205 status=ok
// SIG undefined FUN_145e751b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e751b4(void)

{
  if ((DAT_14ca42467 & 2) == 0) {
    DAT_14ca42467 = DAT_14ca42467 | 2;
    _DAT_14ca42408 = L"FCopySceneColorToCubeFacePS";
    _DAT_14ca42420 = FUN_146826540;
    _DAT_14ca42428 = FUN_146825d77;
    _DAT_14ca42430 = FUN_146825fd6;
    _DAT_14ca42438 = FUN_1407e02ea;
    _DAT_14ca42440 = FUN_146826273;
    _DAT_14ca42418 = FUN_1472c657a;
    _DAT_14ca42458 = 0xffffffff000000e0;
    _DAT_14ca42460 = 8;
    DAT_14ca42464 = 0;
    _DAT_14ca42448 = &LAB_1472c65a4;
    FUN_145e75282();
    FUN_1407e00cc(&DAT_14ca42400);
    return;
  }
  return;
}



// FUNCTION 145e75282 FUN_145e75282 body=123 status=ok
// SIG undefined FUN_145e75282(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e75282(void)

{
  _DAT_14ca44918 = L"BASE";
  DAT_14ca44942 = 4;
  _DAT_14ca44920 = FUN_140b35ae4();
  _DAT_14ca44928 = DAT_14ca42410;
  _DAT_14ca44930 = &LAB_14682652b;
  DAT_14ca42410 = &DAT_14ca44918;
  DAT_14ca42465 = DAT_14ca42465 + '\x01';
  _DAT_14ca44938 = 0x100000000;
  if (*(char *)(_DAT_14ca44920 + 100) != '\0') {
    DAT_14ca42466 = DAT_14ca42466 + '\x01';
  }
  return;
}



// FUNCTION 145e752fe FUN_145e752fe body=261 status=ok
// SIG undefined FUN_145e752fe(void)

void FUN_145e752fe(void)

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
              0x110) < DAT_14ca43e50) {
    FUN_144b3d300(&DAT_14ca43e50);
    if (DAT_14ca43e50 == -1) {
      FUN_145e75404(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x150;
      local_58 = 0xdd;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca43dd0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142fb1ef4);
      _Init_thread_footer(&DAT_14ca43e50);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e75404 FUN_145e75404 body=226 status=ok
// SIG undefined FUN_145e75404(void)

longlong * FUN_145e75404(longlong *param_1)

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
  pcVar13 = FUN_146304398;
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



// FUNCTION 145e754ec FUN_145e754ec body=136 status=ok
// SIG undefined FUN_145e754ec(void)

code * FUN_145e754ec(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000000e1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472cd64a;
}



// FUNCTION 145e75574 FUN_145e75574 body=138 status=ok
// SIG undefined FUN_145e75574(void)

undefined1 * FUN_145e75574(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xde;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e754e8;
}



// FUNCTION 145e755fe FUN_145e755fe body=292 status=ok
// SIG undefined FUN_145e755fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e755fe(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca428e8) {
    FUN_144b3d300(&DAT_14ca428e8);
    if (DAT_14ca428e8 == -1) {
      FUN_145e7586c();
      FUN_145e75722();
      FUN_140db5666(&DAT_14ca42840,0,&DAT_14ca427d8,L"FAccumulateDiffuseIrradiancePS",
                    L"/Engine/Private/ReflectionEnvironmentShaders.usf",
                    L"DiffuseIrradianceAccumulatePS",3,1,FUN_1472c6d6e,FUN_1472c6d0e,&LAB_1472c6d0a,
                    &LAB_1472c6d06,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca43f68);
      _DAT_14ca42840 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f8f33f);
      _Init_thread_footer(&DAT_14ca428e8);
    }
  }
  return &DAT_14ca42840;
}



// FUNCTION 145e75722 FUN_145e75722 body=205 status=ok
// SIG undefined FUN_145e75722(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e75722(void)

{
  if ((DAT_14ca4283f & 2) == 0) {
    DAT_14ca4283f = DAT_14ca4283f | 2;
    _DAT_14ca427e0 = L"FAccumulateDiffuseIrradiancePS";
    _DAT_14ca427f8 = FUN_146826540;
    _DAT_14ca42800 = FUN_146825d77;
    _DAT_14ca42808 = FUN_146825fd6;
    _DAT_14ca42810 = FUN_1407e02ea;
    _DAT_14ca42818 = FUN_146826273;
    _DAT_14ca427f0 = FUN_1472c6cd8;
    _DAT_14ca42830 = 0xffffffff000000e0;
    _DAT_14ca42838 = 8;
    DAT_14ca4283c = 0;
    _DAT_14ca42820 = &LAB_1472c6d02;
    FUN_145e757f0();
    FUN_1407e00cc(&DAT_14ca427d8);
    return;
  }
  return;
}



// FUNCTION 145e757f0 FUN_145e757f0 body=123 status=ok
// SIG undefined FUN_145e757f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e757f0(void)

{
  _DAT_14ca44a00 = L"BASE";
  DAT_14ca44a2a = 4;
  _DAT_14ca44a08 = FUN_140b35ae4();
  _DAT_14ca44a10 = DAT_14ca427e8;
  _DAT_14ca44a18 = &LAB_14682652b;
  DAT_14ca427e8 = &DAT_14ca44a00;
  DAT_14ca4283d = DAT_14ca4283d + '\x01';
  _DAT_14ca44a20 = 0x100000000;
  if (*(char *)(_DAT_14ca44a08 + 100) != '\0') {
    DAT_14ca4283e = DAT_14ca4283e + '\x01';
  }
  return;
}



// FUNCTION 145e7586c FUN_145e7586c body=261 status=ok
// SIG undefined FUN_145e7586c(void)

void FUN_145e7586c(void)

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
              0x110) < DAT_14ca43fe8) {
    FUN_144b3d300(&DAT_14ca43fe8);
    if (DAT_14ca43fe8 == -1) {
      FUN_145e75972(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x140;
      local_58 = 0x3b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca43f68,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142fb252b);
      _Init_thread_footer(&DAT_14ca43fe8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e75972 FUN_145e75972 body=226 status=ok
// SIG undefined FUN_145e75972(void)

longlong * FUN_145e75972(longlong *param_1)

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
  pcVar13 = FUN_1463045e0;
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



// FUNCTION 145e75a5a FUN_145e75a5a body=136 status=ok
// SIG undefined FUN_145e75a5a(void)

code * FUN_145e75a5a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Sample23";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000003f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472cdf8c;
}



// FUNCTION 145e75ae2 FUN_145e75ae2 body=138 status=ok
// SIG undefined FUN_145e75ae2(void)

code * FUN_145e75ae2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SourceCubemapSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000003d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472ce016;
}



// FUNCTION 145e75b6c FUN_145e75b6c body=292 status=ok
// SIG undefined FUN_145e75b6c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e75b6c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4dfd8) {
    FUN_144b3d300(&DAT_14ca4dfd8);
    if (DAT_14ca4dfd8 == -1) {
      FUN_145e75dda();
      FUN_145e75c90();
      FUN_140db5666(&DAT_14ca4df30,0,&DAT_14ca4dec8,L"FShaderDrawDebugVS",
                    L"/Engine/Private/ShaderPrintDrawPrimitive.usf",L"ShaderDrawDebugVS",0,2,
                    FUN_1472eb50a,FUN_1472eb4aa,&LAB_1472eb480,&LAB_1472eb47c,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca561e8);
      _DAT_14ca4df30 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14303e9e6);
      _Init_thread_footer(&DAT_14ca4dfd8);
    }
  }
  return &DAT_14ca4df30;
}



// FUNCTION 145e75c90 FUN_145e75c90 body=205 status=ok
// SIG undefined FUN_145e75c90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e75c90(void)

{
  if ((DAT_14ca4df2f & 2) == 0) {
    DAT_14ca4df2f = DAT_14ca4df2f | 2;
    _DAT_14ca4ded0 = L"FShaderDrawDebugVS";
    _DAT_14ca4dee8 = FUN_146826540;
    _DAT_14ca4def0 = FUN_146825d77;
    _DAT_14ca4def8 = FUN_146825fd6;
    _DAT_14ca4df00 = FUN_1407e02ea;
    _DAT_14ca4df08 = FUN_146826273;
    _DAT_14ca4dee0 = FUN_1472eb44c;
    _DAT_14ca4df20 = 0xffffffff000000e0;
    _DAT_14ca4df28 = 8;
    DAT_14ca4df2c = 0;
    _DAT_14ca4df10 = &LAB_1472eb478;
    FUN_145e75d5e();
    FUN_1407e00cc(&DAT_14ca4dec8);
    return;
  }
  return;
}



// FUNCTION 145e75d5e FUN_145e75d5e body=123 status=ok
// SIG undefined FUN_145e75d5e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e75d5e(void)

{
  _DAT_14ca56a98 = L"BASE";
  DAT_14ca56ac2 = 4;
  _DAT_14ca56aa0 = FUN_140b35ae4();
  _DAT_14ca56aa8 = DAT_14ca4ded8;
  _DAT_14ca56ab0 = &LAB_14682652b;
  DAT_14ca4ded8 = &DAT_14ca56a98;
  DAT_14ca4df2d = DAT_14ca4df2d + '\x01';
  _DAT_14ca56ab8 = 0x100000000;
  if (*(char *)(_DAT_14ca56aa0 + 100) != '\0') {
    DAT_14ca4df2e = DAT_14ca4df2e + '\x01';
  }
  return;
}



// FUNCTION 145e75dda FUN_145e75dda body=261 status=ok
// SIG undefined FUN_145e75dda(void)

void FUN_145e75dda(void)

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
              0x110) < DAT_14ca56268) {
    FUN_144b3d300(&DAT_14ca56268);
    if (DAT_14ca56268 == -1) {
      FUN_145e75ee0(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x90;
      local_58 = 0x269;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca561e8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14305d811);
      _Init_thread_footer(&DAT_14ca56268);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e75ee0 FUN_145e75ee0 body=226 status=ok
// SIG undefined FUN_145e75ee0(void)

longlong * FUN_145e75ee0(longlong *param_1)

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
  pcVar13 = FUN_146307f76;
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



// FUNCTION 145e75fc8 FUN_145e75fc8 body=136 status=ok
// SIG undefined FUN_145e75fc8(void)

code * FUN_145e75fc8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TranslatedWorldOffsetConversion";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000026b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14630808e;
}



// FUNCTION 145e76050 FUN_145e76050 body=138 status=ok
// SIG undefined FUN_145e76050(void)

code * FUN_145e76050(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TranslatedWorldToClip";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000026c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e75fc8;
}



// FUNCTION 145e760da FUN_145e760da body=292 status=ok
// SIG undefined FUN_145e760da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e760da(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4e228) {
    FUN_144b3d300(&DAT_14ca4e228);
    if (DAT_14ca4e228 == -1) {
      FUN_145e76348();
      FUN_145e761fe();
      FUN_140db5666(&DAT_14ca4e180,0,&DAT_14ca4e118,L"FShaderZoomCS",
                    L"/Engine/Private/ShaderPrintDraw.usf",L"DrawZoomCS",5,1,FUN_1472eb79a,
                    FUN_1472eb73a,&LAB_1472eb710,&LAB_1472eb70c,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca562f8);
      _DAT_14ca4e180 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14303e9fe);
      _Init_thread_footer(&DAT_14ca4e228);
    }
  }
  return &DAT_14ca4e180;
}



// FUNCTION 145e761fe FUN_145e761fe body=205 status=ok
// SIG undefined FUN_145e761fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e761fe(void)

{
  if ((DAT_14ca4e17f & 2) == 0) {
    DAT_14ca4e17f = DAT_14ca4e17f | 2;
    _DAT_14ca4e120 = L"FShaderZoomCS";
    _DAT_14ca4e138 = FUN_146826540;
    _DAT_14ca4e140 = FUN_146825d77;
    _DAT_14ca4e148 = FUN_146825fd6;
    _DAT_14ca4e150 = FUN_1407e02ea;
    _DAT_14ca4e158 = FUN_146826273;
    _DAT_14ca4e130 = FUN_1472eb6dc;
    _DAT_14ca4e170 = 0xffffffff000000e0;
    _DAT_14ca4e178 = 8;
    DAT_14ca4e17c = 0;
    _DAT_14ca4e160 = &LAB_1472eb708;
    FUN_145e762cc();
    FUN_1407e00cc(&DAT_14ca4e118);
    return;
  }
  return;
}



// FUNCTION 145e762cc FUN_145e762cc body=123 status=ok
// SIG undefined FUN_145e762cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e762cc(void)

{
  _DAT_14ca56af8 = L"BASE";
  DAT_14ca56b22 = 4;
  _DAT_14ca56b00 = FUN_140b35ae4();
  _DAT_14ca56b08 = DAT_14ca4e128;
  _DAT_14ca56b10 = &LAB_14682652b;
  DAT_14ca4e128 = &DAT_14ca56af8;
  DAT_14ca4e17d = DAT_14ca4e17d + '\x01';
  _DAT_14ca56b18 = 0x100000000;
  if (*(char *)(_DAT_14ca56b00 + 100) != '\0') {
    DAT_14ca4e17e = DAT_14ca4e17e + '\x01';
  }
  return;
}



// FUNCTION 145e76348 FUN_145e76348 body=261 status=ok
// SIG undefined FUN_145e76348(void)

void FUN_145e76348(void)

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
              0x110) < DAT_14ca56378) {
    FUN_144b3d300(&DAT_14ca56378);
    if (DAT_14ca56378 == -1) {
      FUN_145e7644e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 699;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca562f8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14305d829);
      _Init_thread_footer(&DAT_14ca56378);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e7644e FUN_145e7644e body=226 status=ok
// SIG undefined FUN_145e7644e(void)

longlong * FUN_145e7644e(longlong *param_1)

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
  pcVar13 = FUN_14630822a;
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



// FUNCTION 145e76536 FUN_145e76536 body=136 status=ok
// SIG undefined FUN_145e76536(void)

code * FUN_145e76536(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Corner";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000002be;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472f685a;
}



// FUNCTION 145e765be FUN_145e765be body=138 status=ok
// SIG undefined FUN_145e765be(void)

code * FUN_145e765be(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000002bf;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e76536;
}



// FUNCTION 145e76648 FUN_145e76648 body=292 status=ok
// SIG undefined FUN_145e76648(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e76648(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4fc98) {
    FUN_144b3d300(&DAT_14ca4fc98);
    if (DAT_14ca4fc98 == -1) {
      FUN_145e768b6();
      FUN_145e7676c();
      FUN_140db5666(&DAT_14ca4fbf0,0,&DAT_14ca4fb88,L"FScrollingShadowMaps2DPS",
                    L"/Engine/Private/CopyShadowMaps.usf",L"Scrolling2DDepthPS",3,1,FUN_1472ee0dc,
                    FUN_1472ee07c,&LAB_1472ee078,&LAB_1472ee074,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca56628);
      _DAT_14ca4fbf0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143043458);
      _Init_thread_footer(&DAT_14ca4fc98);
    }
  }
  return &DAT_14ca4fbf0;
}



// FUNCTION 145e7676c FUN_145e7676c body=205 status=ok
// SIG undefined FUN_145e7676c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e7676c(void)

{
  if ((DAT_14ca4fbef & 2) == 0) {
    DAT_14ca4fbef = DAT_14ca4fbef | 2;
    _DAT_14ca4fb90 = L"FScrollingShadowMaps2DPS";
    _DAT_14ca4fba8 = FUN_146826540;
    _DAT_14ca4fbb0 = FUN_146825d77;
    _DAT_14ca4fbb8 = FUN_146825fd6;
    _DAT_14ca4fbc0 = FUN_1407e02ea;
    _DAT_14ca4fbc8 = FUN_146826273;
    _DAT_14ca4fba0 = FUN_1472ee044;
    _DAT_14ca4fbe0 = 0xffffffff000000e0;
    _DAT_14ca4fbe8 = 8;
    DAT_14ca4fbec = 0;
    _DAT_14ca4fbd0 = &LAB_1472ee070;
    FUN_145e7683a();
    FUN_1407e00cc(&DAT_14ca4fb88);
    return;
  }
  return;
}



// FUNCTION 145e7683a FUN_145e7683a body=123 status=ok
// SIG undefined FUN_145e7683a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e7683a(void)

{
  _DAT_14ca571e8 = L"BASE";
  DAT_14ca57212 = 4;
  _DAT_14ca571f0 = FUN_140b35ae4();
  _DAT_14ca571f8 = DAT_14ca4fb98;
  _DAT_14ca57200 = &LAB_14682652b;
  DAT_14ca4fb98 = &DAT_14ca571e8;
  DAT_14ca4fbed = DAT_14ca4fbed + '\x01';
  _DAT_14ca57208 = 0x100000000;
  if (*(char *)(_DAT_14ca571f0 + 100) != '\0') {
    DAT_14ca4fbee = DAT_14ca4fbee + '\x01';
  }
  return;
}



// FUNCTION 145e768b6 FUN_145e768b6 body=261 status=ok
// SIG undefined FUN_145e768b6(void)

void FUN_145e768b6(void)

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
              0x110) < DAT_14ca566a8) {
    FUN_144b3d300(&DAT_14ca566a8);
    if (DAT_14ca566a8 == -1) {
      FUN_145e769bc(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x130;
      local_58 = 0x333;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca56628,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143060f73);
      _Init_thread_footer(&DAT_14ca566a8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e769bc FUN_145e769bc body=226 status=ok
// SIG undefined FUN_145e769bc(void)

longlong * FUN_145e769bc(longlong *param_1)

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
  pcVar13 = FUN_146308a42;
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



// FUNCTION 145e76aa4 FUN_145e76aa4 body=136 status=ok
// SIG undefined FUN_145e76aa4(void)

undefined1 * FUN_145e76aa4(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x334;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e76aa0;
}



// FUNCTION 145e76b2c FUN_145e76b2c body=138 status=ok
// SIG undefined FUN_145e76b2c(void)

code * FUN_145e76b2c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ShadowDepthTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000335;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e76aa4;
}



// FUNCTION 145e76bb6 FUN_145e76bb6 body=292 status=ok
// SIG undefined FUN_145e76bb6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e76bb6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca5d8e8) {
    FUN_144b3d300(&DAT_14ca5d8e8);
    if (DAT_14ca5d8e8 == -1) {
      FUN_145e76e24();
      FUN_145e76cda();
      FUN_140db5666(&DAT_14ca5d840,0,&DAT_14ca5d7d8,L"FVisualizeSparseVolumeTexturePS",
                    L"/Engine/Private/SparseVolumeTexture/VisualizeSparseVolumeTexture.usf",
                    L"VisualizeSparseVolumeTexturePS",3,1,FUN_147316f0e,FUN_147316eae,&LAB_147316e92
                    ,&LAB_147316e8e,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca5f160);
      _DAT_14ca5d840 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430970b9);
      _Init_thread_footer(&DAT_14ca5d8e8);
    }
  }
  return &DAT_14ca5d840;
}



// FUNCTION 145e76cda FUN_145e76cda body=205 status=ok
// SIG undefined FUN_145e76cda(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e76cda(void)

{
  if ((DAT_14ca5d83f & 2) == 0) {
    DAT_14ca5d83f = DAT_14ca5d83f | 2;
    _DAT_14ca5d7e0 = L"FVisualizeSparseVolumeTexturePS";
    _DAT_14ca5d7f8 = FUN_146826540;
    _DAT_14ca5d800 = FUN_146825d77;
    _DAT_14ca5d808 = FUN_146825fd6;
    _DAT_14ca5d810 = FUN_1407e02ea;
    _DAT_14ca5d818 = FUN_146826273;
    _DAT_14ca5d7f0 = FUN_147316e60;
    _DAT_14ca5d830 = 0xffffffff000000e0;
    _DAT_14ca5d838 = 8;
    DAT_14ca5d83c = 0;
    _DAT_14ca5d820 = &LAB_147316e8a;
    FUN_145e76da8();
    FUN_1407e00cc(&DAT_14ca5d7d8);
    return;
  }
  return;
}



// FUNCTION 145e76da8 FUN_145e76da8 body=123 status=ok
// SIG undefined FUN_145e76da8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e76da8(void)

{
  _DAT_14ca5fb58 = L"BASE";
  DAT_14ca5fb82 = 4;
  _DAT_14ca5fb60 = FUN_140b35ae4();
  _DAT_14ca5fb68 = DAT_14ca5d7e8;
  _DAT_14ca5fb70 = &LAB_14682652b;
  DAT_14ca5d7e8 = &DAT_14ca5fb58;
  DAT_14ca5d83d = DAT_14ca5d83d + '\x01';
  _DAT_14ca5fb78 = 0x100000000;
  if (*(char *)(_DAT_14ca5fb60 + 100) != '\0') {
    DAT_14ca5d83e = DAT_14ca5d83e + '\x01';
  }
  return;
}



// FUNCTION 145e76e24 FUN_145e76e24 body=261 status=ok
// SIG undefined FUN_145e76e24(void)

void FUN_145e76e24(void)

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
              0x110) < DAT_14ca5f1e0) {
    FUN_144b3d300(&DAT_14ca5f1e0);
    if (DAT_14ca5f1e0 == -1) {
      FUN_14157b8bc(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1d0;
      local_58 = 0x38;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca5f160,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14309e86f);
      _Init_thread_footer(&DAT_14ca5f1e0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e76f2e FUN_145e76f2e body=136 status=ok
// SIG undefined FUN_145e76f2e(void)

code * FUN_145e76f2e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"WorldToLocalRotation0";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x19000000046;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14731c214;
}



// FUNCTION 145e76fb6 FUN_145e76fb6 body=138 status=ok
// SIG undefined FUN_145e76fb6(void)

code * FUN_145e76fb6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MipLevel";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x15c00000042;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14731c3b2;
}



// FUNCTION 145e77040 FUN_145e77040 body=292 status=ok
// SIG undefined FUN_145e77040(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e77040(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca603b8) {
    FUN_144b3d300(&DAT_14ca603b8);
    if (DAT_14ca603b8 == -1) {
      FUN_145e772ae();
      FUN_145e77164();
      FUN_140db5666(&DAT_14ca60310,0,&DAT_14ca602a8,L"FMaterialDebugSubstrateTreePS",
                    L"/Engine/Private/Substrate/SubstrateVisualize.usf",
                    L"MaterialDebugSubstrateTreePS",3,1,FUN_1473212b6,FUN_147321256,&LAB_14630dcca,
                    &LAB_147321252,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca62878);
      _DAT_14ca60310 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430a8894);
      _Init_thread_footer(&DAT_14ca603b8);
    }
  }
  return &DAT_14ca60310;
}



// FUNCTION 145e77164 FUN_145e77164 body=205 status=ok
// SIG undefined FUN_145e77164(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e77164(void)

{
  if ((DAT_14ca6030f & 2) == 0) {
    DAT_14ca6030f = DAT_14ca6030f | 2;
    _DAT_14ca602b0 = L"FMaterialDebugSubstrateTreePS";
    _DAT_14ca602c8 = FUN_146826540;
    _DAT_14ca602d0 = FUN_146825d77;
    _DAT_14ca602d8 = FUN_146825fd6;
    _DAT_14ca602e0 = FUN_1407e02ea;
    _DAT_14ca602e8 = FUN_146826273;
    _DAT_14ca602c0 = FUN_147321224;
    _DAT_14ca60300 = 0xffffffff000000e0;
    _DAT_14ca60308 = 8;
    DAT_14ca6030c = 0;
    _DAT_14ca602f0 = &LAB_14732124e;
    FUN_145e77232();
    FUN_1407e00cc(&DAT_14ca602a8);
    return;
  }
  return;
}



// FUNCTION 145e77232 FUN_145e77232 body=123 status=ok
// SIG undefined FUN_145e77232(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e77232(void)

{
  _DAT_14ca633e8 = L"BASE";
  DAT_14ca63412 = 4;
  _DAT_14ca633f0 = FUN_140b35ae4();
  _DAT_14ca633f8 = DAT_14ca602b8;
  _DAT_14ca63400 = &LAB_14682652b;
  DAT_14ca602b8 = &DAT_14ca633e8;
  DAT_14ca6030d = DAT_14ca6030d + '\x01';
  _DAT_14ca63408 = 0x100000000;
  if (*(char *)(_DAT_14ca633f0 + 100) != '\0') {
    DAT_14ca6030e = DAT_14ca6030e + '\x01';
  }
  return;
}



// FUNCTION 145e772ae FUN_145e772ae body=261 status=ok
// SIG undefined FUN_145e772ae(void)

void FUN_145e772ae(void)

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
              0x110) < DAT_14ca628f8) {
    FUN_144b3d300(&DAT_14ca628f8);
    if (DAT_14ca628f8 == -1) {
      FUN_145e773b4(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 400;
      local_58 = 0xed;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca62878,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430bc11c);
      _Init_thread_footer(&DAT_14ca628f8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e773b4 FUN_145e773b4 body=226 status=ok
// SIG undefined FUN_145e773b4(void)

longlong * FUN_145e773b4(longlong *param_1)

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
  pcVar13 = FUN_14630e7c8;
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



// FUNCTION 145e7749c FUN_145e7749c body=132 status=ok
// SIG undefined FUN_145e7749c(void)

undefined1 * FUN_145e7749c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bOverrideCursorPosition";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xee;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e77498;
}



// FUNCTION 145e77520 FUN_145e77520 body=142 status=ok
// SIG undefined FUN_145e77520(void)

code * FUN_145e77520(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a89262();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ReflectionStruct";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FReflectionUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x30000000f1;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14630ea00;
}



// FUNCTION 145e775ae FUN_145e775ae body=292 status=ok
// SIG undefined FUN_145e775ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e775ae(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca61bd8) {
    FUN_144b3d300(&DAT_14ca61bd8);
    if (DAT_14ca61bd8 == -1) {
      FUN_145e7781c();
      FUN_145e776d2();
      FUN_140db5666(&DAT_14ca61b30,0,&DAT_14ca61ac8,L"FTranslucencyUpsampleResponsiveAAPS",
                    L"/Engine/Private/TranslucencyUpsampling.usf",L"UpsampleResponsiveAAPS",3,1,
                    FUN_147323326,FUN_1473232c6,&LAB_1473232ae,&LAB_1473232aa,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca62ed8);
      _DAT_14ca61b30 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430b1d1d);
      _Init_thread_footer(&DAT_14ca61bd8);
    }
  }
  return &DAT_14ca61b30;
}



// FUNCTION 145e776d2 FUN_145e776d2 body=205 status=ok
// SIG undefined FUN_145e776d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e776d2(void)

{
  if ((DAT_14ca61b2f & 2) == 0) {
    DAT_14ca61b2f = DAT_14ca61b2f | 2;
    _DAT_14ca61ad0 = L"FTranslucencyUpsampleResponsiveAAPS";
    _DAT_14ca61ae8 = FUN_146826540;
    _DAT_14ca61af0 = FUN_146825d77;
    _DAT_14ca61af8 = FUN_146825fd6;
    _DAT_14ca61b00 = FUN_1407e02ea;
    _DAT_14ca61b08 = FUN_146826273;
    _DAT_14ca61ae0 = FUN_14732327c;
    _DAT_14ca61b20 = 0xffffffff000000e0;
    _DAT_14ca61b28 = 8;
    DAT_14ca61b2c = 0;
    _DAT_14ca61b10 = &LAB_1473232a6;
    FUN_145e777a0();
    FUN_1407e00cc(&DAT_14ca61ac8);
    return;
  }
  return;
}



// FUNCTION 145e777a0 FUN_145e777a0 body=123 status=ok
// SIG undefined FUN_145e777a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e777a0(void)

{
  _DAT_14ca639c0 = L"BASE";
  DAT_14ca639ea = 4;
  _DAT_14ca639c8 = FUN_140b35ae4();
  _DAT_14ca639d0 = DAT_14ca61ad8;
  _DAT_14ca639d8 = &LAB_14682652b;
  DAT_14ca61ad8 = &DAT_14ca639c0;
  DAT_14ca61b2d = DAT_14ca61b2d + '\x01';
  _DAT_14ca639e0 = 0x100000000;
  if (*(char *)(_DAT_14ca639c8 + 100) != '\0') {
    DAT_14ca61b2e = DAT_14ca61b2e + '\x01';
  }
  return;
}



// FUNCTION 145e7781c FUN_145e7781c body=261 status=ok
// SIG undefined FUN_145e7781c(void)

void FUN_145e7781c(void)

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
              0x110) < DAT_14ca62f58) {
    FUN_144b3d300(&DAT_14ca62f58);
    if (DAT_14ca62f58 == -1) {
      FUN_145e77922(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x130;
      local_58 = 0x285;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca62ed8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430bde7c);
      _Init_thread_footer(&DAT_14ca62f58);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e77922 FUN_145e77922 body=226 status=ok
// SIG undefined FUN_145e77922(void)

longlong * FUN_145e77922(longlong *param_1)

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
  pcVar13 = FUN_14630f78a;
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



// FUNCTION 145e77a0a FUN_145e77a0a body=136 status=ok
// SIG undefined FUN_145e77a0a(void)

code * FUN_145e77a0a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"StencilPixelPosMax";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000287;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1473271a2;
}



// FUNCTION 145e77a92 FUN_145e77a92 body=138 status=ok
// SIG undefined FUN_145e77a92(void)

code * FUN_145e77a92(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"StencilMask";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000289;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147327118;
}



// FUNCTION 145e77b1c FUN_145e77b1c body=205 status=ok
// SIG undefined FUN_145e77b1c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e77b1c(void)

{
  if ((DAT_14ca61dff & 2) == 0) {
    DAT_14ca61dff = DAT_14ca61dff | 2;
    _DAT_14ca61da0 = L"FRescaleVariableRateShadingCS";
    _DAT_14ca61db8 = FUN_146826540;
    _DAT_14ca61dc0 = FUN_146825d77;
    _DAT_14ca61dc8 = FUN_146825fd6;
    _DAT_14ca61dd0 = FUN_1407e02ea;
    _DAT_14ca61dd8 = FUN_146826273;
    _DAT_14ca61db0 = FUN_1473235d4;
    _DAT_14ca61df0 = 0xffffffff000000e0;
    _DAT_14ca61df8 = 8;
    DAT_14ca61dfc = 0;
    _DAT_14ca61de0 = &LAB_1473235fe;
    FUN_145e77bea();
    FUN_1407e00cc(&DAT_14ca61d98);
    return;
  }
  return;
}



// FUNCTION 145e77bea FUN_145e77bea body=123 status=ok
// SIG undefined FUN_145e77bea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e77bea(void)

{
  _DAT_14ca63a20 = L"BASE";
  DAT_14ca63a4a = 4;
  _DAT_14ca63a28 = FUN_140b35ae4();
  _DAT_14ca63a30 = DAT_14ca61da8;
  _DAT_14ca63a38 = &LAB_14682652b;
  DAT_14ca61da8 = &DAT_14ca63a20;
  DAT_14ca61dfd = DAT_14ca61dfd + '\x01';
  _DAT_14ca63a40 = 0x100000000;
  if (*(char *)(_DAT_14ca63a28 + 100) != '\0') {
    DAT_14ca61dfe = DAT_14ca61dfe + '\x01';
  }
  return;
}



// FUNCTION 145e77c66 FUN_145e77c66 body=226 status=ok
// SIG undefined FUN_145e77c66(void)

longlong * FUN_145e77c66(longlong *param_1)

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
  pcVar13 = FUN_14630fbea;
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



// FUNCTION 145e77d4e FUN_145e77d4e body=136 status=ok
// SIG undefined FUN_145e77d4e(void)

code * FUN_145e77d4e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ScaledSRIDimensions";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000096;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147327792;
}



// FUNCTION 145e77dd6 FUN_145e77dd6 body=144 status=ok
// SIG undefined FUN_145e77dd6(void)

code * FUN_145e77dd6(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1000000091;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14630fc72;
}



// FUNCTION 145e77e66 FUN_145e77e66 body=292 status=ok
// SIG undefined FUN_145e77e66(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e77e66(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca65da0) {
    FUN_144b3d300(&DAT_14ca65da0);
    if (DAT_14ca65da0 == -1) {
      FUN_145e780d4();
      FUN_145e77f8a();
      FUN_140db5666(&DAT_14ca65cf8,0,&DAT_14ca65c90,L"FDebugVisualizeVirtualSmCS",
                    L"/Engine/Private/VirtualShadowMaps/VirtualShadowMapDebug.usf",
                    L"DebugVisualizeVirtualSmCS",5,1,FUN_14732c14e,FUN_14732c0ee,&LAB_14732c0b6,
                    &LAB_14732c0b2,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca67fe0);
      _DAT_14ca65cf8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430d751d);
      _Init_thread_footer(&DAT_14ca65da0);
    }
  }
  return &DAT_14ca65cf8;
}



// FUNCTION 145e77f8a FUN_145e77f8a body=205 status=ok
// SIG undefined FUN_145e77f8a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e77f8a(void)

{
  if ((DAT_14ca65cf7 & 2) == 0) {
    DAT_14ca65cf7 = DAT_14ca65cf7 | 2;
    _DAT_14ca65c98 = L"FDebugVisualizeVirtualSmCS";
    _DAT_14ca65cb0 = FUN_146826540;
    _DAT_14ca65cb8 = FUN_146825d77;
    _DAT_14ca65cc0 = FUN_146825fd6;
    _DAT_14ca65cc8 = FUN_1407e02ea;
    _DAT_14ca65cd0 = FUN_146826273;
    _DAT_14ca65ca8 = FUN_14732c084;
    _DAT_14ca65ce8 = 0xffffffff000000e0;
    _DAT_14ca65cf0 = 8;
    DAT_14ca65cf4 = 0;
    _DAT_14ca65cd8 = &LAB_14732c0ae;
    FUN_145e78058();
    FUN_1407e00cc(&DAT_14ca65c90);
    return;
  }
  return;
}



// FUNCTION 145e78058 FUN_145e78058 body=123 status=ok
// SIG undefined FUN_145e78058(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e78058(void)

{
  _DAT_14ca68e70 = L"BASE";
  DAT_14ca68e9a = 4;
  _DAT_14ca68e78 = FUN_140b35ae4();
  _DAT_14ca68e80 = DAT_14ca65ca0;
  _DAT_14ca68e88 = &LAB_14682652b;
  DAT_14ca65ca0 = &DAT_14ca68e70;
  DAT_14ca65cf5 = DAT_14ca65cf5 + '\x01';
  _DAT_14ca68e90 = 0x100000000;
  if (*(char *)(_DAT_14ca68e78 + 100) != '\0') {
    DAT_14ca65cf6 = DAT_14ca65cf6 + '\x01';
  }
  return;
}



// FUNCTION 145e780d4 FUN_145e780d4 body=261 status=ok
// SIG undefined FUN_145e780d4(void)

void FUN_145e780d4(void)

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
              0x110) < DAT_14ca68060) {
    FUN_144b3d300(&DAT_14ca68060);
    if (DAT_14ca68060 == -1) {
      FUN_145e781da(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x96e;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca67fe0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430e6489);
      _Init_thread_footer(&DAT_14ca68060);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e781da FUN_145e781da body=226 status=ok
// SIG undefined FUN_145e781da(void)

longlong * FUN_145e781da(longlong *param_1)

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
  pcVar13 = FUN_14631216a;
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



// FUNCTION 145e782c2 FUN_145e782c2 body=136 status=ok
// SIG undefined FUN_145e782c2(void)

code * FUN_145e782c2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DebugTargetHeight";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c00000972;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1473308ca;
}



// FUNCTION 145e7834a FUN_145e7834a body=138 status=ok
// SIG undefined FUN_145e7834a(void)

code * FUN_145e7834a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VisualizeModeId";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2400000974;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147330840;
}



// FUNCTION 145e783d4 FUN_145e783d4 body=292 status=ok
// SIG undefined FUN_145e783d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e783d4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa3cd0) {
    FUN_144b3d300(&DAT_14caa3cd0);
    if (DAT_14caa3cd0 == -1) {
      FUN_145e78642();
      FUN_145e784f8();
      FUN_140db5666(&DAT_14caa3c28,0,&DAT_14caa3bc0,L"FLandscapeLayersWeightmapsFinalizeWeightmapPS"
                    ,L"/Engine/Private/Landscape/LandscapeLayersWeightmapsPS.usf",
                    L"FinalizeWeightmap",3,1,FUN_14745efcc,FUN_14745ef70,&LAB_14632496c,
                    &LAB_14745ef6c,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14caa52b8);
      _DAT_14caa3c28 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14324e0e8);
      _Init_thread_footer(&DAT_14caa3cd0);
    }
  }
  return &DAT_14caa3c28;
}



// FUNCTION 145e784f8 FUN_145e784f8 body=205 status=ok
// SIG undefined FUN_145e784f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e784f8(void)

{
  if ((DAT_14caa3c27 & 2) == 0) {
    DAT_14caa3c27 = DAT_14caa3c27 | 2;
    _DAT_14caa3bc8 = L"FLandscapeLayersWeightmapsFinalizeWeightmapPS";
    _DAT_14caa3be0 = FUN_146826540;
    _DAT_14caa3be8 = FUN_146825d77;
    _DAT_14caa3bf0 = FUN_146825fd6;
    _DAT_14caa3bf8 = FUN_1407e02ea;
    _DAT_14caa3c00 = FUN_146826273;
    _DAT_14caa3bd8 = FUN_14745ef3e;
    _DAT_14caa3c18 = 0xffffffff000000e0;
    _DAT_14caa3c20 = 8;
    DAT_14caa3c24 = 0;
    _DAT_14caa3c08 = &LAB_14745ef68;
    FUN_145e785c6();
    FUN_1407e00cc(&DAT_14caa3bc0);
    return;
  }
  return;
}



// FUNCTION 145e785c6 FUN_145e785c6 body=123 status=ok
// SIG undefined FUN_145e785c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e785c6(void)

{
  _DAT_14caa5b08 = L"BASE";
  DAT_14caa5b32 = 4;
  _DAT_14caa5b10 = FUN_140b35ae4();
  _DAT_14caa5b18 = DAT_14caa3bd0;
  _DAT_14caa5b20 = &LAB_14682652b;
  DAT_14caa3bd0 = &DAT_14caa5b08;
  DAT_14caa3c25 = DAT_14caa3c25 + '\x01';
  _DAT_14caa5b28 = 0x100000000;
  if (*(char *)(_DAT_14caa5b10 + 100) != '\0') {
    DAT_14caa3c26 = DAT_14caa3c26 + '\x01';
  }
  return;
}



// FUNCTION 145e78642 FUN_145e78642 body=261 status=ok
// SIG undefined FUN_145e78642(void)

void FUN_145e78642(void)

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
              0x110) < DAT_14caa5338) {
    FUN_144b3d300(&DAT_14caa5338);
    if (DAT_14caa5338 == -1) {
      FUN_145e78748(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x170;
      local_58 = 0x631;
      local_48 = local_20;
      FUN_140b49562(&DAT_14caa52b8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14324e1b4);
      _Init_thread_footer(&DAT_14caa5338);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e78748 FUN_145e78748 body=226 status=ok
// SIG undefined FUN_145e78748(void)

longlong * FUN_145e78748(longlong *param_1)

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
  pcVar13 = FUN_146324e78;
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



// FUNCTION 145e78830 FUN_145e78830 body=136 status=ok
// SIG undefined FUN_145e78830(void)

code * FUN_145e78830(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InPerChannelNumPaintLayers";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000635;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1474601c0;
}



// FUNCTION 145e788b8 FUN_145e788b8 body=138 status=ok
// SIG undefined FUN_145e788b8(void)

code * FUN_145e788b8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InPaintLayerInfoIndices";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6000000637;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147460136;
}



// FUNCTION 145e7894e FUN_145e7894e body=370 status=ok
// SIG undefined FUN_145e7894e(void)

undefined8 * FUN_145e7894e(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_144805d84();
  *param_1 = &PTR_FUN_14a58c7f0;
  param_1[5] = &PTR_FUN_14a58cc70;
  param_1[6] = &PTR_LAB_14a58ccb0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) | 2;
  *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) | 8;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    FUN_1446ddc76(&local_28,"MediaPlayer",1);
    local_40 = 0;
    local_48 = 0;
    lVar1 = FUN_145e78b7d(param_1,local_28,0x40,0);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    param_1[0x23] = lVar1;
    FUN_140932b6e();
    *(byte *)(lVar1 + 0xdc) = *(byte *)(lVar1 + 0xdc) & 0xfd;
    plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x130) + 0x260);
    if (plVar2 != (longlong *)0x0) {
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x10))();
      (**(code **)(*plVar2 + 0x48))(plVar2,0);
    }
    *(undefined1 *)(param_1[0x23] + 0xd9) = 0;
    FUN_1446ddc76(&local_30,"MediaTexture",1);
    lVar1 = FUN_145e78ac1(param_1,local_30);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    param_1[0x22] = lVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e78ac1 FUN_145e78ac1 body=187 status=ok
// SIG undefined FUN_145e78ac1(void)

undefined8 FUN_145e78ac1(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_145869788();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 0x40;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e78b7d FUN_145e78b7d body=221 status=ok
// SIG undefined FUN_145e78b7d(void)

undefined8
FUN_145e78b7d(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  undefined8 local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_98;
  longlong *local_88;
  longlong local_78 [7];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_14117a870();
  FUN_144a5c54a(local_d8,uVar1);
  local_b8 = param_5;
  local_a8 = param_6;
  local_d0 = param_1;
  local_c8 = param_2;
  local_c0 = param_3;
  local_b0 = param_4;
  uVar1 = FUN_1402710dd(local_d8);
  if (local_98 != 0) {
    if (local_88 == (longlong *)0x0) {
      local_88 = local_78;
    }
    (**(code **)(*local_88 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e78c5c FUN_145e78c5c body=38 status=ok
// SIG undefined FUN_145e78c5c(void)

undefined8 FUN_145e78c5c(undefined8 param_1,int param_2)

{
  FUN_145e78c82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e78c82 FUN_145e78c82 body=160 status=ok
// SIG undefined FUN_145e78c82(void)

void FUN_145e78c82(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14adc21e0;
  FUN_14011fb0c(param_1 + 0x28);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  FUN_140038ae8(param_1 + 0x28);
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  FUN_1459d2d3c(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1459d2d04(param_1 + 2);
  return;
}



// FUNCTION 145e78d2e FUN_145e78d2e body=187 status=ok
// SIG undefined FUN_145e78d2e(void)

undefined8 * FUN_145e78d2e(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_140f8b11c();
  *param_1 = &PTR_FUN_14ade1b80;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  puVar2 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14adeeb90;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *(undefined4 *)((longlong)puVar2 + 0x3c) = 0x80;
  *(undefined4 *)(puVar2 + 8) = 0xffffffff;
  puVar1 = (undefined8 *)param_1[5];
  if ((puVar1 != puVar2) && (param_1[5] = puVar2, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return param_1;
}



// FUNCTION 145e78dea FUN_145e78dea body=292 status=ok
// SIG undefined FUN_145e78dea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e78dea(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb47bc8) {
    FUN_144b3d300(&DAT_14cb47bc8);
    if (DAT_14cb47bc8 == -1) {
      FUN_145e79058();
      FUN_145e78f0e();
      FUN_140db5666(&DAT_14cb47b20,0,&DAT_14cb47ab8,L"FWaterQuadTreePS",
                    L"/Plugin/Water/Private/WaterQuadTreePixelShader.usf",L"Main",3,2,FUN_1483fc80c,
                    FUN_1483fc7ac,&LAB_1483fc7a8,&LAB_1483fc7a4,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14cb48b00);
      _DAT_14cb47b20 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143b3bcc5);
      _Init_thread_footer(&DAT_14cb47bc8);
    }
  }
  return &DAT_14cb47b20;
}



// FUNCTION 145e78f0e FUN_145e78f0e body=205 status=ok
// SIG undefined FUN_145e78f0e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e78f0e(void)

{
  if ((DAT_14cb47b1f & 2) == 0) {
    DAT_14cb47b1f = DAT_14cb47b1f | 2;
    _DAT_14cb47ac0 = L"FWaterQuadTreePS";
    _DAT_14cb47ad8 = FUN_146826540;
    _DAT_14cb47ae0 = FUN_146825d77;
    _DAT_14cb47ae8 = FUN_146825fd6;
    _DAT_14cb47af0 = FUN_1407e02ea;
    _DAT_14cb47af8 = FUN_146826273;
    _DAT_14cb47ad0 = FUN_1483fc776;
    _DAT_14cb47b10 = 0xffffffff000000e0;
    _DAT_14cb47b18 = 8;
    DAT_14cb47b1c = 0;
    _DAT_14cb47b00 = &LAB_1483fc7a0;
    FUN_145e78fdc();
    FUN_1407e00cc(&DAT_14cb47ab8);
    return;
  }
  return;
}



// FUNCTION 145e78fdc FUN_145e78fdc body=123 status=ok
// SIG undefined FUN_145e78fdc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e78fdc(void)

{
  _DAT_14cb491f8 = L"BASE";
  DAT_14cb49222 = 4;
  _DAT_14cb49200 = FUN_140b35ae4();
  _DAT_14cb49208 = DAT_14cb47ac8;
  _DAT_14cb49210 = &LAB_14682652b;
  DAT_14cb47ac8 = &DAT_14cb491f8;
  DAT_14cb47b1d = DAT_14cb47b1d + '\x01';
  _DAT_14cb49218 = 0x100000000;
  if (*(char *)(_DAT_14cb49200 + 100) != '\0') {
    DAT_14cb47b1e = DAT_14cb47b1e + '\x01';
  }
  return;
}



// FUNCTION 145e79058 FUN_145e79058 body=261 status=ok
// SIG undefined FUN_145e79058(void)

void FUN_145e79058(void)

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
              0x110) < DAT_14cb48b80) {
    FUN_144b3d300(&DAT_14cb48b80);
    if (DAT_14cb48b80 == -1) {
      FUN_145e7915e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x120;
      local_58 = 0x4d;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb48b00,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143b3d1c5);
      _Init_thread_footer(&DAT_14cb48b80);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e7915e FUN_145e7915e body=226 status=ok
// SIG undefined FUN_145e7915e(void)

longlong * FUN_145e7915e(longlong *param_1)

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
  pcVar13 = FUN_1464886f0;
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



// FUNCTION 145e79246 FUN_145e79246 body=136 status=ok
// SIG undefined FUN_145e79246(void)

code * FUN_145e79246(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"WaterBodyMinZ";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000050;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1483ff888;
}



// FUNCTION 145e792ce FUN_145e792ce body=138 status=ok
// SIG undefined FUN_145e792ce(void)

code * FUN_145e792ce(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bIsRiver";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1400000053;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1483ff774;
}



// FUNCTION 145e79358 FUN_145e79358 body=292 status=ok
// SIG undefined FUN_145e79358(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e79358(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb48758) {
    FUN_144b3d300(&DAT_14cb48758);
    if (DAT_14cb48758 == -1) {
      FUN_145e795c6();
      FUN_145e7947c();
      FUN_140db5666(&DAT_14cb486b0,0,&DAT_14cb48648,L"FWaterQuadTreeGenerateInstanceDataCS",
                    L"/Plugin/Water/Private/WaterQuadTreeDraws.usf",L"MainCS",5,2,FUN_1483fcff0,
                    FUN_1483fcf90,&LAB_1483fcf8c,&LAB_1483fcf88,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14cb49050);
      _DAT_14cb486b0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143b3bd3d);
      _Init_thread_footer(&DAT_14cb48758);
    }
  }
  return &DAT_14cb486b0;
}



// FUNCTION 145e7947c FUN_145e7947c body=205 status=ok
// SIG undefined FUN_145e7947c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e7947c(void)

{
  if ((DAT_14cb486af & 2) == 0) {
    DAT_14cb486af = DAT_14cb486af | 2;
    _DAT_14cb48650 = L"FWaterQuadTreeGenerateInstanceDataCS";
    _DAT_14cb48668 = FUN_146826540;
    _DAT_14cb48670 = FUN_146825d77;
    _DAT_14cb48678 = FUN_146825fd6;
    _DAT_14cb48680 = FUN_1407e02ea;
    _DAT_14cb48688 = FUN_146826273;
    _DAT_14cb48660 = FUN_1483fcf5a;
    _DAT_14cb486a0 = 0xffffffff000000e0;
    _DAT_14cb486a8 = 8;
    DAT_14cb486ac = 0;
    _DAT_14cb48690 = &LAB_1483fcf84;
    FUN_145e7954a();
    FUN_1407e00cc(&DAT_14cb48648);
    return;
  }
  return;
}



// FUNCTION 145e7954a FUN_145e7954a body=123 status=ok
// SIG undefined FUN_145e7954a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e7954a(void)

{
  _DAT_14cb493d8 = L"BASE";
  DAT_14cb49402 = 4;
  _DAT_14cb493e0 = FUN_140b35ae4();
  _DAT_14cb493e8 = DAT_14cb48658;
  _DAT_14cb493f0 = &LAB_14682652b;
  DAT_14cb48658 = &DAT_14cb493d8;
  DAT_14cb486ad = DAT_14cb486ad + '\x01';
  _DAT_14cb493f8 = 0x100000000;
  if (*(char *)(_DAT_14cb493e0 + 100) != '\0') {
    DAT_14cb486ae = DAT_14cb486ae + '\x01';
  }
  return;
}



// FUNCTION 145e795c6 FUN_145e795c6 body=261 status=ok
// SIG undefined FUN_145e795c6(void)

void FUN_145e795c6(void)

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
              0x110) < DAT_14cb490d0) {
    FUN_144b3d300(&DAT_14cb490d0);
    if (DAT_14cb490d0 == -1) {
      FUN_14157bbc6(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xc0;
      local_58 = 0x15a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb49050,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143b3d23d);
      _Init_thread_footer(&DAT_14cb490d0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e796d0 FUN_145e796d0 body=136 status=ok
// SIG undefined FUN_145e796d0(void)

code * FUN_145e796d0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InstanceData3";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000015f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14840162e;
}



// FUNCTION 145e79758 FUN_145e79758 body=138 status=ok
// SIG undefined FUN_145e79758(void)

code * FUN_145e79758(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"QuadTreePosition";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6000000166;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1484012f2;
}



// FUNCTION 145e797e2 FUN_145e797e2 body=160 status=ok
// SIG undefined FUN_145e797e2(void)

void FUN_145e797e2(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_145e7986d;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145e7986d:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 145e79882 FUN_145e79882 body=177 status=ok
// SIG undefined FUN_145e79882(void)

void FUN_145e79882(longlong param_1)

{
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined1 local_58 [56];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_145e79934(local_58,param_1,FUN_145afc1d4);
  FUN_14126834e(&DAT_14cb10aa8,&local_60,local_58);
  FUN_1401cb1ee(local_58);
  *(undefined8 *)(param_1 + 0x38) = local_60;
  FUN_145e79934(local_58,param_1,FUN_145afc17c);
  FUN_14126834e(&DAT_14cb10ae8,&local_60,local_58);
  FUN_1401cb1ee(local_58);
  *(undefined8 *)(param_1 + 0x40) = local_60;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e79934 FUN_145e79934 body=218 status=ok
// SIG undefined FUN_145e79934(void)

LPCRITICAL_SECTION FUN_145e79934(LPCRITICAL_SECTION param_1,undefined8 param_2,undefined8 param_3)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  _LIST_ENTRY *p_Var3;
  
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != 3) {
    FUN_1446efa72(param_1 + 1,0,3,0x10);
    param_1[1].LockCount = 3;
  }
  p_Var1 = param_1[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a3cb240;
  LOCK();
  UNLOCK();
  p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 1);
  lVar2 = DAT_14c758608 + 1;
  if (p_Var3 == (_LIST_ENTRY *)0x0) {
    LOCK();
    UNLOCK();
    p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 2);
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  (p_Var1->ProcessLocksList).Flink = p_Var3;
  *(undefined ***)p_Var1 = &PTR_FUN_14b9941f0;
  (p_Var1->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  FUN_14485c47a(&(p_Var1->ProcessLocksList).Blink,param_2);
  p_Var1->EntryCount = (int)param_3;
  p_Var1->ContentionCount = (int)((ulonglong)param_3 >> 0x20);
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  return param_1;
}



// FUNCTION 145e79a0e FUN_145e79a0e body=40 status=ok
// SIG undefined FUN_145e79a0e(void)

undefined8 FUN_145e79a0e(undefined8 param_1,int param_2)

{
  FUN_145e79a36();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e79a36 FUN_145e79a36 body=158 status=ok
// SIG undefined FUN_145e79a36(void)

void FUN_145e79a36(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba23a20;
  param_1[5] = &PTR_FUN_14ba23dd0;
  param_1[0x13] = &PTR_FUN_14ba23df0;
  param_1[0x16] = &PTR_FUN_14ba23e20;
  plVar3 = (longlong *)param_1[0x22];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = (longlong *)param_1[0x20];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  thunk_FUN_1411412f4(param_1);
  return;
}



// FUNCTION 145e79ad4 FUN_145e79ad4 body=292 status=ok
// SIG undefined FUN_145e79ad4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e79ad4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf87d0) {
    FUN_144b3d300(&DAT_14cbf87d0);
    if (DAT_14cbf87d0 == -1) {
      FUN_145e79d42();
      FUN_145e79bf8();
      FUN_140db5666(&DAT_14cbf8728,0,&DAT_14cbf86c0,L"FDrawDebugCardAtlasCS",
                    L"/Engine/Private/HairStrands/HairStrandsDebug.usf",L"MainCS",5,1,FUN_149083aae,
                    FUN_149083a4e,FUN_14667aba4,&LAB_149083a4a,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14cbf8e28);
      _DAT_14cbf8728 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_144421c5e);
      _Init_thread_footer(&DAT_14cbf87d0);
    }
  }
  return &DAT_14cbf8728;
}



// FUNCTION 145e79bf8 FUN_145e79bf8 body=205 status=ok
// SIG undefined FUN_145e79bf8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e79bf8(void)

{
  if ((DAT_14cbf8727 & 2) == 0) {
    DAT_14cbf8727 = DAT_14cbf8727 | 2;
    _DAT_14cbf86c8 = L"FDrawDebugCardAtlasCS";
    _DAT_14cbf86e0 = FUN_146826540;
    _DAT_14cbf86e8 = FUN_146825d77;
    _DAT_14cbf86f0 = FUN_146825fd6;
    _DAT_14cbf86f8 = FUN_1407e02ea;
    _DAT_14cbf8700 = FUN_146826273;
    _DAT_14cbf86d8 = FUN_149083a1c;
    _DAT_14cbf8718 = 0xffffffff000000e0;
    _DAT_14cbf8720 = 8;
    DAT_14cbf8724 = 0;
    _DAT_14cbf8708 = &LAB_149083a46;
    FUN_145e79cc6();
    FUN_1407e00cc(&DAT_14cbf86c0);
    return;
  }
  return;
}



// FUNCTION 145e79cc6 FUN_145e79cc6 body=123 status=ok
// SIG undefined FUN_145e79cc6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e79cc6(void)

{
  _DAT_14cbf9178 = L"BASE";
  DAT_14cbf91a2 = 4;
  _DAT_14cbf9180 = FUN_140b35ae4();
  _DAT_14cbf9188 = DAT_14cbf86d0;
  _DAT_14cbf9190 = &LAB_14682652b;
  DAT_14cbf86d0 = &DAT_14cbf9178;
  DAT_14cbf8725 = DAT_14cbf8725 + '\x01';
  _DAT_14cbf9198 = 0x100000000;
  if (*(char *)(_DAT_14cbf9180 + 100) != '\0') {
    DAT_14cbf8726 = DAT_14cbf8726 + '\x01';
  }
  return;
}



// FUNCTION 145e79d42 FUN_145e79d42 body=261 status=ok
// SIG undefined FUN_145e79d42(void)

void FUN_145e79d42(void)

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
              0x110) < DAT_14cbf8ea8) {
    FUN_144b3d300(&DAT_14cbf8ea8);
    if (DAT_14cbf8ea8 == -1) {
      FUN_145e79e48(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x60;
      local_58 = 0x16f;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cbf8e28,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1444275b2);
      _Init_thread_footer(&DAT_14cbf8ea8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e79e48 FUN_145e79e48 body=226 status=ok
// SIG undefined FUN_145e79e48(void)

longlong * FUN_145e79e48(longlong *param_1)

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
  pcVar13 = FUN_14667b1d2;
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



// FUNCTION 145e79f30 FUN_145e79f30 body=136 status=ok
// SIG undefined FUN_145e79f30(void)

code * FUN_145e79f30(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000173;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149086878;
}



// FUNCTION 145e79fb8 FUN_145e79fb8 body=138 status=ok
// SIG undefined FUN_145e79fb8(void)

code * FUN_145e79fb8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LinearSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3800000176;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149086764;
}



// FUNCTION 145e7a042 FUN_145e7a042 body=292 status=ok
// SIG undefined FUN_145e7a042(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e7a042(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf9c28) {
    FUN_144b3d300(&DAT_14cbf9c28);
    if (DAT_14cbf9c28 == -1) {
      FUN_145e7a2b0();
      FUN_145e7a166();
      FUN_140db5666(&DAT_14cbf9b80,0,&DAT_14cbf9b18,L"FHairStrandsTextureVS",
                    L"/Engine/Private/HairStrands/HairStrandsTexturesGeneration.usf",L"MainVS",0,1,
                    FUN_1490927a0,FUN_149092740,&LAB_14667bd0e,&LAB_14909273c,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cbfa238);
      _DAT_14cbf9b80 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_144436b94);
      _Init_thread_footer(&DAT_14cbf9c28);
    }
  }
  return &DAT_14cbf9b80;
}



// FUNCTION 145e7a166 FUN_145e7a166 body=205 status=ok
// SIG undefined FUN_145e7a166(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e7a166(void)

{
  if ((DAT_14cbf9b7f & 2) == 0) {
    DAT_14cbf9b7f = DAT_14cbf9b7f | 2;
    _DAT_14cbf9b20 = L"FHairStrandsTextureVS";
    _DAT_14cbf9b38 = FUN_146826540;
    _DAT_14cbf9b40 = FUN_146825d77;
    _DAT_14cbf9b48 = FUN_146825fd6;
    _DAT_14cbf9b50 = FUN_1407e02ea;
    _DAT_14cbf9b58 = FUN_146826273;
    _DAT_14cbf9b30 = FUN_14909270e;
    _DAT_14cbf9b70 = 0xffffffff000000e0;
    _DAT_14cbf9b78 = 8;
    DAT_14cbf9b7c = 0;
    _DAT_14cbf9b60 = &LAB_149092738;
    FUN_145e7a234();
    FUN_1407e00cc(&DAT_14cbf9b18);
    return;
  }
  return;
}



// FUNCTION 145e7a234 FUN_145e7a234 body=123 status=ok
// SIG undefined FUN_145e7a234(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e7a234(void)

{
  _DAT_14cbfa548 = L"BASE";
  DAT_14cbfa572 = 4;
  _DAT_14cbfa550 = FUN_140b35ae4();
  _DAT_14cbfa558 = DAT_14cbf9b28;
  _DAT_14cbfa560 = &LAB_14682652b;
  DAT_14cbf9b28 = &DAT_14cbfa548;
  DAT_14cbf9b7d = DAT_14cbf9b7d + '\x01';
  _DAT_14cbfa568 = 0x100000000;
  if (*(char *)(_DAT_14cbfa550 + 100) != '\0') {
    DAT_14cbf9b7e = DAT_14cbf9b7e + '\x01';
  }
  return;
}



// FUNCTION 145e7a2b0 FUN_145e7a2b0 body=261 status=ok
// SIG undefined FUN_145e7a2b0(void)

void FUN_145e7a2b0(void)

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
              0x110) < DAT_14cbfa2b8) {
    FUN_144b3d300(&DAT_14cbfa2b8);
    if (DAT_14cbfa2b8 == -1) {
      FUN_145e7a3b6(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x2b0;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cbfa238,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1444396d1);
      _Init_thread_footer(&DAT_14cbfa2b8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e7a3b6 FUN_145e7a3b6 body=226 status=ok
// SIG undefined FUN_145e7a3b6(void)

longlong * FUN_145e7a3b6(longlong *param_1)

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
  pcVar13 = FUN_14667c2da;
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



// FUNCTION 145e7a49e FUN_145e7a49e body=136 status=ok
// SIG undefined FUN_145e7a49e(void)

code * FUN_145e7a49e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"UVsChannelIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc000002b3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149095b68;
}



// FUNCTION 145e7a526 FUN_145e7a526 body=138 status=ok
// SIG undefined FUN_145e7a526(void)

code * FUN_145e7a526(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VertexBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000002b5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149095ade;
}



// FUNCTION 145e7a5b0 FUN_145e7a5b0 body=292 status=ok
// SIG undefined FUN_145e7a5b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e7a5b0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbfb510) {
    FUN_144b3d300(&DAT_14cbfb510);
    if (DAT_14cbfb510 == -1) {
      FUN_145e7a81e();
      FUN_145e7a6d4();
      FUN_140db5666(&DAT_14cbfb468,0,&DAT_14cbfb400,L"FHairTangentCS",
                    L"/Engine/Private/HairStrands/HairStrandsTangent.usf",L"MainCS",5,2,
                    FUN_14909a8d6,FUN_14909a876,&LAB_14667c8ce,&LAB_14909a872,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cbfcd20);
      _DAT_14cbfb468 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1444410df);
      _Init_thread_footer(&DAT_14cbfb510);
    }
  }
  return &DAT_14cbfb468;
}



// FUNCTION 145e7a6d4 FUN_145e7a6d4 body=205 status=ok
// SIG undefined FUN_145e7a6d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e7a6d4(void)

{
  if ((DAT_14cbfb467 & 2) == 0) {
    DAT_14cbfb467 = DAT_14cbfb467 | 2;
    _DAT_14cbfb408 = L"FHairTangentCS";
    _DAT_14cbfb420 = FUN_146826540;
    _DAT_14cbfb428 = FUN_146825d77;
    _DAT_14cbfb430 = FUN_146825fd6;
    _DAT_14cbfb438 = FUN_1407e02ea;
    _DAT_14cbfb440 = FUN_146826273;
    _DAT_14cbfb418 = FUN_14909a844;
    _DAT_14cbfb458 = 0xffffffff000000e0;
    _DAT_14cbfb460 = 8;
    DAT_14cbfb464 = 0;
    _DAT_14cbfb448 = &LAB_14909a86e;
    FUN_145e7a7a2();
    FUN_1407e00cc(&DAT_14cbfb400);
    return;
  }
  return;
}



// FUNCTION 145e7a7a2 FUN_145e7a7a2 body=123 status=ok
// SIG undefined FUN_145e7a7a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e7a7a2(void)

{
  _DAT_14cbfd708 = L"BASE";
  DAT_14cbfd732 = 4;
  _DAT_14cbfd710 = FUN_140b35ae4();
  _DAT_14cbfd718 = DAT_14cbfb410;
  _DAT_14cbfd720 = &LAB_14682652b;
  DAT_14cbfb410 = &DAT_14cbfd708;
  DAT_14cbfb465 = DAT_14cbfb465 + '\x01';
  _DAT_14cbfd728 = 0x100000000;
  if (*(char *)(_DAT_14cbfd710 + 100) != '\0') {
    DAT_14cbfb466 = DAT_14cbfb466 + '\x01';
  }
  return;
}



// FUNCTION 145e7a81e FUN_145e7a81e body=261 status=ok
// SIG undefined FUN_145e7a81e(void)

void FUN_145e7a81e(void)

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
              0x110) < DAT_14cbfcda0) {
    FUN_144b3d300(&DAT_14cbfcda0);
    if (DAT_14cbfcda0 == -1) {
      FUN_145e7a924(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x45c;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cbfcd20,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_144449472);
      _Init_thread_footer(&DAT_14cbfcda0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e7a924 FUN_145e7a924 body=226 status=ok
// SIG undefined FUN_145e7a924(void)

longlong * FUN_145e7a924(longlong *param_1)

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
  pcVar13 = FUN_14667d9d0;
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



// FUNCTION 145e7aa0c FUN_145e7aa0c body=136 status=ok
// SIG undefined FUN_145e7aa0c(void)

code * FUN_145e7aa0c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PositionBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000045f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490aa42a;
}



// FUNCTION 145e7aa94 FUN_145e7aa94 body=138 status=ok
// SIG undefined FUN_145e7aa94(void)

code * FUN_145e7aa94(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HairStrandsVF_CullingIndirectBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000460;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e7aa0c;
}



// FUNCTION 145e7ab1e FUN_145e7ab1e body=292 status=ok
// SIG undefined FUN_145e7ab1e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e7ab1e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc275a0) {
    FUN_144b3d300(&DAT_14cc275a0);
    if (DAT_14cc275a0 == -1) {
      FUN_145e7ad8c();
      FUN_145e7ac42();
      FUN_140db5666(&DAT_14cc274f8,0,&DAT_14cc27490,L"FChromaticAberrationPS",
                    L"/Plugin/FSR/Private/PostProcessChromaticAberration.usf",L"MainPS",3,0x10,
                    FUN_149804b90,FUN_149804b30,&LAB_149804b18,&LAB_149804b14,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cc27d90);
      _DAT_14cc274f8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14463bc3f);
      _Init_thread_footer(&DAT_14cc275a0);
    }
  }
  return &DAT_14cc274f8;
}



// FUNCTION 145e7ac42 FUN_145e7ac42 body=205 status=ok
// SIG undefined FUN_145e7ac42(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e7ac42(void)

{
  if ((DAT_14cc274f7 & 2) == 0) {
    DAT_14cc274f7 = DAT_14cc274f7 | 2;
    _DAT_14cc27498 = L"FChromaticAberrationPS";
    _DAT_14cc274b0 = FUN_146826540;
    _DAT_14cc274b8 = FUN_146825d77;
    _DAT_14cc274c0 = FUN_146825fd6;
    _DAT_14cc274c8 = FUN_1407e02ea;
    _DAT_14cc274d0 = FUN_146826273;
    _DAT_14cc274a8 = FUN_149804ae6;
    _DAT_14cc274e8 = 0xffffffff000000e0;
    _DAT_14cc274f0 = 8;
    DAT_14cc274f4 = 0;
    _DAT_14cc274d8 = &LAB_149804b10;
    FUN_145e7ad10();
    FUN_1407e00cc(&DAT_14cc27490);
    return;
  }
  return;
}



// FUNCTION 145e7ad10 FUN_145e7ad10 body=123 status=ok
// SIG undefined FUN_145e7ad10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e7ad10(void)

{
  _DAT_14cc282e0 = L"BASE";
  DAT_14cc2830a = 4;
  _DAT_14cc282e8 = FUN_140b35ae4();
  _DAT_14cc282f0 = DAT_14cc274a0;
  _DAT_14cc282f8 = &LAB_14682652b;
  DAT_14cc274a0 = &DAT_14cc282e0;
  DAT_14cc274f5 = DAT_14cc274f5 + '\x01';
  _DAT_14cc28300 = 0x100000000;
  if (*(char *)(_DAT_14cc282e8 + 100) != '\0') {
    DAT_14cc274f6 = DAT_14cc274f6 + '\x01';
  }
  return;
}



// FUNCTION 145e7ad8c FUN_145e7ad8c body=261 status=ok
// SIG undefined FUN_145e7ad8c(void)

void FUN_145e7ad8c(void)

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
              0x110) < DAT_14cc27e10) {
    FUN_144b3d300(&DAT_14cc27e10);
    if (DAT_14cc27e10 == -1) {
      FUN_145e7ae92(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1d0;
      local_58 = 0x66;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cc27d90,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14463e502);
      _Init_thread_footer(&DAT_14cc27e10);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e7ae92 FUN_145e7ae92 body=226 status=ok
// SIG undefined FUN_145e7ae92(void)

longlong * FUN_145e7ae92(longlong *param_1)

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
  pcVar13 = FUN_14675ec2a;
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



// FUNCTION 145e7af7a FUN_145e7af7a body=136 status=ok
// SIG undefined FUN_145e7af7a(void)

code * FUN_145e7af7a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LensPrincipalPointOffsetScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000006a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e7b002;
}



// FUNCTION 145e7b002 FUN_145e7b002 body=138 status=ok
// SIG undefined FUN_145e7b002(void)

code * FUN_145e7b002(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ChromaticAberrationParams";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000069;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149806288;
}



// FUNCTION 145e7b08c FUN_145e7b08c body=40 status=ok
// SIG undefined FUN_145e7b08c(void)

undefined8 FUN_145e7b08c(undefined8 param_1,int param_2)

{
  FUN_145e7b0b4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e7b0b4 FUN_145e7b0b4 body=158 status=ok
// SIG undefined FUN_145e7b0b4(void)

void FUN_145e7b0b4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bf05300;
  param_1[5] = &PTR_FUN_14bf055a0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0xb];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_140af926c(param_1 + 5);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145e7b152 FUN_145e7b152 body=276 status=ok
// SIG undefined FUN_145e7b152(void)

void FUN_145e7b152(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  
  plVar3 = *(longlong **)(param_2 + 0x60);
  if (plVar3 == (longlong *)0x0) {
    lVar7 = *(longlong *)(param_2 + 0x58);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    lVar7 = *(longlong *)(param_2 + 0x58);
    plVar8 = *(longlong **)(param_2 + 0x60);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      bVar5 = false;
      goto LAB_145e7b185;
    }
  }
  bVar5 = true;
  plVar8 = (longlong *)0x0;
LAB_145e7b185:
  if (lVar7 == 0) {
    uVar6 = 0;
  }
  else {
    lVar7 = *(longlong *)(param_2 + 0x58);
    plVar4 = *(longlong **)(param_2 + 0x60);
    if (plVar4 == (longlong *)0x0) {
      uVar6 = FUN_14479d2ce(lVar7 + 0x30);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      uVar6 = FUN_14479d2ce(lVar7 + 0x30);
      LOCK();
      plVar1 = plVar4 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  if (!bVar5) {
    LOCK();
    plVar4 = plVar8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  lVar7 = FUN_145e7b266(uVar6);
  if (lVar7 != 0) {
    FUN_14157bcaa(lVar7,param_1 + 8);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar3 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145e7b262. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145e7b266 FUN_145e7b266 body=63 status=ok
// SIG undefined FUN_145e7b266(void)

longlong FUN_145e7b266(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1405835d4();
  if (lVar1 != 0) {
    lVar2 = FUN_140583450();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 145e7b2a6 FUN_145e7b2a6 body=40 status=ok
// SIG undefined FUN_145e7b2a6(void)

undefined8 FUN_145e7b2a6(undefined8 param_1,int param_2)

{
  FUN_145e7b2ce();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e7b2ce FUN_145e7b2ce body=168 status=ok
// SIG undefined FUN_145e7b2ce(void)

void FUN_145e7b2ce(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bca3f50;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  FUN_145e7b3ac(param_1 + 0x31);
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  FUN_145e7b3e4(param_1 + 0x27);
  FUN_145e7b41c(param_1 + 0x13);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_145e7b376(param_1 + 7);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145e7b376 FUN_145e7b376 body=53 status=ok
// SIG undefined FUN_145e7b376(void)

void FUN_145e7b376(longlong *param_1)

{
  FUN_145e7b4aa();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e7b3ac FUN_145e7b3ac body=55 status=ok
// SIG undefined FUN_145e7b3ac(void)

void FUN_145e7b3ac(longlong *param_1)

{
  FUN_145e7b8f0(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e7b3e4 FUN_145e7b3e4 body=55 status=ok
// SIG undefined FUN_145e7b3e4(void)

void FUN_145e7b3e4(longlong *param_1)

{
  FUN_145e7b778(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e7b41c FUN_145e7b41c body=87 status=ok
// SIG undefined FUN_145e7b41c(void)

void FUN_145e7b41c(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_145e7b474(param_1);
  return;
}



// FUNCTION 145e7b474 FUN_145e7b474 body=53 status=ok
// SIG undefined FUN_145e7b474(void)

void FUN_145e7b474(longlong *param_1)

{
  FUN_145e7b606();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e7b4aa FUN_145e7b4aa body=346 status=ok
// SIG undefined FUN_145e7b4aa(void)

void FUN_145e7b4aa(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      FUN_1493bcc12(*local_68 + (longlong)iStack_4c * 0xa8 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14099029e(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e7b606 FUN_145e7b606 body=368 status=ok
// SIG undefined FUN_145e7b606(void)

void FUN_145e7b606(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      plVar2 = (longlong *)(*local_70 + (longlong)iStack_54 * 0xb0);
      FUN_1493bcc12(plVar2 + 2);
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1467f17ac(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e7b778 FUN_145e7b778 body=375 status=ok
// SIG undefined FUN_145e7b778(void)

void FUN_145e7b778(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      FUN_1493c123e((longlong)iStack_54 * 0x80 + *local_70);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_14095c99c(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e7b8f0 FUN_145e7b8f0 body=377 status=ok
// SIG undefined FUN_145e7b8f0(void)

void FUN_145e7b8f0(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      FUN_1493c1206((longlong)iStack_54 * 200 + *local_70);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_146efedec(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e7ba6a FUN_145e7ba6a body=5061 status=ok
// SIG undefined FUN_145e7ba6a(void)

void FUN_145e7ba6a(longlong param_1)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined1 local_60;
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)(param_1 + 0x248) == '\0') {
    local_50 = L"Overview";
    local_48 = 8;
    FUN_1446e940c(local_54,&local_50);
    local_50 = L"FNaniteVisualizationData";
    local_48 = 0x18;
    FUN_1446e940c(local_58,&local_50);
    FUN_140208bae(&local_50,local_58,local_54,L"Overview");
    local_60 = 1;
    local_68 = 0;
    FUN_14157bf68(param_1,L"Overview",&local_50,0);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
    local_50 = L"Mask";
    local_48 = 4;
    FUN_1446e940c(local_54,&local_50);
    local_50 = L"FNaniteVisualizationData";
    local_48 = 0x18;
    FUN_1446e940c(local_58,&local_50);
    FUN_140208bae(&local_50,local_58,local_54,L"Mask");
    local_60 = 1;
    local_68 = 0x14;
    FUN_14157bf68(param_1,L"Mask",&local_50,1);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
    local_50 = L"Triangles";
    local_48 = 9;
    FUN_1446e940c(local_54,&local_50);
    local_50 = L"FNaniteVisualizationData";
    local_48 = 0x18;
    FUN_1446e940c(local_58,&local_50);
    FUN_140208bae(&local_50,local_58,local_54,L"Triangles");
    local_60 = 1;
    local_68 = 1;
    FUN_14157bf68(param_1,L"Triangles",&local_50,1);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
    local_50 = L"Patches";
    local_48 = 7;
    FUN_1446e940c(local_54,&local_50);
    local_50 = L"FNaniteVisualizationData";
    local_48 = 0x18;
    FUN_1446e940c(local_58,&local_50);
    FUN_140208bae(&local_50,local_58,local_54,L"Patches");
    local_60 = 1;
    local_68 = 2;
    FUN_14157bf68(param_1,L"Patches",&local_50,1);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
    local_50 = L"Clusters";
    local_48 = 8;
    FUN_1446e940c(local_54,&local_50);
    local_50 = L"FNaniteVisualizationData";
    local_48 = 0x18;
    FUN_1446e940c(local_58,&local_50);
    FUN_140208bae(&local_50,local_58,local_54,L"Clusters");
    local_60 = 1;
    local_68 = 3;
    FUN_14157bf68(param_1,L"Clusters",&local_50,1);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
    local_50 = L"Primitives";
    local_48 = 10;
    FUN_1446e940c(local_54,&local_50);
    local_50 = L"FNaniteVisualizationData";
    local_48 = 0x18;
    FUN_1446e940c(local_58,&local_50);
    FUN_140208bae(&local_50,local_58,local_54,L"Primitives");
    local_60 = 1;
    local_68 = 4;
    FUN_14157bf68(param_1,L"Primitives",&local_50,1);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
    local_50 = L"Instances";
    local_48 = 9;
    FUN_1446e940c(local_54,&local_50);
    local_50 = L"FNaniteVisualizationData";
    local_48 = 0x18;
    FUN_1446e940c(local_58,&local_50);
    FUN_140208bae(&local_50,local_58,local_54,L"Instances");
    local_60 = 1;
    local_68 = 5;
    FUN_14157bf68(param_1,L"Instances",&local_50,1);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
    local_50 = L"Overdraw";
    local_48 = 8;
    FUN_1446e940c(local_54,&local_50);
    local_50 = L"FNaniteVisualizationData";
    local_48 = 0x18;
    FUN_1446e940c(local_58,&local_50);
    FUN_140208bae(&local_50,local_58,local_54,L"Overdraw");
    local_68 = 8;
    local_60 = 0;
    FUN_14157bf68(param_1,L"Overdraw",&local_50,1);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
    local_50 = L"LightmapUV";
    local_48 = 10;
    FUN_1446e940c(local_54,&local_50);
    local_50 = L"FNaniteVisualizationData";
    local_48 = 0x18;
    FUN_1446e940c(local_58,&local_50);
    FUN_140208bae(&local_50,local_58,local_54,L"Lightmap UV");
    local_60 = 1;
    local_68 = 0x15;
    FUN_14157bf68(param_1,L"LightmapUV",&local_50,1);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
    local_50 = L"EvaluateWPO";
    local_48 = 0xb;
    FUN_1446e940c(local_54,&local_50);
    local_50 = L"FNaniteVisualizationData";
    local_48 = 0x18;
    FUN_1446e940c(local_58,&local_50);
    FUN_140208bae(&local_50,local_58,local_54,L"Evaluate WPO");
    local_60 = 1;
    local_68 = 0x1b;
    FUN_14157bf68(param_1,L"EvaluateWPO",&local_50,1);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
    local_50 = L"PixelProgrammable";
    local_48 = 0x11;
    FUN_1446e940c(local_54,&local_50);
    local_50 = L"FNaniteVisualizationData";
    local_48 = 0x18;
    FUN_1446e940c(local_58,&local_50);
    FUN_140208bae(&local_50,local_58,local_54,L"Pixel Programmable");
    local_60 = 1;
    local_68 = 0x1c;
    FUN_14157bf68(param_1,L"PixelProgrammable",&local_50,1);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
    local_50 = L"Tessellation";
    local_48 = 0xc;
    FUN_1446e940c(local_54,&local_50);
    local_50 = L"FNaniteVisualizationData";
    local_48 = 0x18;
    FUN_1446e940c(local_58,&local_50);
    FUN_140208bae(&local_50,local_58,local_54,L"Tessellation");
    local_60 = 1;
    local_68 = 0x21;
    FUN_14157bf68(param_1,L"Tessellation",&local_50,1);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
    local_50 = L"RasterBins";
    local_48 = 10;
    FUN_1446e940c(local_54,&local_50);
    local_50 = L"FNaniteVisualizationData";
    local_48 = 0x18;
    FUN_1446e940c(local_58,&local_50);
    FUN_140208bae(&local_50,local_58,local_54,L"Raster Bins");
    local_68 = 10;
    local_60 = 1;
    FUN_14157bf68(param_1,L"RasterBins",&local_50,1);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
    local_50 = L"ShadingBins";
    local_48 = 0xb;
    FUN_1446e940c(local_54,&local_50);
    local_50 = L"FNaniteVisualizationData";
    local_48 = 0x18;
    FUN_1446e940c(local_58,&local_50);
    FUN_140208bae(&local_50,local_58,local_54,L"Shading Bins");
    local_68 = 0xb;
    local_60 = 1;
    FUN_14157bf68(param_1,L"ShadingBins",&local_50,1);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
    local_50 = L"Picking";
    local_48 = 7;
    FUN_1446e940c(local_54,&local_50);
    local_50 = L"FNaniteVisualizationData";
    local_48 = 0x18;
    FUN_1446e940c(local_58,&local_50);
    FUN_140208bae(&local_50,local_58,local_54,L"Picking");
    local_60 = 1;
    local_68 = 0x1d;
    FUN_14157bf68(param_1,L"Picking",&local_50,2);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
    local_50 = L"Groups";
    local_48 = 6;
    FUN_1446e940c(local_54,&local_50);
    local_50 = L"FNaniteVisualizationData";
    local_48 = 0x18;
    FUN_1446e940c(local_58,&local_50);
    FUN_140208bae(&local_50,local_58,local_54,L"Groups");
    local_68 = 6;
    local_60 = 1;
    FUN_14157bf68(param_1,L"Groups",&local_50,2);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
    local_50 = L"Pages";
    local_48 = 5;
    FUN_1446e940c(local_54,&local_50);
    local_50 = L"FNaniteVisualizationData";
    local_48 = 0x18;
    FUN_1446e940c(local_58,&local_50);
    FUN_140208bae(&local_50,local_58,local_54,L"Pages");
    local_60 = 1;
    local_68 = 7;
    FUN_14157bf68(param_1,L"Pages",&local_50,2);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
    local_50 = L"Hierarchy";
    local_48 = 9;
    FUN_1446e940c(local_54,&local_50);
    local_50 = L"FNaniteVisualizationData";
    local_48 = 0x18;
    FUN_1446e940c(local_58,&local_50);
    FUN_140208bae(&local_50,local_58,local_54,L"Hierarchy");
    local_68 = 0x18;
    local_60 = 1;
    FUN_14157bf68(param_1,L"Hierarchy",&local_50,2);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
    local_50 = L"RasterMode";
    local_48 = 10;
    FUN_1446e940c(local_54,&local_50);
    local_50 = L"FNaniteVisualizationData";
    local_48 = 0x18;
    FUN_1446e940c(local_58,&local_50);
    FUN_140208bae(&local_50,local_58,local_54,L"Raster Mode");
    local_60 = 1;
    local_68 = 9;
    FUN_14157bf68(param_1,L"RasterMode",&local_50,2);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
    local_50 = L"SceneZMin";
    local_48 = 9;
    FUN_1446e940c(local_54,&local_50);
    local_50 = L"FNaniteVisualizationData";
    local_48 = 0x18;
    FUN_1446e940c(local_58,&local_50);
    FUN_140208bae(&local_50,local_58,local_54,L"Scene Z Min");
    local_60 = 1;
    local_68 = 0xc;
    FUN_14157bf68(param_1,L"SceneZMin",&local_50,2);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
    local_50 = L"SceneZMax";
    local_48 = 9;
    FUN_1446e940c(local_54,&local_50);
    local_50 = L"FNaniteVisualizationData";
    local_48 = 0x18;
    FUN_1446e940c(local_58,&local_50);
    FUN_140208bae(&local_50,local_58,local_54,L"Scene Z Max");
    local_60 = 1;
    local_68 = 0xd;
    FUN_14157bf68(param_1,L"SceneZMax",&local_50,2);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
    local_50 = L"SceneZDelta";
    local_48 = 0xb;
    FUN_1446e940c(local_54,&local_50);
    local_50 = L"FNaniteVisualizationData";
    local_48 = 0x18;
    FUN_1446e940c(local_58,&local_50);
    FUN_140208bae(&local_50,local_58,local_54,L"Scene Z Delta");
    local_60 = 1;
    local_68 = 0xe;
    FUN_14157bf68(param_1,L"SceneZDelta",&local_50,2);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
    local_50 = L"SceneZDecoded";
    local_48 = 0xd;
    FUN_1446e940c(local_54,&local_50);
    local_50 = L"FNaniteVisualizationData";
    local_48 = 0x18;
    FUN_1446e940c(local_58,&local_50);
    FUN_140208bae(&local_50,local_58,local_54,L"Scene Z Decoded");
    local_60 = 1;
    local_68 = 0xf;
    FUN_14157bf68(param_1,L"SceneZDecoded",&local_50,2);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
    local_50 = L"MaterialCount";
    local_48 = 0xd;
    FUN_1446e940c(local_54,&local_50);
    local_50 = L"FNaniteVisualizationData";
    local_48 = 0x18;
    FUN_1446e940c(local_58,&local_50);
    FUN_140208bae(&local_50,local_58,local_54,L"Material Count");
    local_60 = 1;
    local_68 = 0x10;
    FUN_14157bf68(param_1,L"MaterialCount",&local_50,2);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
    local_50 = L"MaterialMode";
    local_48 = 0xc;
    FUN_1446e940c(local_54,&local_50);
    local_50 = L"FNaniteVisualizationData";
    local_48 = 0x18;
    FUN_1446e940c(local_58,&local_50);
    FUN_140208bae(&local_50,local_58,local_54,L"Material Mode");
    local_60 = 1;
    local_68 = 0x11;
    FUN_14157bf68(param_1,L"MaterialMode",&local_50,2);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
    local_50 = L"MaterialIndex";
    local_48 = 0xd;
    FUN_1446e940c(local_54,&local_50);
    local_50 = L"FNaniteVisualizationData";
    local_48 = 0x18;
    FUN_1446e940c(local_58,&local_50);
    FUN_140208bae(&local_50,local_58,local_54,L"Material Index");
    local_60 = 1;
    local_68 = 0x12;
    FUN_14157bf68(param_1,L"MaterialIndex",&local_50,2);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
    local_50 = L"HitProxyID";
    local_48 = 10;
    FUN_1446e940c(local_54,&local_50);
    local_50 = L"FNaniteVisualizationData";
    local_48 = 0x18;
    FUN_1446e940c(local_58,&local_50);
    FUN_140208bae(&local_50,local_58,local_54,L"Hit Proxy ID");
    local_60 = 1;
    local_68 = 0x13;
    FUN_14157bf68(param_1,L"HitProxyID",&local_50,2);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
    local_50 = L"LightmapUVIndex";
    local_48 = 0xf;
    FUN_1446e940c(local_54,&local_50);
    local_50 = L"FNaniteVisualizationData";
    local_48 = 0x18;
    FUN_1446e940c(local_58,&local_50);
    FUN_140208bae(&local_50,local_58,local_54,L"Lightmap UV Index");
    local_60 = 1;
    local_68 = 0x16;
    FUN_14157bf68(param_1,L"LightmapUVIndex",&local_50,2);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
    local_50 = L"LightmapDataIndex";
    local_48 = 0x11;
    FUN_1446e940c(local_54,&local_50);
    local_50 = L"FNaniteVisualizationData";
    local_48 = 0x18;
    FUN_1446e940c(local_58,&local_50);
    FUN_140208bae(&local_50,local_58,local_54,L"Lightmap Data Index");
    local_60 = 1;
    local_68 = 0x17;
    FUN_14157bf68(param_1,L"LightmapDataIndex",&local_50,2);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
    local_50 = L"PositionBits";
    local_48 = 0xc;
    FUN_1446e940c(local_54,&local_50);
    local_50 = L"FNaniteVisualizationData";
    local_48 = 0x18;
    FUN_1446e940c(local_58,&local_50);
    FUN_140208bae(&local_50,local_58,local_54,L"Position Bits");
    local_60 = 1;
    local_68 = 0x19;
    FUN_14157bf68(param_1,L"PositionBits",&local_50,2);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
    local_50 = L"VSMStatic";
    local_48 = 9;
    FUN_1446e940c(local_54,&local_50);
    local_50 = L"FNaniteVisualizationData";
    local_48 = 0x18;
    FUN_1446e940c(local_58,&local_50);
    FUN_140208bae(&local_50,local_58,local_54,L"Virtual Shadow Map Static");
    local_60 = 1;
    local_68 = 0x1a;
    FUN_14157bf68(param_1,L"VSMStatic",&local_50,2);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
    local_50 = L"ShadingWriteMask";
    local_48 = 0x10;
    FUN_1446e940c(local_54,&local_50);
    local_50 = L"FNaniteVisualizationData";
    local_48 = 0x18;
    FUN_1446e940c(local_58,&local_50);
    FUN_140208bae(&local_50,local_58,local_54,L"Shading Write Mask");
    local_60 = 1;
    local_68 = 0x1e;
    FUN_14157bf68(param_1,L"ShadingWriteMask",&local_50,2);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
    local_50 = L"NoDerivativeOps";
    local_48 = 0xf;
    FUN_1446e940c(local_54,&local_50);
    local_50 = L"FNaniteVisualizationData";
    local_48 = 0x18;
    FUN_1446e940c(local_58,&local_50);
    FUN_140208bae(&local_50,local_58,local_54,L"No Derivative Ops");
    local_60 = 1;
    local_68 = 0x1f;
    FUN_14157bf68(param_1,L"NoDerivativeOps",&local_50,2);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
    local_50 = L"FastClearTiles";
    local_48 = 0xe;
    FUN_1446e940c(local_54,&local_50);
    local_50 = L"FNaniteVisualizationData";
    local_48 = 0x18;
    FUN_1446e940c(local_58,&local_50);
    FUN_140208bae(&local_50,local_58,local_54,L"Fast Clear Tiles");
    local_60 = 1;
    local_68 = 0x20;
    FUN_14157bf68(param_1,L"FastClearTiles",&local_50,2);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
    local_50 = L"DisplacementScale";
    local_48 = 0x11;
    FUN_1446e940c(local_54,&local_50);
    local_50 = L"FNaniteVisualizationData";
    local_48 = 0x18;
    FUN_1446e940c(local_58,&local_50);
    FUN_140208bae(&local_50,local_58,local_54,L"DisplacementScale");
    local_60 = 1;
    local_68 = 0x22;
    FUN_14157bf68(param_1,L"DisplacementScale",&local_50,2);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
    local_50 = L"VertexColor";
    local_48 = 0xb;
    FUN_1446e940c(local_54,&local_50);
    local_50 = L"FNaniteVisualizationData";
    local_48 = 0x18;
    FUN_1446e940c(local_58,&local_50);
    FUN_140208bae(&local_50,local_58,local_54,L"VertexColor");
    local_60 = 1;
    local_68 = 0x23;
    FUN_14157bf68(param_1,L"VertexColor",&local_50,2);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
    local_50 = L"MeshPaintTexture";
    local_48 = 0x10;
    FUN_1446e940c(local_54,&local_50);
    local_50 = L"FNaniteVisualizationData";
    local_48 = 0x18;
    FUN_1446e940c(local_58,&local_50);
    FUN_140208bae(&local_50,local_58,local_54,L"Mesh Paint Texture");
    local_60 = 1;
    local_68 = 0x24;
    FUN_14157bf68(param_1,L"MeshPaintTexture",&local_50,2);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
    FUN_14157c908(param_1);
    *(undefined1 *)(param_1 + 0x248) = 1;
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e7ce30 FUN_145e7ce30 body=285 status=ok
// SIG undefined FUN_145e7ce30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e7ce30(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca03d00) {
    FUN_144b3d300(&DAT_14ca03d00);
    if (DAT_14ca03d00 == -1) {
      FUN_145e7d098();
      FUN_145e7cf4e();
      FUN_140db5666(&DAT_14ca03c58,0,&DAT_14ca03bf0,L"FLumenVisualizeCreateRaysCS",
                    L"/Engine/Private/Lumen/LumenVisualizeHardwareRayTracing.usf",
                    L"FLumenVisualizeCreateRaysCS",5,1,FUN_147226012,FUN_147225fb2,&LAB_1462e744c,
                    &LAB_147225fae,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca06bc0);
      _DAT_14ca03c58 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142dc8da8);
      _Init_thread_footer(&DAT_14ca03d00);
    }
  }
  return &DAT_14ca03c58;
}



// FUNCTION 145e7cf4e FUN_145e7cf4e body=205 status=ok
// SIG undefined FUN_145e7cf4e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e7cf4e(void)

{
  if ((DAT_14ca03c57 & 2) == 0) {
    DAT_14ca03c57 = DAT_14ca03c57 | 2;
    _DAT_14ca03bf8 = L"FLumenVisualizeCreateRaysCS";
    _DAT_14ca03c10 = FUN_146826540;
    _DAT_14ca03c18 = FUN_146825d77;
    _DAT_14ca03c20 = FUN_146825fd6;
    _DAT_14ca03c28 = FUN_1407e02ea;
    _DAT_14ca03c30 = FUN_146826273;
    _DAT_14ca03c08 = FUN_147225f80;
    _DAT_14ca03c48 = 0xffffffff000000e0;
    _DAT_14ca03c50 = 8;
    DAT_14ca03c54 = 0;
    _DAT_14ca03c38 = &LAB_147225faa;
    FUN_145e7d01c();
    FUN_1407e00cc(&DAT_14ca03bf0);
    return;
  }
  return;
}



// FUNCTION 145e7d01c FUN_145e7d01c body=123 status=ok
// SIG undefined FUN_145e7d01c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e7d01c(void)

{
  _DAT_14ca07f98 = L"BASE";
  DAT_14ca07fc2 = 4;
  _DAT_14ca07fa0 = FUN_140b35ae4();
  _DAT_14ca07fa8 = DAT_14ca03c00;
  _DAT_14ca07fb0 = &LAB_14682652b;
  DAT_14ca03c00 = &DAT_14ca07f98;
  DAT_14ca03c55 = DAT_14ca03c55 + '\x01';
  _DAT_14ca07fb8 = 0x100000000;
  if (*(char *)(_DAT_14ca07fa0 + 100) != '\0') {
    DAT_14ca03c56 = DAT_14ca03c56 + '\x01';
  }
  return;
}



// FUNCTION 145e7d098 FUN_145e7d098 body=261 status=ok
// SIG undefined FUN_145e7d098(void)

void FUN_145e7d098(void)

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
              0x110) < DAT_14ca06c40) {
    FUN_144b3d300(&DAT_14ca06c40);
    if (DAT_14ca06c40 == -1) {
      FUN_145e7d19e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x120;
      local_58 = 0xcb;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca06bc0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142dd3ac7);
      _Init_thread_footer(&DAT_14ca06c40);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e7d19e FUN_145e7d19e body=226 status=ok
// SIG undefined FUN_145e7d19e(void)

longlong * FUN_145e7d19e(longlong *param_1)

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
  pcVar13 = FUN_1462ea6e4;
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



// FUNCTION 145e7d286 FUN_145e7d286 body=138 status=ok
// SIG undefined FUN_145e7d286(void)

code * FUN_145e7d286(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWRayAllocator";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x108000000d5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14722cd80;
}



// FUNCTION 145e7d310 FUN_145e7d310 body=144 status=ok
// SIG undefined FUN_145e7d310(void)

code * FUN_145e7d310(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14127a7f2();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"SceneTextures";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSceneTextureParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x10000000ce;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462ea886;
}



// FUNCTION 145e7d3a0 FUN_145e7d3a0 body=290 status=ok
// SIG undefined FUN_145e7d3a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e7d3a0(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb2c318) {
    FUN_144b3d300(&DAT_14cb2c318);
    if (DAT_14cb2c318 == -1) {
      uVar1 = FUN_145e7d60c();
      FUN_145e7d4c2();
      FUN_140db5666(&DAT_14cb2c270,0,&DAT_14cb2c208,L"FNiagaraInstanceCountsInitCS",
                    L"/Plugin/FX/Niagara/Private/NiagaraDrawIndirectArgsGen.usf",
                    L"InitInstanceCountsCS",5,1,FUN_148042d24,FUN_148042cca,&LAB_148042cc6,
                    &LAB_148042cc2,&LAB_14712ac0c,&LAB_14712ac08,0xe0,uVar1);
      _DAT_14cb2c270 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1438f5cf5);
      _Init_thread_footer(&DAT_14cb2c318);
    }
  }
  return &DAT_14cb2c270;
}



// FUNCTION 145e7d4c2 FUN_145e7d4c2 body=205 status=ok
// SIG undefined FUN_145e7d4c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e7d4c2(void)

{
  if ((DAT_14cb2c26f & 2) == 0) {
    DAT_14cb2c26f = DAT_14cb2c26f | 2;
    _DAT_14cb2c210 = L"FNiagaraInstanceCountsInitCS";
    _DAT_14cb2c228 = FUN_146826540;
    _DAT_14cb2c230 = FUN_146825d77;
    _DAT_14cb2c238 = FUN_146825fd6;
    _DAT_14cb2c240 = FUN_1407e02ea;
    _DAT_14cb2c248 = FUN_146826273;
    _DAT_14cb2c220 = FUN_148042c94;
    _DAT_14cb2c260 = 0xffffffff000000e0;
    _DAT_14cb2c268 = 8;
    DAT_14cb2c26c = 0;
    _DAT_14cb2c250 = &LAB_148042cbe;
    FUN_145e7d590();
    FUN_1407e00cc(&DAT_14cb2c208);
    return;
  }
  return;
}



// FUNCTION 145e7d590 FUN_145e7d590 body=123 status=ok
// SIG undefined FUN_145e7d590(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e7d590(void)

{
  _DAT_14cb2d2c0 = L"BASE";
  DAT_14cb2d2ea = 4;
  _DAT_14cb2d2c8 = FUN_140b35ae4();
  _DAT_14cb2d2d0 = DAT_14cb2c218;
  _DAT_14cb2d2d8 = &LAB_14682652b;
  DAT_14cb2c218 = &DAT_14cb2d2c0;
  DAT_14cb2c26d = DAT_14cb2c26d + '\x01';
  _DAT_14cb2d2e0 = 0x100000000;
  if (*(char *)(_DAT_14cb2d2c8 + 100) != '\0') {
    DAT_14cb2c26e = DAT_14cb2c26e + '\x01';
  }
  return;
}



// FUNCTION 145e7d60c FUN_145e7d60c body=268 status=ok
// SIG undefined FUN_145e7d60c(void)

undefined * FUN_145e7d60c(void)

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
              0x110) < DAT_14cb2cf70) {
    FUN_144b3d300(&DAT_14cb2cf70);
    if (DAT_14cb2cf70 == -1) {
      FUN_145e7d71a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x78;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb2cef0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1438f6d3b);
      _Init_thread_footer(&DAT_14cb2cf70);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cb2cef0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e7d71a FUN_145e7d71a body=226 status=ok
// SIG undefined FUN_145e7d71a(void)

longlong * FUN_145e7d71a(longlong *param_1)

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
  pcVar13 = FUN_14645f914;
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



// FUNCTION 145e7d802 FUN_145e7d802 body=132 status=ok
// SIG undefined FUN_145e7d802(void)

undefined1 * FUN_145e7d802(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TaskInfos";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x79;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e7d7fe;
}



// FUNCTION 145e7d886 FUN_145e7d886 body=138 status=ok
// SIG undefined FUN_145e7d886(void)

code * FUN_145e7d886(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWInstanceCounts";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000007a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 7;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e7d802;
}



// FUNCTION 145e7d910 FUN_145e7d910 body=292 status=ok
// SIG undefined FUN_145e7d910(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e7d910(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b65b8) {
    FUN_144b3d300(&DAT_14c9b65b8);
    if (DAT_14c9b65b8 == -1) {
      FUN_145e7db7e();
      FUN_145e7da34();
      FUN_140db5666(&DAT_14c9b6510,0,&DAT_14c9b64a8,
                    L"FComputeLightDirectionFromVolumetricLightmapCS",
                    L"/Engine/Private/CapsuleShadowShaders.usf",
                    L"ComputeLightDirectionFromVolumetricLightmapCS",5,1,FUN_1471342fa,FUN_14713429a
                    ,&LAB_147134282,&LAB_14713427e,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9b8038
                   );
      _DAT_14c9b6510 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142b80e15);
      _Init_thread_footer(&DAT_14c9b65b8);
    }
  }
  return &DAT_14c9b6510;
}



// FUNCTION 145e7da34 FUN_145e7da34 body=205 status=ok
// SIG undefined FUN_145e7da34(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e7da34(void)

{
  if ((DAT_14c9b650f & 2) == 0) {
    DAT_14c9b650f = DAT_14c9b650f | 2;
    _DAT_14c9b64b0 = L"FComputeLightDirectionFromVolumetricLightmapCS";
    _DAT_14c9b64c8 = FUN_146826540;
    _DAT_14c9b64d0 = FUN_146825d77;
    _DAT_14c9b64d8 = FUN_146825fd6;
    _DAT_14c9b64e0 = FUN_1407e02ea;
    _DAT_14c9b64e8 = FUN_146826273;
    _DAT_14c9b64c0 = FUN_147134250;
    _DAT_14c9b6500 = 0xffffffff000000e0;
    _DAT_14c9b6508 = 8;
    DAT_14c9b650c = 0;
    _DAT_14c9b64f0 = &LAB_14713427a;
    FUN_145e7db02();
    FUN_1407e00cc(&DAT_14c9b64a8);
    return;
  }
  return;
}



// FUNCTION 145e7db02 FUN_145e7db02 body=123 status=ok
// SIG undefined FUN_145e7db02(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e7db02(void)

{
  _DAT_14c9bfeb0 = L"BASE";
  DAT_14c9bfeda = 4;
  _DAT_14c9bfeb8 = FUN_140b35ae4();
  _DAT_14c9bfec0 = DAT_14c9b64b8;
  _DAT_14c9bfec8 = &LAB_14682652b;
  DAT_14c9b64b8 = &DAT_14c9bfeb0;
  DAT_14c9b650d = DAT_14c9b650d + '\x01';
  _DAT_14c9bfed0 = 0x100000000;
  if (*(char *)(_DAT_14c9bfeb8 + 100) != '\0') {
    DAT_14c9b650e = DAT_14c9b650e + '\x01';
  }
  return;
}



// FUNCTION 145e7db7e FUN_145e7db7e body=261 status=ok
// SIG undefined FUN_145e7db7e(void)

void FUN_145e7db7e(void)

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
              0x110) < DAT_14c9b80b8) {
    FUN_144b3d300(&DAT_14c9b80b8);
    if (DAT_14c9b80b8 == -1) {
      FUN_145e7dc84(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x7b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9b8038,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142b8f692);
      _Init_thread_footer(&DAT_14c9b80b8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e7dc84 FUN_145e7dc84 body=226 status=ok
// SIG undefined FUN_145e7dc84(void)

longlong * FUN_145e7dc84(longlong *param_1)

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
  pcVar13 = FUN_1462b77f0;
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



// FUNCTION 145e7dd6c FUN_145e7dd6c body=138 status=ok
// SIG undefined FUN_145e7dd6c(void)

code * FUN_145e7dd6c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CapsuleMinSkyAngle";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000081;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14713854c;
}



// FUNCTION 145e7ddf6 FUN_145e7ddf6 body=138 status=ok
// SIG undefined FUN_145e7ddf6(void)

undefined1 * FUN_145e7ddf6(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x7c;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e7dd68;
}



// FUNCTION 145e7de80 FUN_145e7de80 body=292 status=ok
// SIG undefined FUN_145e7de80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e7de80(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b6808) {
    FUN_144b3d300(&DAT_14c9b6808);
    if (DAT_14c9b6808 == -1) {
      FUN_145e7e0ee();
      FUN_145e7dfa4();
      FUN_140db5666(&DAT_14c9b6760,0,&DAT_14c9b66f8,L"FCapsuleShadowingUpsampleVS",
                    L"/Engine/Private/CapsuleShadowShaders.usf",L"CapsuleShadowingUpsampleVS",0,1,
                    FUN_147134486,FUN_147134426,&LAB_147134422,&LAB_14713441e,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9b8148);
      _DAT_14c9b6760 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142b80e35);
      _Init_thread_footer(&DAT_14c9b6808);
    }
  }
  return &DAT_14c9b6760;
}



// FUNCTION 145e7dfa4 FUN_145e7dfa4 body=205 status=ok
// SIG undefined FUN_145e7dfa4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e7dfa4(void)

{
  if ((DAT_14c9b675f & 2) == 0) {
    DAT_14c9b675f = DAT_14c9b675f | 2;
    _DAT_14c9b6700 = L"FCapsuleShadowingUpsampleVS";
    _DAT_14c9b6718 = FUN_146826540;
    _DAT_14c9b6720 = FUN_146825d77;
    _DAT_14c9b6728 = FUN_146825fd6;
    _DAT_14c9b6730 = FUN_1407e02ea;
    _DAT_14c9b6738 = FUN_146826273;
    _DAT_14c9b6710 = FUN_1471343f0;
    _DAT_14c9b6750 = 0xffffffff000000e0;
    _DAT_14c9b6758 = 8;
    DAT_14c9b675c = 0;
    _DAT_14c9b6740 = &LAB_14713441a;
    FUN_145e7e072();
    FUN_1407e00cc(&DAT_14c9b66f8);
    return;
  }
  return;
}



// FUNCTION 145e7e072 FUN_145e7e072 body=123 status=ok
// SIG undefined FUN_145e7e072(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e7e072(void)

{
  _DAT_14c9bff10 = L"BASE";
  DAT_14c9bff3a = 4;
  _DAT_14c9bff18 = FUN_140b35ae4();
  _DAT_14c9bff20 = DAT_14c9b6708;
  _DAT_14c9bff28 = &LAB_14682652b;
  DAT_14c9b6708 = &DAT_14c9bff10;
  DAT_14c9b675d = DAT_14c9b675d + '\x01';
  _DAT_14c9bff30 = 0x100000000;
  if (*(char *)(_DAT_14c9bff18 + 100) != '\0') {
    DAT_14c9b675e = DAT_14c9b675e + '\x01';
  }
  return;
}



// FUNCTION 145e7e0ee FUN_145e7e0ee body=261 status=ok
// SIG undefined FUN_145e7e0ee(void)

void FUN_145e7e0ee(void)

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
              0x110) < DAT_14c9b81c8) {
    FUN_144b3d300(&DAT_14c9b81c8);
    if (DAT_14c9b81c8 == -1) {
      FUN_145e7e1f4(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0x12a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9b8148,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142b8f6ce);
      _Init_thread_footer(&DAT_14c9b81c8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e7e1f4 FUN_145e7e1f4 body=226 status=ok
// SIG undefined FUN_145e7e1f4(void)

longlong * FUN_145e7e1f4(longlong *param_1)

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
  pcVar13 = FUN_1462b7f86;
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



// FUNCTION 145e7e2dc FUN_145e7e2dc body=138 status=ok
// SIG undefined FUN_145e7e2dc(void)

code * FUN_145e7e2dc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TileSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000012e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e7e366;
}



// FUNCTION 145e7e366 FUN_145e7e366 body=138 status=ok
// SIG undefined FUN_145e7e366(void)

code * FUN_145e7e366(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TileDimensions";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000012d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462b800e;
}



// FUNCTION 145e7e3f0 FUN_145e7e3f0 body=292 status=ok
// SIG undefined FUN_145e7e3f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e7e3f0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c19d0) {
    FUN_144b3d300(&DAT_14c9c19d0);
    if (DAT_14c9c19d0 == -1) {
      FUN_145e7e65e();
      FUN_145e7e514();
      FUN_140db5666(&DAT_14c9c1928,0,&DAT_14c9c18c0,
                    L"FPostProcessEdgeDetection2ApplyTargetChangesCS",
                    L"/Engine/Private/PostProcessEdgeDetection2ApplyTargetChanges.usf",
                    L"ApplyTargetChangesCS",5,8,FUN_147144bd0,FUN_147144b70,&LAB_142ba34b4,
                    &LAB_147144b6c,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9c38a8);
      _DAT_14c9c1928 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142ba34cb);
      _Init_thread_footer(&DAT_14c9c19d0);
    }
  }
  return &DAT_14c9c1928;
}



// FUNCTION 145e7e514 FUN_145e7e514 body=205 status=ok
// SIG undefined FUN_145e7e514(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e7e514(void)

{
  if ((DAT_14c9c1927 & 2) == 0) {
    DAT_14c9c1927 = DAT_14c9c1927 | 2;
    _DAT_14c9c18c8 = L"FPostProcessEdgeDetection2ApplyTargetChangesCS";
    _DAT_14c9c18e0 = FUN_146826540;
    _DAT_14c9c18e8 = FUN_146825d77;
    _DAT_14c9c18f0 = FUN_146825fd6;
    _DAT_14c9c18f8 = FUN_1407e02ea;
    _DAT_14c9c1900 = FUN_146826273;
    _DAT_14c9c18d8 = FUN_147144b3e;
    _DAT_14c9c1918 = 0xffffffff000000e0;
    _DAT_14c9c1920 = 8;
    DAT_14c9c1924 = 0;
    _DAT_14c9c1908 = &LAB_147144b68;
    FUN_145e7e5e2();
    FUN_1407e00cc(&DAT_14c9c18c0);
    return;
  }
  return;
}



// FUNCTION 145e7e5e2 FUN_145e7e5e2 body=123 status=ok
// SIG undefined FUN_145e7e5e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e7e5e2(void)

{
  _DAT_14c9c4158 = L"BASE";
  DAT_14c9c4182 = 4;
  _DAT_14c9c4160 = FUN_140b35ae4();
  _DAT_14c9c4168 = DAT_14c9c18d0;
  _DAT_14c9c4170 = &LAB_14682652b;
  DAT_14c9c18d0 = &DAT_14c9c4158;
  DAT_14c9c1925 = DAT_14c9c1925 + '\x01';
  _DAT_14c9c4178 = 0x100000000;
  if (*(char *)(_DAT_14c9c4160 + 100) != '\0') {
    DAT_14c9c1926 = DAT_14c9c1926 + '\x01';
  }
  return;
}



// FUNCTION 145e7e65e FUN_145e7e65e body=261 status=ok
// SIG undefined FUN_145e7e65e(void)

void FUN_145e7e65e(void)

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
              0x110) < DAT_14c9c3928) {
    FUN_144b3d300(&DAT_14c9c3928);
    if (DAT_14c9c3928 == -1) {
      FUN_145e7e764(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FEdgeDetection2ApplyTargetChangesParametersCS";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0x121;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c38a8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142bc0a58);
      _Init_thread_footer(&DAT_14c9c3928);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


