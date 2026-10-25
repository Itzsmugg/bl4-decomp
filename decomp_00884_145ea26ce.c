// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145ea26ce FUN_145ea26ce body=226 status=ok
// SIG undefined FUN_145ea26ce(void)

longlong * FUN_145ea26ce(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_146307a9a;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ea27b6 FUN_145ea27b6 body=138 status=ok
// SIG undefined FUN_145ea27b6(void)

code * FUN_145ea27b6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000001ce;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472f62f4;
}



// FUNCTION 145ea2840 FUN_145ea2840 body=140 status=ok
// SIG undefined FUN_145ea2840(void)

undefined1 * FUN_145ea2840(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1405f00c8();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Common";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FShaderPrintCommonParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1cc;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca4d288;
  return &LAB_145ea27b2;
}



// FUNCTION 145ea28cc FUN_145ea28cc body=292 status=ok
// SIG undefined FUN_145ea28cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ea28cc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4db38) {
    FUN_144b3d300(&DAT_14ca4db38);
    if (DAT_14ca4db38 == -1) {
      FUN_145ea2b3a();
      FUN_145ea29f0();
      FUN_140db5666(&DAT_14ca4da90,0,&DAT_14ca4da28,L"FShaderBuildIndirectDrawArgsCS",
                    L"/Engine/Private/ShaderPrintDraw.usf",L"BuildIndirectDrawArgsCS",5,1,
                    FUN_1472eafea,FUN_1472eaf8a,&LAB_1472eaf60,&LAB_1472eaf5c,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca56050);
      _DAT_14ca4da90 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14303e9b6);
      _Init_thread_footer(&DAT_14ca4db38);
    }
  }
  return &DAT_14ca4da90;
}



// FUNCTION 145ea29f0 FUN_145ea29f0 body=205 status=ok
// SIG undefined FUN_145ea29f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ea29f0(void)

{
  if ((DAT_14ca4da8f & 2) == 0) {
    DAT_14ca4da8f = DAT_14ca4da8f | 2;
    _DAT_14ca4da30 = L"FShaderBuildIndirectDrawArgsCS";
    _DAT_14ca4da48 = FUN_146826540;
    _DAT_14ca4da50 = FUN_146825d77;
    _DAT_14ca4da58 = FUN_146825fd6;
    _DAT_14ca4da60 = FUN_1407e02ea;
    _DAT_14ca4da68 = FUN_146826273;
    _DAT_14ca4da40 = FUN_1472eaf2c;
    _DAT_14ca4da80 = 0xffffffff000000e0;
    _DAT_14ca4da88 = 8;
    DAT_14ca4da8c = 0;
    _DAT_14ca4da70 = &LAB_1472eaf58;
    FUN_145ea2abe();
    FUN_1407e00cc(&DAT_14ca4da28);
    return;
  }
  return;
}



// FUNCTION 145ea2abe FUN_145ea2abe body=123 status=ok
// SIG undefined FUN_145ea2abe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ea2abe(void)

{
  _DAT_14ca569d8 = L"BASE";
  DAT_14ca56a02 = 4;
  _DAT_14ca569e0 = FUN_140b35ae4();
  _DAT_14ca569e8 = DAT_14ca4da38;
  _DAT_14ca569f0 = &LAB_14682652b;
  DAT_14ca4da38 = &DAT_14ca569d8;
  DAT_14ca4da8d = DAT_14ca4da8d + '\x01';
  _DAT_14ca569f8 = 0x100000000;
  if (*(char *)(_DAT_14ca569e0 + 100) != '\0') {
    DAT_14ca4da8e = DAT_14ca4da8e + '\x01';
  }
  return;
}



// FUNCTION 145ea2b3a FUN_145ea2b3a body=261 status=ok
// SIG undefined FUN_145ea2b3a(void)

void FUN_145ea2b3a(void)

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
              0x110) < DAT_14ca560d0) {
    FUN_144b3d300(&DAT_14ca560d0);
    if (DAT_14ca560d0 == -1) {
      FUN_145ea2c40(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x20f;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca56050,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14305d7ed);
      _Init_thread_footer(&DAT_14ca560d0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ea2c40 FUN_145ea2c40 body=226 status=ok
// SIG undefined FUN_145ea2c40(void)

longlong * FUN_145ea2c40(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_146307d54;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ea2d28 FUN_145ea2d28 body=138 status=ok
// SIG undefined FUN_145ea2d28(void)

code * FUN_145ea2d28(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SymbolsBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000211;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ea2db2;
}



// FUNCTION 145ea2db2 FUN_145ea2db2 body=140 status=ok
// SIG undefined FUN_145ea2db2(void)

undefined1 * FUN_145ea2db2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1405f00c8();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Common";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FShaderPrintCommonParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x210;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca4d288;
  return &LAB_145ea2d24;
}



// FUNCTION 145ea2e3e FUN_145ea2e3e body=205 status=ok
// SIG undefined FUN_145ea2e3e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ea2e3e(void)

{
  if ((DAT_14ca5db7f & 2) == 0) {
    DAT_14ca5db7f = DAT_14ca5db7f | 2;
    _DAT_14ca5db20 = L"FStochasticLightingStoreSceneHistoryCS";
    _DAT_14ca5db38 = FUN_146826540;
    _DAT_14ca5db40 = FUN_146825d77;
    _DAT_14ca5db48 = FUN_146825fd6;
    _DAT_14ca5db50 = FUN_1407e02ea;
    _DAT_14ca5db58 = FUN_146826273;
    _DAT_14ca5db30 = FUN_14731714c;
    _DAT_14ca5db70 = 0xffffffff000000e0;
    _DAT_14ca5db78 = 8;
    DAT_14ca5db7c = 0;
    _DAT_14ca5db60 = &LAB_147317176;
    FUN_145ea2f0c();
    FUN_1407e00cc(&DAT_14ca5db18);
    return;
  }
  return;
}



// FUNCTION 145ea2f0c FUN_145ea2f0c body=123 status=ok
// SIG undefined FUN_145ea2f0c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ea2f0c(void)

{
  _DAT_14ca5fc48 = L"BASE";
  DAT_14ca5fc72 = 4;
  _DAT_14ca5fc50 = FUN_140b35ae4();
  _DAT_14ca5fc58 = DAT_14ca5db28;
  _DAT_14ca5fc60 = &LAB_14682652b;
  DAT_14ca5db28 = &DAT_14ca5fc48;
  DAT_14ca5db7d = DAT_14ca5db7d + '\x01';
  _DAT_14ca5fc68 = 0x100000000;
  if (*(char *)(_DAT_14ca5fc50 + 100) != '\0') {
    DAT_14ca5db7e = DAT_14ca5db7e + '\x01';
  }
  return;
}



// FUNCTION 145ea2f88 FUN_145ea2f88 body=226 status=ok
// SIG undefined FUN_145ea2f88(void)

longlong * FUN_145ea2f88(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_14630cb3c;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ea3070 FUN_145ea3070 body=138 status=ok
// SIG undefined FUN_145ea3070(void)

code * FUN_145ea3070(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000010;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ea30fa;
}



// FUNCTION 145ea30fa FUN_145ea30fa body=146 status=ok
// SIG undefined FUN_145ea30fa(void)

code * FUN_145ea30fa(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000000f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca5dd00;
  return FUN_14630cbc4;
}



// FUNCTION 145ea318c FUN_145ea318c body=205 status=ok
// SIG undefined FUN_145ea318c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ea318c(void)

{
  if ((DAT_14ca66777 & 2) == 0) {
    DAT_14ca66777 = DAT_14ca66777 | 2;
    _DAT_14ca66718 = L"FVirtualSmBuildHZBPerPageCS";
    _DAT_14ca66730 = FUN_146826540;
    _DAT_14ca66738 = FUN_146825d77;
    _DAT_14ca66740 = FUN_146825fd6;
    _DAT_14ca66748 = FUN_1407e02ea;
    _DAT_14ca66750 = FUN_146826273;
    _DAT_14ca66728 = FUN_14732cb7a;
    _DAT_14ca66768 = 0xffffffff000000e0;
    _DAT_14ca66770 = 8;
    DAT_14ca66774 = 0;
    _DAT_14ca66758 = &LAB_14732cba4;
    FUN_145ea325a();
    FUN_1407e00cc(&DAT_14ca66710);
    return;
  }
  return;
}



// FUNCTION 145ea325a FUN_145ea325a body=123 status=ok
// SIG undefined FUN_145ea325a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ea325a(void)

{
  _DAT_14ca69020 = L"BASE";
  DAT_14ca6904a = 4;
  _DAT_14ca69028 = FUN_140b35ae4();
  _DAT_14ca69030 = DAT_14ca66720;
  _DAT_14ca69038 = &LAB_14682652b;
  DAT_14ca66720 = &DAT_14ca69020;
  DAT_14ca66775 = DAT_14ca66775 + '\x01';
  _DAT_14ca69040 = 0x100000000;
  if (*(char *)(_DAT_14ca69028 + 100) != '\0') {
    DAT_14ca66776 = DAT_14ca66776 + '\x01';
  }
  return;
}



// FUNCTION 145ea32d6 FUN_145ea32d6 body=226 status=ok
// SIG undefined FUN_145ea32d6(void)

longlong * FUN_145ea32d6(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_146312e5e;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ea33be FUN_145ea33be body=138 status=ok
// SIG undefined FUN_145ea33be(void)

code * FUN_145ea33be(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PhysicalPagesForHZB";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer< uint >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000e9c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146312ee6;
}



// FUNCTION 145ea3448 FUN_145ea3448 body=146 status=ok
// SIG undefined FUN_145ea3448(void)

code * FUN_145ea3448(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000e9a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca64298;
  return FUN_14733187a;
}



// FUNCTION 145ea34da FUN_145ea34da body=292 status=ok
// SIG undefined FUN_145ea34da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ea34da(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca6b428) {
    FUN_144b3d300(&DAT_14ca6b428);
    if (DAT_14ca6b428 == -1) {
      FUN_145ea3748();
      FUN_145ea35fe();
      FUN_140db5666(&DAT_14ca6b380,0,&DAT_14ca6b318,L"FInjectShadowedLocalLightRGS",
                    L"/Engine/Private/VolumetricFog.usf",L"InjectShadowedLocalLightRGS",6,0x10,
                    FUN_147334b16,FUN_147334ad2,&LAB_146313d00,&LAB_147334ace,&LAB_147334ac8,
                    &LAB_147334ac0,0xe0,&DAT_14ca6cd78);
      _DAT_14ca6b380 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431028e5);
      _Init_thread_footer(&DAT_14ca6b428);
    }
  }
  return &DAT_14ca6b380;
}



// FUNCTION 145ea35fe FUN_145ea35fe body=205 status=ok
// SIG undefined FUN_145ea35fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ea35fe(void)

{
  if ((DAT_14ca6b37f & 2) == 0) {
    DAT_14ca6b37f = DAT_14ca6b37f | 2;
    _DAT_14ca6b320 = L"FInjectShadowedLocalLightRGS";
    _DAT_14ca6b338 = FUN_146826540;
    _DAT_14ca6b340 = FUN_146825d77;
    _DAT_14ca6b348 = FUN_146825fd6;
    _DAT_14ca6b350 = FUN_1407e02ea;
    _DAT_14ca6b358 = FUN_146826273;
    _DAT_14ca6b330 = FUN_147334a92;
    _DAT_14ca6b370 = 0xffffffff000000e0;
    _DAT_14ca6b378 = 8;
    DAT_14ca6b37c = 0;
    _DAT_14ca6b360 = &LAB_147334abc;
    FUN_145ea36cc();
    FUN_1407e00cc(&DAT_14ca6b318);
    return;
  }
  return;
}



// FUNCTION 145ea36cc FUN_145ea36cc body=123 status=ok
// SIG undefined FUN_145ea36cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ea36cc(void)

{
  _DAT_14ca6d580 = L"BASE";
  DAT_14ca6d5aa = 4;
  _DAT_14ca6d588 = FUN_140b35ae4();
  _DAT_14ca6d590 = DAT_14ca6b328;
  _DAT_14ca6d598 = &LAB_14682652b;
  DAT_14ca6b328 = &DAT_14ca6d580;
  DAT_14ca6b37d = DAT_14ca6b37d + '\x01';
  _DAT_14ca6d5a0 = 0x100000000;
  if (*(char *)(_DAT_14ca6d588 + 100) != '\0') {
    DAT_14ca6b37e = DAT_14ca6b37e + '\x01';
  }
  return;
}



// FUNCTION 145ea3748 FUN_145ea3748 body=261 status=ok
// SIG undefined FUN_145ea3748(void)

void FUN_145ea3748(void)

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
              0x110) < DAT_14ca6cdf8) {
    FUN_144b3d300(&DAT_14ca6cdf8);
    if (DAT_14ca6cdf8 == -1) {
      FUN_145ea384e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x210;
      local_58 = 400;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca6cd78,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14310e767);
      _Init_thread_footer(&DAT_14ca6cdf8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ea384e FUN_145ea384e body=226 status=ok
// SIG undefined FUN_145ea384e(void)

longlong * FUN_145ea384e(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_14631531c;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ea3936 FUN_145ea3936 body=138 status=ok
// SIG undefined FUN_145ea3936(void)

code * FUN_145ea3936(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1f800000194;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147339988;
}



// FUNCTION 145ea39c0 FUN_145ea39c0 body=140 status=ok
// SIG undefined FUN_145ea39c0(void)

undefined1 * FUN_145ea39c0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145d412e2();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Common";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FInjectShadowedLocalLightCommonParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x191;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca6ccf0;
  return &LAB_145ea3932;
}



// FUNCTION 145ea3a4c FUN_145ea3a4c body=292 status=ok
// SIG undefined FUN_145ea3a4c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ea3a4c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caad1f8) {
    FUN_144b3d300(&DAT_14caad1f8);
    if (DAT_14caad1f8 == -1) {
      FUN_145ea3cba();
      FUN_145ea3b70();
      FUN_140db5666(&DAT_14caad150,0,&DAT_14caad0e8,L"FCompositeCS",
                    L"/Engine/Private/CompositeUIPixelShader.usf",L"CompositeUICS",5,4,FUN_14750d47a
                    ,FUN_14750d41a,FUN_145825f60,&LAB_14750d416,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14cab05c8);
      _DAT_14caad150 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1432bd3a5);
      _Init_thread_footer(&DAT_14caad1f8);
    }
  }
  return &DAT_14caad150;
}



// FUNCTION 145ea3b70 FUN_145ea3b70 body=205 status=ok
// SIG undefined FUN_145ea3b70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ea3b70(void)

{
  if ((DAT_14caad14f & 2) == 0) {
    DAT_14caad14f = DAT_14caad14f | 2;
    _DAT_14caad0f0 = L"FCompositeCS";
    _DAT_14caad108 = FUN_146826540;
    _DAT_14caad110 = FUN_146825d77;
    _DAT_14caad118 = FUN_146825fd6;
    _DAT_14caad120 = FUN_1407e02ea;
    _DAT_14caad128 = FUN_146826273;
    _DAT_14caad100 = FUN_14750d3e8;
    _DAT_14caad140 = 0xffffffff000000e0;
    _DAT_14caad148 = 8;
    DAT_14caad14c = 0;
    _DAT_14caad130 = &LAB_14750d412;
    FUN_145ea3c3e();
    FUN_1407e00cc(&DAT_14caad0e8);
    return;
  }
  return;
}



// FUNCTION 145ea3c3e FUN_145ea3c3e body=123 status=ok
// SIG undefined FUN_145ea3c3e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ea3c3e(void)

{
  _DAT_14cab0e48 = L"BASE";
  DAT_14cab0e72 = 4;
  _DAT_14cab0e50 = FUN_140b35ae4();
  _DAT_14cab0e58 = DAT_14caad0f8;
  _DAT_14cab0e60 = &LAB_14682652b;
  DAT_14caad0f8 = &DAT_14cab0e48;
  DAT_14caad14d = DAT_14caad14d + '\x01';
  _DAT_14cab0e68 = 0x100000000;
  if (*(char *)(_DAT_14cab0e50 + 100) != '\0') {
    DAT_14caad14e = DAT_14caad14e + '\x01';
  }
  return;
}



// FUNCTION 145ea3cba FUN_145ea3cba body=261 status=ok
// SIG undefined FUN_145ea3cba(void)

void FUN_145ea3cba(void)

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
              0x110) < DAT_14cab0648) {
    FUN_144b3d300(&DAT_14cab0648);
    if (DAT_14cab0648 == -1) {
      FUN_145ea3dc0(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0x270;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cab05c8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1432c72d3);
      _Init_thread_footer(&DAT_14cab0648);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ea3dc0 FUN_145ea3dc0 body=226 status=ok
// SIG undefined FUN_145ea3dc0(void)

longlong * FUN_145ea3dc0(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1463374c4;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ea3ea8 FUN_145ea3ea8 body=138 status=ok
// SIG undefined FUN_145ea3ea8(void)

code * FUN_145ea3ea8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWSceneTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000272;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ea3f32;
}



// FUNCTION 145ea3f32 FUN_145ea3f32 body=140 status=ok
// SIG undefined FUN_145ea3f32(void)

undefined1 * FUN_145ea3f32(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145dadba6();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Common";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FCompositeShaderCommonParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x271;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14cab0540;
  return &LAB_145ea3ea4;
}



// FUNCTION 145ea3fbe FUN_145ea3fbe body=292 status=ok
// SIG undefined FUN_145ea3fbe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ea3fbe(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad6b90) {
    FUN_144b3d300(&DAT_14cad6b90);
    if (DAT_14cad6b90 == -1) {
      FUN_145ea422c();
      FUN_145ea40e2();
      FUN_140db5666(&DAT_14cad6ae8,0,&DAT_14cad6a80,L"FUploadVisibilityToAtlasCS",
                    L"/Engine/Private/HeightFieldAtlasManagement.usf",L"UploadVisibilityToAtlasCS",5
                    ,1,FUN_147a65f9a,FUN_147a65f3a,&LAB_1463c45f8,&LAB_147a65f36,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cad6d20);
      _DAT_14cad6ae8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1434d0de8);
      _Init_thread_footer(&DAT_14cad6b90);
    }
  }
  return &DAT_14cad6ae8;
}



// FUNCTION 145ea40e2 FUN_145ea40e2 body=205 status=ok
// SIG undefined FUN_145ea40e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ea40e2(void)

{
  if ((DAT_14cad6ae7 & 2) == 0) {
    DAT_14cad6ae7 = DAT_14cad6ae7 | 2;
    _DAT_14cad6a88 = L"FUploadVisibilityToAtlasCS";
    _DAT_14cad6aa0 = FUN_146826540;
    _DAT_14cad6aa8 = FUN_146825d77;
    _DAT_14cad6ab0 = FUN_146825fd6;
    _DAT_14cad6ab8 = FUN_1407e02ea;
    _DAT_14cad6ac0 = FUN_146826273;
    _DAT_14cad6a98 = FUN_147a65f08;
    _DAT_14cad6ad8 = 0xffffffff000000e0;
    _DAT_14cad6ae0 = 8;
    DAT_14cad6ae4 = 0;
    _DAT_14cad6ac8 = &LAB_147a65f32;
    FUN_145ea41b0();
    FUN_1407e00cc(&DAT_14cad6a80);
    return;
  }
  return;
}



// FUNCTION 145ea41b0 FUN_145ea41b0 body=123 status=ok
// SIG undefined FUN_145ea41b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ea41b0(void)

{
  _DAT_14cad6dd8 = L"BASE";
  DAT_14cad6e02 = 4;
  _DAT_14cad6de0 = FUN_140b35ae4();
  _DAT_14cad6de8 = DAT_14cad6a90;
  _DAT_14cad6df0 = &LAB_14682652b;
  DAT_14cad6a90 = &DAT_14cad6dd8;
  DAT_14cad6ae5 = DAT_14cad6ae5 + '\x01';
  _DAT_14cad6df8 = 0x100000000;
  if (*(char *)(_DAT_14cad6de0 + 100) != '\0') {
    DAT_14cad6ae6 = DAT_14cad6ae6 + '\x01';
  }
  return;
}



// FUNCTION 145ea422c FUN_145ea422c body=261 status=ok
// SIG undefined FUN_145ea422c(void)

void FUN_145ea422c(void)

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
              0x110) < DAT_14cad6da0) {
    FUN_144b3d300(&DAT_14cad6da0);
    if (DAT_14cad6da0 == -1) {
      FUN_145ea4332(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x60;
      local_58 = 0x416;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cad6d20,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1434d474b);
      _Init_thread_footer(&DAT_14cad6da0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ea4332 FUN_145ea4332 body=226 status=ok
// SIG undefined FUN_145ea4332(void)

longlong * FUN_145ea4332(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1463c4b64;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ea441a FUN_145ea441a body=138 status=ok
// SIG undefined FUN_145ea441a(void)

code * FUN_145ea441a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VisibilityChannelMask";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000418;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ea44a4;
}



// FUNCTION 145ea44a4 FUN_145ea44a4 body=140 status=ok
// SIG undefined FUN_145ea44a4(void)

undefined1 * FUN_145ea44a4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145debd20();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SharedParams";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FUploadLandscapeTextureToAtlasCS::FSharedParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x417;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14cad6c98;
  return &LAB_145ea4416;
}



// FUNCTION 145ea4548 FUN_145ea4548 body=289 status=ok
// SIG undefined FUN_145ea4548(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ea4548(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d86c0) {
    FUN_144b3d300(&DAT_14c9d86c0);
    if (DAT_14c9d86c0 == -1) {
      FUN_145ea47b4();
      FUN_145ea466a();
      FUN_140db5666(&DAT_14c9d8618,0,&DAT_14c9d85b0,L"FClearUIntGraphicPS",
                    L"/Engine/Private/HairStrands/HairStrandsVisibilityClearPS.usf",L"ClearPS",3,3,
                    FUN_14718444a,FUN_1471843ea,&LAB_1462ca42c,&LAB_1471843e6,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9da948);
      _DAT_14c9d8618 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c66111);
      _Init_thread_footer(&DAT_14c9d86c0);
    }
  }
  return &DAT_14c9d8618;
}



// FUNCTION 145ea466a FUN_145ea466a body=205 status=ok
// SIG undefined FUN_145ea466a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ea466a(void)

{
  if ((DAT_14c9d8617 & 2) == 0) {
    DAT_14c9d8617 = DAT_14c9d8617 | 2;
    _DAT_14c9d85b8 = L"FClearUIntGraphicPS";
    _DAT_14c9d85d0 = FUN_146826540;
    _DAT_14c9d85d8 = FUN_146825d77;
    _DAT_14c9d85e0 = FUN_146825fd6;
    _DAT_14c9d85e8 = FUN_1407e02ea;
    _DAT_14c9d85f0 = FUN_146826273;
    _DAT_14c9d85c8 = FUN_1471843b8;
    _DAT_14c9d8608 = 0xffffffff000000e0;
    _DAT_14c9d8610 = 8;
    DAT_14c9d8614 = 0;
    _DAT_14c9d85f8 = &LAB_1471843e2;
    FUN_145ea4738();
    FUN_1407e00cc(&DAT_14c9d85b0);
    return;
  }
  return;
}



// FUNCTION 145ea4738 FUN_145ea4738 body=123 status=ok
// SIG undefined FUN_145ea4738(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ea4738(void)

{
  _DAT_14c9dc068 = L"BASE";
  DAT_14c9dc092 = 4;
  _DAT_14c9dc070 = FUN_140b35ae4();
  _DAT_14c9dc078 = DAT_14c9d85c0;
  _DAT_14c9dc080 = &LAB_14682652b;
  DAT_14c9d85c0 = &DAT_14c9dc068;
  DAT_14c9d8615 = DAT_14c9d8615 + '\x01';
  _DAT_14c9dc088 = 0x100000000;
  if (*(char *)(_DAT_14c9dc070 + 100) != '\0') {
    DAT_14c9d8616 = DAT_14c9d8616 + '\x01';
  }
  return;
}



// FUNCTION 145ea47b4 FUN_145ea47b4 body=261 status=ok
// SIG undefined FUN_145ea47b4(void)

void FUN_145ea47b4(void)

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
              0x110) < DAT_14c9da9c8) {
    FUN_144b3d300(&DAT_14c9da9c8);
    if (DAT_14c9da9c8 == -1) {
      FUN_145ea48ba(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x140;
      local_58 = 0x737;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9da948,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c71ce5);
      _Init_thread_footer(&DAT_14c9da9c8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ea48ba FUN_145ea48ba body=226 status=ok
// SIG undefined FUN_145ea48ba(void)

longlong * FUN_145ea48ba(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462cc4ce;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ea49a2 FUN_145ea49a2 body=138 status=ok
// SIG undefined FUN_145ea49a2(void)

code * FUN_145ea49a2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"fClearValue";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000739;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14718bf80;
}



// FUNCTION 145ea4a2c FUN_145ea4a2c body=144 status=ok
// SIG undefined FUN_145ea4a2c(void)

code * FUN_145ea4a2c(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x100000073a;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145ea49a2;
}



// FUNCTION 145ea4abc FUN_145ea4abc body=40 status=ok
// SIG undefined FUN_145ea4abc(void)

undefined8 FUN_145ea4abc(undefined8 param_1,int param_2)

{
  FUN_145ea4ae4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ea4ae4 FUN_145ea4ae4 body=212 status=ok
// SIG undefined FUN_145ea4ae4(void)

void FUN_145ea4ae4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b1df4d0;
  param_1[0x94] = &PTR_FUN_14b1df7d0;
  FUN_145ea4c23(param_1[0xab],*(undefined4 *)(param_1 + 0xac));
  if (param_1[0xab] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0xaa];
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
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (param_1[0xa7] != 0) {
    FUN_1400020a8();
  }
  FUN_145ea4bb8(param_1 + 0x9f);
  *(undefined4 *)(param_1 + 0x9e) = 0;
  if (param_1[0x9d] != 0) {
    FUN_1400020a8();
  }
  FUN_145ea4bee(param_1 + 0x95);
  FUN_1457e9076(param_1);
  return;
}



// FUNCTION 145ea4bb8 FUN_145ea4bb8 body=53 status=ok
// SIG undefined FUN_145ea4bb8(void)

void FUN_145ea4bb8(longlong *param_1)

{
  FUN_145ea4c70();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ea4bee FUN_145ea4bee body=53 status=ok
// SIG undefined FUN_145ea4bee(void)

void FUN_145ea4bee(longlong *param_1)

{
  FUN_145ea4dec();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ea4c23 FUN_145ea4c23 body=77 status=ok
// SIG undefined FUN_145ea4c23(void)

void FUN_145ea4c23(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145ea4c70 FUN_145ea4c70 body=378 status=ok
// SIG undefined FUN_145ea4c70(void)

void FUN_145ea4c70(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
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
      plVar4 = *(longlong **)(*local_70 + 0x10 + (longlong)iStack_54 * 0x20);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
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



// FUNCTION 145ea4dec FUN_145ea4dec body=378 status=ok
// SIG undefined FUN_145ea4dec(void)

void FUN_145ea4dec(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
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
      plVar4 = *(longlong **)(*local_70 + 0x10 + (longlong)iStack_54 * 0x20);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
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



// FUNCTION 145ea4f68 FUN_145ea4f68 body=292 status=ok
// SIG undefined FUN_145ea4f68(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ea4f68(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d04c8) {
    FUN_144b3d300(&DAT_14c9d04c8);
    if (DAT_14c9d04c8 == -1) {
      FUN_145ea51d6();
      FUN_145ea508c();
      FUN_140db5666(&DAT_14c9d0420,0,&DAT_14c9d03b8,L"FHairDOFDepthPS",
                    L"/Engine/Private/HairStrands/HairStrandsComposition.usf",L"DOFDepthPS",3,1,
                    FUN_14716a83e,FUN_14716a7de,FUN_1462c5c90,&LAB_14716a7da,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9d3ae0);
      _DAT_14c9d0420 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c32a19);
      _Init_thread_footer(&DAT_14c9d04c8);
    }
  }
  return &DAT_14c9d0420;
}



// FUNCTION 145ea508c FUN_145ea508c body=205 status=ok
// SIG undefined FUN_145ea508c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ea508c(void)

{
  if ((DAT_14c9d041f & 2) == 0) {
    DAT_14c9d041f = DAT_14c9d041f | 2;
    _DAT_14c9d03c0 = L"FHairDOFDepthPS";
    _DAT_14c9d03d8 = FUN_146826540;
    _DAT_14c9d03e0 = FUN_146825d77;
    _DAT_14c9d03e8 = FUN_146825fd6;
    _DAT_14c9d03f0 = FUN_1407e02ea;
    _DAT_14c9d03f8 = FUN_146826273;
    _DAT_14c9d03d0 = FUN_14716a7aa;
    _DAT_14c9d0410 = 0xffffffff000000e0;
    _DAT_14c9d0418 = 8;
    DAT_14c9d041c = 0;
    _DAT_14c9d0400 = &LAB_14716a7d6;
    FUN_145ea515a();
    FUN_1407e00cc(&DAT_14c9d03b8);
    return;
  }
  return;
}



// FUNCTION 145ea515a FUN_145ea515a body=123 status=ok
// SIG undefined FUN_145ea515a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ea515a(void)

{
  _DAT_14c9d4d28 = L"BASE";
  DAT_14c9d4d52 = 4;
  _DAT_14c9d4d30 = FUN_140b35ae4();
  _DAT_14c9d4d38 = DAT_14c9d03c8;
  _DAT_14c9d4d40 = &LAB_14682652b;
  DAT_14c9d03c8 = &DAT_14c9d4d28;
  DAT_14c9d041d = DAT_14c9d041d + '\x01';
  _DAT_14c9d4d48 = 0x100000000;
  if (*(char *)(_DAT_14c9d4d30 + 100) != '\0') {
    DAT_14c9d041e = DAT_14c9d041e + '\x01';
  }
  return;
}



// FUNCTION 145ea51d6 FUN_145ea51d6 body=261 status=ok
// SIG undefined FUN_145ea51d6(void)

void FUN_145ea51d6(void)

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
              0x110) < DAT_14c9d3b60) {
    FUN_144b3d300(&DAT_14c9d3b60);
    if (DAT_14c9d3b60 == -1) {
      FUN_145ea52dc(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x170;
      local_58 = 0x16e;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9d3ae0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c46de9);
      _Init_thread_footer(&DAT_14c9d3b60);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ea52dc FUN_145ea52dc body=226 status=ok
// SIG undefined FUN_145ea52dc(void)

longlong * FUN_145ea52dc(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462c6b34;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ea53c4 FUN_145ea53c4 body=136 status=ok
// SIG undefined FUN_145ea53c4(void)

code * FUN_145ea53c4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HairLightingSampleBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000171;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ea544c;
}



// FUNCTION 145ea544c FUN_145ea544c body=144 status=ok
// SIG undefined FUN_145ea544c(void)

code * FUN_145ea544c(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1000000170;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462c6c4c;
}



// FUNCTION 145ea54dc FUN_145ea54dc body=292 status=ok
// SIG undefined FUN_145ea54dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ea54dc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d9818) {
    FUN_144b3d300(&DAT_14c9d9818);
    if (DAT_14c9d9818 == -1) {
      FUN_145ea574a();
      FUN_145ea5600();
      FUN_140db5666(&DAT_14c9d9770,0,&DAT_14c9d9708,L"FVisiblityRasterHWVS",
                    L"/Engine/Private/HairStrands/HairStrandsVisibilityRasterHW.usf",L"VSMain",0,4,
                    FUN_1471856d4,FUN_147185674,&LAB_1462ca4a4,&LAB_147185670,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9db1c8);
      _DAT_14c9d9770 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c661c9);
      _Init_thread_footer(&DAT_14c9d9818);
    }
  }
  return &DAT_14c9d9770;
}



// FUNCTION 145ea5600 FUN_145ea5600 body=205 status=ok
// SIG undefined FUN_145ea5600(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ea5600(void)

{
  if ((DAT_14c9d976f & 2) == 0) {
    DAT_14c9d976f = DAT_14c9d976f | 2;
    _DAT_14c9d9710 = L"FVisiblityRasterHWVS";
    _DAT_14c9d9728 = FUN_146826540;
    _DAT_14c9d9730 = FUN_146825d77;
    _DAT_14c9d9738 = FUN_146825fd6;
    _DAT_14c9d9740 = FUN_1407e02ea;
    _DAT_14c9d9748 = FUN_146826273;
    _DAT_14c9d9720 = FUN_147185642;
    _DAT_14c9d9760 = 0xffffffff000000e0;
    _DAT_14c9d9768 = 8;
    DAT_14c9d976c = 0;
    _DAT_14c9d9750 = &LAB_14718566c;
    FUN_145ea56ce();
    FUN_1407e00cc(&DAT_14c9d9708);
    return;
  }
  return;
}



// FUNCTION 145ea56ce FUN_145ea56ce body=123 status=ok
// SIG undefined FUN_145ea56ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ea56ce(void)

{
  _DAT_14c9dc338 = L"BASE";
  DAT_14c9dc362 = 4;
  _DAT_14c9dc340 = FUN_140b35ae4();
  _DAT_14c9dc348 = DAT_14c9d9718;
  _DAT_14c9dc350 = &LAB_14682652b;
  DAT_14c9d9718 = &DAT_14c9dc338;
  DAT_14c9d976d = DAT_14c9d976d + '\x01';
  _DAT_14c9dc358 = 0x100000000;
  if (*(char *)(_DAT_14c9dc340 + 100) != '\0') {
    DAT_14c9d976e = DAT_14c9d976e + '\x01';
  }
  return;
}



// FUNCTION 145ea574a FUN_145ea574a body=261 status=ok
// SIG undefined FUN_145ea574a(void)

void FUN_145ea574a(void)

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
              0x110) < DAT_14c9db248) {
    FUN_144b3d300(&DAT_14c9db248);
    if (DAT_14c9db248 == -1) {
      FUN_145ea5850(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1f0;
      local_58 = 0xd9a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9db1c8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c71da5);
      _Init_thread_footer(&DAT_14c9db248);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ea5850 FUN_145ea5850 body=226 status=ok
// SIG undefined FUN_145ea5850(void)

longlong * FUN_145ea5850(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462cd978;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ea5938 FUN_145ea5938 body=136 status=ok
// SIG undefined FUN_145ea5938(void)

code * FUN_145ea5938(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RadiusAtDepth1";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2c00000d9f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14718f33c;
}



// FUNCTION 145ea59c0 FUN_145ea59c0 body=144 status=ok
// SIG undefined FUN_145ea59c0(void)

code * FUN_145ea59c0(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1d000000da2;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462cda00;
}



// FUNCTION 145ea5a50 FUN_145ea5a50 body=205 status=ok
// SIG undefined FUN_145ea5a50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ea5a50(void)

{
  if ((DAT_14c9f46ff & 2) == 0) {
    DAT_14c9f46ff = DAT_14c9f46ff | 2;
    _DAT_14c9f46a0 = L"FReflectionClearTracesCS";
    _DAT_14c9f46b8 = FUN_146826540;
    _DAT_14c9f46c0 = FUN_146825d77;
    _DAT_14c9f46c8 = FUN_146825fd6;
    _DAT_14c9f46d0 = FUN_1407e02ea;
    _DAT_14c9f46d8 = FUN_146826273;
    _DAT_14c9f46b0 = FUN_1471ef93e;
    _DAT_14c9f46f0 = 0xffffffff000000e0;
    _DAT_14c9f46f8 = 8;
    DAT_14c9f46fc = 0;
    _DAT_14c9f46e0 = &LAB_1471ef968;
    FUN_145ea5b1e();
    FUN_1407e00cc(&DAT_14c9f4698);
    return;
  }
  return;
}



// FUNCTION 145ea5b1e FUN_145ea5b1e body=123 status=ok
// SIG undefined FUN_145ea5b1e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ea5b1e(void)

{
  _DAT_14c9f7e18 = L"BASE";
  DAT_14c9f7e42 = 4;
  _DAT_14c9f7e20 = FUN_140b35ae4();
  _DAT_14c9f7e28 = DAT_14c9f46a8;
  _DAT_14c9f7e30 = &LAB_14682652b;
  DAT_14c9f46a8 = &DAT_14c9f7e18;
  DAT_14c9f46fd = DAT_14c9f46fd + '\x01';
  _DAT_14c9f7e38 = 0x100000000;
  if (*(char *)(_DAT_14c9f7e20 + 100) != '\0') {
    DAT_14c9f46fe = DAT_14c9f46fe + '\x01';
  }
  return;
}



// FUNCTION 145ea5b9a FUN_145ea5b9a body=226 status=ok
// SIG undefined FUN_145ea5b9a(void)

longlong * FUN_145ea5b9a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462decf4;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ea5c82 FUN_145ea5c82 body=140 status=ok
// SIG undefined FUN_145ea5c82(void)

undefined1 * FUN_145ea5c82(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145a18586();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ReflectionTracingParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FLumenReflectionTracingParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9f6728;
  return &LAB_145ea5c7e;
}



// FUNCTION 145ea5d0e FUN_145ea5d0e body=146 status=ok
// SIG undefined FUN_145ea5d0e(void)

code * FUN_145ea5d0e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145c0149c();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ReflectionTileParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FLumenReflectionTileParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000000d2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9f66a0;
  return FUN_145ea5c82;
}



// FUNCTION 145ea5da0 FUN_145ea5da0 body=205 status=ok
// SIG undefined FUN_145ea5da0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ea5da0(void)

{
  if ((DAT_14ca017af & 2) == 0) {
    DAT_14ca017af = DAT_14ca017af | 2;
    _DAT_14ca01750 = L"FScreenProbeTraceMeshSDFsCS";
    _DAT_14ca01768 = FUN_146826540;
    _DAT_14ca01770 = FUN_146825d77;
    _DAT_14ca01778 = FUN_146825fd6;
    _DAT_14ca01780 = FUN_1407e02ea;
    _DAT_14ca01788 = FUN_146826273;
    _DAT_14ca01760 = FUN_147221180;
    _DAT_14ca017a0 = 0xffffffff000000e0;
    _DAT_14ca017a8 = 8;
    DAT_14ca017ac = 0;
    _DAT_14ca01790 = &LAB_1472211aa;
    FUN_145ea5e6e();
    FUN_1407e00cc(&DAT_14ca01748);
    return;
  }
  return;
}



// FUNCTION 145ea5e6e FUN_145ea5e6e body=123 status=ok
// SIG undefined FUN_145ea5e6e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ea5e6e(void)

{
  _DAT_14ca078f8 = L"BASE";
  DAT_14ca07922 = 4;
  _DAT_14ca07900 = FUN_140b35ae4();
  _DAT_14ca07908 = DAT_14ca01758;
  _DAT_14ca07910 = &LAB_14682652b;
  DAT_14ca01758 = &DAT_14ca078f8;
  DAT_14ca017ad = DAT_14ca017ad + '\x01';
  _DAT_14ca07918 = 0x100000000;
  if (*(char *)(_DAT_14ca07900 + 100) != '\0') {
    DAT_14ca017ae = DAT_14ca017ae + '\x01';
  }
  return;
}



// FUNCTION 145ea5eea FUN_145ea5eea body=226 status=ok
// SIG undefined FUN_145ea5eea(void)

longlong * FUN_145ea5eea(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462e850e;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ea5fd2 FUN_145ea5fd2 body=142 status=ok
// SIG undefined FUN_145ea5fd2(void)

code * FUN_145ea5fd2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_141359544();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ScreenProbeParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FScreenProbeParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x27000000165;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145ea6060;
}



// FUNCTION 145ea6060 FUN_145ea6060 body=144 status=ok
// SIG undefined FUN_145ea6060(void)

code * FUN_145ea6060(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145da5630();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"MeshSDFGridParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FLumenMeshSDFGridParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x10000000164;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462e874e;
}



// FUNCTION 145ea60f0 FUN_145ea60f0 body=292 status=ok
// SIG undefined FUN_145ea60f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ea60f0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca273c8) {
    FUN_144b3d300(&DAT_14ca273c8);
    if (DAT_14ca273c8 == -1) {
      FUN_145ea635e();
      FUN_145ea6214();
      FUN_140db5666(&DAT_14ca27320,0,&DAT_14ca272b8,L"FSetupExposureIlluminanceCS",
                    L"/Engine/Private/PostProcessEyeAdaptation.usf",L"SetupExposureIlluminance",5,1,
                    FUN_14728b734,FUN_14728b6d4,&LAB_14728b6bc,&LAB_14728b6b8,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca29ff0);
      _DAT_14ca27320 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142ebb1cd);
      _Init_thread_footer(&DAT_14ca273c8);
    }
  }
  return &DAT_14ca27320;
}



// FUNCTION 145ea6214 FUN_145ea6214 body=205 status=ok
// SIG undefined FUN_145ea6214(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ea6214(void)

{
  if ((DAT_14ca2731f & 2) == 0) {
    DAT_14ca2731f = DAT_14ca2731f | 2;
    _DAT_14ca272c0 = L"FSetupExposureIlluminanceCS";
    _DAT_14ca272d8 = FUN_146826540;
    _DAT_14ca272e0 = FUN_146825d77;
    _DAT_14ca272e8 = FUN_146825fd6;
    _DAT_14ca272f0 = FUN_1407e02ea;
    _DAT_14ca272f8 = FUN_146826273;
    _DAT_14ca272d0 = FUN_14728b688;
    _DAT_14ca27310 = 0xffffffff000000e0;
    _DAT_14ca27318 = 8;
    DAT_14ca2731c = 0;
    _DAT_14ca27300 = &LAB_14728b6b4;
    FUN_145ea62e2();
    FUN_1407e00cc(&DAT_14ca272b8);
    return;
  }
  return;
}



// FUNCTION 145ea62e2 FUN_145ea62e2 body=123 status=ok
// SIG undefined FUN_145ea62e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ea62e2(void)

{
  _DAT_14ca2c150 = L"BASE";
  DAT_14ca2c17a = 4;
  _DAT_14ca2c158 = FUN_140b35ae4();
  _DAT_14ca2c160 = DAT_14ca272c8;
  _DAT_14ca2c168 = &LAB_14682652b;
  DAT_14ca272c8 = &DAT_14ca2c150;
  DAT_14ca2731d = DAT_14ca2731d + '\x01';
  _DAT_14ca2c170 = 0x100000000;
  if (*(char *)(_DAT_14ca2c158 + 100) != '\0') {
    DAT_14ca2731e = DAT_14ca2731e + '\x01';
  }
  return;
}



// FUNCTION 145ea635e FUN_145ea635e body=261 status=ok
// SIG undefined FUN_145ea635e(void)

void FUN_145ea635e(void)

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
              0x110) < DAT_14ca2a070) {
    FUN_144b3d300(&DAT_14ca2a070);
    if (DAT_14ca2a070 == -1) {
      FUN_145ea6464(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 400;
      local_58 = 0x279;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca29ff0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142edce5f);
      _Init_thread_footer(&DAT_14ca2a070);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ea6464 FUN_145ea6464 body=226 status=ok
// SIG undefined FUN_145ea6464(void)

longlong * FUN_145ea6464(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462fa3d2;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ea654c FUN_145ea654c body=136 status=ok
// SIG undefined FUN_145ea654c(void)

code * FUN_145ea654c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x700000027c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462fa4ea;
}



// FUNCTION 145ea65d4 FUN_145ea65d4 body=144 status=ok
// SIG undefined FUN_145ea65d4(void)

code * FUN_145ea65d4(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xf00000027f;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462fa45a;
}



// FUNCTION 145ea6664 FUN_145ea6664 body=292 status=ok
// SIG undefined FUN_145ea6664(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ea6664(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca27868) {
    FUN_144b3d300(&DAT_14ca27868);
    if (DAT_14ca27868 == -1) {
      FUN_145ea68d2();
      FUN_145ea6788();
      FUN_140db5666(&DAT_14ca277c0,0,&DAT_14ca27758,L"FBasicEyeAdaptationCS",
                    L"/Engine/Private/PostProcessEyeAdaptation.usf",L"BasicEyeAdaptationCS",5,2,
                    FUN_14728be5c,FUN_14728bdfc,&LAB_14728bde4,&LAB_14728bde0,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca2a210);
      _DAT_14ca277c0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142ebc280);
      _Init_thread_footer(&DAT_14ca27868);
    }
  }
  return &DAT_14ca277c0;
}



// FUNCTION 145ea6788 FUN_145ea6788 body=205 status=ok
// SIG undefined FUN_145ea6788(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ea6788(void)

{
  if ((DAT_14ca277bf & 2) == 0) {
    DAT_14ca277bf = DAT_14ca277bf | 2;
    _DAT_14ca27760 = L"FBasicEyeAdaptationCS";
    _DAT_14ca27778 = FUN_146826540;
    _DAT_14ca27780 = FUN_146825d77;
    _DAT_14ca27788 = FUN_146825fd6;
    _DAT_14ca27790 = FUN_1407e02ea;
    _DAT_14ca27798 = FUN_146826273;
    _DAT_14ca27770 = FUN_14728bdb0;
    _DAT_14ca277b0 = 0xffffffff000000e0;
    _DAT_14ca277b8 = 8;
    DAT_14ca277bc = 0;
    _DAT_14ca277a0 = &LAB_14728bddc;
    FUN_145ea6856();
    FUN_1407e00cc(&DAT_14ca27758);
    return;
  }
  return;
}



// FUNCTION 145ea6856 FUN_145ea6856 body=123 status=ok
// SIG undefined FUN_145ea6856(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ea6856(void)

{
  _DAT_14ca2c210 = L"BASE";
  DAT_14ca2c23a = 4;
  _DAT_14ca2c218 = FUN_140b35ae4();
  _DAT_14ca2c220 = DAT_14ca27768;
  _DAT_14ca2c228 = &LAB_14682652b;
  DAT_14ca27768 = &DAT_14ca2c210;
  DAT_14ca277bd = DAT_14ca277bd + '\x01';
  _DAT_14ca2c230 = 0x100000000;
  if (*(char *)(_DAT_14ca2c218 + 100) != '\0') {
    DAT_14ca277be = DAT_14ca277be + '\x01';
  }
  return;
}



// FUNCTION 145ea68d2 FUN_145ea68d2 body=261 status=ok
// SIG undefined FUN_145ea68d2(void)

void FUN_145ea68d2(void)

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
              0x110) < DAT_14ca2a290) {
    FUN_144b3d300(&DAT_14ca2a290);
    if (DAT_14ca2a290 == -1) {
      FUN_145ea69d8(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x160;
      local_58 = 0x3b9;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca2a210,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142edce8f);
      _Init_thread_footer(&DAT_14ca2a290);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ea69d8 FUN_145ea69d8 body=226 status=ok
// SIG undefined FUN_145ea69d8(void)

longlong * FUN_145ea69d8(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462faaec;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ea6ac0 FUN_145ea6ac0 body=138 status=ok
// SIG undefined FUN_145ea6ac0(void)

code * FUN_145ea6ac0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x148000003bf;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147291dc8;
}



// FUNCTION 145ea6b4a FUN_145ea6b4a body=142 status=ok
// SIG undefined FUN_145ea6b4a(void)

code * FUN_145ea6b4a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145d44362();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"LocalExposure";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FLocalExposureParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xa0000003bc;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462fac04;
}



// FUNCTION 145ea6bd8 FUN_145ea6bd8 body=292 status=ok
// SIG undefined FUN_145ea6bd8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ea6bd8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca36240) {
    FUN_144b3d300(&DAT_14ca36240);
    if (DAT_14ca36240 == -1) {
      FUN_145ea6e46();
      FUN_145ea6cfc();
      FUN_140db5666(&DAT_14ca36198,0,&DAT_14ca36130,L"FVisualizeShadingModelPS",
                    L"/Engine/Private/VisualizeShadingModels.usf",L"MainPS",3,1,FUN_1472aa262,
                    FUN_1472aa202,&LAB_1472aa1ea,&LAB_1472aa1e6,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca381e8);
      _DAT_14ca36198 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f3fa28);
      _Init_thread_footer(&DAT_14ca36240);
    }
  }
  return &DAT_14ca36198;
}



// FUNCTION 145ea6cfc FUN_145ea6cfc body=205 status=ok
// SIG undefined FUN_145ea6cfc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ea6cfc(void)

{
  if ((DAT_14ca36197 & 2) == 0) {
    DAT_14ca36197 = DAT_14ca36197 | 2;
    _DAT_14ca36138 = L"FVisualizeShadingModelPS";
    _DAT_14ca36150 = FUN_146826540;
    _DAT_14ca36158 = FUN_146825d77;
    _DAT_14ca36160 = FUN_146825fd6;
    _DAT_14ca36168 = FUN_1407e02ea;
    _DAT_14ca36170 = FUN_146826273;
    _DAT_14ca36148 = FUN_1472aa1b6;
    _DAT_14ca36188 = 0xffffffff000000e0;
    _DAT_14ca36190 = 8;
    DAT_14ca36194 = 0;
    _DAT_14ca36178 = &LAB_1472aa1e2;
    FUN_145ea6dca();
    FUN_1407e00cc(&DAT_14ca36130);
    return;
  }
  return;
}



// FUNCTION 145ea6dca FUN_145ea6dca body=123 status=ok
// SIG undefined FUN_145ea6dca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ea6dca(void)

{
  _DAT_14ca383f0 = L"BASE";
  DAT_14ca3841a = 4;
  _DAT_14ca383f8 = FUN_140b35ae4();
  _DAT_14ca38400 = DAT_14ca36140;
  _DAT_14ca38408 = &LAB_14682652b;
  DAT_14ca36140 = &DAT_14ca383f0;
  DAT_14ca36195 = DAT_14ca36195 + '\x01';
  _DAT_14ca38410 = 0x100000000;
  if (*(char *)(_DAT_14ca383f8 + 100) != '\0') {
    DAT_14ca36196 = DAT_14ca36196 + '\x01';
  }
  return;
}



// FUNCTION 145ea6e46 FUN_145ea6e46 body=261 status=ok
// SIG undefined FUN_145ea6e46(void)

void FUN_145ea6e46(void)

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
              0x110) < DAT_14ca38268) {
    FUN_144b3d300(&DAT_14ca38268);
    if (DAT_14ca38268 == -1) {
      FUN_145ea6f4c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x170;
      local_58 = 0x17;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca381e8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f539fb);
      _Init_thread_footer(&DAT_14ca38268);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ea6f4c FUN_145ea6f4c body=226 status=ok
// SIG undefined FUN_145ea6f4c(void)

longlong * FUN_145ea6f4c(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_146300b7a;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ea7034 FUN_145ea7034 body=138 status=ok
// SIG undefined FUN_145ea7034(void)

code * FUN_145ea7034(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000001a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ea70be;
}



// FUNCTION 145ea70be FUN_145ea70be body=142 status=ok
// SIG undefined FUN_145ea70be(void)

code * FUN_145ea70be(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1000000019;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_146300c02;
}



// FUNCTION 145ea714c FUN_145ea714c body=205 status=ok
// SIG undefined FUN_145ea714c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ea714c(void)

{
  if ((DAT_14ca5cea7 & 2) == 0) {
    DAT_14ca5cea7 = DAT_14ca5cea7 | 2;
    _DAT_14ca5ce48 = L"FRenderTransmittanceLutCS";
    _DAT_14ca5ce60 = FUN_146826540;
    _DAT_14ca5ce68 = FUN_146825d77;
    _DAT_14ca5ce70 = FUN_146825fd6;
    _DAT_14ca5ce78 = FUN_1407e02ea;
    _DAT_14ca5ce80 = FUN_146826273;
    _DAT_14ca5ce58 = FUN_147315c98;
    _DAT_14ca5ce98 = 0xffffffff000000e0;
    _DAT_14ca5cea0 = 8;
    DAT_14ca5cea4 = 0;
    _DAT_14ca5ce88 = &LAB_147315cc2;
    FUN_145ea721a();
    FUN_1407e00cc(&DAT_14ca5ce40);
    return;
  }
  return;
}



// FUNCTION 145ea721a FUN_145ea721a body=123 status=ok
// SIG undefined FUN_145ea721a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ea721a(void)

{
  _DAT_14ca5f9d0 = L"BASE";
  DAT_14ca5f9fa = 4;
  _DAT_14ca5f9d8 = FUN_140b35ae4();
  _DAT_14ca5f9e0 = DAT_14ca5ce50;
  _DAT_14ca5f9e8 = &LAB_14682652b;
  DAT_14ca5ce50 = &DAT_14ca5f9d0;
  DAT_14ca5cea5 = DAT_14ca5cea5 + '\x01';
  _DAT_14ca5f9f0 = 0x100000000;
  if (*(char *)(_DAT_14ca5f9d8 + 100) != '\0') {
    DAT_14ca5cea6 = DAT_14ca5cea6 + '\x01';
  }
  return;
}



// FUNCTION 145ea7296 FUN_145ea7296 body=226 status=ok
// SIG undefined FUN_145ea7296(void)

longlong * FUN_145ea7296(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_14630bae4;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ea737e FUN_145ea737e body=140 status=ok
// SIG undefined FUN_145ea737e(void)

undefined1 * FUN_145ea737e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_144a8a5d4();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Atmosphere";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FAtmosphereUniformShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x31e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca5cac0;
  return &LAB_145ea737a;
}



// FUNCTION 145ea740a FUN_145ea740a body=146 status=ok
// SIG undefined FUN_145ea740a(void)

code * FUN_145ea740a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_144a8c09c();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SkyAtmosphere";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FSkyAtmosphereInternalCommonParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000031f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca5cb58;
  return FUN_145ea737e;
}



// FUNCTION 145ea749c FUN_145ea749c body=205 status=ok
// SIG undefined FUN_145ea749c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ea749c(void)

{
  if ((DAT_14ca654df & 2) == 0) {
    DAT_14ca654df = DAT_14ca654df | 2;
    _DAT_14ca65480 = L"FPropagateMappedMipsCS";
    _DAT_14ca65498 = FUN_146826540;
    _DAT_14ca654a0 = FUN_146825d77;
    _DAT_14ca654a8 = FUN_146825fd6;
    _DAT_14ca654b0 = FUN_1407e02ea;
    _DAT_14ca654b8 = FUN_146826273;
    _DAT_14ca65490 = FUN_14732b992;
    _DAT_14ca654d0 = 0xffffffff000000e0;
    _DAT_14ca654d8 = 8;
    DAT_14ca654dc = 0;
    _DAT_14ca654c0 = &LAB_14732b9bc;
    FUN_145ea756a();
    FUN_1407e00cc(&DAT_14ca65478);
    return;
  }
  return;
}



// FUNCTION 145ea756a FUN_145ea756a body=123 status=ok
// SIG undefined FUN_145ea756a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ea756a(void)

{
  _DAT_14ca68d20 = L"BASE";
  DAT_14ca68d4a = 4;
  _DAT_14ca68d28 = FUN_140b35ae4();
  _DAT_14ca68d30 = DAT_14ca65488;
  _DAT_14ca68d38 = &LAB_14682652b;
  DAT_14ca65488 = &DAT_14ca68d20;
  DAT_14ca654dd = DAT_14ca654dd + '\x01';
  _DAT_14ca68d40 = 0x100000000;
  if (*(char *)(_DAT_14ca68d28 + 100) != '\0') {
    DAT_14ca654de = DAT_14ca654de + '\x01';
  }
  return;
}



// FUNCTION 145ea75e6 FUN_145ea75e6 body=226 status=ok
// SIG undefined FUN_145ea75e6(void)

longlong * FUN_145ea75e6(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_146311b84;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ea76ce FUN_145ea76ce body=140 status=ok
// SIG undefined FUN_145ea76ce(void)

undefined1 * FUN_145ea76ce(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x512;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca64298;
  return &LAB_145ea76ca;
}



// FUNCTION 145ea775a FUN_145ea775a body=146 status=ok
// SIG undefined FUN_145ea775a(void)

code * FUN_145ea775a(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000513;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca67a08;
  return FUN_145ea76ce;
}



// FUNCTION 145ea77ec FUN_145ea77ec body=292 status=ok
// SIG undefined FUN_145ea77ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ea77ec(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8fd90) {
    FUN_144b3d300(&DAT_14ca8fd90);
    if (DAT_14ca8fd90 == -1) {
      FUN_145ea7a64();
      FUN_145ea7910();
      FUN_140db5666(&DAT_14ca8fce8,0,&DAT_14ca8fc80,L"FModifyAlphaSwizzleRgbaPS",
                    L"/Engine/Private/MediaShaders.usf",L"SwizzleRgbPS",3,5,FUN_147420d4a,
                    FUN_147420cea,&LAB_147420ce6,&LAB_147420ce2,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca91b60);
      _DAT_14ca8fce8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f809e);
      _Init_thread_footer(&DAT_14ca8fd90);
    }
  }
  return &DAT_14ca8fce8;
}



// FUNCTION 145ea7910 FUN_145ea7910 body=205 status=ok
// SIG undefined FUN_145ea7910(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ea7910(void)

{
  if ((DAT_14ca8fce7 & 2) == 0) {
    DAT_14ca8fce7 = DAT_14ca8fce7 | 2;
    _DAT_14ca8fc88 = L"FModifyAlphaSwizzleRgbaPS";
    _DAT_14ca8fca0 = FUN_146826540;
    _DAT_14ca8fca8 = FUN_146825d77;
    _DAT_14ca8fcb0 = FUN_146825fd6;
    _DAT_14ca8fcb8 = FUN_1407e02ea;
    _DAT_14ca8fcc0 = FUN_146826273;
    _DAT_14ca8fc98 = FUN_147420cb2;
    _DAT_14ca8fcd8 = 0xffffffff000000e0;
    _DAT_14ca8fce0 = 8;
    DAT_14ca8fce4 = 0;
    _DAT_14ca8fcc8 = &LAB_147420cde;
    FUN_145ea79de();
    FUN_1407e00cc(&DAT_14ca8fc80);
    return;
  }
  return;
}



// FUNCTION 145ea79de FUN_145ea79de body=133 status=ok
// SIG undefined FUN_145ea79de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ea79de(void)

{
  _DAT_14ca949f8 = L"BASE";
  DAT_14ca94a22 = 4;
  FUN_140b35ae4();
  _DAT_14ca94a08 = DAT_14ca8fc90;
  _DAT_14ca94a00 = &DAT_14ca8c6c8;
  _DAT_14ca94a10 = &LAB_14682652b;
  DAT_14ca8fc90 = &DAT_14ca949f8;
  DAT_14ca8fce5 = DAT_14ca8fce5 + '\x01';
  _DAT_14ca94a18 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca8fce6 = DAT_14ca8fce6 + '\x01';
  }
  return;
}



// FUNCTION 145ea7a64 FUN_145ea7a64 body=261 status=ok
// SIG undefined FUN_145ea7a64(void)

void FUN_145ea7a64(void)

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
              0x110) < DAT_14ca91be0) {
    FUN_144b3d300(&DAT_14ca91be0);
    if (DAT_14ca91be0 == -1) {
      FUN_145ea7b6a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x110;
      local_58 = 0x2d8;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca91b60,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1431f9695);
      _Init_thread_footer(&DAT_14ca91be0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ea7b6a FUN_145ea7b6a body=226 status=ok
// SIG undefined FUN_145ea7b6a(void)

longlong * FUN_145ea7b6a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_14631dc46;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ea7c52 FUN_145ea7c52 body=132 status=ok
// SIG undefined FUN_145ea7c52(void)

undefined1 * FUN_145ea7c52(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2d9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145ea7c4e;
}



// FUNCTION 145ea7cd6 FUN_145ea7cd6 body=138 status=ok
// SIG undefined FUN_145ea7cd6(void)

code * FUN_145ea7cd6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000002da;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ea7c52;
}



// FUNCTION 145ea7d60 FUN_145ea7d60 body=198 status=ok
// SIG undefined FUN_145ea7d60(void)

void FUN_145ea7d60(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  ushort uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ushort uVar6;
  ulonglong uVar7;
  
  if (DAT_14c872ba8 == '\x01') {
    plVar2 = (longlong *)*param_1;
    if (plVar2 != (longlong *)0x0) {
LAB_145ea7db7:
      lVar1 = (**(code **)(*plVar2 + 0x70))(plVar2);
      lVar5 = 0;
      do {
        uVar3 = *(ushort *)(lVar1 + lVar5);
        uVar4 = (ulonglong)uVar3;
        uVar6 = *(ushort *)((longlong)L"CachedReadFile" + lVar5);
        if (uVar3 == uVar6) {
          if (uVar3 == 0) goto LAB_145ea7e16;
        }
        else {
          if (0x7f < (uVar6 | uVar3)) goto LAB_145ea7df9;
          uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
          uVar7 = (ulonglong)uVar6;
          uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
          if ((&DAT_149e05da0)[uVar4] != (&DAT_149e05da0)[uVar7]) goto LAB_145ea7df9;
        }
        lVar5 = lVar5 + 2;
      } while( true );
    }
  }
  else {
LAB_145ea7d75:
    for (param_1 = (longlong *)*param_1; param_1 != (longlong *)0x0;
        param_1 = (longlong *)(**(code **)(*param_1 + 0x60))(param_1)) {
      (**(code **)(*param_1 + 0x40))(param_1);
    }
  }
  return;
LAB_145ea7df9:
  if (uVar3 == uVar6) {
LAB_145ea7e16:
    FUN_145aa09b0(param_1,plVar2);
    goto LAB_145ea7d75;
  }
  plVar2 = (longlong *)(**(code **)(*plVar2 + 0x60))(plVar2);
  if (plVar2 == (longlong *)0x0) goto LAB_145ea7d75;
  goto LAB_145ea7db7;
}



// FUNCTION 145ea7e27 FUN_145ea7e27 body=102 status=ok
// SIG undefined FUN_145ea7e27(void)

void * FUN_145ea7e27(void *param_1)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  memset(param_1,0,0x82);
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  FUN_140e55932(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ea7e9a FUN_145ea7e9a body=188 status=ok
// SIG undefined FUN_145ea7e9a(void)

undefined8 * FUN_145ea7e9a(undefined8 *param_1)

{
  FUN_14094d944();
  *param_1 = &PTR_FUN_149eb6b00;
  param_1[0x56] = 0;
  *(undefined4 *)(param_1 + 0x57) = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  *(undefined8 *)((longlong)param_1 + 700) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2c4) = 0;
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e4) = 0;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x65) = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  *(undefined8 *)((longlong)param_1 + 0x32c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x334) = 0;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x69) = 0;
  *(undefined1 *)(param_1 + 0x6a) = 0;
  return param_1;
}



// FUNCTION 145ea7f56 FUN_145ea7f56 body=144 status=ok
// SIG undefined FUN_145ea7f56(void)

bool FUN_145ea7f56(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ea7fe8 FUN_145ea7fe8 body=54 status=ok
// SIG undefined FUN_145ea7fe8(void)

void FUN_145ea7fe8(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x38);
    lVar2 = (longlong)*(int *)(param_1 + 0x40) * 0x50;
    do {
      FUN_1470a248c(lVar1);
      lVar1 = lVar1 + 0x50;
      lVar2 = lVar2 + -0x50;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 145ea802a FUN_145ea802a body=222 status=ok
// SIG undefined FUN_145ea802a(void)

undefined8 * FUN_145ea802a(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a674e70;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeaeb0) {
    FUN_144b3d300(&DAT_14caeaeb0);
    if (DAT_14caeaeb0 == -1) {
      FUN_14157fb0c();
      atexit((_func_5014 *)&LAB_14356da22);
      _Init_thread_footer(&DAT_14caeaeb0);
    }
  }
  *(undefined4 *)(param_1 + 0x26) = 0;
  return param_1;
}



// FUNCTION 145ea8114 FUN_145ea8114 body=222 status=ok
// SIG undefined FUN_145ea8114(void)

undefined8 * FUN_145ea8114(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a6a9250;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0x42000000;
  *(undefined1 *)((longlong)param_1 + 0x10c) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeb448) {
    FUN_144b3d300(&DAT_14caeb448);
    if (DAT_14caeb448 == -1) {
      FUN_14157fbb2();
      atexit((_func_5014 *)&LAB_14356e087);
      _Init_thread_footer(&DAT_14caeb448);
    }
  }
  *(undefined2 *)(param_1 + 0x1b) = 0;
  return param_1;
}



// FUNCTION 145ea81fe FUN_145ea81fe body=188 status=ok
// SIG undefined FUN_145ea81fe(void)

undefined8 * FUN_145ea81fe(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *param_1 = &PTR_FUN_14a6dc650;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x45) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0xb] = DAT_14c8464e0;
  param_1[0xc] = uVar1;
  param_1[0xd] = DAT_14c8464f0;
  param_1[0x10] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0xe] = DAT_14c8464e0;
  param_1[0xf] = uVar1;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa5) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcd) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd5) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfd) = 0;
  *(undefined8 *)((longlong)param_1 + 0x105) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x16 | 0xc1;
  return param_1;
}



// FUNCTION 145ea82c6 FUN_145ea82c6 body=187 status=ok
// SIG undefined FUN_145ea82c6(void)

undefined8 * FUN_145ea82c6(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a9b4d90;
  param_1[0x72] = &PTR_FUN_14a9b53c8;
  FUN_1446f470e(&local_20,L"RootComponent",1);
  uVar1 = FUN_144a799b0();
  local_30 = 0;
  local_38 = 1;
  lVar2 = FUN_14048696c(param_1,local_20,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x39] = lVar2;
  *(undefined1 *)(lVar2 + 0x1fb) = 0;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ea8382 FUN_145ea8382 body=40 status=ok
// SIG undefined FUN_145ea8382(void)

undefined8 FUN_145ea8382(undefined8 param_1,int param_2)

{
  FUN_145ea83aa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ea83aa FUN_145ea83aa body=159 status=ok
// SIG undefined FUN_145ea83aa(void)

void FUN_145ea83aa(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a9f3ac0;
  FUN_144760e21(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_140195631(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145ea8454 FUN_145ea8454 body=187 status=ok
// SIG undefined FUN_145ea8454(void)

undefined8 * FUN_145ea8454(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1458e06f4();
  *param_1 = &PTR_FUN_14abee2d0;
  param_1[5] = &PTR_FUN_14abee600;
  FUN_1400b22c2(&local_28,"Conditional Loop");
  if (param_1 + 6 == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    param_1[6] = local_28;
    *(undefined4 *)(param_1 + 7) = local_20;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_1c;
  }
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf8 | 3;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffffc0 | 0x10;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ea851c FUN_145ea851c body=401 status=ok
// SIG undefined FUN_145ea851c(void)

undefined8 * FUN_145ea851c(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_145ea86ae();
  *param_1 = &PTR_FUN_14ac13c00;
  puVar1 = param_1 + 6;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[5] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[10] = 0x42c8000000000032;
  param_1[0xb] = 0x800000006;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 100) = 0x3f000000;
  *(undefined4 *)(param_1 + 0xd) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3f800000;
  *(uint *)(param_1 + 0xe) = *(uint *)(param_1 + 0xe) & 0xffffffe0 | 10;
  *(undefined4 *)(param_1 + 7) = 1;
  FUN_145ea86ce(puVar1,0);
  puVar3 = (undefined8 *)param_1[6];
  *puVar3 = 0x400000003f000000;
  puVar3[1] = 0x3f4000003f400000;
  puVar3[2] = 0x4020000040200000;
  *(undefined4 *)(puVar3 + 3) = 0x10205ff;
  iVar2 = *(int *)(param_1 + 7);
  *(uint *)(param_1 + 7) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x3c) < iVar2 + 1U) {
    FUN_145ea86ce(puVar1,iVar2);
  }
  lVar4 = param_1[6];
  lVar5 = (longlong)iVar2 * 0x1c;
  *(undefined8 *)(lVar4 + lVar5) = 0x400000003f000000;
  ((undefined8 *)(lVar4 + lVar5))[1] = 0x3f4000003f400000;
  *(undefined8 *)(lVar4 + 0x10 + lVar5) = 0x4020000040200000;
  *(undefined4 *)(lVar4 + 0x18 + lVar5) = 0x20205ff;
  iVar2 = *(int *)(param_1 + 7);
  *(uint *)(param_1 + 7) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x3c) < iVar2 + 1U) {
    FUN_145ea86ce(puVar1,iVar2);
  }
  lVar4 = param_1[6];
  lVar5 = (longlong)iVar2 * 0x1c;
  *(undefined8 *)(lVar4 + lVar5) = 0x400000003f000000;
  ((undefined8 *)(lVar4 + lVar5))[1] = 0x3f4000003f400000;
  *(undefined8 *)(lVar4 + 0x10 + lVar5) = 0x4020000040200000;
  *(undefined4 *)(lVar4 + 0x18 + lVar5) = 0x30207ff;
  iVar2 = *(int *)(param_1 + 7);
  *(uint *)(param_1 + 7) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x3c) < iVar2 + 1U) {
    FUN_145ea86ce(puVar1,iVar2);
  }
  lVar4 = param_1[6];
  lVar5 = (longlong)iVar2 * 0x1c;
  *(undefined8 *)(lVar4 + lVar5) = 0x400000003f000000;
  ((undefined8 *)(lVar4 + lVar5))[1] = 0x3f4000003f400000;
  *(undefined8 *)(lVar4 + 0x10 + lVar5) = 0x4020000040200000;
  *(undefined4 *)(lVar4 + 0x18 + lVar5) = 0x30307ff;
  return param_1;
}



// FUNCTION 145ea86ae FUN_145ea86ae body=32 status=ok
// SIG undefined FUN_145ea86ae(void)

undefined8 * FUN_145ea86ae(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14aba5d70;
  return param_1;
}



// FUNCTION 145ea86ce FUN_145ea86ce body=153 status=ok
// SIG undefined FUN_145ea86ce(void)

void FUN_145ea86ce(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x1c,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x1c)) {
      uVar5 = uVar4 / 0x1c & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x1c,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145ea8768 FUN_145ea8768 body=40 status=ok
// SIG undefined FUN_145ea8768(void)

undefined8 FUN_145ea8768(undefined8 param_1,int param_2)

{
  FUN_145ea8790();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ea8790 FUN_145ea8790 body=159 status=ok
// SIG undefined FUN_145ea8790(void)

void FUN_145ea8790(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14aeae060;
  if (param_1[0x24] != 0) {
    plVar1 = param_1 + 0x28;
    if ((longlong *)param_1[0x26] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x26];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0x1c] != 0) {
    plVar1 = param_1 + 0x20;
    if ((longlong *)param_1[0x1e] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x1e];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_14582b792(param_1 + 0x10);
  *param_1 = &PTR_FUN_14aeab700;
  if (param_1[8] != 0) {
    plVar1 = param_1 + 0xc;
    if ((longlong *)param_1[10] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[10];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145ea8830 FUN_145ea8830 body=52 status=ok
// SIG undefined FUN_145ea8830(void)

void FUN_145ea8830(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xc00);
  memset(_Dst,0,0xc00);
  FUN_14157fc58(_Dst);
  return;
}



// FUNCTION 145ea8864 FUN_145ea8864 body=40 status=ok
// SIG undefined FUN_145ea8864(void)

undefined8 FUN_145ea8864(undefined8 param_1,int param_2)

{
  FUN_145ea888c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ea888c FUN_145ea888c body=159 status=ok
// SIG undefined FUN_145ea888c(void)

void FUN_145ea888c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4ae850;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x10];
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
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145ea892c FUN_145ea892c body=25 status=ok
// SIG undefined FUN_145ea892c(void)

undefined8 FUN_145ea892c(undefined8 param_1,undefined8 param_2)

{
  FUN_145ea8946(param_2);
  return param_2;
}



// FUNCTION 145ea8946 FUN_145ea8946 body=438 status=ok
// SIG undefined FUN_145ea8946(void)

undefined8 * FUN_145ea8946(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  void *_Dst;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  void *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14cbce5c8 != (longlong *)0x0 && DAT_14cbce5d0 != 0) &&
     (cVar2 = (**(code **)(*DAT_14cbce5c8 + 0x30))(), cVar2 != '\0')) {
    plVar3 = DAT_14cbce5c8;
    if (DAT_14cbce5d0 == 0) {
      plVar3 = (longlong *)0x0;
    }
    (**(code **)(*plVar3 + 0x58))(plVar3,&local_38);
    goto LAB_145ea8a27;
  }
  _Dst = (void *)FUN_14001cc68(0x90);
  memset(_Dst,0,0x90);
  FUN_145ea8afe(_Dst);
  plVar3 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b988dc0;
  plVar3[2] = (longlong)_Dst;
  local_30 = plVar3;
  if (_Dst == (void *)0x0) {
    local_38 = (void *)0x0;
    goto LAB_145ea8a27;
  }
  local_38 = _Dst;
  if (((*(longlong *)((longlong)_Dst + 0x10) != 0) && (*(longlong *)((longlong)_Dst + 0x18) != 0))
     && (0 < *(int *)(*(longlong *)((longlong)_Dst + 0x18) + 8))) goto LAB_145ea8a27;
  if (plVar3 == (longlong *)0x0) {
    *(void **)((longlong)_Dst + 0x10) = _Dst;
    plVar4 = *(longlong **)((longlong)_Dst + 0x18);
    if (plVar4 != (longlong *)0x0) {
LAB_145ea8aa2:
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
      *(longlong **)((longlong)_Dst + 0x18) = plVar3;
      if (plVar3 != (longlong *)0x0) goto LAB_145ea8a1d;
    }
    local_30 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(void **)((longlong)_Dst + 0x10) = _Dst;
    if (*(longlong **)((longlong)_Dst + 0x18) != plVar3) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar4 = *(longlong **)((longlong)_Dst + 0x18);
      if (plVar4 != (longlong *)0x0) goto LAB_145ea8aa2;
      *(longlong **)((longlong)_Dst + 0x18) = plVar3;
    }
LAB_145ea8a1d:
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_145ea8a27:
  *param_1 = local_38;
  param_1[1] = local_30;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145ea8afe FUN_145ea8afe body=133 status=ok
// SIG undefined FUN_145ea8afe(void)

undefined8 * FUN_145ea8afe(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14b988da0;
  FUN_1409e1656(param_1 + 4);
  *param_1 = &PTR_FUN_14b988d30;
  param_1[4] = &PTR_FUN_14b988d50;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined2 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  return param_1;
}



// FUNCTION 145ea8b84 FUN_145ea8b84 body=83 status=ok
// SIG undefined FUN_145ea8b84(void)

void FUN_145ea8b84(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  FUN_1407cbc56();
  plVar2 = (longlong *)FUN_145ea8bd8(param_1);
  lVar1 = *plVar2;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0x220));
  *(int *)(lVar1 + 0x218) = *(int *)(lVar1 + 0x218) + 1;
  FUN_145ea8c54(lVar1,param_1 + 0x160);
                    /* WARNING: Could not recover jumptable at 0x000145ea8bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0x220));
  return;
}



// FUNCTION 145ea8bd8 FUN_145ea8bd8 body=123 status=ok
// SIG undefined FUN_145ea8bd8(void)

longlong FUN_145ea8bd8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1448d5e3c(&local_28,param_1 + 0x208);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28 + 0xd0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ea8c54 FUN_145ea8c54 body=191 status=ok
// SIG undefined FUN_145ea8c54(void)

ulonglong FUN_145ea8c54(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 unaff_RDI;
  undefined7 uVar5;
  bool bVar6;
  
  if (((byte *)*param_2 == (byte *)0x0) || ((*(byte *)*param_2 & 3) == 0)) {
    uVar3 = 0;
  }
  else {
    plVar2 = (longlong *)FUN_144a7cdc2(param_2,&DAT_14cbd5718);
    uVar3 = CONCAT71((int7)((ulonglong)plVar2 >> 8),DAT_14c764085);
    if (*plVar2 != 0) {
      uVar3 = FUN_14000584e(*plVar2,uVar3 & 0xffffffff);
    }
    cVar1 = (char)uVar3;
    bVar6 = *(char *)(param_1 + 0x178) != cVar1;
    uVar5 = (undefined7)((ulonglong)unaff_RDI >> 8);
    uVar3 = CONCAT71(uVar5,bVar6);
    if (bVar6) {
      *(char *)(param_1 + 0x178) = cVar1;
      *(int *)(param_1 + 0x17c) = *(int *)(param_1 + 0x17c) + 1;
    }
    plVar2 = (longlong *)FUN_144a7cdc2(param_2,&DAT_14cbd5720);
    uVar4 = CONCAT71((int7)((ulonglong)plVar2 >> 8),DAT_14c764084);
    if (*plVar2 != 0) {
      uVar4 = FUN_14000584e(*plVar2,uVar4 & 0xffffffff);
    }
    if (((*(byte *)(param_1 + 0x168) & 0x10) == 0) == (bool)(char)uVar4) {
      *(int *)(param_1 + 0x170) = *(int *)(param_1 + 0x170) + 1;
      *(byte *)(param_1 + 0x168) = *(byte *)(param_1 + 0x168) & 0xef | (char)uVar4 << 4;
      uVar3 = CONCAT71(uVar5,1);
    }
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 145ea8d14 FUN_145ea8d14 body=103 status=ok
// SIG undefined FUN_145ea8d14(void)

void FUN_145ea8d14(void)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145ea8d7c();
  uVar1 = FUN_144a52528();
  FUN_1446ddc76(&local_20,"DataflowSimulation",1);
  FUN_1405f3750(uVar1,local_20,0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ea8d7c FUN_145ea8d7c body=151 status=ok
// SIG undefined FUN_145ea8d7c(void)

void FUN_145ea8d7c(void)

{
  undefined8 uVar1;
  undefined1 auStack_98 [40];
  undefined1 local_70 [8];
  undefined1 *local_68 [2];
  undefined8 local_58;
  undefined **local_48;
  code *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = FUN_145ea8e14();
  local_58 = 0;
  local_48 = &PTR_LAB_14be11e90;
  local_40 = FUN_1446029a0;
  local_68[0] = &LAB_1496f776c;
  FUN_1446ddc76(local_70,"FManagedArrayCollection",1);
  FUN_14157fcec(uVar1,local_70,local_68);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ea8e14 FUN_145ea8e14 body=82 status=ok
// SIG undefined FUN_145ea8e14(void)

void FUN_145ea8e14(void)

{
  if (DAT_14c99d028 == (undefined8 *)0x0) {
    DAT_14c99d028 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    DAT_14c99d028[4] = 0;
    *(undefined4 *)(DAT_14c99d028 + 5) = 0;
    *DAT_14c99d028 = 0;
    DAT_14c99d028[1] = 0;
    *(undefined8 *)((longlong)DAT_14c99d028 + 0x2c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)DAT_14c99d028 + 0x34) = 0;
    DAT_14c99d028[8] = 0;
    *(undefined4 *)(DAT_14c99d028 + 9) = 0;
  }
  return;
}



// FUNCTION 145ea8e66 FUN_145ea8e66 body=103 status=ok
// SIG undefined FUN_145ea8e66(void)

ulonglong FUN_145ea8e66(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_145ea8eb0:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145ea8eb0;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
    }
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 145ea8ece FUN_145ea8ece body=280 status=ok
// SIG undefined FUN_145ea8ece(void)

void FUN_145ea8ece(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
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
  FUN_144a787a6(param_1 + 0x198);
  if (1 < *(int *)(param_1 + 0x1a0)) {
    plVar1 = (longlong *)(param_1 + 0xa8);
    lVar2 = param_1 + 0xb8;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = lVar2;
    if (*(int *)(param_1 + 0xd0) == 0) {
      iVar5 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar5 = *(int *)(param_1 + 0xd0);
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar3 = local_60;
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = plVar1;
    if ((local_60._4_4_ != iVar5) || (local_60 = uVar3, uStack_48 != lVar2)) {
      do {
        do {
          local_60 = uVar3;
          FUN_145ea8fe8(param_1,*(undefined4 *)(*local_78 + (longlong)iVar4 * 0xc));
          local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
          FUN_1449c0562(&local_70);
          iVar4 = local_60._4_4_;
          uVar3 = local_60;
        } while (local_60._4_4_ != iVar5);
      } while ((CONCAT44(uStack_64,uStack_68) != lVar2) || (local_78 != plVar1));
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ea8fe8 FUN_145ea8fe8 body=1346 status=ok
// SIG undefined FUN_145ea8fe8(void)

void FUN_145ea8fe8(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint *puVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_68 [36];
  uint local_44;
  undefined2 local_40;
  undefined1 local_3e;
  uint local_3c;
  uint *local_38;
  uint *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)(param_1 + 0x1a8);
  local_3c = param_2;
  if (*(int *)(param_1 + 0x1b0) != *(int *)(param_1 + 0x1dc)) {
    lVar9 = param_1 + 0x1e0;
    if (*(longlong *)(param_1 + 0x1e8) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x1e8);
    }
    uVar8 = *(uint *)(lVar9 + (ulonglong)(*(int *)(param_1 + 0x1f0) - 1U & param_2) * 4);
    if (uVar8 != 0xffffffff) {
      do {
        puVar4 = (uint *)(*plVar3 + (longlong)(int)uVar8 * 0x14);
        if (*puVar4 == param_2) {
          if (puVar4 != (uint *)0x0) goto LAB_145ea9062;
          break;
        }
        uVar8 = puVar4[3];
      } while (uVar8 != 0xffffffff);
    }
  }
  local_30 = &local_44;
  local_40 = 0;
  local_3e = 0;
  local_38 = &local_3c;
  local_44 = param_2;
  FUN_145ea9b5e(plVar3,&local_24);
  puVar4 = (uint *)(*plVar3 + (longlong)local_24 * 0x14);
LAB_145ea9062:
  if (*(char *)((longlong)puVar4 + 9) == '\0') {
    *(undefined1 *)((longlong)puVar4 + 9) = 1;
    local_38 = (uint *)0x0;
    local_30 = (uint *)((ulonglong)local_30 & 0xffffffff00000000);
    FUN_1446efa72(&local_38,0,3,0x10);
    local_30 = (uint *)CONCAT44(local_30._4_4_,3);
    plVar3 = *(longlong **)(param_1 + 0x18);
    if (plVar3 == (longlong *)0x0) {
LAB_145ea9371:
      *(undefined ***)local_38 = &PTR_LAB_14b4e0940;
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 1;
      lVar9 = DAT_14c758608 + 1;
      if (lVar10 == 0) {
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 2;
        lVar9 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar9;
      *(longlong *)(local_38 + 4) = lVar10;
      *(undefined ***)local_38 = &PTR_FUN_14b4e08d0;
      local_38[6] = 0;
      local_38[7] = 0;
      local_38[8] = 0;
      local_38[9] = 0;
      *(longlong *)(local_38 + 10) = param_1;
    }
    else {
      iVar7 = (int)plVar3[1];
      do {
        if (iVar7 == 0) goto LAB_145ea9371;
        LOCK();
        iVar6 = (int)plVar3[1];
        bVar11 = iVar7 == iVar6;
        if (bVar11) {
          *(int *)(plVar3 + 1) = iVar7 + 1;
          iVar6 = iVar7;
        }
        iVar7 = iVar6;
        UNLOCK();
      } while (!bVar11);
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      *(undefined ***)local_38 = &PTR_LAB_14b4e0940;
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 1;
      lVar9 = DAT_14c758608 + 1;
      if (lVar10 == 0) {
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 2;
        lVar9 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar9;
      *(longlong *)(local_38 + 4) = lVar10;
      *(undefined ***)local_38 = &PTR_FUN_14b4e08d0;
      *(undefined8 *)(local_38 + 6) = uVar5;
      *(longlong **)(local_38 + 8) = plVar3;
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      *(longlong *)(local_38 + 10) = param_1;
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
    FUN_145ea952c(param_1,&local_3c,&local_38);
    FUN_1449db362(&local_38);
  }
  plVar3 = (longlong *)(param_1 + 0x1f8);
  if (*(int *)(param_1 + 0x200) != *(int *)(param_1 + 0x22c)) {
    lVar9 = param_1 + 0x230;
    if (*(longlong *)(param_1 + 0x238) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x238);
    }
    uVar8 = *(uint *)(lVar9 + (ulonglong)(*(int *)(param_1 + 0x240) - 1U & local_3c) * 4);
    if (uVar8 != 0xffffffff) {
      do {
        puVar4 = (uint *)(*plVar3 + (longlong)(int)uVar8 * 0x14);
        if (*puVar4 == local_3c) {
          if (puVar4 != (uint *)0x0) goto LAB_145ea91b2;
          break;
        }
        uVar8 = puVar4[3];
      } while (uVar8 != 0xffffffff);
    }
  }
  local_30 = &local_44;
  local_44 = local_3c;
  local_40 = 0;
  local_3e = 0;
  local_38 = &local_3c;
  FUN_145ea9dec(plVar3,&local_24);
  puVar4 = (uint *)(*plVar3 + (longlong)local_24 * 0x14);
LAB_145ea91b2:
  if (*(char *)((longlong)puVar4 + 10) == '\0') {
    *(undefined1 *)((longlong)puVar4 + 10) = 1;
    local_38 = (uint *)0x0;
    local_30 = (uint *)((ulonglong)local_30 & 0xffffffff00000000);
    FUN_1446efa72(&local_38,0,3,0x10);
    local_30 = (uint *)CONCAT44(local_30._4_4_,3);
    plVar3 = *(longlong **)(param_1 + 0x18);
    if (plVar3 == (longlong *)0x0) {
LAB_145ea93b5:
      *(undefined ***)local_38 = &PTR_LAB_14b4e0940;
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 1;
      lVar9 = DAT_14c758608 + 1;
      if (lVar10 == 0) {
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 2;
        lVar9 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar9;
      *(longlong *)(local_38 + 4) = lVar10;
      *(undefined ***)local_38 = &PTR_FUN_14b4e0ae0;
      local_38[6] = 0;
      local_38[7] = 0;
      local_38[8] = 0;
      local_38[9] = 0;
      *(longlong *)(local_38 + 10) = param_1;
    }
    else {
      iVar7 = (int)plVar3[1];
      do {
        if (iVar7 == 0) goto LAB_145ea93b5;
        LOCK();
        iVar6 = (int)plVar3[1];
        bVar11 = iVar7 == iVar6;
        if (bVar11) {
          *(int *)(plVar3 + 1) = iVar7 + 1;
          iVar6 = iVar7;
        }
        iVar7 = iVar6;
        UNLOCK();
      } while (!bVar11);
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      *(undefined ***)local_38 = &PTR_LAB_14b4e0940;
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 1;
      lVar9 = DAT_14c758608 + 1;
      if (lVar10 == 0) {
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 2;
        lVar9 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar9;
      *(longlong *)(local_38 + 4) = lVar10;
      *(undefined ***)local_38 = &PTR_FUN_14b4e0ae0;
      *(undefined8 *)(local_38 + 6) = uVar5;
      *(longlong **)(local_38 + 8) = plVar3;
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      *(longlong *)(local_38 + 10) = param_1;
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
    local_44 = 0;
    FUN_145ea98b0(param_1,&local_3c,&local_44,&local_38);
    FUN_1449db362(&local_38);
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ea952c FUN_145ea952c body=282 status=ok
// SIG undefined FUN_145ea952c(void)

void FUN_145ea952c(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar3 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b4e09b0;
  plVar1 = plVar3 + 2;
  FUN_145ea9726(plVar1,*param_2,param_3);
  local_50 = plVar1;
  local_48 = plVar3;
  FUN_145ea980e(&local_50,plVar1);
  local_40 = plVar1;
  local_38 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    FUN_145ea965c(param_1,&local_40);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_145ea965c(param_1);
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
  }
  plVar1 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_48 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ea965c FUN_145ea965c body=201 status=ok
// SIG undefined FUN_145ea965c(void)

void FUN_145ea965c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = *(longlong *)(param_1 + 8);
  if (lVar4 == 0) {
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
    lVar4 = FUN_1413da074(&local_38);
    *(longlong *)(param_1 + 8) = lVar4;
    if (local_38 != 0) {
      FUN_1400020a8(local_38);
      lVar4 = *(longlong *)(param_1 + 8);
    }
    if (lVar4 == 0) goto LAB_145ea96b7;
  }
  local_38 = *param_2;
  plStack_30 = (longlong *)param_2[1];
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  FUN_1411d7792(lVar4,&local_38);
  plVar3 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_145ea96b7:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ea9726 FUN_145ea9726 body=105 status=ok
// SIG undefined FUN_145ea9726(void)

undefined8 * FUN_145ea9726(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  iVar1 = DAT_14cb970bc + 1;
  *(int *)((longlong)param_1 + 0x1c) = DAT_14cb970bc;
  DAT_14cb970bc = iVar1;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = param_2;
  *param_1 = &PTR_FUN_14b4e09d0;
  param_1[4] = &PTR_LAB_14b4e09f8;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_145ea9790(param_1 + 7,param_3);
  *(undefined2 *)(param_1 + 9) = 0x100;
  return param_1;
}



// FUNCTION 145ea9790 FUN_145ea9790 body=124 status=ok
// SIG undefined FUN_145ea9790(void)

void FUN_145ea9790(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    if (((int)param_2[1] != 0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ea980e FUN_145ea980e body=162 status=ok
// SIG undefined FUN_145ea980e(void)

void FUN_145ea980e(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145ea984d;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145ea984d;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_145ea984d:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145ea98ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145ea98b0 FUN_145ea98b0 body=292 status=ok
// SIG undefined FUN_145ea98b0(void)

void FUN_145ea98b0(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar3 = (longlong *)FUN_14001cc68(0x78,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b4e0b50;
  plVar1 = plVar3 + 2;
  FUN_145ea9a8e(plVar1,*param_2,*param_3,param_4);
  local_58 = plVar1;
  local_50 = plVar3;
  FUN_145ea99ec(&local_58,plVar1);
  local_48 = plVar1;
  local_40 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    FUN_145ea965c(param_1,&local_48);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_145ea965c(param_1);
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
  }
  plVar1 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_50 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ea99ec FUN_145ea99ec body=162 status=ok
// SIG undefined FUN_145ea99ec(void)

void FUN_145ea99ec(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145ea9a2b;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145ea9a2b;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_145ea9a2b:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145ea9a8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145ea9a8e FUN_145ea9a8e body=207 status=ok
// SIG undefined FUN_145ea9a8e(void)

undefined8 *
FUN_145ea9a8e(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  iVar1 = DAT_14cb970bc + 1;
  *(int *)((longlong)param_1 + 0x1c) = DAT_14cb970bc;
  DAT_14cb970bc = iVar1;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = param_2;
  *param_1 = &PTR_FUN_14b4e0b70;
  param_1[4] = &PTR_FUN_14b4e0b98;
  puVar2 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_FUN_14b4e49b0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 2;
  puVar2[2] = &PTR_FUN_14b4e49d0;
  param_1[7] = puVar2 + 2;
  param_1[8] = puVar2;
  *(undefined4 *)(param_1 + 9) = param_3;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  FUN_145ea9790(param_1 + 10,param_4);
  *(undefined2 *)(param_1 + 0xc) = 0;
  return param_1;
}



// FUNCTION 145ea9b5e FUN_145ea9b5e body=284 status=ok
// SIG undefined FUN_145ea9b5e(void)

undefined4 * FUN_145ea9b5e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145ea9d04(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_40 = uVar5;
  *(undefined8 *)(local_40 + 1) = *puVar1;
  local_40[3] = 0xffffffff;
  local_4c = local_48[0];
  cVar3 = FUN_145ea9c7c(param_1,uVar5,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_40[4] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[3] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_145eaa07a(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ea9c7c FUN_145ea9c7c body=136 status=ok
// SIG undefined FUN_145ea9c7c(void)

undefined8 FUN_145ea9c7c(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar4 * 0x14);
        if (*piVar1 == *param_3) {
          uVar2 = *(undefined8 *)param_3;
          piVar1[2] = param_3[2];
          *(undefined8 *)piVar1 = uVar2;
          FUN_14581977c(param_1,*param_4);
          *param_4 = iVar4;
          return 1;
        }
        iVar4 = piVar1[3];
      } while (iVar4 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145ea9d04 FUN_145ea9d04 body=231 status=ok
// SIG undefined FUN_145ea9d04(void)

int * FUN_145ea9d04(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_140171ad2(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x14);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x14) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x14 + *param_1;
  return param_2;
}



// FUNCTION 145ea9dec FUN_145ea9dec body=284 status=ok
// SIG undefined FUN_145ea9dec(void)

undefined4 * FUN_145ea9dec(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145ea9f92(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_40 = uVar5;
  *(undefined8 *)(local_40 + 1) = *puVar1;
  local_40[3] = 0xffffffff;
  local_4c = local_48[0];
  cVar3 = FUN_145ea9f0a(param_1,uVar5,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_40[4] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[3] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_145eaa228(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ea9f0a FUN_145ea9f0a body=136 status=ok
// SIG undefined FUN_145ea9f0a(void)

undefined8 FUN_145ea9f0a(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar4 * 0x14);
        if (*piVar1 == *param_3) {
          uVar2 = *(undefined8 *)param_3;
          piVar1[2] = param_3[2];
          *(undefined8 *)piVar1 = uVar2;
          FUN_1458197f0(param_1,*param_4);
          *param_4 = iVar4;
          return 1;
        }
        iVar4 = piVar1[3];
      } while (iVar4 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145ea9f92 FUN_145ea9f92 body=231 status=ok
// SIG undefined FUN_145ea9f92(void)

int * FUN_145ea9f92(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_140171ad2(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x14);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x14) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x14 + *param_1;
  return param_2;
}



// FUNCTION 145eaa07a FUN_145eaa07a body=428 status=ok
// SIG undefined FUN_145eaa07a(void)

void FUN_145eaa07a(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar6 = (longlong)iVar5;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0x14);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x10 + lVar6 * 0x14) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0xc + lVar6 * 0x14) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145eaa228 FUN_145eaa228 body=428 status=ok
// SIG undefined FUN_145eaa228(void)

void FUN_145eaa228(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar6 = (longlong)iVar5;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0x14);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x10 + lVar6 * 0x14) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0xc + lVar6 * 0x14) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145eaa3d6 FUN_145eaa3d6 body=292 status=ok
// SIG undefined FUN_145eaa3d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145eaa3d6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b6a70) {
    FUN_144b3d300(&DAT_14c9b6a70);
    if (DAT_14c9b6a70 == -1) {
      FUN_145eaa644();
      FUN_145eaa4fa();
      FUN_140db5666(&DAT_14c9b69c8,0,&DAT_14c9b6960,L"FClusteredShadingVS",
                    L"/Engine/Private/ClusteredDeferredShadingVertexShader.usf",
                    L"ClusteredShadingVertexShader",0,1,FUN_147134ba0,FUN_147134b40,&LAB_147134b28,
                    &LAB_147134b24,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9b82d8);
      _DAT_14c9b69c8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142b851d8);
      _Init_thread_footer(&DAT_14c9b6a70);
    }
  }
  return &DAT_14c9b69c8;
}



// FUNCTION 145eaa4fa FUN_145eaa4fa body=205 status=ok
// SIG undefined FUN_145eaa4fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eaa4fa(void)

{
  if ((DAT_14c9b69c7 & 2) == 0) {
    DAT_14c9b69c7 = DAT_14c9b69c7 | 2;
    _DAT_14c9b6968 = L"FClusteredShadingVS";
    _DAT_14c9b6980 = FUN_146826540;
    _DAT_14c9b6988 = FUN_146825d77;
    _DAT_14c9b6990 = FUN_146825fd6;
    _DAT_14c9b6998 = FUN_1407e02ea;
    _DAT_14c9b69a0 = FUN_146826273;
    _DAT_14c9b6978 = FUN_147134af6;
    _DAT_14c9b69b8 = 0xffffffff000000e0;
    _DAT_14c9b69c0 = 8;
    DAT_14c9b69c4 = 0;
    _DAT_14c9b69a8 = &LAB_147134b20;
    FUN_145eaa5c8();
    FUN_1407e00cc(&DAT_14c9b6960);
    return;
  }
  return;
}



// FUNCTION 145eaa5c8 FUN_145eaa5c8 body=123 status=ok
// SIG undefined FUN_145eaa5c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eaa5c8(void)

{
  _DAT_14c9c0020 = L"BASE";
  DAT_14c9c004a = 4;
  _DAT_14c9c0028 = FUN_140b35ae4();
  _DAT_14c9c0030 = DAT_14c9b6970;
  _DAT_14c9c0038 = &LAB_14682652b;
  DAT_14c9b6970 = &DAT_14c9c0020;
  DAT_14c9b69c5 = DAT_14c9b69c5 + '\x01';
  _DAT_14c9c0040 = 0x100000000;
  if (*(char *)(_DAT_14c9c0028 + 100) != '\0') {
    DAT_14c9b69c6 = DAT_14c9b69c6 + '\x01';
  }
  return;
}



// FUNCTION 145eaa644 FUN_145eaa644 body=261 status=ok
// SIG undefined FUN_145eaa644(void)

void FUN_145eaa644(void)

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
              0x110) < DAT_14c9b8358) {
    FUN_144b3d300(&DAT_14c9b8358);
    if (DAT_14c9b8358 == -1) {
      FUN_145eaa74a(local_20);
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
      FUN_140b49562(&DAT_14c9b82d8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142b8fafb);
      _Init_thread_footer(&DAT_14c9b8358);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eaa74a FUN_145eaa74a body=226 status=ok
// SIG undefined FUN_145eaa74a(void)

longlong * FUN_145eaa74a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462b82ba;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eaa832 FUN_145eaa832 body=138 status=ok
// SIG undefined FUN_145eaa832(void)

undefined1 * FUN_145eaa832(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x46;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145eaa82e;
}



// FUNCTION 145eaa8bc FUN_145eaa8bc body=144 status=ok
// SIG undefined FUN_145eaa8bc(void)

code * FUN_145eaa8bc(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1000000047;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145eaa832;
}



// FUNCTION 145eaa94c FUN_145eaa94c body=205 status=ok
// SIG undefined FUN_145eaa94c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eaa94c(void)

{
  if ((DAT_14c9c6647 & 2) == 0) {
    DAT_14c9c6647 = DAT_14c9c6647 | 2;
    _DAT_14c9c65e8 = L"FComputeCulledTilesStartOffsetCS";
    _DAT_14c9c6600 = FUN_146826540;
    _DAT_14c9c6608 = FUN_146825d77;
    _DAT_14c9c6610 = FUN_146825fd6;
    _DAT_14c9c6618 = FUN_1407e02ea;
    _DAT_14c9c6620 = FUN_146826273;
    _DAT_14c9c65f8 = FUN_14714ef1a;
    _DAT_14c9c6638 = 0xffffffff000000e0;
    _DAT_14c9c6640 = 8;
    DAT_14c9c6644 = 0;
    _DAT_14c9c6628 = &LAB_14714ef44;
    FUN_145eaaa1a();
    FUN_1407e00cc(&DAT_14c9c65e0);
    return;
  }
  return;
}



// FUNCTION 145eaaa1a FUN_145eaaa1a body=123 status=ok
// SIG undefined FUN_145eaaa1a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eaaa1a(void)

{
  _DAT_14c9c9570 = L"BASE";
  DAT_14c9c959a = 4;
  _DAT_14c9c9578 = FUN_140b35ae4();
  _DAT_14c9c9580 = DAT_14c9c65f0;
  _DAT_14c9c9588 = &LAB_14682652b;
  DAT_14c9c65f0 = &DAT_14c9c9570;
  DAT_14c9c6645 = DAT_14c9c6645 + '\x01';
  _DAT_14c9c9590 = 0x100000000;
  if (*(char *)(_DAT_14c9c9578 + 100) != '\0') {
    DAT_14c9c6646 = DAT_14c9c6646 + '\x01';
  }
  return;
}



// FUNCTION 145eaaa96 FUN_145eaaa96 body=226 status=ok
// SIG undefined FUN_145eaaa96(void)

longlong * FUN_145eaaa96(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462bf7f6;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eaab7e FUN_145eaab7e body=144 status=ok
// SIG undefined FUN_145eaab7e(void)

code * FUN_145eaab7e(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x70000000e3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462bf884;
}



// FUNCTION 145eaac0e FUN_145eaac0e body=144 status=ok
// SIG undefined FUN_145eaac0e(void)

code * FUN_145eaac0e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar4) = L"DistanceFieldAtlas";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FDistanceFieldAtlasParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x90000000e4;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145eaab7e;
}



// FUNCTION 145eaac9e FUN_145eaac9e body=292 status=ok
// SIG undefined FUN_145eaac9e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145eaac9e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9cb0b8) {
    FUN_144b3d300(&DAT_14c9cb0b8);
    if (DAT_14c9cb0b8 == -1) {
      FUN_145eaaf0c();
      FUN_145eaadc2();
      FUN_140db5666(&DAT_14c9cb010,0,&DAT_14c9cafa8,L"FPostProcessKuwaharaEdgeDetectionCS",
                    L"/Engine/Private/Gearbox/PostProcessKuwaharaEdgeDetect.usf",L"MainEdgeDetectCS"
                    ,5,1,FUN_14715a008,FUN_147159fa8,&LAB_147159fa4,&LAB_147159fa0,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9ce050);
      _DAT_14c9cb010 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c000d7);
      _Init_thread_footer(&DAT_14c9cb0b8);
    }
  }
  return &DAT_14c9cb010;
}



// FUNCTION 145eaadc2 FUN_145eaadc2 body=205 status=ok
// SIG undefined FUN_145eaadc2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eaadc2(void)

{
  if ((DAT_14c9cb00f & 2) == 0) {
    DAT_14c9cb00f = DAT_14c9cb00f | 2;
    _DAT_14c9cafb0 = L"FPostProcessKuwaharaEdgeDetectionCS";
    _DAT_14c9cafc8 = FUN_146826540;
    _DAT_14c9cafd0 = FUN_146825d77;
    _DAT_14c9cafd8 = FUN_146825fd6;
    _DAT_14c9cafe0 = FUN_1407e02ea;
    _DAT_14c9cafe8 = FUN_146826273;
    _DAT_14c9cafc0 = FUN_147159f72;
    _DAT_14c9cb000 = 0xffffffff000000e0;
    _DAT_14c9cb008 = 8;
    DAT_14c9cb00c = 0;
    _DAT_14c9caff0 = &LAB_147159f9c;
    FUN_145eaae90();
    FUN_1407e00cc(&DAT_14c9cafa8);
    return;
  }
  return;
}



// FUNCTION 145eaae90 FUN_145eaae90 body=123 status=ok
// SIG undefined FUN_145eaae90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eaae90(void)

{
  _DAT_14c9cf280 = L"BASE";
  DAT_14c9cf2aa = 4;
  _DAT_14c9cf288 = FUN_140b35ae4();
  _DAT_14c9cf290 = DAT_14c9cafb8;
  _DAT_14c9cf298 = &LAB_14682652b;
  DAT_14c9cafb8 = &DAT_14c9cf280;
  DAT_14c9cb00d = DAT_14c9cb00d + '\x01';
  _DAT_14c9cf2a0 = 0x100000000;
  if (*(char *)(_DAT_14c9cf288 + 100) != '\0') {
    DAT_14c9cb00e = DAT_14c9cb00e + '\x01';
  }
  return;
}



// FUNCTION 145eaaf0c FUN_145eaaf0c body=261 status=ok
// SIG undefined FUN_145eaaf0c(void)

void FUN_145eaaf0c(void)

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
              0x110) < DAT_14c9ce0d0) {
    FUN_144b3d300(&DAT_14c9ce0d0);
    if (DAT_14c9ce0d0 == -1) {
      FUN_145eab012(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FPostProcessKuwaharaEdgeDetectionParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x5f;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9ce050,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c1d81b);
      _Init_thread_footer(&DAT_14c9ce0d0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eab012 FUN_145eab012 body=226 status=ok
// SIG undefined FUN_145eab012(void)

longlong * FUN_145eab012(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462c34d2;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eab0fa FUN_145eab0fa body=138 status=ok
// SIG undefined FUN_145eab0fa(void)

undefined1 * FUN_145eab0fa(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x60;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145eab0f6;
}



// FUNCTION 145eab184 FUN_145eab184 body=144 status=ok
// SIG undefined FUN_145eab184(void)

code * FUN_145eab184(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1000000061;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145eab0fa;
}



// FUNCTION 145eab214 FUN_145eab214 body=292 status=ok
// SIG undefined FUN_145eab214(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145eab214(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d0718) {
    FUN_144b3d300(&DAT_14c9d0718);
    if (DAT_14c9d0718 == -1) {
      FUN_145eab482();
      FUN_145eab338();
      FUN_140db5666(&DAT_14c9d0670,0,&DAT_14c9d0608,L"FHairVisibilityGBufferWritePS",
                    L"/Engine/Private/HairStrands/HairStrandsComposition.usf",L"MainPS",3,2,
                    FUN_14716aa7a,FUN_14716aa1a,FUN_1462c5cfc,&LAB_14716aa16,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9d3bf0);
      _DAT_14c9d0670 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c32a31);
      _Init_thread_footer(&DAT_14c9d0718);
    }
  }
  return &DAT_14c9d0670;
}



// FUNCTION 145eab338 FUN_145eab338 body=205 status=ok
// SIG undefined FUN_145eab338(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eab338(void)

{
  if ((DAT_14c9d066f & 2) == 0) {
    DAT_14c9d066f = DAT_14c9d066f | 2;
    _DAT_14c9d0610 = L"FHairVisibilityGBufferWritePS";
    _DAT_14c9d0628 = FUN_146826540;
    _DAT_14c9d0630 = FUN_146825d77;
    _DAT_14c9d0638 = FUN_146825fd6;
    _DAT_14c9d0640 = FUN_1407e02ea;
    _DAT_14c9d0648 = FUN_146826273;
    _DAT_14c9d0620 = FUN_14716a9e6;
    _DAT_14c9d0660 = 0xffffffff000000e0;
    _DAT_14c9d0668 = 8;
    DAT_14c9d066c = 0;
    _DAT_14c9d0650 = &LAB_14716aa12;
    FUN_145eab406();
    FUN_1407e00cc(&DAT_14c9d0608);
    return;
  }
  return;
}



// FUNCTION 145eab406 FUN_145eab406 body=123 status=ok
// SIG undefined FUN_145eab406(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eab406(void)

{
  _DAT_14c9d4d88 = L"BASE";
  DAT_14c9d4db2 = 4;
  _DAT_14c9d4d90 = FUN_140b35ae4();
  _DAT_14c9d4d98 = DAT_14c9d0618;
  _DAT_14c9d4da0 = &LAB_14682652b;
  DAT_14c9d0618 = &DAT_14c9d4d88;
  DAT_14c9d066d = DAT_14c9d066d + '\x01';
  _DAT_14c9d4da8 = 0x100000000;
  if (*(char *)(_DAT_14c9d4d90 + 100) != '\0') {
    DAT_14c9d066e = DAT_14c9d066e + '\x01';
  }
  return;
}



// FUNCTION 145eab482 FUN_145eab482 body=261 status=ok
// SIG undefined FUN_145eab482(void)

void FUN_145eab482(void)

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
              0x110) < DAT_14c9d3c70) {
    FUN_144b3d300(&DAT_14c9d3c70);
    if (DAT_14c9d3c70 == -1) {
      FUN_145eab588(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x150;
      local_58 = 0x1f7;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9d3bf0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c46e01);
      _Init_thread_footer(&DAT_14c9d3c70);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eab588 FUN_145eab588 body=226 status=ok
// SIG undefined FUN_145eab588(void)

longlong * FUN_145eab588(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462c6d5e;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eab670 FUN_145eab670 body=138 status=ok
// SIG undefined FUN_145eab670(void)

undefined1 * FUN_145eab670(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1f8;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145eab66c;
}



// FUNCTION 145eab6fa FUN_145eab6fa body=144 status=ok
// SIG undefined FUN_145eab6fa(void)

code * FUN_145eab6fa(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x40000001fa;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14716ee58;
}



// FUNCTION 145eab78a FUN_145eab78a body=292 status=ok
// SIG undefined FUN_145eab78a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145eab78a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d9cb8) {
    FUN_144b3d300(&DAT_14c9d9cb8);
    if (DAT_14c9d9cb8 == -1) {
      FUN_145eab9f8();
      FUN_145eab8ae();
      FUN_140db5666(&DAT_14c9d9c10,0,&DAT_14c9d9ba8,L"FHairStrandsEmitHitProxyIdPS",
                    L"/Engine/Private/HairStrands/HairStrandsHitProxy.usf",L"EmitPS",3,1,
                    FUN_1471859ec,FUN_14718598c,&LAB_1462ca4cc,&LAB_147185988,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9db3e8);
      _DAT_14c9d9c10 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c661f9);
      _Init_thread_footer(&DAT_14c9d9cb8);
    }
  }
  return &DAT_14c9d9c10;
}



// FUNCTION 145eab8ae FUN_145eab8ae body=205 status=ok
// SIG undefined FUN_145eab8ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eab8ae(void)

{
  if ((DAT_14c9d9c0f & 2) == 0) {
    DAT_14c9d9c0f = DAT_14c9d9c0f | 2;
    _DAT_14c9d9bb0 = L"FHairStrandsEmitHitProxyIdPS";
    _DAT_14c9d9bc8 = FUN_146826540;
    _DAT_14c9d9bd0 = FUN_146825d77;
    _DAT_14c9d9bd8 = FUN_146825fd6;
    _DAT_14c9d9be0 = FUN_1407e02ea;
    _DAT_14c9d9be8 = FUN_146826273;
    _DAT_14c9d9bc0 = FUN_14718595a;
    _DAT_14c9d9c00 = 0xffffffff000000e0;
    _DAT_14c9d9c08 = 8;
    DAT_14c9d9c0c = 0;
    _DAT_14c9d9bf0 = &LAB_147185984;
    FUN_145eab97c();
    FUN_1407e00cc(&DAT_14c9d9ba8);
    return;
  }
  return;
}



// FUNCTION 145eab97c FUN_145eab97c body=123 status=ok
// SIG undefined FUN_145eab97c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eab97c(void)

{
  _DAT_14c9dc3f8 = L"BASE";
  DAT_14c9dc422 = 4;
  _DAT_14c9dc400 = FUN_140b35ae4();
  _DAT_14c9dc408 = DAT_14c9d9bb8;
  _DAT_14c9dc410 = &LAB_14682652b;
  DAT_14c9d9bb8 = &DAT_14c9dc3f8;
  DAT_14c9d9c0d = DAT_14c9d9c0d + '\x01';
  _DAT_14c9dc418 = 0x100000000;
  if (*(char *)(_DAT_14c9dc400 + 100) != '\0') {
    DAT_14c9d9c0e = DAT_14c9d9c0e + '\x01';
  }
  return;
}



// FUNCTION 145eab9f8 FUN_145eab9f8 body=261 status=ok
// SIG undefined FUN_145eab9f8(void)

void FUN_145eab9f8(void)

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
              0x110) < DAT_14c9db468) {
    FUN_144b3d300(&DAT_14c9db468);
    if (DAT_14c9db468 == -1) {
      FUN_145eabafe(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x170;
      local_58 = 0x1054;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9db3e8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c71dd5);
      _Init_thread_footer(&DAT_14c9db468);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eabafe FUN_145eabafe body=226 status=ok
// SIG undefined FUN_145eabafe(void)

longlong * FUN_145eabafe(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462cdee8;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eabbe6 FUN_145eabbe6 body=138 status=ok
// SIG undefined FUN_145eabbe6(void)

code * FUN_145eabbe6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VisNodeIndex";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000001058;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145eabc70;
}



// FUNCTION 145eabc70 FUN_145eabc70 body=144 status=ok
// SIG undefined FUN_145eabc70(void)

code * FUN_145eabc70(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1000001057;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14718fd72;
}



// FUNCTION 145eabd00 FUN_145eabd00 body=292 status=ok
// SIG undefined FUN_145eabd00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145eabd00(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ed9a0) {
    FUN_144b3d300(&DAT_14c9ed9a0);
    if (DAT_14c9ed9a0 == -1) {
      FUN_145eabf6e();
      FUN_145eabe24();
      FUN_140db5666(&DAT_14c9ed8f8,0,&DAT_14c9ed890,L"FMarkRadianceProbesUsedByGBufferCS",
                    L"/Engine/Private/Lumen/LumenIrradianceFieldGather.usf",
                    L"MarkRadianceProbesUsedByGBufferCS",5,1,FUN_1471dd4d6,FUN_1471dd476,
                    &LAB_1462d72aa,&LAB_1471dd472,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9f04d8)
      ;
      _DAT_14c9ed8f8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d141a1);
      _Init_thread_footer(&DAT_14c9ed9a0);
    }
  }
  return &DAT_14c9ed8f8;
}



// FUNCTION 145eabe24 FUN_145eabe24 body=205 status=ok
// SIG undefined FUN_145eabe24(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eabe24(void)

{
  if ((DAT_14c9ed8f7 & 2) == 0) {
    DAT_14c9ed8f7 = DAT_14c9ed8f7 | 2;
    _DAT_14c9ed898 = L"FMarkRadianceProbesUsedByGBufferCS";
    _DAT_14c9ed8b0 = FUN_146826540;
    _DAT_14c9ed8b8 = FUN_146825d77;
    _DAT_14c9ed8c0 = FUN_146825fd6;
    _DAT_14c9ed8c8 = FUN_1407e02ea;
    _DAT_14c9ed8d0 = FUN_146826273;
    _DAT_14c9ed8a8 = FUN_1471dd444;
    _DAT_14c9ed8e8 = 0xffffffff000000e0;
    _DAT_14c9ed8f0 = 8;
    DAT_14c9ed8f4 = 0;
    _DAT_14c9ed8d8 = &LAB_1471dd46e;
    FUN_145eabef2();
    FUN_1407e00cc(&DAT_14c9ed890);
    return;
  }
  return;
}



// FUNCTION 145eabef2 FUN_145eabef2 body=123 status=ok
// SIG undefined FUN_145eabef2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eabef2(void)

{
  _DAT_14c9f18e8 = L"BASE";
  DAT_14c9f1912 = 4;
  _DAT_14c9f18f0 = FUN_140b35ae4();
  _DAT_14c9f18f8 = DAT_14c9ed8a0;
  _DAT_14c9f1900 = &LAB_14682652b;
  DAT_14c9ed8a0 = &DAT_14c9f18e8;
  DAT_14c9ed8f5 = DAT_14c9ed8f5 + '\x01';
  _DAT_14c9f1908 = 0x100000000;
  if (*(char *)(_DAT_14c9f18f0 + 100) != '\0') {
    DAT_14c9ed8f6 = DAT_14c9ed8f6 + '\x01';
  }
  return;
}



// FUNCTION 145eabf6e FUN_145eabf6e body=261 status=ok
// SIG undefined FUN_145eabf6e(void)

void FUN_145eabf6e(void)

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
              0x110) < DAT_14c9f0558) {
    FUN_144b3d300(&DAT_14c9f0558);
    if (DAT_14c9f0558 == -1) {
      FUN_145eac074(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xa0;
      local_58 = 0x9c;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f04d8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d2626b);
      _Init_thread_footer(&DAT_14c9f0558);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eac074 FUN_145eac074 body=226 status=ok
// SIG undefined FUN_145eac074(void)

longlong * FUN_145eac074(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_145c12f7a;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eac15c FUN_145eac15c body=138 status=ok
// SIG undefined FUN_145eac15c(void)

undefined1 * FUN_145eac15c(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x9d;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145eac158;
}



// FUNCTION 145eac1e6 FUN_145eac1e6 body=144 status=ok
// SIG undefined FUN_145eac1e6(void)

code * FUN_145eac1e6(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x100000009e;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145eac15c;
}



// FUNCTION 145eac276 FUN_145eac276 body=292 status=ok
// SIG undefined FUN_145eac276(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145eac276(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ef1a8) {
    FUN_144b3d300(&DAT_14c9ef1a8);
    if (DAT_14c9ef1a8 == -1) {
      FUN_145eac4e4();
      FUN_145eac39a();
      FUN_140db5666(&DAT_14c9ef100,0,&DAT_14c9ef098,L"FComputeProbeWorldOffsetsCS",
                    L"/Engine/Private/Lumen/LumenRadianceCache.usf",L"ComputeProbeWorldOffsetsCS",5,
                    1,FUN_1471dfa82,FUN_1471dfa22,&LAB_1462d735e,&LAB_1471dfa1e,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9f0ef0);
      _DAT_14c9ef100 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d260a9);
      _Init_thread_footer(&DAT_14c9ef1a8);
    }
  }
  return &DAT_14c9ef100;
}



// FUNCTION 145eac39a FUN_145eac39a body=205 status=ok
// SIG undefined FUN_145eac39a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eac39a(void)

{
  if ((DAT_14c9ef0ff & 2) == 0) {
    DAT_14c9ef0ff = DAT_14c9ef0ff | 2;
    _DAT_14c9ef0a0 = L"FComputeProbeWorldOffsetsCS";
    _DAT_14c9ef0b8 = FUN_146826540;
    _DAT_14c9ef0c0 = FUN_146825d77;
    _DAT_14c9ef0c8 = FUN_146825fd6;
    _DAT_14c9ef0d0 = FUN_1407e02ea;
    _DAT_14c9ef0d8 = FUN_146826273;
    _DAT_14c9ef0b0 = FUN_1471df9f0;
    _DAT_14c9ef0f0 = 0xffffffff000000e0;
    _DAT_14c9ef0f8 = 8;
    DAT_14c9ef0fc = 0;
    _DAT_14c9ef0e0 = &LAB_1471dfa1a;
    FUN_145eac468();
    FUN_1407e00cc(&DAT_14c9ef098);
    return;
  }
  return;
}



// FUNCTION 145eac468 FUN_145eac468 body=123 status=ok
// SIG undefined FUN_145eac468(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eac468(void)

{
  _DAT_14c9f1d00 = L"BASE";
  DAT_14c9f1d2a = 4;
  _DAT_14c9f1d08 = FUN_140b35ae4();
  _DAT_14c9f1d10 = DAT_14c9ef0a8;
  _DAT_14c9f1d18 = &LAB_14682652b;
  DAT_14c9ef0a8 = &DAT_14c9f1d00;
  DAT_14c9ef0fd = DAT_14c9ef0fd + '\x01';
  _DAT_14c9f1d20 = 0x100000000;
  if (*(char *)(_DAT_14c9f1d08 + 100) != '\0') {
    DAT_14c9ef0fe = DAT_14c9ef0fe + '\x01';
  }
  return;
}



// FUNCTION 145eac4e4 FUN_145eac4e4 body=261 status=ok
// SIG undefined FUN_145eac4e4(void)

void FUN_145eac4e4(void)

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
              0x110) < DAT_14c9f0f70) {
    FUN_144b3d300(&DAT_14c9f0f70);
    if (DAT_14c9f0f70 == -1) {
      FUN_145eac5ea(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1b0;
      local_58 = 0x265;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f0ef0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d2635b);
      _Init_thread_footer(&DAT_14c9f0f70);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eac5ea FUN_145eac5ea body=226 status=ok
// SIG undefined FUN_145eac5ea(void)

longlong * FUN_145eac5ea(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462d9854;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eac6d2 FUN_145eac6d2 body=138 status=ok
// SIG undefined FUN_145eac6d2(void)

code * FUN_145eac6d2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000268;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145eac75c;
}



// FUNCTION 145eac75c FUN_145eac75c body=144 status=ok
// SIG undefined FUN_145eac75c(void)

code * FUN_145eac75c(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1000000267;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462d996c;
}



// FUNCTION 145eac7ec FUN_145eac7ec body=292 status=ok
// SIG undefined FUN_145eac7ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145eac7ec(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9faae8) {
    FUN_144b3d300(&DAT_14c9faae8);
    if (DAT_14c9faae8 == -1) {
      FUN_145eaca5a();
      FUN_145eac910();
      FUN_140db5666(&DAT_14c9faa40,0,&DAT_14c9fa9d8,L"FVisualizePrimitiveGroupsCS",
                    L"/Engine/Private/Lumen/LumenScene.usf",L"VisualizePrimitiveGroupsCS",5,1,
                    FUN_14720748c,FUN_14720742c,&LAB_1462e16f8,&LAB_147207428,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9fe910);
      _DAT_14c9faa40 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d7b6e9);
      _Init_thread_footer(&DAT_14c9faae8);
    }
  }
  return &DAT_14c9faa40;
}



// FUNCTION 145eac910 FUN_145eac910 body=205 status=ok
// SIG undefined FUN_145eac910(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eac910(void)

{
  if ((DAT_14c9faa3f & 2) == 0) {
    DAT_14c9faa3f = DAT_14c9faa3f | 2;
    _DAT_14c9fa9e0 = L"FVisualizePrimitiveGroupsCS";
    _DAT_14c9fa9f8 = FUN_146826540;
    _DAT_14c9faa00 = FUN_146825d77;
    _DAT_14c9faa08 = FUN_146825fd6;
    _DAT_14c9faa10 = FUN_1407e02ea;
    _DAT_14c9faa18 = FUN_146826273;
    _DAT_14c9fa9f0 = FUN_1472073fa;
    _DAT_14c9faa30 = 0xffffffff000000e0;
    _DAT_14c9faa38 = 8;
    DAT_14c9faa3c = 0;
    _DAT_14c9faa20 = &LAB_147207424;
    FUN_145eac9de();
    FUN_1407e00cc(&DAT_14c9fa9d8);
    return;
  }
  return;
}



// FUNCTION 145eac9de FUN_145eac9de body=123 status=ok
// SIG undefined FUN_145eac9de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eac9de(void)

{
  _DAT_14ca00058 = L"BASE";
  DAT_14ca00082 = 4;
  _DAT_14ca00060 = FUN_140b35ae4();
  _DAT_14ca00068 = DAT_14c9fa9e8;
  _DAT_14ca00070 = &LAB_14682652b;
  DAT_14c9fa9e8 = &DAT_14ca00058;
  DAT_14c9faa3d = DAT_14c9faa3d + '\x01';
  _DAT_14ca00078 = 0x100000000;
  if (*(char *)(_DAT_14ca00060 + 100) != '\0') {
    DAT_14c9faa3e = DAT_14c9faa3e + '\x01';
  }
  return;
}



// FUNCTION 145eaca5a FUN_145eaca5a body=261 status=ok
// SIG undefined FUN_145eaca5a(void)

void FUN_145eaca5a(void)

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
              0x110) < DAT_14c9fe990) {
    FUN_144b3d300(&DAT_14c9fe990);
    if (DAT_14c9fe990 == -1) {
      FUN_145eacb60(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x100;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9fe910,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d9c4f3);
      _Init_thread_footer(&DAT_14c9fe990);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eacb60 FUN_145eacb60 body=226 status=ok
// SIG undefined FUN_145eacb60(void)

longlong * FUN_145eacb60(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462e41b2;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eacc48 FUN_145eacc48 body=138 status=ok
// SIG undefined FUN_145eacc48(void)

undefined1 * FUN_145eacc48(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x101;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145eacc44;
}



// FUNCTION 145eaccd2 FUN_145eaccd2 body=144 status=ok
// SIG undefined FUN_145eaccd2(void)

code * FUN_145eaccd2(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1000000102;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145eacc48;
}



// FUNCTION 145eacd62 FUN_145eacd62 body=205 status=ok
// SIG undefined FUN_145eacd62(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eacd62(void)

{
  if ((DAT_14ca018d7 & 2) == 0) {
    DAT_14ca018d7 = DAT_14ca018d7 | 2;
    _DAT_14ca01878 = L"FScreenProbeTraceVoxelsCS";
    _DAT_14ca01890 = FUN_146826540;
    _DAT_14ca01898 = FUN_146825d77;
    _DAT_14ca018a0 = FUN_146825fd6;
    _DAT_14ca018a8 = FUN_1407e02ea;
    _DAT_14ca018b0 = FUN_146826273;
    _DAT_14ca01888 = FUN_147221242;
    _DAT_14ca018c8 = 0xffffffff000000e0;
    _DAT_14ca018d0 = 8;
    DAT_14ca018d4 = 0;
    _DAT_14ca018b8 = &LAB_14722126c;
    FUN_145eace30();
    FUN_1407e00cc(&DAT_14ca01870);
    return;
  }
  return;
}



// FUNCTION 145eace30 FUN_145eace30 body=123 status=ok
// SIG undefined FUN_145eace30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eace30(void)

{
  _DAT_14ca07928 = L"BASE";
  DAT_14ca07952 = 4;
  _DAT_14ca07930 = FUN_140b35ae4();
  _DAT_14ca07938 = DAT_14ca01880;
  _DAT_14ca07940 = &LAB_14682652b;
  DAT_14ca01880 = &DAT_14ca07928;
  DAT_14ca018d5 = DAT_14ca018d5 + '\x01';
  _DAT_14ca07948 = 0x100000000;
  if (*(char *)(_DAT_14ca07930 + 100) != '\0') {
    DAT_14ca018d6 = DAT_14ca018d6 + '\x01';
  }
  return;
}



// FUNCTION 145eaceac FUN_145eaceac body=226 status=ok
// SIG undefined FUN_145eaceac(void)

longlong * FUN_145eaceac(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462e87d8;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eacf94 FUN_145eacf94 body=144 status=ok
// SIG undefined FUN_145eacf94(void)

code * FUN_145eacf94(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar4) = L"HairStrandsVoxel";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FVirtualVoxelParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x410000001b9;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462e8868;
}



// FUNCTION 145ead024 FUN_145ead024 body=144 status=ok
// SIG undefined FUN_145ead024(void)

code * FUN_145ead024(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_141359544();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ScreenProbeParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FScreenProbeParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x100000001b5;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462e8a16;
}



// FUNCTION 145ead0b4 FUN_145ead0b4 body=292 status=ok
// SIG undefined FUN_145ead0b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ead0b4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca01d88) {
    FUN_144b3d300(&DAT_14ca01d88);
    if (DAT_14ca01d88 == -1) {
      FUN_145ead322();
      FUN_145ead1d8();
      FUN_140db5666(&DAT_14ca01ce0,0,&DAT_14ca01c78,L"FLumenShortRangeAOHardwareRayTracing",
                    L"/Engine/Private/Lumen/LumenShortRangeAOHardwareRayTracing.usf",
                    L"LumenShortRangeAOHardwareRayTracing",6,2,FUN_147221738,FUN_1472216f4,
                    FUN_1462e737c,&LAB_1472216f0,&LAB_1472216ea,&LAB_1472216ca,0xe0,&DAT_14ca06010);
      _DAT_14ca01ce0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142db5342);
      _Init_thread_footer(&DAT_14ca01d88);
    }
  }
  return &DAT_14ca01ce0;
}



// FUNCTION 145ead1d8 FUN_145ead1d8 body=205 status=ok
// SIG undefined FUN_145ead1d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ead1d8(void)

{
  if ((DAT_14ca01cdf & 2) == 0) {
    DAT_14ca01cdf = DAT_14ca01cdf | 2;
    _DAT_14ca01c80 = L"FLumenShortRangeAOHardwareRayTracing";
    _DAT_14ca01c98 = FUN_146826540;
    _DAT_14ca01ca0 = FUN_146825d77;
    _DAT_14ca01ca8 = FUN_146825fd6;
    _DAT_14ca01cb0 = FUN_1407e02ea;
    _DAT_14ca01cb8 = FUN_146826273;
    _DAT_14ca01c90 = FUN_14722169c;
    _DAT_14ca01cd0 = 0xffffffff000000e0;
    _DAT_14ca01cd8 = 8;
    DAT_14ca01cdc = 0;
    _DAT_14ca01cc0 = &LAB_1472216c6;
    FUN_145ead2a6();
    FUN_1407e00cc(&DAT_14ca01c78);
    return;
  }
  return;
}



// FUNCTION 145ead2a6 FUN_145ead2a6 body=123 status=ok
// SIG undefined FUN_145ead2a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ead2a6(void)

{
  _DAT_14ca079b8 = L"BASE";
  DAT_14ca079e2 = 4;
  _DAT_14ca079c0 = FUN_140b35ae4();
  _DAT_14ca079c8 = DAT_14ca01c88;
  _DAT_14ca079d0 = &LAB_14682652b;
  DAT_14ca01c88 = &DAT_14ca079b8;
  DAT_14ca01cdd = DAT_14ca01cdd + '\x01';
  _DAT_14ca079d8 = 0x100000000;
  if (*(char *)(_DAT_14ca079c0 + 100) != '\0') {
    DAT_14ca01cde = DAT_14ca01cde + '\x01';
  }
  return;
}



// FUNCTION 145ead322 FUN_145ead322 body=261 status=ok
// SIG undefined FUN_145ead322(void)

void FUN_145ead322(void)

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
              0x110) < DAT_14ca06090) {
    FUN_144b3d300(&DAT_14ca06090);
    if (DAT_14ca06090 == -1) {
      FUN_145ead428(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xd0;
      local_58 = 0x3a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca06010,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142dd33e7);
      _Init_thread_footer(&DAT_14ca06090);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ead428 FUN_145ead428 body=226 status=ok
// SIG undefined FUN_145ead428(void)

longlong * FUN_145ead428(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462e8f16;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ead510 FUN_145ead510 body=138 status=ok
// SIG undefined FUN_145ead510(void)

code * FUN_145ead510(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MaxScreenTraceFraction";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa800000042;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14722a9fc;
}



// FUNCTION 145ead59a FUN_145ead59a body=144 status=ok
// SIG undefined FUN_145ead59a(void)

code * FUN_145ead59a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1448a8484();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"BlueNoise";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FBlueNoise";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x900000003f;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14722aa86;
}



// FUNCTION 145ead62a FUN_145ead62a body=292 status=ok
// SIG undefined FUN_145ead62a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ead62a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca03520) {
    FUN_144b3d300(&DAT_14ca03520);
    if (DAT_14ca03520 == -1) {
      FUN_145ead898();
      FUN_145ead74e();
      FUN_140db5666(&DAT_14ca03478,0,&DAT_14ca03410,L"FVisualizeLumenSceneCS",
                    L"/Engine/Private/Lumen/LumenVisualize.usf",L"VisualizeQuadsCS",5,0x20,
                    FUN_147222a3c,FUN_1472229dc,&LAB_14176e1b0,&LAB_142dc2676,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca066f8);
      _DAT_14ca03478 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142dc2679);
      _Init_thread_footer(&DAT_14ca03520);
    }
  }
  return &DAT_14ca03478;
}



// FUNCTION 145ead74e FUN_145ead74e body=205 status=ok
// SIG undefined FUN_145ead74e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ead74e(void)

{
  if ((DAT_14ca03477 & 2) == 0) {
    DAT_14ca03477 = DAT_14ca03477 | 2;
    _DAT_14ca03418 = L"FVisualizeLumenSceneCS";
    _DAT_14ca03430 = FUN_146826540;
    _DAT_14ca03438 = FUN_146825d77;
    _DAT_14ca03440 = FUN_146825fd6;
    _DAT_14ca03448 = FUN_1407e02ea;
    _DAT_14ca03450 = FUN_146826273;
    _DAT_14ca03428 = FUN_1472229ae;
    _DAT_14ca03468 = 0xffffffff000000e0;
    _DAT_14ca03470 = 8;
    DAT_14ca03474 = 0;
    _DAT_14ca03458 = &LAB_1472229d8;
    FUN_145ead81c();
    FUN_1407e00cc(&DAT_14ca03410);
    return;
  }
  return;
}



// FUNCTION 145ead81c FUN_145ead81c body=123 status=ok
// SIG undefined FUN_145ead81c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ead81c(void)

{
  _DAT_14ca07df0 = L"BASE";
  DAT_14ca07e1a = 4;
  _DAT_14ca07df8 = FUN_140b35ae4();
  _DAT_14ca07e00 = DAT_14ca03420;
  _DAT_14ca07e08 = &LAB_14682652b;
  DAT_14ca03420 = &DAT_14ca07df0;
  DAT_14ca03475 = DAT_14ca03475 + '\x01';
  _DAT_14ca07e10 = 0x100000000;
  if (*(char *)(_DAT_14ca07df8 + 100) != '\0') {
    DAT_14ca03476 = DAT_14ca03476 + '\x01';
  }
  return;
}



// FUNCTION 145ead898 FUN_145ead898 body=261 status=ok
// SIG undefined FUN_145ead898(void)

void FUN_145ead898(void)

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
              0x110) < DAT_14ca06778) {
    FUN_144b3d300(&DAT_14ca06778);
    if (DAT_14ca06778 == -1) {
      FUN_145ead99e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x4b0;
      local_58 = 0x131;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca066f8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142dd3a5b);
      _Init_thread_footer(&DAT_14ca06778);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ead99e FUN_145ead99e body=226 status=ok
// SIG undefined FUN_145ead99e(void)

longlong * FUN_145ead99e(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462e9fdc;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eada86 FUN_145eada86 body=138 status=ok
// SIG undefined FUN_145eada86(void)

undefined1 * FUN_145eada86(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x132;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145eada82;
}



// FUNCTION 145eadb10 FUN_145eadb10 body=144 status=ok
// SIG undefined FUN_145eadb10(void)

code * FUN_145eadb10(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x33000000136;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145ddab58;
}



// FUNCTION 145eadba0 FUN_145eadba0 body=292 status=ok
// SIG undefined FUN_145eadba0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145eadba0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca147f8) {
    FUN_144b3d300(&DAT_14ca147f8);
    if (DAT_14ca147f8 == -1) {
      FUN_145eade0e();
      FUN_145eadcc4();
      FUN_140db5666(&DAT_14ca14750,0,&DAT_14ca146e8,L"FPrimitiveFilter_CS",
                    L"/Engine/Private/Nanite/NanitePrimitiveFilter.usf",L"PrimitiveFilter",5,4,
                    FUN_147251ac8,FUN_147251a68,&LAB_1462eeccc,&LAB_147251a64,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca17688);
      _DAT_14ca14750 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e0a2b0);
      _Init_thread_footer(&DAT_14ca147f8);
    }
  }
  return &DAT_14ca14750;
}



// FUNCTION 145eadcc4 FUN_145eadcc4 body=205 status=ok
// SIG undefined FUN_145eadcc4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eadcc4(void)

{
  if ((DAT_14ca1474f & 2) == 0) {
    DAT_14ca1474f = DAT_14ca1474f | 2;
    _DAT_14ca146f0 = L"FPrimitiveFilter_CS";
    _DAT_14ca14708 = FUN_146826540;
    _DAT_14ca14710 = FUN_146825d77;
    _DAT_14ca14718 = FUN_146825fd6;
    _DAT_14ca14720 = FUN_1407e02ea;
    _DAT_14ca14728 = FUN_146826273;
    _DAT_14ca14700 = FUN_147251a34;
    _DAT_14ca14740 = 0xffffffff000000e0;
    _DAT_14ca14748 = 8;
    DAT_14ca1474c = 0;
    _DAT_14ca14730 = &LAB_147251a60;
    FUN_145eadd92();
    FUN_1407e00cc(&DAT_14ca146e8);
    return;
  }
  return;
}



// FUNCTION 145eadd92 FUN_145eadd92 body=123 status=ok
// SIG undefined FUN_145eadd92(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eadd92(void)

{
  _DAT_14ca18fe0 = L"BASE";
  DAT_14ca1900a = 4;
  _DAT_14ca18fe8 = FUN_140b35ae4();
  _DAT_14ca18ff0 = DAT_14ca146f8;
  _DAT_14ca18ff8 = &LAB_14682652b;
  DAT_14ca146f8 = &DAT_14ca18fe0;
  DAT_14ca1474d = DAT_14ca1474d + '\x01';
  _DAT_14ca19000 = 0x100000000;
  if (*(char *)(_DAT_14ca18fe8 + 100) != '\0') {
    DAT_14ca1474e = DAT_14ca1474e + '\x01';
  }
  return;
}



// FUNCTION 145eade0e FUN_145eade0e body=261 status=ok
// SIG undefined FUN_145eade0e(void)

void FUN_145eade0e(void)

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
              0x110) < DAT_14ca17708) {
    FUN_144b3d300(&DAT_14ca17708);
    if (DAT_14ca17708 == -1) {
      FUN_145eadf14(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x286;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca17688,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e275df);
      _Init_thread_footer(&DAT_14ca17708);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eadf14 FUN_145eadf14 body=226 status=ok
// SIG undefined FUN_145eadf14(void)

longlong * FUN_145eadf14(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462f0526;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eadffc FUN_145eadffc body=138 status=ok
// SIG undefined FUN_145eadffc(void)

code * FUN_145eadffc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HiddenPrimitivesList";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000290;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147256526;
}



// FUNCTION 145eae086 FUN_145eae086 body=144 status=ok
// SIG undefined FUN_145eae086(void)

code * FUN_145eae086(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x100000028c;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462f05ae;
}



// FUNCTION 145eae116 FUN_145eae116 body=292 status=ok
// SIG undefined FUN_145eae116(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145eae116(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca27740) {
    FUN_144b3d300(&DAT_14ca27740);
    if (DAT_14ca27740 == -1) {
      FUN_145eae384();
      FUN_145eae23a();
      FUN_140db5666(&DAT_14ca27698,0,&DAT_14ca27630,L"FBasicEyeAdaptationSetupPS",
                    L"/Engine/Private/PostProcessEyeAdaptation.usf",L"BasicEyeAdaptationSetupPS",3,1
                    ,FUN_14728bd26,FUN_14728bcc6,&LAB_14728bc9e,&LAB_14728bc9a,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca2a188);
      _DAT_14ca27698 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142ebc274);
      _Init_thread_footer(&DAT_14ca27740);
    }
  }
  return &DAT_14ca27698;
}



// FUNCTION 145eae23a FUN_145eae23a body=205 status=ok
// SIG undefined FUN_145eae23a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eae23a(void)

{
  if ((DAT_14ca27697 & 2) == 0) {
    DAT_14ca27697 = DAT_14ca27697 | 2;
    _DAT_14ca27638 = L"FBasicEyeAdaptationSetupPS";
    _DAT_14ca27650 = FUN_146826540;
    _DAT_14ca27658 = FUN_146825d77;
    _DAT_14ca27660 = FUN_146825fd6;
    _DAT_14ca27668 = FUN_1407e02ea;
    _DAT_14ca27670 = FUN_146826273;
    _DAT_14ca27648 = FUN_14728bc6a;
    _DAT_14ca27688 = 0xffffffff000000e0;
    _DAT_14ca27690 = 8;
    DAT_14ca27694 = 0;
    _DAT_14ca27678 = &LAB_14728bc96;
    FUN_145eae308();
    FUN_1407e00cc(&DAT_14ca27630);
    return;
  }
  return;
}



// FUNCTION 145eae308 FUN_145eae308 body=123 status=ok
// SIG undefined FUN_145eae308(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eae308(void)

{
  _DAT_14ca2c1e0 = L"BASE";
  DAT_14ca2c20a = 4;
  _DAT_14ca2c1e8 = FUN_140b35ae4();
  _DAT_14ca2c1f0 = DAT_14ca27640;
  _DAT_14ca2c1f8 = &LAB_14682652b;
  DAT_14ca27640 = &DAT_14ca2c1e0;
  DAT_14ca27695 = DAT_14ca27695 + '\x01';
  _DAT_14ca2c200 = 0x100000000;
  if (*(char *)(_DAT_14ca2c1e8 + 100) != '\0') {
    DAT_14ca27696 = DAT_14ca27696 + '\x01';
  }
  return;
}



// FUNCTION 145eae384 FUN_145eae384 body=261 status=ok
// SIG undefined FUN_145eae384(void)

void FUN_145eae384(void)

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
              0x110) < DAT_14ca2a208) {
    FUN_144b3d300(&DAT_14ca2a208);
    if (DAT_14ca2a208 == -1) {
      FUN_145eae48a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1b0;
      local_58 = 0x37b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca2a188,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142edce83);
      _Init_thread_footer(&DAT_14ca2a208);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eae48a FUN_145eae48a body=226 status=ok
// SIG undefined FUN_145eae48a(void)

longlong * FUN_145eae48a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462fa9dc;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


