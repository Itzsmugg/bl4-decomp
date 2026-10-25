// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145e5a412 FUN_145e5a412 body=132 status=ok
// SIG undefined FUN_145e5a412(void)

undefined1 * FUN_145e5a412(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SubsurfaceInput0_Texture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x195;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e5a40e;
}



// FUNCTION 145e5a496 FUN_145e5a496 body=138 status=ok
// SIG undefined FUN_145e5a496(void)

code * FUN_145e5a496(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SubsurfaceSampler0";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000196;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e5a412;
}



// FUNCTION 145e5a520 FUN_145e5a520 body=205 status=ok
// SIG undefined FUN_145e5a520(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e5a520(void)

{
  if ((DAT_14ca2fe5f & 2) == 0) {
    DAT_14ca2fe5f = DAT_14ca2fe5f | 2;
    _DAT_14ca2fe00 = L"FSubsurfaceBuildIndirectDispatchArgsCS";
    _DAT_14ca2fe18 = FUN_146826540;
    _DAT_14ca2fe20 = FUN_146825d77;
    _DAT_14ca2fe28 = FUN_146825fd6;
    _DAT_14ca2fe30 = FUN_1407e02ea;
    _DAT_14ca2fe38 = FUN_146826273;
    _DAT_14ca2fe10 = FUN_147299884;
    _DAT_14ca2fe50 = 0xffffffff000000e0;
    _DAT_14ca2fe58 = 8;
    DAT_14ca2fe5c = 0;
    _DAT_14ca2fe40 = &LAB_1472998b0;
    FUN_145e5a5ee();
    FUN_1407e00cc(&DAT_14ca2fdf8);
    return;
  }
  return;
}



// FUNCTION 145e5a5ee FUN_145e5a5ee body=123 status=ok
// SIG undefined FUN_145e5a5ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e5a5ee(void)

{
  _DAT_14ca34c20 = L"BASE";
  DAT_14ca34c4a = 4;
  _DAT_14ca34c28 = FUN_140b35ae4();
  _DAT_14ca34c30 = DAT_14ca2fe08;
  _DAT_14ca34c38 = &LAB_14682652b;
  DAT_14ca2fe08 = &DAT_14ca34c20;
  DAT_14ca2fe5d = DAT_14ca2fe5d + '\x01';
  _DAT_14ca34c40 = 0x100000000;
  if (*(char *)(_DAT_14ca34c28 + 100) != '\0') {
    DAT_14ca2fe5e = DAT_14ca2fe5e + '\x01';
  }
  return;
}



// FUNCTION 145e5a66a FUN_145e5a66a body=226 status=ok
// SIG undefined FUN_145e5a66a(void)

longlong * FUN_145e5a66a(longlong *param_1)

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
  pcVar13 = FUN_1462fdfb2;
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



// FUNCTION 145e5a752 FUN_145e5a752 body=138 status=ok
// SIG undefined FUN_145e5a752(void)

code * FUN_145e5a752(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWIndirectDrawArgsBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000001fb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e5a7dc;
}



// FUNCTION 145e5a7dc FUN_145e5a7dc body=138 status=ok
// SIG undefined FUN_145e5a7dc(void)

code * FUN_145e5a7dc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWIndirectDispatchArgsBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000001fa;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e0bd42;
}



// FUNCTION 145e5a866 FUN_145e5a866 body=292 status=ok
// SIG undefined FUN_145e5a866(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e5a866(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca307d8) {
    FUN_144b3d300(&DAT_14ca307d8);
    if (DAT_14ca307d8 == -1) {
      FUN_145e5aad4();
      FUN_145e5a98a();
      FUN_140db5666(&DAT_14ca30730,0,&DAT_14ca306c8,L"FFilmGrainReduceCS",
                    L"/Engine/Private/PostProcessing/FilmGrainReduce.usf",L"MainCS",5,1,
                    FUN_14729a27c,FUN_14729a21c,&LAB_14729a204,&LAB_14729a200,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca33ef8);
      _DAT_14ca30730 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f0be29);
      _Init_thread_footer(&DAT_14ca307d8);
    }
  }
  return &DAT_14ca30730;
}



// FUNCTION 145e5a98a FUN_145e5a98a body=205 status=ok
// SIG undefined FUN_145e5a98a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e5a98a(void)

{
  if ((DAT_14ca3072f & 2) == 0) {
    DAT_14ca3072f = DAT_14ca3072f | 2;
    _DAT_14ca306d0 = L"FFilmGrainReduceCS";
    _DAT_14ca306e8 = FUN_146826540;
    _DAT_14ca306f0 = FUN_146825d77;
    _DAT_14ca306f8 = FUN_146825fd6;
    _DAT_14ca30700 = FUN_1407e02ea;
    _DAT_14ca30708 = FUN_146826273;
    _DAT_14ca306e0 = FUN_14729a1d0;
    _DAT_14ca30720 = 0xffffffff000000e0;
    _DAT_14ca30728 = 8;
    DAT_14ca3072c = 0;
    _DAT_14ca30710 = &LAB_14729a1fc;
    FUN_145e5aa58();
    FUN_1407e00cc(&DAT_14ca306c8);
    return;
  }
  return;
}



// FUNCTION 145e5aa58 FUN_145e5aa58 body=123 status=ok
// SIG undefined FUN_145e5aa58(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e5aa58(void)

{
  _DAT_14ca34d70 = L"BASE";
  DAT_14ca34d9a = 4;
  _DAT_14ca34d78 = FUN_140b35ae4();
  _DAT_14ca34d80 = DAT_14ca306d8;
  _DAT_14ca34d88 = &LAB_14682652b;
  DAT_14ca306d8 = &DAT_14ca34d70;
  DAT_14ca3072d = DAT_14ca3072d + '\x01';
  _DAT_14ca34d90 = 0x100000000;
  if (*(char *)(_DAT_14ca34d78 + 100) != '\0') {
    DAT_14ca3072e = DAT_14ca3072e + '\x01';
  }
  return;
}



// FUNCTION 145e5aad4 FUN_145e5aad4 body=261 status=ok
// SIG undefined FUN_145e5aad4(void)

void FUN_145e5aad4(void)

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
              0x110) < DAT_14ca33f78) {
    FUN_144b3d300(&DAT_14ca33f78);
    if (DAT_14ca33f78 == -1) {
      FUN_145e5abda(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x15e;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca33ef8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f14105);
      _Init_thread_footer(&DAT_14ca33f78);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e5abda FUN_145e5abda body=226 status=ok
// SIG undefined FUN_145e5abda(void)

longlong * FUN_145e5abda(longlong *param_1)

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
  pcVar13 = FUN_1462fec64;
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



// FUNCTION 145e5acc2 FUN_145e5acc2 body=132 status=ok
// SIG undefined FUN_145e5acc2(void)

undefined1 * FUN_145e5acc2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FilmGrainTextureSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x15f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e5acbe;
}



// FUNCTION 145e5ad46 FUN_145e5ad46 body=138 status=ok
// SIG undefined FUN_145e5ad46(void)

code * FUN_145e5ad46(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FilmGrainTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000160;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e5acc2;
}



// FUNCTION 145e5add0 FUN_145e5add0 body=292 status=ok
// SIG undefined FUN_145e5add0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e5add0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca30900) {
    FUN_144b3d300(&DAT_14ca30900);
    if (DAT_14ca30900 == -1) {
      FUN_145e5b03e();
      FUN_145e5aef4();
      FUN_140db5666(&DAT_14ca30858,0,&DAT_14ca307f0,L"FFilmGrainPackConstantsCS",
                    L"/Engine/Private/PostProcessing/FilmGrainPackConstants.usf",L"MainCS",5,1,
                    FUN_14729a3b2,FUN_14729a352,&LAB_14729a33a,&LAB_14729a336,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca33f80);
      _DAT_14ca30858 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f0be35);
      _Init_thread_footer(&DAT_14ca30900);
    }
  }
  return &DAT_14ca30858;
}



// FUNCTION 145e5aef4 FUN_145e5aef4 body=205 status=ok
// SIG undefined FUN_145e5aef4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e5aef4(void)

{
  if ((DAT_14ca30857 & 2) == 0) {
    DAT_14ca30857 = DAT_14ca30857 | 2;
    _DAT_14ca307f8 = L"FFilmGrainPackConstantsCS";
    _DAT_14ca30810 = FUN_146826540;
    _DAT_14ca30818 = FUN_146825d77;
    _DAT_14ca30820 = FUN_146825fd6;
    _DAT_14ca30828 = FUN_1407e02ea;
    _DAT_14ca30830 = FUN_146826273;
    _DAT_14ca30808 = FUN_14729a306;
    _DAT_14ca30848 = 0xffffffff000000e0;
    _DAT_14ca30850 = 8;
    DAT_14ca30854 = 0;
    _DAT_14ca30838 = &LAB_14729a332;
    FUN_145e5afc2();
    FUN_1407e00cc(&DAT_14ca307f0);
    return;
  }
  return;
}



// FUNCTION 145e5afc2 FUN_145e5afc2 body=123 status=ok
// SIG undefined FUN_145e5afc2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e5afc2(void)

{
  _DAT_14ca34da0 = L"BASE";
  DAT_14ca34dca = 4;
  _DAT_14ca34da8 = FUN_140b35ae4();
  _DAT_14ca34db0 = DAT_14ca30800;
  _DAT_14ca34db8 = &LAB_14682652b;
  DAT_14ca30800 = &DAT_14ca34da0;
  DAT_14ca30855 = DAT_14ca30855 + '\x01';
  _DAT_14ca34dc0 = 0x100000000;
  if (*(char *)(_DAT_14ca34da8 + 100) != '\0') {
    DAT_14ca30856 = DAT_14ca30856 + '\x01';
  }
  return;
}



// FUNCTION 145e5b03e FUN_145e5b03e body=261 status=ok
// SIG undefined FUN_145e5b03e(void)

void FUN_145e5b03e(void)

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
              0x110) < DAT_14ca34000) {
    FUN_144b3d300(&DAT_14ca34000);
    if (DAT_14ca34000 == -1) {
      FUN_145e5b144(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x170;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca33f80,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f14111);
      _Init_thread_footer(&DAT_14ca34000);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e5b144 FUN_145e5b144 body=226 status=ok
// SIG undefined FUN_145e5b144(void)

longlong * FUN_145e5b144(longlong *param_1)

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
  pcVar13 = FUN_1462fecec;
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



// FUNCTION 145e5b22c FUN_145e5b22c body=132 status=ok
// SIG undefined FUN_145e5b22c(void)

undefined1 * FUN_145e5b22c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OriginalFilmGrainTextureSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x171;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e5b228;
}



// FUNCTION 145e5b2b0 FUN_145e5b2b0 body=138 status=ok
// SIG undefined FUN_145e5b2b0(void)

code * FUN_145e5b2b0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ReducedFilmGrainTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000172;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e5b22c;
}



// FUNCTION 145e5b33a FUN_145e5b33a body=292 status=ok
// SIG undefined FUN_145e5b33a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e5b33a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca38c60) {
    FUN_144b3d300(&DAT_14ca38c60);
    if (DAT_14ca38c60 == -1) {
      FUN_145e5b5a8();
      FUN_145e5b45e();
      FUN_140db5666(&DAT_14ca38bb8,0,&DAT_14ca38b50,L"FBasicOcclusionMainRGS",
                    L"/Engine/Private/RayTracing/RayTracingBuiltInShaders.usf",L"OcclusionMainRGS",6
                    ,1,FUN_1472b1920,FUN_1472b18dc,&LAB_146300d9c,&LAB_1472b18d8,&LAB_1472b18d2,
                    &LAB_14712ac08,0xe0,&DAT_14ca3e7d0);
      _DAT_14ca38bb8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f6576e);
      _Init_thread_footer(&DAT_14ca38c60);
    }
  }
  return &DAT_14ca38bb8;
}



// FUNCTION 145e5b45e FUN_145e5b45e body=205 status=ok
// SIG undefined FUN_145e5b45e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e5b45e(void)

{
  if ((DAT_14ca38bb7 & 2) == 0) {
    DAT_14ca38bb7 = DAT_14ca38bb7 | 2;
    _DAT_14ca38b58 = L"FBasicOcclusionMainRGS";
    _DAT_14ca38b70 = FUN_146826540;
    _DAT_14ca38b78 = FUN_146825d77;
    _DAT_14ca38b80 = FUN_146825fd6;
    _DAT_14ca38b88 = FUN_1407e02ea;
    _DAT_14ca38b90 = FUN_146826273;
    _DAT_14ca38b68 = FUN_1472b18a4;
    _DAT_14ca38ba8 = 0xffffffff000000e0;
    _DAT_14ca38bb0 = 8;
    DAT_14ca38bb4 = 0;
    _DAT_14ca38b98 = &LAB_1472b18ce;
    FUN_145e5b52c();
    FUN_1407e00cc(&DAT_14ca38b50);
    return;
  }
  return;
}



// FUNCTION 145e5b52c FUN_145e5b52c body=123 status=ok
// SIG undefined FUN_145e5b52c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e5b52c(void)

{
  _DAT_14ca3f4a0 = L"BASE";
  DAT_14ca3f4ca = 4;
  _DAT_14ca3f4a8 = FUN_140b35ae4();
  _DAT_14ca3f4b0 = DAT_14ca38b60;
  _DAT_14ca3f4b8 = &LAB_14682652b;
  DAT_14ca38b60 = &DAT_14ca3f4a0;
  DAT_14ca38bb5 = DAT_14ca38bb5 + '\x01';
  _DAT_14ca3f4c0 = 0x100000000;
  if (*(char *)(_DAT_14ca3f4a8 + 100) != '\0') {
    DAT_14ca38bb6 = DAT_14ca38bb6 + '\x01';
  }
  return;
}



// FUNCTION 145e5b5a8 FUN_145e5b5a8 body=261 status=ok
// SIG undefined FUN_145e5b5a8(void)

void FUN_145e5b5a8(void)

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
              0x110) < DAT_14ca3e850) {
    FUN_144b3d300(&DAT_14ca3e850);
    if (DAT_14ca3e850 == -1) {
      FUN_145e5b6ae(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x22;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca3e7d0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f6f6ba);
      _Init_thread_footer(&DAT_14ca3e850);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e5b6ae FUN_145e5b6ae body=226 status=ok
// SIG undefined FUN_145e5b6ae(void)

longlong * FUN_145e5b6ae(longlong *param_1)

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
  pcVar13 = FUN_1463012b4;
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



// FUNCTION 145e5b796 FUN_145e5b796 body=132 status=ok
// SIG undefined FUN_145e5b796(void)

undefined1 * FUN_145e5b796(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TLAS";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RaytracingAccelerationStructure";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x23;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e5b792;
}



// FUNCTION 145e5b81a FUN_145e5b81a body=138 status=ok
// SIG undefined FUN_145e5b81a(void)

code * FUN_145e5b81a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Rays";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<FBasicRayData>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000024;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e5b796;
}



// FUNCTION 145e5b8a4 FUN_145e5b8a4 body=292 status=ok
// SIG undefined FUN_145e5b8a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e5b8a4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca38d88) {
    FUN_144b3d300(&DAT_14ca38d88);
    if (DAT_14ca38d88 == -1) {
      FUN_145e5bb12();
      FUN_145e5b9c8();
      FUN_140db5666(&DAT_14ca38ce0,0,&DAT_14ca38c78,L"FBasicIntersectionMainRGS",
                    L"/Engine/Private/RayTracing/RayTracingBuiltInShaders.usf",
                    L"IntersectionMainRGS",6,1,FUN_1472b19d0,FUN_1472b198c,&LAB_146300da4,
                    &LAB_1472b1988,&LAB_1472b1982,&LAB_14712ac08,0xe0,&DAT_14ca3e858);
      _DAT_14ca38ce0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f6577a);
      _Init_thread_footer(&DAT_14ca38d88);
    }
  }
  return &DAT_14ca38ce0;
}



// FUNCTION 145e5b9c8 FUN_145e5b9c8 body=205 status=ok
// SIG undefined FUN_145e5b9c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e5b9c8(void)

{
  if ((DAT_14ca38cdf & 2) == 0) {
    DAT_14ca38cdf = DAT_14ca38cdf | 2;
    _DAT_14ca38c80 = L"FBasicIntersectionMainRGS";
    _DAT_14ca38c98 = FUN_146826540;
    _DAT_14ca38ca0 = FUN_146825d77;
    _DAT_14ca38ca8 = FUN_146825fd6;
    _DAT_14ca38cb0 = FUN_1407e02ea;
    _DAT_14ca38cb8 = FUN_146826273;
    _DAT_14ca38c90 = FUN_1472b1954;
    _DAT_14ca38cd0 = 0xffffffff000000e0;
    _DAT_14ca38cd8 = 8;
    DAT_14ca38cdc = 0;
    _DAT_14ca38cc0 = &LAB_1472b197e;
    FUN_145e5ba96();
    FUN_1407e00cc(&DAT_14ca38c78);
    return;
  }
  return;
}



// FUNCTION 145e5ba96 FUN_145e5ba96 body=123 status=ok
// SIG undefined FUN_145e5ba96(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e5ba96(void)

{
  _DAT_14ca3f4d0 = L"BASE";
  DAT_14ca3f4fa = 4;
  _DAT_14ca3f4d8 = FUN_140b35ae4();
  _DAT_14ca3f4e0 = DAT_14ca38c88;
  _DAT_14ca3f4e8 = &LAB_14682652b;
  DAT_14ca38c88 = &DAT_14ca3f4d0;
  DAT_14ca38cdd = DAT_14ca38cdd + '\x01';
  _DAT_14ca3f4f0 = 0x100000000;
  if (*(char *)(_DAT_14ca3f4d8 + 100) != '\0') {
    DAT_14ca38cde = DAT_14ca38cde + '\x01';
  }
  return;
}



// FUNCTION 145e5bb12 FUN_145e5bb12 body=261 status=ok
// SIG undefined FUN_145e5bb12(void)

void FUN_145e5bb12(void)

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
              0x110) < DAT_14ca3e8d8) {
    FUN_144b3d300(&DAT_14ca3e8d8);
    if (DAT_14ca3e8d8 == -1) {
      FUN_145e5bc18(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x33;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca3e858,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f6f6c6);
      _Init_thread_footer(&DAT_14ca3e8d8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e5bc18 FUN_145e5bc18 body=226 status=ok
// SIG undefined FUN_145e5bc18(void)

longlong * FUN_145e5bc18(longlong *param_1)

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
  pcVar13 = FUN_14630133c;
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



// FUNCTION 145e5bd00 FUN_145e5bd00 body=132 status=ok
// SIG undefined FUN_145e5bd00(void)

undefined1 * FUN_145e5bd00(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TLAS";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RaytracingAccelerationStructure";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x34;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e5bcfc;
}



// FUNCTION 145e5bd84 FUN_145e5bd84 body=138 status=ok
// SIG undefined FUN_145e5bd84(void)

code * FUN_145e5bd84(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Rays";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<FBasicRayData>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000035;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e5bd00;
}



// FUNCTION 145e5be0e FUN_145e5be0e body=292 status=ok
// SIG undefined FUN_145e5be0e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e5be0e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca42a10) {
    FUN_144b3d300(&DAT_14ca42a10);
    if (DAT_14ca42a10 == -1) {
      FUN_145e5c07c();
      FUN_145e5bf32();
      FUN_140db5666(&DAT_14ca42968,0,&DAT_14ca42900,L"FAccumulateCubeFacesPS",
                    L"/Engine/Private/ReflectionEnvironmentShaders.usf",L"AccumulateCubeFacesPS",3,1
                    ,FUN_1472c6e38,FUN_1472c6dd8,&LAB_1472c6dd4,&LAB_1472c6dd0,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca43ff0);
      _DAT_14ca42968 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f8f34b);
      _Init_thread_footer(&DAT_14ca42a10);
    }
  }
  return &DAT_14ca42968;
}



// FUNCTION 145e5bf32 FUN_145e5bf32 body=205 status=ok
// SIG undefined FUN_145e5bf32(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e5bf32(void)

{
  if ((DAT_14ca42967 & 2) == 0) {
    DAT_14ca42967 = DAT_14ca42967 | 2;
    _DAT_14ca42908 = L"FAccumulateCubeFacesPS";
    _DAT_14ca42920 = FUN_146826540;
    _DAT_14ca42928 = FUN_146825d77;
    _DAT_14ca42930 = FUN_146825fd6;
    _DAT_14ca42938 = FUN_1407e02ea;
    _DAT_14ca42940 = FUN_146826273;
    _DAT_14ca42918 = FUN_1472c6da2;
    _DAT_14ca42958 = 0xffffffff000000e0;
    _DAT_14ca42960 = 8;
    DAT_14ca42964 = 0;
    _DAT_14ca42948 = &LAB_1472c6dcc;
    FUN_145e5c000();
    FUN_1407e00cc(&DAT_14ca42900);
    return;
  }
  return;
}



// FUNCTION 145e5c000 FUN_145e5c000 body=123 status=ok
// SIG undefined FUN_145e5c000(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e5c000(void)

{
  _DAT_14ca44a30 = L"BASE";
  DAT_14ca44a5a = 4;
  _DAT_14ca44a38 = FUN_140b35ae4();
  _DAT_14ca44a40 = DAT_14ca42910;
  _DAT_14ca44a48 = &LAB_14682652b;
  DAT_14ca42910 = &DAT_14ca44a30;
  DAT_14ca42965 = DAT_14ca42965 + '\x01';
  _DAT_14ca44a50 = 0x100000000;
  if (*(char *)(_DAT_14ca44a38 + 100) != '\0') {
    DAT_14ca42966 = DAT_14ca42966 + '\x01';
  }
  return;
}



// FUNCTION 145e5c07c FUN_145e5c07c body=261 status=ok
// SIG undefined FUN_145e5c07c(void)

void FUN_145e5c07c(void)

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
              0x110) < DAT_14ca44070) {
    FUN_144b3d300(&DAT_14ca44070);
    if (DAT_14ca44070 == -1) {
      FUN_145e5c182(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x120;
      local_58 = 0x4e;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca43ff0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142fb2537);
      _Init_thread_footer(&DAT_14ca44070);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e5c182 FUN_145e5c182 body=226 status=ok
// SIG undefined FUN_145e5c182(void)

longlong * FUN_145e5c182(longlong *param_1)

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
  pcVar13 = FUN_146304668;
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



// FUNCTION 145e5c26a FUN_145e5c26a body=132 status=ok
// SIG undefined FUN_145e5c26a(void)

undefined1 * FUN_145e5c26a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SourceCubemapTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"TextureCube";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e5c266;
}



// FUNCTION 145e5c2ee FUN_145e5c2ee body=138 status=ok
// SIG undefined FUN_145e5c2ee(void)

code * FUN_145e5c2ee(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SourceMipIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000051;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472ce09a;
}



// FUNCTION 145e5c378 FUN_145e5c378 body=205 status=ok
// SIG undefined FUN_145e5c378(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e5c378(void)

{
  if ((DAT_14ca430e7 & 2) == 0) {
    DAT_14ca430e7 = DAT_14ca430e7 | 2;
    _DAT_14ca43088 = L"FRenderRealTimeReflectionHeightFogPS";
    _DAT_14ca430a0 = FUN_146826540;
    _DAT_14ca430a8 = FUN_146825d77;
    _DAT_14ca430b0 = FUN_146825fd6;
    _DAT_14ca430b8 = FUN_1407e02ea;
    _DAT_14ca430c0 = FUN_146826273;
    _DAT_14ca43098 = FUN_1472c7552;
    _DAT_14ca430d8 = 0xffffffff000000e0;
    _DAT_14ca430e0 = 8;
    DAT_14ca430e4 = 0;
    _DAT_14ca430c8 = &LAB_1472c757c;
    FUN_145e5c446();
    FUN_1407e00cc(&DAT_14ca43080);
    return;
  }
  return;
}



// FUNCTION 145e5c446 FUN_145e5c446 body=123 status=ok
// SIG undefined FUN_145e5c446(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e5c446(void)

{
  _DAT_14ca44b50 = L"BASE";
  DAT_14ca44b7a = 4;
  _DAT_14ca44b58 = FUN_140b35ae4();
  _DAT_14ca44b60 = DAT_14ca43090;
  _DAT_14ca44b68 = &LAB_14682652b;
  DAT_14ca43090 = &DAT_14ca44b50;
  DAT_14ca430e5 = DAT_14ca430e5 + '\x01';
  _DAT_14ca44b70 = 0x100000000;
  if (*(char *)(_DAT_14ca44b58 + 100) != '\0') {
    DAT_14ca430e6 = DAT_14ca430e6 + '\x01';
  }
  return;
}



// FUNCTION 145e5c4c2 FUN_145e5c4c2 body=226 status=ok
// SIG undefined FUN_145e5c4c2(void)

longlong * FUN_145e5c4c2(longlong *param_1)

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
  pcVar13 = FUN_146304aa8;
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



// FUNCTION 145e5c5aa FUN_145e5c5aa body=138 status=ok
// SIG undefined FUN_145e5c5aa(void)

undefined1 * FUN_145e5c5aa(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar4) = L"ViewUniformBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewUniformShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xf2;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e5c5a6;
}



// FUNCTION 145e5c634 FUN_145e5c634 body=138 status=ok
// SIG undefined FUN_145e5c634(void)

code * FUN_145e5c634(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DepthTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000000f4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146304b30;
}



// FUNCTION 145e5c6be FUN_145e5c6be body=292 status=ok
// SIG undefined FUN_145e5c6be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e5c6be(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4d8e8) {
    FUN_144b3d300(&DAT_14ca4d8e8);
    if (DAT_14ca4d8e8 == -1) {
      FUN_145e5c92c();
      FUN_145e5c7e2();
      FUN_140db5666(&DAT_14ca4d840,0,&DAT_14ca4d7d8,L"FShaderCompactStateBufferCS",
                    L"/Engine/Private/ShaderPrintDraw.usf",L"CompactStateBufferCS",5,1,FUN_1472ead5a
                    ,FUN_1472eacfa,&LAB_1472eacd0,&LAB_1472eaccc,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca55f40);
      _DAT_14ca4d840 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14303e99e);
      _Init_thread_footer(&DAT_14ca4d8e8);
    }
  }
  return &DAT_14ca4d840;
}



// FUNCTION 145e5c7e2 FUN_145e5c7e2 body=205 status=ok
// SIG undefined FUN_145e5c7e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e5c7e2(void)

{
  if ((DAT_14ca4d83f & 2) == 0) {
    DAT_14ca4d83f = DAT_14ca4d83f | 2;
    _DAT_14ca4d7e0 = L"FShaderCompactStateBufferCS";
    _DAT_14ca4d7f8 = FUN_146826540;
    _DAT_14ca4d800 = FUN_146825d77;
    _DAT_14ca4d808 = FUN_146825fd6;
    _DAT_14ca4d810 = FUN_1407e02ea;
    _DAT_14ca4d818 = FUN_146826273;
    _DAT_14ca4d7f0 = FUN_1472eac9c;
    _DAT_14ca4d830 = 0xffffffff000000e0;
    _DAT_14ca4d838 = 8;
    DAT_14ca4d83c = 0;
    _DAT_14ca4d820 = &LAB_1472eacc8;
    FUN_145e5c8b0();
    FUN_1407e00cc(&DAT_14ca4d7d8);
    return;
  }
  return;
}



// FUNCTION 145e5c8b0 FUN_145e5c8b0 body=123 status=ok
// SIG undefined FUN_145e5c8b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e5c8b0(void)

{
  _DAT_14ca56978 = L"BASE";
  DAT_14ca569a2 = 4;
  _DAT_14ca56980 = FUN_140b35ae4();
  _DAT_14ca56988 = DAT_14ca4d7e8;
  _DAT_14ca56990 = &LAB_14682652b;
  DAT_14ca4d7e8 = &DAT_14ca56978;
  DAT_14ca4d83d = DAT_14ca4d83d + '\x01';
  _DAT_14ca56998 = 0x100000000;
  if (*(char *)(_DAT_14ca56980 + 100) != '\0') {
    DAT_14ca4d83e = DAT_14ca4d83e + '\x01';
  }
  return;
}



// FUNCTION 145e5c92c FUN_145e5c92c body=261 status=ok
// SIG undefined FUN_145e5c92c(void)

void FUN_145e5c92c(void)

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
              0x110) < DAT_14ca55fc0) {
    FUN_144b3d300(&DAT_14ca55fc0);
    if (DAT_14ca55fc0 == -1) {
      FUN_145e5ca32(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x1e1;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca55f40,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14305d7d5);
      _Init_thread_footer(&DAT_14ca55fc0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e5ca32 FUN_145e5ca32 body=226 status=ok
// SIG undefined FUN_145e5ca32(void)

longlong * FUN_145e5ca32(longlong *param_1)

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
  pcVar13 = FUN_146307b22;
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



// FUNCTION 145e5cb1a FUN_145e5cb1a body=132 status=ok
// SIG undefined FUN_145e5cb1a(void)

undefined1 * FUN_145e5cb1a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FrameIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1e2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e5cb16;
}



// FUNCTION 145e5cb9e FUN_145e5cb9e body=138 status=ok
// SIG undefined FUN_145e5cb9e(void)

code * FUN_145e5cb9e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FrameThreshold";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000001e3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e5cb1a;
}



// FUNCTION 145e5cc28 FUN_145e5cc28 body=205 status=ok
// SIG undefined FUN_145e5cc28(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e5cc28(void)

{
  if ((DAT_14ca60eff & 2) == 0) {
    DAT_14ca60eff = DAT_14ca60eff | 2;
    _DAT_14ca60ea0 = L"FFilterTranslucentVolumePS";
    _DAT_14ca60eb8 = FUN_146826540;
    _DAT_14ca60ec0 = FUN_146825d77;
    _DAT_14ca60ec8 = FUN_146825fd6;
    _DAT_14ca60ed0 = FUN_1407e02ea;
    _DAT_14ca60ed8 = FUN_146826273;
    _DAT_14ca60eb0 = FUN_147322b08;
    _DAT_14ca60ef0 = 0xffffffff000000e0;
    _DAT_14ca60ef8 = 8;
    DAT_14ca60efc = 0;
    _DAT_14ca60ee0 = &LAB_147322b32;
    FUN_145e5ccf6();
    FUN_1407e00cc(&DAT_14ca60e98);
    return;
  }
  return;
}



// FUNCTION 145e5ccf6 FUN_145e5ccf6 body=123 status=ok
// SIG undefined FUN_145e5ccf6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e5ccf6(void)

{
  _DAT_14ca63780 = L"BASE";
  DAT_14ca637aa = 4;
  _DAT_14ca63788 = FUN_140b35ae4();
  _DAT_14ca63790 = DAT_14ca60ea8;
  _DAT_14ca63798 = &LAB_14682652b;
  DAT_14ca60ea8 = &DAT_14ca63780;
  DAT_14ca60efd = DAT_14ca60efd + '\x01';
  _DAT_14ca637a0 = 0x100000000;
  if (*(char *)(_DAT_14ca63788 + 100) != '\0') {
    DAT_14ca60efe = DAT_14ca60efe + '\x01';
  }
  return;
}



// FUNCTION 145e5cd72 FUN_145e5cd72 body=226 status=ok
// SIG undefined FUN_145e5cd72(void)

longlong * FUN_145e5cd72(longlong *param_1)

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
  pcVar13 = FUN_14630ec30;
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



// FUNCTION 145e5ce5a FUN_145e5ce5a body=138 status=ok
// SIG undefined FUN_145e5ce5a(void)

code * FUN_145e5ce5a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TranslucencyLightingVolumeAmbient";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture3D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000029f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14630ed40;
}



// FUNCTION 145e5cee4 FUN_145e5cee4 body=138 status=ok
// SIG undefined FUN_145e5cee4(void)

code * FUN_145e5cee4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TranslucencyLightingVolumeAmbientSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000002a1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14630ecb8;
}



// FUNCTION 145e5cf6e FUN_145e5cf6e body=205 status=ok
// SIG undefined FUN_145e5cf6e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e5cf6e(void)

{
  if ((DAT_14ca61277 & 2) == 0) {
    DAT_14ca61277 = DAT_14ca61277 | 2;
    _DAT_14ca61218 = L"FClearTranslucentLightingVolumeCS";
    _DAT_14ca61230 = FUN_146826540;
    _DAT_14ca61238 = FUN_146825d77;
    _DAT_14ca61240 = FUN_146825fd6;
    _DAT_14ca61248 = FUN_1407e02ea;
    _DAT_14ca61250 = FUN_146826273;
    _DAT_14ca61228 = FUN_147322d4c;
    _DAT_14ca61268 = 0xffffffff000000e0;
    _DAT_14ca61270 = 8;
    DAT_14ca61274 = 0;
    _DAT_14ca61258 = &LAB_147322d76;
    FUN_145e5d03c();
    FUN_1407e00cc(&DAT_14ca61210);
    return;
  }
  return;
}



// FUNCTION 145e5d03c FUN_145e5d03c body=123 status=ok
// SIG undefined FUN_145e5d03c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e5d03c(void)

{
  _DAT_14ca63810 = L"BASE";
  DAT_14ca6383a = 4;
  _DAT_14ca63818 = FUN_140b35ae4();
  _DAT_14ca63820 = DAT_14ca61220;
  _DAT_14ca63828 = &LAB_14682652b;
  DAT_14ca61220 = &DAT_14ca63810;
  DAT_14ca61275 = DAT_14ca61275 + '\x01';
  _DAT_14ca63830 = 0x100000000;
  if (*(char *)(_DAT_14ca63818 + 100) != '\0') {
    DAT_14ca61276 = DAT_14ca61276 + '\x01';
  }
  return;
}



// FUNCTION 145e5d0b8 FUN_145e5d0b8 body=226 status=ok
// SIG undefined FUN_145e5d0b8(void)

longlong * FUN_145e5d0b8(longlong *param_1)

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
  pcVar13 = FUN_14630f2ba;
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



// FUNCTION 145e5d1a0 FUN_145e5d1a0 body=138 status=ok
// SIG undefined FUN_145e5d1a0(void)

code * FUN_145e5d1a0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWDirectional0";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture3D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000347;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1473263a6;
}



// FUNCTION 145e5d22a FUN_145e5d22a body=138 status=ok
// SIG undefined FUN_145e5d22a(void)

code * FUN_145e5d22a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWAmbient1";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture3D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000348;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e5d1a0;
}



// FUNCTION 145e5d2b4 FUN_145e5d2b4 body=205 status=ok
// SIG undefined FUN_145e5d2b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e5d2b4(void)

{
  if ((DAT_14ca617b7 & 2) == 0) {
    DAT_14ca617b7 = DAT_14ca617b7 | 2;
    _DAT_14ca61758 = L"FCopySceneColorPS";
    _DAT_14ca61770 = FUN_146826540;
    _DAT_14ca61778 = FUN_146825d77;
    _DAT_14ca61780 = FUN_146825fd6;
    _DAT_14ca61788 = FUN_1407e02ea;
    _DAT_14ca61790 = FUN_146826273;
    _DAT_14ca61768 = FUN_147322fe2;
    _DAT_14ca617a8 = 0xffffffff000000e0;
    _DAT_14ca617b0 = 8;
    DAT_14ca617b4 = 0;
    _DAT_14ca61798 = &LAB_14732300c;
    FUN_145e5d382();
    FUN_1407e00cc(&DAT_14ca61750);
    return;
  }
  return;
}



// FUNCTION 145e5d382 FUN_145e5d382 body=123 status=ok
// SIG undefined FUN_145e5d382(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e5d382(void)

{
  _DAT_14ca63930 = L"BASE";
  DAT_14ca6395a = 4;
  _DAT_14ca63938 = FUN_140b35ae4();
  _DAT_14ca63940 = DAT_14ca61760;
  _DAT_14ca63948 = &LAB_14682652b;
  DAT_14ca61760 = &DAT_14ca63930;
  DAT_14ca617b5 = DAT_14ca617b5 + '\x01';
  _DAT_14ca63950 = 0x100000000;
  if (*(char *)(_DAT_14ca63938 + 100) != '\0') {
    DAT_14ca617b6 = DAT_14ca617b6 + '\x01';
  }
  return;
}



// FUNCTION 145e5d3fe FUN_145e5d3fe body=226 status=ok
// SIG undefined FUN_145e5d3fe(void)

longlong * FUN_145e5d3fe(longlong *param_1)

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
  pcVar13 = FUN_14630f452;
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



// FUNCTION 145e5d4e6 FUN_145e5d4e6 body=138 status=ok
// SIG undefined FUN_145e5d4e6(void)

undefined1 * FUN_145e5d4e6(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1ae;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e5d4e2;
}



// FUNCTION 145e5d570 FUN_145e5d570 body=138 status=ok
// SIG undefined FUN_145e5d570(void)

code * FUN_145e5d570(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SceneColorTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000001af;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e5d4e6;
}



// FUNCTION 145e5d5fa FUN_145e5d5fa body=205 status=ok
// SIG undefined FUN_145e5d5fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e5d5fa(void)

{
  if ((DAT_14ca61cd7 & 2) == 0) {
    DAT_14ca61cd7 = DAT_14ca61cd7 | 2;
    _DAT_14ca61c78 = L"FCalculateShadingRateImageCS";
    _DAT_14ca61c90 = FUN_146826540;
    _DAT_14ca61c98 = FUN_146825d77;
    _DAT_14ca61ca0 = FUN_146825fd6;
    _DAT_14ca61ca8 = FUN_1407e02ea;
    _DAT_14ca61cb0 = FUN_146826273;
    _DAT_14ca61c88 = FUN_14732350e;
    _DAT_14ca61cc8 = 0xffffffff000000e0;
    _DAT_14ca61cd0 = 8;
    DAT_14ca61cd4 = 0;
    _DAT_14ca61cb8 = &LAB_147323538;
    FUN_145e5d6c8();
    FUN_1407e00cc(&DAT_14ca61c70);
    return;
  }
  return;
}



// FUNCTION 145e5d6c8 FUN_145e5d6c8 body=123 status=ok
// SIG undefined FUN_145e5d6c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e5d6c8(void)

{
  _DAT_14ca639f0 = L"BASE";
  DAT_14ca63a1a = 4;
  _DAT_14ca639f8 = FUN_140b35ae4();
  _DAT_14ca63a00 = DAT_14ca61c80;
  _DAT_14ca63a08 = &LAB_14682652b;
  DAT_14ca61c80 = &DAT_14ca639f0;
  DAT_14ca61cd5 = DAT_14ca61cd5 + '\x01';
  _DAT_14ca63a10 = 0x100000000;
  if (*(char *)(_DAT_14ca639f8 + 100) != '\0') {
    DAT_14ca61cd6 = DAT_14ca61cd6 + '\x01';
  }
  return;
}



// FUNCTION 145e5d744 FUN_145e5d744 body=226 status=ok
// SIG undefined FUN_145e5d744(void)

longlong * FUN_145e5d744(longlong *param_1)

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
  pcVar13 = FUN_14630fada;
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



// FUNCTION 145e5d82c FUN_145e5d82c body=138 status=ok
// SIG undefined FUN_145e5d82c(void)

code * FUN_145e5d82c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HardwareShadingRateImage";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000056;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1473274e6;
}



// FUNCTION 145e5d8b6 FUN_145e5d8b6 body=138 status=ok
// SIG undefined FUN_145e5d8b6(void)

code * FUN_145e5d8b6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"EdgeThreshold";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000054;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14630fb62;
}



// FUNCTION 145e5d940 FUN_145e5d940 body=292 status=ok
// SIG undefined FUN_145e5d940(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e5d940(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca622f0) {
    FUN_144b3d300(&DAT_14ca622f0);
    if (DAT_14ca622f0 == -1) {
      FUN_145e5dbae();
      FUN_145e5da64();
      FUN_140db5666(&DAT_14ca62248,0,&DAT_14ca621e0,L"FCombineShadingRateTexturesCS",
                    L"/Engine/Private/VariableRateShading/VRSShadingRateCombine.usf",
                    L"CombineShadingRateTextures",5,1,FUN_147323b1c,FUN_147323abc,&LAB_147323aa4,
                    &LAB_147323aa0,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca63190);
      _DAT_14ca62248 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430bb065);
      _Init_thread_footer(&DAT_14ca622f0);
    }
  }
  return &DAT_14ca62248;
}



// FUNCTION 145e5da64 FUN_145e5da64 body=205 status=ok
// SIG undefined FUN_145e5da64(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e5da64(void)

{
  if ((DAT_14ca62247 & 2) == 0) {
    DAT_14ca62247 = DAT_14ca62247 | 2;
    _DAT_14ca621e8 = L"FCombineShadingRateTexturesCS";
    _DAT_14ca62200 = FUN_146826540;
    _DAT_14ca62208 = FUN_146825d77;
    _DAT_14ca62210 = FUN_146825fd6;
    _DAT_14ca62218 = FUN_1407e02ea;
    _DAT_14ca62220 = FUN_146826273;
    _DAT_14ca621f8 = FUN_147323a72;
    _DAT_14ca62238 = 0xffffffff000000e0;
    _DAT_14ca62240 = 8;
    DAT_14ca62244 = 0;
    _DAT_14ca62228 = &LAB_147323a9c;
    FUN_145e5db32();
    FUN_1407e00cc(&DAT_14ca621e0);
    return;
  }
  return;
}



// FUNCTION 145e5db32 FUN_145e5db32 body=123 status=ok
// SIG undefined FUN_145e5db32(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e5db32(void)

{
  _DAT_14ca63a80 = L"BASE";
  DAT_14ca63aaa = 4;
  _DAT_14ca63a88 = FUN_140b35ae4();
  _DAT_14ca63a90 = DAT_14ca621f0;
  _DAT_14ca63a98 = &LAB_14682652b;
  DAT_14ca621f0 = &DAT_14ca63a80;
  DAT_14ca62245 = DAT_14ca62245 + '\x01';
  _DAT_14ca63aa0 = 0x100000000;
  if (*(char *)(_DAT_14ca63a88 + 100) != '\0') {
    DAT_14ca62246 = DAT_14ca62246 + '\x01';
  }
  return;
}



// FUNCTION 145e5dbae FUN_145e5dbae body=261 status=ok
// SIG undefined FUN_145e5dbae(void)

void FUN_145e5dbae(void)

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
              0x110) < DAT_14ca63210) {
    FUN_144b3d300(&DAT_14ca63210);
    if (DAT_14ca63210 == -1) {
      FUN_145e5dcb4(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0xd3;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca63190,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430c1f98);
      _Init_thread_footer(&DAT_14ca63210);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e5dcb4 FUN_145e5dcb4 body=226 status=ok
// SIG undefined FUN_145e5dcb4(void)

longlong * FUN_145e5dcb4(longlong *param_1)

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
  pcVar13 = FUN_14630fd84;
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



// FUNCTION 145e5dd9c FUN_145e5dd9c body=132 status=ok
// SIG undefined FUN_145e5dd9c(void)

undefined1 * FUN_145e5dd9c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWOutputTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e5dd98;
}



// FUNCTION 145e5de20 FUN_145e5de20 body=138 status=ok
// SIG undefined FUN_145e5de20(void)

code * FUN_145e5de20(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SourceTexture0";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000d5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e5dd9c;
}



// FUNCTION 145e5deaa FUN_145e5deaa body=292 status=ok
// SIG undefined FUN_145e5deaa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e5deaa(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca62418) {
    FUN_144b3d300(&DAT_14ca62418);
    if (DAT_14ca62418 == -1) {
      FUN_145e5e118();
      FUN_145e5dfce();
      FUN_140db5666(&DAT_14ca62370,0,&DAT_14ca62308,L"FDebugVariableRateShadingCS",
                    L"/Engine/Private/VariableRateShading/VRSShadingRatePreview.usf",
                    L"PreviewVariableRateShadingTextureCS",5,1,FUN_147323bfa,FUN_147323b9a,
                    &LAB_147323b82,&LAB_147323b7e,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca63218)
      ;
      _DAT_14ca62370 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430bb071);
      _Init_thread_footer(&DAT_14ca62418);
    }
  }
  return &DAT_14ca62370;
}



// FUNCTION 145e5dfce FUN_145e5dfce body=205 status=ok
// SIG undefined FUN_145e5dfce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e5dfce(void)

{
  if ((DAT_14ca6236f & 2) == 0) {
    DAT_14ca6236f = DAT_14ca6236f | 2;
    _DAT_14ca62310 = L"FDebugVariableRateShadingCS";
    _DAT_14ca62328 = FUN_146826540;
    _DAT_14ca62330 = FUN_146825d77;
    _DAT_14ca62338 = FUN_146825fd6;
    _DAT_14ca62340 = FUN_1407e02ea;
    _DAT_14ca62348 = FUN_146826273;
    _DAT_14ca62320 = FUN_147323b50;
    _DAT_14ca62360 = 0xffffffff000000e0;
    _DAT_14ca62368 = 8;
    DAT_14ca6236c = 0;
    _DAT_14ca62350 = &LAB_147323b7a;
    FUN_145e5e09c();
    FUN_1407e00cc(&DAT_14ca62308);
    return;
  }
  return;
}



// FUNCTION 145e5e09c FUN_145e5e09c body=123 status=ok
// SIG undefined FUN_145e5e09c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e5e09c(void)

{
  _DAT_14ca63ab0 = L"BASE";
  DAT_14ca63ada = 4;
  _DAT_14ca63ab8 = FUN_140b35ae4();
  _DAT_14ca63ac0 = DAT_14ca62318;
  _DAT_14ca63ac8 = &LAB_14682652b;
  DAT_14ca62318 = &DAT_14ca63ab0;
  DAT_14ca6236d = DAT_14ca6236d + '\x01';
  _DAT_14ca63ad0 = 0x100000000;
  if (*(char *)(_DAT_14ca63ab8 + 100) != '\0') {
    DAT_14ca6236e = DAT_14ca6236e + '\x01';
  }
  return;
}



// FUNCTION 145e5e118 FUN_145e5e118 body=261 status=ok
// SIG undefined FUN_145e5e118(void)

void FUN_145e5e118(void)

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
              0x110) < DAT_14ca63298) {
    FUN_144b3d300(&DAT_14ca63298);
    if (DAT_14ca63298 == -1) {
      FUN_145e5e21e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0xf6;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca63218,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430c1fa4);
      _Init_thread_footer(&DAT_14ca63298);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e5e21e FUN_145e5e21e body=226 status=ok
// SIG undefined FUN_145e5e21e(void)

longlong * FUN_145e5e21e(longlong *param_1)

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
  pcVar13 = FUN_14630fe0c;
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



// FUNCTION 145e5e306 FUN_145e5e306 body=132 status=ok
// SIG undefined FUN_145e5e306(void)

undefined1 * FUN_145e5e306(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VariableRateShadingTextureIn";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e5e302;
}



// FUNCTION 145e5e38a FUN_145e5e38a body=138 status=ok
// SIG undefined FUN_145e5e38a(void)

code * FUN_145e5e38a(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000000f8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e5e306;
}



// FUNCTION 145e5e414 FUN_145e5e414 body=205 status=ok
// SIG undefined FUN_145e5e414(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e5e414(void)

{
  if ((DAT_14ca64def & 2) == 0) {
    DAT_14ca64def = DAT_14ca64def | 2;
    _DAT_14ca64d90 = L"FUpdatePhysicalPageAddresses";
    _DAT_14ca64da8 = FUN_146826540;
    _DAT_14ca64db0 = FUN_146825d77;
    _DAT_14ca64db8 = FUN_146825fd6;
    _DAT_14ca64dc0 = FUN_1407e02ea;
    _DAT_14ca64dc8 = FUN_146826273;
    _DAT_14ca64da0 = FUN_14732b27c;
    _DAT_14ca64de0 = 0xffffffff000000e0;
    _DAT_14ca64de8 = 8;
    DAT_14ca64dec = 0;
    _DAT_14ca64dd0 = &LAB_14732b2a6;
    FUN_145e5e4e2();
    FUN_1407e00cc(&DAT_14ca64d88);
    return;
  }
  return;
}



// FUNCTION 145e5e4e2 FUN_145e5e4e2 body=123 status=ok
// SIG undefined FUN_145e5e4e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e5e4e2(void)

{
  _DAT_14ca68c00 = L"BASE";
  DAT_14ca68c2a = 4;
  _DAT_14ca68c08 = FUN_140b35ae4();
  _DAT_14ca68c10 = DAT_14ca64d98;
  _DAT_14ca68c18 = &LAB_14682652b;
  DAT_14ca64d98 = &DAT_14ca68c00;
  DAT_14ca64ded = DAT_14ca64ded + '\x01';
  _DAT_14ca68c20 = 0x100000000;
  if (*(char *)(_DAT_14ca68c08 + 100) != '\0') {
    DAT_14ca64dee = DAT_14ca64dee + '\x01';
  }
  return;
}



// FUNCTION 145e5e55e FUN_145e5e55e body=226 status=ok
// SIG undefined FUN_145e5e55e(void)

longlong * FUN_145e5e55e(longlong *param_1)

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
  pcVar13 = FUN_1463115a4;
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



// FUNCTION 145e5e646 FUN_145e5e646 body=136 status=ok
// SIG undefined FUN_145e5e646(void)

code * FUN_145e5e646(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutPhysicalPageMetaData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<FPhysicalPageMetaData>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000003fa;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e5e6ce;
}



// FUNCTION 145e5e6ce FUN_145e5e6ce body=140 status=ok
// SIG undefined FUN_145e5e6ce(void)

undefined1 * FUN_145e5e6ce(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_144938434();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VirtualShadowMap";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FVirtualShadowMapUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3f9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca64298;
  return &LAB_145e5e642;
}



// FUNCTION 145e5e75a FUN_145e5e75a body=205 status=ok
// SIG undefined FUN_145e5e75a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e5e75a(void)

{
  if ((DAT_14ca64f17 & 2) == 0) {
    DAT_14ca64f17 = DAT_14ca64f17 | 2;
    _DAT_14ca64eb8 = L"FUpdatePhysicalPages";
    _DAT_14ca64ed0 = FUN_146826540;
    _DAT_14ca64ed8 = FUN_146825d77;
    _DAT_14ca64ee0 = FUN_146825fd6;
    _DAT_14ca64ee8 = FUN_1407e02ea;
    _DAT_14ca64ef0 = FUN_146826273;
    _DAT_14ca64ec8 = FUN_14732b37a;
    _DAT_14ca64f08 = 0xffffffff000000e0;
    _DAT_14ca64f10 = 8;
    DAT_14ca64f14 = 0;
    _DAT_14ca64ef8 = &LAB_14732b3a4;
    FUN_145e5e828();
    FUN_1407e00cc(&DAT_14ca64eb0);
    return;
  }
  return;
}



// FUNCTION 145e5e828 FUN_145e5e828 body=123 status=ok
// SIG undefined FUN_145e5e828(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e5e828(void)

{
  _DAT_14ca68c30 = L"BASE";
  DAT_14ca68c5a = 4;
  _DAT_14ca68c38 = FUN_140b35ae4();
  _DAT_14ca68c40 = DAT_14ca64ec0;
  _DAT_14ca68c48 = &LAB_14682652b;
  DAT_14ca64ec0 = &DAT_14ca68c30;
  DAT_14ca64f15 = DAT_14ca64f15 + '\x01';
  _DAT_14ca68c50 = 0x100000000;
  if (*(char *)(_DAT_14ca68c38 + 100) != '\0') {
    DAT_14ca64f16 = DAT_14ca64f16 + '\x01';
  }
  return;
}



// FUNCTION 145e5e8a4 FUN_145e5e8a4 body=226 status=ok
// SIG undefined FUN_145e5e8a4(void)

longlong * FUN_145e5e8a4(longlong *param_1)

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
  pcVar13 = FUN_14631162c;
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



// FUNCTION 145e5e98c FUN_145e5e98c body=138 status=ok
// SIG undefined FUN_145e5e98c(void)

code * FUN_145e5e98c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutPhysicalPageLists";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer< int >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000412;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e5ea16;
}



// FUNCTION 145e5ea16 FUN_145e5ea16 body=138 status=ok
// SIG undefined FUN_145e5ea16(void)

code * FUN_145e5ea16(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutPhysicalPageMetaData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer< FPhysicalPageMetaData >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000411;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14631173c;
}



// FUNCTION 145e5eaa0 FUN_145e5eaa0 body=205 status=ok
// SIG undefined FUN_145e5eaa0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e5eaa0(void)

{
  if ((DAT_14ca65607 & 2) == 0) {
    DAT_14ca65607 = DAT_14ca65607 | 2;
    _DAT_14ca655a8 = L"FSelectPagesToInitializeCS";
    _DAT_14ca655c0 = FUN_146826540;
    _DAT_14ca655c8 = FUN_146825d77;
    _DAT_14ca655d0 = FUN_146825fd6;
    _DAT_14ca655d8 = FUN_1407e02ea;
    _DAT_14ca655e0 = FUN_146826273;
    _DAT_14ca655b8 = FUN_14732ba90;
    _DAT_14ca655f8 = 0xffffffff000000e0;
    _DAT_14ca65600 = 8;
    DAT_14ca65604 = 0;
    _DAT_14ca655e8 = &LAB_14732baba;
    FUN_145e5eb6e();
    FUN_1407e00cc(&DAT_14ca655a0);
    return;
  }
  return;
}



// FUNCTION 145e5eb6e FUN_145e5eb6e body=123 status=ok
// SIG undefined FUN_145e5eb6e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e5eb6e(void)

{
  _DAT_14ca68d50 = L"BASE";
  DAT_14ca68d7a = 4;
  _DAT_14ca68d58 = FUN_140b35ae4();
  _DAT_14ca68d60 = DAT_14ca655b0;
  _DAT_14ca68d68 = &LAB_14682652b;
  DAT_14ca655b0 = &DAT_14ca68d50;
  DAT_14ca65605 = DAT_14ca65605 + '\x01';
  _DAT_14ca68d70 = 0x100000000;
  if (*(char *)(_DAT_14ca68d58 + 100) != '\0') {
    DAT_14ca65606 = DAT_14ca65606 + '\x01';
  }
  return;
}



// FUNCTION 145e5ebea FUN_145e5ebea body=226 status=ok
// SIG undefined FUN_145e5ebea(void)

longlong * FUN_145e5ebea(longlong *param_1)

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
  pcVar13 = FUN_146311c0c;
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



// FUNCTION 145e5ecd2 FUN_145e5ecd2 body=138 status=ok
// SIG undefined FUN_145e5ecd2(void)

code * FUN_145e5ecd2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PhysicalPageMetaData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<FPhysicalPageMetaData>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000523;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146311c94;
}



// FUNCTION 145e5ed5c FUN_145e5ed5c body=138 status=ok
// SIG undefined FUN_145e5ed5c(void)

code * FUN_145e5ed5c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutInitializePagesIndirectArgsBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000524;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e5ecd2;
}



// FUNCTION 145e5ede6 FUN_145e5ede6 body=205 status=ok
// SIG undefined FUN_145e5ede6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e5ede6(void)

{
  if ((DAT_14ca6572f & 2) == 0) {
    DAT_14ca6572f = DAT_14ca6572f | 2;
    _DAT_14ca656d0 = L"FInitializePhysicalPagesIndirectCS";
    _DAT_14ca656e8 = FUN_146826540;
    _DAT_14ca656f0 = FUN_146825d77;
    _DAT_14ca656f8 = FUN_146825fd6;
    _DAT_14ca65700 = FUN_1407e02ea;
    _DAT_14ca65708 = FUN_146826273;
    _DAT_14ca656e0 = FUN_14732bb8e;
    _DAT_14ca65720 = 0xffffffff000000e0;
    _DAT_14ca65728 = 8;
    DAT_14ca6572c = 0;
    _DAT_14ca65710 = &LAB_14732bbb8;
    FUN_145e5eeb4();
    FUN_1407e00cc(&DAT_14ca656c8);
    return;
  }
  return;
}



// FUNCTION 145e5eeb4 FUN_145e5eeb4 body=123 status=ok
// SIG undefined FUN_145e5eeb4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e5eeb4(void)

{
  _DAT_14ca68d80 = L"BASE";
  DAT_14ca68daa = 4;
  _DAT_14ca68d88 = FUN_140b35ae4();
  _DAT_14ca68d90 = DAT_14ca656d8;
  _DAT_14ca68d98 = &LAB_14682652b;
  DAT_14ca656d8 = &DAT_14ca68d80;
  DAT_14ca6572d = DAT_14ca6572d + '\x01';
  _DAT_14ca68da0 = 0x100000000;
  if (*(char *)(_DAT_14ca68d88 + 100) != '\0') {
    DAT_14ca6572e = DAT_14ca6572e + '\x01';
  }
  return;
}



// FUNCTION 145e5ef30 FUN_145e5ef30 body=226 status=ok
// SIG undefined FUN_145e5ef30(void)

longlong * FUN_145e5ef30(longlong *param_1)

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
  pcVar13 = FUN_146311d1e;
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



// FUNCTION 145e5f018 FUN_145e5f018 body=138 status=ok
// SIG undefined FUN_145e5f018(void)

code * FUN_145e5f018(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutPhysicalPagePool";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000534;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14732fb0c;
}



// FUNCTION 145e5f0a2 FUN_145e5f0a2 body=138 status=ok
// SIG undefined FUN_145e5f0a2(void)

undefined1 * FUN_145e5f0a2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_144938434();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VirtualShadowMap";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FVirtualShadowMapUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x531;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca64298;
  return &LAB_145e5f014;
}



// FUNCTION 145e5f12c FUN_145e5f12c body=205 status=ok
// SIG undefined FUN_145e5f12c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e5f12c(void)

{
  if ((DAT_14ca65aa7 & 2) == 0) {
    DAT_14ca65aa7 = DAT_14ca65aa7 | 2;
    _DAT_14ca65a48 = L"FInitPageRectBoundsCS";
    _DAT_14ca65a60 = FUN_146826540;
    _DAT_14ca65a68 = FUN_146825d77;
    _DAT_14ca65a70 = FUN_146825fd6;
    _DAT_14ca65a78 = FUN_1407e02ea;
    _DAT_14ca65a80 = FUN_146826273;
    _DAT_14ca65a58 = FUN_14732be88;
    _DAT_14ca65a98 = 0xffffffff000000e0;
    _DAT_14ca65aa0 = 8;
    DAT_14ca65aa4 = 0;
    _DAT_14ca65a88 = &LAB_14732beb2;
    FUN_145e5f1fa();
    FUN_1407e00cc(&DAT_14ca65a40);
    return;
  }
  return;
}



// FUNCTION 145e5f1fa FUN_145e5f1fa body=123 status=ok
// SIG undefined FUN_145e5f1fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e5f1fa(void)

{
  _DAT_14ca68e10 = L"BASE";
  DAT_14ca68e3a = 4;
  _DAT_14ca68e18 = FUN_140b35ae4();
  _DAT_14ca68e20 = DAT_14ca65a50;
  _DAT_14ca68e28 = &LAB_14682652b;
  DAT_14ca65a50 = &DAT_14ca68e10;
  DAT_14ca65aa5 = DAT_14ca65aa5 + '\x01';
  _DAT_14ca68e30 = 0x100000000;
  if (*(char *)(_DAT_14ca68e18 + 100) != '\0') {
    DAT_14ca65aa6 = DAT_14ca65aa6 + '\x01';
  }
  return;
}



// FUNCTION 145e5f276 FUN_145e5f276 body=226 status=ok
// SIG undefined FUN_145e5f276(void)

longlong * FUN_145e5f276(longlong *param_1)

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
  pcVar13 = FUN_146311eb6;
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



// FUNCTION 145e5f35e FUN_145e5f35e body=138 status=ok
// SIG undefined FUN_145e5f35e(void)

code * FUN_145e5f35e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumPageRectsToClear";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000005a7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14732fcb2;
}



// FUNCTION 145e5f3e8 FUN_145e5f3e8 body=138 status=ok
// SIG undefined FUN_145e5f3e8(void)

code * FUN_145e5f3e8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutPhysicalPageLists";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<int>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28000005a8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e5f35e;
}



// FUNCTION 145e5f472 FUN_145e5f472 body=205 status=ok
// SIG undefined FUN_145e5f472(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e5f472(void)

{
  if ((DAT_14ca65e1f & 2) == 0) {
    DAT_14ca65e1f = DAT_14ca65e1f | 2;
    _DAT_14ca65dc0 = L"FVirtualSmLogStatsCS";
    _DAT_14ca65dd8 = FUN_146826540;
    _DAT_14ca65de0 = FUN_146825d77;
    _DAT_14ca65de8 = FUN_146825fd6;
    _DAT_14ca65df0 = FUN_1407e02ea;
    _DAT_14ca65df8 = FUN_146826273;
    _DAT_14ca65dd0 = FUN_14732c2a2;
    _DAT_14ca65e10 = 0xffffffff000000e0;
    _DAT_14ca65e18 = 8;
    DAT_14ca65e1c = 0;
    _DAT_14ca65e00 = &LAB_14732c2cc;
    FUN_145e5f540();
    FUN_1407e00cc(&DAT_14ca65db8);
    return;
  }
  return;
}



// FUNCTION 145e5f540 FUN_145e5f540 body=123 status=ok
// SIG undefined FUN_145e5f540(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e5f540(void)

{
  _DAT_14ca68ea0 = L"BASE";
  DAT_14ca68eca = 4;
  _DAT_14ca68ea8 = FUN_140b35ae4();
  _DAT_14ca68eb0 = DAT_14ca65dc8;
  _DAT_14ca68eb8 = &LAB_14682652b;
  DAT_14ca65dc8 = &DAT_14ca68ea0;
  DAT_14ca65e1d = DAT_14ca65e1d + '\x01';
  _DAT_14ca68ec0 = 0x100000000;
  if (*(char *)(_DAT_14ca68ea8 + 100) != '\0') {
    DAT_14ca65e1e = DAT_14ca65e1e + '\x01';
  }
  return;
}



// FUNCTION 145e5f5bc FUN_145e5f5bc body=226 status=ok
// SIG undefined FUN_145e5f5bc(void)

longlong * FUN_145e5f5bc(longlong *param_1)

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
  pcVar13 = FUN_14631227c;
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



// FUNCTION 145e5f6a4 FUN_145e5f6a4 body=138 status=ok
// SIG undefined FUN_145e5f6a4(void)

code * FUN_145e5f6a4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NaniteStats";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<FNaniteStats>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x48000009c4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146312304;
}



// FUNCTION 145e5f72e FUN_145e5f72e body=138 status=ok
// SIG undefined FUN_145e5f72e(void)

code * FUN_145e5f72e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ShowStatsValue";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x50000009c5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e5f6a4;
}



// FUNCTION 145e5f7b8 FUN_145e5f7b8 body=292 status=ok
// SIG undefined FUN_145e5f7b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e5f7b8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca66bc8) {
    FUN_144b3d300(&DAT_14ca66bc8);
    if (DAT_14ca66bc8 == -1) {
      FUN_145e5fa26();
      FUN_145e5f8dc();
      FUN_140db5666(&DAT_14ca66b20,0,&DAT_14ca66ab8,L"FVirtualSmCopyStatsCS",
                    L"/Engine/Private/VirtualShadowMaps/VirtualShadowMapCopyStats.usf",
                    L"CopyStatsCS",5,1,FUN_14732cf12,FUN_14732ceb2,&LAB_14732ce7a,&LAB_14732ce76,
                    &LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca686c8);
      _DAT_14ca66b20 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430e1de7);
      _Init_thread_footer(&DAT_14ca66bc8);
    }
  }
  return &DAT_14ca66b20;
}



// FUNCTION 145e5f8dc FUN_145e5f8dc body=205 status=ok
// SIG undefined FUN_145e5f8dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e5f8dc(void)

{
  if ((DAT_14ca66b1f & 2) == 0) {
    DAT_14ca66b1f = DAT_14ca66b1f | 2;
    _DAT_14ca66ac0 = L"FVirtualSmCopyStatsCS";
    _DAT_14ca66ad8 = FUN_146826540;
    _DAT_14ca66ae0 = FUN_146825d77;
    _DAT_14ca66ae8 = FUN_146825fd6;
    _DAT_14ca66af0 = FUN_1407e02ea;
    _DAT_14ca66af8 = FUN_146826273;
    _DAT_14ca66ad0 = FUN_14732ce48;
    _DAT_14ca66b10 = 0xffffffff000000e0;
    _DAT_14ca66b18 = 8;
    DAT_14ca66b1c = 0;
    _DAT_14ca66b00 = &LAB_14732ce72;
    FUN_145e5f9aa();
    FUN_1407e00cc(&DAT_14ca66ab8);
    return;
  }
  return;
}



// FUNCTION 145e5f9aa FUN_145e5f9aa body=123 status=ok
// SIG undefined FUN_145e5f9aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e5f9aa(void)

{
  _DAT_14ca69080 = L"BASE";
  DAT_14ca690aa = 4;
  _DAT_14ca69088 = FUN_140b35ae4();
  _DAT_14ca69090 = DAT_14ca66ac8;
  _DAT_14ca69098 = &LAB_14682652b;
  DAT_14ca66ac8 = &DAT_14ca69080;
  DAT_14ca66b1d = DAT_14ca66b1d + '\x01';
  _DAT_14ca690a0 = 0x100000000;
  if (*(char *)(_DAT_14ca69088 + 100) != '\0') {
    DAT_14ca66b1e = DAT_14ca66b1e + '\x01';
  }
  return;
}



// FUNCTION 145e5fa26 FUN_145e5fa26 body=261 status=ok
// SIG undefined FUN_145e5fa26(void)

void FUN_145e5fa26(void)

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
              0x110) < DAT_14ca68748) {
    FUN_144b3d300(&DAT_14ca68748);
    if (DAT_14ca68748 == -1) {
      FUN_145e5fb2c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x4ad;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca686c8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430e6c07);
      _Init_thread_footer(&DAT_14ca68748);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e5fb2c FUN_145e5fb2c body=226 status=ok
// SIG undefined FUN_145e5fb2c(void)

longlong * FUN_145e5fb2c(longlong *param_1)

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
  pcVar13 = FUN_146313088;
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



// FUNCTION 145e5fc14 FUN_145e5fc14 body=132 status=ok
// SIG undefined FUN_145e5fc14(void)

undefined1 * FUN_145e5fc14(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InStatsBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4ae;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e5fc10;
}



// FUNCTION 145e5fc98 FUN_145e5fc98 body=138 status=ok
// SIG undefined FUN_145e5fc98(void)

code * FUN_145e5fc98(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NaniteStatsBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<FNaniteStats>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000004af;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e5fc14;
}



// FUNCTION 145e5fd22 FUN_145e5fd22 body=292 status=ok
// SIG undefined FUN_145e5fd22(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e5fd22(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca95948) {
    FUN_144b3d300(&DAT_14ca95948);
    if (DAT_14ca95948 == -1) {
      FUN_145e5ff90();
      FUN_145e5fe46();
      FUN_140db5666(&DAT_14ca958a0,0,&DAT_14ca95838,L"FDrawTexturePS",
                    L"/Engine/Private/Tools/DrawTexture.usf",L"DrawTexturePS",3,1,FUN_14742b9f4,
                    FUN_14742b994,&LAB_14742b990,&LAB_14742b98c,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca95ed0);
      _DAT_14ca958a0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143211d66);
      _Init_thread_footer(&DAT_14ca95948);
    }
  }
  return &DAT_14ca958a0;
}



// FUNCTION 145e5fe46 FUN_145e5fe46 body=205 status=ok
// SIG undefined FUN_145e5fe46(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e5fe46(void)

{
  if ((DAT_14ca9589f & 2) == 0) {
    DAT_14ca9589f = DAT_14ca9589f | 2;
    _DAT_14ca95840 = L"FDrawTexturePS";
    _DAT_14ca95858 = FUN_146826540;
    _DAT_14ca95860 = FUN_146825d77;
    _DAT_14ca95868 = FUN_146825fd6;
    _DAT_14ca95870 = FUN_1407e02ea;
    _DAT_14ca95878 = FUN_146826273;
    _DAT_14ca95850 = FUN_14742b95e;
    _DAT_14ca95890 = 0xffffffff000000e0;
    _DAT_14ca95898 = 8;
    DAT_14ca9589c = 0;
    _DAT_14ca95880 = &LAB_14742b988;
    FUN_145e5ff14();
    FUN_1407e00cc(&DAT_14ca95838);
    return;
  }
  return;
}



// FUNCTION 145e5ff14 FUN_145e5ff14 body=123 status=ok
// SIG undefined FUN_145e5ff14(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e5ff14(void)

{
  _DAT_14ca960f0 = L"BASE";
  DAT_14ca9611a = 4;
  _DAT_14ca960f8 = FUN_140b35ae4();
  _DAT_14ca96100 = DAT_14ca95848;
  _DAT_14ca96108 = &LAB_14682652b;
  DAT_14ca95848 = &DAT_14ca960f0;
  DAT_14ca9589d = DAT_14ca9589d + '\x01';
  _DAT_14ca96110 = 0x100000000;
  if (*(char *)(_DAT_14ca960f8 + 100) != '\0') {
    DAT_14ca9589e = DAT_14ca9589e + '\x01';
  }
  return;
}



// FUNCTION 145e5ff90 FUN_145e5ff90 body=261 status=ok
// SIG undefined FUN_145e5ff90(void)

void FUN_145e5ff90(void)

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
              0x110) < DAT_14ca95f50) {
    FUN_144b3d300(&DAT_14ca95f50);
    if (DAT_14ca95f50 == -1) {
      FUN_145e60096(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x110;
      local_58 = 0xfa;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca95ed0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143214a80);
      _Init_thread_footer(&DAT_14ca95f50);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e60096 FUN_145e60096 body=226 status=ok
// SIG undefined FUN_145e60096(void)

longlong * FUN_145e60096(longlong *param_1)

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
  pcVar13 = FUN_14631f08e;
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



// FUNCTION 145e6017e FUN_145e6017e body=132 status=ok
// SIG undefined FUN_145e6017e(void)

undefined1 * FUN_145e6017e(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xfb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e6017a;
}



// FUNCTION 145e60202 FUN_145e60202 body=138 status=ok
// SIG undefined FUN_145e60202(void)

code * FUN_145e60202(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InputOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000fc;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e6017e;
}



// FUNCTION 145e6028c FUN_145e6028c body=292 status=ok
// SIG undefined FUN_145e6028c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e6028c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa21b0) {
    FUN_144b3d300(&DAT_14caa21b0);
    if (DAT_14caa21b0 == -1) {
      FUN_145e604fa();
      FUN_145e603b0();
      FUN_140db5666(&DAT_14caa2108,0,&DAT_14caa20a0,L"FLandscapePackRGBAChannelsPS",
                    L"/Engine/Private/Landscape/LandscapeMergeTexturesPS.usf",L"PackRGBAChannels",3,
                    1,FUN_147453e1c,FUN_147453dbc,&LAB_147453db8,&LAB_147453db4,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14caa2448);
      _DAT_14caa2108 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143243eb2);
      _Init_thread_footer(&DAT_14caa21b0);
    }
  }
  return &DAT_14caa2108;
}



// FUNCTION 145e603b0 FUN_145e603b0 body=205 status=ok
// SIG undefined FUN_145e603b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e603b0(void)

{
  if ((DAT_14caa2107 & 2) == 0) {
    DAT_14caa2107 = DAT_14caa2107 | 2;
    _DAT_14caa20a8 = L"FLandscapePackRGBAChannelsPS";
    _DAT_14caa20c0 = FUN_146826540;
    _DAT_14caa20c8 = FUN_146825d77;
    _DAT_14caa20d0 = FUN_146825fd6;
    _DAT_14caa20d8 = FUN_1407e02ea;
    _DAT_14caa20e0 = FUN_146826273;
    _DAT_14caa20b8 = FUN_147453d86;
    _DAT_14caa20f8 = 0xffffffff000000e0;
    _DAT_14caa2100 = 8;
    DAT_14caa2104 = 0;
    _DAT_14caa20e8 = &LAB_147453db0;
    FUN_145e6047e();
    FUN_1407e00cc(&DAT_14caa20a0);
    return;
  }
  return;
}



// FUNCTION 145e6047e FUN_145e6047e body=123 status=ok
// SIG undefined FUN_145e6047e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e6047e(void)

{
  _DAT_14caa2530 = L"BASE";
  DAT_14caa255a = 4;
  _DAT_14caa2538 = FUN_140b35ae4();
  _DAT_14caa2540 = DAT_14caa20b0;
  _DAT_14caa2548 = &LAB_14682652b;
  DAT_14caa20b0 = &DAT_14caa2530;
  DAT_14caa2105 = DAT_14caa2105 + '\x01';
  _DAT_14caa2550 = 0x100000000;
  if (*(char *)(_DAT_14caa2538 + 100) != '\0') {
    DAT_14caa2106 = DAT_14caa2106 + '\x01';
  }
  return;
}



// FUNCTION 145e604fa FUN_145e604fa body=261 status=ok
// SIG undefined FUN_145e604fa(void)

void FUN_145e604fa(void)

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
              0x110) < DAT_14caa24c8) {
    FUN_144b3d300(&DAT_14caa24c8);
    if (DAT_14caa24c8 == -1) {
      FUN_145e60600(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x130;
      local_58 = 0xbfe;
      local_48 = local_20;
      FUN_140b49562(&DAT_14caa2448,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143248eea);
      _Init_thread_footer(&DAT_14caa24c8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e60600 FUN_145e60600 body=226 status=ok
// SIG undefined FUN_145e60600(void)

longlong * FUN_145e60600(longlong *param_1)

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
  pcVar13 = FUN_146324790;
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



// FUNCTION 145e606e8 FUN_145e606e8 body=132 status=ok
// SIG undefined FUN_145e606e8(void)

undefined1 * FUN_145e606e8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InNumChannels";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xbff;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e606e4;
}



// FUNCTION 145e6076c FUN_145e6076c body=138 status=ok
// SIG undefined FUN_145e6076c(void)

code * FUN_145e6076c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InSourceTextures";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000c00;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e606e8;
}



// FUNCTION 145e607f6 FUN_145e607f6 body=292 status=ok
// SIG undefined FUN_145e607f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e607f6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa3708) {
    FUN_144b3d300(&DAT_14caa3708);
    if (DAT_14caa3708 == -1) {
      FUN_145e60a64();
      FUN_145e6091a();
      FUN_140db5666(&DAT_14caa3660,0,&DAT_14caa35f8,L"FLandscapeLayersHeightmapsMergeEditLayersPS",
                    L"/Engine/Private/Landscape/LandscapeLayersHeightmapsPS.usf",L"MergeEditLayers",
                    3,1,FUN_14745ec16,FUN_14745ebba,&LAB_146324944,&LAB_14745ebb6,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14caa5010);
      _DAT_14caa3660 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14324e0ac);
      _Init_thread_footer(&DAT_14caa3708);
    }
  }
  return &DAT_14caa3660;
}



// FUNCTION 145e6091a FUN_145e6091a body=205 status=ok
// SIG undefined FUN_145e6091a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e6091a(void)

{
  if ((DAT_14caa365f & 2) == 0) {
    DAT_14caa365f = DAT_14caa365f | 2;
    _DAT_14caa3600 = L"FLandscapeLayersHeightmapsMergeEditLayersPS";
    _DAT_14caa3618 = FUN_146826540;
    _DAT_14caa3620 = FUN_146825d77;
    _DAT_14caa3628 = FUN_146825fd6;
    _DAT_14caa3630 = FUN_1407e02ea;
    _DAT_14caa3638 = FUN_146826273;
    _DAT_14caa3610 = FUN_14745eb88;
    _DAT_14caa3650 = 0xffffffff000000e0;
    _DAT_14caa3658 = 8;
    DAT_14caa365c = 0;
    _DAT_14caa3640 = &LAB_14745ebb2;
    FUN_145e609e8();
    FUN_1407e00cc(&DAT_14caa35f8);
    return;
  }
  return;
}



// FUNCTION 145e609e8 FUN_145e609e8 body=123 status=ok
// SIG undefined FUN_145e609e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e609e8(void)

{
  _DAT_14caa5a18 = L"BASE";
  DAT_14caa5a42 = 4;
  _DAT_14caa5a20 = FUN_140b35ae4();
  _DAT_14caa5a28 = DAT_14caa3608;
  _DAT_14caa5a30 = &LAB_14682652b;
  DAT_14caa3608 = &DAT_14caa5a18;
  DAT_14caa365d = DAT_14caa365d + '\x01';
  _DAT_14caa5a38 = 0x100000000;
  if (*(char *)(_DAT_14caa5a20 + 100) != '\0') {
    DAT_14caa365e = DAT_14caa365e + '\x01';
  }
  return;
}



// FUNCTION 145e60a64 FUN_145e60a64 body=261 status=ok
// SIG undefined FUN_145e60a64(void)

void FUN_145e60a64(void)

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
              0x110) < DAT_14caa5090) {
    FUN_144b3d300(&DAT_14caa5090);
    if (DAT_14caa5090 == -1) {
      FUN_145e60b6a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x120;
      local_58 = 0x55d;
      local_48 = local_20;
      FUN_140b49562(&DAT_14caa5010,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14324e178);
      _Init_thread_footer(&DAT_14caa5090);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e60b6a FUN_145e60b6a body=226 status=ok
// SIG undefined FUN_145e60b6a(void)

longlong * FUN_145e60b6a(longlong *param_1)

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
  pcVar13 = FUN_146324a44;
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



// FUNCTION 145e60c52 FUN_145e60c52 body=132 status=ok
// SIG undefined FUN_145e60c52(void)

undefined1 * FUN_145e60c52(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InNumEditLayers";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x55e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e60c4e;
}



// FUNCTION 145e60cd6 FUN_145e60cd6 body=138 status=ok
// SIG undefined FUN_145e60cd6(void)

code * FUN_145e60cd6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InEditLayersMergeInfos";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<FLandscapeEditLayerHeightmapMergeInfo>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000560;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14745fce6;
}



// FUNCTION 145e60d60 FUN_145e60d60 body=292 status=ok
// SIG undefined FUN_145e60d60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e60d60(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa3958) {
    FUN_144b3d300(&DAT_14caa3958);
    if (DAT_14caa3958 == -1) {
      FUN_145e60fce();
      FUN_145e60e84();
      FUN_140db5666(&DAT_14caa38b0,0,&DAT_14caa3848,L"FLandscapeLayersHeightmapsFinalizeHeightmapPS"
                    ,L"/Engine/Private/Landscape/LandscapeLayersHeightmapsPS.usf",
                    L"FinalizeHeightmap",3,1,FUN_14745ed92,FUN_14745ed36,&LAB_146324954,
                    &LAB_14745ed32,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14caa5120);
      _DAT_14caa38b0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14324e0c4);
      _Init_thread_footer(&DAT_14caa3958);
    }
  }
  return &DAT_14caa38b0;
}



// FUNCTION 145e60e84 FUN_145e60e84 body=205 status=ok
// SIG undefined FUN_145e60e84(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e60e84(void)

{
  if ((DAT_14caa38af & 2) == 0) {
    DAT_14caa38af = DAT_14caa38af | 2;
    _DAT_14caa3850 = L"FLandscapeLayersHeightmapsFinalizeHeightmapPS";
    _DAT_14caa3868 = FUN_146826540;
    _DAT_14caa3870 = FUN_146825d77;
    _DAT_14caa3878 = FUN_146825fd6;
    _DAT_14caa3880 = FUN_1407e02ea;
    _DAT_14caa3888 = FUN_146826273;
    _DAT_14caa3860 = FUN_14745ed04;
    _DAT_14caa38a0 = 0xffffffff000000e0;
    _DAT_14caa38a8 = 8;
    DAT_14caa38ac = 0;
    _DAT_14caa3890 = &LAB_14745ed2e;
    FUN_145e60f52();
    FUN_1407e00cc(&DAT_14caa3848);
    return;
  }
  return;
}



// FUNCTION 145e60f52 FUN_145e60f52 body=123 status=ok
// SIG undefined FUN_145e60f52(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e60f52(void)

{
  _DAT_14caa5a78 = L"BASE";
  DAT_14caa5aa2 = 4;
  _DAT_14caa5a80 = FUN_140b35ae4();
  _DAT_14caa5a88 = DAT_14caa3858;
  _DAT_14caa5a90 = &LAB_14682652b;
  DAT_14caa3858 = &DAT_14caa5a78;
  DAT_14caa38ad = DAT_14caa38ad + '\x01';
  _DAT_14caa5a98 = 0x100000000;
  if (*(char *)(_DAT_14caa5a80 + 100) != '\0') {
    DAT_14caa38ae = DAT_14caa38ae + '\x01';
  }
  return;
}



// FUNCTION 145e60fce FUN_145e60fce body=261 status=ok
// SIG undefined FUN_145e60fce(void)

void FUN_145e60fce(void)

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
              0x110) < DAT_14caa51a0) {
    FUN_144b3d300(&DAT_14caa51a0);
    if (DAT_14caa51a0 == -1) {
      FUN_145e610d4(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x170;
      local_58 = 0x5ae;
      local_48 = local_20;
      FUN_140b49562(&DAT_14caa5120,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14324e190);
      _Init_thread_footer(&DAT_14caa51a0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e610d4 FUN_145e610d4 body=226 status=ok
// SIG undefined FUN_145e610d4(void)

longlong * FUN_145e610d4(longlong *param_1)

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
  pcVar13 = FUN_146324bd6;
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



// FUNCTION 145e611bc FUN_145e611bc body=132 status=ok
// SIG undefined FUN_145e611bc(void)

undefined1 * FUN_145e611bc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InSourceTextureSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5af;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e611b8;
}



// FUNCTION 145e61240 FUN_145e61240 body=138 status=ok
// SIG undefined FUN_145e61240(void)

code * FUN_145e61240(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InNeighborHeightmapIndices";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000005b2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146324c5e;
}



// FUNCTION 145e612ca FUN_145e612ca body=292 status=ok
// SIG undefined FUN_145e612ca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e612ca(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa3a80) {
    FUN_144b3d300(&DAT_14caa3a80);
    if (DAT_14caa3a80 == -1) {
      FUN_145e61538();
      FUN_145e613ee();
      FUN_140db5666(&DAT_14caa39d8,0,&DAT_14caa3970,L"FLandscapeLayersHeightmapsGenerateMipsPS",
                    L"/Engine/Private/Landscape/LandscapeLayersHeightmapsPS.usf",L"GenerateMips",3,1
                    ,FUN_14745ee50,FUN_14745edf4,&LAB_14632495c,&LAB_14745edf0,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14caa51a8);
      _DAT_14caa39d8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14324e0d0);
      _Init_thread_footer(&DAT_14caa3a80);
    }
  }
  return &DAT_14caa39d8;
}



// FUNCTION 145e613ee FUN_145e613ee body=205 status=ok
// SIG undefined FUN_145e613ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e613ee(void)

{
  if ((DAT_14caa39d7 & 2) == 0) {
    DAT_14caa39d7 = DAT_14caa39d7 | 2;
    _DAT_14caa3978 = L"FLandscapeLayersHeightmapsGenerateMipsPS";
    _DAT_14caa3990 = FUN_146826540;
    _DAT_14caa3998 = FUN_146825d77;
    _DAT_14caa39a0 = FUN_146825fd6;
    _DAT_14caa39a8 = FUN_1407e02ea;
    _DAT_14caa39b0 = FUN_146826273;
    _DAT_14caa3988 = FUN_14745edc2;
    _DAT_14caa39c8 = 0xffffffff000000e0;
    _DAT_14caa39d0 = 8;
    DAT_14caa39d4 = 0;
    _DAT_14caa39b8 = &LAB_14745edec;
    FUN_145e614bc();
    FUN_1407e00cc(&DAT_14caa3970);
    return;
  }
  return;
}



// FUNCTION 145e614bc FUN_145e614bc body=123 status=ok
// SIG undefined FUN_145e614bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e614bc(void)

{
  _DAT_14caa5aa8 = L"BASE";
  DAT_14caa5ad2 = 4;
  _DAT_14caa5ab0 = FUN_140b35ae4();
  _DAT_14caa5ab8 = DAT_14caa3980;
  _DAT_14caa5ac0 = &LAB_14682652b;
  DAT_14caa3980 = &DAT_14caa5aa8;
  DAT_14caa39d5 = DAT_14caa39d5 + '\x01';
  _DAT_14caa5ac8 = 0x100000000;
  if (*(char *)(_DAT_14caa5ab0 + 100) != '\0') {
    DAT_14caa39d6 = DAT_14caa39d6 + '\x01';
  }
  return;
}



// FUNCTION 145e61538 FUN_145e61538 body=261 status=ok
// SIG undefined FUN_145e61538(void)

void FUN_145e61538(void)

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
              0x110) < DAT_14caa5228) {
    FUN_144b3d300(&DAT_14caa5228);
    if (DAT_14caa5228 == -1) {
      FUN_145e6163e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x120;
      local_58 = 0x5d9;
      local_48 = local_20;
      FUN_140b49562(&DAT_14caa51a8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14324e19c);
      _Init_thread_footer(&DAT_14caa5228);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e6163e FUN_145e6163e body=226 status=ok
// SIG undefined FUN_145e6163e(void)

longlong * FUN_145e6163e(longlong *param_1)

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
  pcVar13 = FUN_146324ce6;
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



// FUNCTION 145e61726 FUN_145e61726 body=132 status=ok
// SIG undefined FUN_145e61726(void)

undefined1 * FUN_145e61726(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InCurrentMipSubregionSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5da;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e61722;
}



// FUNCTION 145e617aa FUN_145e617aa body=138 status=ok
// SIG undefined FUN_145e617aa(void)

code * FUN_145e617aa(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InNumSubsections";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000005db;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e61726;
}



// FUNCTION 145e61834 FUN_145e61834 body=292 status=ok
// SIG undefined FUN_145e61834(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e61834(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa3df8) {
    FUN_144b3d300(&DAT_14caa3df8);
    if (DAT_14caa3df8 == -1) {
      FUN_145e61aa2();
      FUN_145e61958();
      FUN_140db5666(&DAT_14caa3d50,0,&DAT_14caa3ce8,L"FLandscapeLayersWeightmapsGenerateMipsPS",
                    L"/Engine/Private/Landscape/LandscapeLayersWeightmapsPS.usf",L"GenerateMips",3,1
                    ,FUN_14745f08a,FUN_14745f02e,&LAB_146324974,&LAB_14745f02a,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14caa5340);
      _DAT_14caa3d50 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14324e0f4);
      _Init_thread_footer(&DAT_14caa3df8);
    }
  }
  return &DAT_14caa3d50;
}



// FUNCTION 145e61958 FUN_145e61958 body=205 status=ok
// SIG undefined FUN_145e61958(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e61958(void)

{
  if ((DAT_14caa3d4f & 2) == 0) {
    DAT_14caa3d4f = DAT_14caa3d4f | 2;
    _DAT_14caa3cf0 = L"FLandscapeLayersWeightmapsGenerateMipsPS";
    _DAT_14caa3d08 = FUN_146826540;
    _DAT_14caa3d10 = FUN_146825d77;
    _DAT_14caa3d18 = FUN_146825fd6;
    _DAT_14caa3d20 = FUN_1407e02ea;
    _DAT_14caa3d28 = FUN_146826273;
    _DAT_14caa3d00 = FUN_14745effc;
    _DAT_14caa3d40 = 0xffffffff000000e0;
    _DAT_14caa3d48 = 8;
    DAT_14caa3d4c = 0;
    _DAT_14caa3d30 = &LAB_14745f026;
    FUN_145e61a26();
    FUN_1407e00cc(&DAT_14caa3ce8);
    return;
  }
  return;
}



// FUNCTION 145e61a26 FUN_145e61a26 body=123 status=ok
// SIG undefined FUN_145e61a26(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e61a26(void)

{
  _DAT_14caa5b38 = L"BASE";
  DAT_14caa5b62 = 4;
  _DAT_14caa5b40 = FUN_140b35ae4();
  _DAT_14caa5b48 = DAT_14caa3cf8;
  _DAT_14caa5b50 = &LAB_14682652b;
  DAT_14caa3cf8 = &DAT_14caa5b38;
  DAT_14caa3d4d = DAT_14caa3d4d + '\x01';
  _DAT_14caa5b58 = 0x100000000;
  if (*(char *)(_DAT_14caa5b40 + 100) != '\0') {
    DAT_14caa3d4e = DAT_14caa3d4e + '\x01';
  }
  return;
}



// FUNCTION 145e61aa2 FUN_145e61aa2 body=261 status=ok
// SIG undefined FUN_145e61aa2(void)

void FUN_145e61aa2(void)

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
              0x110) < DAT_14caa53c0) {
    FUN_144b3d300(&DAT_14caa53c0);
    if (DAT_14caa53c0 == -1) {
      FUN_145e61ba8(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x120;
      local_58 = 0x65f;
      local_48 = local_20;
      FUN_140b49562(&DAT_14caa5340,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14324e1c0);
      _Init_thread_footer(&DAT_14caa53c0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e61ba8 FUN_145e61ba8 body=226 status=ok
// SIG undefined FUN_145e61ba8(void)

longlong * FUN_145e61ba8(longlong *param_1)

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
  pcVar13 = FUN_146324f00;
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



// FUNCTION 145e61c90 FUN_145e61c90 body=132 status=ok
// SIG undefined FUN_145e61c90(void)

undefined1 * FUN_145e61c90(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InCurrentMipSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x660;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e61c8c;
}



// FUNCTION 145e61d14 FUN_145e61d14 body=138 status=ok
// SIG undefined FUN_145e61d14(void)

code * FUN_145e61d14(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InSourceWeightmap";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000662;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147460358;
}



// FUNCTION 145e61d9e FUN_145e61d9e body=292 status=ok
// SIG undefined FUN_145e61d9e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e61d9e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa4048) {
    FUN_144b3d300(&DAT_14caa4048);
    if (DAT_14caa4048 == -1) {
      FUN_145e6200c();
      FUN_145e61ec2();
      FUN_140db5666(&DAT_14caa3fa0,0,&DAT_14caa3f38,
                    L"FLandscapeEditLayersHeightmapsGenerateNormalsPS",
                    L"/Engine/Private/Landscape/LandscapeEditLayersHeightmaps.usf",
                    L"GenerateNormalsPS",3,1,FUN_14745f206,FUN_14745f1aa,&LAB_146324984,
                    &LAB_14745f1a6,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14caa5450);
      _DAT_14caa3fa0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14324e10c);
      _Init_thread_footer(&DAT_14caa4048);
    }
  }
  return &DAT_14caa3fa0;
}



// FUNCTION 145e61ec2 FUN_145e61ec2 body=205 status=ok
// SIG undefined FUN_145e61ec2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e61ec2(void)

{
  if ((DAT_14caa3f9f & 2) == 0) {
    DAT_14caa3f9f = DAT_14caa3f9f | 2;
    _DAT_14caa3f40 = L"FLandscapeEditLayersHeightmapsGenerateNormalsPS";
    _DAT_14caa3f58 = FUN_146826540;
    _DAT_14caa3f60 = FUN_146825d77;
    _DAT_14caa3f68 = FUN_146825fd6;
    _DAT_14caa3f70 = FUN_1407e02ea;
    _DAT_14caa3f78 = FUN_146826273;
    _DAT_14caa3f50 = FUN_14745f178;
    _DAT_14caa3f90 = 0xffffffff000000e0;
    _DAT_14caa3f98 = 8;
    DAT_14caa3f9c = 0;
    _DAT_14caa3f80 = &LAB_14745f1a2;
    FUN_145e61f90();
    FUN_1407e00cc(&DAT_14caa3f38);
    return;
  }
  return;
}



// FUNCTION 145e61f90 FUN_145e61f90 body=123 status=ok
// SIG undefined FUN_145e61f90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e61f90(void)

{
  _DAT_14caa5b98 = L"BASE";
  DAT_14caa5bc2 = 4;
  _DAT_14caa5ba0 = FUN_140b35ae4();
  _DAT_14caa5ba8 = DAT_14caa3f48;
  _DAT_14caa5bb0 = &LAB_14682652b;
  DAT_14caa3f48 = &DAT_14caa5b98;
  DAT_14caa3f9d = DAT_14caa3f9d + '\x01';
  _DAT_14caa5bb8 = 0x100000000;
  if (*(char *)(_DAT_14caa5ba0 + 100) != '\0') {
    DAT_14caa3f9e = DAT_14caa3f9e + '\x01';
  }
  return;
}



// FUNCTION 145e6200c FUN_145e6200c body=261 status=ok
// SIG undefined FUN_145e6200c(void)

void FUN_145e6200c(void)

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
              0x110) < DAT_14caa54d0) {
    FUN_144b3d300(&DAT_14caa54d0);
    if (DAT_14caa54d0 == -1) {
      FUN_145e62112(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x140;
      local_58 = 0x6bb;
      local_48 = local_20;
      FUN_140b49562(&DAT_14caa5450,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14324e1d8);
      _Init_thread_footer(&DAT_14caa54d0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e62112 FUN_145e62112 body=226 status=ok
// SIG undefined FUN_145e62112(void)

longlong * FUN_145e62112(longlong *param_1)

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
  pcVar13 = FUN_146325010;
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



// FUNCTION 145e621fa FUN_145e621fa body=132 status=ok
// SIG undefined FUN_145e621fa(void)

undefined1 * FUN_145e621fa(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InTextureSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6bc;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e621f6;
}



// FUNCTION 145e6227e FUN_145e6227e body=138 status=ok
// SIG undefined FUN_145e6227e(void)

code * FUN_145e6227e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InComponentSizeQuads";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c000006be;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14746060e;
}



// FUNCTION 145e62308 FUN_145e62308 body=292 status=ok
// SIG undefined FUN_145e62308(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e62308(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa4170) {
    FUN_144b3d300(&DAT_14caa4170);
    if (DAT_14caa4170 == -1) {
      FUN_145e62576();
      FUN_145e6242c();
      FUN_140db5666(&DAT_14caa40c8,0,&DAT_14caa4060,L"FLandscapeEditLayersHeightmapsGenerateMipsPS",
                    L"/Engine/Private/Landscape/LandscapeEditLayersHeightmaps.usf",L"GenerateMipsPS"
                    ,3,1,FUN_14745f2c4,FUN_14745f268,&LAB_14632498c,&LAB_14745f264,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14caa54d8);
      _DAT_14caa40c8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14324e118);
      _Init_thread_footer(&DAT_14caa4170);
    }
  }
  return &DAT_14caa40c8;
}



// FUNCTION 145e6242c FUN_145e6242c body=205 status=ok
// SIG undefined FUN_145e6242c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e6242c(void)

{
  if ((DAT_14caa40c7 & 2) == 0) {
    DAT_14caa40c7 = DAT_14caa40c7 | 2;
    _DAT_14caa4068 = L"FLandscapeEditLayersHeightmapsGenerateMipsPS";
    _DAT_14caa4080 = FUN_146826540;
    _DAT_14caa4088 = FUN_146825d77;
    _DAT_14caa4090 = FUN_146825fd6;
    _DAT_14caa4098 = FUN_1407e02ea;
    _DAT_14caa40a0 = FUN_146826273;
    _DAT_14caa4078 = FUN_14745f236;
    _DAT_14caa40b8 = 0xffffffff000000e0;
    _DAT_14caa40c0 = 8;
    DAT_14caa40c4 = 0;
    _DAT_14caa40a8 = &LAB_14745f260;
    FUN_145e624fa();
    FUN_1407e00cc(&DAT_14caa4060);
    return;
  }
  return;
}



// FUNCTION 145e624fa FUN_145e624fa body=123 status=ok
// SIG undefined FUN_145e624fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e624fa(void)

{
  _DAT_14caa5bc8 = L"BASE";
  DAT_14caa5bf2 = 4;
  _DAT_14caa5bd0 = FUN_140b35ae4();
  _DAT_14caa5bd8 = DAT_14caa4070;
  _DAT_14caa5be0 = &LAB_14682652b;
  DAT_14caa4070 = &DAT_14caa5bc8;
  DAT_14caa40c5 = DAT_14caa40c5 + '\x01';
  _DAT_14caa5be8 = 0x100000000;
  if (*(char *)(_DAT_14caa5bd0 + 100) != '\0') {
    DAT_14caa40c6 = DAT_14caa40c6 + '\x01';
  }
  return;
}



// FUNCTION 145e62576 FUN_145e62576 body=261 status=ok
// SIG undefined FUN_145e62576(void)

void FUN_145e62576(void)

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
              0x110) < DAT_14caa5558) {
    FUN_144b3d300(&DAT_14caa5558);
    if (DAT_14caa5558 == -1) {
      FUN_145e6267c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x110;
      local_58 = 0x6ed;
      local_48 = local_20;
      FUN_140b49562(&DAT_14caa54d8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14324e1e4);
      _Init_thread_footer(&DAT_14caa5558);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e6267c FUN_145e6267c body=226 status=ok
// SIG undefined FUN_145e6267c(void)

longlong * FUN_145e6267c(longlong *param_1)

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
  pcVar13 = FUN_146325120;
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



// FUNCTION 145e62764 FUN_145e62764 body=132 status=ok
// SIG undefined FUN_145e62764(void)

undefined1 * FUN_145e62764(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InCurrentMipSubsectionSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6ee;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e62760;
}



// FUNCTION 145e627e8 FUN_145e627e8 body=138 status=ok
// SIG undefined FUN_145e627e8(void)

code * FUN_145e627e8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InSourceHeightmap";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000006ef;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e62764;
}



// FUNCTION 145e62872 FUN_145e62872 body=292 status=ok
// SIG undefined FUN_145e62872(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e62872(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa4610) {
    FUN_144b3d300(&DAT_14caa4610);
    if (DAT_14caa4610 == -1) {
      FUN_145e62ae0();
      FUN_145e62996();
      FUN_140db5666(&DAT_14caa4568,0,&DAT_14caa4500,L"FLandscapeEditLayersWeightmapsGenerateMipsPS",
                    L"/Engine/Private/Landscape/LandscapeEditLayersWeightmaps.usf",L"GenerateMipsPS"
                    ,3,1,FUN_14745f5bc,FUN_14745f560,&LAB_1463249ac,&LAB_14745f55c,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14caa56f8);
      _DAT_14caa4568 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14324e148);
      _Init_thread_footer(&DAT_14caa4610);
    }
  }
  return &DAT_14caa4568;
}



// FUNCTION 145e62996 FUN_145e62996 body=205 status=ok
// SIG undefined FUN_145e62996(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e62996(void)

{
  if ((DAT_14caa4567 & 2) == 0) {
    DAT_14caa4567 = DAT_14caa4567 | 2;
    _DAT_14caa4508 = L"FLandscapeEditLayersWeightmapsGenerateMipsPS";
    _DAT_14caa4520 = FUN_146826540;
    _DAT_14caa4528 = FUN_146825d77;
    _DAT_14caa4530 = FUN_146825fd6;
    _DAT_14caa4538 = FUN_1407e02ea;
    _DAT_14caa4540 = FUN_146826273;
    _DAT_14caa4518 = FUN_14745f52e;
    _DAT_14caa4558 = 0xffffffff000000e0;
    _DAT_14caa4560 = 8;
    DAT_14caa4564 = 0;
    _DAT_14caa4548 = &LAB_14745f558;
    FUN_145e62a64();
    FUN_1407e00cc(&DAT_14caa4500);
    return;
  }
  return;
}



// FUNCTION 145e62a64 FUN_145e62a64 body=123 status=ok
// SIG undefined FUN_145e62a64(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e62a64(void)

{
  _DAT_14caa5c88 = L"BASE";
  DAT_14caa5cb2 = 4;
  _DAT_14caa5c90 = FUN_140b35ae4();
  _DAT_14caa5c98 = DAT_14caa4510;
  _DAT_14caa5ca0 = &LAB_14682652b;
  DAT_14caa4510 = &DAT_14caa5c88;
  DAT_14caa4565 = DAT_14caa4565 + '\x01';
  _DAT_14caa5ca8 = 0x100000000;
  if (*(char *)(_DAT_14caa5c90 + 100) != '\0') {
    DAT_14caa4566 = DAT_14caa4566 + '\x01';
  }
  return;
}



// FUNCTION 145e62ae0 FUN_145e62ae0 body=261 status=ok
// SIG undefined FUN_145e62ae0(void)

void FUN_145e62ae0(void)

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
              0x110) < DAT_14caa5778) {
    FUN_144b3d300(&DAT_14caa5778);
    if (DAT_14caa5778 == -1) {
      FUN_145e62be6(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x110;
      local_58 = 0x7aa;
      local_48 = local_20;
      FUN_140b49562(&DAT_14caa56f8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14324e214);
      _Init_thread_footer(&DAT_14caa5778);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e62be6 FUN_145e62be6 body=226 status=ok
// SIG undefined FUN_145e62be6(void)

longlong * FUN_145e62be6(longlong *param_1)

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
  pcVar13 = FUN_1463253c8;
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



// FUNCTION 145e62cce FUN_145e62cce body=132 status=ok
// SIG undefined FUN_145e62cce(void)

undefined1 * FUN_145e62cce(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InCurrentMipSubsectionSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7ab;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e62cca;
}



// FUNCTION 145e62d52 FUN_145e62d52 body=138 status=ok
// SIG undefined FUN_145e62d52(void)

code * FUN_145e62d52(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InSourceWeightmap";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000007ac;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e62cce;
}



// FUNCTION 145e62ddc FUN_145e62ddc body=292 status=ok
// SIG undefined FUN_145e62ddc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e62ddc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cafab08) {
    FUN_144b3d300(&DAT_14cafab08);
    if (DAT_14cafab08 == -1) {
      FUN_145e6304a();
      FUN_145e62f00();
      FUN_140db5666(&DAT_14cafaa60,0,&DAT_14cafa9f8,L"FCopyResidentBrickSHCoefficientsCS",
                    L"/Engine/Private/VolumetricLightmapStreaming.usf",
                    L"CopyResidentBrickSHCoefficientsCS",5,1,FUN_147cafa6e,FUN_147cafa0e,
                    &LAB_147caf9f0,&LAB_147caf9ec,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14cafdd08)
      ;
      _DAT_14cafaa60 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14365746e);
      _Init_thread_footer(&DAT_14cafab08);
    }
  }
  return &DAT_14cafaa60;
}



// FUNCTION 145e62f00 FUN_145e62f00 body=205 status=ok
// SIG undefined FUN_145e62f00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e62f00(void)

{
  if ((DAT_14cafaa5f & 2) == 0) {
    DAT_14cafaa5f = DAT_14cafaa5f | 2;
    _DAT_14cafaa00 = L"FCopyResidentBrickSHCoefficientsCS";
    _DAT_14cafaa18 = FUN_146826540;
    _DAT_14cafaa20 = FUN_146825d77;
    _DAT_14cafaa28 = FUN_146825fd6;
    _DAT_14cafaa30 = FUN_1407e02ea;
    _DAT_14cafaa38 = FUN_146826273;
    _DAT_14cafaa10 = FUN_147caf9be;
    _DAT_14cafaa50 = 0xffffffff000000e0;
    _DAT_14cafaa58 = 8;
    DAT_14cafaa5c = 0;
    _DAT_14cafaa40 = &LAB_147caf9e8;
    FUN_145e62fce();
    FUN_1407e00cc(&DAT_14cafa9f8);
    return;
  }
  return;
}



// FUNCTION 145e62fce FUN_145e62fce body=123 status=ok
// SIG undefined FUN_145e62fce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e62fce(void)

{
  _DAT_14cafe120 = L"BASE";
  DAT_14cafe14a = 4;
  _DAT_14cafe128 = FUN_140b35ae4();
  _DAT_14cafe130 = DAT_14cafaa08;
  _DAT_14cafe138 = &LAB_14682652b;
  DAT_14cafaa08 = &DAT_14cafe120;
  DAT_14cafaa5d = DAT_14cafaa5d + '\x01';
  _DAT_14cafe140 = 0x100000000;
  if (*(char *)(_DAT_14cafe128 + 100) != '\0') {
    DAT_14cafaa5e = DAT_14cafaa5e + '\x01';
  }
  return;
}



// FUNCTION 145e6304a FUN_145e6304a body=261 status=ok
// SIG undefined FUN_145e6304a(void)

void FUN_145e6304a(void)

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
              0x110) < DAT_14cafdd88) {
    FUN_144b3d300(&DAT_14cafdd88);
    if (DAT_14cafdd88 == -1) {
      FUN_145e63150(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x1ca;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cafdd08,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14365f986);
      _Init_thread_footer(&DAT_14cafdd88);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e63150 FUN_145e63150 body=226 status=ok
// SIG undefined FUN_145e63150(void)

longlong * FUN_145e63150(longlong *param_1)

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
  pcVar13 = FUN_1463fbd44;
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



// FUNCTION 145e63238 FUN_145e63238 body=132 status=ok
// SIG undefined FUN_145e63238(void)

undefined1 * FUN_145e63238(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"StartPosInOldVolume";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1cb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e63234;
}



// FUNCTION 145e632bc FUN_145e632bc body=138 status=ok
// SIG undefined FUN_145e632bc(void)

code * FUN_145e632bc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SHCoefficients";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture3D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000001cd;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cbf2fc;
}



// FUNCTION 145e63346 FUN_145e63346 body=292 status=ok
// SIG undefined FUN_145e63346(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e63346(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cafac30) {
    FUN_144b3d300(&DAT_14cafac30);
    if (DAT_14cafac30 == -1) {
      FUN_145e635b4();
      FUN_145e6346a();
      FUN_140db5666(&DAT_14cafab88,0,&DAT_14cafab20,L"FPatchIndirectionTextureCS",
                    L"/Engine/Private/VolumetricLightmapStreaming.usf",L"PatchIndirectionTextureCS",
                    5,1,FUN_147cafb52,FUN_147cafaf2,&LAB_147cafad4,&LAB_147cafad0,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cafdd90);
      _DAT_14cafab88 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14365747a);
      _Init_thread_footer(&DAT_14cafac30);
    }
  }
  return &DAT_14cafab88;
}



// FUNCTION 145e6346a FUN_145e6346a body=205 status=ok
// SIG undefined FUN_145e6346a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e6346a(void)

{
  if ((DAT_14cafab87 & 2) == 0) {
    DAT_14cafab87 = DAT_14cafab87 | 2;
    _DAT_14cafab28 = L"FPatchIndirectionTextureCS";
    _DAT_14cafab40 = FUN_146826540;
    _DAT_14cafab48 = FUN_146825d77;
    _DAT_14cafab50 = FUN_146825fd6;
    _DAT_14cafab58 = FUN_1407e02ea;
    _DAT_14cafab60 = FUN_146826273;
    _DAT_14cafab38 = FUN_147cafaa2;
    _DAT_14cafab78 = 0xffffffff000000e0;
    _DAT_14cafab80 = 8;
    DAT_14cafab84 = 0;
    _DAT_14cafab68 = &LAB_147cafacc;
    FUN_145e63538();
    FUN_1407e00cc(&DAT_14cafab20);
    return;
  }
  return;
}



// FUNCTION 145e63538 FUN_145e63538 body=123 status=ok
// SIG undefined FUN_145e63538(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e63538(void)

{
  _DAT_14cafe150 = L"BASE";
  DAT_14cafe17a = 4;
  _DAT_14cafe158 = FUN_140b35ae4();
  _DAT_14cafe160 = DAT_14cafab30;
  _DAT_14cafe168 = &LAB_14682652b;
  DAT_14cafab30 = &DAT_14cafe150;
  DAT_14cafab85 = DAT_14cafab85 + '\x01';
  _DAT_14cafe170 = 0x100000000;
  if (*(char *)(_DAT_14cafe158 + 100) != '\0') {
    DAT_14cafab86 = DAT_14cafab86 + '\x01';
  }
  return;
}



// FUNCTION 145e635b4 FUN_145e635b4 body=261 status=ok
// SIG undefined FUN_145e635b4(void)

void FUN_145e635b4(void)

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
              0x110) < DAT_14cafde10) {
    FUN_144b3d300(&DAT_14cafde10);
    if (DAT_14cafde10 == -1) {
      FUN_145e636ba(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x1d9;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cafdd90,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14365f992);
      _Init_thread_footer(&DAT_14cafde10);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e636ba FUN_145e636ba body=226 status=ok
// SIG undefined FUN_145e636ba(void)

longlong * FUN_145e636ba(longlong *param_1)

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
  pcVar13 = FUN_1463fbdcc;
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



// FUNCTION 145e637a2 FUN_145e637a2 body=132 status=ok
// SIG undefined FUN_145e637a2(void)

undefined1 * FUN_145e637a2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumBricks";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1da;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e6379e;
}



// FUNCTION 145e63826 FUN_145e63826 body=138 status=ok
// SIG undefined FUN_145e63826(void)

code * FUN_145e63826(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SubLevelBrickPositions";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000001dc;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cbf386;
}



// FUNCTION 145e638b0 FUN_145e638b0 body=292 status=ok
// SIG undefined FUN_145e638b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e638b0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caffbe8) {
    FUN_144b3d300(&DAT_14caffbe8);
    if (DAT_14caffbe8 == -1) {
      FUN_145e63b1e();
      FUN_145e639d4();
      FUN_140db5666(&DAT_14caffb40,0,&DAT_14caffad8,L"FMemcpy_CS",
                    L"/Engine/Private/Nanite/NaniteStreaming.usf",L"Memcpy",5,1,FUN_147ccc992,
                    FUN_147ccc932,&LAB_1463fc746,&LAB_147ccc92e,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14cb00048);
      _DAT_14caffb40 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14366cd25);
      _Init_thread_footer(&DAT_14caffbe8);
    }
  }
  return &DAT_14caffb40;
}



// FUNCTION 145e639d4 FUN_145e639d4 body=205 status=ok
// SIG undefined FUN_145e639d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e639d4(void)

{
  if ((DAT_14caffb3f & 2) == 0) {
    DAT_14caffb3f = DAT_14caffb3f | 2;
    _DAT_14caffae0 = L"FMemcpy_CS";
    _DAT_14caffaf8 = FUN_146826540;
    _DAT_14caffb00 = FUN_146825d77;
    _DAT_14caffb08 = FUN_146825fd6;
    _DAT_14caffb10 = FUN_1407e02ea;
    _DAT_14caffb18 = FUN_146826273;
    _DAT_14caffaf0 = FUN_147ccc900;
    _DAT_14caffb30 = 0xffffffff000000e0;
    _DAT_14caffb38 = 8;
    DAT_14caffb3c = 0;
    _DAT_14caffb20 = &LAB_147ccc92a;
    FUN_145e63aa2();
    FUN_1407e00cc(&DAT_14caffad8);
    return;
  }
  return;
}



// FUNCTION 145e63aa2 FUN_145e63aa2 body=123 status=ok
// SIG undefined FUN_145e63aa2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e63aa2(void)

{
  _DAT_14cb002c8 = L"BASE";
  DAT_14cb002f2 = 4;
  _DAT_14cb002d0 = FUN_140b35ae4();
  _DAT_14cb002d8 = DAT_14caffae8;
  _DAT_14cb002e0 = &LAB_14682652b;
  DAT_14caffae8 = &DAT_14cb002c8;
  DAT_14caffb3d = DAT_14caffb3d + '\x01';
  _DAT_14cb002e8 = 0x100000000;
  if (*(char *)(_DAT_14cb002d0 + 100) != '\0') {
    DAT_14caffb3e = DAT_14caffb3e + '\x01';
  }
  return;
}



// FUNCTION 145e63b1e FUN_145e63b1e body=261 status=ok
// SIG undefined FUN_145e63b1e(void)

void FUN_145e63b1e(void)

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
              0x110) < DAT_14cb000c8) {
    FUN_144b3d300(&DAT_14cb000c8);
    if (DAT_14cb000c8 == -1) {
      FUN_145e63c24(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x1c8;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb00048,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1436798c6);
      _Init_thread_footer(&DAT_14cb000c8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e63c24 FUN_145e63c24 body=226 status=ok
// SIG undefined FUN_145e63c24(void)

longlong * FUN_145e63c24(longlong *param_1)

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
  pcVar13 = FUN_1463fcb26;
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



// FUNCTION 145e63d0c FUN_145e63d0c body=132 status=ok
// SIG undefined FUN_145e63d0c(void)

undefined1 * FUN_145e63d0c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SrcOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e63d08;
}



// FUNCTION 145e63d90 FUN_145e63d90 body=138 status=ok
// SIG undefined FUN_145e63d90(void)

code * FUN_145e63d90(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DstOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000001ca;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e63d0c;
}



// FUNCTION 145e63e1a FUN_145e63e1a body=292 status=ok
// SIG undefined FUN_145e63e1a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e63e1a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caffd10) {
    FUN_144b3d300(&DAT_14caffd10);
    if (DAT_14caffd10 == -1) {
      FUN_145e64088();
      FUN_145e63f3e();
      FUN_140db5666(&DAT_14caffc68,0,&DAT_14caffc00,L"FRelocateHierarchy_CS",
                    L"/Engine/Private/Nanite/NaniteStreaming.usf",L"RelocateHierarchy",5,1,
                    FUN_147ccca58,FUN_147ccc9f8,&LAB_1463fc750,&LAB_147ccc9f4,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cb000d0);
      _DAT_14caffc68 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14366cd31);
      _Init_thread_footer(&DAT_14caffd10);
    }
  }
  return &DAT_14caffc68;
}



// FUNCTION 145e63f3e FUN_145e63f3e body=205 status=ok
// SIG undefined FUN_145e63f3e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e63f3e(void)

{
  if ((DAT_14caffc67 & 2) == 0) {
    DAT_14caffc67 = DAT_14caffc67 | 2;
    _DAT_14caffc08 = L"FRelocateHierarchy_CS";
    _DAT_14caffc20 = FUN_146826540;
    _DAT_14caffc28 = FUN_146825d77;
    _DAT_14caffc30 = FUN_146825fd6;
    _DAT_14caffc38 = FUN_1407e02ea;
    _DAT_14caffc40 = FUN_146826273;
    _DAT_14caffc18 = FUN_147ccc9c6;
    _DAT_14caffc58 = 0xffffffff000000e0;
    _DAT_14caffc60 = 8;
    DAT_14caffc64 = 0;
    _DAT_14caffc48 = &LAB_147ccc9f0;
    FUN_145e6400c();
    FUN_1407e00cc(&DAT_14caffc00);
    return;
  }
  return;
}



// FUNCTION 145e6400c FUN_145e6400c body=123 status=ok
// SIG undefined FUN_145e6400c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e6400c(void)

{
  _DAT_14cb002f8 = L"BASE";
  DAT_14cb00322 = 4;
  _DAT_14cb00300 = FUN_140b35ae4();
  _DAT_14cb00308 = DAT_14caffc10;
  _DAT_14cb00310 = &LAB_14682652b;
  DAT_14caffc10 = &DAT_14cb002f8;
  DAT_14caffc65 = DAT_14caffc65 + '\x01';
  _DAT_14cb00318 = 0x100000000;
  if (*(char *)(_DAT_14cb00300 + 100) != '\0') {
    DAT_14caffc66 = DAT_14caffc66 + '\x01';
  }
  return;
}



// FUNCTION 145e64088 FUN_145e64088 body=261 status=ok
// SIG undefined FUN_145e64088(void)

void FUN_145e64088(void)

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
              0x110) < DAT_14cb00150) {
    FUN_144b3d300(&DAT_14cb00150);
    if (DAT_14cb00150 == -1) {
      FUN_145e6418e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x1db;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb000d0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1436798d2);
      _Init_thread_footer(&DAT_14cb00150);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e6418e FUN_145e6418e body=226 status=ok
// SIG undefined FUN_145e6418e(void)

longlong * FUN_145e6418e(longlong *param_1)

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
  pcVar13 = FUN_1463fcbae;
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



// FUNCTION 145e64276 FUN_145e64276 body=132 status=ok
// SIG undefined FUN_145e64276(void)

undefined1 * FUN_145e64276(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OldRootPageStart";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1dc;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e64272;
}



// FUNCTION 145e642fa FUN_145e642fa body=138 status=ok
// SIG undefined FUN_145e642fa(void)

code * FUN_145e642fa(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumThreads";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000001de;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147ccf78a;
}



// FUNCTION 145e64384 FUN_145e64384 body=292 status=ok
// SIG undefined FUN_145e64384(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e64384(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb2d600) {
    FUN_144b3d300(&DAT_14cb2d600);
    if (DAT_14cb2d600 == -1) {
      FUN_145e645f2();
      FUN_145e644a8();
      FUN_140db5666(&DAT_14cb2d558,0,&DAT_14cb2d4f0,L"FNiagaraClearAsyncGpuTraceCS",
                    L"/Plugin/FX/Niagara/Private/NiagaraAsyncGpuTraceUtils.usf",
                    L"NiagaraClearAsyncGpuTraceCS",5,1,FUN_14804b222,FUN_14804b1c2,&LAB_14804b1be,
                    &LAB_14804b1ba,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14cb331b0);
      _DAT_14cb2d558 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1438f79dc);
      _Init_thread_footer(&DAT_14cb2d600);
    }
  }
  return &DAT_14cb2d558;
}



// FUNCTION 145e644a8 FUN_145e644a8 body=205 status=ok
// SIG undefined FUN_145e644a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e644a8(void)

{
  if ((DAT_14cb2d557 & 2) == 0) {
    DAT_14cb2d557 = DAT_14cb2d557 | 2;
    _DAT_14cb2d4f8 = L"FNiagaraClearAsyncGpuTraceCS";
    _DAT_14cb2d510 = FUN_146826540;
    _DAT_14cb2d518 = FUN_146825d77;
    _DAT_14cb2d520 = FUN_146825fd6;
    _DAT_14cb2d528 = FUN_1407e02ea;
    _DAT_14cb2d530 = FUN_146826273;
    _DAT_14cb2d508 = FUN_14804b18c;
    _DAT_14cb2d548 = 0xffffffff000000e0;
    _DAT_14cb2d550 = 8;
    DAT_14cb2d554 = 0;
    _DAT_14cb2d538 = &LAB_14804b1b6;
    FUN_145e64576();
    FUN_1407e00cc(&DAT_14cb2d4f0);
    return;
  }
  return;
}



// FUNCTION 145e64576 FUN_145e64576 body=123 status=ok
// SIG undefined FUN_145e64576(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e64576(void)

{
  _DAT_14cb35210 = L"BASE";
  DAT_14cb3523a = 4;
  _DAT_14cb35218 = FUN_140b35ae4();
  _DAT_14cb35220 = DAT_14cb2d500;
  _DAT_14cb35228 = &LAB_14682652b;
  DAT_14cb2d500 = &DAT_14cb35210;
  DAT_14cb2d555 = DAT_14cb2d555 + '\x01';
  _DAT_14cb35230 = 0x100000000;
  if (*(char *)(_DAT_14cb35218 + 100) != '\0') {
    DAT_14cb2d556 = DAT_14cb2d556 + '\x01';
  }
  return;
}



// FUNCTION 145e645f2 FUN_145e645f2 body=261 status=ok
// SIG undefined FUN_145e645f2(void)

void FUN_145e645f2(void)

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
              0x110) < DAT_14cb33230) {
    FUN_144b3d300(&DAT_14cb33230);
    if (DAT_14cb33230 == -1) {
      FUN_145e646f8(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x22;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb331b0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1438fb658);
      _Init_thread_footer(&DAT_14cb33230);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e646f8 FUN_145e646f8 body=226 status=ok
// SIG undefined FUN_145e646f8(void)

longlong * FUN_145e646f8(longlong *param_1)

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
  pcVar13 = FUN_146460d5c;
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



// FUNCTION 145e647e0 FUN_145e647e0 body=132 status=ok
// SIG undefined FUN_145e647e0(void)

undefined1 * FUN_145e647e0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Results";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<FNiagaraAsyncGpuTraceResult>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x23;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 7;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e647dc;
}



// FUNCTION 145e64864 FUN_145e64864 body=138 status=ok
// SIG undefined FUN_145e64864(void)

code * FUN_145e64864(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TraceCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000024;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e647e0;
}



// FUNCTION 145e648ee FUN_145e648ee body=292 status=ok
// SIG undefined FUN_145e648ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e648ee(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb2e098) {
    FUN_144b3d300(&DAT_14cb2e098);
    if (DAT_14cb2e098 == -1) {
      FUN_145e64b5c();
      FUN_145e64a12();
      FUN_140db5666(&DAT_14cb2dff0,0,&DAT_14cb2df88,L"FNiagaraSimpleElementPS",
                    L"/Plugin/FX/Niagara/Private/NiagaraBatchedElements.usf",L"MainPS",3,1,
                    FUN_14804c896,FUN_14804c836,&LAB_14804c832,&LAB_14804c82e,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cb334e0);
      _DAT_14cb2dff0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1438f8e12);
      _Init_thread_footer(&DAT_14cb2e098);
    }
  }
  return &DAT_14cb2dff0;
}



// FUNCTION 145e64a12 FUN_145e64a12 body=205 status=ok
// SIG undefined FUN_145e64a12(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e64a12(void)

{
  if ((DAT_14cb2dfef & 2) == 0) {
    DAT_14cb2dfef = DAT_14cb2dfef | 2;
    _DAT_14cb2df90 = L"FNiagaraSimpleElementPS";
    _DAT_14cb2dfa8 = FUN_146826540;
    _DAT_14cb2dfb0 = FUN_146825d77;
    _DAT_14cb2dfb8 = FUN_146825fd6;
    _DAT_14cb2dfc0 = FUN_1407e02ea;
    _DAT_14cb2dfc8 = FUN_146826273;
    _DAT_14cb2dfa0 = FUN_14804c800;
    _DAT_14cb2dfe0 = 0xffffffff000000e0;
    _DAT_14cb2dfe8 = 8;
    DAT_14cb2dfec = 0;
    _DAT_14cb2dfd0 = &LAB_14804c82a;
    FUN_145e64ae0();
    FUN_1407e00cc(&DAT_14cb2df88);
    return;
  }
  return;
}



// FUNCTION 145e64ae0 FUN_145e64ae0 body=123 status=ok
// SIG undefined FUN_145e64ae0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e64ae0(void)

{
  _DAT_14cb353c0 = L"BASE";
  DAT_14cb353ea = 4;
  _DAT_14cb353c8 = FUN_140b35ae4();
  _DAT_14cb353d0 = DAT_14cb2df98;
  _DAT_14cb353d8 = &LAB_14682652b;
  DAT_14cb2df98 = &DAT_14cb353c0;
  DAT_14cb2dfed = DAT_14cb2dfed + '\x01';
  _DAT_14cb353e0 = 0x100000000;
  if (*(char *)(_DAT_14cb353c8 + 100) != '\0') {
    DAT_14cb2dfee = DAT_14cb2dfee + '\x01';
  }
  return;
}



// FUNCTION 145e64b5c FUN_145e64b5c body=261 status=ok
// SIG undefined FUN_145e64b5c(void)

void FUN_145e64b5c(void)

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
              0x110) < DAT_14cb33560) {
    FUN_144b3d300(&DAT_14cb33560);
    if (DAT_14cb33560 == -1) {
      FUN_145e64c62(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x60;
      local_58 = 0xb1;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb334e0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1438fb6a0);
      _Init_thread_footer(&DAT_14cb33560);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e64c62 FUN_145e64c62 body=226 status=ok
// SIG undefined FUN_145e64c62(void)

longlong * FUN_145e64c62(longlong *param_1)

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
  pcVar13 = FUN_1464612b4;
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



// FUNCTION 145e64d4a FUN_145e64d4a body=132 status=ok
// SIG undefined FUN_145e64d4a(void)

undefined1 * FUN_145e64d4a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InColorWeights";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e64d46;
}



// FUNCTION 145e64dce FUN_145e64dce body=138 status=ok
// SIG undefined FUN_145e64dce(void)

code * FUN_145e64dce(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InGamma";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000000b3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e64d4a;
}



// FUNCTION 145e64e58 FUN_145e64e58 body=292 status=ok
// SIG undefined FUN_145e64e58(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e64e58(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb2e1c0) {
    FUN_144b3d300(&DAT_14cb2e1c0);
    if (DAT_14cb2e1c0 == -1) {
      FUN_145e650c6();
      FUN_145e64f7c();
      FUN_140db5666(&DAT_14cb2e118,0,&DAT_14cb2e0b0,L"FNiagaraClearCountsIntCS",
                    L"/Plugin/FX/Niagara/Private/NiagaraClearCounts.usf",L"ClearCountsIntCS",5,1,
                    FUN_14804c960,FUN_14804c900,&LAB_14804c8fc,&LAB_14804c8f8,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cb33568);
      _DAT_14cb2e118 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1438f8e1e);
      _Init_thread_footer(&DAT_14cb2e1c0);
    }
  }
  return &DAT_14cb2e118;
}



// FUNCTION 145e64f7c FUN_145e64f7c body=205 status=ok
// SIG undefined FUN_145e64f7c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e64f7c(void)

{
  if ((DAT_14cb2e117 & 2) == 0) {
    DAT_14cb2e117 = DAT_14cb2e117 | 2;
    _DAT_14cb2e0b8 = L"FNiagaraClearCountsIntCS";
    _DAT_14cb2e0d0 = FUN_146826540;
    _DAT_14cb2e0d8 = FUN_146825d77;
    _DAT_14cb2e0e0 = FUN_146825fd6;
    _DAT_14cb2e0e8 = FUN_1407e02ea;
    _DAT_14cb2e0f0 = FUN_146826273;
    _DAT_14cb2e0c8 = FUN_14804c8ca;
    _DAT_14cb2e108 = 0xffffffff000000e0;
    _DAT_14cb2e110 = 8;
    DAT_14cb2e114 = 0;
    _DAT_14cb2e0f8 = &LAB_14804c8f4;
    FUN_145e6504a();
    FUN_1407e00cc(&DAT_14cb2e0b0);
    return;
  }
  return;
}



// FUNCTION 145e6504a FUN_145e6504a body=123 status=ok
// SIG undefined FUN_145e6504a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e6504a(void)

{
  _DAT_14cb353f0 = L"BASE";
  DAT_14cb3541a = 4;
  _DAT_14cb353f8 = FUN_140b35ae4();
  _DAT_14cb35400 = DAT_14cb2e0c0;
  _DAT_14cb35408 = &LAB_14682652b;
  DAT_14cb2e0c0 = &DAT_14cb353f0;
  DAT_14cb2e115 = DAT_14cb2e115 + '\x01';
  _DAT_14cb35410 = 0x100000000;
  if (*(char *)(_DAT_14cb353f8 + 100) != '\0') {
    DAT_14cb2e116 = DAT_14cb2e116 + '\x01';
  }
  return;
}



// FUNCTION 145e650c6 FUN_145e650c6 body=261 status=ok
// SIG undefined FUN_145e650c6(void)

void FUN_145e650c6(void)

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
              0x110) < DAT_14cb335e8) {
    FUN_144b3d300(&DAT_14cb335e8);
    if (DAT_14cb335e8 == -1) {
      FUN_145e651cc(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x1b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb33568,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1438fb6ac);
      _Init_thread_footer(&DAT_14cb335e8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e651cc FUN_145e651cc body=226 status=ok
// SIG undefined FUN_145e651cc(void)

longlong * FUN_145e651cc(longlong *param_1)

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
  pcVar13 = FUN_14646133c;
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



// FUNCTION 145e652b4 FUN_145e652b4 body=132 status=ok
// SIG undefined FUN_145e652b4(void)

undefined1 * FUN_145e652b4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CountBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<int>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e652b0;
}



// FUNCTION 145e65338 FUN_145e65338 body=138 status=ok
// SIG undefined FUN_145e65338(void)

code * FUN_145e65338(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CountsAndValuesBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<int>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000001d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e652b4;
}



// FUNCTION 145e653c2 FUN_145e653c2 body=292 status=ok
// SIG undefined FUN_145e653c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e653c2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb2e2e8) {
    FUN_144b3d300(&DAT_14cb2e2e8);
    if (DAT_14cb2e2e8 == -1) {
      FUN_145e65630();
      FUN_145e654e6();
      FUN_140db5666(&DAT_14cb2e240,0,&DAT_14cb2e1d8,L"FNiagaraClearCountsUIntCS",
                    L"/Plugin/FX/Niagara/Private/NiagaraClearCounts.usf",L"ClearCountsUIntCS",5,1,
                    FUN_14804ca2a,FUN_14804c9ca,&LAB_14804c9c6,&LAB_14804c9c2,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cb335f0);
      _DAT_14cb2e240 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1438f8e2a);
      _Init_thread_footer(&DAT_14cb2e2e8);
    }
  }
  return &DAT_14cb2e240;
}



// FUNCTION 145e654e6 FUN_145e654e6 body=205 status=ok
// SIG undefined FUN_145e654e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e654e6(void)

{
  if ((DAT_14cb2e23f & 2) == 0) {
    DAT_14cb2e23f = DAT_14cb2e23f | 2;
    _DAT_14cb2e1e0 = L"FNiagaraClearCountsUIntCS";
    _DAT_14cb2e1f8 = FUN_146826540;
    _DAT_14cb2e200 = FUN_146825d77;
    _DAT_14cb2e208 = FUN_146825fd6;
    _DAT_14cb2e210 = FUN_1407e02ea;
    _DAT_14cb2e218 = FUN_146826273;
    _DAT_14cb2e1f0 = FUN_14804c994;
    _DAT_14cb2e230 = 0xffffffff000000e0;
    _DAT_14cb2e238 = 8;
    DAT_14cb2e23c = 0;
    _DAT_14cb2e220 = &LAB_14804c9be;
    FUN_145e655b4();
    FUN_1407e00cc(&DAT_14cb2e1d8);
    return;
  }
  return;
}



// FUNCTION 145e655b4 FUN_145e655b4 body=123 status=ok
// SIG undefined FUN_145e655b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e655b4(void)

{
  _DAT_14cb35420 = L"BASE";
  DAT_14cb3544a = 4;
  _DAT_14cb35428 = FUN_140b35ae4();
  _DAT_14cb35430 = DAT_14cb2e1e8;
  _DAT_14cb35438 = &LAB_14682652b;
  DAT_14cb2e1e8 = &DAT_14cb35420;
  DAT_14cb2e23d = DAT_14cb2e23d + '\x01';
  _DAT_14cb35440 = 0x100000000;
  if (*(char *)(_DAT_14cb35428 + 100) != '\0') {
    DAT_14cb2e23e = DAT_14cb2e23e + '\x01';
  }
  return;
}



// FUNCTION 145e65630 FUN_145e65630 body=261 status=ok
// SIG undefined FUN_145e65630(void)

void FUN_145e65630(void)

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
              0x110) < DAT_14cb33670) {
    FUN_144b3d300(&DAT_14cb33670);
    if (DAT_14cb33670 == -1) {
      FUN_145e65736(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x30;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb335f0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1438fb6b8);
      _Init_thread_footer(&DAT_14cb33670);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e65736 FUN_145e65736 body=226 status=ok
// SIG undefined FUN_145e65736(void)

longlong * FUN_145e65736(longlong *param_1)

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
  pcVar13 = FUN_1464613c4;
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



// FUNCTION 145e6581e FUN_145e6581e body=132 status=ok
// SIG undefined FUN_145e6581e(void)

undefined1 * FUN_145e6581e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CountBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x31;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e6581a;
}



// FUNCTION 145e658a2 FUN_145e658a2 body=138 status=ok
// SIG undefined FUN_145e658a2(void)

code * FUN_145e658a2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CountsAndValuesBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000032;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e6581e;
}



// FUNCTION 145e6592c FUN_145e6592c body=292 status=ok
// SIG undefined FUN_145e6592c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e6592c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb2e410) {
    FUN_144b3d300(&DAT_14cb2e410);
    if (DAT_14cb2e410 == -1) {
      FUN_145e65b9a();
      FUN_145e65a50();
      FUN_140db5666(&DAT_14cb2e368,0,&DAT_14cb2e300,L"FNiagaraClearCountsIntCS_Legacy",
                    L"/Plugin/FX/Niagara/Private/NiagaraClearCounts.usf",L"ClearCountsIntCS",5,1,
                    FUN_14804caf4,FUN_14804ca94,&LAB_14804ca90,&LAB_14804ca8c,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cb33678);
      _DAT_14cb2e368 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1438f8e36);
      _Init_thread_footer(&DAT_14cb2e410);
    }
  }
  return &DAT_14cb2e368;
}



// FUNCTION 145e65a50 FUN_145e65a50 body=205 status=ok
// SIG undefined FUN_145e65a50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e65a50(void)

{
  if ((DAT_14cb2e367 & 2) == 0) {
    DAT_14cb2e367 = DAT_14cb2e367 | 2;
    _DAT_14cb2e308 = L"FNiagaraClearCountsIntCS_Legacy";
    _DAT_14cb2e320 = FUN_146826540;
    _DAT_14cb2e328 = FUN_146825d77;
    _DAT_14cb2e330 = FUN_146825fd6;
    _DAT_14cb2e338 = FUN_1407e02ea;
    _DAT_14cb2e340 = FUN_146826273;
    _DAT_14cb2e318 = FUN_14804ca5e;
    _DAT_14cb2e358 = 0xffffffff000000e0;
    _DAT_14cb2e360 = 8;
    DAT_14cb2e364 = 0;
    _DAT_14cb2e348 = &LAB_14804ca88;
    FUN_145e65b1e();
    FUN_1407e00cc(&DAT_14cb2e300);
    return;
  }
  return;
}



// FUNCTION 145e65b1e FUN_145e65b1e body=123 status=ok
// SIG undefined FUN_145e65b1e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e65b1e(void)

{
  _DAT_14cb35450 = L"BASE";
  DAT_14cb3547a = 4;
  _DAT_14cb35458 = FUN_140b35ae4();
  _DAT_14cb35460 = DAT_14cb2e310;
  _DAT_14cb35468 = &LAB_14682652b;
  DAT_14cb2e310 = &DAT_14cb35450;
  DAT_14cb2e365 = DAT_14cb2e365 + '\x01';
  _DAT_14cb35470 = 0x100000000;
  if (*(char *)(_DAT_14cb35458 + 100) != '\0') {
    DAT_14cb2e366 = DAT_14cb2e366 + '\x01';
  }
  return;
}



// FUNCTION 145e65b9a FUN_145e65b9a body=261 status=ok
// SIG undefined FUN_145e65b9a(void)

void FUN_145e65b9a(void)

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
              0x110) < DAT_14cb336f8) {
    FUN_144b3d300(&DAT_14cb336f8);
    if (DAT_14cb336f8 == -1) {
      FUN_145e65ca0(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x7a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb33678,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1438fb6c4);
      _Init_thread_footer(&DAT_14cb336f8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e65ca0 FUN_145e65ca0 body=226 status=ok
// SIG undefined FUN_145e65ca0(void)

longlong * FUN_145e65ca0(longlong *param_1)

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
  pcVar13 = FUN_14646144c;
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



// FUNCTION 145e65d88 FUN_145e65d88 body=132 status=ok
// SIG undefined FUN_145e65d88(void)

undefined1 * FUN_145e65d88(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CountBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<int>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 7;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e65d84;
}


