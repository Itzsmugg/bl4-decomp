// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145f50d14 FUN_145f50d14 body=138 status=ok
// SIG undefined FUN_145f50d14(void)

code * FUN_145f50d14(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InPrimitiveFilterBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer< uint >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb0000003d2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472581aa;
}



// FUNCTION 145f50d9e FUN_145f50d9e body=138 status=ok
// SIG undefined FUN_145f50d9e(void)

code * FUN_145f50d9e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MaxNodes";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000003c5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472583d2;
}



// FUNCTION 145f50e28 FUN_145f50e28 body=138 status=ok
// SIG undefined FUN_145f50e28(void)

code * FUN_145f50e28(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutOccludedInstances";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer< FInstanceDraw >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x88000003cb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147258348;
}



// FUNCTION 145f50eb2 FUN_145f50eb2 body=292 status=ok
// SIG undefined FUN_145f50eb2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f50eb2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca167c0) {
    FUN_144b3d300(&DAT_14ca167c0);
    if (DAT_14ca167c0 == -1) {
      FUN_145f51120();
      FUN_145f50fd6();
      FUN_140db5666(&DAT_14ca16718,0,&DAT_14ca166b0,L"FCalculateRasterStatsCS",
                    L"/Engine/Private/Nanite/NanitePrintStats.usf",L"CalculateRasterStats",5,2,
                    FUN_147254790,FUN_147254730,&LAB_1462eed6c,&LAB_14725472c,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca18580);
      _DAT_14ca16718 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e26dd1);
      _Init_thread_footer(&DAT_14ca167c0);
    }
  }
  return &DAT_14ca16718;
}



// FUNCTION 145f50fd6 FUN_145f50fd6 body=205 status=ok
// SIG undefined FUN_145f50fd6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f50fd6(void)

{
  if ((DAT_14ca16717 & 2) == 0) {
    DAT_14ca16717 = DAT_14ca16717 | 2;
    _DAT_14ca166b8 = L"FCalculateRasterStatsCS";
    _DAT_14ca166d0 = FUN_146826540;
    _DAT_14ca166d8 = FUN_146825d77;
    _DAT_14ca166e0 = FUN_146825fd6;
    _DAT_14ca166e8 = FUN_1407e02ea;
    _DAT_14ca166f0 = FUN_146826273;
    _DAT_14ca166c8 = FUN_1472546fc;
    _DAT_14ca16708 = 0xffffffff000000e0;
    _DAT_14ca16710 = 8;
    DAT_14ca16714 = 0;
    _DAT_14ca166f8 = &LAB_147254728;
    FUN_145f510a4();
    FUN_1407e00cc(&DAT_14ca166b0);
    return;
  }
  return;
}



// FUNCTION 145f510a4 FUN_145f510a4 body=123 status=ok
// SIG undefined FUN_145f510a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f510a4(void)

{
  _DAT_14ca19578 = L"BASE";
  DAT_14ca195a2 = 4;
  _DAT_14ca19580 = FUN_140b35ae4();
  _DAT_14ca19588 = DAT_14ca166c0;
  _DAT_14ca19590 = &LAB_14682652b;
  DAT_14ca166c0 = &DAT_14ca19578;
  DAT_14ca16715 = DAT_14ca16715 + '\x01';
  _DAT_14ca19598 = 0x100000000;
  if (*(char *)(_DAT_14ca19580 + 100) != '\0') {
    DAT_14ca16716 = DAT_14ca16716 + '\x01';
  }
  return;
}



// FUNCTION 145f51120 FUN_145f51120 body=261 status=ok
// SIG undefined FUN_145f51120(void)

void FUN_145f51120(void)

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
              0x110) < DAT_14ca18600) {
    FUN_144b3d300(&DAT_14ca18600);
    if (DAT_14ca18600 == -1) {
      FUN_145f51226(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0x18ed;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca18580,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e27fd3);
      _Init_thread_footer(&DAT_14ca18600);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f51226 FUN_145f51226 body=226 status=ok
// SIG undefined FUN_145f51226(void)

longlong * FUN_145f51226(longlong *param_1)

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
  pcVar13 = FUN_1462f26c0;
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



// FUNCTION 145f5130a FUN_145f5130a body=138 status=ok
// SIG undefined FUN_145f5130a(void)

code * FUN_145f5130a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MainPassRasterizeArgsSWHW";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28000018f6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462f2748;
}



// FUNCTION 145f51394 FUN_145f51394 body=138 status=ok
// SIG undefined FUN_145f51394(void)

code * FUN_145f51394(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000018f2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14725ab24;
}



// FUNCTION 145f5141e FUN_145f5141e body=138 status=ok
// SIG undefined FUN_145f5141e(void)

code * FUN_145f5141e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NumMainPassRasterBins";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000018ef;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14725abae;
}



// FUNCTION 145f514a8 FUN_145f514a8 body=292 status=ok
// SIG undefined FUN_145f514a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f514a8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca168e8) {
    FUN_144b3d300(&DAT_14ca168e8);
    if (DAT_14ca168e8 == -1) {
      FUN_145f51716();
      FUN_145f515cc();
      FUN_140db5666(&DAT_14ca16840,0,&DAT_14ca167d8,L"FCalculateClusterStatsCS",
                    L"/Engine/Private/Nanite/NanitePrintStats.usf",L"CalculateClusterStats",5,4,
                    FUN_1472548ae,FUN_14725484e,&LAB_1462eed76,&LAB_14725484a,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca18608);
      _DAT_14ca16840 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e26ddd);
      _Init_thread_footer(&DAT_14ca168e8);
    }
  }
  return &DAT_14ca16840;
}



// FUNCTION 145f515cc FUN_145f515cc body=205 status=ok
// SIG undefined FUN_145f515cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f515cc(void)

{
  if ((DAT_14ca1683f & 2) == 0) {
    DAT_14ca1683f = DAT_14ca1683f | 2;
    _DAT_14ca167e0 = L"FCalculateClusterStatsCS";
    _DAT_14ca167f8 = FUN_146826540;
    _DAT_14ca16800 = FUN_146825d77;
    _DAT_14ca16808 = FUN_146825fd6;
    _DAT_14ca16810 = FUN_1407e02ea;
    _DAT_14ca16818 = FUN_146826273;
    _DAT_14ca167f0 = FUN_14725481a;
    _DAT_14ca16830 = 0xffffffff000000e0;
    _DAT_14ca16838 = 8;
    DAT_14ca1683c = 0;
    _DAT_14ca16820 = &LAB_147254846;
    FUN_145f5169a();
    FUN_1407e00cc(&DAT_14ca167d8);
    return;
  }
  return;
}



// FUNCTION 145f5169a FUN_145f5169a body=123 status=ok
// SIG undefined FUN_145f5169a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f5169a(void)

{
  _DAT_14ca195a8 = L"BASE";
  DAT_14ca195d2 = 4;
  _DAT_14ca195b0 = FUN_140b35ae4();
  _DAT_14ca195b8 = DAT_14ca167e8;
  _DAT_14ca195c0 = &LAB_14682652b;
  DAT_14ca167e8 = &DAT_14ca195a8;
  DAT_14ca1683d = DAT_14ca1683d + '\x01';
  _DAT_14ca195c8 = 0x100000000;
  if (*(char *)(_DAT_14ca195b0 + 100) != '\0') {
    DAT_14ca1683e = DAT_14ca1683e + '\x01';
  }
  return;
}



// FUNCTION 145f51716 FUN_145f51716 body=261 status=ok
// SIG undefined FUN_145f51716(void)

void FUN_145f51716(void)

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
              0x110) < DAT_14ca18688) {
    FUN_144b3d300(&DAT_14ca18688);
    if (DAT_14ca18688 == -1) {
      FUN_145f5181c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0x1913;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca18608,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e27fdf);
      _Init_thread_footer(&DAT_14ca18688);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f5181c FUN_145f5181c body=226 status=ok
// SIG undefined FUN_145f5181c(void)

longlong * FUN_145f5181c(longlong *param_1)

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
  pcVar13 = FUN_1462f27d0;
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



// FUNCTION 145f51900 FUN_145f51900 body=138 status=ok
// SIG undefined FUN_145f51900(void)

code * FUN_145f51900(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1400001916;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f51a14;
}



// FUNCTION 145f5198a FUN_145f5198a body=138 status=ok
// SIG undefined FUN_145f5198a(void)

code * FUN_145f5198a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MainPassRasterizeArgsSWHW";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer< uint >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000191d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14725acc0;
}



// FUNCTION 145f51a14 FUN_145f51a14 body=138 status=ok
// SIG undefined FUN_145f51a14(void)

code * FUN_145f51a14(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MaxVisibleClusters";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000001915;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14725add4;
}



// FUNCTION 145f51a9e FUN_145f51a9e body=292 status=ok
// SIG undefined FUN_145f51a9e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f51a9e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca1aa40) {
    FUN_144b3d300(&DAT_14ca1aa40);
    if (DAT_14ca1aa40 == -1) {
      FUN_145f51d0c();
      FUN_145f51bc2();
      FUN_140db5666(&DAT_14ca1a998,0,&DAT_14ca1a930,L"FInitQueueCS",
                    L"/Engine/Private/Nanite/NaniteStreamOut.usf",L"InitQueue",5,2,FUN_147263b22,
                    FUN_147263ac2,&LAB_1462f34aa,&LAB_147263abe,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca1b810);
      _DAT_14ca1a998 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e56c00);
      _Init_thread_footer(&DAT_14ca1aa40);
    }
  }
  return &DAT_14ca1a998;
}



// FUNCTION 145f51bc2 FUN_145f51bc2 body=205 status=ok
// SIG undefined FUN_145f51bc2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f51bc2(void)

{
  if ((DAT_14ca1a997 & 2) == 0) {
    DAT_14ca1a997 = DAT_14ca1a997 | 2;
    _DAT_14ca1a938 = L"FInitQueueCS";
    _DAT_14ca1a950 = FUN_146826540;
    _DAT_14ca1a958 = FUN_146825d77;
    _DAT_14ca1a960 = FUN_146825fd6;
    _DAT_14ca1a968 = FUN_1407e02ea;
    _DAT_14ca1a970 = FUN_146826273;
    _DAT_14ca1a948 = FUN_147263a90;
    _DAT_14ca1a988 = 0xffffffff000000e0;
    _DAT_14ca1a990 = 8;
    DAT_14ca1a994 = 0;
    _DAT_14ca1a978 = &LAB_147263aba;
    FUN_145f51c90();
    FUN_1407e00cc(&DAT_14ca1a930);
    return;
  }
  return;
}



// FUNCTION 145f51c90 FUN_145f51c90 body=123 status=ok
// SIG undefined FUN_145f51c90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f51c90(void)

{
  _DAT_14ca1c0b8 = L"BASE";
  DAT_14ca1c0e2 = 4;
  _DAT_14ca1c0c0 = FUN_140b35ae4();
  _DAT_14ca1c0c8 = DAT_14ca1a940;
  _DAT_14ca1c0d0 = &LAB_14682652b;
  DAT_14ca1a940 = &DAT_14ca1c0b8;
  DAT_14ca1a995 = DAT_14ca1a995 + '\x01';
  _DAT_14ca1c0d8 = 0x100000000;
  if (*(char *)(_DAT_14ca1c0c0 + 100) != '\0') {
    DAT_14ca1a996 = DAT_14ca1a996 + '\x01';
  }
  return;
}



// FUNCTION 145f51d0c FUN_145f51d0c body=261 status=ok
// SIG undefined FUN_145f51d0c(void)

void FUN_145f51d0c(void)

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
              0x110) < DAT_14ca1b890) {
    FUN_144b3d300(&DAT_14ca1b890);
    if (DAT_14ca1b890 == -1) {
      FUN_145f51e12(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0x47;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca1b810,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e5a6b4);
      _Init_thread_footer(&DAT_14ca1b890);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f51e12 FUN_145f51e12 body=226 status=ok
// SIG undefined FUN_145f51e12(void)

longlong * FUN_145f51e12(longlong *param_1)

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
  pcVar13 = FUN_1462f3f14;
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



// FUNCTION 145f51ef6 FUN_145f51ef6 body=138 status=ok
// SIG undefined FUN_145f51ef6(void)

code * FUN_145f51ef6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NumRequests";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x280000004b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147267a42;
}



// FUNCTION 145f51f80 FUN_145f51f80 body=138 status=ok
// SIG undefined FUN_145f51f80(void)

code * FUN_145f51f80(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4800000052;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f5200a;
}



// FUNCTION 145f5200a FUN_145f5200a body=138 status=ok
// SIG undefined FUN_145f5200a(void)

code * FUN_145f5200a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4400000051;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14726792e;
}



// FUNCTION 145f52094 FUN_145f52094 body=292 status=ok
// SIG undefined FUN_145f52094(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f52094(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca1ab68) {
    FUN_144b3d300(&DAT_14ca1ab68);
    if (DAT_14ca1ab68 == -1) {
      FUN_145f52302();
      FUN_145f521b8();
      FUN_140db5666(&DAT_14ca1aac0,0,&DAT_14ca1aa58,L"FNaniteStreamOutTraversalCS",
                    L"/Engine/Private/Nanite/NaniteStreamOut.usf",L"NaniteStreamOutTraversalCS",5,4,
                    FUN_147263be8,FUN_147263b88,&LAB_1462f34b4,&LAB_147263b84,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca1b920);
      _DAT_14ca1aac0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e56c0c);
      _Init_thread_footer(&DAT_14ca1ab68);
    }
  }
  return &DAT_14ca1aac0;
}



// FUNCTION 145f521b8 FUN_145f521b8 body=205 status=ok
// SIG undefined FUN_145f521b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f521b8(void)

{
  if ((DAT_14ca1aabf & 2) == 0) {
    DAT_14ca1aabf = DAT_14ca1aabf | 2;
    _DAT_14ca1aa60 = L"FNaniteStreamOutTraversalCS";
    _DAT_14ca1aa78 = FUN_146826540;
    _DAT_14ca1aa80 = FUN_146825d77;
    _DAT_14ca1aa88 = FUN_146825fd6;
    _DAT_14ca1aa90 = FUN_1407e02ea;
    _DAT_14ca1aa98 = FUN_146826273;
    _DAT_14ca1aa70 = FUN_147263b56;
    _DAT_14ca1aab0 = 0xffffffff000000e0;
    _DAT_14ca1aab8 = 8;
    DAT_14ca1aabc = 0;
    _DAT_14ca1aaa0 = &LAB_147263b80;
    FUN_145f52286();
    FUN_1407e00cc(&DAT_14ca1aa58);
    return;
  }
  return;
}



// FUNCTION 145f52286 FUN_145f52286 body=123 status=ok
// SIG undefined FUN_145f52286(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f52286(void)

{
  _DAT_14ca1c0e8 = L"BASE";
  DAT_14ca1c112 = 4;
  _DAT_14ca1c0f0 = FUN_140b35ae4();
  _DAT_14ca1c0f8 = DAT_14ca1aa68;
  _DAT_14ca1c100 = &LAB_14682652b;
  DAT_14ca1aa68 = &DAT_14ca1c0e8;
  DAT_14ca1aabd = DAT_14ca1aabd + '\x01';
  _DAT_14ca1c108 = 0x100000000;
  if (*(char *)(_DAT_14ca1c0f0 + 100) != '\0') {
    DAT_14ca1aabe = DAT_14ca1aabe + '\x01';
  }
  return;
}



// FUNCTION 145f52302 FUN_145f52302 body=261 status=ok
// SIG undefined FUN_145f52302(void)

void FUN_145f52302(void)

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
              0x110) < DAT_14ca1b9a0) {
    FUN_144b3d300(&DAT_14ca1b9a0);
    if (DAT_14ca1b9a0 == -1) {
      FUN_14159d594(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xc0;
      local_58 = 0x60;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca1b920,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e5a6cc);
      _Init_thread_footer(&DAT_14ca1b9a0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f52408 FUN_145f52408 body=138 status=ok
// SIG undefined FUN_145f52408(void)

code * FUN_145f52408(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x600000006c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147267cfc;
}



// FUNCTION 145f52492 FUN_145f52492 body=138 status=ok
// SIG undefined FUN_145f52492(void)

code * FUN_145f52492(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"IndexBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x680000006d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f52408;
}



// FUNCTION 145f5251c FUN_145f5251c body=138 status=ok
// SIG undefined FUN_145f5251c(void)

code * FUN_145f5251c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"StreamOutCutError";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9800000077;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147267ad4;
}



// FUNCTION 145f525a6 FUN_145f525a6 body=292 status=ok
// SIG undefined FUN_145f525a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f525a6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca1c7a8) {
    FUN_144b3d300(&DAT_14ca1c7a8);
    if (DAT_14ca1c7a8 == -1) {
      FUN_145f52814();
      FUN_145f526ca();
      FUN_140db5666(&DAT_14ca1c700,0,&DAT_14ca1c698,L"FOITPixelDebugCS",
                    L"/Engine/Private/OITCombine.usf",L"MainCS",5,1,FUN_147270cd0,FUN_147270c70,
                    &LAB_147270c3a,&LAB_147270c36,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca214d0)
      ;
      _DAT_14ca1c700 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e6cd87);
      _Init_thread_footer(&DAT_14ca1c7a8);
    }
  }
  return &DAT_14ca1c700;
}



// FUNCTION 145f526ca FUN_145f526ca body=205 status=ok
// SIG undefined FUN_145f526ca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f526ca(void)

{
  if ((DAT_14ca1c6ff & 2) == 0) {
    DAT_14ca1c6ff = DAT_14ca1c6ff | 2;
    _DAT_14ca1c6a0 = L"FOITPixelDebugCS";
    _DAT_14ca1c6b8 = FUN_146826540;
    _DAT_14ca1c6c0 = FUN_146825d77;
    _DAT_14ca1c6c8 = FUN_146825fd6;
    _DAT_14ca1c6d0 = FUN_1407e02ea;
    _DAT_14ca1c6d8 = FUN_146826273;
    _DAT_14ca1c6b0 = FUN_147270c06;
    _DAT_14ca1c6f0 = 0xffffffff000000e0;
    _DAT_14ca1c6f8 = 8;
    DAT_14ca1c6fc = 0;
    _DAT_14ca1c6e0 = &LAB_147270c32;
    FUN_145f52798();
    FUN_1407e00cc(&DAT_14ca1c698);
    return;
  }
  return;
}



// FUNCTION 145f52798 FUN_145f52798 body=123 status=ok
// SIG undefined FUN_145f52798(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f52798(void)

{
  _DAT_14ca24660 = L"BASE";
  DAT_14ca2468a = 4;
  _DAT_14ca24668 = FUN_140b35ae4();
  _DAT_14ca24670 = DAT_14ca1c6a8;
  _DAT_14ca24678 = &LAB_14682652b;
  DAT_14ca1c6a8 = &DAT_14ca24660;
  DAT_14ca1c6fd = DAT_14ca1c6fd + '\x01';
  _DAT_14ca24680 = 0x100000000;
  if (*(char *)(_DAT_14ca24668 + 100) != '\0') {
    DAT_14ca1c6fe = DAT_14ca1c6fe + '\x01';
  }
  return;
}



// FUNCTION 145f52814 FUN_145f52814 body=261 status=ok
// SIG undefined FUN_145f52814(void)

void FUN_145f52814(void)

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
              0x110) < DAT_14ca21550) {
    FUN_144b3d300(&DAT_14ca21550);
    if (DAT_14ca21550 == -1) {
      FUN_145f5291a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x60;
      local_58 = 0x6b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca214d0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e93c3c);
      _Init_thread_footer(&DAT_14ca21550);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f5291a FUN_145f5291a body=226 status=ok
// SIG undefined FUN_145f5291a(void)

longlong * FUN_145f5291a(longlong *param_1)

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
  pcVar13 = FUN_1462f52ce;
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



// FUNCTION 145f529fe FUN_145f529fe body=138 status=ok
// SIG undefined FUN_145f529fe(void)

code * FUN_145f529fe(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SampleCountTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000074;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f52b12;
}



// FUNCTION 145f52a88 FUN_145f52a88 body=138 status=ok
// SIG undefined FUN_145f52a88(void)

code * FUN_145f52a88(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000006d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147278742;
}



// FUNCTION 145f52b12 FUN_145f52b12 body=138 status=ok
// SIG undefined FUN_145f52b12(void)

code * FUN_145f52b12(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SampleDataTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2DArray<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000073;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14727851a;
}



// FUNCTION 145f52b9c FUN_145f52b9c body=292 status=ok
// SIG undefined FUN_145f52b9c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f52b9c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca1d498) {
    FUN_144b3d300(&DAT_14ca1d498);
    if (DAT_14ca1d498 == -1) {
      FUN_145f52e0a();
      FUN_145f52cc0();
      FUN_140db5666(&DAT_14ca1d3f0,0,&DAT_14ca1d388,L"FPathTracingSkylightPrepareCS",
                    L"/Engine/Private/PathTracing/PathTracingSkylightPrepare.usf",
                    L"PathTracingSkylightPrepareCS",5,1,FUN_147271baa,FUN_147271b4a,&LAB_1462f516e,
                    &LAB_147271b46,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca21810);
      _DAT_14ca1d3f0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e70a00);
      _Init_thread_footer(&DAT_14ca1d498);
    }
  }
  return &DAT_14ca1d3f0;
}



// FUNCTION 145f52cc0 FUN_145f52cc0 body=205 status=ok
// SIG undefined FUN_145f52cc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f52cc0(void)

{
  if ((DAT_14ca1d3ef & 2) == 0) {
    DAT_14ca1d3ef = DAT_14ca1d3ef | 2;
    _DAT_14ca1d390 = L"FPathTracingSkylightPrepareCS";
    _DAT_14ca1d3a8 = FUN_146826540;
    _DAT_14ca1d3b0 = FUN_146825d77;
    _DAT_14ca1d3b8 = FUN_146825fd6;
    _DAT_14ca1d3c0 = FUN_1407e02ea;
    _DAT_14ca1d3c8 = FUN_146826273;
    _DAT_14ca1d3a0 = FUN_147271b16;
    _DAT_14ca1d3e0 = 0xffffffff000000e0;
    _DAT_14ca1d3e8 = 8;
    DAT_14ca1d3ec = 0;
    _DAT_14ca1d3d0 = &LAB_147271b42;
    FUN_145f52d8e();
    FUN_1407e00cc(&DAT_14ca1d388);
    return;
  }
  return;
}



// FUNCTION 145f52d8e FUN_145f52d8e body=123 status=ok
// SIG undefined FUN_145f52d8e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f52d8e(void)

{
  _DAT_14ca24780 = L"BASE";
  DAT_14ca247aa = 4;
  _DAT_14ca24788 = FUN_140b35ae4();
  _DAT_14ca24790 = DAT_14ca1d398;
  _DAT_14ca24798 = &LAB_14682652b;
  DAT_14ca1d398 = &DAT_14ca24780;
  DAT_14ca1d3ed = DAT_14ca1d3ed + '\x01';
  _DAT_14ca247a0 = 0x100000000;
  if (*(char *)(_DAT_14ca24788 + 100) != '\0') {
    DAT_14ca1d3ee = DAT_14ca1d3ee + '\x01';
  }
  return;
}



// FUNCTION 145f52e0a FUN_145f52e0a body=261 status=ok
// SIG undefined FUN_145f52e0a(void)

void FUN_145f52e0a(void)

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
              0x110) < DAT_14ca21890) {
    FUN_144b3d300(&DAT_14ca21890);
    if (DAT_14ca21890 == -1) {
      FUN_145f52f10(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0x3a1;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca21810,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e95c25);
      _Init_thread_footer(&DAT_14ca21890);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f52f10 FUN_145f52f10 body=226 status=ok
// SIG undefined FUN_145f52f10(void)

longlong * FUN_145f52f10(longlong *param_1)

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
  pcVar13 = FUN_1462f5940;
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



// FUNCTION 145f52ff4 FUN_145f52ff4 body=138 status=ok
// SIG undefined FUN_145f52ff4(void)

code * FUN_145f52ff4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SkyLightCubemapSampler0";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000003a4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14727a8e4;
}



// FUNCTION 145f5307e FUN_145f5307e body=138 status=ok
// SIG undefined FUN_145f5307e(void)

code * FUN_145f5307e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SkylightTextureOutput";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28000003a8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14727a7d0;
}



// FUNCTION 145f53108 FUN_145f53108 body=138 status=ok
// SIG undefined FUN_145f53108(void)

code * FUN_145f53108(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SkylightTexturePdf";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000003a9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f5307e;
}



// FUNCTION 145f53192 FUN_145f53192 body=292 status=ok
// SIG undefined FUN_145f53192(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f53192(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca1d8a8) {
    FUN_144b3d300(&DAT_14ca1d8a8);
    if (DAT_14ca1d8a8 == -1) {
      FUN_145f53400();
      FUN_145f532b6();
      FUN_140db5666(&DAT_14ca1d800,0,&DAT_14ca1d798,L"FPathTracingRG",
                    L"/Engine/Private/PathTracing/PathTracing.usf",L"PathTracingMainRG",6,0x10,
                    FUN_147271eee,FUN_147271eaa,&LAB_14585ad78,&LAB_147271ea6,&LAB_147271ea0,
                    &LAB_14712ac08,0xe0,&DAT_14ca21ab8);
      _DAT_14ca1d800 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e70aa7);
      _Init_thread_footer(&DAT_14ca1d8a8);
    }
  }
  return &DAT_14ca1d800;
}



// FUNCTION 145f532b6 FUN_145f532b6 body=205 status=ok
// SIG undefined FUN_145f532b6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f532b6(void)

{
  if ((DAT_14ca1d7ff & 2) == 0) {
    DAT_14ca1d7ff = DAT_14ca1d7ff | 2;
    _DAT_14ca1d7a0 = L"FPathTracingRG";
    _DAT_14ca1d7b8 = FUN_146826540;
    _DAT_14ca1d7c0 = FUN_146825d77;
    _DAT_14ca1d7c8 = FUN_146825fd6;
    _DAT_14ca1d7d0 = FUN_1407e02ea;
    _DAT_14ca1d7d8 = FUN_146826273;
    _DAT_14ca1d7b0 = FUN_147271e70;
    _DAT_14ca1d7f0 = 0xffffffff000000e0;
    _DAT_14ca1d7f8 = 8;
    DAT_14ca1d7fc = 0;
    _DAT_14ca1d7e0 = &LAB_147271e9c;
    FUN_145f53384();
    FUN_1407e00cc(&DAT_14ca1d798);
    return;
  }
  return;
}



// FUNCTION 145f53384 FUN_145f53384 body=123 status=ok
// SIG undefined FUN_145f53384(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f53384(void)

{
  _DAT_14ca24810 = L"BASE";
  DAT_14ca2483a = 4;
  _DAT_14ca24818 = FUN_140b35ae4();
  _DAT_14ca24820 = DAT_14ca1d7a8;
  _DAT_14ca24828 = &LAB_14682652b;
  DAT_14ca1d7a8 = &DAT_14ca24810;
  DAT_14ca1d7fd = DAT_14ca1d7fd + '\x01';
  _DAT_14ca24830 = 0x100000000;
  if (*(char *)(_DAT_14ca24818 + 100) != '\0') {
    DAT_14ca1d7fe = DAT_14ca1d7fe + '\x01';
  }
  return;
}



// FUNCTION 145f53400 FUN_145f53400 body=261 status=ok
// SIG undefined FUN_145f53400(void)

void FUN_145f53400(void)

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
              0x110) < DAT_14ca21b38) {
    FUN_144b3d300(&DAT_14ca21b38);
    if (DAT_14ca21b38 == -1) {
      FUN_14159d678(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 800;
      local_58 = 0x48d;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca21ab8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e95c61);
      _Init_thread_footer(&DAT_14ca21b38);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f53506 FUN_145f53506 body=138 status=ok
// SIG undefined FUN_145f53506(void)

code * FUN_145f53506(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CloudAccelerationMap";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x220000004ac;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462f6040;
}



// FUNCTION 145f53590 FUN_145f53590 body=138 status=ok
// SIG undefined FUN_145f53590(void)

code * FUN_145f53590(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PlanetCenterTranslatedWorldHi";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x190000004a7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14727ba22;
}



// FUNCTION 145f5361a FUN_145f5361a body=138 status=ok
// SIG undefined FUN_145f5361a(void)

code * FUN_145f5361a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Bounce";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2e0000004c4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14727b31c;
}



// FUNCTION 145f536a4 FUN_145f536a4 body=292 status=ok
// SIG undefined FUN_145f536a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f536a4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca1de70) {
    FUN_144b3d300(&DAT_14ca1de70);
    if (DAT_14ca1de70 == -1) {
      FUN_145f53912();
      FUN_145f537c8();
      FUN_140db5666(&DAT_14ca1ddc8,0,&DAT_14ca1dd60,L"FPathTracingBuildAtmosphereOpticalDepthLUTCS",
                    L"/Engine/Private/PathTracing/PathTracingBuildAtmosphereLUT.usf",
                    L"PathTracingBuildAtmosphereOpticalDepthLUTCS",5,1,FUN_147272458,FUN_1472723f8,
                    &LAB_1462f51a6,&LAB_1472723f4,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca21e70)
      ;
      _DAT_14ca1ddc8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e70ae3);
      _Init_thread_footer(&DAT_14ca1de70);
    }
  }
  return &DAT_14ca1ddc8;
}



// FUNCTION 145f537c8 FUN_145f537c8 body=205 status=ok
// SIG undefined FUN_145f537c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f537c8(void)

{
  if ((DAT_14ca1ddc7 & 2) == 0) {
    DAT_14ca1ddc7 = DAT_14ca1ddc7 | 2;
    _DAT_14ca1dd68 = L"FPathTracingBuildAtmosphereOpticalDepthLUTCS";
    _DAT_14ca1dd80 = FUN_146826540;
    _DAT_14ca1dd88 = FUN_146825d77;
    _DAT_14ca1dd90 = FUN_146825fd6;
    _DAT_14ca1dd98 = FUN_1407e02ea;
    _DAT_14ca1dda0 = FUN_146826273;
    _DAT_14ca1dd78 = FUN_1472723c4;
    _DAT_14ca1ddb8 = 0xffffffff000000e0;
    _DAT_14ca1ddc0 = 8;
    DAT_14ca1ddc4 = 0;
    _DAT_14ca1dda8 = &LAB_1472723f0;
    FUN_145f53896();
    FUN_1407e00cc(&DAT_14ca1dd60);
    return;
  }
  return;
}



// FUNCTION 145f53896 FUN_145f53896 body=123 status=ok
// SIG undefined FUN_145f53896(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f53896(void)

{
  _DAT_14ca24900 = L"BASE";
  DAT_14ca2492a = 4;
  _DAT_14ca24908 = FUN_140b35ae4();
  _DAT_14ca24910 = DAT_14ca1dd70;
  _DAT_14ca24918 = &LAB_14682652b;
  DAT_14ca1dd70 = &DAT_14ca24900;
  DAT_14ca1ddc5 = DAT_14ca1ddc5 + '\x01';
  _DAT_14ca24920 = 0x100000000;
  if (*(char *)(_DAT_14ca24908 + 100) != '\0') {
    DAT_14ca1ddc6 = DAT_14ca1ddc6 + '\x01';
  }
  return;
}



// FUNCTION 145f53912 FUN_145f53912 body=261 status=ok
// SIG undefined FUN_145f53912(void)

void FUN_145f53912(void)

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
              0x110) < DAT_14ca21ef0) {
    FUN_144b3d300(&DAT_14ca21ef0);
    if (DAT_14ca21ef0 == -1) {
      FUN_145f53a18(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x55a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca21e70,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e95cc1);
      _Init_thread_footer(&DAT_14ca21ef0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f53a18 FUN_145f53a18 body=226 status=ok
// SIG undefined FUN_145f53a18(void)

longlong * FUN_145f53a18(longlong *param_1)

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
  pcVar13 = FUN_1462f67ec;
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



// FUNCTION 145f53afc FUN_145f53afc body=132 status=ok
// SIG undefined FUN_145f53afc(void)

undefined1 * FUN_145f53afc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NumSamples";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x55b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14727d25e;
}



// FUNCTION 145f53b80 FUN_145f53b80 body=138 status=ok
// SIG undefined FUN_145f53b80(void)

code * FUN_145f53b80(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000055c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f53afc;
}



// FUNCTION 145f53c0a FUN_145f53c0a body=144 status=ok
// SIG undefined FUN_145f53c0a(void)

code * FUN_145f53c0a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a8a5d4();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Atmosphere";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FAtmosphereUniformShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x100000055d;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145f53b80;
}



// FUNCTION 145f53c9a FUN_145f53c9a body=292 status=ok
// SIG undefined FUN_145f53c9a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f53c9a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca1e438) {
    FUN_144b3d300(&DAT_14ca1e438);
    if (DAT_14ca1e438 == -1) {
      FUN_145f53f08();
      FUN_145f53dbe();
      FUN_140db5666(&DAT_14ca1e390,0,&DAT_14ca1e328,L"FPathTracingAdaptiveStartCS",
                    L"/Engine/Private/PathTracing/PathTracingAdaptiveStart.usf",
                    L"PathTracingAdaptiveStartCS",5,1,FUN_1472733f8,FUN_147273398,&LAB_1462f51b6,
                    &LAB_147273394,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca220c0);
      _DAT_14ca1e390 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e70b1f);
      _Init_thread_footer(&DAT_14ca1e438);
    }
  }
  return &DAT_14ca1e390;
}



// FUNCTION 145f53dbe FUN_145f53dbe body=205 status=ok
// SIG undefined FUN_145f53dbe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f53dbe(void)

{
  if ((DAT_14ca1e38f & 2) == 0) {
    DAT_14ca1e38f = DAT_14ca1e38f | 2;
    _DAT_14ca1e330 = L"FPathTracingAdaptiveStartCS";
    _DAT_14ca1e348 = FUN_146826540;
    _DAT_14ca1e350 = FUN_146825d77;
    _DAT_14ca1e358 = FUN_146825fd6;
    _DAT_14ca1e360 = FUN_1407e02ea;
    _DAT_14ca1e368 = FUN_146826273;
    _DAT_14ca1e340 = FUN_147273364;
    _DAT_14ca1e380 = 0xffffffff000000e0;
    _DAT_14ca1e388 = 8;
    DAT_14ca1e38c = 0;
    _DAT_14ca1e370 = &LAB_147273390;
    FUN_145f53e8c();
    FUN_1407e00cc(&DAT_14ca1e328);
    return;
  }
  return;
}



// FUNCTION 145f53e8c FUN_145f53e8c body=123 status=ok
// SIG undefined FUN_145f53e8c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f53e8c(void)

{
  _DAT_14ca249f0 = L"BASE";
  DAT_14ca24a1a = 4;
  _DAT_14ca249f8 = FUN_140b35ae4();
  _DAT_14ca24a00 = DAT_14ca1e338;
  _DAT_14ca24a08 = &LAB_14682652b;
  DAT_14ca1e338 = &DAT_14ca249f0;
  DAT_14ca1e38d = DAT_14ca1e38d + '\x01';
  _DAT_14ca24a10 = 0x100000000;
  if (*(char *)(_DAT_14ca249f8 + 100) != '\0') {
    DAT_14ca1e38e = DAT_14ca1e38e + '\x01';
  }
  return;
}



// FUNCTION 145f53f08 FUN_145f53f08 body=261 status=ok
// SIG undefined FUN_145f53f08(void)

void FUN_145f53f08(void)

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
              0x110) < DAT_14ca22140) {
    FUN_144b3d300(&DAT_14ca22140);
    if (DAT_14ca22140 == -1) {
      FUN_145f5400e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0x6b8;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca220c0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e95cf1);
      _Init_thread_footer(&DAT_14ca22140);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f5400e FUN_145f5400e body=226 status=ok
// SIG undefined FUN_145f5400e(void)

longlong * FUN_145f5400e(longlong *param_1)

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
  pcVar13 = FUN_1462f697e;
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



// FUNCTION 145f540f2 FUN_145f540f2 body=138 status=ok
// SIG undefined FUN_145f540f2(void)

code * FUN_145f540f2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VarianceTextureDims";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000006bb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f54206;
}



// FUNCTION 145f5417c FUN_145f5417c body=138 status=ok
// SIG undefined FUN_145f5417c(void)

code * FUN_145f5417c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ViewPreExposure";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000006bf;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14727dece;
}



// FUNCTION 145f54206 FUN_145f54206 body=138 status=ok
// SIG undefined FUN_145f54206(void)

code * FUN_145f54206(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VarianceSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000006ba;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14727dfe2;
}



// FUNCTION 145f54290 FUN_145f54290 body=292 status=ok
// SIG undefined FUN_145f54290(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f54290(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca20cc0) {
    FUN_144b3d300(&DAT_14ca20cc0);
    if (DAT_14ca20cc0 == -1) {
      FUN_145f544fe();
      FUN_145f543b4();
      FUN_140db5666(&DAT_14ca20c18,0,&DAT_14ca20bb0,L"FPhysicsFieldRayMarchingCS",
                    L"/Engine/Private/PhysicsFieldVisualizer.usf",L"MainCS",5,8,FUN_147277fcc,
                    FUN_147277f6c,&LAB_142e8457a,&LAB_147277f68,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca22a40);
      _DAT_14ca20c18 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e845bc);
      _Init_thread_footer(&DAT_14ca20cc0);
    }
  }
  return &DAT_14ca20c18;
}



// FUNCTION 145f543b4 FUN_145f543b4 body=205 status=ok
// SIG undefined FUN_145f543b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f543b4(void)

{
  if ((DAT_14ca20c17 & 2) == 0) {
    DAT_14ca20c17 = DAT_14ca20c17 | 2;
    _DAT_14ca20bb8 = L"FPhysicsFieldRayMarchingCS";
    _DAT_14ca20bd0 = FUN_146826540;
    _DAT_14ca20bd8 = FUN_146825d77;
    _DAT_14ca20be0 = FUN_146825fd6;
    _DAT_14ca20be8 = FUN_1407e02ea;
    _DAT_14ca20bf0 = FUN_146826273;
    _DAT_14ca20bc8 = FUN_147277f38;
    _DAT_14ca20c08 = 0xffffffff000000e0;
    _DAT_14ca20c10 = 8;
    DAT_14ca20c14 = 0;
    _DAT_14ca20bf8 = &LAB_147277f64;
    FUN_145f54482();
    FUN_1407e00cc(&DAT_14ca20bb0);
    return;
  }
  return;
}



// FUNCTION 145f54482 FUN_145f54482 body=123 status=ok
// SIG undefined FUN_145f54482(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f54482(void)

{
  _DAT_14ca25078 = L"BASE";
  DAT_14ca250a2 = 4;
  _DAT_14ca25080 = FUN_140b35ae4();
  _DAT_14ca25088 = DAT_14ca20bc0;
  _DAT_14ca25090 = &LAB_14682652b;
  DAT_14ca20bc0 = &DAT_14ca25078;
  DAT_14ca20c15 = DAT_14ca20c15 + '\x01';
  _DAT_14ca25098 = 0x100000000;
  if (*(char *)(_DAT_14ca25080 + 100) != '\0') {
    DAT_14ca20c16 = DAT_14ca20c16 + '\x01';
  }
  return;
}



// FUNCTION 145f544fe FUN_145f544fe body=261 status=ok
// SIG undefined FUN_145f544fe(void)

void FUN_145f544fe(void)

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
              0x110) < DAT_14ca22ac0) {
    FUN_144b3d300(&DAT_14ca22ac0);
    if (DAT_14ca22ac0 == -1) {
      FUN_14159d75c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xe0;
      local_58 = 0x41;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca22a40,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e98bd3);
      _Init_thread_footer(&DAT_14ca22ac0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f54604 FUN_145f54604 body=138 status=ok
// SIG undefined FUN_145f54604(void)

code * FUN_145f54604(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NodesOffsets";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<int>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa800000048;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f54718;
}



// FUNCTION 145f5468e FUN_145f5468e body=138 status=ok
// SIG undefined FUN_145f5468e(void)

code * FUN_145f5468e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"BoundsOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xbc0000004b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472824a6;
}



// FUNCTION 145f54718 FUN_145f54718 body=138 status=ok
// SIG undefined FUN_145f54718(void)

code * FUN_145f54718(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NodesParams";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa000000047;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472825ba;
}



// FUNCTION 145f547a2 FUN_145f547a2 body=292 status=ok
// SIG undefined FUN_145f547a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f547a2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca211f8) {
    FUN_144b3d300(&DAT_14ca211f8);
    if (DAT_14ca211f8 == -1) {
      FUN_145f54a10();
      FUN_145f548c6();
      FUN_140db5666(&DAT_14ca21150,0,&DAT_14ca210e8,L"FDebugAlphaChannelCS",
                    L"/Engine/Private/Tools/DebugAlphaChannel.usf",L"MainCS",5,1,FUN_147278490,
                    FUN_147278430,&LAB_147278418,&LAB_147278414,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca22b50);
      _DAT_14ca21150 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e88740);
      _Init_thread_footer(&DAT_14ca211f8);
    }
  }
  return &DAT_14ca21150;
}



// FUNCTION 145f548c6 FUN_145f548c6 body=205 status=ok
// SIG undefined FUN_145f548c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f548c6(void)

{
  if ((DAT_14ca2114f & 2) == 0) {
    DAT_14ca2114f = DAT_14ca2114f | 2;
    _DAT_14ca210f0 = L"FDebugAlphaChannelCS";
    _DAT_14ca21108 = FUN_146826540;
    _DAT_14ca21110 = FUN_146825d77;
    _DAT_14ca21118 = FUN_146825fd6;
    _DAT_14ca21120 = FUN_1407e02ea;
    _DAT_14ca21128 = FUN_146826273;
    _DAT_14ca21100 = FUN_1472783e4;
    _DAT_14ca21140 = 0xffffffff000000e0;
    _DAT_14ca21148 = 8;
    DAT_14ca2114c = 0;
    _DAT_14ca21130 = &LAB_147278410;
    FUN_145f54994();
    FUN_1407e00cc(&DAT_14ca210e8);
    return;
  }
  return;
}



// FUNCTION 145f54994 FUN_145f54994 body=123 status=ok
// SIG undefined FUN_145f54994(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f54994(void)

{
  _DAT_14ca25268 = L"BASE";
  DAT_14ca25292 = 4;
  _DAT_14ca25270 = FUN_140b35ae4();
  _DAT_14ca25278 = DAT_14ca210f8;
  _DAT_14ca25280 = &LAB_14682652b;
  DAT_14ca210f8 = &DAT_14ca25268;
  DAT_14ca2114d = DAT_14ca2114d + '\x01';
  _DAT_14ca25288 = 0x100000000;
  if (*(char *)(_DAT_14ca25270 + 100) != '\0') {
    DAT_14ca2114e = DAT_14ca2114e + '\x01';
  }
  return;
}



// FUNCTION 145f54a10 FUN_145f54a10 body=261 status=ok
// SIG undefined FUN_145f54a10(void)

void FUN_145f54a10(void)

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
              0x110) < DAT_14ca22bd0) {
    FUN_144b3d300(&DAT_14ca22bd0);
    if (DAT_14ca22bd0 == -1) {
      FUN_145f54b16(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x1e;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca22b50,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e98f2f);
      _Init_thread_footer(&DAT_14ca22bd0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f54b16 FUN_145f54b16 body=226 status=ok
// SIG undefined FUN_145f54b16(void)

longlong * FUN_145f54b16(longlong *param_1)

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
  pcVar13 = FUN_1462f7f1c;
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



// FUNCTION 145f54bfa FUN_145f54bfa body=138 status=ok
// SIG undefined FUN_145f54bfa(void)

code * FUN_145f54bfa(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000025;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f54c84;
}



// FUNCTION 145f54c84 FUN_145f54c84 body=138 status=ok
// SIG undefined FUN_145f54c84(void)

code * FUN_145f54c84(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000024;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147282bd2;
}



// FUNCTION 145f54d0e FUN_145f54d0e body=138 status=ok
// SIG undefined FUN_145f54d0e(void)

code * FUN_145f54d0e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DebugModeId";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000020;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462f802c;
}



// FUNCTION 145f54d98 FUN_145f54d98 body=292 status=ok
// SIG undefined FUN_145f54d98(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f54d98(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca262b8) {
    FUN_144b3d300(&DAT_14ca262b8);
    if (DAT_14ca262b8 == -1) {
      FUN_145f55006();
      FUN_145f54ebc();
      FUN_140db5666(&DAT_14ca26210,0,&DAT_14ca261a8,L"FVisualizeDOFPS",
                    L"/Engine/Private/PostProcessVisualizeDOF.usf",L"VisualizeDOFPS",3,1,
                    FUN_14728a92e,FUN_14728a8ce,&LAB_14728a8b6,&LAB_14728a8b2,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca28b58);
      _DAT_14ca26210 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142eb6501);
      _Init_thread_footer(&DAT_14ca262b8);
    }
  }
  return &DAT_14ca26210;
}



// FUNCTION 145f54ebc FUN_145f54ebc body=205 status=ok
// SIG undefined FUN_145f54ebc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f54ebc(void)

{
  if ((DAT_14ca2620f & 2) == 0) {
    DAT_14ca2620f = DAT_14ca2620f | 2;
    _DAT_14ca261b0 = L"FVisualizeDOFPS";
    _DAT_14ca261c8 = FUN_146826540;
    _DAT_14ca261d0 = FUN_146825d77;
    _DAT_14ca261d8 = FUN_146825fd6;
    _DAT_14ca261e0 = FUN_1407e02ea;
    _DAT_14ca261e8 = FUN_146826273;
    _DAT_14ca261c0 = FUN_14728a882;
    _DAT_14ca26200 = 0xffffffff000000e0;
    _DAT_14ca26208 = 8;
    DAT_14ca2620c = 0;
    _DAT_14ca261f0 = &LAB_14728a8ae;
    FUN_145f54f8a();
    FUN_1407e00cc(&DAT_14ca261a8);
    return;
  }
  return;
}



// FUNCTION 145f54f8a FUN_145f54f8a body=123 status=ok
// SIG undefined FUN_145f54f8a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f54f8a(void)

{
  _DAT_14ca2bfa0 = L"BASE";
  DAT_14ca2bfca = 4;
  _DAT_14ca2bfa8 = FUN_140b35ae4();
  _DAT_14ca2bfb0 = DAT_14ca261b8;
  _DAT_14ca2bfb8 = &LAB_14682652b;
  DAT_14ca261b8 = &DAT_14ca2bfa0;
  DAT_14ca2620d = DAT_14ca2620d + '\x01';
  _DAT_14ca2bfc0 = 0x100000000;
  if (*(char *)(_DAT_14ca2bfa8 + 100) != '\0') {
    DAT_14ca2620e = DAT_14ca2620e + '\x01';
  }
  return;
}



// FUNCTION 145f55006 FUN_145f55006 body=261 status=ok
// SIG undefined FUN_145f55006(void)

void FUN_145f55006(void)

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
              0x110) < DAT_14ca28bd8) {
    FUN_144b3d300(&DAT_14ca28bd8);
    if (DAT_14ca28bd8 == -1) {
      FUN_145f5510c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1f0;
      local_58 = 0x16;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca28b58,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142edbf51);
      _Init_thread_footer(&DAT_14ca28bd8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f5510c FUN_145f5510c body=226 status=ok
// SIG undefined FUN_145f5510c(void)

longlong * FUN_145f5510c(longlong *param_1)

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
  pcVar13 = FUN_1462f9550;
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



// FUNCTION 145f551f0 FUN_145f551f0 body=138 status=ok
// SIG undefined FUN_145f551f0(void)

code * FUN_145f551f0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"FarColor";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xe000000021;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14728f67c;
}



// FUNCTION 145f5527a FUN_145f5527a body=138 status=ok
// SIG undefined FUN_145f5527a(void)

code * FUN_145f5527a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ColorTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000019;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462f9660;
}



// FUNCTION 145f55304 FUN_145f55304 body=138 status=ok
// SIG undefined FUN_145f55304(void)

code * FUN_145f55304(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ColorSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x900000001b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14728f8a4;
}



// FUNCTION 145f5538e FUN_145f5538e body=292 status=ok
// SIG undefined FUN_145f5538e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f5538e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca263e0) {
    FUN_144b3d300(&DAT_14ca263e0);
    if (DAT_14ca263e0 == -1) {
      FUN_145f555fc();
      FUN_145f554b2();
      FUN_140db5666(&DAT_14ca26338,0,&DAT_14ca262d0,L"FCalibrateTonamepperPS",
                    L"/Engine/Private/PostProcessCalibrateTonemapper.usf",L"MainPS",3,1,
                    FUN_14728aa50,FUN_14728a9f0,&LAB_14728a9ec,&LAB_14728a9e8,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca28be0);
      _DAT_14ca26338 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142eb650d);
      _Init_thread_footer(&DAT_14ca263e0);
    }
  }
  return &DAT_14ca26338;
}



// FUNCTION 145f554b2 FUN_145f554b2 body=205 status=ok
// SIG undefined FUN_145f554b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f554b2(void)

{
  if ((DAT_14ca26337 & 2) == 0) {
    DAT_14ca26337 = DAT_14ca26337 | 2;
    _DAT_14ca262d8 = L"FCalibrateTonamepperPS";
    _DAT_14ca262f0 = FUN_146826540;
    _DAT_14ca262f8 = FUN_146825d77;
    _DAT_14ca26300 = FUN_146825fd6;
    _DAT_14ca26308 = FUN_1407e02ea;
    _DAT_14ca26310 = FUN_146826273;
    _DAT_14ca262e8 = FUN_14728a9b8;
    _DAT_14ca26328 = 0xffffffff000000e0;
    _DAT_14ca26330 = 8;
    DAT_14ca26334 = 0;
    _DAT_14ca26318 = &LAB_14728a9e4;
    FUN_145f55580();
    FUN_1407e00cc(&DAT_14ca262d0);
    return;
  }
  return;
}



// FUNCTION 145f55580 FUN_145f55580 body=123 status=ok
// SIG undefined FUN_145f55580(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f55580(void)

{
  _DAT_14ca2bfd0 = L"BASE";
  DAT_14ca2bffa = 4;
  _DAT_14ca2bfd8 = FUN_140b35ae4();
  _DAT_14ca2bfe0 = DAT_14ca262e0;
  _DAT_14ca2bfe8 = &LAB_14682652b;
  DAT_14ca262e0 = &DAT_14ca2bfd0;
  DAT_14ca26335 = DAT_14ca26335 + '\x01';
  _DAT_14ca2bff0 = 0x100000000;
  if (*(char *)(_DAT_14ca2bfd8 + 100) != '\0') {
    DAT_14ca26336 = DAT_14ca26336 + '\x01';
  }
  return;
}



// FUNCTION 145f555fc FUN_145f555fc body=261 status=ok
// SIG undefined FUN_145f555fc(void)

void FUN_145f555fc(void)

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
              0x110) < DAT_14ca28c60) {
    FUN_144b3d300(&DAT_14ca28c60);
    if (DAT_14ca28c60 == -1) {
      FUN_145f55702(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x140;
      local_58 = 0x10;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca28be0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142edbf5d);
      _Init_thread_footer(&DAT_14ca28c60);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f55702 FUN_145f55702 body=226 status=ok
// SIG undefined FUN_145f55702(void)

longlong * FUN_145f55702(longlong *param_1)

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
  pcVar13 = FUN_1462f977a;
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



// FUNCTION 145f557e6 FUN_145f557e6 body=138 status=ok
// SIG undefined FUN_145f557e6(void)

code * FUN_145f557e6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CalibrateTonemapperMode";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000013;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145c8bc06;
}



// FUNCTION 145f55870 FUN_145f55870 body=138 status=ok
// SIG undefined FUN_145f55870(void)

code * FUN_145f55870(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"EditorNITLevel";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3400000014;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f557e6;
}



// FUNCTION 145f558fa FUN_145f558fa body=138 status=ok
// SIG undefined FUN_145f558fa(void)

code * FUN_145f558fa(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"bOutputInHDR";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3800000015;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f55870;
}



// FUNCTION 145f55984 FUN_145f55984 body=292 status=ok
// SIG undefined FUN_145f55984(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f55984(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2c848) {
    FUN_144b3d300(&DAT_14ca2c848);
    if (DAT_14ca2c848 == -1) {
      FUN_145f55bf2();
      FUN_145f55aa8();
      FUN_140db5666(&DAT_14ca2c7a0,0,&DAT_14ca2c738,L"FMitchellNetravaliDownsampleCS",
                    L"/Engine/Private/PostProcessMitchellNetravali.usf",L"DownsampleMainCS",5,2,
                    FUN_147295126,FUN_1472950c6,&LAB_14729509e,&LAB_14729509a,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca32348);
      _DAT_14ca2c7a0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142ef868d);
      _Init_thread_footer(&DAT_14ca2c848);
    }
  }
  return &DAT_14ca2c7a0;
}



// FUNCTION 145f55aa8 FUN_145f55aa8 body=205 status=ok
// SIG undefined FUN_145f55aa8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f55aa8(void)

{
  if ((DAT_14ca2c79f & 2) == 0) {
    DAT_14ca2c79f = DAT_14ca2c79f | 2;
    _DAT_14ca2c740 = L"FMitchellNetravaliDownsampleCS";
    _DAT_14ca2c758 = FUN_146826540;
    _DAT_14ca2c760 = FUN_146825d77;
    _DAT_14ca2c768 = FUN_146825fd6;
    _DAT_14ca2c770 = FUN_1407e02ea;
    _DAT_14ca2c778 = FUN_146826273;
    _DAT_14ca2c750 = FUN_14729506a;
    _DAT_14ca2c790 = 0xffffffff000000e0;
    _DAT_14ca2c798 = 8;
    DAT_14ca2c79c = 0;
    _DAT_14ca2c780 = &LAB_147295096;
    FUN_145f55b76();
    FUN_1407e00cc(&DAT_14ca2c738);
    return;
  }
  return;
}



// FUNCTION 145f55b76 FUN_145f55b76 body=123 status=ok
// SIG undefined FUN_145f55b76(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f55b76(void)

{
  _DAT_14ca34338 = L"BASE";
  DAT_14ca34362 = 4;
  _DAT_14ca34340 = FUN_140b35ae4();
  _DAT_14ca34348 = DAT_14ca2c748;
  _DAT_14ca34350 = &LAB_14682652b;
  DAT_14ca2c748 = &DAT_14ca34338;
  DAT_14ca2c79d = DAT_14ca2c79d + '\x01';
  _DAT_14ca34358 = 0x100000000;
  if (*(char *)(_DAT_14ca34340 + 100) != '\0') {
    DAT_14ca2c79e = DAT_14ca2c79e + '\x01';
  }
  return;
}



// FUNCTION 145f55bf2 FUN_145f55bf2 body=261 status=ok
// SIG undefined FUN_145f55bf2(void)

void FUN_145f55bf2(void)

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
              0x110) < DAT_14ca323c8) {
    FUN_144b3d300(&DAT_14ca323c8);
    if (DAT_14ca323c8 == -1) {
      FUN_145f55cf8(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xb0;
      local_58 = 0x19;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca32348,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f13e7d);
      _Init_thread_footer(&DAT_14ca323c8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f55cf8 FUN_145f55cf8 body=226 status=ok
// SIG undefined FUN_145f55cf8(void)

longlong * FUN_145f55cf8(longlong *param_1)

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
  pcVar13 = FUN_1462fbb28;
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



// FUNCTION 145f55ddc FUN_145f55ddc body=138 status=ok
// SIG undefined FUN_145f55ddc(void)

code * FUN_145f55ddc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DispatchThreadToInputUVScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa000000020;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14729b236;
}



// FUNCTION 145f55e66 FUN_145f55e66 body=138 status=ok
// SIG undefined FUN_145f55e66(void)

undefined1 * FUN_145f55e66(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1a;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_14729b34a;
}



// FUNCTION 145f55ef0 FUN_145f55ef0 body=138 status=ok
// SIG undefined FUN_145f55ef0(void)

code * FUN_145f55ef0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x900000001e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462fbbb0;
}



// FUNCTION 145f55f7a FUN_145f55f7a body=292 status=ok
// SIG undefined FUN_145f55f7a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f55f7a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2daf8) {
    FUN_144b3d300(&DAT_14ca2daf8);
    if (DAT_14ca2daf8 == -1) {
      FUN_145f561e8();
      FUN_145f5609e();
      FUN_140db5666(&DAT_14ca2da50,0,&DAT_14ca2d9e8,L"FMobileDofDownPS",
                    L"/Engine/Private/PostProcessMobile.usf",L"DofDownPS_Mobile",3,2,FUN_14729677e,
                    FUN_14729671e,&LAB_147296706,&LAB_147296702,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca32bc8);
      _DAT_14ca2da50 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142efc800);
      _Init_thread_footer(&DAT_14ca2daf8);
    }
  }
  return &DAT_14ca2da50;
}



// FUNCTION 145f5609e FUN_145f5609e body=205 status=ok
// SIG undefined FUN_145f5609e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f5609e(void)

{
  if ((DAT_14ca2da4f & 2) == 0) {
    DAT_14ca2da4f = DAT_14ca2da4f | 2;
    _DAT_14ca2d9f0 = L"FMobileDofDownPS";
    _DAT_14ca2da08 = FUN_146826540;
    _DAT_14ca2da10 = FUN_146825d77;
    _DAT_14ca2da18 = FUN_146825fd6;
    _DAT_14ca2da20 = FUN_1407e02ea;
    _DAT_14ca2da28 = FUN_146826273;
    _DAT_14ca2da00 = FUN_1472966d2;
    _DAT_14ca2da40 = 0xffffffff000000e0;
    _DAT_14ca2da48 = 8;
    DAT_14ca2da4c = 0;
    _DAT_14ca2da30 = &LAB_1472966fe;
    FUN_145f5616c();
    FUN_1407e00cc(&DAT_14ca2d9e8);
    return;
  }
  return;
}



// FUNCTION 145f5616c FUN_145f5616c body=123 status=ok
// SIG undefined FUN_145f5616c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f5616c(void)

{
  _DAT_14ca34638 = L"BASE";
  DAT_14ca34662 = 4;
  _DAT_14ca34640 = FUN_140b35ae4();
  _DAT_14ca34648 = DAT_14ca2d9f8;
  _DAT_14ca34650 = &LAB_14682652b;
  DAT_14ca2d9f8 = &DAT_14ca34638;
  DAT_14ca2da4d = DAT_14ca2da4d + '\x01';
  _DAT_14ca34658 = 0x100000000;
  if (*(char *)(_DAT_14ca34640 + 100) != '\0') {
    DAT_14ca2da4e = DAT_14ca2da4e + '\x01';
  }
  return;
}



// FUNCTION 145f561e8 FUN_145f561e8 body=261 status=ok
// SIG undefined FUN_145f561e8(void)

void FUN_145f561e8(void)

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
              0x110) < DAT_14ca32c48) {
    FUN_144b3d300(&DAT_14ca32c48);
    if (DAT_14ca32c48 == -1) {
      FUN_145f562ee(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x150;
      local_58 = 0x4ee;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca32bc8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f13f3d);
      _Init_thread_footer(&DAT_14ca32c48);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f562ee FUN_145f562ee body=226 status=ok
// SIG undefined FUN_145f562ee(void)

longlong * FUN_145f562ee(longlong *param_1)

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
  pcVar13 = FUN_1462fc5f4;
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



// FUNCTION 145f563d2 FUN_145f563d2 body=138 status=ok
// SIG undefined FUN_145f563d2(void)

code * FUN_145f563d2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000004f0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f5645c;
}



// FUNCTION 145f5645c FUN_145f5645c body=138 status=ok
// SIG undefined FUN_145f5645c(void)

undefined1 * FUN_145f5645c(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x4ef;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_14729d6a4;
}



// FUNCTION 145f564e6 FUN_145f564e6 body=138 status=ok
// SIG undefined FUN_145f564e6(void)

code * FUN_145f564e6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DofNearSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x48000004f5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14729d506;
}



// FUNCTION 145f56570 FUN_145f56570 body=292 status=ok
// SIG undefined FUN_145f56570(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f56570(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2f100) {
    FUN_144b3d300(&DAT_14ca2f100);
    if (DAT_14ca2f100 == -1) {
      FUN_145f567de();
      FUN_145f56694();
      FUN_140db5666(&DAT_14ca2f058,0,&DAT_14ca2eff0,L"FMotionBlurFilterCS",
                    L"/Engine/Private/MotionBlur/MotionBlurApply.usf",L"MainCS",5,0x50,FUN_147298230
                    ,FUN_1472981d0,FUN_141774418,&LAB_142eff0d6,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca334e0);
      _DAT_14ca2f058 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142eff0d9);
      _Init_thread_footer(&DAT_14ca2f100);
    }
  }
  return &DAT_14ca2f058;
}



// FUNCTION 145f56694 FUN_145f56694 body=205 status=ok
// SIG undefined FUN_145f56694(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f56694(void)

{
  if ((DAT_14ca2f057 & 2) == 0) {
    DAT_14ca2f057 = DAT_14ca2f057 | 2;
    _DAT_14ca2eff8 = L"FMotionBlurFilterCS";
    _DAT_14ca2f010 = FUN_146826540;
    _DAT_14ca2f018 = FUN_146825d77;
    _DAT_14ca2f020 = FUN_146825fd6;
    _DAT_14ca2f028 = FUN_1407e02ea;
    _DAT_14ca2f030 = FUN_146826273;
    _DAT_14ca2f008 = FUN_1472981a0;
    _DAT_14ca2f048 = 0xffffffff000000e0;
    _DAT_14ca2f050 = 8;
    DAT_14ca2f054 = 0;
    _DAT_14ca2f038 = &LAB_1472981cc;
    FUN_145f56762();
    FUN_1407e00cc(&DAT_14ca2eff0);
    return;
  }
  return;
}



// FUNCTION 145f56762 FUN_145f56762 body=123 status=ok
// SIG undefined FUN_145f56762(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f56762(void)

{
  _DAT_14ca34a20 = L"BASE";
  DAT_14ca34a4a = 4;
  _DAT_14ca34a28 = FUN_140b35ae4();
  _DAT_14ca34a30 = DAT_14ca2f000;
  _DAT_14ca34a38 = &LAB_14682652b;
  DAT_14ca2f000 = &DAT_14ca34a20;
  DAT_14ca2f055 = DAT_14ca2f055 + '\x01';
  _DAT_14ca34a40 = 0x100000000;
  if (*(char *)(_DAT_14ca34a28 + 100) != '\0') {
    DAT_14ca2f056 = DAT_14ca2f056 + '\x01';
  }
  return;
}



// FUNCTION 145f567de FUN_145f567de body=261 status=ok
// SIG undefined FUN_145f567de(void)

void FUN_145f567de(void)

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
              0x110) < DAT_14ca33560) {
    FUN_144b3d300(&DAT_14ca33560);
    if (DAT_14ca33560 == -1) {
      FUN_14159d840(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x260;
      local_58 = 0x1e6;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca334e0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f14015);
      _Init_thread_footer(&DAT_14ca33560);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f568e4 FUN_145f568e4 body=138 status=ok
// SIG undefined FUN_145f568e4(void)

code * FUN_145f568e4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ColorSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1b0000001f7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462fd352;
}



// FUNCTION 145f5696e FUN_145f5696e body=138 status=ok
// SIG undefined FUN_145f5696e(void)

code * FUN_145f5696e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VelocityTileSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c0000001f9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14729f534;
}



// FUNCTION 145f569f8 FUN_145f569f8 body=138 status=ok
// SIG undefined FUN_145f569f8(void)

code * FUN_145f569f8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SceneColorOutputMip0";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2400000020b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462fd2ca;
}



// FUNCTION 145f56a82 FUN_145f56a82 body=205 status=ok
// SIG undefined FUN_145f56a82(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f56a82(void)

{
  if ((DAT_14ca2f687 & 2) == 0) {
    DAT_14ca2f687 = DAT_14ca2f687 | 2;
    _DAT_14ca2f628 = L"FPostProcessRadialBlurCS";
    _DAT_14ca2f640 = FUN_146826540;
    _DAT_14ca2f648 = FUN_146825d77;
    _DAT_14ca2f650 = FUN_146825fd6;
    _DAT_14ca2f658 = FUN_1407e02ea;
    _DAT_14ca2f660 = FUN_146826273;
    _DAT_14ca2f638 = FUN_147299276;
    _DAT_14ca2f678 = 0xffffffff000000e0;
    _DAT_14ca2f680 = 8;
    DAT_14ca2f684 = 0;
    _DAT_14ca2f668 = &LAB_1472992a2;
    FUN_145f56b50();
    FUN_1407e00cc(&DAT_14ca2f620);
    return;
  }
  return;
}



// FUNCTION 145f56b50 FUN_145f56b50 body=123 status=ok
// SIG undefined FUN_145f56b50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f56b50(void)

{
  _DAT_14ca34b30 = L"BASE";
  DAT_14ca34b5a = 4;
  _DAT_14ca34b38 = FUN_140b35ae4();
  _DAT_14ca34b40 = DAT_14ca2f630;
  _DAT_14ca34b48 = &LAB_14682652b;
  DAT_14ca2f630 = &DAT_14ca34b30;
  DAT_14ca2f685 = DAT_14ca2f685 + '\x01';
  _DAT_14ca34b50 = 0x100000000;
  if (*(char *)(_DAT_14ca34b38 + 100) != '\0') {
    DAT_14ca2f686 = DAT_14ca2f686 + '\x01';
  }
  return;
}



// FUNCTION 145f56bcc FUN_145f56bcc body=226 status=ok
// SIG undefined FUN_145f56bcc(void)

longlong * FUN_145f56bcc(longlong *param_1)

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
  pcVar13 = FUN_1462fdaf0;
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



// FUNCTION 145f56cb0 FUN_145f56cb0 body=138 status=ok
// SIG undefined FUN_145f56cb0(void)

code * FUN_145f56cb0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ColorSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000011;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f56dc4;
}



// FUNCTION 145f56d3a FUN_145f56d3a body=138 status=ok
// SIG undefined FUN_145f56d3a(void)

code * FUN_145f56d3a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ColorTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8800000013;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f56cb0;
}



// FUNCTION 145f56dc4 FUN_145f56dc4 body=144 status=ok
// SIG undefined FUN_145f56dc4(void)

code * FUN_145f56dc4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar4) = L"ColorParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FScreenPassTextureViewportParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x100000000f;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462fdb78;
}



// FUNCTION 145f56e54 FUN_145f56e54 body=205 status=ok
// SIG undefined FUN_145f56e54(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f56e54(void)

{
  if ((DAT_14ca302ff & 2) == 0) {
    DAT_14ca302ff = DAT_14ca302ff | 2;
    _DAT_14ca302a0 = L"FSubsurfaceRecombinePS";
    _DAT_14ca302b8 = FUN_146826540;
    _DAT_14ca302c0 = FUN_146825d77;
    _DAT_14ca302c8 = FUN_146825fd6;
    _DAT_14ca302d0 = FUN_1407e02ea;
    _DAT_14ca302d8 = FUN_146826273;
    _DAT_14ca302b0 = FUN_147299e46;
    _DAT_14ca302f0 = 0xffffffff000000e0;
    _DAT_14ca302f8 = 8;
    DAT_14ca302fc = 0;
    _DAT_14ca302e0 = &LAB_147299e72;
    FUN_145f56f22();
    FUN_1407e00cc(&DAT_14ca30298);
    return;
  }
  return;
}



// FUNCTION 145f56f22 FUN_145f56f22 body=123 status=ok
// SIG undefined FUN_145f56f22(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f56f22(void)

{
  _DAT_14ca34ce0 = L"BASE";
  DAT_14ca34d0a = 4;
  _DAT_14ca34ce8 = FUN_140b35ae4();
  _DAT_14ca34cf0 = DAT_14ca302a8;
  _DAT_14ca34cf8 = &LAB_14682652b;
  DAT_14ca302a8 = &DAT_14ca34ce0;
  DAT_14ca302fd = DAT_14ca302fd + '\x01';
  _DAT_14ca34d00 = 0x100000000;
  if (*(char *)(_DAT_14ca34ce8 + 100) != '\0') {
    DAT_14ca302fe = DAT_14ca302fe + '\x01';
  }
  return;
}



// FUNCTION 145f56f9e FUN_145f56f9e body=226 status=ok
// SIG undefined FUN_145f56f9e(void)

longlong * FUN_145f56f9e(longlong *param_1)

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
  pcVar13 = FUN_1462fe76e;
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



// FUNCTION 145f57082 FUN_145f57082 body=138 status=ok
// SIG undefined FUN_145f57082(void)

undefined1 * FUN_145f57082(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x34d;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_1472a0e14;
}



// FUNCTION 145f5710c FUN_145f5710c body=138 status=ok
// SIG undefined FUN_145f5710c(void)

code * FUN_145f5710c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SubsurfaceSampler1";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18800000353;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472a0b64;
}



// FUNCTION 145f57196 FUN_145f57196 body=144 status=ok
// SIG undefined FUN_145f57196(void)

code * FUN_145f57196(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145c5f4e8();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SubsurfaceInput1";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FSubsurfaceInput";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000000351;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca33898;
  return FUN_1462fe7f6;
}



// FUNCTION 145f57226 FUN_145f57226 body=205 status=ok
// SIG undefined FUN_145f57226(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f57226(void)

{
  if ((DAT_14ca30427 & 2) == 0) {
    DAT_14ca30427 = DAT_14ca30427 | 2;
    _DAT_14ca303c8 = L"FSubsurfaceRecombineCopyPS";
    _DAT_14ca303e0 = FUN_146826540;
    _DAT_14ca303e8 = FUN_146825d77;
    _DAT_14ca303f0 = FUN_146825fd6;
    _DAT_14ca303f8 = FUN_1407e02ea;
    _DAT_14ca30400 = FUN_146826273;
    _DAT_14ca303d8 = FUN_147299f64;
    _DAT_14ca30418 = 0xffffffff000000e0;
    _DAT_14ca30420 = 8;
    DAT_14ca30424 = 0;
    _DAT_14ca30408 = &LAB_147299f90;
    FUN_145f572f4();
    FUN_1407e00cc(&DAT_14ca303c0);
    return;
  }
  return;
}



// FUNCTION 145f572f4 FUN_145f572f4 body=123 status=ok
// SIG undefined FUN_145f572f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f572f4(void)

{
  _DAT_14ca34d10 = L"BASE";
  DAT_14ca34d3a = 4;
  _DAT_14ca34d18 = FUN_140b35ae4();
  _DAT_14ca34d20 = DAT_14ca303d0;
  _DAT_14ca34d28 = &LAB_14682652b;
  DAT_14ca303d0 = &DAT_14ca34d10;
  DAT_14ca30425 = DAT_14ca30425 + '\x01';
  _DAT_14ca34d30 = 0x100000000;
  if (*(char *)(_DAT_14ca34d18 + 100) != '\0') {
    DAT_14ca30426 = DAT_14ca30426 + '\x01';
  }
  return;
}



// FUNCTION 145f57370 FUN_145f57370 body=226 status=ok
// SIG undefined FUN_145f57370(void)

longlong * FUN_145f57370(longlong *param_1)

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
  pcVar13 = FUN_1462fe9a2;
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



// FUNCTION 145f57454 FUN_145f57454 body=138 status=ok
// SIG undefined FUN_145f57454(void)

code * FUN_145f57454(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000003b7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462fea2a;
}



// FUNCTION 145f574de FUN_145f574de body=138 status=ok
// SIG undefined FUN_145f574de(void)

undefined1 * FUN_145f574de(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x3b3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_1472a0e18;
}



// FUNCTION 145f57568 FUN_145f57568 body=144 status=ok
// SIG undefined FUN_145f57568(void)

code * FUN_145f57568(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14153ccb2();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"TileParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSubsurfaceTilePassVS::FParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x40000003b5;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462feabc;
}



// FUNCTION 145f575f8 FUN_145f575f8 body=292 status=ok
// SIG undefined FUN_145f575f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f575f8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca30ec8) {
    FUN_144b3d300(&DAT_14ca30ec8);
    if (DAT_14ca30ec8 == -1) {
      FUN_145f57866();
      FUN_145f5771c();
      FUN_140db5666(&DAT_14ca30e20,0,&DAT_14ca30db8,L"FAlphaInvertPS",
                    L"/Engine/Private/PostProcessTonemap.usf",L"AlphaInvert_MainPS",3,1,
                    FUN_14729aaa8,FUN_14729aa48,&LAB_14729aa44,&LAB_14729aa40,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca342b0);
      _DAT_14ca30e20 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f0ffa0);
      _Init_thread_footer(&DAT_14ca30ec8);
    }
  }
  return &DAT_14ca30e20;
}



// FUNCTION 145f5771c FUN_145f5771c body=205 status=ok
// SIG undefined FUN_145f5771c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f5771c(void)

{
  if ((DAT_14ca30e1f & 2) == 0) {
    DAT_14ca30e1f = DAT_14ca30e1f | 2;
    _DAT_14ca30dc0 = L"FAlphaInvertPS";
    _DAT_14ca30dd8 = FUN_146826540;
    _DAT_14ca30de0 = FUN_146825d77;
    _DAT_14ca30de8 = FUN_146825fd6;
    _DAT_14ca30df0 = FUN_1407e02ea;
    _DAT_14ca30df8 = FUN_146826273;
    _DAT_14ca30dd0 = FUN_14729aa10;
    _DAT_14ca30e10 = 0xffffffff000000e0;
    _DAT_14ca30e18 = 8;
    DAT_14ca30e1c = 0;
    _DAT_14ca30e00 = &LAB_14729aa3c;
    FUN_145f577ea();
    FUN_1407e00cc(&DAT_14ca30db8);
    return;
  }
  return;
}



// FUNCTION 145f577ea FUN_145f577ea body=123 status=ok
// SIG undefined FUN_145f577ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f577ea(void)

{
  _DAT_14ca34f18 = L"BASE";
  DAT_14ca34f42 = 4;
  _DAT_14ca34f20 = FUN_140b35ae4();
  _DAT_14ca34f28 = DAT_14ca30dc8;
  _DAT_14ca34f30 = &LAB_14682652b;
  DAT_14ca30dc8 = &DAT_14ca34f18;
  DAT_14ca30e1d = DAT_14ca30e1d + '\x01';
  _DAT_14ca34f38 = 0x100000000;
  if (*(char *)(_DAT_14ca34f20 + 100) != '\0') {
    DAT_14ca30e1e = DAT_14ca30e1e + '\x01';
  }
  return;
}



// FUNCTION 145f57866 FUN_145f57866 body=261 status=ok
// SIG undefined FUN_145f57866(void)

void FUN_145f57866(void)

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
              0x110) < DAT_14ca34330) {
    FUN_144b3d300(&DAT_14ca34330);
    if (DAT_14ca34330 == -1) {
      FUN_145f5796c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x4a2;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca342b0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f14791);
      _Init_thread_footer(&DAT_14ca34330);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f5796c FUN_145f5796c body=226 status=ok
// SIG undefined FUN_145f5796c(void)

longlong * FUN_145f5796c(longlong *param_1)

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
  pcVar13 = FUN_1462ff628;
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



// FUNCTION 145f57a50 FUN_145f57a50 body=138 status=ok
// SIG undefined FUN_145f57a50(void)

code * FUN_145f57a50(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ColorSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28000004a5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f57b64;
}



// FUNCTION 145f57ada FUN_145f57ada body=138 status=ok
// SIG undefined FUN_145f57ada(void)

undefined1 * FUN_145f57ada(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x4a3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_1472a2c4c;
}



// FUNCTION 145f57b64 FUN_145f57b64 body=138 status=ok
// SIG undefined FUN_145f57b64(void)

code * FUN_145f57b64(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ColorTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000004a4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f57ada;
}



// FUNCTION 145f57bee FUN_145f57bee body=292 status=ok
// SIG undefined FUN_145f57bee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f57bee(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca352e8) {
    FUN_144b3d300(&DAT_14ca352e8);
    if (DAT_14ca352e8 == -1) {
      FUN_145f57e5c();
      FUN_145f57d12();
      FUN_140db5666(&DAT_14ca35240,0,&DAT_14ca351d8,L"FUpscalePS",
                    L"/Engine/Private/PostProcessUpscale.usf",L"MainPS",3,0xe,FUN_1472a94ea,
                    FUN_1472a948a,&LAB_1472a9434,&LAB_1472a9430,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca362b0);
      _DAT_14ca35240 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f263fe);
      _Init_thread_footer(&DAT_14ca352e8);
    }
  }
  return &DAT_14ca35240;
}



// FUNCTION 145f57d12 FUN_145f57d12 body=205 status=ok
// SIG undefined FUN_145f57d12(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f57d12(void)

{
  if ((DAT_14ca3523f & 2) == 0) {
    DAT_14ca3523f = DAT_14ca3523f | 2;
    _DAT_14ca351e0 = L"FUpscalePS";
    _DAT_14ca351f8 = FUN_146826540;
    _DAT_14ca35200 = FUN_146825d77;
    _DAT_14ca35208 = FUN_146825fd6;
    _DAT_14ca35210 = FUN_1407e02ea;
    _DAT_14ca35218 = FUN_146826273;
    _DAT_14ca351f0 = FUN_1472a9400;
    _DAT_14ca35230 = 0xffffffff000000e0;
    _DAT_14ca35238 = 8;
    DAT_14ca3523c = 0;
    _DAT_14ca35220 = &LAB_1472a942c;
    FUN_145f57de0();
    FUN_1407e00cc(&DAT_14ca351d8);
    return;
  }
  return;
}



// FUNCTION 145f57de0 FUN_145f57de0 body=123 status=ok
// SIG undefined FUN_145f57de0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f57de0(void)

{
  _DAT_14ca38270 = L"BASE";
  DAT_14ca3829a = 4;
  _DAT_14ca38278 = FUN_140b35ae4();
  _DAT_14ca38280 = DAT_14ca351e8;
  _DAT_14ca38288 = &LAB_14682652b;
  DAT_14ca351e8 = &DAT_14ca38270;
  DAT_14ca3523d = DAT_14ca3523d + '\x01';
  _DAT_14ca38290 = 0x100000000;
  if (*(char *)(_DAT_14ca38278 + 100) != '\0') {
    DAT_14ca3523e = DAT_14ca3523e + '\x01';
  }
  return;
}



// FUNCTION 145f57e5c FUN_145f57e5c body=261 status=ok
// SIG undefined FUN_145f57e5c(void)

void FUN_145f57e5c(void)

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
              0x110) < DAT_14ca36330) {
    FUN_144b3d300(&DAT_14ca36330);
    if (DAT_14ca36330 == -1) {
      FUN_145f57f62(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FUpscaleParameters";
      local_38 = 0;
      local_50 = 0x230;
      local_58 = 0x21;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca362b0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f47d28);
      _Init_thread_footer(&DAT_14ca36330);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f57f62 FUN_145f57f62 body=226 status=ok
// SIG undefined FUN_145f57f62(void)

longlong * FUN_145f57f62(longlong *param_1)

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
  pcVar13 = FUN_1462ffa9a;
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



// FUNCTION 145f58046 FUN_145f58046 body=138 status=ok
// SIG undefined FUN_145f58046(void)

code * FUN_145f58046(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf800000026;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f5815a;
}



// FUNCTION 145f580d0 FUN_145f580d0 body=138 status=ok
// SIG undefined FUN_145f580d0(void)

code * FUN_145f580d0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"UpscaleSoftness";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1280000002c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472ab9fe;
}



// FUNCTION 145f5815a FUN_145f5815a body=138 status=ok
// SIG undefined FUN_145f5815a(void)

code * FUN_145f5815a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DistortingDisplacementTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf000000025;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462ffbaa;
}



// FUNCTION 145f581e4 FUN_145f581e4 body=292 status=ok
// SIG undefined FUN_145f581e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f581e4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca35680) {
    FUN_144b3d300(&DAT_14ca35680);
    if (DAT_14ca35680 == -1) {
      FUN_145f58452();
      FUN_145f58308();
      FUN_140db5666(&DAT_14ca355d8,0,&DAT_14ca35570,L"FVisualizeComplexityApplyPS",
                    L"/Engine/Private/ShaderComplexityApplyPixelShader.usf",L"Main",3,2,
                    FUN_1472a9966,FUN_1472a9906,&LAB_1472a98f6,&LAB_1472a98f2,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca363c0);
      _DAT_14ca355d8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f291ec);
      _Init_thread_footer(&DAT_14ca35680);
    }
  }
  return &DAT_14ca355d8;
}



// FUNCTION 145f58308 FUN_145f58308 body=205 status=ok
// SIG undefined FUN_145f58308(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f58308(void)

{
  if ((DAT_14ca355d7 & 2) == 0) {
    DAT_14ca355d7 = DAT_14ca355d7 | 2;
    _DAT_14ca35578 = L"FVisualizeComplexityApplyPS";
    _DAT_14ca35590 = FUN_146826540;
    _DAT_14ca35598 = FUN_146825d77;
    _DAT_14ca355a0 = FUN_146825fd6;
    _DAT_14ca355a8 = FUN_1407e02ea;
    _DAT_14ca355b0 = FUN_146826273;
    _DAT_14ca35588 = FUN_1472a98c2;
    _DAT_14ca355c8 = 0xffffffff000000e0;
    _DAT_14ca355d0 = 8;
    DAT_14ca355d4 = 0;
    _DAT_14ca355b8 = &LAB_1472a98ee;
    FUN_145f583d6();
    FUN_1407e00cc(&DAT_14ca35570);
    return;
  }
  return;
}



// FUNCTION 145f583d6 FUN_145f583d6 body=123 status=ok
// SIG undefined FUN_145f583d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f583d6(void)

{
  _DAT_14ca38300 = L"BASE";
  DAT_14ca3832a = 4;
  _DAT_14ca38308 = FUN_140b35ae4();
  _DAT_14ca38310 = DAT_14ca35580;
  _DAT_14ca38318 = &LAB_14682652b;
  DAT_14ca35580 = &DAT_14ca38300;
  DAT_14ca355d5 = DAT_14ca355d5 + '\x01';
  _DAT_14ca38320 = 0x100000000;
  if (*(char *)(_DAT_14ca38308 + 100) != '\0') {
    DAT_14ca355d6 = DAT_14ca355d6 + '\x01';
  }
  return;
}



// FUNCTION 145f58452 FUN_145f58452 body=261 status=ok
// SIG undefined FUN_145f58452(void)

void FUN_145f58452(void)

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
              0x110) < DAT_14ca36440) {
    FUN_144b3d300(&DAT_14ca36440);
    if (DAT_14ca36440 == -1) {
      FUN_145f58558(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x2d0;
      local_58 = 0x10;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca363c0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f47d40);
      _Init_thread_footer(&DAT_14ca36440);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f58558 FUN_145f58558 body=226 status=ok
// SIG undefined FUN_145f58558(void)

longlong * FUN_145f58558(longlong *param_1)

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
  pcVar13 = FUN_1462ffe64;
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



// FUNCTION 145f5863c FUN_145f5863c body=138 status=ok
// SIG undefined FUN_145f5863c(void)

code * FUN_145f5863c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xe000000013;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462fff74;
}



// FUNCTION 145f586c6 FUN_145f586c6 body=138 status=ok
// SIG undefined FUN_145f586c6(void)

code * FUN_145f586c6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ColorSamplingMethod";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c40000001c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462ffeec;
}



// FUNCTION 145f58750 FUN_145f58750 body=138 status=ok
// SIG undefined FUN_145f58750(void)

code * FUN_145f58750(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"QuadOverdrawTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf000000015;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472ac07a;
}



// FUNCTION 145f587da FUN_145f587da body=292 status=ok
// SIG undefined FUN_145f587da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f587da(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca357c0) {
    FUN_144b3d300(&DAT_14ca357c0);
    if (DAT_14ca357c0 == -1) {
      FUN_145f58a48();
      FUN_145f588fe();
      FUN_140db5666(&DAT_14ca35718,0,&DAT_14ca356b0,L"FVisualizeHDRPS",
                    L"/Engine/Private/PostProcessVisualizeHDR.usf",L"MainPS",3,1,FUN_1472a9a9c,
                    FUN_1472a9a3c,&LAB_1472a9a24,&LAB_1472a9a20,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca36448);
      _DAT_14ca35718 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f29e90);
      _Init_thread_footer(&DAT_14ca357c0);
    }
  }
  return &DAT_14ca35718;
}



// FUNCTION 145f588fe FUN_145f588fe body=205 status=ok
// SIG undefined FUN_145f588fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f588fe(void)

{
  if ((DAT_14ca35717 & 2) == 0) {
    DAT_14ca35717 = DAT_14ca35717 | 2;
    _DAT_14ca356b8 = L"FVisualizeHDRPS";
    _DAT_14ca356d0 = FUN_146826540;
    _DAT_14ca356d8 = FUN_146825d77;
    _DAT_14ca356e0 = FUN_146825fd6;
    _DAT_14ca356e8 = FUN_1407e02ea;
    _DAT_14ca356f0 = FUN_146826273;
    _DAT_14ca356c8 = FUN_1472a99f0;
    _DAT_14ca35708 = 0xffffffff000000e0;
    _DAT_14ca35710 = 8;
    DAT_14ca35714 = 0;
    _DAT_14ca356f8 = &LAB_1472a9a1c;
    FUN_145f589cc();
    FUN_1407e00cc(&DAT_14ca356b0);
    return;
  }
  return;
}



// FUNCTION 145f589cc FUN_145f589cc body=123 status=ok
// SIG undefined FUN_145f589cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f589cc(void)

{
  _DAT_14ca38330 = L"BASE";
  DAT_14ca3835a = 4;
  _DAT_14ca38338 = FUN_140b35ae4();
  _DAT_14ca38340 = DAT_14ca356c0;
  _DAT_14ca38348 = &LAB_14682652b;
  DAT_14ca356c0 = &DAT_14ca38330;
  DAT_14ca35715 = DAT_14ca35715 + '\x01';
  _DAT_14ca38350 = 0x100000000;
  if (*(char *)(_DAT_14ca38338 + 100) != '\0') {
    DAT_14ca35716 = DAT_14ca35716 + '\x01';
  }
  return;
}



// FUNCTION 145f58a48 FUN_145f58a48 body=261 status=ok
// SIG undefined FUN_145f58a48(void)

void FUN_145f58a48(void)

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
              0x110) < DAT_14ca364c8) {
    FUN_144b3d300(&DAT_14ca364c8);
    if (DAT_14ca364c8 == -1) {
      FUN_14159df96(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x330;
      local_58 = 0x18;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca36448,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f47d4c);
      _Init_thread_footer(&DAT_14ca364c8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f58b4e FUN_145f58b4e body=138 status=ok
// SIG undefined FUN_145f58b4e(void)

code * FUN_145f58b4e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HistogramTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1200000001f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472ac80a;
}



// FUNCTION 145f58bd8 FUN_145f58bd8 body=138 status=ok
// SIG undefined FUN_145f58bd8(void)

code * FUN_145f58bd8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"FilmToe";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1f400000028;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472ac444;
}



// FUNCTION 145f58c62 FUN_145f58c62 body=138 status=ok
// SIG undefined FUN_145f58c62(void)

undefined1 * FUN_145f58c62(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x19;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_1472ac91e;
}



// FUNCTION 145f58cec FUN_145f58cec body=292 status=ok
// SIG undefined FUN_145f58cec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f58cec(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca35900) {
    FUN_144b3d300(&DAT_14ca35900);
    if (DAT_14ca35900 == -1) {
      FUN_145f58f5a();
      FUN_145f58e10();
      FUN_140db5666(&DAT_14ca35858,0,&DAT_14ca357f0,L"FVisualizeLocalExposurePS",
                    L"/Engine/Private/PostProcessVisualizeLocalExposure.usf",L"MainPS",3,1,
                    FUN_1472a9bd2,FUN_1472a9b72,&LAB_1472a9b5a,&LAB_1472a9b56,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca364d0);
      _DAT_14ca35858 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f2bc64);
      _Init_thread_footer(&DAT_14ca35900);
    }
  }
  return &DAT_14ca35858;
}



// FUNCTION 145f58e10 FUN_145f58e10 body=205 status=ok
// SIG undefined FUN_145f58e10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f58e10(void)

{
  if ((DAT_14ca35857 & 2) == 0) {
    DAT_14ca35857 = DAT_14ca35857 | 2;
    _DAT_14ca357f8 = L"FVisualizeLocalExposurePS";
    _DAT_14ca35810 = FUN_146826540;
    _DAT_14ca35818 = FUN_146825d77;
    _DAT_14ca35820 = FUN_146825fd6;
    _DAT_14ca35828 = FUN_1407e02ea;
    _DAT_14ca35830 = FUN_146826273;
    _DAT_14ca35808 = FUN_1472a9b26;
    _DAT_14ca35848 = 0xffffffff000000e0;
    _DAT_14ca35850 = 8;
    DAT_14ca35854 = 0;
    _DAT_14ca35838 = &LAB_1472a9b52;
    FUN_145f58ede();
    FUN_1407e00cc(&DAT_14ca357f0);
    return;
  }
  return;
}



// FUNCTION 145f58ede FUN_145f58ede body=123 status=ok
// SIG undefined FUN_145f58ede(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f58ede(void)

{
  _DAT_14ca38360 = L"BASE";
  DAT_14ca3838a = 4;
  _DAT_14ca38368 = FUN_140b35ae4();
  _DAT_14ca38370 = DAT_14ca35800;
  _DAT_14ca38378 = &LAB_14682652b;
  DAT_14ca35800 = &DAT_14ca38360;
  DAT_14ca35855 = DAT_14ca35855 + '\x01';
  _DAT_14ca38380 = 0x100000000;
  if (*(char *)(_DAT_14ca38368 + 100) != '\0') {
    DAT_14ca35856 = DAT_14ca35856 + '\x01';
  }
  return;
}



// FUNCTION 145f58f5a FUN_145f58f5a body=261 status=ok
// SIG undefined FUN_145f58f5a(void)

void FUN_145f58f5a(void)

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
              0x110) < DAT_14ca36550) {
    FUN_144b3d300(&DAT_14ca36550);
    if (DAT_14ca36550 == -1) {
      FUN_145f59060(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x2e0;
      local_58 = 0x1a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca364d0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f47d58);
      _Init_thread_footer(&DAT_14ca36550);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f59060 FUN_145f59060 body=226 status=ok
// SIG undefined FUN_145f59060(void)

longlong * FUN_145f59060(longlong *param_1)

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
  pcVar13 = FUN_1463003de;
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



// FUNCTION 145f59144 FUN_145f59144 body=138 status=ok
// SIG undefined FUN_145f59144(void)

code * FUN_145f59144(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1d000000026;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f59258;
}



// FUNCTION 145f591ce FUN_145f591ce body=138 status=ok
// SIG undefined FUN_145f591ce(void)

code * FUN_145f591ce(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1b800000022;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472ac9ac;
}



// FUNCTION 145f59258 FUN_145f59258 body=138 status=ok
// SIG undefined FUN_145f59258(void)

code * FUN_145f59258(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"BlurredLogLum";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c800000024;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146300466;
}



// FUNCTION 145f592e2 FUN_145f592e2 body=292 status=ok
// SIG undefined FUN_145f592e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f592e2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca39d50) {
    FUN_144b3d300(&DAT_14ca39d50);
    if (DAT_14ca39d50 == -1) {
      FUN_145f59550();
      FUN_145f59406();
      FUN_140db5666(&DAT_14ca39ca8,0,&DAT_14ca39c40,L"FRayTracingDebugBlendInstanceOverlapPS",
                    L"/Engine/Private/RayTracing/RayTracingDebugInstanceOverlap.usf",
                    L"BlendInstanceOverlapPS",3,1,FUN_1472b22fa,FUN_1472b229a,&LAB_146300dfc,
                    &LAB_1472b2296,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca3eda8);
      _DAT_14ca39ca8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f65bdc);
      _Init_thread_footer(&DAT_14ca39d50);
    }
  }
  return &DAT_14ca39ca8;
}



// FUNCTION 145f59406 FUN_145f59406 body=205 status=ok
// SIG undefined FUN_145f59406(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f59406(void)

{
  if ((DAT_14ca39ca7 & 2) == 0) {
    DAT_14ca39ca7 = DAT_14ca39ca7 | 2;
    _DAT_14ca39c48 = L"FRayTracingDebugBlendInstanceOverlapPS";
    _DAT_14ca39c60 = FUN_146826540;
    _DAT_14ca39c68 = FUN_146825d77;
    _DAT_14ca39c70 = FUN_146825fd6;
    _DAT_14ca39c78 = FUN_1407e02ea;
    _DAT_14ca39c80 = FUN_146826273;
    _DAT_14ca39c58 = FUN_1472b2268;
    _DAT_14ca39c98 = 0xffffffff000000e0;
    _DAT_14ca39ca0 = 8;
    DAT_14ca39ca4 = 0;
    _DAT_14ca39c88 = &LAB_1472b2292;
    FUN_145f594d4();
    FUN_1407e00cc(&DAT_14ca39c40);
    return;
  }
  return;
}



// FUNCTION 145f594d4 FUN_145f594d4 body=123 status=ok
// SIG undefined FUN_145f594d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f594d4(void)

{
  _DAT_14ca3f710 = L"BASE";
  DAT_14ca3f73a = 4;
  _DAT_14ca3f718 = FUN_140b35ae4();
  _DAT_14ca3f720 = DAT_14ca39c50;
  _DAT_14ca3f728 = &LAB_14682652b;
  DAT_14ca39c50 = &DAT_14ca3f710;
  DAT_14ca39ca5 = DAT_14ca39ca5 + '\x01';
  _DAT_14ca3f730 = 0x100000000;
  if (*(char *)(_DAT_14ca3f718 + 100) != '\0') {
    DAT_14ca39ca6 = DAT_14ca39ca6 + '\x01';
  }
  return;
}



// FUNCTION 145f59550 FUN_145f59550 body=261 status=ok
// SIG undefined FUN_145f59550(void)

void FUN_145f59550(void)

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
              0x110) < DAT_14ca3ee28) {
    FUN_144b3d300(&DAT_14ca3ee28);
    if (DAT_14ca3ee28 == -1) {
      FUN_145f59656(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x120;
      local_58 = 0x1eb;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca3eda8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f6f73e);
      _Init_thread_footer(&DAT_14ca3ee28);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f59656 FUN_145f59656 body=226 status=ok
// SIG undefined FUN_145f59656(void)

longlong * FUN_145f59656(longlong *param_1)

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
  pcVar13 = FUN_146301d06;
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



// FUNCTION 145f5973a FUN_145f5973a body=138 status=ok
// SIG undefined FUN_145f5973a(void)

code * FUN_145f5973a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HeatmapScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000001ee;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f5984e;
}



// FUNCTION 145f597c4 FUN_145f597c4 body=138 status=ok
// SIG undefined FUN_145f597c4(void)

undefined1 * FUN_145f597c4(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1ec;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_1472bcd26;
}



// FUNCTION 145f5984e FUN_145f5984e body=138 status=ok
// SIG undefined FUN_145f5984e(void)

code * FUN_145f5984e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InstanceOverlap";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000001ed;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f597c4;
}



// FUNCTION 145f598d8 FUN_145f598d8 body=292 status=ok
// SIG undefined FUN_145f598d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f598d8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca3a9e0) {
    FUN_144b3d300(&DAT_14ca3a9e0);
    if (DAT_14ca3a9e0 == -1) {
      FUN_145f59b46();
      FUN_145f599fc();
      FUN_140db5666(&DAT_14ca3a938,0,&DAT_14ca3a8d0,L"FRayTracingBuildInstanceBufferCS",
                    L"/Engine/Private/Raytracing/RayTracingInstanceBufferUtil.usf",
                    L"RayTracingBuildInstanceBufferCS",5,0x20,FUN_1472b507e,FUN_1472b501e,
                    &LAB_142f67c86,&LAB_1472b501a,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca3f120)
      ;
      _DAT_14ca3a938 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f67ce7);
      _Init_thread_footer(&DAT_14ca3a9e0);
    }
  }
  return &DAT_14ca3a938;
}



// FUNCTION 145f599fc FUN_145f599fc body=205 status=ok
// SIG undefined FUN_145f599fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f599fc(void)

{
  if ((DAT_14ca3a937 & 2) == 0) {
    DAT_14ca3a937 = DAT_14ca3a937 | 2;
    _DAT_14ca3a8d8 = L"FRayTracingBuildInstanceBufferCS";
    _DAT_14ca3a8f0 = FUN_146826540;
    _DAT_14ca3a8f8 = FUN_146825d77;
    _DAT_14ca3a900 = FUN_146825fd6;
    _DAT_14ca3a908 = FUN_1407e02ea;
    _DAT_14ca3a910 = FUN_146826273;
    _DAT_14ca3a8e8 = FUN_1472b4fec;
    _DAT_14ca3a928 = 0xffffffff000000e0;
    _DAT_14ca3a930 = 8;
    DAT_14ca3a934 = 0;
    _DAT_14ca3a918 = &LAB_1472b5016;
    FUN_145f59aca();
    FUN_1407e00cc(&DAT_14ca3a8d0);
    return;
  }
  return;
}



// FUNCTION 145f59aca FUN_145f59aca body=123 status=ok
// SIG undefined FUN_145f59aca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f59aca(void)

{
  _DAT_14ca3f948 = L"BASE";
  DAT_14ca3f972 = 4;
  _DAT_14ca3f950 = FUN_140b35ae4();
  _DAT_14ca3f958 = DAT_14ca3a8e0;
  _DAT_14ca3f960 = &LAB_14682652b;
  DAT_14ca3a8e0 = &DAT_14ca3f948;
  DAT_14ca3a935 = DAT_14ca3a935 + '\x01';
  _DAT_14ca3f968 = 0x100000000;
  if (*(char *)(_DAT_14ca3f950 + 100) != '\0') {
    DAT_14ca3a936 = DAT_14ca3a936 + '\x01';
  }
  return;
}



// FUNCTION 145f59b46 FUN_145f59b46 body=261 status=ok
// SIG undefined FUN_145f59b46(void)

void FUN_145f59b46(void)

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
              0x110) < DAT_14ca3f1a0) {
    FUN_144b3d300(&DAT_14ca3f1a0);
    if (DAT_14ca3f1a0 == -1) {
      FUN_14159e07a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xb0;
      local_58 = 0x16b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca3f120,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f6f910);
      _Init_thread_footer(&DAT_14ca3f1a0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f59c4c FUN_145f59c4c body=138 status=ok
// SIG undefined FUN_145f59c4c(void)

code * FUN_145f59c4c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PreViewTranslationLow";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7000000181;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472bd8a0;
}



// FUNCTION 145f59cd6 FUN_145f59cd6 body=138 status=ok
// SIG undefined FUN_145f59cd6(void)

code * FUN_145f59cd6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GPUSceneNumPrimitives";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000171;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472bdcf0;
}



// FUNCTION 145f59d60 FUN_145f59d60 body=138 status=ok
// SIG undefined FUN_145f59d60(void)

code * FUN_145f59d60(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InputDescOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x500000017c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472bd9b4;
}



// FUNCTION 145f59dea FUN_145f59dea body=292 status=ok
// SIG undefined FUN_145f59dea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f59dea(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca40f90) {
    FUN_144b3d300(&DAT_14ca40f90);
    if (DAT_14ca40f90 == -1) {
      FUN_145f5a058();
      FUN_145f59f0e();
      FUN_140db5666(&DAT_14ca40ee8,0,&DAT_14ca40e80,L"FRayTracingSkyLightRGS",
                    L"/Engine/Private/Raytracing/RaytracingSkylightRGS.usf",L"SkyLightRGS",6,0x10,
                    FUN_1472c46b6,FUN_1472c4672,&LAB_146302a6c,&LAB_1472c466e,&LAB_1472c4668,
                    &LAB_1472c4648,0xe0,&DAT_14ca436e8);
      _DAT_14ca40ee8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f7dc56);
      _Init_thread_footer(&DAT_14ca40f90);
    }
  }
  return &DAT_14ca40ee8;
}



// FUNCTION 145f59f0e FUN_145f59f0e body=205 status=ok
// SIG undefined FUN_145f59f0e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f59f0e(void)

{
  if ((DAT_14ca40ee7 & 2) == 0) {
    DAT_14ca40ee7 = DAT_14ca40ee7 | 2;
    _DAT_14ca40e88 = L"FRayTracingSkyLightRGS";
    _DAT_14ca40ea0 = FUN_146826540;
    _DAT_14ca40ea8 = FUN_146825d77;
    _DAT_14ca40eb0 = FUN_146825fd6;
    _DAT_14ca40eb8 = FUN_1407e02ea;
    _DAT_14ca40ec0 = FUN_146826273;
    _DAT_14ca40e98 = FUN_1472c461a;
    _DAT_14ca40ed8 = 0xffffffff000000e0;
    _DAT_14ca40ee0 = 8;
    DAT_14ca40ee4 = 0;
    _DAT_14ca40ec8 = &LAB_1472c4644;
    FUN_145f59fdc();
    FUN_1407e00cc(&DAT_14ca40e80);
    return;
  }
  return;
}



// FUNCTION 145f59fdc FUN_145f59fdc body=123 status=ok
// SIG undefined FUN_145f59fdc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f59fdc(void)

{
  _DAT_14ca44640 = L"BASE";
  DAT_14ca4466a = 4;
  _DAT_14ca44648 = FUN_140b35ae4();
  _DAT_14ca44650 = DAT_14ca40e90;
  _DAT_14ca44658 = &LAB_14682652b;
  DAT_14ca40e90 = &DAT_14ca44640;
  DAT_14ca40ee5 = DAT_14ca40ee5 + '\x01';
  _DAT_14ca44660 = 0x100000000;
  if (*(char *)(_DAT_14ca44648 + 100) != '\0') {
    DAT_14ca40ee6 = DAT_14ca40ee6 + '\x01';
  }
  return;
}



// FUNCTION 145f5a058 FUN_145f5a058 body=261 status=ok
// SIG undefined FUN_145f5a058(void)

void FUN_145f5a058(void)

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
              0x110) < DAT_14ca43768) {
    FUN_144b3d300(&DAT_14ca43768);
    if (DAT_14ca43768 == -1) {
      FUN_145f5a15e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xf0;
      local_58 = 0xf9;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca436e8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142fafa04);
      _Init_thread_footer(&DAT_14ca43768);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f5a15e FUN_145f5a15e body=226 status=ok
// SIG undefined FUN_145f5a15e(void)

longlong * FUN_145f5a15e(longlong *param_1)

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
  pcVar13 = FUN_146303692;
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



// FUNCTION 145f5a242 FUN_145f5a242 body=132 status=ok
// SIG undefined FUN_145f5a242(void)

undefined1 * FUN_145f5a242(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"UpscaleFactor";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xfa;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1472cb40c;
}



// FUNCTION 145f5a2c6 FUN_145f5a2c6 body=138 status=ok
// SIG undefined FUN_145f5a2c6(void)

code * FUN_145f5a2c6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000fb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f5a242;
}



// FUNCTION 145f5a350 FUN_145f5a350 body=144 status=ok
// SIG undefined FUN_145f5a350(void)

code * FUN_145f5a350(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1414708b2();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"VirtualVoxel";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FVirtualVoxelParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x6000000102;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1463037a8;
}



// FUNCTION 145f5a3e0 FUN_145f5a3e0 body=292 status=ok
// SIG undefined FUN_145f5a3e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f5a3e0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca45d00) {
    FUN_144b3d300(&DAT_14ca45d00);
    if (DAT_14ca45d00 == -1) {
      FUN_145f5a64e();
      FUN_145f5a504();
      FUN_140db5666(&DAT_14ca45c58,0,&DAT_14ca45bf0,L"FHZBTestPS",
                    L"/Engine/Private/HZBOcclusion.usf",L"HZBTestPS",3,1,FUN_1472da368,FUN_1472da308
                    ,&LAB_1472da2f0,&LAB_1472da2ec,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca46ed8
                   );
      _DAT_14ca45c58 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142fdbe12);
      _Init_thread_footer(&DAT_14ca45d00);
    }
  }
  return &DAT_14ca45c58;
}



// FUNCTION 145f5a504 FUN_145f5a504 body=205 status=ok
// SIG undefined FUN_145f5a504(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f5a504(void)

{
  if ((DAT_14ca45c57 & 2) == 0) {
    DAT_14ca45c57 = DAT_14ca45c57 | 2;
    _DAT_14ca45bf8 = L"FHZBTestPS";
    _DAT_14ca45c10 = FUN_146826540;
    _DAT_14ca45c18 = FUN_146825d77;
    _DAT_14ca45c20 = FUN_146825fd6;
    _DAT_14ca45c28 = FUN_1407e02ea;
    _DAT_14ca45c30 = FUN_146826273;
    _DAT_14ca45c08 = FUN_1472da2be;
    _DAT_14ca45c48 = 0xffffffff000000e0;
    _DAT_14ca45c50 = 8;
    DAT_14ca45c54 = 0;
    _DAT_14ca45c38 = &LAB_1472da2e8;
    FUN_145f5a5d2();
    FUN_1407e00cc(&DAT_14ca45bf0);
    return;
  }
  return;
}



// FUNCTION 145f5a5d2 FUN_145f5a5d2 body=123 status=ok
// SIG undefined FUN_145f5a5d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f5a5d2(void)

{
  _DAT_14ca47238 = L"BASE";
  DAT_14ca47262 = 4;
  _DAT_14ca47240 = FUN_140b35ae4();
  _DAT_14ca47248 = DAT_14ca45c00;
  _DAT_14ca47250 = &LAB_14682652b;
  DAT_14ca45c00 = &DAT_14ca47238;
  DAT_14ca45c55 = DAT_14ca45c55 + '\x01';
  _DAT_14ca47258 = 0x100000000;
  if (*(char *)(_DAT_14ca47240 + 100) != '\0') {
    DAT_14ca45c56 = DAT_14ca45c56 + '\x01';
  }
  return;
}



// FUNCTION 145f5a64e FUN_145f5a64e body=261 status=ok
// SIG undefined FUN_145f5a64e(void)

void FUN_145f5a64e(void)

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
              0x110) < DAT_14ca46f58) {
    FUN_144b3d300(&DAT_14ca46f58);
    if (DAT_14ca46f58 == -1) {
      FUN_145f5a754(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x160;
      local_58 = 0x391;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca46ed8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142fe9a6c);
      _Init_thread_footer(&DAT_14ca46f58);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f5a754 FUN_145f5a754 body=226 status=ok
// SIG undefined FUN_145f5a754(void)

longlong * FUN_145f5a754(longlong *param_1)

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
  pcVar13 = FUN_146305f5e;
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



// FUNCTION 145f5a838 FUN_145f5a838 body=138 status=ok
// SIG undefined FUN_145f5a838(void)

code * FUN_145f5a838(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HZBViewSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x500000039d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f5a8c2;
}



// FUNCTION 145f5a8c2 FUN_145f5a8c2 body=138 status=ok
// SIG undefined FUN_145f5a8c2(void)

code * FUN_145f5a8c2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HZBSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x480000039c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472dc682;
}



// FUNCTION 145f5a94c FUN_145f5a94c body=138 status=ok
// SIG undefined FUN_145f5a94c(void)

code * FUN_145f5a94c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000395;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472dc8aa;
}



// FUNCTION 145f5a9d6 FUN_145f5a9d6 body=292 status=ok
// SIG undefined FUN_145f5a9d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f5a9d6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca5b7a0) {
    FUN_144b3d300(&DAT_14ca5b7a0);
    if (DAT_14ca5b7a0 == -1) {
      FUN_145f5ac44();
      FUN_145f5aafa();
      FUN_140db5666(&DAT_14ca5b6f8,0,&DAT_14ca5b690,L"FScreenSpaceShadowsCS",
                    L"/Engine/Private/ScreenSpaceShadows.usf",L"ScreenSpaceShadowsCS",5,1,
                    FUN_147310526,FUN_1473104c6,&LAB_1473104c2,&LAB_1473104be,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca5bb68);
      _DAT_14ca5b6f8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14307c9bd);
      _Init_thread_footer(&DAT_14ca5b7a0);
    }
  }
  return &DAT_14ca5b6f8;
}



// FUNCTION 145f5aafa FUN_145f5aafa body=205 status=ok
// SIG undefined FUN_145f5aafa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f5aafa(void)

{
  if ((DAT_14ca5b6f7 & 2) == 0) {
    DAT_14ca5b6f7 = DAT_14ca5b6f7 | 2;
    _DAT_14ca5b698 = L"FScreenSpaceShadowsCS";
    _DAT_14ca5b6b0 = FUN_146826540;
    _DAT_14ca5b6b8 = FUN_146825d77;
    _DAT_14ca5b6c0 = FUN_146825fd6;
    _DAT_14ca5b6c8 = FUN_1407e02ea;
    _DAT_14ca5b6d0 = FUN_146826273;
    _DAT_14ca5b6a8 = FUN_147310490;
    _DAT_14ca5b6e8 = 0xffffffff000000e0;
    _DAT_14ca5b6f0 = 8;
    DAT_14ca5b6f4 = 0;
    _DAT_14ca5b6d8 = &LAB_1473104ba;
    FUN_145f5abc8();
    FUN_1407e00cc(&DAT_14ca5b690);
    return;
  }
  return;
}



// FUNCTION 145f5abc8 FUN_145f5abc8 body=123 status=ok
// SIG undefined FUN_145f5abc8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f5abc8(void)

{
  _DAT_14ca5bd38 = L"BASE";
  DAT_14ca5bd62 = 4;
  _DAT_14ca5bd40 = FUN_140b35ae4();
  _DAT_14ca5bd48 = DAT_14ca5b6a0;
  _DAT_14ca5bd50 = &LAB_14682652b;
  DAT_14ca5b6a0 = &DAT_14ca5bd38;
  DAT_14ca5b6f5 = DAT_14ca5b6f5 + '\x01';
  _DAT_14ca5bd58 = 0x100000000;
  if (*(char *)(_DAT_14ca5bd40 + 100) != '\0') {
    DAT_14ca5b6f6 = DAT_14ca5b6f6 + '\x01';
  }
  return;
}



// FUNCTION 145f5ac44 FUN_145f5ac44 body=261 status=ok
// SIG undefined FUN_145f5ac44(void)

void FUN_145f5ac44(void)

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
              0x110) < DAT_14ca5bbe8) {
    FUN_144b3d300(&DAT_14ca5bbe8);
    if (DAT_14ca5bbe8 == -1) {
      FUN_145f5ad4a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x90;
      local_58 = 0x66;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca5bb68,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14307f3f0);
      _Init_thread_footer(&DAT_14ca5bbe8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f5ad4a FUN_145f5ad4a body=226 status=ok
// SIG undefined FUN_145f5ad4a(void)

longlong * FUN_145f5ad4a(longlong *param_1)

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
  pcVar13 = FUN_146309fde;
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



// FUNCTION 145f5ae2e FUN_145f5ae2e body=138 status=ok
// SIG undefined FUN_145f5ae2e(void)

code * FUN_145f5ae2e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ContactShadowCastingIntensity";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x640000006e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14630a066;
}



// FUNCTION 145f5aeb8 FUN_145f5aeb8 body=138 status=ok
// SIG undefined FUN_145f5aeb8(void)

code * FUN_145f5aeb8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7000000070;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147312bb0;
}



// FUNCTION 145f5af42 FUN_145f5af42 body=138 status=ok
// SIG undefined FUN_145f5af42(void)

code * FUN_145f5af42(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LightDirection";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x500000006b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147312cc4;
}



// FUNCTION 145f5afcc FUN_145f5afcc body=205 status=ok
// SIG undefined FUN_145f5afcc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f5afcc(void)

{
  if ((DAT_14ca66f6f & 2) == 0) {
    DAT_14ca66f6f = DAT_14ca66f6f | 2;
    _DAT_14ca66f10 = L"FVirtualShadowMapProjectionCS";
    _DAT_14ca66f28 = FUN_146826540;
    _DAT_14ca66f30 = FUN_146825d77;
    _DAT_14ca66f38 = FUN_146825fd6;
    _DAT_14ca66f40 = FUN_1407e02ea;
    _DAT_14ca66f48 = FUN_146826273;
    _DAT_14ca66f20 = FUN_14732d044;
    _DAT_14ca66f60 = 0xffffffff000000e0;
    _DAT_14ca66f68 = 8;
    DAT_14ca66f6c = 0;
    _DAT_14ca66f50 = &LAB_14732d06e;
    FUN_145f5b09a();
    FUN_1407e00cc(&DAT_14ca66f08);
    return;
  }
  return;
}



// FUNCTION 145f5b09a FUN_145f5b09a body=123 status=ok
// SIG undefined FUN_145f5b09a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f5b09a(void)

{
  _DAT_14ca690e0 = L"BASE";
  DAT_14ca6910a = 4;
  _DAT_14ca690e8 = FUN_140b35ae4();
  _DAT_14ca690f0 = DAT_14ca66f18;
  _DAT_14ca690f8 = &LAB_14682652b;
  DAT_14ca66f18 = &DAT_14ca690e0;
  DAT_14ca66f6d = DAT_14ca66f6d + '\x01';
  _DAT_14ca69100 = 0x100000000;
  if (*(char *)(_DAT_14ca690e8 + 100) != '\0') {
    DAT_14ca66f6e = DAT_14ca66f6e + '\x01';
  }
  return;
}



// FUNCTION 145f5b116 FUN_145f5b116 body=138 status=ok
// SIG undefined FUN_145f5b116(void)

code * FUN_145f5b116(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"bVisualizeCachedPagesOnly";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x19c000000ad;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147331e96;
}



// FUNCTION 145f5b1a0 FUN_145f5b1a0 body=138 status=ok
// SIG undefined FUN_145f5b1a0(void)

code * FUN_145f5b1a0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutShadowFactor";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x188000000a9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147331faa;
}



// FUNCTION 145f5b22a FUN_145f5b22a body=144 status=ok
// SIG undefined FUN_145f5b22a(void)

code * FUN_145f5b22a(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x400000009c;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14631368a;
}



// FUNCTION 145f5b2ba FUN_145f5b2ba body=292 status=ok
// SIG undefined FUN_145f5b2ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f5b2ba(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca6adb0) {
    FUN_144b3d300(&DAT_14ca6adb0);
    if (DAT_14ca6adb0 == -1) {
      FUN_145f5b528();
      FUN_145f5b3de();
      FUN_140db5666(&DAT_14ca6ad08,0,&DAT_14ca6aca0,L"FCloudShadowTemporalProcessCS",
                    L"/Engine/Private/VolumetricCloud.usf",L"MainShadowTemporalProcessCS",5,1,
                    FUN_1473347c4,FUN_147334764,&LAB_14733474c,&LAB_147334748,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca6c9c0);
      _DAT_14ca6ad08 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430f7945);
      _Init_thread_footer(&DAT_14ca6adb0);
    }
  }
  return &DAT_14ca6ad08;
}



// FUNCTION 145f5b3de FUN_145f5b3de body=205 status=ok
// SIG undefined FUN_145f5b3de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f5b3de(void)

{
  if ((DAT_14ca6ad07 & 2) == 0) {
    DAT_14ca6ad07 = DAT_14ca6ad07 | 2;
    _DAT_14ca6aca8 = L"FCloudShadowTemporalProcessCS";
    _DAT_14ca6acc0 = FUN_146826540;
    _DAT_14ca6acc8 = FUN_146825d77;
    _DAT_14ca6acd0 = FUN_146825fd6;
    _DAT_14ca6acd8 = FUN_1407e02ea;
    _DAT_14ca6ace0 = FUN_146826273;
    _DAT_14ca6acb8 = FUN_14733471a;
    _DAT_14ca6acf8 = 0xffffffff000000e0;
    _DAT_14ca6ad00 = 8;
    DAT_14ca6ad04 = 0;
    _DAT_14ca6ace8 = &LAB_147334744;
    FUN_145f5b4ac();
    FUN_1407e00cc(&DAT_14ca6aca0);
    return;
  }
  return;
}



// FUNCTION 145f5b4ac FUN_145f5b4ac body=123 status=ok
// SIG undefined FUN_145f5b4ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f5b4ac(void)

{
  _DAT_14ca6d438 = L"BASE";
  DAT_14ca6d462 = 4;
  _DAT_14ca6d440 = FUN_140b35ae4();
  _DAT_14ca6d448 = DAT_14ca6acb0;
  _DAT_14ca6d450 = &LAB_14682652b;
  DAT_14ca6acb0 = &DAT_14ca6d438;
  DAT_14ca6ad05 = DAT_14ca6ad05 + '\x01';
  _DAT_14ca6d458 = 0x100000000;
  if (*(char *)(_DAT_14ca6d440 + 100) != '\0') {
    DAT_14ca6ad06 = DAT_14ca6ad06 + '\x01';
  }
  return;
}



// FUNCTION 145f5b528 FUN_145f5b528 body=261 status=ok
// SIG undefined FUN_145f5b528(void)

void FUN_145f5b528(void)

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
              0x110) < DAT_14ca6ca40) {
    FUN_144b3d300(&DAT_14ca6ca40);
    if (DAT_14ca6ca40 == -1) {
      FUN_14159e468(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x120;
      local_58 = 0x628;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca6c9c0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14310d46f);
      _Init_thread_footer(&DAT_14ca6ca40);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f5b62e FUN_145f5b62e body=138 status=ok
// SIG undefined FUN_145f5b62e(void)

code * FUN_145f5b62e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PrevFrameLightDir";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd000000632;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f5b6b8;
}



// FUNCTION 145f5b6b8 FUN_145f5b6b8 body=138 status=ok
// SIG undefined FUN_145f5b6b8(void)

code * FUN_145f5b6b8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CurrFrameLightDir";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc000000631;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1473384de;
}



// FUNCTION 145f5b742 FUN_145f5b742 body=138 status=ok
// SIG undefined FUN_145f5b742(void)

code * FUN_145f5b742(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PrevCloudShadowTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000062b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147338790;
}



// FUNCTION 145f5b7cc FUN_145f5b7cc body=292 status=ok
// SIG undefined FUN_145f5b7cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f5b7cc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa44e8) {
    FUN_144b3d300(&DAT_14caa44e8);
    if (DAT_14caa44e8 == -1) {
      FUN_145f5ba3a();
      FUN_145f5b8f0();
      FUN_140db5666(&DAT_14caa4440,0,&DAT_14caa43d8,L"FLandscapeEditLayersWeightmapsPackWeightmapPS"
                    ,L"/Engine/Private/Landscape/LandscapeEditLayersWeightmaps.usf",
                    L"PackWeightmapPS",3,1,FUN_14745f4fe,FUN_14745f4a2,&LAB_1463249a4,&LAB_14745f49e
                    ,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14caa5670);
      _DAT_14caa4440 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14324e13c);
      _Init_thread_footer(&DAT_14caa44e8);
    }
  }
  return &DAT_14caa4440;
}



// FUNCTION 145f5b8f0 FUN_145f5b8f0 body=205 status=ok
// SIG undefined FUN_145f5b8f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f5b8f0(void)

{
  if ((DAT_14caa443f & 2) == 0) {
    DAT_14caa443f = DAT_14caa443f | 2;
    _DAT_14caa43e0 = L"FLandscapeEditLayersWeightmapsPackWeightmapPS";
    _DAT_14caa43f8 = FUN_146826540;
    _DAT_14caa4400 = FUN_146825d77;
    _DAT_14caa4408 = FUN_146825fd6;
    _DAT_14caa4410 = FUN_1407e02ea;
    _DAT_14caa4418 = FUN_146826273;
    _DAT_14caa43f0 = FUN_14745f470;
    _DAT_14caa4430 = 0xffffffff000000e0;
    _DAT_14caa4438 = 8;
    DAT_14caa443c = 0;
    _DAT_14caa4420 = &LAB_14745f49a;
    FUN_145f5b9be();
    FUN_1407e00cc(&DAT_14caa43d8);
    return;
  }
  return;
}



// FUNCTION 145f5b9be FUN_145f5b9be body=123 status=ok
// SIG undefined FUN_145f5b9be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f5b9be(void)

{
  _DAT_14caa5c58 = L"BASE";
  DAT_14caa5c82 = 4;
  _DAT_14caa5c60 = FUN_140b35ae4();
  _DAT_14caa5c68 = DAT_14caa43e8;
  _DAT_14caa5c70 = &LAB_14682652b;
  DAT_14caa43e8 = &DAT_14caa5c58;
  DAT_14caa443d = DAT_14caa443d + '\x01';
  _DAT_14caa5c78 = 0x100000000;
  if (*(char *)(_DAT_14caa5c60 + 100) != '\0') {
    DAT_14caa443e = DAT_14caa443e + '\x01';
  }
  return;
}



// FUNCTION 145f5ba3a FUN_145f5ba3a body=261 status=ok
// SIG undefined FUN_145f5ba3a(void)

void FUN_145f5ba3a(void)

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
              0x110) < DAT_14caa56f0) {
    FUN_144b3d300(&DAT_14caa56f0);
    if (DAT_14caa56f0 == -1) {
      FUN_145f5bb40(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x170;
      local_58 = 0x77a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14caa5670,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14324e208);
      _Init_thread_footer(&DAT_14caa56f0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f5bb40 FUN_145f5bb40 body=226 status=ok
// SIG undefined FUN_145f5bb40(void)

longlong * FUN_145f5bb40(longlong *param_1)

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
  pcVar13 = FUN_1463252b8;
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



// FUNCTION 145f5bc24 FUN_145f5bc24 body=138 status=ok
// SIG undefined FUN_145f5bc24(void)

code * FUN_145f5bc24(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InWeightmapBeingPacked";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6800000780;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14746083e;
}



// FUNCTION 145f5bcae FUN_145f5bcae body=138 status=ok
// SIG undefined FUN_145f5bcae(void)

code * FUN_145f5bcae(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InSourcePixelOffsets";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000077c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1474608c8;
}



// FUNCTION 145f5bd38 FUN_145f5bd38 body=138 status=ok
// SIG undefined FUN_145f5bd38(void)

code * FUN_145f5bd38(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InIsAdditive";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x580000077e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146325340;
}



// FUNCTION 145f5bdc2 FUN_145f5bdc2 body=292 status=ok
// SIG undefined FUN_145f5bdc2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f5bdc2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaca38) {
    FUN_144b3d300(&DAT_14caaca38);
    if (DAT_14caaca38 == -1) {
      FUN_145f5c030();
      FUN_145f5bee6();
      FUN_140db5666(&DAT_14caac990,0,&DAT_14caac928,L"FCompositeHDRForBlurPS",
                    L"/Engine/Private/CompositeUIPixelShader.usf",L"CompositeUIForBlur",3,2,
                    FUN_14750cd2a,FUN_14750ccca,&LAB_1459902fa,&LAB_14750ccc6,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cab0210);
      _DAT_14caac990 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1432b95c4);
      _Init_thread_footer(&DAT_14caaca38);
    }
  }
  return &DAT_14caac990;
}



// FUNCTION 145f5bee6 FUN_145f5bee6 body=205 status=ok
// SIG undefined FUN_145f5bee6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f5bee6(void)

{
  if ((DAT_14caac98f & 2) == 0) {
    DAT_14caac98f = DAT_14caac98f | 2;
    _DAT_14caac930 = L"FCompositeHDRForBlurPS";
    _DAT_14caac948 = FUN_146826540;
    _DAT_14caac950 = FUN_146825d77;
    _DAT_14caac958 = FUN_146825fd6;
    _DAT_14caac960 = FUN_1407e02ea;
    _DAT_14caac968 = FUN_146826273;
    _DAT_14caac940 = FUN_14750cc98;
    _DAT_14caac980 = 0xffffffff000000e0;
    _DAT_14caac988 = 8;
    DAT_14caac98c = 0;
    _DAT_14caac970 = &LAB_14750ccc2;
    FUN_145f5bfb4();
    FUN_1407e00cc(&DAT_14caac928);
    return;
  }
  return;
}



// FUNCTION 145f5bfb4 FUN_145f5bfb4 body=123 status=ok
// SIG undefined FUN_145f5bfb4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f5bfb4(void)

{
  _DAT_14cab0d20 = L"BASE";
  DAT_14cab0d4a = 4;
  _DAT_14cab0d28 = FUN_140b35ae4();
  _DAT_14cab0d30 = DAT_14caac938;
  _DAT_14cab0d38 = &LAB_14682652b;
  DAT_14caac938 = &DAT_14cab0d20;
  DAT_14caac98d = DAT_14caac98d + '\x01';
  _DAT_14cab0d40 = 0x100000000;
  if (*(char *)(_DAT_14cab0d28 + 100) != '\0') {
    DAT_14caac98e = DAT_14caac98e + '\x01';
  }
  return;
}



// FUNCTION 145f5c030 FUN_145f5c030 body=261 status=ok
// SIG undefined FUN_145f5c030(void)

void FUN_145f5c030(void)

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
              0x110) < DAT_14cab0290) {
    FUN_144b3d300(&DAT_14cab0290);
    if (DAT_14cab0290 == -1) {
      FUN_145f5c136(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x130;
      local_58 = 0x31;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cab0210,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1432c7198);
      _Init_thread_footer(&DAT_14cab0290);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f5c136 FUN_145f5c136 body=226 status=ok
// SIG undefined FUN_145f5c136(void)

longlong * FUN_145f5c136(longlong *param_1)

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
  pcVar13 = FUN_146336ffc;
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



// FUNCTION 145f5c21a FUN_145f5c21a body=138 status=ok
// SIG undefined FUN_145f5c21a(void)

code * FUN_145f5c21a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"UIWriteMaskTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000033;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147510d58;
}



// FUNCTION 145f5c2a4 FUN_145f5c2a4 body=138 status=ok
// SIG undefined FUN_145f5c2a4(void)

code * FUN_145f5c2a4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SceneTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000034;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f5c21a;
}


