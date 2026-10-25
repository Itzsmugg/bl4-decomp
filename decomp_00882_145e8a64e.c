// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145e8a64e FUN_145e8a64e body=205 status=ok
// SIG undefined FUN_145e8a64e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e8a64e(void)

{
  if ((DAT_14ca125c7 & 2) == 0) {
    DAT_14ca125c7 = DAT_14ca125c7 | 2;
    _DAT_14ca12568 = L"FLocalLightBufferCS";
    _DAT_14ca12580 = FUN_146826540;
    _DAT_14ca12588 = FUN_146825d77;
    _DAT_14ca12590 = FUN_146825fd6;
    _DAT_14ca12598 = FUN_1407e02ea;
    _DAT_14ca125a0 = FUN_146826273;
    _DAT_14ca12578 = FUN_14724dc5a;
    _DAT_14ca125b8 = 0xffffffff000000e0;
    _DAT_14ca125c0 = 8;
    DAT_14ca125c4 = 0;
    _DAT_14ca125a8 = &LAB_14724dc86;
    FUN_145e8a71c();
    FUN_1407e00cc(&DAT_14ca12560);
    return;
  }
  return;
}



// FUNCTION 145e8a71c FUN_145e8a71c body=123 status=ok
// SIG undefined FUN_145e8a71c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e8a71c(void)

{
  _DAT_14ca18830 = L"BASE";
  DAT_14ca1885a = 4;
  _DAT_14ca18838 = FUN_140b35ae4();
  _DAT_14ca18840 = DAT_14ca12570;
  _DAT_14ca18848 = &LAB_14682652b;
  DAT_14ca12570 = &DAT_14ca18830;
  DAT_14ca125c5 = DAT_14ca125c5 + '\x01';
  _DAT_14ca18850 = 0x100000000;
  if (*(char *)(_DAT_14ca18838 + 100) != '\0') {
    DAT_14ca125c6 = DAT_14ca125c6 + '\x01';
  }
  return;
}



// FUNCTION 145e8a798 FUN_145e8a798 body=261 status=ok
// SIG undefined FUN_145e8a798(void)

void FUN_145e8a798(void)

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
              0x110) < DAT_14ca16e00) {
    FUN_144b3d300(&DAT_14ca16e00);
    if (DAT_14ca16e00 == -1) {
      FUN_145e8a89e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x1e;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca16d80,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e26ffe);
      _Init_thread_footer(&DAT_14ca16e00);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e8a89e FUN_145e8a89e body=226 status=ok
// SIG undefined FUN_145e8a89e(void)

longlong * FUN_145e8a89e(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462ef6a2;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e8a986 FUN_145e8a986 body=132 status=ok
// SIG undefined FUN_145e8a986(void)

undefined1 * FUN_145e8a986(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWTileInfo";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e8a982;
}



// FUNCTION 145e8aa0a FUN_145e8aa0a body=144 status=ok
// SIG undefined FUN_145e8aa0a(void)

code * FUN_145e8aa0a(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1000000020;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145e8a986;
}



// FUNCTION 145e8aa9a FUN_145e8aa9a body=292 status=ok
// SIG undefined FUN_145e8aa9a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e8aa9a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca12798) {
    FUN_144b3d300(&DAT_14ca12798);
    if (DAT_14ca12798 == -1) {
      FUN_145e8ad08();
      FUN_145e8abbe();
      FUN_140db5666(&DAT_14ca126f0,0,&DAT_14ca12688,L"FLocalLightBufferVS",
                    L"/Engine/Private/MobileLocalLightsBuffer.usf",L"MainVS",0,1,FUN_14724de0c,
                    FUN_14724ddac,&LAB_1462eec16,&LAB_14724dda8,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca16e08);
      _DAT_14ca126f0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142df6a3b);
      _Init_thread_footer(&DAT_14ca12798);
    }
  }
  return &DAT_14ca126f0;
}



// FUNCTION 145e8abbe FUN_145e8abbe body=205 status=ok
// SIG undefined FUN_145e8abbe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e8abbe(void)

{
  if ((DAT_14ca126ef & 2) == 0) {
    DAT_14ca126ef = DAT_14ca126ef | 2;
    _DAT_14ca12690 = L"FLocalLightBufferVS";
    _DAT_14ca126a8 = FUN_146826540;
    _DAT_14ca126b0 = FUN_146825d77;
    _DAT_14ca126b8 = FUN_146825fd6;
    _DAT_14ca126c0 = FUN_1407e02ea;
    _DAT_14ca126c8 = FUN_146826273;
    _DAT_14ca126a0 = FUN_14724dd78;
    _DAT_14ca126e0 = 0xffffffff000000e0;
    _DAT_14ca126e8 = 8;
    DAT_14ca126ec = 0;
    _DAT_14ca126d0 = &LAB_14724dda4;
    FUN_145e8ac8c();
    FUN_1407e00cc(&DAT_14ca12688);
    return;
  }
  return;
}



// FUNCTION 145e8ac8c FUN_145e8ac8c body=123 status=ok
// SIG undefined FUN_145e8ac8c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e8ac8c(void)

{
  _DAT_14ca18860 = L"BASE";
  DAT_14ca1888a = 4;
  _DAT_14ca18868 = FUN_140b35ae4();
  _DAT_14ca18870 = DAT_14ca12698;
  _DAT_14ca18878 = &LAB_14682652b;
  DAT_14ca12698 = &DAT_14ca18860;
  DAT_14ca126ed = DAT_14ca126ed + '\x01';
  _DAT_14ca18880 = 0x100000000;
  if (*(char *)(_DAT_14ca18868 + 100) != '\0') {
    DAT_14ca126ee = DAT_14ca126ee + '\x01';
  }
  return;
}



// FUNCTION 145e8ad08 FUN_145e8ad08 body=261 status=ok
// SIG undefined FUN_145e8ad08(void)

void FUN_145e8ad08(void)

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
              0x110) < DAT_14ca16e88) {
    FUN_144b3d300(&DAT_14ca16e88);
    if (DAT_14ca16e88 == -1) {
      FUN_145e8ae0e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x39;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca16e08,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e2700a);
      _Init_thread_footer(&DAT_14ca16e88);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e8ae0e FUN_145e8ae0e body=226 status=ok
// SIG undefined FUN_145e8ae0e(void)

longlong * FUN_145e8ae0e(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462ef72a;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e8aef6 FUN_145e8aef6 body=138 status=ok
// SIG undefined FUN_145e8aef6(void)

undefined1 * FUN_145e8aef6(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x3a;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e8aef2;
}



// FUNCTION 145e8af80 FUN_145e8af80 body=138 status=ok
// SIG undefined FUN_145e8af80(void)

code * FUN_145e8af80(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TileInfo";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000003b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e8aef6;
}



// FUNCTION 145e8b00a FUN_145e8b00a body=292 status=ok
// SIG undefined FUN_145e8b00a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e8b00a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca14170) {
    FUN_144b3d300(&DAT_14ca14170);
    if (DAT_14ca14170 == -1) {
      FUN_145e8b278();
      FUN_145e8b12e();
      FUN_140db5666(&DAT_14ca140c8,0,&DAT_14ca14060,L"FDepthExportCS",
                    L"/Engine/Private/Nanite/NaniteDepthExport.usf",L"DepthExport",5,0x10,
                    FUN_147251750,FUN_1472516f0,FUN_141770f54,&LAB_142e02cc8,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca174f0);
      _DAT_14ca140c8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e02ccb);
      _Init_thread_footer(&DAT_14ca14170);
    }
  }
  return &DAT_14ca140c8;
}



// FUNCTION 145e8b12e FUN_145e8b12e body=205 status=ok
// SIG undefined FUN_145e8b12e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e8b12e(void)

{
  if ((DAT_14ca140c7 & 2) == 0) {
    DAT_14ca140c7 = DAT_14ca140c7 | 2;
    _DAT_14ca14068 = L"FDepthExportCS";
    _DAT_14ca14080 = FUN_146826540;
    _DAT_14ca14088 = FUN_146825d77;
    _DAT_14ca14090 = FUN_146825fd6;
    _DAT_14ca14098 = FUN_1407e02ea;
    _DAT_14ca140a0 = FUN_146826273;
    _DAT_14ca14078 = FUN_1472516c0;
    _DAT_14ca140b8 = 0xffffffff000000e0;
    _DAT_14ca140c0 = 8;
    DAT_14ca140c4 = 0;
    _DAT_14ca140a8 = &LAB_1472516ec;
    FUN_145e8b1fc();
    FUN_1407e00cc(&DAT_14ca14060);
    return;
  }
  return;
}



// FUNCTION 145e8b1fc FUN_145e8b1fc body=123 status=ok
// SIG undefined FUN_145e8b1fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e8b1fc(void)

{
  _DAT_14ca18de8 = L"BASE";
  DAT_14ca18e12 = 4;
  _DAT_14ca18df0 = FUN_140b35ae4();
  _DAT_14ca18df8 = DAT_14ca14070;
  _DAT_14ca18e00 = &LAB_14682652b;
  DAT_14ca14070 = &DAT_14ca18de8;
  DAT_14ca140c5 = DAT_14ca140c5 + '\x01';
  _DAT_14ca18e08 = 0x100000000;
  if (*(char *)(_DAT_14ca18df0 + 100) != '\0') {
    DAT_14ca140c6 = DAT_14ca140c6 + '\x01';
  }
  return;
}



// FUNCTION 145e8b278 FUN_145e8b278 body=261 status=ok
// SIG undefined FUN_145e8b278(void)

void FUN_145e8b278(void)

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
              0x110) < DAT_14ca17570) {
    FUN_144b3d300(&DAT_14ca17570);
    if (DAT_14ca17570 == -1) {
      FUN_14157d742(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xe0;
      local_58 = 0xff;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca174f0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e275bb);
      _Init_thread_footer(&DAT_14ca17570);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e8b382 FUN_145e8b382 body=138 status=ok
// SIG undefined FUN_145e8b382(void)

code * FUN_145e8b382(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RegularMaterialRasterBinCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x980000010b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147256048;
}



// FUNCTION 145e8b40c FUN_145e8b40c body=138 status=ok
// SIG undefined FUN_145e8b40c(void)

code * FUN_145e8b40c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VisBuffer64";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<UlongType>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa00000010c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e8b382;
}



// FUNCTION 145e8b496 FUN_145e8b496 body=292 status=ok
// SIG undefined FUN_145e8b496(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e8b496(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca1a638) {
    FUN_144b3d300(&DAT_14ca1a638);
    if (DAT_14ca1a638 == -1) {
      FUN_145e8b704();
      FUN_145e8b5ba();
      FUN_140db5666(&DAT_14ca1a590,0,&DAT_14ca1a528,L"FRefPoseTransformProviderCS",
                    L"/Engine/Private/Skinning/TransformProviders.usf",L"RefPoseProviderCS",5,1,
                    FUN_147263724,FUN_1472636c4,&LAB_1462f325c,&LAB_1472636c0,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca1b678);
      _DAT_14ca1a590 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e55bef);
      _Init_thread_footer(&DAT_14ca1a638);
    }
  }
  return &DAT_14ca1a590;
}



// FUNCTION 145e8b5ba FUN_145e8b5ba body=205 status=ok
// SIG undefined FUN_145e8b5ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e8b5ba(void)

{
  if ((DAT_14ca1a58f & 2) == 0) {
    DAT_14ca1a58f = DAT_14ca1a58f | 2;
    _DAT_14ca1a530 = L"FRefPoseTransformProviderCS";
    _DAT_14ca1a548 = FUN_146826540;
    _DAT_14ca1a550 = FUN_146825d77;
    _DAT_14ca1a558 = FUN_146825fd6;
    _DAT_14ca1a560 = FUN_1407e02ea;
    _DAT_14ca1a568 = FUN_146826273;
    _DAT_14ca1a540 = FUN_147263692;
    _DAT_14ca1a580 = 0xffffffff000000e0;
    _DAT_14ca1a588 = 8;
    DAT_14ca1a58c = 0;
    _DAT_14ca1a570 = &LAB_1472636bc;
    FUN_145e8b688();
    FUN_1407e00cc(&DAT_14ca1a528);
    return;
  }
  return;
}



// FUNCTION 145e8b688 FUN_145e8b688 body=123 status=ok
// SIG undefined FUN_145e8b688(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e8b688(void)

{
  _DAT_14ca1bf98 = L"BASE";
  DAT_14ca1bfc2 = 4;
  _DAT_14ca1bfa0 = FUN_140b35ae4();
  _DAT_14ca1bfa8 = DAT_14ca1a538;
  _DAT_14ca1bfb0 = &LAB_14682652b;
  DAT_14ca1a538 = &DAT_14ca1bf98;
  DAT_14ca1a58d = DAT_14ca1a58d + '\x01';
  _DAT_14ca1bfb8 = 0x100000000;
  if (*(char *)(_DAT_14ca1bfa0 + 100) != '\0') {
    DAT_14ca1a58e = DAT_14ca1a58e + '\x01';
  }
  return;
}



// FUNCTION 145e8b704 FUN_145e8b704 body=261 status=ok
// SIG undefined FUN_145e8b704(void)

void FUN_145e8b704(void)

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
              0x110) < DAT_14ca1b6f8) {
    FUN_144b3d300(&DAT_14ca1b6f8);
    if (DAT_14ca1b6f8 == -1) {
      FUN_145e8b80a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x61;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca1b678,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e5a645);
      _Init_thread_footer(&DAT_14ca1b6f8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e8b80a FUN_145e8b80a body=226 status=ok
// SIG undefined FUN_145e8b80a(void)

longlong * FUN_145e8b80a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462f3d7c;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e8b8f2 FUN_145e8b8f2 body=138 status=ok
// SIG undefined FUN_145e8b8f2(void)

code * FUN_145e8b8f2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TransformBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000063;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e8b97c;
}



// FUNCTION 145e8b97c FUN_145e8b97c body=138 status=ok
// SIG undefined FUN_145e8b97c(void)

undefined1 * FUN_145e8b97c(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x62;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e8b8ee;
}



// FUNCTION 145e8ba06 FUN_145e8ba06 body=292 status=ok
// SIG undefined FUN_145e8ba06(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e8ba06(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca1adb8) {
    FUN_144b3d300(&DAT_14ca1adb8);
    if (DAT_14ca1adb8 == -1) {
      FUN_145e8bc74();
      FUN_145e8bb2a();
      FUN_140db5666(&DAT_14ca1ad10,0,&DAT_14ca1aca8,L"FNaniteStreamOutCS",
                    L"/Engine/Private/Nanite/NaniteStreamOut.usf",L"NaniteStreamOutCS",5,1,
                    FUN_147263d74,FUN_147263d14,&LAB_1462f34c8,&LAB_147263d10,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca1ba30);
      _DAT_14ca1ad10 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e56c24);
      _Init_thread_footer(&DAT_14ca1adb8);
    }
  }
  return &DAT_14ca1ad10;
}



// FUNCTION 145e8bb2a FUN_145e8bb2a body=205 status=ok
// SIG undefined FUN_145e8bb2a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e8bb2a(void)

{
  if ((DAT_14ca1ad0f & 2) == 0) {
    DAT_14ca1ad0f = DAT_14ca1ad0f | 2;
    _DAT_14ca1acb0 = L"FNaniteStreamOutCS";
    _DAT_14ca1acc8 = FUN_146826540;
    _DAT_14ca1acd0 = FUN_146825d77;
    _DAT_14ca1acd8 = FUN_146825fd6;
    _DAT_14ca1ace0 = FUN_1407e02ea;
    _DAT_14ca1ace8 = FUN_146826273;
    _DAT_14ca1acc0 = FUN_147263ce2;
    _DAT_14ca1ad00 = 0xffffffff000000e0;
    _DAT_14ca1ad08 = 8;
    DAT_14ca1ad0c = 0;
    _DAT_14ca1acf0 = &LAB_147263d0c;
    FUN_145e8bbf8();
    FUN_1407e00cc(&DAT_14ca1aca8);
    return;
  }
  return;
}



// FUNCTION 145e8bbf8 FUN_145e8bbf8 body=123 status=ok
// SIG undefined FUN_145e8bbf8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e8bbf8(void)

{
  _DAT_14ca1c148 = L"BASE";
  DAT_14ca1c172 = 4;
  _DAT_14ca1c150 = FUN_140b35ae4();
  _DAT_14ca1c158 = DAT_14ca1acb8;
  _DAT_14ca1c160 = &LAB_14682652b;
  DAT_14ca1acb8 = &DAT_14ca1c148;
  DAT_14ca1ad0d = DAT_14ca1ad0d + '\x01';
  _DAT_14ca1c168 = 0x100000000;
  if (*(char *)(_DAT_14ca1c150 + 100) != '\0') {
    DAT_14ca1ad0e = DAT_14ca1ad0e + '\x01';
  }
  return;
}



// FUNCTION 145e8bc74 FUN_145e8bc74 body=261 status=ok
// SIG undefined FUN_145e8bc74(void)

void FUN_145e8bc74(void)

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
              0x110) < DAT_14ca1bab0) {
    FUN_144b3d300(&DAT_14ca1bab0);
    if (DAT_14ca1bab0 == -1) {
      FUN_145e8bd7a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xa0;
      local_58 = 0xa9;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca1ba30,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e5a6e4);
      _Init_thread_footer(&DAT_14ca1bab0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e8bd7a FUN_145e8bd7a body=226 status=ok
// SIG undefined FUN_145e8bd7a(void)

longlong * FUN_145e8bd7a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462f43ee;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e8be62 FUN_145e8be62 body=138 status=ok
// SIG undefined FUN_145e8be62(void)

code * FUN_145e8be62(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutputClustersStateRW";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x48000000b4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14726848a;
}



// FUNCTION 145e8beec FUN_145e8beec body=138 status=ok
// SIG undefined FUN_145e8beec(void)

code * FUN_145e8beec(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"AuxiliaryDataBufferRW";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000000ad;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472686b2;
}



// FUNCTION 145e8bf76 FUN_145e8bf76 body=292 status=ok
// SIG undefined FUN_145e8bf76(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e8bf76(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca1b220) {
    FUN_144b3d300(&DAT_14ca1b220);
    if (DAT_14ca1b220 == -1) {
      FUN_145e8c1e4();
      FUN_145e8c09a();
      FUN_140db5666(&DAT_14ca1b178,0,&DAT_14ca1b110,L"FDepthDecodeCS",
                    L"/Engine/Private/Nanite/NaniteDepthDecode.usf",L"DepthDecode",5,1,FUN_14726438e
                    ,FUN_14726432e,&LAB_1462f34e6,&LAB_14726432a,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca1bbc8);
      _DAT_14ca1b178 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e579ca);
      _Init_thread_footer(&DAT_14ca1b220);
    }
  }
  return &DAT_14ca1b178;
}



// FUNCTION 145e8c09a FUN_145e8c09a body=205 status=ok
// SIG undefined FUN_145e8c09a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e8c09a(void)

{
  if ((DAT_14ca1b177 & 2) == 0) {
    DAT_14ca1b177 = DAT_14ca1b177 | 2;
    _DAT_14ca1b118 = L"FDepthDecodeCS";
    _DAT_14ca1b130 = FUN_146826540;
    _DAT_14ca1b138 = FUN_146825d77;
    _DAT_14ca1b140 = FUN_146825fd6;
    _DAT_14ca1b148 = FUN_1407e02ea;
    _DAT_14ca1b150 = FUN_146826273;
    _DAT_14ca1b128 = FUN_1472642fc;
    _DAT_14ca1b168 = 0xffffffff000000e0;
    _DAT_14ca1b170 = 8;
    DAT_14ca1b174 = 0;
    _DAT_14ca1b158 = &LAB_147264326;
    FUN_145e8c168();
    FUN_1407e00cc(&DAT_14ca1b110);
    return;
  }
  return;
}



// FUNCTION 145e8c168 FUN_145e8c168 body=123 status=ok
// SIG undefined FUN_145e8c168(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e8c168(void)

{
  _DAT_14ca1c1d8 = L"BASE";
  DAT_14ca1c202 = 4;
  _DAT_14ca1c1e0 = FUN_140b35ae4();
  _DAT_14ca1c1e8 = DAT_14ca1b120;
  _DAT_14ca1c1f0 = &LAB_14682652b;
  DAT_14ca1b120 = &DAT_14ca1c1d8;
  DAT_14ca1b175 = DAT_14ca1b175 + '\x01';
  _DAT_14ca1c1f8 = 0x100000000;
  if (*(char *)(_DAT_14ca1c1e0 + 100) != '\0') {
    DAT_14ca1b176 = DAT_14ca1b176 + '\x01';
  }
  return;
}



// FUNCTION 145e8c1e4 FUN_145e8c1e4 body=261 status=ok
// SIG undefined FUN_145e8c1e4(void)

void FUN_145e8c1e4(void)

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
              0x110) < DAT_14ca1bc48) {
    FUN_144b3d300(&DAT_14ca1bc48);
    if (DAT_14ca1bc48 == -1) {
      FUN_145e8c2ea(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x70;
      local_58 = 0xf0;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca1bbc8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e5b0db);
      _Init_thread_footer(&DAT_14ca1bc48);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e8c2ea FUN_145e8c2ea body=226 status=ok
// SIG undefined FUN_145e8c2ea(void)

longlong * FUN_145e8c2ea(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462f49e0;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e8c3d2 FUN_145e8c3d2 body=138 status=ok
// SIG undefined FUN_145e8c3d2(void)

code * FUN_145e8c3d2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HTileConfig";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000000f4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14726aa46;
}



// FUNCTION 145e8c45c FUN_145e8c45c body=138 status=ok
// SIG undefined FUN_145e8c45c(void)

undefined1 * FUN_145e8c45c(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xf1;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e8c3ce;
}



// FUNCTION 145e8c4e6 FUN_145e8c4e6 body=292 status=ok
// SIG undefined FUN_145e8c4e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e8c4e6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca1c8d0) {
    FUN_144b3d300(&DAT_14ca1c8d0);
    if (DAT_14ca1c8d0 == -1) {
      FUN_145e8c754();
      FUN_145e8c60a();
      FUN_140db5666(&DAT_14ca1c828,0,&DAT_14ca1c7c0,L"FOITPixelCombineCS",
                    L"/Engine/Private/OITCombine.usf",L"MainCS",5,1,FUN_147270e08,FUN_147270da8,
                    &LAB_147270d8e,&LAB_147270d8a,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca21558)
      ;
      _DAT_14ca1c828 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e6cd93);
      _Init_thread_footer(&DAT_14ca1c8d0);
    }
  }
  return &DAT_14ca1c828;
}



// FUNCTION 145e8c60a FUN_145e8c60a body=205 status=ok
// SIG undefined FUN_145e8c60a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e8c60a(void)

{
  if ((DAT_14ca1c827 & 2) == 0) {
    DAT_14ca1c827 = DAT_14ca1c827 | 2;
    _DAT_14ca1c7c8 = L"FOITPixelCombineCS";
    _DAT_14ca1c7e0 = FUN_146826540;
    _DAT_14ca1c7e8 = FUN_146825d77;
    _DAT_14ca1c7f0 = FUN_146825fd6;
    _DAT_14ca1c7f8 = FUN_1407e02ea;
    _DAT_14ca1c800 = FUN_146826273;
    _DAT_14ca1c7d8 = FUN_147270d5a;
    _DAT_14ca1c818 = 0xffffffff000000e0;
    _DAT_14ca1c820 = 8;
    DAT_14ca1c824 = 0;
    _DAT_14ca1c808 = &LAB_147270d86;
    FUN_145e8c6d8();
    FUN_1407e00cc(&DAT_14ca1c7c0);
    return;
  }
  return;
}



// FUNCTION 145e8c6d8 FUN_145e8c6d8 body=123 status=ok
// SIG undefined FUN_145e8c6d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e8c6d8(void)

{
  _DAT_14ca24690 = L"BASE";
  DAT_14ca246ba = 4;
  _DAT_14ca24698 = FUN_140b35ae4();
  _DAT_14ca246a0 = DAT_14ca1c7d0;
  _DAT_14ca246a8 = &LAB_14682652b;
  DAT_14ca1c7d0 = &DAT_14ca24690;
  DAT_14ca1c825 = DAT_14ca1c825 + '\x01';
  _DAT_14ca246b0 = 0x100000000;
  if (*(char *)(_DAT_14ca24698 + 100) != '\0') {
    DAT_14ca1c826 = DAT_14ca1c826 + '\x01';
  }
  return;
}



// FUNCTION 145e8c754 FUN_145e8c754 body=261 status=ok
// SIG undefined FUN_145e8c754(void)

void FUN_145e8c754(void)

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
              0x110) < DAT_14ca215d8) {
    FUN_144b3d300(&DAT_14ca215d8);
    if (DAT_14ca215d8 == -1) {
      FUN_145e8c85a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0xae;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca21558,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e93c48);
      _Init_thread_footer(&DAT_14ca215d8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e8c85a FUN_145e8c85a body=226 status=ok
// SIG undefined FUN_145e8c85a(void)

longlong * FUN_145e8c85a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462f53e4;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e8c942 FUN_145e8c942 body=138 status=ok
// SIG undefined FUN_145e8c942(void)

code * FUN_145e8c942(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MaxSideSampleCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000b0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147278968;
}



// FUNCTION 145e8c9cc FUN_145e8c9cc body=138 status=ok
// SIG undefined FUN_145e8c9cc(void)

code * FUN_145e8c9cc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MaxSampleCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc000000b1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e8c942;
}



// FUNCTION 145e8ca56 FUN_145e8ca56 body=292 status=ok
// SIG undefined FUN_145e8ca56(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e8ca56(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca1cd70) {
    FUN_144b3d300(&DAT_14ca1cd70);
    if (DAT_14ca1cd70 == -1) {
      FUN_145e8ccc4();
      FUN_145e8cb7a();
      FUN_140db5666(&DAT_14ca1ccc8,0,&DAT_14ca1cc60,L"FOITSortTriangleIndex_Debug",
                    L"/Engine/Private/OIT/OITSorting.usf",L"MainCS",5,1,FUN_14727135c,FUN_1472712fc,
                    &LAB_1472712ac,&LAB_1472712a8,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca21778)
      ;
      _DAT_14ca1ccc8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e6cdc3);
      _Init_thread_footer(&DAT_14ca1cd70);
    }
  }
  return &DAT_14ca1ccc8;
}



// FUNCTION 145e8cb7a FUN_145e8cb7a body=205 status=ok
// SIG undefined FUN_145e8cb7a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e8cb7a(void)

{
  if ((DAT_14ca1ccc7 & 2) == 0) {
    DAT_14ca1ccc7 = DAT_14ca1ccc7 | 2;
    _DAT_14ca1cc68 = L"FOITSortTriangleIndex_Debug";
    _DAT_14ca1cc80 = FUN_146826540;
    _DAT_14ca1cc88 = FUN_146825d77;
    _DAT_14ca1cc90 = FUN_146825fd6;
    _DAT_14ca1cc98 = FUN_1407e02ea;
    _DAT_14ca1cca0 = FUN_146826273;
    _DAT_14ca1cc78 = FUN_147271278;
    _DAT_14ca1ccb8 = 0xffffffff000000e0;
    _DAT_14ca1ccc0 = 8;
    DAT_14ca1ccc4 = 0;
    _DAT_14ca1cca8 = &LAB_1472712a4;
    FUN_145e8cc48();
    FUN_1407e00cc(&DAT_14ca1cc60);
    return;
  }
  return;
}



// FUNCTION 145e8cc48 FUN_145e8cc48 body=123 status=ok
// SIG undefined FUN_145e8cc48(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e8cc48(void)

{
  _DAT_14ca24750 = L"BASE";
  DAT_14ca2477a = 4;
  _DAT_14ca24758 = FUN_140b35ae4();
  _DAT_14ca24760 = DAT_14ca1cc70;
  _DAT_14ca24768 = &LAB_14682652b;
  DAT_14ca1cc70 = &DAT_14ca24750;
  DAT_14ca1ccc5 = DAT_14ca1ccc5 + '\x01';
  _DAT_14ca24770 = 0x100000000;
  if (*(char *)(_DAT_14ca24758 + 100) != '\0') {
    DAT_14ca1ccc6 = DAT_14ca1ccc6 + '\x01';
  }
  return;
}



// FUNCTION 145e8ccc4 FUN_145e8ccc4 body=261 status=ok
// SIG undefined FUN_145e8ccc4(void)

void FUN_145e8ccc4(void)

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
              0x110) < DAT_14ca217f8) {
    FUN_144b3d300(&DAT_14ca217f8);
    if (DAT_14ca217f8 == -1) {
      FUN_145e8cdca(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0x22f;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca21778,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e941ec);
      _Init_thread_footer(&DAT_14ca217f8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e8cdca FUN_145e8cdca body=226 status=ok
// SIG undefined FUN_145e8cdca(void)

longlong * FUN_145e8cdca(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462f5830;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e8ceb2 FUN_145e8ceb2 body=138 status=ok
// SIG undefined FUN_145e8ceb2(void)

code * FUN_145e8ceb2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VisiblePrimitives";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2400000232;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147279990;
}



// FUNCTION 145e8cf3c FUN_145e8cf3c body=138 status=ok
// SIG undefined FUN_145e8cf3c(void)

undefined1 * FUN_145e8cf3c(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x230;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e8ceae;
}



// FUNCTION 145e8cfc6 FUN_145e8cfc6 body=292 status=ok
// SIG undefined FUN_145e8cfc6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e8cfc6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca1d5c0) {
    FUN_144b3d300(&DAT_14ca1d5c0);
    if (DAT_14ca1d5c0 == -1) {
      FUN_145e8d234();
      FUN_145e8d0ea();
      FUN_140db5666(&DAT_14ca1d518,0,&DAT_14ca1d4b0,L"FPathTracingSkylightMISCompensationCS",
                    L"/Engine/Private/PathTracing/PathTracingSkylightMISCompensation.usf",
                    L"PathTracingSkylightMISCompensationCS",5,1,FUN_147271cc8,FUN_147271c68,
                    &LAB_1462f5176,&LAB_147271c64,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca21898)
      ;
      _DAT_14ca1d518 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e70a0c);
      _Init_thread_footer(&DAT_14ca1d5c0);
    }
  }
  return &DAT_14ca1d518;
}



// FUNCTION 145e8d0ea FUN_145e8d0ea body=205 status=ok
// SIG undefined FUN_145e8d0ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e8d0ea(void)

{
  if ((DAT_14ca1d517 & 2) == 0) {
    DAT_14ca1d517 = DAT_14ca1d517 | 2;
    _DAT_14ca1d4b8 = L"FPathTracingSkylightMISCompensationCS";
    _DAT_14ca1d4d0 = FUN_146826540;
    _DAT_14ca1d4d8 = FUN_146825d77;
    _DAT_14ca1d4e0 = FUN_146825fd6;
    _DAT_14ca1d4e8 = FUN_1407e02ea;
    _DAT_14ca1d4f0 = FUN_146826273;
    _DAT_14ca1d4c8 = FUN_147271c34;
    _DAT_14ca1d508 = 0xffffffff000000e0;
    _DAT_14ca1d510 = 8;
    DAT_14ca1d514 = 0;
    _DAT_14ca1d4f8 = &LAB_147271c60;
    FUN_145e8d1b8();
    FUN_1407e00cc(&DAT_14ca1d4b0);
    return;
  }
  return;
}



// FUNCTION 145e8d1b8 FUN_145e8d1b8 body=123 status=ok
// SIG undefined FUN_145e8d1b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e8d1b8(void)

{
  _DAT_14ca247b0 = L"BASE";
  DAT_14ca247da = 4;
  _DAT_14ca247b8 = FUN_140b35ae4();
  _DAT_14ca247c0 = DAT_14ca1d4c0;
  _DAT_14ca247c8 = &LAB_14682652b;
  DAT_14ca1d4c0 = &DAT_14ca247b0;
  DAT_14ca1d515 = DAT_14ca1d515 + '\x01';
  _DAT_14ca247d0 = 0x100000000;
  if (*(char *)(_DAT_14ca247b8 + 100) != '\0') {
    DAT_14ca1d516 = DAT_14ca1d516 + '\x01';
  }
  return;
}



// FUNCTION 145e8d234 FUN_145e8d234 body=261 status=ok
// SIG undefined FUN_145e8d234(void)

void FUN_145e8d234(void)

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
              0x110) < DAT_14ca21918) {
    FUN_144b3d300(&DAT_14ca21918);
    if (DAT_14ca21918 == -1) {
      FUN_145e8d33a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x3c2;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca21898,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e95c31);
      _Init_thread_footer(&DAT_14ca21918);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e8d33a FUN_145e8d33a body=226 status=ok
// SIG undefined FUN_145e8d33a(void)

longlong * FUN_145e8d33a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462f5a50;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e8d422 FUN_145e8d422 body=138 status=ok
// SIG undefined FUN_145e8d422(void)

code * FUN_145e8d422(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000003c4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14727a9f6;
}



// FUNCTION 145e8d4ac FUN_145e8d4ac body=138 status=ok
// SIG undefined FUN_145e8d4ac(void)

code * FUN_145e8d4ac(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000003c5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e8d422;
}



// FUNCTION 145e8d536 FUN_145e8d536 body=292 status=ok
// SIG undefined FUN_145e8d536(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e8d536(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca1daf8) {
    FUN_144b3d300(&DAT_14ca1daf8);
    if (DAT_14ca1daf8 == -1) {
      FUN_145e8d7a4();
      FUN_145e8d65a();
      FUN_140db5666(&DAT_14ca1da50,0,&DAT_14ca1d9e8,L"FPathTracingCopyDepthPS",
                    L"/Engine/Private/PathTracing/PathTracingCopyDepth.usf",L"CopyDepth",3,1,
                    FUN_147272114,FUN_1472720b4,&LAB_1462f518e,&LAB_1472720b0,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca21cd8);
      _DAT_14ca1da50 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e70abf);
      _Init_thread_footer(&DAT_14ca1daf8);
    }
  }
  return &DAT_14ca1da50;
}



// FUNCTION 145e8d65a FUN_145e8d65a body=205 status=ok
// SIG undefined FUN_145e8d65a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e8d65a(void)

{
  if ((DAT_14ca1da4f & 2) == 0) {
    DAT_14ca1da4f = DAT_14ca1da4f | 2;
    _DAT_14ca1d9f0 = L"FPathTracingCopyDepthPS";
    _DAT_14ca1da08 = FUN_146826540;
    _DAT_14ca1da10 = FUN_146825d77;
    _DAT_14ca1da18 = FUN_146825fd6;
    _DAT_14ca1da20 = FUN_1407e02ea;
    _DAT_14ca1da28 = FUN_146826273;
    _DAT_14ca1da00 = FUN_147272080;
    _DAT_14ca1da40 = 0xffffffff000000e0;
    _DAT_14ca1da48 = 8;
    DAT_14ca1da4c = 0;
    _DAT_14ca1da30 = &LAB_1472720ac;
    FUN_145e8d728();
    FUN_1407e00cc(&DAT_14ca1d9e8);
    return;
  }
  return;
}



// FUNCTION 145e8d728 FUN_145e8d728 body=123 status=ok
// SIG undefined FUN_145e8d728(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e8d728(void)

{
  _DAT_14ca24870 = L"BASE";
  DAT_14ca2489a = 4;
  _DAT_14ca24878 = FUN_140b35ae4();
  _DAT_14ca24880 = DAT_14ca1d9f8;
  _DAT_14ca24888 = &LAB_14682652b;
  DAT_14ca1d9f8 = &DAT_14ca24870;
  DAT_14ca1da4d = DAT_14ca1da4d + '\x01';
  _DAT_14ca24890 = 0x100000000;
  if (*(char *)(_DAT_14ca24878 + 100) != '\0') {
    DAT_14ca1da4e = DAT_14ca1da4e + '\x01';
  }
  return;
}



// FUNCTION 145e8d7a4 FUN_145e8d7a4 body=261 status=ok
// SIG undefined FUN_145e8d7a4(void)

void FUN_145e8d7a4(void)

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
              0x110) < DAT_14ca21d58) {
    FUN_144b3d300(&DAT_14ca21d58);
    if (DAT_14ca21d58 == -1) {
      FUN_145e8d8aa(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x120;
      local_58 = 0x50d;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca21cd8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e95c9d);
      _Init_thread_footer(&DAT_14ca21d58);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e8d8aa FUN_145e8d8aa body=226 status=ok
// SIG undefined FUN_145e8d8aa(void)

longlong * FUN_145e8d8aa(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462f6654;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e8d992 FUN_145e8d992 body=132 status=ok
// SIG undefined FUN_145e8d992(void)

undefined1 * FUN_145e8d992(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x50e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e8d98e;
}



// FUNCTION 145e8da16 FUN_145e8da16 body=144 status=ok
// SIG undefined FUN_145e8da16(void)

code * FUN_145e8da16(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x100000050f;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145e8d992;
}



// FUNCTION 145e8daa6 FUN_145e8daa6 body=292 status=ok
// SIG undefined FUN_145e8daa6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e8daa6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca1dc20) {
    FUN_144b3d300(&DAT_14ca1dc20);
    if (DAT_14ca1dc20 == -1) {
      FUN_145e8dd14();
      FUN_145e8dbca();
      FUN_140db5666(&DAT_14ca1db78,0,&DAT_14ca1db10,L"FPathTracingInitExtinctionCoefficientRG",
                    L"/Engine/Private/PathTracing/PathTracingInitExtinctionCoefficient.usf",
                    L"PathTracingInitExtinctionCoefficientRG",6,1,FUN_14727221c,FUN_1472721d8,
                    &LAB_1462f5196,&LAB_1472721d4,&LAB_1472721ce,&LAB_14712ac08,0xe0,&DAT_14ca21d60)
      ;
      _DAT_14ca1db78 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e70acb);
      _Init_thread_footer(&DAT_14ca1dc20);
    }
  }
  return &DAT_14ca1db78;
}



// FUNCTION 145e8dbca FUN_145e8dbca body=205 status=ok
// SIG undefined FUN_145e8dbca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e8dbca(void)

{
  if ((DAT_14ca1db77 & 2) == 0) {
    DAT_14ca1db77 = DAT_14ca1db77 | 2;
    _DAT_14ca1db18 = L"FPathTracingInitExtinctionCoefficientRG";
    _DAT_14ca1db30 = FUN_146826540;
    _DAT_14ca1db38 = FUN_146825d77;
    _DAT_14ca1db40 = FUN_146825fd6;
    _DAT_14ca1db48 = FUN_1407e02ea;
    _DAT_14ca1db50 = FUN_146826273;
    _DAT_14ca1db28 = FUN_14727219e;
    _DAT_14ca1db68 = 0xffffffff000000e0;
    _DAT_14ca1db70 = 8;
    DAT_14ca1db74 = 0;
    _DAT_14ca1db58 = &LAB_1472721ca;
    FUN_145e8dc98();
    FUN_1407e00cc(&DAT_14ca1db10);
    return;
  }
  return;
}



// FUNCTION 145e8dc98 FUN_145e8dc98 body=123 status=ok
// SIG undefined FUN_145e8dc98(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e8dc98(void)

{
  _DAT_14ca248a0 = L"BASE";
  DAT_14ca248ca = 4;
  _DAT_14ca248a8 = FUN_140b35ae4();
  _DAT_14ca248b0 = DAT_14ca1db20;
  _DAT_14ca248b8 = &LAB_14682652b;
  DAT_14ca1db20 = &DAT_14ca248a0;
  DAT_14ca1db75 = DAT_14ca1db75 + '\x01';
  _DAT_14ca248c0 = 0x100000000;
  if (*(char *)(_DAT_14ca248a8 + 100) != '\0') {
    DAT_14ca1db76 = DAT_14ca1db76 + '\x01';
  }
  return;
}



// FUNCTION 145e8dd14 FUN_145e8dd14 body=261 status=ok
// SIG undefined FUN_145e8dd14(void)

void FUN_145e8dd14(void)

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
              0x110) < DAT_14ca21de0) {
    FUN_144b3d300(&DAT_14ca21de0);
    if (DAT_14ca21de0 == -1) {
      FUN_145e8de1a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x525;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca21d60,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e95ca9);
      _Init_thread_footer(&DAT_14ca21de0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e8de1a FUN_145e8de1a body=226 status=ok
// SIG undefined FUN_145e8de1a(void)

longlong * FUN_145e8de1a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462f66dc;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e8df02 FUN_145e8df02 body=132 status=ok
// SIG undefined FUN_145e8df02(void)

undefined1 * FUN_145e8df02(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x526;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e8defe;
}



// FUNCTION 145e8df86 FUN_145e8df86 body=144 status=ok
// SIG undefined FUN_145e8df86(void)

code * FUN_145e8df86(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1000000527;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145e8df02;
}



// FUNCTION 145e8e016 FUN_145e8e016 body=292 status=ok
// SIG undefined FUN_145e8e016(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e8e016(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca1e310) {
    FUN_144b3d300(&DAT_14ca1e310);
    if (DAT_14ca1e310 == -1) {
      FUN_145e8e284();
      FUN_145e8e13a();
      FUN_140db5666(&DAT_14ca1e268,0,&DAT_14ca1e200,L"FPathTracingBuildAdaptiveErrorTextureCS",
                    L"/Engine/Private/PathTracing/PathTracingBuildAdaptiveError.usf",
                    L"PathTracingBuildAdaptiveErrorTextureCS",5,1,FUN_1472732da,FUN_14727327a,
                    &LAB_1462f51ae,&LAB_147273276,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca22038)
      ;
      _DAT_14ca1e268 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e70b13);
      _Init_thread_footer(&DAT_14ca1e310);
    }
  }
  return &DAT_14ca1e268;
}



// FUNCTION 145e8e13a FUN_145e8e13a body=205 status=ok
// SIG undefined FUN_145e8e13a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e8e13a(void)

{
  if ((DAT_14ca1e267 & 2) == 0) {
    DAT_14ca1e267 = DAT_14ca1e267 | 2;
    _DAT_14ca1e208 = L"FPathTracingBuildAdaptiveErrorTextureCS";
    _DAT_14ca1e220 = FUN_146826540;
    _DAT_14ca1e228 = FUN_146825d77;
    _DAT_14ca1e230 = FUN_146825fd6;
    _DAT_14ca1e238 = FUN_1407e02ea;
    _DAT_14ca1e240 = FUN_146826273;
    _DAT_14ca1e218 = FUN_147273246;
    _DAT_14ca1e258 = 0xffffffff000000e0;
    _DAT_14ca1e260 = 8;
    DAT_14ca1e264 = 0;
    _DAT_14ca1e248 = &LAB_147273272;
    FUN_145e8e208();
    FUN_1407e00cc(&DAT_14ca1e200);
    return;
  }
  return;
}



// FUNCTION 145e8e208 FUN_145e8e208 body=123 status=ok
// SIG undefined FUN_145e8e208(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e8e208(void)

{
  _DAT_14ca249c0 = L"BASE";
  DAT_14ca249ea = 4;
  _DAT_14ca249c8 = FUN_140b35ae4();
  _DAT_14ca249d0 = DAT_14ca1e210;
  _DAT_14ca249d8 = &LAB_14682652b;
  DAT_14ca1e210 = &DAT_14ca249c0;
  DAT_14ca1e265 = DAT_14ca1e265 + '\x01';
  _DAT_14ca249e0 = 0x100000000;
  if (*(char *)(_DAT_14ca249c8 + 100) != '\0') {
    DAT_14ca1e266 = DAT_14ca1e266 + '\x01';
  }
  return;
}



// FUNCTION 145e8e284 FUN_145e8e284 body=261 status=ok
// SIG undefined FUN_145e8e284(void)

void FUN_145e8e284(void)

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
              0x110) < DAT_14ca220b8) {
    FUN_144b3d300(&DAT_14ca220b8);
    if (DAT_14ca220b8 == -1) {
      FUN_145e8e38a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x69c;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca22038,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e95ce5);
      _Init_thread_footer(&DAT_14ca220b8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e8e38a FUN_145e8e38a body=226 status=ok
// SIG undefined FUN_145e8e38a(void)

longlong * FUN_145e8e38a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462f6874;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e8e472 FUN_145e8e472 body=138 status=ok
// SIG undefined FUN_145e8e472(void)

code * FUN_145e8e472(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InputMip";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000006a0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14727ddba;
}



// FUNCTION 145e8e4fc FUN_145e8e4fc body=138 status=ok
// SIG undefined FUN_145e8e4fc(void)

code * FUN_145e8e4fc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000069e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462f68fc;
}



// FUNCTION 145e8e586 FUN_145e8e586 body=292 status=ok
// SIG undefined FUN_145e8e586(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e8e586(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca1ffb8) {
    FUN_144b3d300(&DAT_14ca1ffb8);
    if (DAT_14ca1ffb8 == -1) {
      FUN_145e8e7f4();
      FUN_145e8e6aa();
      FUN_140db5666(&DAT_14ca1ff10,0,&DAT_14ca1fea8,L"FTemporalReprojectionMergeCS",
                    L"/Engine/Private/PathTracing/PathTracingSpatialTemporalDenoising.usf",
                    L"ReprojectionMergeCS",5,4,FUN_14727721e,FUN_1472771be,&LAB_1462f51ee,
                    &LAB_1472771ba,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca22458);
      _DAT_14ca1ff10 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e83294);
      _Init_thread_footer(&DAT_14ca1ffb8);
    }
  }
  return &DAT_14ca1ff10;
}



// FUNCTION 145e8e6aa FUN_145e8e6aa body=205 status=ok
// SIG undefined FUN_145e8e6aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e8e6aa(void)

{
  if ((DAT_14ca1ff0f & 2) == 0) {
    DAT_14ca1ff0f = DAT_14ca1ff0f | 2;
    _DAT_14ca1feb0 = L"FTemporalReprojectionMergeCS";
    _DAT_14ca1fec8 = FUN_146826540;
    _DAT_14ca1fed0 = FUN_146825d77;
    _DAT_14ca1fed8 = FUN_146825fd6;
    _DAT_14ca1fee0 = FUN_1407e02ea;
    _DAT_14ca1fee8 = FUN_146826273;
    _DAT_14ca1fec0 = FUN_14727718a;
    _DAT_14ca1ff00 = 0xffffffff000000e0;
    _DAT_14ca1ff08 = 8;
    DAT_14ca1ff0c = 0;
    _DAT_14ca1fef0 = &LAB_1472771b6;
    FUN_145e8e778();
    FUN_1407e00cc(&DAT_14ca1fea8);
    return;
  }
  return;
}



// FUNCTION 145e8e778 FUN_145e8e778 body=123 status=ok
// SIG undefined FUN_145e8e778(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e8e778(void)

{
  _DAT_14ca24e68 = L"BASE";
  DAT_14ca24e92 = 4;
  _DAT_14ca24e70 = FUN_140b35ae4();
  _DAT_14ca24e78 = DAT_14ca1feb8;
  _DAT_14ca24e80 = &LAB_14682652b;
  DAT_14ca1feb8 = &DAT_14ca24e68;
  DAT_14ca1ff0d = DAT_14ca1ff0d + '\x01';
  _DAT_14ca24e88 = 0x100000000;
  if (*(char *)(_DAT_14ca24e70 + 100) != '\0') {
    DAT_14ca1ff0e = DAT_14ca1ff0e + '\x01';
  }
  return;
}



// FUNCTION 145e8e7f4 FUN_145e8e7f4 body=261 status=ok
// SIG undefined FUN_145e8e7f4(void)

void FUN_145e8e7f4(void)

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
              0x110) < DAT_14ca224d8) {
    FUN_144b3d300(&DAT_14ca224d8);
    if (DAT_14ca224d8 == -1) {
      FUN_145e8e8fa(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xf0;
      local_58 = 0x317;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca22458,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e95e27);
      _Init_thread_footer(&DAT_14ca224d8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e8e8fa FUN_145e8e8fa body=226 status=ok
// SIG undefined FUN_145e8e8fa(void)

longlong * FUN_145e8e8fa(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462f6ed8;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e8e9e2 FUN_145e8e9e2 body=138 status=ok
// SIG undefined FUN_145e8e9e2(void)

code * FUN_145e8e9e2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DistanceTextures";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa000000319;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 7;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462f6f60;
}



// FUNCTION 145e8ea6c FUN_145e8ea6c body=138 status=ok
// SIG undefined FUN_145e8ea6c(void)

code * FUN_145e8ea6c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PixelOffsetTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd80000031a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e8e9e2;
}



// FUNCTION 145e8eaf6 FUN_145e8eaf6 body=292 status=ok
// SIG undefined FUN_145e8eaf6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e8eaf6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca20208) {
    FUN_144b3d300(&DAT_14ca20208);
    if (DAT_14ca20208 == -1) {
      FUN_145e8ed64();
      FUN_145e8ec1a();
      FUN_140db5666(&DAT_14ca20160,0,&DAT_14ca200f8,L"FTemporalHighFrequencyRejectMapCS",
                    L"/Engine/Private/PathTracing/PathTracingSpatialTemporalDenoising.usf",
                    L"TemporalHighFrequencyRejectCS",5,1,FUN_14727745a,FUN_1472773fa,&LAB_1462f51fe,
                    &LAB_1472773f6,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca22568);
      _DAT_14ca20160 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e832ac);
      _Init_thread_footer(&DAT_14ca20208);
    }
  }
  return &DAT_14ca20160;
}



// FUNCTION 145e8ec1a FUN_145e8ec1a body=205 status=ok
// SIG undefined FUN_145e8ec1a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e8ec1a(void)

{
  if ((DAT_14ca2015f & 2) == 0) {
    DAT_14ca2015f = DAT_14ca2015f | 2;
    _DAT_14ca20100 = L"FTemporalHighFrequencyRejectMapCS";
    _DAT_14ca20118 = FUN_146826540;
    _DAT_14ca20120 = FUN_146825d77;
    _DAT_14ca20128 = FUN_146825fd6;
    _DAT_14ca20130 = FUN_1407e02ea;
    _DAT_14ca20138 = FUN_146826273;
    _DAT_14ca20110 = FUN_1472773c6;
    _DAT_14ca20150 = 0xffffffff000000e0;
    _DAT_14ca20158 = 8;
    DAT_14ca2015c = 0;
    _DAT_14ca20140 = &LAB_1472773f2;
    FUN_145e8ece8();
    FUN_1407e00cc(&DAT_14ca200f8);
    return;
  }
  return;
}



// FUNCTION 145e8ece8 FUN_145e8ece8 body=123 status=ok
// SIG undefined FUN_145e8ece8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e8ece8(void)

{
  _DAT_14ca24ec8 = L"BASE";
  DAT_14ca24ef2 = 4;
  _DAT_14ca24ed0 = FUN_140b35ae4();
  _DAT_14ca24ed8 = DAT_14ca20108;
  _DAT_14ca24ee0 = &LAB_14682652b;
  DAT_14ca20108 = &DAT_14ca24ec8;
  DAT_14ca2015d = DAT_14ca2015d + '\x01';
  _DAT_14ca24ee8 = 0x100000000;
  if (*(char *)(_DAT_14ca24ed0 + 100) != '\0') {
    DAT_14ca2015e = DAT_14ca2015e + '\x01';
  }
  return;
}



// FUNCTION 145e8ed64 FUN_145e8ed64 body=261 status=ok
// SIG undefined FUN_145e8ed64(void)

void FUN_145e8ed64(void)

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
              0x110) < DAT_14ca225e8) {
    FUN_144b3d300(&DAT_14ca225e8);
    if (DAT_14ca225e8 == -1) {
      FUN_145e8ee6a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xd0;
      local_58 = 0x353;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca22568,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e95e3f);
      _Init_thread_footer(&DAT_14ca225e8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e8ee6a FUN_145e8ee6a body=226 status=ok
// SIG undefined FUN_145e8ee6a(void)

longlong * FUN_145e8ee6a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462f7074;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e8ef52 FUN_145e8ef52 body=138 status=ok
// SIG undefined FUN_145e8ef52(void)

code * FUN_145e8ef52(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TargetTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb800000357;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14727eede;
}



// FUNCTION 145e8efdc FUN_145e8efdc body=138 status=ok
// SIG undefined FUN_145e8efdc(void)

code * FUN_145e8efdc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PixelOffsetTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc000000358;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e8ef52;
}



// FUNCTION 145e8f066 FUN_145e8f066 body=292 status=ok
// SIG undefined FUN_145e8f066(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e8f066(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca20580) {
    FUN_144b3d300(&DAT_14ca20580);
    if (DAT_14ca20580 == -1) {
      FUN_145e8f2d4();
      FUN_145e8f18a();
      FUN_140db5666(&DAT_14ca204d8,0,&DAT_14ca20470,L"FSpatialDenoiserCS",
                    L"/Engine/Private/PathTracing/PathTracingSpatialTemporalDenoising.usf",
                    L"SpatialDenoiserCS",5,1,FUN_1472777b4,FUN_147277754,&LAB_1462f5216,
                    &LAB_147277750,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca22700);
      _DAT_14ca204d8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e832d0);
      _Init_thread_footer(&DAT_14ca20580);
    }
  }
  return &DAT_14ca204d8;
}



// FUNCTION 145e8f18a FUN_145e8f18a body=205 status=ok
// SIG undefined FUN_145e8f18a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e8f18a(void)

{
  if ((DAT_14ca204d7 & 2) == 0) {
    DAT_14ca204d7 = DAT_14ca204d7 | 2;
    _DAT_14ca20478 = L"FSpatialDenoiserCS";
    _DAT_14ca20490 = FUN_146826540;
    _DAT_14ca20498 = FUN_146825d77;
    _DAT_14ca204a0 = FUN_146825fd6;
    _DAT_14ca204a8 = FUN_1407e02ea;
    _DAT_14ca204b0 = FUN_146826273;
    _DAT_14ca20488 = FUN_147277720;
    _DAT_14ca204c8 = 0xffffffff000000e0;
    _DAT_14ca204d0 = 8;
    DAT_14ca204d4 = 0;
    _DAT_14ca204b8 = &LAB_14727774c;
    FUN_145e8f258();
    FUN_1407e00cc(&DAT_14ca20470);
    return;
  }
  return;
}



// FUNCTION 145e8f258 FUN_145e8f258 body=123 status=ok
// SIG undefined FUN_145e8f258(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e8f258(void)

{
  _DAT_14ca24f58 = L"BASE";
  DAT_14ca24f82 = 4;
  _DAT_14ca24f60 = FUN_140b35ae4();
  _DAT_14ca24f68 = DAT_14ca20480;
  _DAT_14ca24f70 = &LAB_14682652b;
  DAT_14ca20480 = &DAT_14ca24f58;
  DAT_14ca204d5 = DAT_14ca204d5 + '\x01';
  _DAT_14ca24f78 = 0x100000000;
  if (*(char *)(_DAT_14ca24f60 + 100) != '\0') {
    DAT_14ca204d6 = DAT_14ca204d6 + '\x01';
  }
  return;
}



// FUNCTION 145e8f2d4 FUN_145e8f2d4 body=261 status=ok
// SIG undefined FUN_145e8f2d4(void)

void FUN_145e8f2d4(void)

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
              0x110) < DAT_14ca22780) {
    FUN_144b3d300(&DAT_14ca22780);
    if (DAT_14ca22780 == -1) {
      FUN_145e8f3da(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x90;
      local_58 = 0x3bd;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca22700,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e95e63);
      _Init_thread_footer(&DAT_14ca22780);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e8f3da FUN_145e8f3da body=226 status=ok
// SIG undefined FUN_145e8f3da(void)

longlong * FUN_145e8f3da(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462f73be;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e8f4c2 FUN_145e8f4c2 body=138 status=ok
// SIG undefined FUN_145e8f4c2(void)

code * FUN_145e8f4c2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InputAlbedo";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000003c0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e8f54c;
}



// FUNCTION 145e8f54c FUN_145e8f54c body=138 status=ok
// SIG undefined FUN_145e8f54c(void)

code * FUN_145e8f54c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InputNormal";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000003bf;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462f744c;
}



// FUNCTION 145e8f5d6 FUN_145e8f5d6 body=292 status=ok
// SIG undefined FUN_145e8f5d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e8f5d6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca206a8) {
    FUN_144b3d300(&DAT_14ca206a8);
    if (DAT_14ca206a8 == -1) {
      FUN_145e8f844();
      FUN_145e8f6fa();
      FUN_140db5666(&DAT_14ca20600,0,&DAT_14ca20598,L"FConvertWorldSpaceNormalToCameraSpaceCS",
                    L"/Engine/Private/PathTracing/PathTracingSpatialTemporalDenoising.usf",
                    L"ConvertWorldSpaceNormalToCameraSpaceCS",5,1,FUN_1472778d2,FUN_147277872,
                    &LAB_1462f521e,&LAB_14727786e,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca22788)
      ;
      _DAT_14ca20600 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e832dc);
      _Init_thread_footer(&DAT_14ca206a8);
    }
  }
  return &DAT_14ca20600;
}



// FUNCTION 145e8f6fa FUN_145e8f6fa body=205 status=ok
// SIG undefined FUN_145e8f6fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e8f6fa(void)

{
  if ((DAT_14ca205ff & 2) == 0) {
    DAT_14ca205ff = DAT_14ca205ff | 2;
    _DAT_14ca205a0 = L"FConvertWorldSpaceNormalToCameraSpaceCS";
    _DAT_14ca205b8 = FUN_146826540;
    _DAT_14ca205c0 = FUN_146825d77;
    _DAT_14ca205c8 = FUN_146825fd6;
    _DAT_14ca205d0 = FUN_1407e02ea;
    _DAT_14ca205d8 = FUN_146826273;
    _DAT_14ca205b0 = FUN_14727783e;
    _DAT_14ca205f0 = 0xffffffff000000e0;
    _DAT_14ca205f8 = 8;
    DAT_14ca205fc = 0;
    _DAT_14ca205e0 = &LAB_14727786a;
    FUN_145e8f7c8();
    FUN_1407e00cc(&DAT_14ca20598);
    return;
  }
  return;
}



// FUNCTION 145e8f7c8 FUN_145e8f7c8 body=123 status=ok
// SIG undefined FUN_145e8f7c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e8f7c8(void)

{
  _DAT_14ca24f88 = L"BASE";
  DAT_14ca24fb2 = 4;
  _DAT_14ca24f90 = FUN_140b35ae4();
  _DAT_14ca24f98 = DAT_14ca205a8;
  _DAT_14ca24fa0 = &LAB_14682652b;
  DAT_14ca205a8 = &DAT_14ca24f88;
  DAT_14ca205fd = DAT_14ca205fd + '\x01';
  _DAT_14ca24fa8 = 0x100000000;
  if (*(char *)(_DAT_14ca24f90 + 100) != '\0') {
    DAT_14ca205fe = DAT_14ca205fe + '\x01';
  }
  return;
}



// FUNCTION 145e8f844 FUN_145e8f844 body=261 status=ok
// SIG undefined FUN_145e8f844(void)

void FUN_145e8f844(void)

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
              0x110) < DAT_14ca22808) {
    FUN_144b3d300(&DAT_14ca22808);
    if (DAT_14ca22808 == -1) {
      FUN_145e8f94a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x3d8;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca22788,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e95e6f);
      _Init_thread_footer(&DAT_14ca22808);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e8f94a FUN_145e8f94a body=226 status=ok
// SIG undefined FUN_145e8f94a(void)

longlong * FUN_145e8f94a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462f74ce;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e8fa32 FUN_145e8fa32 body=132 status=ok
// SIG undefined FUN_145e8fa32(void)

undefined1 * FUN_145e8fa32(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3d9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e8fa2e;
}



// FUNCTION 145e8fab6 FUN_145e8fab6 body=144 status=ok
// SIG undefined FUN_145e8fab6(void)

code * FUN_145e8fab6(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x10000003da;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145e8fa32;
}



// FUNCTION 145e8fb46 FUN_145e8fb46 body=292 status=ok
// SIG undefined FUN_145e8fb46(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e8fb46(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca208f8) {
    FUN_144b3d300(&DAT_14ca208f8);
    if (DAT_14ca208f8 == -1) {
      FUN_145e8fdb4();
      FUN_145e8fc6a();
      FUN_140db5666(&DAT_14ca20850,0,&DAT_14ca207e8,L"FPrepassGenerateTextureCS",
                    L"/Engine/Private/PathTracing/PathTracingSpatialTemporalDenoising.usf",
                    L"PrepassGenerateTextureCS",5,2,FUN_147277b0e,FUN_147277aae,&LAB_1462f5226,
                    &LAB_147277aaa,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca22898);
      _DAT_14ca20850 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e832f4);
      _Init_thread_footer(&DAT_14ca208f8);
    }
  }
  return &DAT_14ca20850;
}



// FUNCTION 145e8fc6a FUN_145e8fc6a body=205 status=ok
// SIG undefined FUN_145e8fc6a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e8fc6a(void)

{
  if ((DAT_14ca2084f & 2) == 0) {
    DAT_14ca2084f = DAT_14ca2084f | 2;
    _DAT_14ca207f0 = L"FPrepassGenerateTextureCS";
    _DAT_14ca20808 = FUN_146826540;
    _DAT_14ca20810 = FUN_146825d77;
    _DAT_14ca20818 = FUN_146825fd6;
    _DAT_14ca20820 = FUN_1407e02ea;
    _DAT_14ca20828 = FUN_146826273;
    _DAT_14ca20800 = FUN_147277a7a;
    _DAT_14ca20840 = 0xffffffff000000e0;
    _DAT_14ca20848 = 8;
    DAT_14ca2084c = 0;
    _DAT_14ca20830 = &LAB_147277aa6;
    FUN_145e8fd38();
    FUN_1407e00cc(&DAT_14ca207e8);
    return;
  }
  return;
}



// FUNCTION 145e8fd38 FUN_145e8fd38 body=123 status=ok
// SIG undefined FUN_145e8fd38(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e8fd38(void)

{
  _DAT_14ca24fe8 = L"BASE";
  DAT_14ca25012 = 4;
  _DAT_14ca24ff0 = FUN_140b35ae4();
  _DAT_14ca24ff8 = DAT_14ca207f8;
  _DAT_14ca25000 = &LAB_14682652b;
  DAT_14ca207f8 = &DAT_14ca24fe8;
  DAT_14ca2084d = DAT_14ca2084d + '\x01';
  _DAT_14ca25008 = 0x100000000;
  if (*(char *)(_DAT_14ca24ff0 + 100) != '\0') {
    DAT_14ca2084e = DAT_14ca2084e + '\x01';
  }
  return;
}



// FUNCTION 145e8fdb4 FUN_145e8fdb4 body=261 status=ok
// SIG undefined FUN_145e8fdb4(void)

void FUN_145e8fdb4(void)

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
              0x110) < DAT_14ca22918) {
    FUN_144b3d300(&DAT_14ca22918);
    if (DAT_14ca22918 == -1) {
      FUN_145e8feba(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x90;
      local_58 = 0x739;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca22898,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e95e87);
      _Init_thread_footer(&DAT_14ca22918);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e8feba FUN_145e8feba body=226 status=ok
// SIG undefined FUN_145e8feba(void)

longlong * FUN_145e8feba(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462f766e;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e8ffa2 FUN_145e8ffa2 body=132 status=ok
// SIG undefined FUN_145e8ffa2(void)

undefined1 * FUN_145e8ffa2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x73a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e8ff9e;
}



// FUNCTION 145e90026 FUN_145e90026 body=144 status=ok
// SIG undefined FUN_145e90026(void)

code * FUN_145e90026(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar4) = L"TargetViewport";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FScreenPassTextureViewportParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x100000073c;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14727f6e0;
}



// FUNCTION 145e900b6 FUN_145e900b6 body=292 status=ok
// SIG undefined FUN_145e900b6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e900b6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2cd18) {
    FUN_144b3d300(&DAT_14ca2cd18);
    if (DAT_14ca2cd18 == -1) {
      FUN_145e90324();
      FUN_145e901da();
      FUN_140db5666(&DAT_14ca2cc70,0,&DAT_14ca2cc08,L"FMobileBloomDownPS",
                    L"/Engine/Private/PostProcessMobile.usf",L"BloomDownPS_Mobile",3,1,FUN_147295884
                    ,FUN_147295824,&LAB_14729580c,&LAB_147295808,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca32568);
      _DAT_14ca2cc70 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142ef9849);
      _Init_thread_footer(&DAT_14ca2cd18);
    }
  }
  return &DAT_14ca2cc70;
}



// FUNCTION 145e901da FUN_145e901da body=205 status=ok
// SIG undefined FUN_145e901da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e901da(void)

{
  if ((DAT_14ca2cc6f & 2) == 0) {
    DAT_14ca2cc6f = DAT_14ca2cc6f | 2;
    _DAT_14ca2cc10 = L"FMobileBloomDownPS";
    _DAT_14ca2cc28 = FUN_146826540;
    _DAT_14ca2cc30 = FUN_146825d77;
    _DAT_14ca2cc38 = FUN_146825fd6;
    _DAT_14ca2cc40 = FUN_1407e02ea;
    _DAT_14ca2cc48 = FUN_146826273;
    _DAT_14ca2cc20 = FUN_1472957d8;
    _DAT_14ca2cc60 = 0xffffffff000000e0;
    _DAT_14ca2cc68 = 8;
    DAT_14ca2cc6c = 0;
    _DAT_14ca2cc50 = &LAB_147295804;
    FUN_145e902a8();
    FUN_1407e00cc(&DAT_14ca2cc08);
    return;
  }
  return;
}



// FUNCTION 145e902a8 FUN_145e902a8 body=123 status=ok
// SIG undefined FUN_145e902a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e902a8(void)

{
  _DAT_14ca343f8 = L"BASE";
  DAT_14ca34422 = 4;
  _DAT_14ca34400 = FUN_140b35ae4();
  _DAT_14ca34408 = DAT_14ca2cc18;
  _DAT_14ca34410 = &LAB_14682652b;
  DAT_14ca2cc18 = &DAT_14ca343f8;
  DAT_14ca2cc6d = DAT_14ca2cc6d + '\x01';
  _DAT_14ca34418 = 0x100000000;
  if (*(char *)(_DAT_14ca34400 + 100) != '\0') {
    DAT_14ca2cc6e = DAT_14ca2cc6e + '\x01';
  }
  return;
}



// FUNCTION 145e90324 FUN_145e90324 body=261 status=ok
// SIG undefined FUN_145e90324(void)

void FUN_145e90324(void)

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
              0x110) < DAT_14ca325e8) {
    FUN_144b3d300(&DAT_14ca325e8);
    if (DAT_14ca325e8 == -1) {
      FUN_145e9042a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x130;
      local_58 = 0x1a9;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca32568,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f13ead);
      _Init_thread_footer(&DAT_14ca325e8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e9042a FUN_145e9042a body=226 status=ok
// SIG undefined FUN_145e9042a(void)

longlong * FUN_145e9042a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462fbef0;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e90512 FUN_145e90512 body=138 status=ok
// SIG undefined FUN_145e90512(void)

code * FUN_145e90512(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"BloomDownSourceSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28000001ac;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14729b7e2;
}



// FUNCTION 145e9059c FUN_145e9059c body=138 status=ok
// SIG undefined FUN_145e9059c(void)

undefined1 * FUN_145e9059c(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1aa;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e9050e;
}



// FUNCTION 145e90626 FUN_145e90626 body=292 status=ok
// SIG undefined FUN_145e90626(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e90626(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2cf68) {
    FUN_144b3d300(&DAT_14ca2cf68);
    if (DAT_14ca2cf68 == -1) {
      FUN_145e90894();
      FUN_145e9074a();
      FUN_140db5666(&DAT_14ca2cec0,0,&DAT_14ca2ce58,L"FMobileBloomUpPS",
                    L"/Engine/Private/PostProcessMobile.usf",L"BloomUpPS_Mobile",3,1,FUN_147295af0,
                    FUN_147295a90,&LAB_147295a78,&LAB_147295a74,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca32678);
      _DAT_14ca2cec0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142ef9f40);
      _Init_thread_footer(&DAT_14ca2cf68);
    }
  }
  return &DAT_14ca2cec0;
}



// FUNCTION 145e9074a FUN_145e9074a body=205 status=ok
// SIG undefined FUN_145e9074a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e9074a(void)

{
  if ((DAT_14ca2cebf & 2) == 0) {
    DAT_14ca2cebf = DAT_14ca2cebf | 2;
    _DAT_14ca2ce60 = L"FMobileBloomUpPS";
    _DAT_14ca2ce78 = FUN_146826540;
    _DAT_14ca2ce80 = FUN_146825d77;
    _DAT_14ca2ce88 = FUN_146825fd6;
    _DAT_14ca2ce90 = FUN_1407e02ea;
    _DAT_14ca2ce98 = FUN_146826273;
    _DAT_14ca2ce70 = FUN_147295a44;
    _DAT_14ca2ceb0 = 0xffffffff000000e0;
    _DAT_14ca2ceb8 = 8;
    DAT_14ca2cebc = 0;
    _DAT_14ca2cea0 = &LAB_147295a70;
    FUN_145e90818();
    FUN_1407e00cc(&DAT_14ca2ce58);
    return;
  }
  return;
}



// FUNCTION 145e90818 FUN_145e90818 body=123 status=ok
// SIG undefined FUN_145e90818(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e90818(void)

{
  _DAT_14ca34458 = L"BASE";
  DAT_14ca34482 = 4;
  _DAT_14ca34460 = FUN_140b35ae4();
  _DAT_14ca34468 = DAT_14ca2ce68;
  _DAT_14ca34470 = &LAB_14682652b;
  DAT_14ca2ce68 = &DAT_14ca34458;
  DAT_14ca2cebd = DAT_14ca2cebd + '\x01';
  _DAT_14ca34478 = 0x100000000;
  if (*(char *)(_DAT_14ca34460 + 100) != '\0') {
    DAT_14ca2cebe = DAT_14ca2cebe + '\x01';
  }
  return;
}



// FUNCTION 145e90894 FUN_145e90894 body=261 status=ok
// SIG undefined FUN_145e90894(void)

void FUN_145e90894(void)

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
              0x110) < DAT_14ca326f8) {
    FUN_144b3d300(&DAT_14ca326f8);
    if (DAT_14ca326f8 == -1) {
      FUN_145e9099a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x160;
      local_58 = 0x221;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca32678,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f13ec5);
      _Init_thread_footer(&DAT_14ca326f8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e9099a FUN_145e9099a body=226 status=ok
// SIG undefined FUN_145e9099a(void)

longlong * FUN_145e9099a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462fbf78;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e90a82 FUN_145e90a82 body=138 status=ok
// SIG undefined FUN_145e90a82(void)

code * FUN_145e90a82(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"BloomUpSourceBTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000227;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e90b0c;
}



// FUNCTION 145e90b0c FUN_145e90b0c body=138 status=ok
// SIG undefined FUN_145e90b0c(void)

code * FUN_145e90b0c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"BloomUpSourceASampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4800000226;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462fc000;
}



// FUNCTION 145e90b96 FUN_145e90b96 body=292 status=ok
// SIG undefined FUN_145e90b96(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e90b96(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2d2e0) {
    FUN_144b3d300(&DAT_14ca2d2e0);
    if (DAT_14ca2d2e0 == -1) {
      FUN_145e90e04();
      FUN_145e90cba();
      FUN_140db5666(&DAT_14ca2d238,0,&DAT_14ca2d1d0,L"FMobileSunAlphaPS",
                    L"/Engine/Private/PostProcessMobile.usf",L"SunAlphaPS_Mobile",3,2,FUN_147295f04,
                    FUN_147295ea4,&LAB_147295e8c,&LAB_147295e88,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca32810);
      _DAT_14ca2d238 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142efb2b5);
      _Init_thread_footer(&DAT_14ca2d2e0);
    }
  }
  return &DAT_14ca2d238;
}



// FUNCTION 145e90cba FUN_145e90cba body=205 status=ok
// SIG undefined FUN_145e90cba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e90cba(void)

{
  if ((DAT_14ca2d237 & 2) == 0) {
    DAT_14ca2d237 = DAT_14ca2d237 | 2;
    _DAT_14ca2d1d8 = L"FMobileSunAlphaPS";
    _DAT_14ca2d1f0 = FUN_146826540;
    _DAT_14ca2d1f8 = FUN_146825d77;
    _DAT_14ca2d200 = FUN_146825fd6;
    _DAT_14ca2d208 = FUN_1407e02ea;
    _DAT_14ca2d210 = FUN_146826273;
    _DAT_14ca2d1e8 = FUN_147295e58;
    _DAT_14ca2d228 = 0xffffffff000000e0;
    _DAT_14ca2d230 = 8;
    DAT_14ca2d234 = 0;
    _DAT_14ca2d218 = &LAB_147295e84;
    FUN_145e90d88();
    FUN_1407e00cc(&DAT_14ca2d1d0);
    return;
  }
  return;
}



// FUNCTION 145e90d88 FUN_145e90d88 body=123 status=ok
// SIG undefined FUN_145e90d88(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e90d88(void)

{
  _DAT_14ca344e8 = L"BASE";
  DAT_14ca34512 = 4;
  _DAT_14ca344f0 = FUN_140b35ae4();
  _DAT_14ca344f8 = DAT_14ca2d1e0;
  _DAT_14ca34500 = &LAB_14682652b;
  DAT_14ca2d1e0 = &DAT_14ca344e8;
  DAT_14ca2d235 = DAT_14ca2d235 + '\x01';
  _DAT_14ca34508 = 0x100000000;
  if (*(char *)(_DAT_14ca344f0 + 100) != '\0') {
    DAT_14ca2d236 = DAT_14ca2d236 + '\x01';
  }
  return;
}



// FUNCTION 145e90e04 FUN_145e90e04 body=261 status=ok
// SIG undefined FUN_145e90e04(void)

void FUN_145e90e04(void)

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
              0x110) < DAT_14ca32890) {
    FUN_144b3d300(&DAT_14ca32890);
    if (DAT_14ca32890 == -1) {
      FUN_145e90f0a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x130;
      local_58 = 0x33b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca32810,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f13ee9);
      _Init_thread_footer(&DAT_14ca32890);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e90f0a FUN_145e90f0a body=226 status=ok
// SIG undefined FUN_145e90f0a(void)

longlong * FUN_145e90f0a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462fc2ba;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e90ff2 FUN_145e90ff2 body=138 status=ok
// SIG undefined FUN_145e90ff2(void)

code * FUN_145e90ff2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000033d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462fc342;
}



// FUNCTION 145e9107c FUN_145e9107c body=138 status=ok
// SIG undefined FUN_145e9107c(void)

code * FUN_145e9107c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x280000033e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e90ff2;
}



// FUNCTION 145e91106 FUN_145e91106 body=292 status=ok
// SIG undefined FUN_145e91106(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e91106(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2d530) {
    FUN_144b3d300(&DAT_14ca2d530);
    if (DAT_14ca2d530 == -1) {
      FUN_145e91374();
      FUN_145e9122a();
      FUN_140db5666(&DAT_14ca2d488,0,&DAT_14ca2d420,L"FMobileSunBlurPS",
                    L"/Engine/Private/PostProcessMobile.usf",L"SunBlurPS_Mobile",3,1,FUN_147296170,
                    FUN_147296110,&LAB_1472960f8,&LAB_1472960f4,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca32920);
      _DAT_14ca2d488 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142efb87b);
      _Init_thread_footer(&DAT_14ca2d530);
    }
  }
  return &DAT_14ca2d488;
}



// FUNCTION 145e9122a FUN_145e9122a body=205 status=ok
// SIG undefined FUN_145e9122a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e9122a(void)

{
  if ((DAT_14ca2d487 & 2) == 0) {
    DAT_14ca2d487 = DAT_14ca2d487 | 2;
    _DAT_14ca2d428 = L"FMobileSunBlurPS";
    _DAT_14ca2d440 = FUN_146826540;
    _DAT_14ca2d448 = FUN_146825d77;
    _DAT_14ca2d450 = FUN_146825fd6;
    _DAT_14ca2d458 = FUN_1407e02ea;
    _DAT_14ca2d460 = FUN_146826273;
    _DAT_14ca2d438 = FUN_1472960c4;
    _DAT_14ca2d478 = 0xffffffff000000e0;
    _DAT_14ca2d480 = 8;
    DAT_14ca2d484 = 0;
    _DAT_14ca2d468 = &LAB_1472960f0;
    FUN_145e912f8();
    FUN_1407e00cc(&DAT_14ca2d420);
    return;
  }
  return;
}



// FUNCTION 145e912f8 FUN_145e912f8 body=123 status=ok
// SIG undefined FUN_145e912f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e912f8(void)

{
  _DAT_14ca34548 = L"BASE";
  DAT_14ca34572 = 4;
  _DAT_14ca34550 = FUN_140b35ae4();
  _DAT_14ca34558 = DAT_14ca2d430;
  _DAT_14ca34560 = &LAB_14682652b;
  DAT_14ca2d430 = &DAT_14ca34548;
  DAT_14ca2d485 = DAT_14ca2d485 + '\x01';
  _DAT_14ca34568 = 0x100000000;
  if (*(char *)(_DAT_14ca34550 + 100) != '\0') {
    DAT_14ca2d486 = DAT_14ca2d486 + '\x01';
  }
  return;
}



// FUNCTION 145e91374 FUN_145e91374 body=261 status=ok
// SIG undefined FUN_145e91374(void)

void FUN_145e91374(void)

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
              0x110) < DAT_14ca329a0) {
    FUN_144b3d300(&DAT_14ca329a0);
    if (DAT_14ca329a0 == -1) {
      FUN_145e9147a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x130;
      local_58 = 0x3b2;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca32920,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f13f01);
      _Init_thread_footer(&DAT_14ca329a0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e9147a FUN_145e9147a body=226 status=ok
// SIG undefined FUN_145e9147a(void)

longlong * FUN_145e9147a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462fc3cc;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e91562 FUN_145e91562 body=138 status=ok
// SIG undefined FUN_145e91562(void)

undefined1 * FUN_145e91562(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x3b3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e9155e;
}



// FUNCTION 145e915ec FUN_145e915ec body=138 status=ok
// SIG undefined FUN_145e915ec(void)

code * FUN_145e915ec(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SunAlphaSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28000003b5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14729c62e;
}



// FUNCTION 145e91676 FUN_145e91676 body=292 status=ok
// SIG undefined FUN_145e91676(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e91676(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2d780) {
    FUN_144b3d300(&DAT_14ca2d780);
    if (DAT_14ca2d780 == -1) {
      FUN_145e918e4();
      FUN_145e9179a();
      FUN_140db5666(&DAT_14ca2d6d8,0,&DAT_14ca2d670,L"FMobileSunMergePS",
                    L"/Engine/Private/PostProcessMobile.usf",L"SunMergePS_Mobile",3,4,FUN_1472963dc,
                    FUN_14729637c,&LAB_147296364,&LAB_147296360,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca32a30);
      _DAT_14ca2d6d8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142efbe31);
      _Init_thread_footer(&DAT_14ca2d780);
    }
  }
  return &DAT_14ca2d6d8;
}



// FUNCTION 145e9179a FUN_145e9179a body=205 status=ok
// SIG undefined FUN_145e9179a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e9179a(void)

{
  if ((DAT_14ca2d6d7 & 2) == 0) {
    DAT_14ca2d6d7 = DAT_14ca2d6d7 | 2;
    _DAT_14ca2d678 = L"FMobileSunMergePS";
    _DAT_14ca2d690 = FUN_146826540;
    _DAT_14ca2d698 = FUN_146825d77;
    _DAT_14ca2d6a0 = FUN_146825fd6;
    _DAT_14ca2d6a8 = FUN_1407e02ea;
    _DAT_14ca2d6b0 = FUN_146826273;
    _DAT_14ca2d688 = FUN_147296330;
    _DAT_14ca2d6c8 = 0xffffffff000000e0;
    _DAT_14ca2d6d0 = 8;
    DAT_14ca2d6d4 = 0;
    _DAT_14ca2d6b8 = &LAB_14729635c;
    FUN_145e91868();
    FUN_1407e00cc(&DAT_14ca2d670);
    return;
  }
  return;
}



// FUNCTION 145e91868 FUN_145e91868 body=123 status=ok
// SIG undefined FUN_145e91868(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e91868(void)

{
  _DAT_14ca345a8 = L"BASE";
  DAT_14ca345d2 = 4;
  _DAT_14ca345b0 = FUN_140b35ae4();
  _DAT_14ca345b8 = DAT_14ca2d680;
  _DAT_14ca345c0 = &LAB_14682652b;
  DAT_14ca2d680 = &DAT_14ca345a8;
  DAT_14ca2d6d5 = DAT_14ca2d6d5 + '\x01';
  _DAT_14ca345c8 = 0x100000000;
  if (*(char *)(_DAT_14ca345b0 + 100) != '\0') {
    DAT_14ca2d6d6 = DAT_14ca2d6d6 + '\x01';
  }
  return;
}



// FUNCTION 145e918e4 FUN_145e918e4 body=261 status=ok
// SIG undefined FUN_145e918e4(void)

void FUN_145e918e4(void)

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
              0x110) < DAT_14ca32ab0) {
    FUN_144b3d300(&DAT_14ca32ab0);
    if (DAT_14ca32ab0 == -1) {
      FUN_145e919ea(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 400;
      local_58 = 0x427;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca32a30,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f13f19);
      _Init_thread_footer(&DAT_14ca32ab0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e919ea FUN_145e919ea body=226 status=ok
// SIG undefined FUN_145e919ea(void)

longlong * FUN_145e919ea(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462fc454;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e91ad2 FUN_145e91ad2 body=138 status=ok
// SIG undefined FUN_145e91ad2(void)

code * FUN_145e91ad2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"BloomDirtMaskTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000432;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14729ca3e;
}



// FUNCTION 145e91b5c FUN_145e91b5c body=138 status=ok
// SIG undefined FUN_145e91b5c(void)

code * FUN_145e91b5c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"BloomColor";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000042a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14729ccf0;
}



// FUNCTION 145e91be6 FUN_145e91be6 body=292 status=ok
// SIG undefined FUN_145e91be6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e91be6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2dd48) {
    FUN_144b3d300(&DAT_14ca2dd48);
    if (DAT_14ca2dd48 == -1) {
      FUN_145e91e54();
      FUN_145e91d0a();
      FUN_140db5666(&DAT_14ca2dca0,0,&DAT_14ca2dc38,L"FMobileDofNearPS",
                    L"/Engine/Private/PostProcessMobile.usf",L"DofNearPS_Mobile",3,2,FUN_1472969ea,
                    FUN_14729698a,&LAB_147296972,&LAB_14729696e,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca32cd8);
      _DAT_14ca2dca0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142efce8c);
      _Init_thread_footer(&DAT_14ca2dd48);
    }
  }
  return &DAT_14ca2dca0;
}



// FUNCTION 145e91d0a FUN_145e91d0a body=205 status=ok
// SIG undefined FUN_145e91d0a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e91d0a(void)

{
  if ((DAT_14ca2dc9f & 2) == 0) {
    DAT_14ca2dc9f = DAT_14ca2dc9f | 2;
    _DAT_14ca2dc40 = L"FMobileDofNearPS";
    _DAT_14ca2dc58 = FUN_146826540;
    _DAT_14ca2dc60 = FUN_146825d77;
    _DAT_14ca2dc68 = FUN_146825fd6;
    _DAT_14ca2dc70 = FUN_1407e02ea;
    _DAT_14ca2dc78 = FUN_146826273;
    _DAT_14ca2dc50 = FUN_14729693e;
    _DAT_14ca2dc90 = 0xffffffff000000e0;
    _DAT_14ca2dc98 = 8;
    DAT_14ca2dc9c = 0;
    _DAT_14ca2dc80 = &LAB_14729696a;
    FUN_145e91dd8();
    FUN_1407e00cc(&DAT_14ca2dc38);
    return;
  }
  return;
}



// FUNCTION 145e91dd8 FUN_145e91dd8 body=123 status=ok
// SIG undefined FUN_145e91dd8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e91dd8(void)

{
  _DAT_14ca34698 = L"BASE";
  DAT_14ca346c2 = 4;
  _DAT_14ca346a0 = FUN_140b35ae4();
  _DAT_14ca346a8 = DAT_14ca2dc48;
  _DAT_14ca346b0 = &LAB_14682652b;
  DAT_14ca2dc48 = &DAT_14ca34698;
  DAT_14ca2dc9d = DAT_14ca2dc9d + '\x01';
  _DAT_14ca346b8 = 0x100000000;
  if (*(char *)(_DAT_14ca346a0 + 100) != '\0') {
    DAT_14ca2dc9e = DAT_14ca2dc9e + '\x01';
  }
  return;
}



// FUNCTION 145e91e54 FUN_145e91e54 body=261 status=ok
// SIG undefined FUN_145e91e54(void)

void FUN_145e91e54(void)

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
              0x110) < DAT_14ca32d58) {
    FUN_144b3d300(&DAT_14ca32d58);
    if (DAT_14ca32d58 == -1) {
      FUN_145e91f5a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x130;
      local_58 = 0x578;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca32cd8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f13f55);
      _Init_thread_footer(&DAT_14ca32d58);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e91f5a FUN_145e91f5a body=226 status=ok
// SIG undefined FUN_145e91f5a(void)

longlong * FUN_145e91f5a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462fc704;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e92042 FUN_145e92042 body=138 status=ok
// SIG undefined FUN_145e92042(void)

code * FUN_145e92042(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x280000057b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e920cc;
}



// FUNCTION 145e920cc FUN_145e920cc body=138 status=ok
// SIG undefined FUN_145e920cc(void)

code * FUN_145e920cc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000057a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462fc78c;
}



// FUNCTION 145e92156 FUN_145e92156 body=292 status=ok
// SIG undefined FUN_145e92156(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e92156(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2e7c8) {
    FUN_144b3d300(&DAT_14ca2e7c8);
    if (DAT_14ca2e7c8 == -1) {
      FUN_145e923c4();
      FUN_145e9227a();
      FUN_140db5666(&DAT_14ca2e720,0,&DAT_14ca2e6b8,L"FMobileHistogramEyeAdaptationCS",
                    L"/Engine/Private/PostProcessMobile.usf",L"HistogramEyeAdaptationCS",5,1,
                    FUN_1472976de,FUN_14729767e,&LAB_147297666,&LAB_147297662,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca33090);
      _DAT_14ca2e720 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142efe7a5);
      _Init_thread_footer(&DAT_14ca2e7c8);
    }
  }
  return &DAT_14ca2e720;
}



// FUNCTION 145e9227a FUN_145e9227a body=205 status=ok
// SIG undefined FUN_145e9227a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e9227a(void)

{
  if ((DAT_14ca2e71f & 2) == 0) {
    DAT_14ca2e71f = DAT_14ca2e71f | 2;
    _DAT_14ca2e6c0 = L"FMobileHistogramEyeAdaptationCS";
    _DAT_14ca2e6d8 = FUN_146826540;
    _DAT_14ca2e6e0 = FUN_146825d77;
    _DAT_14ca2e6e8 = FUN_146825fd6;
    _DAT_14ca2e6f0 = FUN_1407e02ea;
    _DAT_14ca2e6f8 = FUN_146826273;
    _DAT_14ca2e6d0 = FUN_147297632;
    _DAT_14ca2e710 = 0xffffffff000000e0;
    _DAT_14ca2e718 = 8;
    DAT_14ca2e71c = 0;
    _DAT_14ca2e700 = &LAB_14729765e;
    FUN_145e92348();
    FUN_1407e00cc(&DAT_14ca2e6b8);
    return;
  }
  return;
}



// FUNCTION 145e92348 FUN_145e92348 body=123 status=ok
// SIG undefined FUN_145e92348(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e92348(void)

{
  _DAT_14ca348d0 = L"BASE";
  DAT_14ca348fa = 4;
  _DAT_14ca348d8 = FUN_140b35ae4();
  _DAT_14ca348e0 = DAT_14ca2e6c8;
  _DAT_14ca348e8 = &LAB_14682652b;
  DAT_14ca2e6c8 = &DAT_14ca348d0;
  DAT_14ca2e71d = DAT_14ca2e71d + '\x01';
  _DAT_14ca348f0 = 0x100000000;
  if (*(char *)(_DAT_14ca348d8 + 100) != '\0') {
    DAT_14ca2e71e = DAT_14ca2e71e + '\x01';
  }
  return;
}



// FUNCTION 145e923c4 FUN_145e923c4 body=261 status=ok
// SIG undefined FUN_145e923c4(void)

void FUN_145e923c4(void)

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
              0x110) < DAT_14ca33110) {
    FUN_144b3d300(&DAT_14ca33110);
    if (DAT_14ca33110 == -1) {
      FUN_145e924ca(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xb0;
      local_58 = 0x7b3;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca33090,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f13fa9);
      _Init_thread_footer(&DAT_14ca33110);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e924ca FUN_145e924ca body=226 status=ok
// SIG undefined FUN_145e924ca(void)

longlong * FUN_145e924ca(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462fcbda;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e925b2 FUN_145e925b2 body=138 status=ok
// SIG undefined FUN_145e925b2(void)

code * FUN_145e925b2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x90000007b5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462fcc62;
}



// FUNCTION 145e9263c FUN_145e9263c body=138 status=ok
// SIG undefined FUN_145e9263c(void)

code * FUN_145e9263c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HistogramBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x98000007b6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e925b2;
}



// FUNCTION 145e926c6 FUN_145e926c6 body=292 status=ok
// SIG undefined FUN_145e926c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e926c6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2f228) {
    FUN_144b3d300(&DAT_14ca2f228);
    if (DAT_14ca2f228 == -1) {
      FUN_145e92934();
      FUN_145e927ea();
      FUN_140db5666(&DAT_14ca2f180,0,&DAT_14ca2f118,L"FMotionBlurVisualizePS",
                    L"/Engine/Private/MotionBlur/MotionBlurVisualize.usf",L"MainPS",3,1,
                    FUN_147298366,FUN_147298306,&LAB_1472982ee,&LAB_1472982ea,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca33568);
      _DAT_14ca2f180 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142eff0e5);
      _Init_thread_footer(&DAT_14ca2f228);
    }
  }
  return &DAT_14ca2f180;
}



// FUNCTION 145e927ea FUN_145e927ea body=205 status=ok
// SIG undefined FUN_145e927ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e927ea(void)

{
  if ((DAT_14ca2f17f & 2) == 0) {
    DAT_14ca2f17f = DAT_14ca2f17f | 2;
    _DAT_14ca2f120 = L"FMotionBlurVisualizePS";
    _DAT_14ca2f138 = FUN_146826540;
    _DAT_14ca2f140 = FUN_146825d77;
    _DAT_14ca2f148 = FUN_146825fd6;
    _DAT_14ca2f150 = FUN_1407e02ea;
    _DAT_14ca2f158 = FUN_146826273;
    _DAT_14ca2f130 = FUN_1472982ba;
    _DAT_14ca2f170 = 0xffffffff000000e0;
    _DAT_14ca2f178 = 8;
    DAT_14ca2f17c = 0;
    _DAT_14ca2f160 = &LAB_1472982e6;
    FUN_145e928b8();
    FUN_1407e00cc(&DAT_14ca2f118);
    return;
  }
  return;
}



// FUNCTION 145e928b8 FUN_145e928b8 body=123 status=ok
// SIG undefined FUN_145e928b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e928b8(void)

{
  _DAT_14ca34a50 = L"BASE";
  DAT_14ca34a7a = 4;
  _DAT_14ca34a58 = FUN_140b35ae4();
  _DAT_14ca34a60 = DAT_14ca2f128;
  _DAT_14ca34a68 = &LAB_14682652b;
  DAT_14ca2f128 = &DAT_14ca34a50;
  DAT_14ca2f17d = DAT_14ca2f17d + '\x01';
  _DAT_14ca34a70 = 0x100000000;
  if (*(char *)(_DAT_14ca34a58 + 100) != '\0') {
    DAT_14ca2f17e = DAT_14ca2f17e + '\x01';
  }
  return;
}



// FUNCTION 145e92934 FUN_145e92934 body=261 status=ok
// SIG undefined FUN_145e92934(void)

void FUN_145e92934(void)

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
              0x110) < DAT_14ca335e8) {
    FUN_144b3d300(&DAT_14ca335e8);
    if (DAT_14ca335e8 == -1) {
      FUN_145e92a3a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x220;
      local_58 = 0x236;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca33568,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f14021);
      _Init_thread_footer(&DAT_14ca335e8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e92a3a FUN_145e92a3a body=226 status=ok
// SIG undefined FUN_145e92a3a(void)

longlong * FUN_145e92a3a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462fd616;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e92b22 FUN_145e92b22 body=138 status=ok
// SIG undefined FUN_145e92b22(void)

code * FUN_145e92b22(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"UndistortingDisplacementSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x580000023a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14729fcc4;
}



// FUNCTION 145e92bac FUN_145e92bac body=138 status=ok
// SIG undefined FUN_145e92bac(void)

code * FUN_145e92bac(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x680000023c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14729fc3a;
}



// FUNCTION 145e92c36 FUN_145e92c36 body=292 status=ok
// SIG undefined FUN_145e92c36(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e92c36(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca35538) {
    FUN_144b3d300(&DAT_14ca35538);
    if (DAT_14ca35538 == -1) {
      FUN_145e92ea4();
      FUN_145e92d5a();
      FUN_140db5666(&DAT_14ca35490,0,&DAT_14ca35428,L"FVisualizeBufferPS",
                    L"/Engine/Private/PostProcessVisualizeBuffer.usf",L"MainPS",3,1,FUN_1472a972e,
                    FUN_1472a96ce,&LAB_1472a96ca,&LAB_1472a96c6,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca36338);
      _DAT_14ca35490 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f26ce8);
      _Init_thread_footer(&DAT_14ca35538);
    }
  }
  return &DAT_14ca35490;
}



// FUNCTION 145e92d5a FUN_145e92d5a body=205 status=ok
// SIG undefined FUN_145e92d5a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e92d5a(void)

{
  if ((DAT_14ca3548f & 2) == 0) {
    DAT_14ca3548f = DAT_14ca3548f | 2;
    _DAT_14ca35430 = L"FVisualizeBufferPS";
    _DAT_14ca35448 = FUN_146826540;
    _DAT_14ca35450 = FUN_146825d77;
    _DAT_14ca35458 = FUN_146825fd6;
    _DAT_14ca35460 = FUN_1407e02ea;
    _DAT_14ca35468 = FUN_146826273;
    _DAT_14ca35440 = FUN_1472a9696;
    _DAT_14ca35480 = 0xffffffff000000e0;
    _DAT_14ca35488 = 8;
    DAT_14ca3548c = 0;
    _DAT_14ca35470 = &LAB_1472a96c2;
    FUN_145e92e28();
    FUN_1407e00cc(&DAT_14ca35428);
    return;
  }
  return;
}



// FUNCTION 145e92e28 FUN_145e92e28 body=123 status=ok
// SIG undefined FUN_145e92e28(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e92e28(void)

{
  _DAT_14ca382d0 = L"BASE";
  DAT_14ca382fa = 4;
  _DAT_14ca382d8 = FUN_140b35ae4();
  _DAT_14ca382e0 = DAT_14ca35438;
  _DAT_14ca382e8 = &LAB_14682652b;
  DAT_14ca35438 = &DAT_14ca382d0;
  DAT_14ca3548d = DAT_14ca3548d + '\x01';
  _DAT_14ca382f0 = 0x100000000;
  if (*(char *)(_DAT_14ca382d8 + 100) != '\0') {
    DAT_14ca3548e = DAT_14ca3548e + '\x01';
  }
  return;
}



// FUNCTION 145e92ea4 FUN_145e92ea4 body=261 status=ok
// SIG undefined FUN_145e92ea4(void)

void FUN_145e92ea4(void)

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
              0x110) < DAT_14ca363b8) {
    FUN_144b3d300(&DAT_14ca363b8);
    if (DAT_14ca363b8 == -1) {
      FUN_145e92faa(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 400;
      local_58 = 0x17;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca36338,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f47d34);
      _Init_thread_footer(&DAT_14ca363b8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e92faa FUN_145e92faa body=226 status=ok
// SIG undefined FUN_145e92faa(void)

longlong * FUN_145e92faa(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462ffd54;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e93092 FUN_145e93092 body=138 status=ok
// SIG undefined FUN_145e93092(void)

code * FUN_145e93092(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7000000019;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462ffddc;
}



// FUNCTION 145e9311c FUN_145e9311c body=138 status=ok
// SIG undefined FUN_145e9311c(void)

code * FUN_145e9311c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SelectionColor";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000001b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472abc2a;
}



// FUNCTION 145e931a6 FUN_145e931a6 body=292 status=ok
// SIG undefined FUN_145e931a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e931a6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca35a28) {
    FUN_144b3d300(&DAT_14ca35a28);
    if (DAT_14ca35a28 == -1) {
      FUN_145e93414();
      FUN_145e932ca();
      FUN_140db5666(&DAT_14ca35980,0,&DAT_14ca35918,L"FVisualizeNanitePS",
                    L"/Engine/Private/PostProcessVisualizeBuffer.usf",L"MainPS",3,1,FUN_1472a9cf4,
                    FUN_1472a9c94,&LAB_1472a9c90,&LAB_1472a9c8c,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca36558);
      _DAT_14ca35980 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f2c434);
      _Init_thread_footer(&DAT_14ca35a28);
    }
  }
  return &DAT_14ca35980;
}



// FUNCTION 145e932ca FUN_145e932ca body=205 status=ok
// SIG undefined FUN_145e932ca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e932ca(void)

{
  if ((DAT_14ca3597f & 2) == 0) {
    DAT_14ca3597f = DAT_14ca3597f | 2;
    _DAT_14ca35920 = L"FVisualizeNanitePS";
    _DAT_14ca35938 = FUN_146826540;
    _DAT_14ca35940 = FUN_146825d77;
    _DAT_14ca35948 = FUN_146825fd6;
    _DAT_14ca35950 = FUN_1407e02ea;
    _DAT_14ca35958 = FUN_146826273;
    _DAT_14ca35930 = FUN_1472a9c5c;
    _DAT_14ca35970 = 0xffffffff000000e0;
    _DAT_14ca35978 = 8;
    DAT_14ca3597c = 0;
    _DAT_14ca35960 = &LAB_1472a9c88;
    FUN_145e93398();
    FUN_1407e00cc(&DAT_14ca35918);
    return;
  }
  return;
}



// FUNCTION 145e93398 FUN_145e93398 body=123 status=ok
// SIG undefined FUN_145e93398(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e93398(void)

{
  _DAT_14ca38390 = L"BASE";
  DAT_14ca383ba = 4;
  _DAT_14ca38398 = FUN_140b35ae4();
  _DAT_14ca383a0 = DAT_14ca35928;
  _DAT_14ca383a8 = &LAB_14682652b;
  DAT_14ca35928 = &DAT_14ca38390;
  DAT_14ca3597d = DAT_14ca3597d + '\x01';
  _DAT_14ca383b0 = 0x100000000;
  if (*(char *)(_DAT_14ca38398 + 100) != '\0') {
    DAT_14ca3597e = DAT_14ca3597e + '\x01';
  }
  return;
}



// FUNCTION 145e93414 FUN_145e93414 body=261 status=ok
// SIG undefined FUN_145e93414(void)

void FUN_145e93414(void)

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
              0x110) < DAT_14ca365d8) {
    FUN_144b3d300(&DAT_14ca365d8);
    if (DAT_14ca365d8 == -1) {
      FUN_145e9351a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 400;
      local_58 = 0xf;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca36558,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f47d64);
      _Init_thread_footer(&DAT_14ca365d8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e9351a FUN_145e9351a body=226 status=ok
// SIG undefined FUN_145e9351a(void)

longlong * FUN_145e9351a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1463007b8;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e93602 FUN_145e93602 body=138 status=ok
// SIG undefined FUN_145e93602(void)

code * FUN_145e93602(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7000000011;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146300840;
}



// FUNCTION 145e9368c FUN_145e9368c body=138 status=ok
// SIG undefined FUN_145e9368c(void)

code * FUN_145e9368c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SelectionColor";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000013;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472aca3a;
}



// FUNCTION 145e93716 FUN_145e93716 body=292 status=ok
// SIG undefined FUN_145e93716(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e93716(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca39c28) {
    FUN_144b3d300(&DAT_14ca39c28);
    if (DAT_14ca39c28 == -1) {
      FUN_145e93984();
      FUN_145e9383a();
      FUN_140db5666(&DAT_14ca39b80,0,&DAT_14ca39b18,L"FRayTracingDebugConvertToDeviceDepthPS",
                    L"/Engine/Private/RayTracing/RayTracingDebugInstanceOverlap.usf",
                    L"ConvertToDeviceDepthPS",3,1,FUN_1472b2234,FUN_1472b21d4,&LAB_146300df4,
                    &LAB_1472b21d0,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca3ed20);
      _DAT_14ca39b80 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f65bd0);
      _Init_thread_footer(&DAT_14ca39c28);
    }
  }
  return &DAT_14ca39b80;
}



// FUNCTION 145e9383a FUN_145e9383a body=205 status=ok
// SIG undefined FUN_145e9383a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e9383a(void)

{
  if ((DAT_14ca39b7f & 2) == 0) {
    DAT_14ca39b7f = DAT_14ca39b7f | 2;
    _DAT_14ca39b20 = L"FRayTracingDebugConvertToDeviceDepthPS";
    _DAT_14ca39b38 = FUN_146826540;
    _DAT_14ca39b40 = FUN_146825d77;
    _DAT_14ca39b48 = FUN_146825fd6;
    _DAT_14ca39b50 = FUN_1407e02ea;
    _DAT_14ca39b58 = FUN_146826273;
    _DAT_14ca39b30 = FUN_1472b21a2;
    _DAT_14ca39b70 = 0xffffffff000000e0;
    _DAT_14ca39b78 = 8;
    DAT_14ca39b7c = 0;
    _DAT_14ca39b60 = &LAB_1472b21cc;
    FUN_145e93908();
    FUN_1407e00cc(&DAT_14ca39b18);
    return;
  }
  return;
}



// FUNCTION 145e93908 FUN_145e93908 body=123 status=ok
// SIG undefined FUN_145e93908(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e93908(void)

{
  _DAT_14ca3f6e0 = L"BASE";
  DAT_14ca3f70a = 4;
  _DAT_14ca3f6e8 = FUN_140b35ae4();
  _DAT_14ca3f6f0 = DAT_14ca39b28;
  _DAT_14ca3f6f8 = &LAB_14682652b;
  DAT_14ca39b28 = &DAT_14ca3f6e0;
  DAT_14ca39b7d = DAT_14ca39b7d + '\x01';
  _DAT_14ca3f700 = 0x100000000;
  if (*(char *)(_DAT_14ca3f6e8 + 100) != '\0') {
    DAT_14ca39b7e = DAT_14ca39b7e + '\x01';
  }
  return;
}



// FUNCTION 145e93984 FUN_145e93984 body=261 status=ok
// SIG undefined FUN_145e93984(void)

void FUN_145e93984(void)

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
              0x110) < DAT_14ca3eda0) {
    FUN_144b3d300(&DAT_14ca3eda0);
    if (DAT_14ca3eda0 == -1) {
      FUN_145e93a8a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x120;
      local_58 = 0x1d8;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca3ed20,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f6f732);
      _Init_thread_footer(&DAT_14ca3eda0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e93a8a FUN_145e93a8a body=226 status=ok
// SIG undefined FUN_145e93a8a(void)

longlong * FUN_145e93a8a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_146301c7e;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e93b72 FUN_145e93b72 body=138 status=ok
// SIG undefined FUN_145e93b72(void)

undefined1 * FUN_145e93b72(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1d9;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e93b6e;
}



// FUNCTION 145e93bfc FUN_145e93bfc body=138 status=ok
// SIG undefined FUN_145e93bfc(void)

code * FUN_145e93bfc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InputDepth";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000001da;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e93b72;
}



// FUNCTION 145e93c86 FUN_145e93c86 body=292 status=ok
// SIG undefined FUN_145e93c86(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e93c86(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca39ee0) {
    FUN_144b3d300(&DAT_14ca39ee0);
    if (DAT_14ca39ee0 == -1) {
      FUN_145e93ef4();
      FUN_145e93daa();
      FUN_140db5666(&DAT_14ca39e38,0,&DAT_14ca39dd0,L"FRayTracingSceneHitStatsDebugRenderCS",
                    L"/Engine/Private/RayTracing/RayTracingDebugHitStatsUtils.usf",
                    L"RayTracingSceneDebugHitStatsRenderCS",5,1,FUN_1472b23c0,FUN_1472b2360,
                    FUN_146300e04,&LAB_1472b235c,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca3ee30);
      _DAT_14ca39e38 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f65c46);
      _Init_thread_footer(&DAT_14ca39ee0);
    }
  }
  return &DAT_14ca39e38;
}



// FUNCTION 145e93daa FUN_145e93daa body=205 status=ok
// SIG undefined FUN_145e93daa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e93daa(void)

{
  if ((DAT_14ca39e37 & 2) == 0) {
    DAT_14ca39e37 = DAT_14ca39e37 | 2;
    _DAT_14ca39dd8 = L"FRayTracingSceneHitStatsDebugRenderCS";
    _DAT_14ca39df0 = FUN_146826540;
    _DAT_14ca39df8 = FUN_146825d77;
    _DAT_14ca39e00 = FUN_146825fd6;
    _DAT_14ca39e08 = FUN_1407e02ea;
    _DAT_14ca39e10 = FUN_146826273;
    _DAT_14ca39de8 = FUN_1472b232e;
    _DAT_14ca39e28 = 0xffffffff000000e0;
    _DAT_14ca39e30 = 8;
    DAT_14ca39e34 = 0;
    _DAT_14ca39e18 = &LAB_1472b2358;
    FUN_145e93e78();
    FUN_1407e00cc(&DAT_14ca39dd0);
    return;
  }
  return;
}



// FUNCTION 145e93e78 FUN_145e93e78 body=123 status=ok
// SIG undefined FUN_145e93e78(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e93e78(void)

{
  _DAT_14ca3f740 = L"BASE";
  DAT_14ca3f76a = 4;
  _DAT_14ca3f748 = FUN_140b35ae4();
  _DAT_14ca3f750 = DAT_14ca39de0;
  _DAT_14ca3f758 = &LAB_14682652b;
  DAT_14ca39de0 = &DAT_14ca3f740;
  DAT_14ca39e35 = DAT_14ca39e35 + '\x01';
  _DAT_14ca3f760 = 0x100000000;
  if (*(char *)(_DAT_14ca3f748 + 100) != '\0') {
    DAT_14ca39e36 = DAT_14ca39e36 + '\x01';
  }
  return;
}



// FUNCTION 145e93ef4 FUN_145e93ef4 body=261 status=ok
// SIG undefined FUN_145e93ef4(void)

void FUN_145e93ef4(void)

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
              0x110) < DAT_14ca3eeb0) {
    FUN_144b3d300(&DAT_14ca3eeb0);
    if (DAT_14ca3eeb0 == -1) {
      FUN_145e93ffa(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0x3b9;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca3ee30,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f6f74a);
      _Init_thread_footer(&DAT_14ca3eeb0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e93ffa FUN_145e93ffa body=226 status=ok
// SIG undefined FUN_145e93ffa(void)

longlong * FUN_145e93ffa(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_146301d8e;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e940e2 FUN_145e940e2 body=132 status=ok
// SIG undefined FUN_145e940e2(void)

undefined1 * FUN_145e940e2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SelectedNameInfoCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3ba;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e940de;
}



// FUNCTION 145e94166 FUN_145e94166 body=144 status=ok
// SIG undefined FUN_145e94166(void)

code * FUN_145e94166(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x20000003bd;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_146301e16;
}



// FUNCTION 145e941f6 FUN_145e941f6 body=292 status=ok
// SIG undefined FUN_145e941f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e941f6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca3ac90) {
    FUN_144b3d300(&DAT_14ca3ac90);
    if (DAT_14ca3ac90 == -1) {
      FUN_145e94464();
      FUN_145e9431a();
      FUN_140db5666(&DAT_14ca3abe8,0,&DAT_14ca3ab80,L"FRayTracingBuildLightGridCS",
                    L"/Engine/Private/RayTracing/RayTracingBuildLightGrid.usf",
                    L"RayTracingBuildLightGridCS",5,1,FUN_1472b5fe0,FUN_1472b5f80,&LAB_146300e46,
                    &LAB_1472b5f7c,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca3f1a8);
      _DAT_14ca3abe8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f68811);
      _Init_thread_footer(&DAT_14ca3ac90);
    }
  }
  return &DAT_14ca3abe8;
}



// FUNCTION 145e9431a FUN_145e9431a body=205 status=ok
// SIG undefined FUN_145e9431a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e9431a(void)

{
  if ((DAT_14ca3abe7 & 2) == 0) {
    DAT_14ca3abe7 = DAT_14ca3abe7 | 2;
    _DAT_14ca3ab88 = L"FRayTracingBuildLightGridCS";
    _DAT_14ca3aba0 = FUN_146826540;
    _DAT_14ca3aba8 = FUN_146825d77;
    _DAT_14ca3abb0 = FUN_146825fd6;
    _DAT_14ca3abb8 = FUN_1407e02ea;
    _DAT_14ca3abc0 = FUN_146826273;
    _DAT_14ca3ab98 = FUN_1472b5f4e;
    _DAT_14ca3abd8 = 0xffffffff000000e0;
    _DAT_14ca3abe0 = 8;
    DAT_14ca3abe4 = 0;
    _DAT_14ca3abc8 = &LAB_1472b5f78;
    FUN_145e943e8();
    FUN_1407e00cc(&DAT_14ca3ab80);
    return;
  }
  return;
}



// FUNCTION 145e943e8 FUN_145e943e8 body=123 status=ok
// SIG undefined FUN_145e943e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e943e8(void)

{
  _DAT_14ca3f978 = L"BASE";
  DAT_14ca3f9a2 = 4;
  _DAT_14ca3f980 = FUN_140b35ae4();
  _DAT_14ca3f988 = DAT_14ca3ab90;
  _DAT_14ca3f990 = &LAB_14682652b;
  DAT_14ca3ab90 = &DAT_14ca3f978;
  DAT_14ca3abe5 = DAT_14ca3abe5 + '\x01';
  _DAT_14ca3f998 = 0x100000000;
  if (*(char *)(_DAT_14ca3f980 + 100) != '\0') {
    DAT_14ca3abe6 = DAT_14ca3abe6 + '\x01';
  }
  return;
}



// FUNCTION 145e94464 FUN_145e94464 body=261 status=ok
// SIG undefined FUN_145e94464(void)

void FUN_145e94464(void)

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
              0x110) < DAT_14ca3f228) {
    FUN_144b3d300(&DAT_14ca3f228);
    if (DAT_14ca3f228 == -1) {
      FUN_145e9456a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x60;
      local_58 = 0x40;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca3f1a8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f6f91c);
      _Init_thread_footer(&DAT_14ca3f228);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e9456a FUN_145e9456a body=226 status=ok
// SIG undefined FUN_145e9456a(void)

longlong * FUN_145e9456a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1463023f6;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e94652 FUN_145e94652 body=138 status=ok
// SIG undefined FUN_145e94652(void)

code * FUN_145e94652(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SceneLightsTranslatedBoundMin";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000043;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e946dc;
}



// FUNCTION 145e946dc FUN_145e946dc body=138 status=ok
// SIG undefined FUN_145e946dc(void)

code * FUN_145e946dc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SceneInfiniteLightCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000042;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472be3ee;
}



// FUNCTION 145e94766 FUN_145e94766 body=205 status=ok
// SIG undefined FUN_145e94766(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e94766(void)

{
  if ((DAT_14ca451d7 & 2) == 0) {
    DAT_14ca451d7 = DAT_14ca451d7 | 2;
    _DAT_14ca45178 = L"FSceneCapturePS";
    _DAT_14ca45190 = FUN_146826540;
    _DAT_14ca45198 = FUN_146825d77;
    _DAT_14ca451a0 = FUN_146825fd6;
    _DAT_14ca451a8 = FUN_1407e02ea;
    _DAT_14ca451b0 = FUN_146826273;
    _DAT_14ca45188 = FUN_1472d92a2;
    _DAT_14ca451c8 = 0xffffffff000000e0;
    _DAT_14ca451d0 = 8;
    DAT_14ca451d4 = 0;
    _DAT_14ca451b8 = &LAB_1472d92cc;
    FUN_145e94834();
    FUN_1407e00cc(&DAT_14ca45170);
    return;
  }
  return;
}



// FUNCTION 145e94834 FUN_145e94834 body=123 status=ok
// SIG undefined FUN_145e94834(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e94834(void)

{
  _DAT_14ca470d0 = L"BASE";
  DAT_14ca470fa = 4;
  _DAT_14ca470d8 = FUN_140b35ae4();
  _DAT_14ca470e0 = DAT_14ca45180;
  _DAT_14ca470e8 = &LAB_14682652b;
  DAT_14ca45180 = &DAT_14ca470d0;
  DAT_14ca451d5 = DAT_14ca451d5 + '\x01';
  _DAT_14ca470f0 = 0x100000000;
  if (*(char *)(_DAT_14ca470d8 + 100) != '\0') {
    DAT_14ca451d6 = DAT_14ca451d6 + '\x01';
  }
  return;
}



// FUNCTION 145e948b0 FUN_145e948b0 body=226 status=ok
// SIG undefined FUN_145e948b0(void)

longlong * FUN_145e948b0(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_146305d3c;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e94998 FUN_145e94998 body=138 status=ok
// SIG undefined FUN_145e94998(void)

undefined1 * FUN_145e94998(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x75;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e94994;
}



// FUNCTION 145e94a22 FUN_145e94a22 body=144 status=ok
// SIG undefined FUN_145e94a22(void)

code * FUN_145e94a22(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1000000076;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145e94998;
}



// FUNCTION 145e94ab2 FUN_145e94ab2 body=292 status=ok
// SIG undefined FUN_145e94ab2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e94ab2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4e100) {
    FUN_144b3d300(&DAT_14ca4e100);
    if (DAT_14ca4e100 == -1) {
      FUN_145e94d20();
      FUN_145e94bd6();
      FUN_140db5666(&DAT_14ca4e058,0,&DAT_14ca4dff0,L"FShaderDrawDebugPS",
                    L"/Engine/Private/ShaderPrintDrawPrimitive.usf",L"ShaderDrawDebugPS",3,1,
                    FUN_1472eb652,FUN_1472eb5f2,&LAB_1472eb5c8,&LAB_1472eb5c4,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca56270);
      _DAT_14ca4e058 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14303e9f2);
      _Init_thread_footer(&DAT_14ca4e100);
    }
  }
  return &DAT_14ca4e058;
}



// FUNCTION 145e94bd6 FUN_145e94bd6 body=205 status=ok
// SIG undefined FUN_145e94bd6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e94bd6(void)

{
  if ((DAT_14ca4e057 & 2) == 0) {
    DAT_14ca4e057 = DAT_14ca4e057 | 2;
    _DAT_14ca4dff8 = L"FShaderDrawDebugPS";
    _DAT_14ca4e010 = FUN_146826540;
    _DAT_14ca4e018 = FUN_146825d77;
    _DAT_14ca4e020 = FUN_146825fd6;
    _DAT_14ca4e028 = FUN_1407e02ea;
    _DAT_14ca4e030 = FUN_146826273;
    _DAT_14ca4e008 = FUN_1472eb594;
    _DAT_14ca4e048 = 0xffffffff000000e0;
    _DAT_14ca4e050 = 8;
    DAT_14ca4e054 = 0;
    _DAT_14ca4e038 = &LAB_1472eb5c0;
    FUN_145e94ca4();
    FUN_1407e00cc(&DAT_14ca4dff0);
    return;
  }
  return;
}



// FUNCTION 145e94ca4 FUN_145e94ca4 body=123 status=ok
// SIG undefined FUN_145e94ca4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e94ca4(void)

{
  _DAT_14ca56ac8 = L"BASE";
  DAT_14ca56af2 = 4;
  _DAT_14ca56ad0 = FUN_140b35ae4();
  _DAT_14ca56ad8 = DAT_14ca4e000;
  _DAT_14ca56ae0 = &LAB_14682652b;
  DAT_14ca4e000 = &DAT_14ca56ac8;
  DAT_14ca4e055 = DAT_14ca4e055 + '\x01';
  _DAT_14ca56ae8 = 0x100000000;
  if (*(char *)(_DAT_14ca56ad0 + 100) != '\0') {
    DAT_14ca4e056 = DAT_14ca4e056 + '\x01';
  }
  return;
}



// FUNCTION 145e94d20 FUN_145e94d20 body=261 status=ok
// SIG undefined FUN_145e94d20(void)

void FUN_145e94d20(void)

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
              0x110) < DAT_14ca562f0) {
    FUN_144b3d300(&DAT_14ca562f0);
    if (DAT_14ca562f0 == -1) {
      FUN_145e94e26(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x140;
      local_58 = 0x291;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca56270,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14305d81d);
      _Init_thread_footer(&DAT_14ca562f0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e94e26 FUN_145e94e26 body=226 status=ok
// SIG undefined FUN_145e94e26(void)

longlong * FUN_145e94e26(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_14630811a;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e94f0e FUN_145e94f0e body=138 status=ok
// SIG undefined FUN_145e94f0e(void)

code * FUN_145e94f0e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OriginalViewSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000294;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472f66c2;
}



// FUNCTION 145e94f98 FUN_145e94f98 body=138 status=ok
// SIG undefined FUN_145e94f98(void)

code * FUN_145e94f98(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"bDrawOccludedLines";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2400000297;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1463081a2;
}



// FUNCTION 145e95022 FUN_145e95022 body=292 status=ok
// SIG undefined FUN_145e95022(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e95022(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4e458) {
    FUN_144b3d300(&DAT_14ca4e458);
    if (DAT_14ca4e458 == -1) {
      FUN_145e95290();
      FUN_145e95146();
      FUN_140db5666(&DAT_14ca4e3b0,0,&DAT_14ca4e348,L"FShadingFurnaceTestPassPS",
                    L"/Engine/Private/ShadingFurnaceTest.usf",L"MainPS",3,1,FUN_1472ec1fe,
                    FUN_1472ec19e,&LAB_1472ec186,&LAB_1472ec182,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca56408);
      _DAT_14ca4e3b0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143040aa3);
      _Init_thread_footer(&DAT_14ca4e458);
    }
  }
  return &DAT_14ca4e3b0;
}



// FUNCTION 145e95146 FUN_145e95146 body=205 status=ok
// SIG undefined FUN_145e95146(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e95146(void)

{
  if ((DAT_14ca4e3af & 2) == 0) {
    DAT_14ca4e3af = DAT_14ca4e3af | 2;
    _DAT_14ca4e350 = L"FShadingFurnaceTestPassPS";
    _DAT_14ca4e368 = FUN_146826540;
    _DAT_14ca4e370 = FUN_146825d77;
    _DAT_14ca4e378 = FUN_146825fd6;
    _DAT_14ca4e380 = FUN_1407e02ea;
    _DAT_14ca4e388 = FUN_146826273;
    _DAT_14ca4e360 = FUN_1472ec152;
    _DAT_14ca4e3a0 = 0xffffffff000000e0;
    _DAT_14ca4e3a8 = 8;
    DAT_14ca4e3ac = 0;
    _DAT_14ca4e390 = &LAB_1472ec17e;
    FUN_145e95214();
    FUN_1407e00cc(&DAT_14ca4e348);
    return;
  }
  return;
}



// FUNCTION 145e95214 FUN_145e95214 body=123 status=ok
// SIG undefined FUN_145e95214(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e95214(void)

{
  _DAT_14ca56b28 = L"BASE";
  DAT_14ca56b52 = 4;
  _DAT_14ca56b30 = FUN_140b35ae4();
  _DAT_14ca56b38 = DAT_14ca4e358;
  _DAT_14ca56b40 = &LAB_14682652b;
  DAT_14ca4e358 = &DAT_14ca56b28;
  DAT_14ca4e3ad = DAT_14ca4e3ad + '\x01';
  _DAT_14ca56b48 = 0x100000000;
  if (*(char *)(_DAT_14ca56b30 + 100) != '\0') {
    DAT_14ca4e3ae = DAT_14ca4e3ae + '\x01';
  }
  return;
}



// FUNCTION 145e95290 FUN_145e95290 body=261 status=ok
// SIG undefined FUN_145e95290(void)

void FUN_145e95290(void)

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
              0x110) < DAT_14ca56488) {
    FUN_144b3d300(&DAT_14ca56488);
    if (DAT_14ca56488 == -1) {
      FUN_145e95396(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x160;
      local_58 = 0x11c;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca56408,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430609b7);
      _Init_thread_footer(&DAT_14ca56488);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e95396 FUN_145e95396 body=226 status=ok
// SIG undefined FUN_145e95396(void)

longlong * FUN_145e95396(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_146308344;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e9547e FUN_145e9547e body=138 status=ok
// SIG undefined FUN_145e9547e(void)

code * FUN_145e9547e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NumSamplesPerSet";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000120;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14630845c;
}



// FUNCTION 145e95508 FUN_145e95508 body=138 status=ok
// SIG undefined FUN_145e95508(void)

undefined1 * FUN_145e95508(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x11d;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e9547a;
}



// FUNCTION 145e95592 FUN_145e95592 body=292 status=ok
// SIG undefined FUN_145e95592(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e95592(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4e580) {
    FUN_144b3d300(&DAT_14ca4e580);
    if (DAT_14ca4e580 == -1) {
      FUN_145e95800();
      FUN_145e956b6();
      FUN_140db5666(&DAT_14ca4e4d8,0,&DAT_14ca4e470,L"FBuildShadingEnergyConservationTableCS",
                    L"/Engine/Private/ShadingEnergyConservationTable.usf",L"BuildEnergyTableCS",5,4,
                    FUN_1472ec334,FUN_1472ec2d4,&LAB_1472ec2bc,&LAB_1472ec2b8,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca56490);
      _DAT_14ca4e4d8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143040aaf);
      _Init_thread_footer(&DAT_14ca4e580);
    }
  }
  return &DAT_14ca4e4d8;
}



// FUNCTION 145e956b6 FUN_145e956b6 body=205 status=ok
// SIG undefined FUN_145e956b6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e956b6(void)

{
  if ((DAT_14ca4e4d7 & 2) == 0) {
    DAT_14ca4e4d7 = DAT_14ca4e4d7 | 2;
    _DAT_14ca4e478 = L"FBuildShadingEnergyConservationTableCS";
    _DAT_14ca4e490 = FUN_146826540;
    _DAT_14ca4e498 = FUN_146825d77;
    _DAT_14ca4e4a0 = FUN_146825fd6;
    _DAT_14ca4e4a8 = FUN_1407e02ea;
    _DAT_14ca4e4b0 = FUN_146826273;
    _DAT_14ca4e488 = FUN_1472ec288;
    _DAT_14ca4e4c8 = 0xffffffff000000e0;
    _DAT_14ca4e4d0 = 8;
    DAT_14ca4e4d4 = 0;
    _DAT_14ca4e4b8 = &LAB_1472ec2b4;
    FUN_145e95784();
    FUN_1407e00cc(&DAT_14ca4e470);
    return;
  }
  return;
}



// FUNCTION 145e95784 FUN_145e95784 body=123 status=ok
// SIG undefined FUN_145e95784(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e95784(void)

{
  _DAT_14ca56b58 = L"BASE";
  DAT_14ca56b82 = 4;
  _DAT_14ca56b60 = FUN_140b35ae4();
  _DAT_14ca56b68 = DAT_14ca4e480;
  _DAT_14ca56b70 = &LAB_14682652b;
  DAT_14ca4e480 = &DAT_14ca56b58;
  DAT_14ca4e4d5 = DAT_14ca4e4d5 + '\x01';
  _DAT_14ca56b78 = 0x100000000;
  if (*(char *)(_DAT_14ca56b60 + 100) != '\0') {
    DAT_14ca4e4d6 = DAT_14ca4e4d6 + '\x01';
  }
  return;
}



// FUNCTION 145e95800 FUN_145e95800 body=261 status=ok
// SIG undefined FUN_145e95800(void)

void FUN_145e95800(void)

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
              0x110) < DAT_14ca56510) {
    FUN_144b3d300(&DAT_14ca56510);
    if (DAT_14ca56510 == -1) {
      FUN_145e95906(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x173;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca56490,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430609c3);
      _Init_thread_footer(&DAT_14ca56510);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e95906 FUN_145e95906 body=226 status=ok
// SIG undefined FUN_145e95906(void)

longlong * FUN_145e95906(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_14630857a;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e959ee FUN_145e959ee body=138 status=ok
// SIG undefined FUN_145e959ee(void)

code * FUN_145e959ee(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Output1Texture2D";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000176;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472f87aa;
}



// FUNCTION 145e95a78 FUN_145e95a78 body=138 status=ok
// SIG undefined FUN_145e95a78(void)

code * FUN_145e95a78(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Output2Texture2D";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000177;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e959ee;
}



// FUNCTION 145e95b02 FUN_145e95b02 body=292 status=ok
// SIG undefined FUN_145e95b02(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e95b02(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4fa48) {
    FUN_144b3d300(&DAT_14ca4fa48);
    if (DAT_14ca4fa48 == -1) {
      FUN_145e95d70();
      FUN_145e95c26();
      FUN_140db5666(&DAT_14ca4f9a0,0,&DAT_14ca4f938,L"FCopyShadowMapsCubePS",
                    L"/Engine/Private/CopyShadowMaps.usf",L"CopyCubeDepthPS",3,1,FUN_1472ede98,
                    FUN_1472ede38,&LAB_1472ede34,&LAB_1472ede30,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca56518);
      _DAT_14ca4f9a0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143043440);
      _Init_thread_footer(&DAT_14ca4fa48);
    }
  }
  return &DAT_14ca4f9a0;
}



// FUNCTION 145e95c26 FUN_145e95c26 body=205 status=ok
// SIG undefined FUN_145e95c26(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e95c26(void)

{
  if ((DAT_14ca4f99f & 2) == 0) {
    DAT_14ca4f99f = DAT_14ca4f99f | 2;
    _DAT_14ca4f940 = L"FCopyShadowMapsCubePS";
    _DAT_14ca4f958 = FUN_146826540;
    _DAT_14ca4f960 = FUN_146825d77;
    _DAT_14ca4f968 = FUN_146825fd6;
    _DAT_14ca4f970 = FUN_1407e02ea;
    _DAT_14ca4f978 = FUN_146826273;
    _DAT_14ca4f950 = FUN_1472ede00;
    _DAT_14ca4f990 = 0xffffffff000000e0;
    _DAT_14ca4f998 = 8;
    DAT_14ca4f99c = 0;
    _DAT_14ca4f980 = &LAB_1472ede2c;
    FUN_145e95cf4();
    FUN_1407e00cc(&DAT_14ca4f938);
    return;
  }
  return;
}



// FUNCTION 145e95cf4 FUN_145e95cf4 body=123 status=ok
// SIG undefined FUN_145e95cf4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e95cf4(void)

{
  _DAT_14ca57188 = L"BASE";
  DAT_14ca571b2 = 4;
  _DAT_14ca57190 = FUN_140b35ae4();
  _DAT_14ca57198 = DAT_14ca4f948;
  _DAT_14ca571a0 = &LAB_14682652b;
  DAT_14ca4f948 = &DAT_14ca57188;
  DAT_14ca4f99d = DAT_14ca4f99d + '\x01';
  _DAT_14ca571a8 = 0x100000000;
  if (*(char *)(_DAT_14ca57190 + 100) != '\0') {
    DAT_14ca4f99e = DAT_14ca4f99e + '\x01';
  }
  return;
}



// FUNCTION 145e95d70 FUN_145e95d70 body=261 status=ok
// SIG undefined FUN_145e95d70(void)

void FUN_145e95d70(void)

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
              0x110) < DAT_14ca56598) {
    FUN_144b3d300(&DAT_14ca56598);
    if (DAT_14ca56598 == -1) {
      FUN_145e95e76(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x120;
      local_58 = 0x312;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca56518,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143060f5b);
      _Init_thread_footer(&DAT_14ca56598);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e95e76 FUN_145e95e76 body=226 status=ok
// SIG undefined FUN_145e95e76(void)

longlong * FUN_145e95e76(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_14630881e;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e95f5e FUN_145e95f5e body=138 status=ok
// SIG undefined FUN_145e95f5e(void)

code * FUN_145e95f5e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ShadowDepthCubeTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"TextureCube";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000314;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1463088a6;
}



// FUNCTION 145e95fe8 FUN_145e95fe8 body=138 status=ok
// SIG undefined FUN_145e95fe8(void)

code * FUN_145e95fe8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ShadowDepthSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000315;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e95f5e;
}



// FUNCTION 145e96072 FUN_145e96072 body=292 status=ok
// SIG undefined FUN_145e96072(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e96072(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4fb70) {
    FUN_144b3d300(&DAT_14ca4fb70);
    if (DAT_14ca4fb70 == -1) {
      FUN_145e962e0();
      FUN_145e96196();
      FUN_140db5666(&DAT_14ca4fac8,0,&DAT_14ca4fa60,L"FCopyShadowMaps2DPS",
                    L"/Engine/Private/CopyShadowMaps.usf",L"Copy2DDepthPS",3,1,FUN_1472edfba,
                    FUN_1472edf5a,&LAB_1472edf56,&LAB_1472edf52,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca565a0);
      _DAT_14ca4fac8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14304344c);
      _Init_thread_footer(&DAT_14ca4fb70);
    }
  }
  return &DAT_14ca4fac8;
}



// FUNCTION 145e96196 FUN_145e96196 body=205 status=ok
// SIG undefined FUN_145e96196(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e96196(void)

{
  if ((DAT_14ca4fac7 & 2) == 0) {
    DAT_14ca4fac7 = DAT_14ca4fac7 | 2;
    _DAT_14ca4fa68 = L"FCopyShadowMaps2DPS";
    _DAT_14ca4fa80 = FUN_146826540;
    _DAT_14ca4fa88 = FUN_146825d77;
    _DAT_14ca4fa90 = FUN_146825fd6;
    _DAT_14ca4fa98 = FUN_1407e02ea;
    _DAT_14ca4faa0 = FUN_146826273;
    _DAT_14ca4fa78 = FUN_1472edf22;
    _DAT_14ca4fab8 = 0xffffffff000000e0;
    _DAT_14ca4fac0 = 8;
    DAT_14ca4fac4 = 0;
    _DAT_14ca4faa8 = &LAB_1472edf4e;
    FUN_145e96264();
    FUN_1407e00cc(&DAT_14ca4fa60);
    return;
  }
  return;
}



// FUNCTION 145e96264 FUN_145e96264 body=123 status=ok
// SIG undefined FUN_145e96264(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e96264(void)

{
  _DAT_14ca571b8 = L"BASE";
  DAT_14ca571e2 = 4;
  _DAT_14ca571c0 = FUN_140b35ae4();
  _DAT_14ca571c8 = DAT_14ca4fa70;
  _DAT_14ca571d0 = &LAB_14682652b;
  DAT_14ca4fa70 = &DAT_14ca571b8;
  DAT_14ca4fac5 = DAT_14ca4fac5 + '\x01';
  _DAT_14ca571d8 = 0x100000000;
  if (*(char *)(_DAT_14ca571c0 + 100) != '\0') {
    DAT_14ca4fac6 = DAT_14ca4fac6 + '\x01';
  }
  return;
}



// FUNCTION 145e962e0 FUN_145e962e0 body=261 status=ok
// SIG undefined FUN_145e962e0(void)

void FUN_145e962e0(void)

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
              0x110) < DAT_14ca56620) {
    FUN_144b3d300(&DAT_14ca56620);
    if (DAT_14ca56620 == -1) {
      FUN_145e963e6(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x120;
      local_58 = 0x322;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca565a0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143060f67);
      _Init_thread_footer(&DAT_14ca56620);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e963e6 FUN_145e963e6 body=226 status=ok
// SIG undefined FUN_145e963e6(void)

longlong * FUN_145e963e6(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_146308930;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e964ce FUN_145e964ce body=138 status=ok
// SIG undefined FUN_145e964ce(void)

code * FUN_145e964ce(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ShadowDepthSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000325;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e96558;
}



// FUNCTION 145e96558 FUN_145e96558 body=138 status=ok
// SIG undefined FUN_145e96558(void)

code * FUN_145e96558(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000324;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1463089b8;
}



// FUNCTION 145e965e2 FUN_145e965e2 body=292 status=ok
// SIG undefined FUN_145e965e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e965e2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca5d518) {
    FUN_144b3d300(&DAT_14ca5d518);
    if (DAT_14ca5d518 == -1) {
      FUN_145e96850();
      FUN_145e96706();
      FUN_140db5666(&DAT_14ca5d470,0,&DAT_14ca5d408,L"FRenderDebugSkyAtmospherePS",
                    L"/Engine/Private/SkyAtmosphere.usf",L"RenderSkyAtmosphereDebugPS",3,1,
                    FUN_147316110,FUN_1473160b0,&LAB_1473160ac,&LAB_1473160a8,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca5efc8);
      _DAT_14ca5d470 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143091515);
      _Init_thread_footer(&DAT_14ca5d518);
    }
  }
  return &DAT_14ca5d470;
}



// FUNCTION 145e96706 FUN_145e96706 body=205 status=ok
// SIG undefined FUN_145e96706(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e96706(void)

{
  if ((DAT_14ca5d46f & 2) == 0) {
    DAT_14ca5d46f = DAT_14ca5d46f | 2;
    _DAT_14ca5d410 = L"FRenderDebugSkyAtmospherePS";
    _DAT_14ca5d428 = FUN_146826540;
    _DAT_14ca5d430 = FUN_146825d77;
    _DAT_14ca5d438 = FUN_146825fd6;
    _DAT_14ca5d440 = FUN_1407e02ea;
    _DAT_14ca5d448 = FUN_146826273;
    _DAT_14ca5d420 = FUN_14731607a;
    _DAT_14ca5d460 = 0xffffffff000000e0;
    _DAT_14ca5d468 = 8;
    DAT_14ca5d46c = 0;
    _DAT_14ca5d450 = &LAB_1473160a4;
    FUN_145e967d4();
    FUN_1407e00cc(&DAT_14ca5d408);
    return;
  }
  return;
}


