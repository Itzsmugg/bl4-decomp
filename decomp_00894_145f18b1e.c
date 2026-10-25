// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145f18b1e FUN_145f18b1e body=138 status=ok
// SIG undefined FUN_145f18b1e(void)

code * FUN_145f18b1e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MaxIndirectLightingTilesToUpdate";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1400000179;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f18a94;
}



// FUNCTION 145f18ba8 FUN_145f18ba8 body=205 status=ok
// SIG undefined FUN_145f18ba8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f18ba8(void)

{
  if ((DAT_14c9fd64f & 2) == 0) {
    DAT_14c9fd64f = DAT_14c9fd64f | 2;
    _DAT_14c9fd5f0 = L"FScreenProbeTemporalReprojectionCS";
    _DAT_14c9fd608 = FUN_146826540;
    _DAT_14c9fd610 = FUN_146825d77;
    _DAT_14c9fd618 = FUN_146825fd6;
    _DAT_14c9fd620 = FUN_1407e02ea;
    _DAT_14c9fd628 = FUN_146826273;
    _DAT_14c9fd600 = FUN_147209464;
    _DAT_14c9fd640 = 0xffffffff000000e0;
    _DAT_14c9fd648 = 8;
    DAT_14c9fd64c = 0;
    _DAT_14c9fd630 = &LAB_14720948e;
    FUN_145f18c76();
    FUN_1407e00cc(&DAT_14c9fd5e8);
    return;
  }
  return;
}



// FUNCTION 145f18c76 FUN_145f18c76 body=123 status=ok
// SIG undefined FUN_145f18c76(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f18c76(void)

{
  _DAT_14ca00738 = L"BASE";
  DAT_14ca00762 = 4;
  _DAT_14ca00740 = FUN_140b35ae4();
  _DAT_14ca00748 = DAT_14c9fd5f8;
  _DAT_14ca00750 = &LAB_14682652b;
  DAT_14c9fd5f8 = &DAT_14ca00738;
  DAT_14c9fd64d = DAT_14c9fd64d + '\x01';
  _DAT_14ca00758 = 0x100000000;
  if (*(char *)(_DAT_14ca00740 + 100) != '\0') {
    DAT_14c9fd64e = DAT_14c9fd64e + '\x01';
  }
  return;
}



// FUNCTION 145f18cf2 FUN_145f18cf2 body=138 status=ok
// SIG undefined FUN_145f18cf2(void)

code * FUN_145f18cf2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HistoryUVMinMax";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x13000000424;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147218982;
}



// FUNCTION 145f18d7c FUN_145f18d7c body=138 status=ok
// SIG undefined FUN_145f18d7c(void)

code * FUN_145f18d7c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RoughSpecularIndirectHistory";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2DArray";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd000000417;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147218ffa;
}



// FUNCTION 145f18e06 FUN_145f18e06 body=138 status=ok
// SIG undefined FUN_145f18e06(void)

code * FUN_145f18e06(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HistoryViewportMinMax";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x14000000425;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f18cf2;
}



// FUNCTION 145f18e90 FUN_145f18e90 body=292 status=ok
// SIG undefined FUN_145f18e90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f18e90(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca12b20) {
    FUN_144b3d300(&DAT_14ca12b20);
    if (DAT_14ca12b20 == -1) {
      FUN_145f190fe();
      FUN_145f18fb4();
      FUN_140db5666(&DAT_14ca12a78,0,&DAT_14ca12a10,L"FMobileCubeDownsamplePS",
                    L"/Engine/Private/ReflectionEnvironmentShaders.usf",L"DownsamplePS_Mobile",3,1,
                    FUN_14724e2ae,FUN_14724e24e,&LAB_14724e24a,&LAB_14724e246,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca16fa0);
      _DAT_14ca12a78 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142df6a5f);
      _Init_thread_footer(&DAT_14ca12b20);
    }
  }
  return &DAT_14ca12a78;
}



// FUNCTION 145f18fb4 FUN_145f18fb4 body=205 status=ok
// SIG undefined FUN_145f18fb4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f18fb4(void)

{
  if ((DAT_14ca12a77 & 2) == 0) {
    DAT_14ca12a77 = DAT_14ca12a77 | 2;
    _DAT_14ca12a18 = L"FMobileCubeDownsamplePS";
    _DAT_14ca12a30 = FUN_146826540;
    _DAT_14ca12a38 = FUN_146825d77;
    _DAT_14ca12a40 = FUN_146825fd6;
    _DAT_14ca12a48 = FUN_1407e02ea;
    _DAT_14ca12a50 = FUN_146826273;
    _DAT_14ca12a28 = FUN_14724e216;
    _DAT_14ca12a68 = 0xffffffff000000e0;
    _DAT_14ca12a70 = 8;
    DAT_14ca12a74 = 0;
    _DAT_14ca12a58 = &LAB_14724e242;
    FUN_145f19082();
    FUN_1407e00cc(&DAT_14ca12a10);
    return;
  }
  return;
}



// FUNCTION 145f19082 FUN_145f19082 body=123 status=ok
// SIG undefined FUN_145f19082(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f19082(void)

{
  _DAT_14ca18978 = L"BASE";
  DAT_14ca189a2 = 4;
  _DAT_14ca18980 = FUN_140b35ae4();
  _DAT_14ca18988 = DAT_14ca12a20;
  _DAT_14ca18990 = &LAB_14682652b;
  DAT_14ca12a20 = &DAT_14ca18978;
  DAT_14ca12a75 = DAT_14ca12a75 + '\x01';
  _DAT_14ca18998 = 0x100000000;
  if (*(char *)(_DAT_14ca18980 + 100) != '\0') {
    DAT_14ca12a76 = DAT_14ca12a76 + '\x01';
  }
  return;
}



// FUNCTION 145f190fe FUN_145f190fe body=261 status=ok
// SIG undefined FUN_145f190fe(void)

void FUN_145f190fe(void)

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
              0x110) < DAT_14ca17020) {
    FUN_144b3d300(&DAT_14ca17020);
    if (DAT_14ca17020 == -1) {
      FUN_145f19204(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x120;
      local_58 = 0x1b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca16fa0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e2702e);
      _Init_thread_footer(&DAT_14ca17020);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f19204 FUN_145f19204 body=226 status=ok
// SIG undefined FUN_145f19204(void)

longlong * FUN_145f19204(longlong *param_1)

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
  pcVar13 = FUN_1462ef840;
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



// FUNCTION 145f192e8 FUN_145f192e8 body=132 status=ok
// SIG undefined FUN_145f192e8(void)

undefined1 * FUN_145f192e8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1472550ee;
}



// FUNCTION 145f1936c FUN_145f1936c body=138 status=ok
// SIG undefined FUN_145f1936c(void)

code * FUN_145f1936c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CubeFace";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000001f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f193f6;
}



// FUNCTION 145f193f6 FUN_145f193f6 body=138 status=ok
// SIG undefined FUN_145f193f6(void)

code * FUN_145f193f6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000001e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462ef8c8;
}



// FUNCTION 145f19480 FUN_145f19480 body=205 status=ok
// SIG undefined FUN_145f19480(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f19480(void)

{
  if ((DAT_14ca13f9f & 2) == 0) {
    DAT_14ca13f9f = DAT_14ca13f9f | 2;
    _DAT_14ca13f40 = L"FEmitCustomDepthStencilPS";
    _DAT_14ca13f58 = FUN_146826540;
    _DAT_14ca13f60 = FUN_146825d77;
    _DAT_14ca13f68 = FUN_146825fd6;
    _DAT_14ca13f70 = FUN_1407e02ea;
    _DAT_14ca13f78 = FUN_146826273;
    _DAT_14ca13f50 = FUN_1472515a2;
    _DAT_14ca13f90 = 0xffffffff000000e0;
    _DAT_14ca13f98 = 8;
    DAT_14ca13f9c = 0;
    _DAT_14ca13f80 = &LAB_1472515ce;
    FUN_145f1954e();
    FUN_1407e00cc(&DAT_14ca13f38);
    return;
  }
  return;
}



// FUNCTION 145f1954e FUN_145f1954e body=123 status=ok
// SIG undefined FUN_145f1954e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f1954e(void)

{
  _DAT_14ca18db8 = L"BASE";
  DAT_14ca18de2 = 4;
  _DAT_14ca18dc0 = FUN_140b35ae4();
  _DAT_14ca18dc8 = DAT_14ca13f48;
  _DAT_14ca18dd0 = &LAB_14682652b;
  DAT_14ca13f48 = &DAT_14ca18db8;
  DAT_14ca13f9d = DAT_14ca13f9d + '\x01';
  _DAT_14ca18dd8 = 0x100000000;
  if (*(char *)(_DAT_14ca18dc0 + 100) != '\0') {
    DAT_14ca13f9e = DAT_14ca13f9e + '\x01';
  }
  return;
}



// FUNCTION 145f195ca FUN_145f195ca body=226 status=ok
// SIG undefined FUN_145f195ca(void)

longlong * FUN_145f195ca(longlong *param_1)

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
  pcVar13 = FUN_1462eff40;
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



// FUNCTION 145f196ae FUN_145f196ae body=138 status=ok
// SIG undefined FUN_145f196ae(void)

code * FUN_145f196ae(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CustomStencil";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<uint2>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x68000000d9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f197c2;
}



// FUNCTION 145f19738 FUN_145f19738 body=138 status=ok
// SIG undefined FUN_145f19738(void)

code * FUN_145f19738(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28000000d3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147255d92;
}



// FUNCTION 145f197c2 FUN_145f197c2 body=138 status=ok
// SIG undefined FUN_145f197c2(void)

code * FUN_145f197c2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CustomDepth";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x60000000d8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462effc8;
}



// FUNCTION 145f1984c FUN_145f1984c body=205 status=ok
// SIG undefined FUN_145f1984c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f1984c(void)

{
  if ((DAT_14ca14bef & 2) == 0) {
    DAT_14ca14bef = DAT_14ca14bef | 2;
    _DAT_14ca14b90 = L"FInitInstanceHierarchyArgs_CS";
    _DAT_14ca14ba8 = FUN_146826540;
    _DAT_14ca14bb0 = FUN_146825d77;
    _DAT_14ca14bb8 = FUN_146825fd6;
    _DAT_14ca14bc0 = FUN_1407e02ea;
    _DAT_14ca14bc8 = FUN_146826273;
    _DAT_14ca14ba0 = FUN_147251fca;
    _DAT_14ca14be0 = 0xffffffff000000e0;
    _DAT_14ca14be8 = 8;
    DAT_14ca14bec = 0;
    _DAT_14ca14bd0 = &LAB_147251ff6;
    FUN_145f1991a();
    FUN_1407e00cc(&DAT_14ca14b88);
    return;
  }
  return;
}



// FUNCTION 145f1991a FUN_145f1991a body=123 status=ok
// SIG undefined FUN_145f1991a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f1991a(void)

{
  _DAT_14ca190a0 = L"BASE";
  DAT_14ca190ca = 4;
  _DAT_14ca190a8 = FUN_140b35ae4();
  _DAT_14ca190b0 = DAT_14ca14b98;
  _DAT_14ca190b8 = &LAB_14682652b;
  DAT_14ca14b98 = &DAT_14ca190a0;
  DAT_14ca14bed = DAT_14ca14bed + '\x01';
  _DAT_14ca190c0 = 0x100000000;
  if (*(char *)(_DAT_14ca190a8 + 100) != '\0') {
    DAT_14ca14bee = DAT_14ca14bee + '\x01';
  }
  return;
}



// FUNCTION 145f19996 FUN_145f19996 body=226 status=ok
// SIG undefined FUN_145f19996(void)

longlong * FUN_145f19996(longlong *param_1)

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
  pcVar13 = FUN_1462f0c18;
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



// FUNCTION 145f19a7a FUN_145f19a7a body=138 status=ok
// SIG undefined FUN_145f19a7a(void)

code * FUN_145f19a7a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutQueueState";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer< FQueueState >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000314;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14725788e;
}



// FUNCTION 145f19b04 FUN_145f19b04 body=138 status=ok
// SIG undefined FUN_145f19b04(void)

code * FUN_145f19b04(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InOutTotalPrevDrawClusters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer< FUintVector2 >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000315;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f19a7a;
}



// FUNCTION 145f19b8e FUN_145f19b8e body=138 status=ok
// SIG undefined FUN_145f19b8e(void)

code * FUN_145f19b8e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutInstanceWorkArgs1";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer< uint >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000031a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14725777a;
}



// FUNCTION 145f19c18 FUN_145f19c18 body=205 status=ok
// SIG undefined FUN_145f19c18(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f19c18(void)

{
  if ((DAT_14ca1c94f & 2) == 0) {
    DAT_14ca1c94f = DAT_14ca1c94f | 2;
    _DAT_14ca1c8f0 = L"FOITSortTriangleIndex_ScanCS";
    _DAT_14ca1c908 = FUN_146826540;
    _DAT_14ca1c910 = FUN_146825d77;
    _DAT_14ca1c918 = FUN_146825fd6;
    _DAT_14ca1c920 = FUN_1407e02ea;
    _DAT_14ca1c928 = FUN_146826273;
    _DAT_14ca1c900 = FUN_147270f0a;
    _DAT_14ca1c940 = 0xffffffff000000e0;
    _DAT_14ca1c948 = 8;
    DAT_14ca1c94c = 0;
    _DAT_14ca1c930 = &LAB_147270f36;
    FUN_145f19ce6();
    FUN_1407e00cc(&DAT_14ca1c8e8);
    return;
  }
  return;
}



// FUNCTION 145f19ce6 FUN_145f19ce6 body=123 status=ok
// SIG undefined FUN_145f19ce6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f19ce6(void)

{
  _DAT_14ca246c0 = L"BASE";
  DAT_14ca246ea = 4;
  _DAT_14ca246c8 = FUN_140b35ae4();
  _DAT_14ca246d0 = DAT_14ca1c8f8;
  _DAT_14ca246d8 = &LAB_14682652b;
  DAT_14ca1c8f8 = &DAT_14ca246c0;
  DAT_14ca1c94d = DAT_14ca1c94d + '\x01';
  _DAT_14ca246e0 = 0x100000000;
  if (*(char *)(_DAT_14ca246c8 + 100) != '\0') {
    DAT_14ca1c94e = DAT_14ca1c94e + '\x01';
  }
  return;
}



// FUNCTION 145f19d62 FUN_145f19d62 body=138 status=ok
// SIG undefined FUN_145f19d62(void)

code * FUN_145f19d62(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SortType";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x13c000001bf;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f19dec;
}



// FUNCTION 145f19dec FUN_145f19dec body=138 status=ok
// SIG undefined FUN_145f19dec(void)

code * FUN_145f19dec(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x138000001be;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147278db2;
}



// FUNCTION 145f19e76 FUN_145f19e76 body=138 status=ok
// SIG undefined FUN_145f19e76(void)

code * FUN_145f19e76(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"WorldBound_Max";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x70000001b0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147279316;
}



// FUNCTION 145f19f00 FUN_145f19f00 body=292 status=ok
// SIG undefined FUN_145f19f00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f19f00(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca25718) {
    FUN_144b3d300(&DAT_14ca25718);
    if (DAT_14ca25718 == -1) {
      FUN_145f1a16e();
      FUN_145f1a024();
      FUN_140db5666(&DAT_14ca25670,0,&DAT_14ca25608,L"FGeneratePaniniUVDisplacementCS",
                    L"/Engine/Private/PaniniProjection.usf",L"MainCS",5,1,FUN_147289694,
                    FUN_147289634,&LAB_147289630,&LAB_14728962c,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca28008);
      _DAT_14ca25670 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142eb21fe);
      _Init_thread_footer(&DAT_14ca25718);
    }
  }
  return &DAT_14ca25670;
}



// FUNCTION 145f1a024 FUN_145f1a024 body=205 status=ok
// SIG undefined FUN_145f1a024(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f1a024(void)

{
  if ((DAT_14ca2566f & 2) == 0) {
    DAT_14ca2566f = DAT_14ca2566f | 2;
    _DAT_14ca25610 = L"FGeneratePaniniUVDisplacementCS";
    _DAT_14ca25628 = FUN_146826540;
    _DAT_14ca25630 = FUN_146825d77;
    _DAT_14ca25638 = FUN_146825fd6;
    _DAT_14ca25640 = FUN_1407e02ea;
    _DAT_14ca25648 = FUN_146826273;
    _DAT_14ca25620 = FUN_1472895fc;
    _DAT_14ca25660 = 0xffffffff000000e0;
    _DAT_14ca25668 = 8;
    DAT_14ca2566c = 0;
    _DAT_14ca25650 = &LAB_147289628;
    FUN_145f1a0f2();
    FUN_1407e00cc(&DAT_14ca25608);
    return;
  }
  return;
}



// FUNCTION 145f1a0f2 FUN_145f1a0f2 body=123 status=ok
// SIG undefined FUN_145f1a0f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f1a0f2(void)

{
  _DAT_14ca2bdf0 = L"BASE";
  DAT_14ca2be1a = 4;
  _DAT_14ca2bdf8 = FUN_140b35ae4();
  _DAT_14ca2be00 = DAT_14ca25618;
  _DAT_14ca2be08 = &LAB_14682652b;
  DAT_14ca25618 = &DAT_14ca2bdf0;
  DAT_14ca2566d = DAT_14ca2566d + '\x01';
  _DAT_14ca2be10 = 0x100000000;
  if (*(char *)(_DAT_14ca2bdf8 + 100) != '\0') {
    DAT_14ca2566e = DAT_14ca2566e + '\x01';
  }
  return;
}



// FUNCTION 145f1a16e FUN_145f1a16e body=261 status=ok
// SIG undefined FUN_145f1a16e(void)

void FUN_145f1a16e(void)

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
              0x110) < DAT_14ca28088) {
    FUN_144b3d300(&DAT_14ca28088);
    if (DAT_14ca28088 == -1) {
      FUN_145f1a274(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x7a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca28008,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ed6b84);
      _Init_thread_footer(&DAT_14ca28088);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f1a274 FUN_145f1a274 body=226 status=ok
// SIG undefined FUN_145f1a274(void)

longlong * FUN_145f1a274(longlong *param_1)

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
  pcVar13 = FUN_1462f8766;
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



// FUNCTION 145f1a358 FUN_145f1a358 body=132 status=ok
// SIG undefined FUN_145f1a358(void)

undefined1 * FUN_145f1a358(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ScreenSpaceToPaniniFactor";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14728cbe4;
}



// FUNCTION 145f1a3dc FUN_145f1a3dc body=138 status=ok
// SIG undefined FUN_145f1a3dc(void)

code * FUN_145f1a3dc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DistortingDisplacementOutput";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000081;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14728ca46;
}



// FUNCTION 145f1a466 FUN_145f1a466 body=138 status=ok
// SIG undefined FUN_145f1a466(void)

code * FUN_145f1a466(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PaniniToScreenSpaceFactor";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000007c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f1a358;
}



// FUNCTION 145f1a4f0 FUN_145f1a4f0 body=292 status=ok
// SIG undefined FUN_145f1a4f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f1a4f0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca30280) {
    FUN_144b3d300(&DAT_14ca30280);
    if (DAT_14ca30280 == -1) {
      FUN_145f1a75e();
      FUN_145f1a614();
      FUN_140db5666(&DAT_14ca301d8,0,&DAT_14ca30170,L"FSubsurfaceSRVResolvePS",
                    L"/Engine/Private/PostProcessSubsurface.usf",L"SubsurfaceViewportCopyPS",3,1,
                    FUN_147299dbc,FUN_147299d5c,&LAB_147299d44,&LAB_147299d40,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca33cd8);
      _DAT_14ca301d8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f060c7);
      _Init_thread_footer(&DAT_14ca30280);
    }
  }
  return &DAT_14ca301d8;
}



// FUNCTION 145f1a614 FUN_145f1a614 body=205 status=ok
// SIG undefined FUN_145f1a614(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f1a614(void)

{
  if ((DAT_14ca301d7 & 2) == 0) {
    DAT_14ca301d7 = DAT_14ca301d7 | 2;
    _DAT_14ca30178 = L"FSubsurfaceSRVResolvePS";
    _DAT_14ca30190 = FUN_146826540;
    _DAT_14ca30198 = FUN_146825d77;
    _DAT_14ca301a0 = FUN_146825fd6;
    _DAT_14ca301a8 = FUN_1407e02ea;
    _DAT_14ca301b0 = FUN_146826273;
    _DAT_14ca30188 = FUN_147299d10;
    _DAT_14ca301c8 = 0xffffffff000000e0;
    _DAT_14ca301d0 = 8;
    DAT_14ca301d4 = 0;
    _DAT_14ca301b8 = &LAB_147299d3c;
    FUN_145f1a6e2();
    FUN_1407e00cc(&DAT_14ca30170);
    return;
  }
  return;
}



// FUNCTION 145f1a6e2 FUN_145f1a6e2 body=123 status=ok
// SIG undefined FUN_145f1a6e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f1a6e2(void)

{
  _DAT_14ca34cb0 = L"BASE";
  DAT_14ca34cda = 4;
  _DAT_14ca34cb8 = FUN_140b35ae4();
  _DAT_14ca34cc0 = DAT_14ca30180;
  _DAT_14ca34cc8 = &LAB_14682652b;
  DAT_14ca30180 = &DAT_14ca34cb0;
  DAT_14ca301d5 = DAT_14ca301d5 + '\x01';
  _DAT_14ca34cd0 = 0x100000000;
  if (*(char *)(_DAT_14ca34cb8 + 100) != '\0') {
    DAT_14ca301d6 = DAT_14ca301d6 + '\x01';
  }
  return;
}



// FUNCTION 145f1a75e FUN_145f1a75e body=261 status=ok
// SIG undefined FUN_145f1a75e(void)

void FUN_145f1a75e(void)

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
              0x110) < DAT_14ca33d58) {
    FUN_144b3d300(&DAT_14ca33d58);
    if (DAT_14ca33d58 == -1) {
      FUN_145f1a864(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x120;
      local_58 = 0x2f3;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca33cd8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f140c9);
      _Init_thread_footer(&DAT_14ca33d58);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f1a864 FUN_145f1a864 body=226 status=ok
// SIG undefined FUN_145f1a864(void)

longlong * FUN_145f1a864(longlong *param_1)

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
  pcVar13 = FUN_1462fe6e6;
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



// FUNCTION 145f1a948 FUN_145f1a948 body=132 status=ok
// SIG undefined FUN_145f1a948(void)

undefined1 * FUN_145f1a948(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2f4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1472a0ad6;
}



// FUNCTION 145f1a9cc FUN_145f1a9cc body=138 status=ok
// SIG undefined FUN_145f1a9cc(void)

code * FUN_145f1a9cc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000002f6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f1aa56;
}



// FUNCTION 145f1aa56 FUN_145f1aa56 body=138 status=ok
// SIG undefined FUN_145f1aa56(void)

code * FUN_145f1aa56(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"IndirectDispatchArgsBuffer";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000002f5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xf;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f1a948;
}



// FUNCTION 145f1aae0 FUN_145f1aae0 body=292 status=ok
// SIG undefined FUN_145f1aae0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f1aae0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca3a180) {
    FUN_144b3d300(&DAT_14ca3a180);
    if (DAT_14ca3a180 == -1) {
      FUN_145f1ad4e();
      FUN_145f1ac04();
      FUN_140db5666(&DAT_14ca3a0d8,0,&DAT_14ca3a070,L"FRayTracingBuildDecalGridCS",
                    L"/Engine/Private/RayTracing/RayTracingBuildDecalGrid.usf",L"BuildDecalGridCS",5
                    ,1,FUN_1472b2486,FUN_1472b2426,&LAB_146300e2e,&LAB_1472b2422,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca3eeb8);
      _DAT_14ca3a0d8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f66b89);
      _Init_thread_footer(&DAT_14ca3a180);
    }
  }
  return &DAT_14ca3a0d8;
}



// FUNCTION 145f1ac04 FUN_145f1ac04 body=205 status=ok
// SIG undefined FUN_145f1ac04(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f1ac04(void)

{
  if ((DAT_14ca3a0d7 & 2) == 0) {
    DAT_14ca3a0d7 = DAT_14ca3a0d7 | 2;
    _DAT_14ca3a078 = L"FRayTracingBuildDecalGridCS";
    _DAT_14ca3a090 = FUN_146826540;
    _DAT_14ca3a098 = FUN_146825d77;
    _DAT_14ca3a0a0 = FUN_146825fd6;
    _DAT_14ca3a0a8 = FUN_1407e02ea;
    _DAT_14ca3a0b0 = FUN_146826273;
    _DAT_14ca3a088 = FUN_1472b23f4;
    _DAT_14ca3a0c8 = 0xffffffff000000e0;
    _DAT_14ca3a0d0 = 8;
    DAT_14ca3a0d4 = 0;
    _DAT_14ca3a0b8 = &LAB_1472b241e;
    FUN_145f1acd2();
    FUN_1407e00cc(&DAT_14ca3a070);
    return;
  }
  return;
}



// FUNCTION 145f1acd2 FUN_145f1acd2 body=123 status=ok
// SIG undefined FUN_145f1acd2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f1acd2(void)

{
  _DAT_14ca3f770 = L"BASE";
  DAT_14ca3f79a = 4;
  _DAT_14ca3f778 = FUN_140b35ae4();
  _DAT_14ca3f780 = DAT_14ca3a080;
  _DAT_14ca3f788 = &LAB_14682652b;
  DAT_14ca3a080 = &DAT_14ca3f770;
  DAT_14ca3a0d5 = DAT_14ca3a0d5 + '\x01';
  _DAT_14ca3f790 = 0x100000000;
  if (*(char *)(_DAT_14ca3f778 + 100) != '\0') {
    DAT_14ca3a0d6 = DAT_14ca3a0d6 + '\x01';
  }
  return;
}



// FUNCTION 145f1ad4e FUN_145f1ad4e body=261 status=ok
// SIG undefined FUN_145f1ad4e(void)

void FUN_145f1ad4e(void)

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
              0x110) < DAT_14ca3ef38) {
    FUN_144b3d300(&DAT_14ca3ef38);
    if (DAT_14ca3ef38 == -1) {
      FUN_145f1ae54(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0x87;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca3eeb8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f6f756);
      _Init_thread_footer(&DAT_14ca3ef38);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f1ae54 FUN_145f1ae54 body=226 status=ok
// SIG undefined FUN_145f1ae54(void)

longlong * FUN_145f1ae54(longlong *param_1)

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
  pcVar13 = FUN_1463020c6;
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



// FUNCTION 145f1af38 FUN_145f1af38 body=132 status=ok
// SIG undefined FUN_145f1af38(void)

undefined1 * FUN_145f1af38(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SceneDecals";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<FRayTracingDecal>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x88;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1472bd424;
}



// FUNCTION 145f1afbc FUN_145f1afbc body=138 status=ok
// SIG undefined FUN_145f1afbc(void)

code * FUN_145f1afbc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SceneDecalsTranslatedBoundMax";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000008b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472bd39a;
}



// FUNCTION 145f1b046 FUN_145f1b046 body=138 status=ok
// SIG undefined FUN_145f1b046(void)

code * FUN_145f1b046(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SceneDecalCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000089;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f1af38;
}



// FUNCTION 145f1b0d0 FUN_145f1b0d0 body=292 status=ok
// SIG undefined FUN_145f1b0d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f1b0d0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca41890) {
    FUN_144b3d300(&DAT_14ca41890);
    if (DAT_14ca41890 == -1) {
      FUN_145f1b33e();
      FUN_145f1b1f4();
      FUN_140db5666(&DAT_14ca417e8,0,&DAT_14ca41780,L"FRectAtlasAddTexturePS",
                    L"/Engine/Private/RectLightAtlas.usf",L"MainPS",3,1,FUN_1472c4f80,FUN_1472c4f20,
                    &LAB_1472c4f1c,&LAB_1472c4f18,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca43b28)
      ;
      _DAT_14ca417e8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f80507);
      _Init_thread_footer(&DAT_14ca41890);
    }
  }
  return &DAT_14ca417e8;
}



// FUNCTION 145f1b1f4 FUN_145f1b1f4 body=205 status=ok
// SIG undefined FUN_145f1b1f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f1b1f4(void)

{
  if ((DAT_14ca417e7 & 2) == 0) {
    DAT_14ca417e7 = DAT_14ca417e7 | 2;
    _DAT_14ca41788 = L"FRectAtlasAddTexturePS";
    _DAT_14ca417a0 = FUN_146826540;
    _DAT_14ca417a8 = FUN_146825d77;
    _DAT_14ca417b0 = FUN_146825fd6;
    _DAT_14ca417b8 = FUN_1407e02ea;
    _DAT_14ca417c0 = FUN_146826273;
    _DAT_14ca41798 = FUN_1472c4eea;
    _DAT_14ca417d8 = 0xffffffff000000e0;
    _DAT_14ca417e0 = 8;
    DAT_14ca417e4 = 0;
    _DAT_14ca417c8 = &LAB_1472c4f14;
    FUN_145f1b2c2();
    FUN_1407e00cc(&DAT_14ca41780);
    return;
  }
  return;
}



// FUNCTION 145f1b2c2 FUN_145f1b2c2 body=123 status=ok
// SIG undefined FUN_145f1b2c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f1b2c2(void)

{
  _DAT_14ca44760 = L"BASE";
  DAT_14ca4478a = 4;
  _DAT_14ca44768 = FUN_140b35ae4();
  _DAT_14ca44770 = DAT_14ca41790;
  _DAT_14ca44778 = &LAB_14682652b;
  DAT_14ca41790 = &DAT_14ca44760;
  DAT_14ca417e5 = DAT_14ca417e5 + '\x01';
  _DAT_14ca44780 = 0x100000000;
  if (*(char *)(_DAT_14ca44768 + 100) != '\0') {
    DAT_14ca417e6 = DAT_14ca417e6 + '\x01';
  }
  return;
}



// FUNCTION 145f1b33e FUN_145f1b33e body=261 status=ok
// SIG undefined FUN_145f1b33e(void)

void FUN_145f1b33e(void)

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
              0x110) < DAT_14ca43ba8) {
    FUN_144b3d300(&DAT_14ca43ba8);
    if (DAT_14ca43ba8 == -1) {
      FUN_141597a86(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1b0;
      local_58 = 0x1bf;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca43b28,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142fafd7f);
      _Init_thread_footer(&DAT_14ca43ba8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f1b444 FUN_145f1b444 body=132 status=ok
// SIG undefined FUN_145f1b444(void)

undefined1 * FUN_145f1b444(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InTextureMIPBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1472cc7a4;
}



// FUNCTION 145f1b4c8 FUN_145f1b4c8 body=138 status=ok
// SIG undefined FUN_145f1b4c8(void)

code * FUN_145f1b4c8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InTexture5";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000001c6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472cc4f2;
}



// FUNCTION 145f1b552 FUN_145f1b552 body=138 status=ok
// SIG undefined FUN_145f1b552(void)

code * FUN_145f1b552(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InTexture6";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x38000001c7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f1b4c8;
}



// FUNCTION 145f1b5dc FUN_145f1b5dc body=205 status=ok
// SIG undefined FUN_145f1b5dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f1b5dc(void)

{
  if ((DAT_14ca42b1f & 2) == 0) {
    DAT_14ca42b1f = DAT_14ca42b1f | 2;
    _DAT_14ca42ac0 = L"FDownsampleCubeFaceCS";
    _DAT_14ca42ad8 = FUN_146826540;
    _DAT_14ca42ae0 = FUN_146825d77;
    _DAT_14ca42ae8 = FUN_146825fd6;
    _DAT_14ca42af0 = FUN_1407e02ea;
    _DAT_14ca42af8 = FUN_146826273;
    _DAT_14ca42ad0 = FUN_1472c7124;
    _DAT_14ca42b10 = 0xffffffff000000e0;
    _DAT_14ca42b18 = 8;
    DAT_14ca42b1c = 0;
    _DAT_14ca42b00 = &LAB_1472c714e;
    FUN_145f1b6aa();
    FUN_1407e00cc(&DAT_14ca42ab8);
    return;
  }
  return;
}



// FUNCTION 145f1b6aa FUN_145f1b6aa body=123 status=ok
// SIG undefined FUN_145f1b6aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f1b6aa(void)

{
  _DAT_14ca44a60 = L"BASE";
  DAT_14ca44a8a = 4;
  _DAT_14ca44a68 = FUN_140b35ae4();
  _DAT_14ca44a70 = DAT_14ca42ac8;
  _DAT_14ca44a78 = &LAB_14682652b;
  DAT_14ca42ac8 = &DAT_14ca44a60;
  DAT_14ca42b1d = DAT_14ca42b1d + '\x01';
  _DAT_14ca44a80 = 0x100000000;
  if (*(char *)(_DAT_14ca44a68 + 100) != '\0') {
    DAT_14ca42b1e = DAT_14ca42b1e + '\x01';
  }
  return;
}



// FUNCTION 145f1b726 FUN_145f1b726 body=226 status=ok
// SIG undefined FUN_145f1b726(void)

longlong * FUN_145f1b726(longlong *param_1)

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
  pcVar13 = FUN_1463046f0;
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



// FUNCTION 145f1b80a FUN_145f1b80a body=138 status=ok
// SIG undefined FUN_145f1b80a(void)

code * FUN_145f1b80a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ValidDispatchCoord";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000053;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146304778;
}



// FUNCTION 145f1b894 FUN_145f1b894 body=138 status=ok
// SIG undefined FUN_145f1b894(void)

code * FUN_145f1b894(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CubeFace";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000051;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472ce1ae;
}



// FUNCTION 145f1b91e FUN_145f1b91e body=138 status=ok
// SIG undefined FUN_145f1b91e(void)

code * FUN_145f1b91e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000054;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f1b80a;
}



// FUNCTION 145f1b9a8 FUN_145f1b9a8 body=205 status=ok
// SIG undefined FUN_145f1b9a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f1b9a8(void)

{
  if ((DAT_14ca4b7ff & 2) == 0) {
    DAT_14ca4b7ff = DAT_14ca4b7ff | 2;
    _DAT_14ca4b7a0 = L"FDownsampleDepthPS";
    _DAT_14ca4b7b8 = FUN_146826540;
    _DAT_14ca4b7c0 = FUN_146825d77;
    _DAT_14ca4b7c8 = FUN_146825fd6;
    _DAT_14ca4b7d0 = FUN_1407e02ea;
    _DAT_14ca4b7d8 = FUN_146826273;
    _DAT_14ca4b7b0 = FUN_1472e39cc;
    _DAT_14ca4b7f0 = 0xffffffff000000e0;
    _DAT_14ca4b7f8 = 8;
    DAT_14ca4b7fc = 0;
    _DAT_14ca4b7e0 = &LAB_1472e39f8;
    FUN_145f1ba76();
    FUN_1407e00cc(&DAT_14ca4b798);
    return;
  }
  return;
}



// FUNCTION 145f1ba76 FUN_145f1ba76 body=123 status=ok
// SIG undefined FUN_145f1ba76(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f1ba76(void)

{
  _DAT_14ca4c918 = L"BASE";
  DAT_14ca4c942 = 4;
  _DAT_14ca4c920 = FUN_140b35ae4();
  _DAT_14ca4c928 = DAT_14ca4b7a8;
  _DAT_14ca4c930 = &LAB_14682652b;
  DAT_14ca4b7a8 = &DAT_14ca4c918;
  DAT_14ca4b7fd = DAT_14ca4b7fd + '\x01';
  _DAT_14ca4c938 = 0x100000000;
  if (*(char *)(_DAT_14ca4c920 + 100) != '\0') {
    DAT_14ca4b7fe = DAT_14ca4b7fe + '\x01';
  }
  return;
}



// FUNCTION 145f1baf2 FUN_145f1baf2 body=226 status=ok
// SIG undefined FUN_145f1baf2(void)

longlong * FUN_145f1baf2(longlong *param_1)

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
  pcVar13 = FUN_146306a0c;
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



// FUNCTION 145f1bbd6 FUN_145f1bbd6 body=138 status=ok
// SIG undefined FUN_145f1bbd6(void)

code * FUN_145f1bbd6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DstToSrcPixelScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000196;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f1bcea;
}



// FUNCTION 145f1bc60 FUN_145f1bc60 body=138 status=ok
// SIG undefined FUN_145f1bc60(void)

code * FUN_145f1bc60(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DownsampleDepthFilter";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000199;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146306a94;
}



// FUNCTION 145f1bcea FUN_145f1bcea body=138 status=ok
// SIG undefined FUN_145f1bcea(void)

code * FUN_145f1bcea(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000195;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146306b1c;
}



// FUNCTION 145f1bd74 FUN_145f1bd74 body=292 status=ok
// SIG undefined FUN_145f1bd74(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f1bd74(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4da10) {
    FUN_144b3d300(&DAT_14ca4da10);
    if (DAT_14ca4da10 == -1) {
      FUN_145f1bfe2();
      FUN_145f1be98();
      FUN_140db5666(&DAT_14ca4d968,0,&DAT_14ca4d900,L"FShaderBuildSymbolBufferCS",
                    L"/Engine/Private/ShaderPrintDraw.usf",L"BuildSymbolBufferCS",5,1,FUN_1472eaea2,
                    FUN_1472eae42,&LAB_1472eae18,&LAB_1472eae14,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca55fc8);
      _DAT_14ca4d968 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14303e9aa);
      _Init_thread_footer(&DAT_14ca4da10);
    }
  }
  return &DAT_14ca4d968;
}



// FUNCTION 145f1be98 FUN_145f1be98 body=205 status=ok
// SIG undefined FUN_145f1be98(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f1be98(void)

{
  if ((DAT_14ca4d967 & 2) == 0) {
    DAT_14ca4d967 = DAT_14ca4d967 | 2;
    _DAT_14ca4d908 = L"FShaderBuildSymbolBufferCS";
    _DAT_14ca4d920 = FUN_146826540;
    _DAT_14ca4d928 = FUN_146825d77;
    _DAT_14ca4d930 = FUN_146825fd6;
    _DAT_14ca4d938 = FUN_1407e02ea;
    _DAT_14ca4d940 = FUN_146826273;
    _DAT_14ca4d918 = FUN_1472eade4;
    _DAT_14ca4d958 = 0xffffffff000000e0;
    _DAT_14ca4d960 = 8;
    DAT_14ca4d964 = 0;
    _DAT_14ca4d948 = &LAB_1472eae10;
    FUN_145f1bf66();
    FUN_1407e00cc(&DAT_14ca4d900);
    return;
  }
  return;
}



// FUNCTION 145f1bf66 FUN_145f1bf66 body=123 status=ok
// SIG undefined FUN_145f1bf66(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f1bf66(void)

{
  _DAT_14ca569a8 = L"BASE";
  DAT_14ca569d2 = 4;
  _DAT_14ca569b0 = FUN_140b35ae4();
  _DAT_14ca569b8 = DAT_14ca4d910;
  _DAT_14ca569c0 = &LAB_14682652b;
  DAT_14ca4d910 = &DAT_14ca569a8;
  DAT_14ca4d965 = DAT_14ca4d965 + '\x01';
  _DAT_14ca569c8 = 0x100000000;
  if (*(char *)(_DAT_14ca569b0 + 100) != '\0') {
    DAT_14ca4d966 = DAT_14ca4d966 + '\x01';
  }
  return;
}



// FUNCTION 145f1bfe2 FUN_145f1bfe2 body=261 status=ok
// SIG undefined FUN_145f1bfe2(void)

void FUN_145f1bfe2(void)

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
              0x110) < DAT_14ca56048) {
    FUN_144b3d300(&DAT_14ca56048);
    if (DAT_14ca56048 == -1) {
      FUN_145f1c0e8(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0x1f7;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca55fc8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14305d7e1);
      _Init_thread_footer(&DAT_14ca56048);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f1c0e8 FUN_145f1c0e8 body=226 status=ok
// SIG undefined FUN_145f1c0e8(void)

longlong * FUN_145f1c0e8(longlong *param_1)

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
  pcVar13 = FUN_146307c3c;
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



// FUNCTION 145f1c1cc FUN_145f1c1cc body=132 status=ok
// SIG undefined FUN_145f1c1cc(void)

undefined1 * FUN_145f1c1cc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1f8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1472f6408;
}



// FUNCTION 145f1c250 FUN_145f1c250 body=138 status=ok
// SIG undefined FUN_145f1c250(void)

code * FUN_145f1c250(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWStateBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000001fc;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f1c2da;
}



// FUNCTION 145f1c2da FUN_145f1c2da body=138 status=ok
// SIG undefined FUN_145f1c2da(void)

code * FUN_145f1c2da(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWSymbolsBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28000001fb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472f637e;
}



// FUNCTION 145f1c364 FUN_145f1c364 body=292 status=ok
// SIG undefined FUN_145f1c364(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f1c364(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4deb0) {
    FUN_144b3d300(&DAT_14ca4deb0);
    if (DAT_14ca4deb0 == -1) {
      FUN_145f1c5d2();
      FUN_145f1c488();
      FUN_140db5666(&DAT_14ca4de08,0,&DAT_14ca4dda0,L"FShaderDrawDebugCopyCS",
                    L"/Engine/Private/ShaderPrintDrawPrimitive.usf",L"ShaderDrawDebugCopyCS",5,1,
                    FUN_1472eb3c2,FUN_1472eb362,&LAB_1472eb338,&LAB_1472eb334,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca56160);
      _DAT_14ca4de08 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14303e9da);
      _Init_thread_footer(&DAT_14ca4deb0);
    }
  }
  return &DAT_14ca4de08;
}



// FUNCTION 145f1c488 FUN_145f1c488 body=205 status=ok
// SIG undefined FUN_145f1c488(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f1c488(void)

{
  if ((DAT_14ca4de07 & 2) == 0) {
    DAT_14ca4de07 = DAT_14ca4de07 | 2;
    _DAT_14ca4dda8 = L"FShaderDrawDebugCopyCS";
    _DAT_14ca4ddc0 = FUN_146826540;
    _DAT_14ca4ddc8 = FUN_146825d77;
    _DAT_14ca4ddd0 = FUN_146825fd6;
    _DAT_14ca4ddd8 = FUN_1407e02ea;
    _DAT_14ca4dde0 = FUN_146826273;
    _DAT_14ca4ddb8 = FUN_1472eb304;
    _DAT_14ca4ddf8 = 0xffffffff000000e0;
    _DAT_14ca4de00 = 8;
    DAT_14ca4de04 = 0;
    _DAT_14ca4dde8 = &LAB_1472eb330;
    FUN_145f1c556();
    FUN_1407e00cc(&DAT_14ca4dda0);
    return;
  }
  return;
}



// FUNCTION 145f1c556 FUN_145f1c556 body=123 status=ok
// SIG undefined FUN_145f1c556(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f1c556(void)

{
  _DAT_14ca56a68 = L"BASE";
  DAT_14ca56a92 = 4;
  _DAT_14ca56a70 = FUN_140b35ae4();
  _DAT_14ca56a78 = DAT_14ca4ddb0;
  _DAT_14ca56a80 = &LAB_14682652b;
  DAT_14ca4ddb0 = &DAT_14ca56a68;
  DAT_14ca4de05 = DAT_14ca4de05 + '\x01';
  _DAT_14ca56a88 = 0x100000000;
  if (*(char *)(_DAT_14ca56a70 + 100) != '\0') {
    DAT_14ca4de06 = DAT_14ca4de06 + '\x01';
  }
  return;
}



// FUNCTION 145f1c5d2 FUN_145f1c5d2 body=261 status=ok
// SIG undefined FUN_145f1c5d2(void)

void FUN_145f1c5d2(void)

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
              0x110) < DAT_14ca561e0) {
    FUN_144b3d300(&DAT_14ca561e0);
    if (DAT_14ca561e0 == -1) {
      FUN_145f1c6d8(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x24e;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca56160,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14305d805);
      _Init_thread_footer(&DAT_14ca561e0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f1c6d8 FUN_145f1c6d8 body=226 status=ok
// SIG undefined FUN_145f1c6d8(void)

longlong * FUN_145f1c6d8(longlong *param_1)

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
  pcVar13 = FUN_146307ee6;
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



// FUNCTION 145f1c7bc FUN_145f1c7bc body=132 status=ok
// SIG undefined FUN_145f1c7bc(void)

undefined1 * FUN_145f1c7bc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ElementBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x24f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1472f6496;
}



// FUNCTION 145f1c840 FUN_145f1c840 body=138 status=ok
// SIG undefined FUN_145f1c840(void)

code * FUN_145f1c840(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWIndirectArgs";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000250;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f1c7bc;
}



// FUNCTION 145f1c8ca FUN_145f1c8ca body=138 status=ok
// SIG undefined FUN_145f1c8ca(void)

code * FUN_145f1c8ca(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PrimitiveType";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000251;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f1c840;
}



// FUNCTION 145f1c954 FUN_145f1c954 body=205 status=ok
// SIG undefined FUN_145f1c954(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f1c954(void)

{
  if ((DAT_14ca5c16f & 2) == 0) {
    DAT_14ca5c16f = DAT_14ca5c16f | 2;
    _DAT_14ca5c110 = L"FWaterTileCategorisationMarkCS";
    _DAT_14ca5c128 = FUN_146826540;
    _DAT_14ca5c130 = FUN_146825d77;
    _DAT_14ca5c138 = FUN_146825fd6;
    _DAT_14ca5c140 = FUN_1407e02ea;
    _DAT_14ca5c148 = FUN_146826273;
    _DAT_14ca5c120 = FUN_1473155de;
    _DAT_14ca5c160 = 0xffffffff000000e0;
    _DAT_14ca5c168 = 8;
    DAT_14ca5c16c = 0;
    _DAT_14ca5c150 = &LAB_147315608;
    FUN_145f1ca22();
    FUN_1407e00cc(&DAT_14ca5c108);
    return;
  }
  return;
}



// FUNCTION 145f1ca22 FUN_145f1ca22 body=123 status=ok
// SIG undefined FUN_145f1ca22(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f1ca22(void)

{
  _DAT_14ca5f6e0 = L"BASE";
  DAT_14ca5f70a = 4;
  _DAT_14ca5f6e8 = FUN_140b35ae4();
  _DAT_14ca5f6f0 = DAT_14ca5c118;
  _DAT_14ca5f6f8 = &LAB_14682652b;
  DAT_14ca5c118 = &DAT_14ca5f6e0;
  DAT_14ca5c16d = DAT_14ca5c16d + '\x01';
  _DAT_14ca5f700 = 0x100000000;
  if (*(char *)(_DAT_14ca5f6e8 + 100) != '\0') {
    DAT_14ca5c16e = DAT_14ca5c16e + '\x01';
  }
  return;
}



// FUNCTION 145f1ca9e FUN_145f1ca9e body=226 status=ok
// SIG undefined FUN_145f1ca9e(void)

longlong * FUN_145f1ca9e(longlong *param_1)

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
  pcVar13 = FUN_14630add0;
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



// FUNCTION 145f1cb82 FUN_145f1cb82 body=138 status=ok
// SIG undefined FUN_145f1cb82(void)

code * FUN_145f1cb82(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"WaterDepthTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x980000015c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14630ae5e;
}



// FUNCTION 145f1cc0c FUN_145f1cc0c body=138 status=ok
// SIG undefined FUN_145f1cc0c(void)

code * FUN_145f1cc0c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TileMaskBufferOut";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa80000015e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1473183d2;
}



// FUNCTION 145f1cc96 FUN_145f1cc96 body=138 status=ok
// SIG undefined FUN_145f1cc96(void)

undefined1 * FUN_145f1cc96(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x158;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_14731845c;
}



// FUNCTION 145f1cd20 FUN_145f1cd20 body=205 status=ok
// SIG undefined FUN_145f1cd20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f1cd20(void)

{
  if ((DAT_14ca5cd7f & 2) == 0) {
    DAT_14ca5cd7f = DAT_14ca5cd7f | 2;
    _DAT_14ca5cd20 = L"FRenderSkyAtmospherePS";
    _DAT_14ca5cd38 = FUN_146826540;
    _DAT_14ca5cd40 = FUN_146825d77;
    _DAT_14ca5cd48 = FUN_146825fd6;
    _DAT_14ca5cd50 = FUN_1407e02ea;
    _DAT_14ca5cd58 = FUN_146826273;
    _DAT_14ca5cd30 = FUN_147315bd2;
    _DAT_14ca5cd70 = 0xffffffff000000e0;
    _DAT_14ca5cd78 = 8;
    DAT_14ca5cd7c = 0;
    _DAT_14ca5cd60 = &LAB_147315bfc;
    FUN_145f1cdee();
    FUN_1407e00cc(&DAT_14ca5cd18);
    return;
  }
  return;
}



// FUNCTION 145f1cdee FUN_145f1cdee body=123 status=ok
// SIG undefined FUN_145f1cdee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f1cdee(void)

{
  _DAT_14ca5f9a0 = L"BASE";
  DAT_14ca5f9ca = 4;
  _DAT_14ca5f9a8 = FUN_140b35ae4();
  _DAT_14ca5f9b0 = DAT_14ca5cd28;
  _DAT_14ca5f9b8 = &LAB_14682652b;
  DAT_14ca5cd28 = &DAT_14ca5f9a0;
  DAT_14ca5cd7d = DAT_14ca5cd7d + '\x01';
  _DAT_14ca5f9c0 = 0x100000000;
  if (*(char *)(_DAT_14ca5f9a8 + 100) != '\0') {
    DAT_14ca5cd7e = DAT_14ca5cd7e + '\x01';
  }
  return;
}



// FUNCTION 145f1ce6a FUN_145f1ce6a body=138 status=ok
// SIG undefined FUN_145f1ce6a(void)

code * FUN_145f1ce6a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VolumetricCloudShadowMapTexture0Sampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1d0000002b8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14731a2c0;
}



// FUNCTION 145f1cef4 FUN_145f1cef4 body=138 status=ok
// SIG undefined FUN_145f1cef4(void)

code * FUN_145f1cef4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VolumetricCloudDepthTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x198000002b1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14731a572;
}



// FUNCTION 145f1cf7e FUN_145f1cf7e body=138 status=ok
// SIG undefined FUN_145f1cf7e(void)

code * FUN_145f1cf7e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TransmittanceLutTextureSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1b0000002b4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14731a45e;
}



// FUNCTION 145f1d008 FUN_145f1d008 body=292 status=ok
// SIG undefined FUN_145f1d008(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f1d008(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca5e350) {
    FUN_144b3d300(&DAT_14ca5e350);
    if (DAT_14ca5e350 == -1) {
      FUN_145f1d276();
      FUN_145f1d12c();
      FUN_140db5666(&DAT_14ca5e2a8,0,&DAT_14ca5e240,L"FSubstrateClosureTilePrepareArgsPassCS",
                    L"/Engine/Private/Substrate/SubstrateMaterialClassification.usf",L"ArgsMainCS",5
                    ,1,FUN_1473177ca,FUN_14731776a,&LAB_14630a7ba,&LAB_147317766,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca5f518);
      _DAT_14ca5e2a8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14309a184);
      _Init_thread_footer(&DAT_14ca5e350);
    }
  }
  return &DAT_14ca5e2a8;
}



// FUNCTION 145f1d12c FUN_145f1d12c body=205 status=ok
// SIG undefined FUN_145f1d12c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f1d12c(void)

{
  if ((DAT_14ca5e2a7 & 2) == 0) {
    DAT_14ca5e2a7 = DAT_14ca5e2a7 | 2;
    _DAT_14ca5e248 = L"FSubstrateClosureTilePrepareArgsPassCS";
    _DAT_14ca5e260 = FUN_146826540;
    _DAT_14ca5e268 = FUN_146825d77;
    _DAT_14ca5e270 = FUN_146825fd6;
    _DAT_14ca5e278 = FUN_1407e02ea;
    _DAT_14ca5e280 = FUN_146826273;
    _DAT_14ca5e258 = FUN_147317738;
    _DAT_14ca5e298 = 0xffffffff000000e0;
    _DAT_14ca5e2a0 = 8;
    DAT_14ca5e2a4 = 0;
    _DAT_14ca5e288 = &LAB_147317762;
    FUN_145f1d1fa();
    FUN_1407e00cc(&DAT_14ca5e240);
    return;
  }
  return;
}



// FUNCTION 145f1d1fa FUN_145f1d1fa body=123 status=ok
// SIG undefined FUN_145f1d1fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f1d1fa(void)

{
  _DAT_14ca5fd38 = L"BASE";
  DAT_14ca5fd62 = 4;
  _DAT_14ca5fd40 = FUN_140b35ae4();
  _DAT_14ca5fd48 = DAT_14ca5e250;
  _DAT_14ca5fd50 = &LAB_14682652b;
  DAT_14ca5e250 = &DAT_14ca5fd38;
  DAT_14ca5e2a5 = DAT_14ca5e2a5 + '\x01';
  _DAT_14ca5fd58 = 0x100000000;
  if (*(char *)(_DAT_14ca5fd40 + 100) != '\0') {
    DAT_14ca5e2a6 = DAT_14ca5e2a6 + '\x01';
  }
  return;
}



// FUNCTION 145f1d276 FUN_145f1d276 body=261 status=ok
// SIG undefined FUN_145f1d276(void)

void FUN_145f1d276(void)

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
              0x110) < DAT_14ca5f598) {
    FUN_144b3d300(&DAT_14ca5f598);
    if (DAT_14ca5f598 == -1) {
      FUN_145f1d37c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x3cf;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca5f518,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14309e8c3);
      _Init_thread_footer(&DAT_14ca5f598);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f1d37c FUN_145f1d37c body=226 status=ok
// SIG undefined FUN_145f1d37c(void)

longlong * FUN_145f1d37c(longlong *param_1)

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
  pcVar13 = FUN_14630d34a;
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



// FUNCTION 145f1d460 FUN_145f1d460 body=132 status=ok
// SIG undefined FUN_145f1d460(void)

undefined1 * FUN_145f1d460(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TileCount_Primary";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3d0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14731dde8;
}



// FUNCTION 145f1d4e4 FUN_145f1d4e4 body=138 status=ok
// SIG undefined FUN_145f1d4e4(void)

code * FUN_145f1d4e4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TileDispatchIndirectDataBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000003d2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f1d56e;
}



// FUNCTION 145f1d56e FUN_145f1d56e body=138 status=ok
// SIG undefined FUN_145f1d56e(void)

code * FUN_145f1d56e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TileDrawIndirectDataBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000003d1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f1d460;
}



// FUNCTION 145f1d5f8 FUN_145f1d5f8 body=205 status=ok
// SIG undefined FUN_145f1d5f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f1d5f8(void)

{
  if ((DAT_14ca6114f & 2) == 0) {
    DAT_14ca6114f = DAT_14ca6114f | 2;
    _DAT_14ca610f0 = L"FTranslucentLightingInjectBatchPS";
    _DAT_14ca61108 = FUN_146826540;
    _DAT_14ca61110 = FUN_146825d77;
    _DAT_14ca61118 = FUN_146825fd6;
    _DAT_14ca61120 = FUN_1407e02ea;
    _DAT_14ca61128 = FUN_146826273;
    _DAT_14ca61100 = FUN_147322c86;
    _DAT_14ca61140 = 0xffffffff000000e0;
    _DAT_14ca61148 = 8;
    DAT_14ca6114c = 0;
    _DAT_14ca61130 = &LAB_147322cb0;
    FUN_145f1d6c6();
    FUN_1407e00cc(&DAT_14ca610e8);
    return;
  }
  return;
}



// FUNCTION 145f1d6c6 FUN_145f1d6c6 body=123 status=ok
// SIG undefined FUN_145f1d6c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f1d6c6(void)

{
  _DAT_14ca637e0 = L"BASE";
  DAT_14ca6380a = 4;
  _DAT_14ca637e8 = FUN_140b35ae4();
  _DAT_14ca637f0 = DAT_14ca610f8;
  _DAT_14ca637f8 = &LAB_14682652b;
  DAT_14ca610f8 = &DAT_14ca637e0;
  DAT_14ca6114d = DAT_14ca6114d + '\x01';
  _DAT_14ca63800 = 0x100000000;
  if (*(char *)(_DAT_14ca637e8 + 100) != '\0') {
    DAT_14ca6114e = DAT_14ca6114e + '\x01';
  }
  return;
}



// FUNCTION 145f1d742 FUN_145f1d742 body=226 status=ok
// SIG undefined FUN_145f1d742(void)

longlong * FUN_145f1d742(longlong *param_1)

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
  pcVar13 = FUN_14630f114;
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



// FUNCTION 145f1d826 FUN_145f1d826 body=138 status=ok
// SIG undefined FUN_145f1d826(void)

code * FUN_145f1d826(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MaxBatchedLocalLights";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3800000318;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f1d93a;
}



// FUNCTION 145f1d8b0 FUN_145f1d8b0 body=138 status=ok
// SIG undefined FUN_145f1d8b0(void)

undefined1 * FUN_145f1d8b0(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x314;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_1473263a2;
}



// FUNCTION 145f1d93a FUN_145f1d93a body=138 status=ok
// SIG undefined FUN_145f1d93a(void)

code * FUN_145f1d93a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"BatchedLocalLights";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000317;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14630f19c;
}



// FUNCTION 145f1d9c4 FUN_145f1d9c4 body=205 status=ok
// SIG undefined FUN_145f1d9c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f1d9c4(void)

{
  if ((DAT_14ca61a07 & 2) == 0) {
    DAT_14ca61a07 = DAT_14ca61a07 | 2;
    _DAT_14ca619a8 = L"FComposeSeparateTranslucencyPS";
    _DAT_14ca619c0 = FUN_146826540;
    _DAT_14ca619c8 = FUN_146825d77;
    _DAT_14ca619d0 = FUN_146825fd6;
    _DAT_14ca619d8 = FUN_1407e02ea;
    _DAT_14ca619e0 = FUN_146826273;
    _DAT_14ca619b8 = FUN_14732319e;
    _DAT_14ca619f8 = 0xffffffff000000e0;
    _DAT_14ca61a00 = 8;
    DAT_14ca61a04 = 0;
    _DAT_14ca619e8 = &LAB_1473231c8;
    FUN_145f1da92();
    FUN_1407e00cc(&DAT_14ca619a0);
    return;
  }
  return;
}



// FUNCTION 145f1da92 FUN_145f1da92 body=123 status=ok
// SIG undefined FUN_145f1da92(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f1da92(void)

{
  _DAT_14ca63990 = L"BASE";
  DAT_14ca639ba = 4;
  _DAT_14ca63998 = FUN_140b35ae4();
  _DAT_14ca639a0 = DAT_14ca619b0;
  _DAT_14ca639a8 = &LAB_14682652b;
  DAT_14ca619b0 = &DAT_14ca63990;
  DAT_14ca61a05 = DAT_14ca61a05 + '\x01';
  _DAT_14ca639b0 = 0x100000000;
  if (*(char *)(_DAT_14ca63998 + 100) != '\0') {
    DAT_14ca61a06 = DAT_14ca61a06 + '\x01';
  }
  return;
}



// FUNCTION 145f1db0e FUN_145f1db0e body=138 status=ok
// SIG undefined FUN_145f1db0e(void)

code * FUN_145f1db0e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6800000261;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147326bb6;
}



// FUNCTION 145f1db98 FUN_145f1db98 body=138 status=ok
// SIG undefined FUN_145f1db98(void)

code * FUN_145f1db98(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SeparateModulationPointSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8800000266;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147326aa2;
}



// FUNCTION 145f1dc22 FUN_145f1dc22 body=138 status=ok
// SIG undefined FUN_145f1dc22(void)

code * FUN_145f1dc22(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SeparateTranslucencyPointTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7000000263;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f1db0e;
}



// FUNCTION 145f1dcac FUN_145f1dcac body=205 status=ok
// SIG undefined FUN_145f1dcac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f1dcac(void)

{
  if ((DAT_14ca64cc7 & 2) == 0) {
    DAT_14ca64cc7 = DAT_14ca64cc7 | 2;
    _DAT_14ca64c68 = L"FGenerateHierarchicalPageFlagsCS";
    _DAT_14ca64c80 = FUN_146826540;
    _DAT_14ca64c88 = FUN_146825d77;
    _DAT_14ca64c90 = FUN_146825fd6;
    _DAT_14ca64c98 = FUN_1407e02ea;
    _DAT_14ca64ca0 = FUN_146826273;
    _DAT_14ca64c78 = FUN_14732b17e;
    _DAT_14ca64cb8 = 0xffffffff000000e0;
    _DAT_14ca64cc0 = 8;
    DAT_14ca64cc4 = 0;
    _DAT_14ca64ca8 = &LAB_14732b1a8;
    FUN_145f1dd7a();
    FUN_1407e00cc(&DAT_14ca64c60);
    return;
  }
  return;
}



// FUNCTION 145f1dd7a FUN_145f1dd7a body=123 status=ok
// SIG undefined FUN_145f1dd7a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f1dd7a(void)

{
  _DAT_14ca68bd0 = L"BASE";
  DAT_14ca68bfa = 4;
  _DAT_14ca68bd8 = FUN_140b35ae4();
  _DAT_14ca68be0 = DAT_14ca64c70;
  _DAT_14ca68be8 = &LAB_14682652b;
  DAT_14ca64c70 = &DAT_14ca68bd0;
  DAT_14ca64cc5 = DAT_14ca64cc5 + '\x01';
  _DAT_14ca68bf0 = 0x100000000;
  if (*(char *)(_DAT_14ca68bd8 + 100) != '\0') {
    DAT_14ca64cc6 = DAT_14ca64cc6 + '\x01';
  }
  return;
}



// FUNCTION 145f1ddf6 FUN_145f1ddf6 body=226 status=ok
// SIG undefined FUN_145f1ddf6(void)

longlong * FUN_145f1ddf6(longlong *param_1)

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
  pcVar13 = FUN_14631151c;
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



// FUNCTION 145f1deda FUN_145f1deda body=138 status=ok
// SIG undefined FUN_145f1deda(void)

code * FUN_145f1deda(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer< FPhysicalPageMetaData >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000003e6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f1dfee;
}



// FUNCTION 145f1df64 FUN_145f1df64 body=138 status=ok
// SIG undefined FUN_145f1df64(void)

code * FUN_145f1df64(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutUncachedPageRectBounds";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<FIntVector4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000003e8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14732f260;
}



// FUNCTION 145f1dfee FUN_145f1dfee body=138 status=ok
// SIG undefined FUN_145f1dfee(void)

undefined1 * FUN_145f1dfee(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3e5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca64298;
  return &LAB_14732f2ea;
}



// FUNCTION 145f1e078 FUN_145f1e078 body=205 status=ok
// SIG undefined FUN_145f1e078(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f1e078(void)

{
  if ((DAT_14ca65857 & 2) == 0) {
    DAT_14ca65857 = DAT_14ca65857 | 2;
    _DAT_14ca657f8 = L"FSelectPagesToMergeCS";
    _DAT_14ca65810 = FUN_146826540;
    _DAT_14ca65818 = FUN_146825d77;
    _DAT_14ca65820 = FUN_146825fd6;
    _DAT_14ca65828 = FUN_1407e02ea;
    _DAT_14ca65830 = FUN_146826273;
    _DAT_14ca65808 = FUN_14732bc8c;
    _DAT_14ca65848 = 0xffffffff000000e0;
    _DAT_14ca65850 = 8;
    DAT_14ca65854 = 0;
    _DAT_14ca65838 = &LAB_14732bcb6;
    FUN_145f1e146();
    FUN_1407e00cc(&DAT_14ca657f0);
    return;
  }
  return;
}



// FUNCTION 145f1e146 FUN_145f1e146 body=123 status=ok
// SIG undefined FUN_145f1e146(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f1e146(void)

{
  _DAT_14ca68db0 = L"BASE";
  DAT_14ca68dda = 4;
  _DAT_14ca68db8 = FUN_140b35ae4();
  _DAT_14ca68dc0 = DAT_14ca65800;
  _DAT_14ca68dc8 = &LAB_14682652b;
  DAT_14ca65800 = &DAT_14ca68db0;
  DAT_14ca65855 = DAT_14ca65855 + '\x01';
  _DAT_14ca68dd0 = 0x100000000;
  if (*(char *)(_DAT_14ca68db8 + 100) != '\0') {
    DAT_14ca65856 = DAT_14ca65856 + '\x01';
  }
  return;
}



// FUNCTION 145f1e1c2 FUN_145f1e1c2 body=226 status=ok
// SIG undefined FUN_145f1e1c2(void)

longlong * FUN_145f1e1c2(longlong *param_1)

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
  pcVar13 = FUN_146311da6;
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



// FUNCTION 145f1e2a6 FUN_145f1e2a6 body=138 status=ok
// SIG undefined FUN_145f1e2a6(void)

code * FUN_145f1e2a6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutPhysicalPagesToMerge";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer< uint >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000546;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14732fc20;
}



// FUNCTION 145f1e330 FUN_145f1e330 body=138 status=ok
// SIG undefined FUN_145f1e330(void)

code * FUN_145f1e330(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f1e3ba;
}



// FUNCTION 145f1e3ba FUN_145f1e3ba body=138 status=ok
// SIG undefined FUN_145f1e3ba(void)

undefined1 * FUN_145f1e3ba(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x543;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca64298;
  return &LAB_14732fcaa;
}



// FUNCTION 145f1e444 FUN_145f1e444 body=205 status=ok
// SIG undefined FUN_145f1e444(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f1e444(void)

{
  if ((DAT_14ca6b697 & 2) == 0) {
    DAT_14ca6b697 = DAT_14ca6b697 | 2;
    _DAT_14ca6b638 = L"FVolumetricFogLightScatteringCS";
    _DAT_14ca6b650 = FUN_146826540;
    _DAT_14ca6b658 = FUN_146825d77;
    _DAT_14ca6b660 = FUN_146825fd6;
    _DAT_14ca6b668 = FUN_1407e02ea;
    _DAT_14ca6b670 = FUN_146826273;
    _DAT_14ca6b648 = FUN_147334e6c;
    _DAT_14ca6b688 = 0xffffffff000000e0;
    _DAT_14ca6b690 = 8;
    DAT_14ca6b694 = 0;
    _DAT_14ca6b678 = &LAB_147334e96;
    FUN_145f1e512();
    FUN_1407e00cc(&DAT_14ca6b630);
    return;
  }
  return;
}



// FUNCTION 145f1e512 FUN_145f1e512 body=123 status=ok
// SIG undefined FUN_145f1e512(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f1e512(void)

{
  _DAT_14ca6d5e0 = L"BASE";
  DAT_14ca6d60a = 4;
  _DAT_14ca6d5e8 = FUN_140b35ae4();
  _DAT_14ca6d5f0 = DAT_14ca6b640;
  _DAT_14ca6d5f8 = &LAB_14682652b;
  DAT_14ca6b640 = &DAT_14ca6d5e0;
  DAT_14ca6b695 = DAT_14ca6b695 + '\x01';
  _DAT_14ca6d600 = 0x100000000;
  if (*(char *)(_DAT_14ca6d5e8 + 100) != '\0') {
    DAT_14ca6b696 = DAT_14ca6b696 + '\x01';
  }
  return;
}



// FUNCTION 145f1e58e FUN_145f1e58e body=138 status=ok
// SIG undefined FUN_145f1e58e(void)

code * FUN_145f1e58e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DirectionalLightFunctionTranslatedWorldToShadow";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4c0000003f0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14733a2b6;
}



// FUNCTION 145f1e618 FUN_145f1e618 body=138 status=ok
// SIG undefined FUN_145f1e618(void)

code * FUN_145f1e618(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CloudShadowmapTranslatedWorldToLightClipMatrix";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x500000003f1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f1e58e;
}



// FUNCTION 145f1e6a2 FUN_145f1e6a2 body=138 status=ok
// SIG undefined FUN_145f1e6a2(void)

code * FUN_145f1e6a2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"UseHeightFogColors";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x568000003f5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14733a118;
}



// FUNCTION 145f1e72c FUN_145f1e72c body=205 status=ok
// SIG undefined FUN_145f1e72c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f1e72c(void)

{
  if ((DAT_14ca6c3ef & 2) == 0) {
    DAT_14ca6c3ef = DAT_14ca6c3ef | 2;
    _DAT_14ca6c390 = L"FReconstructVolumetricRenderTargetPS";
    _DAT_14ca6c3a8 = FUN_146826540;
    _DAT_14ca6c3b0 = FUN_146825d77;
    _DAT_14ca6c3b8 = FUN_146825fd6;
    _DAT_14ca6c3c0 = FUN_1407e02ea;
    _DAT_14ca6c3c8 = FUN_146826273;
    _DAT_14ca6c3a0 = FUN_147335628;
    _DAT_14ca6c3e0 = 0xffffffff000000e0;
    _DAT_14ca6c3e8 = 8;
    DAT_14ca6c3ec = 0;
    _DAT_14ca6c3d0 = &LAB_147335652;
    FUN_145f1e7fa();
    FUN_1407e00cc(&DAT_14ca6c388);
    return;
  }
  return;
}



// FUNCTION 145f1e7fa FUN_145f1e7fa body=123 status=ok
// SIG undefined FUN_145f1e7fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f1e7fa(void)

{
  _DAT_14ca6dac8 = L"BASE";
  DAT_14ca6daf2 = 4;
  _DAT_14ca6dad0 = FUN_140b35ae4();
  _DAT_14ca6dad8 = DAT_14ca6c398;
  _DAT_14ca6dae0 = &LAB_14682652b;
  DAT_14ca6c398 = &DAT_14ca6dac8;
  DAT_14ca6c3ed = DAT_14ca6c3ed + '\x01';
  _DAT_14ca6dae8 = 0x100000000;
  if (*(char *)(_DAT_14ca6dad0 + 100) != '\0') {
    DAT_14ca6c3ee = DAT_14ca6c3ee + '\x01';
  }
  return;
}



// FUNCTION 145f1e876 FUN_145f1e876 body=138 status=ok
// SIG undefined FUN_145f1e876(void)

code * FUN_145f1e876(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HalfResDepthTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3800000227;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14733ba76;
}



// FUNCTION 145f1e900 FUN_145f1e900 body=138 status=ok
// SIG undefined FUN_145f1e900(void)

code * FUN_145f1e900(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DstVolumetricTextureSizeAndInvSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1500000022a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14733b962;
}



// FUNCTION 145f1e98a FUN_145f1e98a body=138 status=ok
// SIG undefined FUN_145f1e98a(void)

code * FUN_145f1e98a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MinimumDistanceKmToEnableReprojection";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1d000000234;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14733b512;
}



// FUNCTION 145f1ea14 FUN_145f1ea14 body=205 status=ok
// SIG undefined FUN_145f1ea14(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f1ea14(void)

{
  if ((DAT_14ca95aef & 2) == 0) {
    DAT_14ca95aef = DAT_14ca95aef | 2;
    _DAT_14ca95a90 = L"FInitIndirectArgs1DCS";
    _DAT_14ca95aa8 = FUN_146826540;
    _DAT_14ca95ab0 = FUN_146825d77;
    _DAT_14ca95ab8 = FUN_146825fd6;
    _DAT_14ca95ac0 = FUN_1407e02ea;
    _DAT_14ca95ac8 = FUN_146826273;
    _DAT_14ca95aa0 = FUN_14742bc22;
    _DAT_14ca95ae0 = 0xffffffff000000e0;
    _DAT_14ca95ae8 = 8;
    DAT_14ca95aec = 0;
    _DAT_14ca95ad0 = &LAB_14742bc4c;
    FUN_145f1eae2();
    FUN_1407e00cc(&DAT_14ca95a88);
    return;
  }
  return;
}



// FUNCTION 145f1eae2 FUN_145f1eae2 body=123 status=ok
// SIG undefined FUN_145f1eae2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f1eae2(void)

{
  _DAT_14ca96480 = L"BASE";
  DAT_14ca964aa = 4;
  _DAT_14ca96488 = FUN_140b35ae4();
  _DAT_14ca96490 = DAT_14ca95a98;
  _DAT_14ca96498 = &LAB_14682652b;
  DAT_14ca95a98 = &DAT_14ca96480;
  DAT_14ca95aed = DAT_14ca95aed + '\x01';
  _DAT_14ca964a0 = 0x100000000;
  if (*(char *)(_DAT_14ca96488 + 100) != '\0') {
    DAT_14ca95aee = DAT_14ca95aee + '\x01';
  }
  return;
}



// FUNCTION 145f1eb5e FUN_145f1eb5e body=226 status=ok
// SIG undefined FUN_145f1eb5e(void)

longlong * FUN_145f1eb5e(longlong *param_1)

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
  pcVar13 = FUN_14631f19e;
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



// FUNCTION 145f1ec42 FUN_145f1ec42 body=138 status=ok
// SIG undefined FUN_145f1ec42(void)

code * FUN_145f1ec42(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InputCountOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000358;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f1ed56;
}



// FUNCTION 145f1eccc FUN_145f1eccc body=138 status=ok
// SIG undefined FUN_145f1eccc(void)

code * FUN_145f1eccc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Multiplier";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000356;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14631f226;
}



// FUNCTION 145f1ed56 FUN_145f1ed56 body=138 status=ok
// SIG undefined FUN_145f1ed56(void)

code * FUN_145f1ed56(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Divisor";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc00000357;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f1eccc;
}



// FUNCTION 145f1ede0 FUN_145f1ede0 body=205 status=ok
// SIG undefined FUN_145f1ede0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f1ede0(void)

{
  if ((DAT_14cb094e7 & 2) == 0) {
    DAT_14cb094e7 = DAT_14cb094e7 | 2;
    _DAT_14cb09488 = L"FSparseVolumeTextureUpdateFromSparseBufferCS";
    _DAT_14cb094a0 = FUN_146826540;
    _DAT_14cb094a8 = FUN_146825d77;
    _DAT_14cb094b0 = FUN_146825fd6;
    _DAT_14cb094b8 = FUN_1407e02ea;
    _DAT_14cb094c0 = FUN_146826273;
    _DAT_14cb09498 = FUN_147d4cbe2;
    _DAT_14cb094d8 = 0xffffffff000000e0;
    _DAT_14cb094e0 = 8;
    DAT_14cb094e4 = 0;
    _DAT_14cb094c8 = &LAB_147d4cc0c;
    FUN_145f1eeae();
    FUN_1407e00cc(&DAT_14cb09480);
    return;
  }
  return;
}



// FUNCTION 145f1eeae FUN_145f1eeae body=123 status=ok
// SIG undefined FUN_145f1eeae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f1eeae(void)

{
  _DAT_14cb09d00 = L"BASE";
  DAT_14cb09d2a = 4;
  _DAT_14cb09d08 = FUN_140b35ae4();
  _DAT_14cb09d10 = DAT_14cb09490;
  _DAT_14cb09d18 = &LAB_14682652b;
  DAT_14cb09490 = &DAT_14cb09d00;
  DAT_14cb094e5 = DAT_14cb094e5 + '\x01';
  _DAT_14cb09d20 = 0x100000000;
  if (*(char *)(_DAT_14cb09d08 + 100) != '\0') {
    DAT_14cb094e6 = DAT_14cb094e6 + '\x01';
  }
  return;
}



// FUNCTION 145f1ef2a FUN_145f1ef2a body=138 status=ok
// SIG undefined FUN_145f1ef2a(void)

code * FUN_145f1ef2a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"BufferTileStep";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7000000029;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d55bac;
}



// FUNCTION 145f1efb4 FUN_145f1efb4 body=138 status=ok
// SIG undefined FUN_145f1efb4(void)

code * FUN_145f1efb4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NumDispatchedGroups";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x740000002a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f1ef2a;
}



// FUNCTION 145f1f03e FUN_145f1f03e body=138 status=ok
// SIG undefined FUN_145f1f03e(void)

code * FUN_145f1f03e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DstPhysicalTileTextureB";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture3D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000001d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d56110;
}



// FUNCTION 145f1f0c8 FUN_145f1f0c8 body=292 status=ok
// SIG undefined FUN_145f1f0c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f1f0c8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb47cf0) {
    FUN_144b3d300(&DAT_14cb47cf0);
    if (DAT_14cb47cf0 == -1) {
      FUN_145f1f336();
      FUN_145f1f1ec();
      FUN_140db5666(&DAT_14cb47c48,0,&DAT_14cb47be0,L"FWaterQuadTreeMergePS",
                    L"/Plugin/Water/Private/WaterQuadTreeMerge.usf",L"Main",3,4,FUN_1483fc8d6,
                    FUN_1483fc876,&LAB_1483fc872,&LAB_1483fc86e,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14cb48b88);
      _DAT_14cb47c48 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143b3bcd1);
      _Init_thread_footer(&DAT_14cb47cf0);
    }
  }
  return &DAT_14cb47c48;
}



// FUNCTION 145f1f1ec FUN_145f1f1ec body=205 status=ok
// SIG undefined FUN_145f1f1ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f1f1ec(void)

{
  if ((DAT_14cb47c47 & 2) == 0) {
    DAT_14cb47c47 = DAT_14cb47c47 | 2;
    _DAT_14cb47be8 = L"FWaterQuadTreeMergePS";
    _DAT_14cb47c00 = FUN_146826540;
    _DAT_14cb47c08 = FUN_146825d77;
    _DAT_14cb47c10 = FUN_146825fd6;
    _DAT_14cb47c18 = FUN_1407e02ea;
    _DAT_14cb47c20 = FUN_146826273;
    _DAT_14cb47bf8 = FUN_1483fc840;
    _DAT_14cb47c38 = 0xffffffff000000e0;
    _DAT_14cb47c40 = 8;
    DAT_14cb47c44 = 0;
    _DAT_14cb47c28 = &LAB_1483fc86a;
    FUN_145f1f2ba();
    FUN_1407e00cc(&DAT_14cb47be0);
    return;
  }
  return;
}



// FUNCTION 145f1f2ba FUN_145f1f2ba body=123 status=ok
// SIG undefined FUN_145f1f2ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f1f2ba(void)

{
  _DAT_14cb49228 = L"BASE";
  DAT_14cb49252 = 4;
  _DAT_14cb49230 = FUN_140b35ae4();
  _DAT_14cb49238 = DAT_14cb47bf0;
  _DAT_14cb49240 = &LAB_14682652b;
  DAT_14cb47bf0 = &DAT_14cb49228;
  DAT_14cb47c45 = DAT_14cb47c45 + '\x01';
  _DAT_14cb49248 = 0x100000000;
  if (*(char *)(_DAT_14cb49230 + 100) != '\0') {
    DAT_14cb47c46 = DAT_14cb47c46 + '\x01';
  }
  return;
}



// FUNCTION 145f1f336 FUN_145f1f336 body=261 status=ok
// SIG undefined FUN_145f1f336(void)

void FUN_145f1f336(void)

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
              0x110) < DAT_14cb48c08) {
    FUN_144b3d300(&DAT_14cb48c08);
    if (DAT_14cb48c08 == -1) {
      FUN_145f1f43c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x140;
      local_58 = 0x6d;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb48b88,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143b3d1d1);
      _Init_thread_footer(&DAT_14cb48c08);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f1f43c FUN_145f1f43c body=226 status=ok
// SIG undefined FUN_145f1f43c(void)

longlong * FUN_145f1f43c(longlong *param_1)

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
  pcVar13 = FUN_146488778;
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



// FUNCTION 145f1f520 FUN_145f1f520 body=132 status=ok
// SIG undefined FUN_145f1f520(void)

undefined1 * FUN_145f1f520(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"WaterBodyRasterTextureMS";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2DMS";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1483ffbbe;
}



// FUNCTION 145f1f5a4 FUN_145f1f5a4 body=138 status=ok
// SIG undefined FUN_145f1f5a4(void)

code * FUN_145f1f5a4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RcpCaptureDepthRange";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2c00000074;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f1f62e;
}



// FUNCTION 145f1f62e FUN_145f1f62e body=138 status=ok
// SIG undefined FUN_145f1f62e(void)

code * FUN_145f1f62e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SuperSamplingFactor";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000073;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146488800;
}



// FUNCTION 145f1f6b8 FUN_145f1f6b8 body=292 status=ok
// SIG undefined FUN_145f1f6b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f1f6b8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb524e0) {
    FUN_144b3d300(&DAT_14cb524e0);
    if (DAT_14cb524e0 == -1) {
      FUN_145f1f926();
      FUN_145f1f7dc();
      FUN_140db5666(&DAT_14cb52438,0,&DAT_14cb523d0,L"FStreamlineVelocityCombineCS",
                    L"/Plugin/StreamlineCore/Private/VelocityCombine.usf",L"VelocityCombineMain",5,4
                    ,FUN_1485f4b7a,FUN_1485f4b1a,&LAB_1485f4aea,&LAB_1485f4ae6,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cb52580);
      _DAT_14cb52438 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143c0a5cd);
      _Init_thread_footer(&DAT_14cb524e0);
    }
  }
  return &DAT_14cb52438;
}



// FUNCTION 145f1f7dc FUN_145f1f7dc body=205 status=ok
// SIG undefined FUN_145f1f7dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f1f7dc(void)

{
  if ((DAT_14cb52437 & 2) == 0) {
    DAT_14cb52437 = DAT_14cb52437 | 2;
    _DAT_14cb523d8 = L"FStreamlineVelocityCombineCS";
    _DAT_14cb523f0 = FUN_146826540;
    _DAT_14cb523f8 = FUN_146825d77;
    _DAT_14cb52400 = FUN_146825fd6;
    _DAT_14cb52408 = FUN_1407e02ea;
    _DAT_14cb52410 = FUN_146826273;
    _DAT_14cb523e8 = FUN_1485f4ab8;
    _DAT_14cb52428 = 0xffffffff000000e0;
    _DAT_14cb52430 = 8;
    DAT_14cb52434 = 0;
    _DAT_14cb52418 = &LAB_1485f4ae2;
    FUN_145f1f8aa();
    FUN_1407e00cc(&DAT_14cb523d0);
    return;
  }
  return;
}



// FUNCTION 145f1f8aa FUN_145f1f8aa body=123 status=ok
// SIG undefined FUN_145f1f8aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f1f8aa(void)

{
  _DAT_14cb52638 = L"BASE";
  DAT_14cb52662 = 4;
  _DAT_14cb52640 = FUN_140b35ae4();
  _DAT_14cb52648 = DAT_14cb523e0;
  _DAT_14cb52650 = &LAB_14682652b;
  DAT_14cb523e0 = &DAT_14cb52638;
  DAT_14cb52435 = DAT_14cb52435 + '\x01';
  _DAT_14cb52658 = 0x100000000;
  if (*(char *)(_DAT_14cb52640 + 100) != '\0') {
    DAT_14cb52436 = DAT_14cb52436 + '\x01';
  }
  return;
}



// FUNCTION 145f1f926 FUN_145f1f926 body=261 status=ok
// SIG undefined FUN_145f1f926(void)

void FUN_145f1f926(void)

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
              0x110) < DAT_14cb52600) {
    FUN_144b3d300(&DAT_14cb52600);
    if (DAT_14cb52600 == -1) {
      FUN_145f1fa2c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x140;
      local_58 = 0x35;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb52580,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143c0abdf);
      _Init_thread_footer(&DAT_14cb52600);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f1fa2c FUN_145f1fa2c body=226 status=ok
// SIG undefined FUN_145f1fa2c(void)

longlong * FUN_145f1fa2c(longlong *param_1)

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
  pcVar13 = FUN_1464a8b92;
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



// FUNCTION 145f1fb10 FUN_145f1fb10 body=132 status=ok
// SIG undefined FUN_145f1fb10(void)

undefined1 * FUN_145f1fb10(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x37;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1485f4d74;
}



// FUNCTION 145f1fb94 FUN_145f1fb94 body=138 status=ok
// SIG undefined FUN_145f1fb94(void)

code * FUN_145f1fb94(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000003b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1464a8dc2;
}



// FUNCTION 145f1fc1e FUN_145f1fc1e body=138 status=ok
// SIG undefined FUN_145f1fc1e(void)

code * FUN_145f1fc1e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VelocityTextureSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000038;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f1fb10;
}



// FUNCTION 145f1fca8 FUN_145f1fca8 body=292 status=ok
// SIG undefined FUN_145f1fca8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f1fca8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf7e48) {
    FUN_144b3d300(&DAT_14cbf7e48);
    if (DAT_14cbf7e48 == -1) {
      FUN_145f1ff16();
      FUN_145f1fdcc();
      FUN_140db5666(&DAT_14cbf7da0,0,&DAT_14cbf7d38,L"FHairStrandCopyPositionCS",
                    L"/Engine/Private/HairStrands/HairStrandsTexturesGeneration.usf",L"MainCS",5,1,
                    FUN_14907bb8e,FUN_14907bb2e,&LAB_14667a346,&LAB_14907bb2a,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cbf8c88);
      _DAT_14cbf7da0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14441739e);
      _Init_thread_footer(&DAT_14cbf7e48);
    }
  }
  return &DAT_14cbf7da0;
}



// FUNCTION 145f1fdcc FUN_145f1fdcc body=205 status=ok
// SIG undefined FUN_145f1fdcc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f1fdcc(void)

{
  if ((DAT_14cbf7d9f & 2) == 0) {
    DAT_14cbf7d9f = DAT_14cbf7d9f | 2;
    _DAT_14cbf7d40 = L"FHairStrandCopyPositionCS";
    _DAT_14cbf7d58 = FUN_146826540;
    _DAT_14cbf7d60 = FUN_146825d77;
    _DAT_14cbf7d68 = FUN_146825fd6;
    _DAT_14cbf7d70 = FUN_1407e02ea;
    _DAT_14cbf7d78 = FUN_146826273;
    _DAT_14cbf7d50 = FUN_14907bafc;
    _DAT_14cbf7d90 = 0xffffffff000000e0;
    _DAT_14cbf7d98 = 8;
    DAT_14cbf7d9c = 0;
    _DAT_14cbf7d80 = &LAB_14907bb26;
    FUN_145f1fe9a();
    FUN_1407e00cc(&DAT_14cbf7d38);
    return;
  }
  return;
}



// FUNCTION 145f1fe9a FUN_145f1fe9a body=123 status=ok
// SIG undefined FUN_145f1fe9a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f1fe9a(void)

{
  _DAT_14cbf90d0 = L"BASE";
  DAT_14cbf90fa = 4;
  _DAT_14cbf90d8 = FUN_140b35ae4();
  _DAT_14cbf90e0 = DAT_14cbf7d48;
  _DAT_14cbf90e8 = &LAB_14682652b;
  DAT_14cbf7d48 = &DAT_14cbf90d0;
  DAT_14cbf7d9d = DAT_14cbf7d9d + '\x01';
  _DAT_14cbf90f0 = 0x100000000;
  if (*(char *)(_DAT_14cbf90d8 + 100) != '\0') {
    DAT_14cbf7d9e = DAT_14cbf7d9e + '\x01';
  }
  return;
}



// FUNCTION 145f1ff16 FUN_145f1ff16 body=261 status=ok
// SIG undefined FUN_145f1ff16(void)

void FUN_145f1ff16(void)

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
              0x110) < DAT_14cbf8d08) {
    FUN_144b3d300(&DAT_14cbf8d08);
    if (DAT_14cbf8d08 == -1) {
      FUN_145f2001c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0xf1d;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cbf8c88,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14442568b);
      _Init_thread_footer(&DAT_14cbf8d08);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f2001c FUN_145f2001c body=226 status=ok
// SIG undefined FUN_145f2001c(void)

longlong * FUN_145f2001c(longlong *param_1)

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
  pcVar13 = FUN_14667adaa;
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



// FUNCTION 145f20100 FUN_145f20100 body=132 status=ok
// SIG undefined FUN_145f20100(void)

undefined1 * FUN_145f20100(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MaxVertexCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf1e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_149084296;
}



// FUNCTION 145f20184 FUN_145f20184 body=138 status=ok
// SIG undefined FUN_145f20184(void)

code * FUN_145f20184(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InPositions";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000f1f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f20100;
}



// FUNCTION 145f2020e FUN_145f2020e body=138 status=ok
// SIG undefined FUN_145f2020e(void)

code * FUN_145f2020e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InPositionOffset";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000f20;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f20184;
}



// FUNCTION 145f20298 FUN_145f20298 body=289 status=ok
// SIG undefined FUN_145f20298(void)

undefined4 * FUN_145f20298(undefined4 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined *puVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145f205c2(local_40);
  FUN_145f20428(local_38,*param_2,param_2[1]);
  *(undefined4 *)(local_38 + 0x12) = 0xffffffff;
  local_44 = local_40[0];
  iVar8 = *(int *)(local_38 + 1);
  if (iVar8 == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  else {
    puVar9 = (undefined2 *)*local_38;
  }
  iVar2 = iVar8 + -1;
  if (iVar8 == 0) {
    iVar2 = 0;
  }
  uVar5 = FUN_144a49b4a(iVar2,puVar9);
  cVar4 = FUN_145f203ba(uVar5,local_38,&local_44);
  uVar3 = local_44;
  if (cVar4 == '\0') {
    uVar6 = DAT_14cacdfc8 - DAT_14cacdff4;
    iVar8 = 1;
    if (3 < uVar6) {
      uVar7 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= DAT_14cace008)) {
      uVar5 = DAT_14cace008 - 1U & uVar5;
      *(uint *)((longlong)local_38 + 0x94) = uVar5;
      puVar10 = &DAT_14cacdff8;
      if (DAT_14cace000 != (undefined *)0x0) {
        puVar10 = DAT_14cace000;
      }
      *(undefined4 *)(local_38 + 0x12) = *(undefined4 *)(puVar10 + (longlong)(int)uVar5 * 4);
      *(undefined4 *)(puVar10 + (longlong)(int)uVar5 * 4) = local_44;
    }
    else {
      DAT_14cace008 = iVar8;
      FUN_1463ad76c();
    }
  }
  *param_1 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f203ba FUN_145f203ba body=110 status=ok
// SIG undefined FUN_145f203ba(void)

undefined8 FUN_145f203ba(undefined8 param_1,void *param_2,int *param_3)

{
  int iVar1;
  void *_Dst;
  
  if ((DAT_14cacdfc8 - DAT_14cacdff4 != 1) && (iVar1 = FUN_147964d80(), iVar1 != -1)) {
    _Dst = (void *)((longlong)iVar1 * 0x98 + DAT_14cacdfc0);
    FUN_145cacdd2(_Dst);
    memmove(_Dst,param_2,0x90);
    FUN_147964e66(*param_3);
    *param_3 = iVar1;
    return 1;
  }
  return 0;
}



// FUNCTION 145f20428 FUN_145f20428 body=132 status=ok
// SIG undefined FUN_145f20428(void)

undefined8 * FUN_145f20428(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 2) = *param_3;
  FUN_145f204ac(param_1 + 3,param_3 + 8);
  uVar2 = *(undefined8 *)(param_3 + 0x60);
  uVar3 = *(undefined8 *)(param_3 + 0x68);
  uVar4 = *(undefined8 *)(param_3 + 0x70);
  param_1[0xd] = *(undefined8 *)(param_3 + 0x58);
  param_1[0xe] = uVar2;
  param_1[0xf] = uVar3;
  param_1[0x10] = uVar4;
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_3 + 0x78);
  return param_1;
}



// FUNCTION 145f204ac FUN_145f204ac body=127 status=ok
// SIG undefined FUN_145f204ac(void)

undefined8 * FUN_145f204ac(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_145f2052c();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 145f2052c FUN_145f2052c body=150 status=ok
// SIG undefined FUN_145f2052c(void)

longlong * FUN_145f2052c(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar3 = param_2[3];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(int *)(param_1 + 3) = (int)lVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 145f205c2 FUN_145f205c2 body=275 status=ok
// SIG undefined FUN_145f205c2(void)

int * FUN_145f205c2(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cacdff0;
  iVar4 = DAT_14cacdfc8;
  if (DAT_14cacdff4 == 0) {
    iVar2 = DAT_14cacdfc8 + 1;
    bVar7 = DAT_14cacdfcc == DAT_14cacdfc8;
    DAT_14cacdfc8 = iVar2;
    if (bVar7) {
      FUN_14125fb0c(&DAT_14cacdfc0,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14cacdfd0,1);
    puVar3 = DAT_14cacdfe0;
    if (DAT_14cacdfe0 == (undefined *)0x0) {
      puVar3 = &DAT_14cacdfd0;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  }
  else {
    lVar6 = (longlong)DAT_14cacdff0;
    DAT_14cacdff0 = *(int *)(DAT_14cacdfc0 + 4 + lVar6 * 0x98);
    DAT_14cacdff4 = DAT_14cacdff4 + -1;
    iVar4 = iVar2;
    if (DAT_14cacdff4 != 0) {
      *(undefined4 *)(DAT_14cacdfc0 + (longlong)DAT_14cacdff0 * 0x98) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14cacdfd0;
  if (DAT_14cacdfe0 != (undefined *)0x0) {
    puVar3 = DAT_14cacdfe0;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x98 + DAT_14cacdfc0;
  return param_1;
}



// FUNCTION 145f206d6 FUN_145f206d6 body=289 status=ok
// SIG undefined FUN_145f206d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f206d6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca13230) {
    FUN_144b3d300(&DAT_14ca13230);
    if (DAT_14ca13230 == -1) {
      FUN_145f20942();
      FUN_145f207f8();
      FUN_140db5666(&DAT_14ca13188,0,&DAT_14ca13120,L"FEmitShadowMapPS",
                    L"/Engine/Private/Nanite/NaniteEmitShadow.usf",L"EmitShadowMapPS",3,3,
                    FUN_1472506ae,FUN_14725064e,&LAB_1462eec26,&LAB_14725064a,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca170b0);
      _DAT_14ca13188 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e015bc);
      _Init_thread_footer(&DAT_14ca13230);
    }
  }
  return &DAT_14ca13188;
}



// FUNCTION 145f207f8 FUN_145f207f8 body=205 status=ok
// SIG undefined FUN_145f207f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f207f8(void)

{
  if ((DAT_14ca13187 & 2) == 0) {
    DAT_14ca13187 = DAT_14ca13187 | 2;
    _DAT_14ca13128 = L"FEmitShadowMapPS";
    _DAT_14ca13140 = FUN_146826540;
    _DAT_14ca13148 = FUN_146825d77;
    _DAT_14ca13150 = FUN_146825fd6;
    _DAT_14ca13158 = FUN_1407e02ea;
    _DAT_14ca13160 = FUN_146826273;
    _DAT_14ca13138 = FUN_14725061a;
    _DAT_14ca13178 = 0xffffffff000000e0;
    _DAT_14ca13180 = 8;
    DAT_14ca13184 = 0;
    _DAT_14ca13168 = &LAB_147250646;
    FUN_145f208c6();
    FUN_1407e00cc(&DAT_14ca13120);
    return;
  }
  return;
}



// FUNCTION 145f208c6 FUN_145f208c6 body=123 status=ok
// SIG undefined FUN_145f208c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f208c6(void)

{
  _DAT_14ca18b78 = L"BASE";
  DAT_14ca18ba2 = 4;
  _DAT_14ca18b80 = FUN_140b35ae4();
  _DAT_14ca18b88 = DAT_14ca13130;
  _DAT_14ca18b90 = &LAB_14682652b;
  DAT_14ca13130 = &DAT_14ca18b78;
  DAT_14ca13185 = DAT_14ca13185 + '\x01';
  _DAT_14ca18b98 = 0x100000000;
  if (*(char *)(_DAT_14ca18b80 + 100) != '\0') {
    DAT_14ca13186 = DAT_14ca13186 + '\x01';
  }
  return;
}



// FUNCTION 145f20942 FUN_145f20942 body=261 status=ok
// SIG undefined FUN_145f20942(void)

void FUN_145f20942(void)

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
              0x110) < DAT_14ca17130) {
    FUN_144b3d300(&DAT_14ca17130);
    if (DAT_14ca17130 == -1) {
      FUN_145f20a48(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x120;
      local_58 = 0x6e;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca170b0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e2755b);
      _Init_thread_footer(&DAT_14ca17130);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f20a48 FUN_145f20a48 body=226 status=ok
// SIG undefined FUN_145f20a48(void)

longlong * FUN_145f20a48(longlong *param_1)

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
  pcVar13 = FUN_1462ef950;
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



// FUNCTION 145f20b2c FUN_145f20b2c body=136 status=ok
// SIG undefined FUN_145f20b2c(void)

code * FUN_145f20b2c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ViewToClip22";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000070;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14725525c;
}



// FUNCTION 145f20bb4 FUN_145f20bb4 body=138 status=ok
// SIG undefined FUN_145f20bb4(void)

code * FUN_145f20bb4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DepthBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc00000071;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f20b2c;
}



// FUNCTION 145f20c3e FUN_145f20c3e body=138 status=ok
// SIG undefined FUN_145f20c3e(void)

code * FUN_145f20c3e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ShadowMapID";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000072;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f20bb4;
}



// FUNCTION 145f20cc8 FUN_145f20cc8 body=205 status=ok
// SIG undefined FUN_145f20cc8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f20cc8(void)

{
  if ((DAT_14c9f8b9f & 2) == 0) {
    DAT_14c9f8b9f = DAT_14c9f8b9f | 2;
    _DAT_14c9f8b40 = L"FCalculateCardTileDepthRangesCS";
    _DAT_14c9f8b58 = FUN_146826540;
    _DAT_14c9f8b60 = FUN_146825d77;
    _DAT_14c9f8b68 = FUN_146825fd6;
    _DAT_14c9f8b70 = FUN_1407e02ea;
    _DAT_14c9f8b78 = FUN_146826273;
    _DAT_14c9f8b50 = FUN_147204a92;
    _DAT_14c9f8b90 = 0xffffffff000000e0;
    _DAT_14c9f8b98 = 8;
    DAT_14c9f8b9c = 0;
    _DAT_14c9f8b80 = &LAB_147204abc;
    FUN_145f20d96();
    FUN_1407e00cc(&DAT_14c9f8b38);
    return;
  }
  return;
}



// FUNCTION 145f20d96 FUN_145f20d96 body=123 status=ok
// SIG undefined FUN_145f20d96(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f20d96(void)

{
  _DAT_14c9ffb88 = L"BASE";
  DAT_14c9ffbb2 = 4;
  _DAT_14c9ffb90 = FUN_140b35ae4();
  _DAT_14c9ffb98 = DAT_14c9f8b48;
  _DAT_14c9ffba0 = &LAB_14682652b;
  DAT_14c9f8b48 = &DAT_14c9ffb88;
  DAT_14c9f8b9d = DAT_14c9f8b9d + '\x01';
  _DAT_14c9ffba8 = 0x100000000;
  if (*(char *)(_DAT_14c9ffb90 + 100) != '\0') {
    DAT_14c9f8b9e = DAT_14c9f8b9e + '\x01';
  }
  return;
}



// FUNCTION 145f20e12 FUN_145f20e12 body=226 status=ok
// SIG undefined FUN_145f20e12(void)

longlong * FUN_145f20e12(longlong *param_1)

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
  pcVar13 = FUN_1462e1b62;
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



// FUNCTION 145f20ef6 FUN_145f20ef6 body=132 status=ok
// SIG undefined FUN_145f20ef6(void)

undefined1 * FUN_145f20ef6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"IndirectArgBuffer";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x185;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xf;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147209bb2;
}



// FUNCTION 145f20f7a FUN_145f20f7a body=138 status=ok
// SIG undefined FUN_145f20f7a(void)

code * FUN_145f20f7a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWCardTileDepthRanges";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000188;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f21004;
}



// FUNCTION 145f21004 FUN_145f21004 body=146 status=ok
// SIG undefined FUN_145f21004(void)

code * FUN_145f21004(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1449a4512();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LumenCardScene";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FLumenCardScene";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000187;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9fbc20;
  return FUN_1462e1bea;
}



// FUNCTION 145f21096 FUN_145f21096 body=284 status=ok
// SIG undefined FUN_145f21096(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f21096(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca50930) {
    FUN_144b3d300(&DAT_14ca50930);
    if (DAT_14ca50930 == -1) {
      FUN_145f211b2();
      FUN_140db5666(&DAT_14ca50888,0,&DAT_14ca50820,L"FShadowProjectionPS1falsetruefalse",
                    L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,4,FUN_1472eef3a,
                    FUN_1472eef12,&LAB_1472eeecc,&LAB_1472eeec8,&LAB_14712ac0c,&LAB_14712ac08,0x148,
                    0);
      _DAT_14ca50888 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143049b1a);
      _Init_thread_footer(&DAT_14ca50930);
    }
  }
  return &DAT_14ca50888;
}



// FUNCTION 145f211b2 FUN_145f211b2 body=210 status=ok
// SIG undefined FUN_145f211b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f211b2(void)

{
  if ((DAT_14ca50887 & 2) == 0) {
    DAT_14ca50887 = DAT_14ca50887 | 2;
    _DAT_14ca50828 = L"FShadowProjectionPS1falsetruefalse";
    _DAT_14ca50840 = FUN_146826540;
    _DAT_14ca50848 = FUN_146825d77;
    _DAT_14ca50850 = FUN_146825fd6;
    _DAT_14ca50858 = FUN_1407e02ea;
    _DAT_14ca50860 = FUN_146826273;
    _DAT_14ca50838 = FUN_1472eee98;
    _DAT_14ca50878 = 0xffffffff00000148;
    _DAT_14ca50880 = 8;
    DAT_14ca50884 = 0;
    _DAT_14ca50868 = &LAB_1472eeec4;
    FUN_145f21284();
    FUN_145f21378();
    FUN_1407e00cc(&DAT_14ca50820);
    return;
  }
  return;
}



// FUNCTION 145f21284 FUN_145f21284 body=121 status=ok
// SIG undefined FUN_145f21284(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f21284(void)

{
  FUN_145f212fe();
  _DAT_14ca577e0 = L"ProjectionParameters";
  DAT_14ca5780a = FUN_140850cc5();
  _DAT_14ca577e8 = FUN_14142e7bc();
  _DAT_14ca577f8 = &LAB_14682652b;
  _DAT_14ca57800 = 0x1000000e0;
  _DAT_14ca57808 = 0;
  _DAT_14ca577f0 = DAT_14ca50830;
  DAT_14ca50830 = &DAT_14ca577e0;
  return;
}



// FUNCTION 145f212fe FUN_145f212fe body=121 status=ok
// SIG undefined FUN_145f212fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f212fe(void)

{
  FUN_145f213fe();
  _DAT_14ca57810 = L"ShadowFadeFraction";
  DAT_14ca5783a = FUN_140850cc5();
  _DAT_14ca57818 = FUN_140ec6960();
  _DAT_14ca57828 = &LAB_14682652b;
  _DAT_14ca57830 = 0x100000130;
  _DAT_14ca57838 = 0;
  _DAT_14ca57820 = DAT_14ca50830;
  DAT_14ca50830 = &DAT_14ca57810;
  return;
}



// FUNCTION 145f21378 FUN_145f21378 body=133 status=ok
// SIG undefined FUN_145f21378(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f21378(void)

{
  _DAT_14ca578a0 = L"BASE";
  DAT_14ca578ca = 4;
  FUN_1411c95a0();
  _DAT_14ca578b0 = DAT_14ca50830;
  _DAT_14ca578a8 = &DAT_14ca4ff98;
  _DAT_14ca578b8 = &LAB_14682652b;
  DAT_14ca50830 = &DAT_14ca578a0;
  DAT_14ca50885 = DAT_14ca50885 + '\x01';
  _DAT_14ca578c0 = 0x100000000;
  if (DAT_14ca4fffc != '\0') {
    DAT_14ca50886 = DAT_14ca50886 + '\x01';
  }
  return;
}



// FUNCTION 145f213fe FUN_145f213fe body=216 status=ok
// SIG undefined FUN_145f213fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f213fe(void)

{
  _DAT_14ca57870 = L"LightPosition";
  DAT_14ca5789a = FUN_140850cc5();
  _DAT_14ca57878 = FUN_140ec6960();
  _DAT_14ca57888 = &LAB_14682652b;
  _DAT_14ca57890 = 0x10000013c;
  _DAT_14ca57898 = 0;
  _DAT_14ca57880 = DAT_14ca50830;
  DAT_14ca50830 = &DAT_14ca57870;
  _DAT_14ca57840 = L"ShadowSharpen";
  DAT_14ca5786a = FUN_140850cc5();
  _DAT_14ca57848 = FUN_140ec6960();
  _DAT_14ca57858 = &LAB_14682652b;
  _DAT_14ca57860 = 0x100000136;
  _DAT_14ca57868 = 0;
  _DAT_14ca57850 = DAT_14ca50830;
  DAT_14ca50830 = &DAT_14ca57840;
  return;
}



// FUNCTION 145f214d6 FUN_145f214d6 body=284 status=ok
// SIG undefined FUN_145f214d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f214d6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca50a58) {
    FUN_144b3d300(&DAT_14ca50a58);
    if (DAT_14ca50a58 == -1) {
      FUN_145f215f2();
      FUN_140db5666(&DAT_14ca509b0,0,&DAT_14ca50948,L"FShadowProjectionPS2falsetruefalse",
                    L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,4,FUN_1472ef09a,
                    FUN_1472ef072,&LAB_1472ef02c,&LAB_1472ef028,&LAB_14712ac0c,&LAB_14712ac08,0x148,
                    0);
      _DAT_14ca509b0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143049b26);
      _Init_thread_footer(&DAT_14ca50a58);
    }
  }
  return &DAT_14ca509b0;
}



// FUNCTION 145f215f2 FUN_145f215f2 body=210 status=ok
// SIG undefined FUN_145f215f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f215f2(void)

{
  if ((DAT_14ca509af & 2) == 0) {
    DAT_14ca509af = DAT_14ca509af | 2;
    _DAT_14ca50950 = L"FShadowProjectionPS2falsetruefalse";
    _DAT_14ca50968 = FUN_146826540;
    _DAT_14ca50970 = FUN_146825d77;
    _DAT_14ca50978 = FUN_146825fd6;
    _DAT_14ca50980 = FUN_1407e02ea;
    _DAT_14ca50988 = FUN_146826273;
    _DAT_14ca50960 = FUN_1472eeff8;
    _DAT_14ca509a0 = 0xffffffff00000148;
    _DAT_14ca509a8 = 8;
    DAT_14ca509ac = 0;
    _DAT_14ca50990 = &LAB_1472ef024;
    FUN_145f216c4();
    FUN_145f217b8();
    FUN_1407e00cc(&DAT_14ca50948);
    return;
  }
  return;
}



// FUNCTION 145f216c4 FUN_145f216c4 body=121 status=ok
// SIG undefined FUN_145f216c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f216c4(void)

{
  FUN_145f2173e();
  _DAT_14ca578d0 = L"ProjectionParameters";
  DAT_14ca578fa = FUN_140850cc5();
  _DAT_14ca578d8 = FUN_14142e7bc();
  _DAT_14ca578e8 = &LAB_14682652b;
  _DAT_14ca578f0 = 0x1000000e0;
  _DAT_14ca578f8 = 0;
  _DAT_14ca578e0 = DAT_14ca50958;
  DAT_14ca50958 = &DAT_14ca578d0;
  return;
}



// FUNCTION 145f2173e FUN_145f2173e body=121 status=ok
// SIG undefined FUN_145f2173e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f2173e(void)

{
  FUN_145f2183e();
  _DAT_14ca57900 = L"ShadowFadeFraction";
  DAT_14ca5792a = FUN_140850cc5();
  _DAT_14ca57908 = FUN_140ec6960();
  _DAT_14ca57918 = &LAB_14682652b;
  _DAT_14ca57920 = 0x100000130;
  _DAT_14ca57928 = 0;
  _DAT_14ca57910 = DAT_14ca50958;
  DAT_14ca50958 = &DAT_14ca57900;
  return;
}



// FUNCTION 145f217b8 FUN_145f217b8 body=133 status=ok
// SIG undefined FUN_145f217b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f217b8(void)

{
  _DAT_14ca57990 = L"BASE";
  DAT_14ca579ba = 4;
  FUN_1411c95a0();
  _DAT_14ca579a0 = DAT_14ca50958;
  _DAT_14ca57998 = &DAT_14ca4ff98;
  _DAT_14ca579a8 = &LAB_14682652b;
  DAT_14ca50958 = &DAT_14ca57990;
  DAT_14ca509ad = DAT_14ca509ad + '\x01';
  _DAT_14ca579b0 = 0x100000000;
  if (DAT_14ca4fffc != '\0') {
    DAT_14ca509ae = DAT_14ca509ae + '\x01';
  }
  return;
}



// FUNCTION 145f2183e FUN_145f2183e body=216 status=ok
// SIG undefined FUN_145f2183e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f2183e(void)

{
  _DAT_14ca57960 = L"LightPosition";
  DAT_14ca5798a = FUN_140850cc5();
  _DAT_14ca57968 = FUN_140ec6960();
  _DAT_14ca57978 = &LAB_14682652b;
  _DAT_14ca57980 = 0x10000013c;
  _DAT_14ca57988 = 0;
  _DAT_14ca57970 = DAT_14ca50958;
  DAT_14ca50958 = &DAT_14ca57960;
  _DAT_14ca57930 = L"ShadowSharpen";
  DAT_14ca5795a = FUN_140850cc5();
  _DAT_14ca57938 = FUN_140ec6960();
  _DAT_14ca57948 = &LAB_14682652b;
  _DAT_14ca57950 = 0x100000136;
  _DAT_14ca57958 = 0;
  _DAT_14ca57940 = DAT_14ca50958;
  DAT_14ca50958 = &DAT_14ca57930;
  return;
}



// FUNCTION 145f21916 FUN_145f21916 body=284 status=ok
// SIG undefined FUN_145f21916(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f21916(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca50b80) {
    FUN_144b3d300(&DAT_14ca50b80);
    if (DAT_14ca50b80 == -1) {
      FUN_145f21a32();
      FUN_140db5666(&DAT_14ca50ad8,0,&DAT_14ca50a70,L"FShadowProjectionPS3falsetruefalse",
                    L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,4,FUN_1472ef1fa,
                    FUN_1472ef1d2,&LAB_1472ef18c,&LAB_1472ef188,&LAB_14712ac0c,&LAB_14712ac08,0x148,
                    0);
      _DAT_14ca50ad8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143049b32);
      _Init_thread_footer(&DAT_14ca50b80);
    }
  }
  return &DAT_14ca50ad8;
}



// FUNCTION 145f21a32 FUN_145f21a32 body=210 status=ok
// SIG undefined FUN_145f21a32(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f21a32(void)

{
  if ((DAT_14ca50ad7 & 2) == 0) {
    DAT_14ca50ad7 = DAT_14ca50ad7 | 2;
    _DAT_14ca50a78 = L"FShadowProjectionPS3falsetruefalse";
    _DAT_14ca50a90 = FUN_146826540;
    _DAT_14ca50a98 = FUN_146825d77;
    _DAT_14ca50aa0 = FUN_146825fd6;
    _DAT_14ca50aa8 = FUN_1407e02ea;
    _DAT_14ca50ab0 = FUN_146826273;
    _DAT_14ca50a88 = FUN_1472ef158;
    _DAT_14ca50ac8 = 0xffffffff00000148;
    _DAT_14ca50ad0 = 8;
    DAT_14ca50ad4 = 0;
    _DAT_14ca50ab8 = &LAB_1472ef184;
    FUN_145f21b04();
    FUN_145f21bf8();
    FUN_1407e00cc(&DAT_14ca50a70);
    return;
  }
  return;
}



// FUNCTION 145f21b04 FUN_145f21b04 body=121 status=ok
// SIG undefined FUN_145f21b04(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f21b04(void)

{
  FUN_145f21b7e();
  _DAT_14ca579c0 = L"ProjectionParameters";
  DAT_14ca579ea = FUN_140850cc5();
  _DAT_14ca579c8 = FUN_14142e7bc();
  _DAT_14ca579d8 = &LAB_14682652b;
  _DAT_14ca579e0 = 0x1000000e0;
  _DAT_14ca579e8 = 0;
  _DAT_14ca579d0 = DAT_14ca50a80;
  DAT_14ca50a80 = &DAT_14ca579c0;
  return;
}



// FUNCTION 145f21b7e FUN_145f21b7e body=121 status=ok
// SIG undefined FUN_145f21b7e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f21b7e(void)

{
  FUN_145f21c7e();
  _DAT_14ca579f0 = L"ShadowFadeFraction";
  DAT_14ca57a1a = FUN_140850cc5();
  _DAT_14ca579f8 = FUN_140ec6960();
  _DAT_14ca57a08 = &LAB_14682652b;
  _DAT_14ca57a10 = 0x100000130;
  _DAT_14ca57a18 = 0;
  _DAT_14ca57a00 = DAT_14ca50a80;
  DAT_14ca50a80 = &DAT_14ca579f0;
  return;
}



// FUNCTION 145f21bf8 FUN_145f21bf8 body=133 status=ok
// SIG undefined FUN_145f21bf8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f21bf8(void)

{
  _DAT_14ca57a80 = L"BASE";
  DAT_14ca57aaa = 4;
  FUN_1411c95a0();
  _DAT_14ca57a90 = DAT_14ca50a80;
  _DAT_14ca57a88 = &DAT_14ca4ff98;
  _DAT_14ca57a98 = &LAB_14682652b;
  DAT_14ca50a80 = &DAT_14ca57a80;
  DAT_14ca50ad5 = DAT_14ca50ad5 + '\x01';
  _DAT_14ca57aa0 = 0x100000000;
  if (DAT_14ca4fffc != '\0') {
    DAT_14ca50ad6 = DAT_14ca50ad6 + '\x01';
  }
  return;
}



// FUNCTION 145f21c7e FUN_145f21c7e body=216 status=ok
// SIG undefined FUN_145f21c7e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f21c7e(void)

{
  _DAT_14ca57a50 = L"LightPosition";
  DAT_14ca57a7a = FUN_140850cc5();
  _DAT_14ca57a58 = FUN_140ec6960();
  _DAT_14ca57a68 = &LAB_14682652b;
  _DAT_14ca57a70 = 0x10000013c;
  _DAT_14ca57a78 = 0;
  _DAT_14ca57a60 = DAT_14ca50a80;
  DAT_14ca50a80 = &DAT_14ca57a50;
  _DAT_14ca57a20 = L"ShadowSharpen";
  DAT_14ca57a4a = FUN_140850cc5();
  _DAT_14ca57a28 = FUN_140ec6960();
  _DAT_14ca57a38 = &LAB_14682652b;
  _DAT_14ca57a40 = 0x100000136;
  _DAT_14ca57a48 = 0;
  _DAT_14ca57a30 = DAT_14ca50a80;
  DAT_14ca50a80 = &DAT_14ca57a20;
  return;
}



// FUNCTION 145f21d56 FUN_145f21d56 body=284 status=ok
// SIG undefined FUN_145f21d56(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f21d56(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca50ca8) {
    FUN_144b3d300(&DAT_14ca50ca8);
    if (DAT_14ca50ca8 == -1) {
      FUN_145f21e72();
      FUN_140db5666(&DAT_14ca50c00,0,&DAT_14ca50b98,L"FShadowProjectionPS4falsetruefalse",
                    L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,4,FUN_1472ef35a,
                    FUN_1472ef332,&LAB_1472ef2ec,&LAB_1472ef2e8,&LAB_14712ac0c,&LAB_14712ac08,0x148,
                    0);
      _DAT_14ca50c00 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143049b3e);
      _Init_thread_footer(&DAT_14ca50ca8);
    }
  }
  return &DAT_14ca50c00;
}



// FUNCTION 145f21e72 FUN_145f21e72 body=210 status=ok
// SIG undefined FUN_145f21e72(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f21e72(void)

{
  if ((DAT_14ca50bff & 2) == 0) {
    DAT_14ca50bff = DAT_14ca50bff | 2;
    _DAT_14ca50ba0 = L"FShadowProjectionPS4falsetruefalse";
    _DAT_14ca50bb8 = FUN_146826540;
    _DAT_14ca50bc0 = FUN_146825d77;
    _DAT_14ca50bc8 = FUN_146825fd6;
    _DAT_14ca50bd0 = FUN_1407e02ea;
    _DAT_14ca50bd8 = FUN_146826273;
    _DAT_14ca50bb0 = FUN_1472ef2b8;
    _DAT_14ca50bf0 = 0xffffffff00000148;
    _DAT_14ca50bf8 = 8;
    DAT_14ca50bfc = 0;
    _DAT_14ca50be0 = &LAB_1472ef2e4;
    FUN_145f21f44();
    FUN_145f22038();
    FUN_1407e00cc(&DAT_14ca50b98);
    return;
  }
  return;
}



// FUNCTION 145f21f44 FUN_145f21f44 body=121 status=ok
// SIG undefined FUN_145f21f44(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f21f44(void)

{
  FUN_145f21fbe();
  _DAT_14ca57ab0 = L"ProjectionParameters";
  DAT_14ca57ada = FUN_140850cc5();
  _DAT_14ca57ab8 = FUN_14142e7bc();
  _DAT_14ca57ac8 = &LAB_14682652b;
  _DAT_14ca57ad0 = 0x1000000e0;
  _DAT_14ca57ad8 = 0;
  _DAT_14ca57ac0 = DAT_14ca50ba8;
  DAT_14ca50ba8 = &DAT_14ca57ab0;
  return;
}



// FUNCTION 145f21fbe FUN_145f21fbe body=121 status=ok
// SIG undefined FUN_145f21fbe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f21fbe(void)

{
  FUN_145f220be();
  _DAT_14ca57ae0 = L"ShadowFadeFraction";
  DAT_14ca57b0a = FUN_140850cc5();
  _DAT_14ca57ae8 = FUN_140ec6960();
  _DAT_14ca57af8 = &LAB_14682652b;
  _DAT_14ca57b00 = 0x100000130;
  _DAT_14ca57b08 = 0;
  _DAT_14ca57af0 = DAT_14ca50ba8;
  DAT_14ca50ba8 = &DAT_14ca57ae0;
  return;
}



// FUNCTION 145f22038 FUN_145f22038 body=133 status=ok
// SIG undefined FUN_145f22038(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f22038(void)

{
  _DAT_14ca57b70 = L"BASE";
  DAT_14ca57b9a = 4;
  FUN_1411c95a0();
  _DAT_14ca57b80 = DAT_14ca50ba8;
  _DAT_14ca57b78 = &DAT_14ca4ff98;
  _DAT_14ca57b88 = &LAB_14682652b;
  DAT_14ca50ba8 = &DAT_14ca57b70;
  DAT_14ca50bfd = DAT_14ca50bfd + '\x01';
  _DAT_14ca57b90 = 0x100000000;
  if (DAT_14ca4fffc != '\0') {
    DAT_14ca50bfe = DAT_14ca50bfe + '\x01';
  }
  return;
}



// FUNCTION 145f220be FUN_145f220be body=216 status=ok
// SIG undefined FUN_145f220be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f220be(void)

{
  _DAT_14ca57b40 = L"LightPosition";
  DAT_14ca57b6a = FUN_140850cc5();
  _DAT_14ca57b48 = FUN_140ec6960();
  _DAT_14ca57b58 = &LAB_14682652b;
  _DAT_14ca57b60 = 0x10000013c;
  _DAT_14ca57b68 = 0;
  _DAT_14ca57b50 = DAT_14ca50ba8;
  DAT_14ca50ba8 = &DAT_14ca57b40;
  _DAT_14ca57b10 = L"ShadowSharpen";
  DAT_14ca57b3a = FUN_140850cc5();
  _DAT_14ca57b18 = FUN_140ec6960();
  _DAT_14ca57b28 = &LAB_14682652b;
  _DAT_14ca57b30 = 0x100000136;
  _DAT_14ca57b38 = 0;
  _DAT_14ca57b20 = DAT_14ca50ba8;
  DAT_14ca50ba8 = &DAT_14ca57b10;
  return;
}



// FUNCTION 145f22196 FUN_145f22196 body=284 status=ok
// SIG undefined FUN_145f22196(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f22196(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca50dd0) {
    FUN_144b3d300(&DAT_14ca50dd0);
    if (DAT_14ca50dd0 == -1) {
      FUN_145f222b2();
      FUN_140db5666(&DAT_14ca50d28,0,&DAT_14ca50cc0,L"FShadowProjectionPS5falsetruefalse",
                    L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,4,FUN_1472ef4ba,
                    FUN_1472ef492,&LAB_1472ef44c,&LAB_1472ef448,&LAB_14712ac0c,&LAB_14712ac08,0x148,
                    0);
      _DAT_14ca50d28 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143049b4a);
      _Init_thread_footer(&DAT_14ca50dd0);
    }
  }
  return &DAT_14ca50d28;
}



// FUNCTION 145f222b2 FUN_145f222b2 body=210 status=ok
// SIG undefined FUN_145f222b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f222b2(void)

{
  if ((DAT_14ca50d27 & 2) == 0) {
    DAT_14ca50d27 = DAT_14ca50d27 | 2;
    _DAT_14ca50cc8 = L"FShadowProjectionPS5falsetruefalse";
    _DAT_14ca50ce0 = FUN_146826540;
    _DAT_14ca50ce8 = FUN_146825d77;
    _DAT_14ca50cf0 = FUN_146825fd6;
    _DAT_14ca50cf8 = FUN_1407e02ea;
    _DAT_14ca50d00 = FUN_146826273;
    _DAT_14ca50cd8 = FUN_1472ef418;
    _DAT_14ca50d18 = 0xffffffff00000148;
    _DAT_14ca50d20 = 8;
    DAT_14ca50d24 = 0;
    _DAT_14ca50d08 = &LAB_1472ef444;
    FUN_145f22384();
    FUN_145f22478();
    FUN_1407e00cc(&DAT_14ca50cc0);
    return;
  }
  return;
}



// FUNCTION 145f22384 FUN_145f22384 body=121 status=ok
// SIG undefined FUN_145f22384(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f22384(void)

{
  FUN_145f223fe();
  _DAT_14ca57ba0 = L"ProjectionParameters";
  DAT_14ca57bca = FUN_140850cc5();
  _DAT_14ca57ba8 = FUN_14142e7bc();
  _DAT_14ca57bb8 = &LAB_14682652b;
  _DAT_14ca57bc0 = 0x1000000e0;
  _DAT_14ca57bc8 = 0;
  _DAT_14ca57bb0 = DAT_14ca50cd0;
  DAT_14ca50cd0 = &DAT_14ca57ba0;
  return;
}



// FUNCTION 145f223fe FUN_145f223fe body=121 status=ok
// SIG undefined FUN_145f223fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f223fe(void)

{
  FUN_145f224fe();
  _DAT_14ca57bd0 = L"ShadowFadeFraction";
  DAT_14ca57bfa = FUN_140850cc5();
  _DAT_14ca57bd8 = FUN_140ec6960();
  _DAT_14ca57be8 = &LAB_14682652b;
  _DAT_14ca57bf0 = 0x100000130;
  _DAT_14ca57bf8 = 0;
  _DAT_14ca57be0 = DAT_14ca50cd0;
  DAT_14ca50cd0 = &DAT_14ca57bd0;
  return;
}



// FUNCTION 145f22478 FUN_145f22478 body=133 status=ok
// SIG undefined FUN_145f22478(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f22478(void)

{
  _DAT_14ca57c60 = L"BASE";
  DAT_14ca57c8a = 4;
  FUN_1411c95a0();
  _DAT_14ca57c70 = DAT_14ca50cd0;
  _DAT_14ca57c68 = &DAT_14ca4ff98;
  _DAT_14ca57c78 = &LAB_14682652b;
  DAT_14ca50cd0 = &DAT_14ca57c60;
  DAT_14ca50d25 = DAT_14ca50d25 + '\x01';
  _DAT_14ca57c80 = 0x100000000;
  if (DAT_14ca4fffc != '\0') {
    DAT_14ca50d26 = DAT_14ca50d26 + '\x01';
  }
  return;
}



// FUNCTION 145f224fe FUN_145f224fe body=216 status=ok
// SIG undefined FUN_145f224fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f224fe(void)

{
  _DAT_14ca57c30 = L"LightPosition";
  DAT_14ca57c5a = FUN_140850cc5();
  _DAT_14ca57c38 = FUN_140ec6960();
  _DAT_14ca57c48 = &LAB_14682652b;
  _DAT_14ca57c50 = 0x10000013c;
  _DAT_14ca57c58 = 0;
  _DAT_14ca57c40 = DAT_14ca50cd0;
  DAT_14ca50cd0 = &DAT_14ca57c30;
  _DAT_14ca57c00 = L"ShadowSharpen";
  DAT_14ca57c2a = FUN_140850cc5();
  _DAT_14ca57c08 = FUN_140ec6960();
  _DAT_14ca57c18 = &LAB_14682652b;
  _DAT_14ca57c20 = 0x100000136;
  _DAT_14ca57c28 = 0;
  _DAT_14ca57c10 = DAT_14ca50cd0;
  DAT_14ca50cd0 = &DAT_14ca57c00;
  return;
}



// FUNCTION 145f225d6 FUN_145f225d6 body=284 status=ok
// SIG undefined FUN_145f225d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f225d6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca50ef8) {
    FUN_144b3d300(&DAT_14ca50ef8);
    if (DAT_14ca50ef8 == -1) {
      FUN_145f226f2();
      FUN_140db5666(&DAT_14ca50e50,0,&DAT_14ca50de8,L"FShadowProjectionPS1truefalsefalse",
                    L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,4,FUN_1472ef620,
                    FUN_1472ef5f8,&LAB_1472ef5ac,&LAB_1472ef5a8,&LAB_14712ac0c,&LAB_14712ac08,0x148,
                    0);
      _DAT_14ca50e50 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143049b56);
      _Init_thread_footer(&DAT_14ca50ef8);
    }
  }
  return &DAT_14ca50e50;
}



// FUNCTION 145f226f2 FUN_145f226f2 body=210 status=ok
// SIG undefined FUN_145f226f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f226f2(void)

{
  if ((DAT_14ca50e4f & 2) == 0) {
    DAT_14ca50e4f = DAT_14ca50e4f | 2;
    _DAT_14ca50df0 = L"FShadowProjectionPS1truefalsefalse";
    _DAT_14ca50e08 = FUN_146826540;
    _DAT_14ca50e10 = FUN_146825d77;
    _DAT_14ca50e18 = FUN_146825fd6;
    _DAT_14ca50e20 = FUN_1407e02ea;
    _DAT_14ca50e28 = FUN_146826273;
    _DAT_14ca50e00 = FUN_1472ef578;
    _DAT_14ca50e40 = 0xffffffff00000148;
    _DAT_14ca50e48 = 8;
    DAT_14ca50e4c = 0;
    _DAT_14ca50e30 = &LAB_1472ef5a4;
    FUN_145f227c4();
    FUN_145f228b8();
    FUN_1407e00cc(&DAT_14ca50de8);
    return;
  }
  return;
}



// FUNCTION 145f227c4 FUN_145f227c4 body=121 status=ok
// SIG undefined FUN_145f227c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f227c4(void)

{
  FUN_145f2283e();
  _DAT_14ca57c90 = L"ProjectionParameters";
  DAT_14ca57cba = FUN_140850cc5();
  _DAT_14ca57c98 = FUN_14142e7bc();
  _DAT_14ca57ca8 = &LAB_14682652b;
  _DAT_14ca57cb0 = 0x1000000e0;
  _DAT_14ca57cb8 = 0;
  _DAT_14ca57ca0 = DAT_14ca50df8;
  DAT_14ca50df8 = &DAT_14ca57c90;
  return;
}



// FUNCTION 145f2283e FUN_145f2283e body=121 status=ok
// SIG undefined FUN_145f2283e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f2283e(void)

{
  FUN_145f2293e();
  _DAT_14ca57cc0 = L"ShadowFadeFraction";
  DAT_14ca57cea = FUN_140850cc5();
  _DAT_14ca57cc8 = FUN_140ec6960();
  _DAT_14ca57cd8 = &LAB_14682652b;
  _DAT_14ca57ce0 = 0x100000130;
  _DAT_14ca57ce8 = 0;
  _DAT_14ca57cd0 = DAT_14ca50df8;
  DAT_14ca50df8 = &DAT_14ca57cc0;
  return;
}



// FUNCTION 145f228b8 FUN_145f228b8 body=133 status=ok
// SIG undefined FUN_145f228b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f228b8(void)

{
  _DAT_14ca57d50 = L"BASE";
  DAT_14ca57d7a = 4;
  FUN_1411c95a0();
  _DAT_14ca57d60 = DAT_14ca50df8;
  _DAT_14ca57d58 = &DAT_14ca4ff98;
  _DAT_14ca57d68 = &LAB_14682652b;
  DAT_14ca50df8 = &DAT_14ca57d50;
  DAT_14ca50e4d = DAT_14ca50e4d + '\x01';
  _DAT_14ca57d70 = 0x100000000;
  if (DAT_14ca4fffc != '\0') {
    DAT_14ca50e4e = DAT_14ca50e4e + '\x01';
  }
  return;
}



// FUNCTION 145f2293e FUN_145f2293e body=216 status=ok
// SIG undefined FUN_145f2293e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f2293e(void)

{
  _DAT_14ca57d20 = L"LightPosition";
  DAT_14ca57d4a = FUN_140850cc5();
  _DAT_14ca57d28 = FUN_140ec6960();
  _DAT_14ca57d38 = &LAB_14682652b;
  _DAT_14ca57d40 = 0x10000013c;
  _DAT_14ca57d48 = 0;
  _DAT_14ca57d30 = DAT_14ca50df8;
  DAT_14ca50df8 = &DAT_14ca57d20;
  _DAT_14ca57cf0 = L"ShadowSharpen";
  DAT_14ca57d1a = FUN_140850cc5();
  _DAT_14ca57cf8 = FUN_140ec6960();
  _DAT_14ca57d08 = &LAB_14682652b;
  _DAT_14ca57d10 = 0x100000136;
  _DAT_14ca57d18 = 0;
  _DAT_14ca57d00 = DAT_14ca50df8;
  DAT_14ca50df8 = &DAT_14ca57cf0;
  return;
}



// FUNCTION 145f22a16 FUN_145f22a16 body=284 status=ok
// SIG undefined FUN_145f22a16(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f22a16(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca51020) {
    FUN_144b3d300(&DAT_14ca51020);
    if (DAT_14ca51020 == -1) {
      FUN_145f22b32();
      FUN_140db5666(&DAT_14ca50f78,0,&DAT_14ca50f10,L"FShadowProjectionPS2truefalsefalse",
                    L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,4,FUN_1472ef786,
                    FUN_1472ef75e,&LAB_1472ef712,&LAB_1472ef70e,&LAB_14712ac0c,&LAB_14712ac08,0x148,
                    0);
      _DAT_14ca50f78 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143049b62);
      _Init_thread_footer(&DAT_14ca51020);
    }
  }
  return &DAT_14ca50f78;
}



// FUNCTION 145f22b32 FUN_145f22b32 body=210 status=ok
// SIG undefined FUN_145f22b32(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f22b32(void)

{
  if ((DAT_14ca50f77 & 2) == 0) {
    DAT_14ca50f77 = DAT_14ca50f77 | 2;
    _DAT_14ca50f18 = L"FShadowProjectionPS2truefalsefalse";
    _DAT_14ca50f30 = FUN_146826540;
    _DAT_14ca50f38 = FUN_146825d77;
    _DAT_14ca50f40 = FUN_146825fd6;
    _DAT_14ca50f48 = FUN_1407e02ea;
    _DAT_14ca50f50 = FUN_146826273;
    _DAT_14ca50f28 = FUN_1472ef6de;
    _DAT_14ca50f68 = 0xffffffff00000148;
    _DAT_14ca50f70 = 8;
    DAT_14ca50f74 = 0;
    _DAT_14ca50f58 = &LAB_1472ef70a;
    FUN_145f22c04();
    FUN_145f22cf8();
    FUN_1407e00cc(&DAT_14ca50f10);
    return;
  }
  return;
}



// FUNCTION 145f22c04 FUN_145f22c04 body=121 status=ok
// SIG undefined FUN_145f22c04(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f22c04(void)

{
  FUN_145f22c7e();
  _DAT_14ca57d80 = L"ProjectionParameters";
  DAT_14ca57daa = FUN_140850cc5();
  _DAT_14ca57d88 = FUN_14142e7bc();
  _DAT_14ca57d98 = &LAB_14682652b;
  _DAT_14ca57da0 = 0x1000000e0;
  _DAT_14ca57da8 = 0;
  _DAT_14ca57d90 = DAT_14ca50f20;
  DAT_14ca50f20 = &DAT_14ca57d80;
  return;
}



// FUNCTION 145f22c7e FUN_145f22c7e body=121 status=ok
// SIG undefined FUN_145f22c7e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f22c7e(void)

{
  FUN_145f22d7e();
  _DAT_14ca57db0 = L"ShadowFadeFraction";
  DAT_14ca57dda = FUN_140850cc5();
  _DAT_14ca57db8 = FUN_140ec6960();
  _DAT_14ca57dc8 = &LAB_14682652b;
  _DAT_14ca57dd0 = 0x100000130;
  _DAT_14ca57dd8 = 0;
  _DAT_14ca57dc0 = DAT_14ca50f20;
  DAT_14ca50f20 = &DAT_14ca57db0;
  return;
}



// FUNCTION 145f22cf8 FUN_145f22cf8 body=133 status=ok
// SIG undefined FUN_145f22cf8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f22cf8(void)

{
  _DAT_14ca57e40 = L"BASE";
  DAT_14ca57e6a = 4;
  FUN_1411c95a0();
  _DAT_14ca57e50 = DAT_14ca50f20;
  _DAT_14ca57e48 = &DAT_14ca4ff98;
  _DAT_14ca57e58 = &LAB_14682652b;
  DAT_14ca50f20 = &DAT_14ca57e40;
  DAT_14ca50f75 = DAT_14ca50f75 + '\x01';
  _DAT_14ca57e60 = 0x100000000;
  if (DAT_14ca4fffc != '\0') {
    DAT_14ca50f76 = DAT_14ca50f76 + '\x01';
  }
  return;
}



// FUNCTION 145f22d7e FUN_145f22d7e body=216 status=ok
// SIG undefined FUN_145f22d7e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f22d7e(void)

{
  _DAT_14ca57e10 = L"LightPosition";
  DAT_14ca57e3a = FUN_140850cc5();
  _DAT_14ca57e18 = FUN_140ec6960();
  _DAT_14ca57e28 = &LAB_14682652b;
  _DAT_14ca57e30 = 0x10000013c;
  _DAT_14ca57e38 = 0;
  _DAT_14ca57e20 = DAT_14ca50f20;
  DAT_14ca50f20 = &DAT_14ca57e10;
  _DAT_14ca57de0 = L"ShadowSharpen";
  DAT_14ca57e0a = FUN_140850cc5();
  _DAT_14ca57de8 = FUN_140ec6960();
  _DAT_14ca57df8 = &LAB_14682652b;
  _DAT_14ca57e00 = 0x100000136;
  _DAT_14ca57e08 = 0;
  _DAT_14ca57df0 = DAT_14ca50f20;
  DAT_14ca50f20 = &DAT_14ca57de0;
  return;
}



// FUNCTION 145f22e56 FUN_145f22e56 body=284 status=ok
// SIG undefined FUN_145f22e56(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f22e56(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca51148) {
    FUN_144b3d300(&DAT_14ca51148);
    if (DAT_14ca51148 == -1) {
      FUN_145f22f72();
      FUN_140db5666(&DAT_14ca510a0,0,&DAT_14ca51038,L"FShadowProjectionPS3truefalsefalse",
                    L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,4,FUN_1472ef8ec,
                    FUN_1472ef8c4,&LAB_1472ef878,&LAB_1472ef874,&LAB_14712ac0c,&LAB_14712ac08,0x148,
                    0);
      _DAT_14ca510a0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143049b6e);
      _Init_thread_footer(&DAT_14ca51148);
    }
  }
  return &DAT_14ca510a0;
}



// FUNCTION 145f22f72 FUN_145f22f72 body=210 status=ok
// SIG undefined FUN_145f22f72(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f22f72(void)

{
  if ((DAT_14ca5109f & 2) == 0) {
    DAT_14ca5109f = DAT_14ca5109f | 2;
    _DAT_14ca51040 = L"FShadowProjectionPS3truefalsefalse";
    _DAT_14ca51058 = FUN_146826540;
    _DAT_14ca51060 = FUN_146825d77;
    _DAT_14ca51068 = FUN_146825fd6;
    _DAT_14ca51070 = FUN_1407e02ea;
    _DAT_14ca51078 = FUN_146826273;
    _DAT_14ca51050 = FUN_1472ef844;
    _DAT_14ca51090 = 0xffffffff00000148;
    _DAT_14ca51098 = 8;
    DAT_14ca5109c = 0;
    _DAT_14ca51080 = &LAB_1472ef870;
    FUN_145f23044();
    FUN_145f23138();
    FUN_1407e00cc(&DAT_14ca51038);
    return;
  }
  return;
}



// FUNCTION 145f23044 FUN_145f23044 body=121 status=ok
// SIG undefined FUN_145f23044(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f23044(void)

{
  FUN_145f230be();
  _DAT_14ca57e70 = L"ProjectionParameters";
  DAT_14ca57e9a = FUN_140850cc5();
  _DAT_14ca57e78 = FUN_14142e7bc();
  _DAT_14ca57e88 = &LAB_14682652b;
  _DAT_14ca57e90 = 0x1000000e0;
  _DAT_14ca57e98 = 0;
  _DAT_14ca57e80 = DAT_14ca51048;
  DAT_14ca51048 = &DAT_14ca57e70;
  return;
}



// FUNCTION 145f230be FUN_145f230be body=121 status=ok
// SIG undefined FUN_145f230be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f230be(void)

{
  FUN_145f231be();
  _DAT_14ca57ea0 = L"ShadowFadeFraction";
  DAT_14ca57eca = FUN_140850cc5();
  _DAT_14ca57ea8 = FUN_140ec6960();
  _DAT_14ca57eb8 = &LAB_14682652b;
  _DAT_14ca57ec0 = 0x100000130;
  _DAT_14ca57ec8 = 0;
  _DAT_14ca57eb0 = DAT_14ca51048;
  DAT_14ca51048 = &DAT_14ca57ea0;
  return;
}



// FUNCTION 145f23138 FUN_145f23138 body=133 status=ok
// SIG undefined FUN_145f23138(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f23138(void)

{
  _DAT_14ca57f30 = L"BASE";
  DAT_14ca57f5a = 4;
  FUN_1411c95a0();
  _DAT_14ca57f40 = DAT_14ca51048;
  _DAT_14ca57f38 = &DAT_14ca4ff98;
  _DAT_14ca57f48 = &LAB_14682652b;
  DAT_14ca51048 = &DAT_14ca57f30;
  DAT_14ca5109d = DAT_14ca5109d + '\x01';
  _DAT_14ca57f50 = 0x100000000;
  if (DAT_14ca4fffc != '\0') {
    DAT_14ca5109e = DAT_14ca5109e + '\x01';
  }
  return;
}



// FUNCTION 145f231be FUN_145f231be body=216 status=ok
// SIG undefined FUN_145f231be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f231be(void)

{
  _DAT_14ca57f00 = L"LightPosition";
  DAT_14ca57f2a = FUN_140850cc5();
  _DAT_14ca57f08 = FUN_140ec6960();
  _DAT_14ca57f18 = &LAB_14682652b;
  _DAT_14ca57f20 = 0x10000013c;
  _DAT_14ca57f28 = 0;
  _DAT_14ca57f10 = DAT_14ca51048;
  DAT_14ca51048 = &DAT_14ca57f00;
  _DAT_14ca57ed0 = L"ShadowSharpen";
  DAT_14ca57efa = FUN_140850cc5();
  _DAT_14ca57ed8 = FUN_140ec6960();
  _DAT_14ca57ee8 = &LAB_14682652b;
  _DAT_14ca57ef0 = 0x100000136;
  _DAT_14ca57ef8 = 0;
  _DAT_14ca57ee0 = DAT_14ca51048;
  DAT_14ca51048 = &DAT_14ca57ed0;
  return;
}



// FUNCTION 145f23296 FUN_145f23296 body=284 status=ok
// SIG undefined FUN_145f23296(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f23296(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca51270) {
    FUN_144b3d300(&DAT_14ca51270);
    if (DAT_14ca51270 == -1) {
      FUN_145f233b2();
      FUN_140db5666(&DAT_14ca511c8,0,&DAT_14ca51160,L"FShadowProjectionPS4truefalsefalse",
                    L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,4,FUN_1472efa52,
                    FUN_1472efa2a,&LAB_1472ef9de,&LAB_1472ef9da,&LAB_14712ac0c,&LAB_14712ac08,0x148,
                    0);
      _DAT_14ca511c8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143049b7a);
      _Init_thread_footer(&DAT_14ca51270);
    }
  }
  return &DAT_14ca511c8;
}



// FUNCTION 145f233b2 FUN_145f233b2 body=210 status=ok
// SIG undefined FUN_145f233b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f233b2(void)

{
  if ((DAT_14ca511c7 & 2) == 0) {
    DAT_14ca511c7 = DAT_14ca511c7 | 2;
    _DAT_14ca51168 = L"FShadowProjectionPS4truefalsefalse";
    _DAT_14ca51180 = FUN_146826540;
    _DAT_14ca51188 = FUN_146825d77;
    _DAT_14ca51190 = FUN_146825fd6;
    _DAT_14ca51198 = FUN_1407e02ea;
    _DAT_14ca511a0 = FUN_146826273;
    _DAT_14ca51178 = FUN_1472ef9aa;
    _DAT_14ca511b8 = 0xffffffff00000148;
    _DAT_14ca511c0 = 8;
    DAT_14ca511c4 = 0;
    _DAT_14ca511a8 = &LAB_1472ef9d6;
    FUN_145f23484();
    FUN_145f23578();
    FUN_1407e00cc(&DAT_14ca51160);
    return;
  }
  return;
}



// FUNCTION 145f23484 FUN_145f23484 body=121 status=ok
// SIG undefined FUN_145f23484(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f23484(void)

{
  FUN_145f234fe();
  _DAT_14ca57f60 = L"ProjectionParameters";
  DAT_14ca57f8a = FUN_140850cc5();
  _DAT_14ca57f68 = FUN_14142e7bc();
  _DAT_14ca57f78 = &LAB_14682652b;
  _DAT_14ca57f80 = 0x1000000e0;
  _DAT_14ca57f88 = 0;
  _DAT_14ca57f70 = DAT_14ca51170;
  DAT_14ca51170 = &DAT_14ca57f60;
  return;
}



// FUNCTION 145f234fe FUN_145f234fe body=121 status=ok
// SIG undefined FUN_145f234fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f234fe(void)

{
  FUN_145f235fe();
  _DAT_14ca57f90 = L"ShadowFadeFraction";
  DAT_14ca57fba = FUN_140850cc5();
  _DAT_14ca57f98 = FUN_140ec6960();
  _DAT_14ca57fa8 = &LAB_14682652b;
  _DAT_14ca57fb0 = 0x100000130;
  _DAT_14ca57fb8 = 0;
  _DAT_14ca57fa0 = DAT_14ca51170;
  DAT_14ca51170 = &DAT_14ca57f90;
  return;
}



// FUNCTION 145f23578 FUN_145f23578 body=133 status=ok
// SIG undefined FUN_145f23578(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f23578(void)

{
  _DAT_14ca58020 = L"BASE";
  DAT_14ca5804a = 4;
  FUN_1411c95a0();
  _DAT_14ca58030 = DAT_14ca51170;
  _DAT_14ca58028 = &DAT_14ca4ff98;
  _DAT_14ca58038 = &LAB_14682652b;
  DAT_14ca51170 = &DAT_14ca58020;
  DAT_14ca511c5 = DAT_14ca511c5 + '\x01';
  _DAT_14ca58040 = 0x100000000;
  if (DAT_14ca4fffc != '\0') {
    DAT_14ca511c6 = DAT_14ca511c6 + '\x01';
  }
  return;
}


