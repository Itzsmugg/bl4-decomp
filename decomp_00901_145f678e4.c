// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145f678e4 FUN_145f678e4 body=261 status=ok
// SIG undefined FUN_145f678e4(void)

void FUN_145f678e4(void)

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
              0x110) < DAT_14c9d3fa0) {
    FUN_144b3d300(&DAT_14c9d3fa0);
    if (DAT_14c9d3fa0 == -1) {
      FUN_145f679ea(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xd0;
      local_58 = 0x2a5;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9d3f20,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c494a7);
      _Init_thread_footer(&DAT_14c9d3fa0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f679ea FUN_145f679ea body=226 status=ok
// SIG undefined FUN_145f679ea(void)

longlong * FUN_145f679ea(longlong *param_1)

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
  pcVar13 = FUN_1462c7488;
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



// FUNCTION 145f67ace FUN_145f67ace body=136 status=ok
// SIG undefined FUN_145f67ace(void)

code * FUN_145f67ace(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"AtlasResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x98000002ad;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147171546;
}



// FUNCTION 145f67b56 FUN_145f67b56 body=138 status=ok
// SIG undefined FUN_145f67b56(void)

code * FUN_145f67b56(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000002a8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462c7510;
}



// FUNCTION 145f67be0 FUN_145f67be0 body=144 status=ok
// SIG undefined FUN_145f67be0(void)

code * FUN_145f67be0(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xa0000002ae;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145f67ace;
}



// FUNCTION 145f67c70 FUN_145f67c70 body=292 status=ok
// SIG undefined FUN_145f67c70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f67c70(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d1330) {
    FUN_144b3d300(&DAT_14c9d1330);
    if (DAT_14c9d1330 == -1) {
      FUN_145f67ede();
      FUN_145f67d94();
      FUN_140db5666(&DAT_14c9d1288,0,&DAT_14c9d1220,L"FHairStrandsPlotSamplePS",
                    L"/Engine/Private/HairStrands/HairStrandsDebug.usf",L"MainPS",3,1,FUN_14716bb16,
                    FUN_14716bab6,&LAB_1462c5dec,&LAB_14716bab2,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14c9d4140);
      _DAT_14c9d1288 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c33b21);
      _Init_thread_footer(&DAT_14c9d1330);
    }
  }
  return &DAT_14c9d1288;
}



// FUNCTION 145f67d94 FUN_145f67d94 body=205 status=ok
// SIG undefined FUN_145f67d94(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f67d94(void)

{
  if ((DAT_14c9d1287 & 2) == 0) {
    DAT_14c9d1287 = DAT_14c9d1287 | 2;
    _DAT_14c9d1228 = L"FHairStrandsPlotSamplePS";
    _DAT_14c9d1240 = FUN_146826540;
    _DAT_14c9d1248 = FUN_146825d77;
    _DAT_14c9d1250 = FUN_146825fd6;
    _DAT_14c9d1258 = FUN_1407e02ea;
    _DAT_14c9d1260 = FUN_146826273;
    _DAT_14c9d1238 = FUN_14716ba82;
    _DAT_14c9d1278 = 0xffffffff000000e0;
    _DAT_14c9d1280 = 8;
    DAT_14c9d1284 = 0;
    _DAT_14c9d1268 = &LAB_14716baae;
    FUN_145f67e62();
    FUN_1407e00cc(&DAT_14c9d1220);
    return;
  }
  return;
}



// FUNCTION 145f67e62 FUN_145f67e62 body=123 status=ok
// SIG undefined FUN_145f67e62(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f67e62(void)

{
  _DAT_14c9d4f68 = L"BASE";
  DAT_14c9d4f92 = 4;
  _DAT_14c9d4f70 = FUN_140b35ae4();
  _DAT_14c9d4f78 = DAT_14c9d1230;
  _DAT_14c9d4f80 = &LAB_14682652b;
  DAT_14c9d1230 = &DAT_14c9d4f68;
  DAT_14c9d1285 = DAT_14c9d1285 + '\x01';
  _DAT_14c9d4f88 = 0x100000000;
  if (*(char *)(_DAT_14c9d4f70 + 100) != '\0') {
    DAT_14c9d1286 = DAT_14c9d1286 + '\x01';
  }
  return;
}



// FUNCTION 145f67ede FUN_145f67ede body=261 status=ok
// SIG undefined FUN_145f67ede(void)

void FUN_145f67ede(void)

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
              0x110) < DAT_14c9d41c0) {
    FUN_144b3d300(&DAT_14c9d41c0);
    if (DAT_14c9d41c0 == -1) {
      FUN_145f67fe4(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x160;
      local_58 = 0x3e3;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9d4140,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c494d7);
      _Init_thread_footer(&DAT_14c9d41c0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f67fe4 FUN_145f67fe4 body=226 status=ok
// SIG undefined FUN_145f67fe4(void)

longlong * FUN_145f67fe4(longlong *param_1)

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
  pcVar13 = FUN_1462c7ba8;
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



// FUNCTION 145f680c8 FUN_145f680c8 body=136 status=ok
// SIG undefined FUN_145f680c8(void)

code * FUN_145f680c8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MaxResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000003e7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147171de8;
}



// FUNCTION 145f68150 FUN_145f68150 body=138 status=ok
// SIG undefined FUN_145f68150(void)

code * FUN_145f68150(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Exposure";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4c000003e9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147171d5e;
}



// FUNCTION 145f681da FUN_145f681da body=144 status=ok
// SIG undefined FUN_145f681da(void)

code * FUN_145f681da(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x50000003ea;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145f68150;
}



// FUNCTION 145f6826a FUN_145f6826a body=292 status=ok
// SIG undefined FUN_145f6826a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f6826a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d8b60) {
    FUN_144b3d300(&DAT_14c9d8b60);
    if (DAT_14c9d8b60 == -1) {
      FUN_145f684d8();
      FUN_145f6838e();
      FUN_140db5666(&DAT_14c9d8ab8,0,&DAT_14c9d8a50,L"FHairVisibilityFillOpaqueDepthPS",
                    L"/Engine/Private/HairStrands/HairStrandsVisibilityFillOpaqueDepthPS.usf",
                    L"MainPS",3,1,FUN_14718475e,FUN_1471846fe,&LAB_1462ca440,&LAB_1471846fa,
                    &LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9dab68);
      _DAT_14c9d8ab8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c66145);
      _Init_thread_footer(&DAT_14c9d8b60);
    }
  }
  return &DAT_14c9d8ab8;
}



// FUNCTION 145f6838e FUN_145f6838e body=205 status=ok
// SIG undefined FUN_145f6838e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f6838e(void)

{
  if ((DAT_14c9d8ab7 & 2) == 0) {
    DAT_14c9d8ab7 = DAT_14c9d8ab7 | 2;
    _DAT_14c9d8a58 = L"FHairVisibilityFillOpaqueDepthPS";
    _DAT_14c9d8a70 = FUN_146826540;
    _DAT_14c9d8a78 = FUN_146825d77;
    _DAT_14c9d8a80 = FUN_146825fd6;
    _DAT_14c9d8a88 = FUN_1407e02ea;
    _DAT_14c9d8a90 = FUN_146826273;
    _DAT_14c9d8a68 = FUN_1471846cc;
    _DAT_14c9d8aa8 = 0xffffffff000000e0;
    _DAT_14c9d8ab0 = 8;
    DAT_14c9d8ab4 = 0;
    _DAT_14c9d8a98 = &LAB_1471846f6;
    FUN_145f6845c();
    FUN_1407e00cc(&DAT_14c9d8a50);
    return;
  }
  return;
}



// FUNCTION 145f6845c FUN_145f6845c body=123 status=ok
// SIG undefined FUN_145f6845c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f6845c(void)

{
  _DAT_14c9dc128 = L"BASE";
  DAT_14c9dc152 = 4;
  _DAT_14c9dc130 = FUN_140b35ae4();
  _DAT_14c9dc138 = DAT_14c9d8a60;
  _DAT_14c9dc140 = &LAB_14682652b;
  DAT_14c9d8a60 = &DAT_14c9dc128;
  DAT_14c9d8ab5 = DAT_14c9d8ab5 + '\x01';
  _DAT_14c9dc148 = 0x100000000;
  if (*(char *)(_DAT_14c9dc130 + 100) != '\0') {
    DAT_14c9d8ab6 = DAT_14c9d8ab6 + '\x01';
  }
  return;
}



// FUNCTION 145f684d8 FUN_145f684d8 body=261 status=ok
// SIG undefined FUN_145f684d8(void)

void FUN_145f684d8(void)

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
              0x110) < DAT_14c9dabe8) {
    FUN_144b3d300(&DAT_14c9dabe8);
    if (DAT_14c9dabe8 == -1) {
      FUN_145f685de(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x160;
      local_58 = 0x912;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9dab68,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c71d15);
      _Init_thread_footer(&DAT_14c9dabe8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f685de FUN_145f685de body=226 status=ok
// SIG undefined FUN_145f685de(void)

longlong * FUN_145f685de(longlong *param_1)

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
  pcVar13 = FUN_1462cc9a6;
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



// FUNCTION 145f686c2 FUN_145f686c2 body=136 status=ok
// SIG undefined FUN_145f686c2(void)

code * FUN_145f686c2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VisibilityDepthTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000914;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14718d368;
}



// FUNCTION 145f6874a FUN_145f6874a body=138 status=ok
// SIG undefined FUN_145f6874a(void)

code * FUN_145f6874a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VisibilityIDTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000915;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f686c2;
}



// FUNCTION 145f687d4 FUN_145f687d4 body=144 status=ok
// SIG undefined FUN_145f687d4(void)

code * FUN_145f687d4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145a1e9b2();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"TileData";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FHairStrandsTilePassVS::FParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x2000000916;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145f6874a;
}



// FUNCTION 145f68864 FUN_145f68864 body=292 status=ok
// SIG undefined FUN_145f68864(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f68864(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d96f0) {
    FUN_144b3d300(&DAT_14c9d96f0);
    if (DAT_14c9d96f0 == -1) {
      FUN_145f68ad2();
      FUN_145f68988();
      FUN_140db5666(&DAT_14c9d9648,0,&DAT_14c9d95e0,L"FVisiblityRasterComputeDebugCS",
                    L"/Engine/Private/HairStrands/HairStrandsVisibilityRasterCompute.usf",L"MainCS",
                    5,1,FUN_14718560e,FUN_1471855ae,&LAB_1462ca49a,&LAB_1471855aa,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9db140);
      _DAT_14c9d9648 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c661bd);
      _Init_thread_footer(&DAT_14c9d96f0);
    }
  }
  return &DAT_14c9d9648;
}



// FUNCTION 145f68988 FUN_145f68988 body=205 status=ok
// SIG undefined FUN_145f68988(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f68988(void)

{
  if ((DAT_14c9d9647 & 2) == 0) {
    DAT_14c9d9647 = DAT_14c9d9647 | 2;
    _DAT_14c9d95e8 = L"FVisiblityRasterComputeDebugCS";
    _DAT_14c9d9600 = FUN_146826540;
    _DAT_14c9d9608 = FUN_146825d77;
    _DAT_14c9d9610 = FUN_146825fd6;
    _DAT_14c9d9618 = FUN_1407e02ea;
    _DAT_14c9d9620 = FUN_146826273;
    _DAT_14c9d95f8 = FUN_14718557c;
    _DAT_14c9d9638 = 0xffffffff000000e0;
    _DAT_14c9d9640 = 8;
    DAT_14c9d9644 = 0;
    _DAT_14c9d9628 = &LAB_1471855a6;
    FUN_145f68a56();
    FUN_1407e00cc(&DAT_14c9d95e0);
    return;
  }
  return;
}



// FUNCTION 145f68a56 FUN_145f68a56 body=123 status=ok
// SIG undefined FUN_145f68a56(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f68a56(void)

{
  _DAT_14c9dc308 = L"BASE";
  DAT_14c9dc332 = 4;
  _DAT_14c9dc310 = FUN_140b35ae4();
  _DAT_14c9dc318 = DAT_14c9d95f0;
  _DAT_14c9dc320 = &LAB_14682652b;
  DAT_14c9d95f0 = &DAT_14c9dc308;
  DAT_14c9d9645 = DAT_14c9d9645 + '\x01';
  _DAT_14c9dc328 = 0x100000000;
  if (*(char *)(_DAT_14c9dc310 + 100) != '\0') {
    DAT_14c9d9646 = DAT_14c9d9646 + '\x01';
  }
  return;
}



// FUNCTION 145f68ad2 FUN_145f68ad2 body=261 status=ok
// SIG undefined FUN_145f68ad2(void)

void FUN_145f68ad2(void)

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
              0x110) < DAT_14c9db1c0) {
    FUN_144b3d300(&DAT_14c9db1c0);
    if (DAT_14c9db1c0 == -1) {
      FUN_145f68bd8(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xc0;
      local_58 = 0xd74;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9db140,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c71d99);
      _Init_thread_footer(&DAT_14c9db1c0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f68bd8 FUN_145f68bd8 body=226 status=ok
// SIG undefined FUN_145f68bd8(void)

longlong * FUN_145f68bd8(longlong *param_1)

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
  pcVar13 = FUN_1462cd85e;
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



// FUNCTION 145f68cbc FUN_145f68cbc body=136 status=ok
// SIG undefined FUN_145f68cbc(void)

code * FUN_145f68cbc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VisTileDepthGrid";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7000000d79;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14718f110;
}



// FUNCTION 145f68d44 FUN_145f68d44 body=138 status=ok
// SIG undefined FUN_145f68d44(void)

code * FUN_145f68d44(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VisTileBinningGrid";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2DArray";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7800000d7a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f68cbc;
}



// FUNCTION 145f68dce FUN_145f68dce body=144 status=ok
// SIG undefined FUN_145f68dce(void)

code * FUN_145f68dce(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x9000000d7c;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14718f086;
}



// FUNCTION 145f68e5e FUN_145f68e5e body=292 status=ok
// SIG undefined FUN_145f68e5e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f68e5e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9dfb48) {
    FUN_144b3d300(&DAT_14c9dfb48);
    if (DAT_14c9dfb48 == -1) {
      FUN_145f690cc();
      FUN_145f68f82();
      FUN_140db5666(&DAT_14c9dfaa0,0,&DAT_14c9dfa38,L"FRenderLightingCacheWithPreshadingCS",
                    L"/Engine/Private/HeterogeneousVolumes/HeterogeneousVolumesPreshadingPipeline.usf"
                    ,L"RenderLightingCacheWithPreshadingCS",5,4,FUN_14719f596,FUN_14719f536,
                    &LAB_14719f4fa,&LAB_14719f4f6,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9e1260)
      ;
      _DAT_14c9dfaa0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c9cc38);
      _Init_thread_footer(&DAT_14c9dfb48);
    }
  }
  return &DAT_14c9dfaa0;
}



// FUNCTION 145f68f82 FUN_145f68f82 body=205 status=ok
// SIG undefined FUN_145f68f82(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f68f82(void)

{
  if ((DAT_14c9dfa9f & 2) == 0) {
    DAT_14c9dfa9f = DAT_14c9dfa9f | 2;
    _DAT_14c9dfa40 = L"FRenderLightingCacheWithPreshadingCS";
    _DAT_14c9dfa58 = FUN_146826540;
    _DAT_14c9dfa60 = FUN_146825d77;
    _DAT_14c9dfa68 = FUN_146825fd6;
    _DAT_14c9dfa70 = FUN_1407e02ea;
    _DAT_14c9dfa78 = FUN_146826273;
    _DAT_14c9dfa50 = FUN_14719f4c8;
    _DAT_14c9dfa90 = 0xffffffff000000e0;
    _DAT_14c9dfa98 = 8;
    DAT_14c9dfa9c = 0;
    _DAT_14c9dfa80 = &LAB_14719f4f2;
    FUN_145f69050();
    FUN_1407e00cc(&DAT_14c9dfa38);
    return;
  }
  return;
}



// FUNCTION 145f69050 FUN_145f69050 body=123 status=ok
// SIG undefined FUN_145f69050(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f69050(void)

{
  _DAT_14c9e1c58 = L"BASE";
  DAT_14c9e1c82 = 4;
  _DAT_14c9e1c60 = FUN_140b35ae4();
  _DAT_14c9e1c68 = DAT_14c9dfa48;
  _DAT_14c9e1c70 = &LAB_14682652b;
  DAT_14c9dfa48 = &DAT_14c9e1c58;
  DAT_14c9dfa9d = DAT_14c9dfa9d + '\x01';
  _DAT_14c9e1c78 = 0x100000000;
  if (*(char *)(_DAT_14c9e1c60 + 100) != '\0') {
    DAT_14c9dfa9e = DAT_14c9dfa9e + '\x01';
  }
  return;
}



// FUNCTION 145f690cc FUN_145f690cc body=261 status=ok
// SIG undefined FUN_145f690cc(void)

void FUN_145f690cc(void)

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
              0x110) < DAT_14c9e12e0) {
    FUN_144b3d300(&DAT_14c9e12e0);
    if (DAT_14c9e12e0 == -1) {
      FUN_1415a052c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x3f0;
      local_58 = 0xd7;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e1260,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ca48ab);
      _Init_thread_footer(&DAT_14c9e12e0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f691d2 FUN_145f691d2 body=136 status=ok
// SIG undefined FUN_145f691d2(void)

code * FUN_145f691d2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"StepSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3d4000000f1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471b0240;
}



// FUNCTION 145f6925a FUN_145f6925a body=138 status=ok
// SIG undefined FUN_145f6925a(void)

code * FUN_145f6925a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VirtualShadowMapId";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x380000000e8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462d06d2;
}



// FUNCTION 145f692e4 FUN_145f692e4 body=144 status=ok
// SIG undefined FUN_145f692e4(void)

code * FUN_145f692e4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145cccfc4();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"SparseVoxelUniformBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSparseVoxelUniformBufferParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x3a0000000ec;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462d0642;
}



// FUNCTION 145f69374 FUN_145f69374 body=292 status=ok
// SIG undefined FUN_145f69374(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f69374(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e4358) {
    FUN_144b3d300(&DAT_14c9e4358);
    if (DAT_14c9e4358 == -1) {
      FUN_145f695e2();
      FUN_145f69498();
      FUN_140db5666(&DAT_14c9e42b0,0,&DAT_14c9e4248,L"FPrintIlluminanceMeterPS",
                    L"/Engine/Private/ReflectionEnvironmentShaders.usf",
                    L"VisualizeIlluminanceMeterPS",3,1,FUN_1471ba978,FUN_1471ba918,&LAB_1471ba8f2,
                    &LAB_1471ba8ee,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9e66c8);
      _DAT_14c9e42b0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142cbdab5);
      _Init_thread_footer(&DAT_14c9e4358);
    }
  }
  return &DAT_14c9e42b0;
}



// FUNCTION 145f69498 FUN_145f69498 body=205 status=ok
// SIG undefined FUN_145f69498(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f69498(void)

{
  if ((DAT_14c9e42af & 2) == 0) {
    DAT_14c9e42af = DAT_14c9e42af | 2;
    _DAT_14c9e4250 = L"FPrintIlluminanceMeterPS";
    _DAT_14c9e4268 = FUN_146826540;
    _DAT_14c9e4270 = FUN_146825d77;
    _DAT_14c9e4278 = FUN_146825fd6;
    _DAT_14c9e4280 = FUN_1407e02ea;
    _DAT_14c9e4288 = FUN_146826273;
    _DAT_14c9e4260 = FUN_1471ba8c0;
    _DAT_14c9e42a0 = 0xffffffff000000e0;
    _DAT_14c9e42a8 = 8;
    DAT_14c9e42ac = 0;
    _DAT_14c9e4290 = &LAB_1471ba8ea;
    FUN_145f69566();
    FUN_1407e00cc(&DAT_14c9e4248);
    return;
  }
  return;
}



// FUNCTION 145f69566 FUN_145f69566 body=123 status=ok
// SIG undefined FUN_145f69566(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f69566(void)

{
  _DAT_14c9e7040 = L"BASE";
  DAT_14c9e706a = 4;
  _DAT_14c9e7048 = FUN_140b35ae4();
  _DAT_14c9e7050 = DAT_14c9e4258;
  _DAT_14c9e7058 = &LAB_14682652b;
  DAT_14c9e4258 = &DAT_14c9e7040;
  DAT_14c9e42ad = DAT_14c9e42ad + '\x01';
  _DAT_14c9e7060 = 0x100000000;
  if (*(char *)(_DAT_14c9e7048 + 100) != '\0') {
    DAT_14c9e42ae = DAT_14c9e42ae + '\x01';
  }
  return;
}



// FUNCTION 145f695e2 FUN_145f695e2 body=261 status=ok
// SIG undefined FUN_145f695e2(void)

void FUN_145f695e2(void)

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
              0x110) < DAT_14c9e6748) {
    FUN_144b3d300(&DAT_14c9e6748);
    if (DAT_14c9e6748 == -1) {
      FUN_145f696e8(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x170;
      local_58 = 0x43;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e66c8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ccd8c5);
      _Init_thread_footer(&DAT_14c9e6748);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f696e8 FUN_145f696e8 body=226 status=ok
// SIG undefined FUN_145f696e8(void)

longlong * FUN_145f696e8(longlong *param_1)

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
  pcVar13 = FUN_1462d2f24;
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



// FUNCTION 145f697cc FUN_145f697cc body=136 status=ok
// SIG undefined FUN_145f697cc(void)

code * FUN_145f697cc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SkyLightCubeSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000048;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c5666;
}



// FUNCTION 145f69854 FUN_145f69854 body=138 status=ok
// SIG undefined FUN_145f69854(void)

code * FUN_145f69854(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000046;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c56f0;
}



// FUNCTION 145f698de FUN_145f698de body=144 status=ok
// SIG undefined FUN_145f698de(void)

code * FUN_145f698de(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x500000004b;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1471c5552;
}



// FUNCTION 145f6996e FUN_145f6996e body=292 status=ok
// SIG undefined FUN_145f6996e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f6996e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ecc70) {
    FUN_144b3d300(&DAT_14c9ecc70);
    if (DAT_14c9ecc70 == -1) {
      FUN_145f69bdc();
      FUN_145f69a92();
      FUN_140db5666(&DAT_14c9ecbc8,0,&DAT_14c9ecb60,L"FMobileLocalFogVolumeTiledRenderHalfResPS",
                    L"/Engine/Private/LocalFogVolumes/LocalFogVolumeSplat.usf",
                    L"LocalFogVolumeTiledPS",3,1,FUN_1471dc846,FUN_1471dc7e6,&LAB_1471dc7ce,
                    &LAB_1471dc7ca,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9f0340);
      _DAT_14c9ecbc8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d04d36);
      _Init_thread_footer(&DAT_14c9ecc70);
    }
  }
  return &DAT_14c9ecbc8;
}



// FUNCTION 145f69a92 FUN_145f69a92 body=205 status=ok
// SIG undefined FUN_145f69a92(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f69a92(void)

{
  if ((DAT_14c9ecbc7 & 2) == 0) {
    DAT_14c9ecbc7 = DAT_14c9ecbc7 | 2;
    _DAT_14c9ecb68 = L"FMobileLocalFogVolumeTiledRenderHalfResPS";
    _DAT_14c9ecb80 = FUN_146826540;
    _DAT_14c9ecb88 = FUN_146825d77;
    _DAT_14c9ecb90 = FUN_146825fd6;
    _DAT_14c9ecb98 = FUN_1407e02ea;
    _DAT_14c9ecba0 = FUN_146826273;
    _DAT_14c9ecb78 = FUN_1471dc79c;
    _DAT_14c9ecbb8 = 0xffffffff000000e0;
    _DAT_14c9ecbc0 = 8;
    DAT_14c9ecbc4 = 0;
    _DAT_14c9ecba8 = &LAB_1471dc7c6;
    FUN_145f69b60();
    FUN_1407e00cc(&DAT_14c9ecb60);
    return;
  }
  return;
}



// FUNCTION 145f69b60 FUN_145f69b60 body=123 status=ok
// SIG undefined FUN_145f69b60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f69b60(void)

{
  _DAT_14c9f1738 = L"BASE";
  DAT_14c9f1762 = 4;
  _DAT_14c9f1740 = FUN_140b35ae4();
  _DAT_14c9f1748 = DAT_14c9ecb70;
  _DAT_14c9f1750 = &LAB_14682652b;
  DAT_14c9ecb70 = &DAT_14c9f1738;
  DAT_14c9ecbc5 = DAT_14c9ecbc5 + '\x01';
  _DAT_14c9f1758 = 0x100000000;
  if (*(char *)(_DAT_14c9f1740 + 100) != '\0') {
    DAT_14c9ecbc6 = DAT_14c9ecbc6 + '\x01';
  }
  return;
}



// FUNCTION 145f69bdc FUN_145f69bdc body=261 status=ok
// SIG undefined FUN_145f69bdc(void)

void FUN_145f69bdc(void)

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
              0x110) < DAT_14c9f03c0) {
    FUN_144b3d300(&DAT_14c9f03c0);
    if (DAT_14c9f03c0 == -1) {
      FUN_145f69ce2(local_20);
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
      FUN_140b49562(&DAT_14c9f0340,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d26247);
      _Init_thread_footer(&DAT_14c9f03c0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f69ce2 FUN_145f69ce2 body=226 status=ok
// SIG undefined FUN_145f69ce2(void)

longlong * FUN_145f69ce2(longlong *param_1)

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
  pcVar13 = FUN_1462d7dbe;
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



// FUNCTION 145f69dc6 FUN_145f69dc6 body=136 status=ok
// SIG undefined FUN_145f69dc6(void)

undefined1 * FUN_145f69dc6(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x3b4;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_1471e152e;
}



// FUNCTION 145f69e4e FUN_145f69e4e body=138 status=ok
// SIG undefined FUN_145f69e4e(void)

code * FUN_145f69e4e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LocalFogVolumeTileDebug";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa0000003b8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f69ed8;
}



// FUNCTION 145f69ed8 FUN_145f69ed8 body=144 status=ok
// SIG undefined FUN_145f69ed8(void)

code * FUN_145f69ed8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_140048c7e();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(undefined **)(lVar2 + lVar4) = &DAT_14a1fa5fe;
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FLocalFogVolumeUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x30000003b7;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462d7e46;
}



// FUNCTION 145f69f68 FUN_145f69f68 body=292 status=ok
// SIG undefined FUN_145f69f68(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f69f68(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f59d8) {
    FUN_144b3d300(&DAT_14c9f59d8);
    if (DAT_14c9f59d8 == -1) {
      FUN_145f6a1d6();
      FUN_145f6a08c();
      FUN_140db5666(&DAT_14c9f5930,0,&DAT_14c9f58c8,L"FUpsampleAndIntegrateCS",
                    L"/Engine/Private/Lumen/LumenReSTIRGather.usf",L"UpsampleAndIntegrateCS",5,6,
                    FUN_1471f0a76,FUN_1471f0a16,&LAB_1462db5aa,&LAB_1471f0a12,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9f7718);
      _DAT_14c9f5930 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d4ae4a);
      _Init_thread_footer(&DAT_14c9f59d8);
    }
  }
  return &DAT_14c9f5930;
}



// FUNCTION 145f6a08c FUN_145f6a08c body=205 status=ok
// SIG undefined FUN_145f6a08c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f6a08c(void)

{
  if ((DAT_14c9f592f & 2) == 0) {
    DAT_14c9f592f = DAT_14c9f592f | 2;
    _DAT_14c9f58d0 = L"FUpsampleAndIntegrateCS";
    _DAT_14c9f58e8 = FUN_146826540;
    _DAT_14c9f58f0 = FUN_146825d77;
    _DAT_14c9f58f8 = FUN_146825fd6;
    _DAT_14c9f5900 = FUN_1407e02ea;
    _DAT_14c9f5908 = FUN_146826273;
    _DAT_14c9f58e0 = FUN_1471f09e4;
    _DAT_14c9f5920 = 0xffffffff000000e0;
    _DAT_14c9f5928 = 8;
    DAT_14c9f592c = 0;
    _DAT_14c9f5910 = &LAB_1471f0a0e;
    FUN_145f6a15a();
    FUN_1407e00cc(&DAT_14c9f58c8);
    return;
  }
  return;
}



// FUNCTION 145f6a15a FUN_145f6a15a body=123 status=ok
// SIG undefined FUN_145f6a15a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f6a15a(void)

{
  _DAT_14c9f80b8 = L"BASE";
  DAT_14c9f80e2 = 4;
  _DAT_14c9f80c0 = FUN_140b35ae4();
  _DAT_14c9f80c8 = DAT_14c9f58d8;
  _DAT_14c9f80d0 = &LAB_14682652b;
  DAT_14c9f58d8 = &DAT_14c9f80b8;
  DAT_14c9f592d = DAT_14c9f592d + '\x01';
  _DAT_14c9f80d8 = 0x100000000;
  if (*(char *)(_DAT_14c9f80c0 + 100) != '\0') {
    DAT_14c9f592e = DAT_14c9f592e + '\x01';
  }
  return;
}



// FUNCTION 145f6a1d6 FUN_145f6a1d6 body=261 status=ok
// SIG undefined FUN_145f6a1d6(void)

void FUN_145f6a1d6(void)

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
              0x110) < DAT_14c9f7798) {
    FUN_144b3d300(&DAT_14c9f7798);
    if (DAT_14c9f7798 == -1) {
      FUN_145f6a2dc(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x120;
      local_58 = 0x245;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f7718,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d596bd);
      _Init_thread_footer(&DAT_14c9f7798);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f6a2dc FUN_145f6a2dc body=226 status=ok
// SIG undefined FUN_145f6a2dc(void)

longlong * FUN_145f6a2dc(longlong *param_1)

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
  pcVar13 = FUN_1462e0e92;
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



// FUNCTION 145f6a3c0 FUN_145f6a3c0 body=132 status=ok
// SIG undefined FUN_145f6a3c0(void)

undefined1 * FUN_145f6a3c0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWDiffuseIndirect";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x246;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1471fb68c;
}



// FUNCTION 145f6a444 FUN_145f6a444 body=142 status=ok
// SIG undefined FUN_145f6a444(void)

code * FUN_145f6a444(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xe00000024b;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462e0faa;
}



// FUNCTION 145f6a4d2 FUN_145f6a4d2 body=144 status=ok
// SIG undefined FUN_145f6a4d2(void)

code * FUN_145f6a4d2(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1000000024d;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462e0f1a;
}



// FUNCTION 145f6a562 FUN_145f6a562 body=292 status=ok
// SIG undefined FUN_145f6a562(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f6a562(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f9d20) {
    FUN_144b3d300(&DAT_14c9f9d20);
    if (DAT_14c9f9d20 == -1) {
      FUN_145f6a7d0();
      FUN_145f6a686();
      FUN_140db5666(&DAT_14c9f9c78,0,&DAT_14c9f9c10,L"FLumenSceneEvaluateStandaloneLightCS",
                    L"/Engine/Private/Lumen/LumenSceneDirectLightingStochastic.usf",L"MainCS",5,2,
                    FUN_147205ab4,FUN_147205a54,&LAB_1462e16bc,&LAB_147205a50,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9fe3c0);
      _DAT_14c9f9c78 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d694f0);
      _Init_thread_footer(&DAT_14c9f9d20);
    }
  }
  return &DAT_14c9f9c78;
}



// FUNCTION 145f6a686 FUN_145f6a686 body=205 status=ok
// SIG undefined FUN_145f6a686(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f6a686(void)

{
  if ((DAT_14c9f9c77 & 2) == 0) {
    DAT_14c9f9c77 = DAT_14c9f9c77 | 2;
    _DAT_14c9f9c18 = L"FLumenSceneEvaluateStandaloneLightCS";
    _DAT_14c9f9c30 = FUN_146826540;
    _DAT_14c9f9c38 = FUN_146825d77;
    _DAT_14c9f9c40 = FUN_146825fd6;
    _DAT_14c9f9c48 = FUN_1407e02ea;
    _DAT_14c9f9c50 = FUN_146826273;
    _DAT_14c9f9c28 = FUN_147205a22;
    _DAT_14c9f9c68 = 0xffffffff000000e0;
    _DAT_14c9f9c70 = 8;
    DAT_14c9f9c74 = 0;
    _DAT_14c9f9c58 = &LAB_147205a4c;
    FUN_145f6a754();
    FUN_1407e00cc(&DAT_14c9f9c10);
    return;
  }
  return;
}



// FUNCTION 145f6a754 FUN_145f6a754 body=123 status=ok
// SIG undefined FUN_145f6a754(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f6a754(void)

{
  _DAT_14c9ffe28 = L"BASE";
  DAT_14c9ffe52 = 4;
  _DAT_14c9ffe30 = FUN_140b35ae4();
  _DAT_14c9ffe38 = DAT_14c9f9c20;
  _DAT_14c9ffe40 = &LAB_14682652b;
  DAT_14c9f9c20 = &DAT_14c9ffe28;
  DAT_14c9f9c75 = DAT_14c9f9c75 + '\x01';
  _DAT_14c9ffe48 = 0x100000000;
  if (*(char *)(_DAT_14c9ffe30 + 100) != '\0') {
    DAT_14c9f9c76 = DAT_14c9f9c76 + '\x01';
  }
  return;
}



// FUNCTION 145f6a7d0 FUN_145f6a7d0 body=261 status=ok
// SIG undefined FUN_145f6a7d0(void)

void FUN_145f6a7d0(void)

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
              0x110) < DAT_14c9fe440) {
    FUN_144b3d300(&DAT_14c9fe440);
    if (DAT_14c9fe440 == -1) {
      FUN_145f6a8d6(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x120;
      local_58 = 0xdd;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9fe3c0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d993a7);
      _Init_thread_footer(&DAT_14c9fe440);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f6a8d6 FUN_145f6a8d6 body=226 status=ok
// SIG undefined FUN_145f6a8d6(void)

longlong * FUN_145f6a8d6(longlong *param_1)

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
  pcVar13 = FUN_1462e3032;
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



// FUNCTION 145f6a9ba FUN_145f6a9ba body=136 status=ok
// SIG undefined FUN_145f6a9ba(void)

code * FUN_145f6a9ba(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CardTilePerLightOffsets";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf8000000e8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14720d6b6;
}



// FUNCTION 145f6aa42 FUN_145f6aa42 body=138 status=ok
// SIG undefined FUN_145f6aa42(void)

code * FUN_145f6aa42(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PreViewTranslationHigh";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000000e2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14720d854;
}



// FUNCTION 145f6aacc FUN_145f6aacc body=144 status=ok
// SIG undefined FUN_145f6aacc(void)

code * FUN_145f6aacc(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x10000000df;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14720d968;
}



// FUNCTION 145f6ab5c FUN_145f6ab5c body=292 status=ok
// SIG undefined FUN_145f6ab5c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f6ab5c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9fc0d0) {
    FUN_144b3d300(&DAT_14c9fc0d0);
    if (DAT_14c9fc0d0 == -1) {
      FUN_145f6adca();
      FUN_145f6ac80();
      FUN_140db5666(&DAT_14c9fc028,0,&DAT_14c9fbfc0,
                    L"FScreenProbeTemporallyAccumulateTraceRadianceCS",
                    L"/Engine/Private/Lumen/LumenScreenProbeFiltering.usf",
                    L"ScreenProbeTemporallyAccumulateTraceRadianceCS",5,1,FUN_1472085b8,
                    FUN_147208558,&LAB_1462e178e,&LAB_147208554,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14c9ff080);
      _DAT_14c9fc028 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d878d7);
      _Init_thread_footer(&DAT_14c9fc0d0);
    }
  }
  return &DAT_14c9fc028;
}



// FUNCTION 145f6ac80 FUN_145f6ac80 body=205 status=ok
// SIG undefined FUN_145f6ac80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f6ac80(void)

{
  if ((DAT_14c9fc027 & 2) == 0) {
    DAT_14c9fc027 = DAT_14c9fc027 | 2;
    _DAT_14c9fbfc8 = L"FScreenProbeTemporallyAccumulateTraceRadianceCS";
    _DAT_14c9fbfe0 = FUN_146826540;
    _DAT_14c9fbfe8 = FUN_146825d77;
    _DAT_14c9fbff0 = FUN_146825fd6;
    _DAT_14c9fbff8 = FUN_1407e02ea;
    _DAT_14c9fc000 = FUN_146826273;
    _DAT_14c9fbfd8 = FUN_147208526;
    _DAT_14c9fc018 = 0xffffffff000000e0;
    _DAT_14c9fc020 = 8;
    DAT_14c9fc024 = 0;
    _DAT_14c9fc008 = &LAB_147208550;
    FUN_145f6ad4e();
    FUN_1407e00cc(&DAT_14c9fbfc0);
    return;
  }
  return;
}



// FUNCTION 145f6ad4e FUN_145f6ad4e body=123 status=ok
// SIG undefined FUN_145f6ad4e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f6ad4e(void)

{
  _DAT_14ca00438 = L"BASE";
  DAT_14ca00462 = 4;
  _DAT_14ca00440 = FUN_140b35ae4();
  _DAT_14ca00448 = DAT_14c9fbfd0;
  _DAT_14ca00450 = &LAB_14682652b;
  DAT_14c9fbfd0 = &DAT_14ca00438;
  DAT_14c9fc025 = DAT_14c9fc025 + '\x01';
  _DAT_14ca00458 = 0x100000000;
  if (*(char *)(_DAT_14ca00440 + 100) != '\0') {
    DAT_14c9fc026 = DAT_14c9fc026 + '\x01';
  }
  return;
}



// FUNCTION 145f6adca FUN_145f6adca body=261 status=ok
// SIG undefined FUN_145f6adca(void)

void FUN_145f6adca(void)

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
              0x110) < DAT_14c9ff100) {
    FUN_144b3d300(&DAT_14c9ff100);
    if (DAT_14c9ff100 == -1) {
      FUN_145f6aed0(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x220;
      local_58 = 0x9c;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9ff080,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d9c641);
      _Init_thread_footer(&DAT_14c9ff100);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f6aed0 FUN_145f6aed0 body=226 status=ok
// SIG undefined FUN_145f6aed0(void)

longlong * FUN_145f6aed0(longlong *param_1)

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
  pcVar13 = FUN_1462e537a;
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



// FUNCTION 145f6afb4 FUN_145f6afb4 body=136 status=ok
// SIG undefined FUN_145f6afb4(void)

code * FUN_145f6afb4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HistoryDistanceThreshold";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1f4000000a5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147216c68;
}



// FUNCTION 145f6b03c FUN_145f6b03c body=138 status=ok
// SIG undefined FUN_145f6b03c(void)

code * FUN_145f6b03c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HistoryScreenProbeRadiance";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float3>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x208000000a8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147216b54;
}



// FUNCTION 145f6b0c6 FUN_145f6b0c6 body=144 status=ok
// SIG undefined FUN_145f6b0c6(void)

code * FUN_145f6b0c6(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x20000000a0;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462e5492;
}



// FUNCTION 145f6b156 FUN_145f6b156 body=205 status=ok
// SIG undefined FUN_145f6b156(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f6b156(void)

{
  if ((DAT_14c9fd2d7 & 2) == 0) {
    DAT_14c9fd2d7 = DAT_14c9fd2d7 | 2;
    _DAT_14c9fd278 = L"FScreenProbeTileClassificationMarkCS";
    _DAT_14c9fd290 = FUN_146826540;
    _DAT_14c9fd298 = FUN_146825d77;
    _DAT_14c9fd2a0 = FUN_146825fd6;
    _DAT_14c9fd2a8 = FUN_1407e02ea;
    _DAT_14c9fd2b0 = FUN_146826273;
    _DAT_14c9fd288 = FUN_147209216;
    _DAT_14c9fd2c8 = 0xffffffff000000e0;
    _DAT_14c9fd2d0 = 8;
    DAT_14c9fd2d4 = 0;
    _DAT_14c9fd2b8 = &LAB_147209240;
    FUN_145f6b224();
    FUN_1407e00cc(&DAT_14c9fd270);
    return;
  }
  return;
}



// FUNCTION 145f6b224 FUN_145f6b224 body=123 status=ok
// SIG undefined FUN_145f6b224(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f6b224(void)

{
  _DAT_14ca006a8 = L"BASE";
  DAT_14ca006d2 = 4;
  _DAT_14ca006b0 = FUN_140b35ae4();
  _DAT_14ca006b8 = DAT_14c9fd280;
  _DAT_14ca006c0 = &LAB_14682652b;
  DAT_14c9fd280 = &DAT_14ca006a8;
  DAT_14c9fd2d5 = DAT_14c9fd2d5 + '\x01';
  _DAT_14ca006c8 = 0x100000000;
  if (*(char *)(_DAT_14ca006b0 + 100) != '\0') {
    DAT_14c9fd2d6 = DAT_14c9fd2d6 + '\x01';
  }
  return;
}



// FUNCTION 145f6b2a0 FUN_145f6b2a0 body=226 status=ok
// SIG undefined FUN_145f6b2a0(void)

longlong * FUN_145f6b2a0(longlong *param_1)

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
  pcVar13 = FUN_1462e649c;
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



// FUNCTION 145f6b384 FUN_145f6b384 body=138 status=ok
// SIG undefined FUN_145f6b384(void)

code * FUN_145f6b384(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DefaultDiffuseIntegrationMethod";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7000000340;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f6b40e;
}



// FUNCTION 145f6b40e FUN_145f6b40e body=142 status=ok
// SIG undefined FUN_145f6b40e(void)

code * FUN_145f6b40e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145b20164();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ReflectionsCompositeParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"LumenReflections::FCompositeParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x600000033f;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145f6b49c;
}



// FUNCTION 145f6b49c FUN_145f6b49c body=144 status=ok
// SIG undefined FUN_145f6b49c(void)

code * FUN_145f6b49c(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x500000033e;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462e6524;
}



// FUNCTION 145f6b52c FUN_145f6b52c body=292 status=ok
// SIG undefined FUN_145f6b52c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f6b52c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca05488) {
    FUN_144b3d300(&DAT_14ca05488);
    if (DAT_14ca05488 == -1) {
      FUN_145f6b79a();
      FUN_145f6b650();
      FUN_140db5666(&DAT_14ca053e0,0,&DAT_14ca05378,L"FClearResolvedLightingCS",
                    L"/Engine/Private/MegaLights/MegaLightsShading.usf",L"ClearResolvedLightingCS",5
                    ,1,FUN_147227b90,FUN_147227b30,&LAB_147227b0e,&LAB_147227b0a,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca074c8);
      _DAT_14ca053e0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142dc9b65);
      _Init_thread_footer(&DAT_14ca05488);
    }
  }
  return &DAT_14ca053e0;
}



// FUNCTION 145f6b650 FUN_145f6b650 body=205 status=ok
// SIG undefined FUN_145f6b650(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f6b650(void)

{
  if ((DAT_14ca053df & 2) == 0) {
    DAT_14ca053df = DAT_14ca053df | 2;
    _DAT_14ca05380 = L"FClearResolvedLightingCS";
    _DAT_14ca05398 = FUN_146826540;
    _DAT_14ca053a0 = FUN_146825d77;
    _DAT_14ca053a8 = FUN_146825fd6;
    _DAT_14ca053b0 = FUN_1407e02ea;
    _DAT_14ca053b8 = FUN_146826273;
    _DAT_14ca05390 = FUN_147227adc;
    _DAT_14ca053d0 = 0xffffffff000000e0;
    _DAT_14ca053d8 = 8;
    DAT_14ca053dc = 0;
    _DAT_14ca053c0 = &LAB_147227b06;
    FUN_145f6b71e();
    FUN_1407e00cc(&DAT_14ca05378);
    return;
  }
  return;
}



// FUNCTION 145f6b71e FUN_145f6b71e body=123 status=ok
// SIG undefined FUN_145f6b71e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f6b71e(void)

{
  _DAT_14ca08350 = L"BASE";
  DAT_14ca0837a = 4;
  _DAT_14ca08358 = FUN_140b35ae4();
  _DAT_14ca08360 = DAT_14ca05388;
  _DAT_14ca08368 = &LAB_14682652b;
  DAT_14ca05388 = &DAT_14ca08350;
  DAT_14ca053dd = DAT_14ca053dd + '\x01';
  _DAT_14ca08370 = 0x100000000;
  if (*(char *)(_DAT_14ca08358 + 100) != '\0') {
    DAT_14ca053de = DAT_14ca053de + '\x01';
  }
  return;
}



// FUNCTION 145f6b79a FUN_145f6b79a body=261 status=ok
// SIG undefined FUN_145f6b79a(void)

void FUN_145f6b79a(void)

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
              0x110) < DAT_14ca07548) {
    FUN_144b3d300(&DAT_14ca07548);
    if (DAT_14ca07548 == -1) {
      FUN_145f6b8a0(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x2f0;
      local_58 = 0x3c3;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca074c8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142dd4183);
      _Init_thread_footer(&DAT_14ca07548);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f6b8a0 FUN_145f6b8a0 body=226 status=ok
// SIG undefined FUN_145f6b8a0(void)

longlong * FUN_145f6b8a0(longlong *param_1)

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
  pcVar13 = FUN_1462ebd1c;
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



// FUNCTION 145f6b984 FUN_145f6b984 body=138 status=ok
// SIG undefined FUN_145f6b984(void)

code * FUN_145f6b984(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWResolvedDiffuseLighting";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float3>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2d0000003c6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f6ba98;
}



// FUNCTION 145f6ba0e FUN_145f6ba0e body=138 status=ok
// SIG undefined FUN_145f6ba0e(void)

code * FUN_145f6ba0e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TileAllocator";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2e0000003c8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14723034a;
}



// FUNCTION 145f6ba98 FUN_145f6ba98 body=142 status=ok
// SIG undefined FUN_145f6ba98(void)

code * FUN_145f6ba98(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x10000003c5;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1472303d4;
}



// FUNCTION 145f6bb26 FUN_145f6bb26 body=292 status=ok
// SIG undefined FUN_145f6bb26(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f6bb26(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca1d9d0) {
    FUN_144b3d300(&DAT_14ca1d9d0);
    if (DAT_14ca1d9d0 == -1) {
      FUN_145f6bd94();
      FUN_145f6bc4a();
      FUN_140db5666(&DAT_14ca1d928,0,&DAT_14ca1d8c0,L"FPathTracingDebugRG",
                    L"/Engine/Private/PathTracing/PathTracingDebug.usf",L"PathTracingDebugRG",6,1,
                    FUN_147271ff6,FUN_147271fb2,&LAB_1462f5186,&LAB_147271fae,&LAB_147271fa8,
                    &LAB_14712ac08,0xe0,&DAT_14ca21c50);
      _DAT_14ca1d928 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e70ab3);
      _Init_thread_footer(&DAT_14ca1d9d0);
    }
  }
  return &DAT_14ca1d928;
}



// FUNCTION 145f6bc4a FUN_145f6bc4a body=205 status=ok
// SIG undefined FUN_145f6bc4a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f6bc4a(void)

{
  if ((DAT_14ca1d927 & 2) == 0) {
    DAT_14ca1d927 = DAT_14ca1d927 | 2;
    _DAT_14ca1d8c8 = L"FPathTracingDebugRG";
    _DAT_14ca1d8e0 = FUN_146826540;
    _DAT_14ca1d8e8 = FUN_146825d77;
    _DAT_14ca1d8f0 = FUN_146825fd6;
    _DAT_14ca1d8f8 = FUN_1407e02ea;
    _DAT_14ca1d900 = FUN_146826273;
    _DAT_14ca1d8d8 = FUN_147271f78;
    _DAT_14ca1d918 = 0xffffffff000000e0;
    _DAT_14ca1d920 = 8;
    DAT_14ca1d924 = 0;
    _DAT_14ca1d908 = &LAB_147271fa4;
    FUN_145f6bd18();
    FUN_1407e00cc(&DAT_14ca1d8c0);
    return;
  }
  return;
}



// FUNCTION 145f6bd18 FUN_145f6bd18 body=123 status=ok
// SIG undefined FUN_145f6bd18(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f6bd18(void)

{
  _DAT_14ca24840 = L"BASE";
  DAT_14ca2486a = 4;
  _DAT_14ca24848 = FUN_140b35ae4();
  _DAT_14ca24850 = DAT_14ca1d8d0;
  _DAT_14ca24858 = &LAB_14682652b;
  DAT_14ca1d8d0 = &DAT_14ca24840;
  DAT_14ca1d925 = DAT_14ca1d925 + '\x01';
  _DAT_14ca24860 = 0x100000000;
  if (*(char *)(_DAT_14ca24848 + 100) != '\0') {
    DAT_14ca1d926 = DAT_14ca1d926 + '\x01';
  }
  return;
}



// FUNCTION 145f6bd94 FUN_145f6bd94 body=261 status=ok
// SIG undefined FUN_145f6bd94(void)

void FUN_145f6bd94(void)

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
              0x110) < DAT_14ca21cd0) {
    FUN_144b3d300(&DAT_14ca21cd0);
    if (DAT_14ca21cd0 == -1) {
      FUN_145f6be9a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xd0;
      local_58 = 0x4e6;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca21c50,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e95c91);
      _Init_thread_footer(&DAT_14ca21cd0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f6be9a FUN_145f6be9a body=226 status=ok
// SIG undefined FUN_145f6be9a(void)

longlong * FUN_145f6be9a(longlong *param_1)

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
  pcVar13 = FUN_1462f64a4;
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



// FUNCTION 145f6bf7e FUN_145f6bf7e body=136 status=ok
// SIG undefined FUN_145f6bf7e(void)

code * FUN_145f6bf7e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SceneVisibleLightCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x44000004f0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f6c006;
}



// FUNCTION 145f6c006 FUN_145f6c006 body=138 status=ok
// SIG undefined FUN_145f6c006(void)

code * FUN_145f6c006(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SceneLightCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000004ef;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14727ce9a;
}



// FUNCTION 145f6c090 FUN_145f6c090 body=144 status=ok
// SIG undefined FUN_145f6c090(void)

code * FUN_145f6c090(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x20000004ea;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14727cfae;
}



// FUNCTION 145f6c120 FUN_145f6c120 body=292 status=ok
// SIG undefined FUN_145f6c120(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f6c120(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca20a20) {
    FUN_144b3d300(&DAT_14ca20a20);
    if (DAT_14ca20a20 == -1) {
      FUN_145f6c38e();
      FUN_145f6c244();
      FUN_140db5666(&DAT_14ca20978,0,&DAT_14ca20910,L"FVisualizePathTracingMotionVectorPS",
                    L"/Engine/Private/PathTracing/PathTracingSpatialTemporalDenoising.usf",
                    L"VisualizePathTracingMotionVector",3,1,FUN_147277d90,FUN_147277d30,
                    &LAB_1462f522e,&LAB_147277d2c,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca22930)
      ;
      _DAT_14ca20978 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e8444d);
      _Init_thread_footer(&DAT_14ca20a20);
    }
  }
  return &DAT_14ca20978;
}



// FUNCTION 145f6c244 FUN_145f6c244 body=205 status=ok
// SIG undefined FUN_145f6c244(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f6c244(void)

{
  if ((DAT_14ca20977 & 2) == 0) {
    DAT_14ca20977 = DAT_14ca20977 | 2;
    _DAT_14ca20918 = L"FVisualizePathTracingMotionVectorPS";
    _DAT_14ca20930 = FUN_146826540;
    _DAT_14ca20938 = FUN_146825d77;
    _DAT_14ca20940 = FUN_146825fd6;
    _DAT_14ca20948 = FUN_1407e02ea;
    _DAT_14ca20950 = FUN_146826273;
    _DAT_14ca20928 = FUN_147277cfc;
    _DAT_14ca20968 = 0xffffffff000000e0;
    _DAT_14ca20970 = 8;
    DAT_14ca20974 = 0;
    _DAT_14ca20958 = &LAB_147277d28;
    FUN_145f6c312();
    FUN_1407e00cc(&DAT_14ca20910);
    return;
  }
  return;
}



// FUNCTION 145f6c312 FUN_145f6c312 body=123 status=ok
// SIG undefined FUN_145f6c312(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f6c312(void)

{
  _DAT_14ca25018 = L"BASE";
  DAT_14ca25042 = 4;
  _DAT_14ca25020 = FUN_140b35ae4();
  _DAT_14ca25028 = DAT_14ca20920;
  _DAT_14ca25030 = &LAB_14682652b;
  DAT_14ca20920 = &DAT_14ca25018;
  DAT_14ca20975 = DAT_14ca20975 + '\x01';
  _DAT_14ca25038 = 0x100000000;
  if (*(char *)(_DAT_14ca25020 + 100) != '\0') {
    DAT_14ca20976 = DAT_14ca20976 + '\x01';
  }
  return;
}



// FUNCTION 145f6c38e FUN_145f6c38e body=261 status=ok
// SIG undefined FUN_145f6c38e(void)

void FUN_145f6c38e(void)

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
              0x110) < DAT_14ca229b0) {
    FUN_144b3d300(&DAT_14ca229b0);
    if (DAT_14ca229b0 == -1) {
      FUN_145f6c494(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x140;
      local_58 = 0x83b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca22930,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e98bbb);
      _Init_thread_footer(&DAT_14ca229b0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f6c494 FUN_145f6c494 body=226 status=ok
// SIG undefined FUN_145f6c494(void)

longlong * FUN_145f6c494(longlong *param_1)

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
  pcVar13 = FUN_1462f76f6;
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



// FUNCTION 145f6c578 FUN_145f6c578 body=138 status=ok
// SIG undefined FUN_145f6c578(void)

code * FUN_145f6c578(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TemporalDenoisingMotionVector";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000083e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f6c68c;
}



// FUNCTION 145f6c602 FUN_145f6c602 body=138 status=ok
// SIG undefined FUN_145f6c602(void)

undefined1 * FUN_145f6c602(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x83c;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_147282162;
}



// FUNCTION 145f6c68c FUN_145f6c68c body=142 status=ok
// SIG undefined FUN_145f6c68c(void)

code * FUN_145f6c68c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar4) = L"SceneTextures";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSceneTextureUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x100000083d;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145f6c602;
}



// FUNCTION 145f6c71a FUN_145f6c71a body=292 status=ok
// SIG undefined FUN_145f6c71a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f6c71a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2ea10) {
    FUN_144b3d300(&DAT_14ca2ea10);
    if (DAT_14ca2ea10 == -1) {
      FUN_145f6c988();
      FUN_145f6c83e();
      FUN_140db5666(&DAT_14ca2e968,0,&DAT_14ca2e900,L"FMotionBlurVelocityFlattenCS",
                    L"/Engine/Private/MotionBlur/MotionBlurVelocityFlatten.usf",L"MainCS",5,2,
                    FUN_147297b0e,FUN_147297aae,&LAB_147297a96,&LAB_147297a92,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca33128);
      _DAT_14ca2e968 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142eff08e);
      _Init_thread_footer(&DAT_14ca2ea10);
    }
  }
  return &DAT_14ca2e968;
}



// FUNCTION 145f6c83e FUN_145f6c83e body=205 status=ok
// SIG undefined FUN_145f6c83e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f6c83e(void)

{
  if ((DAT_14ca2e967 & 2) == 0) {
    DAT_14ca2e967 = DAT_14ca2e967 | 2;
    _DAT_14ca2e908 = L"FMotionBlurVelocityFlattenCS";
    _DAT_14ca2e920 = FUN_146826540;
    _DAT_14ca2e928 = FUN_146825d77;
    _DAT_14ca2e930 = FUN_146825fd6;
    _DAT_14ca2e938 = FUN_1407e02ea;
    _DAT_14ca2e940 = FUN_146826273;
    _DAT_14ca2e918 = FUN_147297a62;
    _DAT_14ca2e958 = 0xffffffff000000e0;
    _DAT_14ca2e960 = 8;
    DAT_14ca2e964 = 0;
    _DAT_14ca2e948 = &LAB_147297a8e;
    FUN_145f6c90c();
    FUN_1407e00cc(&DAT_14ca2e900);
    return;
  }
  return;
}



// FUNCTION 145f6c90c FUN_145f6c90c body=123 status=ok
// SIG undefined FUN_145f6c90c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f6c90c(void)

{
  _DAT_14ca34900 = L"BASE";
  DAT_14ca3492a = 4;
  _DAT_14ca34908 = FUN_140b35ae4();
  _DAT_14ca34910 = DAT_14ca2e910;
  _DAT_14ca34918 = &LAB_14682652b;
  DAT_14ca2e910 = &DAT_14ca34900;
  DAT_14ca2e965 = DAT_14ca2e965 + '\x01';
  _DAT_14ca34920 = 0x100000000;
  if (*(char *)(_DAT_14ca34908 + 100) != '\0') {
    DAT_14ca2e966 = DAT_14ca2e966 + '\x01';
  }
  return;
}



// FUNCTION 145f6c988 FUN_145f6c988 body=261 status=ok
// SIG undefined FUN_145f6c988(void)

void FUN_145f6c988(void)

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
              0x110) < DAT_14ca331a8) {
    FUN_144b3d300(&DAT_14ca331a8);
    if (DAT_14ca331a8 == -1) {
      FUN_1415a0836(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x150;
      local_58 = 0x155;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca33128,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f13fb5);
      _Init_thread_footer(&DAT_14ca331a8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f6ca8e FUN_145f6ca8e body=136 status=ok
// SIG undefined FUN_145f6ca8e(void)

code * FUN_145f6ca8e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VelocityTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x12000000164;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14729e590;
}



// FUNCTION 145f6cb16 FUN_145f6cb16 body=138 status=ok
// SIG undefined FUN_145f6cb16(void)

code * FUN_145f6cb16(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DistortingDisplacementSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10800000161;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14729e6a4;
}



// FUNCTION 145f6cba0 FUN_145f6cba0 body=144 status=ok
// SIG undefined FUN_145f6cba0(void)

code * FUN_145f6cba0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar4) = L"Velocity";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FScreenPassTextureViewportParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1000000157;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462fcdfc;
}



// FUNCTION 145f6cc30 FUN_145f6cc30 body=292 status=ok
// SIG undefined FUN_145f6cc30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f6cc30(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca391c0) {
    FUN_144b3d300(&DAT_14ca391c0);
    if (DAT_14ca391c0 == -1) {
      FUN_145f6ce9e();
      FUN_145f6cd54();
      FUN_140db5666(&DAT_14ca39118,0,&DAT_14ca390b0,L"FRayTracingDebugRGS",
                    L"/Engine/Private/RayTracing/RayTracingDebug.usf",L"RayTracingDebugMainRGS",6,2,
                    FUN_1472b1b44,FUN_1472b1b00,&LAB_146300db4,&LAB_1472b1afc,&LAB_1472b1ae6,
                    &LAB_1472b1ac6,0xe0,&DAT_14ca3e8e0);
      _DAT_14ca39118 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f65b64);
      _Init_thread_footer(&DAT_14ca391c0);
    }
  }
  return &DAT_14ca39118;
}



// FUNCTION 145f6cd54 FUN_145f6cd54 body=205 status=ok
// SIG undefined FUN_145f6cd54(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f6cd54(void)

{
  if ((DAT_14ca39117 & 2) == 0) {
    DAT_14ca39117 = DAT_14ca39117 | 2;
    _DAT_14ca390b8 = L"FRayTracingDebugRGS";
    _DAT_14ca390d0 = FUN_146826540;
    _DAT_14ca390d8 = FUN_146825d77;
    _DAT_14ca390e0 = FUN_146825fd6;
    _DAT_14ca390e8 = FUN_1407e02ea;
    _DAT_14ca390f0 = FUN_146826273;
    _DAT_14ca390c8 = FUN_1472b1a98;
    _DAT_14ca39108 = 0xffffffff000000e0;
    _DAT_14ca39110 = 8;
    DAT_14ca39114 = 0;
    _DAT_14ca390f8 = &LAB_1472b1ac2;
    FUN_145f6ce22();
    FUN_1407e00cc(&DAT_14ca390b0);
    return;
  }
  return;
}



// FUNCTION 145f6ce22 FUN_145f6ce22 body=123 status=ok
// SIG undefined FUN_145f6ce22(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f6ce22(void)

{
  _DAT_14ca3f530 = L"BASE";
  DAT_14ca3f55a = 4;
  _DAT_14ca3f538 = FUN_140b35ae4();
  _DAT_14ca3f540 = DAT_14ca390c0;
  _DAT_14ca3f548 = &LAB_14682652b;
  DAT_14ca390c0 = &DAT_14ca3f530;
  DAT_14ca39115 = DAT_14ca39115 + '\x01';
  _DAT_14ca3f550 = 0x100000000;
  if (*(char *)(_DAT_14ca3f538 + 100) != '\0') {
    DAT_14ca39116 = DAT_14ca39116 + '\x01';
  }
  return;
}



// FUNCTION 145f6ce9e FUN_145f6ce9e body=261 status=ok
// SIG undefined FUN_145f6ce9e(void)

void FUN_145f6ce9e(void)

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
              0x110) < DAT_14ca3e960) {
    FUN_144b3d300(&DAT_14ca3e960);
    if (DAT_14ca3e960 == -1) {
      FUN_1415a091a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xd0;
      local_58 = 0x8b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca3e8e0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f6f6d2);
      _Init_thread_footer(&DAT_14ca3e960);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f6cfa4 FUN_145f6cfa4 body=138 status=ok
// SIG undefined FUN_145f6cfa4(void)

code * FUN_145f6cfa4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NumTotalInstances";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3c00000097;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472bc266;
}



// FUNCTION 145f6d02e FUN_145f6d02e body=138 status=ok
// SIG undefined FUN_145f6d02e(void)

code * FUN_145f6d02e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TriangleHitCountMaxThreshold";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000094;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472bc37a;
}



// FUNCTION 145f6d0b8 FUN_145f6d0b8 body=142 status=ok
// SIG undefined FUN_145f6d0b8(void)

code * FUN_145f6d0b8(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x700000009e;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1472bbf2a;
}



// FUNCTION 145f6d146 FUN_145f6d146 body=292 status=ok
// SIG undefined FUN_145f6d146(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f6d146(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4ce58) {
    FUN_144b3d300(&DAT_14ca4ce58);
    if (DAT_14ca4ce58 == -1) {
      FUN_145f6d3b4();
      FUN_145f6d26a();
      FUN_140db5666(&DAT_14ca4cdb0,0,&DAT_14ca4cd48,L"FSSRTileCategorisationMarkCS",
                    L"/Engine/Private/DefaultSSRTiles.usf",L"SSRTileCategorisationMarkCS",5,2,
                    FUN_1472e9e72,FUN_1472e9e12,&LAB_1472e9dfa,&LAB_1472e9df6,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca55a58);
      _DAT_14ca4cdb0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14303cdbd);
      _Init_thread_footer(&DAT_14ca4ce58);
    }
  }
  return &DAT_14ca4cdb0;
}



// FUNCTION 145f6d26a FUN_145f6d26a body=205 status=ok
// SIG undefined FUN_145f6d26a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f6d26a(void)

{
  if ((DAT_14ca4cdaf & 2) == 0) {
    DAT_14ca4cdaf = DAT_14ca4cdaf | 2;
    _DAT_14ca4cd50 = L"FSSRTileCategorisationMarkCS";
    _DAT_14ca4cd68 = FUN_146826540;
    _DAT_14ca4cd70 = FUN_146825d77;
    _DAT_14ca4cd78 = FUN_146825fd6;
    _DAT_14ca4cd80 = FUN_1407e02ea;
    _DAT_14ca4cd88 = FUN_146826273;
    _DAT_14ca4cd60 = FUN_1472e9dc6;
    _DAT_14ca4cda0 = 0xffffffff000000e0;
    _DAT_14ca4cda8 = 8;
    DAT_14ca4cdac = 0;
    _DAT_14ca4cd90 = &LAB_1472e9df2;
    FUN_145f6d338();
    FUN_1407e00cc(&DAT_14ca4cd48);
    return;
  }
  return;
}



// FUNCTION 145f6d338 FUN_145f6d338 body=123 status=ok
// SIG undefined FUN_145f6d338(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f6d338(void)

{
  _DAT_14ca567f8 = L"BASE";
  DAT_14ca56822 = 4;
  _DAT_14ca56800 = FUN_140b35ae4();
  _DAT_14ca56808 = DAT_14ca4cd58;
  _DAT_14ca56810 = &LAB_14682652b;
  DAT_14ca4cd58 = &DAT_14ca567f8;
  DAT_14ca4cdad = DAT_14ca4cdad + '\x01';
  _DAT_14ca56818 = 0x100000000;
  if (*(char *)(_DAT_14ca56800 + 100) != '\0') {
    DAT_14ca4cdae = DAT_14ca4cdae + '\x01';
  }
  return;
}



// FUNCTION 145f6d3b4 FUN_145f6d3b4 body=261 status=ok
// SIG undefined FUN_145f6d3b4(void)

void FUN_145f6d3b4(void)

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
              0x110) < DAT_14ca55ad8) {
    FUN_144b3d300(&DAT_14ca55ad8);
    if (DAT_14ca55ad8 == -1) {
      FUN_145f6d4ba(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xc0;
      local_58 = 0x43;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca55a58,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14305d78d);
      _Init_thread_footer(&DAT_14ca55ad8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f6d4ba FUN_145f6d4ba body=226 status=ok
// SIG undefined FUN_145f6d4ba(void)

longlong * FUN_145f6d4ba(longlong *param_1)

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
  pcVar13 = FUN_1463075ca;
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



// FUNCTION 145f6d59e FUN_145f6d59e body=136 status=ok
// SIG undefined FUN_145f6d59e(void)

code * FUN_145f6d59e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9800000048;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f6d626;
}



// FUNCTION 145f6d626 FUN_145f6d626 body=138 status=ok
// SIG undefined FUN_145f6d626(void)

code * FUN_145f6d626(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SSRDepthStencilTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9000000047;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f6d6b0;
}



// FUNCTION 145f6d6b0 FUN_145f6d6b0 body=144 status=ok
// SIG undefined FUN_145f6d6b0(void)

code * FUN_145f6d6b0(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x7000000046;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_146307652;
}



// FUNCTION 145f6d740 FUN_145f6d740 body=292 status=ok
// SIG undefined FUN_145f6d740(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f6d740(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca5b9f0) {
    FUN_144b3d300(&DAT_14ca5b9f0);
    if (DAT_14ca5b9f0 == -1) {
      FUN_145f6d9ae();
      FUN_145f6d864();
      FUN_140db5666(&DAT_14ca5b948,0,&DAT_14ca5b8e0,L"FScreenSpaceShadowsUpsamplePS",
                    L"/Engine/Private/ScreenSpaceShadows.usf",L"ScreenSpaceShadowsUpsamplePS",3,2,
                    FUN_1473106ba,FUN_14731065a,&LAB_147310656,&LAB_147310652,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca5bc78);
      _DAT_14ca5b948 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14307c9d5);
      _Init_thread_footer(&DAT_14ca5b9f0);
    }
  }
  return &DAT_14ca5b948;
}



// FUNCTION 145f6d864 FUN_145f6d864 body=205 status=ok
// SIG undefined FUN_145f6d864(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f6d864(void)

{
  if ((DAT_14ca5b947 & 2) == 0) {
    DAT_14ca5b947 = DAT_14ca5b947 | 2;
    _DAT_14ca5b8e8 = L"FScreenSpaceShadowsUpsamplePS";
    _DAT_14ca5b900 = FUN_146826540;
    _DAT_14ca5b908 = FUN_146825d77;
    _DAT_14ca5b910 = FUN_146825fd6;
    _DAT_14ca5b918 = FUN_1407e02ea;
    _DAT_14ca5b920 = FUN_146826273;
    _DAT_14ca5b8f8 = FUN_147310624;
    _DAT_14ca5b938 = 0xffffffff000000e0;
    _DAT_14ca5b940 = 8;
    DAT_14ca5b944 = 0;
    _DAT_14ca5b928 = &LAB_14731064e;
    FUN_145f6d932();
    FUN_1407e00cc(&DAT_14ca5b8e0);
    return;
  }
  return;
}



// FUNCTION 145f6d932 FUN_145f6d932 body=123 status=ok
// SIG undefined FUN_145f6d932(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f6d932(void)

{
  _DAT_14ca5bd98 = L"BASE";
  DAT_14ca5bdc2 = 4;
  _DAT_14ca5bda0 = FUN_140b35ae4();
  _DAT_14ca5bda8 = DAT_14ca5b8f0;
  _DAT_14ca5bdb0 = &LAB_14682652b;
  DAT_14ca5b8f0 = &DAT_14ca5bd98;
  DAT_14ca5b945 = DAT_14ca5b945 + '\x01';
  _DAT_14ca5bdb8 = 0x100000000;
  if (*(char *)(_DAT_14ca5bda0 + 100) != '\0') {
    DAT_14ca5b946 = DAT_14ca5b946 + '\x01';
  }
  return;
}



// FUNCTION 145f6d9ae FUN_145f6d9ae body=261 status=ok
// SIG undefined FUN_145f6d9ae(void)

void FUN_145f6d9ae(void)

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
              0x110) < DAT_14ca5bcf8) {
    FUN_144b3d300(&DAT_14ca5bcf8);
    if (DAT_14ca5bcf8 == -1) {
      FUN_145f6dab4(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x60;
      local_58 = 0xb9;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca5bc78,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14307f408);
      _Init_thread_footer(&DAT_14ca5bcf8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f6dab4 FUN_145f6dab4 body=226 status=ok
// SIG undefined FUN_145f6dab4(void)

longlong * FUN_145f6dab4(longlong *param_1)

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
  pcVar13 = FUN_14630a3ae;
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



// FUNCTION 145f6db98 FUN_145f6db98 body=136 status=ok
// SIG undefined FUN_145f6db98(void)

code * FUN_145f6db98(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ShadowFactorsTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000000bc;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f6dcaa;
}



// FUNCTION 145f6dc20 FUN_145f6dc20 body=138 status=ok
// SIG undefined FUN_145f6dc20(void)

code * FUN_145f6dc20(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ShadowFactorsUVBilinearMax";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x50000000bf;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1473134d2;
}



// FUNCTION 145f6dcaa FUN_145f6dcaa body=144 status=ok
// SIG undefined FUN_145f6dcaa(void)

code * FUN_145f6dcaa(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x20000000bb;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14630a436;
}



// FUNCTION 145f6dd3a FUN_145f6dd3a body=292 status=ok
// SIG undefined FUN_145f6dd3a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f6dd3a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca5dfd8) {
    FUN_144b3d300(&DAT_14ca5dfd8);
    if (DAT_14ca5dfd8 == -1) {
      FUN_145f6dfa8();
      FUN_145f6de5e();
      FUN_140db5666(&DAT_14ca5df30,0,&DAT_14ca5dec8,L"FSubstrateMaterialTileClassificationPassCS",
                    L"/Engine/Private/Substrate/SubstrateMaterialClassification.usf",L"TileMainCS",5
                    ,8,FUN_147317578,FUN_147317518,&LAB_1410fd31e,&LAB_147317512,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca5f380);
      _DAT_14ca5df30 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14309a160);
      _Init_thread_footer(&DAT_14ca5dfd8);
    }
  }
  return &DAT_14ca5df30;
}



// FUNCTION 145f6de5e FUN_145f6de5e body=205 status=ok
// SIG undefined FUN_145f6de5e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f6de5e(void)

{
  if ((DAT_14ca5df2f & 2) == 0) {
    DAT_14ca5df2f = DAT_14ca5df2f | 2;
    _DAT_14ca5ded0 = L"FSubstrateMaterialTileClassificationPassCS";
    _DAT_14ca5dee8 = FUN_146826540;
    _DAT_14ca5def0 = FUN_146825d77;
    _DAT_14ca5def8 = FUN_146825fd6;
    _DAT_14ca5df00 = FUN_1407e02ea;
    _DAT_14ca5df08 = FUN_146826273;
    _DAT_14ca5dee0 = FUN_1473174e4;
    _DAT_14ca5df20 = 0xffffffff000000e0;
    _DAT_14ca5df28 = 8;
    DAT_14ca5df2c = 0;
    _DAT_14ca5df10 = &LAB_14731750e;
    FUN_145f6df2c();
    FUN_1407e00cc(&DAT_14ca5dec8);
    return;
  }
  return;
}



// FUNCTION 145f6df2c FUN_145f6df2c body=123 status=ok
// SIG undefined FUN_145f6df2c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f6df2c(void)

{
  _DAT_14ca5fca8 = L"BASE";
  DAT_14ca5fcd2 = 4;
  _DAT_14ca5fcb0 = FUN_140b35ae4();
  _DAT_14ca5fcb8 = DAT_14ca5ded8;
  _DAT_14ca5fcc0 = &LAB_14682652b;
  DAT_14ca5ded8 = &DAT_14ca5fca8;
  DAT_14ca5df2d = DAT_14ca5df2d + '\x01';
  _DAT_14ca5fcc8 = 0x100000000;
  if (*(char *)(_DAT_14ca5fcb0 + 100) != '\0') {
    DAT_14ca5df2e = DAT_14ca5df2e + '\x01';
  }
  return;
}



// FUNCTION 145f6dfa8 FUN_145f6dfa8 body=261 status=ok
// SIG undefined FUN_145f6dfa8(void)

void FUN_145f6dfa8(void)

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
              0x110) < DAT_14ca5f400) {
    FUN_144b3d300(&DAT_14ca5f400);
    if (DAT_14ca5f400 == -1) {
      FUN_145f6e0ae(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x160;
      local_58 = 0x340;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca5f380,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14309e89f);
      _Init_thread_footer(&DAT_14ca5f400);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f6e0ae FUN_145f6e0ae body=226 status=ok
// SIG undefined FUN_145f6e0ae(void)

longlong * FUN_145f6e0ae(longlong *param_1)

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
  pcVar13 = FUN_14630d010;
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



// FUNCTION 145f6e192 FUN_145f6e192 body=136 status=ok
// SIG undefined FUN_145f6e192(void)

code * FUN_145f6e192(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TileListBufferUAV";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd80000034b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14731d578;
}



// FUNCTION 145f6e21a FUN_145f6e21a body=138 status=ok
// SIG undefined FUN_145f6e21a(void)

code * FUN_145f6e21a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MaterialTextureArrayUAV";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2DArray<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xe00000034c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f6e192;
}



// FUNCTION 145f6e2a4 FUN_145f6e2a4 body=144 status=ok
// SIG undefined FUN_145f6e2a4(void)

code * FUN_145f6e2a4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145cddfec();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"DBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FDBufferParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xf00000034e;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14731d4ee;
}



// FUNCTION 145f6e334 FUN_145f6e334 body=205 status=ok
// SIG undefined FUN_145f6e334(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f6e334(void)

{
  if ((DAT_14ca65167 & 2) == 0) {
    DAT_14ca65167 = DAT_14ca65167 | 2;
    _DAT_14ca65108 = L"FAllocateNewPageMappingsCS";
    _DAT_14ca65120 = FUN_146826540;
    _DAT_14ca65128 = FUN_146825d77;
    _DAT_14ca65130 = FUN_146825fd6;
    _DAT_14ca65138 = FUN_1407e02ea;
    _DAT_14ca65140 = FUN_146826273;
    _DAT_14ca65118 = FUN_14732b698;
    _DAT_14ca65158 = 0xffffffff000000e0;
    _DAT_14ca65160 = 8;
    DAT_14ca65164 = 0;
    _DAT_14ca65148 = &LAB_14732b6c2;
    FUN_145f6e402();
    FUN_1407e00cc(&DAT_14ca65100);
    return;
  }
  return;
}



// FUNCTION 145f6e402 FUN_145f6e402 body=123 status=ok
// SIG undefined FUN_145f6e402(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f6e402(void)

{
  _DAT_14ca68c90 = L"BASE";
  DAT_14ca68cba = 4;
  _DAT_14ca68c98 = FUN_140b35ae4();
  _DAT_14ca68ca0 = DAT_14ca65110;
  _DAT_14ca68ca8 = &LAB_14682652b;
  DAT_14ca65110 = &DAT_14ca68c90;
  DAT_14ca65165 = DAT_14ca65165 + '\x01';
  _DAT_14ca68cb0 = 0x100000000;
  if (*(char *)(_DAT_14ca68c98 + 100) != '\0') {
    DAT_14ca65166 = DAT_14ca65166 + '\x01';
  }
  return;
}



// FUNCTION 145f6e47e FUN_145f6e47e body=226 status=ok
// SIG undefined FUN_145f6e47e(void)

longlong * FUN_145f6e47e(longlong *param_1)

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
  pcVar13 = FUN_146311964;
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



// FUNCTION 145f6e562 FUN_145f6e562 body=138 status=ok
// SIG undefined FUN_145f6e562(void)

code * FUN_145f6e562(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x50000004eb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14732f856;
}



// FUNCTION 145f6e5ec FUN_145f6e5ec body=140 status=ok
// SIG undefined FUN_145f6e5ec(void)

undefined1 * FUN_145f6e5ec(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4e5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca64298;
  return &LAB_14732f9f4;
}



// FUNCTION 145f6e678 FUN_145f6e678 body=146 status=ok
// SIG undefined FUN_145f6e678(void)

code * FUN_145f6e678(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145d3a7d8();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VirtualShadowMapPerPageShader";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FVirtualShadowMapPerPageShader::FParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000004e6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca67a08;
  return FUN_145f6e5ec;
}



// FUNCTION 145f6e70a FUN_145f6e70a body=292 status=ok
// SIG undefined FUN_145f6e70a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f6e70a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca6b550) {
    FUN_144b3d300(&DAT_14ca6b550);
    if (DAT_14ca6b550 == -1) {
      FUN_145f6e978();
      FUN_145f6e82e();
      FUN_140db5666(&DAT_14ca6b4a8,0,&DAT_14ca6b440,L"FRayTraceDirectionalLightVolumeShadowMapRGS",
                    L"/Engine/Private/VolumetricFog.usf",L"InjectShadowedDirectionalLightRGS",6,1,
                    FUN_147334bce,FUN_147334b8a,&LAB_146313d08,&LAB_147334b86,&LAB_147334b80,
                    &LAB_147334b78,0xe0,&DAT_14ca6ce00);
      _DAT_14ca6b4a8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431028f1);
      _Init_thread_footer(&DAT_14ca6b550);
    }
  }
  return &DAT_14ca6b4a8;
}



// FUNCTION 145f6e82e FUN_145f6e82e body=205 status=ok
// SIG undefined FUN_145f6e82e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f6e82e(void)

{
  if ((DAT_14ca6b4a7 & 2) == 0) {
    DAT_14ca6b4a7 = DAT_14ca6b4a7 | 2;
    _DAT_14ca6b448 = L"FRayTraceDirectionalLightVolumeShadowMapRGS";
    _DAT_14ca6b460 = FUN_146826540;
    _DAT_14ca6b468 = FUN_146825d77;
    _DAT_14ca6b470 = FUN_146825fd6;
    _DAT_14ca6b478 = FUN_1407e02ea;
    _DAT_14ca6b480 = FUN_146826273;
    _DAT_14ca6b458 = FUN_147334b4a;
    _DAT_14ca6b498 = 0xffffffff000000e0;
    _DAT_14ca6b4a0 = 8;
    DAT_14ca6b4a4 = 0;
    _DAT_14ca6b488 = &LAB_147334b74;
    FUN_145f6e8fc();
    FUN_1407e00cc(&DAT_14ca6b440);
    return;
  }
  return;
}



// FUNCTION 145f6e8fc FUN_145f6e8fc body=123 status=ok
// SIG undefined FUN_145f6e8fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f6e8fc(void)

{
  _DAT_14ca6d5b0 = L"BASE";
  DAT_14ca6d5da = 4;
  _DAT_14ca6d5b8 = FUN_140b35ae4();
  _DAT_14ca6d5c0 = DAT_14ca6b450;
  _DAT_14ca6d5c8 = &LAB_14682652b;
  DAT_14ca6b450 = &DAT_14ca6d5b0;
  DAT_14ca6b4a5 = DAT_14ca6b4a5 + '\x01';
  _DAT_14ca6d5d0 = 0x100000000;
  if (*(char *)(_DAT_14ca6d5b8 + 100) != '\0') {
    DAT_14ca6b4a6 = DAT_14ca6b4a6 + '\x01';
  }
  return;
}



// FUNCTION 145f6e978 FUN_145f6e978 body=261 status=ok
// SIG undefined FUN_145f6e978(void)

void FUN_145f6e978(void)

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
              0x110) < DAT_14ca6ce80) {
    FUN_144b3d300(&DAT_14ca6ce80);
    if (DAT_14ca6ce80 == -1) {
      FUN_145f6ea7e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1e0;
      local_58 = 0x1c3;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca6ce00,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14310e773);
      _Init_thread_footer(&DAT_14ca6ce80);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f6ea7e FUN_145f6ea7e body=226 status=ok
// SIG undefined FUN_145f6ea7e(void)

longlong * FUN_145f6ea7e(longlong *param_1)

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
  pcVar13 = FUN_1463153a4;
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



// FUNCTION 145f6eb62 FUN_145f6eb62 body=138 status=ok
// SIG undefined FUN_145f6eb62(void)

code * FUN_145f6eb62(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutShadowVolumeTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture3D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c0000001c7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14631542c;
}



// FUNCTION 145f6ebec FUN_145f6ebec body=138 status=ok
// SIG undefined FUN_145f6ebec(void)

code * FUN_145f6ebec(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c8000001c8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f6eb62;
}



// FUNCTION 145f6ec76 FUN_145f6ec76 body=142 status=ok
// SIG undefined FUN_145f6ec76(void)

code * FUN_145f6ec76(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar4) = L"Forward";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FForwardLightData";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x10000001c5;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1463154be;
}



// FUNCTION 145f6ed04 FUN_145f6ed04 body=206 status=ok
// SIG undefined FUN_145f6ed04(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f6ed04(void)

{
  if ((DAT_14cb2f2bf & 2) == 0) {
    DAT_14cb2f2bf = DAT_14cb2f2bf | 2;
    _DAT_14cb2f260 = L"FNiagaraRibbonUVParamCalculationCS";
    _DAT_14cb2f278 = FUN_146826540;
    _DAT_14cb2f280 = FUN_146825d77;
    _DAT_14cb2f288 = FUN_146825fd6;
    _DAT_14cb2f290 = FUN_1407e02ea;
    _DAT_14cb2f298 = FUN_146826273;
    _DAT_14cb2f270 = FUN_14804d7f6;
    _DAT_14cb2f2b0 = 0xffffffff000000e0;
    _DAT_14cb2f2b8 = 8;
    DAT_14cb2f2bc = 0;
    _DAT_14cb2f2a0 = &LAB_14804d820;
    FUN_145f6edd2();
    FUN_1407e00cc(&DAT_14cb2f258);
  }
  return &DAT_14cb2f258;
}



// FUNCTION 145f6edd2 FUN_145f6edd2 body=123 status=ok
// SIG undefined FUN_145f6edd2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f6edd2(void)

{
  _DAT_14cb356c0 = L"BASE";
  DAT_14cb356ea = 4;
  _DAT_14cb356c8 = FUN_140b35ae4();
  _DAT_14cb356d0 = DAT_14cb2f268;
  _DAT_14cb356d8 = &LAB_14682652b;
  DAT_14cb2f268 = &DAT_14cb356c0;
  DAT_14cb2f2bd = DAT_14cb2f2bd + '\x01';
  _DAT_14cb356e0 = 0x100000000;
  if (*(char *)(_DAT_14cb356c8 + 100) != '\0') {
    DAT_14cb2f2be = DAT_14cb2f2be + '\x01';
  }
  return;
}



// FUNCTION 145f6ee4e FUN_145f6ee4e body=226 status=ok
// SIG undefined FUN_145f6ee4e(void)

longlong * FUN_145f6ee4e(longlong *param_1)

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
  pcVar13 = FUN_146461f8a;
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



// FUNCTION 145f6ef32 FUN_145f6ef32 body=136 status=ok
// SIG undefined FUN_145f6ef32(void)

code * FUN_145f6ef32(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TangentsAndDistances";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x108000000ca;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 7;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f6efba;
}



// FUNCTION 145f6efba FUN_145f6efba body=138 status=ok
// SIG undefined FUN_145f6efba(void)

code * FUN_145f6efba(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SortedIndices";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint32>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000000c9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145dd9de8;
}



// FUNCTION 145f6f044 FUN_145f6f044 body=144 status=ok
// SIG undefined FUN_145f6f044(void)

code * FUN_145f6f044(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145dd9e78();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"UV0Settings";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FNiagaraRibbonUVSettingsParams";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xa0000000c7;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14646209a;
}



// FUNCTION 145f6f0d4 FUN_145f6f0d4 body=292 status=ok
// SIG undefined FUN_145f6f0d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f6f0d4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb53288) {
    FUN_144b3d300(&DAT_14cb53288);
    if (DAT_14cb53288 == -1) {
      FUN_145f6f342();
      FUN_145f6f1f8();
      FUN_140db5666(&DAT_14cb531e0,0,&DAT_14cb53178,L"FXeSSVelocityFlattenCS",
                    L"/Plugin/XeSS/Private/FlattenVelocity.usf",L"MainCS",5,2,FUN_1485f9c6c,
                    FUN_1485f9c0c,&LAB_1485f9bf4,&LAB_1485f9bf0,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14cb533d0);
      _DAT_14cb531e0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143c1b1b0);
      _Init_thread_footer(&DAT_14cb53288);
    }
  }
  return &DAT_14cb531e0;
}



// FUNCTION 145f6f1f8 FUN_145f6f1f8 body=205 status=ok
// SIG undefined FUN_145f6f1f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f6f1f8(void)

{
  if ((DAT_14cb531df & 2) == 0) {
    DAT_14cb531df = DAT_14cb531df | 2;
    _DAT_14cb53180 = L"FXeSSVelocityFlattenCS";
    _DAT_14cb53198 = FUN_146826540;
    _DAT_14cb531a0 = FUN_146825d77;
    _DAT_14cb531a8 = FUN_146825fd6;
    _DAT_14cb531b0 = FUN_1407e02ea;
    _DAT_14cb531b8 = FUN_146826273;
    _DAT_14cb53190 = FUN_1485f9bc2;
    _DAT_14cb531d0 = 0xffffffff000000e0;
    _DAT_14cb531d8 = 8;
    DAT_14cb531dc = 0;
    _DAT_14cb531c0 = &LAB_1485f9bec;
    FUN_145f6f2c6();
    FUN_1407e00cc(&DAT_14cb53178);
    return;
  }
  return;
}



// FUNCTION 145f6f2c6 FUN_145f6f2c6 body=123 status=ok
// SIG undefined FUN_145f6f2c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f6f2c6(void)

{
  _DAT_14cb534e0 = L"BASE";
  DAT_14cb5350a = 4;
  _DAT_14cb534e8 = FUN_140b35ae4();
  _DAT_14cb534f0 = DAT_14cb53188;
  _DAT_14cb534f8 = &LAB_14682652b;
  DAT_14cb53188 = &DAT_14cb534e0;
  DAT_14cb531dd = DAT_14cb531dd + '\x01';
  _DAT_14cb53500 = 0x100000000;
  if (*(char *)(_DAT_14cb534e8 + 100) != '\0') {
    DAT_14cb531de = DAT_14cb531de + '\x01';
  }
  return;
}



// FUNCTION 145f6f342 FUN_145f6f342 body=261 status=ok
// SIG undefined FUN_145f6f342(void)

void FUN_145f6f342(void)

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
              0x110) < DAT_14cb53450) {
    FUN_144b3d300(&DAT_14cb53450);
    if (DAT_14cb53450 == -1) {
      FUN_145f6f448(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x70;
      local_58 = 0x2d;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb533d0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143c1bd81);
      _Init_thread_footer(&DAT_14cb53450);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f6f448 FUN_145f6f448 body=226 status=ok
// SIG undefined FUN_145f6f448(void)

longlong * FUN_145f6f448(longlong *param_1)

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
  pcVar13 = FUN_1464aa74e;
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



// FUNCTION 145f6f52c FUN_145f6f52c body=138 status=ok
// SIG undefined FUN_145f6f52c(void)

code * FUN_145f6f52c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TemporalJitterPixels";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6000000039;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1485f9e30;
}



// FUNCTION 145f6f5b6 FUN_145f6f5b6 body=138 status=ok
// SIG undefined FUN_145f6f5b6(void)

code * FUN_145f6f5b6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GBufferVelocityTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000032;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1485f9f44;
}



// FUNCTION 145f6f640 FUN_145f6f640 body=142 status=ok
// SIG undefined FUN_145f6f640(void)

code * FUN_145f6f640(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x3000000034;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145f6f5b6;
}



// FUNCTION 145f6f6ce FUN_145f6f6ce body=292 status=ok
// SIG undefined FUN_145f6f6ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f6f6ce(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf8c70) {
    FUN_144b3d300(&DAT_14cbf8c70);
    if (DAT_14cbf8c70 == -1) {
      FUN_145f6f93c();
      FUN_145f6f7f2();
      FUN_140db5666(&DAT_14cbf8bc8,0,&DAT_14cbf8b60,L"FHairDebugPrintMemoryCS",
                    L"/Engine/Private/HairStrands/HairStrandsDebug.usf",L"MainCS",5,1,FUN_149083dc6,
                    FUN_149083d66,FUN_14667ac86,&LAB_149083d62,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14cbf9048);
      _DAT_14cbf8bc8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_144421c8e);
      _Init_thread_footer(&DAT_14cbf8c70);
    }
  }
  return &DAT_14cbf8bc8;
}



// FUNCTION 145f6f7f2 FUN_145f6f7f2 body=205 status=ok
// SIG undefined FUN_145f6f7f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f6f7f2(void)

{
  if ((DAT_14cbf8bc7 & 2) == 0) {
    DAT_14cbf8bc7 = DAT_14cbf8bc7 | 2;
    _DAT_14cbf8b68 = L"FHairDebugPrintMemoryCS";
    _DAT_14cbf8b80 = FUN_146826540;
    _DAT_14cbf8b88 = FUN_146825d77;
    _DAT_14cbf8b90 = FUN_146825fd6;
    _DAT_14cbf8b98 = FUN_1407e02ea;
    _DAT_14cbf8ba0 = FUN_146826273;
    _DAT_14cbf8b78 = FUN_149083d34;
    _DAT_14cbf8bb8 = 0xffffffff000000e0;
    _DAT_14cbf8bc0 = 8;
    DAT_14cbf8bc4 = 0;
    _DAT_14cbf8ba8 = &LAB_149083d5e;
    FUN_145f6f8c0();
    FUN_1407e00cc(&DAT_14cbf8b60);
    return;
  }
  return;
}



// FUNCTION 145f6f8c0 FUN_145f6f8c0 body=123 status=ok
// SIG undefined FUN_145f6f8c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f6f8c0(void)

{
  _DAT_14cbf9238 = L"BASE";
  DAT_14cbf9262 = 4;
  _DAT_14cbf9240 = FUN_140b35ae4();
  _DAT_14cbf9248 = DAT_14cbf8b70;
  _DAT_14cbf9250 = &LAB_14682652b;
  DAT_14cbf8b70 = &DAT_14cbf9238;
  DAT_14cbf8bc5 = DAT_14cbf8bc5 + '\x01';
  _DAT_14cbf9258 = 0x100000000;
  if (*(char *)(_DAT_14cbf9240 + 100) != '\0') {
    DAT_14cbf8bc6 = DAT_14cbf8bc6 + '\x01';
  }
  return;
}



// FUNCTION 145f6f93c FUN_145f6f93c body=261 status=ok
// SIG undefined FUN_145f6f93c(void)

void FUN_145f6f93c(void)

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
              0x110) < DAT_14cbf90c8) {
    FUN_144b3d300(&DAT_14cbf90c8);
    if (DAT_14cbf90c8 == -1) {
      FUN_145f6fa42(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xb0;
      local_58 = 0x3d5;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cbf9048,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1444275ee);
      _Init_thread_footer(&DAT_14cbf90c8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f6fa42 FUN_145f6fa42 body=226 status=ok
// SIG undefined FUN_145f6fa42(void)

longlong * FUN_145f6fa42(longlong *param_1)

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
  pcVar13 = FUN_14667b746;
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



// FUNCTION 145f6fb26 FUN_145f6fb26 body=138 status=ok
// SIG undefined FUN_145f6fb26(void)

code * FUN_145f6fb26(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GroomCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000003d7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14908770c;
}



// FUNCTION 145f6fbb0 FUN_145f6fbb0 body=138 status=ok
// SIG undefined FUN_145f6fbb0(void)

code * FUN_145f6fbb0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ComponentBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x70000003dc;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f6fc3a;
}



// FUNCTION 145f6fc3a FUN_145f6fc3a body=142 status=ok
// SIG undefined FUN_145f6fc3a(void)

code * FUN_145f6fc3a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145c5dd1e();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"BindingNames";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"ShaderPrint::FStrings::FShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x50000003db;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14667b7d4;
}



// FUNCTION 145f6fcc8 FUN_145f6fcc8 body=290 status=ok
// SIG undefined FUN_145f6fcc8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f6fcc8(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb33048) {
    FUN_144b3d300(&DAT_14cb33048);
    if (DAT_14cb33048 == -1) {
      uVar1 = FUN_145f6ff34();
      FUN_145f6fdea();
      FUN_140db5666(&DAT_14cb32fa0,0,&DAT_14cb32f38,L"FSimulationShaderDefaultCS",
                    L"/Plugin/FX/Niagara/Private/Stateless/NiagaraStatelessSimulationDefault.usf",
                    L"StatelessMain",5,1,FUN_14804eb6e,FUN_14804eb14,&LAB_14804eb10,&LAB_14804eb0c,
                    &LAB_14712ac0c,&LAB_14712ac08,0xe0,uVar1);
      _DAT_14cb32fa0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1438fb62e);
      _Init_thread_footer(&DAT_14cb33048);
    }
  }
  return &DAT_14cb32fa0;
}



// FUNCTION 145f6fdea FUN_145f6fdea body=205 status=ok
// SIG undefined FUN_145f6fdea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f6fdea(void)

{
  if ((DAT_14cb32f9f & 2) == 0) {
    DAT_14cb32f9f = DAT_14cb32f9f | 2;
    _DAT_14cb32f40 = L"FSimulationShaderDefaultCS";
    _DAT_14cb32f58 = FUN_146826540;
    _DAT_14cb32f60 = FUN_146825d77;
    _DAT_14cb32f68 = FUN_146825fd6;
    _DAT_14cb32f70 = FUN_1407e02ea;
    _DAT_14cb32f78 = FUN_146826273;
    _DAT_14cb32f50 = FUN_14804eade;
    _DAT_14cb32f90 = 0xffffffff000000e0;
    _DAT_14cb32f98 = 8;
    DAT_14cb32f9c = 0;
    _DAT_14cb32f80 = &LAB_14804eb08;
    FUN_145f6feb8();
    FUN_1407e00cc(&DAT_14cb32f38);
    return;
  }
  return;
}



// FUNCTION 145f6feb8 FUN_145f6feb8 body=123 status=ok
// SIG undefined FUN_145f6feb8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f6feb8(void)

{
  _DAT_14cb35b28 = L"BASE";
  DAT_14cb35b52 = 4;
  _DAT_14cb35b30 = FUN_140b35ae4();
  _DAT_14cb35b38 = DAT_14cb32f48;
  _DAT_14cb35b40 = &LAB_14682652b;
  DAT_14cb32f48 = &DAT_14cb35b28;
  DAT_14cb32f9d = DAT_14cb32f9d + '\x01';
  _DAT_14cb35b48 = 0x100000000;
  if (*(char *)(_DAT_14cb35b30 + 100) != '\0') {
    DAT_14cb32f9e = DAT_14cb32f9e + '\x01';
  }
  return;
}



// FUNCTION 145f6ff34 FUN_145f6ff34 body=268 status=ok
// SIG undefined FUN_145f6ff34(void)

undefined * FUN_145f6ff34(void)

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
              0x110) < DAT_14cb34768) {
    FUN_144b3d300(&DAT_14cb34768);
    if (DAT_14cb34768 == -1) {
      FUN_1415a0e4e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x530;
      local_58 = 0x19;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb346e8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1438fb894);
      _Init_thread_footer(&DAT_14cb34768);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cb346e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f70042 FUN_145f70042 body=138 status=ok
// SIG undefined FUN_145f70042(void)

code * FUN_145f70042(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Permutation_SpriteFacingComponent";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4f40000003c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148055af8;
}



// FUNCTION 145f700cc FUN_145f700cc body=138 status=ok
// SIG undefined FUN_145f700cc(void)

code * FUN_145f700cc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Permutation_ScaleComponent";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4ec0000003a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148055b82;
}



// FUNCTION 145f70156 FUN_145f70156 body=138 status=ok
// SIG undefined FUN_145f70156(void)

code * FUN_145f70156(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Permutation_PreviousCameraOffsetComponent";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x50c00000042;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148055846;
}



// FUNCTION 145f701e0 FUN_145f701e0 body=292 status=ok
// SIG undefined FUN_145f701e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f701e0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b6930) {
    FUN_144b3d300(&DAT_14c9b6930);
    if (DAT_14c9b6930 == -1) {
      FUN_145f7044e();
      FUN_145f70304();
      FUN_140db5666(&DAT_14c9b6888,0,&DAT_14c9b6820,L"FCapsuleShadowingUpsamplePS",
                    L"/Engine/Private/CapsuleShadowShaders.usf",L"CapsuleShadowingUpsamplePS",3,4,
                    FUN_147134550,FUN_1471344f0,&LAB_1471344ec,&LAB_1471344e8,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9b81d0);
      _DAT_14c9b6888 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142b80e41);
      _Init_thread_footer(&DAT_14c9b6930);
    }
  }
  return &DAT_14c9b6888;
}



// FUNCTION 145f70304 FUN_145f70304 body=205 status=ok
// SIG undefined FUN_145f70304(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f70304(void)

{
  if ((DAT_14c9b6887 & 2) == 0) {
    DAT_14c9b6887 = DAT_14c9b6887 | 2;
    _DAT_14c9b6828 = L"FCapsuleShadowingUpsamplePS";
    _DAT_14c9b6840 = FUN_146826540;
    _DAT_14c9b6848 = FUN_146825d77;
    _DAT_14c9b6850 = FUN_146825fd6;
    _DAT_14c9b6858 = FUN_1407e02ea;
    _DAT_14c9b6860 = FUN_146826273;
    _DAT_14c9b6838 = FUN_1471344ba;
    _DAT_14c9b6878 = 0xffffffff000000e0;
    _DAT_14c9b6880 = 8;
    DAT_14c9b6884 = 0;
    _DAT_14c9b6868 = &LAB_1471344e4;
    FUN_145f703d2();
    FUN_1407e00cc(&DAT_14c9b6820);
    return;
  }
  return;
}



// FUNCTION 145f703d2 FUN_145f703d2 body=123 status=ok
// SIG undefined FUN_145f703d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f703d2(void)

{
  _DAT_14c9bff40 = L"BASE";
  DAT_14c9bff6a = 4;
  _DAT_14c9bff48 = FUN_140b35ae4();
  _DAT_14c9bff50 = DAT_14c9b6830;
  _DAT_14c9bff58 = &LAB_14682652b;
  DAT_14c9b6830 = &DAT_14c9bff40;
  DAT_14c9b6885 = DAT_14c9b6885 + '\x01';
  _DAT_14c9bff60 = 0x100000000;
  if (*(char *)(_DAT_14c9bff48 + 100) != '\0') {
    DAT_14c9b6886 = DAT_14c9b6886 + '\x01';
  }
  return;
}



// FUNCTION 145f7044e FUN_145f7044e body=261 status=ok
// SIG undefined FUN_145f7044e(void)

void FUN_145f7044e(void)

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
              0x110) < DAT_14c9b8250) {
    FUN_144b3d300(&DAT_14c9b8250);
    if (DAT_14c9b8250 == -1) {
      FUN_145f70554(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0x141;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9b81d0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142b8f6da);
      _Init_thread_footer(&DAT_14c9b8250);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f70554 FUN_145f70554 body=226 status=ok
// SIG undefined FUN_145f70554(void)

longlong * FUN_145f70554(longlong *param_1)

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
  pcVar13 = FUN_1462b8120;
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



// FUNCTION 145f70638 FUN_145f70638 body=138 status=ok
// SIG undefined FUN_145f70638(void)

code * FUN_145f70638(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ScissorRectMinAndSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000146;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462b81a8;
}



// FUNCTION 145f706c2 FUN_145f706c2 body=138 status=ok
// SIG undefined FUN_145f706c2(void)

code * FUN_145f706c2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutputtingToLightAttenuation";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4800000148;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14713973e;
}



// FUNCTION 145f7074c FUN_145f7074c body=144 status=ok
// SIG undefined FUN_145f7074c(void)

code * FUN_145f7074c(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1000000143;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462b8230;
}



// FUNCTION 145f707dc FUN_145f707dc body=292 status=ok
// SIG undefined FUN_145f707dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f707dc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c13d0) {
    FUN_144b3d300(&DAT_14c9c13d0);
    if (DAT_14c9c13d0 == -1) {
      FUN_145f70a4a();
      FUN_145f70900();
      FUN_140db5666(&DAT_14c9c1328,0,&DAT_14c9c12c0,L"TPostProcessEdgeDetectionCSGather",
                    L"/Engine/Private/PostProcessEdgeDetectionCS.usf",L"MainEdgeDetectCS",5,0x50,
                    FUN_147144742,FUN_1471446e2,&LAB_142ba19dc,&LAB_142ba19d8,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9c3798);
      _DAT_14c9c1328 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142ba19f3);
      _Init_thread_footer(&DAT_14c9c13d0);
    }
  }
  return &DAT_14c9c1328;
}



// FUNCTION 145f70900 FUN_145f70900 body=205 status=ok
// SIG undefined FUN_145f70900(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f70900(void)

{
  if ((DAT_14c9c1327 & 2) == 0) {
    DAT_14c9c1327 = DAT_14c9c1327 | 2;
    _DAT_14c9c12c8 = L"TPostProcessEdgeDetectionCSGather";
    _DAT_14c9c12e0 = FUN_146826540;
    _DAT_14c9c12e8 = FUN_146825d77;
    _DAT_14c9c12f0 = FUN_146825fd6;
    _DAT_14c9c12f8 = FUN_1407e02ea;
    _DAT_14c9c1300 = FUN_146826273;
    _DAT_14c9c12d8 = FUN_1471446b4;
    _DAT_14c9c1318 = 0xffffffff000000e0;
    _DAT_14c9c1320 = 8;
    DAT_14c9c1324 = 0;
    _DAT_14c9c1308 = &LAB_1471446de;
    FUN_145f709ce();
    FUN_1407e00cc(&DAT_14c9c12c0);
    return;
  }
  return;
}



// FUNCTION 145f709ce FUN_145f709ce body=123 status=ok
// SIG undefined FUN_145f709ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f709ce(void)

{
  _DAT_14c9c3f88 = L"BASE";
  DAT_14c9c3fb2 = 4;
  _DAT_14c9c3f90 = FUN_140b35ae4();
  _DAT_14c9c3f98 = DAT_14c9c12d0;
  _DAT_14c9c3fa0 = &LAB_14682652b;
  DAT_14c9c12d0 = &DAT_14c9c3f88;
  DAT_14c9c1325 = DAT_14c9c1325 + '\x01';
  _DAT_14c9c3fa8 = 0x100000000;
  if (*(char *)(_DAT_14c9c3f90 + 100) != '\0') {
    DAT_14c9c1326 = DAT_14c9c1326 + '\x01';
  }
  return;
}



// FUNCTION 145f70a4a FUN_145f70a4a body=261 status=ok
// SIG undefined FUN_145f70a4a(void)

void FUN_145f70a4a(void)

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
              0x110) < DAT_14c9c3818) {
    FUN_144b3d300(&DAT_14c9c3818);
    if (DAT_14c9c3818 == -1) {
      FUN_1415a0f32(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FComputeShaderGatherParameters";
      local_38 = 0;
      local_50 = 0x150;
      local_58 = 0x5b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c3798,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142bc0813);
      _Init_thread_footer(&DAT_14c9c3818);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f70b50 FUN_145f70b50 body=138 status=ok
// SIG undefined FUN_145f70b50(void)

code * FUN_145f70b50(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VelocityTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float2>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1280000006d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462bbed0;
}



// FUNCTION 145f70bda FUN_145f70bda body=138 status=ok
// SIG undefined FUN_145f70bda(void)

code * FUN_145f70bda(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutEdges";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float2>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1300000006e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f70b50;
}



// FUNCTION 145f70c64 FUN_145f70c64 body=144 status=ok
// SIG undefined FUN_145f70c64(void)

code * FUN_145f70c64(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x600000005d;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462bbf58;
}



// FUNCTION 145f70cf4 FUN_145f70cf4 body=205 status=ok
// SIG undefined FUN_145f70cf4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f70cf4(void)

{
  if ((DAT_14c9c6837 & 2) == 0) {
    DAT_14c9c6837 = DAT_14c9c6837 | 2;
    _DAT_14c9c67d8 = L"FConeTraceScreenGridObjectOcclusionCS";
    _DAT_14c9c67f0 = FUN_146826540;
    _DAT_14c9c67f8 = FUN_146825d77;
    _DAT_14c9c6800 = FUN_146825fd6;
    _DAT_14c9c6808 = FUN_1407e02ea;
    _DAT_14c9c6810 = FUN_146826273;
    _DAT_14c9c67e8 = FUN_14714efe0;
    _DAT_14c9c6828 = 0xffffffff000000e0;
    _DAT_14c9c6830 = 8;
    DAT_14c9c6834 = 0;
    _DAT_14c9c6818 = &LAB_14714f00a;
    FUN_145f70dc2();
    FUN_1407e00cc(&DAT_14c9c67d0);
    return;
  }
  return;
}



// FUNCTION 145f70dc2 FUN_145f70dc2 body=123 status=ok
// SIG undefined FUN_145f70dc2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f70dc2(void)

{
  _DAT_14c9c9628 = L"BASE";
  DAT_14c9c9652 = 4;
  _DAT_14c9c9630 = FUN_140b35ae4();
  _DAT_14c9c9638 = DAT_14c9c67e0;
  _DAT_14c9c9640 = &LAB_14682652b;
  DAT_14c9c67e0 = &DAT_14c9c9628;
  DAT_14c9c6835 = DAT_14c9c6835 + '\x01';
  _DAT_14c9c9648 = 0x100000000;
  if (*(char *)(_DAT_14c9c9630 + 100) != '\0') {
    DAT_14c9c6836 = DAT_14c9c6836 + '\x01';
  }
  return;
}



// FUNCTION 145f70e3e FUN_145f70e3e body=226 status=ok
// SIG undefined FUN_145f70e3e(void)

longlong * FUN_145f70e3e(longlong *param_1)

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
  pcVar13 = FUN_1462bf99e;
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



// FUNCTION 145f70f22 FUN_145f70f22 body=138 status=ok
// SIG undefined FUN_145f70f22(void)

undefined1 * FUN_145f70f22(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x91;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_147152dd2;
}



// FUNCTION 145f70fac FUN_145f70fac body=144 status=ok
// SIG undefined FUN_145f70fac(void)

code * FUN_145f70fac(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1401ab454();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"DistanceFieldObjectBuffers";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FDistanceFieldObjectBufferParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1000000092;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145f70f22;
}



// FUNCTION 145f7103c FUN_145f7103c body=144 status=ok
// SIG undefined FUN_145f7103c(void)

code * FUN_145f7103c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145a22220();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"DistanceFieldCulledObjectBuffers";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FDistanceFieldCulledObjectBufferParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x4000000093;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145f70fac;
}



// FUNCTION 145f710cc FUN_145f710cc body=292 status=ok
// SIG undefined FUN_145f710cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f710cc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d69a8) {
    FUN_144b3d300(&DAT_14c9d69a8);
    if (DAT_14c9d69a8 == -1) {
      FUN_145f7133a();
      FUN_145f711f0();
      FUN_140db5666(&DAT_14c9d6900,0,&DAT_14c9d6898,L"FHairStrandsVoxelTransmittanceMaskCS",
                    L"/Engine/Private/HairStrands/HairStrandsDeepTransmittanceMask.usf",L"MainCS",5,
                    0x10,FUN_14717ef88,FUN_14717ef28,&LAB_141764272,&LAB_142c60d3a,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9da240);
      _DAT_14c9d6900 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c60d3d);
      _Init_thread_footer(&DAT_14c9d69a8);
    }
  }
  return &DAT_14c9d6900;
}



// FUNCTION 145f711f0 FUN_145f711f0 body=205 status=ok
// SIG undefined FUN_145f711f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f711f0(void)

{
  if ((DAT_14c9d68ff & 2) == 0) {
    DAT_14c9d68ff = DAT_14c9d68ff | 2;
    _DAT_14c9d68a0 = L"FHairStrandsVoxelTransmittanceMaskCS";
    _DAT_14c9d68b8 = FUN_146826540;
    _DAT_14c9d68c0 = FUN_146825d77;
    _DAT_14c9d68c8 = FUN_146825fd6;
    _DAT_14c9d68d0 = FUN_1407e02ea;
    _DAT_14c9d68d8 = FUN_146826273;
    _DAT_14c9d68b0 = FUN_14717eefa;
    _DAT_14c9d68f0 = 0xffffffff000000e0;
    _DAT_14c9d68f8 = 8;
    DAT_14c9d68fc = 0;
    _DAT_14c9d68e0 = &LAB_14717ef24;
    FUN_145f712be();
    FUN_1407e00cc(&DAT_14c9d6898);
    return;
  }
  return;
}



// FUNCTION 145f712be FUN_145f712be body=123 status=ok
// SIG undefined FUN_145f712be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f712be(void)

{
  _DAT_14c9db978 = L"BASE";
  DAT_14c9db9a2 = 4;
  _DAT_14c9db980 = FUN_140b35ae4();
  _DAT_14c9db988 = DAT_14c9d68a8;
  _DAT_14c9db990 = &LAB_14682652b;
  DAT_14c9d68a8 = &DAT_14c9db978;
  DAT_14c9d68fd = DAT_14c9d68fd + '\x01';
  _DAT_14c9db998 = 0x100000000;
  if (*(char *)(_DAT_14c9db980 + 100) != '\0') {
    DAT_14c9d68fe = DAT_14c9d68fe + '\x01';
  }
  return;
}



// FUNCTION 145f7133a FUN_145f7133a body=261 status=ok
// SIG undefined FUN_145f7133a(void)

void FUN_145f7133a(void)

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
              0x110) < DAT_14c9da2c0) {
    FUN_144b3d300(&DAT_14c9da2c0);
    if (DAT_14c9da2c0 == -1) {
      FUN_1415a123c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x130;
      local_58 = 0xc4;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9da240,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c707ad);
      _Init_thread_footer(&DAT_14c9da2c0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f71440 FUN_145f71440 body=138 status=ok
// SIG undefined FUN_145f71440(void)

code * FUN_145f71440(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ShadowChannelMask";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd0000000cd;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471889ac;
}



// FUNCTION 145f714ca FUN_145f714ca body=138 status=ok
// SIG undefined FUN_145f714ca(void)

code * FUN_145f714ca(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutTransmittanceMask";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf8000000d3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462cb2c8;
}



// FUNCTION 145f71554 FUN_145f71554 body=144 status=ok
// SIG undefined FUN_145f71554(void)

code * FUN_145f71554(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x60000000c6;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462cb592;
}



// FUNCTION 145f715e4 FUN_145f715e4 body=292 status=ok
// SIG undefined FUN_145f715e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f715e4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d9378) {
    FUN_144b3d300(&DAT_14c9d9378);
    if (DAT_14c9d9378 == -1) {
      FUN_145f71852();
      FUN_145f71708();
      FUN_140db5666(&DAT_14c9d92d0,0,&DAT_14c9d9268,L"FVisiblityRasterComputeCompactionCS",
                    L"/Engine/Private/HairStrands/HairStrandsVisibilityRasterCompute.usf",
                    L"CompactionCS",5,1,FUN_1471853bc,FUN_14718535c,&LAB_1462ca486,&LAB_147185358,
                    &LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9dafa8);
      _DAT_14c9d92d0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c66199);
      _Init_thread_footer(&DAT_14c9d9378);
    }
  }
  return &DAT_14c9d92d0;
}



// FUNCTION 145f71708 FUN_145f71708 body=205 status=ok
// SIG undefined FUN_145f71708(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f71708(void)

{
  if ((DAT_14c9d92cf & 2) == 0) {
    DAT_14c9d92cf = DAT_14c9d92cf | 2;
    _DAT_14c9d9270 = L"FVisiblityRasterComputeCompactionCS";
    _DAT_14c9d9288 = FUN_146826540;
    _DAT_14c9d9290 = FUN_146825d77;
    _DAT_14c9d9298 = FUN_146825fd6;
    _DAT_14c9d92a0 = FUN_1407e02ea;
    _DAT_14c9d92a8 = FUN_146826273;
    _DAT_14c9d9280 = FUN_14718532a;
    _DAT_14c9d92c0 = 0xffffffff000000e0;
    _DAT_14c9d92c8 = 8;
    DAT_14c9d92cc = 0;
    _DAT_14c9d92b0 = &LAB_147185354;
    FUN_145f717d6();
    FUN_1407e00cc(&DAT_14c9d9268);
    return;
  }
  return;
}



// FUNCTION 145f717d6 FUN_145f717d6 body=123 status=ok
// SIG undefined FUN_145f717d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f717d6(void)

{
  _DAT_14c9dc278 = L"BASE";
  DAT_14c9dc2a2 = 4;
  _DAT_14c9dc280 = FUN_140b35ae4();
  _DAT_14c9dc288 = DAT_14c9d9278;
  _DAT_14c9dc290 = &LAB_14682652b;
  DAT_14c9d9278 = &DAT_14c9dc278;
  DAT_14c9d92cd = DAT_14c9d92cd + '\x01';
  _DAT_14c9dc298 = 0x100000000;
  if (*(char *)(_DAT_14c9dc280 + 100) != '\0') {
    DAT_14c9d92ce = DAT_14c9d92ce + '\x01';
  }
  return;
}



// FUNCTION 145f71852 FUN_145f71852 body=261 status=ok
// SIG undefined FUN_145f71852(void)

void FUN_145f71852(void)

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
              0x110) < DAT_14c9db028) {
    FUN_144b3d300(&DAT_14c9db028);
    if (DAT_14c9db028 == -1) {
      FUN_145f71958(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x230;
      local_58 = 0xd09;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9dafa8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c71d75);
      _Init_thread_footer(&DAT_14c9db028);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f71958 FUN_145f71958 body=226 status=ok
// SIG undefined FUN_145f71958(void)

longlong * FUN_145f71958(longlong *param_1)

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
  pcVar13 = FUN_1462cd368;
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



// FUNCTION 145f71a3c FUN_145f71a3c body=138 status=ok
// SIG undefined FUN_145f71a3c(void)

code * FUN_145f71a3c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutCompactedVisTilePrims";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x21000000d10;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14718e754;
}



// FUNCTION 145f71ac6 FUN_145f71ac6 body=138 status=ok
// SIG undefined FUN_145f71ac6(void)

code * FUN_145f71ac6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VisTileData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"ByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1f000000d0c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f71b50;
}



// FUNCTION 145f71b50 FUN_145f71b50 body=144 status=ok
// SIG undefined FUN_145f71b50(void)

code * FUN_145f71b50(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145a992e6();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"HairInstance";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FHairStrandsInstanceParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x6000000d0b;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462cd47e;
}



// FUNCTION 145f71be0 FUN_145f71be0 body=292 status=ok
// SIG undefined FUN_145f71be0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f71be0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9dfc70) {
    FUN_144b3d300(&DAT_14c9dfc70);
    if (DAT_14c9dfc70 == -1) {
      FUN_145f71e4e();
      FUN_145f71d04();
      FUN_140db5666(&DAT_14c9dfbc8,0,&DAT_14c9dfb60,L"FRenderSingleScatteringWithPreshadingCS",
                    L"/Engine/Private/HeterogeneousVolumes/HeterogeneousVolumesPreshadingPipeline.usf"
                    ,L"RenderSingleScatteringWithPreshadingCS",5,0x100,FUN_14719f658,FUN_14719f5f8,
                    &LAB_142c9cc44,&LAB_140dc5122,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9e12e8)
      ;
      _DAT_14c9dfbc8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c9cc80);
      _Init_thread_footer(&DAT_14c9dfc70);
    }
  }
  return &DAT_14c9dfbc8;
}



// FUNCTION 145f71d04 FUN_145f71d04 body=205 status=ok
// SIG undefined FUN_145f71d04(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f71d04(void)

{
  if ((DAT_14c9dfbc7 & 2) == 0) {
    DAT_14c9dfbc7 = DAT_14c9dfbc7 | 2;
    _DAT_14c9dfb68 = L"FRenderSingleScatteringWithPreshadingCS";
    _DAT_14c9dfb80 = FUN_146826540;
    _DAT_14c9dfb88 = FUN_146825d77;
    _DAT_14c9dfb90 = FUN_146825fd6;
    _DAT_14c9dfb98 = FUN_1407e02ea;
    _DAT_14c9dfba0 = FUN_146826273;
    _DAT_14c9dfb78 = FUN_14719f5ca;
    _DAT_14c9dfbb8 = 0xffffffff000000e0;
    _DAT_14c9dfbc0 = 8;
    DAT_14c9dfbc4 = 0;
    _DAT_14c9dfba8 = &LAB_14719f5f4;
    FUN_145f71dd2();
    FUN_1407e00cc(&DAT_14c9dfb60);
    return;
  }
  return;
}



// FUNCTION 145f71dd2 FUN_145f71dd2 body=123 status=ok
// SIG undefined FUN_145f71dd2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f71dd2(void)

{
  _DAT_14c9e1c88 = L"BASE";
  DAT_14c9e1cb2 = 4;
  _DAT_14c9e1c90 = FUN_140b35ae4();
  _DAT_14c9e1c98 = DAT_14c9dfb70;
  _DAT_14c9e1ca0 = &LAB_14682652b;
  DAT_14c9dfb70 = &DAT_14c9e1c88;
  DAT_14c9dfbc5 = DAT_14c9dfbc5 + '\x01';
  _DAT_14c9e1ca8 = 0x100000000;
  if (*(char *)(_DAT_14c9e1c90 + 100) != '\0') {
    DAT_14c9dfbc6 = DAT_14c9dfbc6 + '\x01';
  }
  return;
}



// FUNCTION 145f71e4e FUN_145f71e4e body=261 status=ok
// SIG undefined FUN_145f71e4e(void)

void FUN_145f71e4e(void)

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
              0x110) < DAT_14c9e1368) {
    FUN_144b3d300(&DAT_14c9e1368);
    if (DAT_14c9e1368 == -1) {
      FUN_1415a1320(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x450;
      local_58 = 0x130;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e12e8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ca48b7);
      _Init_thread_footer(&DAT_14c9e1368);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f71f54 FUN_145f71f54 body=138 status=ok
// SIG undefined FUN_145f71f54(void)

code * FUN_145f71f54(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"StepSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40400000152;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471b0946;
}



// FUNCTION 145f71fde FUN_145f71fde body=138 status=ok
// SIG undefined FUN_145f71fde(void)

code * FUN_145f71fde(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3c00000014a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f72068;
}



// FUNCTION 145f72068 FUN_145f72068 body=144 status=ok
// SIG undefined FUN_145f72068(void)

code * FUN_145f72068(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1404d38b4();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"LumenGIVolumeStruct";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FLumenTranslucencyLightingUniforms";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x3b000000147;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462d0c5e;
}



// FUNCTION 145f720f8 FUN_145f720f8 body=292 status=ok
// SIG undefined FUN_145f720f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f720f8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f3610) {
    FUN_144b3d300(&DAT_14c9f3610);
    if (DAT_14c9f3610 == -1) {
      FUN_145f72366();
      FUN_145f7221c();
      FUN_140db5666(&DAT_14c9f3568,0,&DAT_14c9f3500,L"FVisualizeRadiosityProbesPS",
                    L"/Engine/Private/Lumen/Radiosity/LumenVisualizeRadiosityProbes.usf",
                    L"VisualizeRadiosityProbesPS",3,1,FUN_1471eddca,FUN_1471edd6a,&LAB_1462db434,
                    &LAB_1471edd66,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9f6590);
      _DAT_14c9f3568 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d3ae2b);
      _Init_thread_footer(&DAT_14c9f3610);
    }
  }
  return &DAT_14c9f3568;
}



// FUNCTION 145f7221c FUN_145f7221c body=205 status=ok
// SIG undefined FUN_145f7221c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f7221c(void)

{
  if ((DAT_14c9f3567 & 2) == 0) {
    DAT_14c9f3567 = DAT_14c9f3567 | 2;
    _DAT_14c9f3508 = L"FVisualizeRadiosityProbesPS";
    _DAT_14c9f3520 = FUN_146826540;
    _DAT_14c9f3528 = FUN_146825d77;
    _DAT_14c9f3530 = FUN_146825fd6;
    _DAT_14c9f3538 = FUN_1407e02ea;
    _DAT_14c9f3540 = FUN_146826273;
    _DAT_14c9f3518 = FUN_1471edd38;
    _DAT_14c9f3558 = 0xffffffff000000e0;
    _DAT_14c9f3560 = 8;
    DAT_14c9f3564 = 0;
    _DAT_14c9f3548 = &LAB_1471edd62;
    FUN_145f722ea();
    FUN_1407e00cc(&DAT_14c9f3500);
    return;
  }
  return;
}



// FUNCTION 145f722ea FUN_145f722ea body=123 status=ok
// SIG undefined FUN_145f722ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f722ea(void)

{
  _DAT_14c9f7b80 = L"BASE";
  DAT_14c9f7baa = 4;
  _DAT_14c9f7b88 = FUN_140b35ae4();
  _DAT_14c9f7b90 = DAT_14c9f3510;
  _DAT_14c9f7b98 = &LAB_14682652b;
  DAT_14c9f3510 = &DAT_14c9f7b80;
  DAT_14c9f3565 = DAT_14c9f3565 + '\x01';
  _DAT_14c9f7ba0 = 0x100000000;
  if (*(char *)(_DAT_14c9f7b88 + 100) != '\0') {
    DAT_14c9f3566 = DAT_14c9f3566 + '\x01';
  }
  return;
}



// FUNCTION 145f72366 FUN_145f72366 body=261 status=ok
// SIG undefined FUN_145f72366(void)

void FUN_145f72366(void)

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
              0x110) < DAT_14c9f6610) {
    FUN_144b3d300(&DAT_14c9f6610);
    if (DAT_14c9f6610 == -1) {
      FUN_145f7246c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x48b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f6590,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d5870b);
      _Init_thread_footer(&DAT_14c9f6610);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f7246c FUN_145f7246c body=226 status=ok
// SIG undefined FUN_145f7246c(void)

longlong * FUN_145f7246c(longlong *param_1)

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
  pcVar13 = FUN_1462dd20e;
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



// FUNCTION 145f72550 FUN_145f72550 body=138 status=ok
// SIG undefined FUN_145f72550(void)

code * FUN_145f72550(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RadiosityProbeSHRedAtlas";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000048e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f72664;
}



// FUNCTION 145f725da FUN_145f725da body=138 status=ok
// SIG undefined FUN_145f725da(void)

code * FUN_145f725da(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RadiosityProbeSHGreenAtlas";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x280000048f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f72550;
}



// FUNCTION 145f72664 FUN_145f72664 body=144 status=ok
// SIG undefined FUN_145f72664(void)

code * FUN_145f72664(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1449a4512();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"LumenCardScene";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FLumenCardScene";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x100000048d;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462dd296;
}



// FUNCTION 145f726f4 FUN_145f726f4 body=205 status=ok
// SIG undefined FUN_145f726f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f726f4(void)

{
  if ((DAT_14c9f4827 & 2) == 0) {
    DAT_14c9f4827 = DAT_14c9f4827 | 2;
    _DAT_14c9f47c8 = L"FReflectionTraceScreenTexturesCS";
    _DAT_14c9f47e0 = FUN_146826540;
    _DAT_14c9f47e8 = FUN_146825d77;
    _DAT_14c9f47f0 = FUN_146825fd6;
    _DAT_14c9f47f8 = FUN_1407e02ea;
    _DAT_14c9f4800 = FUN_146826273;
    _DAT_14c9f47d8 = FUN_1471efa04;
    _DAT_14c9f4818 = 0xffffffff000000e0;
    _DAT_14c9f4820 = 8;
    DAT_14c9f4824 = 0;
    _DAT_14c9f4808 = &LAB_1471efa2e;
    FUN_145f727c2();
    FUN_1407e00cc(&DAT_14c9f47c0);
    return;
  }
  return;
}



// FUNCTION 145f727c2 FUN_145f727c2 body=123 status=ok
// SIG undefined FUN_145f727c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f727c2(void)

{
  _DAT_14c9f7e48 = L"BASE";
  DAT_14c9f7e72 = 4;
  _DAT_14c9f7e50 = FUN_140b35ae4();
  _DAT_14c9f7e58 = DAT_14c9f47d0;
  _DAT_14c9f7e60 = &LAB_14682652b;
  DAT_14c9f47d0 = &DAT_14c9f7e48;
  DAT_14c9f4825 = DAT_14c9f4825 + '\x01';
  _DAT_14c9f7e68 = 0x100000000;
  if (*(char *)(_DAT_14c9f7e50 + 100) != '\0') {
    DAT_14c9f4826 = DAT_14c9f4826 + '\x01';
  }
  return;
}



// FUNCTION 145f7283e FUN_145f7283e body=226 status=ok
// SIG undefined FUN_145f7283e(void)

longlong * FUN_145f7283e(longlong *param_1)

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
  pcVar13 = FUN_1462ded82;
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



// FUNCTION 145f72922 FUN_145f72922 body=138 status=ok
// SIG undefined FUN_145f72922(void)

code * FUN_145f72922(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MinimumTracingThreadOccupancy";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1ec000000f2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471f93fc;
}



// FUNCTION 145f729ac FUN_145f729ac body=144 status=ok
// SIG undefined FUN_145f729ac(void)

code * FUN_145f729ac(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145c9c1e4();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"HZBScreenTraceParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FLumenHZBScreenTraceParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x100000000ed;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462df052;
}



// FUNCTION 145f72a3c FUN_145f72a3c body=144 status=ok
// SIG undefined FUN_145f72a3c(void)

code * FUN_145f72a3c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a81af4();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"HairStrands";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FHairStrandsViewUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x380000000f6;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462dee10;
}



// FUNCTION 145f72acc FUN_145f72acc body=292 status=ok
// SIG undefined FUN_145f72acc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f72acc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f5660) {
    FUN_144b3d300(&DAT_14c9f5660);
    if (DAT_14c9f5660 == -1) {
      FUN_145f72d3a();
      FUN_145f72bf0();
      FUN_140db5666(&DAT_14c9f55b8,0,&DAT_14c9f5550,L"FTemporalResamplingCS",
                    L"/Engine/Private/Lumen/LumenReSTIRGather.usf",L"TemporalResamplingCS",5,1,
                    FUN_1471f0824,FUN_1471f07c4,&LAB_1462db56e,&LAB_1471f07c0,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9f7580);
      _DAT_14c9f55b8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d4ae26);
      _Init_thread_footer(&DAT_14c9f5660);
    }
  }
  return &DAT_14c9f55b8;
}



// FUNCTION 145f72bf0 FUN_145f72bf0 body=205 status=ok
// SIG undefined FUN_145f72bf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f72bf0(void)

{
  if ((DAT_14c9f55b7 & 2) == 0) {
    DAT_14c9f55b7 = DAT_14c9f55b7 | 2;
    _DAT_14c9f5558 = L"FTemporalResamplingCS";
    _DAT_14c9f5570 = FUN_146826540;
    _DAT_14c9f5578 = FUN_146825d77;
    _DAT_14c9f5580 = FUN_146825fd6;
    _DAT_14c9f5588 = FUN_1407e02ea;
    _DAT_14c9f5590 = FUN_146826273;
    _DAT_14c9f5568 = FUN_1471f0792;
    _DAT_14c9f55a8 = 0xffffffff000000e0;
    _DAT_14c9f55b0 = 8;
    DAT_14c9f55b4 = 0;
    _DAT_14c9f5598 = &LAB_1471f07bc;
    FUN_145f72cbe();
    FUN_1407e00cc(&DAT_14c9f5550);
    return;
  }
  return;
}



// FUNCTION 145f72cbe FUN_145f72cbe body=123 status=ok
// SIG undefined FUN_145f72cbe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f72cbe(void)

{
  _DAT_14c9f8028 = L"BASE";
  DAT_14c9f8052 = 4;
  _DAT_14c9f8030 = FUN_140b35ae4();
  _DAT_14c9f8038 = DAT_14c9f5560;
  _DAT_14c9f8040 = &LAB_14682652b;
  DAT_14c9f5560 = &DAT_14c9f8028;
  DAT_14c9f55b5 = DAT_14c9f55b5 + '\x01';
  _DAT_14c9f8048 = 0x100000000;
  if (*(char *)(_DAT_14c9f8030 + 100) != '\0') {
    DAT_14c9f55b6 = DAT_14c9f55b6 + '\x01';
  }
  return;
}



// FUNCTION 145f72d3a FUN_145f72d3a body=261 status=ok
// SIG undefined FUN_145f72d3a(void)

void FUN_145f72d3a(void)

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
              0x110) < DAT_14c9f7600) {
    FUN_144b3d300(&DAT_14c9f7600);
    if (DAT_14c9f7600 == -1) {
      FUN_1415a162a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1e0;
      local_58 = 0x1bd;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f7580,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d59699);
      _Init_thread_footer(&DAT_14c9f7600);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f72e40 FUN_145f72e40 body=138 status=ok
// SIG undefined FUN_145f72e40(void)

code * FUN_145f72e40(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWTemporalReservoirWeights";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float3>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000001c2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471faf8a;
}



// FUNCTION 145f72eca FUN_145f72eca body=138 status=ok
// SIG undefined FUN_145f72eca(void)

code * FUN_145f72eca(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TemporalReservoirTraceHitNormal";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000001c6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471fadec;
}


