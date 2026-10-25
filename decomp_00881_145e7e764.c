// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145e7e764 FUN_145e7e764 body=226 status=ok
// SIG undefined FUN_145e7e764(void)

longlong * FUN_145e7e764(longlong *param_1)

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
  pcVar13 = FUN_1462bc31c;
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



// FUNCTION 145e7e84c FUN_145e7e84c body=138 status=ok
// SIG undefined FUN_145e7e84c(void)

code * FUN_145e7e84c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutputDepth";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3800000124;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e7e8d6;
}



// FUNCTION 145e7e8d6 FUN_145e7e8d6 body=138 status=ok
// SIG undefined FUN_145e7e8d6(void)

code * FUN_145e7e8d6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutputVelocity";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float2>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000123;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145dd41c2;
}



// FUNCTION 145e7e960 FUN_145e7e960 body=206 status=ok
// SIG undefined FUN_145e7e960(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e7e960(void)

{
  if ((DAT_14c9c2777 & 2) == 0) {
    DAT_14c9c2777 = DAT_14c9c2777 | 2;
    _DAT_14c9c2718 = L"FDeferredDecalVS";
    _DAT_14c9c2730 = FUN_146826540;
    _DAT_14c9c2738 = FUN_146825d77;
    _DAT_14c9c2740 = FUN_146825fd6;
    _DAT_14c9c2748 = FUN_1407e02ea;
    _DAT_14c9c2750 = FUN_146826273;
    _DAT_14c9c2728 = FUN_147145e38;
    _DAT_14c9c2768 = 0xffffffff000000e0;
    _DAT_14c9c2770 = 8;
    DAT_14c9c2774 = 0;
    _DAT_14c9c2758 = &LAB_147145e62;
    FUN_145e7ea2e();
    FUN_1407e00cc(&DAT_14c9c2710);
  }
  return &DAT_14c9c2710;
}



// FUNCTION 145e7ea2e FUN_145e7ea2e body=123 status=ok
// SIG undefined FUN_145e7ea2e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e7ea2e(void)

{
  _DAT_14c9c4360 = L"BASE";
  DAT_14c9c438a = 4;
  _DAT_14c9c4368 = FUN_140b35ae4();
  _DAT_14c9c4370 = DAT_14c9c2720;
  _DAT_14c9c4378 = &LAB_14682652b;
  DAT_14c9c2720 = &DAT_14c9c4360;
  DAT_14c9c2775 = DAT_14c9c2775 + '\x01';
  _DAT_14c9c4380 = 0x100000000;
  if (*(char *)(_DAT_14c9c4368 + 100) != '\0') {
    DAT_14c9c2776 = DAT_14c9c2776 + '\x01';
  }
  return;
}



// FUNCTION 145e7eaaa FUN_145e7eaaa body=226 status=ok
// SIG undefined FUN_145e7eaaa(void)

longlong * FUN_145e7eaaa(longlong *param_1)

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
  pcVar13 = FUN_145e0c172;
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



// FUNCTION 145e7eb92 FUN_145e7eb92 body=138 status=ok
// SIG undefined FUN_145e7eb92(void)

undefined1 * FUN_145e7eb92(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x43;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e7eb8e;
}



// FUNCTION 145e7ec1c FUN_145e7ec1c body=138 status=ok
// SIG undefined FUN_145e7ec1c(void)

code * FUN_145e7ec1c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"FrustumComponentToClip";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000044;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e7eb92;
}



// FUNCTION 145e7eca6 FUN_145e7eca6 body=292 status=ok
// SIG undefined FUN_145e7eca6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e7eca6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c51e0) {
    FUN_144b3d300(&DAT_14c9c51e0);
    if (DAT_14c9c51e0 == -1) {
      FUN_145e7ef14();
      FUN_145e7edca();
      FUN_140db5666(&DAT_14c9c5138,0,&DAT_14c9c50d0,L"FDitheredTransitionStencilPS",
                    L"/Engine/Private/DitheredTransitionStencil.usf",L"Main",3,1,FUN_14714dbee,
                    FUN_14714db8e,&LAB_14714db76,&LAB_14714db72,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14c9c7d50);
      _DAT_14c9c5138 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142bcb4c0);
      _Init_thread_footer(&DAT_14c9c51e0);
    }
  }
  return &DAT_14c9c5138;
}



// FUNCTION 145e7edca FUN_145e7edca body=205 status=ok
// SIG undefined FUN_145e7edca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e7edca(void)

{
  if ((DAT_14c9c5137 & 2) == 0) {
    DAT_14c9c5137 = DAT_14c9c5137 | 2;
    _DAT_14c9c50d8 = L"FDitheredTransitionStencilPS";
    _DAT_14c9c50f0 = FUN_146826540;
    _DAT_14c9c50f8 = FUN_146825d77;
    _DAT_14c9c5100 = FUN_146825fd6;
    _DAT_14c9c5108 = FUN_1407e02ea;
    _DAT_14c9c5110 = FUN_146826273;
    _DAT_14c9c50e8 = FUN_14714db44;
    _DAT_14c9c5128 = 0xffffffff000000e0;
    _DAT_14c9c5130 = 8;
    DAT_14c9c5134 = 0;
    _DAT_14c9c5118 = &LAB_14714db6e;
    FUN_145e7ee98();
    FUN_1407e00cc(&DAT_14c9c50d0);
    return;
  }
  return;
}



// FUNCTION 145e7ee98 FUN_145e7ee98 body=123 status=ok
// SIG undefined FUN_145e7ee98(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e7ee98(void)

{
  _DAT_14c9c9278 = L"BASE";
  DAT_14c9c92a2 = 4;
  _DAT_14c9c9280 = FUN_140b35ae4();
  _DAT_14c9c9288 = DAT_14c9c50e0;
  _DAT_14c9c9290 = &LAB_14682652b;
  DAT_14c9c50e0 = &DAT_14c9c9278;
  DAT_14c9c5135 = DAT_14c9c5135 + '\x01';
  _DAT_14c9c9298 = 0x100000000;
  if (*(char *)(_DAT_14c9c9280 + 100) != '\0') {
    DAT_14c9c5136 = DAT_14c9c5136 + '\x01';
  }
  return;
}



// FUNCTION 145e7ef14 FUN_145e7ef14 body=261 status=ok
// SIG undefined FUN_145e7ef14(void)

void FUN_145e7ef14(void)

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
              0x110) < DAT_14c9c7dd0) {
    FUN_144b3d300(&DAT_14c9c7dd0);
    if (DAT_14c9c7dd0 == -1) {
      FUN_145e7f01a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x120;
      local_58 = 0x1a9;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c7d50,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142be54c1);
      _Init_thread_footer(&DAT_14c9c7dd0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e7f01a FUN_145e7f01a body=226 status=ok
// SIG undefined FUN_145e7f01a(void)

longlong * FUN_145e7f01a(longlong *param_1)

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
  pcVar13 = FUN_1462be016;
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



// FUNCTION 145e7f102 FUN_145e7f102 body=138 status=ok
// SIG undefined FUN_145e7f102(void)

undefined1 * FUN_145e7f102(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1aa;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e7f0fe;
}



// FUNCTION 145e7f18c FUN_145e7f18c body=138 status=ok
// SIG undefined FUN_145e7f18c(void)

code * FUN_145e7f18c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DitheredTransitionFactor";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000001ab;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e7f102;
}



// FUNCTION 145e7f216 FUN_145e7f216 body=292 status=ok
// SIG undefined FUN_145e7f216(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e7f216(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ca700) {
    FUN_144b3d300(&DAT_14c9ca700);
    if (DAT_14c9ca700 == -1) {
      FUN_145e7f484();
      FUN_145e7f33a();
      FUN_140db5666(&DAT_14c9ca658,0,&DAT_14c9ca5f0,L"FCopySceneColorTexturePS",
                    L"/Engine/Private/DistortFiltering.usf",L"CopySceneColorDepthTexturePS",3,1,
                    FUN_147157f3e,FUN_147157ede,&LAB_147157eda,&LAB_147157ed6,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9cdd20);
      _DAT_14c9ca658 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142bf7eac);
      _Init_thread_footer(&DAT_14c9ca700);
    }
  }
  return &DAT_14c9ca658;
}



// FUNCTION 145e7f33a FUN_145e7f33a body=205 status=ok
// SIG undefined FUN_145e7f33a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e7f33a(void)

{
  if ((DAT_14c9ca657 & 2) == 0) {
    DAT_14c9ca657 = DAT_14c9ca657 | 2;
    _DAT_14c9ca5f8 = L"FCopySceneColorTexturePS";
    _DAT_14c9ca610 = FUN_146826540;
    _DAT_14c9ca618 = FUN_146825d77;
    _DAT_14c9ca620 = FUN_146825fd6;
    _DAT_14c9ca628 = FUN_1407e02ea;
    _DAT_14c9ca630 = FUN_146826273;
    _DAT_14c9ca608 = FUN_147157ea8;
    _DAT_14c9ca648 = 0xffffffff000000e0;
    _DAT_14c9ca650 = 8;
    DAT_14c9ca654 = 0;
    _DAT_14c9ca638 = &LAB_147157ed2;
    FUN_145e7f408();
    FUN_1407e00cc(&DAT_14c9ca5f0);
    return;
  }
  return;
}



// FUNCTION 145e7f408 FUN_145e7f408 body=123 status=ok
// SIG undefined FUN_145e7f408(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e7f408(void)

{
  _DAT_14c9cefc8 = L"BASE";
  DAT_14c9ceff2 = 4;
  _DAT_14c9cefd0 = FUN_140b35ae4();
  _DAT_14c9cefd8 = DAT_14c9ca600;
  _DAT_14c9cefe0 = &LAB_14682652b;
  DAT_14c9ca600 = &DAT_14c9cefc8;
  DAT_14c9ca655 = DAT_14c9ca655 + '\x01';
  _DAT_14c9cefe8 = 0x100000000;
  if (*(char *)(_DAT_14c9cefd0 + 100) != '\0') {
    DAT_14c9ca656 = DAT_14c9ca656 + '\x01';
  }
  return;
}



// FUNCTION 145e7f484 FUN_145e7f484 body=261 status=ok
// SIG undefined FUN_145e7f484(void)

void FUN_145e7f484(void)

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
              0x110) < DAT_14c9cdda0) {
    FUN_144b3d300(&DAT_14c9cdda0);
    if (DAT_14c9cdda0 == -1) {
      FUN_145e7f58a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x140;
      local_58 = 0x128;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9cdd20,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c1c96b);
      _Init_thread_footer(&DAT_14c9cdda0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e7f58a FUN_145e7f58a body=226 status=ok
// SIG undefined FUN_145e7f58a(void)

longlong * FUN_145e7f58a(longlong *param_1)

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
  pcVar13 = FUN_1462c2b30;
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



// FUNCTION 145e7f672 FUN_145e7f672 body=138 status=ok
// SIG undefined FUN_145e7f672(void)

code * FUN_145e7f672(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000012a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462c2c40;
}



// FUNCTION 145e7f6fc FUN_145e7f6fc body=138 status=ok
// SIG undefined FUN_145e7f6fc(void)

code * FUN_145e7f6fc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000012c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462c2bb8;
}



// FUNCTION 145e7f786 FUN_145e7f786 body=292 status=ok
// SIG undefined FUN_145e7f786(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e7f786(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ca950) {
    FUN_144b3d300(&DAT_14c9ca950);
    if (DAT_14c9ca950 == -1) {
      FUN_145e7f9f4();
      FUN_145e7f8aa();
      FUN_140db5666(&DAT_14c9ca8a8,0,&DAT_14c9ca840,L"FFilterSceneColorCS",
                    L"/Engine/Private/DistortFiltering.usf",L"FilterColorCS",5,1,FUN_1471580fa,
                    FUN_14715809a,&LAB_147158082,&LAB_14715807e,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14c9cde30);
      _DAT_14c9ca8a8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142bf7ec4);
      _Init_thread_footer(&DAT_14c9ca950);
    }
  }
  return &DAT_14c9ca8a8;
}



// FUNCTION 145e7f8aa FUN_145e7f8aa body=205 status=ok
// SIG undefined FUN_145e7f8aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e7f8aa(void)

{
  if ((DAT_14c9ca8a7 & 2) == 0) {
    DAT_14c9ca8a7 = DAT_14c9ca8a7 | 2;
    _DAT_14c9ca848 = L"FFilterSceneColorCS";
    _DAT_14c9ca860 = FUN_146826540;
    _DAT_14c9ca868 = FUN_146825d77;
    _DAT_14c9ca870 = FUN_146825fd6;
    _DAT_14c9ca878 = FUN_1407e02ea;
    _DAT_14c9ca880 = FUN_146826273;
    _DAT_14c9ca858 = FUN_147158050;
    _DAT_14c9ca898 = 0xffffffff000000e0;
    _DAT_14c9ca8a0 = 8;
    DAT_14c9ca8a4 = 0;
    _DAT_14c9ca888 = &LAB_14715807a;
    FUN_145e7f978();
    FUN_1407e00cc(&DAT_14c9ca840);
    return;
  }
  return;
}



// FUNCTION 145e7f978 FUN_145e7f978 body=123 status=ok
// SIG undefined FUN_145e7f978(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e7f978(void)

{
  _DAT_14c9cf028 = L"BASE";
  DAT_14c9cf052 = 4;
  _DAT_14c9cf030 = FUN_140b35ae4();
  _DAT_14c9cf038 = DAT_14c9ca850;
  _DAT_14c9cf040 = &LAB_14682652b;
  DAT_14c9ca850 = &DAT_14c9cf028;
  DAT_14c9ca8a5 = DAT_14c9ca8a5 + '\x01';
  _DAT_14c9cf048 = 0x100000000;
  if (*(char *)(_DAT_14c9cf030 + 100) != '\0') {
    DAT_14c9ca8a6 = DAT_14c9ca8a6 + '\x01';
  }
  return;
}



// FUNCTION 145e7f9f4 FUN_145e7f9f4 body=261 status=ok
// SIG undefined FUN_145e7f9f4(void)

void FUN_145e7f9f4(void)

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
              0x110) < DAT_14c9cdeb0) {
    FUN_144b3d300(&DAT_14c9cdeb0);
    if (DAT_14c9cdeb0 == -1) {
      FUN_145e7fafa(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x450;
      local_58 = 0x1cb;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9cde30,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c1c983);
      _Init_thread_footer(&DAT_14c9cdeb0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e7fafa FUN_145e7fafa body=226 status=ok
// SIG undefined FUN_145e7fafa(void)

longlong * FUN_145e7fafa(longlong *param_1)

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
  pcVar13 = FUN_1462c2dda;
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



// FUNCTION 145e7fbe2 FUN_145e7fbe2 body=138 status=ok
// SIG undefined FUN_145e7fbe2(void)

code * FUN_145e7fbe2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SourceSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28000001d1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14715cf82;
}



// FUNCTION 145e7fc6c FUN_145e7fc6c body=138 status=ok
// SIG undefined FUN_145e7fc6c(void)

code * FUN_145e7fc6c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutTextureMipColor";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000001d2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e7fbe2;
}



// FUNCTION 145e7fcf6 FUN_145e7fcf6 body=292 status=ok
// SIG undefined FUN_145e7fcf6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e7fcf6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9caf00) {
    FUN_144b3d300(&DAT_14c9caf00);
    if (DAT_14c9caf00 == -1) {
      FUN_145e7ff64();
      FUN_145e7fe1a();
      FUN_140db5666(&DAT_14c9cae58,0,&DAT_14c9cadf0,L"FCompositeGbxForegroundDepthPS",
                    L"/Engine/Private/GbxDepthStencilHelpers.usf",L"CompositeForegroundDepthMain",3,
                    0x40,FUN_147159f3e,FUN_147159ede,&LAB_142bffbd4,&LAB_147159eda,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9cdfc8);
      _DAT_14c9cae58 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142bffbd7);
      _Init_thread_footer(&DAT_14c9caf00);
    }
  }
  return &DAT_14c9cae58;
}



// FUNCTION 145e7fe1a FUN_145e7fe1a body=205 status=ok
// SIG undefined FUN_145e7fe1a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e7fe1a(void)

{
  if ((DAT_14c9cae57 & 2) == 0) {
    DAT_14c9cae57 = DAT_14c9cae57 | 2;
    _DAT_14c9cadf8 = L"FCompositeGbxForegroundDepthPS";
    _DAT_14c9cae10 = FUN_146826540;
    _DAT_14c9cae18 = FUN_146825d77;
    _DAT_14c9cae20 = FUN_146825fd6;
    _DAT_14c9cae28 = FUN_1407e02ea;
    _DAT_14c9cae30 = FUN_146826273;
    _DAT_14c9cae08 = FUN_147159eac;
    _DAT_14c9cae48 = 0xffffffff000000e0;
    _DAT_14c9cae50 = 8;
    DAT_14c9cae54 = 0;
    _DAT_14c9cae38 = &LAB_147159ed6;
    FUN_145e7fee8();
    FUN_1407e00cc(&DAT_14c9cadf0);
    return;
  }
  return;
}



// FUNCTION 145e7fee8 FUN_145e7fee8 body=123 status=ok
// SIG undefined FUN_145e7fee8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e7fee8(void)

{
  _DAT_14c9cf250 = L"BASE";
  DAT_14c9cf27a = 4;
  _DAT_14c9cf258 = FUN_140b35ae4();
  _DAT_14c9cf260 = DAT_14c9cae00;
  _DAT_14c9cf268 = &LAB_14682652b;
  DAT_14c9cae00 = &DAT_14c9cf250;
  DAT_14c9cae55 = DAT_14c9cae55 + '\x01';
  _DAT_14c9cf270 = 0x100000000;
  if (*(char *)(_DAT_14c9cf258 + 100) != '\0') {
    DAT_14c9cae56 = DAT_14c9cae56 + '\x01';
  }
  return;
}



// FUNCTION 145e7ff64 FUN_145e7ff64 body=261 status=ok
// SIG undefined FUN_145e7ff64(void)

void FUN_145e7ff64(void)

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
              0x110) < DAT_14c9ce048) {
    FUN_144b3d300(&DAT_14c9ce048);
    if (DAT_14c9ce048 == -1) {
      FUN_145e8006a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x120;
      local_58 = 0x11;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9cdfc8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c1d283);
      _Init_thread_footer(&DAT_14c9ce048);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e8006a FUN_145e8006a body=226 status=ok
// SIG undefined FUN_145e8006a(void)

longlong * FUN_145e8006a(longlong *param_1)

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
  pcVar13 = FUN_1462c33c0;
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



// FUNCTION 145e80152 FUN_145e80152 body=138 status=ok
// SIG undefined FUN_145e80152(void)

code * FUN_145e80152(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SrcDepthTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000013;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462c3448;
}



// FUNCTION 145e801dc FUN_145e801dc body=138 status=ok
// SIG undefined FUN_145e801dc(void)

code * FUN_145e801dc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GbxForegroundDepthScaleBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000014;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e80152;
}



// FUNCTION 145e80266 FUN_145e80266 body=292 status=ok
// SIG undefined FUN_145e80266(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e80266(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9cb430) {
    FUN_144b3d300(&DAT_14c9cb430);
    if (DAT_14c9cb430 == -1) {
      FUN_145e804d4();
      FUN_145e8038a();
      FUN_140db5666(&DAT_14c9cb388,0,&DAT_14c9cb320,L"FPostProcessKuwaharaGaussianBlur",
                    L"/Engine/Private/Gearbox/PostProcessKuwaharaGaussianBlur.usf",
                    L"GaussianBlurMain",3,1,FUN_14715a3d2,FUN_14715a372,&LAB_14715a36a,
                    &LAB_14715a366,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9ce1e8);
      _DAT_14c9cb388 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c000fb);
      _Init_thread_footer(&DAT_14c9cb430);
    }
  }
  return &DAT_14c9cb388;
}



// FUNCTION 145e8038a FUN_145e8038a body=205 status=ok
// SIG undefined FUN_145e8038a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e8038a(void)

{
  if ((DAT_14c9cb387 & 2) == 0) {
    DAT_14c9cb387 = DAT_14c9cb387 | 2;
    _DAT_14c9cb328 = L"FPostProcessKuwaharaGaussianBlur";
    _DAT_14c9cb340 = FUN_146826540;
    _DAT_14c9cb348 = FUN_146825d77;
    _DAT_14c9cb350 = FUN_146825fd6;
    _DAT_14c9cb358 = FUN_1407e02ea;
    _DAT_14c9cb360 = FUN_146826273;
    _DAT_14c9cb338 = FUN_14715a338;
    _DAT_14c9cb378 = 0xffffffff000000e0;
    _DAT_14c9cb380 = 8;
    DAT_14c9cb384 = 0;
    _DAT_14c9cb368 = &LAB_14715a362;
    FUN_145e80458();
    FUN_1407e00cc(&DAT_14c9cb320);
    return;
  }
  return;
}



// FUNCTION 145e80458 FUN_145e80458 body=123 status=ok
// SIG undefined FUN_145e80458(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e80458(void)

{
  _DAT_14c9cf310 = L"BASE";
  DAT_14c9cf33a = 4;
  _DAT_14c9cf318 = FUN_140b35ae4();
  _DAT_14c9cf320 = DAT_14c9cb330;
  _DAT_14c9cf328 = &LAB_14682652b;
  DAT_14c9cb330 = &DAT_14c9cf310;
  DAT_14c9cb385 = DAT_14c9cb385 + '\x01';
  _DAT_14c9cf330 = 0x100000000;
  if (*(char *)(_DAT_14c9cf318 + 100) != '\0') {
    DAT_14c9cb386 = DAT_14c9cb386 + '\x01';
  }
  return;
}



// FUNCTION 145e804d4 FUN_145e804d4 body=261 status=ok
// SIG undefined FUN_145e804d4(void)

void FUN_145e804d4(void)

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
              0x110) < DAT_14c9ce268) {
    FUN_144b3d300(&DAT_14c9ce268);
    if (DAT_14c9ce268 == -1) {
      FUN_145e805da(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x120;
      local_58 = 0x157;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9ce1e8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c1db5b);
      _Init_thread_footer(&DAT_14c9ce268);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e805da FUN_145e805da body=226 status=ok
// SIG undefined FUN_145e805da(void)

longlong * FUN_145e805da(longlong *param_1)

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
  pcVar13 = FUN_1462c3926;
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



// FUNCTION 145e806c2 FUN_145e806c2 body=138 status=ok
// SIG undefined FUN_145e806c2(void)

code * FUN_145e806c2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PointClampSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000015a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14715fe72;
}



// FUNCTION 145e8074c FUN_145e8074c body=138 status=ok
// SIG undefined FUN_145e8074c(void)

undefined1 * FUN_145e8074c(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x158;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e806be;
}



// FUNCTION 145e807d6 FUN_145e807d6 body=292 status=ok
// SIG undefined FUN_145e807d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e807d6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9cb558) {
    FUN_144b3d300(&DAT_14c9cb558);
    if (DAT_14c9cb558 == -1) {
      FUN_145e80a44();
      FUN_145e808fa();
      FUN_140db5666(&DAT_14c9cb4b0,0,&DAT_14c9cb448,L"FPostProcessKuwaharaApplyPS",
                    L"/Engine/Private/Gearbox/PostProcessKuwahara.usf",L"KuwaharaMain",3,4,
                    FUN_14715a4a0,FUN_14715a440,&LAB_14715a438,&LAB_14715a434,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9ce270);
      _DAT_14c9cb4b0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c00107);
      _Init_thread_footer(&DAT_14c9cb558);
    }
  }
  return &DAT_14c9cb4b0;
}



// FUNCTION 145e808fa FUN_145e808fa body=205 status=ok
// SIG undefined FUN_145e808fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e808fa(void)

{
  if ((DAT_14c9cb4af & 2) == 0) {
    DAT_14c9cb4af = DAT_14c9cb4af | 2;
    _DAT_14c9cb450 = L"FPostProcessKuwaharaApplyPS";
    _DAT_14c9cb468 = FUN_146826540;
    _DAT_14c9cb470 = FUN_146825d77;
    _DAT_14c9cb478 = FUN_146825fd6;
    _DAT_14c9cb480 = FUN_1407e02ea;
    _DAT_14c9cb488 = FUN_146826273;
    _DAT_14c9cb460 = FUN_14715a406;
    _DAT_14c9cb4a0 = 0xffffffff000000e0;
    _DAT_14c9cb4a8 = 8;
    DAT_14c9cb4ac = 0;
    _DAT_14c9cb490 = &LAB_14715a430;
    FUN_145e809c8();
    FUN_1407e00cc(&DAT_14c9cb448);
    return;
  }
  return;
}



// FUNCTION 145e809c8 FUN_145e809c8 body=123 status=ok
// SIG undefined FUN_145e809c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e809c8(void)

{
  _DAT_14c9cf340 = L"BASE";
  DAT_14c9cf36a = 4;
  _DAT_14c9cf348 = FUN_140b35ae4();
  _DAT_14c9cf350 = DAT_14c9cb458;
  _DAT_14c9cf358 = &LAB_14682652b;
  DAT_14c9cb458 = &DAT_14c9cf340;
  DAT_14c9cb4ad = DAT_14c9cb4ad + '\x01';
  _DAT_14c9cf360 = 0x100000000;
  if (*(char *)(_DAT_14c9cf348 + 100) != '\0') {
    DAT_14c9cb4ae = DAT_14c9cb4ae + '\x01';
  }
  return;
}



// FUNCTION 145e80a44 FUN_145e80a44 body=261 status=ok
// SIG undefined FUN_145e80a44(void)

void FUN_145e80a44(void)

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
              0x110) < DAT_14c9ce2f0) {
    FUN_144b3d300(&DAT_14c9ce2f0);
    if (DAT_14c9ce2f0 == -1) {
      FUN_145e80b4a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x150;
      local_58 = 400;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9ce270,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c1ddeb);
      _Init_thread_footer(&DAT_14c9ce2f0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e80b4a FUN_145e80b4a body=226 status=ok
// SIG undefined FUN_145e80b4a(void)

longlong * FUN_145e80b4a(longlong *param_1)

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
  pcVar13 = FUN_1462c39ae;
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



// FUNCTION 145e80c32 FUN_145e80c32 body=138 status=ok
// SIG undefined FUN_145e80c32(void)

undefined1 * FUN_145e80c32(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x191;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e80c2e;
}



// FUNCTION 145e80cbc FUN_145e80cbc body=138 status=ok
// SIG undefined FUN_145e80cbc(void)

code * FUN_145e80cbc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VarianceBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2DArray<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000193;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147160536;
}



// FUNCTION 145e80d46 FUN_145e80d46 body=292 status=ok
// SIG undefined FUN_145e80d46(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e80d46(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d05f0) {
    FUN_144b3d300(&DAT_14c9d05f0);
    if (DAT_14c9d05f0 == -1) {
      FUN_145e80fb4();
      FUN_145e80e6a();
      FUN_140db5666(&DAT_14c9d0548,0,&DAT_14c9d04e0,L"FHairVisibilityFastResolveMaskPS",
                    L"/Engine/Private/HairStrands/HairStrandsComposition.usf",L"FastResolvePS",3,1,
                    FUN_14716a95c,FUN_14716a8fc,FUN_1462c5cc6,&LAB_14716a8f8,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9d3b68);
      _DAT_14c9d0548 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c32a25);
      _Init_thread_footer(&DAT_14c9d05f0);
    }
  }
  return &DAT_14c9d0548;
}



// FUNCTION 145e80e6a FUN_145e80e6a body=205 status=ok
// SIG undefined FUN_145e80e6a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e80e6a(void)

{
  if ((DAT_14c9d0547 & 2) == 0) {
    DAT_14c9d0547 = DAT_14c9d0547 | 2;
    _DAT_14c9d04e8 = L"FHairVisibilityFastResolveMaskPS";
    _DAT_14c9d0500 = FUN_146826540;
    _DAT_14c9d0508 = FUN_146825d77;
    _DAT_14c9d0510 = FUN_146825fd6;
    _DAT_14c9d0518 = FUN_1407e02ea;
    _DAT_14c9d0520 = FUN_146826273;
    _DAT_14c9d04f8 = FUN_14716a8c8;
    _DAT_14c9d0538 = 0xffffffff000000e0;
    _DAT_14c9d0540 = 8;
    DAT_14c9d0544 = 0;
    _DAT_14c9d0528 = &LAB_14716a8f4;
    FUN_145e80f38();
    FUN_1407e00cc(&DAT_14c9d04e0);
    return;
  }
  return;
}



// FUNCTION 145e80f38 FUN_145e80f38 body=123 status=ok
// SIG undefined FUN_145e80f38(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e80f38(void)

{
  _DAT_14c9d4d58 = L"BASE";
  DAT_14c9d4d82 = 4;
  _DAT_14c9d4d60 = FUN_140b35ae4();
  _DAT_14c9d4d68 = DAT_14c9d04f0;
  _DAT_14c9d4d70 = &LAB_14682652b;
  DAT_14c9d04f0 = &DAT_14c9d4d58;
  DAT_14c9d0545 = DAT_14c9d0545 + '\x01';
  _DAT_14c9d4d78 = 0x100000000;
  if (*(char *)(_DAT_14c9d4d60 + 100) != '\0') {
    DAT_14c9d0546 = DAT_14c9d0546 + '\x01';
  }
  return;
}



// FUNCTION 145e80fb4 FUN_145e80fb4 body=261 status=ok
// SIG undefined FUN_145e80fb4(void)

void FUN_145e80fb4(void)

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
              0x110) < DAT_14c9d3be8) {
    FUN_144b3d300(&DAT_14c9d3be8);
    if (DAT_14c9d3be8 == -1) {
      FUN_145e810ba(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x140;
      local_58 = 0x1b4;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9d3b68,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c46df5);
      _Init_thread_footer(&DAT_14c9d3be8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e810ba FUN_145e810ba body=226 status=ok
// SIG undefined FUN_145e810ba(void)

longlong * FUN_145e810ba(longlong *param_1)

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
  pcVar13 = FUN_1462c6cd6;
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



// FUNCTION 145e811a2 FUN_145e811a2 body=138 status=ok
// SIG undefined FUN_145e811a2(void)

code * FUN_145e811a2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ResolveMaskTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000001b6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e8122c;
}



// FUNCTION 145e8122c FUN_145e8122c body=138 status=ok
// SIG undefined FUN_145e8122c(void)

undefined1 * FUN_145e8122c(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1b5;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e8119e;
}



// FUNCTION 145e812b6 FUN_145e812b6 body=292 status=ok
// SIG undefined FUN_145e812b6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e812b6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d10e0) {
    FUN_144b3d300(&DAT_14c9d10e0);
    if (DAT_14c9d10e0 == -1) {
      FUN_145e81524();
      FUN_145e813da();
      FUN_140db5666(&DAT_14c9d1038,0,&DAT_14c9d0fd0,L"FDebugHairTangentCS",
                    L"/Engine/Private/HairStrands/HairStrandsDebug.usf",L"MainCS",5,1,FUN_14716b8da,
                    FUN_14716b87a,&LAB_14595f36c,&LAB_14716b876,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14c9d4030);
      _DAT_14c9d1038 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c33b09);
      _Init_thread_footer(&DAT_14c9d10e0);
    }
  }
  return &DAT_14c9d1038;
}



// FUNCTION 145e813da FUN_145e813da body=205 status=ok
// SIG undefined FUN_145e813da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e813da(void)

{
  if ((DAT_14c9d1037 & 2) == 0) {
    DAT_14c9d1037 = DAT_14c9d1037 | 2;
    _DAT_14c9d0fd8 = L"FDebugHairTangentCS";
    _DAT_14c9d0ff0 = FUN_146826540;
    _DAT_14c9d0ff8 = FUN_146825d77;
    _DAT_14c9d1000 = FUN_146825fd6;
    _DAT_14c9d1008 = FUN_1407e02ea;
    _DAT_14c9d1010 = FUN_146826273;
    _DAT_14c9d0fe8 = FUN_14716b846;
    _DAT_14c9d1028 = 0xffffffff000000e0;
    _DAT_14c9d1030 = 8;
    DAT_14c9d1034 = 0;
    _DAT_14c9d1018 = &LAB_14716b872;
    FUN_145e814a8();
    FUN_1407e00cc(&DAT_14c9d0fd0);
    return;
  }
  return;
}



// FUNCTION 145e814a8 FUN_145e814a8 body=123 status=ok
// SIG undefined FUN_145e814a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e814a8(void)

{
  _DAT_14c9d4f08 = L"BASE";
  DAT_14c9d4f32 = 4;
  _DAT_14c9d4f10 = FUN_140b35ae4();
  _DAT_14c9d4f18 = DAT_14c9d0fe0;
  _DAT_14c9d4f20 = &LAB_14682652b;
  DAT_14c9d0fe0 = &DAT_14c9d4f08;
  DAT_14c9d1035 = DAT_14c9d1035 + '\x01';
  _DAT_14c9d4f28 = 0x100000000;
  if (*(char *)(_DAT_14c9d4f10 + 100) != '\0') {
    DAT_14c9d1036 = DAT_14c9d1036 + '\x01';
  }
  return;
}



// FUNCTION 145e81524 FUN_145e81524 body=261 status=ok
// SIG undefined FUN_145e81524(void)

void FUN_145e81524(void)

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
              0x110) < DAT_14c9d40b0) {
    FUN_144b3d300(&DAT_14c9d40b0);
    if (DAT_14c9d40b0 == -1) {
      FUN_145e8162a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x80;
      local_58 = 0x349;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9d4030,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c494bf);
      _Init_thread_footer(&DAT_14c9d40b0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e8162a FUN_145e8162a body=226 status=ok
// SIG undefined FUN_145e8162a(void)

longlong * FUN_145e8162a(longlong *param_1)

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
  pcVar13 = FUN_1462c7862;
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



// FUNCTION 145e81712 FUN_145e81712 body=138 status=ok
// SIG undefined FUN_145e81712(void)

undefined1 * FUN_145e81712(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x34a;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e8170e;
}



// FUNCTION 145e8179c FUN_145e8179c body=138 status=ok
// SIG undefined FUN_145e8179c(void)

code * FUN_145e8179c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000034c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462c7a08;
}



// FUNCTION 145e81826 FUN_145e81826 body=292 status=ok
// SIG undefined FUN_145e81826(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e81826(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d1808) {
    FUN_144b3d300(&DAT_14c9d1808);
    if (DAT_14c9d1808 == -1) {
      FUN_145e81a94();
      FUN_145e8194a();
      FUN_140db5666(&DAT_14c9d1760,0,&DAT_14c9d16f8,L"FDeepShadowCreateViewInfoCS",
                    L"/Engine/Private/HairStrands/HairStrandsDeepShadowAllocation.usf",
                    L"CreateViewInfo",5,1,FUN_14716bf8e,FUN_14716bf2e,FUN_1462c5eae,&LAB_14716bf2a,
                    &LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9d4470);
      _DAT_14c9d1760 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c36c6d);
      _Init_thread_footer(&DAT_14c9d1808);
    }
  }
  return &DAT_14c9d1760;
}



// FUNCTION 145e8194a FUN_145e8194a body=205 status=ok
// SIG undefined FUN_145e8194a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e8194a(void)

{
  if ((DAT_14c9d175f & 2) == 0) {
    DAT_14c9d175f = DAT_14c9d175f | 2;
    _DAT_14c9d1700 = L"FDeepShadowCreateViewInfoCS";
    _DAT_14c9d1718 = FUN_146826540;
    _DAT_14c9d1720 = FUN_146825d77;
    _DAT_14c9d1728 = FUN_146825fd6;
    _DAT_14c9d1730 = FUN_1407e02ea;
    _DAT_14c9d1738 = FUN_146826273;
    _DAT_14c9d1710 = FUN_14716befa;
    _DAT_14c9d1750 = 0xffffffff000000e0;
    _DAT_14c9d1758 = 8;
    DAT_14c9d175c = 0;
    _DAT_14c9d1740 = &LAB_14716bf26;
    FUN_145e81a18();
    FUN_1407e00cc(&DAT_14c9d16f8);
    return;
  }
  return;
}



// FUNCTION 145e81a18 FUN_145e81a18 body=123 status=ok
// SIG undefined FUN_145e81a18(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e81a18(void)

{
  _DAT_14c9d5028 = L"BASE";
  DAT_14c9d5052 = 4;
  _DAT_14c9d5030 = FUN_140b35ae4();
  _DAT_14c9d5038 = DAT_14c9d1708;
  _DAT_14c9d5040 = &LAB_14682652b;
  DAT_14c9d1708 = &DAT_14c9d5028;
  DAT_14c9d175d = DAT_14c9d175d + '\x01';
  _DAT_14c9d5048 = 0x100000000;
  if (*(char *)(_DAT_14c9d5030 + 100) != '\0') {
    DAT_14c9d175e = DAT_14c9d175e + '\x01';
  }
  return;
}



// FUNCTION 145e81a94 FUN_145e81a94 body=261 status=ok
// SIG undefined FUN_145e81a94(void)

void FUN_145e81a94(void)

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
              0x110) < DAT_14c9d44f0) {
    FUN_144b3d300(&DAT_14c9d44f0);
    if (DAT_14c9d44f0 == -1) {
      FUN_145e81b9a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x60;
      local_58 = 0xb2;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9d4470,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c4d6db);
      _Init_thread_footer(&DAT_14c9d44f0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e81b9a FUN_145e81b9a body=226 status=ok
// SIG undefined FUN_145e81b9a(void)

longlong * FUN_145e81b9a(longlong *param_1)

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
  pcVar13 = FUN_1462c8110;
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



// FUNCTION 145e81c82 FUN_145e81c82 body=138 status=ok
// SIG undefined FUN_145e81c82(void)

code * FUN_145e81c82(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MaxHafFovInRad";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c000000bb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147174a3c;
}



// FUNCTION 145e81d0c FUN_145e81d0c body=138 status=ok
// SIG undefined FUN_145e81d0c(void)

code * FUN_145e81d0c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SlotResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000b6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147174bda;
}



// FUNCTION 145e81d96 FUN_145e81d96 body=292 status=ok
// SIG undefined FUN_145e81d96(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e81d96(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d2100) {
    FUN_144b3d300(&DAT_14c9d2100);
    if (DAT_14c9d2100 == -1) {
      FUN_145e82004();
      FUN_145e81eba();
      FUN_140db5666(&DAT_14c9d2058,0,&DAT_14c9d1ff0,L"FHairStrandsForwardRasterCompactionCS",
                    L"/Engine/Private/HairStrands/HairStrandsForwardRaster.usf",L"CompactionCS",5,2,
                    FUN_14716c842,FUN_14716c7e2,&LAB_1462c5f60,&LAB_14716c7d2,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9d4938);
      _DAT_14c9d2058 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c39eaa);
      _Init_thread_footer(&DAT_14c9d2100);
    }
  }
  return &DAT_14c9d2058;
}



// FUNCTION 145e81eba FUN_145e81eba body=205 status=ok
// SIG undefined FUN_145e81eba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e81eba(void)

{
  if ((DAT_14c9d2057 & 2) == 0) {
    DAT_14c9d2057 = DAT_14c9d2057 | 2;
    _DAT_14c9d1ff8 = L"FHairStrandsForwardRasterCompactionCS";
    _DAT_14c9d2010 = FUN_146826540;
    _DAT_14c9d2018 = FUN_146825d77;
    _DAT_14c9d2020 = FUN_146825fd6;
    _DAT_14c9d2028 = FUN_1407e02ea;
    _DAT_14c9d2030 = FUN_146826273;
    _DAT_14c9d2008 = FUN_14716c7a2;
    _DAT_14c9d2048 = 0xffffffff000000e0;
    _DAT_14c9d2050 = 8;
    DAT_14c9d2054 = 0;
    _DAT_14c9d2038 = &LAB_14716c7ce;
    FUN_145e81f88();
    FUN_1407e00cc(&DAT_14c9d1ff0);
    return;
  }
  return;
}



// FUNCTION 145e81f88 FUN_145e81f88 body=123 status=ok
// SIG undefined FUN_145e81f88(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e81f88(void)

{
  _DAT_14c9d5178 = L"BASE";
  DAT_14c9d51a2 = 4;
  _DAT_14c9d5180 = FUN_140b35ae4();
  _DAT_14c9d5188 = DAT_14c9d2000;
  _DAT_14c9d5190 = &LAB_14682652b;
  DAT_14c9d2000 = &DAT_14c9d5178;
  DAT_14c9d2055 = DAT_14c9d2055 + '\x01';
  _DAT_14c9d5198 = 0x100000000;
  if (*(char *)(_DAT_14c9d5180 + 100) != '\0') {
    DAT_14c9d2056 = DAT_14c9d2056 + '\x01';
  }
  return;
}



// FUNCTION 145e82004 FUN_145e82004 body=261 status=ok
// SIG undefined FUN_145e82004(void)

void FUN_145e82004(void)

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
              0x110) < DAT_14c9d49b8) {
    FUN_144b3d300(&DAT_14c9d49b8);
    if (DAT_14c9d49b8 == -1) {
      FUN_145e8210a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xd0;
      local_58 = 0xae;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9d4938,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c4e2ee);
      _Init_thread_footer(&DAT_14c9d49b8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e8210a FUN_145e8210a body=226 status=ok
// SIG undefined FUN_145e8210a(void)

longlong * FUN_145e8210a(longlong *param_1)

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
  pcVar13 = FUN_1462c96ec;
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



// FUNCTION 145e821f2 FUN_145e821f2 body=138 status=ok
// SIG undefined FUN_145e821f2(void)

code * FUN_145e821f2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutDataCount";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x90000000b8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462c980a;
}



// FUNCTION 145e8227c FUN_145e8227c body=138 status=ok
// SIG undefined FUN_145e8227c(void)

code * FUN_145e8227c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutPrims";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x78000000b5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147177324;
}



// FUNCTION 145e82306 FUN_145e82306 body=292 status=ok
// SIG undefined FUN_145e82306(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e82306(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d6580) {
    FUN_144b3d300(&DAT_14c9d6580);
    if (DAT_14c9d6580 == -1) {
      FUN_145e82574();
      FUN_145e8242a();
      FUN_140db5666(&DAT_14c9d64d8,0,&DAT_14c9d6470,L"FHairStrandsTileDebugPassPS",
                    L"/Engine/Private/HairStrands/HairStrandsVisibilityTile.usf",L"MainPS",3,1,
                    FUN_14717ec88,FUN_14717ec28,&LAB_14717ec10,&LAB_14717ec0c,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9da0a8);
      _DAT_14c9d64d8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c60162);
      _Init_thread_footer(&DAT_14c9d6580);
    }
  }
  return &DAT_14c9d64d8;
}



// FUNCTION 145e8242a FUN_145e8242a body=205 status=ok
// SIG undefined FUN_145e8242a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e8242a(void)

{
  if ((DAT_14c9d64d7 & 2) == 0) {
    DAT_14c9d64d7 = DAT_14c9d64d7 | 2;
    _DAT_14c9d6478 = L"FHairStrandsTileDebugPassPS";
    _DAT_14c9d6490 = FUN_146826540;
    _DAT_14c9d6498 = FUN_146825d77;
    _DAT_14c9d64a0 = FUN_146825fd6;
    _DAT_14c9d64a8 = FUN_1407e02ea;
    _DAT_14c9d64b0 = FUN_146826273;
    _DAT_14c9d6488 = FUN_14717ebde;
    _DAT_14c9d64c8 = 0xffffffff000000e0;
    _DAT_14c9d64d0 = 8;
    DAT_14c9d64d4 = 0;
    _DAT_14c9d64b8 = &LAB_14717ec08;
    FUN_145e824f8();
    FUN_1407e00cc(&DAT_14c9d6470);
    return;
  }
  return;
}



// FUNCTION 145e824f8 FUN_145e824f8 body=123 status=ok
// SIG undefined FUN_145e824f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e824f8(void)

{
  _DAT_14c9db8e8 = L"BASE";
  DAT_14c9db912 = 4;
  _DAT_14c9db8f0 = FUN_140b35ae4();
  _DAT_14c9db8f8 = DAT_14c9d6480;
  _DAT_14c9db900 = &LAB_14682652b;
  DAT_14c9d6480 = &DAT_14c9db8e8;
  DAT_14c9d64d5 = DAT_14c9d64d5 + '\x01';
  _DAT_14c9db908 = 0x100000000;
  if (*(char *)(_DAT_14c9db8f0 + 100) != '\0') {
    DAT_14c9d64d6 = DAT_14c9d64d6 + '\x01';
  }
  return;
}



// FUNCTION 145e82574 FUN_145e82574 body=261 status=ok
// SIG undefined FUN_145e82574(void)

void FUN_145e82574(void)

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
              0x110) < DAT_14c9da128) {
    FUN_144b3d300(&DAT_14c9da128);
    if (DAT_14c9da128 == -1) {
      FUN_145e8267a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x160;
      local_58 = 0x14b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9da0a8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c6fe13);
      _Init_thread_footer(&DAT_14c9da128);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e8267a FUN_145e8267a body=226 status=ok
// SIG undefined FUN_145e8267a(void)

longlong * FUN_145e8267a(longlong *param_1)

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
  pcVar13 = FUN_1462cade8;
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



// FUNCTION 145e82762 FUN_145e82762 body=138 status=ok
// SIG undefined FUN_145e82762(void)

code * FUN_145e82762(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x500000014f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e827ec;
}



// FUNCTION 145e827ec FUN_145e827ec body=138 status=ok
// SIG undefined FUN_145e827ec(void)

code * FUN_145e827ec(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DebugColor";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000014e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462cae70;
}



// FUNCTION 145e82876 FUN_145e82876 body=292 status=ok
// SIG undefined FUN_145e82876(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e82876(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d8c88) {
    FUN_144b3d300(&DAT_14c9d8c88);
    if (DAT_14c9d8c88 == -1) {
      FUN_145e82ae4();
      FUN_145e8299a();
      FUN_140db5666(&DAT_14c9d8be0,0,&DAT_14c9d8b78,L"FHairViewTransmittanceDepthPS",
                    L"/Engine/Private/HairStrands/HairStrandsVisibilityTransmittanceDepthPS.usf",
                    L"MainPS",3,2,FUN_147184824,FUN_1471847c4,&LAB_1462ca44a,&LAB_1471847c0,
                    &LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9dabf0);
      _DAT_14c9d8be0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c66151);
      _Init_thread_footer(&DAT_14c9d8c88);
    }
  }
  return &DAT_14c9d8be0;
}



// FUNCTION 145e8299a FUN_145e8299a body=205 status=ok
// SIG undefined FUN_145e8299a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e8299a(void)

{
  if ((DAT_14c9d8bdf & 2) == 0) {
    DAT_14c9d8bdf = DAT_14c9d8bdf | 2;
    _DAT_14c9d8b80 = L"FHairViewTransmittanceDepthPS";
    _DAT_14c9d8b98 = FUN_146826540;
    _DAT_14c9d8ba0 = FUN_146825d77;
    _DAT_14c9d8ba8 = FUN_146825fd6;
    _DAT_14c9d8bb0 = FUN_1407e02ea;
    _DAT_14c9d8bb8 = FUN_146826273;
    _DAT_14c9d8b90 = FUN_147184792;
    _DAT_14c9d8bd0 = 0xffffffff000000e0;
    _DAT_14c9d8bd8 = 8;
    DAT_14c9d8bdc = 0;
    _DAT_14c9d8bc0 = &LAB_1471847bc;
    FUN_145e82a68();
    FUN_1407e00cc(&DAT_14c9d8b78);
    return;
  }
  return;
}



// FUNCTION 145e82a68 FUN_145e82a68 body=123 status=ok
// SIG undefined FUN_145e82a68(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e82a68(void)

{
  _DAT_14c9dc158 = L"BASE";
  DAT_14c9dc182 = 4;
  _DAT_14c9dc160 = FUN_140b35ae4();
  _DAT_14c9dc168 = DAT_14c9d8b88;
  _DAT_14c9dc170 = &LAB_14682652b;
  DAT_14c9d8b88 = &DAT_14c9dc158;
  DAT_14c9d8bdd = DAT_14c9d8bdd + '\x01';
  _DAT_14c9dc178 = 0x100000000;
  if (*(char *)(_DAT_14c9dc160 + 100) != '\0') {
    DAT_14c9d8bde = DAT_14c9d8bde + '\x01';
  }
  return;
}



// FUNCTION 145e82ae4 FUN_145e82ae4 body=261 status=ok
// SIG undefined FUN_145e82ae4(void)

void FUN_145e82ae4(void)

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
              0x110) < DAT_14c9dac70) {
    FUN_144b3d300(&DAT_14c9dac70);
    if (DAT_14c9dac70 == -1) {
      FUN_145e82bea(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x130;
      local_58 = 0xa32;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9dabf0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c71d21);
      _Init_thread_footer(&DAT_14c9dac70);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e82bea FUN_145e82bea body=226 status=ok
// SIG undefined FUN_145e82bea(void)

longlong * FUN_145e82bea(longlong *param_1)

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
  pcVar13 = FUN_1462ccabe;
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



// FUNCTION 145e82cd2 FUN_145e82cd2 body=138 status=ok
// SIG undefined FUN_145e82cd2(void)

code * FUN_145e82cd2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000a34;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462ccbd6;
}



// FUNCTION 145e82d5c FUN_145e82d5c body=138 status=ok
// SIG undefined FUN_145e82d5c(void)

code * FUN_145e82d5c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CoverageTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000a35;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e82cd2;
}



// FUNCTION 145e82de6 FUN_145e82de6 body=292 status=ok
// SIG undefined FUN_145e82de6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e82de6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d9a68) {
    FUN_144b3d300(&DAT_14c9d9a68);
    if (DAT_14c9d9a68 == -1) {
      FUN_145e83054();
      FUN_145e82f0a();
      FUN_140db5666(&DAT_14c9d99c0,0,&DAT_14c9d9958,L"FVisiblityRasterComputeNaiveCS",
                    L"/Engine/Private/HairStrands/HairStrandsVisibilityRasterComputeNaive.usf",
                    L"CSMain",5,4,FUN_147185860,FUN_147185800,&LAB_1462ca4b8,&LAB_1471857fc,
                    &LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9db2d8);
      _DAT_14c9d99c0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c661e1);
      _Init_thread_footer(&DAT_14c9d9a68);
    }
  }
  return &DAT_14c9d99c0;
}



// FUNCTION 145e82f0a FUN_145e82f0a body=205 status=ok
// SIG undefined FUN_145e82f0a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e82f0a(void)

{
  if ((DAT_14c9d99bf & 2) == 0) {
    DAT_14c9d99bf = DAT_14c9d99bf | 2;
    _DAT_14c9d9960 = L"FVisiblityRasterComputeNaiveCS";
    _DAT_14c9d9978 = FUN_146826540;
    _DAT_14c9d9980 = FUN_146825d77;
    _DAT_14c9d9988 = FUN_146825fd6;
    _DAT_14c9d9990 = FUN_1407e02ea;
    _DAT_14c9d9998 = FUN_146826273;
    _DAT_14c9d9970 = FUN_1471857ce;
    _DAT_14c9d99b0 = 0xffffffff000000e0;
    _DAT_14c9d99b8 = 8;
    DAT_14c9d99bc = 0;
    _DAT_14c9d99a0 = &LAB_1471857f8;
    FUN_145e82fd8();
    FUN_1407e00cc(&DAT_14c9d9958);
    return;
  }
  return;
}



// FUNCTION 145e82fd8 FUN_145e82fd8 body=123 status=ok
// SIG undefined FUN_145e82fd8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e82fd8(void)

{
  _DAT_14c9dc398 = L"BASE";
  DAT_14c9dc3c2 = 4;
  _DAT_14c9dc3a0 = FUN_140b35ae4();
  _DAT_14c9dc3a8 = DAT_14c9d9968;
  _DAT_14c9dc3b0 = &LAB_14682652b;
  DAT_14c9d9968 = &DAT_14c9dc398;
  DAT_14c9d99bd = DAT_14c9d99bd + '\x01';
  _DAT_14c9dc3b8 = 0x100000000;
  if (*(char *)(_DAT_14c9dc3a0 + 100) != '\0') {
    DAT_14c9d99be = DAT_14c9d99be + '\x01';
  }
  return;
}



// FUNCTION 145e83054 FUN_145e83054 body=261 status=ok
// SIG undefined FUN_145e83054(void)

void FUN_145e83054(void)

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
              0x110) < DAT_14c9db358) {
    FUN_144b3d300(&DAT_14c9db358);
    if (DAT_14c9db358 == -1) {
      FUN_145e8315a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1f0;
      local_58 = 0xddd;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9db2d8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c71dbd);
      _Init_thread_footer(&DAT_14c9db358);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e8315a FUN_145e8315a body=226 status=ok
// SIG undefined FUN_145e8315a(void)

longlong * FUN_145e8315a(longlong *param_1)

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
  pcVar13 = FUN_1462cdb18;
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



// FUNCTION 145e83242 FUN_145e83242 body=138 status=ok
// SIG undefined FUN_145e83242(void)

code * FUN_145e83242(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ControlPointCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc00000de0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14718f924;
}



// FUNCTION 145e832cc FUN_145e832cc body=138 status=ok
// SIG undefined FUN_145e832cc(void)

code * FUN_145e832cc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1d800000de8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14718f6fc;
}



// FUNCTION 145e83356 FUN_145e83356 body=292 status=ok
// SIG undefined FUN_145e83356(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e83356(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9dcd88) {
    FUN_144b3d300(&DAT_14c9dcd88);
    if (DAT_14c9dcd88 == -1) {
      FUN_145e835c4();
      FUN_145e8347a();
      FUN_140db5666(&DAT_14c9dcce0,0,&DAT_14c9dcc78,L"FVoxelAddNodeDescCS",
                    L"/Engine/Private/HairStrands/HairStrandsVoxelRasterCompute.usf",L"AddDescCS",5,
                    2,FUN_1471989fa,FUN_14719899a,&LAB_1462ce338,&LAB_147198996,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9e0180);
      _DAT_14c9dcce0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c86210);
      _Init_thread_footer(&DAT_14c9dcd88);
    }
  }
  return &DAT_14c9dcce0;
}



// FUNCTION 145e8347a FUN_145e8347a body=205 status=ok
// SIG undefined FUN_145e8347a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e8347a(void)

{
  if ((DAT_14c9dccdf & 2) == 0) {
    DAT_14c9dccdf = DAT_14c9dccdf | 2;
    _DAT_14c9dcc80 = L"FVoxelAddNodeDescCS";
    _DAT_14c9dcc98 = FUN_146826540;
    _DAT_14c9dcca0 = FUN_146825d77;
    _DAT_14c9dcca8 = FUN_146825fd6;
    _DAT_14c9dccb0 = FUN_1407e02ea;
    _DAT_14c9dccb8 = FUN_146826273;
    _DAT_14c9dcc90 = FUN_147198968;
    _DAT_14c9dccd0 = 0xffffffff000000e0;
    _DAT_14c9dccd8 = 8;
    DAT_14c9dccdc = 0;
    _DAT_14c9dccc0 = &LAB_147198992;
    FUN_145e83548();
    FUN_1407e00cc(&DAT_14c9dcc78);
    return;
  }
  return;
}



// FUNCTION 145e83548 FUN_145e83548 body=123 status=ok
// SIG undefined FUN_145e83548(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e83548(void)

{
  _DAT_14c9e1540 = L"BASE";
  DAT_14c9e156a = 4;
  _DAT_14c9e1548 = FUN_140b35ae4();
  _DAT_14c9e1550 = DAT_14c9dcc88;
  _DAT_14c9e1558 = &LAB_14682652b;
  DAT_14c9dcc88 = &DAT_14c9e1540;
  DAT_14c9dccdd = DAT_14c9dccdd + '\x01';
  _DAT_14c9e1560 = 0x100000000;
  if (*(char *)(_DAT_14c9e1548 + 100) != '\0') {
    DAT_14c9dccde = DAT_14c9dccde + '\x01';
  }
  return;
}



// FUNCTION 145e835c4 FUN_145e835c4 body=261 status=ok
// SIG undefined FUN_145e835c4(void)

void FUN_145e835c4(void)

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
              0x110) < DAT_14c9e0200) {
    FUN_144b3d300(&DAT_14c9e0200);
    if (DAT_14c9e0200 == -1) {
      FUN_145e836ca(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x60;
      local_58 = 0x162;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e0180,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c9e6d7);
      _Init_thread_footer(&DAT_14c9e0200);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e836ca FUN_145e836ca body=226 status=ok
// SIG undefined FUN_145e836ca(void)

longlong * FUN_145e836ca(longlong *param_1)

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
  pcVar13 = FUN_1462ceb10;
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



// FUNCTION 145e837b2 FUN_145e837b2 body=138 status=ok
// SIG undefined FUN_145e837b2(void)

code * FUN_145e837b2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MacroGroupVoxelAlignedAABBBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000016b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462ceb98;
}



// FUNCTION 145e8383c FUN_145e8383c body=138 status=ok
// SIG undefined FUN_145e8383c(void)

code * FUN_145e8383c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CPU_TranslatedWorldMaxAABB";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000165;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a1cec;
}



// FUNCTION 145e838c6 FUN_145e838c6 body=292 status=ok
// SIG undefined FUN_145e838c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e838c6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9de5c0) {
    FUN_144b3d300(&DAT_14c9de5c0);
    if (DAT_14c9de5c0 == -1) {
      FUN_145e83b34();
      FUN_145e839ea();
      FUN_140db5666(&DAT_14c9de518,0,&DAT_14c9de4b0,L"FHeterogeneousVolumesCompositeCS",
                    L"/Engine/Private/HeterogeneousVolumes/HeterogeneousVolumesComposite.usf",
                    L"HeterogeneousVolumesCompositeCS",5,1,FUN_14719a980,FUN_14719a920,
                    &LAB_14719a8e4,&LAB_14719a8e0,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9e0688)
      ;
      _DAT_14c9de518 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c9705a);
      _Init_thread_footer(&DAT_14c9de5c0);
    }
  }
  return &DAT_14c9de518;
}



// FUNCTION 145e839ea FUN_145e839ea body=205 status=ok
// SIG undefined FUN_145e839ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e839ea(void)

{
  if ((DAT_14c9de517 & 2) == 0) {
    DAT_14c9de517 = DAT_14c9de517 | 2;
    _DAT_14c9de4b8 = L"FHeterogeneousVolumesCompositeCS";
    _DAT_14c9de4d0 = FUN_146826540;
    _DAT_14c9de4d8 = FUN_146825d77;
    _DAT_14c9de4e0 = FUN_146825fd6;
    _DAT_14c9de4e8 = FUN_1407e02ea;
    _DAT_14c9de4f0 = FUN_146826273;
    _DAT_14c9de4c8 = FUN_14719a8b2;
    _DAT_14c9de508 = 0xffffffff000000e0;
    _DAT_14c9de510 = 8;
    DAT_14c9de514 = 0;
    _DAT_14c9de4f8 = &LAB_14719a8dc;
    FUN_145e83ab8();
    FUN_1407e00cc(&DAT_14c9de4b0);
    return;
  }
  return;
}



// FUNCTION 145e83ab8 FUN_145e83ab8 body=123 status=ok
// SIG undefined FUN_145e83ab8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e83ab8(void)

{
  _DAT_14c9e18a0 = L"BASE";
  DAT_14c9e18ca = 4;
  _DAT_14c9e18a8 = FUN_140b35ae4();
  _DAT_14c9e18b0 = DAT_14c9de4c0;
  _DAT_14c9e18b8 = &LAB_14682652b;
  DAT_14c9de4c0 = &DAT_14c9e18a0;
  DAT_14c9de515 = DAT_14c9de515 + '\x01';
  _DAT_14c9e18c0 = 0x100000000;
  if (*(char *)(_DAT_14c9e18a8 + 100) != '\0') {
    DAT_14c9de516 = DAT_14c9de516 + '\x01';
  }
  return;
}



// FUNCTION 145e83b34 FUN_145e83b34 body=261 status=ok
// SIG undefined FUN_145e83b34(void)

void FUN_145e83b34(void)

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
              0x110) < DAT_14c9e0708) {
    FUN_144b3d300(&DAT_14c9e0708);
    if (DAT_14c9e0708 == -1) {
      FUN_145e83c3a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x43e;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e0688,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ca0e21);
      _Init_thread_footer(&DAT_14c9e0708);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e83c3a FUN_145e83c3a body=226 status=ok
// SIG undefined FUN_145e83c3a(void)

longlong * FUN_145e83c3a(longlong *param_1)

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
  pcVar13 = FUN_1462cf184;
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



// FUNCTION 145e83d22 FUN_145e83d22 body=138 status=ok
// SIG undefined FUN_145e83d22(void)

undefined1 * FUN_145e83d22(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x440;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e83d1e;
}



// FUNCTION 145e83dac FUN_145e83dac body=138 status=ok
// SIG undefined FUN_145e83dac(void)

code * FUN_145e83dac(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GroupCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000447;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a66e0;
}



// FUNCTION 145e83e36 FUN_145e83e36 body=292 status=ok
// SIG undefined FUN_145e83e36(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e83e36(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9dfec0) {
    FUN_144b3d300(&DAT_14c9dfec0);
    if (DAT_14c9dfec0 == -1) {
      FUN_145e840a4();
      FUN_145e83f5a();
      FUN_140db5666(&DAT_14c9dfe18,0,&DAT_14c9dfdb0,L"FGenerateMin3D",
                    L"/Engine/Private/HeterogeneousVolumes/HeterogeneousVolumesPreshadingPipeline.usf"
                    ,L"GenerateMin3D",5,1,FUN_14719f90e,FUN_14719f8ae,&LAB_14719f872,&LAB_14719f86e,
                    &LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9e13f8);
      _DAT_14c9dfe18 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c9e68f);
      _Init_thread_footer(&DAT_14c9dfec0);
    }
  }
  return &DAT_14c9dfe18;
}



// FUNCTION 145e83f5a FUN_145e83f5a body=205 status=ok
// SIG undefined FUN_145e83f5a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e83f5a(void)

{
  if ((DAT_14c9dfe17 & 2) == 0) {
    DAT_14c9dfe17 = DAT_14c9dfe17 | 2;
    _DAT_14c9dfdb8 = L"FGenerateMin3D";
    _DAT_14c9dfdd0 = FUN_146826540;
    _DAT_14c9dfdd8 = FUN_146825d77;
    _DAT_14c9dfde0 = FUN_146825fd6;
    _DAT_14c9dfde8 = FUN_1407e02ea;
    _DAT_14c9dfdf0 = FUN_146826273;
    _DAT_14c9dfdc8 = FUN_14719f840;
    _DAT_14c9dfe08 = 0xffffffff000000e0;
    _DAT_14c9dfe10 = 8;
    DAT_14c9dfe14 = 0;
    _DAT_14c9dfdf8 = &LAB_14719f86a;
    FUN_145e84028();
    FUN_1407e00cc(&DAT_14c9dfdb0);
    return;
  }
  return;
}



// FUNCTION 145e84028 FUN_145e84028 body=123 status=ok
// SIG undefined FUN_145e84028(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e84028(void)

{
  _DAT_14c9e1ce8 = L"BASE";
  DAT_14c9e1d12 = 4;
  _DAT_14c9e1cf0 = FUN_140b35ae4();
  _DAT_14c9e1cf8 = DAT_14c9dfdc0;
  _DAT_14c9e1d00 = &LAB_14682652b;
  DAT_14c9dfdc0 = &DAT_14c9e1ce8;
  DAT_14c9dfe15 = DAT_14c9dfe15 + '\x01';
  _DAT_14c9e1d08 = 0x100000000;
  if (*(char *)(_DAT_14c9e1cf0 + 100) != '\0') {
    DAT_14c9dfe16 = DAT_14c9dfe16 + '\x01';
  }
  return;
}



// FUNCTION 145e840a4 FUN_145e840a4 body=261 status=ok
// SIG undefined FUN_145e840a4(void)

void FUN_145e840a4(void)

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
              0x110) < DAT_14c9e1478) {
    FUN_144b3d300(&DAT_14c9e1478);
    if (DAT_14c9e1478 == -1) {
      FUN_145e841aa(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x5c2;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e13f8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ca48cf);
      _Init_thread_footer(&DAT_14c9e1478);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e841aa FUN_145e841aa body=226 status=ok
// SIG undefined FUN_145e841aa(void)

longlong * FUN_145e841aa(longlong *param_1)

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
  pcVar13 = FUN_1462d11e8;
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



// FUNCTION 145e84292 FUN_145e84292 body=138 status=ok
// SIG undefined FUN_145e84292(void)

code * FUN_145e84292(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000005c7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e8431c;
}



// FUNCTION 145e8431c FUN_145e8431c body=138 status=ok
// SIG undefined FUN_145e8431c(void)

code * FUN_145e8431c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000005c5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471b0c86;
}



// FUNCTION 145e843a6 FUN_145e843a6 body=292 status=ok
// SIG undefined FUN_145e843a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e843a6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e2510) {
    FUN_144b3d300(&DAT_14c9e2510);
    if (DAT_14c9e2510 == -1) {
      FUN_145e84614();
      FUN_145e844ca();
      FUN_140db5666(&DAT_14c9e2468,0,&DAT_14c9e2400,L"FRefineSparseVoxels",
                    L"/Engine/Private/HeterogeneousVolumes/HeterogeneousVolumesSparseVoxelPipeline.usf"
                    ,L"RefineSparseVoxels",5,1,FUN_1471b5f44,FUN_1471b5ee4,&LAB_1471b5ea8,
                    &LAB_1471b5ea4,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9e5ba0);
      _DAT_14c9e2468 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142cab261);
      _Init_thread_footer(&DAT_14c9e2510);
    }
  }
  return &DAT_14c9e2468;
}



// FUNCTION 145e844ca FUN_145e844ca body=205 status=ok
// SIG undefined FUN_145e844ca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e844ca(void)

{
  if ((DAT_14c9e2467 & 2) == 0) {
    DAT_14c9e2467 = DAT_14c9e2467 | 2;
    _DAT_14c9e2408 = L"FRefineSparseVoxels";
    _DAT_14c9e2420 = FUN_146826540;
    _DAT_14c9e2428 = FUN_146825d77;
    _DAT_14c9e2430 = FUN_146825fd6;
    _DAT_14c9e2438 = FUN_1407e02ea;
    _DAT_14c9e2440 = FUN_146826273;
    _DAT_14c9e2418 = FUN_1471b5e76;
    _DAT_14c9e2458 = 0xffffffff000000e0;
    _DAT_14c9e2460 = 8;
    DAT_14c9e2464 = 0;
    _DAT_14c9e2448 = &LAB_1471b5ea0;
    FUN_145e84598();
    FUN_1407e00cc(&DAT_14c9e2400);
    return;
  }
  return;
}



// FUNCTION 145e84598 FUN_145e84598 body=123 status=ok
// SIG undefined FUN_145e84598(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e84598(void)

{
  _DAT_14c9e6c50 = L"BASE";
  DAT_14c9e6c7a = 4;
  _DAT_14c9e6c58 = FUN_140b35ae4();
  _DAT_14c9e6c60 = DAT_14c9e2410;
  _DAT_14c9e6c68 = &LAB_14682652b;
  DAT_14c9e2410 = &DAT_14c9e6c50;
  DAT_14c9e2465 = DAT_14c9e2465 + '\x01';
  _DAT_14c9e6c70 = 0x100000000;
  if (*(char *)(_DAT_14c9e6c58 + 100) != '\0') {
    DAT_14c9e2466 = DAT_14c9e2466 + '\x01';
  }
  return;
}



// FUNCTION 145e84614 FUN_145e84614 body=261 status=ok
// SIG undefined FUN_145e84614(void)

void FUN_145e84614(void)

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
              0x110) < DAT_14c9e5c20) {
    FUN_144b3d300(&DAT_14c9e5c20);
    if (DAT_14c9e5c20 == -1) {
      FUN_145e8471a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x70;
      local_58 = 0xbd;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e5ba0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142cccf22);
      _Init_thread_footer(&DAT_14c9e5c20);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e8471a FUN_145e8471a body=226 status=ok
// SIG undefined FUN_145e8471a(void)

longlong * FUN_145e8471a(longlong *param_1)

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
  pcVar13 = FUN_1462d1802;
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



// FUNCTION 145e84802 FUN_145e84802 body=138 status=ok
// SIG undefined FUN_145e84802(void)

code * FUN_145e84802(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWVoxelBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<FVoxelDataPacked>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x58000000cd;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471bf568;
}



// FUNCTION 145e8488c FUN_145e8488c body=138 status=ok
// SIG undefined FUN_145e8488c(void)

code * FUN_145e8488c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VolumeResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000000c1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471bf8a4;
}



// FUNCTION 145e84916 FUN_145e84916 body=292 status=ok
// SIG undefined FUN_145e84916(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e84916(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e34a0) {
    FUN_144b3d300(&DAT_14c9e34a0);
    if (DAT_14c9e34a0 == -1) {
      FUN_145e84b84();
      FUN_145e84a3a();
      FUN_140db5666(&DAT_14c9e33f8,0,&DAT_14c9e3390,L"FBuildMajorantVoxelGridCS",
                    L"/Engine/Private/HeterogeneousVolumes/HeterogeneousVolumesVoxelGridPipeline.usf"
                    ,L"BuildMajorantVoxelGridCS",5,2,FUN_1471b6eea,FUN_1471b6e8a,&LAB_1471b6e4e,
                    &LAB_1471b6e4a,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9e6068);
      _DAT_14c9e33f8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142cad910);
      _Init_thread_footer(&DAT_14c9e34a0);
    }
  }
  return &DAT_14c9e33f8;
}



// FUNCTION 145e84a3a FUN_145e84a3a body=205 status=ok
// SIG undefined FUN_145e84a3a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e84a3a(void)

{
  if ((DAT_14c9e33f7 & 2) == 0) {
    DAT_14c9e33f7 = DAT_14c9e33f7 | 2;
    _DAT_14c9e3398 = L"FBuildMajorantVoxelGridCS";
    _DAT_14c9e33b0 = FUN_146826540;
    _DAT_14c9e33b8 = FUN_146825d77;
    _DAT_14c9e33c0 = FUN_146825fd6;
    _DAT_14c9e33c8 = FUN_1407e02ea;
    _DAT_14c9e33d0 = FUN_146826273;
    _DAT_14c9e33a8 = FUN_1471b6e1c;
    _DAT_14c9e33e8 = 0xffffffff000000e0;
    _DAT_14c9e33f0 = 8;
    DAT_14c9e33f4 = 0;
    _DAT_14c9e33d8 = &LAB_1471b6e46;
    FUN_145e84b08();
    FUN_1407e00cc(&DAT_14c9e3390);
    return;
  }
  return;
}



// FUNCTION 145e84b08 FUN_145e84b08 body=123 status=ok
// SIG undefined FUN_145e84b08(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e84b08(void)

{
  _DAT_14c9e6e00 = L"BASE";
  DAT_14c9e6e2a = 4;
  _DAT_14c9e6e08 = FUN_140b35ae4();
  _DAT_14c9e6e10 = DAT_14c9e33a0;
  _DAT_14c9e6e18 = &LAB_14682652b;
  DAT_14c9e33a0 = &DAT_14c9e6e00;
  DAT_14c9e33f5 = DAT_14c9e33f5 + '\x01';
  _DAT_14c9e6e20 = 0x100000000;
  if (*(char *)(_DAT_14c9e6e08 + 100) != '\0') {
    DAT_14c9e33f6 = DAT_14c9e33f6 + '\x01';
  }
  return;
}



// FUNCTION 145e84b84 FUN_145e84b84 body=261 status=ok
// SIG undefined FUN_145e84b84(void)

void FUN_145e84b84(void)

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
              0x110) < DAT_14c9e60e8) {
    FUN_144b3d300(&DAT_14c9e60e8);
    if (DAT_14c9e60e8 == -1) {
      FUN_145e84c8a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x42b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e6068,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142cccf8e);
      _Init_thread_footer(&DAT_14c9e60e8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e84c8a FUN_145e84c8a body=226 status=ok
// SIG undefined FUN_145e84c8a(void)

longlong * FUN_145e84c8a(longlong *param_1)

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
  pcVar13 = FUN_1462d221e;
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



// FUNCTION 145e84d72 FUN_145e84d72 body=138 status=ok
// SIG undefined FUN_145e84d72(void)

code * FUN_145e84d72(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"IndirectionGridBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<FTopLevelGridData>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000430;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e84dfc;
}



// FUNCTION 145e84dfc FUN_145e84dfc body=138 status=ok
// SIG undefined FUN_145e84dfc(void)

code * FUN_145e84dfc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000042f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462d22a6;
}



// FUNCTION 145e84e86 FUN_145e84e86 body=292 status=ok
// SIG undefined FUN_145e84e86(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e84e86(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e76c0) {
    FUN_144b3d300(&DAT_14c9e76c0);
    if (DAT_14c9e76c0 == -1) {
      FUN_145e850f4();
      FUN_145e84faa();
      FUN_140db5666(&DAT_14c9e7618,0,&DAT_14c9e75b0,L"FInstanceCullingOcclusionQueryCS",
                    L"/Engine/Private/InstanceCulling/InstanceCullingOcclusionQuery.usf",L"MainCS",5
                    ,4,FUN_1471d031a,FUN_1471d02ba,&LAB_1471d02a2,&LAB_1471d029e,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9e9c68);
      _DAT_14c9e7618 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142cdba64);
      _Init_thread_footer(&DAT_14c9e76c0);
    }
  }
  return &DAT_14c9e7618;
}



// FUNCTION 145e84faa FUN_145e84faa body=205 status=ok
// SIG undefined FUN_145e84faa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e84faa(void)

{
  if ((DAT_14c9e7617 & 2) == 0) {
    DAT_14c9e7617 = DAT_14c9e7617 | 2;
    _DAT_14c9e75b8 = L"FInstanceCullingOcclusionQueryCS";
    _DAT_14c9e75d0 = FUN_146826540;
    _DAT_14c9e75d8 = FUN_146825d77;
    _DAT_14c9e75e0 = FUN_146825fd6;
    _DAT_14c9e75e8 = FUN_1407e02ea;
    _DAT_14c9e75f0 = FUN_146826273;
    _DAT_14c9e75c8 = FUN_1471d0270;
    _DAT_14c9e7608 = 0xffffffff000000e0;
    _DAT_14c9e7610 = 8;
    DAT_14c9e7614 = 0;
    _DAT_14c9e75f8 = &LAB_1471d029a;
    FUN_145e85078();
    FUN_1407e00cc(&DAT_14c9e75b0);
    return;
  }
  return;
}



// FUNCTION 145e85078 FUN_145e85078 body=123 status=ok
// SIG undefined FUN_145e85078(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e85078(void)

{
  _DAT_14c9eaef8 = L"BASE";
  DAT_14c9eaf22 = 4;
  _DAT_14c9eaf00 = FUN_140b35ae4();
  _DAT_14c9eaf08 = DAT_14c9e75c0;
  _DAT_14c9eaf10 = &LAB_14682652b;
  DAT_14c9e75c0 = &DAT_14c9eaef8;
  DAT_14c9e7615 = DAT_14c9e7615 + '\x01';
  _DAT_14c9eaf18 = 0x100000000;
  if (*(char *)(_DAT_14c9eaf00 + 100) != '\0') {
    DAT_14c9e7616 = DAT_14c9e7616 + '\x01';
  }
  return;
}



// FUNCTION 145e850f4 FUN_145e850f4 body=261 status=ok
// SIG undefined FUN_145e850f4(void)

void FUN_145e850f4(void)

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
              0x110) < DAT_14c9e9ce8) {
    FUN_144b3d300(&DAT_14c9e9ce8);
    if (DAT_14c9e9ce8 == -1) {
      FUN_14157cbfe(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xa0;
      local_58 = 0x6b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e9c68,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142cf4295);
      _Init_thread_footer(&DAT_14c9e9ce8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e851fe FUN_145e851fe body=138 status=ok
// SIG undefined FUN_145e851fe(void)

code * FUN_145e851fe(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InstanceIdBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint32>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3800000073;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d3226;
}



// FUNCTION 145e85288 FUN_145e85288 body=138 status=ok
// SIG undefined FUN_145e85288(void)

code * FUN_145e85288(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HZBTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7000000076;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462d4b30;
}



// FUNCTION 145e85312 FUN_145e85312 body=205 status=ok
// SIG undefined FUN_145e85312(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e85312(void)

{
  if ((DAT_14c9ecf27 & 2) == 0) {
    DAT_14c9ecf27 = DAT_14c9ecf27 | 2;
    _DAT_14c9ecec8 = L"FLumenFrontLayerTranslucencyClearGBufferPS";
    _DAT_14c9ecee0 = FUN_146826540;
    _DAT_14c9ecee8 = FUN_146825d77;
    _DAT_14c9ecef0 = FUN_146825fd6;
    _DAT_14c9ecef8 = FUN_1407e02ea;
    _DAT_14c9ecf00 = FUN_146826273;
    _DAT_14c9eced8 = FUN_1471dca64;
    _DAT_14c9ecf18 = 0xffffffff000000e0;
    _DAT_14c9ecf20 = 8;
    DAT_14c9ecf24 = 0;
    _DAT_14c9ecf08 = &LAB_1471dca8e;
    FUN_145e853e0();
    FUN_1407e00cc(&DAT_14c9ecec0);
    return;
  }
  return;
}



// FUNCTION 145e853e0 FUN_145e853e0 body=123 status=ok
// SIG undefined FUN_145e853e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e853e0(void)

{
  _DAT_14c9f1770 = L"BASE";
  DAT_14c9f179a = 4;
  _DAT_14c9f1778 = FUN_140b35ae4();
  _DAT_14c9f1780 = DAT_14c9eced0;
  _DAT_14c9f1788 = &LAB_14682652b;
  DAT_14c9eced0 = &DAT_14c9f1770;
  DAT_14c9ecf25 = DAT_14c9ecf25 + '\x01';
  _DAT_14c9f1790 = 0x100000000;
  if (*(char *)(_DAT_14c9f1778 + 100) != '\0') {
    DAT_14c9ecf26 = DAT_14c9ecf26 + '\x01';
  }
  return;
}



// FUNCTION 145e8545c FUN_145e8545c body=226 status=ok
// SIG undefined FUN_145e8545c(void)

longlong * FUN_145e8545c(longlong *param_1)

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
  pcVar13 = FUN_1462d7ed6;
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



// FUNCTION 145e85544 FUN_145e85544 body=138 status=ok
// SIG undefined FUN_145e85544(void)

undefined1 * FUN_145e85544(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x4b;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e85540;
}



// FUNCTION 145e855ce FUN_145e855ce body=144 status=ok
// SIG undefined FUN_145e855ce(void)

code * FUN_145e855ce(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x100000004c;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145e85544;
}



// FUNCTION 145e8565e FUN_145e8565e body=205 status=ok
// SIG undefined FUN_145e8565e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e8565e(void)

{
  if ((DAT_14c9ef917 & 2) == 0) {
    DAT_14c9ef917 = DAT_14c9ef917 | 2;
    _DAT_14c9ef8b8 = L"FFilterProbeRadianceWithGatherCS";
    _DAT_14c9ef8d0 = FUN_146826540;
    _DAT_14c9ef8d8 = FUN_146825d77;
    _DAT_14c9ef8e0 = FUN_146825fd6;
    _DAT_14c9ef8e8 = FUN_1407e02ea;
    _DAT_14c9ef8f0 = FUN_146826273;
    _DAT_14c9ef8c8 = FUN_1471dff5a;
    _DAT_14c9ef908 = 0xffffffff000000e0;
    _DAT_14c9ef910 = 8;
    DAT_14c9ef914 = 0;
    _DAT_14c9ef8f8 = &LAB_1471dff84;
    FUN_145e8572c();
    FUN_1407e00cc(&DAT_14c9ef8b0);
    return;
  }
  return;
}



// FUNCTION 145e8572c FUN_145e8572c body=123 status=ok
// SIG undefined FUN_145e8572c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e8572c(void)

{
  _DAT_14c9f1e50 = L"BASE";
  DAT_14c9f1e7a = 4;
  _DAT_14c9f1e58 = FUN_140b35ae4();
  _DAT_14c9f1e60 = DAT_14c9ef8c0;
  _DAT_14c9f1e68 = &LAB_14682652b;
  DAT_14c9ef8c0 = &DAT_14c9f1e50;
  DAT_14c9ef915 = DAT_14c9ef915 + '\x01';
  _DAT_14c9f1e70 = 0x100000000;
  if (*(char *)(_DAT_14c9f1e58 + 100) != '\0') {
    DAT_14c9ef916 = DAT_14c9ef916 + '\x01';
  }
  return;
}



// FUNCTION 145e857a8 FUN_145e857a8 body=226 status=ok
// SIG undefined FUN_145e857a8(void)

longlong * FUN_145e857a8(longlong *param_1)

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
  pcVar13 = FUN_1462da92e;
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



// FUNCTION 145e85890 FUN_145e85890 body=138 status=ok
// SIG undefined FUN_145e85890(void)

code * FUN_145e85890(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DepthProbeAtlasTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000038a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471e6bf8;
}



// FUNCTION 145e8591a FUN_145e8591a body=144 status=ok
// SIG undefined FUN_145e8591a(void)

code * FUN_145e8591a(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x200000038c;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462daa46;
}



// FUNCTION 145e859aa FUN_145e859aa body=292 status=ok
// SIG undefined FUN_145e859aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e859aa(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f5b00) {
    FUN_144b3d300(&DAT_14c9f5b00);
    if (DAT_14c9f5b00 == -1) {
      FUN_145e85c18();
      FUN_145e85ace();
      FUN_140db5666(&DAT_14c9f5a58,0,&DAT_14c9f59f0,L"FTemporalAccumulationCS",
                    L"/Engine/Private/Lumen/LumenReSTIRGather.usf",L"TemporalAccumulationCS",5,2,
                    FUN_1471f0b3c,FUN_1471f0adc,&LAB_145839104,&LAB_1471f0ad8,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9f77a0);
      _DAT_14c9f5a58 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d4ae56);
      _Init_thread_footer(&DAT_14c9f5b00);
    }
  }
  return &DAT_14c9f5a58;
}



// FUNCTION 145e85ace FUN_145e85ace body=205 status=ok
// SIG undefined FUN_145e85ace(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e85ace(void)

{
  if ((DAT_14c9f5a57 & 2) == 0) {
    DAT_14c9f5a57 = DAT_14c9f5a57 | 2;
    _DAT_14c9f59f8 = L"FTemporalAccumulationCS";
    _DAT_14c9f5a10 = FUN_146826540;
    _DAT_14c9f5a18 = FUN_146825d77;
    _DAT_14c9f5a20 = FUN_146825fd6;
    _DAT_14c9f5a28 = FUN_1407e02ea;
    _DAT_14c9f5a30 = FUN_146826273;
    _DAT_14c9f5a08 = FUN_1471f0aaa;
    _DAT_14c9f5a48 = 0xffffffff000000e0;
    _DAT_14c9f5a50 = 8;
    DAT_14c9f5a54 = 0;
    _DAT_14c9f5a38 = &LAB_1471f0ad4;
    FUN_145e85b9c();
    FUN_1407e00cc(&DAT_14c9f59f0);
    return;
  }
  return;
}



// FUNCTION 145e85b9c FUN_145e85b9c body=123 status=ok
// SIG undefined FUN_145e85b9c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e85b9c(void)

{
  _DAT_14c9f80e8 = L"BASE";
  DAT_14c9f8112 = 4;
  _DAT_14c9f80f0 = FUN_140b35ae4();
  _DAT_14c9f80f8 = DAT_14c9f5a00;
  _DAT_14c9f8100 = &LAB_14682652b;
  DAT_14c9f5a00 = &DAT_14c9f80e8;
  DAT_14c9f5a55 = DAT_14c9f5a55 + '\x01';
  _DAT_14c9f8108 = 0x100000000;
  if (*(char *)(_DAT_14c9f80f0 + 100) != '\0') {
    DAT_14c9f5a56 = DAT_14c9f5a56 + '\x01';
  }
  return;
}



// FUNCTION 145e85c18 FUN_145e85c18 body=261 status=ok
// SIG undefined FUN_145e85c18(void)

void FUN_145e85c18(void)

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
              0x110) < DAT_14c9f7820) {
    FUN_144b3d300(&DAT_14c9f7820);
    if (DAT_14c9f7820 == -1) {
      FUN_14157d12e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x150;
      local_58 = 0x26e;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f77a0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d596c9);
      _Init_thread_footer(&DAT_14c9f7820);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e85d22 FUN_145e85d22 body=132 status=ok
// SIG undefined FUN_145e85d22(void)

undefined1 * FUN_145e85d22(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWNewHistoryDiffuseIndirect";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x26f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e85d1e;
}



// FUNCTION 145e85da6 FUN_145e85da6 body=144 status=ok
// SIG undefined FUN_145e85da6(void)

code * FUN_145e85da6(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xa000000276;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462e11dc;
}



// FUNCTION 145e85e36 FUN_145e85e36 body=292 status=ok
// SIG undefined FUN_145e85e36(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e85e36(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f9ad0) {
    FUN_144b3d300(&DAT_14c9f9ad0);
    if (DAT_14c9f9ad0 == -1) {
      FUN_145e860a4();
      FUN_145e85f5a();
      FUN_140db5666(&DAT_14c9f9a28,0,&DAT_14c9f99c0,L"FLumenSceneCompactLightListCS",
                    L"/Engine/Private/Lumen/LumenSceneDirectLightingStochastic.usf",L"MainCS",5,1,
                    FUN_147205936,FUN_1472058d6,&LAB_1462e16b2,&LAB_1472058d2,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9fe2b0);
      _DAT_14c9f9a28 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d694d8);
      _Init_thread_footer(&DAT_14c9f9ad0);
    }
  }
  return &DAT_14c9f9a28;
}



// FUNCTION 145e85f5a FUN_145e85f5a body=205 status=ok
// SIG undefined FUN_145e85f5a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e85f5a(void)

{
  if ((DAT_14c9f9a27 & 2) == 0) {
    DAT_14c9f9a27 = DAT_14c9f9a27 | 2;
    _DAT_14c9f99c8 = L"FLumenSceneCompactLightListCS";
    _DAT_14c9f99e0 = FUN_146826540;
    _DAT_14c9f99e8 = FUN_146825d77;
    _DAT_14c9f99f0 = FUN_146825fd6;
    _DAT_14c9f99f8 = FUN_1407e02ea;
    _DAT_14c9f9a00 = FUN_146826273;
    _DAT_14c9f99d8 = FUN_1472058a4;
    _DAT_14c9f9a18 = 0xffffffff000000e0;
    _DAT_14c9f9a20 = 8;
    DAT_14c9f9a24 = 0;
    _DAT_14c9f9a08 = &LAB_1472058ce;
    FUN_145e86028();
    FUN_1407e00cc(&DAT_14c9f99c0);
    return;
  }
  return;
}



// FUNCTION 145e86028 FUN_145e86028 body=123 status=ok
// SIG undefined FUN_145e86028(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e86028(void)

{
  _DAT_14c9ffdc8 = L"BASE";
  DAT_14c9ffdf2 = 4;
  _DAT_14c9ffdd0 = FUN_140b35ae4();
  _DAT_14c9ffdd8 = DAT_14c9f99d0;
  _DAT_14c9ffde0 = &LAB_14682652b;
  DAT_14c9f99d0 = &DAT_14c9ffdc8;
  DAT_14c9f9a25 = DAT_14c9f9a25 + '\x01';
  _DAT_14c9ffde8 = 0x100000000;
  if (*(char *)(_DAT_14c9ffdd0 + 100) != '\0') {
    DAT_14c9f9a26 = DAT_14c9f9a26 + '\x01';
  }
  return;
}



// FUNCTION 145e860a4 FUN_145e860a4 body=261 status=ok
// SIG undefined FUN_145e860a4(void)

void FUN_145e860a4(void)

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
              0x110) < DAT_14c9fe330) {
    FUN_144b3d300(&DAT_14c9fe330);
    if (DAT_14c9fe330 == -1) {
      FUN_145e861aa(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x6d;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9fe2b0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d9938f);
      _Init_thread_footer(&DAT_14c9fe330);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e861aa FUN_145e861aa body=226 status=ok
// SIG undefined FUN_145e861aa(void)

longlong * FUN_145e861aa(longlong *param_1)

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
  pcVar13 = FUN_1462e2f22;
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



// FUNCTION 145e86292 FUN_145e86292 body=138 status=ok
// SIG undefined FUN_145e86292(void)

code * FUN_145e86292(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWCardTilePerLightCounters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000072;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14720c988;
}



// FUNCTION 145e8631c FUN_145e8631c body=138 status=ok
// SIG undefined FUN_145e8631c(void)

code * FUN_145e8631c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"UniqueLightCount";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000070;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462e2faa;
}



// FUNCTION 145e863a6 FUN_145e863a6 body=292 status=ok
// SIG undefined FUN_145e863a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e863a6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9fa7d0) {
    FUN_144b3d300(&DAT_14c9fa7d0);
    if (DAT_14c9fa7d0 == -1) {
      FUN_145e86614();
      FUN_145e864ca();
      FUN_140db5666(&DAT_14c9fa728,0,&DAT_14c9fa6c0,
                    L"FLumenDirectLightingHardwareRayTracingIndirectArgsCS",
                    L"/Engine/Private/Lumen/LumenSceneDirectLightingHardwareRayTracing.usf",
                    L"LumenDirectLightingHardwareRayTracingIndirectArgsCS",5,1,FUN_1472062ca,
                    FUN_14720626a,&LAB_1462e16e4,&LAB_147206266,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14c9fe800);
      _DAT_14c9fa728 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d7b4a9);
      _Init_thread_footer(&DAT_14c9fa7d0);
    }
  }
  return &DAT_14c9fa728;
}



// FUNCTION 145e864ca FUN_145e864ca body=205 status=ok
// SIG undefined FUN_145e864ca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e864ca(void)

{
  if ((DAT_14c9fa727 & 2) == 0) {
    DAT_14c9fa727 = DAT_14c9fa727 | 2;
    _DAT_14c9fa6c8 = L"FLumenDirectLightingHardwareRayTracingIndirectArgsCS";
    _DAT_14c9fa6e0 = FUN_146826540;
    _DAT_14c9fa6e8 = FUN_146825d77;
    _DAT_14c9fa6f0 = FUN_146825fd6;
    _DAT_14c9fa6f8 = FUN_1407e02ea;
    _DAT_14c9fa700 = FUN_146826273;
    _DAT_14c9fa6d8 = FUN_147206238;
    _DAT_14c9fa718 = 0xffffffff000000e0;
    _DAT_14c9fa720 = 8;
    DAT_14c9fa724 = 0;
    _DAT_14c9fa708 = &LAB_147206262;
    FUN_145e86598();
    FUN_1407e00cc(&DAT_14c9fa6c0);
    return;
  }
  return;
}



// FUNCTION 145e86598 FUN_145e86598 body=123 status=ok
// SIG undefined FUN_145e86598(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e86598(void)

{
  _DAT_14c9ffff8 = L"BASE";
  DAT_14ca00022 = 4;
  _DAT_14ca00000 = FUN_140b35ae4();
  _DAT_14ca00008 = DAT_14c9fa6d0;
  _DAT_14ca00010 = &LAB_14682652b;
  DAT_14c9fa6d0 = &DAT_14c9ffff8;
  DAT_14c9fa725 = DAT_14c9fa725 + '\x01';
  _DAT_14ca00018 = 0x100000000;
  if (*(char *)(_DAT_14ca00000 + 100) != '\0') {
    DAT_14c9fa726 = DAT_14c9fa726 + '\x01';
  }
  return;
}



// FUNCTION 145e86614 FUN_145e86614 body=261 status=ok
// SIG undefined FUN_145e86614(void)

void FUN_145e86614(void)

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
              0x110) < DAT_14c9fe880) {
    FUN_144b3d300(&DAT_14c9fe880);
    if (DAT_14c9fe880 == -1) {
      FUN_145e8671a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0xb5;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9fe800,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d9b949);
      _Init_thread_footer(&DAT_14c9fe880);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e8671a FUN_145e8671a body=226 status=ok
// SIG undefined FUN_145e8671a(void)

longlong * FUN_145e8671a(longlong *param_1)

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
  pcVar13 = FUN_1462e3f88;
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



// FUNCTION 145e86802 FUN_145e86802 body=138 status=ok
// SIG undefined FUN_145e86802(void)

code * FUN_145e86802(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutputThreadGroupSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000000b8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e8688c;
}



// FUNCTION 145e8688c FUN_145e8688c body=138 status=ok
// SIG undefined FUN_145e8688c(void)

code * FUN_145e8688c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000b7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147213284;
}



// FUNCTION 145e86916 FUN_145e86916 body=205 status=ok
// SIG undefined FUN_145e86916(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e86916(void)

{
  if ((DAT_14c9fcd0f & 2) == 0) {
    DAT_14c9fcd0f = DAT_14c9fcd0f | 2;
    _DAT_14c9fccb0 = L"FScreenProbeAdaptivePlacementCS";
    _DAT_14c9fccc8 = FUN_146826540;
    _DAT_14c9fccd0 = FUN_146825d77;
    _DAT_14c9fccd8 = FUN_146825fd6;
    _DAT_14c9fcce0 = FUN_1407e02ea;
    _DAT_14c9fcce8 = FUN_146826273;
    _DAT_14c9fccc0 = FUN_147208e38;
    _DAT_14c9fcd00 = 0xffffffff000000e0;
    _DAT_14c9fcd08 = 8;
    DAT_14c9fcd0c = 0;
    _DAT_14c9fccf0 = &LAB_147208e62;
    FUN_145e869e4();
    FUN_1407e00cc(&DAT_14c9fcca8);
    return;
  }
  return;
}



// FUNCTION 145e869e4 FUN_145e869e4 body=123 status=ok
// SIG undefined FUN_145e869e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e869e4(void)

{
  _DAT_14ca005b8 = L"BASE";
  DAT_14ca005e2 = 4;
  _DAT_14ca005c0 = FUN_140b35ae4();
  _DAT_14ca005c8 = DAT_14c9fccb8;
  _DAT_14ca005d0 = &LAB_14682652b;
  DAT_14c9fccb8 = &DAT_14ca005b8;
  DAT_14c9fcd0d = DAT_14c9fcd0d + '\x01';
  _DAT_14ca005d8 = 0x100000000;
  if (*(char *)(_DAT_14ca005c0 + 100) != '\0') {
    DAT_14c9fcd0e = DAT_14c9fcd0e + '\x01';
  }
  return;
}



// FUNCTION 145e86a60 FUN_145e86a60 body=226 status=ok
// SIG undefined FUN_145e86a60(void)

longlong * FUN_145e86a60(longlong *param_1)

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
  pcVar13 = FUN_1462e5d64;
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



// FUNCTION 145e86b48 FUN_145e86b48 body=138 status=ok
// SIG undefined FUN_145e86b48(void)

code * FUN_145e86b48(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWScreenProbeTranslatedWorldPosition";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000028c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147217598;
}



// FUNCTION 145e86bd2 FUN_145e86bd2 body=144 status=ok
// SIG undefined FUN_145e86bd2(void)

code * FUN_145e86bd2(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x4000000291;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_147217370;
}



// FUNCTION 145e86c62 FUN_145e86c62 body=292 status=ok
// SIG undefined FUN_145e86c62(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e86c62(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9fd820) {
    FUN_144b3d300(&DAT_14c9fd820);
    if (DAT_14c9fd820 == -1) {
      FUN_145e86ed0();
      FUN_145e86d86();
      FUN_140db5666(&DAT_14c9fd778,0,&DAT_14c9fd710,L"FLumenScreenProbeSubstrateDebugPass",
                    L"/Engine/Private/Lumen/LumenScreenProbeGather.usf",L"ScreenProbeDebugMain",5,1,
                    FUN_1472095bc,FUN_14720955c,&LAB_1462e185e,&LAB_147209558,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9ffa10);
      _DAT_14c9fd778 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d8cd6e);
      _Init_thread_footer(&DAT_14c9fd820);
    }
  }
  return &DAT_14c9fd778;
}



// FUNCTION 145e86d86 FUN_145e86d86 body=205 status=ok
// SIG undefined FUN_145e86d86(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e86d86(void)

{
  if ((DAT_14c9fd777 & 2) == 0) {
    DAT_14c9fd777 = DAT_14c9fd777 | 2;
    _DAT_14c9fd718 = L"FLumenScreenProbeSubstrateDebugPass";
    _DAT_14c9fd730 = FUN_146826540;
    _DAT_14c9fd738 = FUN_146825d77;
    _DAT_14c9fd740 = FUN_146825fd6;
    _DAT_14c9fd748 = FUN_1407e02ea;
    _DAT_14c9fd750 = FUN_146826273;
    _DAT_14c9fd728 = FUN_14720952a;
    _DAT_14c9fd768 = 0xffffffff000000e0;
    _DAT_14c9fd770 = 8;
    DAT_14c9fd774 = 0;
    _DAT_14c9fd758 = &LAB_147209554;
    FUN_145e86e54();
    FUN_1407e00cc(&DAT_14c9fd710);
    return;
  }
  return;
}



// FUNCTION 145e86e54 FUN_145e86e54 body=123 status=ok
// SIG undefined FUN_145e86e54(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e86e54(void)

{
  _DAT_14ca00768 = L"BASE";
  DAT_14ca00792 = 4;
  _DAT_14ca00770 = FUN_140b35ae4();
  _DAT_14ca00778 = DAT_14c9fd720;
  _DAT_14ca00780 = &LAB_14682652b;
  DAT_14c9fd720 = &DAT_14ca00768;
  DAT_14c9fd775 = DAT_14c9fd775 + '\x01';
  _DAT_14ca00788 = 0x100000000;
  if (*(char *)(_DAT_14ca00770 + 100) != '\0') {
    DAT_14c9fd776 = DAT_14c9fd776 + '\x01';
  }
  return;
}



// FUNCTION 145e86ed0 FUN_145e86ed0 body=261 status=ok
// SIG undefined FUN_145e86ed0(void)

void FUN_145e86ed0(void)

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
              0x110) < DAT_14c9ffa90) {
    FUN_144b3d300(&DAT_14c9ffa90);
    if (DAT_14c9ffa90 == -1) {
      FUN_145e86fd6(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x60;
      local_58 = 0x464;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9ffa10,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d9c719);
      _Init_thread_footer(&DAT_14c9ffa90);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e86fd6 FUN_145e86fd6 body=226 status=ok
// SIG undefined FUN_145e86fd6(void)

longlong * FUN_145e86fd6(longlong *param_1)

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
  pcVar13 = FUN_1462e6e80;
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



// FUNCTION 145e870be FUN_145e870be body=138 status=ok
// SIG undefined FUN_145e870be(void)

code * FUN_145e870be(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MaxClosurePerPixel";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000466;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147219448;
}



// FUNCTION 145e87148 FUN_145e87148 body=138 status=ok
// SIG undefined FUN_145e87148(void)

code * FUN_145e87148(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ViewportIntegrateTileDimensions";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000467;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e870be;
}



// FUNCTION 145e871d2 FUN_145e871d2 body=205 status=ok
// SIG undefined FUN_145e871d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e871d2(void)

{
  if ((DAT_14ca02daf & 2) == 0) {
    DAT_14ca02daf = DAT_14ca02daf | 2;
    _DAT_14ca02d50 = L"FMarkRadianceProbesUsedByTranslucencyVolumeCS";
    _DAT_14ca02d68 = FUN_146826540;
    _DAT_14ca02d70 = FUN_146825d77;
    _DAT_14ca02d78 = FUN_146825fd6;
    _DAT_14ca02d80 = FUN_1407e02ea;
    _DAT_14ca02d88 = FUN_146826273;
    _DAT_14ca02d60 = FUN_14722269a;
    _DAT_14ca02da0 = 0xffffffff000000e0;
    _DAT_14ca02da8 = 8;
    DAT_14ca02dac = 0;
    _DAT_14ca02d90 = &LAB_1472226c4;
    FUN_145e872a0();
    FUN_1407e00cc(&DAT_14ca02d48);
    return;
  }
  return;
}



// FUNCTION 145e872a0 FUN_145e872a0 body=123 status=ok
// SIG undefined FUN_145e872a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e872a0(void)

{
  _DAT_14ca07d30 = L"BASE";
  DAT_14ca07d5a = 4;
  _DAT_14ca07d38 = FUN_140b35ae4();
  _DAT_14ca07d40 = DAT_14ca02d58;
  _DAT_14ca07d48 = &LAB_14682652b;
  DAT_14ca02d58 = &DAT_14ca07d30;
  DAT_14ca02dad = DAT_14ca02dad + '\x01';
  _DAT_14ca07d50 = 0x100000000;
  if (*(char *)(_DAT_14ca07d38 + 100) != '\0') {
    DAT_14ca02dae = DAT_14ca02dae + '\x01';
  }
  return;
}



// FUNCTION 145e8731c FUN_145e8731c body=226 status=ok
// SIG undefined FUN_145e8731c(void)

longlong * FUN_145e8731c(longlong *param_1)

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
  pcVar13 = FUN_1462e9a60;
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



// FUNCTION 145e87404 FUN_145e87404 body=138 status=ok
// SIG undefined FUN_145e87404(void)

undefined1 * FUN_145e87404(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1a4;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e87400;
}



// FUNCTION 145e8748e FUN_145e8748e body=144 status=ok
// SIG undefined FUN_145e8748e(void)

code * FUN_145e8748e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145c13008();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"RadianceCacheMarkParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"LumenRadianceCache::FRadianceCacheMarkParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x10000001a5;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145e87404;
}



// FUNCTION 145e8751e FUN_145e8751e body=292 status=ok
// SIG undefined FUN_145e8751e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e8751e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca04b48) {
    FUN_144b3d300(&DAT_14ca04b48);
    if (DAT_14ca04b48 == -1) {
      FUN_145e8778c();
      FUN_145e87642();
      FUN_140db5666(&DAT_14ca04aa0,0,&DAT_14ca04a38,L"FTileClassificationCS",
                    L"/Engine/Private/MegaLights/MegaLights.usf",L"TileClassificationCS",5,2,
                    FUN_1472274bc,FUN_14722745c,&LAB_14722743a,&LAB_147227436,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca07088);
      _DAT_14ca04aa0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142dc9a21);
      _Init_thread_footer(&DAT_14ca04b48);
    }
  }
  return &DAT_14ca04aa0;
}



// FUNCTION 145e87642 FUN_145e87642 body=205 status=ok
// SIG undefined FUN_145e87642(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e87642(void)

{
  if ((DAT_14ca04a9f & 2) == 0) {
    DAT_14ca04a9f = DAT_14ca04a9f | 2;
    _DAT_14ca04a40 = L"FTileClassificationCS";
    _DAT_14ca04a58 = FUN_146826540;
    _DAT_14ca04a60 = FUN_146825d77;
    _DAT_14ca04a68 = FUN_146825fd6;
    _DAT_14ca04a70 = FUN_1407e02ea;
    _DAT_14ca04a78 = FUN_146826273;
    _DAT_14ca04a50 = FUN_147227408;
    _DAT_14ca04a90 = 0xffffffff000000e0;
    _DAT_14ca04a98 = 8;
    DAT_14ca04a9c = 0;
    _DAT_14ca04a80 = &LAB_147227432;
    FUN_145e87710();
    FUN_1407e00cc(&DAT_14ca04a38);
    return;
  }
  return;
}



// FUNCTION 145e87710 FUN_145e87710 body=123 status=ok
// SIG undefined FUN_145e87710(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e87710(void)

{
  _DAT_14ca081d0 = L"BASE";
  DAT_14ca081fa = 4;
  _DAT_14ca081d8 = FUN_140b35ae4();
  _DAT_14ca081e0 = DAT_14ca04a48;
  _DAT_14ca081e8 = &LAB_14682652b;
  DAT_14ca04a48 = &DAT_14ca081d0;
  DAT_14ca04a9d = DAT_14ca04a9d + '\x01';
  _DAT_14ca081f0 = 0x100000000;
  if (*(char *)(_DAT_14ca081d8 + 100) != '\0') {
    DAT_14ca04a9e = DAT_14ca04a9e + '\x01';
  }
  return;
}



// FUNCTION 145e8778c FUN_145e8778c body=261 status=ok
// SIG undefined FUN_145e8778c(void)

void FUN_145e8778c(void)

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
              0x110) < DAT_14ca07108) {
    FUN_144b3d300(&DAT_14ca07108);
    if (DAT_14ca07108 == -1) {
      FUN_145e87892(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x2e0;
      local_58 = 0x20c;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca07088,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142dd410b);
      _Init_thread_footer(&DAT_14ca07108);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e87892 FUN_145e87892 body=226 status=ok
// SIG undefined FUN_145e87892(void)

longlong * FUN_145e87892(longlong *param_1)

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
  pcVar13 = FUN_1462eaf8c;
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



// FUNCTION 145e8797a FUN_145e8797a body=138 status=ok
// SIG undefined FUN_145e8797a(void)

code * FUN_145e8797a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWTileData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2c80000020f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14722de9e;
}



// FUNCTION 145e87a04 FUN_145e87a04 body=138 status=ok
// SIG undefined FUN_145e87a04(void)

undefined1 * FUN_145e87a04(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x20d;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e87976;
}



// FUNCTION 145e87a8e FUN_145e87a8e body=292 status=ok
// SIG undefined FUN_145e87a8e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e87a8e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca04c70) {
    FUN_144b3d300(&DAT_14ca04c70);
    if (DAT_14ca04c70 == -1) {
      FUN_145e87cfc();
      FUN_145e87bb2();
      FUN_140db5666(&DAT_14ca04bc8,0,&DAT_14ca04b60,L"FInitTileIndirectArgsCS",
                    L"/Engine/Private/MegaLights/MegaLights.usf",L"InitTileIndirectArgsCS",5,1,
                    FUN_1472275a4,FUN_147227544,&LAB_147227522,&LAB_14722751e,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca07110);
      _DAT_14ca04bc8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142dc9a2d);
      _Init_thread_footer(&DAT_14ca04c70);
    }
  }
  return &DAT_14ca04bc8;
}



// FUNCTION 145e87bb2 FUN_145e87bb2 body=205 status=ok
// SIG undefined FUN_145e87bb2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e87bb2(void)

{
  if ((DAT_14ca04bc7 & 2) == 0) {
    DAT_14ca04bc7 = DAT_14ca04bc7 | 2;
    _DAT_14ca04b68 = L"FInitTileIndirectArgsCS";
    _DAT_14ca04b80 = FUN_146826540;
    _DAT_14ca04b88 = FUN_146825d77;
    _DAT_14ca04b90 = FUN_146825fd6;
    _DAT_14ca04b98 = FUN_1407e02ea;
    _DAT_14ca04ba0 = FUN_146826273;
    _DAT_14ca04b78 = FUN_1472274f0;
    _DAT_14ca04bb8 = 0xffffffff000000e0;
    _DAT_14ca04bc0 = 8;
    DAT_14ca04bc4 = 0;
    _DAT_14ca04ba8 = &LAB_14722751a;
    FUN_145e87c80();
    FUN_1407e00cc(&DAT_14ca04b60);
    return;
  }
  return;
}



// FUNCTION 145e87c80 FUN_145e87c80 body=123 status=ok
// SIG undefined FUN_145e87c80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e87c80(void)

{
  _DAT_14ca08200 = L"BASE";
  DAT_14ca0822a = 4;
  _DAT_14ca08208 = FUN_140b35ae4();
  _DAT_14ca08210 = DAT_14ca04b70;
  _DAT_14ca08218 = &LAB_14682652b;
  DAT_14ca04b70 = &DAT_14ca08200;
  DAT_14ca04bc5 = DAT_14ca04bc5 + '\x01';
  _DAT_14ca08220 = 0x100000000;
  if (*(char *)(_DAT_14ca08208 + 100) != '\0') {
    DAT_14ca04bc6 = DAT_14ca04bc6 + '\x01';
  }
  return;
}



// FUNCTION 145e87cfc FUN_145e87cfc body=261 status=ok
// SIG undefined FUN_145e87cfc(void)

void FUN_145e87cfc(void)

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
              0x110) < DAT_14ca07190) {
    FUN_144b3d300(&DAT_14ca07190);
    if (DAT_14ca07190 == -1) {
      FUN_145e87e02(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x2e0;
      local_58 = 0x22f;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca07110,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142dd412f);
      _Init_thread_footer(&DAT_14ca07190);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e87e02 FUN_145e87e02 body=226 status=ok
// SIG undefined FUN_145e87e02(void)

longlong * FUN_145e87e02(longlong *param_1)

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
  pcVar13 = FUN_1462eb6b4;
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



// FUNCTION 145e87eea FUN_145e87eea body=138 status=ok
// SIG undefined FUN_145e87eea(void)

code * FUN_145e87eea(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWTileIndirectArgs";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2c000000231;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462eb73c;
}



// FUNCTION 145e87f74 FUN_145e87f74 body=138 status=ok
// SIG undefined FUN_145e87f74(void)

code * FUN_145e87f74(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2d000000233;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14722f6e4;
}



// FUNCTION 145e87ffe FUN_145e87ffe body=292 status=ok
// SIG undefined FUN_145e87ffe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e87ffe(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca04d98) {
    FUN_144b3d300(&DAT_14ca04d98);
    if (DAT_14ca04d98 == -1) {
      FUN_145e8826c();
      FUN_145e88122();
      FUN_140db5666(&DAT_14ca04cf0,0,&DAT_14ca04c88,L"FGenerateLightSamplesCS",
                    L"/Engine/Private/MegaLights/MegaLightsSampling.usf",L"GenerateLightSamplesCS",5
                    ,0x48,FUN_147227666,FUN_147227606,&LAB_142dc9a3a,&LAB_140f68906,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca07198);
      _DAT_14ca04cf0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142dc9a5b);
      _Init_thread_footer(&DAT_14ca04d98);
    }
  }
  return &DAT_14ca04cf0;
}



// FUNCTION 145e88122 FUN_145e88122 body=205 status=ok
// SIG undefined FUN_145e88122(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e88122(void)

{
  if ((DAT_14ca04cef & 2) == 0) {
    DAT_14ca04cef = DAT_14ca04cef | 2;
    _DAT_14ca04c90 = L"FGenerateLightSamplesCS";
    _DAT_14ca04ca8 = FUN_146826540;
    _DAT_14ca04cb0 = FUN_146825d77;
    _DAT_14ca04cb8 = FUN_146825fd6;
    _DAT_14ca04cc0 = FUN_1407e02ea;
    _DAT_14ca04cc8 = FUN_146826273;
    _DAT_14ca04ca0 = FUN_1472275d8;
    _DAT_14ca04ce0 = 0xffffffff000000e0;
    _DAT_14ca04ce8 = 8;
    DAT_14ca04cec = 0;
    _DAT_14ca04cd0 = &LAB_147227602;
    FUN_145e881f0();
    FUN_1407e00cc(&DAT_14ca04c88);
    return;
  }
  return;
}



// FUNCTION 145e881f0 FUN_145e881f0 body=123 status=ok
// SIG undefined FUN_145e881f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e881f0(void)

{
  _DAT_14ca08230 = L"BASE";
  DAT_14ca0825a = 4;
  _DAT_14ca08238 = FUN_140b35ae4();
  _DAT_14ca08240 = DAT_14ca04c98;
  _DAT_14ca08248 = &LAB_14682652b;
  DAT_14ca04c98 = &DAT_14ca08230;
  DAT_14ca04ced = DAT_14ca04ced + '\x01';
  _DAT_14ca08250 = 0x100000000;
  if (*(char *)(_DAT_14ca08238 + 100) != '\0') {
    DAT_14ca04cee = DAT_14ca04cee + '\x01';
  }
  return;
}



// FUNCTION 145e8826c FUN_145e8826c body=261 status=ok
// SIG undefined FUN_145e8826c(void)

void FUN_145e8826c(void)

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
              0x110) < DAT_14ca07218) {
    FUN_144b3d300(&DAT_14ca07218);
    if (DAT_14ca07218 == -1) {
      FUN_14157d65e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x360;
      local_58 = 0x24f;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca07198,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142dd413b);
      _Init_thread_footer(&DAT_14ca07218);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e88376 FUN_145e88376 body=138 status=ok
// SIG undefined FUN_145e88376(void)

code * FUN_145e88376(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DownsampledTileData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2f800000257;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14722fbbe;
}



// FUNCTION 145e88400 FUN_145e88400 body=138 status=ok
// SIG undefined FUN_145e88400(void)

code * FUN_145e88400(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWDownsampledSceneDepth";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2d000000252;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462eb8d4;
}



// FUNCTION 145e8848a FUN_145e8848a body=292 status=ok
// SIG undefined FUN_145e8848a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e8848a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca05360) {
    FUN_144b3d300(&DAT_14ca05360);
    if (DAT_14ca05360 == -1) {
      FUN_145e886f8();
      FUN_145e885ae();
      FUN_140db5666(&DAT_14ca052b8,0,&DAT_14ca05250,L"FVolumeShadeLightSamplesCS",
                    L"/Engine/Private/MegaLights/MegaLightsVolumeShading.usf",
                    L"VolumeShadeLightSamplesCS",5,0x10,FUN_147227aa8,FUN_147227a48,&LAB_142dc9b38,
                    &LAB_142dc9b1c,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca07440);
      _DAT_14ca052b8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142dc9b59);
      _Init_thread_footer(&DAT_14ca05360);
    }
  }
  return &DAT_14ca052b8;
}



// FUNCTION 145e885ae FUN_145e885ae body=205 status=ok
// SIG undefined FUN_145e885ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e885ae(void)

{
  if ((DAT_14ca052b7 & 2) == 0) {
    DAT_14ca052b7 = DAT_14ca052b7 | 2;
    _DAT_14ca05258 = L"FVolumeShadeLightSamplesCS";
    _DAT_14ca05270 = FUN_146826540;
    _DAT_14ca05278 = FUN_146825d77;
    _DAT_14ca05280 = FUN_146825fd6;
    _DAT_14ca05288 = FUN_1407e02ea;
    _DAT_14ca05290 = FUN_146826273;
    _DAT_14ca05268 = FUN_147227a1a;
    _DAT_14ca052a8 = 0xffffffff000000e0;
    _DAT_14ca052b0 = 8;
    DAT_14ca052b4 = 0;
    _DAT_14ca05298 = &LAB_147227a44;
    FUN_145e8867c();
    FUN_1407e00cc(&DAT_14ca05250);
    return;
  }
  return;
}



// FUNCTION 145e8867c FUN_145e8867c body=123 status=ok
// SIG undefined FUN_145e8867c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e8867c(void)

{
  _DAT_14ca08320 = L"BASE";
  DAT_14ca0834a = 4;
  _DAT_14ca08328 = FUN_140b35ae4();
  _DAT_14ca08330 = DAT_14ca05260;
  _DAT_14ca08338 = &LAB_14682652b;
  DAT_14ca05260 = &DAT_14ca08320;
  DAT_14ca052b5 = DAT_14ca052b5 + '\x01';
  _DAT_14ca08340 = 0x100000000;
  if (*(char *)(_DAT_14ca08328 + 100) != '\0') {
    DAT_14ca052b6 = DAT_14ca052b6 + '\x01';
  }
  return;
}



// FUNCTION 145e886f8 FUN_145e886f8 body=261 status=ok
// SIG undefined FUN_145e886f8(void)

void FUN_145e886f8(void)

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
              0x110) < DAT_14ca074c0) {
    FUN_144b3d300(&DAT_14ca074c0);
    if (DAT_14ca074c0 == -1) {
      FUN_145e887fe(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x2e0;
      local_58 = 0x38b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca07440,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142dd4177);
      _Init_thread_footer(&DAT_14ca074c0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e887fe FUN_145e887fe body=226 status=ok
// SIG undefined FUN_145e887fe(void)

longlong * FUN_145e887fe(longlong *param_1)

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
  pcVar13 = FUN_1462ebc94;
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



// FUNCTION 145e888e6 FUN_145e888e6 body=132 status=ok
// SIG undefined FUN_145e888e6(void)

undefined1 * FUN_145e888e6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWVolumeResolvedLighting";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture3D<float3>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x38c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e888e2;
}



// FUNCTION 145e8896a FUN_145e8896a body=144 status=ok
// SIG undefined FUN_145e8896a(void)

code * FUN_145e8896a(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x100000038d;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145e888e6;
}



// FUNCTION 145e889fa FUN_145e889fa body=292 status=ok
// SIG undefined FUN_145e889fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e889fa(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca05800) {
    FUN_144b3d300(&DAT_14ca05800);
    if (DAT_14ca05800 == -1) {
      FUN_145e88c68();
      FUN_145e88b1e();
      FUN_140db5666(&DAT_14ca05758,0,&DAT_14ca056f0,L"FFilterVisibleLightHashCS",
                    L"/Engine/Private/MegaLights/MegaLightsFilterVisibleLightHash.usf",
                    L"FilterVisibleLightHashCS",5,2,FUN_147227e80,FUN_147227e20,&LAB_147227dfe,
                    &LAB_147227dee,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca07660);
      _DAT_14ca05758 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142dc9b89);
      _Init_thread_footer(&DAT_14ca05800);
    }
  }
  return &DAT_14ca05758;
}



// FUNCTION 145e88b1e FUN_145e88b1e body=205 status=ok
// SIG undefined FUN_145e88b1e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e88b1e(void)

{
  if ((DAT_14ca05757 & 2) == 0) {
    DAT_14ca05757 = DAT_14ca05757 | 2;
    _DAT_14ca056f8 = L"FFilterVisibleLightHashCS";
    _DAT_14ca05710 = FUN_146826540;
    _DAT_14ca05718 = FUN_146825d77;
    _DAT_14ca05720 = FUN_146825fd6;
    _DAT_14ca05728 = FUN_1407e02ea;
    _DAT_14ca05730 = FUN_146826273;
    _DAT_14ca05708 = FUN_147227dc0;
    _DAT_14ca05748 = 0xffffffff000000e0;
    _DAT_14ca05750 = 8;
    DAT_14ca05754 = 0;
    _DAT_14ca05738 = &LAB_147227dea;
    FUN_145e88bec();
    FUN_1407e00cc(&DAT_14ca056f0);
    return;
  }
  return;
}



// FUNCTION 145e88bec FUN_145e88bec body=123 status=ok
// SIG undefined FUN_145e88bec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e88bec(void)

{
  _DAT_14ca083e0 = L"BASE";
  DAT_14ca0840a = 4;
  _DAT_14ca083e8 = FUN_140b35ae4();
  _DAT_14ca083f0 = DAT_14ca05700;
  _DAT_14ca083f8 = &LAB_14682652b;
  DAT_14ca05700 = &DAT_14ca083e0;
  DAT_14ca05755 = DAT_14ca05755 + '\x01';
  _DAT_14ca08400 = 0x100000000;
  if (*(char *)(_DAT_14ca083e8 + 100) != '\0') {
    DAT_14ca05756 = DAT_14ca05756 + '\x01';
  }
  return;
}



// FUNCTION 145e88c68 FUN_145e88c68 body=261 status=ok
// SIG undefined FUN_145e88c68(void)

void FUN_145e88c68(void)

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
              0x110) < DAT_14ca076e0) {
    FUN_144b3d300(&DAT_14ca076e0);
    if (DAT_14ca076e0 == -1) {
      FUN_145e88d6e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x2e0;
      local_58 = 0x453;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca07660,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142dd41a7);
      _Init_thread_footer(&DAT_14ca076e0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e88d6e FUN_145e88d6e body=226 status=ok
// SIG undefined FUN_145e88d6e(void)

longlong * FUN_145e88d6e(longlong *param_1)

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
  pcVar13 = FUN_1462ebfc6;
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



// FUNCTION 145e88e56 FUN_145e88e56 body=138 status=ok
// SIG undefined FUN_145e88e56(void)

code * FUN_145e88e56(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VisibleLightHashBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2d000000457;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e88ee0;
}



// FUNCTION 145e88ee0 FUN_145e88ee0 body=138 status=ok
// SIG undefined FUN_145e88ee0(void)

code * FUN_145e88ee0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2c800000456;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147230e18;
}



// FUNCTION 145e88f6a FUN_145e88f6a body=292 status=ok
// SIG undefined FUN_145e88f6a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e88f6a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca08898) {
    FUN_144b3d300(&DAT_14ca08898);
    if (DAT_14ca08898 == -1) {
      FUN_145e891d8();
      FUN_145e8908e();
      FUN_140db5666(&DAT_14ca087f0,0,&DAT_14ca08788,L"FCompactLightSampleTracesCS",
                    L"/Engine/Private/MegaLights/MegaLightsRayTracing.usf",
                    L"CompactLightSampleTracesCS",5,2,FUN_14723924a,FUN_1472391ea,&LAB_1472391c8,
                    &LAB_1472391c4,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca0e068);
      _DAT_14ca087f0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142de1545);
      _Init_thread_footer(&DAT_14ca08898);
    }
  }
  return &DAT_14ca087f0;
}



// FUNCTION 145e8908e FUN_145e8908e body=205 status=ok
// SIG undefined FUN_145e8908e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e8908e(void)

{
  if ((DAT_14ca087ef & 2) == 0) {
    DAT_14ca087ef = DAT_14ca087ef | 2;
    _DAT_14ca08790 = L"FCompactLightSampleTracesCS";
    _DAT_14ca087a8 = FUN_146826540;
    _DAT_14ca087b0 = FUN_146825d77;
    _DAT_14ca087b8 = FUN_146825fd6;
    _DAT_14ca087c0 = FUN_1407e02ea;
    _DAT_14ca087c8 = FUN_146826273;
    _DAT_14ca087a0 = FUN_147239196;
    _DAT_14ca087e0 = 0xffffffff000000e0;
    _DAT_14ca087e8 = 8;
    DAT_14ca087ec = 0;
    _DAT_14ca087d0 = &LAB_1472391c0;
    FUN_145e8915c();
    FUN_1407e00cc(&DAT_14ca08788);
    return;
  }
  return;
}



// FUNCTION 145e8915c FUN_145e8915c body=123 status=ok
// SIG undefined FUN_145e8915c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e8915c(void)

{
  _DAT_14ca0ea00 = L"BASE";
  DAT_14ca0ea2a = 4;
  _DAT_14ca0ea08 = FUN_140b35ae4();
  _DAT_14ca0ea10 = DAT_14ca08798;
  _DAT_14ca0ea18 = &LAB_14682652b;
  DAT_14ca08798 = &DAT_14ca0ea00;
  DAT_14ca087ed = DAT_14ca087ed + '\x01';
  _DAT_14ca0ea20 = 0x100000000;
  if (*(char *)(_DAT_14ca0ea08 + 100) != '\0') {
    DAT_14ca087ee = DAT_14ca087ee + '\x01';
  }
  return;
}



// FUNCTION 145e891d8 FUN_145e891d8 body=261 status=ok
// SIG undefined FUN_145e891d8(void)

void FUN_145e891d8(void)

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
              0x110) < DAT_14ca0e0e8) {
    FUN_144b3d300(&DAT_14ca0e0e8);
    if (DAT_14ca0e0e8 == -1) {
      FUN_145e892de(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x2e0;
      local_58 = 0xff;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca0e068,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142deeb4f);
      _Init_thread_footer(&DAT_14ca0e0e8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e892de FUN_145e892de body=226 status=ok
// SIG undefined FUN_145e892de(void)

longlong * FUN_145e892de(longlong *param_1)

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
  pcVar13 = FUN_1462ecedc;
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



// FUNCTION 145e893c6 FUN_145e893c6 body=138 status=ok
// SIG undefined FUN_145e893c6(void)

code * FUN_145e893c6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2c000000101;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e89450;
}



// FUNCTION 145e89450 FUN_145e89450 body=138 status=ok
// SIG undefined FUN_145e89450(void)

undefined1 * FUN_145e89450(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x100;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e893c2;
}



// FUNCTION 145e894da FUN_145e894da body=292 status=ok
// SIG undefined FUN_145e894da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e894da(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca089c0) {
    FUN_144b3d300(&DAT_14ca089c0);
    if (DAT_14ca089c0 == -1) {
      FUN_145e89748();
      FUN_145e895fe();
      FUN_140db5666(&DAT_14ca08918,0,&DAT_14ca088b0,L"FVolumeCompactLightSampleTracesCS",
                    L"/Engine/Private/MegaLights/MegaLightsVolumeRayTracing.usf",
                    L"VolumeCompactLightSampleTracesCS",5,2,FUN_147239332,FUN_1472392d2,
                    &LAB_1472392b0,&LAB_1472392ac,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca0e0f0)
      ;
      _DAT_14ca08918 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142de1551);
      _Init_thread_footer(&DAT_14ca089c0);
    }
  }
  return &DAT_14ca08918;
}



// FUNCTION 145e895fe FUN_145e895fe body=205 status=ok
// SIG undefined FUN_145e895fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e895fe(void)

{
  if ((DAT_14ca08917 & 2) == 0) {
    DAT_14ca08917 = DAT_14ca08917 | 2;
    _DAT_14ca088b8 = L"FVolumeCompactLightSampleTracesCS";
    _DAT_14ca088d0 = FUN_146826540;
    _DAT_14ca088d8 = FUN_146825d77;
    _DAT_14ca088e0 = FUN_146825fd6;
    _DAT_14ca088e8 = FUN_1407e02ea;
    _DAT_14ca088f0 = FUN_146826273;
    _DAT_14ca088c8 = FUN_14723927e;
    _DAT_14ca08908 = 0xffffffff000000e0;
    _DAT_14ca08910 = 8;
    DAT_14ca08914 = 0;
    _DAT_14ca088f8 = &LAB_1472392a8;
    FUN_145e896cc();
    FUN_1407e00cc(&DAT_14ca088b0);
    return;
  }
  return;
}



// FUNCTION 145e896cc FUN_145e896cc body=123 status=ok
// SIG undefined FUN_145e896cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e896cc(void)

{
  _DAT_14ca0ea30 = L"BASE";
  DAT_14ca0ea5a = 4;
  _DAT_14ca0ea38 = FUN_140b35ae4();
  _DAT_14ca0ea40 = DAT_14ca088c0;
  _DAT_14ca0ea48 = &LAB_14682652b;
  DAT_14ca088c0 = &DAT_14ca0ea30;
  DAT_14ca08915 = DAT_14ca08915 + '\x01';
  _DAT_14ca0ea50 = 0x100000000;
  if (*(char *)(_DAT_14ca0ea38 + 100) != '\0') {
    DAT_14ca08916 = DAT_14ca08916 + '\x01';
  }
  return;
}



// FUNCTION 145e89748 FUN_145e89748 body=261 status=ok
// SIG undefined FUN_145e89748(void)

void FUN_145e89748(void)

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
              0x110) < DAT_14ca0e170) {
    FUN_144b3d300(&DAT_14ca0e170);
    if (DAT_14ca0e170 == -1) {
      FUN_145e8984e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x2e0;
      local_58 = 0x127;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca0e0f0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142deeb5b);
      _Init_thread_footer(&DAT_14ca0e170);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e8984e FUN_145e8984e body=226 status=ok
// SIG undefined FUN_145e8984e(void)

longlong * FUN_145e8984e(longlong *param_1)

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
  pcVar13 = FUN_1462ecf64;
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



// FUNCTION 145e89936 FUN_145e89936 body=138 status=ok
// SIG undefined FUN_145e89936(void)

code * FUN_145e89936(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2c000000129;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e899c0;
}



// FUNCTION 145e899c0 FUN_145e899c0 body=138 status=ok
// SIG undefined FUN_145e899c0(void)

undefined1 * FUN_145e899c0(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x128;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e89932;
}



// FUNCTION 145e89a4a FUN_145e89a4a body=292 status=ok
// SIG undefined FUN_145e89a4a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e89a4a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca08ae8) {
    FUN_144b3d300(&DAT_14ca08ae8);
    if (DAT_14ca08ae8 == -1) {
      FUN_145e89cb8();
      FUN_145e89b6e();
      FUN_140db5666(&DAT_14ca08a40,0,&DAT_14ca089d8,L"FInitCompactedTraceTexelIndirectArgsCS",
                    L"/Engine/Private/MegaLights/MegaLightsRayTracing.usf",
                    L"InitCompactedTraceTexelIndirectArgsCS",5,1,FUN_14723941a,FUN_1472393ba,
                    &LAB_147239398,&LAB_147239394,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca0e178)
      ;
      _DAT_14ca08a40 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142de155d);
      _Init_thread_footer(&DAT_14ca08ae8);
    }
  }
  return &DAT_14ca08a40;
}



// FUNCTION 145e89b6e FUN_145e89b6e body=205 status=ok
// SIG undefined FUN_145e89b6e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e89b6e(void)

{
  if ((DAT_14ca08a3f & 2) == 0) {
    DAT_14ca08a3f = DAT_14ca08a3f | 2;
    _DAT_14ca089e0 = L"FInitCompactedTraceTexelIndirectArgsCS";
    _DAT_14ca089f8 = FUN_146826540;
    _DAT_14ca08a00 = FUN_146825d77;
    _DAT_14ca08a08 = FUN_146825fd6;
    _DAT_14ca08a10 = FUN_1407e02ea;
    _DAT_14ca08a18 = FUN_146826273;
    _DAT_14ca089f0 = FUN_147239366;
    _DAT_14ca08a30 = 0xffffffff000000e0;
    _DAT_14ca08a38 = 8;
    DAT_14ca08a3c = 0;
    _DAT_14ca08a20 = &LAB_147239390;
    FUN_145e89c3c();
    FUN_1407e00cc(&DAT_14ca089d8);
    return;
  }
  return;
}



// FUNCTION 145e89c3c FUN_145e89c3c body=123 status=ok
// SIG undefined FUN_145e89c3c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e89c3c(void)

{
  _DAT_14ca0ea60 = L"BASE";
  DAT_14ca0ea8a = 4;
  _DAT_14ca0ea68 = FUN_140b35ae4();
  _DAT_14ca0ea70 = DAT_14ca089e8;
  _DAT_14ca0ea78 = &LAB_14682652b;
  DAT_14ca089e8 = &DAT_14ca0ea60;
  DAT_14ca08a3d = DAT_14ca08a3d + '\x01';
  _DAT_14ca0ea80 = 0x100000000;
  if (*(char *)(_DAT_14ca0ea68 + 100) != '\0') {
    DAT_14ca08a3e = DAT_14ca08a3e + '\x01';
  }
  return;
}



// FUNCTION 145e89cb8 FUN_145e89cb8 body=261 status=ok
// SIG undefined FUN_145e89cb8(void)

void FUN_145e89cb8(void)

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
              0x110) < DAT_14ca0e1f8) {
    FUN_144b3d300(&DAT_14ca0e1f8);
    if (DAT_14ca0e1f8 == -1) {
      FUN_145e89dbe(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x2d0;
      local_58 = 0x14f;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca0e178,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142deeb67);
      _Init_thread_footer(&DAT_14ca0e1f8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e89dbe FUN_145e89dbe body=226 status=ok
// SIG undefined FUN_145e89dbe(void)

longlong * FUN_145e89dbe(longlong *param_1)

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
  pcVar13 = FUN_1462ecfec;
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



// FUNCTION 145e89ea6 FUN_145e89ea6 body=138 status=ok
// SIG undefined FUN_145e89ea6(void)

code * FUN_145e89ea6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2c000000151;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e89f30;
}



// FUNCTION 145e89f30 FUN_145e89f30 body=138 status=ok
// SIG undefined FUN_145e89f30(void)

undefined1 * FUN_145e89f30(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x150;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e89ea2;
}



// FUNCTION 145e89fba FUN_145e89fba body=292 status=ok
// SIG undefined FUN_145e89fba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e89fba(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca09428) {
    FUN_144b3d300(&DAT_14ca09428);
    if (DAT_14ca09428 == -1) {
      FUN_145e8a228();
      FUN_145e8a0de();
      FUN_140db5666(&DAT_14ca09380,0,&DAT_14ca09318,L"FVirtualShadowMapTraceLightSamplesCS",
                    L"/Engine/Private/MegaLights/MegaLightsVSMTracing.usf",
                    L"VirtualShadowMapTraceLightSamplesCS",5,2,FUN_147239b12,FUN_147239ab2,
                    &LAB_147239a90,&LAB_147239a80,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca0e5b8)
      ;
      _DAT_14ca09380 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142de15bd);
      _Init_thread_footer(&DAT_14ca09428);
    }
  }
  return &DAT_14ca09380;
}



// FUNCTION 145e8a0de FUN_145e8a0de body=205 status=ok
// SIG undefined FUN_145e8a0de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e8a0de(void)

{
  if ((DAT_14ca0937f & 2) == 0) {
    DAT_14ca0937f = DAT_14ca0937f | 2;
    _DAT_14ca09320 = L"FVirtualShadowMapTraceLightSamplesCS";
    _DAT_14ca09338 = FUN_146826540;
    _DAT_14ca09340 = FUN_146825d77;
    _DAT_14ca09348 = FUN_146825fd6;
    _DAT_14ca09350 = FUN_1407e02ea;
    _DAT_14ca09358 = FUN_146826273;
    _DAT_14ca09330 = FUN_147239a52;
    _DAT_14ca09370 = 0xffffffff000000e0;
    _DAT_14ca09378 = 8;
    DAT_14ca0937c = 0;
    _DAT_14ca09360 = &LAB_147239a7c;
    FUN_145e8a1ac();
    FUN_1407e00cc(&DAT_14ca09318);
    return;
  }
  return;
}



// FUNCTION 145e8a1ac FUN_145e8a1ac body=123 status=ok
// SIG undefined FUN_145e8a1ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e8a1ac(void)

{
  _DAT_14ca0ebe0 = L"BASE";
  DAT_14ca0ec0a = 4;
  _DAT_14ca0ebe8 = FUN_140b35ae4();
  _DAT_14ca0ebf0 = DAT_14ca09328;
  _DAT_14ca0ebf8 = &LAB_14682652b;
  DAT_14ca09328 = &DAT_14ca0ebe0;
  DAT_14ca0937d = DAT_14ca0937d + '\x01';
  _DAT_14ca0ec00 = 0x100000000;
  if (*(char *)(_DAT_14ca0ebe8 + 100) != '\0') {
    DAT_14ca0937e = DAT_14ca0937e + '\x01';
  }
  return;
}



// FUNCTION 145e8a228 FUN_145e8a228 body=261 status=ok
// SIG undefined FUN_145e8a228(void)

void FUN_145e8a228(void)

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
              0x110) < DAT_14ca0e638) {
    FUN_144b3d300(&DAT_14ca0e638);
    if (DAT_14ca0e638 == -1) {
      FUN_145e8a32e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x300;
      local_58 = 0x29a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca0e5b8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142deebc7);
      _Init_thread_footer(&DAT_14ca0e638);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e8a32e FUN_145e8a32e body=226 status=ok
// SIG undefined FUN_145e8a32e(void)

longlong * FUN_145e8a32e(longlong *param_1)

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
  pcVar13 = FUN_1462ed89c;
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



// FUNCTION 145e8a416 FUN_145e8a416 body=138 status=ok
// SIG undefined FUN_145e8a416(void)

code * FUN_145e8a416(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LightSampleRayDistance";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2f00000029e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462ed924;
}



// FUNCTION 145e8a4a0 FUN_145e8a4a0 body=138 status=ok
// SIG undefined FUN_145e8a4a0(void)

undefined1 * FUN_145e8a4a0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145c10b58();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CompactedTraceParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"MegaLights::FCompactedTraceParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x29b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca0e310;
  return &LAB_145e8a412;
}



// FUNCTION 145e8a52a FUN_145e8a52a body=292 status=ok
// SIG undefined FUN_145e8a52a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e8a52a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca12670) {
    FUN_144b3d300(&DAT_14ca12670);
    if (DAT_14ca12670 == -1) {
      FUN_145e8a798();
      FUN_145e8a64e();
      FUN_140db5666(&DAT_14ca125c8,0,&DAT_14ca12560,L"FLocalLightBufferCS",
                    L"/Engine/Private/MobileLocalLightsBuffer.usf",L"MainCS",5,1,FUN_14724dcee,
                    FUN_14724dc8e,&LAB_145815db6,&LAB_14724dc8a,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca16d80);
      _DAT_14ca125c8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142df6a2f);
      _Init_thread_footer(&DAT_14ca12670);
    }
  }
  return &DAT_14ca125c8;
}


