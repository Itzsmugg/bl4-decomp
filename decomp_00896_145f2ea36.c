// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145f2ea36 FUN_145f2ea36 body=226 status=ok
// SIG undefined FUN_145f2ea36(void)

longlong * FUN_145f2ea36(longlong *param_1)

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
  pcVar13 = FUN_1462dde96;
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



// FUNCTION 145f2eb1a FUN_145f2eb1a body=138 status=ok
// SIG undefined FUN_145f2eb1a(void)

code * FUN_145f2eb1a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RadianceCacheAngleThresholdScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x34000001dd;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471f8106;
}



// FUNCTION 145f2eba4 FUN_145f2eba4 body=138 status=ok
// SIG undefined FUN_145f2eba4(void)

code * FUN_145f2eba4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWRayTraceDistance";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2DArray<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000001da;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471f8190;
}



// FUNCTION 145f2ec2e FUN_145f2ec2e body=142 status=ok
// SIG undefined FUN_145f2ec2e(void)

code * FUN_145f2ec2e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a2c9be();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Substrate";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSubstrateGlobalUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x60000001e1;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462de0d2;
}



// FUNCTION 145f2ecbc FUN_145f2ecbc body=292 status=ok
// SIG undefined FUN_145f2ecbc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f2ecbc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f5410) {
    FUN_144b3d300(&DAT_14c9f5410);
    if (DAT_14c9f5410 == -1) {
      FUN_145f2ef2a();
      FUN_145f2ede0();
      FUN_140db5666(&DAT_14c9f5368,0,&DAT_14c9f5300,L"FLumenValidateReservoirsRGS",
                    L"/Engine/Private/Lumen/LumenReSTIRGather.usf",L"LumenValidateReservoirsRGS",6,4
                    ,FUN_1471f0344,FUN_1471f0300,&LAB_1462db526,&LAB_1471f02fc,&LAB_1471f02dc,
                    &LAB_1471f02d4,0xe0,&DAT_14c9f72d8);
      _DAT_14c9f5368 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d4ae0e);
      _Init_thread_footer(&DAT_14c9f5410);
    }
  }
  return &DAT_14c9f5368;
}



// FUNCTION 145f2ede0 FUN_145f2ede0 body=205 status=ok
// SIG undefined FUN_145f2ede0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f2ede0(void)

{
  if ((DAT_14c9f5367 & 2) == 0) {
    DAT_14c9f5367 = DAT_14c9f5367 | 2;
    _DAT_14c9f5308 = L"FLumenValidateReservoirsRGS";
    _DAT_14c9f5320 = FUN_146826540;
    _DAT_14c9f5328 = FUN_146825d77;
    _DAT_14c9f5330 = FUN_146825fd6;
    _DAT_14c9f5338 = FUN_1407e02ea;
    _DAT_14c9f5340 = FUN_146826273;
    _DAT_14c9f5318 = FUN_1471f02a6;
    _DAT_14c9f5358 = 0xffffffff000000e0;
    _DAT_14c9f5360 = 8;
    DAT_14c9f5364 = 0;
    _DAT_14c9f5348 = &LAB_1471f02d0;
    FUN_145f2eeae();
    FUN_1407e00cc(&DAT_14c9f5300);
    return;
  }
  return;
}



// FUNCTION 145f2eeae FUN_145f2eeae body=123 status=ok
// SIG undefined FUN_145f2eeae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f2eeae(void)

{
  _DAT_14c9f7fc8 = L"BASE";
  DAT_14c9f7ff2 = 4;
  _DAT_14c9f7fd0 = FUN_140b35ae4();
  _DAT_14c9f7fd8 = DAT_14c9f5310;
  _DAT_14c9f7fe0 = &LAB_14682652b;
  DAT_14c9f5310 = &DAT_14c9f7fc8;
  DAT_14c9f5365 = DAT_14c9f5365 + '\x01';
  _DAT_14c9f7fe8 = 0x100000000;
  if (*(char *)(_DAT_14c9f7fd0 + 100) != '\0') {
    DAT_14c9f5366 = DAT_14c9f5366 + '\x01';
  }
  return;
}



// FUNCTION 145f2ef2a FUN_145f2ef2a body=261 status=ok
// SIG undefined FUN_145f2ef2a(void)

void FUN_145f2ef2a(void)

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
              0x110) < DAT_14c9f7358) {
    FUN_144b3d300(&DAT_14c9f7358);
    if (DAT_14c9f7358 == -1) {
      FUN_14159a61c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x310;
      local_58 = 0x134;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f72d8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d5965d);
      _Init_thread_footer(&DAT_14c9f7358);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f2f030 FUN_145f2f030 body=136 status=ok
// SIG undefined FUN_145f2f030(void)

code * FUN_145f2f030(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DownsampledNormalHistory";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2f800000140;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471f9fe6;
}



// FUNCTION 145f2f0b8 FUN_145f2f0b8 body=138 status=ok
// SIG undefined FUN_145f2f0b8(void)

code * FUN_145f2f0b8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PrevSceneColorPreExposureCorrection";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2e80000013e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471fa070;
}



// FUNCTION 145f2f142 FUN_145f2f142 body=138 status=ok
// SIG undefined FUN_145f2f142(void)

code * FUN_145f2f142(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MaxTraceDistance";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30800000143;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471f9ed2;
}



// FUNCTION 145f2f1cc FUN_145f2f1cc body=292 status=ok
// SIG undefined FUN_145f2f1cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f2f1cc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9fb818) {
    FUN_144b3d300(&DAT_14c9fb818);
    if (DAT_14c9fb818 == -1) {
      FUN_145f2f43a();
      FUN_145f2f2f0();
      FUN_140db5666(&DAT_14c9fb770,0,&DAT_14c9fb708,L"FLumenSceneLightingStatsCS",
                    L"/Engine/Private/Lumen/LumenSceneLightingDebug.usf",
                    L"LumenSceneLightingStatsCS",5,1,FUN_147208068,FUN_147208008,&LAB_1462e1766,
                    &LAB_147208004,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9fee60);
      _DAT_14c9fb770 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d7ff7f);
      _Init_thread_footer(&DAT_14c9fb818);
    }
  }
  return &DAT_14c9fb770;
}



// FUNCTION 145f2f2f0 FUN_145f2f2f0 body=205 status=ok
// SIG undefined FUN_145f2f2f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f2f2f0(void)

{
  if ((DAT_14c9fb76f & 2) == 0) {
    DAT_14c9fb76f = DAT_14c9fb76f | 2;
    _DAT_14c9fb710 = L"FLumenSceneLightingStatsCS";
    _DAT_14c9fb728 = FUN_146826540;
    _DAT_14c9fb730 = FUN_146825d77;
    _DAT_14c9fb738 = FUN_146825fd6;
    _DAT_14c9fb740 = FUN_1407e02ea;
    _DAT_14c9fb748 = FUN_146826273;
    _DAT_14c9fb720 = FUN_147207fd6;
    _DAT_14c9fb760 = 0xffffffff000000e0;
    _DAT_14c9fb768 = 8;
    DAT_14c9fb76c = 0;
    _DAT_14c9fb750 = &LAB_147208000;
    FUN_145f2f3be();
    FUN_1407e00cc(&DAT_14c9fb708);
    return;
  }
  return;
}



// FUNCTION 145f2f3be FUN_145f2f3be body=123 status=ok
// SIG undefined FUN_145f2f3be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f2f3be(void)

{
  _DAT_14ca00268 = L"BASE";
  DAT_14ca00292 = 4;
  _DAT_14ca00270 = FUN_140b35ae4();
  _DAT_14ca00278 = DAT_14c9fb718;
  _DAT_14ca00280 = &LAB_14682652b;
  DAT_14c9fb718 = &DAT_14ca00268;
  DAT_14c9fb76d = DAT_14c9fb76d + '\x01';
  _DAT_14ca00288 = 0x100000000;
  if (*(char *)(_DAT_14ca00270 + 100) != '\0') {
    DAT_14c9fb76e = DAT_14c9fb76e + '\x01';
  }
  return;
}



// FUNCTION 145f2f43a FUN_145f2f43a body=261 status=ok
// SIG undefined FUN_145f2f43a(void)

void FUN_145f2f43a(void)

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
              0x110) < DAT_14c9feee0) {
    FUN_144b3d300(&DAT_14c9feee0);
    if (DAT_14c9feee0 == -1) {
      FUN_145f2f540(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x60;
      local_58 = 0x1ed;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9fee60,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d9c577);
      _Init_thread_footer(&DAT_14c9feee0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f2f540 FUN_145f2f540 body=226 status=ok
// SIG undefined FUN_145f2f540(void)

longlong * FUN_145f2f540(longlong *param_1)

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
  pcVar13 = FUN_1462e4e14;
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



// FUNCTION 145f2f624 FUN_145f2f624 body=136 status=ok
// SIG undefined FUN_145f2f624(void)

code * FUN_145f2f624(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DirectLightingCardPageIndexAllocator";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x38000001f2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147215c22;
}



// FUNCTION 145f2f6ac FUN_145f2f6ac body=138 status=ok
// SIG undefined FUN_145f2f6ac(void)

code * FUN_145f2f6ac(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PriorityHistogram";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x48000001f4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f2f736;
}



// FUNCTION 145f2f736 FUN_145f2f736 body=138 status=ok
// SIG undefined FUN_145f2f736(void)

code * FUN_145f2f736(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"IndirectLightingCardPageIndexAllocator";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000001f3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f2f624;
}



// FUNCTION 145f2f7c0 FUN_145f2f7c0 body=292 status=ok
// SIG undefined FUN_145f2f7c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f2f7c0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9fd258) {
    FUN_144b3d300(&DAT_14c9fd258);
    if (DAT_14c9fd258 == -1) {
      FUN_145f2fa2e();
      FUN_145f2f8e4();
      FUN_140db5666(&DAT_14c9fd1b0,0,&DAT_14c9fd148,L"FScreenProbeGenerateLightSamplesCS",
                    L"/Engine/Private/Lumen/LumenScreenProbeLightSampling.usf",
                    L"ScreenProbeGenerateLightSamplesCS",5,1,FUN_1472091e2,FUN_147209182,
                    &LAB_1462e17e8,&LAB_14720917e,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9ff6e0)
      ;
      _DAT_14c9fd1b0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d8cd32);
      _Init_thread_footer(&DAT_14c9fd258);
    }
  }
  return &DAT_14c9fd1b0;
}



// FUNCTION 145f2f8e4 FUN_145f2f8e4 body=205 status=ok
// SIG undefined FUN_145f2f8e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f2f8e4(void)

{
  if ((DAT_14c9fd1af & 2) == 0) {
    DAT_14c9fd1af = DAT_14c9fd1af | 2;
    _DAT_14c9fd150 = L"FScreenProbeGenerateLightSamplesCS";
    _DAT_14c9fd168 = FUN_146826540;
    _DAT_14c9fd170 = FUN_146825d77;
    _DAT_14c9fd178 = FUN_146825fd6;
    _DAT_14c9fd180 = FUN_1407e02ea;
    _DAT_14c9fd188 = FUN_146826273;
    _DAT_14c9fd160 = FUN_147209150;
    _DAT_14c9fd1a0 = 0xffffffff000000e0;
    _DAT_14c9fd1a8 = 8;
    DAT_14c9fd1ac = 0;
    _DAT_14c9fd190 = &LAB_14720917a;
    FUN_145f2f9b2();
    FUN_1407e00cc(&DAT_14c9fd148);
    return;
  }
  return;
}



// FUNCTION 145f2f9b2 FUN_145f2f9b2 body=123 status=ok
// SIG undefined FUN_145f2f9b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f2f9b2(void)

{
  _DAT_14ca00678 = L"BASE";
  DAT_14ca006a2 = 4;
  _DAT_14ca00680 = FUN_140b35ae4();
  _DAT_14ca00688 = DAT_14c9fd158;
  _DAT_14ca00690 = &LAB_14682652b;
  DAT_14c9fd158 = &DAT_14ca00678;
  DAT_14c9fd1ad = DAT_14c9fd1ad + '\x01';
  _DAT_14ca00698 = 0x100000000;
  if (*(char *)(_DAT_14ca00680 + 100) != '\0') {
    DAT_14c9fd1ae = DAT_14c9fd1ae + '\x01';
  }
  return;
}



// FUNCTION 145f2fa2e FUN_145f2fa2e body=261 status=ok
// SIG undefined FUN_145f2fa2e(void)

void FUN_145f2fa2e(void)

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
              0x110) < DAT_14c9ff760) {
    FUN_144b3d300(&DAT_14c9ff760);
    if (DAT_14c9ff760 == -1) {
      FUN_145f2fb34(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 400;
      local_58 = 0x315;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9ff6e0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d9c6d1);
      _Init_thread_footer(&DAT_14c9ff760);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f2fb34 FUN_145f2fb34 body=226 status=ok
// SIG undefined FUN_145f2fb34(void)

longlong * FUN_145f2fb34(longlong *param_1)

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
  pcVar13 = FUN_1462e637e;
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



// FUNCTION 145f2fc18 FUN_145f2fc18 body=132 status=ok
// SIG undefined FUN_145f2fc18(void)

undefined1 * FUN_145f2fc18(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWScreenProbeLightSampleDirection";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x316;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147217848;
}



// FUNCTION 145f2fc9c FUN_145f2fc9c body=136 status=ok
// SIG undefined FUN_145f2fc9c(void)

code * FUN_145f2fc9c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWScreenProbeLightSampleFlags";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000317;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f2fc18;
}



// FUNCTION 145f2fd24 FUN_145f2fd24 body=144 status=ok
// SIG undefined FUN_145f2fd24(void)

code * FUN_145f2fd24(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x2000000319;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1472177be;
}



// FUNCTION 145f2fdb4 FUN_145f2fdb4 body=292 status=ok
// SIG undefined FUN_145f2fdb4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f2fdb4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca05238) {
    FUN_144b3d300(&DAT_14ca05238);
    if (DAT_14ca05238 == -1) {
      FUN_145f30022();
      FUN_145f2fed8();
      FUN_140db5666(&DAT_14ca05190,0,&DAT_14ca05128,L"FVisibleLightHashCS",
                    L"/Engine/Private/MegaLights/MegaLightsVisibleLightHash.usf",
                    L"VisibleLightHashCS",5,6,FUN_1472279e6,FUN_147227986,&LAB_147227964,
                    &LAB_147227940,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca073b8);
      _DAT_14ca05190 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142dc9b0f);
      _Init_thread_footer(&DAT_14ca05238);
    }
  }
  return &DAT_14ca05190;
}



// FUNCTION 145f2fed8 FUN_145f2fed8 body=205 status=ok
// SIG undefined FUN_145f2fed8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f2fed8(void)

{
  if ((DAT_14ca0518f & 2) == 0) {
    DAT_14ca0518f = DAT_14ca0518f | 2;
    _DAT_14ca05130 = L"FVisibleLightHashCS";
    _DAT_14ca05148 = FUN_146826540;
    _DAT_14ca05150 = FUN_146825d77;
    _DAT_14ca05158 = FUN_146825fd6;
    _DAT_14ca05160 = FUN_1407e02ea;
    _DAT_14ca05168 = FUN_146826273;
    _DAT_14ca05140 = FUN_147227912;
    _DAT_14ca05180 = 0xffffffff000000e0;
    _DAT_14ca05188 = 8;
    DAT_14ca0518c = 0;
    _DAT_14ca05170 = &LAB_14722793c;
    FUN_145f2ffa6();
    FUN_1407e00cc(&DAT_14ca05128);
    return;
  }
  return;
}



// FUNCTION 145f2ffa6 FUN_145f2ffa6 body=123 status=ok
// SIG undefined FUN_145f2ffa6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f2ffa6(void)

{
  _DAT_14ca082f0 = L"BASE";
  DAT_14ca0831a = 4;
  _DAT_14ca082f8 = FUN_140b35ae4();
  _DAT_14ca08300 = DAT_14ca05138;
  _DAT_14ca08308 = &LAB_14682652b;
  DAT_14ca05138 = &DAT_14ca082f0;
  DAT_14ca0518d = DAT_14ca0518d + '\x01';
  _DAT_14ca08310 = 0x100000000;
  if (*(char *)(_DAT_14ca082f8 + 100) != '\0') {
    DAT_14ca0518e = DAT_14ca0518e + '\x01';
  }
  return;
}



// FUNCTION 145f30022 FUN_145f30022 body=261 status=ok
// SIG undefined FUN_145f30022(void)

void FUN_145f30022(void)

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
              0x110) < DAT_14ca07438) {
    FUN_144b3d300(&DAT_14ca07438);
    if (DAT_14ca07438 == -1) {
      FUN_145f30128(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x2e0;
      local_58 = 0x352;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca073b8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142dd416b);
      _Init_thread_footer(&DAT_14ca07438);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f30128 FUN_145f30128 body=226 status=ok
// SIG undefined FUN_145f30128(void)

longlong * FUN_145f30128(longlong *param_1)

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
  pcVar13 = FUN_1462ebc0c;
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



// FUNCTION 145f3020c FUN_145f3020c body=136 status=ok
// SIG undefined FUN_145f3020c(void)

undefined1 * FUN_145f3020c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1414087ac();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"MegaLightsParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FMegaLightsParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x353;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_147230346;
}



// FUNCTION 145f30294 FUN_145f30294 body=138 status=ok
// SIG undefined FUN_145f30294(void)

code * FUN_145f30294(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWVisibleLightMaskHash";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2c800000355;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472302bc;
}



// FUNCTION 145f3031e FUN_145f3031e body=138 status=ok
// SIG undefined FUN_145f3031e(void)

code * FUN_145f3031e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LightSamples";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2d000000356;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f30294;
}



// FUNCTION 145f303a8 FUN_145f303a8 body=292 status=ok
// SIG undefined FUN_145f303a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f303a8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca056d8) {
    FUN_144b3d300(&DAT_14ca056d8);
    if (DAT_14ca056d8 == -1) {
      FUN_145f30616();
      FUN_145f304cc();
      FUN_140db5666(&DAT_14ca05630,0,&DAT_14ca055c8,L"FDenoiserSpatialCS",
                    L"/Engine/Private/MegaLights/MegaLightsDenoiserSpatial.usf",L"DenoiserSpatialCS"
                    ,5,4,FUN_147227d8c,FUN_147227d2c,&LAB_147227d0a,&LAB_147227cf0,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca075d8);
      _DAT_14ca05630 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142dc9b7d);
      _Init_thread_footer(&DAT_14ca056d8);
    }
  }
  return &DAT_14ca05630;
}



// FUNCTION 145f304cc FUN_145f304cc body=205 status=ok
// SIG undefined FUN_145f304cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f304cc(void)

{
  if ((DAT_14ca0562f & 2) == 0) {
    DAT_14ca0562f = DAT_14ca0562f | 2;
    _DAT_14ca055d0 = L"FDenoiserSpatialCS";
    _DAT_14ca055e8 = FUN_146826540;
    _DAT_14ca055f0 = FUN_146825d77;
    _DAT_14ca055f8 = FUN_146825fd6;
    _DAT_14ca05600 = FUN_1407e02ea;
    _DAT_14ca05608 = FUN_146826273;
    _DAT_14ca055e0 = FUN_147227cc2;
    _DAT_14ca05620 = 0xffffffff000000e0;
    _DAT_14ca05628 = 8;
    DAT_14ca0562c = 0;
    _DAT_14ca05610 = &LAB_147227cec;
    FUN_145f3059a();
    FUN_1407e00cc(&DAT_14ca055c8);
    return;
  }
  return;
}



// FUNCTION 145f3059a FUN_145f3059a body=123 status=ok
// SIG undefined FUN_145f3059a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f3059a(void)

{
  _DAT_14ca083b0 = L"BASE";
  DAT_14ca083da = 4;
  _DAT_14ca083b8 = FUN_140b35ae4();
  _DAT_14ca083c0 = DAT_14ca055d8;
  _DAT_14ca083c8 = &LAB_14682652b;
  DAT_14ca055d8 = &DAT_14ca083b0;
  DAT_14ca0562d = DAT_14ca0562d + '\x01';
  _DAT_14ca083d0 = 0x100000000;
  if (*(char *)(_DAT_14ca083b8 + 100) != '\0') {
    DAT_14ca0562e = DAT_14ca0562e + '\x01';
  }
  return;
}



// FUNCTION 145f30616 FUN_145f30616 body=261 status=ok
// SIG undefined FUN_145f30616(void)

void FUN_145f30616(void)

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
              0x110) < DAT_14ca07658) {
    FUN_144b3d300(&DAT_14ca07658);
    if (DAT_14ca07658 == -1) {
      FUN_145f3071c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x300;
      local_58 = 0x420;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca075d8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142dd419b);
      _Init_thread_footer(&DAT_14ca07658);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f3071c FUN_145f3071c body=226 status=ok
// SIG undefined FUN_145f3071c(void)

longlong * FUN_145f3071c(longlong *param_1)

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
  pcVar13 = FUN_1462ebeb4;
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



// FUNCTION 145f30800 FUN_145f30800 body=136 status=ok
// SIG undefined FUN_145f30800(void)

code * FUN_145f30800(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NumFramesAccumulatedTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<UNORM float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2e000000426;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f30912;
}



// FUNCTION 145f30888 FUN_145f30888 body=138 status=ok
// SIG undefined FUN_145f30888(void)

code * FUN_145f30888(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SpecularLightingAndSecondMomentTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float3>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2d000000424;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147230d00;
}



// FUNCTION 145f30912 FUN_145f30912 body=138 status=ok
// SIG undefined FUN_145f30912(void)

code * FUN_145f30912(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ShadingConfidenceTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2d800000425;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f30888;
}



// FUNCTION 145f3099c FUN_145f3099c body=292 status=ok
// SIG undefined FUN_145f3099c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f3099c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca136d0) {
    FUN_144b3d300(&DAT_14ca136d0);
    if (DAT_14ca136d0 == -1) {
      FUN_145f30c0a();
      FUN_145f30ac0();
      FUN_140db5666(&DAT_14ca13628,0,&DAT_14ca135c0,L"FCalculateShadingStatsCS",
                    L"/Engine/Private/Nanite/NanitePrintStats.usf",L"CalculateShadingStats",5,1,
                    FUN_147250b26,FUN_147250ac6,&LAB_1462eec86,&LAB_147250ac2,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca171c0);
      _DAT_14ca13628 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e015ec);
      _Init_thread_footer(&DAT_14ca136d0);
    }
  }
  return &DAT_14ca13628;
}



// FUNCTION 145f30ac0 FUN_145f30ac0 body=205 status=ok
// SIG undefined FUN_145f30ac0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f30ac0(void)

{
  if ((DAT_14ca13627 & 2) == 0) {
    DAT_14ca13627 = DAT_14ca13627 | 2;
    _DAT_14ca135c8 = L"FCalculateShadingStatsCS";
    _DAT_14ca135e0 = FUN_146826540;
    _DAT_14ca135e8 = FUN_146825d77;
    _DAT_14ca135f0 = FUN_146825fd6;
    _DAT_14ca135f8 = FUN_1407e02ea;
    _DAT_14ca13600 = FUN_146826273;
    _DAT_14ca135d8 = FUN_147250a92;
    _DAT_14ca13618 = 0xffffffff000000e0;
    _DAT_14ca13620 = 8;
    DAT_14ca13624 = 0;
    _DAT_14ca13608 = &LAB_147250abe;
    FUN_145f30b8e();
    FUN_1407e00cc(&DAT_14ca135c0);
    return;
  }
  return;
}



// FUNCTION 145f30b8e FUN_145f30b8e body=123 status=ok
// SIG undefined FUN_145f30b8e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f30b8e(void)

{
  _DAT_14ca18c38 = L"BASE";
  DAT_14ca18c62 = 4;
  _DAT_14ca18c40 = FUN_140b35ae4();
  _DAT_14ca18c48 = DAT_14ca135d0;
  _DAT_14ca18c50 = &LAB_14682652b;
  DAT_14ca135d0 = &DAT_14ca18c38;
  DAT_14ca13625 = DAT_14ca13625 + '\x01';
  _DAT_14ca18c58 = 0x100000000;
  if (*(char *)(_DAT_14ca18c40 + 100) != '\0') {
    DAT_14ca13626 = DAT_14ca13626 + '\x01';
  }
  return;
}



// FUNCTION 145f30c0a FUN_145f30c0a body=261 status=ok
// SIG undefined FUN_145f30c0a(void)

void FUN_145f30c0a(void)

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
              0x110) < DAT_14ca17240) {
    FUN_144b3d300(&DAT_14ca17240);
    if (DAT_14ca17240 == -1) {
      FUN_145f30d10(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0xe0;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca171c0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e27573);
      _Init_thread_footer(&DAT_14ca17240);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f30d10 FUN_145f30d10 body=226 status=ok
// SIG undefined FUN_145f30d10(void)

longlong * FUN_145f30d10(longlong *param_1)

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
  pcVar13 = FUN_1462efa60;
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



// FUNCTION 145f30df4 FUN_145f30df4 body=136 status=ok
// SIG undefined FUN_145f30df4(void)

code * FUN_145f30df4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NumShadingBins";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000e2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14725536e;
}



// FUNCTION 145f30e7c FUN_145f30e7c body=138 status=ok
// SIG undefined FUN_145f30e7c(void)

code * FUN_145f30e7c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ShadingBinStats";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<FNaniteShadingBinStats>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000000e5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472552e4;
}



// FUNCTION 145f30f06 FUN_145f30f06 body=138 status=ok
// SIG undefined FUN_145f30f06(void)

code * FUN_145f30f06(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutStatsBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<FNaniteStats>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000e3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f30df4;
}



// FUNCTION 145f30f90 FUN_145f30f90 body=292 status=ok
// SIG undefined FUN_145f30f90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f30f90(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca137f8) {
    FUN_144b3d300(&DAT_14ca137f8);
    if (DAT_14ca137f8 == -1) {
      FUN_145f311fe();
      FUN_145f310b4();
      FUN_140db5666(&DAT_14ca13750,0,&DAT_14ca136e8,L"FPrintStatsCS",
                    L"/Engine/Private/Nanite/NanitePrintStats.usf",L"PrintStats",5,10,FUN_147250c40,
                    FUN_147250be0,&LAB_142e015fc,&LAB_142e015f8,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca17248);
      _DAT_14ca13750 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e01636);
      _Init_thread_footer(&DAT_14ca137f8);
    }
  }
  return &DAT_14ca13750;
}



// FUNCTION 145f310b4 FUN_145f310b4 body=205 status=ok
// SIG undefined FUN_145f310b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f310b4(void)

{
  if ((DAT_14ca1374f & 2) == 0) {
    DAT_14ca1374f = DAT_14ca1374f | 2;
    _DAT_14ca136f0 = L"FPrintStatsCS";
    _DAT_14ca13708 = FUN_146826540;
    _DAT_14ca13710 = FUN_146825d77;
    _DAT_14ca13718 = FUN_146825fd6;
    _DAT_14ca13720 = FUN_1407e02ea;
    _DAT_14ca13728 = FUN_146826273;
    _DAT_14ca13700 = FUN_147250bb0;
    _DAT_14ca13740 = 0xffffffff000000e0;
    _DAT_14ca13748 = 8;
    DAT_14ca1374c = 0;
    _DAT_14ca13730 = &LAB_147250bdc;
    FUN_145f31182();
    FUN_1407e00cc(&DAT_14ca136e8);
    return;
  }
  return;
}



// FUNCTION 145f31182 FUN_145f31182 body=123 status=ok
// SIG undefined FUN_145f31182(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f31182(void)

{
  _DAT_14ca18c68 = L"BASE";
  DAT_14ca18c92 = 4;
  _DAT_14ca18c70 = FUN_140b35ae4();
  _DAT_14ca18c78 = DAT_14ca136f8;
  _DAT_14ca18c80 = &LAB_14682652b;
  DAT_14ca136f8 = &DAT_14ca18c68;
  DAT_14ca1374d = DAT_14ca1374d + '\x01';
  _DAT_14ca18c88 = 0x100000000;
  if (*(char *)(_DAT_14ca18c70 + 100) != '\0') {
    DAT_14ca1374e = DAT_14ca1374e + '\x01';
  }
  return;
}



// FUNCTION 145f311fe FUN_145f311fe body=261 status=ok
// SIG undefined FUN_145f311fe(void)

void FUN_145f311fe(void)

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
              0x110) < DAT_14ca172c8) {
    FUN_144b3d300(&DAT_14ca172c8);
    if (DAT_14ca172c8 == -1) {
      FUN_145f31304(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0xff;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca17248,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e2757f);
      _Init_thread_footer(&DAT_14ca172c8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f31304 FUN_145f31304 body=226 status=ok
// SIG undefined FUN_145f31304(void)

longlong * FUN_145f31304(longlong *param_1)

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
  pcVar13 = FUN_1462efae8;
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



// FUNCTION 145f313e8 FUN_145f313e8 body=136 status=ok
// SIG undefined FUN_145f313e8(void)

code * FUN_145f313e8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DebugFlags";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000102;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f314fa;
}



// FUNCTION 145f31470 FUN_145f31470 body=138 status=ok
// SIG undefined FUN_145f31470(void)

code * FUN_145f31470(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<FNaniteStats>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000106;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462efb70;
}



// FUNCTION 145f314fa FUN_145f314fa body=138 status=ok
// SIG undefined FUN_145f314fa(void)

code * FUN_145f314fa(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RenderFlags";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000101;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147255480;
}



// FUNCTION 145f31584 FUN_145f31584 body=292 status=ok
// SIG undefined FUN_145f31584(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f31584(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca1ac90) {
    FUN_144b3d300(&DAT_14ca1ac90);
    if (DAT_14ca1ac90 == -1) {
      FUN_145f317f2();
      FUN_145f316a8();
      FUN_140db5666(&DAT_14ca1abe8,0,&DAT_14ca1ab80,L"FAllocateRangesCS",
                    L"/Engine/Private/Nanite/NaniteStreamOut.usf",L"AllocateRangesCS",5,1,
                    FUN_147263cae,FUN_147263c4e,&LAB_1462f34be,&LAB_147263c4a,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca1b9a8);
      _DAT_14ca1abe8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e56c18);
      _Init_thread_footer(&DAT_14ca1ac90);
    }
  }
  return &DAT_14ca1abe8;
}



// FUNCTION 145f316a8 FUN_145f316a8 body=205 status=ok
// SIG undefined FUN_145f316a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f316a8(void)

{
  if ((DAT_14ca1abe7 & 2) == 0) {
    DAT_14ca1abe7 = DAT_14ca1abe7 | 2;
    _DAT_14ca1ab88 = L"FAllocateRangesCS";
    _DAT_14ca1aba0 = FUN_146826540;
    _DAT_14ca1aba8 = FUN_146825d77;
    _DAT_14ca1abb0 = FUN_146825fd6;
    _DAT_14ca1abb8 = FUN_1407e02ea;
    _DAT_14ca1abc0 = FUN_146826273;
    _DAT_14ca1ab98 = FUN_147263c1c;
    _DAT_14ca1abd8 = 0xffffffff000000e0;
    _DAT_14ca1abe0 = 8;
    DAT_14ca1abe4 = 0;
    _DAT_14ca1abc8 = &LAB_147263c46;
    FUN_145f31776();
    FUN_1407e00cc(&DAT_14ca1ab80);
    return;
  }
  return;
}



// FUNCTION 145f31776 FUN_145f31776 body=123 status=ok
// SIG undefined FUN_145f31776(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f31776(void)

{
  _DAT_14ca1c118 = L"BASE";
  DAT_14ca1c142 = 4;
  _DAT_14ca1c120 = FUN_140b35ae4();
  _DAT_14ca1c128 = DAT_14ca1ab90;
  _DAT_14ca1c130 = &LAB_14682652b;
  DAT_14ca1ab90 = &DAT_14ca1c118;
  DAT_14ca1abe5 = DAT_14ca1abe5 + '\x01';
  _DAT_14ca1c138 = 0x100000000;
  if (*(char *)(_DAT_14ca1c120 + 100) != '\0') {
    DAT_14ca1abe6 = DAT_14ca1abe6 + '\x01';
  }
  return;
}



// FUNCTION 145f317f2 FUN_145f317f2 body=261 status=ok
// SIG undefined FUN_145f317f2(void)

void FUN_145f317f2(void)

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
              0x110) < DAT_14ca1ba28) {
    FUN_144b3d300(&DAT_14ca1ba28);
    if (DAT_14ca1ba28 == -1) {
      FUN_145f318f8(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x60;
      local_58 = 0x90;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca1b9a8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e5a6d8);
      _Init_thread_footer(&DAT_14ca1ba28);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f318f8 FUN_145f318f8 body=226 status=ok
// SIG undefined FUN_145f318f8(void)

longlong * FUN_145f318f8(longlong *param_1)

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
  pcVar13 = FUN_1462f4360;
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



// FUNCTION 145f319dc FUN_145f319dc body=136 status=ok
// SIG undefined FUN_145f319dc(void)

code * FUN_145f319dc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VertexBufferSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000099;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f31a64;
}



// FUNCTION 145f31a64 FUN_145f31a64 body=138 status=ok
// SIG undefined FUN_145f31a64(void)

code * FUN_145f31a64(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NumAllocationFrames";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2400000098;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f31aee;
}



// FUNCTION 145f31aee FUN_145f31aee body=138 status=ok
// SIG undefined FUN_145f31aee(void)

code * FUN_145f31aee(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CurrentAllocationFrameIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000097;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147268150;
}



// FUNCTION 145f31b78 FUN_145f31b78 body=292 status=ok
// SIG undefined FUN_145f31b78(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f31b78(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca1f9a0) {
    FUN_144b3d300(&DAT_14ca1f9a0);
    if (DAT_14ca1f9a0 == -1) {
      FUN_145f31de6();
      FUN_145f31c9c();
      FUN_140db5666(&DAT_14ca1f8f8,0,&DAT_14ca1f890,L"FPathTracingCompositorPS",
                    L"/Engine/Private/PathTracing/PathTracingCompositingPixelShader.usf",
                    L"CompositeMain",3,1,FUN_147275c4a,FUN_147275bea,&LAB_1462f51d6,&LAB_147275be6,
                    &LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca22178);
      _DAT_14ca1f8f8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e73e44);
      _Init_thread_footer(&DAT_14ca1f9a0);
    }
  }
  return &DAT_14ca1f8f8;
}



// FUNCTION 145f31c9c FUN_145f31c9c body=205 status=ok
// SIG undefined FUN_145f31c9c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f31c9c(void)

{
  if ((DAT_14ca1f8f7 & 2) == 0) {
    DAT_14ca1f8f7 = DAT_14ca1f8f7 | 2;
    _DAT_14ca1f898 = L"FPathTracingCompositorPS";
    _DAT_14ca1f8b0 = FUN_146826540;
    _DAT_14ca1f8b8 = FUN_146825d77;
    _DAT_14ca1f8c0 = FUN_146825fd6;
    _DAT_14ca1f8c8 = FUN_1407e02ea;
    _DAT_14ca1f8d0 = FUN_146826273;
    _DAT_14ca1f8a8 = FUN_147275bb6;
    _DAT_14ca1f8e8 = 0xffffffff000000e0;
    _DAT_14ca1f8f0 = 8;
    DAT_14ca1f8f4 = 0;
    _DAT_14ca1f8d8 = &LAB_147275be2;
    FUN_145f31d6a();
    FUN_1407e00cc(&DAT_14ca1f890);
    return;
  }
  return;
}



// FUNCTION 145f31d6a FUN_145f31d6a body=123 status=ok
// SIG undefined FUN_145f31d6a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f31d6a(void)

{
  _DAT_14ca24d50 = L"BASE";
  DAT_14ca24d7a = 4;
  _DAT_14ca24d58 = FUN_140b35ae4();
  _DAT_14ca24d60 = DAT_14ca1f8a0;
  _DAT_14ca24d68 = &LAB_14682652b;
  DAT_14ca1f8a0 = &DAT_14ca24d50;
  DAT_14ca1f8f5 = DAT_14ca1f8f5 + '\x01';
  _DAT_14ca24d70 = 0x100000000;
  if (*(char *)(_DAT_14ca24d58 + 100) != '\0') {
    DAT_14ca1f8f6 = DAT_14ca1f8f6 + '\x01';
  }
  return;
}



// FUNCTION 145f31de6 FUN_145f31de6 body=261 status=ok
// SIG undefined FUN_145f31de6(void)

void FUN_145f31de6(void)

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
              0x110) < DAT_14ca221f8) {
    FUN_144b3d300(&DAT_14ca221f8);
    if (DAT_14ca221f8 == -1) {
      FUN_145f31eec(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x160;
      local_58 = 0xb5d;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca22178,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e95df2);
      _Init_thread_footer(&DAT_14ca221f8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f31eec FUN_145f31eec body=226 status=ok
// SIG undefined FUN_145f31eec(void)

longlong * FUN_145f31eec(longlong *param_1)

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
  pcVar13 = FUN_1462f6b16;
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



// FUNCTION 145f31fd0 FUN_145f31fd0 body=136 status=ok
// SIG undefined FUN_145f31fd0(void)

code * FUN_145f31fd0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"AdaptiveSamplingErrorThreshold";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3c00000b66;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f32058;
}



// FUNCTION 145f32058 FUN_145f32058 body=138 status=ok
// SIG undefined FUN_145f32058(void)

code * FUN_145f32058(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ProgressDisplayEnabled";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3800000b65;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14727e5b6;
}



// FUNCTION 145f320e2 FUN_145f320e2 body=138 status=ok
// SIG undefined FUN_145f320e2(void)

code * FUN_145f320e2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VarianceTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float2>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000b60;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14727e754;
}



// FUNCTION 145f3216c FUN_145f3216c body=292 status=ok
// SIG undefined FUN_145f3216c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f3216c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca20330) {
    FUN_144b3d300(&DAT_14ca20330);
    if (DAT_14ca20330 == -1) {
      FUN_145f323da();
      FUN_145f32290();
      FUN_140db5666(&DAT_14ca20288,0,&DAT_14ca20220,L"FTemporalFeatureFusionCS",
                    L"/Engine/Private/PathTracing/PathTracingSpatialTemporalDenoising.usf",
                    L"TemporalFeatureFusionCS",5,1,FUN_147277578,FUN_147277518,&LAB_1462f5206,
                    &LAB_147277514,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca225f0);
      _DAT_14ca20288 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e832b8);
      _Init_thread_footer(&DAT_14ca20330);
    }
  }
  return &DAT_14ca20288;
}



// FUNCTION 145f32290 FUN_145f32290 body=205 status=ok
// SIG undefined FUN_145f32290(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f32290(void)

{
  if ((DAT_14ca20287 & 2) == 0) {
    DAT_14ca20287 = DAT_14ca20287 | 2;
    _DAT_14ca20228 = L"FTemporalFeatureFusionCS";
    _DAT_14ca20240 = FUN_146826540;
    _DAT_14ca20248 = FUN_146825d77;
    _DAT_14ca20250 = FUN_146825fd6;
    _DAT_14ca20258 = FUN_1407e02ea;
    _DAT_14ca20260 = FUN_146826273;
    _DAT_14ca20238 = FUN_1472774e4;
    _DAT_14ca20278 = 0xffffffff000000e0;
    _DAT_14ca20280 = 8;
    DAT_14ca20284 = 0;
    _DAT_14ca20268 = &LAB_147277510;
    FUN_145f3235e();
    FUN_1407e00cc(&DAT_14ca20220);
    return;
  }
  return;
}



// FUNCTION 145f3235e FUN_145f3235e body=123 status=ok
// SIG undefined FUN_145f3235e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f3235e(void)

{
  _DAT_14ca24ef8 = L"BASE";
  DAT_14ca24f22 = 4;
  _DAT_14ca24f00 = FUN_140b35ae4();
  _DAT_14ca24f08 = DAT_14ca20230;
  _DAT_14ca24f10 = &LAB_14682652b;
  DAT_14ca20230 = &DAT_14ca24ef8;
  DAT_14ca20285 = DAT_14ca20285 + '\x01';
  _DAT_14ca24f18 = 0x100000000;
  if (*(char *)(_DAT_14ca24f00 + 100) != '\0') {
    DAT_14ca20286 = DAT_14ca20286 + '\x01';
  }
  return;
}



// FUNCTION 145f323da FUN_145f323da body=261 status=ok
// SIG undefined FUN_145f323da(void)

void FUN_145f323da(void)

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
              0x110) < DAT_14ca22670) {
    FUN_144b3d300(&DAT_14ca22670);
    if (DAT_14ca22670 == -1) {
      FUN_145f324e0(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xd0;
      local_58 = 0x379;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca225f0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e95e4b);
      _Init_thread_footer(&DAT_14ca22670);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f324e0 FUN_145f324e0 body=226 status=ok
// SIG undefined FUN_145f324e0(void)

longlong * FUN_145f324e0(longlong *param_1)

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
  pcVar13 = FUN_1462f718c;
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



// FUNCTION 145f325c4 FUN_145f325c4 body=136 status=ok
// SIG undefined FUN_145f325c4(void)

code * FUN_145f325c4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VarianceMap";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<FPixelMaterialLightingFingerprint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000037d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f326d6;
}



// FUNCTION 145f3264c FUN_145f3264c body=138 status=ok
// SIG undefined FUN_145f3264c(void)

code * FUN_145f3264c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SharedTextureSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4800000380;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14727efec;
}



// FUNCTION 145f326d6 FUN_145f326d6 body=138 status=ok
// SIG undefined FUN_145f326d6(void)

code * FUN_145f326d6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RadianceTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000037c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14727f076;
}



// FUNCTION 145f32760 FUN_145f32760 body=292 status=ok
// SIG undefined FUN_145f32760(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f32760(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca26eb8) {
    FUN_144b3d300(&DAT_14ca26eb8);
    if (DAT_14ca26eb8 == -1) {
      FUN_145f329ce();
      FUN_145f32884();
      FUN_140db5666(&DAT_14ca26e10,0,&DAT_14ca26da8,L"FMobileDOFSetupPS",
                    L"/Engine/Private/PostProcessDOF.usf",L"SetupPS",3,6,FUN_14728b340,FUN_14728b2e0
                    ,&LAB_14728b296,&LAB_14728b292,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca29a20
                   );
      _DAT_14ca26e10 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142eb8bc4);
      _Init_thread_footer(&DAT_14ca26eb8);
    }
  }
  return &DAT_14ca26e10;
}



// FUNCTION 145f32884 FUN_145f32884 body=205 status=ok
// SIG undefined FUN_145f32884(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f32884(void)

{
  if ((DAT_14ca26e0f & 2) == 0) {
    DAT_14ca26e0f = DAT_14ca26e0f | 2;
    _DAT_14ca26db0 = L"FMobileDOFSetupPS";
    _DAT_14ca26dc8 = FUN_146826540;
    _DAT_14ca26dd0 = FUN_146825d77;
    _DAT_14ca26dd8 = FUN_146825fd6;
    _DAT_14ca26de0 = FUN_1407e02ea;
    _DAT_14ca26de8 = FUN_146826273;
    _DAT_14ca26dc0 = FUN_14728b262;
    _DAT_14ca26e00 = 0xffffffff000000e0;
    _DAT_14ca26e08 = 8;
    DAT_14ca26e0c = 0;
    _DAT_14ca26df0 = &LAB_14728b28e;
    FUN_145f32952();
    FUN_1407e00cc(&DAT_14ca26da8);
    return;
  }
  return;
}



// FUNCTION 145f32952 FUN_145f32952 body=123 status=ok
// SIG undefined FUN_145f32952(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f32952(void)

{
  _DAT_14ca2c0c0 = L"BASE";
  DAT_14ca2c0ea = 4;
  _DAT_14ca2c0c8 = FUN_140b35ae4();
  _DAT_14ca2c0d0 = DAT_14ca26db8;
  _DAT_14ca2c0d8 = &LAB_14682652b;
  DAT_14ca26db8 = &DAT_14ca2c0c0;
  DAT_14ca26e0d = DAT_14ca26e0d + '\x01';
  _DAT_14ca2c0e0 = 0x100000000;
  if (*(char *)(_DAT_14ca2c0c8 + 100) != '\0') {
    DAT_14ca26e0e = DAT_14ca26e0e + '\x01';
  }
  return;
}



// FUNCTION 145f329ce FUN_145f329ce body=261 status=ok
// SIG undefined FUN_145f329ce(void)

void FUN_145f329ce(void)

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
              0x110) < DAT_14ca29aa0) {
    FUN_144b3d300(&DAT_14ca29aa0);
    if (DAT_14ca29aa0 == -1) {
      FUN_145f32ad4(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x150;
      local_58 = 0x32;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca29a20,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142edc102);
      _Init_thread_footer(&DAT_14ca29aa0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f32ad4 FUN_145f32ad4 body=226 status=ok
// SIG undefined FUN_145f32ad4(void)

longlong * FUN_145f32ad4(longlong *param_1)

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
  pcVar13 = FUN_1462fa11a;
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



// FUNCTION 145f32bb8 FUN_145f32bb8 body=136 status=ok
// SIG undefined FUN_145f32bb8(void)

code * FUN_145f32bb8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000036;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462fa1a2;
}



// FUNCTION 145f32c40 FUN_145f32c40 body=138 status=ok
// SIG undefined FUN_145f32c40(void)

code * FUN_145f32c40(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SunShaftAndDofTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000038;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472915b2;
}



// FUNCTION 145f32cca FUN_145f32cca body=138 status=ok
// SIG undefined FUN_145f32cca(void)

code * FUN_145f32cca(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"BufferSizeAndInvSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000034;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14729163c;
}



// FUNCTION 145f32d54 FUN_145f32d54 body=292 status=ok
// SIG undefined FUN_145f32d54(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f32d54(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca26fe0) {
    FUN_144b3d300(&DAT_14ca26fe0);
    if (DAT_14ca26fe0 == -1) {
      FUN_145f32fc2();
      FUN_145f32e78();
      FUN_140db5666(&DAT_14ca26f38,0,&DAT_14ca26ed0,L"FMobileDOFRecombinePS",
                    L"/Engine/Private/PostProcessDOF.usf",L"MainRecombinePS",3,6,FUN_14728b4a8,
                    FUN_14728b448,&LAB_14728b3fe,&LAB_14728b3fa,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca29aa8);
      _DAT_14ca26f38 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142eb8bd0);
      _Init_thread_footer(&DAT_14ca26fe0);
    }
  }
  return &DAT_14ca26f38;
}



// FUNCTION 145f32e78 FUN_145f32e78 body=205 status=ok
// SIG undefined FUN_145f32e78(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f32e78(void)

{
  if ((DAT_14ca26f37 & 2) == 0) {
    DAT_14ca26f37 = DAT_14ca26f37 | 2;
    _DAT_14ca26ed8 = L"FMobileDOFRecombinePS";
    _DAT_14ca26ef0 = FUN_146826540;
    _DAT_14ca26ef8 = FUN_146825d77;
    _DAT_14ca26f00 = FUN_146825fd6;
    _DAT_14ca26f08 = FUN_1407e02ea;
    _DAT_14ca26f10 = FUN_146826273;
    _DAT_14ca26ee8 = FUN_14728b3ca;
    _DAT_14ca26f28 = 0xffffffff000000e0;
    _DAT_14ca26f30 = 8;
    DAT_14ca26f34 = 0;
    _DAT_14ca26f18 = &LAB_14728b3f6;
    FUN_145f32f46();
    FUN_1407e00cc(&DAT_14ca26ed0);
    return;
  }
  return;
}



// FUNCTION 145f32f46 FUN_145f32f46 body=123 status=ok
// SIG undefined FUN_145f32f46(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f32f46(void)

{
  _DAT_14ca2c0f0 = L"BASE";
  DAT_14ca2c11a = 4;
  _DAT_14ca2c0f8 = FUN_140b35ae4();
  _DAT_14ca2c100 = DAT_14ca26ee0;
  _DAT_14ca2c108 = &LAB_14682652b;
  DAT_14ca26ee0 = &DAT_14ca2c0f0;
  DAT_14ca26f35 = DAT_14ca26f35 + '\x01';
  _DAT_14ca2c110 = 0x100000000;
  if (*(char *)(_DAT_14ca2c0f8 + 100) != '\0') {
    DAT_14ca26f36 = DAT_14ca26f36 + '\x01';
  }
  return;
}



// FUNCTION 145f32fc2 FUN_145f32fc2 body=261 status=ok
// SIG undefined FUN_145f32fc2(void)

void FUN_145f32fc2(void)

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
              0x110) < DAT_14ca29b28) {
    FUN_144b3d300(&DAT_14ca29b28);
    if (DAT_14ca29b28 == -1) {
      FUN_145f330c8(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x170;
      local_58 = 0x99;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca29aa8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142edc10e);
      _Init_thread_footer(&DAT_14ca29b28);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f330c8 FUN_145f330c8 body=226 status=ok
// SIG undefined FUN_145f330c8(void)

longlong * FUN_145f330c8(longlong *param_1)

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
  pcVar13 = FUN_1462fa232;
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



// FUNCTION 145f331ac FUN_145f331ac body=136 status=ok
// SIG undefined FUN_145f331ac(void)

code * FUN_145f331ac(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DofNearBlurTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x50000000a1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f332be;
}



// FUNCTION 145f33234 FUN_145f33234 body=138 status=ok
// SIG undefined FUN_145f33234(void)

code * FUN_145f33234(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000009d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462fa2ba;
}



// FUNCTION 145f332be FUN_145f332be body=138 status=ok
// SIG undefined FUN_145f332be(void)

code * FUN_145f332be(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DofFarBlurSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x48000000a0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147291862;
}



// FUNCTION 145f33348 FUN_145f33348 body=292 status=ok
// SIG undefined FUN_145f33348(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f33348(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2e0c0) {
    FUN_144b3d300(&DAT_14ca2e0c0);
    if (DAT_14ca2e0c0 == -1) {
      FUN_145f335b6();
      FUN_145f3346c();
      FUN_140db5666(&DAT_14ca2e018,0,&DAT_14ca2dfb0,L"FMobileIntegrateDofPS",
                    L"/Engine/Private/PostProcessMobile.usf",L"IntegrateDOFPS_Mobile",3,1,
                    FUN_147296d8c,FUN_147296d2c,&LAB_147296d14,&LAB_147296d10,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca32e70);
      _DAT_14ca2e018 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142efdaa0);
      _Init_thread_footer(&DAT_14ca2e0c0);
    }
  }
  return &DAT_14ca2e018;
}



// FUNCTION 145f3346c FUN_145f3346c body=205 status=ok
// SIG undefined FUN_145f3346c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f3346c(void)

{
  if ((DAT_14ca2e017 & 2) == 0) {
    DAT_14ca2e017 = DAT_14ca2e017 | 2;
    _DAT_14ca2dfb8 = L"FMobileIntegrateDofPS";
    _DAT_14ca2dfd0 = FUN_146826540;
    _DAT_14ca2dfd8 = FUN_146825d77;
    _DAT_14ca2dfe0 = FUN_146825fd6;
    _DAT_14ca2dfe8 = FUN_1407e02ea;
    _DAT_14ca2dff0 = FUN_146826273;
    _DAT_14ca2dfc8 = FUN_147296ce0;
    _DAT_14ca2e008 = 0xffffffff000000e0;
    _DAT_14ca2e010 = 8;
    DAT_14ca2e014 = 0;
    _DAT_14ca2dff8 = &LAB_147296d0c;
    FUN_145f3353a();
    FUN_1407e00cc(&DAT_14ca2dfb0);
    return;
  }
  return;
}



// FUNCTION 145f3353a FUN_145f3353a body=123 status=ok
// SIG undefined FUN_145f3353a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f3353a(void)

{
  _DAT_14ca34728 = L"BASE";
  DAT_14ca34752 = 4;
  _DAT_14ca34730 = FUN_140b35ae4();
  _DAT_14ca34738 = DAT_14ca2dfc0;
  _DAT_14ca34740 = &LAB_14682652b;
  DAT_14ca2dfc0 = &DAT_14ca34728;
  DAT_14ca2e015 = DAT_14ca2e015 + '\x01';
  _DAT_14ca34748 = 0x100000000;
  if (*(char *)(_DAT_14ca34730 + 100) != '\0') {
    DAT_14ca2e016 = DAT_14ca2e016 + '\x01';
  }
  return;
}



// FUNCTION 145f335b6 FUN_145f335b6 body=261 status=ok
// SIG undefined FUN_145f335b6(void)

void FUN_145f335b6(void)

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
              0x110) < DAT_14ca32ef0) {
    FUN_144b3d300(&DAT_14ca32ef0);
    if (DAT_14ca32ef0 == -1) {
      FUN_145f336bc(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x150;
      local_58 = 0x654;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca32e70,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f13f79);
      _Init_thread_footer(&DAT_14ca32ef0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f336bc FUN_145f336bc body=226 status=ok
// SIG undefined FUN_145f336bc(void)

longlong * FUN_145f336bc(longlong *param_1)

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
  pcVar13 = FUN_1462fc928;
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



// FUNCTION 145f337a0 FUN_145f337a0 body=136 status=ok
// SIG undefined FUN_145f337a0(void)

code * FUN_145f337a0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DofBlurTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000658;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14729de3e;
}



// FUNCTION 145f33828 FUN_145f33828 body=138 status=ok
// SIG undefined FUN_145f33828(void)

code * FUN_145f33828(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DofBlurSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3800000659;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f337a0;
}



// FUNCTION 145f338b2 FUN_145f338b2 body=138 status=ok
// SIG undefined FUN_145f338b2(void)

code * FUN_145f338b2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SunShaftAndDofSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x480000065b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14729ddb4;
}



// FUNCTION 145f3393c FUN_145f3393c body=292 status=ok
// SIG undefined FUN_145f3393c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f3393c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2e6a0) {
    FUN_144b3d300(&DAT_14ca2e6a0);
    if (DAT_14ca2e6a0 == -1) {
      FUN_145f33baa();
      FUN_145f33a60();
      FUN_140db5666(&DAT_14ca2e5f8,0,&DAT_14ca2e590,L"FMobileBasicEyeAdaptationCS",
                    L"/Engine/Private/PostProcessMobile.usf",L"BasicEyeAdaptationCS_Mobile",5,1,
                    FUN_1472975a8,FUN_147297548,&LAB_147297530,&LAB_14729752c,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca33008);
      _DAT_14ca2e5f8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142efe799);
      _Init_thread_footer(&DAT_14ca2e6a0);
    }
  }
  return &DAT_14ca2e5f8;
}



// FUNCTION 145f33a60 FUN_145f33a60 body=205 status=ok
// SIG undefined FUN_145f33a60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f33a60(void)

{
  if ((DAT_14ca2e5f7 & 2) == 0) {
    DAT_14ca2e5f7 = DAT_14ca2e5f7 | 2;
    _DAT_14ca2e598 = L"FMobileBasicEyeAdaptationCS";
    _DAT_14ca2e5b0 = FUN_146826540;
    _DAT_14ca2e5b8 = FUN_146825d77;
    _DAT_14ca2e5c0 = FUN_146825fd6;
    _DAT_14ca2e5c8 = FUN_1407e02ea;
    _DAT_14ca2e5d0 = FUN_146826273;
    _DAT_14ca2e5a8 = FUN_1472974fc;
    _DAT_14ca2e5e8 = 0xffffffff000000e0;
    _DAT_14ca2e5f0 = 8;
    DAT_14ca2e5f4 = 0;
    _DAT_14ca2e5d8 = &LAB_147297528;
    FUN_145f33b2e();
    FUN_1407e00cc(&DAT_14ca2e590);
    return;
  }
  return;
}



// FUNCTION 145f33b2e FUN_145f33b2e body=123 status=ok
// SIG undefined FUN_145f33b2e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f33b2e(void)

{
  _DAT_14ca348a0 = L"BASE";
  DAT_14ca348ca = 4;
  _DAT_14ca348a8 = FUN_140b35ae4();
  _DAT_14ca348b0 = DAT_14ca2e5a0;
  _DAT_14ca348b8 = &LAB_14682652b;
  DAT_14ca2e5a0 = &DAT_14ca348a0;
  DAT_14ca2e5f5 = DAT_14ca2e5f5 + '\x01';
  _DAT_14ca348c0 = 0x100000000;
  if (*(char *)(_DAT_14ca348a8 + 100) != '\0') {
    DAT_14ca2e5f6 = DAT_14ca2e5f6 + '\x01';
  }
  return;
}



// FUNCTION 145f33baa FUN_145f33baa body=261 status=ok
// SIG undefined FUN_145f33baa(void)

void FUN_145f33baa(void)

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
              0x110) < DAT_14ca33088) {
    FUN_144b3d300(&DAT_14ca33088);
    if (DAT_14ca33088 == -1) {
      FUN_145f33cb0(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xd0;
      local_58 = 0x791;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca33008,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f13f9d);
      _Init_thread_footer(&DAT_14ca33088);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f33cb0 FUN_145f33cb0 body=226 status=ok
// SIG undefined FUN_145f33cb0(void)

longlong * FUN_145f33cb0(longlong *param_1)

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
  pcVar13 = FUN_1462fcac2;
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



// FUNCTION 145f33d94 FUN_145f33d94 body=136 status=ok
// SIG undefined FUN_145f33d94(void)

undefined1 * FUN_145f33d94(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x792;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_14729e3ee;
}



// FUNCTION 145f33e1c FUN_145f33e1c body=138 status=ok
// SIG undefined FUN_145f33e1c(void)

code * FUN_145f33e1c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"EyeAdaptationBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb000000794;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462fcb4a;
}



// FUNCTION 145f33ea6 FUN_145f33ea6 body=138 status=ok
// SIG undefined FUN_145f33ea6(void)

code * FUN_145f33ea6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LogLuminanceWeightBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb800000795;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f33e1c;
}



// FUNCTION 145f33f30 FUN_145f33f30 body=292 status=ok
// SIG undefined FUN_145f33f30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f33f30(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2eeb0) {
    FUN_144b3d300(&DAT_14ca2eeb0);
    if (DAT_14ca2eeb0 == -1) {
      FUN_145f3419e();
      FUN_145f34054();
      FUN_140db5666(&DAT_14ca2ee08,0,&DAT_14ca2eda0,L"FMotionBlurFilterTileClassifyCS",
                    L"/Engine/Private/MotionBlur/MotionBlurFilterTileClassify.usf",L"MainCS",5,2,
                    FUN_147297fe0,FUN_147297f80,&LAB_147297f68,&LAB_147297f64,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca333d0);
      _DAT_14ca2ee08 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142eff0be);
      _Init_thread_footer(&DAT_14ca2eeb0);
    }
  }
  return &DAT_14ca2ee08;
}



// FUNCTION 145f34054 FUN_145f34054 body=205 status=ok
// SIG undefined FUN_145f34054(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f34054(void)

{
  if ((DAT_14ca2ee07 & 2) == 0) {
    DAT_14ca2ee07 = DAT_14ca2ee07 | 2;
    _DAT_14ca2eda8 = L"FMotionBlurFilterTileClassifyCS";
    _DAT_14ca2edc0 = FUN_146826540;
    _DAT_14ca2edc8 = FUN_146825d77;
    _DAT_14ca2edd0 = FUN_146825fd6;
    _DAT_14ca2edd8 = FUN_1407e02ea;
    _DAT_14ca2ede0 = FUN_146826273;
    _DAT_14ca2edb8 = FUN_147297f34;
    _DAT_14ca2edf8 = 0xffffffff000000e0;
    _DAT_14ca2ee00 = 8;
    DAT_14ca2ee04 = 0;
    _DAT_14ca2ede8 = &LAB_147297f60;
    FUN_145f34122();
    FUN_1407e00cc(&DAT_14ca2eda0);
    return;
  }
  return;
}



// FUNCTION 145f34122 FUN_145f34122 body=123 status=ok
// SIG undefined FUN_145f34122(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f34122(void)

{
  _DAT_14ca349c0 = L"BASE";
  DAT_14ca349ea = 4;
  _DAT_14ca349c8 = FUN_140b35ae4();
  _DAT_14ca349d0 = DAT_14ca2edb0;
  _DAT_14ca349d8 = &LAB_14682652b;
  DAT_14ca2edb0 = &DAT_14ca349c0;
  DAT_14ca2ee05 = DAT_14ca2ee05 + '\x01';
  _DAT_14ca349e0 = 0x100000000;
  if (*(char *)(_DAT_14ca349c8 + 100) != '\0') {
    DAT_14ca2ee06 = DAT_14ca2ee06 + '\x01';
  }
  return;
}



// FUNCTION 145f3419e FUN_145f3419e body=261 status=ok
// SIG undefined FUN_145f3419e(void)

void FUN_145f3419e(void)

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
              0x110) < DAT_14ca33450) {
    FUN_144b3d300(&DAT_14ca33450);
    if (DAT_14ca33450 == -1) {
      FUN_145f342a4(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x60;
      local_58 = 0x1a7;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca333d0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f13ffd);
      _Init_thread_footer(&DAT_14ca33450);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f342a4 FUN_145f342a4 body=226 status=ok
// SIG undefined FUN_145f342a4(void)

longlong * FUN_145f342a4(longlong *param_1)

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
  pcVar13 = FUN_1462fd0a0;
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



// FUNCTION 145f34388 FUN_145f34388 body=136 status=ok
// SIG undefined FUN_145f34388(void)

code * FUN_145f34388(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HalfResPixelVelocityThreshold";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28000001ad;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f3449a;
}



// FUNCTION 145f34410 FUN_145f34410 body=138 status=ok
// SIG undefined FUN_145f34410(void)

code * FUN_145f34410(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"FlattenTileMaxId";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000001a9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14729ed20;
}



// FUNCTION 145f3449a FUN_145f3449a body=138 status=ok
// SIG undefined FUN_145f3449a(void)

code * FUN_145f3449a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TileListMaxSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x24000001ac;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14729ec0c;
}



// FUNCTION 145f34524 FUN_145f34524 body=292 status=ok
// SIG undefined FUN_145f34524(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f34524(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2f3a0) {
    FUN_144b3d300(&DAT_14ca2f3a0);
    if (DAT_14ca2f3a0 == -1) {
      FUN_145f34792();
      FUN_145f34648();
      FUN_140db5666(&DAT_14ca2f2f8,0,&DAT_14ca2f290,
                    L"FPixelProjectedReflectionMobile_ProjectionPassCS",
                    L"/Engine/Private/PostProcessPixelProjectedReflectionMobile.usf",
                    L"ProjectionPassCS",5,1,FUN_147298b28,FUN_147298ac8,&LAB_1462fb240,
                    &LAB_147298ac4,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca335f0);
      _DAT_14ca2f2f8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f03b9a);
      _Init_thread_footer(&DAT_14ca2f3a0);
    }
  }
  return &DAT_14ca2f2f8;
}



// FUNCTION 145f34648 FUN_145f34648 body=205 status=ok
// SIG undefined FUN_145f34648(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f34648(void)

{
  if ((DAT_14ca2f2f7 & 2) == 0) {
    DAT_14ca2f2f7 = DAT_14ca2f2f7 | 2;
    _DAT_14ca2f298 = L"FPixelProjectedReflectionMobile_ProjectionPassCS";
    _DAT_14ca2f2b0 = FUN_146826540;
    _DAT_14ca2f2b8 = FUN_146825d77;
    _DAT_14ca2f2c0 = FUN_146825fd6;
    _DAT_14ca2f2c8 = FUN_1407e02ea;
    _DAT_14ca2f2d0 = FUN_146826273;
    _DAT_14ca2f2a8 = FUN_147298a94;
    _DAT_14ca2f2e8 = 0xffffffff000000e0;
    _DAT_14ca2f2f0 = 8;
    DAT_14ca2f2f4 = 0;
    _DAT_14ca2f2d8 = &LAB_147298ac0;
    FUN_145f34716();
    FUN_1407e00cc(&DAT_14ca2f290);
    return;
  }
  return;
}



// FUNCTION 145f34716 FUN_145f34716 body=123 status=ok
// SIG undefined FUN_145f34716(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f34716(void)

{
  _DAT_14ca34aa0 = L"BASE";
  DAT_14ca34aca = 4;
  _DAT_14ca34aa8 = FUN_140b35ae4();
  _DAT_14ca34ab0 = DAT_14ca2f2a0;
  _DAT_14ca34ab8 = &LAB_14682652b;
  DAT_14ca2f2a0 = &DAT_14ca34aa0;
  DAT_14ca2f2f5 = DAT_14ca2f2f5 + '\x01';
  _DAT_14ca34ac0 = 0x100000000;
  if (*(char *)(_DAT_14ca34aa8 + 100) != '\0') {
    DAT_14ca2f2f6 = DAT_14ca2f2f6 + '\x01';
  }
  return;
}



// FUNCTION 145f34792 FUN_145f34792 body=261 status=ok
// SIG undefined FUN_145f34792(void)

void FUN_145f34792(void)

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
              0x110) < DAT_14ca33670) {
    FUN_144b3d300(&DAT_14ca33670);
    if (DAT_14ca33670 == -1) {
      FUN_145f34898(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x70;
      local_58 = 0x3f;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca335f0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f1402d);
      _Init_thread_footer(&DAT_14ca33670);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f34898 FUN_145f34898 body=226 status=ok
// SIG undefined FUN_145f34898(void)

longlong * FUN_145f34898(longlong *param_1)

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
  pcVar13 = FUN_1462fd846;
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



// FUNCTION 145f3497c FUN_145f3497c body=136 status=ok
// SIG undefined FUN_145f3497c(void)

code * FUN_145f3497c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutputProjectionBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000044;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14729fee6;
}



// FUNCTION 145f34a04 FUN_145f34a04 body=138 status=ok
// SIG undefined FUN_145f34a04(void)

code * FUN_145f34a04(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ReflectionPlane";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000046;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f3497c;
}



// FUNCTION 145f34a8e FUN_145f34a8e body=138 status=ok
// SIG undefined FUN_145f34a8e(void)

code * FUN_145f34a8e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000041;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462fd8ce;
}



// FUNCTION 145f34b18 FUN_145f34b18 body=292 status=ok
// SIG undefined FUN_145f34b18(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f34b18(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca30da0) {
    FUN_144b3d300(&DAT_14ca30da0);
    if (DAT_14ca30da0 == -1) {
      FUN_145f34d86();
      FUN_145f34c3c();
      FUN_140db5666(&DAT_14ca30cf8,0,&DAT_14ca30c90,L"FMobileCustomResolvePS",
                    L"/Engine/Private/PostProcessTonemap.usf",L"MobileCustomResolve_MainPS",3,5,
                    FUN_14729a8f4,FUN_14729a894,&LAB_14729a87c,&LAB_14729a878,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca34228);
      _DAT_14ca30cf8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f0f7e9);
      _Init_thread_footer(&DAT_14ca30da0);
    }
  }
  return &DAT_14ca30cf8;
}



// FUNCTION 145f34c3c FUN_145f34c3c body=205 status=ok
// SIG undefined FUN_145f34c3c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f34c3c(void)

{
  if ((DAT_14ca30cf7 & 2) == 0) {
    DAT_14ca30cf7 = DAT_14ca30cf7 | 2;
    _DAT_14ca30c98 = L"FMobileCustomResolvePS";
    _DAT_14ca30cb0 = FUN_146826540;
    _DAT_14ca30cb8 = FUN_146825d77;
    _DAT_14ca30cc0 = FUN_146825fd6;
    _DAT_14ca30cc8 = FUN_1407e02ea;
    _DAT_14ca30cd0 = FUN_146826273;
    _DAT_14ca30ca8 = FUN_14729a848;
    _DAT_14ca30ce8 = 0xffffffff000000e0;
    _DAT_14ca30cf0 = 8;
    DAT_14ca30cf4 = 0;
    _DAT_14ca30cd8 = &LAB_14729a874;
    FUN_145f34d0a();
    FUN_1407e00cc(&DAT_14ca30c90);
    return;
  }
  return;
}



// FUNCTION 145f34d0a FUN_145f34d0a body=123 status=ok
// SIG undefined FUN_145f34d0a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f34d0a(void)

{
  _DAT_14ca34e60 = L"BASE";
  DAT_14ca34e8a = 4;
  _DAT_14ca34e68 = FUN_140b35ae4();
  _DAT_14ca34e70 = DAT_14ca30ca0;
  _DAT_14ca34e78 = &LAB_14682652b;
  DAT_14ca30ca0 = &DAT_14ca34e60;
  DAT_14ca30cf5 = DAT_14ca30cf5 + '\x01';
  _DAT_14ca34e80 = 0x100000000;
  if (*(char *)(_DAT_14ca34e68 + 100) != '\0') {
    DAT_14ca30cf6 = DAT_14ca30cf6 + '\x01';
  }
  return;
}



// FUNCTION 145f34d86 FUN_145f34d86 body=261 status=ok
// SIG undefined FUN_145f34d86(void)

void FUN_145f34d86(void)

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
              0x110) < DAT_14ca342a8) {
    FUN_144b3d300(&DAT_14ca342a8);
    if (DAT_14ca342a8 == -1) {
      FUN_145f34e8c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x60;
      local_58 = 0x422;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca34228,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f14785);
      _Init_thread_footer(&DAT_14ca342a8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f34e8c FUN_145f34e8c body=226 status=ok
// SIG undefined FUN_145f34e8c(void)

longlong * FUN_145f34e8c(longlong *param_1)

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
  pcVar13 = FUN_1462ff516;
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



// FUNCTION 145f34f70 FUN_145f34f70 body=136 status=ok
// SIG undefined FUN_145f34f70(void)

code * FUN_145f34f70(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ColorGradingLUTSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4800000428;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472a2a20;
}



// FUNCTION 145f34ff8 FUN_145f34ff8 body=138 status=ok
// SIG undefined FUN_145f34ff8(void)

code * FUN_145f34ff8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LUTSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000429;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f34f70;
}



// FUNCTION 145f35082 FUN_145f35082 body=138 status=ok
// SIG undefined FUN_145f35082(void)

code * FUN_145f35082(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InvLUTSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x540000042a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f34ff8;
}



// FUNCTION 145f3510c FUN_145f3510c body=292 status=ok
// SIG undefined FUN_145f3510c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f3510c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca411e0) {
    FUN_144b3d300(&DAT_14ca411e0);
    if (DAT_14ca411e0 == -1) {
      FUN_145f3537a();
      FUN_145f35230();
      FUN_140db5666(&DAT_14ca41138,0,&DAT_14ca410d0,L"FCompositeSkyLightPS",
                    L"/Engine/Private/RayTracing/CompositeSkyLightPS.usf",L"CompositeSkyLightPS",3,1
                    ,FUN_1472c4a34,FUN_1472c49d4,&LAB_146302a7c,&LAB_1472c49d0,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca43908);
      _DAT_14ca41138 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f7f721);
      _Init_thread_footer(&DAT_14ca411e0);
    }
  }
  return &DAT_14ca41138;
}



// FUNCTION 145f35230 FUN_145f35230 body=205 status=ok
// SIG undefined FUN_145f35230(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f35230(void)

{
  if ((DAT_14ca41137 & 2) == 0) {
    DAT_14ca41137 = DAT_14ca41137 | 2;
    _DAT_14ca410d8 = L"FCompositeSkyLightPS";
    _DAT_14ca410f0 = FUN_146826540;
    _DAT_14ca410f8 = FUN_146825d77;
    _DAT_14ca41100 = FUN_146825fd6;
    _DAT_14ca41108 = FUN_1407e02ea;
    _DAT_14ca41110 = FUN_146826273;
    _DAT_14ca410e8 = FUN_1472c49a2;
    _DAT_14ca41128 = 0xffffffff000000e0;
    _DAT_14ca41130 = 8;
    DAT_14ca41134 = 0;
    _DAT_14ca41118 = &LAB_1472c49cc;
    FUN_145f352fe();
    FUN_1407e00cc(&DAT_14ca410d0);
    return;
  }
  return;
}



// FUNCTION 145f352fe FUN_145f352fe body=123 status=ok
// SIG undefined FUN_145f352fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f352fe(void)

{
  _DAT_14ca446a0 = L"BASE";
  DAT_14ca446ca = 4;
  _DAT_14ca446a8 = FUN_140b35ae4();
  _DAT_14ca446b0 = DAT_14ca410e0;
  _DAT_14ca446b8 = &LAB_14682652b;
  DAT_14ca410e0 = &DAT_14ca446a0;
  DAT_14ca41135 = DAT_14ca41135 + '\x01';
  _DAT_14ca446c0 = 0x100000000;
  if (*(char *)(_DAT_14ca446a8 + 100) != '\0') {
    DAT_14ca41136 = DAT_14ca41136 + '\x01';
  }
  return;
}



// FUNCTION 145f3537a FUN_145f3537a body=261 status=ok
// SIG undefined FUN_145f3537a(void)

void FUN_145f3537a(void)

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
              0x110) < DAT_14ca43988) {
    FUN_144b3d300(&DAT_14ca43988);
    if (DAT_14ca43988 == -1) {
      FUN_145f35480(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x180;
      local_58 = 0x279;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca43908,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142fafd4f);
      _Init_thread_footer(&DAT_14ca43988);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f35480 FUN_145f35480 body=226 status=ok
// SIG undefined FUN_145f35480(void)

longlong * FUN_145f35480(longlong *param_1)

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
  pcVar13 = FUN_1463039e0;
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



// FUNCTION 145f35564 FUN_145f35564 body=130 status=ok
// SIG undefined FUN_145f35564(void)

undefined1 * FUN_145f35564(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RenderTargets";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x27a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x17;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1472cb99e;
}



// FUNCTION 145f355e6 FUN_145f355e6 body=138 status=ok
// SIG undefined FUN_145f355e6(void)

code * FUN_145f355e6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SkyLightTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000027b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f35564;
}



// FUNCTION 145f35670 FUN_145f35670 body=144 status=ok
// SIG undefined FUN_145f35670(void)

code * FUN_145f35670(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1100000027d;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1472cb914;
}



// FUNCTION 145f35700 FUN_145f35700 body=292 status=ok
// SIG undefined FUN_145f35700(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f35700(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca427c0) {
    FUN_144b3d300(&DAT_14ca427c0);
    if (DAT_14ca427c0 == -1) {
      FUN_145f3596e();
      FUN_145f35824();
      FUN_140db5666(&DAT_14ca42718,0,&DAT_14ca426b0,L"FCopyDiffuseIrradiancePS",
                    L"/Engine/Private/ReflectionEnvironmentShaders.usf",L"DiffuseIrradianceCopyPS",3
                    ,1,FUN_1472c6ca4,FUN_1472c6c44,&LAB_1472c6c40,&LAB_1472c6c3c,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca43ee0);
      _DAT_14ca42718 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f8f333);
      _Init_thread_footer(&DAT_14ca427c0);
    }
  }
  return &DAT_14ca42718;
}



// FUNCTION 145f35824 FUN_145f35824 body=205 status=ok
// SIG undefined FUN_145f35824(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f35824(void)

{
  if ((DAT_14ca42717 & 2) == 0) {
    DAT_14ca42717 = DAT_14ca42717 | 2;
    _DAT_14ca426b8 = L"FCopyDiffuseIrradiancePS";
    _DAT_14ca426d0 = FUN_146826540;
    _DAT_14ca426d8 = FUN_146825d77;
    _DAT_14ca426e0 = FUN_146825fd6;
    _DAT_14ca426e8 = FUN_1407e02ea;
    _DAT_14ca426f0 = FUN_146826273;
    _DAT_14ca426c8 = FUN_1472c6c0e;
    _DAT_14ca42708 = 0xffffffff000000e0;
    _DAT_14ca42710 = 8;
    DAT_14ca42714 = 0;
    _DAT_14ca426f8 = &LAB_1472c6c38;
    FUN_145f358f2();
    FUN_1407e00cc(&DAT_14ca426b0);
    return;
  }
  return;
}



// FUNCTION 145f358f2 FUN_145f358f2 body=123 status=ok
// SIG undefined FUN_145f358f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f358f2(void)

{
  _DAT_14ca449d0 = L"BASE";
  DAT_14ca449fa = 4;
  _DAT_14ca449d8 = FUN_140b35ae4();
  _DAT_14ca449e0 = DAT_14ca426c0;
  _DAT_14ca449e8 = &LAB_14682652b;
  DAT_14ca426c0 = &DAT_14ca449d0;
  DAT_14ca42715 = DAT_14ca42715 + '\x01';
  _DAT_14ca449f0 = 0x100000000;
  if (*(char *)(_DAT_14ca449d8 + 100) != '\0') {
    DAT_14ca42716 = DAT_14ca42716 + '\x01';
  }
  return;
}



// FUNCTION 145f3596e FUN_145f3596e body=261 status=ok
// SIG undefined FUN_145f3596e(void)

void FUN_145f3596e(void)

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
              0x110) < DAT_14ca43f60) {
    FUN_144b3d300(&DAT_14ca43f60);
    if (DAT_14ca43f60 == -1) {
      FUN_145f35a74(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x150;
      local_58 = 0x26;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca43ee0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142fb251f);
      _Init_thread_footer(&DAT_14ca43f60);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f35a74 FUN_145f35a74 body=226 status=ok
// SIG undefined FUN_145f35a74(void)

longlong * FUN_145f35a74(longlong *param_1)

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
  pcVar13 = FUN_146304558;
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



// FUNCTION 145f35b58 FUN_145f35b58 body=136 status=ok
// SIG undefined FUN_145f35b58(void)

code * FUN_145f35b58(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CoefficientMask2";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x380000002c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472cdbc8;
}



// FUNCTION 145f35be0 FUN_145f35be0 body=138 status=ok
// SIG undefined FUN_145f35be0(void)

code * FUN_145f35be0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CoefficientMask0";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000029;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472cdcdc;
}



// FUNCTION 145f35c6a FUN_145f35c6a body=138 status=ok
// SIG undefined FUN_145f35c6a(void)

code * FUN_145f35c6a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000002e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472cdb3e;
}



// FUNCTION 145f35cf4 FUN_145f35cf4 body=292 status=ok
// SIG undefined FUN_145f35cf4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f35cf4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4cf80) {
    FUN_144b3d300(&DAT_14ca4cf80);
    if (DAT_14ca4cf80 == -1) {
      FUN_145f35f62();
      FUN_145f35e18();
      FUN_140db5666(&DAT_14ca4ced8,0,&DAT_14ca4ce70,L"FSSRTileClassificationBuildListsCS",
                    L"/Engine/Private/DefaultSSRTiles.usf",L"SSRTileClassificationBuildListsCS",5,1,
                    FUN_1472e9fa8,FUN_1472e9f48,&LAB_1472e9f30,&LAB_1472e9f2c,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca55ae0);
      _DAT_14ca4ced8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14303cdc9);
      _Init_thread_footer(&DAT_14ca4cf80);
    }
  }
  return &DAT_14ca4ced8;
}



// FUNCTION 145f35e18 FUN_145f35e18 body=205 status=ok
// SIG undefined FUN_145f35e18(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f35e18(void)

{
  if ((DAT_14ca4ced7 & 2) == 0) {
    DAT_14ca4ced7 = DAT_14ca4ced7 | 2;
    _DAT_14ca4ce78 = L"FSSRTileClassificationBuildListsCS";
    _DAT_14ca4ce90 = FUN_146826540;
    _DAT_14ca4ce98 = FUN_146825d77;
    _DAT_14ca4cea0 = FUN_146825fd6;
    _DAT_14ca4cea8 = FUN_1407e02ea;
    _DAT_14ca4ceb0 = FUN_146826273;
    _DAT_14ca4ce88 = FUN_1472e9efc;
    _DAT_14ca4cec8 = 0xffffffff000000e0;
    _DAT_14ca4ced0 = 8;
    DAT_14ca4ced4 = 0;
    _DAT_14ca4ceb8 = &LAB_1472e9f28;
    FUN_145f35ee6();
    FUN_1407e00cc(&DAT_14ca4ce70);
    return;
  }
  return;
}



// FUNCTION 145f35ee6 FUN_145f35ee6 body=123 status=ok
// SIG undefined FUN_145f35ee6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f35ee6(void)

{
  _DAT_14ca56828 = L"BASE";
  DAT_14ca56852 = 4;
  _DAT_14ca56830 = FUN_140b35ae4();
  _DAT_14ca56838 = DAT_14ca4ce80;
  _DAT_14ca56840 = &LAB_14682652b;
  DAT_14ca4ce80 = &DAT_14ca56828;
  DAT_14ca4ced5 = DAT_14ca4ced5 + '\x01';
  _DAT_14ca56848 = 0x100000000;
  if (*(char *)(_DAT_14ca56830 + 100) != '\0') {
    DAT_14ca4ced6 = DAT_14ca4ced6 + '\x01';
  }
  return;
}



// FUNCTION 145f35f62 FUN_145f35f62 body=261 status=ok
// SIG undefined FUN_145f35f62(void)

void FUN_145f35f62(void)

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
              0x110) < DAT_14ca55b60) {
    FUN_144b3d300(&DAT_14ca55b60);
    if (DAT_14ca55b60 == -1) {
      FUN_145f36068(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0x67;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca55ae0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14305d799);
      _Init_thread_footer(&DAT_14ca55b60);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f36068 FUN_145f36068 body=226 status=ok
// SIG undefined FUN_145f36068(void)

longlong * FUN_145f36068(longlong *param_1)

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
  pcVar13 = FUN_14630776c;
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



// FUNCTION 145f3614c FUN_145f3614c body=136 status=ok
// SIG undefined FUN_145f3614c(void)

code * FUN_145f3614c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x280000006a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f3625e;
}



// FUNCTION 145f361d4 FUN_145f361d4 body=138 status=ok
// SIG undefined FUN_145f361d4(void)

code * FUN_145f361d4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DispatchIndirectDataUAV";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x380000006c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472f582e;
}



// FUNCTION 145f3625e FUN_145f3625e body=138 status=ok
// SIG undefined FUN_145f3625e(void)

code * FUN_145f3625e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000069;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1463077f4;
}



// FUNCTION 145f362e8 FUN_145f362e8 body=205 status=ok
// SIG undefined FUN_145f362e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f362e8(void)

{
  if ((DAT_14ca64827 & 2) == 0) {
    DAT_14ca64827 = DAT_14ca64827 | 2;
    _DAT_14ca647c8 = L"FPruneLightGridCS";
    _DAT_14ca647e0 = FUN_146826540;
    _DAT_14ca647e8 = FUN_146825d77;
    _DAT_14ca647f0 = FUN_146825fd6;
    _DAT_14ca647f8 = FUN_1407e02ea;
    _DAT_14ca64800 = FUN_146826273;
    _DAT_14ca647d8 = FUN_14732adbe;
    _DAT_14ca64818 = 0xffffffff000000e0;
    _DAT_14ca64820 = 8;
    DAT_14ca64824 = 0;
    _DAT_14ca64808 = &LAB_14732ade8;
    FUN_145f363b6();
    FUN_1407e00cc(&DAT_14ca647c0);
    return;
  }
  return;
}



// FUNCTION 145f363b6 FUN_145f363b6 body=123 status=ok
// SIG undefined FUN_145f363b6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f363b6(void)

{
  _DAT_14ca68b10 = L"BASE";
  DAT_14ca68b3a = 4;
  _DAT_14ca68b18 = FUN_140b35ae4();
  _DAT_14ca68b20 = DAT_14ca647d0;
  _DAT_14ca68b28 = &LAB_14682652b;
  DAT_14ca647d0 = &DAT_14ca68b10;
  DAT_14ca64825 = DAT_14ca64825 + '\x01';
  _DAT_14ca68b30 = 0x100000000;
  if (*(char *)(_DAT_14ca68b18 + 100) != '\0') {
    DAT_14ca64826 = DAT_14ca64826 + '\x01';
  }
  return;
}



// FUNCTION 145f36432 FUN_145f36432 body=226 status=ok
// SIG undefined FUN_145f36432(void)

longlong * FUN_145f36432(longlong *param_1)

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
  pcVar13 = FUN_146310b54;
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



// FUNCTION 145f36516 FUN_145f36516 body=138 status=ok
// SIG undefined FUN_145f36516(void)

code * FUN_145f36516(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutPrunedLightGridData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3800000379;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f365a0;
}



// FUNCTION 145f365a0 FUN_145f365a0 body=138 status=ok
// SIG undefined FUN_145f365a0(void)

code * FUN_145f365a0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MaxLocalLightIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3400000378;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14732ea3e;
}



// FUNCTION 145f3662a FUN_145f3662a body=142 status=ok
// SIG undefined FUN_145f3662a(void)

code * FUN_145f3662a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a12b9e();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ForwardLightData";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FForwardLightData";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x2000000376;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_146310bdc;
}



// FUNCTION 145f366b8 FUN_145f366b8 body=292 status=ok
// SIG undefined FUN_145f366b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f366b8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca6ab60) {
    FUN_144b3d300(&DAT_14ca6ab60);
    if (DAT_14ca6ab60 == -1) {
      FUN_145f36926();
      FUN_145f367dc();
      FUN_140db5666(&DAT_14ca6aab8,0,&DAT_14ca6aa50,L"FDrawDebugCloudShadowCS",
                    L"/Engine/Private/VolumetricCloud.usf",L"MainDrawDebugShadowCS",5,1,
                    FUN_147334608,FUN_1473345a8,&LAB_146313ce2,&LAB_1473345a4,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca6c8b0);
      _DAT_14ca6aab8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430f792d);
      _Init_thread_footer(&DAT_14ca6ab60);
    }
  }
  return &DAT_14ca6aab8;
}



// FUNCTION 145f367dc FUN_145f367dc body=205 status=ok
// SIG undefined FUN_145f367dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f367dc(void)

{
  if ((DAT_14ca6aab7 & 2) == 0) {
    DAT_14ca6aab7 = DAT_14ca6aab7 | 2;
    _DAT_14ca6aa58 = L"FDrawDebugCloudShadowCS";
    _DAT_14ca6aa70 = FUN_146826540;
    _DAT_14ca6aa78 = FUN_146825d77;
    _DAT_14ca6aa80 = FUN_146825fd6;
    _DAT_14ca6aa88 = FUN_1407e02ea;
    _DAT_14ca6aa90 = FUN_146826273;
    _DAT_14ca6aa68 = FUN_147334576;
    _DAT_14ca6aaa8 = 0xffffffff000000e0;
    _DAT_14ca6aab0 = 8;
    DAT_14ca6aab4 = 0;
    _DAT_14ca6aa98 = &LAB_1473345a0;
    FUN_145f368aa();
    FUN_1407e00cc(&DAT_14ca6aa50);
    return;
  }
  return;
}



// FUNCTION 145f368aa FUN_145f368aa body=123 status=ok
// SIG undefined FUN_145f368aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f368aa(void)

{
  _DAT_14ca6d3d8 = L"BASE";
  DAT_14ca6d402 = 4;
  _DAT_14ca6d3e0 = FUN_140b35ae4();
  _DAT_14ca6d3e8 = DAT_14ca6aa60;
  _DAT_14ca6d3f0 = &LAB_14682652b;
  DAT_14ca6aa60 = &DAT_14ca6d3d8;
  DAT_14ca6aab5 = DAT_14ca6aab5 + '\x01';
  _DAT_14ca6d3f8 = 0x100000000;
  if (*(char *)(_DAT_14ca6d3e0 + 100) != '\0') {
    DAT_14ca6aab6 = DAT_14ca6aab6 + '\x01';
  }
  return;
}



// FUNCTION 145f36926 FUN_145f36926 body=261 status=ok
// SIG undefined FUN_145f36926(void)

void FUN_145f36926(void)

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
              0x110) < DAT_14ca6c930) {
    FUN_144b3d300(&DAT_14ca6c930);
    if (DAT_14ca6c930 == -1) {
      FUN_145f36a2c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x90;
      local_58 = 0x5e3;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca6c8b0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14310d457);
      _Init_thread_footer(&DAT_14ca6c930);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f36a2c FUN_145f36a2c body=226 status=ok
// SIG undefined FUN_145f36a2c(void)

longlong * FUN_145f36a2c(longlong *param_1)

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
  pcVar13 = FUN_1463147ca;
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



// FUNCTION 145f36b10 FUN_145f36b10 body=136 status=ok
// SIG undefined FUN_145f36b10(void)

undefined1 * FUN_145f36b10(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14117f524();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ShaderPrintParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"ShaderPrint::FShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x5e4;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_147338086;
}



// FUNCTION 145f36b98 FUN_145f36b98 body=138 status=ok
// SIG undefined FUN_145f36b98(void)

code * FUN_145f36b98(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CloudTraceDirection";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000005e7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f36c22;
}



// FUNCTION 145f36c22 FUN_145f36c22 body=138 status=ok
// SIG undefined FUN_145f36c22(void)

code * FUN_145f36c22(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CloudTextureSizeInvSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000005e6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147337ffc;
}



// FUNCTION 145f36cac FUN_145f36cac body=205 status=ok
// SIG undefined FUN_145f36cac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f36cac(void)

{
  if ((DAT_14ca6b257 & 2) == 0) {
    DAT_14ca6b257 = DAT_14ca6b257 | 2;
    _DAT_14ca6b1f8 = L"FInjectShadowedLocalLightPS";
    _DAT_14ca6b210 = FUN_146826540;
    _DAT_14ca6b218 = FUN_146825d77;
    _DAT_14ca6b220 = FUN_146825fd6;
    _DAT_14ca6b228 = FUN_1407e02ea;
    _DAT_14ca6b230 = FUN_146826273;
    _DAT_14ca6b208 = FUN_1473349d0;
    _DAT_14ca6b248 = 0xffffffff000000e0;
    _DAT_14ca6b250 = 8;
    DAT_14ca6b254 = 0;
    _DAT_14ca6b238 = &LAB_1473349fa;
    FUN_145f36d7a();
    FUN_1407e00cc(&DAT_14ca6b1f0);
    return;
  }
  return;
}



// FUNCTION 145f36d7a FUN_145f36d7a body=123 status=ok
// SIG undefined FUN_145f36d7a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f36d7a(void)

{
  _DAT_14ca6d550 = L"BASE";
  DAT_14ca6d57a = 4;
  _DAT_14ca6d558 = FUN_140b35ae4();
  _DAT_14ca6d560 = DAT_14ca6b200;
  _DAT_14ca6d568 = &LAB_14682652b;
  DAT_14ca6b200 = &DAT_14ca6d550;
  DAT_14ca6b255 = DAT_14ca6b255 + '\x01';
  _DAT_14ca6d570 = 0x100000000;
  if (*(char *)(_DAT_14ca6d558 + 100) != '\0') {
    DAT_14ca6b256 = DAT_14ca6b256 + '\x01';
  }
  return;
}



// FUNCTION 145f36df6 FUN_145f36df6 body=226 status=ok
// SIG undefined FUN_145f36df6(void)

longlong * FUN_145f36df6(longlong *param_1)

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
  pcVar13 = FUN_146314f4a;
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



// FUNCTION 145f36eda FUN_145f36eda body=138 status=ok
// SIG undefined FUN_145f36eda(void)

code * FUN_145f36eda(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ConservativeDepthTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4c00000015e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f36fee;
}



// FUNCTION 145f36f64 FUN_145f36f64 body=138 status=ok
// SIG undefined FUN_145f36f64(void)

code * FUN_145f36f64(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"UseConservativeDepthTexture";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4c80000015f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f36eda;
}



// FUNCTION 145f36fee FUN_145f36fee body=142 status=ok
// SIG undefined FUN_145f36fee(void)

code * FUN_145f36fee(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1412fe86a();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"VirtualShadowMapSamplingParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FVirtualShadowMapSamplingParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x4b00000015d;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_146314fd2;
}



// FUNCTION 145f3707c FUN_145f3707c body=292 status=ok
// SIG undefined FUN_145f3707c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f3707c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caacdb0) {
    FUN_144b3d300(&DAT_14caacdb0);
    if (DAT_14caacdb0 == -1) {
      FUN_145f372ea();
      FUN_145f371a0();
      FUN_140db5666(&DAT_14caacd08,0,&DAT_14caacca0,L"FSlatePostProcessBlurPS",
                    L"/Engine/Private/SlatePostProcessPixelShader.usf",L"GaussianBlurMain",3,1,
                    FUN_14750cf88,FUN_14750cf28,&LAB_14750cf24,&LAB_14750cf20,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cab03a8);
      _DAT_14caacd08 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1432b9dbb);
      _Init_thread_footer(&DAT_14caacdb0);
    }
  }
  return &DAT_14caacd08;
}



// FUNCTION 145f371a0 FUN_145f371a0 body=205 status=ok
// SIG undefined FUN_145f371a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f371a0(void)

{
  if ((DAT_14caacd07 & 2) == 0) {
    DAT_14caacd07 = DAT_14caacd07 | 2;
    _DAT_14caacca8 = L"FSlatePostProcessBlurPS";
    _DAT_14caaccc0 = FUN_146826540;
    _DAT_14caaccc8 = FUN_146825d77;
    _DAT_14caaccd0 = FUN_146825fd6;
    _DAT_14caaccd8 = FUN_1407e02ea;
    _DAT_14caacce0 = FUN_146826273;
    _DAT_14caaccb8 = FUN_14750cef2;
    _DAT_14caaccf8 = 0xffffffff000000e0;
    _DAT_14caacd00 = 8;
    DAT_14caacd04 = 0;
    _DAT_14caacce8 = &LAB_14750cf1c;
    FUN_145f3726e();
    FUN_1407e00cc(&DAT_14caacca0);
    return;
  }
  return;
}



// FUNCTION 145f3726e FUN_145f3726e body=123 status=ok
// SIG undefined FUN_145f3726e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f3726e(void)

{
  _DAT_14cab0db0 = L"BASE";
  DAT_14cab0dda = 4;
  _DAT_14cab0db8 = FUN_140b35ae4();
  _DAT_14cab0dc0 = DAT_14caaccb0;
  _DAT_14cab0dc8 = &LAB_14682652b;
  DAT_14caaccb0 = &DAT_14cab0db0;
  DAT_14caacd05 = DAT_14caacd05 + '\x01';
  _DAT_14cab0dd0 = 0x100000000;
  if (*(char *)(_DAT_14cab0db8 + 100) != '\0') {
    DAT_14caacd06 = DAT_14caacd06 + '\x01';
  }
  return;
}



// FUNCTION 145f372ea FUN_145f372ea body=261 status=ok
// SIG undefined FUN_145f372ea(void)

void FUN_145f372ea(void)

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
              0x110) < DAT_14cab0428) {
    FUN_144b3d300(&DAT_14cab0428);
    if (DAT_14cab0428 == -1) {
      FUN_145f373f0(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x530;
      local_58 = 300;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cab03a8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1432c71bc);
      _Init_thread_footer(&DAT_14cab0428);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f373f0 FUN_145f373f0 body=226 status=ok
// SIG undefined FUN_145f373f0(void)

longlong * FUN_145f373f0(longlong *param_1)

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
  pcVar13 = FUN_14633721c;
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



// FUNCTION 145f374d4 FUN_145f374d4 body=136 status=ok
// SIG undefined FUN_145f374d4(void)

code * FUN_145f374d4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"WeightAndOffsets";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000012f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0x3f;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147510f86;
}



// FUNCTION 145f3755c FUN_145f3755c body=138 status=ok
// SIG undefined FUN_145f3755c(void)

code * FUN_145f3755c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x42000000132;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147510efc;
}



// FUNCTION 145f375e6 FUN_145f375e6 body=138 status=ok
// SIG undefined FUN_145f375e6(void)

code * FUN_145f375e6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000000130;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f374d4;
}



// FUNCTION 145f37670 FUN_145f37670 body=292 status=ok
// SIG undefined FUN_145f37670(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f37670(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaced8) {
    FUN_144b3d300(&DAT_14caaced8);
    if (DAT_14caaced8 == -1) {
      FUN_145f378de();
      FUN_145f37794();
      FUN_140db5666(&DAT_14caace30,0,&DAT_14caacdc8,L"FSlatePostProcessColorDeficiencyPS",
                    L"/Engine/Private/SlatePostProcessColorDeficiencyPixelShader.usf",
                    L"ColorDeficiencyMain",3,1,FUN_14750d052,FUN_14750cff2,&LAB_14750cfee,
                    &LAB_14750cfea,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14cab0430);
      _DAT_14caace30 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1432bbf7a);
      _Init_thread_footer(&DAT_14caaced8);
    }
  }
  return &DAT_14caace30;
}



// FUNCTION 145f37794 FUN_145f37794 body=205 status=ok
// SIG undefined FUN_145f37794(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f37794(void)

{
  if ((DAT_14caace2f & 2) == 0) {
    DAT_14caace2f = DAT_14caace2f | 2;
    _DAT_14caacdd0 = L"FSlatePostProcessColorDeficiencyPS";
    _DAT_14caacde8 = FUN_146826540;
    _DAT_14caacdf0 = FUN_146825d77;
    _DAT_14caacdf8 = FUN_146825fd6;
    _DAT_14caace00 = FUN_1407e02ea;
    _DAT_14caace08 = FUN_146826273;
    _DAT_14caacde0 = FUN_14750cfbc;
    _DAT_14caace20 = 0xffffffff000000e0;
    _DAT_14caace28 = 8;
    DAT_14caace2c = 0;
    _DAT_14caace10 = &LAB_14750cfe6;
    FUN_145f37862();
    FUN_1407e00cc(&DAT_14caacdc8);
    return;
  }
  return;
}



// FUNCTION 145f37862 FUN_145f37862 body=123 status=ok
// SIG undefined FUN_145f37862(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f37862(void)

{
  _DAT_14cab0de0 = L"BASE";
  DAT_14cab0e0a = 4;
  _DAT_14cab0de8 = FUN_140b35ae4();
  _DAT_14cab0df0 = DAT_14caacdd8;
  _DAT_14cab0df8 = &LAB_14682652b;
  DAT_14caacdd8 = &DAT_14cab0de0;
  DAT_14caace2d = DAT_14caace2d + '\x01';
  _DAT_14cab0e00 = 0x100000000;
  if (*(char *)(_DAT_14cab0de8 + 100) != '\0') {
    DAT_14caace2e = DAT_14caace2e + '\x01';
  }
  return;
}



// FUNCTION 145f378de FUN_145f378de body=261 status=ok
// SIG undefined FUN_145f378de(void)

void FUN_145f378de(void)

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
              0x110) < DAT_14cab04b0) {
    FUN_144b3d300(&DAT_14cab04b0);
    if (DAT_14cab04b0 == -1) {
      FUN_145f379e4(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x120;
      local_58 = 500;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cab0430,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1432c71c8);
      _Init_thread_footer(&DAT_14cab04b0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f379e4 FUN_145f379e4 body=226 status=ok
// SIG undefined FUN_145f379e4(void)

longlong * FUN_145f379e4(longlong *param_1)

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
  pcVar13 = FUN_1463372a4;
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



// FUNCTION 145f37ac8 FUN_145f37ac8 body=136 status=ok
// SIG undefined FUN_145f37ac8(void)

code * FUN_145f37ac8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ColorVisionDeficiencyType";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000001f7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f37b50;
}



// FUNCTION 145f37b50 FUN_145f37b50 body=138 status=ok
// SIG undefined FUN_145f37b50(void)

code * FUN_145f37b50(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ElementTextureSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000001f6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1475111ac;
}



// FUNCTION 145f37bda FUN_145f37bda body=138 status=ok
// SIG undefined FUN_145f37bda(void)

code * FUN_145f37bda(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ColorVisionDeficiencySeverity";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x14000001f8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f37ac8;
}



// FUNCTION 145f37c64 FUN_145f37c64 body=292 status=ok
// SIG undefined FUN_145f37c64(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f37c64(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cafa9e0) {
    FUN_144b3d300(&DAT_14cafa9e0);
    if (DAT_14cafa9e0 == -1) {
      FUN_145f37ed2();
      FUN_145f37d88();
      FUN_140db5666(&DAT_14cafa938,0,&DAT_14cafa8d0,L"FCopyResidentBricksCS",
                    L"/Engine/Private/VolumetricLightmapStreaming.usf",L"CopyResidentBricksCS",5,2,
                    FUN_147caf98a,FUN_147caf92a,&LAB_147caf90c,&LAB_147caf908,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cafdc80);
      _DAT_14cafa938 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143657462);
      _Init_thread_footer(&DAT_14cafa9e0);
    }
  }
  return &DAT_14cafa938;
}



// FUNCTION 145f37d88 FUN_145f37d88 body=205 status=ok
// SIG undefined FUN_145f37d88(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f37d88(void)

{
  if ((DAT_14cafa937 & 2) == 0) {
    DAT_14cafa937 = DAT_14cafa937 | 2;
    _DAT_14cafa8d8 = L"FCopyResidentBricksCS";
    _DAT_14cafa8f0 = FUN_146826540;
    _DAT_14cafa8f8 = FUN_146825d77;
    _DAT_14cafa900 = FUN_146825fd6;
    _DAT_14cafa908 = FUN_1407e02ea;
    _DAT_14cafa910 = FUN_146826273;
    _DAT_14cafa8e8 = FUN_147caf8da;
    _DAT_14cafa928 = 0xffffffff000000e0;
    _DAT_14cafa930 = 8;
    DAT_14cafa934 = 0;
    _DAT_14cafa918 = &LAB_147caf904;
    FUN_145f37e56();
    FUN_1407e00cc(&DAT_14cafa8d0);
    return;
  }
  return;
}



// FUNCTION 145f37e56 FUN_145f37e56 body=123 status=ok
// SIG undefined FUN_145f37e56(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f37e56(void)

{
  _DAT_14cafe0f0 = L"BASE";
  DAT_14cafe11a = 4;
  _DAT_14cafe0f8 = FUN_140b35ae4();
  _DAT_14cafe100 = DAT_14cafa8e0;
  _DAT_14cafe108 = &LAB_14682652b;
  DAT_14cafa8e0 = &DAT_14cafe0f0;
  DAT_14cafa935 = DAT_14cafa935 + '\x01';
  _DAT_14cafe110 = 0x100000000;
  if (*(char *)(_DAT_14cafe0f8 + 100) != '\0') {
    DAT_14cafa936 = DAT_14cafa936 + '\x01';
  }
  return;
}



// FUNCTION 145f37ed2 FUN_145f37ed2 body=261 status=ok
// SIG undefined FUN_145f37ed2(void)

void FUN_145f37ed2(void)

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
              0x110) < DAT_14cafdd00) {
    FUN_144b3d300(&DAT_14cafdd00);
    if (DAT_14cafdd00 == -1) {
      FUN_145f37fd8(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x1b6;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cafdc80,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14365f97a);
      _Init_thread_footer(&DAT_14cafdd00);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f37fd8 FUN_145f37fd8 body=226 status=ok
// SIG undefined FUN_145f37fd8(void)

longlong * FUN_145f37fd8(longlong *param_1)

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
  pcVar13 = FUN_1463fbcbc;
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



// FUNCTION 145f380bc FUN_145f380bc body=136 status=ok
// SIG undefined FUN_145f380bc(void)

code * FUN_145f380bc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SkyBentNormal";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture3D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000001ba;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f38144;
}



// FUNCTION 145f38144 FUN_145f38144 body=138 status=ok
// SIG undefined FUN_145f38144(void)

code * FUN_145f38144(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"AmbientVector";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture3D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000001b9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f381ce;
}



// FUNCTION 145f381ce FUN_145f381ce body=138 status=ok
// SIG undefined FUN_145f381ce(void)

code * FUN_145f381ce(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"StartPosInNewVolume";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000001b8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cbf274;
}



// FUNCTION 145f38258 FUN_145f38258 body=292 status=ok
// SIG undefined FUN_145f38258(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f38258(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb2c440) {
    FUN_144b3d300(&DAT_14cb2c440);
    if (DAT_14cb2c440 == -1) {
      FUN_145f384c6();
      FUN_145f3837c();
      FUN_140db5666(&DAT_14cb2c398,0,&DAT_14cb2c330,L"FNiagaraGPURayTracingTransformsCS",
                    L"/Plugin/FX/Niagara/Private/NiagaraGPURayTracingTransforms.usf",
                    L"NiagaraGPURayTracingTransformsCS",5,1,FUN_148042dea,FUN_148042d8a,
                    FUN_14645f5fc,&LAB_148042d86,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14cb2cf78);
      _DAT_14cb2c398 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1438f5d01);
      _Init_thread_footer(&DAT_14cb2c440);
    }
  }
  return &DAT_14cb2c398;
}



// FUNCTION 145f3837c FUN_145f3837c body=205 status=ok
// SIG undefined FUN_145f3837c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f3837c(void)

{
  if ((DAT_14cb2c397 & 2) == 0) {
    DAT_14cb2c397 = DAT_14cb2c397 | 2;
    _DAT_14cb2c338 = L"FNiagaraGPURayTracingTransformsCS";
    _DAT_14cb2c350 = FUN_146826540;
    _DAT_14cb2c358 = FUN_146825d77;
    _DAT_14cb2c360 = FUN_146825fd6;
    _DAT_14cb2c368 = FUN_1407e02ea;
    _DAT_14cb2c370 = FUN_146826273;
    _DAT_14cb2c348 = FUN_148042d58;
    _DAT_14cb2c388 = 0xffffffff000000e0;
    _DAT_14cb2c390 = 8;
    DAT_14cb2c394 = 0;
    _DAT_14cb2c378 = &LAB_148042d82;
    FUN_145f3844a();
    FUN_1407e00cc(&DAT_14cb2c330);
    return;
  }
  return;
}



// FUNCTION 145f3844a FUN_145f3844a body=123 status=ok
// SIG undefined FUN_145f3844a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f3844a(void)

{
  _DAT_14cb2d2f0 = L"BASE";
  DAT_14cb2d31a = 4;
  _DAT_14cb2d2f8 = FUN_140b35ae4();
  _DAT_14cb2d300 = DAT_14cb2c340;
  _DAT_14cb2d308 = &LAB_14682652b;
  DAT_14cb2c340 = &DAT_14cb2d2f0;
  DAT_14cb2c395 = DAT_14cb2c395 + '\x01';
  _DAT_14cb2d310 = 0x100000000;
  if (*(char *)(_DAT_14cb2d2f8 + 100) != '\0') {
    DAT_14cb2c396 = DAT_14cb2c396 + '\x01';
  }
  return;
}



// FUNCTION 145f384c6 FUN_145f384c6 body=261 status=ok
// SIG undefined FUN_145f384c6(void)

void FUN_145f384c6(void)

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
              0x110) < DAT_14cb2cff8) {
    FUN_144b3d300(&DAT_14cb2cff8);
    if (DAT_14cb2cff8 == -1) {
      FUN_14159ab4c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x130;
      local_58 = 0x1d;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb2cf78,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1438f6d47);
      _Init_thread_footer(&DAT_14cb2cff8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f385cc FUN_145f385cc body=136 status=ok
// SIG undefined FUN_145f385cc(void)

code * FUN_145f385cc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ParticleDataIntStride";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000020;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14804426e;
}



// FUNCTION 145f38654 FUN_145f38654 body=138 status=ok
// SIG undefined FUN_145f38654(void)

code * FUN_145f38654(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ViewTilePosition";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000003e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148043830;
}



// FUNCTION 145f386de FUN_145f386de body=138 status=ok
// SIG undefined FUN_145f386de(void)

code * FUN_145f386de(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DefaultScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6000000032;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148043b6c;
}



// FUNCTION 145f38768 FUN_145f38768 body=292 status=ok
// SIG undefined FUN_145f38768(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f38768(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb2e698) {
    FUN_144b3d300(&DAT_14cb2e698);
    if (DAT_14cb2e698 == -1) {
      FUN_145f389d6();
      FUN_145f3888c();
      FUN_140db5666(&DAT_14cb2e5f0,0,&DAT_14cb2e588,L"FNiagaraVisualizeTexturePS",
                    L"/Plugin/FX/Niagara/Private/NiagaraVisualizeTexture.usf",L"Main",3,8,
                    FUN_14804cf74,FUN_14804cf14,&LAB_14804cf10,&LAB_14804cf0c,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cb33788);
      _DAT_14cb2e5f0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1438f98bf);
      _Init_thread_footer(&DAT_14cb2e698);
    }
  }
  return &DAT_14cb2e5f0;
}



// FUNCTION 145f3888c FUN_145f3888c body=205 status=ok
// SIG undefined FUN_145f3888c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f3888c(void)

{
  if ((DAT_14cb2e5ef & 2) == 0) {
    DAT_14cb2e5ef = DAT_14cb2e5ef | 2;
    _DAT_14cb2e590 = L"FNiagaraVisualizeTexturePS";
    _DAT_14cb2e5a8 = FUN_146826540;
    _DAT_14cb2e5b0 = FUN_146825d77;
    _DAT_14cb2e5b8 = FUN_146825fd6;
    _DAT_14cb2e5c0 = FUN_1407e02ea;
    _DAT_14cb2e5c8 = FUN_146826273;
    _DAT_14cb2e5a0 = FUN_14804cede;
    _DAT_14cb2e5e0 = 0xffffffff000000e0;
    _DAT_14cb2e5e8 = 8;
    DAT_14cb2e5ec = 0;
    _DAT_14cb2e5d0 = &LAB_14804cf08;
    FUN_145f3895a();
    FUN_1407e00cc(&DAT_14cb2e588);
    return;
  }
  return;
}



// FUNCTION 145f3895a FUN_145f3895a body=123 status=ok
// SIG undefined FUN_145f3895a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f3895a(void)

{
  _DAT_14cb354b0 = L"BASE";
  DAT_14cb354da = 4;
  _DAT_14cb354b8 = FUN_140b35ae4();
  _DAT_14cb354c0 = DAT_14cb2e598;
  _DAT_14cb354c8 = &LAB_14682652b;
  DAT_14cb2e598 = &DAT_14cb354b0;
  DAT_14cb2e5ed = DAT_14cb2e5ed + '\x01';
  _DAT_14cb354d0 = 0x100000000;
  if (*(char *)(_DAT_14cb354b8 + 100) != '\0') {
    DAT_14cb2e5ee = DAT_14cb2e5ee + '\x01';
  }
  return;
}



// FUNCTION 145f389d6 FUN_145f389d6 body=261 status=ok
// SIG undefined FUN_145f389d6(void)

void FUN_145f389d6(void)

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
              0x110) < DAT_14cb33808) {
    FUN_144b3d300(&DAT_14cb33808);
    if (DAT_14cb33808 == -1) {
      FUN_145f38adc(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1a0;
      local_58 = 0x3b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb33788,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1438fb6dc);
      _Init_thread_footer(&DAT_14cb33808);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f38adc FUN_145f38adc body=226 status=ok
// SIG undefined FUN_145f38adc(void)

longlong * FUN_145f38adc(longlong *param_1)

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
  pcVar13 = FUN_14646155c;
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



// FUNCTION 145f38bc0 FUN_145f38bc0 body=136 status=ok
// SIG undefined FUN_145f38bc0(void)

code * FUN_145f38bc0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Texture2DArrayObject";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2DArray";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7800000047;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14804f75a;
}



// FUNCTION 145f38c48 FUN_145f38c48 body=138 status=ok
// SIG undefined FUN_145f38c48(void)

code * FUN_145f38c48(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Texture3DObject";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture3D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000048;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f38bc0;
}



// FUNCTION 145f38cd2 FUN_145f38cd2 body=138 status=ok
// SIG undefined FUN_145f38cd2(void)

code * FUN_145f38cd2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TextureDimensions";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000003f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14804fa96;
}



// FUNCTION 145f38d5c FUN_145f38d5c body=292 status=ok
// SIG undefined FUN_145f38d5c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f38d5c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb2eb50) {
    FUN_144b3d300(&DAT_14cb2eb50);
    if (DAT_14cb2eb50 == -1) {
      FUN_145f38fca();
      FUN_145f38e80();
      FUN_140db5666(&DAT_14cb2eaa8,0,&DAT_14cb2ea40,L"FNiagaraGenerateMipsCS",
                    L"/Plugin/FX/Niagara/Private/NiagaraGenerateMips.usf",L"MainCS",5,4,
                    FUN_14804d29c,FUN_14804d23c,&LAB_14804d238,&LAB_14804d234,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cb339a8);
      _DAT_14cb2eaa8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1438f9926);
      _Init_thread_footer(&DAT_14cb2eb50);
    }
  }
  return &DAT_14cb2eaa8;
}



// FUNCTION 145f38e80 FUN_145f38e80 body=205 status=ok
// SIG undefined FUN_145f38e80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f38e80(void)

{
  if ((DAT_14cb2eaa7 & 2) == 0) {
    DAT_14cb2eaa7 = DAT_14cb2eaa7 | 2;
    _DAT_14cb2ea48 = L"FNiagaraGenerateMipsCS";
    _DAT_14cb2ea60 = FUN_146826540;
    _DAT_14cb2ea68 = FUN_146825d77;
    _DAT_14cb2ea70 = FUN_146825fd6;
    _DAT_14cb2ea78 = FUN_1407e02ea;
    _DAT_14cb2ea80 = FUN_146826273;
    _DAT_14cb2ea58 = FUN_14804d206;
    _DAT_14cb2ea98 = 0xffffffff000000e0;
    _DAT_14cb2eaa0 = 8;
    DAT_14cb2eaa4 = 0;
    _DAT_14cb2ea88 = &LAB_14804d230;
    FUN_145f38f4e();
    FUN_1407e00cc(&DAT_14cb2ea40);
    return;
  }
  return;
}



// FUNCTION 145f38f4e FUN_145f38f4e body=123 status=ok
// SIG undefined FUN_145f38f4e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f38f4e(void)

{
  _DAT_14cb35570 = L"BASE";
  DAT_14cb3559a = 4;
  _DAT_14cb35578 = FUN_140b35ae4();
  _DAT_14cb35580 = DAT_14cb2ea50;
  _DAT_14cb35588 = &LAB_14682652b;
  DAT_14cb2ea50 = &DAT_14cb35570;
  DAT_14cb2eaa5 = DAT_14cb2eaa5 + '\x01';
  _DAT_14cb35590 = 0x100000000;
  if (*(char *)(_DAT_14cb35578 + 100) != '\0') {
    DAT_14cb2eaa6 = DAT_14cb2eaa6 + '\x01';
  }
  return;
}



// FUNCTION 145f38fca FUN_145f38fca body=261 status=ok
// SIG undefined FUN_145f38fca(void)

void FUN_145f38fca(void)

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
              0x110) < DAT_14cb33a28) {
    FUN_144b3d300(&DAT_14cb33a28);
    if (DAT_14cb33a28 == -1) {
      FUN_145f390d0(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x17;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb339a8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1438fb70c);
      _Init_thread_footer(&DAT_14cb33a28);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f390d0 FUN_145f390d0 body=226 status=ok
// SIG undefined FUN_145f390d0(void)

longlong * FUN_145f390d0(longlong *param_1)

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
  pcVar13 = FUN_146461804;
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



// FUNCTION 145f391b4 FUN_145f391b4 body=136 status=ok
// SIG undefined FUN_145f391b4(void)

code * FUN_145f391b4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"KernelHWidth";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000001a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f392c6;
}



// FUNCTION 145f3923c FUN_145f3923c body=138 status=ok
// SIG undefined FUN_145f3923c(void)

code * FUN_145f3923c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MipOutSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000001b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f391b4;
}



// FUNCTION 145f392c6 FUN_145f392c6 body=138 status=ok
// SIG undefined FUN_145f392c6(void)

code * FUN_145f392c6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DstTexelSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000019;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14804ff6e;
}



// FUNCTION 145f39350 FUN_145f39350 body=206 status=ok
// SIG undefined FUN_145f39350(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f39350(void)

{
  if ((DAT_14cb2f197 & 2) == 0) {
    DAT_14cb2f197 = DAT_14cb2f197 | 2;
    _DAT_14cb2f138 = L"FNiagaraRibbonVertexReductionFinalizeCS";
    _DAT_14cb2f150 = FUN_146826540;
    _DAT_14cb2f158 = FUN_146825d77;
    _DAT_14cb2f160 = FUN_146825fd6;
    _DAT_14cb2f168 = FUN_1407e02ea;
    _DAT_14cb2f170 = FUN_146826273;
    _DAT_14cb2f148 = FUN_14804d73a;
    _DAT_14cb2f188 = 0xffffffff000000e0;
    _DAT_14cb2f190 = 8;
    DAT_14cb2f194 = 0;
    _DAT_14cb2f178 = &LAB_14804d764;
    FUN_145f3941e();
    FUN_1407e00cc(&DAT_14cb2f130);
  }
  return &DAT_14cb2f130;
}



// FUNCTION 145f3941e FUN_145f3941e body=123 status=ok
// SIG undefined FUN_145f3941e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f3941e(void)

{
  _DAT_14cb35690 = L"BASE";
  DAT_14cb356ba = 4;
  _DAT_14cb35698 = FUN_140b35ae4();
  _DAT_14cb356a0 = DAT_14cb2f140;
  _DAT_14cb356a8 = &LAB_14682652b;
  DAT_14cb2f140 = &DAT_14cb35690;
  DAT_14cb2f195 = DAT_14cb2f195 + '\x01';
  _DAT_14cb356b0 = 0x100000000;
  if (*(char *)(_DAT_14cb35698 + 100) != '\0') {
    DAT_14cb2f196 = DAT_14cb2f196 + '\x01';
  }
  return;
}



// FUNCTION 145f3949a FUN_145f3949a body=226 status=ok
// SIG undefined FUN_145f3949a(void)

longlong * FUN_145f3949a(longlong *param_1)

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
  pcVar13 = FUN_146461e78;
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



// FUNCTION 145f3957e FUN_145f3957e body=136 status=ok
// SIG undefined FUN_145f3957e(void)

code * FUN_145f3957e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TessellationStats";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc0000000a8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f39606;
}



// FUNCTION 145f39606 FUN_145f39606 body=138 status=ok
// SIG undefined FUN_145f39606(void)

code * FUN_145f39606(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Segments";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint32>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb8000000a7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f39690;
}



// FUNCTION 145f39690 FUN_145f39690 body=138 status=ok
// SIG undefined FUN_145f39690(void)

code * FUN_145f39690(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MultiRibbonIndices";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint32>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb0000000a6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148051956;
}



// FUNCTION 145f3971a FUN_145f3971a body=292 status=ok
// SIG undefined FUN_145f3971a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f3971a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb47530) {
    FUN_144b3d300(&DAT_14cb47530);
    if (DAT_14cb47530 == -1) {
      FUN_145f39988();
      FUN_145f3983e();
      FUN_140db5666(&DAT_14cb47488,0,&DAT_14cb47420,L"FWaterInfoMergePS",
                    L"/Plugin/Water/Private/WaterInfoMerge.usf",L"Main",3,1,FUN_1483fa034,
                    FUN_1483f9fd4,&LAB_1483f9fd0,&LAB_1483f9fcc,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14cb48918);
      _DAT_14cb47488 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143b309f4);
      _Init_thread_footer(&DAT_14cb47530);
    }
  }
  return &DAT_14cb47488;
}



// FUNCTION 145f3983e FUN_145f3983e body=205 status=ok
// SIG undefined FUN_145f3983e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f3983e(void)

{
  if ((DAT_14cb47487 & 2) == 0) {
    DAT_14cb47487 = DAT_14cb47487 | 2;
    _DAT_14cb47428 = L"FWaterInfoMergePS";
    _DAT_14cb47440 = FUN_146826540;
    _DAT_14cb47448 = FUN_146825d77;
    _DAT_14cb47450 = FUN_146825fd6;
    _DAT_14cb47458 = FUN_1407e02ea;
    _DAT_14cb47460 = FUN_146826273;
    _DAT_14cb47438 = FUN_1483f9f9e;
    _DAT_14cb47478 = 0xffffffff000000e0;
    _DAT_14cb47480 = 8;
    DAT_14cb47484 = 0;
    _DAT_14cb47468 = &LAB_1483f9fc8;
    FUN_145f3990c();
    FUN_1407e00cc(&DAT_14cb47420);
    return;
  }
  return;
}



// FUNCTION 145f3990c FUN_145f3990c body=123 status=ok
// SIG undefined FUN_145f3990c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f3990c(void)

{
  _DAT_14cb49160 = L"BASE";
  DAT_14cb4918a = 4;
  _DAT_14cb49168 = FUN_140b35ae4();
  _DAT_14cb49170 = DAT_14cb47430;
  _DAT_14cb49178 = &LAB_14682652b;
  DAT_14cb47430 = &DAT_14cb49160;
  DAT_14cb47485 = DAT_14cb47485 + '\x01';
  _DAT_14cb49180 = 0x100000000;
  if (*(char *)(_DAT_14cb49168 + 100) != '\0') {
    DAT_14cb47486 = DAT_14cb47486 + '\x01';
  }
  return;
}



// FUNCTION 145f39988 FUN_145f39988 body=261 status=ok
// SIG undefined FUN_145f39988(void)

void FUN_145f39988(void)

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
              0x110) < DAT_14cb48998) {
    FUN_144b3d300(&DAT_14cb48998);
    if (DAT_14cb48998 == -1) {
      FUN_145f39a8e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x180;
      local_58 = 0x4e;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb48918,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143b3c018);
      _Init_thread_footer(&DAT_14cb48998);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f39a8e FUN_145f39a8e body=226 status=ok
// SIG undefined FUN_145f39a8e(void)

longlong * FUN_145f39a8e(longlong *param_1)

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
  pcVar13 = FUN_14648834c;
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



// FUNCTION 145f39b72 FUN_145f39b72 body=136 status=ok
// SIG undefined FUN_145f39b72(void)

code * FUN_145f39b72(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GroundZMin";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6800000058;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1483fe8da;
}



// FUNCTION 145f39bfa FUN_145f39bfa body=138 status=ok
// SIG undefined FUN_145f39bfa(void)

code * FUN_145f39bfa(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000051;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1464883d4;
}



// FUNCTION 145f39c84 FUN_145f39c84 body=138 status=ok
// SIG undefined FUN_145f39c84(void)

code * FUN_145f39c84(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DilationTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000055;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1483fe9ee;
}



// FUNCTION 145f39d0e FUN_145f39d0e body=292 status=ok
// SIG undefined FUN_145f39d0e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f39d0e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb47658) {
    FUN_144b3d300(&DAT_14cb47658);
    if (DAT_14cb47658 == -1) {
      FUN_145f39f7c();
      FUN_145f39e32();
      FUN_140db5666(&DAT_14cb475b0,0,&DAT_14cb47548,L"FWaterInfoFinalizePS",
                    L"/Plugin/Water/Private/WaterInfoFinalize.usf",L"Main",3,2,FUN_1483fa126,
                    FUN_1483fa0c6,&LAB_1483fa09a,&LAB_1483fa096,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14cb489a0);
      _DAT_14cb475b0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143b30a00);
      _Init_thread_footer(&DAT_14cb47658);
    }
  }
  return &DAT_14cb475b0;
}



// FUNCTION 145f39e32 FUN_145f39e32 body=205 status=ok
// SIG undefined FUN_145f39e32(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f39e32(void)

{
  if ((DAT_14cb475af & 2) == 0) {
    DAT_14cb475af = DAT_14cb475af | 2;
    _DAT_14cb47550 = L"FWaterInfoFinalizePS";
    _DAT_14cb47568 = FUN_146826540;
    _DAT_14cb47570 = FUN_146825d77;
    _DAT_14cb47578 = FUN_146825fd6;
    _DAT_14cb47580 = FUN_1407e02ea;
    _DAT_14cb47588 = FUN_146826273;
    _DAT_14cb47560 = FUN_1483fa068;
    _DAT_14cb475a0 = 0xffffffff000000e0;
    _DAT_14cb475a8 = 8;
    DAT_14cb475ac = 0;
    _DAT_14cb47590 = &LAB_1483fa092;
    FUN_145f39f00();
    FUN_1407e00cc(&DAT_14cb47548);
    return;
  }
  return;
}



// FUNCTION 145f39f00 FUN_145f39f00 body=123 status=ok
// SIG undefined FUN_145f39f00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f39f00(void)

{
  _DAT_14cb49190 = L"BASE";
  DAT_14cb491ba = 4;
  _DAT_14cb49198 = FUN_140b35ae4();
  _DAT_14cb491a0 = DAT_14cb47558;
  _DAT_14cb491a8 = &LAB_14682652b;
  DAT_14cb47558 = &DAT_14cb49190;
  DAT_14cb475ad = DAT_14cb475ad + '\x01';
  _DAT_14cb491b0 = 0x100000000;
  if (*(char *)(_DAT_14cb49198 + 100) != '\0') {
    DAT_14cb475ae = DAT_14cb475ae + '\x01';
  }
  return;
}



// FUNCTION 145f39f7c FUN_145f39f7c body=261 status=ok
// SIG undefined FUN_145f39f7c(void)

void FUN_145f39f7c(void)

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
              0x110) < DAT_14cb48a20) {
    FUN_144b3d300(&DAT_14cb48a20);
    if (DAT_14cb48a20 == -1) {
      FUN_145f3a082(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x150;
      local_58 = 0xb5;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb489a0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143b3c024);
      _Init_thread_footer(&DAT_14cb48a20);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f3a082 FUN_145f3a082 body=226 status=ok
// SIG undefined FUN_145f3a082(void)

longlong * FUN_145f3a082(longlong *param_1)

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
  pcVar13 = FUN_1464884ee;
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



// FUNCTION 145f3a166 FUN_145f3a166 body=136 status=ok
// SIG undefined FUN_145f3a166(void)

code * FUN_145f3a166(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"WaterZMax";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3c000000ba;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1483fed2e;
}


