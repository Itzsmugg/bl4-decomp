// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145f03426 FUN_145f03426 body=292 status=ok
// SIG undefined FUN_145f03426(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f03426(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9dd100) {
    FUN_144b3d300(&DAT_14c9dd100);
    if (DAT_14c9dd100 == -1) {
      FUN_145f03694();
      FUN_145f0354a();
      FUN_140db5666(&DAT_14c9dd058,0,&DAT_14c9dcff0,L"FVoxelAdaptiveFeedbackCS",
                    L"/Engine/Private/HairStrands/HairStrandsVoxelRasterCompute.usf",L"FeedbackCS",5
                    ,1,FUN_147198c4c,FUN_147198bec,&LAB_1462ce356,&LAB_147198be8,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9e0318);
      _DAT_14c9dd058 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c86234);
      _Init_thread_footer(&DAT_14c9dd100);
    }
  }
  return &DAT_14c9dd058;
}



// FUNCTION 145f0354a FUN_145f0354a body=205 status=ok
// SIG undefined FUN_145f0354a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f0354a(void)

{
  if ((DAT_14c9dd057 & 2) == 0) {
    DAT_14c9dd057 = DAT_14c9dd057 | 2;
    _DAT_14c9dcff8 = L"FVoxelAdaptiveFeedbackCS";
    _DAT_14c9dd010 = FUN_146826540;
    _DAT_14c9dd018 = FUN_146825d77;
    _DAT_14c9dd020 = FUN_146825fd6;
    _DAT_14c9dd028 = FUN_1407e02ea;
    _DAT_14c9dd030 = FUN_146826273;
    _DAT_14c9dd008 = FUN_147198bba;
    _DAT_14c9dd048 = 0xffffffff000000e0;
    _DAT_14c9dd050 = 8;
    DAT_14c9dd054 = 0;
    _DAT_14c9dd038 = &LAB_147198be4;
    FUN_145f03618();
    FUN_1407e00cc(&DAT_14c9dcff0);
    return;
  }
  return;
}



// FUNCTION 145f03618 FUN_145f03618 body=123 status=ok
// SIG undefined FUN_145f03618(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f03618(void)

{
  _DAT_14c9e15d0 = L"BASE";
  DAT_14c9e15fa = 4;
  _DAT_14c9e15d8 = FUN_140b35ae4();
  _DAT_14c9e15e0 = DAT_14c9dd000;
  _DAT_14c9e15e8 = &LAB_14682652b;
  DAT_14c9dd000 = &DAT_14c9e15d0;
  DAT_14c9dd055 = DAT_14c9dd055 + '\x01';
  _DAT_14c9e15f0 = 0x100000000;
  if (*(char *)(_DAT_14c9e15d8 + 100) != '\0') {
    DAT_14c9dd056 = DAT_14c9dd056 + '\x01';
  }
  return;
}



// FUNCTION 145f03694 FUN_145f03694 body=261 status=ok
// SIG undefined FUN_145f03694(void)

void FUN_145f03694(void)

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
              0x110) < DAT_14c9e0398) {
    FUN_144b3d300(&DAT_14c9e0398);
    if (DAT_14c9e0398 == -1) {
      FUN_145f0379a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0x1b2;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e0318,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c9e6fb);
      _Init_thread_footer(&DAT_14c9e0398);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f0379a FUN_145f0379a body=226 status=ok
// SIG undefined FUN_145f0379a(void)

longlong * FUN_145f0379a(longlong *param_1)

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
  pcVar13 = FUN_1462ced30;
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



// FUNCTION 145f0387e FUN_145f0387e body=132 status=ok
// SIG undefined FUN_145f0387e(void)

undefined1 * FUN_145f0387e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CPUAllocatedPageCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1b3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1471a2138;
}



// FUNCTION 145f03902 FUN_145f03902 body=136 status=ok
// SIG undefined FUN_145f03902(void)

code * FUN_145f03902(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"AdaptiveCorrectionSpeed";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc000001b6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a2024;
}



// FUNCTION 145f0398a FUN_145f0398a body=138 status=ok
// SIG undefined FUN_145f0398a(void)

code * FUN_145f0398a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PageIndexGlobalCounter";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000001b8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f03902;
}



// FUNCTION 145f03a14 FUN_145f03a14 body=292 status=ok
// SIG undefined FUN_145f03a14(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f03a14(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e3b90) {
    FUN_144b3d300(&DAT_14c9e3b90);
    if (DAT_14c9e3b90 == -1) {
      FUN_145f03c82();
      FUN_145f03b38();
      FUN_140db5666(&DAT_14c9e3ae8,0,&DAT_14c9e3a80,L"FCombineVolumetricShadowMapsCS",
                    L"/Engine/Private/HeterogeneousVolumes/HeterogeneousVolumesVoxelGridShadows.usf"
                    ,L"CombineVolumetricShadowMapsCS",5,2,FUN_1471b9b1a,FUN_1471b9aba,&LAB_1471b9a7e
                    ,&LAB_1471b9a7a,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9e6398);
      _DAT_14c9e3ae8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142cb777e);
      _Init_thread_footer(&DAT_14c9e3b90);
    }
  }
  return &DAT_14c9e3ae8;
}



// FUNCTION 145f03b38 FUN_145f03b38 body=205 status=ok
// SIG undefined FUN_145f03b38(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f03b38(void)

{
  if ((DAT_14c9e3ae7 & 2) == 0) {
    DAT_14c9e3ae7 = DAT_14c9e3ae7 | 2;
    _DAT_14c9e3a88 = L"FCombineVolumetricShadowMapsCS";
    _DAT_14c9e3aa0 = FUN_146826540;
    _DAT_14c9e3aa8 = FUN_146825d77;
    _DAT_14c9e3ab0 = FUN_146825fd6;
    _DAT_14c9e3ab8 = FUN_1407e02ea;
    _DAT_14c9e3ac0 = FUN_146826273;
    _DAT_14c9e3a98 = FUN_1471b9a4c;
    _DAT_14c9e3ad8 = 0xffffffff000000e0;
    _DAT_14c9e3ae0 = 8;
    DAT_14c9e3ae4 = 0;
    _DAT_14c9e3ac8 = &LAB_1471b9a76;
    FUN_145f03c06();
    FUN_1407e00cc(&DAT_14c9e3a80);
    return;
  }
  return;
}



// FUNCTION 145f03c06 FUN_145f03c06 body=123 status=ok
// SIG undefined FUN_145f03c06(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f03c06(void)

{
  _DAT_14c9e6f20 = L"BASE";
  DAT_14c9e6f4a = 4;
  _DAT_14c9e6f28 = FUN_140b35ae4();
  _DAT_14c9e6f30 = DAT_14c9e3a90;
  _DAT_14c9e6f38 = &LAB_14682652b;
  DAT_14c9e3a90 = &DAT_14c9e6f20;
  DAT_14c9e3ae5 = DAT_14c9e3ae5 + '\x01';
  _DAT_14c9e6f40 = 0x100000000;
  if (*(char *)(_DAT_14c9e6f28 + 100) != '\0') {
    DAT_14c9e3ae6 = DAT_14c9e3ae6 + '\x01';
  }
  return;
}



// FUNCTION 145f03c82 FUN_145f03c82 body=261 status=ok
// SIG undefined FUN_145f03c82(void)

void FUN_145f03c82(void)

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
              0x110) < DAT_14c9e6418) {
    FUN_144b3d300(&DAT_14c9e6418);
    if (DAT_14c9e6418 == -1) {
      FUN_145f03d88(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0xc15;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e6398,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142cccfd6);
      _Init_thread_footer(&DAT_14c9e6418);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f03d88 FUN_145f03d88 body=226 status=ok
// SIG undefined FUN_145f03d88(void)

longlong * FUN_145f03d88(longlong *param_1)

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
  pcVar13 = FUN_1462d2ad6;
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



// FUNCTION 145f03e6c FUN_145f03e6c body=132 status=ok
// SIG undefined FUN_145f03e6c(void)

undefined1 * FUN_145f03e6c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ShadowResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc17;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1471c4582;
}



// FUNCTION 145f03ef0 FUN_145f03ef0 body=136 status=ok
// SIG undefined FUN_145f03ef0(void)

code * FUN_145f03ef0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VolumetricShadowLinkedListBuffer1";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<FAVSMLinkedListPackedData>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000c19;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f03f78;
}



// FUNCTION 145f03f78 FUN_145f03f78 body=138 status=ok
// SIG undefined FUN_145f03f78(void)

code * FUN_145f03f78(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VolumetricShadowLinkedListBuffer0";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<FAVSMLinkedListPackedData>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000c18;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f03e6c;
}



// FUNCTION 145f04002 FUN_145f04002 body=292 status=ok
// SIG undefined FUN_145f04002(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f04002(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e4230) {
    FUN_144b3d300(&DAT_14c9e4230);
    if (DAT_14c9e4230 == -1) {
      FUN_145f04270();
      FUN_145f04126();
      FUN_140db5666(&DAT_14c9e4188,0,&DAT_14c9e4120,L"FDownsampleIntegrateCubemapIlluminancePS",
                    L"/Engine/Private/ReflectionEnvironmentShaders.usf",
                    L"DownsampleIntegrateCubemapIlluminancePS",3,1,FUN_1471ba88c,FUN_1471ba82c,
                    &LAB_1471ba828,&LAB_1471ba824,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9e6640)
      ;
      _DAT_14c9e4188 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142cbdaa9);
      _Init_thread_footer(&DAT_14c9e4230);
    }
  }
  return &DAT_14c9e4188;
}



// FUNCTION 145f04126 FUN_145f04126 body=205 status=ok
// SIG undefined FUN_145f04126(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f04126(void)

{
  if ((DAT_14c9e4187 & 2) == 0) {
    DAT_14c9e4187 = DAT_14c9e4187 | 2;
    _DAT_14c9e4128 = L"FDownsampleIntegrateCubemapIlluminancePS";
    _DAT_14c9e4140 = FUN_146826540;
    _DAT_14c9e4148 = FUN_146825d77;
    _DAT_14c9e4150 = FUN_146825fd6;
    _DAT_14c9e4158 = FUN_1407e02ea;
    _DAT_14c9e4160 = FUN_146826273;
    _DAT_14c9e4138 = FUN_1471ba7f6;
    _DAT_14c9e4178 = 0xffffffff000000e0;
    _DAT_14c9e4180 = 8;
    DAT_14c9e4184 = 0;
    _DAT_14c9e4168 = &LAB_1471ba820;
    FUN_145f041f4();
    FUN_1407e00cc(&DAT_14c9e4120);
    return;
  }
  return;
}



// FUNCTION 145f041f4 FUN_145f041f4 body=123 status=ok
// SIG undefined FUN_145f041f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f041f4(void)

{
  _DAT_14c9e7010 = L"BASE";
  DAT_14c9e703a = 4;
  _DAT_14c9e7018 = FUN_140b35ae4();
  _DAT_14c9e7020 = DAT_14c9e4130;
  _DAT_14c9e7028 = &LAB_14682652b;
  DAT_14c9e4130 = &DAT_14c9e7010;
  DAT_14c9e4185 = DAT_14c9e4185 + '\x01';
  _DAT_14c9e7030 = 0x100000000;
  if (*(char *)(_DAT_14c9e7018 + 100) != '\0') {
    DAT_14c9e4186 = DAT_14c9e4186 + '\x01';
  }
  return;
}



// FUNCTION 145f04270 FUN_145f04270 body=261 status=ok
// SIG undefined FUN_145f04270(void)

void FUN_145f04270(void)

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
              0x110) < DAT_14c9e66c0) {
    FUN_144b3d300(&DAT_14c9e66c0);
    if (DAT_14c9e66c0 == -1) {
      FUN_145f04376(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x130;
      local_58 = 0x2b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e6640,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ccd8b9);
      _Init_thread_footer(&DAT_14c9e66c0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f04376 FUN_145f04376 body=226 status=ok
// SIG undefined FUN_145f04376(void)

longlong * FUN_145f04376(longlong *param_1)

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
  pcVar13 = FUN_1462d2e9c;
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



// FUNCTION 145f0445a FUN_145f0445a body=132 status=ok
// SIG undefined FUN_145f0445a(void)

undefined1 * FUN_145f0445a(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1471c554e;
}



// FUNCTION 145f044de FUN_145f044de body=136 status=ok
// SIG undefined FUN_145f044de(void)

code * FUN_145f044de(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SvPositionToUVScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000002e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f04566;
}



// FUNCTION 145f04566 FUN_145f04566 body=138 status=ok
// SIG undefined FUN_145f04566(void)

code * FUN_145f04566(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000002d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f0445a;
}



// FUNCTION 145f045f0 FUN_145f045f0 body=292 status=ok
// SIG undefined FUN_145f045f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f045f0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e7a60) {
    FUN_144b3d300(&DAT_14c9e7a60);
    if (DAT_14c9e7a60 == -1) {
      FUN_145f0485e();
      FUN_145f04714();
      FUN_140db5666(&DAT_14c9e79b8,0,&DAT_14c9e7950,L"FInstanceCullingOcclusionQueryDebugVS",
                    L"/Engine/Private/InstanceCulling/InstanceCullingOcclusionQuery.usf",
                    L"DebugMainVS",0,1,FUN_1471d063a,FUN_1471d05da,&LAB_1471d05c2,&LAB_1471d05be,
                    &LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9e9e40);
      _DAT_14c9e79b8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142cddb12);
      _Init_thread_footer(&DAT_14c9e7a60);
    }
  }
  return &DAT_14c9e79b8;
}



// FUNCTION 145f04714 FUN_145f04714 body=205 status=ok
// SIG undefined FUN_145f04714(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f04714(void)

{
  if ((DAT_14c9e79b7 & 2) == 0) {
    DAT_14c9e79b7 = DAT_14c9e79b7 | 2;
    _DAT_14c9e7958 = L"FInstanceCullingOcclusionQueryDebugVS";
    _DAT_14c9e7970 = FUN_146826540;
    _DAT_14c9e7978 = FUN_146825d77;
    _DAT_14c9e7980 = FUN_146825fd6;
    _DAT_14c9e7988 = FUN_1407e02ea;
    _DAT_14c9e7990 = FUN_146826273;
    _DAT_14c9e7968 = FUN_1471d0590;
    _DAT_14c9e79a8 = 0xffffffff000000e0;
    _DAT_14c9e79b0 = 8;
    DAT_14c9e79b4 = 0;
    _DAT_14c9e7998 = &LAB_1471d05ba;
    FUN_145f047e2();
    FUN_1407e00cc(&DAT_14c9e7950);
    return;
  }
  return;
}



// FUNCTION 145f047e2 FUN_145f047e2 body=123 status=ok
// SIG undefined FUN_145f047e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f047e2(void)

{
  _DAT_14c9eb080 = L"BASE";
  DAT_14c9eb0aa = 4;
  _DAT_14c9eb088 = FUN_140b35ae4();
  _DAT_14c9eb090 = DAT_14c9e7960;
  _DAT_14c9eb098 = &LAB_14682652b;
  DAT_14c9e7960 = &DAT_14c9eb080;
  DAT_14c9e79b5 = DAT_14c9e79b5 + '\x01';
  _DAT_14c9eb0a0 = 0x100000000;
  if (*(char *)(_DAT_14c9eb088 + 100) != '\0') {
    DAT_14c9e79b6 = DAT_14c9e79b6 + '\x01';
  }
  return;
}



// FUNCTION 145f0485e FUN_145f0485e body=261 status=ok
// SIG undefined FUN_145f0485e(void)

void FUN_145f0485e(void)

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
              0x110) < DAT_14c9e9ec0) {
    FUN_144b3d300(&DAT_14c9e9ec0);
    if (DAT_14c9e9ec0 == -1) {
      FUN_145f04964(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x70;
      local_58 = 0x35f;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e9e40,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142cf4761);
      _Init_thread_footer(&DAT_14c9e9ec0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f04964 FUN_145f04964 body=226 status=ok
// SIG undefined FUN_145f04964(void)

longlong * FUN_145f04964(longlong *param_1)

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
  pcVar13 = FUN_1462d4dea;
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



// FUNCTION 145f04a48 FUN_145f04a48 body=132 status=ok
// SIG undefined FUN_145f04a48(void)

undefined1 * FUN_145f04a48(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InstanceSceneDataSOAStride";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x360;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1471d4704;
}



// FUNCTION 145f04acc FUN_145f04acc body=136 status=ok
// SIG undefined FUN_145f04acc(void)

code * FUN_145f04acc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HZBSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4800000368;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d4452;
}



// FUNCTION 145f04b54 FUN_145f04b54 body=138 status=ok
// SIG undefined FUN_145f04b54(void)

code * FUN_145f04b54(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GPUSceneInstancePayloadData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000362;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d467a;
}



// FUNCTION 145f04bde FUN_145f04bde body=205 status=ok
// SIG undefined FUN_145f04bde(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f04bde(void)

{
  if ((DAT_14c9ec5ff & 2) == 0) {
    DAT_14c9ec5ff = DAT_14c9ec5ff | 2;
    _DAT_14c9ec5a0 = L"FLocalFogVolumeTiledCullingCS";
    _DAT_14c9ec5b8 = FUN_146826540;
    _DAT_14c9ec5c0 = FUN_146825d77;
    _DAT_14c9ec5c8 = FUN_146825fd6;
    _DAT_14c9ec5d0 = FUN_1407e02ea;
    _DAT_14c9ec5d8 = FUN_146826273;
    _DAT_14c9ec5b0 = FUN_1471dc35a;
    _DAT_14c9ec5f0 = 0xffffffff000000e0;
    _DAT_14c9ec5f8 = 8;
    DAT_14c9ec5fc = 0;
    _DAT_14c9ec5e0 = &LAB_1471dc384;
    FUN_145f04cac();
    FUN_1407e00cc(&DAT_14c9ec598);
    return;
  }
  return;
}



// FUNCTION 145f04cac FUN_145f04cac body=123 status=ok
// SIG undefined FUN_145f04cac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f04cac(void)

{
  _DAT_14c9f15c0 = L"BASE";
  DAT_14c9f15ea = 4;
  _DAT_14c9f15c8 = FUN_140b35ae4();
  _DAT_14c9f15d0 = DAT_14c9ec5a8;
  _DAT_14c9f15d8 = &LAB_14682652b;
  DAT_14c9ec5a8 = &DAT_14c9f15c0;
  DAT_14c9ec5fd = DAT_14c9ec5fd + '\x01';
  _DAT_14c9f15e0 = 0x100000000;
  if (*(char *)(_DAT_14c9f15c8 + 100) != '\0') {
    DAT_14c9ec5fe = DAT_14c9ec5fe + '\x01';
  }
  return;
}



// FUNCTION 145f04d28 FUN_145f04d28 body=136 status=ok
// SIG undefined FUN_145f04d28(void)

code * FUN_145f04d28(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RightPlane";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd00000011b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471e0f16;
}



// FUNCTION 145f04db0 FUN_145f04db0 body=138 status=ok
// SIG undefined FUN_145f04db0(void)

code * FUN_145f04db0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TopPlane";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xe00000011c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f04d28;
}



// FUNCTION 145f04e3a FUN_145f04e3a body=138 status=ok
// SIG undefined FUN_145f04e3a(void)

code * FUN_145f04e3a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BottomPlane";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf00000011d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f04db0;
}



// FUNCTION 145f04ec4 FUN_145f04ec4 body=205 status=ok
// SIG undefined FUN_145f04ec4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f04ec4(void)

{
  if ((DAT_14c9eeb37 & 2) == 0) {
    DAT_14c9eeb37 = DAT_14c9eeb37 | 2;
    _DAT_14c9eead8 = L"FAllocateUsedProbesCS";
    _DAT_14c9eeaf0 = FUN_146826540;
    _DAT_14c9eeaf8 = FUN_146825d77;
    _DAT_14c9eeb00 = FUN_146825fd6;
    _DAT_14c9eeb08 = FUN_1407e02ea;
    _DAT_14c9eeb10 = FUN_146826273;
    _DAT_14c9eeae8 = FUN_1471df612;
    _DAT_14c9eeb28 = 0xffffffff000000e0;
    _DAT_14c9eeb30 = 8;
    DAT_14c9eeb34 = 0;
    _DAT_14c9eeb18 = &LAB_1471df63c;
    FUN_145f04f92();
    FUN_1407e00cc(&DAT_14c9eead0);
    return;
  }
  return;
}



// FUNCTION 145f04f92 FUN_145f04f92 body=123 status=ok
// SIG undefined FUN_145f04f92(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f04f92(void)

{
  _DAT_14c9f1c10 = L"BASE";
  DAT_14c9f1c3a = 4;
  _DAT_14c9f1c18 = FUN_140b35ae4();
  _DAT_14c9f1c20 = DAT_14c9eeae0;
  _DAT_14c9f1c28 = &LAB_14682652b;
  DAT_14c9eeae0 = &DAT_14c9f1c10;
  DAT_14c9eeb35 = DAT_14c9eeb35 + '\x01';
  _DAT_14c9f1c30 = 0x100000000;
  if (*(char *)(_DAT_14c9f1c18 + 100) != '\0') {
    DAT_14c9eeb36 = DAT_14c9eeb36 + '\x01';
  }
  return;
}



// FUNCTION 145f0500e FUN_145f0500e body=226 status=ok
// SIG undefined FUN_145f0500e(void)

longlong * FUN_145f0500e(longlong *param_1)

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
  pcVar13 = FUN_1462d9252;
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



// FUNCTION 145f050f2 FUN_145f050f2 body=136 status=ok
// SIG undefined FUN_145f050f2(void)

code * FUN_145f050f2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SupersampleDistanceFromCameraSq";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x540000019d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471e302a;
}



// FUNCTION 145f0517a FUN_145f0517a body=138 status=ok
// SIG undefined FUN_145f0517a(void)

code * FUN_145f0517a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWProbeLastTracedFrame";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000195;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471e32dc;
}



// FUNCTION 145f05204 FUN_145f05204 body=138 status=ok
// SIG undefined FUN_145f05204(void)

code * FUN_145f05204(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWProbeAllocator";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000198;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471e31c8;
}



// FUNCTION 145f0528e FUN_145f0528e body=205 status=ok
// SIG undefined FUN_145f0528e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f0528e(void)

{
  if ((DAT_14c9eed87 & 2) == 0) {
    DAT_14c9eed87 = DAT_14c9eed87 | 2;
    _DAT_14c9eed28 = L"FSelectMaxPriorityBucketCS";
    _DAT_14c9eed40 = FUN_146826540;
    _DAT_14c9eed48 = FUN_146825d77;
    _DAT_14c9eed50 = FUN_146825fd6;
    _DAT_14c9eed58 = FUN_1407e02ea;
    _DAT_14c9eed60 = FUN_146826273;
    _DAT_14c9eed38 = FUN_1471df79e;
    _DAT_14c9eed78 = 0xffffffff000000e0;
    _DAT_14c9eed80 = 8;
    DAT_14c9eed84 = 0;
    _DAT_14c9eed68 = &LAB_1471df7c8;
    FUN_145f0535c();
    FUN_1407e00cc(&DAT_14c9eed20);
    return;
  }
  return;
}



// FUNCTION 145f0535c FUN_145f0535c body=123 status=ok
// SIG undefined FUN_145f0535c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f0535c(void)

{
  _DAT_14c9f1c70 = L"BASE";
  DAT_14c9f1c9a = 4;
  _DAT_14c9f1c78 = FUN_140b35ae4();
  _DAT_14c9f1c80 = DAT_14c9eed30;
  _DAT_14c9f1c88 = &LAB_14682652b;
  DAT_14c9eed30 = &DAT_14c9f1c70;
  DAT_14c9eed85 = DAT_14c9eed85 + '\x01';
  _DAT_14c9f1c90 = 0x100000000;
  if (*(char *)(_DAT_14c9f1c78 + 100) != '\0') {
    DAT_14c9eed86 = DAT_14c9eed86 + '\x01';
  }
  return;
}



// FUNCTION 145f053d8 FUN_145f053d8 body=226 status=ok
// SIG undefined FUN_145f053d8(void)

longlong * FUN_145f053d8(longlong *param_1)

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
  pcVar13 = FUN_1462d9516;
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



// FUNCTION 145f054bc FUN_145f054bc body=136 status=ok
// SIG undefined FUN_145f054bc(void)

code * FUN_145f054bc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWMaxUpdateBucket";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000001f1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f055ce;
}



// FUNCTION 145f05544 FUN_145f05544 body=138 status=ok
// SIG undefined FUN_145f05544(void)

code * FUN_145f05544(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ProbeTraceAllocator";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28000001f4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471e3950;
}



// FUNCTION 145f055ce FUN_145f055ce body=138 status=ok
// SIG undefined FUN_145f055ce(void)

undefined1 * FUN_145f055ce(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1f0;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_1471e3a64;
}



// FUNCTION 145f05658 FUN_145f05658 body=205 status=ok
// SIG undefined FUN_145f05658(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f05658(void)

{
  if ((DAT_14c9ef477 & 2) == 0) {
    DAT_14c9ef477 = DAT_14c9ef477 | 2;
    _DAT_14c9ef418 = L"FGenerateProbeTraceTilesCS";
    _DAT_14c9ef430 = FUN_146826540;
    _DAT_14c9ef438 = FUN_146825d77;
    _DAT_14c9ef440 = FUN_146825fd6;
    _DAT_14c9ef448 = FUN_1407e02ea;
    _DAT_14c9ef450 = FUN_146826273;
    _DAT_14c9ef428 = FUN_1471dfc42;
    _DAT_14c9ef468 = 0xffffffff000000e0;
    _DAT_14c9ef470 = 8;
    DAT_14c9ef474 = 0;
    _DAT_14c9ef458 = &LAB_1471dfc6c;
    FUN_145f05726();
    FUN_1407e00cc(&DAT_14c9ef410);
    return;
  }
  return;
}



// FUNCTION 145f05726 FUN_145f05726 body=123 status=ok
// SIG undefined FUN_145f05726(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f05726(void)

{
  _DAT_14c9f1d90 = L"BASE";
  DAT_14c9f1dba = 4;
  _DAT_14c9f1d98 = FUN_140b35ae4();
  _DAT_14c9f1da0 = DAT_14c9ef420;
  _DAT_14c9f1da8 = &LAB_14682652b;
  DAT_14c9ef420 = &DAT_14c9f1d90;
  DAT_14c9ef475 = DAT_14c9ef475 + '\x01';
  _DAT_14c9f1db0 = 0x100000000;
  if (*(char *)(_DAT_14c9f1d98 + 100) != '\0') {
    DAT_14c9ef476 = DAT_14c9ef476 + '\x01';
  }
  return;
}



// FUNCTION 145f057a2 FUN_145f057a2 body=226 status=ok
// SIG undefined FUN_145f057a2(void)

longlong * FUN_145f057a2(longlong *param_1)

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
  pcVar13 = FUN_1462d9ed4;
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



// FUNCTION 145f05886 FUN_145f05886 body=136 status=ok
// SIG undefined FUN_145f05886(void)

code * FUN_145f05886(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWDebugBRDFProbabilityDensityFunction";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x38000002d7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471e54d2;
}



// FUNCTION 145f0590e FUN_145f0590e body=138 status=ok
// SIG undefined FUN_145f0590e(void)

code * FUN_145f0590e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ProbesToUpdateTraceCost";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000002d1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f05998;
}



// FUNCTION 145f05998 FUN_145f05998 body=138 status=ok
// SIG undefined FUN_145f05998(void)

code * FUN_145f05998(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RadianceProbeSH_PDF";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<int>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000002d0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471e56fa;
}



// FUNCTION 145f05a22 FUN_145f05a22 body=292 status=ok
// SIG undefined FUN_145f05a22(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f05a22(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9efae8) {
    FUN_144b3d300(&DAT_14c9efae8);
    if (DAT_14c9efae8 == -1) {
      FUN_145f05c90();
      FUN_145f05b46();
      FUN_140db5666(&DAT_14c9efa40,0,&DAT_14c9ef9d8,L"FCalculateProbeIrradianceCS",
                    L"/Engine/Private/Lumen/LumenRadianceCache.usf",L"CalculateProbeIrradianceCS",5,
                    1,FUN_1471e00b2,FUN_1471e0052,&LAB_1462d73a4,&LAB_1471e004e,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9f1330);
      _DAT_14c9efa40 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d26109);
      _Init_thread_footer(&DAT_14c9efae8);
    }
  }
  return &DAT_14c9efa40;
}



// FUNCTION 145f05b46 FUN_145f05b46 body=205 status=ok
// SIG undefined FUN_145f05b46(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f05b46(void)

{
  if ((DAT_14c9efa3f & 2) == 0) {
    DAT_14c9efa3f = DAT_14c9efa3f | 2;
    _DAT_14c9ef9e0 = L"FCalculateProbeIrradianceCS";
    _DAT_14c9ef9f8 = FUN_146826540;
    _DAT_14c9efa00 = FUN_146825d77;
    _DAT_14c9efa08 = FUN_146825fd6;
    _DAT_14c9efa10 = FUN_1407e02ea;
    _DAT_14c9efa18 = FUN_146826273;
    _DAT_14c9ef9f0 = FUN_1471e0020;
    _DAT_14c9efa30 = 0xffffffff000000e0;
    _DAT_14c9efa38 = 8;
    DAT_14c9efa3c = 0;
    _DAT_14c9efa20 = &LAB_1471e004a;
    FUN_145f05c14();
    FUN_1407e00cc(&DAT_14c9ef9d8);
    return;
  }
  return;
}



// FUNCTION 145f05c14 FUN_145f05c14 body=123 status=ok
// SIG undefined FUN_145f05c14(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f05c14(void)

{
  _DAT_14c9f1e80 = L"BASE";
  DAT_14c9f1eaa = 4;
  _DAT_14c9f1e88 = FUN_140b35ae4();
  _DAT_14c9f1e90 = DAT_14c9ef9e8;
  _DAT_14c9f1e98 = &LAB_14682652b;
  DAT_14c9ef9e8 = &DAT_14c9f1e80;
  DAT_14c9efa3d = DAT_14c9efa3d + '\x01';
  _DAT_14c9f1ea0 = 0x100000000;
  if (*(char *)(_DAT_14c9f1e88 + 100) != '\0') {
    DAT_14c9efa3e = DAT_14c9efa3e + '\x01';
  }
  return;
}



// FUNCTION 145f05c90 FUN_145f05c90 body=261 status=ok
// SIG undefined FUN_145f05c90(void)

void FUN_145f05c90(void)

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
              0x110) < DAT_14c9f13b0) {
    FUN_144b3d300(&DAT_14c9f13b0);
    if (DAT_14c9f13b0 == -1) {
      FUN_145f05d96(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1b0;
      local_58 = 0x3b3;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f1330,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d263eb);
      _Init_thread_footer(&DAT_14c9f13b0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f05d96 FUN_145f05d96 body=226 status=ok
// SIG undefined FUN_145f05d96(void)

longlong * FUN_145f05d96(longlong *param_1)

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
  pcVar13 = FUN_1462daace;
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



// FUNCTION 145f05e7a FUN_145f05e7a body=132 status=ok
// SIG undefined FUN_145f05e7a(void)

undefined1 * FUN_145f05e7a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWFinalIrradianceAtlas";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3b4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1471e6d06;
}



// FUNCTION 145f05efe FUN_145f05efe body=136 status=ok
// SIG undefined FUN_145f05efe(void)

code * FUN_145f05efe(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RadianceProbeAtlasTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000003b5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f05e7a;
}



// FUNCTION 145f05f86 FUN_145f05f86 body=138 status=ok
// SIG undefined FUN_145f05f86(void)

code * FUN_145f05f86(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ProbeTraceData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000003b6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f05efe;
}



// FUNCTION 145f06010 FUN_145f06010 body=292 status=ok
// SIG undefined FUN_145f06010(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f06010(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f27e0) {
    FUN_144b3d300(&DAT_14c9f27e0);
    if (DAT_14c9f27e0 == -1) {
      FUN_145f0627e();
      FUN_145f06134();
      FUN_140db5666(&DAT_14c9f2738,0,&DAT_14c9f26d0,L"FRadianceCacheCompactTracesCS",
                    L"/Engine/Private/Lumen/LumenRadianceCacheHardwareRayTracing.usf",
                    L"RadianceCacheCompactTracesCS",5,2,FUN_1471ec4c4,FUN_1471ec464,&LAB_1462db3d4,
                    &LAB_1471ec460,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9f5fb8);
      _DAT_14c9f2738 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d330a0);
      _Init_thread_footer(&DAT_14c9f27e0);
    }
  }
  return &DAT_14c9f2738;
}



// FUNCTION 145f06134 FUN_145f06134 body=205 status=ok
// SIG undefined FUN_145f06134(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f06134(void)

{
  if ((DAT_14c9f2737 & 2) == 0) {
    DAT_14c9f2737 = DAT_14c9f2737 | 2;
    _DAT_14c9f26d8 = L"FRadianceCacheCompactTracesCS";
    _DAT_14c9f26f0 = FUN_146826540;
    _DAT_14c9f26f8 = FUN_146825d77;
    _DAT_14c9f2700 = FUN_146825fd6;
    _DAT_14c9f2708 = FUN_1407e02ea;
    _DAT_14c9f2710 = FUN_146826273;
    _DAT_14c9f26e8 = FUN_1471ec432;
    _DAT_14c9f2728 = 0xffffffff000000e0;
    _DAT_14c9f2730 = 8;
    DAT_14c9f2734 = 0;
    _DAT_14c9f2718 = &LAB_1471ec45c;
    FUN_145f06202();
    FUN_1407e00cc(&DAT_14c9f26d0);
    return;
  }
  return;
}



// FUNCTION 145f06202 FUN_145f06202 body=123 status=ok
// SIG undefined FUN_145f06202(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f06202(void)

{
  _DAT_14c9f7970 = L"BASE";
  DAT_14c9f799a = 4;
  _DAT_14c9f7978 = FUN_140b35ae4();
  _DAT_14c9f7980 = DAT_14c9f26e0;
  _DAT_14c9f7988 = &LAB_14682652b;
  DAT_14c9f26e0 = &DAT_14c9f7970;
  DAT_14c9f2735 = DAT_14c9f2735 + '\x01';
  _DAT_14c9f7990 = 0x100000000;
  if (*(char *)(_DAT_14c9f7978 + 100) != '\0') {
    DAT_14c9f2736 = DAT_14c9f2736 + '\x01';
  }
  return;
}



// FUNCTION 145f0627e FUN_145f0627e body=261 status=ok
// SIG undefined FUN_145f0627e(void)

void FUN_145f0627e(void)

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
              0x110) < DAT_14c9f6038) {
    FUN_144b3d300(&DAT_14c9f6038);
    if (DAT_14c9f6038 == -1) {
      FUN_145f06384(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1d0;
      local_58 = 0x10d;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f5fb8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d57b13);
      _Init_thread_footer(&DAT_14c9f6038);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f06384 FUN_145f06384 body=226 status=ok
// SIG undefined FUN_145f06384(void)

longlong * FUN_145f06384(longlong *param_1)

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
  pcVar13 = FUN_1462dc08e;
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



// FUNCTION 145f06468 FUN_145f06468 body=130 status=ok
// SIG undefined FUN_145f06468(void)

undefined1 * FUN_145f06468(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ResolveIndirectArgs";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xf;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1471f33ea;
}



// FUNCTION 145f064ea FUN_145f064ea body=138 status=ok
// SIG undefined FUN_145f064ea(void)

code * FUN_145f064ea(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWCompactedTraceTexelData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000110;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f06574;
}



// FUNCTION 145f06574 FUN_145f06574 body=138 status=ok
// SIG undefined FUN_145f06574(void)

code * FUN_145f06574(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWCompactedTraceTexelAllocator";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000010f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f06468;
}



// FUNCTION 145f065fe FUN_145f065fe body=292 status=ok
// SIG undefined FUN_145f065fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f065fe(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f99a8) {
    FUN_144b3d300(&DAT_14c9f99a8);
    if (DAT_14c9f99a8 == -1) {
      FUN_145f0686c();
      FUN_145f06722();
      FUN_140db5666(&DAT_14c9f9900,0,&DAT_14c9f9898,L"FLumenSceneCompactLightOffsetCS",
                    L"/Engine/Private/Lumen/LumenSceneDirectLightingStochastic.usf",L"MainCS",5,1,
                    FUN_147205870,FUN_147205810,&LAB_1462e16a8,&LAB_14720580c,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9fe228);
      _DAT_14c9f9900 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d694cc);
      _Init_thread_footer(&DAT_14c9f99a8);
    }
  }
  return &DAT_14c9f9900;
}



// FUNCTION 145f06722 FUN_145f06722 body=205 status=ok
// SIG undefined FUN_145f06722(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f06722(void)

{
  if ((DAT_14c9f98ff & 2) == 0) {
    DAT_14c9f98ff = DAT_14c9f98ff | 2;
    _DAT_14c9f98a0 = L"FLumenSceneCompactLightOffsetCS";
    _DAT_14c9f98b8 = FUN_146826540;
    _DAT_14c9f98c0 = FUN_146825d77;
    _DAT_14c9f98c8 = FUN_146825fd6;
    _DAT_14c9f98d0 = FUN_1407e02ea;
    _DAT_14c9f98d8 = FUN_146826273;
    _DAT_14c9f98b0 = FUN_1472057de;
    _DAT_14c9f98f0 = 0xffffffff000000e0;
    _DAT_14c9f98f8 = 8;
    DAT_14c9f98fc = 0;
    _DAT_14c9f98e0 = &LAB_147205808;
    FUN_145f067f0();
    FUN_1407e00cc(&DAT_14c9f9898);
    return;
  }
  return;
}



// FUNCTION 145f067f0 FUN_145f067f0 body=123 status=ok
// SIG undefined FUN_145f067f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f067f0(void)

{
  _DAT_14c9ffd98 = L"BASE";
  DAT_14c9ffdc2 = 4;
  _DAT_14c9ffda0 = FUN_140b35ae4();
  _DAT_14c9ffda8 = DAT_14c9f98a8;
  _DAT_14c9ffdb0 = &LAB_14682652b;
  DAT_14c9f98a8 = &DAT_14c9ffd98;
  DAT_14c9f98fd = DAT_14c9f98fd + '\x01';
  _DAT_14c9ffdb8 = 0x100000000;
  if (*(char *)(_DAT_14c9ffda0 + 100) != '\0') {
    DAT_14c9f98fe = DAT_14c9f98fe + '\x01';
  }
  return;
}



// FUNCTION 145f0686c FUN_145f0686c body=261 status=ok
// SIG undefined FUN_145f0686c(void)

void FUN_145f0686c(void)

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
              0x110) < DAT_14c9fe2a8) {
    FUN_144b3d300(&DAT_14c9fe2a8);
    if (DAT_14c9fe2a8 == -1) {
      FUN_145f06972(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x45;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9fe228,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d99383);
      _Init_thread_footer(&DAT_14c9fe2a8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f06972 FUN_145f06972 body=226 status=ok
// SIG undefined FUN_145f06972(void)

longlong * FUN_145f06972(longlong *param_1)

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
  pcVar13 = FUN_1462e2e9a;
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



// FUNCTION 145f06a56 FUN_145f06a56 body=132 status=ok
// SIG undefined FUN_145f06a56(void)

undefined1 * FUN_145f06a56(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumLights";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x46;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14720c984;
}



// FUNCTION 145f06ada FUN_145f06ada body=136 status=ok
// SIG undefined FUN_145f06ada(void)

code * FUN_145f06ada(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumStandaloneLights";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000047;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f06a56;
}



// FUNCTION 145f06b62 FUN_145f06b62 body=138 status=ok
// SIG undefined FUN_145f06b62(void)

code * FUN_145f06b62(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumSamplesPerPixel1d";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000048;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f06ada;
}



// FUNCTION 145f06bec FUN_145f06bec body=205 status=ok
// SIG undefined FUN_145f06bec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f06bec(void)

{
  if ((DAT_14c9fc4c7 & 2) == 0) {
    DAT_14c9fc4c7 = DAT_14c9fc4c7 | 2;
    _DAT_14c9fc468 = L"FScreenProbeCalculateMovingCS";
    _DAT_14c9fc480 = FUN_146826540;
    _DAT_14c9fc488 = FUN_146825d77;
    _DAT_14c9fc490 = FUN_146825fd6;
    _DAT_14c9fc498 = FUN_1407e02ea;
    _DAT_14c9fc4a0 = FUN_146826273;
    _DAT_14c9fc478 = FUN_14720883a;
    _DAT_14c9fc4b8 = 0xffffffff000000e0;
    _DAT_14c9fc4c0 = 8;
    DAT_14c9fc4c4 = 0;
    _DAT_14c9fc4a8 = &LAB_147208864;
    FUN_145f06cba();
    FUN_1407e00cc(&DAT_14c9fc460);
    return;
  }
  return;
}



// FUNCTION 145f06cba FUN_145f06cba body=123 status=ok
// SIG undefined FUN_145f06cba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f06cba(void)

{
  _DAT_14ca004f8 = L"BASE";
  DAT_14ca00522 = 4;
  _DAT_14ca00500 = FUN_140b35ae4();
  _DAT_14ca00508 = DAT_14c9fc470;
  _DAT_14ca00510 = &LAB_14682652b;
  DAT_14c9fc470 = &DAT_14ca004f8;
  DAT_14c9fc4c5 = DAT_14c9fc4c5 + '\x01';
  _DAT_14ca00518 = 0x100000000;
  if (*(char *)(_DAT_14ca00500 + 100) != '\0') {
    DAT_14c9fc4c6 = DAT_14c9fc4c6 + '\x01';
  }
  return;
}



// FUNCTION 145f06d36 FUN_145f06d36 body=226 status=ok
// SIG undefined FUN_145f06d36(void)

longlong * FUN_145f06d36(longlong *param_1)

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
  pcVar13 = FUN_1462e586c;
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



// FUNCTION 145f06e1a FUN_145f06e1a body=130 status=ok
// SIG undefined FUN_145f06e1a(void)

undefined1 * FUN_145f06e1a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWScreenProbeMoving";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<UNORM float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x148;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1472172da;
}



// FUNCTION 145f06e9c FUN_145f06e9c body=138 status=ok
// SIG undefined FUN_145f06e9c(void)

code * FUN_145f06e9c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DebugForceTracesMoving";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000014a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147217250;
}



// FUNCTION 145f06f26 FUN_145f06f26 body=144 status=ok
// SIG undefined FUN_145f06f26(void)

code * FUN_145f06f26(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x200000014b;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145f06e9c;
}



// FUNCTION 145f06fb6 FUN_145f06fb6 body=205 status=ok
// SIG undefined FUN_145f06fb6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f06fb6(void)

{
  if ((DAT_14ca00fbf & 2) == 0) {
    DAT_14ca00fbf = DAT_14ca00fbf | 2;
    _DAT_14ca00f60 = L"FScreenProbeGenerateRaysCS";
    _DAT_14ca00f78 = FUN_146826540;
    _DAT_14ca00f80 = FUN_146825d77;
    _DAT_14ca00f88 = FUN_146825fd6;
    _DAT_14ca00f90 = FUN_1407e02ea;
    _DAT_14ca00f98 = FUN_146826273;
    _DAT_14ca00f70 = FUN_147220ce0;
    _DAT_14ca00fb0 = 0xffffffff000000e0;
    _DAT_14ca00fb8 = 8;
    DAT_14ca00fbc = 0;
    _DAT_14ca00fa0 = &LAB_147220d0a;
    FUN_145f07084();
    FUN_1407e00cc(&DAT_14ca00f58);
    return;
  }
  return;
}



// FUNCTION 145f07084 FUN_145f07084 body=123 status=ok
// SIG undefined FUN_145f07084(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f07084(void)

{
  _DAT_14ca077d8 = L"BASE";
  DAT_14ca07802 = 4;
  _DAT_14ca077e0 = FUN_140b35ae4();
  _DAT_14ca077e8 = DAT_14ca00f68;
  _DAT_14ca077f0 = &LAB_14682652b;
  DAT_14ca00f68 = &DAT_14ca077d8;
  DAT_14ca00fbd = DAT_14ca00fbd + '\x01';
  _DAT_14ca077f8 = 0x100000000;
  if (*(char *)(_DAT_14ca077e0 + 100) != '\0') {
    DAT_14ca00fbe = DAT_14ca00fbe + '\x01';
  }
  return;
}



// FUNCTION 145f07100 FUN_145f07100 body=226 status=ok
// SIG undefined FUN_145f07100(void)

longlong * FUN_145f07100(longlong *param_1)

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
  pcVar13 = FUN_1462e7c40;
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



// FUNCTION 145f071e4 FUN_145f071e4 body=136 status=ok
// SIG undefined FUN_145f071e4(void)

code * FUN_145f071e4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BRDFProbabilityDensityFunction";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000000bb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462e7cce;
}



// FUNCTION 145f0726c FUN_145f0726c body=138 status=ok
// SIG undefined FUN_145f0726c(void)

code * FUN_145f0726c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BRDFProbabilityDensityFunctionSH";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28000000bc;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f071e4;
}



// FUNCTION 145f072f6 FUN_145f072f6 body=138 status=ok
// SIG undefined FUN_145f072f6(void)

code * FUN_145f072f6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWStructuredImportanceSampledRayCoordForComposite";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<uint2>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000b9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147229998;
}



// FUNCTION 145f07380 FUN_145f07380 body=205 status=ok
// SIG undefined FUN_145f07380(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f07380(void)

{
  if ((DAT_14ca01b87 & 2) == 0) {
    DAT_14ca01b87 = DAT_14ca01b87 | 2;
    _DAT_14ca01b28 = L"FScreenSpaceShortRangeAOCS";
    _DAT_14ca01b40 = FUN_146826540;
    _DAT_14ca01b48 = FUN_146825d77;
    _DAT_14ca01b50 = FUN_146825fd6;
    _DAT_14ca01b58 = FUN_1407e02ea;
    _DAT_14ca01b60 = FUN_146826273;
    _DAT_14ca01b38 = FUN_1472215da;
    _DAT_14ca01b78 = 0xffffffff000000e0;
    _DAT_14ca01b80 = 8;
    DAT_14ca01b84 = 0;
    _DAT_14ca01b68 = &LAB_147221604;
    FUN_145f0744e();
    FUN_1407e00cc(&DAT_14ca01b20);
    return;
  }
  return;
}



// FUNCTION 145f0744e FUN_145f0744e body=123 status=ok
// SIG undefined FUN_145f0744e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f0744e(void)

{
  _DAT_14ca07988 = L"BASE";
  DAT_14ca079b2 = 4;
  _DAT_14ca07990 = FUN_140b35ae4();
  _DAT_14ca07998 = DAT_14ca01b30;
  _DAT_14ca079a0 = &LAB_14682652b;
  DAT_14ca01b30 = &DAT_14ca07988;
  DAT_14ca01b85 = DAT_14ca01b85 + '\x01';
  _DAT_14ca079a8 = 0x100000000;
  if (*(char *)(_DAT_14ca07990 + 100) != '\0') {
    DAT_14ca01b86 = DAT_14ca01b86 + '\x01';
  }
  return;
}



// FUNCTION 145f074ca FUN_145f074ca body=132 status=ok
// SIG undefined FUN_145f074ca(void)

undefined1 * FUN_145f074ca(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWScreenBentNormal";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2DArray<float3>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14722a3c2;
}



// FUNCTION 145f0754e FUN_145f0754e body=136 status=ok
// SIG undefined FUN_145f0754e(void)

code * FUN_145f0754e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FurthestHZBTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xe000000048;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14722a110;
}



// FUNCTION 145f075d6 FUN_145f075d6 body=144 status=ok
// SIG undefined FUN_145f075d6(void)

code * FUN_145f075d6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14482e3b2();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"SceneTexturesStruct";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSceneTextureUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x100000003e;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145f074ca;
}



// FUNCTION 145f07666 FUN_145f07666 body=205 status=ok
// SIG undefined FUN_145f07666(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f07666(void)

{
  if ((DAT_14ca02fff & 2) == 0) {
    DAT_14ca02fff = DAT_14ca02fff | 2;
    _DAT_14ca02fa0 = L"FTranslucencyVolumeSpatialSeparableFilterCS";
    _DAT_14ca02fb8 = FUN_146826540;
    _DAT_14ca02fc0 = FUN_146825d77;
    _DAT_14ca02fc8 = FUN_146825fd6;
    _DAT_14ca02fd0 = FUN_1407e02ea;
    _DAT_14ca02fd8 = FUN_146826273;
    _DAT_14ca02fb0 = FUN_147222822;
    _DAT_14ca02ff0 = 0xffffffff000000e0;
    _DAT_14ca02ff8 = 8;
    DAT_14ca02ffc = 0;
    _DAT_14ca02fe0 = &LAB_14722284c;
    FUN_145f07734();
    FUN_1407e00cc(&DAT_14ca02f98);
    return;
  }
  return;
}



// FUNCTION 145f07734 FUN_145f07734 body=123 status=ok
// SIG undefined FUN_145f07734(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f07734(void)

{
  _DAT_14ca07d90 = L"BASE";
  DAT_14ca07dba = 4;
  _DAT_14ca07d98 = FUN_140b35ae4();
  _DAT_14ca07da0 = DAT_14ca02fa8;
  _DAT_14ca07da8 = &LAB_14682652b;
  DAT_14ca02fa8 = &DAT_14ca07d90;
  DAT_14ca02ffd = DAT_14ca02ffd + '\x01';
  _DAT_14ca07db0 = 0x100000000;
  if (*(char *)(_DAT_14ca07d98 + 100) != '\0') {
    DAT_14ca02ffe = DAT_14ca02ffe + '\x01';
  }
  return;
}



// FUNCTION 145f077b0 FUN_145f077b0 body=226 status=ok
// SIG undefined FUN_145f077b0(void)

longlong * FUN_145f077b0(longlong *param_1)

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
  pcVar13 = FUN_1462e9d22;
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



// FUNCTION 145f07894 FUN_145f07894 body=136 status=ok
// SIG undefined FUN_145f07894(void)

code * FUN_145f07894(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PreviousFrameJitterOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xe0000001fe;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462e9daa;
}



// FUNCTION 145f0791c FUN_145f0791c body=138 status=ok
// SIG undefined FUN_145f0791c(void)

code * FUN_145f0791c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SpatialFilterDirection";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x13000000200;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14722bffc;
}



// FUNCTION 145f079a6 FUN_145f079a6 body=138 status=ok
// SIG undefined FUN_145f079a6(void)

code * FUN_145f079a6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VolumeTraceHitDistance";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture3D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000001fb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14722c086;
}



// FUNCTION 145f07a30 FUN_145f07a30 body=205 status=ok
// SIG undefined FUN_145f07a30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f07a30(void)

{
  if ((DAT_14ca1499f & 2) == 0) {
    DAT_14ca1499f = DAT_14ca1499f | 2;
    _DAT_14ca14940 = L"FInstanceHierarchyAppendUncullable_CS";
    _DAT_14ca14958 = FUN_146826540;
    _DAT_14ca14960 = FUN_146825d77;
    _DAT_14ca14968 = FUN_146825fd6;
    _DAT_14ca14970 = FUN_1407e02ea;
    _DAT_14ca14978 = FUN_146826273;
    _DAT_14ca14950 = FUN_147251d8e;
    _DAT_14ca14990 = 0xffffffff000000e0;
    _DAT_14ca14998 = 8;
    DAT_14ca1499c = 0;
    _DAT_14ca14980 = &LAB_147251dba;
    FUN_145f07afe();
    FUN_1407e00cc(&DAT_14ca14938);
    return;
  }
  return;
}



// FUNCTION 145f07afe FUN_145f07afe body=123 status=ok
// SIG undefined FUN_145f07afe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f07afe(void)

{
  _DAT_14ca19040 = L"BASE";
  DAT_14ca1906a = 4;
  _DAT_14ca19048 = FUN_140b35ae4();
  _DAT_14ca19050 = DAT_14ca14948;
  _DAT_14ca19058 = &LAB_14682652b;
  DAT_14ca14948 = &DAT_14ca19040;
  DAT_14ca1499d = DAT_14ca1499d + '\x01';
  _DAT_14ca19060 = 0x100000000;
  if (*(char *)(_DAT_14ca19048 + 100) != '\0') {
    DAT_14ca1499e = DAT_14ca1499e + '\x01';
  }
  return;
}



// FUNCTION 145f07b7a FUN_145f07b7a body=226 status=ok
// SIG undefined FUN_145f07b7a(void)

longlong * FUN_145f07b7a(longlong *param_1)

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
  pcVar13 = FUN_1462f0a7e;
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



// FUNCTION 145f07c5e FUN_145f07c5e body=136 status=ok
// SIG undefined FUN_145f07c5e(void)

code * FUN_145f07c5e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutInstanceWorkArgs";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer< uint >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x58000002e6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14725754e;
}



// FUNCTION 145f07ce6 FUN_145f07ce6 body=138 status=ok
// SIG undefined FUN_145f07ce6(void)

code * FUN_145f07ce6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxInstanceWorkGroups";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x60000002e7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f07c5e;
}



// FUNCTION 145f07d70 FUN_145f07d70 body=138 status=ok
// SIG undefined FUN_145f07d70(void)

code * FUN_145f07d70(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumViewDrawGroups";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x48000002e4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472575d8;
}



// FUNCTION 145f07dfa FUN_145f07dfa body=205 status=ok
// SIG undefined FUN_145f07dfa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f07dfa(void)

{
  if ((DAT_14ca1cb9f & 2) == 0) {
    DAT_14ca1cb9f = DAT_14ca1cb9f | 2;
    _DAT_14ca1cb40 = L"FOITSortTriangleIndex_WriteOutCS";
    _DAT_14ca1cb58 = FUN_146826540;
    _DAT_14ca1cb60 = FUN_146825d77;
    _DAT_14ca1cb68 = FUN_146825fd6;
    _DAT_14ca1cb70 = FUN_1407e02ea;
    _DAT_14ca1cb78 = FUN_146826273;
    _DAT_14ca1cb50 = FUN_147271156;
    _DAT_14ca1cb90 = 0xffffffff000000e0;
    _DAT_14ca1cb98 = 8;
    DAT_14ca1cb9c = 0;
    _DAT_14ca1cb80 = &LAB_147271182;
    FUN_145f07ec8();
    FUN_1407e00cc(&DAT_14ca1cb38);
    return;
  }
  return;
}



// FUNCTION 145f07ec8 FUN_145f07ec8 body=123 status=ok
// SIG undefined FUN_145f07ec8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f07ec8(void)

{
  _DAT_14ca24720 = L"BASE";
  DAT_14ca2474a = 4;
  _DAT_14ca24728 = FUN_140b35ae4();
  _DAT_14ca24730 = DAT_14ca1cb48;
  _DAT_14ca24738 = &LAB_14682652b;
  DAT_14ca1cb48 = &DAT_14ca24720;
  DAT_14ca1cb9d = DAT_14ca1cb9d + '\x01';
  _DAT_14ca24740 = 0x100000000;
  if (*(char *)(_DAT_14ca24728 + 100) != '\0') {
    DAT_14ca1cb9e = DAT_14ca1cb9e + '\x01';
  }
  return;
}



// FUNCTION 145f07f44 FUN_145f07f44 body=226 status=ok
// SIG undefined FUN_145f07f44(void)

longlong * FUN_145f07f44(longlong *param_1)

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
  pcVar13 = FUN_1462f57a8;
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



// FUNCTION 145f08028 FUN_145f08028 body=136 status=ok
// SIG undefined FUN_145f08028(void)

code * FUN_145f08028(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DstFirstIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000215;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f080b0;
}



// FUNCTION 145f080b0 FUN_145f080b0 body=138 status=ok
// SIG undefined FUN_145f080b0(void)

code * FUN_145f080b0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SrcFirstIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc00000214;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f0813a;
}



// FUNCTION 145f0813a FUN_145f0813a body=138 status=ok
// SIG undefined FUN_145f0813a(void)

code * FUN_145f0813a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumIndices";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000213;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472795cc;
}



// FUNCTION 145f081c4 FUN_145f081c4 body=205 status=ok
// SIG undefined FUN_145f081c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f081c4(void)

{
  if ((DAT_14ca257b7 & 2) == 0) {
    DAT_14ca257b7 = DAT_14ca257b7 | 2;
    _DAT_14ca25758 = L"FFXAAPS";
    _DAT_14ca25770 = FUN_146826540;
    _DAT_14ca25778 = FUN_146825d77;
    _DAT_14ca25780 = FUN_146825fd6;
    _DAT_14ca25788 = FUN_1407e02ea;
    _DAT_14ca25790 = FUN_146826273;
    _DAT_14ca25768 = FUN_147289c56;
    _DAT_14ca257a8 = 0xffffffff000000e0;
    _DAT_14ca257b0 = 8;
    DAT_14ca257b4 = 0;
    _DAT_14ca25798 = &LAB_147289c82;
    FUN_145f08292();
    FUN_1407e00cc(&DAT_14ca25750);
    return;
  }
  return;
}



// FUNCTION 145f08292 FUN_145f08292 body=123 status=ok
// SIG undefined FUN_145f08292(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f08292(void)

{
  _DAT_14ca2be20 = L"BASE";
  DAT_14ca2be4a = 4;
  _DAT_14ca2be28 = FUN_140b35ae4();
  _DAT_14ca2be30 = DAT_14ca25760;
  _DAT_14ca2be38 = &LAB_14682652b;
  DAT_14ca25760 = &DAT_14ca2be20;
  DAT_14ca257b5 = DAT_14ca257b5 + '\x01';
  _DAT_14ca2be40 = 0x100000000;
  if (*(char *)(_DAT_14ca2be28 + 100) != '\0') {
    DAT_14ca257b6 = DAT_14ca257b6 + '\x01';
  }
  return;
}



// FUNCTION 145f0830e FUN_145f0830e body=226 status=ok
// SIG undefined FUN_145f0830e(void)

longlong * FUN_145f0830e(longlong *param_1)

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
  pcVar13 = FUN_1462f8876;
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



// FUNCTION 145f083f2 FUN_145f083f2 body=136 status=ok
// SIG undefined FUN_145f083f2(void)

code * FUN_145f083f2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"fxaaQualityEdgeThresholdMin";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb80000002b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14728cd86;
}



// FUNCTION 145f0847a FUN_145f0847a body=138 status=ok
// SIG undefined FUN_145f0847a(void)

code * FUN_145f0847a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"fxaaConsoleRcpFrameOpt2";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa000000028;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f08504;
}



// FUNCTION 145f08504 FUN_145f08504 body=138 status=ok
// SIG undefined FUN_145f08504(void)

code * FUN_145f08504(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"fxaaConsoleRcpFrameOpt";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9000000027;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14728ce9a;
}



// FUNCTION 145f0858e FUN_145f0858e body=292 status=ok
// SIG undefined FUN_145f0858e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f0858e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca41ae0) {
    FUN_144b3d300(&DAT_14ca41ae0);
    if (DAT_14ca41ae0 == -1) {
      FUN_145f087fc();
      FUN_145f086b2();
      FUN_140db5666(&DAT_14ca41a38,0,&DAT_14ca419d0,L"FRectAtlasFilterTexturePS",
                    L"/Engine/Private/RectLightAtlas.usf",L"MainPS",3,1,FUN_1472c5114,FUN_1472c50b4,
                    &LAB_1472c50b0,&LAB_1472c50ac,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca43c38)
      ;
      _DAT_14ca41a38 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f8051f);
      _Init_thread_footer(&DAT_14ca41ae0);
    }
  }
  return &DAT_14ca41a38;
}



// FUNCTION 145f086b2 FUN_145f086b2 body=205 status=ok
// SIG undefined FUN_145f086b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f086b2(void)

{
  if ((DAT_14ca41a37 & 2) == 0) {
    DAT_14ca41a37 = DAT_14ca41a37 | 2;
    _DAT_14ca419d8 = L"FRectAtlasFilterTexturePS";
    _DAT_14ca419f0 = FUN_146826540;
    _DAT_14ca419f8 = FUN_146825d77;
    _DAT_14ca41a00 = FUN_146825fd6;
    _DAT_14ca41a08 = FUN_1407e02ea;
    _DAT_14ca41a10 = FUN_146826273;
    _DAT_14ca419e8 = FUN_1472c507e;
    _DAT_14ca41a28 = 0xffffffff000000e0;
    _DAT_14ca41a30 = 8;
    DAT_14ca41a34 = 0;
    _DAT_14ca41a18 = &LAB_1472c50a8;
    FUN_145f08780();
    FUN_1407e00cc(&DAT_14ca419d0);
    return;
  }
  return;
}



// FUNCTION 145f08780 FUN_145f08780 body=123 status=ok
// SIG undefined FUN_145f08780(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f08780(void)

{
  _DAT_14ca447c0 = L"BASE";
  DAT_14ca447ea = 4;
  _DAT_14ca447c8 = FUN_140b35ae4();
  _DAT_14ca447d0 = DAT_14ca419e0;
  _DAT_14ca447d8 = &LAB_14682652b;
  DAT_14ca419e0 = &DAT_14ca447c0;
  DAT_14ca41a35 = DAT_14ca41a35 + '\x01';
  _DAT_14ca447e0 = 0x100000000;
  if (*(char *)(_DAT_14ca447c8 + 100) != '\0') {
    DAT_14ca41a36 = DAT_14ca41a36 + '\x01';
  }
  return;
}



// FUNCTION 145f087fc FUN_145f087fc body=261 status=ok
// SIG undefined FUN_145f087fc(void)

void FUN_145f087fc(void)

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
              0x110) < DAT_14ca43cb8) {
    FUN_144b3d300(&DAT_14ca43cb8);
    if (DAT_14ca43cb8 == -1) {
      FUN_145f08902(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x150;
      local_58 = 699;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca43c38,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142fafd97);
      _Init_thread_footer(&DAT_14ca43cb8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f08902 FUN_145f08902 body=226 status=ok
// SIG undefined FUN_145f08902(void)

longlong * FUN_145f08902(longlong *param_1)

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
  pcVar13 = FUN_146303f50;
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



// FUNCTION 145f089e6 FUN_145f089e6 body=132 status=ok
// SIG undefined FUN_145f089e6(void)

undefined1 * FUN_145f089e6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SrcAtlasResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 700;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1472cc9d0;
}



// FUNCTION 145f08a6a FUN_145f08a6a body=136 status=ok
// SIG undefined FUN_145f08a6a(void)

code * FUN_145f08a6a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SrcSlotBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000002bf;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472cc946;
}



// FUNCTION 145f08af2 FUN_145f08af2 body=138 status=ok
// SIG undefined FUN_145f08af2(void)

code * FUN_145f08af2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FilterQuality";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000002bd;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f089e6;
}



// FUNCTION 145f08b7c FUN_145f08b7c body=205 status=ok
// SIG undefined FUN_145f08b7c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f08b7c(void)

{
  if ((DAT_14ca4547f & 2) == 0) {
    DAT_14ca4547f = DAT_14ca4547f | 2;
    _DAT_14ca45420 = L"FComputeExplicitCellBounds_CS";
    _DAT_14ca45438 = FUN_146826540;
    _DAT_14ca45440 = FUN_146825d77;
    _DAT_14ca45448 = FUN_146825fd6;
    _DAT_14ca45450 = FUN_1407e02ea;
    _DAT_14ca45458 = FUN_146826273;
    _DAT_14ca45430 = FUN_1472d994a;
    _DAT_14ca45470 = 0xffffffff000000e0;
    _DAT_14ca45478 = 8;
    DAT_14ca4547c = 0;
    _DAT_14ca45460 = &LAB_1472d9974;
    FUN_145f08c4a();
    FUN_1407e00cc(&DAT_14ca45418);
    return;
  }
  return;
}



// FUNCTION 145f08c4a FUN_145f08c4a body=123 status=ok
// SIG undefined FUN_145f08c4a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f08c4a(void)

{
  _DAT_14ca47110 = L"BASE";
  DAT_14ca4713a = 4;
  _DAT_14ca47118 = FUN_140b35ae4();
  _DAT_14ca47120 = DAT_14ca45428;
  _DAT_14ca47128 = &LAB_14682652b;
  DAT_14ca45428 = &DAT_14ca47110;
  DAT_14ca4547d = DAT_14ca4547d + '\x01';
  _DAT_14ca47130 = 0x100000000;
  if (*(char *)(_DAT_14ca47118 + 100) != '\0') {
    DAT_14ca4547e = DAT_14ca4547e + '\x01';
  }
  return;
}



// FUNCTION 145f08cc6 FUN_145f08cc6 body=226 status=ok
// SIG undefined FUN_145f08cc6(void)

longlong * FUN_145f08cc6(longlong *param_1)

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
  pcVar13 = FUN_146305dc4;
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



// FUNCTION 145f08daa FUN_145f08daa body=136 status=ok
// SIG undefined FUN_145f08daa(void)

code * FUN_145f08daa(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InstanceHierarchyCellHeaders";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer< FPackedCellHeader >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000030e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472dc272;
}



// FUNCTION 145f08e32 FUN_145f08e32 body=138 status=ok
// SIG undefined FUN_145f08e32(void)

code * FUN_145f08e32(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InstanceIds";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer< uint >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000310;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472dc1e8;
}



// FUNCTION 145f08ebc FUN_145f08ebc body=138 status=ok
// SIG undefined FUN_145f08ebc(void)

undefined1 * FUN_145f08ebc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a75e54();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Scene";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSceneUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x305;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_1472dc5ae;
}



// FUNCTION 145f08f46 FUN_145f08f46 body=205 status=ok
// SIG undefined FUN_145f08f46(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f08f46(void)

{
  if ((DAT_14ca5c297 & 2) == 0) {
    DAT_14ca5c297 = DAT_14ca5c297 | 2;
    _DAT_14ca5c238 = L"FWaterTileClassificationBuildListsCS";
    _DAT_14ca5c250 = FUN_146826540;
    _DAT_14ca5c258 = FUN_146825d77;
    _DAT_14ca5c260 = FUN_146825fd6;
    _DAT_14ca5c268 = FUN_1407e02ea;
    _DAT_14ca5c270 = FUN_146826273;
    _DAT_14ca5c248 = FUN_1473156a4;
    _DAT_14ca5c288 = 0xffffffff000000e0;
    _DAT_14ca5c290 = 8;
    DAT_14ca5c294 = 0;
    _DAT_14ca5c278 = &LAB_1473156ce;
    FUN_145f09014();
    FUN_1407e00cc(&DAT_14ca5c230);
    return;
  }
  return;
}



// FUNCTION 145f09014 FUN_145f09014 body=123 status=ok
// SIG undefined FUN_145f09014(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f09014(void)

{
  _DAT_14ca5f710 = L"BASE";
  DAT_14ca5f73a = 4;
  _DAT_14ca5f718 = FUN_140b35ae4();
  _DAT_14ca5f720 = DAT_14ca5c240;
  _DAT_14ca5f728 = &LAB_14682652b;
  DAT_14ca5c240 = &DAT_14ca5f710;
  DAT_14ca5c295 = DAT_14ca5c295 + '\x01';
  _DAT_14ca5f730 = 0x100000000;
  if (*(char *)(_DAT_14ca5f718 + 100) != '\0') {
    DAT_14ca5c296 = DAT_14ca5c296 + '\x01';
  }
  return;
}



// FUNCTION 145f09090 FUN_145f09090 body=226 status=ok
// SIG undefined FUN_145f09090(void)

longlong * FUN_145f09090(longlong *param_1)

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
  pcVar13 = FUN_14630b008;
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



// FUNCTION 145f09174 FUN_145f09174 body=136 status=ok
// SIG undefined FUN_145f09174(void)

code * FUN_145f09174(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TiledViewRes";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000186;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147318574;
}



// FUNCTION 145f091fc FUN_145f091fc body=138 status=ok
// SIG undefined FUN_145f091fc(void)

code * FUN_145f091fc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"WaterTileListDataUAV";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000189;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147318460;
}



// FUNCTION 145f09286 FUN_145f09286 body=138 status=ok
// SIG undefined FUN_145f09286(void)

undefined1 * FUN_145f09286(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1411f35ea();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"View";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x184;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_1473185fe;
}



// FUNCTION 145f09310 FUN_145f09310 body=205 status=ok
// SIG undefined FUN_145f09310(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f09310(void)

{
  if ((DAT_14ca5da47 & 2) == 0) {
    DAT_14ca5da47 = DAT_14ca5da47 | 2;
    _DAT_14ca5d9e8 = L"FSplineMeshTextureFillCS";
    _DAT_14ca5da00 = FUN_146826540;
    _DAT_14ca5da08 = FUN_146825d77;
    _DAT_14ca5da10 = FUN_146825fd6;
    _DAT_14ca5da18 = FUN_1407e02ea;
    _DAT_14ca5da20 = FUN_146826273;
    _DAT_14ca5d9f8 = FUN_147317086;
    _DAT_14ca5da38 = 0xffffffff000000e0;
    _DAT_14ca5da40 = 8;
    DAT_14ca5da44 = 0;
    _DAT_14ca5da28 = &LAB_1473170b0;
    FUN_145f093de();
    FUN_1407e00cc(&DAT_14ca5d9e0);
    return;
  }
  return;
}



// FUNCTION 145f093de FUN_145f093de body=123 status=ok
// SIG undefined FUN_145f093de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f093de(void)

{
  _DAT_14ca5fc18 = L"BASE";
  DAT_14ca5fc42 = 4;
  _DAT_14ca5fc20 = FUN_140b35ae4();
  _DAT_14ca5fc28 = DAT_14ca5d9f0;
  _DAT_14ca5fc30 = &LAB_14682652b;
  DAT_14ca5d9f0 = &DAT_14ca5fc18;
  DAT_14ca5da45 = DAT_14ca5da45 + '\x01';
  _DAT_14ca5fc38 = 0x100000000;
  if (*(char *)(_DAT_14ca5fc20 + 100) != '\0') {
    DAT_14ca5da46 = DAT_14ca5da46 + '\x01';
  }
  return;
}



// FUNCTION 145f0945a FUN_145f0945a body=226 status=ok
// SIG undefined FUN_145f0945a(void)

longlong * FUN_145f0945a(longlong *param_1)

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
  pcVar13 = FUN_14630cab4;
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



// FUNCTION 145f0953e FUN_145f0953e body=136 status=ok
// SIG undefined FUN_145f0953e(void)

code * FUN_145f0953e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"UpdateRequests";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000072;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14731c9a0;
}



// FUNCTION 145f095c6 FUN_145f095c6 body=138 status=ok
// SIG undefined FUN_145f095c6(void)

code * FUN_145f095c6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SplineRotTextureOut";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000070;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14731ca2a;
}



// FUNCTION 145f09650 FUN_145f09650 body=138 status=ok
// SIG undefined FUN_145f09650(void)

undefined1 * FUN_145f09650(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a75e54();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Scene";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSceneUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x6e;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_14731cab4;
}



// FUNCTION 145f096da FUN_145f096da body=292 status=ok
// SIG undefined FUN_145f096da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f096da(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca62038) {
    FUN_144b3d300(&DAT_14ca62038);
    if (DAT_14ca62038 == -1) {
      FUN_145f09948();
      FUN_145f097fe();
      FUN_140db5666(&DAT_14ca61f90,0,&DAT_14ca61f28,L"FComputeVariableRateShadingImageGeneration",
                    L"/Engine/Private/VariableRateShading/VRSShadingRateFoveated.usf",
                    L"GenerateShadingRateTexture",5,1,FUN_1473237ea,FUN_14732378a,&LAB_147323772,
                    &LAB_14732376e,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca63108);
      _DAT_14ca61f90 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430b9f13);
      _Init_thread_footer(&DAT_14ca62038);
    }
  }
  return &DAT_14ca61f90;
}



// FUNCTION 145f097fe FUN_145f097fe body=205 status=ok
// SIG undefined FUN_145f097fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f097fe(void)

{
  if ((DAT_14ca61f8f & 2) == 0) {
    DAT_14ca61f8f = DAT_14ca61f8f | 2;
    _DAT_14ca61f30 = L"FComputeVariableRateShadingImageGeneration";
    _DAT_14ca61f48 = FUN_146826540;
    _DAT_14ca61f50 = FUN_146825d77;
    _DAT_14ca61f58 = FUN_146825fd6;
    _DAT_14ca61f60 = FUN_1407e02ea;
    _DAT_14ca61f68 = FUN_146826273;
    _DAT_14ca61f40 = FUN_147323740;
    _DAT_14ca61f80 = 0xffffffff000000e0;
    _DAT_14ca61f88 = 8;
    DAT_14ca61f8c = 0;
    _DAT_14ca61f70 = &LAB_14732376a;
    FUN_145f098cc();
    FUN_1407e00cc(&DAT_14ca61f28);
    return;
  }
  return;
}



// FUNCTION 145f098cc FUN_145f098cc body=123 status=ok
// SIG undefined FUN_145f098cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f098cc(void)

{
  _DAT_14ca63a50 = L"BASE";
  DAT_14ca63a7a = 4;
  _DAT_14ca63a58 = FUN_140b35ae4();
  _DAT_14ca63a60 = DAT_14ca61f38;
  _DAT_14ca63a68 = &LAB_14682652b;
  DAT_14ca61f38 = &DAT_14ca63a50;
  DAT_14ca61f8d = DAT_14ca61f8d + '\x01';
  _DAT_14ca63a70 = 0x100000000;
  if (*(char *)(_DAT_14ca63a58 + 100) != '\0') {
    DAT_14ca61f8e = DAT_14ca61f8e + '\x01';
  }
  return;
}



// FUNCTION 145f09948 FUN_145f09948 body=261 status=ok
// SIG undefined FUN_145f09948(void)

void FUN_145f09948(void)

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
              0x110) < DAT_14ca63188) {
    FUN_144b3d300(&DAT_14ca63188);
    if (DAT_14ca63188 == -1) {
      FUN_145f09a4e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x51;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca63108,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430c1f8c);
      _Init_thread_footer(&DAT_14ca63188);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f09a4e FUN_145f09a4e body=226 status=ok
// SIG undefined FUN_145f09a4e(void)

longlong * FUN_145f09a4e(longlong *param_1)

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
  pcVar13 = FUN_14630fcfc;
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



// FUNCTION 145f09b32 FUN_145f09b32 body=132 status=ok
// SIG undefined FUN_145f09b32(void)

undefined1 * FUN_145f09b32(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x52;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147327be2;
}



// FUNCTION 145f09bb6 FUN_145f09bb6 body=136 status=ok
// SIG undefined FUN_145f09bb6(void)

code * FUN_145f09bb6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RightEyeCenterPixelXY";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000055;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f09c3e;
}



// FUNCTION 145f09c3e FUN_145f09c3e body=138 status=ok
// SIG undefined FUN_145f09c3e(void)

code * FUN_145f09c3e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LeftEyeCenterPixelXY";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000054;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147327b58;
}



// FUNCTION 145f09cc8 FUN_145f09cc8 body=205 status=ok
// SIG undefined FUN_145f09cc8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f09cc8(void)

{
  if ((DAT_14ca66197 & 2) == 0) {
    DAT_14ca66197 = DAT_14ca66197 | 2;
    _DAT_14ca66138 = L"FCullPerPageDrawCommandsCs";
    _DAT_14ca66150 = FUN_146826540;
    _DAT_14ca66158 = FUN_146825d77;
    _DAT_14ca66160 = FUN_146825fd6;
    _DAT_14ca66168 = FUN_1407e02ea;
    _DAT_14ca66170 = FUN_146826273;
    _DAT_14ca66148 = FUN_14732c59c;
    _DAT_14ca66188 = 0xffffffff000000e0;
    _DAT_14ca66190 = 8;
    DAT_14ca66194 = 0;
    _DAT_14ca66178 = &LAB_14732c5c6;
    FUN_145f09d96();
    FUN_1407e00cc(&DAT_14ca66130);
    return;
  }
  return;
}



// FUNCTION 145f09d96 FUN_145f09d96 body=123 status=ok
// SIG undefined FUN_145f09d96(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f09d96(void)

{
  _DAT_14ca68f30 = L"BASE";
  DAT_14ca68f5a = 4;
  _DAT_14ca68f38 = FUN_140b35ae4();
  _DAT_14ca68f40 = DAT_14ca66140;
  _DAT_14ca68f48 = &LAB_14682652b;
  DAT_14ca66140 = &DAT_14ca68f30;
  DAT_14ca66195 = DAT_14ca66195 + '\x01';
  _DAT_14ca68f50 = 0x100000000;
  if (*(char *)(_DAT_14ca68f38 + 100) != '\0') {
    DAT_14ca66196 = DAT_14ca66196 + '\x01';
  }
  return;
}



// FUNCTION 145f09e12 FUN_145f09e12 body=136 status=ok
// SIG undefined FUN_145f09e12(void)

code * FUN_145f09e12(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VisibleInstanceCountBufferOut";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa000000ad5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147330da2;
}



// FUNCTION 145f09e9a FUN_145f09e9a body=138 status=ok
// SIG undefined FUN_145f09e9a(void)

code * FUN_145f09e9a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TotalPrimaryViews";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5800000ac7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14733127c;
}



// FUNCTION 145f09f24 FUN_145f09f24 body=138 status=ok
// SIG undefined FUN_145f09f24(void)

code * FUN_145f09f24(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BatchInds";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer< uint32 >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8800000ad1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147330eb6;
}



// FUNCTION 145f09fae FUN_145f09fae body=205 status=ok
// SIG undefined FUN_145f09fae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f09fae(void)

{
  if ((DAT_14ca6664f & 2) == 0) {
    DAT_14ca6664f = DAT_14ca6664f | 2;
    _DAT_14ca665f0 = L"FSelectPagesForHZBAndUpdateDirtyFlagsCS";
    _DAT_14ca66608 = FUN_146826540;
    _DAT_14ca66610 = FUN_146825d77;
    _DAT_14ca66618 = FUN_146825fd6;
    _DAT_14ca66620 = FUN_1407e02ea;
    _DAT_14ca66628 = FUN_146826273;
    _DAT_14ca66600 = FUN_14732ca7c;
    _DAT_14ca66640 = 0xffffffff000000e0;
    _DAT_14ca66648 = 8;
    DAT_14ca6664c = 0;
    _DAT_14ca66630 = &LAB_14732caa6;
    FUN_145f0a07c();
    FUN_1407e00cc(&DAT_14ca665e8);
    return;
  }
  return;
}



// FUNCTION 145f0a07c FUN_145f0a07c body=123 status=ok
// SIG undefined FUN_145f0a07c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f0a07c(void)

{
  _DAT_14ca68ff0 = L"BASE";
  DAT_14ca6901a = 4;
  _DAT_14ca68ff8 = FUN_140b35ae4();
  _DAT_14ca69000 = DAT_14ca665f8;
  _DAT_14ca69008 = &LAB_14682652b;
  DAT_14ca665f8 = &DAT_14ca68ff0;
  DAT_14ca6664d = DAT_14ca6664d + '\x01';
  _DAT_14ca69010 = 0x100000000;
  if (*(char *)(_DAT_14ca68ff8 + 100) != '\0') {
    DAT_14ca6664e = DAT_14ca6664e + '\x01';
  }
  return;
}



// FUNCTION 145f0a0f8 FUN_145f0a0f8 body=226 status=ok
// SIG undefined FUN_145f0a0f8(void)

longlong * FUN_145f0a0f8(longlong *param_1)

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
  pcVar13 = FUN_146312d4a;
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



// FUNCTION 145f0a1dc FUN_145f0a1dc body=136 status=ok
// SIG undefined FUN_145f0a1dc(void)

code * FUN_145f0a1dc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutPhysicalPagesForHZB";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer< uint >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000e85;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1473316d8;
}



// FUNCTION 145f0a264 FUN_145f0a264 body=138 status=ok
// SIG undefined FUN_145f0a264(void)

code * FUN_145f0a264(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bFirstBuildThisFrame";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000e87;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14733164e;
}



// FUNCTION 145f0a2ee FUN_145f0a2ee body=138 status=ok
// SIG undefined FUN_145f0a2ee(void)

code * FUN_145f0a2ee(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000e83;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146312dd2;
}



// FUNCTION 145f0a378 FUN_145f0a378 body=292 status=ok
// SIG undefined FUN_145f0a378(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f0a378(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa2088) {
    FUN_144b3d300(&DAT_14caa2088);
    if (DAT_14caa2088 == -1) {
      FUN_145f0a5e6();
      FUN_145f0a49c();
      FUN_140db5666(&DAT_14caa1fe0,0,&DAT_14caa1f78,L"FLandscapeResampleMergedTexturePS",
                    L"/Engine/Private/Landscape/LandscapeMergeTexturesPS.usf",
                    L"ResampleMergedTexture",3,4,FUN_147453d52,FUN_147453cf2,&LAB_147453cc6,
                    &LAB_147453cc2,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14caa23c0);
      _DAT_14caa1fe0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143243ea6);
      _Init_thread_footer(&DAT_14caa2088);
    }
  }
  return &DAT_14caa1fe0;
}



// FUNCTION 145f0a49c FUN_145f0a49c body=205 status=ok
// SIG undefined FUN_145f0a49c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f0a49c(void)

{
  if ((DAT_14caa1fdf & 2) == 0) {
    DAT_14caa1fdf = DAT_14caa1fdf | 2;
    _DAT_14caa1f80 = L"FLandscapeResampleMergedTexturePS";
    _DAT_14caa1f98 = FUN_146826540;
    _DAT_14caa1fa0 = FUN_146825d77;
    _DAT_14caa1fa8 = FUN_146825fd6;
    _DAT_14caa1fb0 = FUN_1407e02ea;
    _DAT_14caa1fb8 = FUN_146826273;
    _DAT_14caa1f90 = FUN_147453c94;
    _DAT_14caa1fd0 = 0xffffffff000000e0;
    _DAT_14caa1fd8 = 8;
    DAT_14caa1fdc = 0;
    _DAT_14caa1fc0 = &LAB_147453cbe;
    FUN_145f0a56a();
    FUN_1407e00cc(&DAT_14caa1f78);
    return;
  }
  return;
}



// FUNCTION 145f0a56a FUN_145f0a56a body=123 status=ok
// SIG undefined FUN_145f0a56a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f0a56a(void)

{
  _DAT_14caa2500 = L"BASE";
  DAT_14caa252a = 4;
  _DAT_14caa2508 = FUN_140b35ae4();
  _DAT_14caa2510 = DAT_14caa1f88;
  _DAT_14caa2518 = &LAB_14682652b;
  DAT_14caa1f88 = &DAT_14caa2500;
  DAT_14caa1fdd = DAT_14caa1fdd + '\x01';
  _DAT_14caa2520 = 0x100000000;
  if (*(char *)(_DAT_14caa2508 + 100) != '\0') {
    DAT_14caa1fde = DAT_14caa1fde + '\x01';
  }
  return;
}



// FUNCTION 145f0a5e6 FUN_145f0a5e6 body=261 status=ok
// SIG undefined FUN_145f0a5e6(void)

void FUN_145f0a5e6(void)

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
              0x110) < DAT_14caa2440) {
    FUN_144b3d300(&DAT_14caa2440);
    if (DAT_14caa2440 == -1) {
      FUN_145f0a6ec(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x160;
      local_58 = 0xbbe;
      local_48 = local_20;
      FUN_140b49562(&DAT_14caa23c0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143248ede);
      _Init_thread_footer(&DAT_14caa2440);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f0a6ec FUN_145f0a6ec body=226 status=ok
// SIG undefined FUN_145f0a6ec(void)

longlong * FUN_145f0a6ec(longlong *param_1)

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
  pcVar13 = FUN_146324708;
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



// FUNCTION 145f0a7d0 FUN_145f0a7d0 body=130 status=ok
// SIG undefined FUN_145f0a7d0(void)

undefined1 * FUN_145f0a7d0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InOutputUVToMergedTextureUV";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xbbf;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1474575e6;
}



// FUNCTION 145f0a852 FUN_145f0a852 body=138 status=ok
// SIG undefined FUN_145f0a852(void)

code * FUN_145f0a852(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InMergedTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000bc0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f0a7d0;
}



// FUNCTION 145f0a8dc FUN_145f0a8dc body=138 status=ok
// SIG undefined FUN_145f0a8dc(void)

code * FUN_145f0a8dc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InRenderAreaSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000bc2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14745755c;
}



// FUNCTION 145f0a966 FUN_145f0a966 body=292 status=ok
// SIG undefined FUN_145f0a966(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f0a966(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa27c0) {
    FUN_144b3d300(&DAT_14caa27c0);
    if (DAT_14caa27c0 == -1) {
      FUN_145f0abd4();
      FUN_145f0aa8a();
      FUN_140db5666(&DAT_14caa2718,0,&DAT_14caa26b0,L"FBuildLandscapeTileDataCS",
                    L"/Engine/Private/Landscape/LandscapeCulling.usf",L"BuildLandscapeTileDataCS",5,
                    1,FUN_14745bd92,FUN_14745bd32,&LAB_145a30b2a,&LAB_14745bd2e,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14caa2828);
      _DAT_14caa2718 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14324bdb1);
      _Init_thread_footer(&DAT_14caa27c0);
    }
  }
  return &DAT_14caa2718;
}



// FUNCTION 145f0aa8a FUN_145f0aa8a body=205 status=ok
// SIG undefined FUN_145f0aa8a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f0aa8a(void)

{
  if ((DAT_14caa2717 & 2) == 0) {
    DAT_14caa2717 = DAT_14caa2717 | 2;
    _DAT_14caa26b8 = L"FBuildLandscapeTileDataCS";
    _DAT_14caa26d0 = FUN_146826540;
    _DAT_14caa26d8 = FUN_146825d77;
    _DAT_14caa26e0 = FUN_146825fd6;
    _DAT_14caa26e8 = FUN_1407e02ea;
    _DAT_14caa26f0 = FUN_146826273;
    _DAT_14caa26c8 = FUN_14745bd00;
    _DAT_14caa2708 = 0xffffffff000000e0;
    _DAT_14caa2710 = 8;
    DAT_14caa2714 = 0;
    _DAT_14caa26f8 = &LAB_14745bd2a;
    FUN_145f0ab58();
    FUN_1407e00cc(&DAT_14caa26b0);
    return;
  }
  return;
}



// FUNCTION 145f0ab58 FUN_145f0ab58 body=123 status=ok
// SIG undefined FUN_145f0ab58(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f0ab58(void)

{
  _DAT_14caa28f8 = L"BASE";
  DAT_14caa2922 = 4;
  _DAT_14caa2900 = FUN_140b35ae4();
  _DAT_14caa2908 = DAT_14caa26c0;
  _DAT_14caa2910 = &LAB_14682652b;
  DAT_14caa26c0 = &DAT_14caa28f8;
  DAT_14caa2715 = DAT_14caa2715 + '\x01';
  _DAT_14caa2918 = 0x100000000;
  if (*(char *)(_DAT_14caa2900 + 100) != '\0') {
    DAT_14caa2716 = DAT_14caa2716 + '\x01';
  }
  return;
}



// FUNCTION 145f0abd4 FUN_145f0abd4 body=261 status=ok
// SIG undefined FUN_145f0abd4(void)

void FUN_145f0abd4(void)

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
              0x110) < DAT_14caa28a8) {
    FUN_144b3d300(&DAT_14caa28a8);
    if (DAT_14caa28a8 == -1) {
      FUN_145f0acda(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x187;
      local_48 = local_20;
      FUN_140b49562(&DAT_14caa2828,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14324da55);
      _Init_thread_footer(&DAT_14caa28a8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f0acda FUN_145f0acda body=226 status=ok
// SIG undefined FUN_145f0acda(void)

longlong * FUN_145f0acda(longlong *param_1)

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
  pcVar13 = FUN_146324864;
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



// FUNCTION 145f0adbe FUN_145f0adbe body=132 status=ok
// SIG undefined FUN_145f0adbe(void)

undefined1 * FUN_145f0adbe(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"IndirectArgsBufferOut";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x188;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14745c5c6;
}



// FUNCTION 145f0ae42 FUN_145f0ae42 body=136 status=ok
// SIG undefined FUN_145f0ae42(void)

code * FUN_145f0ae42(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumLandscapeSections";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000018c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14745c4b2;
}



// FUNCTION 145f0aeca FUN_145f0aeca body=138 status=ok
// SIG undefined FUN_145f0aeca(void)

code * FUN_145f0aeca(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TileDataOut";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000189;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f0adbe;
}



// FUNCTION 145f0af54 FUN_145f0af54 body=292 status=ok
// SIG undefined FUN_145f0af54(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f0af54(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa3f20) {
    FUN_144b3d300(&DAT_14caa3f20);
    if (DAT_14caa3f20 == -1) {
      FUN_145f0b1c2();
      FUN_145f0b078();
      FUN_140db5666(&DAT_14caa3e78,0,&DAT_14caa3e10,
                    L"FLandscapeEditLayersHeightmapsMergeEditLayerPS",
                    L"/Engine/Private/Landscape/LandscapeEditLayersHeightmaps.usf",
                    L"MergeEditLayerPS",3,1,FUN_14745f148,FUN_14745f0ec,&LAB_14632497c,
                    &LAB_14745f0e8,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14caa53c8);
      _DAT_14caa3e78 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14324e100);
      _Init_thread_footer(&DAT_14caa3f20);
    }
  }
  return &DAT_14caa3e78;
}



// FUNCTION 145f0b078 FUN_145f0b078 body=205 status=ok
// SIG undefined FUN_145f0b078(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f0b078(void)

{
  if ((DAT_14caa3e77 & 2) == 0) {
    DAT_14caa3e77 = DAT_14caa3e77 | 2;
    _DAT_14caa3e18 = L"FLandscapeEditLayersHeightmapsMergeEditLayerPS";
    _DAT_14caa3e30 = FUN_146826540;
    _DAT_14caa3e38 = FUN_146825d77;
    _DAT_14caa3e40 = FUN_146825fd6;
    _DAT_14caa3e48 = FUN_1407e02ea;
    _DAT_14caa3e50 = FUN_146826273;
    _DAT_14caa3e28 = FUN_14745f0ba;
    _DAT_14caa3e68 = 0xffffffff000000e0;
    _DAT_14caa3e70 = 8;
    DAT_14caa3e74 = 0;
    _DAT_14caa3e58 = &LAB_14745f0e4;
    FUN_145f0b146();
    FUN_1407e00cc(&DAT_14caa3e10);
    return;
  }
  return;
}



// FUNCTION 145f0b146 FUN_145f0b146 body=123 status=ok
// SIG undefined FUN_145f0b146(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f0b146(void)

{
  _DAT_14caa5b68 = L"BASE";
  DAT_14caa5b92 = 4;
  _DAT_14caa5b70 = FUN_140b35ae4();
  _DAT_14caa5b78 = DAT_14caa3e20;
  _DAT_14caa5b80 = &LAB_14682652b;
  DAT_14caa3e20 = &DAT_14caa5b68;
  DAT_14caa3e75 = DAT_14caa3e75 + '\x01';
  _DAT_14caa5b88 = 0x100000000;
  if (*(char *)(_DAT_14caa5b70 + 100) != '\0') {
    DAT_14caa3e76 = DAT_14caa3e76 + '\x01';
  }
  return;
}



// FUNCTION 145f0b1c2 FUN_145f0b1c2 body=261 status=ok
// SIG undefined FUN_145f0b1c2(void)

void FUN_145f0b1c2(void)

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
              0x110) < DAT_14caa5448) {
    FUN_144b3d300(&DAT_14caa5448);
    if (DAT_14caa5448 == -1) {
      FUN_145f0b2c8(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x120;
      local_58 = 0x68d;
      local_48 = local_20;
      FUN_140b49562(&DAT_14caa53c8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14324e1cc);
      _Init_thread_footer(&DAT_14caa5448);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f0b2c8 FUN_145f0b2c8 body=226 status=ok
// SIG undefined FUN_145f0b2c8(void)

longlong * FUN_145f0b2c8(longlong *param_1)

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
  pcVar13 = FUN_146324f88;
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



// FUNCTION 145f0b3ac FUN_145f0b3ac body=130 status=ok
// SIG undefined FUN_145f0b3ac(void)

undefined1 * FUN_145f0b3ac(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InEditLayerBlendMode";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x68e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14746046c;
}



// FUNCTION 145f0b42e FUN_145f0b42e body=138 status=ok
// SIG undefined FUN_145f0b42e(void)

code * FUN_145f0b42e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InPreviousEditLayersHeightmap";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000691;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f0b4b8;
}



// FUNCTION 145f0b4b8 FUN_145f0b4b8 body=138 status=ok
// SIG undefined FUN_145f0b4b8(void)

code * FUN_145f0b4b8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InCurrentEditLayerHeightmap";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000690;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1474603e2;
}



// FUNCTION 145f0b542 FUN_145f0b542 body=292 status=ok
// SIG undefined FUN_145f0b542(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f0b542(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa4298) {
    FUN_144b3d300(&DAT_14caa4298);
    if (DAT_14caa4298 == -1) {
      FUN_145f0b7b0();
      FUN_145f0b666();
      FUN_140db5666(&DAT_14caa41f0,0,&DAT_14caa4188,
                    L"FLandscapeEditLayersWeightmapsMergeEditLayerPS",
                    L"/Engine/Private/Landscape/LandscapeEditLayersWeightmaps.usf",
                    L"MergeEditLayerPS",3,1,FUN_14745f382,FUN_14745f326,&LAB_146324994,
                    &LAB_14745f322,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14caa5560);
      _DAT_14caa41f0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14324e124);
      _Init_thread_footer(&DAT_14caa4298);
    }
  }
  return &DAT_14caa41f0;
}



// FUNCTION 145f0b666 FUN_145f0b666 body=205 status=ok
// SIG undefined FUN_145f0b666(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f0b666(void)

{
  if ((DAT_14caa41ef & 2) == 0) {
    DAT_14caa41ef = DAT_14caa41ef | 2;
    _DAT_14caa4190 = L"FLandscapeEditLayersWeightmapsMergeEditLayerPS";
    _DAT_14caa41a8 = FUN_146826540;
    _DAT_14caa41b0 = FUN_146825d77;
    _DAT_14caa41b8 = FUN_146825fd6;
    _DAT_14caa41c0 = FUN_1407e02ea;
    _DAT_14caa41c8 = FUN_146826273;
    _DAT_14caa41a0 = FUN_14745f2f4;
    _DAT_14caa41e0 = 0xffffffff000000e0;
    _DAT_14caa41e8 = 8;
    DAT_14caa41ec = 0;
    _DAT_14caa41d0 = &LAB_14745f31e;
    FUN_145f0b734();
    FUN_1407e00cc(&DAT_14caa4188);
    return;
  }
  return;
}



// FUNCTION 145f0b734 FUN_145f0b734 body=123 status=ok
// SIG undefined FUN_145f0b734(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f0b734(void)

{
  _DAT_14caa5bf8 = L"BASE";
  DAT_14caa5c22 = 4;
  _DAT_14caa5c00 = FUN_140b35ae4();
  _DAT_14caa5c08 = DAT_14caa4198;
  _DAT_14caa5c10 = &LAB_14682652b;
  DAT_14caa4198 = &DAT_14caa5bf8;
  DAT_14caa41ed = DAT_14caa41ed + '\x01';
  _DAT_14caa5c18 = 0x100000000;
  if (*(char *)(_DAT_14caa5c00 + 100) != '\0') {
    DAT_14caa41ee = DAT_14caa41ee + '\x01';
  }
  return;
}



// FUNCTION 145f0b7b0 FUN_145f0b7b0 body=261 status=ok
// SIG undefined FUN_145f0b7b0(void)

void FUN_145f0b7b0(void)

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
              0x110) < DAT_14caa55e0) {
    FUN_144b3d300(&DAT_14caa55e0);
    if (DAT_14caa55e0 == -1) {
      FUN_145f0b8b6(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x120;
      local_58 = 0x71d;
      local_48 = local_20;
      FUN_140b49562(&DAT_14caa5560,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14324e1f0);
      _Init_thread_footer(&DAT_14caa55e0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f0b8b6 FUN_145f0b8b6 body=226 status=ok
// SIG undefined FUN_145f0b8b6(void)

longlong * FUN_145f0b8b6(longlong *param_1)

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
  pcVar13 = FUN_1463251a8;
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



// FUNCTION 145f0b99a FUN_145f0b99a body=132 status=ok
// SIG undefined FUN_145f0b99a(void)

undefined1 * FUN_145f0b99a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InPaintLayerIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x71e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1474607ac;
}



// FUNCTION 145f0ba1e FUN_145f0ba1e body=136 status=ok
// SIG undefined FUN_145f0ba1e(void)

code * FUN_145f0ba1e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InEditLayerPaintLayerBlendMode";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000071f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f0b99a;
}



// FUNCTION 145f0baa6 FUN_145f0baa6 body=138 status=ok
// SIG undefined FUN_145f0baa6(void)

code * FUN_145f0baa6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InPreviousEditLayersWeightmaps";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2DArray<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000722;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147460698;
}



// FUNCTION 145f0bb30 FUN_145f0bb30 body=292 status=ok
// SIG undefined FUN_145f0bb30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f0bb30(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa43c0) {
    FUN_144b3d300(&DAT_14caa43c0);
    if (DAT_14caa43c0 == -1) {
      FUN_145f0bd9e();
      FUN_145f0bc54();
      FUN_140db5666(&DAT_14caa4318,0,&DAT_14caa42b0,
                    L"FLandscapeEditLayersWeightmapsPerformLegacyWeightBlendingPS",
                    L"/Engine/Private/Landscape/LandscapeEditLayersWeightmaps.usf",
                    L"PerformLegacyWeightBlendingPS",3,1,FUN_14745f440,FUN_14745f3e4,&LAB_14632499c,
                    &LAB_14745f3e0,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14caa55e8);
      _DAT_14caa4318 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14324e130);
      _Init_thread_footer(&DAT_14caa43c0);
    }
  }
  return &DAT_14caa4318;
}



// FUNCTION 145f0bc54 FUN_145f0bc54 body=205 status=ok
// SIG undefined FUN_145f0bc54(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f0bc54(void)

{
  if ((DAT_14caa4317 & 2) == 0) {
    DAT_14caa4317 = DAT_14caa4317 | 2;
    _DAT_14caa42b8 = L"FLandscapeEditLayersWeightmapsPerformLegacyWeightBlendingPS";
    _DAT_14caa42d0 = FUN_146826540;
    _DAT_14caa42d8 = FUN_146825d77;
    _DAT_14caa42e0 = FUN_146825fd6;
    _DAT_14caa42e8 = FUN_1407e02ea;
    _DAT_14caa42f0 = FUN_146826273;
    _DAT_14caa42c8 = FUN_14745f3b2;
    _DAT_14caa4308 = 0xffffffff000000e0;
    _DAT_14caa4310 = 8;
    DAT_14caa4314 = 0;
    _DAT_14caa42f8 = &LAB_14745f3dc;
    FUN_145f0bd22();
    FUN_1407e00cc(&DAT_14caa42b0);
    return;
  }
  return;
}



// FUNCTION 145f0bd22 FUN_145f0bd22 body=123 status=ok
// SIG undefined FUN_145f0bd22(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f0bd22(void)

{
  _DAT_14caa5c28 = L"BASE";
  DAT_14caa5c52 = 4;
  _DAT_14caa5c30 = FUN_140b35ae4();
  _DAT_14caa5c38 = DAT_14caa42c0;
  _DAT_14caa5c40 = &LAB_14682652b;
  DAT_14caa42c0 = &DAT_14caa5c28;
  DAT_14caa4315 = DAT_14caa4315 + '\x01';
  _DAT_14caa5c48 = 0x100000000;
  if (*(char *)(_DAT_14caa5c30 + 100) != '\0') {
    DAT_14caa4316 = DAT_14caa4316 + '\x01';
  }
  return;
}



// FUNCTION 145f0bd9e FUN_145f0bd9e body=261 status=ok
// SIG undefined FUN_145f0bd9e(void)

void FUN_145f0bd9e(void)

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
              0x110) < DAT_14caa5668) {
    FUN_144b3d300(&DAT_14caa5668);
    if (DAT_14caa5668 == -1) {
      FUN_145f0bea4(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x120;
      local_58 = 0x74c;
      local_48 = local_20;
      FUN_140b49562(&DAT_14caa55e8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14324e1fc);
      _Init_thread_footer(&DAT_14caa5668);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f0bea4 FUN_145f0bea4 body=226 status=ok
// SIG undefined FUN_145f0bea4(void)

longlong * FUN_145f0bea4(longlong *param_1)

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
  pcVar13 = FUN_146325230;
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



// FUNCTION 145f0bf88 FUN_145f0bf88 body=130 status=ok
// SIG undefined FUN_145f0bf88(void)

undefined1 * FUN_145f0bf88(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InPaintLayerIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x74d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14746083a;
}



// FUNCTION 145f0c00a FUN_145f0c00a body=138 status=ok
// SIG undefined FUN_145f0c00a(void)

code * FUN_145f0c00a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InCurrentEditLayerWeightmaps";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2DArray<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000750;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1474607b0;
}



// FUNCTION 145f0c094 FUN_145f0c094 body=138 status=ok
// SIG undefined FUN_145f0c094(void)

code * FUN_145f0c094(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InNumPaintLayers";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000074e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f0bf88;
}



// FUNCTION 145f0c11e FUN_145f0c11e body=292 status=ok
// SIG undefined FUN_145f0c11e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f0c11e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caacb60) {
    FUN_144b3d300(&DAT_14caacb60);
    if (DAT_14caacb60 == -1) {
      FUN_145f0c38c();
      FUN_145f0c242();
      FUN_140db5666(&DAT_14caacab8,0,&DAT_14caaca50,L"FSlatePostProcessDownsamplePS",
                    L"/Engine/Private/SlatePostProcessPixelShader.usf",L"DownsampleMain",3,1,
                    FUN_14750cdf4,FUN_14750cd94,&LAB_14750cd90,&LAB_14750cd8c,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cab0298);
      _DAT_14caacab8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1432b95d0);
      _Init_thread_footer(&DAT_14caacb60);
    }
  }
  return &DAT_14caacab8;
}



// FUNCTION 145f0c242 FUN_145f0c242 body=205 status=ok
// SIG undefined FUN_145f0c242(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f0c242(void)

{
  if ((DAT_14caacab7 & 2) == 0) {
    DAT_14caacab7 = DAT_14caacab7 | 2;
    _DAT_14caaca58 = L"FSlatePostProcessDownsamplePS";
    _DAT_14caaca70 = FUN_146826540;
    _DAT_14caaca78 = FUN_146825d77;
    _DAT_14caaca80 = FUN_146825fd6;
    _DAT_14caaca88 = FUN_1407e02ea;
    _DAT_14caaca90 = FUN_146826273;
    _DAT_14caaca68 = FUN_14750cd5e;
    _DAT_14caacaa8 = 0xffffffff000000e0;
    _DAT_14caacab0 = 8;
    DAT_14caacab4 = 0;
    _DAT_14caaca98 = &LAB_14750cd88;
    FUN_145f0c310();
    FUN_1407e00cc(&DAT_14caaca50);
    return;
  }
  return;
}



// FUNCTION 145f0c310 FUN_145f0c310 body=123 status=ok
// SIG undefined FUN_145f0c310(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f0c310(void)

{
  _DAT_14cab0d50 = L"BASE";
  DAT_14cab0d7a = 4;
  _DAT_14cab0d58 = FUN_140b35ae4();
  _DAT_14cab0d60 = DAT_14caaca60;
  _DAT_14cab0d68 = &LAB_14682652b;
  DAT_14caaca60 = &DAT_14cab0d50;
  DAT_14caacab5 = DAT_14caacab5 + '\x01';
  _DAT_14cab0d70 = 0x100000000;
  if (*(char *)(_DAT_14cab0d58 + 100) != '\0') {
    DAT_14caacab6 = DAT_14caacab6 + '\x01';
  }
  return;
}



// FUNCTION 145f0c38c FUN_145f0c38c body=261 status=ok
// SIG undefined FUN_145f0c38c(void)

void FUN_145f0c38c(void)

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
              0x110) < DAT_14cab0318) {
    FUN_144b3d300(&DAT_14cab0318);
    if (DAT_14cab0318 == -1) {
      FUN_145f0c492(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x130;
      local_58 = 0x80;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cab0298,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1432c71a4);
      _Init_thread_footer(&DAT_14cab0318);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f0c492 FUN_145f0c492 body=226 status=ok
// SIG undefined FUN_145f0c492(void)

longlong * FUN_145f0c492(longlong *param_1)

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
  pcVar13 = FUN_14633710c;
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



// FUNCTION 145f0c576 FUN_145f0c576 body=130 status=ok
// SIG undefined FUN_145f0c576(void)

undefined1 * FUN_145f0c576(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ElementTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x81;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147510e6a;
}



// FUNCTION 145f0c5f8 FUN_145f0c5f8 body=138 status=ok
// SIG undefined FUN_145f0c5f8(void)

code * FUN_145f0c5f8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ShaderParams";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000083;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147510de0;
}



// FUNCTION 145f0c682 FUN_145f0c682 body=138 status=ok
// SIG undefined FUN_145f0c682(void)

code * FUN_145f0c682(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"UVBounds";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000084;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f0c5f8;
}



// FUNCTION 145f0c70c FUN_145f0c70c body=292 status=ok
// SIG undefined FUN_145f0c70c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f0c70c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cafa8b8) {
    FUN_144b3d300(&DAT_14cafa8b8);
    if (DAT_14cafa8b8 == -1) {
      FUN_145f0c97a();
      FUN_145f0c830();
      FUN_140db5666(&DAT_14cafa810,0,&DAT_14cafa7a8,L"FRemoveSubLevelBricksCS",
                    L"/Engine/Private/VolumetricLightmapStreaming.usf",L"RemoveSubLevelBricksCS",5,1
                    ,FUN_147caf8a6,FUN_147caf846,&LAB_147caf828,&LAB_147caf824,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cafdbf8);
      _DAT_14cafa810 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143657456);
      _Init_thread_footer(&DAT_14cafa8b8);
    }
  }
  return &DAT_14cafa810;
}



// FUNCTION 145f0c830 FUN_145f0c830 body=205 status=ok
// SIG undefined FUN_145f0c830(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f0c830(void)

{
  if ((DAT_14cafa80f & 2) == 0) {
    DAT_14cafa80f = DAT_14cafa80f | 2;
    _DAT_14cafa7b0 = L"FRemoveSubLevelBricksCS";
    _DAT_14cafa7c8 = FUN_146826540;
    _DAT_14cafa7d0 = FUN_146825d77;
    _DAT_14cafa7d8 = FUN_146825fd6;
    _DAT_14cafa7e0 = FUN_1407e02ea;
    _DAT_14cafa7e8 = FUN_146826273;
    _DAT_14cafa7c0 = FUN_147caf7f6;
    _DAT_14cafa800 = 0xffffffff000000e0;
    _DAT_14cafa808 = 8;
    DAT_14cafa80c = 0;
    _DAT_14cafa7f0 = &LAB_147caf820;
    FUN_145f0c8fe();
    FUN_1407e00cc(&DAT_14cafa7a8);
    return;
  }
  return;
}



// FUNCTION 145f0c8fe FUN_145f0c8fe body=123 status=ok
// SIG undefined FUN_145f0c8fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f0c8fe(void)

{
  _DAT_14cafe0c0 = L"BASE";
  DAT_14cafe0ea = 4;
  _DAT_14cafe0c8 = FUN_140b35ae4();
  _DAT_14cafe0d0 = DAT_14cafa7b8;
  _DAT_14cafe0d8 = &LAB_14682652b;
  DAT_14cafa7b8 = &DAT_14cafe0c0;
  DAT_14cafa80d = DAT_14cafa80d + '\x01';
  _DAT_14cafe0e0 = 0x100000000;
  if (*(char *)(_DAT_14cafe0c8 + 100) != '\0') {
    DAT_14cafa80e = DAT_14cafa80e + '\x01';
  }
  return;
}



// FUNCTION 145f0c97a FUN_145f0c97a body=261 status=ok
// SIG undefined FUN_145f0c97a(void)

void FUN_145f0c97a(void)

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
              0x110) < DAT_14cafdc78) {
    FUN_144b3d300(&DAT_14cafdc78);
    if (DAT_14cafdc78 == -1) {
      FUN_145f0ca80(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x1a3;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cafdbf8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14365f96e);
      _Init_thread_footer(&DAT_14cafdc78);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f0ca80 FUN_145f0ca80 body=226 status=ok
// SIG undefined FUN_145f0ca80(void)

longlong * FUN_145f0ca80(longlong *param_1)

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
  pcVar13 = FUN_1463fbc34;
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



// FUNCTION 145f0cb64 FUN_145f0cb64 body=130 status=ok
// SIG undefined FUN_145f0cb64(void)

undefined1 * FUN_145f0cb64(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1a4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147cbf0d2;
}



// FUNCTION 145f0cbe6 FUN_145f0cbe6 body=138 status=ok
// SIG undefined FUN_145f0cbe6(void)

code * FUN_145f0cbe6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"IndirectionTextureOriginalValues";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000001a7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cbf048;
}



// FUNCTION 145f0cc70 FUN_145f0cc70 body=138 status=ok
// SIG undefined FUN_145f0cc70(void)

code * FUN_145f0cc70(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PersistentLevelBrickDataBaseOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000001a5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f0cb64;
}



// FUNCTION 145f0ccfa FUN_145f0ccfa body=292 status=ok
// SIG undefined FUN_145f0ccfa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f0ccfa(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb016b0) {
    FUN_144b3d300(&DAT_14cb016b0);
    if (DAT_14cb016b0 == -1) {
      FUN_145f0cf68();
      FUN_145f0ce1e();
      FUN_140db5666(&DAT_14cb01608,0,&DAT_14cb015a0,L"FSpecularProfileConvolveCS",
                    L"/Engine/Private/SpecularProfile.usf",L"MainCS",5,1,FUN_147cdb1ee,FUN_147cdb18e
                    ,&LAB_147cdb176,&LAB_147cdb172,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14cb01ea8
                   );
      _DAT_14cb01608 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143681040);
      _Init_thread_footer(&DAT_14cb016b0);
    }
  }
  return &DAT_14cb01608;
}



// FUNCTION 145f0ce1e FUN_145f0ce1e body=205 status=ok
// SIG undefined FUN_145f0ce1e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f0ce1e(void)

{
  if ((DAT_14cb01607 & 2) == 0) {
    DAT_14cb01607 = DAT_14cb01607 | 2;
    _DAT_14cb015a8 = L"FSpecularProfileConvolveCS";
    _DAT_14cb015c0 = FUN_146826540;
    _DAT_14cb015c8 = FUN_146825d77;
    _DAT_14cb015d0 = FUN_146825fd6;
    _DAT_14cb015d8 = FUN_1407e02ea;
    _DAT_14cb015e0 = FUN_146826273;
    _DAT_14cb015b8 = FUN_147cdb144;
    _DAT_14cb015f8 = 0xffffffff000000e0;
    _DAT_14cb01600 = 8;
    DAT_14cb01604 = 0;
    _DAT_14cb015e8 = &LAB_147cdb16e;
    FUN_145f0ceec();
    FUN_1407e00cc(&DAT_14cb015a0);
    return;
  }
  return;
}



// FUNCTION 145f0ceec FUN_145f0ceec body=123 status=ok
// SIG undefined FUN_145f0ceec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f0ceec(void)

{
  _DAT_14cb02010 = L"BASE";
  DAT_14cb0203a = 4;
  _DAT_14cb02018 = FUN_140b35ae4();
  _DAT_14cb02020 = DAT_14cb015b0;
  _DAT_14cb02028 = &LAB_14682652b;
  DAT_14cb015b0 = &DAT_14cb02010;
  DAT_14cb01605 = DAT_14cb01605 + '\x01';
  _DAT_14cb02030 = 0x100000000;
  if (*(char *)(_DAT_14cb02018 + 100) != '\0') {
    DAT_14cb01606 = DAT_14cb01606 + '\x01';
  }
  return;
}



// FUNCTION 145f0cf68 FUN_145f0cf68 body=261 status=ok
// SIG undefined FUN_145f0cf68(void)

void FUN_145f0cf68(void)

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
              0x110) < DAT_14cb01f28) {
    FUN_144b3d300(&DAT_14cb01f28);
    if (DAT_14cb01f28 == -1) {
      FUN_145f0d06e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 100;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb01ea8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143697ac4);
      _Init_thread_footer(&DAT_14cb01f28);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f0d06e FUN_145f0d06e body=226 status=ok
// SIG undefined FUN_145f0d06e(void)

longlong * FUN_145f0d06e(longlong *param_1)

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
  pcVar13 = FUN_1463fda24;
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



// FUNCTION 145f0d152 FUN_145f0d152 body=132 status=ok
// SIG undefined FUN_145f0d152(void)

undefined1 * FUN_145f0d152(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SampleCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x65;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147ce3aa4;
}



// FUNCTION 145f0d1d6 FUN_145f0d1d6 body=136 status=ok
// SIG undefined FUN_145f0d1d6(void)

code * FUN_145f0d1d6(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000066;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f0d152;
}



// FUNCTION 145f0d25e FUN_145f0d25e body=138 status=ok
// SIG undefined FUN_145f0d25e(void)

code * FUN_145f0d25e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ProfileCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000067;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f0d1d6;
}



// FUNCTION 145f0d2e8 FUN_145f0d2e8 body=292 status=ok
// SIG undefined FUN_145f0d2e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f0d2e8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb01980) {
    FUN_144b3d300(&DAT_14cb01980);
    if (DAT_14cb01980 == -1) {
      FUN_145f0d556();
      FUN_145f0d40c();
      FUN_140db5666(&DAT_14cb018d8,0,&DAT_14cb01870,L"FSSProfilePreIntegratedPS",
                    L"/Engine/Private/SSProfilePreIntegratedMobile.usf",L"SSProfilePreIntegratedPS",
                    3,1,FUN_147cdc4f4,FUN_147cdc494,&LAB_147cdc47c,&LAB_147cdc478,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cb01f30);
      _DAT_14cb018d8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1436829d3);
      _Init_thread_footer(&DAT_14cb01980);
    }
  }
  return &DAT_14cb018d8;
}



// FUNCTION 145f0d40c FUN_145f0d40c body=205 status=ok
// SIG undefined FUN_145f0d40c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f0d40c(void)

{
  if ((DAT_14cb018d7 & 2) == 0) {
    DAT_14cb018d7 = DAT_14cb018d7 | 2;
    _DAT_14cb01878 = L"FSSProfilePreIntegratedPS";
    _DAT_14cb01890 = FUN_146826540;
    _DAT_14cb01898 = FUN_146825d77;
    _DAT_14cb018a0 = FUN_146825fd6;
    _DAT_14cb018a8 = FUN_1407e02ea;
    _DAT_14cb018b0 = FUN_146826273;
    _DAT_14cb01888 = FUN_147cdc44a;
    _DAT_14cb018c8 = 0xffffffff000000e0;
    _DAT_14cb018d0 = 8;
    DAT_14cb018d4 = 0;
    _DAT_14cb018b8 = &LAB_147cdc474;
    FUN_145f0d4da();
    FUN_1407e00cc(&DAT_14cb01870);
    return;
  }
  return;
}



// FUNCTION 145f0d4da FUN_145f0d4da body=123 status=ok
// SIG undefined FUN_145f0d4da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f0d4da(void)

{
  _DAT_14cb02668 = L"BASE";
  DAT_14cb02692 = 4;
  _DAT_14cb02670 = FUN_140b35ae4();
  _DAT_14cb02678 = DAT_14cb01880;
  _DAT_14cb02680 = &LAB_14682652b;
  DAT_14cb01880 = &DAT_14cb02668;
  DAT_14cb018d5 = DAT_14cb018d5 + '\x01';
  _DAT_14cb02688 = 0x100000000;
  if (*(char *)(_DAT_14cb02670 + 100) != '\0') {
    DAT_14cb018d6 = DAT_14cb018d6 + '\x01';
  }
  return;
}



// FUNCTION 145f0d556 FUN_145f0d556 body=261 status=ok
// SIG undefined FUN_145f0d556(void)

void FUN_145f0d556(void)

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
              0x110) < DAT_14cb01fb0) {
    FUN_144b3d300(&DAT_14cb01fb0);
    if (DAT_14cb01fb0 == -1) {
      FUN_145f0d65c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x140;
      local_58 = 0xea;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb01f30,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143697ade);
      _Init_thread_footer(&DAT_14cb01fb0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f0d65c FUN_145f0d65c body=226 status=ok
// SIG undefined FUN_145f0d65c(void)

longlong * FUN_145f0d65c(longlong *param_1)

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
  pcVar13 = FUN_1463fdaca;
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



// FUNCTION 145f0d740 FUN_145f0d740 body=132 status=ok
// SIG undefined FUN_145f0d740(void)

undefined1 * FUN_145f0d740(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SourceSSProfilesTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xeb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147ce3f34;
}



// FUNCTION 145f0d7c4 FUN_145f0d7c4 body=136 status=ok
// SIG undefined FUN_145f0d7c4(void)

code * FUN_145f0d7c4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SourceSSProfilesSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000ec;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f0d740;
}



// FUNCTION 145f0d84c FUN_145f0d84c body=138 status=ok
// SIG undefined FUN_145f0d84c(void)

code * FUN_145f0d84c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TargetSSProfilesPreIntegratedTextureSizeAndInvSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000000ee;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147ce3eaa;
}



// FUNCTION 145f0d8d6 FUN_145f0d8d6 body=292 status=ok
// SIG undefined FUN_145f0d8d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f0d8d6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0fc90) {
    FUN_144b3d300(&DAT_14cb0fc90);
    if (DAT_14cb0fc90 == -1) {
      FUN_145f0db44();
      FUN_145f0d9fa();
      FUN_140db5666(&DAT_14cb0fbe8,0,&DAT_14cb0fb80,L"FCopyCompressCS",
                    L"/Engine/Private/VirtualTextureAdapter.usf",L"CopyCompressCS",5,0x1c,
                    FUN_147da8c34,FUN_147da8bd4,&LAB_1437813d4,&LAB_1437813d0,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cb10520);
      _DAT_14cb0fbe8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1437813d7);
      _Init_thread_footer(&DAT_14cb0fc90);
    }
  }
  return &DAT_14cb0fbe8;
}



// FUNCTION 145f0d9fa FUN_145f0d9fa body=205 status=ok
// SIG undefined FUN_145f0d9fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f0d9fa(void)

{
  if ((DAT_14cb0fbe7 & 2) == 0) {
    DAT_14cb0fbe7 = DAT_14cb0fbe7 | 2;
    _DAT_14cb0fb88 = L"FCopyCompressCS";
    _DAT_14cb0fba0 = FUN_146826540;
    _DAT_14cb0fba8 = FUN_146825d77;
    _DAT_14cb0fbb0 = FUN_146825fd6;
    _DAT_14cb0fbb8 = FUN_1407e02ea;
    _DAT_14cb0fbc0 = FUN_146826273;
    _DAT_14cb0fb98 = FUN_147da8ba6;
    _DAT_14cb0fbd8 = 0xffffffff000000e0;
    _DAT_14cb0fbe0 = 8;
    DAT_14cb0fbe4 = 0;
    _DAT_14cb0fbc8 = &LAB_147da8bd0;
    FUN_145f0dac8();
    FUN_1407e00cc(&DAT_14cb0fb80);
    return;
  }
  return;
}



// FUNCTION 145f0dac8 FUN_145f0dac8 body=123 status=ok
// SIG undefined FUN_145f0dac8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f0dac8(void)

{
  _DAT_14cb10740 = L"BASE";
  DAT_14cb1076a = 4;
  _DAT_14cb10748 = FUN_140b35ae4();
  _DAT_14cb10750 = DAT_14cb0fb90;
  _DAT_14cb10758 = &LAB_14682652b;
  DAT_14cb0fb90 = &DAT_14cb10740;
  DAT_14cb0fbe5 = DAT_14cb0fbe5 + '\x01';
  _DAT_14cb10760 = 0x100000000;
  if (*(char *)(_DAT_14cb10748 + 100) != '\0') {
    DAT_14cb0fbe6 = DAT_14cb0fbe6 + '\x01';
  }
  return;
}



// FUNCTION 145f0db44 FUN_145f0db44 body=261 status=ok
// SIG undefined FUN_145f0db44(void)

void FUN_145f0db44(void)

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
              0x110) < DAT_14cb105a0) {
    FUN_144b3d300(&DAT_14cb105a0);
    if (DAT_14cb105a0 == -1) {
      FUN_145f0dc4a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x60;
      local_58 = 0x1e;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb10520,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143790623);
      _Init_thread_footer(&DAT_14cb105a0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f0dc4a FUN_145f0dc4a body=226 status=ok
// SIG undefined FUN_145f0dc4a(void)

longlong * FUN_145f0dc4a(longlong *param_1)

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
  pcVar13 = FUN_14640e7de;
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



// FUNCTION 145f0dd2e FUN_145f0dd2e body=132 status=ok
// SIG undefined FUN_145f0dd2e(void)

undefined1 * FUN_145f0dd2e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SourceTextureA";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147dacf94;
}



// FUNCTION 145f0ddb2 FUN_145f0ddb2 body=136 status=ok
// SIG undefined FUN_145f0ddb2(void)

code * FUN_145f0ddb2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DestCompressTexture_128bit";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000024;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147dacdf6;
}



// FUNCTION 145f0de3a FUN_145f0de3a body=138 status=ok
// SIG undefined FUN_145f0de3a(void)

code * FUN_145f0de3a(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000021;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147dacf0a;
}



// FUNCTION 145f0dec4 FUN_145f0dec4 body=206 status=ok
// SIG undefined FUN_145f0dec4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f0dec4(void)

{
  if ((DAT_14cb2c01f & 2) == 0) {
    DAT_14cb2c01f = DAT_14cb2c01f | 2;
    _DAT_14cb2bfc0 = L"FNiagaraDrawIndirectArgsGenCS";
    _DAT_14cb2bfd8 = FUN_146826540;
    _DAT_14cb2bfe0 = FUN_146825d77;
    _DAT_14cb2bfe8 = FUN_146825fd6;
    _DAT_14cb2bff0 = FUN_1407e02ea;
    _DAT_14cb2bff8 = FUN_146826273;
    _DAT_14cb2bfd0 = FUN_148042b0c;
    _DAT_14cb2c010 = 0xffffffff000000e0;
    _DAT_14cb2c018 = 8;
    DAT_14cb2c01c = 0;
    _DAT_14cb2c000 = &LAB_148042b36;
    FUN_145f0df92();
    FUN_1407e00cc(&DAT_14cb2bfb8);
  }
  return &DAT_14cb2bfb8;
}



// FUNCTION 145f0df92 FUN_145f0df92 body=123 status=ok
// SIG undefined FUN_145f0df92(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f0df92(void)

{
  _DAT_14cb2d260 = L"BASE";
  DAT_14cb2d28a = 4;
  _DAT_14cb2d268 = FUN_140b35ae4();
  _DAT_14cb2d270 = DAT_14cb2bfc8;
  _DAT_14cb2d278 = &LAB_14682652b;
  DAT_14cb2bfc8 = &DAT_14cb2d260;
  DAT_14cb2c01d = DAT_14cb2c01d + '\x01';
  _DAT_14cb2d280 = 0x100000000;
  if (*(char *)(_DAT_14cb2d268 + 100) != '\0') {
    DAT_14cb2c01e = DAT_14cb2c01e + '\x01';
  }
  return;
}



// FUNCTION 145f0e00e FUN_145f0e00e body=226 status=ok
// SIG undefined FUN_145f0e00e(void)

longlong * FUN_145f0e00e(longlong *param_1)

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
  pcVar13 = FUN_14645f804;
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



// FUNCTION 145f0e0f2 FUN_145f0e0f2 body=130 status=ok
// SIG undefined FUN_145f0e0f2(void)

undefined1 * FUN_145f0e0f2(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1480437a2;
}



// FUNCTION 145f0e174 FUN_145f0e174 body=138 status=ok
// SIG undefined FUN_145f0e174(void)

code * FUN_145f0e174(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWDrawIndirectArgs";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000051;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 7;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f0e1fe;
}


