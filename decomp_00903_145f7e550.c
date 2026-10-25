// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145f7e550 FUN_145f7e550 body=205 status=ok
// SIG undefined FUN_145f7e550(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f7e550(void)

{
  if ((DAT_14c9f503f & 2) == 0) {
    DAT_14c9f503f = DAT_14c9f503f | 2;
    _DAT_14c9f4fe0 = L"FVisualizeReflectionTracesCS";
    _DAT_14c9f4ff8 = FUN_146826540;
    _DAT_14c9f5000 = FUN_146825d77;
    _DAT_14c9f5008 = FUN_146825fd6;
    _DAT_14c9f5010 = FUN_1407e02ea;
    _DAT_14c9f5018 = FUN_146826273;
    _DAT_14c9f4ff0 = FUN_1471eff62;
    _DAT_14c9f5030 = 0xffffffff000000e0;
    _DAT_14c9f5038 = 8;
    DAT_14c9f503c = 0;
    _DAT_14c9f5020 = &LAB_1471eff8c;
    FUN_145f7e61e();
    FUN_1407e00cc(&DAT_14c9f4fd8);
    return;
  }
  return;
}



// FUNCTION 145f7e61e FUN_145f7e61e body=123 status=ok
// SIG undefined FUN_145f7e61e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f7e61e(void)

{
  _DAT_14c9f7f98 = L"BASE";
  DAT_14c9f7fc2 = 4;
  _DAT_14c9f7fa0 = FUN_140b35ae4();
  _DAT_14c9f7fa8 = DAT_14c9f4fe8;
  _DAT_14c9f7fb0 = &LAB_14682652b;
  DAT_14c9f4fe8 = &DAT_14c9f7f98;
  DAT_14c9f503d = DAT_14c9f503d + '\x01';
  _DAT_14c9f7fb8 = 0x100000000;
  if (*(char *)(_DAT_14c9f7fa0 + 100) != '\0') {
    DAT_14c9f503e = DAT_14c9f503e + '\x01';
  }
  return;
}



// FUNCTION 145f7e69a FUN_145f7e69a body=261 status=ok
// SIG undefined FUN_145f7e69a(void)

void FUN_145f7e69a(void)

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
              0x110) < DAT_14c9f72d0) {
    FUN_144b3d300(&DAT_14c9f72d0);
    if (DAT_14c9f72d0 == -1) {
      FUN_145f7e7a0(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 400;
      local_58 = 0x26a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f7250,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d59651);
      _Init_thread_footer(&DAT_14c9f72d0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f7e7a0 FUN_145f7e7a0 body=226 status=ok
// SIG undefined FUN_145f7e7a0(void)

longlong * FUN_145f7e7a0(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462e01f8;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f7e884 FUN_145f7e884 body=138 status=ok
// SIG undefined FUN_145f7e884(void)

undefined1 * FUN_145f7e884(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x26b;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_1471f9ece;
}



// FUNCTION 145f7e90e FUN_145f7e90e body=144 status=ok
// SIG undefined FUN_145f7e90e(void)

code * FUN_145f7e90e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145aa826c();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"IndirectTracingParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FLumenIndirectTracingParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1300000026e;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462e0286;
}



// FUNCTION 145f7e99e FUN_145f7e99e body=144 status=ok
// SIG undefined FUN_145f7e99e(void)

code * FUN_145f7e99e(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1700000026f;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145f7e90e;
}



// FUNCTION 145f7ea2e FUN_145f7ea2e body=292 status=ok
// SIG undefined FUN_145f7ea2e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f7ea2e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f5788) {
    FUN_144b3d300(&DAT_14c9f5788);
    if (DAT_14c9f5788 == -1) {
      FUN_145f7ec9c();
      FUN_145f7eb52();
      FUN_140db5666(&DAT_14c9f56e0,0,&DAT_14c9f5678,L"FClearTemporalHistoryCS",
                    L"/Engine/Private/Lumen/LumenReSTIRGather.usf",L"ClearTemporalHistoryCS",5,1,
                    FUN_1471f08ea,FUN_1471f088a,&LAB_1462db582,&LAB_1471f0886,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9f7608);
      _DAT_14c9f56e0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d4ae32);
      _Init_thread_footer(&DAT_14c9f5788);
    }
  }
  return &DAT_14c9f56e0;
}



// FUNCTION 145f7eb52 FUN_145f7eb52 body=205 status=ok
// SIG undefined FUN_145f7eb52(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f7eb52(void)

{
  if ((DAT_14c9f56df & 2) == 0) {
    DAT_14c9f56df = DAT_14c9f56df | 2;
    _DAT_14c9f5680 = L"FClearTemporalHistoryCS";
    _DAT_14c9f5698 = FUN_146826540;
    _DAT_14c9f56a0 = FUN_146825d77;
    _DAT_14c9f56a8 = FUN_146825fd6;
    _DAT_14c9f56b0 = FUN_1407e02ea;
    _DAT_14c9f56b8 = FUN_146826273;
    _DAT_14c9f5690 = FUN_1471f0858;
    _DAT_14c9f56d0 = 0xffffffff000000e0;
    _DAT_14c9f56d8 = 8;
    DAT_14c9f56dc = 0;
    _DAT_14c9f56c0 = &LAB_1471f0882;
    FUN_145f7ec20();
    FUN_1407e00cc(&DAT_14c9f5678);
    return;
  }
  return;
}



// FUNCTION 145f7ec20 FUN_145f7ec20 body=123 status=ok
// SIG undefined FUN_145f7ec20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f7ec20(void)

{
  _DAT_14c9f8058 = L"BASE";
  DAT_14c9f8082 = 4;
  _DAT_14c9f8060 = FUN_140b35ae4();
  _DAT_14c9f8068 = DAT_14c9f5688;
  _DAT_14c9f8070 = &LAB_14682652b;
  DAT_14c9f5688 = &DAT_14c9f8058;
  DAT_14c9f56dd = DAT_14c9f56dd + '\x01';
  _DAT_14c9f8078 = 0x100000000;
  if (*(char *)(_DAT_14c9f8060 + 100) != '\0') {
    DAT_14c9f56de = DAT_14c9f56de + '\x01';
  }
  return;
}



// FUNCTION 145f7ec9c FUN_145f7ec9c body=261 status=ok
// SIG undefined FUN_145f7ec9c(void)

void FUN_145f7ec9c(void)

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
              0x110) < DAT_14c9f7688) {
    FUN_144b3d300(&DAT_14c9f7688);
    if (DAT_14c9f7688 == -1) {
      FUN_145f7eda2(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x110;
      local_58 = 0x1f0;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f7608,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d596a5);
      _Init_thread_footer(&DAT_14c9f7688);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f7eda2 FUN_145f7eda2 body=226 status=ok
// SIG undefined FUN_145f7eda2(void)

longlong * FUN_145f7eda2(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462e0b42;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f7ee86 FUN_145f7ee86 body=136 status=ok
// SIG undefined FUN_145f7ee86(void)

code * FUN_145f7ee86(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000001f5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471fb1b0;
}



// FUNCTION 145f7ef0e FUN_145f7ef0e body=144 status=ok
// SIG undefined FUN_145f7ef0e(void)

code * FUN_145f7ef0e(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xf0000001f8;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462e0bd0;
}



// FUNCTION 145f7ef9e FUN_145f7ef9e body=146 status=ok
// SIG undefined FUN_145f7ef9e(void)

code * FUN_145f7ef9e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145be9f3e();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ReSTIRParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FReSTIRParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000001f6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9f7360;
  return FUN_145f7ee86;
}



// FUNCTION 145f7f030 FUN_145f7f030 body=292 status=ok
// SIG undefined FUN_145f7f030(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f7f030(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f58b0) {
    FUN_144b3d300(&DAT_14c9f58b0);
    if (DAT_14c9f58b0 == -1) {
      FUN_145f7f29e();
      FUN_145f7f154();
      FUN_140db5666(&DAT_14c9f5808,0,&DAT_14c9f57a0,L"FSpatialResamplingCS",
                    L"/Engine/Private/Lumen/LumenReSTIRGather.usf",L"SpatialResamplingCS",5,1,
                    FUN_1471f09b0,FUN_1471f0950,&LAB_1462db596,&LAB_1471f094c,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9f7690);
      _DAT_14c9f5808 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d4ae3e);
      _Init_thread_footer(&DAT_14c9f58b0);
    }
  }
  return &DAT_14c9f5808;
}



// FUNCTION 145f7f154 FUN_145f7f154 body=205 status=ok
// SIG undefined FUN_145f7f154(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f7f154(void)

{
  if ((DAT_14c9f5807 & 2) == 0) {
    DAT_14c9f5807 = DAT_14c9f5807 | 2;
    _DAT_14c9f57a8 = L"FSpatialResamplingCS";
    _DAT_14c9f57c0 = FUN_146826540;
    _DAT_14c9f57c8 = FUN_146825d77;
    _DAT_14c9f57d0 = FUN_146825fd6;
    _DAT_14c9f57d8 = FUN_1407e02ea;
    _DAT_14c9f57e0 = FUN_146826273;
    _DAT_14c9f57b8 = FUN_1471f091e;
    _DAT_14c9f57f8 = 0xffffffff000000e0;
    _DAT_14c9f5800 = 8;
    DAT_14c9f5804 = 0;
    _DAT_14c9f57e8 = &LAB_1471f0948;
    FUN_145f7f222();
    FUN_1407e00cc(&DAT_14c9f57a0);
    return;
  }
  return;
}



// FUNCTION 145f7f222 FUN_145f7f222 body=123 status=ok
// SIG undefined FUN_145f7f222(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f7f222(void)

{
  _DAT_14c9f8088 = L"BASE";
  DAT_14c9f80b2 = 4;
  _DAT_14c9f8090 = FUN_140b35ae4();
  _DAT_14c9f8098 = DAT_14c9f57b0;
  _DAT_14c9f80a0 = &LAB_14682652b;
  DAT_14c9f57b0 = &DAT_14c9f8088;
  DAT_14c9f5805 = DAT_14c9f5805 + '\x01';
  _DAT_14c9f80a8 = 0x100000000;
  if (*(char *)(_DAT_14c9f8090 + 100) != '\0') {
    DAT_14c9f5806 = DAT_14c9f5806 + '\x01';
  }
  return;
}



// FUNCTION 145f7f29e FUN_145f7f29e body=261 status=ok
// SIG undefined FUN_145f7f29e(void)

void FUN_145f7f29e(void)

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
              0x110) < DAT_14c9f7710) {
    FUN_144b3d300(&DAT_14c9f7710);
    if (DAT_14c9f7710 == -1) {
      FUN_145f7f3a4(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x150;
      local_58 = 0x216;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f7690,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d596b1);
      _Init_thread_footer(&DAT_14c9f7710);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f7f3a4 FUN_145f7f3a4 body=226 status=ok
// SIG undefined FUN_145f7f3a4(void)

longlong * FUN_145f7f3a4(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462e0c60;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f7f488 FUN_145f7f488 body=138 status=ok
// SIG undefined FUN_145f7f488(void)

code * FUN_145f7f488(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SpatialResamplingPassIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x13c0000021e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471fb3d6;
}



// FUNCTION 145f7f512 FUN_145f7f512 body=144 status=ok
// SIG undefined FUN_145f7f512(void)

code * FUN_145f7f512(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xb000000218;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462e0e06;
}



// FUNCTION 145f7f5a2 FUN_145f7f5a2 body=144 status=ok
// SIG undefined FUN_145f7f5a2(void)

code * FUN_145f7f5a2(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xc000000219;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145f7f512;
}



// FUNCTION 145f7f632 FUN_145f7f632 body=292 status=ok
// SIG undefined FUN_145f7f632(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f7f632(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca039c0) {
    FUN_144b3d300(&DAT_14ca039c0);
    if (DAT_14ca039c0 == -1) {
      FUN_145f7f8a0();
      FUN_145f7f756();
      FUN_140db5666(&DAT_14ca03918,0,&DAT_14ca038b0,L"FVisualizeTracesCS",
                    L"/Engine/Private/Lumen/LumenVisualize.usf",L"VisualizeTracesCS",5,1,
                    FUN_147222d54,FUN_147222cf4,&LAB_1462e7438,&LAB_147222cf0,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca06ab0);
      _DAT_14ca03918 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142dc26a9);
      _Init_thread_footer(&DAT_14ca039c0);
    }
  }
  return &DAT_14ca03918;
}



// FUNCTION 145f7f756 FUN_145f7f756 body=205 status=ok
// SIG undefined FUN_145f7f756(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f7f756(void)

{
  if ((DAT_14ca03917 & 2) == 0) {
    DAT_14ca03917 = DAT_14ca03917 | 2;
    _DAT_14ca038b8 = L"FVisualizeTracesCS";
    _DAT_14ca038d0 = FUN_146826540;
    _DAT_14ca038d8 = FUN_146825d77;
    _DAT_14ca038e0 = FUN_146825fd6;
    _DAT_14ca038e8 = FUN_1407e02ea;
    _DAT_14ca038f0 = FUN_146826273;
    _DAT_14ca038c8 = FUN_147222cc2;
    _DAT_14ca03908 = 0xffffffff000000e0;
    _DAT_14ca03910 = 8;
    DAT_14ca03914 = 0;
    _DAT_14ca038f8 = &LAB_147222cec;
    FUN_145f7f824();
    FUN_1407e00cc(&DAT_14ca038b0);
    return;
  }
  return;
}



// FUNCTION 145f7f824 FUN_145f7f824 body=123 status=ok
// SIG undefined FUN_145f7f824(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f7f824(void)

{
  _DAT_14ca07eb0 = L"BASE";
  DAT_14ca07eda = 4;
  _DAT_14ca07eb8 = FUN_140b35ae4();
  _DAT_14ca07ec0 = DAT_14ca038c0;
  _DAT_14ca07ec8 = &LAB_14682652b;
  DAT_14ca038c0 = &DAT_14ca07eb0;
  DAT_14ca03915 = DAT_14ca03915 + '\x01';
  _DAT_14ca07ed0 = 0x100000000;
  if (*(char *)(_DAT_14ca07eb8 + 100) != '\0') {
    DAT_14ca03916 = DAT_14ca03916 + '\x01';
  }
  return;
}



// FUNCTION 145f7f8a0 FUN_145f7f8a0 body=261 status=ok
// SIG undefined FUN_145f7f8a0(void)

void FUN_145f7f8a0(void)

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
              0x110) < DAT_14ca06b30) {
    FUN_144b3d300(&DAT_14ca06b30);
    if (DAT_14ca06b30 == -1) {
      FUN_145f7f9a6(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x60;
      local_58 = 0x1e3;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca06ab0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142dd3aaf);
      _Init_thread_footer(&DAT_14ca06b30);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f7f9a6 FUN_145f7f9a6 body=226 status=ok
// SIG undefined FUN_145f7f9a6(void)

longlong * FUN_145f7f9a6(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462ea542;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f7fa8a FUN_145f7fa8a body=136 status=ok
// SIG undefined FUN_145f7fa8a(void)

undefined1 * FUN_145f7fa8a(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1e4;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_14722cd7c;
}



// FUNCTION 145f7fb12 FUN_145f7fb12 body=144 status=ok
// SIG undefined FUN_145f7fb12(void)

code * FUN_145f7fb12(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar4) = L"ShaderPrintUniformBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"ShaderPrint::FShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x10000001e5;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145f7fa8a;
}



// FUNCTION 145f7fba2 FUN_145f7fba2 body=146 status=ok
// SIG undefined FUN_145f7fba2(void)

code * FUN_145f7fba2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145d36c7a();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TonemappingParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"LumenVisualize::FTonemappingParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000001e6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca06890;
  return FUN_145f7fb12;
}



// FUNCTION 145f7fc34 FUN_145f7fc34 body=292 status=ok
// SIG undefined FUN_145f7fc34(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f7fc34(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca1afd0) {
    FUN_144b3d300(&DAT_14ca1afd0);
    if (DAT_14ca1afd0 == -1) {
      FUN_145f7fea2();
      FUN_145f7fd58();
      FUN_140db5666(&DAT_14ca1af28,0,&DAT_14ca1aec0,L"FNaniteVisualizeCS",
                    L"/Engine/Private/Nanite/NaniteVisualize.usf",L"VisualizeCS",5,1,FUN_147264202,
                    FUN_1472641a2,&LAB_1462f34d2,&LAB_14726419e,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca1bab8);
      _DAT_14ca1af28 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e579b2);
      _Init_thread_footer(&DAT_14ca1afd0);
    }
  }
  return &DAT_14ca1af28;
}



// FUNCTION 145f7fd58 FUN_145f7fd58 body=205 status=ok
// SIG undefined FUN_145f7fd58(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f7fd58(void)

{
  if ((DAT_14ca1af27 & 2) == 0) {
    DAT_14ca1af27 = DAT_14ca1af27 | 2;
    _DAT_14ca1aec8 = L"FNaniteVisualizeCS";
    _DAT_14ca1aee0 = FUN_146826540;
    _DAT_14ca1aee8 = FUN_146825d77;
    _DAT_14ca1aef0 = FUN_146825fd6;
    _DAT_14ca1aef8 = FUN_1407e02ea;
    _DAT_14ca1af00 = FUN_146826273;
    _DAT_14ca1aed8 = FUN_147264170;
    _DAT_14ca1af18 = 0xffffffff000000e0;
    _DAT_14ca1af20 = 8;
    DAT_14ca1af24 = 0;
    _DAT_14ca1af08 = &LAB_14726419a;
    FUN_145f7fe26();
    FUN_1407e00cc(&DAT_14ca1aec0);
    return;
  }
  return;
}



// FUNCTION 145f7fe26 FUN_145f7fe26 body=123 status=ok
// SIG undefined FUN_145f7fe26(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f7fe26(void)

{
  _DAT_14ca1c178 = L"BASE";
  DAT_14ca1c1a2 = 4;
  _DAT_14ca1c180 = FUN_140b35ae4();
  _DAT_14ca1c188 = DAT_14ca1aed0;
  _DAT_14ca1c190 = &LAB_14682652b;
  DAT_14ca1aed0 = &DAT_14ca1c178;
  DAT_14ca1af25 = DAT_14ca1af25 + '\x01';
  _DAT_14ca1c198 = 0x100000000;
  if (*(char *)(_DAT_14ca1c180 + 100) != '\0') {
    DAT_14ca1af26 = DAT_14ca1af26 + '\x01';
  }
  return;
}



// FUNCTION 145f7fea2 FUN_145f7fea2 body=261 status=ok
// SIG undefined FUN_145f7fea2(void)

void FUN_145f7fea2(void)

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
              0x110) < DAT_14ca1bb38) {
    FUN_144b3d300(&DAT_14ca1bb38);
    if (DAT_14ca1bb38 == -1) {
      FUN_1415a354e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x120;
      local_58 = 0xa0;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca1bab8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e5b0c3);
      _Init_thread_footer(&DAT_14ca1bb38);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f7ffa8 FUN_145f7ffa8 body=138 status=ok
// SIG undefined FUN_145f7ffa8(void)

code * FUN_145f7ffa8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MaterialHitProxyTable";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"ByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000000bb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472696dc;
}



// FUNCTION 145f80032 FUN_145f80032 body=144 status=ok
// SIG undefined FUN_145f80032(void)

code * FUN_145f80032(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144938434();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"VirtualShadowMap";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FVirtualShadowMapUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x90000000ae;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145f800c2;
}



// FUNCTION 145f800c2 FUN_145f800c2 body=144 status=ok
// SIG undefined FUN_145f800c2(void)

code * FUN_145f800c2(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x80000000ad;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462f469e;
}



// FUNCTION 145f80152 FUN_145f80152 body=292 status=ok
// SIG undefined FUN_145f80152(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f80152(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca274f0) {
    FUN_144b3d300(&DAT_14ca274f0);
    if (DAT_14ca274f0 == -1) {
      FUN_145f803c0();
      FUN_145f80276();
      FUN_140db5666(&DAT_14ca27448,0,&DAT_14ca273e0,L"FCalculateExposureIlluminanceCS",
                    L"/Engine/Private/PostProcessEyeAdaptation.usf",L"CalculateExposureIlluminance",
                    5,1,FUN_14728b98a,FUN_14728b92a,&LAB_14728b912,&LAB_14728b90e,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca2a078);
      _DAT_14ca27448 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142ebb962);
      _Init_thread_footer(&DAT_14ca274f0);
    }
  }
  return &DAT_14ca27448;
}



// FUNCTION 145f80276 FUN_145f80276 body=205 status=ok
// SIG undefined FUN_145f80276(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f80276(void)

{
  if ((DAT_14ca27447 & 2) == 0) {
    DAT_14ca27447 = DAT_14ca27447 | 2;
    _DAT_14ca273e8 = L"FCalculateExposureIlluminanceCS";
    _DAT_14ca27400 = FUN_146826540;
    _DAT_14ca27408 = FUN_146825d77;
    _DAT_14ca27410 = FUN_146825fd6;
    _DAT_14ca27418 = FUN_1407e02ea;
    _DAT_14ca27420 = FUN_146826273;
    _DAT_14ca273f8 = FUN_14728b8de;
    _DAT_14ca27438 = 0xffffffff000000e0;
    _DAT_14ca27440 = 8;
    DAT_14ca27444 = 0;
    _DAT_14ca27428 = &LAB_14728b90a;
    FUN_145f80344();
    FUN_1407e00cc(&DAT_14ca273e0);
    return;
  }
  return;
}



// FUNCTION 145f80344 FUN_145f80344 body=123 status=ok
// SIG undefined FUN_145f80344(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f80344(void)

{
  _DAT_14ca2c180 = L"BASE";
  DAT_14ca2c1aa = 4;
  _DAT_14ca2c188 = FUN_140b35ae4();
  _DAT_14ca2c190 = DAT_14ca273f0;
  _DAT_14ca2c198 = &LAB_14682652b;
  DAT_14ca273f0 = &DAT_14ca2c180;
  DAT_14ca27445 = DAT_14ca27445 + '\x01';
  _DAT_14ca2c1a0 = 0x100000000;
  if (*(char *)(_DAT_14ca2c188 + 100) != '\0') {
    DAT_14ca27446 = DAT_14ca27446 + '\x01';
  }
  return;
}



// FUNCTION 145f803c0 FUN_145f803c0 body=261 status=ok
// SIG undefined FUN_145f803c0(void)

void FUN_145f803c0(void)

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
              0x110) < DAT_14ca2a0f8) {
    FUN_144b3d300(&DAT_14ca2a0f8);
    if (DAT_14ca2a0f8 == -1) {
      FUN_145f804c6(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1e0;
      local_58 = 0x2c8;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca2a078,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142edce6b);
      _Init_thread_footer(&DAT_14ca2a0f8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f804c6 FUN_145f804c6 body=226 status=ok
// SIG undefined FUN_145f804c6(void)

longlong * FUN_145f804c6(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462fa604;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f805aa FUN_145f805aa body=138 status=ok
// SIG undefined FUN_145f805aa(void)

code * FUN_145f805aa(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x70000002cb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462fa83a;
}



// FUNCTION 145f80634 FUN_145f80634 body=144 status=ok
// SIG undefined FUN_145f80634(void)

code * FUN_145f80634(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1c0000002d6;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145f806c4;
}



// FUNCTION 145f806c4 FUN_145f806c4 body=144 status=ok
// SIG undefined FUN_145f806c4(void)

code * FUN_145f806c4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145d3eaa2();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"TranslucencyLightingVolume";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FTranslucencyLightingVolumeParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1a0000002d5;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_147291b12;
}



// FUNCTION 145f80754 FUN_145f80754 body=292 status=ok
// SIG undefined FUN_145f80754(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f80754(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca36118) {
    FUN_144b3d300(&DAT_14ca36118);
    if (DAT_14ca36118 == -1) {
      FUN_145f809c2();
      FUN_145f80878();
      FUN_140db5666(&DAT_14ca36070,0,&DAT_14ca36008,L"FVisualizeMotionVectorsPS",
                    L"/Engine/Private/MotionBlur/VisualizeMotionVectors.usf",L"MainPS",3,1,
                    FUN_1472aa044,FUN_1472a9fe4,&LAB_1472a9fe0,&LAB_1472a9fdc,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca38160);
      _DAT_14ca36070 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f3f119);
      _Init_thread_footer(&DAT_14ca36118);
    }
  }
  return &DAT_14ca36070;
}



// FUNCTION 145f80878 FUN_145f80878 body=205 status=ok
// SIG undefined FUN_145f80878(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f80878(void)

{
  if ((DAT_14ca3606f & 2) == 0) {
    DAT_14ca3606f = DAT_14ca3606f | 2;
    _DAT_14ca36010 = L"FVisualizeMotionVectorsPS";
    _DAT_14ca36028 = FUN_146826540;
    _DAT_14ca36030 = FUN_146825d77;
    _DAT_14ca36038 = FUN_146825fd6;
    _DAT_14ca36040 = FUN_1407e02ea;
    _DAT_14ca36048 = FUN_146826273;
    _DAT_14ca36020 = FUN_1472a9fac;
    _DAT_14ca36060 = 0xffffffff000000e0;
    _DAT_14ca36068 = 8;
    DAT_14ca3606c = 0;
    _DAT_14ca36050 = &LAB_1472a9fd8;
    FUN_145f80946();
    FUN_1407e00cc(&DAT_14ca36008);
    return;
  }
  return;
}



// FUNCTION 145f80946 FUN_145f80946 body=123 status=ok
// SIG undefined FUN_145f80946(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f80946(void)

{
  _DAT_14ca383c0 = L"BASE";
  DAT_14ca383ea = 4;
  _DAT_14ca383c8 = FUN_140b35ae4();
  _DAT_14ca383d0 = DAT_14ca36018;
  _DAT_14ca383d8 = &LAB_14682652b;
  DAT_14ca36018 = &DAT_14ca383c0;
  DAT_14ca3606d = DAT_14ca3606d + '\x01';
  _DAT_14ca383e0 = 0x100000000;
  if (*(char *)(_DAT_14ca383c8 + 100) != '\0') {
    DAT_14ca3606e = DAT_14ca3606e + '\x01';
  }
  return;
}



// FUNCTION 145f809c2 FUN_145f809c2 body=261 status=ok
// SIG undefined FUN_145f809c2(void)

void FUN_145f809c2(void)

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
              0x110) < DAT_14ca381e0) {
    FUN_144b3d300(&DAT_14ca381e0);
    if (DAT_14ca381e0 == -1) {
      FUN_1415a3632(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x310;
      local_58 = 0xf;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca38160,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f539ef);
      _Init_thread_footer(&DAT_14ca381e0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f80ac8 FUN_145f80ac8 body=138 status=ok
// SIG undefined FUN_145f80ac8(void)

code * FUN_145f80ac8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SvPositionToScreenPos";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c000000023;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472acc62;
}



// FUNCTION 145f80b52 FUN_145f80b52 body=144 status=ok
// SIG undefined FUN_145f80b52(void)

code * FUN_145f80b52(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar4) = L"Color";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FScreenPassTextureViewportParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x500000001a;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1472ace8a;
}



// FUNCTION 145f80be2 FUN_145f80be2 body=144 status=ok
// SIG undefined FUN_145f80be2(void)

code * FUN_145f80be2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar4) = L"PrevColor";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FScreenPassTextureViewportParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1300000001c;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_146300a60;
}



// FUNCTION 145f80c72 FUN_145f80c72 body=292 status=ok
// SIG undefined FUN_145f80c72(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f80c72(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca38b38) {
    FUN_144b3d300(&DAT_14ca38b38);
    if (DAT_14ca38b38 == -1) {
      FUN_145f80ee0();
      FUN_145f80d96();
      FUN_140db5666(&DAT_14ca38a90,0,&DAT_14ca38a28,L"FRayTracingBarycentricsCS",
                    L"/Engine/Private/RayTracing/RayTracingBarycentrics.usf",
                    L"RayTracingBarycentricsMainCS",5,2,FUN_1472b1870,FUN_1472b1810,FUN_1457e1e0a,
                    &LAB_1472b180c,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca3e748);
      _DAT_14ca38a90 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f65762);
      _Init_thread_footer(&DAT_14ca38b38);
    }
  }
  return &DAT_14ca38a90;
}



// FUNCTION 145f80d96 FUN_145f80d96 body=205 status=ok
// SIG undefined FUN_145f80d96(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f80d96(void)

{
  if ((DAT_14ca38a8f & 2) == 0) {
    DAT_14ca38a8f = DAT_14ca38a8f | 2;
    _DAT_14ca38a30 = L"FRayTracingBarycentricsCS";
    _DAT_14ca38a48 = FUN_146826540;
    _DAT_14ca38a50 = FUN_146825d77;
    _DAT_14ca38a58 = FUN_146825fd6;
    _DAT_14ca38a60 = FUN_1407e02ea;
    _DAT_14ca38a68 = FUN_146826273;
    _DAT_14ca38a40 = FUN_1472b17de;
    _DAT_14ca38a80 = 0xffffffff000000e0;
    _DAT_14ca38a88 = 8;
    DAT_14ca38a8c = 0;
    _DAT_14ca38a70 = &LAB_1472b1808;
    FUN_145f80e64();
    FUN_1407e00cc(&DAT_14ca38a28);
    return;
  }
  return;
}



// FUNCTION 145f80e64 FUN_145f80e64 body=123 status=ok
// SIG undefined FUN_145f80e64(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f80e64(void)

{
  _DAT_14ca3f470 = L"BASE";
  DAT_14ca3f49a = 4;
  _DAT_14ca3f478 = FUN_140b35ae4();
  _DAT_14ca3f480 = DAT_14ca38a38;
  _DAT_14ca3f488 = &LAB_14682652b;
  DAT_14ca38a38 = &DAT_14ca3f470;
  DAT_14ca38a8d = DAT_14ca38a8d + '\x01';
  _DAT_14ca3f490 = 0x100000000;
  if (*(char *)(_DAT_14ca3f478 + 100) != '\0') {
    DAT_14ca38a8e = DAT_14ca38a8e + '\x01';
  }
  return;
}



// FUNCTION 145f80ee0 FUN_145f80ee0 body=261 status=ok
// SIG undefined FUN_145f80ee0(void)

void FUN_145f80ee0(void)

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
              0x110) < DAT_14ca3e7c8) {
    FUN_144b3d300(&DAT_14ca3e7c8);
    if (DAT_14ca3e7c8 == -1) {
      FUN_145f80fe6(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x60;
      local_58 = 0x57;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca3e748,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f6f6ae);
      _Init_thread_footer(&DAT_14ca3e7c8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f80fe6 FUN_145f80fe6 body=226 status=ok
// SIG undefined FUN_145f80fe6(void)

longlong * FUN_145f80fe6(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_14630110e;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f810ca FUN_145f810ca body=138 status=ok
// SIG undefined FUN_145f810ca(void)

code * FUN_145f810ca(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Output";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000059;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472bbea2;
}



// FUNCTION 145f81154 FUN_145f81154 body=144 status=ok
// SIG undefined FUN_145f81154(void)

code * FUN_145f81154(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1403aea72();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"NaniteShadingUniformBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FNaniteShadingUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x400000005d;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_146301196;
}



// FUNCTION 145f811e4 FUN_145f811e4 body=144 status=ok
// SIG undefined FUN_145f811e4(void)

code * FUN_145f811e4(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x200000005b;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_146301226;
}



// FUNCTION 145f81274 FUN_145f81274 body=289 status=ok
// SIG undefined FUN_145f81274(void)

undefined * FUN_145f81274(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  wchar_t *local_68;
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
  FUN_144a71728();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca12180) {
    FUN_144b3d300(&DAT_14ca12180);
    if (DAT_14ca12180 == -1) {
      FUN_145f81396(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = L"SceneTextures";
      local_70 = L"MobileDistortionPass";
      local_78 = L"FMobileDistortionPassUniformParameters";
      local_38 = 0;
      local_50 = 0xf0;
      local_58 = 0x11;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca12100,1,2);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142df5104);
      _Init_thread_footer(&DAT_14ca12180);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca12100;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f81396 FUN_145f81396 body=226 status=ok
// SIG undefined FUN_145f81396(void)

longlong * FUN_145f81396(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462ef2e2;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f8147e FUN_145f8147e body=138 status=ok
// SIG undefined FUN_145f8147e(void)

undefined1 * FUN_145f8147e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a890ae();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"SceneTextures";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FMobileSceneTextureUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x12;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145f8147a;
}



// FUNCTION 145f81508 FUN_145f81508 body=41 status=ok
// SIG undefined FUN_145f81508(void)

void FUN_145f81508(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_145f81532();
  if (lVar1 != 0) {
    FUN_145f815e8(lVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 145f81532 FUN_145f81532 body=105 status=ok
// SIG undefined FUN_145f81532(void)

void FUN_145f81532(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1459e9e4c();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_145f8159c(param_1 + 0x100,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f8159c FUN_145f8159c body=76 status=ok
// SIG undefined FUN_145f8159c(void)

void FUN_145f8159c(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_1459e9e4c();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_145f815d9;
    }
  }
  lVar2 = 0;
LAB_145f815d9:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 145f815e8 FUN_145f815e8 body=106 status=ok
// SIG undefined FUN_145f815e8(void)

void FUN_145f815e8(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x180))();
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x108) != 0)) {
    FUN_147a61a86(*(longlong *)(lVar2 + 0x108),param_2);
  }
  lVar2 = FUN_14479d2ce((longlong)param_1 + 0x34);
  if ((lVar2 != 0) && (plVar1 = *(longlong **)(lVar2 + 0x1f28), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000145f81645. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x180))(plVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 145f81652 FUN_145f81652 body=158 status=ok
// SIG undefined FUN_145f81652(void)

bool FUN_145f81652(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f816f2 FUN_145f816f2 body=292 status=ok
// SIG undefined FUN_145f816f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f816f2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca20fa8) {
    FUN_144b3d300(&DAT_14ca20fa8);
    if (DAT_14ca20fa8 == -1) {
      FUN_145f81960();
      FUN_145f81816();
      FUN_140db5666(&DAT_14ca20f00,0,&DAT_14ca20e98,L"TPrefilterPlanarReflectionPS<true>",
                    L"/Engine/Private/PlanarReflectionShaders.usf",L"PrefilterPlanarReflectionPS",3,
                    1,FUN_147278224,FUN_1472781c4,&LAB_1472781ac,&LAB_1472781a8,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca25190);
      _DAT_14ca20f00 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e845e0);
      _Init_thread_footer(&DAT_14ca20fa8);
    }
  }
  return &DAT_14ca20f00;
}



// FUNCTION 145f81816 FUN_145f81816 body=205 status=ok
// SIG undefined FUN_145f81816(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f81816(void)

{
  if ((DAT_14ca20eff & 2) == 0) {
    DAT_14ca20eff = DAT_14ca20eff | 2;
    _DAT_14ca20ea0 = L"TPrefilterPlanarReflectionPS<true>";
    _DAT_14ca20eb8 = FUN_146826540;
    _DAT_14ca20ec0 = FUN_146825d77;
    _DAT_14ca20ec8 = FUN_146825fd6;
    _DAT_14ca20ed0 = FUN_1407e02ea;
    _DAT_14ca20ed8 = FUN_146826273;
    _DAT_14ca20eb0 = FUN_147278178;
    _DAT_14ca20ef0 = 0xffffffff000000e0;
    _DAT_14ca20ef8 = 8;
    DAT_14ca20efc = 0;
    _DAT_14ca20ee0 = &LAB_1472781a4;
    FUN_145f818e4();
    FUN_1407e00cc(&DAT_14ca20e98);
    return;
  }
  return;
}



// FUNCTION 145f818e4 FUN_145f818e4 body=123 status=ok
// SIG undefined FUN_145f818e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f818e4(void)

{
  _DAT_14ca25160 = L"BASE";
  DAT_14ca2518a = 4;
  _DAT_14ca25168 = FUN_140b35ae4();
  _DAT_14ca25170 = DAT_14ca20ea8;
  _DAT_14ca25178 = &LAB_14682652b;
  DAT_14ca20ea8 = &DAT_14ca25160;
  DAT_14ca20efd = DAT_14ca20efd + '\x01';
  _DAT_14ca25180 = 0x100000000;
  if (*(char *)(_DAT_14ca25168 + 100) != '\0') {
    DAT_14ca20efe = DAT_14ca20efe + '\x01';
  }
  return;
}



// FUNCTION 145f81960 FUN_145f81960 body=261 status=ok
// SIG undefined FUN_145f81960(void)

void FUN_145f81960(void)

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
              0x110) < DAT_14ca25210) {
    FUN_144b3d300(&DAT_14ca25210);
    if (DAT_14ca25210 == -1) {
      FUN_145f81a66(local_20);
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
      FUN_140b49562(&DAT_14ca25190,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ea80e7);
      _Init_thread_footer(&DAT_14ca25210);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f81a66 FUN_145f81a66 body=226 status=ok
// SIG undefined FUN_145f81a66(void)

longlong * FUN_145f81a66(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462f82ea;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f81b4a FUN_145f81b4a body=138 status=ok
// SIG undefined FUN_145f81b4a(void)

code * FUN_145f81b4a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  return FUN_1472878fa;
}



// FUNCTION 145f81bd4 FUN_145f81bd4 body=144 status=ok
// SIG undefined FUN_145f81bd4(void)

code * FUN_145f81bd4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14130543e();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"SceneTextures";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSceneTextureShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x2000000097;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145f81c64;
}



// FUNCTION 145f81c64 FUN_145f81c64 body=146 status=ok
// SIG undefined FUN_145f81c64(void)

code * FUN_145f81c64(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145c9e304();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PlanarReflection";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FPlanarReflectionUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000096;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca20cd8;
  return FUN_1462f83fa;
}



// FUNCTION 145f81cf6 FUN_145f81cf6 body=292 status=ok
// SIG undefined FUN_145f81cf6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f81cf6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca5e6e0) {
    FUN_144b3d300(&DAT_14ca5e6e0);
    if (DAT_14ca5e6e0 == -1) {
      FUN_145f81f64();
      FUN_145f81e1a();
      FUN_140db5666(&DAT_14ca5e638,0,&DAT_14ca5e5d0,L"FOpaqueRoughRefractionPS",
                    L"/Engine/Private/Substrate/SubstrateRoughRefraction.usf",
                    L"OpaqueRoughRefractionPS",3,2,FUN_147317d7a,FUN_147317d1a,&LAB_147317d02,
                    &LAB_147317cfe,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca5f628);
      _DAT_14ca5e638 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14309c383);
      _Init_thread_footer(&DAT_14ca5e6e0);
    }
  }
  return &DAT_14ca5e638;
}



// FUNCTION 145f81e1a FUN_145f81e1a body=205 status=ok
// SIG undefined FUN_145f81e1a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f81e1a(void)

{
  if ((DAT_14ca5e637 & 2) == 0) {
    DAT_14ca5e637 = DAT_14ca5e637 | 2;
    _DAT_14ca5e5d8 = L"FOpaqueRoughRefractionPS";
    _DAT_14ca5e5f0 = FUN_146826540;
    _DAT_14ca5e5f8 = FUN_146825d77;
    _DAT_14ca5e600 = FUN_146825fd6;
    _DAT_14ca5e608 = FUN_1407e02ea;
    _DAT_14ca5e610 = FUN_146826273;
    _DAT_14ca5e5e8 = FUN_147317cd0;
    _DAT_14ca5e628 = 0xffffffff000000e0;
    _DAT_14ca5e630 = 8;
    DAT_14ca5e634 = 0;
    _DAT_14ca5e618 = &LAB_147317cfa;
    FUN_145f81ee8();
    FUN_1407e00cc(&DAT_14ca5e5d0);
    return;
  }
  return;
}



// FUNCTION 145f81ee8 FUN_145f81ee8 body=123 status=ok
// SIG undefined FUN_145f81ee8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f81ee8(void)

{
  _DAT_14ca5fdc8 = L"BASE";
  DAT_14ca5fdf2 = 4;
  _DAT_14ca5fdd0 = FUN_140b35ae4();
  _DAT_14ca5fdd8 = DAT_14ca5e5e0;
  _DAT_14ca5fde0 = &LAB_14682652b;
  DAT_14ca5e5e0 = &DAT_14ca5fdc8;
  DAT_14ca5e635 = DAT_14ca5e635 + '\x01';
  _DAT_14ca5fde8 = 0x100000000;
  if (*(char *)(_DAT_14ca5fdd0 + 100) != '\0') {
    DAT_14ca5e636 = DAT_14ca5e636 + '\x01';
  }
  return;
}



// FUNCTION 145f81f64 FUN_145f81f64 body=261 status=ok
// SIG undefined FUN_145f81f64(void)

void FUN_145f81f64(void)

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
              0x110) < DAT_14ca5f6a8) {
    FUN_144b3d300(&DAT_14ca5f6a8);
    if (DAT_14ca5f6a8 == -1) {
      FUN_145f8206a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1f0;
      local_58 = 0x22;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca5f628,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14309eecf);
      _Init_thread_footer(&DAT_14ca5f6a8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f8206a FUN_145f8206a body=226 status=ok
// SIG undefined FUN_145f8206a(void)

longlong * FUN_145f8206a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_14630d45a;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f8214e FUN_145f8214e body=138 status=ok
// SIG undefined FUN_145f8214e(void)

code * FUN_145f8214e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SeparatedOpaqueRoughRefractionSceneColor";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd000000027;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14630d4e2;
}



// FUNCTION 145f821d8 FUN_145f821d8 body=144 status=ok
// SIG undefined FUN_145f821d8(void)

code * FUN_145f821d8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14130543e();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"SceneTextures";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSceneTextureShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1000000024;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14630d570;
}



// FUNCTION 145f82268 FUN_145f82268 body=146 status=ok
// SIG undefined FUN_145f82268(void)

code * FUN_145f82268(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_144a2c9be();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Substrate";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FSubstrateGlobalUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000025;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca5dd00;
  return FUN_145f821d8;
}



// FUNCTION 145f822fa FUN_145f822fa body=292 status=ok
// SIG undefined FUN_145f822fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f822fa(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc276c8) {
    FUN_144b3d300(&DAT_14cc276c8);
    if (DAT_14cc276c8 == -1) {
      FUN_145f82568();
      FUN_145f8241e();
      FUN_140db5666(&DAT_14cc27620,0,&DAT_14cc275b8,L"FChromaticAberrationCS",
                    L"/Plugin/FSR/Private/PostProcessChromaticAberration.usf",L"MainCS",5,0x10,
                    FUN_149804c52,FUN_149804bf2,&LAB_14463bc50,&LAB_14463bc4c,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cc27ea0);
      _DAT_14cc27620 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14463bc67);
      _Init_thread_footer(&DAT_14cc276c8);
    }
  }
  return &DAT_14cc27620;
}



// FUNCTION 145f8241e FUN_145f8241e body=205 status=ok
// SIG undefined FUN_145f8241e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f8241e(void)

{
  if ((DAT_14cc2761f & 2) == 0) {
    DAT_14cc2761f = DAT_14cc2761f | 2;
    _DAT_14cc275c0 = L"FChromaticAberrationCS";
    _DAT_14cc275d8 = FUN_146826540;
    _DAT_14cc275e0 = FUN_146825d77;
    _DAT_14cc275e8 = FUN_146825fd6;
    _DAT_14cc275f0 = FUN_1407e02ea;
    _DAT_14cc275f8 = FUN_146826273;
    _DAT_14cc275d0 = FUN_149804bc4;
    _DAT_14cc27610 = 0xffffffff000000e0;
    _DAT_14cc27618 = 8;
    DAT_14cc2761c = 0;
    _DAT_14cc27600 = &LAB_149804bee;
    FUN_145f824ec();
    FUN_1407e00cc(&DAT_14cc275b8);
    return;
  }
  return;
}



// FUNCTION 145f824ec FUN_145f824ec body=123 status=ok
// SIG undefined FUN_145f824ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f824ec(void)

{
  _DAT_14cc28310 = L"BASE";
  DAT_14cc2833a = 4;
  _DAT_14cc28318 = FUN_140b35ae4();
  _DAT_14cc28320 = DAT_14cc275c8;
  _DAT_14cc28328 = &LAB_14682652b;
  DAT_14cc275c8 = &DAT_14cc28310;
  DAT_14cc2761d = DAT_14cc2761d + '\x01';
  _DAT_14cc28330 = 0x100000000;
  if (*(char *)(_DAT_14cc28318 + 100) != '\0') {
    DAT_14cc2761e = DAT_14cc2761e + '\x01';
  }
  return;
}



// FUNCTION 145f82568 FUN_145f82568 body=261 status=ok
// SIG undefined FUN_145f82568(void)

void FUN_145f82568(void)

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
              0x110) < DAT_14cc27f20) {
    FUN_144b3d300(&DAT_14cc27f20);
    if (DAT_14cc27f20 == -1) {
      FUN_145f8266e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xe0;
      local_58 = 0x8a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cc27ea0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14463e51a);
      _Init_thread_footer(&DAT_14cc27f20);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f8266e FUN_145f8266e body=226 status=ok
// SIG undefined FUN_145f8266e(void)

longlong * FUN_145f8266e(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_14675edca;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f82752 FUN_145f82752 body=138 status=ok
// SIG undefined FUN_145f82752(void)

code * FUN_145f82752(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000008c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1498064aa;
}



// FUNCTION 145f827dc FUN_145f827dc body=144 status=ok
// SIG undefined FUN_145f827dc(void)

code * FUN_145f827dc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar4) = L"Color";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FScreenPassTextureViewportParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x6000000091;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145f8286c;
}



// FUNCTION 145f8286c FUN_145f8286c body=146 status=ok
// SIG undefined FUN_145f8286c(void)

code * FUN_145f8286c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145c7657e();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"FilmGrain";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FFSRPassParameters_Grain";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000090;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14cc27e18;
  return FUN_149806396;
}



// FUNCTION 145f828fe FUN_145f828fe body=284 status=ok
// SIG undefined FUN_145f828fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f828fe(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa08e0) {
    FUN_144b3d300(&DAT_14caa08e0);
    if (DAT_14caa08e0 == -1) {
      FUN_145f82a1a();
      FUN_140db5666(&DAT_14caa0838,0,&DAT_14caa07d0,L"FUpdateDescriptorHandleCS",
                    L"/Engine/Private/UpdateDescriptorHandle.usf",L"MainCS",5,1,FUN_1474429d8,
                    FUN_1474429b0,&LAB_147442988,&LAB_147442984,&LAB_14712ac0c,&LAB_14712ac08,0xf8,0
                   );
      _DAT_14caa0838 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14323d9ba);
      _Init_thread_footer(&DAT_14caa08e0);
    }
  }
  return &DAT_14caa0838;
}



// FUNCTION 145f82a1a FUN_145f82a1a body=210 status=ok
// SIG undefined FUN_145f82a1a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f82a1a(void)

{
  if ((DAT_14caa0837 & 2) == 0) {
    DAT_14caa0837 = DAT_14caa0837 | 2;
    _DAT_14caa07d8 = L"FUpdateDescriptorHandleCS";
    _DAT_14caa07f0 = FUN_146826540;
    _DAT_14caa07f8 = FUN_146825d77;
    _DAT_14caa0800 = FUN_146825fd6;
    _DAT_14caa0808 = FUN_1407e02ea;
    _DAT_14caa0810 = FUN_146826273;
    _DAT_14caa07e8 = FUN_147442956;
    _DAT_14caa0828 = 0xffffffff000000f8;
    _DAT_14caa0830 = 8;
    DAT_14caa0834 = 0;
    _DAT_14caa0818 = &LAB_147442980;
    FUN_145f82b68();
    FUN_145f82aec();
    FUN_1407e00cc(&DAT_14caa07d0);
    return;
  }
  return;
}



// FUNCTION 145f82aec FUN_145f82aec body=123 status=ok
// SIG undefined FUN_145f82aec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f82aec(void)

{
  _DAT_14caa1248 = L"BASE";
  DAT_14caa1272 = 4;
  _DAT_14caa1250 = FUN_140b35ae4();
  _DAT_14caa1258 = DAT_14caa07e0;
  _DAT_14caa1260 = &LAB_14682652b;
  DAT_14caa07e0 = &DAT_14caa1248;
  DAT_14caa0835 = DAT_14caa0835 + '\x01';
  _DAT_14caa1268 = 0x100000000;
  if (*(char *)(_DAT_14caa1250 + 100) != '\0') {
    DAT_14caa0836 = DAT_14caa0836 + '\x01';
  }
  return;
}



// FUNCTION 145f82b68 FUN_145f82b68 body=128 status=ok
// SIG undefined FUN_145f82b68(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f82b68(void)

{
  FUN_145f82be8();
  _DAT_14caa0e98 = L"NumUpdates";
  DAT_14caa0ec2 = FUN_140850cc5();
  FUN_140ec6960();
  _DAT_14caa0ea0 = &DAT_14ca9ee58;
  _DAT_14caa0eb0 = &LAB_14682652b;
  _DAT_14caa0eb8 = 0x1000000e0;
  _DAT_14caa0ec0 = 0;
  _DAT_14caa0ea8 = DAT_14caa07e0;
  DAT_14caa07e0 = &DAT_14caa0e98;
  return;
}



// FUNCTION 145f82be8 FUN_145f82be8 body=128 status=ok
// SIG undefined FUN_145f82be8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f82be8(void)

{
  FUN_145f82c68();
  _DAT_14caa0ec8 = L"DescriptorIndices";
  DAT_14caa0ef2 = FUN_140850cc5();
  FUN_140fb78d0();
  _DAT_14caa0ed0 = &DAT_14ca9eec8;
  _DAT_14caa0ee0 = &LAB_14682652b;
  _DAT_14caa0ee8 = 0x1000000e6;
  _DAT_14caa0ef0 = 0;
  _DAT_14caa0ed8 = DAT_14caa07e0;
  DAT_14caa07e0 = &DAT_14caa0ec8;
  return;
}



// FUNCTION 145f82c68 FUN_145f82c68 body=225 status=ok
// SIG undefined FUN_145f82c68(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f82c68(void)

{
  _DAT_14caa0f28 = L"OutputData";
  DAT_14caa0f52 = FUN_140850cc5();
  FUN_140fb78d0();
  _DAT_14caa0f30 = &DAT_14ca9eec8;
  _DAT_14caa0f40 = &LAB_14682652b;
  _DAT_14caa0f48 = 0x1000000ee;
  _DAT_14caa0f50 = 0;
  _DAT_14caa0f38 = DAT_14caa07e0;
  DAT_14caa07e0 = &DAT_14caa0f28;
  _DAT_14caa0ef8 = L"DescriptorEntries";
  DAT_14caa0f22 = FUN_140850cc5();
  FUN_140fb78d0();
  _DAT_14caa0f00 = &DAT_14ca9eec8;
  _DAT_14caa0f10 = &LAB_14682652b;
  _DAT_14caa0f18 = 0x1000000ea;
  _DAT_14caa0f20 = 0;
  _DAT_14caa0f08 = DAT_14caa07e0;
  DAT_14caa07e0 = &DAT_14caa0ef8;
  return;
}



// FUNCTION 145f82d4a FUN_145f82d4a body=126 status=ok
// SIG undefined FUN_145f82d4a(void)

void FUN_145f82d4a(longlong param_1)

{
  undefined8 *puVar1;
  
  FUN_145f82dc8(*(undefined8 *)(param_1 + 0xa0));
  FUN_145f82e0a();
  FUN_145f82e82();
  if (DAT_14ca444f0 != 0) {
    FUN_145f82ee8();
    DAT_14ca444f0 = 0;
  }
  if (DAT_14ca964f8 != (undefined8 *)0x0) {
    (**(code **)*DAT_14ca964f8)(DAT_14ca964f8,1);
  }
  DAT_14ca964f8 = (undefined8 *)0x0;
  puVar1 = (undefined8 *)FUN_141508108();
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_145f82ddd();
  FUN_145f82e3c();
  return;
}



// FUNCTION 145f82dc8 FUN_145f82dc8 body=21 status=ok
// SIG undefined FUN_145f82dc8(void)

void FUN_145f82dc8(longlong param_1)

{
  if (param_1 != 0) {
    FUN_14480f766(&DAT_14ca965b0,param_1);
    return;
  }
  return;
}



// FUNCTION 145f82ddd FUN_145f82ddd body=44 status=ok
// SIG undefined FUN_145f82ddd(void)

void FUN_145f82ddd(void)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_14c9f3d18;
  if (DAT_14c9f3d18 != (undefined8 *)0x0) {
    DAT_14c9f3d18 = (undefined8 *)0x0;
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145f82e06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 145f82e0a FUN_145f82e0a body=50 status=ok
// SIG undefined FUN_145f82e0a(void)

void FUN_145f82e0a(void)

{
  longlong lVar1;
  
  lVar1 = DAT_14ca712d8;
  if (DAT_14ca712d8 != 0) {
    FUN_1415a3a5e(DAT_14ca712d8);
    FUN_1400020a8(lVar1);
    DAT_14ca712d8 = 0;
  }
  return;
}



// FUNCTION 145f82e3c FUN_145f82e3c body=69 status=ok
// SIG undefined FUN_145f82e3c(void)

void FUN_145f82e3c(void)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  lVar3 = 0;
  do {
    puVar2 = *(undefined8 **)((longlong)&DAT_14ca45d20 + lVar3);
    if (puVar2 != (undefined8 *)0x0) {
      *(undefined8 *)((longlong)&DAT_14ca45d20 + lVar3) = 0;
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    lVar3 = lVar3 + 0x10;
  } while (lVar3 != 0x40);
  return;
}



// FUNCTION 145f82e82 FUN_145f82e82 body=102 status=ok
// SIG undefined FUN_145f82e82(void)

void FUN_145f82e82(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca444f8) {
    FUN_144b3d300(&DAT_14ca444f8);
    if (DAT_14ca444f8 == -1) {
      DAT_14ca444f0 = 0;
      atexit(FUN_142fb4987);
      _Init_thread_footer(&DAT_14ca444f8);
      return;
    }
  }
  return;
}



// FUNCTION 145f82ee8 FUN_145f82ee8 body=120 status=ok
// SIG undefined FUN_145f82ee8(void)

void FUN_145f82ee8(LPCRITICAL_SECTION param_1)

{
  if (param_1[2].LockSemaphore != (HANDLE)0x0) {
    FUN_14480f766(&DAT_14c867c10);
  }
  *(undefined4 *)&param_1[4].LockSemaphore = 0;
  if (param_1[4].OwningThread != (HANDLE)0x0) {
    FUN_1400020a8();
  }
  FUN_1415a3866(&param_1[2].SpinCount);
  FUN_144760e21(param_1[2].DebugInfo,param_1[2].LockCount);
  if (param_1[2].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection(param_1 + 1);
  DeleteCriticalSection(param_1);
  return;
}



// FUNCTION 145f82f60 FUN_145f82f60 body=38 status=ok
// SIG undefined FUN_145f82f60(void)

undefined8 FUN_145f82f60(undefined8 param_1,int param_2)

{
  FUN_1415a3d30();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145f82f86 FUN_145f82f86 body=40 status=ok
// SIG undefined FUN_145f82f86(void)

undefined8 FUN_145f82f86(undefined8 param_1,int param_2)

{
  FUN_145f82fae();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145f82fae FUN_145f82fae body=180 status=ok
// SIG undefined FUN_145f82fae(void)

void FUN_145f82fae(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a6ed9b0;
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145f83062 FUN_145f83062 body=159 status=ok
// SIG undefined FUN_145f83062(void)

void FUN_145f83062(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  
  if ((*(longlong *)(param_1 + 0x68) != 0) &&
     ((*(uint *)(*(longlong *)(param_1 + 0x68) + 8) >> 0x1e & 1) == 0)) {
    FUN_145f83102();
    lVar2 = *(longlong *)(param_1 + 0x68);
    FUN_144757f48(lVar2,0x40000000);
    uVar1 = *(uint *)(lVar2 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    do {
      uVar1 = *(uint *)(lVar2 + 8);
      if ((uVar1 >> 0x15 & 1) != 0) break;
      LOCK();
      bVar3 = uVar1 == *(uint *)(lVar2 + 8);
      if (bVar3) {
        *(uint *)(lVar2 + 8) = uVar1 | 0x200000;
      }
      UNLOCK();
    } while (!bVar3);
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  FUN_140cefc70(param_1,param_2,param_3);
  return;
}



// FUNCTION 145f83102 FUN_145f83102 body=9 status=ok
// SIG undefined FUN_145f83102(void)

void FUN_145f83102(longlong param_1)

{
  FUN_145f8310c(*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 145f8310c FUN_145f8310c body=272 status=ok
// SIG undefined FUN_145f8310c(void)

ulonglong FUN_145f8310c(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  
  uVar6 = *(int *)(param_1 + 0x138) - *(int *)(param_1 + 0x13c);
  uVar3 = (ulonglong)uVar6;
  if (uVar6 != 0) {
    do {
      FUN_146f080a6(param_1,2);
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  uVar3 = (ulonglong)*(int *)(param_1 + 0x110);
  if (uVar3 != 0) {
    plVar5 = *(longlong **)(param_1 + 0x108);
    plVar1 = plVar5 + uVar3;
    do {
      lVar4 = *plVar5;
      if ((lVar4 != 0) &&
         (uVar3 = (ulonglong)*(uint *)(lVar4 + 8), (*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0)) {
        FUN_144757f48(lVar4,0x40000000);
        uVar6 = *(uint *)(lVar4 + 0xc);
        if ((int)uVar6 < DAT_14c9647dc) {
          lVar4 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
        }
        else {
          lVar4 = 0;
        }
        do {
          uVar6 = *(uint *)(lVar4 + 8);
          uVar3 = (ulonglong)uVar6;
          if ((uVar6 >> 0x15 & 1) != 0) break;
          LOCK();
          uVar2 = *(uint *)(lVar4 + 8);
          if (uVar6 == uVar2) {
            *(uint *)(lVar4 + 8) = uVar6 | 0x200000;
          }
          else {
            uVar3 = (ulonglong)uVar2;
          }
          UNLOCK();
        } while (uVar6 != uVar2);
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar1);
  }
  *(undefined4 *)(param_1 + 0x110) = 0;
  if (*(int *)(param_1 + 0x114) < 0) {
    uVar3 = FUN_146f10028(param_1 + 0x108);
  }
  if (*(int *)(param_1 + 0x124) < 0) {
    *(undefined4 *)(param_1 + 0x120) = 0;
    uVar3 = FUN_146f10058(param_1 + 0x118);
    return uVar3;
  }
  *(undefined4 *)(param_1 + 0x120) = 0;
  return uVar3;
}



// FUNCTION 145f83228 FUN_145f83228 body=208 status=ok
// SIG undefined FUN_145f83228(void)

undefined8 * FUN_145f83228(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140312256();
  *param_1 = &PTR_FUN_14abc24b0;
  param_1[0x72] = 0;
  FUN_1446f470e(&local_20,L"SceneComp",1);
  uVar1 = FUN_144a799b0();
  local_30 = 0;
  local_38 = 1;
  lVar2 = FUN_14048696c(param_1,local_20,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar2);
  }
  param_1[0x39] = lVar2;
  *(undefined1 *)(lVar2 + 0x1fb) = 0;
  FUN_1405bab3a(param_1,1);
  FUN_1403121a6(param_1,0);
  *(byte *)((longlong)param_1 + 0x61) = *(byte *)((longlong)param_1 + 0x61) & 0xf7;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f83302 FUN_145f83302 body=212 status=ok
// SIG undefined FUN_145f83302(void)

undefined8 * FUN_145f83302(undefined8 *param_1)

{
  FUN_1412202b0();
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = &PTR_LAB_14af10080;
  param_1[0x1d] = &LAB_14850c1c4;
  param_1[0x18] = &LAB_147dfa654;
  *(undefined4 *)(param_1 + 0x2a) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x154) = 0;
  memset(param_1 + 0x2b,0,0x100);
  *(undefined4 *)(param_1 + 0x45) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0xffffffff;
  *param_1 = &PTR_FUN_14af08c10;
  param_1[6] = &PTR_LAB_14af08ee0;
  param_1[0x4e] = &PTR_LAB_14af08f20;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x27c) = 1;
  return param_1;
}



// FUNCTION 145f833d6 FUN_145f833d6 body=33 status=ok
// SIG undefined FUN_145f833d6(void)

void FUN_145f833d6(longlong param_1)

{
  FUN_145f833f8(param_1 + 0x340);
  FUN_140df7966(param_1);
  return;
}



// FUNCTION 145f833f8 FUN_145f833f8 body=67 status=ok
// SIG undefined FUN_145f833f8(void)

void FUN_145f833f8(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145f8343c(param_1);
    FUN_145d2b9ac(param_1,0);
    return;
  }
  FUN_145d2b9ac(param_1,0);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_146554f5c(param_1);
  return;
}



// FUNCTION 145f8343c FUN_145f8343c body=339 status=ok
// SIG undefined FUN_145f8343c(void)

void FUN_145f8343c(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x5c + (longlong)iVar4 * 0x60) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145f83590 FUN_145f83590 body=69 status=ok
// SIG undefined FUN_145f83590(void)

ulonglong FUN_145f83590(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 unaff_RDI;
  ulonglong uVar2;
  
  if (*param_2 == 0) {
    lVar1 = FUN_145f835d5();
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar1 != 0);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *param_2 = lVar1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 145f835d5 FUN_145f835d5 body=150 status=ok
// SIG undefined FUN_145f835d5(void)

undefined8 FUN_145f835d5(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_14590a2a0();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f8366c FUN_145f8366c body=37 status=ok
// SIG undefined FUN_145f8366c(void)

void FUN_145f8366c(longlong param_1,longlong *param_2)

{
  (**(code **)(param_1 + 0x10))((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x000145f8368d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



// FUNCTION 145f836a4 FUN_145f836a4 body=484 status=ok
// SIG undefined FUN_145f836a4(void)

void FUN_145f836a4(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14131d034(param_1,&local_38,param_2);
  FUN_145f8388a(param_1,&local_48);
  if ((local_48 == 0) || (plVar2 = *(longlong **)(local_48 + 0x38), plVar2 == (longlong *)0x0))
  goto LAB_145f837fa;
  if (*(int *)(local_38 + 0x18) == *(int *)(local_38 + 0x44)) {
LAB_145f8383b:
    lVar4 = 0;
  }
  else {
    lVar4 = local_38 + 0x48;
    if (*(longlong *)(local_38 + 0x50) != 0) {
      lVar4 = *(longlong *)(local_38 + 0x50);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(local_38 + 0x58) - 1U & *(uint *)(local_48 + 0x30)) * 4);
    if (iVar5 == -1) goto LAB_145f8383b;
    do {
      lVar4 = *(longlong *)(local_38 + 0x10) + (longlong)iVar5 * 0x10;
      if (*(uint *)(*(longlong *)(local_38 + 0x10) + (longlong)iVar5 * 0x10) ==
          *(uint *)(local_48 + 0x30)) break;
      iVar5 = *(int *)(lVar4 + 8);
      lVar4 = 0;
    } while (iVar5 != -1);
  }
  if (*(int *)(lVar4 + 4) == 2) {
    if (*(longlong *)(local_38 + 0x108) == 0) {
      uVar3 = (**(code **)(*plVar2 + 0x138))(plVar2);
      FUN_145f83a32(uVar3,&local_50,param_1,FUN_14162a714);
      *(undefined8 *)(local_38 + 0x108) = local_50;
    }
    if (*(longlong *)(local_38 + 0x110) == 0) {
      uVar3 = (**(code **)(*plVar2 + 0x140))(plVar2);
      FUN_145f83a32(uVar3,&local_50,param_1,FUN_14162aa44);
      *(undefined8 *)(local_38 + 0x110) = local_50;
    }
    if (*(longlong *)(local_38 + 0x118) == 0) {
      uVar3 = (**(code **)(*plVar2 + 0x150))(plVar2);
      FUN_145f83b28(uVar3,&local_50,param_1);
      *(undefined8 *)(local_38 + 0x118) = local_50;
    }
  }
LAB_145f837fa:
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_40 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_30 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145f8388a FUN_145f8388a body=423 status=ok
// SIG undefined FUN_145f8388a(void)

undefined8 * FUN_145f8388a(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined1 auStack_88 [40];
  longlong *local_60;
  longlong *local_58;
  undefined **local_50;
  longlong *local_48;
  longlong *plStack_40;
  byte local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = FUN_1400b465c();
  if ((lVar4 == 0) || (plVar5 = (longlong *)FUN_14119d4d6(), plVar5 == (longlong *)0x0)) {
    local_48 = (longlong *)0x0;
    plStack_40 = (longlong *)0x0;
    local_38 = 0;
    local_50 = &PTR_FUN_14a5af930;
    local_30 = 0;
    uStack_28 = 0;
    uVar6 = 0;
  }
  else {
    (**(code **)(*plVar5 + 0x350))(plVar5,&local_50);
    uVar6 = (ulonglong)local_38;
  }
  if ((&DAT_149fc1b6e)[uVar6] == '\x01') {
    if ((local_48 != (longlong *)0x0) && (cVar3 = (**(code **)(*local_48 + 0x28))(), cVar3 != '\0'))
    {
LAB_145f83911:
      if ((&DAT_149fc1b6e)[local_38] == '\x01') {
        local_60 = local_48;
        if (plStack_40 == (longlong *)0x0) {
          plVar5 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
          UNLOCK();
          plVar5 = plStack_40;
        }
      }
      else {
        plVar5 = (longlong *)0x0;
        local_60 = (longlong *)0x0;
      }
      local_58 = plVar5;
      FUN_140b647ca(param_1,param_2);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      goto LAB_145f8395b;
    }
  }
  else if (((ulonglong)local_48 & 0xffffff) != 0) goto LAB_145f83911;
  *param_2 = 0;
  param_2[1] = 0;
LAB_145f8395b:
  local_50 = &PTR_FUN_14a5af930;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  local_50 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_38])(&local_48);
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145f83a32 FUN_145f83a32 body=244 status=ok
// SIG undefined FUN_145f83a32(void)

undefined8
FUN_145f83a32(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar1 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_149e62de0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_40[2] = lVar3;
  *local_40 = &PTR_FUN_14b4f6990;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_3);
  puVar1[4] = param_4;
  FUN_1458c6c8c(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f83b28 FUN_145f83b28 body=244 status=ok
// SIG undefined FUN_145f83b28(void)

undefined8 FUN_145f83b28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_14b4f6a70;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14b4f6a00;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_148aabca8;
  FUN_145f83c1e(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f83c1e FUN_145f83c1e body=216 status=ok
// SIG undefined FUN_145f83c1e(void)

undefined8 * FUN_145f83c1e(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f83d04 FUN_145f83d04 body=24 status=ok
// SIG undefined FUN_145f83d04(void)

bool FUN_145f83d04(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145f83d1c FUN_145f83d1c body=292 status=ok
// SIG undefined FUN_145f83d1c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f83d1c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c5c00) {
    FUN_144b3d300(&DAT_14c9c5c00);
    if (DAT_14c9c5c00 == -1) {
      FUN_145f83f8a();
      FUN_145f83e40();
      FUN_140db5666(&DAT_14c9c5b58,0,&DAT_14c9c5af0,L"FComputeDistanceFieldNormalCS",
                    L"/Engine/Private/DistanceFieldScreenGridLighting.usf",
                    L"ComputeDistanceFieldNormalCS",5,1,FUN_14714e804,FUN_14714e7a4,FUN_1462bdb44,
                    &LAB_14714e7a0,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9c7fd0);
      _DAT_14c9c5b58 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142bcedd9);
      _Init_thread_footer(&DAT_14c9c5c00);
    }
  }
  return &DAT_14c9c5b58;
}



// FUNCTION 145f83e40 FUN_145f83e40 body=205 status=ok
// SIG undefined FUN_145f83e40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f83e40(void)

{
  if ((DAT_14c9c5b57 & 2) == 0) {
    DAT_14c9c5b57 = DAT_14c9c5b57 | 2;
    _DAT_14c9c5af8 = L"FComputeDistanceFieldNormalCS";
    _DAT_14c9c5b10 = FUN_146826540;
    _DAT_14c9c5b18 = FUN_146825d77;
    _DAT_14c9c5b20 = FUN_146825fd6;
    _DAT_14c9c5b28 = FUN_1407e02ea;
    _DAT_14c9c5b30 = FUN_146826273;
    _DAT_14c9c5b08 = FUN_14714e772;
    _DAT_14c9c5b48 = 0xffffffff000000e0;
    _DAT_14c9c5b50 = 8;
    DAT_14c9c5b54 = 0;
    _DAT_14c9c5b38 = &LAB_14714e79c;
    FUN_145f83f0e();
    FUN_1407e00cc(&DAT_14c9c5af0);
    return;
  }
  return;
}



// FUNCTION 145f83f0e FUN_145f83f0e body=123 status=ok
// SIG undefined FUN_145f83f0e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f83f0e(void)

{
  _DAT_14c9c93c0 = L"BASE";
  DAT_14c9c93ea = 4;
  _DAT_14c9c93c8 = FUN_140b35ae4();
  _DAT_14c9c93d0 = DAT_14c9c5b00;
  _DAT_14c9c93d8 = &LAB_14682652b;
  DAT_14c9c5b00 = &DAT_14c9c93c0;
  DAT_14c9c5b55 = DAT_14c9c5b55 + '\x01';
  _DAT_14c9c93e0 = 0x100000000;
  if (*(char *)(_DAT_14c9c93c8 + 100) != '\0') {
    DAT_14c9c5b56 = DAT_14c9c5b56 + '\x01';
  }
  return;
}



// FUNCTION 145f83f8a FUN_145f83f8a body=261 status=ok
// SIG undefined FUN_145f83f8a(void)

void FUN_145f83f8a(void)

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
              0x110) < DAT_14c9c8050) {
    FUN_144b3d300(&DAT_14c9c8050);
    if (DAT_14c9c8050 == -1) {
      FUN_145f84090(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x60;
      local_58 = 0x16e;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c7fd0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142be7622);
      _Init_thread_footer(&DAT_14c9c8050);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f84090 FUN_145f84090 body=226 status=ok
// SIG undefined FUN_145f84090(void)

longlong * FUN_145f84090(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462be578;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f84174 FUN_145f84174 body=144 status=ok
// SIG undefined FUN_145f84174(void)

code * FUN_145f84174(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1000000170;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462be600;
}



// FUNCTION 145f84204 FUN_145f84204 body=144 status=ok
// SIG undefined FUN_145f84204(void)

code * FUN_145f84204(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x2000000171;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145f84174;
}



// FUNCTION 145f84294 FUN_145f84294 body=144 status=ok
// SIG undefined FUN_145f84294(void)

code * FUN_145f84294(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145aa7ee0();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"AOParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FAOParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x3000000172;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145f84204;
}



// FUNCTION 145f84324 FUN_145f84324 body=292 status=ok
// SIG undefined FUN_145f84324(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f84324(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca03648) {
    FUN_144b3d300(&DAT_14ca03648);
    if (DAT_14ca03648 == -1) {
      FUN_145f84592();
      FUN_145f84448();
      FUN_140db5666(&DAT_14ca035a0,0,&DAT_14ca03538,L"FVisualizeLumenSceneCursorDataCS",
                    L"/Engine/Private/Lumen/LumenVisualize.usf",L"VisualizeCursorDataCS",5,1,
                    FUN_147222b02,FUN_147222aa2,&LAB_1462e741a,&LAB_147222a9e,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca06918);
      _DAT_14ca035a0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142dc2685);
      _Init_thread_footer(&DAT_14ca03648);
    }
  }
  return &DAT_14ca035a0;
}



// FUNCTION 145f84448 FUN_145f84448 body=205 status=ok
// SIG undefined FUN_145f84448(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f84448(void)

{
  if ((DAT_14ca0359f & 2) == 0) {
    DAT_14ca0359f = DAT_14ca0359f | 2;
    _DAT_14ca03540 = L"FVisualizeLumenSceneCursorDataCS";
    _DAT_14ca03558 = FUN_146826540;
    _DAT_14ca03560 = FUN_146825d77;
    _DAT_14ca03568 = FUN_146825fd6;
    _DAT_14ca03570 = FUN_1407e02ea;
    _DAT_14ca03578 = FUN_146826273;
    _DAT_14ca03550 = FUN_147222a70;
    _DAT_14ca03590 = 0xffffffff000000e0;
    _DAT_14ca03598 = 8;
    DAT_14ca0359c = 0;
    _DAT_14ca03580 = &LAB_147222a9a;
    FUN_145f84516();
    FUN_1407e00cc(&DAT_14ca03538);
    return;
  }
  return;
}



// FUNCTION 145f84516 FUN_145f84516 body=123 status=ok
// SIG undefined FUN_145f84516(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f84516(void)

{
  _DAT_14ca07e20 = L"BASE";
  DAT_14ca07e4a = 4;
  _DAT_14ca07e28 = FUN_140b35ae4();
  _DAT_14ca07e30 = DAT_14ca03548;
  _DAT_14ca07e38 = &LAB_14682652b;
  DAT_14ca03548 = &DAT_14ca07e20;
  DAT_14ca0359d = DAT_14ca0359d + '\x01';
  _DAT_14ca07e40 = 0x100000000;
  if (*(char *)(_DAT_14ca07e28 + 100) != '\0') {
    DAT_14ca0359e = DAT_14ca0359e + '\x01';
  }
  return;
}



// FUNCTION 145f84592 FUN_145f84592 body=261 status=ok
// SIG undefined FUN_145f84592(void)

void FUN_145f84592(void)

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
              0x110) < DAT_14ca06998) {
    FUN_144b3d300(&DAT_14ca06998);
    if (DAT_14ca06998 == -1) {
      FUN_145f84698(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x200;
      local_58 = 0x17e;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca06918,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142dd3a8b);
      _Init_thread_footer(&DAT_14ca06998);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f84698 FUN_145f84698 body=226 status=ok
// SIG undefined FUN_145f84698(void)

longlong * FUN_145f84698(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462ea3a8;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f8477c FUN_145f8477c body=142 status=ok
// SIG undefined FUN_145f8477c(void)

code * FUN_145f8477c(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x2000000180;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462ea430;
}



// FUNCTION 145f8480a FUN_145f8480a body=144 status=ok
// SIG undefined FUN_145f8480a(void)

code * FUN_145f8480a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar4) = L"ShaderPrintUniformBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"ShaderPrint::FShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1d000000183;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14722cc60;
}



// FUNCTION 145f8489a FUN_145f8489a body=146 status=ok
// SIG undefined FUN_145f8489a(void)

code * FUN_145f8489a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145ddabea();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VisualizeParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FLumenVisualizeSceneSoftwareRayTracingParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x12000000181;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca06780;
  return FUN_145f8477c;
}



// FUNCTION 145f8492c FUN_145f8492c body=290 status=ok
// SIG undefined FUN_145f8492c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f8492c(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca3e3e8) {
    FUN_144b3d300(&DAT_14ca3e3e8);
    if (DAT_14ca3e3e8 == -1) {
      uVar1 = FUN_145f84b98();
      FUN_145f84a4e();
      FUN_140db5666(&DAT_14ca3e340,0,&DAT_14ca3e2d8,L"FRayTracingPrimaryRaysRGS",
                    L"/Engine/Private/RayTracing/RayTracingPrimaryRays.usf",
                    L"RayTracingPrimaryRaysRGS",6,2,FUN_1472bb3fe,FUN_1472bb3ba,&LAB_146300e8a,
                    &LAB_1472bb3b6,&LAB_1472bb3b0,&LAB_1472bb390,0xe0,uVar1);
      _DAT_14ca3e340 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f6bf03);
      _Init_thread_footer(&DAT_14ca3e3e8);
    }
  }
  return &DAT_14ca3e340;
}



// FUNCTION 145f84a4e FUN_145f84a4e body=206 status=ok
// SIG undefined FUN_145f84a4e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f84a4e(void)

{
  if ((DAT_14ca3e33f & 2) == 0) {
    DAT_14ca3e33f = DAT_14ca3e33f | 2;
    _DAT_14ca3e2e0 = L"FRayTracingPrimaryRaysRGS";
    _DAT_14ca3e2f8 = FUN_146826540;
    _DAT_14ca3e300 = FUN_146825d77;
    _DAT_14ca3e308 = FUN_146825fd6;
    _DAT_14ca3e310 = FUN_1407e02ea;
    _DAT_14ca3e318 = FUN_146826273;
    _DAT_14ca3e2f0 = FUN_1472bb362;
    _DAT_14ca3e330 = 0xffffffff000000e0;
    _DAT_14ca3e338 = 8;
    DAT_14ca3e33c = 0;
    _DAT_14ca3e320 = &LAB_1472bb38c;
    FUN_145f84b1c();
    FUN_1407e00cc(&DAT_14ca3e2d8);
  }
  return &DAT_14ca3e2d8;
}



// FUNCTION 145f84b1c FUN_145f84b1c body=123 status=ok
// SIG undefined FUN_145f84b1c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f84b1c(void)

{
  _DAT_14ca40810 = L"BASE";
  DAT_14ca4083a = 4;
  _DAT_14ca40818 = FUN_140b35ae4();
  _DAT_14ca40820 = DAT_14ca3e2e8;
  _DAT_14ca40828 = &LAB_14682652b;
  DAT_14ca3e2e8 = &DAT_14ca40810;
  DAT_14ca3e33d = DAT_14ca3e33d + '\x01';
  _DAT_14ca40830 = 0x100000000;
  if (*(char *)(_DAT_14ca40818 + 100) != '\0') {
    DAT_14ca3e33e = DAT_14ca3e33e + '\x01';
  }
  return;
}



// FUNCTION 145f84b98 FUN_145f84b98 body=268 status=ok
// SIG undefined FUN_145f84b98(void)

undefined * FUN_145f84b98(void)

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
              0x110) < DAT_14ca3f3d8) {
    FUN_144b3d300(&DAT_14ca3f3d8);
    if (DAT_14ca3f3d8 == -1) {
      FUN_1415a4156(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x110;
      local_58 = 0x1f;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca3f358,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f6fd66);
      _Init_thread_footer(&DAT_14ca3f3d8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca3f358;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f84ca6 FUN_145f84ca6 body=138 status=ok
// SIG undefined FUN_145f84ca6(void)

code * FUN_145f84ca6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000026;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472bf720;
}



// FUNCTION 145f84d30 FUN_145f84d30 body=144 status=ok
// SIG undefined FUN_145f84d30(void)

code * FUN_145f84d30(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x6000000033;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_146302852;
}



// FUNCTION 145f84dc0 FUN_145f84dc0 body=144 status=ok
// SIG undefined FUN_145f84dc0(void)

code * FUN_145f84dc0(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x4000000031;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1472bf2d0;
}



// FUNCTION 145f84e50 FUN_145f84e50 body=25 status=ok
// SIG undefined FUN_145f84e50(void)

undefined8 FUN_145f84e50(undefined8 param_1,undefined8 param_2)

{
  FUN_145f84e6a(param_2);
  return param_2;
}



// FUNCTION 145f84e6a FUN_145f84e6a body=422 status=ok
// SIG undefined FUN_145f84e6a(void)

longlong * FUN_145f84e6a(longlong *param_1)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14cb8dcc8 != (longlong *)0x0 && DAT_14cb8dcd0 != 0) &&
     (cVar2 = (**(code **)(*DAT_14cb8dcc8 + 0x30))(), cVar2 != '\0')) {
    plVar4 = DAT_14cb8dcc8;
    if (DAT_14cb8dcd0 == 0) {
      plVar4 = (longlong *)0x0;
    }
    (**(code **)(*plVar4 + 0x58))(plVar4,&local_38);
    goto LAB_145f84f3b;
  }
  lVar3 = FUN_14001cc68(0x2410,0x10);
  FUN_145f85012(lVar3);
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b434200;
  plVar4[2] = lVar3;
  local_30 = plVar4;
  if (lVar3 == 0) {
    local_38 = 0;
    goto LAB_145f84f3b;
  }
  local_38 = lVar3;
  if (((*(longlong *)(lVar3 + 0x10) != 0) && (*(longlong *)(lVar3 + 0x18) != 0)) &&
     (0 < *(int *)(*(longlong *)(lVar3 + 0x18) + 8))) goto LAB_145f84f3b;
  if (plVar4 == (longlong *)0x0) {
    *(longlong *)(lVar3 + 0x10) = lVar3;
    plVar5 = *(longlong **)(lVar3 + 0x18);
    if (plVar5 != (longlong *)0x0) {
LAB_145f84fb6:
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
      *(longlong **)(lVar3 + 0x18) = plVar4;
      if (plVar4 != (longlong *)0x0) goto LAB_145f84f31;
    }
    local_30 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong *)(lVar3 + 0x10) = lVar3;
    if (*(longlong **)(lVar3 + 0x18) != plVar4) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
      plVar5 = *(longlong **)(lVar3 + 0x18);
      if (plVar5 != (longlong *)0x0) goto LAB_145f84fb6;
      *(longlong **)(lVar3 + 0x18) = plVar4;
    }
LAB_145f84f31:
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
LAB_145f84f3b:
  *param_1 = local_38;
  param_1[1] = (longlong)local_30;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145f85012 FUN_145f85012 body=323 status=ok
// SIG undefined FUN_145f85012(void)

undefined8 * FUN_145f85012(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14b433fe0;
  param_1[4] = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 5) = 0;
  FUN_1405bceb4(param_1 + 4);
  FUN_1412cbb62(param_1 + 6);
  *param_1 = &PTR_FUN_14b433870;
  param_1[4] = &PTR_FUN_14b433890;
  param_1[6] = &PTR_FUN_14b4338b0;
  param_1[0x30c] = 0;
  param_1[0x30d] = 0x10000000000;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0x312] = 0;
  param_1[0x313] = 0x10000000000;
  param_1[0x314] = 0xffffffff;
  param_1[0x355] = 0;
  *(undefined4 *)(param_1 + 0x356) = 0;
  param_1[0x357] = 0x42a0000000000000;
  param_1[0x358] = 0;
  param_1[0x35d] = 0;
  param_1[0x35e] = 0x400000000;
  param_1[0x363] = 0;
  param_1[0x364] = 0x400000000;
  param_1[0x371] = 0;
  param_1[0x372] = 0x400000000;
  param_1[0x374] = 0;
  param_1[0x375] = 0x2000000000;
  param_1[0x376] = 0xffffffff;
  param_1[0x378] = 0;
  *(undefined4 *)(param_1 + 0x379) = 0;
  param_1[0x47a] = 0;
  param_1[0x47b] = 0x10000000000;
  param_1[0x480] = 0;
  param_1[0x481] = 0x400000000;
  return param_1;
}



// FUNCTION 145f85156 FUN_145f85156 body=226 status=ok
// SIG undefined FUN_145f85156(void)

longlong * FUN_145f85156(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462c1950;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f8523a FUN_145f8523a body=144 status=ok
// SIG undefined FUN_145f8523a(void)

code * FUN_145f8523a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1413d6116();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"InstanceCullingDrawParams";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FInstanceCullingDrawParams";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x200000001a;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462c19d8;
}



// FUNCTION 145f852ca FUN_145f852ca body=144 status=ok
// SIG undefined FUN_145f852ca(void)

code * FUN_145f852ca(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1448e53bc();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ForegroundClip";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FForegroundClipUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x800000001b;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145f8523a;
}



// FUNCTION 145f8535a FUN_145f8535a body=146 status=ok
// SIG undefined FUN_145f8535a(void)

code * FUN_145f8535a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1448e5570();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DigistructDepthParamsUB";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FDigistructDepthUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x900000001c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9c5660;
  return FUN_145f852ca;
}



// FUNCTION 145f853ec FUN_145f853ec body=226 status=ok
// SIG undefined FUN_145f853ec(void)

longlong * FUN_145f853ec(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1463093be;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f854d0 FUN_145f854d0 body=138 status=ok
// SIG undefined FUN_145f854d0(void)

undefined1 * FUN_145f854d0(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x412;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_1473003ac;
}



// FUNCTION 145f8555a FUN_145f8555a body=144 status=ok
// SIG undefined FUN_145f8555a(void)

code * FUN_145f8555a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145f8567c();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MobilePassUniformBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FMobileShadowDepthPassUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000413;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca4e678;
  return FUN_145f854d0;
}



// FUNCTION 145f855ea FUN_145f855ea body=146 status=ok
// SIG undefined FUN_145f855ea(void)

code * FUN_145f855ea(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1403d299a();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DeferredPassUniformBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FShadowDepthPassUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000414;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca4e5e0;
  return FUN_145f8555a;
}



// FUNCTION 145f8567c FUN_145f8567c body=289 status=ok
// SIG undefined FUN_145f8567c(void)

undefined * FUN_145f8567c(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  wchar_t *local_68;
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
  FUN_144a71728();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4e6f8) {
    FUN_144b3d300(&DAT_14ca4e6f8);
    if (DAT_14ca4e6f8 == -1) {
      FUN_145f8579e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = L"SceneTextures";
      local_70 = L"MobileShadowDepthPass";
      local_78 = L"FMobileShadowDepthPassUniformParameters";
      local_38 = 0;
      local_50 = 0x300;
      local_58 = 0x107;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca4e678,1,2);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143042b15);
      _Init_thread_footer(&DAT_14ca4e6f8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca4e678;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f8579e FUN_145f8579e body=226 status=ok
// SIG undefined FUN_145f8579e(void)

longlong * FUN_145f8579e(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_146308796;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f85886 FUN_145f85886 body=136 status=ok
// SIG undefined FUN_145f85886(void)

code * FUN_145f85886(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ProjectionMatrix";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xe000000109;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f8590e;
}



// FUNCTION 145f8590e FUN_145f8590e body=138 status=ok
// SIG undefined FUN_145f8590e(void)

undefined1 * FUN_145f8590e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a890ae();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"SceneTextures";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FMobileSceneTextureUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x108;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145f85882;
}



// FUNCTION 145f859a4 FUN_145f859a4 body=152 status=ok
// SIG undefined FUN_145f859a4(void)

undefined8 * FUN_145f859a4(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a6505a0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeae80) {
    FUN_144b3d300(&DAT_14caeae80);
    if (DAT_14caeae80 == -1) {
      FUN_1415a433e();
      atexit(FUN_14356d9db);
      _Init_thread_footer(&DAT_14caeae80);
    }
  }
  return param_1;
}



// FUNCTION 145f85a48 FUN_145f85a48 body=152 status=ok
// SIG undefined FUN_145f85a48(void)

undefined8 * FUN_145f85a48(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a657f30;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeacd0) {
    FUN_144b3d300(&DAT_14caeacd0);
    if (DAT_14caeacd0 == -1) {
      FUN_1415a4454();
      atexit(FUN_14356d78e);
      _Init_thread_footer(&DAT_14caeacd0);
    }
  }
  return param_1;
}



// FUNCTION 145f85aec FUN_145f85aec body=152 status=ok
// SIG undefined FUN_145f85aec(void)

undefined8 * FUN_145f85aec(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a658330;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeacf8) {
    FUN_144b3d300(&DAT_14caeacf8);
    if (DAT_14caeacf8 == -1) {
      FUN_1415a456a();
      atexit(FUN_14356d7c1);
      _Init_thread_footer(&DAT_14caeacf8);
    }
  }
  return param_1;
}



// FUNCTION 145f85b90 FUN_145f85b90 body=152 status=ok
// SIG undefined FUN_145f85b90(void)

undefined8 * FUN_145f85b90(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a658730;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caead20) {
    FUN_144b3d300(&DAT_14caead20);
    if (DAT_14caead20 == -1) {
      FUN_1415a4680();
      atexit(FUN_14356d7f4);
      _Init_thread_footer(&DAT_14caead20);
    }
  }
  return param_1;
}



// FUNCTION 145f85c34 FUN_145f85c34 body=152 status=ok
// SIG undefined FUN_145f85c34(void)

undefined8 * FUN_145f85c34(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a676b30;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeb2e0) {
    FUN_144b3d300(&DAT_14caeb2e0);
    if (DAT_14caeb2e0 == -1) {
      FUN_1415a4796();
      atexit(FUN_14356df3c);
      _Init_thread_footer(&DAT_14caeb2e0);
    }
  }
  return param_1;
}



// FUNCTION 145f85ccc FUN_145f85ccc body=82 status=ok
// SIG undefined FUN_145f85ccc(void)

void FUN_145f85ccc(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_14480f766(&DAT_14cb10980);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_14480f766(&DAT_14cb10920);
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  FUN_145f85d1e();
  FUN_145f85d76();
  return;
}



// FUNCTION 145f85d1e FUN_145f85d1e body=88 status=ok
// SIG undefined FUN_145f85d1e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f85d1e(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_1458fd8e2();
  lVar2 = DAT_14c9a40c0;
  _DAT_14c9a40b0 = 0;
  _DAT_14c9a40b8 = 0;
  lVar4 = (longlong)DAT_14c9a40c8;
  if (lVar4 != 0) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(lVar2 + lVar3);
      if ((char)plVar1[3] == '\x01') {
        *(undefined1 *)(plVar1 + 3) = 0;
        (**(code **)(*plVar1 + 0x20))();
      }
      lVar3 = lVar3 + 0x10;
    } while (lVar4 * 0x10 != lVar3);
  }
  return;
}



// FUNCTION 145f85d76 FUN_145f85d76 body=270 status=ok
// SIG undefined FUN_145f85d76(void)

void FUN_145f85d76(void)

{
  int iVar1;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined4 local_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58;
  int iStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14125202e();
  local_48 = 0x100000000;
  uStack_40 = &DAT_14c9a3cd0;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  uStack_30 = 0;
  if (DAT_14c9a3ce8 == 0) {
    iVar1 = 0;
  }
  else {
    FUN_1449c0562(&local_48);
    iVar1 = DAT_14c9a3ce8;
  }
  uStack_50 = CONCAT44(uStack_2c,uStack_30);
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_68 = (undefined4)local_48;
  uStack_64 = local_48._4_4_;
  uStack_60 = (undefined4)uStack_40;
  uStack_5c = uStack_40._4_4_;
  local_70 = &DAT_14c9a3cc0;
  if ((iStack_34 != iVar1) || (uStack_40 != &DAT_14c9a3cd0)) {
    do {
      *(undefined1 *)(*local_70 + 8 + (longlong)iStack_54 * 0x28) = 0;
      local_58 = local_58 & ~uStack_64;
      FUN_1449c0562(&local_68);
    } while (local_70 != &DAT_14c9a3cc0 ||
             ((undefined *)CONCAT44(uStack_5c,uStack_60) != &DAT_14c9a3cd0 || iStack_54 != iVar1));
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f85e86 FUN_145f85e86 body=3073 status=ok
// SIG undefined FUN_145f85e86(void)

void FUN_145f85e86(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined1 auStack_258 [32];
  longlong *local_238;
  undefined4 local_230;
  undefined1 local_228;
  undefined1 local_218 [8];
  undefined8 local_210;
  undefined4 local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 *local_60;
  undefined4 local_58;
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_258;
  lVar3 = (**(code **)(*param_1 + 0x180))();
  if (lVar3 != 0) {
    lVar3 = FUN_1400f6f32(lVar3);
    if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x68), lVar3 != 0)) {
      lVar4 = FUN_140bccd38(lVar3,param_2 + 0x18);
      if (lVar4 != 0) {
        lVar5 = FUN_14030d4a0();
        if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_258);
        }
      }
      local_70 = DAT_14cbc3d10;
      local_68 = DAT_14cbc3d18;
      FUN_1448075d0(&local_60);
      uVar6 = FUN_144a06846(param_4,&local_60);
      uVar7 = FUN_140b963dc(uVar6,0x3f4ccccd);
      *(undefined4 *)(param_1 + 0x20) = uVar7;
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      local_80 = DAT_14cbc3d28;
      local_78 = DAT_14cbc3d30;
      FUN_1448075d0(&local_60);
      uVar6 = FUN_144a06846(param_4,&local_60);
      uVar7 = FUN_140b963dc(uVar6,0x3f800000);
      *(undefined4 *)(param_1 + 0x21) = uVar7;
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      local_90 = DAT_14cbc3d1c;
      local_88 = DAT_14cbc3d24;
      FUN_1448075d0(&local_60);
      uVar6 = FUN_144a06846(param_4,&local_60);
      uVar7 = FUN_140b963dc(uVar6,0x3f800000);
      *(undefined4 *)((longlong)param_1 + 0x104) = uVar7;
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      local_a0 = DAT_14cbc3d34;
      local_98 = DAT_14cbc3d3c;
      FUN_1448075d0(&local_60);
      uVar6 = FUN_144a06846(param_4,&local_60);
      uVar7 = FUN_140b963dc(uVar6,0x3f800000);
      *(undefined4 *)((longlong)param_1 + 0x10c) = uVar7;
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      local_b0 = DAT_14cbc3d40;
      local_a8 = DAT_14cbc3d48;
      FUN_1448075d0(&local_60);
      uVar6 = FUN_144a06846(param_4,&local_60);
      uVar2 = FUN_1410c4486(uVar6,0);
      *(undefined1 *)(param_1 + 0x22) = uVar2;
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      local_c0 = DAT_14cbc3d4c;
      local_b8 = DAT_14cbc3d54;
      FUN_1448075d0(&local_60);
      uVar6 = FUN_144a06846(param_4,&local_60);
      uVar2 = FUN_1410c4486(uVar6,0);
      *(undefined1 *)((longlong)param_1 + 0x111) = uVar2;
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      local_d0 = DAT_14cbc3e24;
      local_c8 = DAT_14cbc3e2c;
      FUN_1448075d0(&local_60);
      uVar6 = FUN_144a06846(param_4,&local_60);
      uVar7 = FUN_140b963dc(uVar6,0x3f800000);
      *(undefined4 *)((longlong)param_1 + 0x114) = uVar7;
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      local_e0 = DAT_14cbc3d58;
      local_d8 = DAT_14cbc3d60;
      FUN_1448075d0(&local_60);
      uVar6 = FUN_144a06846(param_4,&local_60);
      uVar2 = FUN_1410451c0(uVar6,0);
      *(undefined1 *)(param_1 + 0x23) = uVar2;
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      local_f0 = DAT_14cbc3e30;
      local_e8 = DAT_14cbc3e38;
      FUN_1448075d0(&local_60);
      uVar6 = FUN_144a06846(param_4,&local_60);
      uVar2 = FUN_1410451c0(uVar6,0);
      *(undefined1 *)((longlong)param_1 + 0x119) = uVar2;
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      local_100 = DAT_14cbc3dc4;
      local_f8 = DAT_14cbc3dcc;
      FUN_1448075d0(&local_60);
      uVar6 = FUN_144a06846(param_4,&local_60);
      uVar7 = FUN_140b963dc(uVar6,0);
      *(undefined4 *)((longlong)param_1 + 0x11c) = uVar7;
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      local_110 = DAT_14cbc3dac;
      local_108 = DAT_14cbc3db4;
      FUN_1448075d0(&local_60);
      uVar6 = FUN_144a06846(param_4,&local_60);
      uVar7 = FUN_140b963dc(uVar6,0);
      *(undefined4 *)(param_1 + 0x24) = uVar7;
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      local_120 = DAT_14cbc3db8;
      local_118 = DAT_14cbc3dc0;
      FUN_1448075d0(&local_60);
      uVar6 = FUN_144a06846(param_4,&local_60);
      uVar7 = FUN_140b963dc(uVar6,0);
      *(undefined4 *)((longlong)param_1 + 0x124) = uVar7;
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      local_130 = DAT_14cbc3dd0;
      local_128 = DAT_14cbc3dd8;
      FUN_1448075d0(&local_60);
      uVar6 = FUN_144a06846(param_4,&local_60);
      uVar7 = FUN_140b963dc(uVar6,0);
      *(undefined4 *)(param_1 + 0x25) = uVar7;
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      local_140 = DAT_14cbc3ddc;
      local_138 = DAT_14cbc3de4;
      FUN_1448075d0(&local_60);
      uVar6 = FUN_144a06846(param_4,&local_60);
      uVar7 = FUN_140b963dc(uVar6,0);
      *(undefined4 *)((longlong)param_1 + 300) = uVar7;
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      local_150 = DAT_14cbc3e18;
      local_148 = DAT_14cbc3e20;
      FUN_1448075d0(&local_60);
      uVar6 = FUN_144a06846(param_4,&local_60);
      uVar7 = FUN_140b963dc(uVar6,0x3f800000);
      *(undefined4 *)(param_1 + 0x26) = uVar7;
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      local_160 = DAT_14cbc3de8;
      local_158 = DAT_14cbc3df0;
      FUN_1448075d0(&local_60);
      uVar6 = FUN_144a06846(param_4,&local_60);
      uVar7 = FUN_140b963dc(uVar6,0x3f800000);
      *(undefined4 *)((longlong)param_1 + 0x134) = uVar7;
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      local_170 = DAT_14cbc3df4;
      local_168 = DAT_14cbc3dfc;
      FUN_1448075d0(&local_60);
      uVar6 = FUN_144a06846(param_4,&local_60);
      uVar7 = FUN_140b963dc(uVar6,0);
      *(undefined4 *)(param_1 + 0x27) = uVar7;
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      local_180 = DAT_14cbc3e00;
      local_178 = DAT_14cbc3e08;
      FUN_1448075d0(&local_60);
      uVar6 = FUN_144a06846(param_4,&local_60);
      uVar7 = FUN_140b963dc(uVar6,0);
      *(undefined4 *)((longlong)param_1 + 0x13c) = uVar7;
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      local_190 = DAT_14cbc3e0c;
      local_188 = DAT_14cbc3e14;
      FUN_1448075d0(&local_60);
      uVar6 = FUN_144a06846(param_4,&local_60);
      uVar7 = FUN_140b963dc(uVar6,0);
      *(undefined4 *)(param_1 + 0x28) = uVar7;
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      local_1a0 = DAT_14cbc3d7c;
      local_198 = DAT_14cbc3d84;
      FUN_1448075d0(&local_60);
      uVar6 = FUN_144a06846(param_4,&local_60);
      uVar7 = FUN_140b963dc(uVar6,0x3f800000);
      *(undefined4 *)((longlong)param_1 + 0x144) = uVar7;
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      local_1b0 = DAT_14cbc3d88;
      local_1a8 = DAT_14cbc3d90;
      FUN_1448075d0(&local_60);
      uVar6 = FUN_144a06846(param_4,&local_60);
      uVar7 = FUN_140b963dc(uVar6,0x3f800000);
      *(undefined4 *)(param_1 + 0x29) = uVar7;
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      local_1c0 = DAT_14cbc3d94;
      local_1b8 = DAT_14cbc3d9c;
      FUN_1448075d0(&local_60);
      uVar6 = FUN_144a06846(param_4,&local_60);
      uVar7 = FUN_140b963dc(uVar6,0x3f800000);
      *(undefined4 *)((longlong)param_1 + 0x14c) = uVar7;
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      local_1d0 = DAT_14cbc3da0;
      local_1c8 = DAT_14cbc3da8;
      FUN_1448075d0(&local_60);
      uVar6 = FUN_144a06846(param_4,&local_60);
      uVar7 = FUN_140b963dc(uVar6,0);
      *(undefined4 *)(param_1 + 0x2a) = uVar7;
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      local_1e0 = DAT_14cbc3d64;
      local_1d8 = DAT_14cbc3d6c;
      FUN_1448075d0(&local_60);
      uVar6 = FUN_144a06846(param_4,&local_60);
      uVar2 = FUN_1410c4486(uVar6,0);
      *(undefined1 *)((longlong)param_1 + 0x154) = uVar2;
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      local_200 = DAT_14cbc3e3c;
      local_1f8 = DAT_14cbc3e44;
      FUN_1448075d0(&local_60);
      uVar6 = FUN_144a06846(param_4,&local_60);
      uVar6 = FUN_144a7cdd6(uVar6,0);
      FUN_1400b22c2(&local_1f0,uVar6);
      if (param_1 + 0x2b == &local_1f0) {
        if (local_1f0 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (param_1[0x2b] != 0) {
          FUN_1400020a8();
        }
        param_1[0x2b] = local_1f0;
        local_1f0 = 0;
        *(undefined4 *)(param_1 + 0x2c) = (undefined4)local_1e8;
        *(undefined4 *)((longlong)param_1 + 0x164) = local_1e8._4_4_;
        local_1e8 = 0;
      }
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      local_210 = DAT_14cbc3d70;
      local_208 = DAT_14cbc3d78;
      FUN_1448075d0(&local_60);
      uVar6 = FUN_144a06846(param_4,&local_60);
      uVar2 = FUN_1410c4486(uVar6,0);
      *(undefined1 *)(param_1 + 0x2d) = uVar2;
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      local_60 = (undefined8 *)0x0;
      local_58 = 0;
      FUN_1446efa72(&local_60,0,3,0x10);
      puVar1 = local_60;
      local_58 = 3;
      *local_60 = &PTR_LAB_14b3e9ca0;
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 1;
      lVar4 = DAT_14c758608 + 1;
      if (lVar5 == 0) {
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 2;
        lVar4 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar4;
      local_60[2] = lVar5;
      *local_60 = &PTR_FUN_14b961a90;
      local_60[3] = 0;
      FUN_14485c47a(local_60 + 3,param_1);
      puVar1[4] = param_1;
      FUN_140056680(&local_1f0,L"AudioSettingsWaitingForLocalPlayer");
      local_228 = 1;
      local_230 = 0x80000;
      local_238 = &local_1f0;
      FUN_1413d987a(lVar3,local_218,param_2 + 0x18,&local_60);
      if (local_1f0 != 0) {
        FUN_1400020a8();
      }
      FUN_1449db362(&local_60);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f875b4 FUN_145f875b4 body=23 status=ok
// SIG undefined FUN_145f875b4(void)

void FUN_145f875b4(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x2d0) = param_2;
  if (DAT_14cb259f8 == 0) {
    return;
  }
  *(undefined1 *)(DAT_14cb259f8 + 0xd1) = param_2;
  return;
}



// FUNCTION 145f875cc FUN_145f875cc body=7 status=ok
// SIG undefined FUN_145f875cc(void)

void FUN_145f875cc(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xd1) = param_2;
  return;
}



// FUNCTION 145f875d4 FUN_145f875d4 body=42 status=ok
// SIG undefined FUN_145f875d4(void)

void FUN_145f875d4(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  
  *(undefined1 *)(param_1 + 0x2d1) = param_2;
  lVar1 = FUN_140ce13fe();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x98) = *(undefined1 *)(param_1 + 0x2d1);
  }
  return;
}



// FUNCTION 145f875fe FUN_145f875fe body=134 status=ok
// SIG undefined FUN_145f875fe(void)

void FUN_145f875fe(undefined8 param_1,char param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  undefined8 uVar5;
  
  if (DAT_14cb25ab0 == '\x01') {
    plVar2 = (longlong *)FUN_144a7e30a();
    lVar3 = plVar2[0x22];
    if (lVar3 == 0) {
      (**(code **)(*plVar2 + 1000))(plVar2);
      lVar3 = plVar2[0x22];
    }
    if (*(int *)(lVar3 + 0x1e0) == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = *(wchar_t **)(lVar3 + 0x1d8);
    }
    uVar5 = 0;
    uVar1 = 0;
    if (pwVar4 != (wchar_t *)0x0) {
      uVar1 = AK::SoundEngine::GetIDFromString(pwVar4);
    }
    if (param_2 != '\0') {
      uVar5 = 0x4101;
    }
    AK::SoundEngine::SetBusConfig(uVar1,uVar5);
    return;
  }
  return;
}



// FUNCTION 145f87684 FUN_145f87684 body=209 status=ok
// SIG undefined FUN_145f87684(void)

void FUN_145f87684(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  *(undefined4 *)(param_1 + 0x2c0) = param_2;
  lVar4 = FUN_140ce13fe();
  if (lVar4 == 0) {
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x2c0);
  *(undefined4 *)(lVar4 + 0x48) = uVar1;
  lVar5 = *(longlong *)(lVar4 + 0x38);
  if (lVar5 == 0) {
    uVar6 = FUN_1407f787c();
    lVar5 = FUN_14477b664(uVar6);
    *(longlong *)(lVar4 + 0x38) = lVar5;
  }
  lVar7 = *(longlong *)(lVar4 + 0x40);
  if (((lVar7 != 0) || (lVar7 = 0, lVar5 == 0)) || (*(longlong *)(lVar4 + 0x30) == 0))
  goto LAB_145f876c7;
  plVar2 = *(longlong **)(lVar5 + 0xb8);
  if (plVar2 == (longlong *)0x0) {
LAB_145f87751:
    lVar7 = 0;
  }
  else {
    cVar3 = (**(code **)(*plVar2 + 0x108))();
    if (cVar3 == '\0') goto LAB_145f87751;
    uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar7 = FUN_144aff482(uVar6,(longlong *)(lVar4 + 0x30));
  }
  *(longlong *)(lVar4 + 0x40) = lVar7;
LAB_145f876c7:
  FUN_1400d4a02(lVar7,uVar1,0);
  return;
}



// FUNCTION 145f87756 FUN_145f87756 body=206 status=ok
// SIG undefined FUN_145f87756(void)

void FUN_145f87756(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  *(undefined4 *)(param_1 + 0x2c4) = param_2;
  lVar4 = FUN_140ce13fe();
  if (lVar4 == 0) {
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x2c4);
  lVar7 = *(longlong *)(lVar4 + 0x58);
  if (lVar7 == 0) {
    uVar5 = FUN_1407f787c();
    lVar7 = FUN_14477b664(uVar5);
    *(longlong *)(lVar4 + 0x58) = lVar7;
  }
  lVar6 = *(longlong *)(lVar4 + 0x60);
  if (((lVar6 != 0) || (lVar6 = 0, lVar7 == 0)) || (*(longlong *)(lVar4 + 0x50) == 0))
  goto LAB_145f877e6;
  plVar2 = *(longlong **)(lVar7 + 0xb8);
  if (plVar2 == (longlong *)0x0) {
LAB_145f877fd:
    lVar6 = 0;
  }
  else {
    cVar3 = (**(code **)(*plVar2 + 0x108))();
    if (cVar3 == '\0') goto LAB_145f877fd;
    uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar6 = FUN_144aff482(uVar5,(longlong *)(lVar4 + 0x50));
  }
  *(longlong *)(lVar4 + 0x60) = lVar6;
LAB_145f877e6:
  FUN_1400d4a02(lVar6,uVar1,0);
  return;
}



// FUNCTION 145f87824 FUN_145f87824 body=206 status=ok
// SIG undefined FUN_145f87824(void)

void FUN_145f87824(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  *(undefined4 *)(param_1 + 0x2c8) = param_2;
  lVar4 = FUN_140ce13fe();
  if (lVar4 == 0) {
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x2c8);
  lVar7 = *(longlong *)(lVar4 + 0x70);
  if (lVar7 == 0) {
    uVar5 = FUN_1407f787c();
    lVar7 = FUN_14477b664(uVar5);
    *(longlong *)(lVar4 + 0x70) = lVar7;
  }
  lVar6 = *(longlong *)(lVar4 + 0x78);
  if (((lVar6 != 0) || (lVar6 = 0, lVar7 == 0)) || (*(longlong *)(lVar4 + 0x68) == 0))
  goto LAB_145f878b4;
  plVar2 = *(longlong **)(lVar7 + 0xb8);
  if (plVar2 == (longlong *)0x0) {
LAB_145f878cb:
    lVar6 = 0;
  }
  else {
    cVar3 = (**(code **)(*plVar2 + 0x108))();
    if (cVar3 == '\0') goto LAB_145f878cb;
    uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar6 = FUN_144aff482(uVar5,(longlong *)(lVar4 + 0x68));
  }
  *(longlong *)(lVar4 + 0x78) = lVar6;
LAB_145f878b4:
  FUN_1400d4a02(lVar6,uVar1,0);
  return;
}



// FUNCTION 145f878f2 FUN_145f878f2 body=222 status=ok
// SIG undefined FUN_145f878f2(void)

void FUN_145f878f2(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  *(undefined4 *)(param_1 + 0x2cc) = param_2;
  lVar4 = FUN_140ce13fe();
  if (lVar4 == 0) {
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x2cc);
  lVar7 = *(longlong *)(lVar4 + 0x88);
  if (lVar7 == 0) {
    uVar5 = FUN_1407f787c();
    lVar7 = FUN_14477b664(uVar5);
    *(longlong *)(lVar4 + 0x88) = lVar7;
  }
  lVar6 = *(longlong *)(lVar4 + 0x90);
  if (((lVar6 != 0) || (lVar6 = 0, lVar7 == 0)) || (*(longlong *)(lVar4 + 0x80) == 0))
  goto LAB_145f8798f;
  plVar2 = *(longlong **)(lVar7 + 0xb8);
  if (plVar2 == (longlong *)0x0) {
LAB_145f879a6:
    lVar6 = 0;
  }
  else {
    cVar3 = (**(code **)(*plVar2 + 0x108))();
    if (cVar3 == '\0') goto LAB_145f879a6;
    uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar6 = FUN_144aff482(uVar5,(longlong *)(lVar4 + 0x80));
  }
  *(longlong *)(lVar4 + 0x90) = lVar6;
LAB_145f8798f:
  FUN_1400d4a02(lVar6,uVar1,0);
  return;
}



// FUNCTION 145f879d0 FUN_145f879d0 body=225 status=ok
// SIG undefined FUN_145f879d0(void)

void FUN_145f879d0(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  *(undefined4 *)(param_1 + 0x48c) = param_2;
  lVar4 = FUN_1410a5e9e();
  if (lVar4 == 0) {
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x48c);
  lVar7 = *(longlong *)(lVar4 + 0xa8);
  if (lVar7 == 0) {
    uVar5 = FUN_1407f787c();
    lVar7 = FUN_14477b664(uVar5);
    *(longlong *)(lVar4 + 0xa8) = lVar7;
  }
  lVar6 = *(longlong *)(lVar4 + 0xb0);
  if (((lVar6 != 0) || (lVar6 = 0, lVar7 == 0)) || (*(longlong *)(lVar4 + 0xa0) == 0))
  goto LAB_145f87a70;
  plVar2 = *(longlong **)(lVar7 + 0xb8);
  if (plVar2 == (longlong *)0x0) {
LAB_145f87a87:
    lVar6 = 0;
  }
  else {
    cVar3 = (**(code **)(*plVar2 + 0x108))();
    if (cVar3 == '\0') goto LAB_145f87a87;
    uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar6 = FUN_144aff482(uVar5,(longlong *)(lVar4 + 0xa0));
  }
  *(longlong *)(lVar4 + 0xb0) = lVar6;
LAB_145f87a70:
  FUN_1400d4a02(lVar6,uVar1,0);
  return;
}



// FUNCTION 145f87ab2 FUN_145f87ab2 body=225 status=ok
// SIG undefined FUN_145f87ab2(void)

void FUN_145f87ab2(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  *(undefined4 *)(param_1 + 0x490) = param_2;
  lVar4 = FUN_1410a5e9e();
  if (lVar4 == 0) {
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x490);
  lVar7 = *(longlong *)(lVar4 + 0xd8);
  if (lVar7 == 0) {
    uVar5 = FUN_1407f787c();
    lVar7 = FUN_14477b664(uVar5);
    *(longlong *)(lVar4 + 0xd8) = lVar7;
  }
  lVar6 = *(longlong *)(lVar4 + 0xe0);
  if (((lVar6 != 0) || (lVar6 = 0, lVar7 == 0)) || (*(longlong *)(lVar4 + 0xd0) == 0))
  goto LAB_145f87b52;
  plVar2 = *(longlong **)(lVar7 + 0xb8);
  if (plVar2 == (longlong *)0x0) {
LAB_145f87b69:
    lVar6 = 0;
  }
  else {
    cVar3 = (**(code **)(*plVar2 + 0x108))();
    if (cVar3 == '\0') goto LAB_145f87b69;
    uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar6 = FUN_144aff482(uVar5,(longlong *)(lVar4 + 0xd0));
  }
  *(longlong *)(lVar4 + 0xe0) = lVar6;
LAB_145f87b52:
  FUN_1400d4a02(lVar6,uVar1,0);
  return;
}



// FUNCTION 145f87b94 FUN_145f87b94 body=225 status=ok
// SIG undefined FUN_145f87b94(void)

void FUN_145f87b94(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  *(undefined4 *)(param_1 + 0x494) = param_2;
  lVar4 = FUN_1410a5e9e();
  if (lVar4 == 0) {
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x494);
  lVar7 = *(longlong *)(lVar4 + 0xf0);
  if (lVar7 == 0) {
    uVar5 = FUN_1407f787c();
    lVar7 = FUN_14477b664(uVar5);
    *(longlong *)(lVar4 + 0xf0) = lVar7;
  }
  lVar6 = *(longlong *)(lVar4 + 0xf8);
  if (((lVar6 != 0) || (lVar6 = 0, lVar7 == 0)) || (*(longlong *)(lVar4 + 0xe8) == 0))
  goto LAB_145f87c34;
  plVar2 = *(longlong **)(lVar7 + 0xb8);
  if (plVar2 == (longlong *)0x0) {
LAB_145f87c4b:
    lVar6 = 0;
  }
  else {
    cVar3 = (**(code **)(*plVar2 + 0x108))();
    if (cVar3 == '\0') goto LAB_145f87c4b;
    uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar6 = FUN_144aff482(uVar5,(longlong *)(lVar4 + 0xe8));
  }
  *(longlong *)(lVar4 + 0xf8) = lVar6;
LAB_145f87c34:
  FUN_1400d4a02(lVar6,uVar1,0);
  return;
}



// FUNCTION 145f87c76 FUN_145f87c76 body=225 status=ok
// SIG undefined FUN_145f87c76(void)

void FUN_145f87c76(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  *(undefined4 *)(param_1 + 0x498) = param_2;
  lVar4 = FUN_1410a5e9e();
  if (lVar4 == 0) {
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x498);
  lVar7 = *(longlong *)(lVar4 + 0x108);
  if (lVar7 == 0) {
    uVar5 = FUN_1407f787c();
    lVar7 = FUN_14477b664(uVar5);
    *(longlong *)(lVar4 + 0x108) = lVar7;
  }
  lVar6 = *(longlong *)(lVar4 + 0x110);
  if (((lVar6 != 0) || (lVar6 = 0, lVar7 == 0)) || (*(longlong *)(lVar4 + 0x100) == 0))
  goto LAB_145f87d16;
  plVar2 = *(longlong **)(lVar7 + 0xb8);
  if (plVar2 == (longlong *)0x0) {
LAB_145f87d2d:
    lVar6 = 0;
  }
  else {
    cVar3 = (**(code **)(*plVar2 + 0x108))();
    if (cVar3 == '\0') goto LAB_145f87d2d;
    uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar6 = FUN_144aff482(uVar5,(longlong *)(lVar4 + 0x100));
  }
  *(longlong *)(lVar4 + 0x110) = lVar6;
LAB_145f87d16:
  FUN_1400d4a02(lVar6,uVar1,0);
  return;
}



// FUNCTION 145f87d58 FUN_145f87d58 body=225 status=ok
// SIG undefined FUN_145f87d58(void)

void FUN_145f87d58(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  *(undefined4 *)(param_1 + 0x49c) = param_2;
  lVar4 = FUN_1410a5e9e();
  if (lVar4 == 0) {
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x49c);
  lVar7 = *(longlong *)(lVar4 + 0x120);
  if (lVar7 == 0) {
    uVar5 = FUN_1407f787c();
    lVar7 = FUN_14477b664(uVar5);
    *(longlong *)(lVar4 + 0x120) = lVar7;
  }
  lVar6 = *(longlong *)(lVar4 + 0x128);
  if (((lVar6 != 0) || (lVar6 = 0, lVar7 == 0)) || (*(longlong *)(lVar4 + 0x118) == 0))
  goto LAB_145f87df8;
  plVar2 = *(longlong **)(lVar7 + 0xb8);
  if (plVar2 == (longlong *)0x0) {
LAB_145f87e0f:
    lVar6 = 0;
  }
  else {
    cVar3 = (**(code **)(*plVar2 + 0x108))();
    if (cVar3 == '\0') goto LAB_145f87e0f;
    uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar6 = FUN_144aff482(uVar5,(longlong *)(lVar4 + 0x118));
  }
  *(longlong *)(lVar4 + 0x128) = lVar6;
LAB_145f87df8:
  FUN_1400d4a02(lVar6,uVar1,0);
  return;
}



// FUNCTION 145f87e3a FUN_145f87e3a body=225 status=ok
// SIG undefined FUN_145f87e3a(void)

void FUN_145f87e3a(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  *(undefined4 *)(param_1 + 0x4a0) = param_2;
  lVar4 = FUN_1410a5e9e();
  if (lVar4 == 0) {
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x4a0);
  lVar7 = *(longlong *)(lVar4 + 0x198);
  if (lVar7 == 0) {
    uVar5 = FUN_1407f787c();
    lVar7 = FUN_14477b664(uVar5);
    *(longlong *)(lVar4 + 0x198) = lVar7;
  }
  lVar6 = *(longlong *)(lVar4 + 0x1a0);
  if (((lVar6 != 0) || (lVar6 = 0, lVar7 == 0)) || (*(longlong *)(lVar4 + 400) == 0))
  goto LAB_145f87eda;
  plVar2 = *(longlong **)(lVar7 + 0xb8);
  if (plVar2 == (longlong *)0x0) {
LAB_145f87ef1:
    lVar6 = 0;
  }
  else {
    cVar3 = (**(code **)(*plVar2 + 0x108))();
    if (cVar3 == '\0') goto LAB_145f87ef1;
    uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar6 = FUN_144aff482(uVar5,(longlong *)(lVar4 + 400));
  }
  *(longlong *)(lVar4 + 0x1a0) = lVar6;
LAB_145f87eda:
  FUN_1400d4a02(lVar6,uVar1,0);
  return;
}



// FUNCTION 145f87f1c FUN_145f87f1c body=225 status=ok
// SIG undefined FUN_145f87f1c(void)

void FUN_145f87f1c(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  *(undefined4 *)(param_1 + 0x4a4) = param_2;
  lVar4 = FUN_1410a5e9e();
  if (lVar4 == 0) {
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x4a4);
  lVar7 = *(longlong *)(lVar4 + 0x138);
  if (lVar7 == 0) {
    uVar5 = FUN_1407f787c();
    lVar7 = FUN_14477b664(uVar5);
    *(longlong *)(lVar4 + 0x138) = lVar7;
  }
  lVar6 = *(longlong *)(lVar4 + 0x140);
  if (((lVar6 != 0) || (lVar6 = 0, lVar7 == 0)) || (*(longlong *)(lVar4 + 0x130) == 0))
  goto LAB_145f87fbc;
  plVar2 = *(longlong **)(lVar7 + 0xb8);
  if (plVar2 == (longlong *)0x0) {
LAB_145f87fd3:
    lVar6 = 0;
  }
  else {
    cVar3 = (**(code **)(*plVar2 + 0x108))();
    if (cVar3 == '\0') goto LAB_145f87fd3;
    uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar6 = FUN_144aff482(uVar5,(longlong *)(lVar4 + 0x130));
  }
  *(longlong *)(lVar4 + 0x140) = lVar6;
LAB_145f87fbc:
  FUN_1400d4a02(lVar6,uVar1,0);
  return;
}



// FUNCTION 145f87ffe FUN_145f87ffe body=225 status=ok
// SIG undefined FUN_145f87ffe(void)

void FUN_145f87ffe(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  *(undefined4 *)(param_1 + 0x4a8) = param_2;
  lVar4 = FUN_1410a5e9e();
  if (lVar4 == 0) {
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x4a8);
  lVar7 = *(longlong *)(lVar4 + 0x150);
  if (lVar7 == 0) {
    uVar5 = FUN_1407f787c();
    lVar7 = FUN_14477b664(uVar5);
    *(longlong *)(lVar4 + 0x150) = lVar7;
  }
  lVar6 = *(longlong *)(lVar4 + 0x158);
  if (((lVar6 != 0) || (lVar6 = 0, lVar7 == 0)) || (*(longlong *)(lVar4 + 0x148) == 0))
  goto LAB_145f8809e;
  plVar2 = *(longlong **)(lVar7 + 0xb8);
  if (plVar2 == (longlong *)0x0) {
LAB_145f880b5:
    lVar6 = 0;
  }
  else {
    cVar3 = (**(code **)(*plVar2 + 0x108))();
    if (cVar3 == '\0') goto LAB_145f880b5;
    uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar6 = FUN_144aff482(uVar5,(longlong *)(lVar4 + 0x148));
  }
  *(longlong *)(lVar4 + 0x158) = lVar6;
LAB_145f8809e:
  FUN_1400d4a02(lVar6,uVar1,0);
  return;
}



// FUNCTION 145f880e0 FUN_145f880e0 body=225 status=ok
// SIG undefined FUN_145f880e0(void)

void FUN_145f880e0(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  *(undefined4 *)(param_1 + 0x4ac) = param_2;
  lVar4 = FUN_1410a5e9e();
  if (lVar4 == 0) {
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x4ac);
  lVar7 = *(longlong *)(lVar4 + 0x168);
  if (lVar7 == 0) {
    uVar5 = FUN_1407f787c();
    lVar7 = FUN_14477b664(uVar5);
    *(longlong *)(lVar4 + 0x168) = lVar7;
  }
  lVar6 = *(longlong *)(lVar4 + 0x170);
  if (((lVar6 != 0) || (lVar6 = 0, lVar7 == 0)) || (*(longlong *)(lVar4 + 0x160) == 0))
  goto LAB_145f88180;
  plVar2 = *(longlong **)(lVar7 + 0xb8);
  if (plVar2 == (longlong *)0x0) {
LAB_145f88197:
    lVar6 = 0;
  }
  else {
    cVar3 = (**(code **)(*plVar2 + 0x108))();
    if (cVar3 == '\0') goto LAB_145f88197;
    uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar6 = FUN_144aff482(uVar5,(longlong *)(lVar4 + 0x160));
  }
  *(longlong *)(lVar4 + 0x170) = lVar6;
LAB_145f88180:
  FUN_1400d4a02(lVar6,uVar1,0);
  return;
}



// FUNCTION 145f881c2 FUN_145f881c2 body=225 status=ok
// SIG undefined FUN_145f881c2(void)

void FUN_145f881c2(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  *(undefined4 *)(param_1 + 0x4b0) = param_2;
  lVar4 = FUN_1410a5e9e();
  if (lVar4 == 0) {
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x4b0);
  lVar7 = *(longlong *)(lVar4 + 0x180);
  if (lVar7 == 0) {
    uVar5 = FUN_1407f787c();
    lVar7 = FUN_14477b664(uVar5);
    *(longlong *)(lVar4 + 0x180) = lVar7;
  }
  lVar6 = *(longlong *)(lVar4 + 0x188);
  if (((lVar6 != 0) || (lVar6 = 0, lVar7 == 0)) || (*(longlong *)(lVar4 + 0x178) == 0))
  goto LAB_145f88262;
  plVar2 = *(longlong **)(lVar7 + 0xb8);
  if (plVar2 == (longlong *)0x0) {
LAB_145f88279:
    lVar6 = 0;
  }
  else {
    cVar3 = (**(code **)(*plVar2 + 0x108))();
    if (cVar3 == '\0') goto LAB_145f88279;
    uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar6 = FUN_144aff482(uVar5,(longlong *)(lVar4 + 0x178));
  }
  *(longlong *)(lVar4 + 0x188) = lVar6;
LAB_145f88262:
  FUN_1400d4a02(lVar6,uVar1,0);
  return;
}



// FUNCTION 145f882a4 FUN_145f882a4 body=225 status=ok
// SIG undefined FUN_145f882a4(void)

void FUN_145f882a4(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  *(undefined4 *)(param_1 + 0x4b4) = param_2;
  lVar4 = FUN_1410a5e9e();
  if (lVar4 == 0) {
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x4b4);
  lVar7 = *(longlong *)(lVar4 + 0x200);
  if (lVar7 == 0) {
    uVar5 = FUN_1407f787c();
    lVar7 = FUN_14477b664(uVar5);
    *(longlong *)(lVar4 + 0x200) = lVar7;
  }
  lVar6 = *(longlong *)(lVar4 + 0x208);
  if (((lVar6 != 0) || (lVar6 = 0, lVar7 == 0)) || (*(longlong *)(lVar4 + 0x1f8) == 0))
  goto LAB_145f88344;
  plVar2 = *(longlong **)(lVar7 + 0xb8);
  if (plVar2 == (longlong *)0x0) {
LAB_145f8835b:
    lVar6 = 0;
  }
  else {
    cVar3 = (**(code **)(*plVar2 + 0x108))();
    if (cVar3 == '\0') goto LAB_145f8835b;
    uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar6 = FUN_144aff482(uVar5,(longlong *)(lVar4 + 0x1f8));
  }
  *(longlong *)(lVar4 + 0x208) = lVar6;
LAB_145f88344:
  FUN_1400d4a02(lVar6,uVar1,0);
  return;
}



// FUNCTION 145f88386 FUN_145f88386 body=225 status=ok
// SIG undefined FUN_145f88386(void)

void FUN_145f88386(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  *(undefined4 *)(param_1 + 0x4b8) = param_2;
  lVar4 = FUN_1410a5e9e();
  if (lVar4 == 0) {
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x4b8);
  lVar7 = *(longlong *)(lVar4 + 0x218);
  if (lVar7 == 0) {
    uVar5 = FUN_1407f787c();
    lVar7 = FUN_14477b664(uVar5);
    *(longlong *)(lVar4 + 0x218) = lVar7;
  }
  lVar6 = *(longlong *)(lVar4 + 0x220);
  if (((lVar6 != 0) || (lVar6 = 0, lVar7 == 0)) || (*(longlong *)(lVar4 + 0x210) == 0))
  goto LAB_145f88426;
  plVar2 = *(longlong **)(lVar7 + 0xb8);
  if (plVar2 == (longlong *)0x0) {
LAB_145f8843d:
    lVar6 = 0;
  }
  else {
    cVar3 = (**(code **)(*plVar2 + 0x108))();
    if (cVar3 == '\0') goto LAB_145f8843d;
    uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar6 = FUN_144aff482(uVar5,(longlong *)(lVar4 + 0x210));
  }
  *(longlong *)(lVar4 + 0x220) = lVar6;
LAB_145f88426:
  FUN_1400d4a02(lVar6,uVar1,0);
  return;
}



// FUNCTION 145f88468 FUN_145f88468 body=225 status=ok
// SIG undefined FUN_145f88468(void)

void FUN_145f88468(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  *(undefined4 *)(param_1 + 0x4bc) = param_2;
  lVar4 = FUN_1410a5e9e();
  if (lVar4 == 0) {
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x4bc);
  lVar7 = *(longlong *)(lVar4 + 0x230);
  if (lVar7 == 0) {
    uVar5 = FUN_1407f787c();
    lVar7 = FUN_14477b664(uVar5);
    *(longlong *)(lVar4 + 0x230) = lVar7;
  }
  lVar6 = *(longlong *)(lVar4 + 0x238);
  if (((lVar6 != 0) || (lVar6 = 0, lVar7 == 0)) || (*(longlong *)(lVar4 + 0x228) == 0))
  goto LAB_145f88508;
  plVar2 = *(longlong **)(lVar7 + 0xb8);
  if (plVar2 == (longlong *)0x0) {
LAB_145f8851f:
    lVar6 = 0;
  }
  else {
    cVar3 = (**(code **)(*plVar2 + 0x108))();
    if (cVar3 == '\0') goto LAB_145f8851f;
    uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar6 = FUN_144aff482(uVar5,(longlong *)(lVar4 + 0x228));
  }
  *(longlong *)(lVar4 + 0x238) = lVar6;
LAB_145f88508:
  FUN_1400d4a02(lVar6,uVar1,0);
  return;
}



// FUNCTION 145f8854a FUN_145f8854a body=225 status=ok
// SIG undefined FUN_145f8854a(void)

void FUN_145f8854a(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  *(undefined4 *)(param_1 + 0x4c0) = param_2;
  lVar4 = FUN_1410a5e9e();
  if (lVar4 == 0) {
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x4c0);
  lVar7 = *(longlong *)(lVar4 + 0x248);
  if (lVar7 == 0) {
    uVar5 = FUN_1407f787c();
    lVar7 = FUN_14477b664(uVar5);
    *(longlong *)(lVar4 + 0x248) = lVar7;
  }
  lVar6 = *(longlong *)(lVar4 + 0x250);
  if (((lVar6 != 0) || (lVar6 = 0, lVar7 == 0)) || (*(longlong *)(lVar4 + 0x240) == 0))
  goto LAB_145f885ea;
  plVar2 = *(longlong **)(lVar7 + 0xb8);
  if (plVar2 == (longlong *)0x0) {
LAB_145f88601:
    lVar6 = 0;
  }
  else {
    cVar3 = (**(code **)(*plVar2 + 0x108))();
    if (cVar3 == '\0') goto LAB_145f88601;
    uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar6 = FUN_144aff482(uVar5,(longlong *)(lVar4 + 0x240));
  }
  *(longlong *)(lVar4 + 0x250) = lVar6;
LAB_145f885ea:
  FUN_1400d4a02(lVar6,uVar1,0);
  return;
}



// FUNCTION 145f8862c FUN_145f8862c body=229 status=ok
// SIG undefined FUN_145f8862c(void)

void FUN_145f8862c(longlong param_1,undefined1 param_2)

{
  char cVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  *(undefined1 *)(param_1 + 0x4d8) = param_2;
  lVar4 = FUN_1410a5e9e();
  if (lVar4 == 0) {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x4d8);
  lVar7 = *(longlong *)(lVar4 + 0xc0);
  if (lVar7 == 0) {
    uVar5 = FUN_1407f787c();
    lVar7 = FUN_14477b664(uVar5);
    *(longlong *)(lVar4 + 0xc0) = lVar7;
  }
  lVar6 = *(longlong *)(lVar4 + 200);
  if (((lVar6 != 0) || (lVar6 = 0, lVar7 == 0)) || (*(longlong *)(lVar4 + 0xb8) == 0))
  goto LAB_145f886d0;
  plVar2 = *(longlong **)(lVar7 + 0xb8);
  if (plVar2 == (longlong *)0x0) {
LAB_145f886e7:
    lVar6 = 0;
  }
  else {
    cVar3 = (**(code **)(*plVar2 + 0x108))();
    if (cVar3 == '\0') goto LAB_145f886e7;
    uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar6 = FUN_144aff482(uVar5,(longlong *)(lVar4 + 0xb8));
  }
  *(longlong *)(lVar4 + 200) = lVar6;
LAB_145f886d0:
  FUN_1400d4a02(lVar6,(float)(int)cVar1,0);
  return;
}



// FUNCTION 145f88712 FUN_145f88712 body=414 status=ok
// SIG undefined FUN_145f88712(void)

void FUN_145f88712(longlong param_1,byte param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  byte *pbVar9;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar5 = FUN_14030dc32();
  lVar3 = DAT_14cb259f8;
  if (((lVar5 != 0) && (DAT_14cb259f8 != 0)) &&
     (*(byte *)(param_1 + 0x489) = param_2, *(int *)(lVar5 + 0x5a0) != *(int *)(lVar5 + 0x5cc))) {
    lVar7 = lVar5 + 0x5d0;
    if (*(longlong *)(lVar5 + 0x5d8) != 0) {
      lVar7 = *(longlong *)(lVar5 + 0x5d8);
    }
    iVar8 = *(int *)(lVar7 + (ulonglong)(*(int *)(lVar5 + 0x5e0) - 1U & (uint)param_2) * 4);
    if (iVar8 != -1) {
      do {
        pbVar1 = (byte *)(*(longlong *)(lVar5 + 0x598) + (longlong)iVar8 * 0x28);
        if (*pbVar1 == param_2) {
          if ((pbVar1 == (byte *)0x0) || (pbVar9 = pbVar1 + 8, pbVar9 == (byte *)0x0)) break;
          lVar5 = *(longlong *)(pbVar1 + 0x10);
          if (lVar5 == 0) {
            uVar6 = FUN_140067708();
            lVar5 = FUN_14477b664(uVar6);
            *(longlong *)(pbVar1 + 0x10) = lVar5;
          }
          lVar7 = *(longlong *)(pbVar1 + 0x18);
          if (lVar7 == 0) {
            if ((lVar5 == 0) || (*(longlong *)pbVar9 == 0)) break;
            plVar2 = *(longlong **)(lVar5 + 0xb8);
            if ((plVar2 == (longlong *)0x0) ||
               (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) {
              pbVar1[0x18] = 0;
              pbVar1[0x19] = 0;
              pbVar1[0x1a] = 0;
              pbVar1[0x1b] = 0;
              pbVar1[0x1c] = 0;
              pbVar1[0x1d] = 0;
              pbVar1[0x1e] = 0;
              pbVar1[0x1f] = 0;
              break;
            }
            uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
            lVar7 = FUN_144aff482(uVar6,pbVar9);
            *(longlong *)(pbVar1 + 0x18) = lVar7;
            if (lVar7 == 0) break;
          }
          FUN_1415a48ac(lVar7,&local_30);
          FUN_145f888b2(lVar3,&local_30);
          if ((local_30 != 0) && ((DAT_14cb26569 & 1) != 0)) {
            FUN_1400848c0(*(undefined8 *)(local_30 + 0x50));
          }
          break;
        }
        iVar8 = *(int *)(pbVar1 + 0x20);
      } while (iVar8 != -1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145f888b2 FUN_145f888b2 body=75 status=ok
// SIG undefined FUN_145f888b2(void)

void FUN_145f888b2(undefined8 param_1,longlong *param_2)

{
  if (((DAT_14cb25ab0 == '\x01') && (*param_2 != 0)) && ((DAT_14cb26569 & 1) != 0)) {
    AK::SoundEngine::PostEvent
              (*(uint *)(*param_2 + 0x38),1,0,(_func_void_AkCallbackType_AkCallbackInfo_ptr *)0x0,
               (void *)0x0,0,(AkExternalSourceInfo *)0x0,0);
  }
  return;
}



// FUNCTION 145f888fe FUN_145f888fe body=414 status=ok
// SIG undefined FUN_145f888fe(void)

void FUN_145f888fe(longlong param_1,byte param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  byte *pbVar9;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar5 = FUN_14030dc32();
  lVar3 = DAT_14cb259f8;
  if (((lVar5 != 0) && (DAT_14cb259f8 != 0)) &&
     (*(byte *)(param_1 + 0x48a) = param_2, *(int *)(lVar5 + 0x5f0) != *(int *)(lVar5 + 0x61c))) {
    lVar7 = lVar5 + 0x620;
    if (*(longlong *)(lVar5 + 0x628) != 0) {
      lVar7 = *(longlong *)(lVar5 + 0x628);
    }
    iVar8 = *(int *)(lVar7 + (ulonglong)(*(int *)(lVar5 + 0x630) - 1U & (uint)param_2) * 4);
    if (iVar8 != -1) {
      do {
        pbVar1 = (byte *)(*(longlong *)(lVar5 + 0x5e8) + (longlong)iVar8 * 0x28);
        if (*pbVar1 == param_2) {
          if ((pbVar1 == (byte *)0x0) || (pbVar9 = pbVar1 + 8, pbVar9 == (byte *)0x0)) break;
          lVar5 = *(longlong *)(pbVar1 + 0x10);
          if (lVar5 == 0) {
            uVar6 = FUN_140067708();
            lVar5 = FUN_14477b664(uVar6);
            *(longlong *)(pbVar1 + 0x10) = lVar5;
          }
          lVar7 = *(longlong *)(pbVar1 + 0x18);
          if (lVar7 == 0) {
            if ((lVar5 == 0) || (*(longlong *)pbVar9 == 0)) break;
            plVar2 = *(longlong **)(lVar5 + 0xb8);
            if ((plVar2 == (longlong *)0x0) ||
               (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) {
              pbVar1[0x18] = 0;
              pbVar1[0x19] = 0;
              pbVar1[0x1a] = 0;
              pbVar1[0x1b] = 0;
              pbVar1[0x1c] = 0;
              pbVar1[0x1d] = 0;
              pbVar1[0x1e] = 0;
              pbVar1[0x1f] = 0;
              break;
            }
            uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
            lVar7 = FUN_144aff482(uVar6,pbVar9);
            *(longlong *)(pbVar1 + 0x18) = lVar7;
            if (lVar7 == 0) break;
          }
          FUN_1415a48ac(lVar7,&local_30);
          FUN_145f888b2(lVar3,&local_30);
          if ((local_30 != 0) && ((DAT_14cb26569 & 1) != 0)) {
            FUN_1400848c0(*(undefined8 *)(local_30 + 0x50));
          }
          break;
        }
        iVar8 = *(int *)(pbVar1 + 0x20);
      } while (iVar8 != -1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145f88a9e FUN_145f88a9e body=743 status=ok
// SIG undefined FUN_145f88a9e(void)

void FUN_145f88a9e(longlong param_1,float param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_90 [3];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68 [3];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar3 = FUN_1410a5e9e();
  if (lVar3 == 0) goto LAB_145f88b9e;
  fVar10 = (float)DAT_14c866ff8;
  fVar9 = fVar10 - *(float *)(param_1 + 0x484);
  if ((*(float *)(lVar3 + 0x1f0) <= fVar9 && fVar9 != *(float *)(lVar3 + 0x1f0)) &&
     (*(char *)(param_1 + 0x488) == '\x01')) {
    if (*(float *)(param_1 + 0x480) < param_2) {
      local_78 = (undefined4)DAT_14c8463f0;
      uStack_74 = DAT_14c8463f0._4_4_;
      uStack_70 = (undefined4)DAT_14c8463f8;
      uStack_6c = DAT_14c8463f8._4_4_;
      lVar6 = *(longlong *)(lVar3 + 0x1c8);
      if (lVar6 == 0) {
        uVar4 = FUN_140067708();
        lVar6 = FUN_14477b664(uVar4);
        *(longlong *)(lVar3 + 0x1c8) = lVar6;
      }
      lVar5 = *(longlong *)(lVar3 + 0x1d0);
      if (((lVar5 == 0) && (lVar5 = 0, lVar6 != 0)) && (*(longlong *)(lVar3 + 0x1c0) != 0)) {
        plVar1 = *(longlong **)(lVar6 + 0xb8);
        if (plVar1 == (longlong *)0x0) {
LAB_145f88d82:
          lVar5 = 0;
        }
        else {
          cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
          if (cVar2 == '\0') goto LAB_145f88d82;
          uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
          lVar5 = FUN_144aff482(uVar4,(longlong *)(lVar3 + 0x1c0));
        }
        *(longlong *)(lVar3 + 0x1d0) = lVar5;
      }
      puVar7 = local_68;
      puVar8 = &local_78;
    }
    else {
      if (*(float *)(param_1 + 0x480) <= param_2) goto LAB_145f88b0c;
      local_a8 = (undefined4)DAT_14c8463f0;
      uStack_a4 = DAT_14c8463f0._4_4_;
      uStack_a0 = (undefined4)DAT_14c8463f8;
      uStack_9c = DAT_14c8463f8._4_4_;
      lVar6 = *(longlong *)(lVar3 + 0x1e0);
      if (lVar6 == 0) {
        uVar4 = FUN_140067708();
        lVar6 = FUN_14477b664(uVar4);
        *(longlong *)(lVar3 + 0x1e0) = lVar6;
      }
      lVar5 = *(longlong *)(lVar3 + 0x1e8);
      if (((lVar5 == 0) && (lVar5 = 0, lVar6 != 0)) && (*(longlong *)(lVar3 + 0x1d8) != 0)) {
        plVar1 = *(longlong **)(lVar6 + 0xb8);
        if (plVar1 == (longlong *)0x0) {
LAB_145f88d7e:
          lVar5 = 0;
        }
        else {
          cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
          if (cVar2 == '\0') goto LAB_145f88d7e;
          uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
          lVar5 = FUN_144aff482(uVar4,(longlong *)(lVar3 + 0x1d8));
        }
        *(longlong *)(lVar3 + 0x1e8) = lVar5;
      }
      puVar7 = local_90;
      puVar8 = &local_a8;
    }
    FUN_140d26af5(puVar7,lVar5,puVar8);
    *puVar7 = 0;
    puVar7[1] = 0xffffffffffffffff;
    *(float *)(param_1 + 0x484) = fVar10;
  }
LAB_145f88b0c:
  *(undefined1 *)(param_1 + 0x488) = 1;
  *(float *)(param_1 + 0x480) = param_2;
  lVar6 = *(longlong *)(lVar3 + 0x1b0);
  if (lVar6 == 0) {
    uVar4 = FUN_1407f787c();
    lVar6 = FUN_14477b664(uVar4);
    *(longlong *)(lVar3 + 0x1b0) = lVar6;
  }
  lVar5 = *(longlong *)(lVar3 + 0x1b8);
  if (((lVar5 == 0) && (lVar5 = 0, lVar6 != 0)) && (*(longlong *)(lVar3 + 0x1a8) != 0)) {
    plVar1 = *(longlong **)(lVar6 + 0xb8);
    if (plVar1 == (longlong *)0x0) {
LAB_145f88c30:
      lVar5 = 0;
    }
    else {
      cVar2 = (**(code **)(*plVar1 + 0x108))();
      if (cVar2 == '\0') goto LAB_145f88c30;
      uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar5 = FUN_144aff482(uVar4,(longlong *)(lVar3 + 0x1a8));
    }
    *(longlong *)(lVar3 + 0x1b8) = lVar5;
  }
  FUN_1400d4a02(lVar5,param_2,0);
LAB_145f88b9e:
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f88d86 FUN_145f88d86 body=40 status=ok
// SIG undefined FUN_145f88d86(void)

undefined8 FUN_145f88d86(undefined8 param_1,int param_2)

{
  FUN_145f88dae();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145f88dae FUN_145f88dae body=380 status=ok
// SIG undefined FUN_145f88dae(void)

void FUN_145f88dae(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4b1ba0;
  param_1[0x1f] = &PTR_FUN_14a4b1f10;
  if (param_1[0xc4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc2] != 0) {
    FUN_1400020a8();
  }
  FUN_145bfd3a0(param_1 + 0x9a);
  *(undefined4 *)(param_1 + 0x99) = 0;
  if (param_1[0x98] != 0) {
    FUN_1400020a8();
  }
  FUN_145f88f2a(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x8f) = 0;
  if (param_1[0x8e] != 0) {
    FUN_1400020a8();
  }
  FUN_145f88f60(param_1 + 0x86);
  *(undefined4 *)(param_1 + 0x85) = 0;
  if (param_1[0x84] != 0) {
    FUN_1400020a8();
  }
  FUN_145f88f96(param_1 + 0x7c);
  *(undefined4 *)(param_1 + 0x7b) = 0;
  if (param_1[0x7a] != 0) {
    FUN_1400020a8();
  }
  FUN_145f88fcc(param_1 + 0x72);
  *(undefined4 *)(param_1 + 0x71) = 0;
  if (param_1[0x70] != 0) {
    FUN_1400020a8();
  }
  FUN_145f89002(param_1 + 0x68);
  FUN_1404dbc70(param_1 + 0x46);
  FUN_1404dbc70(param_1 + 0x24);
  FUN_1404db908(param_1);
  return;
}



// FUNCTION 145f88f2a FUN_145f88f2a body=53 status=ok
// SIG undefined FUN_145f88f2a(void)

void FUN_145f88f2a(longlong *param_1)

{
  FUN_145f895a8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145f88f60 FUN_145f88f60 body=53 status=ok
// SIG undefined FUN_145f88f60(void)

void FUN_145f88f60(longlong *param_1)

{
  FUN_145f89038();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145f88f96 FUN_145f88f96 body=53 status=ok
// SIG undefined FUN_145f88f96(void)

void FUN_145f88f96(longlong *param_1)

{
  FUN_145f89194();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145f88fcc FUN_145f88fcc body=53 status=ok
// SIG undefined FUN_145f88fcc(void)

void FUN_145f88fcc(longlong *param_1)

{
  FUN_145f892f0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145f89002 FUN_145f89002 body=53 status=ok
// SIG undefined FUN_145f89002(void)

void FUN_145f89002(longlong *param_1)

{
  FUN_145f8944c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145f89038 FUN_145f89038 body=346 status=ok
// SIG undefined FUN_145f89038(void)

void FUN_145f89038(longlong *param_1)

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
      FUN_14581ef76(*local_68 + (longlong)iStack_4c * 0x118 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14736f258(param_1,0);
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



// FUNCTION 145f89194 FUN_145f89194 body=346 status=ok
// SIG undefined FUN_145f89194(void)

void FUN_145f89194(longlong *param_1)

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
      FUN_140bb7e7c(*local_68 + (longlong)iStack_4c * 0x118 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14736f258(param_1,0);
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



// FUNCTION 145f892f0 FUN_145f892f0 body=347 status=ok
// SIG undefined FUN_145f892f0(void)

void FUN_145f892f0(longlong *param_1)

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
      FUN_14156b236(*local_68 + (longlong)iStack_4c * 0x120 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140e8b234(param_1,0);
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



// FUNCTION 145f8944c FUN_145f8944c body=347 status=ok
// SIG undefined FUN_145f8944c(void)

void FUN_145f8944c(longlong *param_1)

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
      FUN_1404dbc70(*local_68 + (longlong)iStack_4c * 0x120 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140e8b234(param_1,0);
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



// FUNCTION 145f895a8 FUN_145f895a8 body=350 status=ok
// SIG undefined FUN_145f895a8(void)

void FUN_145f895a8(longlong *param_1)

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
      FUN_14753af42(*local_68 + (longlong)iStack_4c * 0x108 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140600d8e(param_1,0);
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



// FUNCTION 145f89708 FUN_145f89708 body=185 status=ok
// SIG undefined FUN_145f89708(void)

void FUN_145f89708(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_78 [40];
  undefined1 local_50 [16];
  undefined1 *local_40;
  undefined4 local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0x48) == 0) {
    plVar1 = *(longlong **)(param_1 + 0x38);
    local_40 = &LAB_145c38e02;
    local_38 = 0;
    FUN_145f897f2(local_30,param_1);
    (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined4 *)(param_1 + 0x30),local_30);
  }
  else if (*(int *)(param_1 + 0x48) == 1) {
    plVar1 = *(longlong **)(param_1 + 0x38);
    local_40 = &LAB_145c38e02;
    local_38 = 0;
    FUN_145f897f2(local_50,param_1);
    (**(code **)(*plVar1 + 0x18))(plVar1,*(undefined4 *)(param_1 + 0x30),local_50);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f897c2 FUN_145f897c2 body=48 status=ok
// SIG undefined FUN_145f897c2(void)

void FUN_145f897c2(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  
  if (((int)param_3[1] != 0) && (plVar1 = (longlong *)*param_3, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x60))(plVar1,param_2,2);
  }
  FUN_1449db362(param_3);
  return;
}



// FUNCTION 145f897f2 FUN_145f897f2 body=428 status=ok
// SIG undefined FUN_145f897f2(void)

longlong * FUN_145f897f2(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_145f898d2:
    *puVar5 = &PTR_LAB_14b4e0c10;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4e0ba0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145f898d2;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b4e0c10;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4e0ba0;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_1;
}



// FUNCTION 145f8999e FUN_145f8999e body=458 status=ok
// SIG undefined FUN_145f8999e(void)

void FUN_145f8999e(longlong param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60 [4];
  undefined8 local_5c;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x6630);
  iVar4 = *(int *)(param_2 + 1);
  if (iVar4 == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)*param_2;
  }
  iVar2 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar2 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar2,puVar7);
  iVar4 = FUN_145f89b6a(plVar1,uVar3,param_2);
  if (iVar4 != -1) {
    if (*(int *)(param_3 + 1) == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    else {
      puVar7 = (undefined2 *)*param_3;
    }
    FUN_1446f470e(&local_68,puVar7,1);
    local_60[0] = 0;
    local_5c = 0;
    local_50 = local_68;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    lVar8 = *param_4;
    if (lVar8 != 0) {
      if (DAT_14caa8580 == 0) {
        FUN_140608a9e();
        lVar8 = *param_4;
      }
      FUN_1400702d4(DAT_14caa8580,&local_70,lVar8,0);
      if (local_70 != 0) {
        FUN_147f7ce98(local_60);
      }
    }
    iVar4 = *(int *)(param_2 + 1);
    if (iVar4 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    else {
      puVar7 = (undefined2 *)*param_2;
    }
    uVar9 = 0;
    uVar6 = (ulonglong)(iVar4 - 1);
    if (iVar4 == 0) {
      uVar6 = uVar9;
    }
    uVar3 = FUN_144a49b4a(uVar6,puVar7);
    iVar4 = FUN_145f89b6a(plVar1,uVar3,param_2);
    if (iVar4 != -1) {
      uVar9 = (longlong)iVar4 * 0x38 + *plVar1;
    }
    local_80 = *(undefined8 *)(param_1 + 0x35d0);
    local_78 = *(longlong *)(param_1 + 0x35d8);
    if (local_78 != 0) {
      LOCK();
      *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
      UNLOCK();
    }
    uVar5 = FUN_140206ee8(local_60,&local_80);
    FUN_140bd765a(uVar9 + 0x10,uVar5,0);
    FUN_148cd32ea(plVar1,param_2);
    if ((local_38 != 0) && ((DAT_14cb26569 & 1) != 0)) {
      FUN_1400848c0(*(undefined8 *)(local_38 + 0x50));
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f89b6a FUN_145f89b6a body=203 status=ok
// SIG undefined FUN_145f89b6a(void)

int FUN_145f89b6a(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_145f89bb4:
      lVar10 = (longlong)iVar1 * 0x38;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_145f89c2a;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_145f89c2a;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_145f89c1b;
    }
  }
  return -1;
LAB_145f89c2a:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_145f89c1b:
  iVar1 = *(int *)(lVar4 + 0x30 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_145f89bb4;
}



// FUNCTION 145f89c40 FUN_145f89c40 body=485 status=ok
// SIG undefined FUN_145f89c40(void)

undefined8 * FUN_145f89c40(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140312256();
  *param_1 = &PTR_FUN_14b1ecbc0;
  param_1[0x79] = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3dc) = 0;
  param_1[0x7d] = 0;
  *(undefined4 *)(param_1 + 0x7e) = 0;
  param_1[0x80] = 0;
  param_1[0x82] = 0;
  param_1[0x88] = 0;
  *(undefined2 *)(param_1 + 0x89) = 0xffff;
  param_1[0x8a] = 0;
  *(undefined1 *)(param_1 + 0x8b) = 0;
  param_1[0x8c] = 0;
  *(undefined4 *)(param_1 + 0x8d) = 3;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) & 0xfd;
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) & 0xf7;
  *(byte *)(param_1 + 0x69) = *(byte *)(param_1 + 0x69) | 1;
  FUN_1446ddc76(&local_28,&DAT_149e3cc95,1);
  uVar1 = FUN_144a799b0();
  local_40 = 1;
  local_48 = 1;
  plVar2 = (longlong *)FUN_14048696c(param_1,local_28,uVar1,uVar1);
  if ((plVar2 == (longlong *)0x0) || (DAT_14c950c29 == '\0')) {
    param_1[0x39] = plVar2;
    if (plVar2 == (longlong *)0x0) goto LAB_145f89dd9;
  }
  else {
    FUN_1456cec3c(plVar2);
    param_1[0x39] = plVar2;
  }
  (**(code **)(*plVar2 + 0x588))(plVar2,0);
  FUN_1446ddc76(&local_30,"Proximity",1);
  uVar1 = FUN_140f974a4();
  local_40 = 1;
  local_48 = 1;
  lVar3 = FUN_14048696c(param_1,local_30,uVar1,uVar1);
  if ((lVar3 == 0) || (DAT_14c950c29 == '\0')) {
    param_1[0x72] = lVar3;
    if (lVar3 == 0) goto LAB_145f89dd9;
  }
  else {
    FUN_1456cec3c(lVar3);
    param_1[0x72] = lVar3;
  }
  FUN_140486fc4(lVar3,param_1[0x39],0);
LAB_145f89dd9:
  FUN_1403121a6(param_1,0);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f89e26 FUN_145f89e26 body=193 status=ok
// SIG undefined FUN_145f89e26(void)

void FUN_145f89e26(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_20 = 5;
  FUN_145f89ee8(&local_a8,5,0);
  local_a8 = 0x5000040000;
  uStack_a0 = 0x5001041000;
  local_98 = 0x2042000;
  uStack_94 = 0x50;
  uStack_90 = 0x3043000;
  uStack_8c = 0x50;
  local_88 = 0x5004044000;
  lVar4 = FUN_14486d71a(&local_a8);
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 != lVar4) {
    *(longlong *)(param_1 + 0x10) = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f89ee8 FUN_145f89ee8 body=27 status=ok
// SIG undefined FUN_145f89ee8(void)

void FUN_145f89ee8(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0x11;
  if (param_2 == 0) {
    iVar1 = 0;
  }
  if (iVar1 <= param_3) {
    iVar1 = param_3;
  }
  *(int *)(param_1 + 0x8c) = iVar1;
  return;
}



// FUNCTION 145f89f04 FUN_145f89f04 body=205 status=ok
// SIG undefined FUN_145f89f04(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f89f04(void)

{
  if ((DAT_14caa734f & 2) == 0) {
    DAT_14caa734f = DAT_14caa734f | 2;
    _DAT_14caa72f0 = L"FLandscapeFixedGridVertexFactoryVertexShaderParameters";
    _DAT_14caa7308 = FUN_146826540;
    _DAT_14caa7310 = FUN_146825d77;
    _DAT_14caa7318 = FUN_146825fd6;
    _DAT_14caa7320 = FUN_1407e02ea;
    _DAT_14caa7328 = FUN_146826273;
    _DAT_14caa7300 = &LAB_14746d8f0;
    _DAT_14caa7340 = 0xffffffff00000004;
    _DAT_14caa7348 = 4;
    DAT_14caa734c = 0;
    _DAT_14caa7330 = &LAB_14746d8f8;
    FUN_145f89fd2();
    FUN_1407e00cc(&DAT_14caa72e8);
    return;
  }
  return;
}



// FUNCTION 145f89fd2 FUN_145f89fd2 body=133 status=ok
// SIG undefined FUN_145f89fd2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f89fd2(void)

{
  _DAT_14caa7648 = L"BASE";
  DAT_14caa7672 = 4;
  FUN_145f8a058();
  _DAT_14caa7658 = DAT_14caa72f8;
  _DAT_14caa7650 = &DAT_14caa6f10;
  _DAT_14caa7660 = &LAB_14682652b;
  DAT_14caa72f8 = &DAT_14caa7648;
  DAT_14caa734d = DAT_14caa734d + '\x01';
  _DAT_14caa7668 = 0x100000000;
  if (DAT_14caa6f74 != '\0') {
    DAT_14caa734e = DAT_14caa734e + '\x01';
  }
  return;
}



// FUNCTION 145f8a058 FUN_145f8a058 body=209 status=ok
// SIG undefined FUN_145f8a058(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f8a058(void)

{
  if ((DAT_14caa6f77 & 2) == 0) {
    DAT_14caa6f77 = DAT_14caa6f77 | 2;
    _DAT_14caa6f18 = L"FLandscapeVertexFactoryVertexShaderParameters";
    _DAT_14caa6f30 = FUN_146826540;
    _DAT_14caa6f38 = FUN_146825d77;
    _DAT_14caa6f40 = FUN_146825fd6;
    _DAT_14caa6f48 = FUN_1407e02ea;
    _DAT_14caa6f50 = FUN_146826273;
    _DAT_14caa6f28 = &LAB_14746bab6;
    _DAT_14caa6f68 = 0xffffffff00000004;
    _DAT_14caa6f70 = 4;
    DAT_14caa6f74 = 0;
    _DAT_14caa6f58 = &LAB_14746babe;
    FUN_145f8a12a(&DAT_14caa6f10);
    FUN_1407e00cc(&DAT_14caa6f10);
  }
  return &DAT_14caa6f10;
}



// FUNCTION 145f8a12a FUN_145f8a12a body=116 status=ok
// SIG undefined FUN_145f8a12a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f8a12a(longlong param_1)

{
  longlong lVar1;
  
  _DAT_14caa7588 = L"BASE";
  DAT_14caa75b2 = 4;
  lVar1 = FUN_1412f7d22();
  _DAT_14caa75a0 = &LAB_14682652b;
  _DAT_14caa75a8 = 0x100000000;
  _DAT_14caa7598 = *(undefined8 *)(param_1 + 0x10);
  _DAT_14caa7590 = lVar1;
  *(undefined **)(param_1 + 0x10) = &DAT_14caa7588;
  *(char *)(param_1 + 0x65) = *(char *)(param_1 + 0x65) + '\x01';
  if (*(char *)(lVar1 + 100) != '\0') {
    *(char *)(param_1 + 0x66) = *(char *)(param_1 + 0x66) + '\x01';
  }
  return;
}



// FUNCTION 145f8a1aa FUN_145f8a1aa body=210 status=ok
// SIG undefined FUN_145f8a1aa(void)

undefined8 * FUN_145f8a1aa(undefined8 *param_1)

{
  FUN_140bf6e12();
  *param_1 = &PTR_FUN_14a84a420;
  param_1[5] = &PTR_FUN_14a84a9c0;
  param_1[6] = &PTR_LAB_14a84aa00;
  *(undefined2 *)(param_1 + 0x30) = 1;
  *(undefined1 *)((longlong)param_1 + 0x183) = 1;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(byte *)((longlong)param_1 + 0x184) = *(byte *)((longlong)param_1 + 0x184) & 0xfe;
  *(byte *)((longlong)param_1 + 0x9f) = *(byte *)((longlong)param_1 + 0x9f) | 1;
  *(byte *)(param_1 + 0x2e) = *(byte *)(param_1 + 0x2e) & 0x3e;
  *(undefined4 *)(param_1 + 0x3b) = 0x3d4ccccd;
  *(undefined4 *)(param_1 + 0x3c) = 8;
  *(undefined1 *)((longlong)param_1 + 0x204) = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
  param_1[0x3f] = 0x3f80000000000000;
  *(undefined1 *)((longlong)param_1 + 0x205) = 0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  return param_1;
}



// FUNCTION 145f8a288 FUN_145f8a288 body=210 status=ok
// SIG undefined FUN_145f8a288(void)

undefined8 * FUN_145f8a288(undefined8 *param_1)

{
  FUN_14077009c();
  *param_1 = &PTR_FUN_14b5370e0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  return param_1;
}



// FUNCTION 145f8a35a FUN_145f8a35a body=125 status=ok
// SIG undefined FUN_145f8a35a(void)

void FUN_145f8a35a(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145f8a3d8(puVar1);
  *puVar1 = &PTR_FUN_14bdc0fd0;
  puVar1[5] = &PTR_FUN_14bdc1380;
  puVar1[0x13] = &PTR_FUN_14bdc13a0;
  puVar1[0x34] = &PTR_FUN_14bdc13d0;
  *(undefined2 *)(puVar1 + 0x35) = 0x100;
  *(undefined8 *)((longlong)puVar1 + 0x1ac) = 0x300000002;
  puVar1[0x37] = 0;
  puVar1[0x38] = 0;
  puVar1[0x39] = 0;
  puVar1[0x3a] = 0;
  puVar1[0x3b] = 0;
  return;
}



// FUNCTION 145f8a3d8 FUN_145f8a3d8 body=96 status=ok
// SIG undefined FUN_145f8a3d8(void)

undefined8 * FUN_145f8a3d8(undefined8 *param_1)

{
  FUN_1458de9a4();
  *param_1 = &PTR_FUN_14bd99550;
  param_1[5] = &PTR_FUN_14bd99900;
  param_1[0x13] = &PTR_FUN_14bd99920;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  FUN_1457e37e0(param_1 + 0x18);
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  return param_1;
}



// FUNCTION 145f8a438 FUN_145f8a438 body=40 status=ok
// SIG undefined FUN_145f8a438(void)

undefined8 FUN_145f8a438(undefined8 param_1,int param_2)

{
  FUN_145f8a460();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145f8a460 FUN_145f8a460 body=181 status=ok
// SIG undefined FUN_145f8a460(void)

void FUN_145f8a460(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bdce950;
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x1f],*(undefined4 *)(param_1 + 0x20));
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x1b],*(undefined4 *)(param_1 + 0x1c));
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_140e36c74(param_1);
  return;
}



// FUNCTION 145f8a516 FUN_145f8a516 body=149 status=ok
// SIG undefined FUN_145f8a516(void)

void FUN_145f8a516(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined1 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    lVar1 = FUN_1410dec34();
    if (lVar1 != 0) {
      lVar2 = FUN_1410decb6();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        local_28 = &LAB_145837f18;
        local_20 = 0;
        lVar1 = FUN_145f8a5ac(lVar1,*(undefined8 *)(param_1 + 0x70),param_1);
        *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(lVar1 + 8);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f8a5ac FUN_145f8a5ac body=246 status=ok
// SIG undefined FUN_145f8a5ac(void)

undefined8 *
FUN_145f8a5ac(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar3 = *param_4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  iVar2 = DAT_14c762760 + 1;
  *(int *)(puVar4 + 1) = DAT_14c762760;
  DAT_14c762760 = iVar2;
  puVar4[2] = 0;
  FUN_14485c47a(puVar4 + 2,param_2);
  *(undefined1 *)(puVar4 + 3) = 1;
  *puVar4 = &PTR_FUN_14b5afc70;
  puVar4[4] = 0;
  puVar4[5] = 0;
  *(undefined1 *)(puVar4 + 6) = 0;
  uVar5 = FUN_145f8a6a4(puVar4 + 4);
  local_48 = uVar3;
  local_40 = uVar1;
  FUN_145f8a78a(uVar5,param_3);
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
    FUN_141053524((longlong *)(param_1 + 0x198),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar4;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f8a6a4 FUN_145f8a6a4 body=230 status=ok
// SIG undefined FUN_145f8a6a4(void)

longlong FUN_145f8a6a4(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  FUN_1410534e0();
  plVar3 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b5afca0;
  plVar3[2] = 0;
  plVar3[3] = 0;
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_145f8a70c;
    param_1[1] = 0;
LAB_145f8a72b:
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
    if (plVar3 == (longlong *)0x0) goto LAB_145f8a70c;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = (longlong)(plVar3 + 2);
    plVar4 = (longlong *)param_1[1];
    if (plVar3 == plVar4) {
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
    else {
      param_1[1] = (longlong)plVar3;
      if (plVar4 != (longlong *)0x0) goto LAB_145f8a72b;
    }
  }
  LOCK();
  plVar4 = plVar3 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_145f8a70c:
  return *param_1;
}



// FUNCTION 145f8a78a FUN_145f8a78a body=423 status=ok
// SIG undefined FUN_145f8a78a(void)

void FUN_145f8a78a(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x28);
  if (plVar6 == (longlong *)0x0) {
LAB_145f8a860:
    *puVar5 = &PTR_LAB_14b5afcc0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b99e870;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145f8a860;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 0x20);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b5afcc0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b99e870;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145f8a919. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145f8a932 FUN_145f8a932 body=205 status=ok
// SIG undefined FUN_145f8a932(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f8a932(void)

{
  if ((DAT_14c9fbd1f & 2) == 0) {
    DAT_14c9fbd1f = DAT_14c9fbd1f | 2;
    _DAT_14c9fbcc0 = L"FClearLumenCardCapturePS";
    _DAT_14c9fbcd8 = FUN_146826540;
    _DAT_14c9fbce0 = FUN_146825d77;
    _DAT_14c9fbce8 = FUN_146825fd6;
    _DAT_14c9fbcf0 = FUN_1407e02ea;
    _DAT_14c9fbcf8 = FUN_146826273;
    _DAT_14c9fbcd0 = FUN_14720839a;
    _DAT_14c9fbd10 = 0xffffffff000000e0;
    _DAT_14c9fbd18 = 8;
    DAT_14c9fbd1c = 0;
    _DAT_14c9fbd00 = &LAB_1472083c4;
    FUN_145f8aa00();
    FUN_1407e00cc(&DAT_14c9fbcb8);
    return;
  }
  return;
}



// FUNCTION 145f8aa00 FUN_145f8aa00 body=123 status=ok
// SIG undefined FUN_145f8aa00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f8aa00(void)

{
  _DAT_14ca002c8 = L"BASE";
  DAT_14ca002f2 = 4;
  _DAT_14ca002d0 = FUN_140b35ae4();
  _DAT_14ca002d8 = DAT_14c9fbcc8;
  _DAT_14ca002e0 = &LAB_14682652b;
  DAT_14c9fbcc8 = &DAT_14ca002c8;
  DAT_14c9fbd1d = DAT_14c9fbd1d + '\x01';
  _DAT_14ca002e8 = 0x100000000;
  if (*(char *)(_DAT_14ca002d0 + 100) != '\0') {
    DAT_14c9fbd1e = DAT_14c9fbd1e + '\x01';
  }
  return;
}



// FUNCTION 145f8aa7c FUN_145f8aa7c body=228 status=ok
// SIG undefined FUN_145f8aa7c(void)

longlong * FUN_145f8aa7c(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_147216a42;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145f8ab6c FUN_145f8ab6c body=431 status=ok
// SIG undefined FUN_145f8ab6c(void)

undefined8 * FUN_145f8ab6c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_98 [39];
  undefined1 local_71;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 local_5c [4];
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140ecae36();
  *param_1 = &PTR_FUN_14b366520;
  FUN_1447715ec(param_1 + 5,&DAT_14cb86ae0);
  FUN_1447715ec(param_1 + 10,&DAT_14cb86b08);
  param_1[0x10] = DAT_14cb86ad8;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x41c00000;
  puVar1 = param_1 + 0x12;
  local_71 = 0;
  local_68 = (undefined1 *)CONCAT44(local_68._4_4_,DAT_14cb8dbd8);
  local_70 = DAT_14cb8dbd0;
  FUN_1448075d0(local_58,&local_70);
  local_70 = local_58;
  local_68 = &local_71;
  FUN_140ecaa46(puVar1,local_5c,&local_70,0);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  local_71 = 3;
  local_68 = (undefined1 *)CONCAT44(local_68._4_4_,DAT_14cb8dbf0);
  local_70 = DAT_14cb8dbe8;
  FUN_1448075d0(local_58,&local_70);
  local_70 = local_58;
  local_68 = &local_71;
  FUN_140ecaa46(puVar1,local_5c,&local_70,0);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  local_71 = 0;
  local_68 = (undefined1 *)CONCAT44(local_68._4_4_,DAT_14cb8dc08);
  local_70 = DAT_14cb8dc00;
  FUN_1448075d0(local_58,&local_70);
  local_70 = local_58;
  local_68 = &local_71;
  FUN_140ecaa46(puVar1,local_5c,&local_70,0);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  *(undefined1 *)((longlong)param_1 + 0xec) = 1;
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f8ad1c FUN_145f8ad1c body=842 status=ok
// SIG undefined FUN_145f8ad1c(void)

void FUN_145f8ad1c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1415a4f06(*(undefined8 *)(param_1 + 0x2c0));
  FUN_145f8b068(*(undefined8 *)(param_1 + 8));
  plVar3 = (longlong *)(param_1 + 0x120);
  lVar4 = param_1 + 0x130;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = lVar4;
  if (*(int *)(param_1 + 0x148) == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar7 = *(int *)(param_1 + 0x148);
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = plVar3;
  if ((iStack_44 != iVar7) || (uStack_50 != lVar4)) {
    do {
      do {
        FUN_140414380(*(undefined8 *)(*local_80 + 8 + (longlong)iStack_64 * 0x18),0);
        local_68 = local_68 & ~uStack_74;
        FUN_1449c0562(&local_78);
      } while (iStack_64 != iVar7);
    } while ((CONCAT44(uStack_6c,uStack_70) != lVar4) || (local_80 != plVar3));
  }
  FUN_1415a4f92(param_1);
  FUN_14080c2b4();
  if (*(longlong *)(param_1 + 0x2b8) != 0) {
    *(undefined8 *)(param_1 + 0x2b8) = 0;
    FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  plVar5 = *(longlong **)(param_1 + 0x2d8);
  if (plVar5 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x2d8) = 0;
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  plVar5 = *(longlong **)(param_1 + 0x2c8);
  if (plVar5 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x2c8) = 0;
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  *(undefined8 *)(param_1 + 8) = 0;
  plVar5 = *(longlong **)(param_1 + 0x10);
  if (plVar5 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x338) = 0;
  if (*(int *)(param_1 + 0x33c) != 0) {
    FUN_14751439e(param_1 + 0x330);
  }
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  if (*(int *)(param_1 + 0x148) == 0) {
    iVar7 = 0;
    uStack_50 = lVar4;
  }
  else {
    uStack_50 = lVar4;
    FUN_1449c0562(&local_58);
    iVar7 = *(int *)(param_1 + 0x148);
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = plVar3;
  if ((iStack_44 != iVar7) || (uStack_50 != lVar4)) {
    do {
      puVar6 = *(undefined8 **)(*local_80 + 8 + (longlong)iStack_64 * 0x18);
      if (puVar6 != (undefined8 *)0x0) {
        (**(code **)*puVar6)(puVar6,1);
      }
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (((iStack_64 != iVar7) || (CONCAT44(uStack_6c,uStack_70) != lVar4)) ||
            (local_80 != plVar3));
  }
  FUN_145f8b192(plVar3);
  *(undefined4 *)(param_1 + 0x418) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x410) = 0;
  if (*(int *)(param_1 + 0x414) != 0) {
    FUN_14122c398(param_1 + 1000);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145f8b068 FUN_145f8b068 body=42 status=ok
// SIG undefined FUN_145f8b068(void)

void FUN_145f8b068(longlong *param_1)

{
  FUN_145f8b092(*param_1);
  if (*param_1 != param_1[2]) {
    FUN_145f8b092();
    return;
  }
  return;
}



// FUNCTION 145f8b092 FUN_145f8b092 body=81 status=ok
// SIG undefined FUN_145f8b092(void)

void FUN_145f8b092(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x1e8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x1e0);
    lVar3 = 0;
    do {
      (**(code **)(**(longlong **)(lVar2 + lVar3) + 0x20))();
      lVar3 = lVar3 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar3);
  }
  FUN_145f8b0f0(param_1 + 0x240,param_1);
  return;
}



// FUNCTION 145f8b0f0 FUN_145f8b0f0 body=162 status=ok
// SIG undefined FUN_145f8b0f0(void)

void FUN_145f8b0f0(longlong *param_1,undefined8 param_2)

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
        goto LAB_145f8b17d;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145f8b17d:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 145f8b192 FUN_145f8b192 body=63 status=ok
// SIG undefined FUN_145f8b192(void)

void FUN_145f8b192(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145f8b4bc(param_1);
    FUN_145f8b1d2(param_1);
    return;
  }
  FUN_145f8b1d2(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_14614b7a2(param_1);
  return;
}



// FUNCTION 145f8b1d2 FUN_145f8b1d2 body=88 status=ok
// SIG undefined FUN_145f8b1d2(void)

void FUN_145f8b1d2(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145f8b244 FUN_145f8b244 body=34 status=ok
// SIG undefined FUN_145f8b244(void)

void FUN_145f8b244(longlong param_1,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000145f8b263. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x98) + 0x18))
            (*(longlong **)(param_1 + 0x98),param_1 + 0x78,param_1 + 0x88,param_2);
  return;
}



// FUNCTION 145f8b266 FUN_145f8b266 body=597 status=ok
// SIG undefined FUN_145f8b266(void)

void FUN_145f8b266(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  longlong *local_58;
  longlong *local_50;
  undefined2 local_48;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_38 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_68 = local_30;
  iStack_64 = iStack_2c;
  local_60 = local_28;
  local_5c = local_24;
  local_78 = local_40;
  local_70 = local_38;
  local_48 = 0;
  local_80 = param_1;
  local_58 = param_1;
  local_50 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      lVar2 = *(longlong *)(*(longlong *)(*local_80 + 8 + (longlong)iStack_64 * 0x20) + 8);
      lVar3 = lVar2 + 0x20;
      if (lVar2 == 0) {
        lVar3 = 0;
      }
      FUN_140414380(lVar3,0);
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
    if (((local_48 & 1) != 0) && (local_48._1_1_ == '\x01')) {
      FUN_147515a72(local_50,(int)local_50[1] - *(int *)((longlong)local_50 + 0x34));
    }
  }
  plVar1 = param_1 + 10;
  local_38 = param_1 + 0xc;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if ((int)param_1[0xf] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_68 = local_30;
  iStack_64 = iStack_2c;
  local_60 = local_28;
  local_5c = local_24;
  local_78 = local_40;
  local_70 = local_38;
  local_48 = 0;
  local_80 = plVar1;
  local_58 = plVar1;
  local_50 = plVar1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      FUN_140689f32(*(undefined8 *)(*local_80 + 8 + (longlong)iStack_64 * 0x20));
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
    if (((local_48 & 1) != 0) && (local_48._1_1_ == '\x01')) {
      FUN_147515c94(local_50,(int)local_50[1] - *(int *)((longlong)local_50 + 0x34));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f8b4bc FUN_145f8b4bc body=325 status=ok
// SIG undefined FUN_145f8b4bc(void)

void FUN_145f8b4bc(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145f8b602 FUN_145f8b602 body=127 status=ok
// SIG undefined FUN_145f8b602(void)

undefined8 * FUN_145f8b602(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_145f8b682();
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



// FUNCTION 145f8b682 FUN_145f8b682 body=150 status=ok
// SIG undefined FUN_145f8b682(void)

longlong * FUN_145f8b682(longlong *param_1,longlong *param_2)

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



// FUNCTION 145f8b724 FUN_145f8b724 body=210 status=ok
// SIG undefined FUN_145f8b724(void)

undefined8 * FUN_145f8b724(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1406ed334();
  *param_1 = &PTR_FUN_14a4b3700;
  param_1[0x1f] = &PTR_FUN_14a4b3a70;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x10c) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x134) = 0;
  uVar1 = DAT_14c846500;
  param_1[0x27] = DAT_14c8464f8;
  param_1[0x28] = uVar1;
  param_1[0x29] = DAT_14c846508;
  local_28 = 0x7b5ae74c;
  uStack_24 = 0xd2704c10;
  uStack_20 = 0xa9585798;
  uStack_1c = 0xb212a5a;
  iVar2 = FUN_1448a256a(param_1);
  *(undefined1 *)(param_1 + 0xb) = 1;
  *(char *)((longlong)param_1 + 0x59) = '\x02' - (iVar2 < 6);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


