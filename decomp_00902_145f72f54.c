// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145f72f54 FUN_145f72f54 body=144 status=ok
// SIG undefined FUN_145f72f54(void)

code * FUN_145f72f54(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x100000001c9;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462e0ab0;
}



// FUNCTION 145f72fe4 FUN_145f72fe4 body=292 status=ok
// SIG undefined FUN_145f72fe4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f72fe4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f5c28) {
    FUN_144b3d300(&DAT_14c9f5c28);
    if (DAT_14c9f5c28 == -1) {
      FUN_145f73252();
      FUN_145f73108();
      FUN_140db5666(&DAT_14c9f5b80,0,&DAT_14c9f5b18,L"FBilateralFilterCS",
                    L"/Engine/Private/Lumen/LumenReSTIRGather.usf",L"BilateralFilterCS",5,1,
                    FUN_1471f0c02,FUN_1471f0ba2,&LAB_1462db5be,&LAB_1471f0b9e,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9f7828);
      _DAT_14c9f5b80 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d4ae62);
      _Init_thread_footer(&DAT_14c9f5c28);
    }
  }
  return &DAT_14c9f5b80;
}



// FUNCTION 145f73108 FUN_145f73108 body=205 status=ok
// SIG undefined FUN_145f73108(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f73108(void)

{
  if ((DAT_14c9f5b7f & 2) == 0) {
    DAT_14c9f5b7f = DAT_14c9f5b7f | 2;
    _DAT_14c9f5b20 = L"FBilateralFilterCS";
    _DAT_14c9f5b38 = FUN_146826540;
    _DAT_14c9f5b40 = FUN_146825d77;
    _DAT_14c9f5b48 = FUN_146825fd6;
    _DAT_14c9f5b50 = FUN_1407e02ea;
    _DAT_14c9f5b58 = FUN_146826273;
    _DAT_14c9f5b30 = FUN_1471f0b70;
    _DAT_14c9f5b70 = 0xffffffff000000e0;
    _DAT_14c9f5b78 = 8;
    DAT_14c9f5b7c = 0;
    _DAT_14c9f5b60 = &LAB_1471f0b9a;
    FUN_145f731d6();
    FUN_1407e00cc(&DAT_14c9f5b18);
    return;
  }
  return;
}



// FUNCTION 145f731d6 FUN_145f731d6 body=123 status=ok
// SIG undefined FUN_145f731d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f731d6(void)

{
  _DAT_14c9f8118 = L"BASE";
  DAT_14c9f8142 = 4;
  _DAT_14c9f8120 = FUN_140b35ae4();
  _DAT_14c9f8128 = DAT_14c9f5b28;
  _DAT_14c9f8130 = &LAB_14682652b;
  DAT_14c9f5b28 = &DAT_14c9f8118;
  DAT_14c9f5b7d = DAT_14c9f5b7d + '\x01';
  _DAT_14c9f8138 = 0x100000000;
  if (*(char *)(_DAT_14c9f8120 + 100) != '\0') {
    DAT_14c9f5b7e = DAT_14c9f5b7e + '\x01';
  }
  return;
}



// FUNCTION 145f73252 FUN_145f73252 body=261 status=ok
// SIG undefined FUN_145f73252(void)

void FUN_145f73252(void)

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
              0x110) < DAT_14c9f78a8) {
    FUN_144b3d300(&DAT_14c9f78a8);
    if (DAT_14c9f78a8 == -1) {
      FUN_145f73358(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x120;
      local_58 = 0x2ac;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f7828,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d596d5);
      _Init_thread_footer(&DAT_14c9f78a8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f73358 FUN_145f73358 body=226 status=ok
// SIG undefined FUN_145f73358(void)

longlong * FUN_145f73358(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462e138c;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f7343c FUN_145f7343c body=138 status=ok
// SIG undefined FUN_145f7343c(void)

code * FUN_145f7343c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RoughSpecularIndirect";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float3>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf8000002b4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471fc158;
}



// FUNCTION 145f734c6 FUN_145f734c6 body=138 status=ok
// SIG undefined FUN_145f734c6(void)

code * FUN_145f734c6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"BilateralFilterNumSamples";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10c000002b7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462e1414;
}



// FUNCTION 145f73550 FUN_145f73550 body=144 status=ok
// SIG undefined FUN_145f73550(void)

code * FUN_145f73550(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xc0000002b0;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462e15bc;
}



// FUNCTION 145f735e0 FUN_145f735e0 body=292 status=ok
// SIG undefined FUN_145f735e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f735e0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9fc7c0) {
    FUN_144b3d300(&DAT_14c9fc7c0);
    if (DAT_14c9fc7c0 == -1) {
      FUN_145f7384e();
      FUN_145f73704();
      FUN_140db5666(&DAT_14c9fc718,0,&DAT_14c9fc6b0,L"FScreenProbeGenerateMipLevelCS",
                    L"/Engine/Private/Lumen/LumenScreenProbeFiltering.usf",
                    L"ScreenProbeGenerateMipLevelCS",5,1,FUN_147208a58,FUN_1472089f8,&LAB_1462e17c0,
                    &LAB_1472089f4,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9ff3b0);
      _DAT_14c9fc718 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d87974);
      _Init_thread_footer(&DAT_14c9fc7c0);
    }
  }
  return &DAT_14c9fc718;
}



// FUNCTION 145f73704 FUN_145f73704 body=205 status=ok
// SIG undefined FUN_145f73704(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f73704(void)

{
  if ((DAT_14c9fc717 & 2) == 0) {
    DAT_14c9fc717 = DAT_14c9fc717 | 2;
    _DAT_14c9fc6b8 = L"FScreenProbeGenerateMipLevelCS";
    _DAT_14c9fc6d0 = FUN_146826540;
    _DAT_14c9fc6d8 = FUN_146825d77;
    _DAT_14c9fc6e0 = FUN_146825fd6;
    _DAT_14c9fc6e8 = FUN_1407e02ea;
    _DAT_14c9fc6f0 = FUN_146826273;
    _DAT_14c9fc6c8 = FUN_1472089c6;
    _DAT_14c9fc708 = 0xffffffff000000e0;
    _DAT_14c9fc710 = 8;
    DAT_14c9fc714 = 0;
    _DAT_14c9fc6f8 = &LAB_1472089f0;
    FUN_145f737d2();
    FUN_1407e00cc(&DAT_14c9fc6b0);
    return;
  }
  return;
}



// FUNCTION 145f737d2 FUN_145f737d2 body=123 status=ok
// SIG undefined FUN_145f737d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f737d2(void)

{
  _DAT_14ca00558 = L"BASE";
  DAT_14ca00582 = 4;
  _DAT_14ca00560 = FUN_140b35ae4();
  _DAT_14ca00568 = DAT_14c9fc6c0;
  _DAT_14ca00570 = &LAB_14682652b;
  DAT_14c9fc6c0 = &DAT_14ca00558;
  DAT_14c9fc715 = DAT_14c9fc715 + '\x01';
  _DAT_14ca00578 = 0x100000000;
  if (*(char *)(_DAT_14ca00560 + 100) != '\0') {
    DAT_14c9fc716 = DAT_14c9fc716 + '\x01';
  }
  return;
}



// FUNCTION 145f7384e FUN_145f7384e body=261 status=ok
// SIG undefined FUN_145f7384e(void)

void FUN_145f7384e(void)

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
              0x110) < DAT_14c9ff430) {
    FUN_144b3d300(&DAT_14c9ff430);
    if (DAT_14c9ff430 == -1) {
      FUN_145f73954(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x180;
      local_58 = 0x194;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9ff3b0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d9c689);
      _Init_thread_footer(&DAT_14c9ff430);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f73954 FUN_145f73954 body=226 status=ok
// SIG undefined FUN_145f73954(void)

longlong * FUN_145f73954(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462e5988;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f73a38 FUN_145f73a38 body=138 status=ok
// SIG undefined FUN_145f73a38(void)

code * FUN_145f73a38(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ScreenProbeRadianceWithBorderParentMip";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000196;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462e5a16;
}



// FUNCTION 145f73ac2 FUN_145f73ac2 body=138 status=ok
// SIG undefined FUN_145f73ac2(void)

code * FUN_145f73ac2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000197;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f73a38;
}



// FUNCTION 145f73b4c FUN_145f73b4c body=144 status=ok
// SIG undefined FUN_145f73b4c(void)

code * FUN_145f73b4c(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x2000000198;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145f73ac2;
}



// FUNCTION 145f73bdc FUN_145f73bdc body=205 status=ok
// SIG undefined FUN_145f73bdc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f73bdc(void)

{
  if ((DAT_14c9fcf5f & 2) == 0) {
    DAT_14c9fcf5f = DAT_14c9fcf5f | 2;
    _DAT_14c9fcf00 = L"FMarkRadianceProbesUsedByScreenProbesCS";
    _DAT_14c9fcf18 = FUN_146826540;
    _DAT_14c9fcf20 = FUN_146825d77;
    _DAT_14c9fcf28 = FUN_146825fd6;
    _DAT_14c9fcf30 = FUN_1407e02ea;
    _DAT_14c9fcf38 = FUN_146826273;
    _DAT_14c9fcf10 = FUN_147208fc4;
    _DAT_14c9fcf50 = 0xffffffff000000e0;
    _DAT_14c9fcf58 = 8;
    DAT_14c9fcf5c = 0;
    _DAT_14c9fcf40 = &LAB_147208fee;
    FUN_145f73caa();
    FUN_1407e00cc(&DAT_14c9fcef8);
    return;
  }
  return;
}



// FUNCTION 145f73caa FUN_145f73caa body=123 status=ok
// SIG undefined FUN_145f73caa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f73caa(void)

{
  _DAT_14ca00618 = L"BASE";
  DAT_14ca00642 = 4;
  _DAT_14ca00620 = FUN_140b35ae4();
  _DAT_14ca00628 = DAT_14c9fcf08;
  _DAT_14ca00630 = &LAB_14682652b;
  DAT_14c9fcf08 = &DAT_14ca00618;
  DAT_14c9fcf5d = DAT_14c9fcf5d + '\x01';
  _DAT_14ca00638 = 0x100000000;
  if (*(char *)(_DAT_14ca00620 + 100) != '\0') {
    DAT_14c9fcf5e = DAT_14c9fcf5e + '\x01';
  }
  return;
}



// FUNCTION 145f73d26 FUN_145f73d26 body=226 status=ok
// SIG undefined FUN_145f73d26(void)

longlong * FUN_145f73d26(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462e60b8;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f73e0a FUN_145f73e0a body=138 status=ok
// SIG undefined FUN_145f73e0a(void)

undefined1 * FUN_145f73e0a(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x2cf;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_147217730;
}



// FUNCTION 145f73e94 FUN_145f73e94 body=144 status=ok
// SIG undefined FUN_145f73e94(void)

code * FUN_145f73e94(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x10000002d0;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145f73e0a;
}



// FUNCTION 145f73f24 FUN_145f73f24 body=144 status=ok
// SIG undefined FUN_145f73f24(void)

code * FUN_145f73f24(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x20000002d1;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145f73e94;
}



// FUNCTION 145f73fb4 FUN_145f73fb4 body=292 status=ok
// SIG undefined FUN_145f73fb4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f73fb4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca05110) {
    FUN_144b3d300(&DAT_14ca05110);
    if (DAT_14ca05110 == -1) {
      FUN_145f74222();
      FUN_145f740d8();
      FUN_140db5666(&DAT_14ca05068,0,&DAT_14ca05000,L"FShadeLightSamplesCS",
                    L"/Engine/Private/MegaLights/MegaLightsShading.usf",L"ShadeLightSamplesCS",5,
                    0x24,FUN_1472278de,FUN_14722787e,&LAB_142dc9ae2,&LAB_142dc9abe,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca07330);
      _DAT_14ca05068 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142dc9b03);
      _Init_thread_footer(&DAT_14ca05110);
    }
  }
  return &DAT_14ca05068;
}



// FUNCTION 145f740d8 FUN_145f740d8 body=205 status=ok
// SIG undefined FUN_145f740d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f740d8(void)

{
  if ((DAT_14ca05067 & 2) == 0) {
    DAT_14ca05067 = DAT_14ca05067 | 2;
    _DAT_14ca05008 = L"FShadeLightSamplesCS";
    _DAT_14ca05020 = FUN_146826540;
    _DAT_14ca05028 = FUN_146825d77;
    _DAT_14ca05030 = FUN_146825fd6;
    _DAT_14ca05038 = FUN_1407e02ea;
    _DAT_14ca05040 = FUN_146826273;
    _DAT_14ca05018 = FUN_147227850;
    _DAT_14ca05058 = 0xffffffff000000e0;
    _DAT_14ca05060 = 8;
    DAT_14ca05064 = 0;
    _DAT_14ca05048 = &LAB_14722787a;
    FUN_145f741a6();
    FUN_1407e00cc(&DAT_14ca05000);
    return;
  }
  return;
}



// FUNCTION 145f741a6 FUN_145f741a6 body=123 status=ok
// SIG undefined FUN_145f741a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f741a6(void)

{
  _DAT_14ca082c0 = L"BASE";
  DAT_14ca082ea = 4;
  _DAT_14ca082c8 = FUN_140b35ae4();
  _DAT_14ca082d0 = DAT_14ca05010;
  _DAT_14ca082d8 = &LAB_14682652b;
  DAT_14ca05010 = &DAT_14ca082c0;
  DAT_14ca05065 = DAT_14ca05065 + '\x01';
  _DAT_14ca082e0 = 0x100000000;
  if (*(char *)(_DAT_14ca082c8 + 100) != '\0') {
    DAT_14ca05066 = DAT_14ca05066 + '\x01';
  }
  return;
}



// FUNCTION 145f74222 FUN_145f74222 body=261 status=ok
// SIG undefined FUN_145f74222(void)

void FUN_145f74222(void)

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
              0x110) < DAT_14ca073b0) {
    FUN_144b3d300(&DAT_14ca073b0);
    if (DAT_14ca073b0 == -1) {
      FUN_145f74328(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x310;
      local_58 = 0x30d;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca07330,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142dd415f);
      _Init_thread_footer(&DAT_14ca073b0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f74328 FUN_145f74328 body=226 status=ok
// SIG undefined FUN_145f74328(void)

longlong * FUN_145f74328(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462ebafc;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f7440c FUN_145f7440c body=138 status=ok
// SIG undefined FUN_145f7440c(void)

code * FUN_145f7440c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"UseShadingConfidence";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30800000317;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14722ff82;
}



// FUNCTION 145f74496 FUN_145f74496 body=138 status=ok
// SIG undefined FUN_145f74496(void)

code * FUN_145f74496(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWResolvedSpecularLighting";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float3>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2d800000311;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472301aa;
}



// FUNCTION 145f74520 FUN_145f74520 body=144 status=ok
// SIG undefined FUN_145f74520(void)

code * FUN_145f74520(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x100000030f;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_147230234;
}



// FUNCTION 145f745b0 FUN_145f745b0 body=292 status=ok
// SIG undefined FUN_145f745b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f745b0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca199e0) {
    FUN_144b3d300(&DAT_14ca199e0);
    if (DAT_14ca199e0 == -1) {
      FUN_145f7481e();
      FUN_145f746d4();
      FUN_140db5666(&DAT_14ca19938,0,&DAT_14ca198d0,L"FEmitEditorSelectionDepthPS",
                    L"/Engine/Private/Nanite/NaniteExportGBuffer.usf",L"EmitEditorSelectionDepthPS",
                    3,4,FUN_1472629fa,FUN_14726299a,&LAB_1462f2e70,&LAB_147262996,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca1b330);
      _DAT_14ca19938 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e45bbf);
      _Init_thread_footer(&DAT_14ca199e0);
    }
  }
  return &DAT_14ca19938;
}



// FUNCTION 145f746d4 FUN_145f746d4 body=205 status=ok
// SIG undefined FUN_145f746d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f746d4(void)

{
  if ((DAT_14ca19937 & 2) == 0) {
    DAT_14ca19937 = DAT_14ca19937 | 2;
    _DAT_14ca198d8 = L"FEmitEditorSelectionDepthPS";
    _DAT_14ca198f0 = FUN_146826540;
    _DAT_14ca198f8 = FUN_146825d77;
    _DAT_14ca19900 = FUN_146825fd6;
    _DAT_14ca19908 = FUN_1407e02ea;
    _DAT_14ca19910 = FUN_146826273;
    _DAT_14ca198e8 = FUN_147262968;
    _DAT_14ca19928 = 0xffffffff000000e0;
    _DAT_14ca19930 = 8;
    DAT_14ca19934 = 0;
    _DAT_14ca19918 = &LAB_147262992;
    FUN_145f747a2();
    FUN_1407e00cc(&DAT_14ca198d0);
    return;
  }
  return;
}



// FUNCTION 145f747a2 FUN_145f747a2 body=123 status=ok
// SIG undefined FUN_145f747a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f747a2(void)

{
  _DAT_14ca1bc80 = L"BASE";
  DAT_14ca1bcaa = 4;
  _DAT_14ca1bc88 = FUN_140b35ae4();
  _DAT_14ca1bc90 = DAT_14ca198e0;
  _DAT_14ca1bc98 = &LAB_14682652b;
  DAT_14ca198e0 = &DAT_14ca1bc80;
  DAT_14ca19935 = DAT_14ca19935 + '\x01';
  _DAT_14ca1bca0 = 0x100000000;
  if (*(char *)(_DAT_14ca1bc88 + 100) != '\0') {
    DAT_14ca19936 = DAT_14ca19936 + '\x01';
  }
  return;
}



// FUNCTION 145f7481e FUN_145f7481e body=261 status=ok
// SIG undefined FUN_145f7481e(void)

void FUN_145f7481e(void)

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
              0x110) < DAT_14ca1b3b0) {
    FUN_144b3d300(&DAT_14ca1b3b0);
    if (DAT_14ca1b3b0 == -1) {
      FUN_145f74924(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FNaniteSelectionOutlineParameters";
      local_38 = 0;
      local_50 = 400;
      local_58 = 0x10;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca1b330,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e5a593);
      _Init_thread_footer(&DAT_14ca1b3b0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f74924 FUN_145f74924 body=226 status=ok
// SIG undefined FUN_145f74924(void)

longlong * FUN_145f74924(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462f3692;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f74a08 FUN_145f74a08 body=138 status=ok
// SIG undefined FUN_145f74a08(void)

code * FUN_145f74a08(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PageConstants";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000018;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147265c2e;
}



// FUNCTION 145f74a92 FUN_145f74a92 body=138 status=ok
// SIG undefined FUN_145f74a92(void)

code * FUN_145f74a92(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ClusterPageData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"ByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x600000001a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147265ba4;
}



// FUNCTION 145f74b1c FUN_145f74b1c body=144 status=ok
// SIG undefined FUN_145f74b1c(void)

code * FUN_145f74b1c(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1000000012;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462f37a2;
}



// FUNCTION 145f74bac FUN_145f74bac body=292 status=ok
// SIG undefined FUN_145f74bac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f74bac(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca1b0f8) {
    FUN_144b3d300(&DAT_14ca1b0f8);
    if (DAT_14ca1b0f8 == -1) {
      FUN_145f74e1a();
      FUN_145f74cd0();
      FUN_140db5666(&DAT_14ca1b050,0,&DAT_14ca1afe8,L"FNanitePickingCS",
                    L"/Engine/Private/Nanite/NaniteVisualize.usf",L"PickingCS",5,1,FUN_1472642c8,
                    FUN_147264268,&LAB_1462f34dc,&LAB_147264264,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca1bb40);
      _DAT_14ca1b050 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e579be);
      _Init_thread_footer(&DAT_14ca1b0f8);
    }
  }
  return &DAT_14ca1b050;
}



// FUNCTION 145f74cd0 FUN_145f74cd0 body=205 status=ok
// SIG undefined FUN_145f74cd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f74cd0(void)

{
  if ((DAT_14ca1b04f & 2) == 0) {
    DAT_14ca1b04f = DAT_14ca1b04f | 2;
    _DAT_14ca1aff0 = L"FNanitePickingCS";
    _DAT_14ca1b008 = FUN_146826540;
    _DAT_14ca1b010 = FUN_146825d77;
    _DAT_14ca1b018 = FUN_146825fd6;
    _DAT_14ca1b020 = FUN_1407e02ea;
    _DAT_14ca1b028 = FUN_146826273;
    _DAT_14ca1b000 = FUN_147264236;
    _DAT_14ca1b040 = 0xffffffff000000e0;
    _DAT_14ca1b048 = 8;
    DAT_14ca1b04c = 0;
    _DAT_14ca1b030 = &LAB_147264260;
    FUN_145f74d9e();
    FUN_1407e00cc(&DAT_14ca1afe8);
    return;
  }
  return;
}



// FUNCTION 145f74d9e FUN_145f74d9e body=123 status=ok
// SIG undefined FUN_145f74d9e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f74d9e(void)

{
  _DAT_14ca1c1a8 = L"BASE";
  DAT_14ca1c1d2 = 4;
  _DAT_14ca1c1b0 = FUN_140b35ae4();
  _DAT_14ca1c1b8 = DAT_14ca1aff8;
  _DAT_14ca1c1c0 = &LAB_14682652b;
  DAT_14ca1aff8 = &DAT_14ca1c1a8;
  DAT_14ca1b04d = DAT_14ca1b04d + '\x01';
  _DAT_14ca1c1c8 = 0x100000000;
  if (*(char *)(_DAT_14ca1c1b0 + 100) != '\0') {
    DAT_14ca1b04e = DAT_14ca1b04e + '\x01';
  }
  return;
}



// FUNCTION 145f74e1a FUN_145f74e1a body=261 status=ok
// SIG undefined FUN_145f74e1a(void)

void FUN_145f74e1a(void)

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
              0x110) < DAT_14ca1bbc0) {
    FUN_144b3d300(&DAT_14ca1bbc0);
    if (DAT_14ca1bbc0 == -1) {
      FUN_1415a1934(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xf0;
      local_58 = 0xd2;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca1bb40,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e5b0cf);
      _Init_thread_footer(&DAT_14ca1bbc0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f74f20 FUN_145f74f20 body=138 status=ok
// SIG undefined FUN_145f74f20(void)

code * FUN_145f74f20(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ShadingMask";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd0000000e3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14726a2b6;
}



// FUNCTION 145f74faa FUN_145f74faa body=138 status=ok
// SIG undefined FUN_145f74faa(void)

code * FUN_145f74faa(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PageConstants";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000000d6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14726a790;
}



// FUNCTION 145f75034 FUN_145f75034 body=144 status=ok
// SIG undefined FUN_145f75034(void)

code * FUN_145f75034(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x90000000dc;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462f48c6;
}



// FUNCTION 145f750c4 FUN_145f750c4 body=292 status=ok
// SIG undefined FUN_145f750c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f750c4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca399d8) {
    FUN_144b3d300(&DAT_14ca399d8);
    if (DAT_14ca399d8 == -1) {
      FUN_145f75332();
      FUN_145f751e8();
      FUN_140db5666(&DAT_14ca39930,0,&DAT_14ca398c8,L"FRayTracingDebugInstanceOverlapVS",
                    L"/Engine/Private/RayTracing/RayTracingDebugInstanceOverlap.usf",
                    L"InstanceOverlapMainVS",0,1,FUN_1472b20a8,FUN_1472b2048,&LAB_146300de4,
                    &LAB_1472b2044,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca3ec10);
      _DAT_14ca39930 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f65bb8);
      _Init_thread_footer(&DAT_14ca399d8);
    }
  }
  return &DAT_14ca39930;
}



// FUNCTION 145f751e8 FUN_145f751e8 body=205 status=ok
// SIG undefined FUN_145f751e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f751e8(void)

{
  if ((DAT_14ca3992f & 2) == 0) {
    DAT_14ca3992f = DAT_14ca3992f | 2;
    _DAT_14ca398d0 = L"FRayTracingDebugInstanceOverlapVS";
    _DAT_14ca398e8 = FUN_146826540;
    _DAT_14ca398f0 = FUN_146825d77;
    _DAT_14ca398f8 = FUN_146825fd6;
    _DAT_14ca39900 = FUN_1407e02ea;
    _DAT_14ca39908 = FUN_146826273;
    _DAT_14ca398e0 = FUN_1472b2016;
    _DAT_14ca39920 = 0xffffffff000000e0;
    _DAT_14ca39928 = 8;
    DAT_14ca3992c = 0;
    _DAT_14ca39910 = &LAB_1472b2040;
    FUN_145f752b6();
    FUN_1407e00cc(&DAT_14ca398c8);
    return;
  }
  return;
}



// FUNCTION 145f752b6 FUN_145f752b6 body=123 status=ok
// SIG undefined FUN_145f752b6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f752b6(void)

{
  _DAT_14ca3f680 = L"BASE";
  DAT_14ca3f6aa = 4;
  _DAT_14ca3f688 = FUN_140b35ae4();
  _DAT_14ca3f690 = DAT_14ca398d8;
  _DAT_14ca3f698 = &LAB_14682652b;
  DAT_14ca398d8 = &DAT_14ca3f680;
  DAT_14ca3992d = DAT_14ca3992d + '\x01';
  _DAT_14ca3f6a0 = 0x100000000;
  if (*(char *)(_DAT_14ca3f688 + 100) != '\0') {
    DAT_14ca3992e = DAT_14ca3992e + '\x01';
  }
  return;
}



// FUNCTION 145f75332 FUN_145f75332 body=261 status=ok
// SIG undefined FUN_145f75332(void)

void FUN_145f75332(void)

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
              0x110) < DAT_14ca3ec90) {
    FUN_144b3d300(&DAT_14ca3ec90);
    if (DAT_14ca3ec90 == -1) {
      FUN_145f75438(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x1a6;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca3ec10,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f6f71a);
      _Init_thread_footer(&DAT_14ca3ec90);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f75438 FUN_145f75438 body=226 status=ok
// SIG undefined FUN_145f75438(void)

longlong * FUN_145f75438(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_146301b6e;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f7551c FUN_145f7551c body=138 status=ok
// SIG undefined FUN_145f7551c(void)

undefined1 * FUN_145f7551c(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1a7;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_1472bcd22;
}



// FUNCTION 145f755a6 FUN_145f755a6 body=138 status=ok
// SIG undefined FUN_145f755a6(void)

code * FUN_145f755a6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InstanceGPUSceneIndices";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000001a9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f75630;
}



// FUNCTION 145f75630 FUN_145f75630 body=144 status=ok
// SIG undefined FUN_145f75630(void)

code * FUN_145f75630(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x10000001a8;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145f7551c;
}



// FUNCTION 145f756c0 FUN_145f756c0 body=292 status=ok
// SIG undefined FUN_145f756c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f756c0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca410b8) {
    FUN_144b3d300(&DAT_14ca410b8);
    if (DAT_14ca410b8 == -1) {
      FUN_145f7592e();
      FUN_145f757e4();
      FUN_140db5666(&DAT_14ca41010,0,&DAT_14ca40fa8,L"FGenerateSkyLightVisibilityRaysCS",
                    L"/Engine/Private/RayTracing/GenerateSkyLightVisibilityRaysCS.usf",L"MainCS",5,1
                    ,FUN_1472c496e,FUN_1472c490e,&LAB_146302a74,&LAB_1472c490a,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca437f8);
      _DAT_14ca41010 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f7dc62);
      _Init_thread_footer(&DAT_14ca410b8);
    }
  }
  return &DAT_14ca41010;
}



// FUNCTION 145f757e4 FUN_145f757e4 body=205 status=ok
// SIG undefined FUN_145f757e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f757e4(void)

{
  if ((DAT_14ca4100f & 2) == 0) {
    DAT_14ca4100f = DAT_14ca4100f | 2;
    _DAT_14ca40fb0 = L"FGenerateSkyLightVisibilityRaysCS";
    _DAT_14ca40fc8 = FUN_146826540;
    _DAT_14ca40fd0 = FUN_146825d77;
    _DAT_14ca40fd8 = FUN_146825fd6;
    _DAT_14ca40fe0 = FUN_1407e02ea;
    _DAT_14ca40fe8 = FUN_146826273;
    _DAT_14ca40fc0 = FUN_1472c48dc;
    _DAT_14ca41000 = 0xffffffff000000e0;
    _DAT_14ca41008 = 8;
    DAT_14ca4100c = 0;
    _DAT_14ca40ff0 = &LAB_1472c4906;
    FUN_145f758b2();
    FUN_1407e00cc(&DAT_14ca40fa8);
    return;
  }
  return;
}



// FUNCTION 145f758b2 FUN_145f758b2 body=123 status=ok
// SIG undefined FUN_145f758b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f758b2(void)

{
  _DAT_14ca44670 = L"BASE";
  DAT_14ca4469a = 4;
  _DAT_14ca44678 = FUN_140b35ae4();
  _DAT_14ca44680 = DAT_14ca40fb8;
  _DAT_14ca44688 = &LAB_14682652b;
  DAT_14ca40fb8 = &DAT_14ca44670;
  DAT_14ca4100d = DAT_14ca4100d + '\x01';
  _DAT_14ca44690 = 0x100000000;
  if (*(char *)(_DAT_14ca44678 + 100) != '\0') {
    DAT_14ca4100e = DAT_14ca4100e + '\x01';
  }
  return;
}



// FUNCTION 145f7592e FUN_145f7592e body=261 status=ok
// SIG undefined FUN_145f7592e(void)

void FUN_145f7592e(void)

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
              0x110) < DAT_14ca43878) {
    FUN_144b3d300(&DAT_14ca43878);
    if (DAT_14ca43878 == -1) {
      FUN_145f75a34(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x70;
      local_58 = 0x13b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca437f8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142fafa1c);
      _Init_thread_footer(&DAT_14ca43878);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f75a34 FUN_145f75a34 body=226 status=ok
// SIG undefined FUN_145f75a34(void)

longlong * FUN_145f75a34(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_145e2a91e;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f75b18 FUN_145f75b18 body=130 status=ok
// SIG undefined FUN_145f75b18(void)

undefined1 * FUN_145f75b18(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SamplesPerPixel";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x13c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1472cb410;
}



// FUNCTION 145f75b9a FUN_145f75b9a body=144 status=ok
// SIG undefined FUN_145f75b9a(void)

code * FUN_145f75b9a(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x4000000140;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145f75c2a;
}



// FUNCTION 145f75c2a FUN_145f75c2a body=146 status=ok
// SIG undefined FUN_145f75c2a(void)

code * FUN_145f75c2a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145d4cc50();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SkyLightData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FSkyLightData";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000013f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca40de8;
  return FUN_146303950;
}



// FUNCTION 145f75cbc FUN_145f75cbc body=292 status=ok
// SIG undefined FUN_145f75cbc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f75cbc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca41640) {
    FUN_144b3d300(&DAT_14ca41640);
    if (DAT_14ca41640 == -1) {
      FUN_145f75f2a();
      FUN_145f75de0();
      FUN_140db5666(&DAT_14ca41598,0,&DAT_14ca41530,L"FRectLightAtlasDebugInfoCS",
                    L"/Engine/Private/RectLightAtlas.usf",L"MainCS",5,1,FUN_1472c4dec,FUN_1472c4d8c,
                    &LAB_146302a84,&LAB_1472c4d88,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca43a18)
      ;
      _DAT_14ca41598 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f804ef);
      _Init_thread_footer(&DAT_14ca41640);
    }
  }
  return &DAT_14ca41598;
}



// FUNCTION 145f75de0 FUN_145f75de0 body=205 status=ok
// SIG undefined FUN_145f75de0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f75de0(void)

{
  if ((DAT_14ca41597 & 2) == 0) {
    DAT_14ca41597 = DAT_14ca41597 | 2;
    _DAT_14ca41538 = L"FRectLightAtlasDebugInfoCS";
    _DAT_14ca41550 = FUN_146826540;
    _DAT_14ca41558 = FUN_146825d77;
    _DAT_14ca41560 = FUN_146825fd6;
    _DAT_14ca41568 = FUN_1407e02ea;
    _DAT_14ca41570 = FUN_146826273;
    _DAT_14ca41548 = FUN_1472c4d5a;
    _DAT_14ca41588 = 0xffffffff000000e0;
    _DAT_14ca41590 = 8;
    DAT_14ca41594 = 0;
    _DAT_14ca41578 = &LAB_1472c4d84;
    FUN_145f75eae();
    FUN_1407e00cc(&DAT_14ca41530);
    return;
  }
  return;
}



// FUNCTION 145f75eae FUN_145f75eae body=123 status=ok
// SIG undefined FUN_145f75eae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f75eae(void)

{
  _DAT_14ca44700 = L"BASE";
  DAT_14ca4472a = 4;
  _DAT_14ca44708 = FUN_140b35ae4();
  _DAT_14ca44710 = DAT_14ca41540;
  _DAT_14ca44718 = &LAB_14682652b;
  DAT_14ca41540 = &DAT_14ca44700;
  DAT_14ca41595 = DAT_14ca41595 + '\x01';
  _DAT_14ca44720 = 0x100000000;
  if (*(char *)(_DAT_14ca44708 + 100) != '\0') {
    DAT_14ca41596 = DAT_14ca41596 + '\x01';
  }
  return;
}



// FUNCTION 145f75f2a FUN_145f75f2a body=261 status=ok
// SIG undefined FUN_145f75f2a(void)

void FUN_145f75f2a(void)

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
              0x110) < DAT_14ca43a98) {
    FUN_144b3d300(&DAT_14ca43a98);
    if (DAT_14ca43a98 == -1) {
      FUN_1415a1a18(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xa0;
      local_58 = 300;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca43a18,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142fafd67);
      _Init_thread_footer(&DAT_14ca43a98);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f76030 FUN_145f76030 body=138 status=ok
// SIG undefined FUN_145f76030(void)

code * FUN_145f76030(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"AtlasSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3800000137;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472cbbca;
}



// FUNCTION 145f760ba FUN_145f760ba body=138 status=ok
// SIG undefined FUN_145f760ba(void)

code * FUN_145f760ba(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HorizonCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1400000131;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472cbe7c;
}



// FUNCTION 145f76144 FUN_145f76144 body=144 status=ok
// SIG undefined FUN_145f76144(void)

code * FUN_145f76144(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x700000013d;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1472cb9a2;
}



// FUNCTION 145f761d4 FUN_145f761d4 body=205 status=ok
// SIG undefined FUN_145f761d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f761d4(void)

{
  if ((DAT_14ca5d21f & 2) == 0) {
    DAT_14ca5d21f = DAT_14ca5d21f | 2;
    _DAT_14ca5d1c0 = L"FRenderSkyViewLutCS";
    _DAT_14ca5d1d8 = FUN_146826540;
    _DAT_14ca5d1e0 = FUN_146825d77;
    _DAT_14ca5d1e8 = FUN_146825fd6;
    _DAT_14ca5d1f0 = FUN_1407e02ea;
    _DAT_14ca5d1f8 = FUN_146826273;
    _DAT_14ca5d1d0 = FUN_147315ef6;
    _DAT_14ca5d210 = 0xffffffff000000e0;
    _DAT_14ca5d218 = 8;
    DAT_14ca5d21c = 0;
    _DAT_14ca5d200 = &LAB_147315f20;
    FUN_145f762a2();
    FUN_1407e00cc(&DAT_14ca5d1b8);
    return;
  }
  return;
}



// FUNCTION 145f762a2 FUN_145f762a2 body=123 status=ok
// SIG undefined FUN_145f762a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f762a2(void)

{
  _DAT_14ca5fa60 = L"BASE";
  DAT_14ca5fa8a = 4;
  _DAT_14ca5fa68 = FUN_140b35ae4();
  _DAT_14ca5fa70 = DAT_14ca5d1c8;
  _DAT_14ca5fa78 = &LAB_14682652b;
  DAT_14ca5d1c8 = &DAT_14ca5fa60;
  DAT_14ca5d21d = DAT_14ca5d21d + '\x01';
  _DAT_14ca5fa80 = 0x100000000;
  if (*(char *)(_DAT_14ca5fa68 + 100) != '\0') {
    DAT_14ca5d21e = DAT_14ca5d21e + '\x01';
  }
  return;
}



// FUNCTION 145f7631e FUN_145f7631e body=138 status=ok
// SIG undefined FUN_145f7631e(void)

code * FUN_145f7631e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VolumetricCloudSkyAOTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float2>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5800000388;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14731b2f4;
}



// FUNCTION 145f763a8 FUN_145f763a8 body=144 status=ok
// SIG undefined FUN_145f763a8(void)

code * FUN_145f763a8(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x2000000382;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14630c16a;
}



// FUNCTION 145f76438 FUN_145f76438 body=144 status=ok
// SIG undefined FUN_145f76438(void)

code * FUN_145f76438(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14494cd32();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Light1Shadow";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FVolumeShadowingShaderParametersGlobal1";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xa00000038f;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14630c0da;
}



// FUNCTION 145f764c8 FUN_145f764c8 body=205 status=ok
// SIG undefined FUN_145f764c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f764c8(void)

{
  if ((DAT_14ca5d347 & 2) == 0) {
    DAT_14ca5d347 = DAT_14ca5d347 | 2;
    _DAT_14ca5d2e8 = L"FRenderCameraAerialPerspectiveVolumeCS";
    _DAT_14ca5d300 = FUN_146826540;
    _DAT_14ca5d308 = FUN_146825d77;
    _DAT_14ca5d310 = FUN_146825fd6;
    _DAT_14ca5d318 = FUN_1407e02ea;
    _DAT_14ca5d320 = FUN_146826273;
    _DAT_14ca5d2f8 = FUN_147315fb8;
    _DAT_14ca5d338 = 0xffffffff000000e0;
    _DAT_14ca5d340 = 8;
    DAT_14ca5d344 = 0;
    _DAT_14ca5d328 = &LAB_147315fe2;
    FUN_145f76596();
    FUN_1407e00cc(&DAT_14ca5d2e0);
    return;
  }
  return;
}



// FUNCTION 145f76596 FUN_145f76596 body=123 status=ok
// SIG undefined FUN_145f76596(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f76596(void)

{
  _DAT_14ca5fa90 = L"BASE";
  DAT_14ca5faba = 4;
  _DAT_14ca5fa98 = FUN_140b35ae4();
  _DAT_14ca5faa0 = DAT_14ca5d2f0;
  _DAT_14ca5faa8 = &LAB_14682652b;
  DAT_14ca5d2f0 = &DAT_14ca5fa90;
  DAT_14ca5d345 = DAT_14ca5d345 + '\x01';
  _DAT_14ca5fab0 = 0x100000000;
  if (*(char *)(_DAT_14ca5fa98 + 100) != '\0') {
    DAT_14ca5d346 = DAT_14ca5d346 + '\x01';
  }
  return;
}



// FUNCTION 145f76612 FUN_145f76612 body=138 status=ok
// SIG undefined FUN_145f76612(void)

code * FUN_145f76612(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VolumetricCloudShadowStrength0";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd8000003d0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14731b634;
}



// FUNCTION 145f7669c FUN_145f7669c body=144 status=ok
// SIG undefined FUN_145f7669c(void)

code * FUN_145f7669c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar4) = L"VirtualShadowMap";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FVirtualShadowMapSamplingParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xc0000003cd;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14630c39e;
}



// FUNCTION 145f7672c FUN_145f7672c body=144 status=ok
// SIG undefined FUN_145f7672c(void)

code * FUN_145f7672c(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000003ba;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca5cb58;
  return FUN_14630c54e;
}



// FUNCTION 145f767bc FUN_145f767bc body=292 status=ok
// SIG undefined FUN_145f767bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f767bc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca5e100) {
    FUN_144b3d300(&DAT_14ca5e100);
    if (DAT_14ca5e100 == -1) {
      FUN_145f76a2a();
      FUN_145f768e0();
      FUN_140db5666(&DAT_14ca5e058,0,&DAT_14ca5dff0,L"FSubstrateDBufferPassCS",
                    L"/Engine/Private/Substrate/SubstrateDBuffer.usf",L"MainCS",5,3,FUN_14731763e,
                    FUN_1473175de,FUN_14630a748,&LAB_1473175da,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca5f408);
      _DAT_14ca5e058 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14309a16c);
      _Init_thread_footer(&DAT_14ca5e100);
    }
  }
  return &DAT_14ca5e058;
}



// FUNCTION 145f768e0 FUN_145f768e0 body=205 status=ok
// SIG undefined FUN_145f768e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f768e0(void)

{
  if ((DAT_14ca5e057 & 2) == 0) {
    DAT_14ca5e057 = DAT_14ca5e057 | 2;
    _DAT_14ca5dff8 = L"FSubstrateDBufferPassCS";
    _DAT_14ca5e010 = FUN_146826540;
    _DAT_14ca5e018 = FUN_146825d77;
    _DAT_14ca5e020 = FUN_146825fd6;
    _DAT_14ca5e028 = FUN_1407e02ea;
    _DAT_14ca5e030 = FUN_146826273;
    _DAT_14ca5e008 = FUN_1473175ac;
    _DAT_14ca5e048 = 0xffffffff000000e0;
    _DAT_14ca5e050 = 8;
    DAT_14ca5e054 = 0;
    _DAT_14ca5e038 = &LAB_1473175d6;
    FUN_145f769ae();
    FUN_1407e00cc(&DAT_14ca5dff0);
    return;
  }
  return;
}



// FUNCTION 145f769ae FUN_145f769ae body=123 status=ok
// SIG undefined FUN_145f769ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f769ae(void)

{
  _DAT_14ca5fcd8 = L"BASE";
  DAT_14ca5fd02 = 4;
  _DAT_14ca5fce0 = FUN_140b35ae4();
  _DAT_14ca5fce8 = DAT_14ca5e000;
  _DAT_14ca5fcf0 = &LAB_14682652b;
  DAT_14ca5e000 = &DAT_14ca5fcd8;
  DAT_14ca5e055 = DAT_14ca5e055 + '\x01';
  _DAT_14ca5fcf8 = 0x100000000;
  if (*(char *)(_DAT_14ca5fce0 + 100) != '\0') {
    DAT_14ca5e056 = DAT_14ca5e056 + '\x01';
  }
  return;
}



// FUNCTION 145f76a2a FUN_145f76a2a body=261 status=ok
// SIG undefined FUN_145f76a2a(void)

void FUN_145f76a2a(void)

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
              0x110) < DAT_14ca5f488) {
    FUN_144b3d300(&DAT_14ca5f488);
    if (DAT_14ca5f488 == -1) {
      FUN_145f76b30(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xc0;
      local_58 = 0x387;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca5f408,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14309e8ab);
      _Init_thread_footer(&DAT_14ca5f488);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f76b30 FUN_145f76b30 body=226 status=ok
// SIG undefined FUN_145f76b30(void)

longlong * FUN_145f76b30(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_14630d122;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f76c14 FUN_145f76c14 body=138 status=ok
// SIG undefined FUN_145f76c14(void)

code * FUN_145f76c14(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"FirstSliceStoringSubstrateSSSData";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc0000038a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14731dcd6;
}



// FUNCTION 145f76c9e FUN_145f76c9e body=138 status=ok
// SIG undefined FUN_145f76c9e(void)

code * FUN_145f76c9e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x880000038e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14731dc4c;
}



// FUNCTION 145f76d28 FUN_145f76d28 body=144 status=ok
// SIG undefined FUN_145f76d28(void)

code * FUN_145f76d28(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x200000038c;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14630d232;
}



// FUNCTION 145f76db8 FUN_145f76db8 body=292 status=ok
// SIG undefined FUN_145f76db8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f76db8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca60168) {
    FUN_144b3d300(&DAT_14ca60168);
    if (DAT_14ca60168 == -1) {
      FUN_145f77026();
      FUN_145f76edc();
      FUN_140db5666(&DAT_14ca600c0,0,&DAT_14ca60058,L"FSubstrateSystemInfoCS",
                    L"/Engine/Private/Substrate/SubstrateVisualize.usf",L"MainCS",5,1,FUN_14732112a,
                    FUN_1473210ca,&LAB_14630dcae,&LAB_1473210c6,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca62768);
      _DAT_14ca600c0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430a887c);
      _Init_thread_footer(&DAT_14ca60168);
    }
  }
  return &DAT_14ca600c0;
}



// FUNCTION 145f76edc FUN_145f76edc body=205 status=ok
// SIG undefined FUN_145f76edc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f76edc(void)

{
  if ((DAT_14ca600bf & 2) == 0) {
    DAT_14ca600bf = DAT_14ca600bf | 2;
    _DAT_14ca60060 = L"FSubstrateSystemInfoCS";
    _DAT_14ca60078 = FUN_146826540;
    _DAT_14ca60080 = FUN_146825d77;
    _DAT_14ca60088 = FUN_146825fd6;
    _DAT_14ca60090 = FUN_1407e02ea;
    _DAT_14ca60098 = FUN_146826273;
    _DAT_14ca60070 = FUN_147321098;
    _DAT_14ca600b0 = 0xffffffff000000e0;
    _DAT_14ca600b8 = 8;
    DAT_14ca600bc = 0;
    _DAT_14ca600a0 = &LAB_1473210c2;
    FUN_145f76faa();
    FUN_1407e00cc(&DAT_14ca60058);
    return;
  }
  return;
}



// FUNCTION 145f76faa FUN_145f76faa body=123 status=ok
// SIG undefined FUN_145f76faa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f76faa(void)

{
  _DAT_14ca63388 = L"BASE";
  DAT_14ca633b2 = 4;
  _DAT_14ca63390 = FUN_140b35ae4();
  _DAT_14ca63398 = DAT_14ca60068;
  _DAT_14ca633a0 = &LAB_14682652b;
  DAT_14ca60068 = &DAT_14ca63388;
  DAT_14ca600bd = DAT_14ca600bd + '\x01';
  _DAT_14ca633a8 = 0x100000000;
  if (*(char *)(_DAT_14ca63390 + 100) != '\0') {
    DAT_14ca600be = DAT_14ca600be + '\x01';
  }
  return;
}



// FUNCTION 145f77026 FUN_145f77026 body=261 status=ok
// SIG undefined FUN_145f77026(void)

void FUN_145f77026(void)

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
              0x110) < DAT_14ca627e8) {
    FUN_144b3d300(&DAT_14ca627e8);
    if (DAT_14ca627e8 == -1) {
      FUN_1415a2110(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xf0;
      local_58 = 0x8a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca62768,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430bc104);
      _Init_thread_footer(&DAT_14ca627e8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f7712c FUN_145f7712c body=138 status=ok
// SIG undefined FUN_145f7712c(void)

code * FUN_145f7712c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ViewsMaxBytesPerPixel";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2c00000096;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1473242f8;
}



// FUNCTION 145f771b6 FUN_145f771b6 body=138 status=ok
// SIG undefined FUN_145f771b6(void)

code * FUN_145f771b6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MaterialBufferAllocationInBytes";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3400000098;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14732426e;
}



// FUNCTION 145f77240 FUN_145f77240 body=144 status=ok
// SIG undefined FUN_145f77240(void)

code * FUN_145f77240(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x700000009e;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14630e592;
}



// FUNCTION 145f772d0 FUN_145f772d0 body=292 status=ok
// SIG undefined FUN_145f772d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f772d0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca67390) {
    FUN_144b3d300(&DAT_14ca67390);
    if (DAT_14ca67390 == -1) {
      FUN_145f7753e();
      FUN_145f773f4();
      FUN_140db5666(&DAT_14ca672e8,0,&DAT_14ca67280,
                    L"FVirtualShadowMapProjectionCompositeFromMaskBitsPS",
                    L"/Engine/Private/VirtualShadowMaps/VirtualShadowMapProjectionComposite.usf",
                    L"VirtualShadowMapCompositeFromMaskBitsPS",3,1,FUN_14732d53c,FUN_14732d4dc,
                    &LAB_14732d4ae,&LAB_14732d4aa,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca689f8)
      ;
      _DAT_14ca672e8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430e4dad);
      _Init_thread_footer(&DAT_14ca67390);
    }
  }
  return &DAT_14ca672e8;
}



// FUNCTION 145f773f4 FUN_145f773f4 body=205 status=ok
// SIG undefined FUN_145f773f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f773f4(void)

{
  if ((DAT_14ca672e7 & 2) == 0) {
    DAT_14ca672e7 = DAT_14ca672e7 | 2;
    _DAT_14ca67288 = L"FVirtualShadowMapProjectionCompositeFromMaskBitsPS";
    _DAT_14ca672a0 = FUN_146826540;
    _DAT_14ca672a8 = FUN_146825d77;
    _DAT_14ca672b0 = FUN_146825fd6;
    _DAT_14ca672b8 = FUN_1407e02ea;
    _DAT_14ca672c0 = FUN_146826273;
    _DAT_14ca67298 = FUN_14732d47c;
    _DAT_14ca672d8 = 0xffffffff000000e0;
    _DAT_14ca672e0 = 8;
    DAT_14ca672e4 = 0;
    _DAT_14ca672c8 = &LAB_14732d4a6;
    FUN_145f774c2();
    FUN_1407e00cc(&DAT_14ca67280);
    return;
  }
  return;
}



// FUNCTION 145f774c2 FUN_145f774c2 body=123 status=ok
// SIG undefined FUN_145f774c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f774c2(void)

{
  _DAT_14ca691f8 = L"BASE";
  DAT_14ca69222 = 4;
  _DAT_14ca69200 = FUN_140b35ae4();
  _DAT_14ca69208 = DAT_14ca67290;
  _DAT_14ca69210 = &LAB_14682652b;
  DAT_14ca67290 = &DAT_14ca691f8;
  DAT_14ca672e5 = DAT_14ca672e5 + '\x01';
  _DAT_14ca69218 = 0x100000000;
  if (*(char *)(_DAT_14ca69200 + 100) != '\0') {
    DAT_14ca672e6 = DAT_14ca672e6 + '\x01';
  }
  return;
}



// FUNCTION 145f7753e FUN_145f7753e body=261 status=ok
// SIG undefined FUN_145f7753e(void)

void FUN_145f7753e(void)

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
              0x110) < DAT_14ca68a78) {
    FUN_144b3d300(&DAT_14ca68a78);
    if (DAT_14ca68a78 == -1) {
      FUN_145f77644(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x170;
      local_58 = 0x29c;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca689f8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430e7309);
      _Init_thread_footer(&DAT_14ca68a78);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f77644 FUN_145f77644 body=226 status=ok
// SIG undefined FUN_145f77644(void)

longlong * FUN_145f77644(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1463139d4;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f77728 FUN_145f77728 body=138 status=ok
// SIG undefined FUN_145f77728(void)

code * FUN_145f77728(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ShadowMaskBits";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<uint4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x48000002a2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146313a5c;
}



// FUNCTION 145f777b2 FUN_145f777b2 body=138 status=ok
// SIG undefined FUN_145f777b2(void)

code * FUN_145f777b2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CompositeVirtualShadowMapId";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x60000002a4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147332388;
}



// FUNCTION 145f7783c FUN_145f7783c body=144 status=ok
// SIG undefined FUN_145f7783c(void)

code * FUN_145f7783c(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x200000029f;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_146313b74;
}



// FUNCTION 145f778cc FUN_145f778cc body=205 status=ok
// SIG undefined FUN_145f778cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f778cc(void)

{
  if ((DAT_14caa05e7 & 2) == 0) {
    DAT_14caa05e7 = DAT_14caa05e7 | 2;
    _DAT_14caa0588 = L"FRDGMemcpyCS";
    _DAT_14caa05a0 = FUN_146826540;
    _DAT_14caa05a8 = FUN_146825d77;
    _DAT_14caa05b0 = FUN_146825fd6;
    _DAT_14caa05b8 = FUN_1407e02ea;
    _DAT_14caa05c0 = FUN_146826273;
    _DAT_14caa0598 = FUN_14744271a;
    _DAT_14caa05d8 = 0xffffffff000000e0;
    _DAT_14caa05e0 = 8;
    DAT_14caa05e4 = 0;
    _DAT_14caa05c8 = &LAB_147442744;
    FUN_145f7799a();
    FUN_1407e00cc(&DAT_14caa0580);
    return;
  }
  return;
}



// FUNCTION 145f7799a FUN_145f7799a body=133 status=ok
// SIG undefined FUN_145f7799a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f7799a(void)

{
  _DAT_14caa11e8 = L"BASE";
  DAT_14caa1212 = 4;
  FUN_145d1253e();
  _DAT_14caa11f8 = DAT_14caa0590;
  _DAT_14caa11f0 = &DAT_14caa1150;
  _DAT_14caa1200 = &LAB_14682652b;
  DAT_14caa0590 = &DAT_14caa11e8;
  DAT_14caa05e5 = DAT_14caa05e5 + '\x01';
  _DAT_14caa1208 = 0x100000000;
  if (DAT_14caa11b4 != '\0') {
    DAT_14caa05e6 = DAT_14caa05e6 + '\x01';
  }
  return;
}



// FUNCTION 145f77a20 FUN_145f77a20 body=226 status=ok
// SIG undefined FUN_145f77a20(void)

longlong * FUN_145f77a20(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_146321216;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f77b04 FUN_145f77b04 body=138 status=ok
// SIG undefined FUN_145f77b04(void)

code * FUN_145f77b04(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SrcStructuredBuffer1x";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7000000109;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14744382e;
}



// FUNCTION 145f77b8e FUN_145f77b8e body=138 status=ok
// SIG undefined FUN_145f77b8e(void)

code * FUN_145f77b8e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SrcBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000105;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f77c18;
}



// FUNCTION 145f77c18 FUN_145f77c18 body=140 status=ok
// SIG undefined FUN_145f77c18(void)

undefined1 * FUN_145f77c18(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145d122e4();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Common";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FRDGByteBufferShader::FParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x104;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14caa0d00;
  return &LAB_147443942;
}



// FUNCTION 145f77ca4 FUN_145f77ca4 body=290 status=ok
// SIG undefined FUN_145f77ca4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f77ca4(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb32f20) {
    FUN_144b3d300(&DAT_14cb32f20);
    if (DAT_14cb32f20 == -1) {
      uVar1 = FUN_145f77f10();
      FUN_145f77dc6();
      FUN_140db5666(&DAT_14cb32e78,0,&DAT_14cb32e10,L"FNiagaraCopySVTToDenseBufferCS",
                    L"/Plugin/FX/Niagara/Private/NiagaraSVTToDenseBuffer.usf",L"PerformCopyCS",5,1,
                    FUN_14804eaaa,FUN_14804ea50,&LAB_14804ea4c,&LAB_14804ea48,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,uVar1);
      _DAT_14cb32e78 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1438fb622);
      _Init_thread_footer(&DAT_14cb32f20);
    }
  }
  return &DAT_14cb32e78;
}



// FUNCTION 145f77dc6 FUN_145f77dc6 body=206 status=ok
// SIG undefined FUN_145f77dc6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f77dc6(void)

{
  if ((DAT_14cb32e77 & 2) == 0) {
    DAT_14cb32e77 = DAT_14cb32e77 | 2;
    _DAT_14cb32e18 = L"FNiagaraCopySVTToDenseBufferCS";
    _DAT_14cb32e30 = FUN_146826540;
    _DAT_14cb32e38 = FUN_146825d77;
    _DAT_14cb32e40 = FUN_146825fd6;
    _DAT_14cb32e48 = FUN_1407e02ea;
    _DAT_14cb32e50 = FUN_146826273;
    _DAT_14cb32e28 = FUN_14804ea1a;
    _DAT_14cb32e68 = 0xffffffff000000e0;
    _DAT_14cb32e70 = 8;
    DAT_14cb32e74 = 0;
    _DAT_14cb32e58 = &LAB_14804ea44;
    FUN_145f77e94();
    FUN_1407e00cc(&DAT_14cb32e10);
  }
  return &DAT_14cb32e10;
}



// FUNCTION 145f77e94 FUN_145f77e94 body=123 status=ok
// SIG undefined FUN_145f77e94(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f77e94(void)

{
  _DAT_14cb35af8 = L"BASE";
  DAT_14cb35b22 = 4;
  _DAT_14cb35b00 = FUN_140b35ae4();
  _DAT_14cb35b08 = DAT_14cb32e20;
  _DAT_14cb35b10 = &LAB_14682652b;
  DAT_14cb32e20 = &DAT_14cb35af8;
  DAT_14cb32e75 = DAT_14cb32e75 + '\x01';
  _DAT_14cb35b18 = 0x100000000;
  if (*(char *)(_DAT_14cb35b00 + 100) != '\0') {
    DAT_14cb32e76 = DAT_14cb32e76 + '\x01';
  }
  return;
}



// FUNCTION 145f77f10 FUN_145f77f10 body=268 status=ok
// SIG undefined FUN_145f77f10(void)

undefined * FUN_145f77f10(void)

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
              0x110) < DAT_14cb346e0) {
    FUN_144b3d300(&DAT_14cb346e0);
    if (DAT_14cb346e0 == -1) {
      FUN_145f7801e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0xf;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb34660,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1438fb888);
      _Init_thread_footer(&DAT_14cb346e0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cb34660;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f7801e FUN_145f7801e body=226 status=ok
// SIG undefined FUN_145f7801e(void)

longlong * FUN_145f7801e(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_146462590;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f78102 FUN_145f78102 body=138 status=ok
// SIG undefined FUN_145f78102(void)

code * FUN_145f78102(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SparseVolumeTexturePageTable";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture3D<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000012;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480553f8;
}



// FUNCTION 145f7818c FUN_145f7818c body=138 status=ok
// SIG undefined FUN_145f7818c(void)

code * FUN_145f7818c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PackedSVTUniforms1";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000015;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f78216;
}



// FUNCTION 145f78216 FUN_145f78216 body=138 status=ok
// SIG undefined FUN_145f78216(void)

code * FUN_145f78216(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PackedSVTUniforms0";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000014;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146462618;
}



// FUNCTION 145f782a0 FUN_145f782a0 body=290 status=ok
// SIG undefined FUN_145f782a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f782a0(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbfacf8) {
    FUN_144b3d300(&DAT_14cbfacf8);
    if (DAT_14cbfacf8 == -1) {
      uVar1 = FUN_145f7850c();
      FUN_145f783c2();
      FUN_140db5666(&DAT_14cbfac50,0,&DAT_14cbfabe8,L"FTransferVelocityPassCS",
                    L"/Engine/Private/HairStrands/HairStrandsInterpolation.usf",L"MainCS",5,1,
                    FUN_149099db2,FUN_149099d58,&LAB_14667c882,&LAB_149099d54,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,uVar1);
      _DAT_14cbfac50 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14443e7e4);
      _Init_thread_footer(&DAT_14cbfacf8);
    }
  }
  return &DAT_14cbfac50;
}



// FUNCTION 145f783c2 FUN_145f783c2 body=206 status=ok
// SIG undefined FUN_145f783c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f783c2(void)

{
  if ((DAT_14cbfac4f & 2) == 0) {
    DAT_14cbfac4f = DAT_14cbfac4f | 2;
    _DAT_14cbfabf0 = L"FTransferVelocityPassCS";
    _DAT_14cbfac08 = FUN_146826540;
    _DAT_14cbfac10 = FUN_146825d77;
    _DAT_14cbfac18 = FUN_146825fd6;
    _DAT_14cbfac20 = FUN_1407e02ea;
    _DAT_14cbfac28 = FUN_146826273;
    _DAT_14cbfac00 = FUN_149099d26;
    _DAT_14cbfac40 = 0xffffffff000000e0;
    _DAT_14cbfac48 = 8;
    DAT_14cbfac4c = 0;
    _DAT_14cbfac30 = &LAB_149099d50;
    FUN_145f78490();
    FUN_1407e00cc(&DAT_14cbfabe8);
  }
  return &DAT_14cbfabe8;
}



// FUNCTION 145f78490 FUN_145f78490 body=123 status=ok
// SIG undefined FUN_145f78490(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f78490(void)

{
  _DAT_14cbfd5b8 = L"BASE";
  DAT_14cbfd5e2 = 4;
  _DAT_14cbfd5c0 = FUN_140b35ae4();
  _DAT_14cbfd5c8 = DAT_14cbfabf8;
  _DAT_14cbfd5d0 = &LAB_14682652b;
  DAT_14cbfabf8 = &DAT_14cbfd5b8;
  DAT_14cbfac4d = DAT_14cbfac4d + '\x01';
  _DAT_14cbfd5d8 = 0x100000000;
  if (*(char *)(_DAT_14cbfd5c0 + 100) != '\0') {
    DAT_14cbfac4e = DAT_14cbfac4e + '\x01';
  }
  return;
}



// FUNCTION 145f7850c FUN_145f7850c body=268 status=ok
// SIG undefined FUN_145f7850c(void)

undefined * FUN_145f7850c(void)

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
              0x110) < DAT_14cbfc9e8) {
    FUN_144b3d300(&DAT_14cbfc9e8);
    if (DAT_14cbfc9e8 == -1) {
      FUN_145f7861a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0xb3;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cbfc968,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14444941e);
      _Init_thread_footer(&DAT_14cbfc9e8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cbfc968;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f7861a FUN_145f7861a body=226 status=ok
// SIG undefined FUN_145f7861a(void)

longlong * FUN_145f7861a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_14667d0bc;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f786fe FUN_145f786fe body=138 status=ok
// SIG undefined FUN_145f786fe(void)

code * FUN_145f786fe(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PointOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000b5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14667d144;
}



// FUNCTION 145f78788 FUN_145f78788 body=138 status=ok
// SIG undefined FUN_145f78788(void)

code * FUN_145f78788(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TotalPointCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000b6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f786fe;
}



// FUNCTION 145f78812 FUN_145f78812 body=138 status=ok
// SIG undefined FUN_145f78812(void)

code * FUN_145f78812(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"ByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000000b7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f78788;
}



// FUNCTION 145f7889c FUN_145f7889c body=348 status=ok
// SIG undefined FUN_145f7889c(void)

void FUN_145f7889c(void)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  float fVar4;
  undefined1 auStack_c8 [40];
  ulonglong local_a0 [17];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar2 = FUN_14001cc68(0xb0,0x10);
  FUN_145f789fa(uVar2,1,DAT_14c760d9c);
  lVar1 = DAT_14ca811c8;
  bVar3 = DAT_14ca811c8 != 0;
  DAT_14ca811c8 = uVar2;
  if (bVar3) {
    FUN_145c13958(lVar1);
    FUN_1400020a8(lVar1);
  }
  uVar2 = FUN_14001cc68(0xb0,0x10);
  FUN_145f78aac(uVar2,2,DAT_14c760da0);
  lVar1 = DAT_14ca811d0;
  bVar3 = DAT_14ca811d0 != 0;
  DAT_14ca811d0 = uVar2;
  if (bVar3) {
    FUN_145c13a58(lVar1);
    FUN_1400020a8(lVar1);
  }
  FUN_1405d5a96(local_a0);
  if ((DAT_14c760d78 < 1) ||
     (fVar4 = (float)(int)(((float)local_a0[0] * 9.313226e-10 + 2.0 + -1.0) * 0.5),
     fVar4 + fVar4 < (float)DAT_14c760d78)) {
    DAT_14c760d74 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f789fa FUN_145f789fa body=178 status=ok
// SIG undefined FUN_145f789fa(void)

undefined4 * FUN_145f789fa(undefined4 *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  
  *param_1 = param_2;
  InitializeSRWLock((PSRWLOCK)(param_1 + 2));
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[0x12] = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0x13) = 0xffffffff00000080;
  param_1[0x15] = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  param_1[0x2a] = param_3;
  param_1[0x2b] = 0;
  cVar1 = FUN_1415a2419();
  if ((((cVar1 == '\0') && (DAT_14ca80860 != 0)) && (param_3 != 0)) && (DAT_14ca84df4 == 0x10de)) {
    FUN_146f37e98(param_1 + 0x26,&DAT_14a37d730,param_3);
  }
  return param_1;
}



// FUNCTION 145f78aac FUN_145f78aac body=178 status=ok
// SIG undefined FUN_145f78aac(void)

undefined4 * FUN_145f78aac(undefined4 *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  
  *param_1 = param_2;
  InitializeSRWLock((PSRWLOCK)(param_1 + 2));
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[0x12] = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0x13) = 0xffffffff00000080;
  param_1[0x15] = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  param_1[0x2a] = param_3;
  param_1[0x2b] = 0;
  cVar1 = FUN_1415a2419();
  if ((((cVar1 == '\0') && (DAT_14ca80860 != 0)) && (param_3 != 0)) && (DAT_14ca84df4 == 0x10de)) {
    FUN_146f37e98(param_1 + 0x26,&DAT_14a37d734,param_3);
  }
  return param_1;
}



// FUNCTION 145f78b5e FUN_145f78b5e body=38 status=ok
// SIG undefined FUN_145f78b5e(void)

undefined8 FUN_145f78b5e(undefined8 param_1,int param_2)

{
  FUN_145f78b84();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145f78b84 FUN_145f78b84 body=180 status=ok
// SIG undefined FUN_145f78b84(void)

void FUN_145f78b84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba420c0;
  FUN_1415aea16(param_1[0x1a],*(undefined4 *)(param_1 + 0x1b));
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_145f78c38(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_145f78c70(param_1 + 6);
  *param_1 = &PTR_LAB_14ba439f0;
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145f78c38 FUN_145f78c38 body=55 status=ok
// SIG undefined FUN_145f78c38(void)

void FUN_145f78c38(longlong *param_1)

{
  FUN_1415a24c2(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145f78c70 FUN_145f78c70 body=55 status=ok
// SIG undefined FUN_145f78c70(void)

void FUN_145f78c70(longlong *param_1)

{
  FUN_145f78ca8(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145f78ca8 FUN_145f78ca8 body=346 status=ok
// SIG undefined FUN_145f78ca8(void)

void FUN_145f78ca8(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
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
      FUN_145f78e04((longlong)iStack_54 * 0x28 + *local_70);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f78e04 FUN_145f78e04 body=85 status=ok
// SIG undefined FUN_145f78e04(void)

void FUN_145f78e04(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_140f5addd(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000145f78e4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145f78e5a FUN_145f78e5a body=139 status=ok
// SIG undefined FUN_145f78e5a(void)

void FUN_145f78e5a(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  code *local_38;
  undefined4 local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x598);
  if (lVar1 != 0) {
    local_38 = FUN_145cbdad4;
    local_30 = 0;
    FUN_145f78f3a(local_28);
    FUN_145f78eee(lVar1,local_28,0);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_145cbdfe6(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f78eee FUN_145f78eee body=76 status=ok
// SIG undefined FUN_145f78eee(void)

void FUN_145f78eee(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  FUN_14114e6dc(param_1 + 0x23);
  *(undefined1 *)(param_1 + 0x25) = param_3;
  (**(code **)(*param_1 + 0x70))(param_1);
  *(undefined4 *)(param_1 + 0x22) = 0;
  FUN_1415a26e8(param_1);
  FUN_1449db362(param_2);
  return;
}



// FUNCTION 145f78f3a FUN_145f78f3a body=428 status=ok
// SIG undefined FUN_145f78f3a(void)

longlong * FUN_145f78f3a(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_145f7901a:
    *puVar5 = &PTR_LAB_149e06450;
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
    *puVar5 = &PTR_FUN_14b98bbb0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145f7901a;
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
    *puVar5 = &PTR_LAB_149e06450;
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
    *puVar5 = &PTR_FUN_14b98bbb0;
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



// FUNCTION 145f790e6 FUN_145f790e6 body=54 status=ok
// SIG undefined FUN_145f790e6(void)

void FUN_145f790e6(longlong param_1,longlong param_2)

{
  if ((((param_2 != 0) && ((*(uint *)(param_2 + 8) >> 0x1e & 1) == 0)) && (DAT_14c762a1d == '\x01'))
     && ((*(longlong *)(param_1 + 0x1c80) != 0 &&
         (*(longlong *)(param_2 + 0x20) == *(longlong *)(param_1 + 0x10))))) {
    FUN_145f7911c(*(longlong *)(param_1 + 0x1c80));
    return;
  }
  return;
}



// FUNCTION 145f7911c FUN_145f7911c body=180 status=ok
// SIG undefined FUN_145f7911c(void)

void FUN_145f7911c(undefined8 param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x18);
  uVar2 = (uint)((ulonglong)local_20 >> 0x10);
  uVar4 = (uint)local_20 & 0xffff;
  plVar3 = (longlong *)
           FUN_145f791d2(param_1,((uint)local_20 << 0x10 | uVar4) +
                                 (int)((ulonglong)local_20 >> 0x20) +
                                 (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4));
  local_28 = 0;
  FUN_14485c47a(&local_28,param_2);
  iVar1 = (int)plVar3[1];
  *(uint *)(plVar3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
    FUN_1409d3082(plVar3,iVar1);
  }
  *(undefined8 *)(*plVar3 + (longlong)iVar1 * 8) = local_28;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f791d2 FUN_145f791d2 body=190 status=ok
// SIG undefined FUN_145f791d2(void)

longlong FUN_145f791d2(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar2 != 0) goto LAB_145f79221;
          break;
        }
        iVar1 = *(int *)(lVar2 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_145f79292(param_1,&local_1c,param_2);
  lVar2 = (longlong)local_1c * 0x20 + *param_1;
LAB_145f79221:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2 + 8;
}



// FUNCTION 145f79292 FUN_145f79292 body=274 status=ok
// SIG undefined FUN_145f79292(void)

undefined4 * FUN_145f79292(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145f7944e(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  local_40[2] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar1 = FUN_145f793a6(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_145f79534(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f793a6 FUN_145f793a6 body=168 status=ok
// SIG undefined FUN_145f793a6(void)

undefined8 FUN_145f793a6(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          if (*(longlong *)(puVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_148206ef6(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145f7944e FUN_145f7944e body=230 status=ok
// SIG undefined FUN_145f7944e(void)

int * FUN_145f7944e(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1447711aa(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 145f79534 FUN_145f79534 body=485 status=ok
// SIG undefined FUN_145f79534(void)

void FUN_145f79534(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar7 = (longlong)iVar5 * 0x20;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 145f7971a FUN_145f7971a body=112 status=ok
// SIG undefined FUN_145f7971a(void)

void FUN_145f7971a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  FUN_145971c26();
  lVar3 = FUN_145f7978a(param_1);
  if (lVar3 != 0) {
    uVar4 = FUN_140123fb8();
    *param_2 = uVar4;
    uVar1 = *(undefined8 *)(lVar3 + 0xa8);
    uVar2 = *(undefined8 *)(lVar3 + 0xb0);
    uVar4 = *(undefined8 *)(lVar3 + 0xb8);
    param_2[2] = 0;
    param_2[3] = 0;
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined4 *)((longlong)param_2 + 0x24) = 0;
    *(undefined4 *)(param_2 + 5) = 0;
    *(undefined4 *)((longlong)param_2 + 0x2c) = 0x3ff00000;
    param_2[6] = uVar1;
    param_2[7] = uVar2;
    param_2[8] = uVar4;
    param_2[9] = 0;
    param_2[10] = 0x3ff0000000000000;
    param_2[0xb] = 0x3ff0000000000000;
    param_2[0xc] = 0x3ff0000000000000;
    param_2[0xd] = 0;
  }
  return;
}



// FUNCTION 145f7978a FUN_145f7978a body=216 status=ok
// SIG undefined FUN_145f7978a(void)

longlong * FUN_145f7978a(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  if (lVar2 == 0) {
    uVar4 = FUN_145c272be();
    lVar2 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x28) = lVar2;
  }
  plVar5 = *(longlong **)(param_1 + 0x30);
  if (plVar5 == (longlong *)0x0) {
    if (lVar2 == 0) {
      return (longlong *)0x0;
    }
    if (*(longlong *)(param_1 + 0x20) == 0) {
      return (longlong *)0x0;
    }
    plVar5 = *(longlong **)(lVar2 + 0xb8);
    if ((plVar5 == (longlong *)0x0) ||
       (cVar1 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar1 == '\0')) {
      *(undefined8 *)(param_1 + 0x30) = 0;
      return (longlong *)0x0;
    }
    uVar4 = (**(code **)(*plVar5 + 0x110))(plVar5);
    plVar5 = (longlong *)FUN_144aff482(uVar4,(longlong *)(param_1 + 0x20));
    *(longlong **)(param_1 + 0x30) = plVar5;
    if (plVar5 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
  }
  lVar2 = (**(code **)(*plVar5 + 8))(plVar5);
  lVar3 = FUN_1410ac168();
  if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
    if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30) {
      return plVar5;
    }
    return (longlong *)0x0;
  }
  return (longlong *)0x0;
}



// FUNCTION 145f79862 FUN_145f79862 body=105 status=ok
// SIG undefined FUN_145f79862(void)

longlong FUN_145f79862(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar3 = (longlong *)FUN_145f798cc(param_1 + 0x30);
  if (plVar3 != (longlong *)0x0) {
    lVar4 = FUN_14011be0c(param_1 + 0x30);
    if (lVar4 != 0) {
      return lVar4;
    }
    plVar1 = (longlong *)plVar3[0x36];
    if ((plVar3 != plVar1 && plVar1 != (longlong *)0x0) &&
       (cVar2 = FUN_1449ce79a(plVar1), cVar2 != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x000145f798c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar4 = (**(code **)(*plVar1 + 0x5d8))(plVar1);
      return lVar4;
    }
  }
  return 0;
}



// FUNCTION 145f798cc FUN_145f798cc body=59 status=ok
// SIG undefined FUN_145f798cc(void)

longlong FUN_145f798cc(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + -0x10);
  if (lVar1 != 0) {
    lVar2 = FUN_144a2f878();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 145f79908 FUN_145f79908 body=292 status=ok
// SIG undefined FUN_145f79908(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f79908(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b76b8) {
    FUN_144b3d300(&DAT_14c9b76b8);
    if (DAT_14c9b76b8 == -1) {
      FUN_145f79b76();
      FUN_145f79a2c();
      FUN_140db5666(&DAT_14c9b7610,0,&DAT_14c9b75a8,L"FGTAOTemporalFilterCS",
                    L"/Engine/Private/PostProcessAmbientOcclusion.usf",L"GTAOTemporalFilterCS",5,1,
                    FUN_1471356de,FUN_14713567e,&LAB_147135666,&LAB_147135662,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9b8938);
      _DAT_14c9b7610 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142b8c37d);
      _Init_thread_footer(&DAT_14c9b76b8);
    }
  }
  return &DAT_14c9b7610;
}



// FUNCTION 145f79a2c FUN_145f79a2c body=205 status=ok
// SIG undefined FUN_145f79a2c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f79a2c(void)

{
  if ((DAT_14c9b760f & 2) == 0) {
    DAT_14c9b760f = DAT_14c9b760f | 2;
    _DAT_14c9b75b0 = L"FGTAOTemporalFilterCS";
    _DAT_14c9b75c8 = FUN_146826540;
    _DAT_14c9b75d0 = FUN_146825d77;
    _DAT_14c9b75d8 = FUN_146825fd6;
    _DAT_14c9b75e0 = FUN_1407e02ea;
    _DAT_14c9b75e8 = FUN_146826273;
    _DAT_14c9b75c0 = FUN_147135634;
    _DAT_14c9b7600 = 0xffffffff000000e0;
    _DAT_14c9b7608 = 8;
    DAT_14c9b760c = 0;
    _DAT_14c9b75f0 = &LAB_14713565e;
    FUN_145f79afa();
    FUN_1407e00cc(&DAT_14c9b75a8);
    return;
  }
  return;
}



// FUNCTION 145f79afa FUN_145f79afa body=123 status=ok
// SIG undefined FUN_145f79afa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f79afa(void)

{
  _DAT_14c9c01d0 = L"BASE";
  DAT_14c9c01fa = 4;
  _DAT_14c9c01d8 = FUN_140b35ae4();
  _DAT_14c9c01e0 = DAT_14c9b75b8;
  _DAT_14c9c01e8 = &LAB_14682652b;
  DAT_14c9b75b8 = &DAT_14c9c01d0;
  DAT_14c9b760d = DAT_14c9b760d + '\x01';
  _DAT_14c9c01f0 = 0x100000000;
  if (*(char *)(_DAT_14c9c01d8 + 100) != '\0') {
    DAT_14c9b760e = DAT_14c9b760e + '\x01';
  }
  return;
}



// FUNCTION 145f79b76 FUN_145f79b76 body=261 status=ok
// SIG undefined FUN_145f79b76(void)

void FUN_145f79b76(void)

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
              0x110) < DAT_14c9b89b8) {
    FUN_144b3d300(&DAT_14c9b89b8);
    if (DAT_14c9b89b8 == -1) {
      FUN_1415a29ea(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x210;
      local_58 = 0x562;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9b8938,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142b90955);
      _Init_thread_footer(&DAT_14c9b89b8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f79c7c FUN_145f79c7c body=138 status=ok
// SIG undefined FUN_145f79c7c(void)

code * FUN_145f79c7c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GTAOTemporalSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1b80000056c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14713b356;
}



// FUNCTION 145f79d06 FUN_145f79d06 body=138 status=ok
// SIG undefined FUN_145f79d06(void)

code * FUN_145f79d06(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HistoryTextureSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1d800000571;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14713b1b8;
}



// FUNCTION 145f79d90 FUN_145f79d90 body=146 status=ok
// SIG undefined FUN_145f79d90(void)

code * FUN_145f79d90(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145d20ca2();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GTAOParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FGTAOShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x15000000567;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9b87a0;
  return FUN_1462b9a3a;
}



// FUNCTION 145f79e22 FUN_145f79e22 body=292 status=ok
// SIG undefined FUN_145f79e22(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f79e22(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e8488) {
    FUN_144b3d300(&DAT_14c9e8488);
    if (DAT_14c9e8488 == -1) {
      FUN_145f7a090();
      FUN_145f79f46();
      FUN_140db5666(&DAT_14c9e83e0,0,&DAT_14c9e8378,L"FDebugLightGridPS",
                    L"/Engine/Private/LightGridInjection.usf",L"DebugLightGridPS",3,1,FUN_1471d0e30,
                    FUN_1471d0dd0,&LAB_1471d0da0,&LAB_1471d0d9c,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14c9ea180);
      _DAT_14c9e83e0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142ce6d72);
      _Init_thread_footer(&DAT_14c9e8488);
    }
  }
  return &DAT_14c9e83e0;
}



// FUNCTION 145f79f46 FUN_145f79f46 body=205 status=ok
// SIG undefined FUN_145f79f46(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f79f46(void)

{
  if ((DAT_14c9e83df & 2) == 0) {
    DAT_14c9e83df = DAT_14c9e83df | 2;
    _DAT_14c9e8380 = L"FDebugLightGridPS";
    _DAT_14c9e8398 = FUN_146826540;
    _DAT_14c9e83a0 = FUN_146825d77;
    _DAT_14c9e83a8 = FUN_146825fd6;
    _DAT_14c9e83b0 = FUN_1407e02ea;
    _DAT_14c9e83b8 = FUN_146826273;
    _DAT_14c9e8390 = FUN_1471d0d6e;
    _DAT_14c9e83d0 = 0xffffffff000000e0;
    _DAT_14c9e83d8 = 8;
    DAT_14c9e83dc = 0;
    _DAT_14c9e83c0 = &LAB_1471d0d98;
    FUN_145f7a014();
    FUN_1407e00cc(&DAT_14c9e8378);
    return;
  }
  return;
}



// FUNCTION 145f7a014 FUN_145f7a014 body=123 status=ok
// SIG undefined FUN_145f7a014(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f7a014(void)

{
  _DAT_14c9eb2b0 = L"BASE";
  DAT_14c9eb2da = 4;
  _DAT_14c9eb2b8 = FUN_140b35ae4();
  _DAT_14c9eb2c0 = DAT_14c9e8388;
  _DAT_14c9eb2c8 = &LAB_14682652b;
  DAT_14c9e8388 = &DAT_14c9eb2b0;
  DAT_14c9e83dd = DAT_14c9e83dd + '\x01';
  _DAT_14c9eb2d0 = 0x100000000;
  if (*(char *)(_DAT_14c9eb2b8 + 100) != '\0') {
    DAT_14c9e83de = DAT_14c9e83de + '\x01';
  }
  return;
}



// FUNCTION 145f7a090 FUN_145f7a090 body=261 status=ok
// SIG undefined FUN_145f7a090(void)

void FUN_145f7a090(void)

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
              0x110) < DAT_14c9ea200) {
    FUN_144b3d300(&DAT_14c9ea200);
    if (DAT_14c9ea200 == -1) {
      FUN_145f7a196(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x160;
      local_58 = 0x5a0;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9ea180,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142cf484d);
      _Init_thread_footer(&DAT_14c9ea200);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f7a196 FUN_145f7a196 body=226 status=ok
// SIG undefined FUN_145f7a196(void)

longlong * FUN_145f7a196(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462d5462;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f7a27a FUN_145f7a27a body=138 status=ok
// SIG undefined FUN_145f7a27a(void)

code * FUN_145f7a27a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MaxThreshold";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x54000005a7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d6d6a;
}



// FUNCTION 145f7a304 FUN_145f7a304 body=138 status=ok
// SIG undefined FUN_145f7a304(void)

code * FUN_145f7a304(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x48000005a5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462d54ea;
}



// FUNCTION 145f7a38e FUN_145f7a38e body=146 status=ok
// SIG undefined FUN_145f7a38e(void)

code * FUN_145f7a38e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_144a12b9e();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Forward";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FForwardLightData";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000005a2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9e81b0;
  return FUN_1462d5602;
}



// FUNCTION 145f7a420 FUN_145f7a420 body=205 status=ok
// SIG undefined FUN_145f7a420(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f7a420(void)

{
  if ((DAT_14c9f9167 & 2) == 0) {
    DAT_14c9f9167 = DAT_14c9f9167 | 2;
    _DAT_14c9f9108 = L"FLumenCardBatchDirectLightingCS";
    _DAT_14c9f9120 = FUN_146826540;
    _DAT_14c9f9128 = FUN_146825d77;
    _DAT_14c9f9130 = FUN_146825fd6;
    _DAT_14c9f9138 = FUN_1407e02ea;
    _DAT_14c9f9140 = FUN_146826273;
    _DAT_14c9f9118 = FUN_147204e70;
    _DAT_14c9f9158 = 0xffffffff000000e0;
    _DAT_14c9f9160 = 8;
    DAT_14c9f9164 = 0;
    _DAT_14c9f9148 = &LAB_147204e9a;
    FUN_145f7a4ee();
    FUN_1407e00cc(&DAT_14c9f9100);
    return;
  }
  return;
}



// FUNCTION 145f7a4ee FUN_145f7a4ee body=123 status=ok
// SIG undefined FUN_145f7a4ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f7a4ee(void)

{
  _DAT_14c9ffc78 = L"BASE";
  DAT_14c9ffca2 = 4;
  _DAT_14c9ffc80 = FUN_140b35ae4();
  _DAT_14c9ffc88 = DAT_14c9f9110;
  _DAT_14c9ffc90 = &LAB_14682652b;
  DAT_14c9f9110 = &DAT_14c9ffc78;
  DAT_14c9f9165 = DAT_14c9f9165 + '\x01';
  _DAT_14c9ffc98 = 0x100000000;
  if (*(char *)(_DAT_14c9ffc80 + 100) != '\0') {
    DAT_14c9f9166 = DAT_14c9f9166 + '\x01';
  }
  return;
}



// FUNCTION 145f7a56a FUN_145f7a56a body=226 status=ok
// SIG undefined FUN_145f7a56a(void)

longlong * FUN_145f7a56a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462e21e4;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f7a64e FUN_145f7a64e body=138 status=ok
// SIG undefined FUN_145f7a64e(void)

code * FUN_145f7a64e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CardTiles";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x480000027b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14720abd8;
}



// FUNCTION 145f7a6d8 FUN_145f7a6d8 body=144 status=ok
// SIG undefined FUN_145f7a6d8(void)

code * FUN_145f7a6d8(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1000000277;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14720ac62;
}



// FUNCTION 145f7a768 FUN_145f7a768 body=146 status=ok
// SIG undefined FUN_145f7a768(void)

code * FUN_145f7a768(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145bfb710();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LumenLightData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"LumenSceneDirectLighting::FLightDataParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000279;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9fd920;
  return FUN_1462e22f4;
}



// FUNCTION 145f7a7fa FUN_145f7a7fa body=205 status=ok
// SIG undefined FUN_145f7a7fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f7a7fa(void)

{
  if ((DAT_14ca02ed7 & 2) == 0) {
    DAT_14ca02ed7 = DAT_14ca02ed7 | 2;
    _DAT_14ca02e78 = L"FTranslucencyVolumeTraceVoxelsCS";
    _DAT_14ca02e90 = FUN_146826540;
    _DAT_14ca02e98 = FUN_146825d77;
    _DAT_14ca02ea0 = FUN_146825fd6;
    _DAT_14ca02ea8 = FUN_1407e02ea;
    _DAT_14ca02eb0 = FUN_146826273;
    _DAT_14ca02e88 = FUN_147222760;
    _DAT_14ca02ec8 = 0xffffffff000000e0;
    _DAT_14ca02ed0 = 8;
    DAT_14ca02ed4 = 0;
    _DAT_14ca02eb8 = &LAB_14722278a;
    FUN_145f7a8c8();
    FUN_1407e00cc(&DAT_14ca02e70);
    return;
  }
  return;
}



// FUNCTION 145f7a8c8 FUN_145f7a8c8 body=123 status=ok
// SIG undefined FUN_145f7a8c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f7a8c8(void)

{
  _DAT_14ca07d60 = L"BASE";
  DAT_14ca07d8a = 4;
  _DAT_14ca07d68 = FUN_140b35ae4();
  _DAT_14ca07d70 = DAT_14ca02e80;
  _DAT_14ca07d78 = &LAB_14682652b;
  DAT_14ca02e80 = &DAT_14ca07d60;
  DAT_14ca02ed5 = DAT_14ca02ed5 + '\x01';
  _DAT_14ca07d80 = 0x100000000;
  if (*(char *)(_DAT_14ca07d68 + 100) != '\0') {
    DAT_14ca02ed6 = DAT_14ca02ed6 + '\x01';
  }
  return;
}



// FUNCTION 145f7a944 FUN_145f7a944 body=226 status=ok
// SIG undefined FUN_145f7a944(void)

longlong * FUN_145f7a944(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462e9af0;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f7aa28 FUN_145f7aa28 body=138 status=ok
// SIG undefined FUN_145f7aa28(void)

code * FUN_145f7aa28(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWVolumeTraceHitDistance";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture3D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x278000001c9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462e9c10;
}



// FUNCTION 145f7aab2 FUN_145f7aab2 body=144 status=ok
// SIG undefined FUN_145f7aab2(void)

code * FUN_145f7aab2(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x100000001c7;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462e9c98;
}



// FUNCTION 145f7ab42 FUN_145f7ab42 body=146 status=ok
// SIG undefined FUN_145f7ab42(void)

code * FUN_145f7ab42(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145d3c722();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TraceSetupParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FLumenTranslucencyLightingVolumeTraceSetupParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x330000001cb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca063c8;
  return FUN_1462e9b7e;
}



// FUNCTION 145f7abd4 FUN_145f7abd4 body=205 status=ok
// SIG undefined FUN_145f7abd4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f7abd4(void)

{
  if ((DAT_14ca03127 & 2) == 0) {
    DAT_14ca03127 = DAT_14ca03127 | 2;
    _DAT_14ca030c8 = L"FTranslucencyVolumeIntegrateCS";
    _DAT_14ca030e0 = FUN_146826540;
    _DAT_14ca030e8 = FUN_146825d77;
    _DAT_14ca030f0 = FUN_146825fd6;
    _DAT_14ca030f8 = FUN_1407e02ea;
    _DAT_14ca03100 = FUN_146826273;
    _DAT_14ca030d8 = FUN_1472228e8;
    _DAT_14ca03118 = 0xffffffff000000e0;
    _DAT_14ca03120 = 8;
    DAT_14ca03124 = 0;
    _DAT_14ca03108 = &LAB_147222912;
    FUN_145f7aca2();
    FUN_1407e00cc(&DAT_14ca030c0);
    return;
  }
  return;
}



// FUNCTION 145f7aca2 FUN_145f7aca2 body=123 status=ok
// SIG undefined FUN_145f7aca2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f7aca2(void)

{
  _DAT_14ca07dc0 = L"BASE";
  DAT_14ca07dea = 4;
  _DAT_14ca07dc8 = FUN_140b35ae4();
  _DAT_14ca07dd0 = DAT_14ca030d0;
  _DAT_14ca07dd8 = &LAB_14682652b;
  DAT_14ca030d0 = &DAT_14ca07dc0;
  DAT_14ca03125 = DAT_14ca03125 + '\x01';
  _DAT_14ca07de0 = 0x100000000;
  if (*(char *)(_DAT_14ca07dc8 + 100) != '\0') {
    DAT_14ca03126 = DAT_14ca03126 + '\x01';
  }
  return;
}



// FUNCTION 145f7ad1e FUN_145f7ad1e body=226 status=ok
// SIG undefined FUN_145f7ad1e(void)

longlong * FUN_145f7ad1e(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462e9ecc;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f7ae02 FUN_145f7ae02 body=138 status=ok
// SIG undefined FUN_145f7ae02(void)

code * FUN_145f7ae02(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWTranslucencyGINewHistory1";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture3D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000224;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14722c4d4;
}



// FUNCTION 145f7ae8c FUN_145f7ae8c body=144 status=ok
// SIG undefined FUN_145f7ae8c(void)

code * FUN_145f7ae8c(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x2000000225;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145f7ae02;
}



// FUNCTION 145f7af1c FUN_145f7af1c body=146 status=ok
// SIG undefined FUN_145f7af1c(void)

code * FUN_145f7af1c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145c4c7fa();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VolumeParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FLumenTranslucencyLightingVolumeParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000226;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca06450;
  return FUN_145f7ae8c;
}



// FUNCTION 145f7afae FUN_145f7afae body=292 status=ok
// SIG undefined FUN_145f7afae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f7afae(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca09300) {
    FUN_144b3d300(&DAT_14ca09300);
    if (DAT_14ca09300 == -1) {
      FUN_145f7b21c();
      FUN_145f7b0d2();
      FUN_140db5666(&DAT_14ca09258,0,&DAT_14ca091f0,L"FScreenSpaceRayTraceLightSamplesCS",
                    L"/Engine/Private/MegaLights/MegaLightsRayTracing.usf",
                    L"ScreenSpaceRayTraceLightSamplesCS",5,2,FUN_147239a1e,FUN_1472399be,
                    &LAB_14723999c,&LAB_14723998c,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca0e530)
      ;
      _DAT_14ca09258 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142de15b1);
      _Init_thread_footer(&DAT_14ca09300);
    }
  }
  return &DAT_14ca09258;
}



// FUNCTION 145f7b0d2 FUN_145f7b0d2 body=205 status=ok
// SIG undefined FUN_145f7b0d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f7b0d2(void)

{
  if ((DAT_14ca09257 & 2) == 0) {
    DAT_14ca09257 = DAT_14ca09257 | 2;
    _DAT_14ca091f8 = L"FScreenSpaceRayTraceLightSamplesCS";
    _DAT_14ca09210 = FUN_146826540;
    _DAT_14ca09218 = FUN_146825d77;
    _DAT_14ca09220 = FUN_146825fd6;
    _DAT_14ca09228 = FUN_1407e02ea;
    _DAT_14ca09230 = FUN_146826273;
    _DAT_14ca09208 = FUN_14723995e;
    _DAT_14ca09248 = 0xffffffff000000e0;
    _DAT_14ca09250 = 8;
    DAT_14ca09254 = 0;
    _DAT_14ca09238 = &LAB_147239988;
    FUN_145f7b1a0();
    FUN_1407e00cc(&DAT_14ca091f0);
    return;
  }
  return;
}



// FUNCTION 145f7b1a0 FUN_145f7b1a0 body=123 status=ok
// SIG undefined FUN_145f7b1a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f7b1a0(void)

{
  _DAT_14ca0ebb0 = L"BASE";
  DAT_14ca0ebda = 4;
  _DAT_14ca0ebb8 = FUN_140b35ae4();
  _DAT_14ca0ebc0 = DAT_14ca09200;
  _DAT_14ca0ebc8 = &LAB_14682652b;
  DAT_14ca09200 = &DAT_14ca0ebb0;
  DAT_14ca09255 = DAT_14ca09255 + '\x01';
  _DAT_14ca0ebd0 = 0x100000000;
  if (*(char *)(_DAT_14ca0ebb8 + 100) != '\0') {
    DAT_14ca09256 = DAT_14ca09256 + '\x01';
  }
  return;
}



// FUNCTION 145f7b21c FUN_145f7b21c body=261 status=ok
// SIG undefined FUN_145f7b21c(void)

void FUN_145f7b21c(void)

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
              0x110) < DAT_14ca0e5b0) {
    FUN_144b3d300(&DAT_14ca0e5b0);
    if (DAT_14ca0e5b0 == -1) {
      FUN_145f7b322(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x3a0;
      local_58 = 0x265;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca0e530,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142deebbb);
      _Init_thread_footer(&DAT_14ca0e5b0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f7b322 FUN_145f7b322 body=226 status=ok
// SIG undefined FUN_145f7b322(void)

longlong * FUN_145f7b322(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462ed6fc;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f7b406 FUN_145f7b406 body=138 status=ok
// SIG undefined FUN_145f7b406(void)

code * FUN_145f7b406(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWLightSamples";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2e000000268;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f7b51c;
}



// FUNCTION 145f7b490 FUN_145f7b490 body=140 status=ok
// SIG undefined FUN_145f7b490(void)

undefined1 * FUN_145f7b490(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x266;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca0e310;
  return &LAB_1472431d8;
}



// FUNCTION 145f7b51c FUN_145f7b51c body=144 status=ok
// SIG undefined FUN_145f7b51c(void)

code * FUN_145f7b51c(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x2000000267;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145f7b490;
}



// FUNCTION 145f7b5ac FUN_145f7b5ac body=292 status=ok
// SIG undefined FUN_145f7b5ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f7b5ac(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca65ff0) {
    FUN_144b3d300(&DAT_14ca65ff0);
    if (DAT_14ca65ff0 == -1) {
      FUN_145f7b81a();
      FUN_145f7b6d0();
      FUN_140db5666(&DAT_14ca65f48,0,&DAT_14ca65ee0,L"FVirtualSmLogPageListStatsCS",
                    L"/Engine/Private/VirtualShadowMaps/VirtualShadowMapPhysicalPageManagement.usf",
                    L"LogPageListStatsCS",5,1,FUN_14732c46a,FUN_14732c40a,&LAB_14732c3d2,
                    &LAB_14732c3ce,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca680f0);
      _DAT_14ca65f48 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430d7ee9);
      _Init_thread_footer(&DAT_14ca65ff0);
    }
  }
  return &DAT_14ca65f48;
}



// FUNCTION 145f7b6d0 FUN_145f7b6d0 body=205 status=ok
// SIG undefined FUN_145f7b6d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f7b6d0(void)

{
  if ((DAT_14ca65f47 & 2) == 0) {
    DAT_14ca65f47 = DAT_14ca65f47 | 2;
    _DAT_14ca65ee8 = L"FVirtualSmLogPageListStatsCS";
    _DAT_14ca65f00 = FUN_146826540;
    _DAT_14ca65f08 = FUN_146825d77;
    _DAT_14ca65f10 = FUN_146825fd6;
    _DAT_14ca65f18 = FUN_1407e02ea;
    _DAT_14ca65f20 = FUN_146826273;
    _DAT_14ca65ef8 = FUN_14732c3a0;
    _DAT_14ca65f38 = 0xffffffff000000e0;
    _DAT_14ca65f40 = 8;
    DAT_14ca65f44 = 0;
    _DAT_14ca65f28 = &LAB_14732c3ca;
    FUN_145f7b79e();
    FUN_1407e00cc(&DAT_14ca65ee0);
    return;
  }
  return;
}



// FUNCTION 145f7b79e FUN_145f7b79e body=123 status=ok
// SIG undefined FUN_145f7b79e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f7b79e(void)

{
  _DAT_14ca68ed0 = L"BASE";
  DAT_14ca68efa = 4;
  _DAT_14ca68ed8 = FUN_140b35ae4();
  _DAT_14ca68ee0 = DAT_14ca65ef0;
  _DAT_14ca68ee8 = &LAB_14682652b;
  DAT_14ca65ef0 = &DAT_14ca68ed0;
  DAT_14ca65f45 = DAT_14ca65f45 + '\x01';
  _DAT_14ca68ef0 = 0x100000000;
  if (*(char *)(_DAT_14ca68ed8 + 100) != '\0') {
    DAT_14ca65f46 = DAT_14ca65f46 + '\x01';
  }
  return;
}



// FUNCTION 145f7b81a FUN_145f7b81a body=261 status=ok
// SIG undefined FUN_145f7b81a(void)

void FUN_145f7b81a(void)

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
              0x110) < DAT_14ca68170) {
    FUN_144b3d300(&DAT_14ca68170);
    if (DAT_14ca68170 == -1) {
      FUN_145f7b920(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0xa17;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca680f0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430e64a1);
      _Init_thread_footer(&DAT_14ca68170);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f7b920 FUN_145f7b920 body=226 status=ok
// SIG undefined FUN_145f7b920(void)

longlong * FUN_145f7b920(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_146312538;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f7ba04 FUN_145f7ba04 body=138 status=ok
// SIG undefined FUN_145f7ba04(void)

code * FUN_145f7ba04(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000a1a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f7bb1a;
}



// FUNCTION 145f7ba8e FUN_145f7ba8e body=140 status=ok
// SIG undefined FUN_145f7ba8e(void)

undefined1 * FUN_145f7ba8e(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa18;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca64298;
  return &LAB_147330a68;
}



// FUNCTION 145f7bb1a FUN_145f7bb1a body=144 status=ok
// SIG undefined FUN_145f7bb1a(void)

code * FUN_145f7bb1a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar4) = L"ShaderPrintStruct";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"ShaderPrint::FShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1000000a19;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145f7ba8e;
}



// FUNCTION 145f7bbaa FUN_145f7bbaa body=292 status=ok
// SIG undefined FUN_145f7bbaa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f7bbaa(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c9e78) {
    FUN_144b3d300(&DAT_14c9c9e78);
    if (DAT_14c9c9e78 == -1) {
      FUN_145f7be18();
      FUN_145f7bcce();
      FUN_140db5666(&DAT_14c9c9dd0,0,&DAT_14c9c9d68,L"FVisualizeMeshDistanceFieldCS",
                    L"/Engine/Private/DistanceFieldVisualization.usf",
                    L"VisualizeMeshDistanceFieldCS",5,0x30,FUN_14715781e,FUN_1471577be,
                    &LAB_142bf7ac6,&LAB_142bf7ac2,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9cdb88)
      ;
      _DAT_14c9c9dd0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142bf7b32);
      _Init_thread_footer(&DAT_14c9c9e78);
    }
  }
  return &DAT_14c9c9dd0;
}



// FUNCTION 145f7bcce FUN_145f7bcce body=205 status=ok
// SIG undefined FUN_145f7bcce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f7bcce(void)

{
  if ((DAT_14c9c9dcf & 2) == 0) {
    DAT_14c9c9dcf = DAT_14c9c9dcf | 2;
    _DAT_14c9c9d70 = L"FVisualizeMeshDistanceFieldCS";
    _DAT_14c9c9d88 = FUN_146826540;
    _DAT_14c9c9d90 = FUN_146825d77;
    _DAT_14c9c9d98 = FUN_146825fd6;
    _DAT_14c9c9da0 = FUN_1407e02ea;
    _DAT_14c9c9da8 = FUN_146826273;
    _DAT_14c9c9d80 = FUN_147157790;
    _DAT_14c9c9dc0 = 0xffffffff000000e0;
    _DAT_14c9c9dc8 = 8;
    DAT_14c9c9dcc = 0;
    _DAT_14c9c9db0 = &LAB_1471577ba;
    FUN_145f7bd9c();
    FUN_1407e00cc(&DAT_14c9c9d68);
    return;
  }
  return;
}



// FUNCTION 145f7bd9c FUN_145f7bd9c body=123 status=ok
// SIG undefined FUN_145f7bd9c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f7bd9c(void)

{
  _DAT_14c9ceea8 = L"BASE";
  DAT_14c9ceed2 = 4;
  _DAT_14c9ceeb0 = FUN_140b35ae4();
  _DAT_14c9ceeb8 = DAT_14c9c9d78;
  _DAT_14c9ceec0 = &LAB_14682652b;
  DAT_14c9c9d78 = &DAT_14c9ceea8;
  DAT_14c9c9dcd = DAT_14c9c9dcd + '\x01';
  _DAT_14c9ceec8 = 0x100000000;
  if (*(char *)(_DAT_14c9ceeb0 + 100) != '\0') {
    DAT_14c9c9dce = DAT_14c9c9dce + '\x01';
  }
  return;
}



// FUNCTION 145f7be18 FUN_145f7be18 body=261 status=ok
// SIG undefined FUN_145f7be18(void)

void FUN_145f7be18(void)

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
              0x110) < DAT_14c9cdc08) {
    FUN_144b3d300(&DAT_14c9cdc08);
    if (DAT_14c9cdc08 == -1) {
      FUN_145f7bf1e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x3b0;
      local_58 = 0x2a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9cdb88,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c1c947);
      _Init_thread_footer(&DAT_14c9cdc08);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f7bf1e FUN_145f7bf1e body=226 status=ok
// SIG undefined FUN_145f7bf1e(void)

longlong * FUN_145f7bf1e(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462c22f8;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f7c002 FUN_145f7c002 body=138 status=ok
// SIG undefined FUN_145f7c002(void)

undefined1 * FUN_145f7c002(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x2b;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_14715c286;
}



// FUNCTION 145f7c08c FUN_145f7c08c body=142 status=ok
// SIG undefined FUN_145f7c08c(void)

code * FUN_145f7c08c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a8b374();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"GlobalDistanceFieldParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FGlobalDistanceFieldParameters2";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x16000000032;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462c24a0;
}



// FUNCTION 145f7c11a FUN_145f7c11a body=144 status=ok
// SIG undefined FUN_145f7c11a(void)

code * FUN_145f7c11a(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x300000002e;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462c2650;
}



// FUNCTION 145f7c1aa FUN_145f7c1aa body=205 status=ok
// SIG undefined FUN_145f7c1aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f7c1aa(void)

{
  if ((DAT_14ca01ee7 & 2) == 0) {
    DAT_14ca01ee7 = DAT_14ca01ee7 | 2;
    _DAT_14ca01e88 = L"FLumenCardCopyPS";
    _DAT_14ca01ea0 = FUN_146826540;
    _DAT_14ca01ea8 = FUN_146825d77;
    _DAT_14ca01eb0 = FUN_146825fd6;
    _DAT_14ca01eb8 = FUN_1407e02ea;
    _DAT_14ca01ec0 = FUN_146826273;
    _DAT_14ca01e98 = FUN_14722186c;
    _DAT_14ca01ed8 = 0xffffffff000000e0;
    _DAT_14ca01ee0 = 8;
    DAT_14ca01ee4 = 0;
    _DAT_14ca01ec8 = &LAB_147221896;
    FUN_145f7c278();
    FUN_1407e00cc(&DAT_14ca01e80);
    return;
  }
  return;
}



// FUNCTION 145f7c278 FUN_145f7c278 body=123 status=ok
// SIG undefined FUN_145f7c278(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f7c278(void)

{
  _DAT_14ca079e8 = L"BASE";
  DAT_14ca07a12 = 4;
  _DAT_14ca079f0 = FUN_140b35ae4();
  _DAT_14ca079f8 = DAT_14ca01e90;
  _DAT_14ca07a00 = &LAB_14682652b;
  DAT_14ca01e90 = &DAT_14ca079e8;
  DAT_14ca01ee5 = DAT_14ca01ee5 + '\x01';
  _DAT_14ca07a08 = 0x100000000;
  if (*(char *)(_DAT_14ca079f0 + 100) != '\0') {
    DAT_14ca01ee6 = DAT_14ca01ee6 + '\x01';
  }
  return;
}



// FUNCTION 145f7c2f4 FUN_145f7c2f4 body=205 status=ok
// SIG undefined FUN_145f7c2f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f7c2f4(void)

{
  if ((DAT_14ca2ff87 & 2) == 0) {
    DAT_14ca2ff87 = DAT_14ca2ff87 | 2;
    _DAT_14ca2ff28 = L"FSubsurfaceIndirectDispatchSetupCS";
    _DAT_14ca2ff40 = FUN_146826540;
    _DAT_14ca2ff48 = FUN_146825d77;
    _DAT_14ca2ff50 = FUN_146825fd6;
    _DAT_14ca2ff58 = FUN_1407e02ea;
    _DAT_14ca2ff60 = FUN_146826273;
    _DAT_14ca2ff38 = FUN_1472999ba;
    _DAT_14ca2ff78 = 0xffffffff000000e0;
    _DAT_14ca2ff80 = 8;
    DAT_14ca2ff84 = 0;
    _DAT_14ca2ff68 = &LAB_1472999e6;
    FUN_145f7c3c2();
    FUN_1407e00cc(&DAT_14ca2ff20);
    return;
  }
  return;
}



// FUNCTION 145f7c3c2 FUN_145f7c3c2 body=123 status=ok
// SIG undefined FUN_145f7c3c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f7c3c2(void)

{
  _DAT_14ca34c50 = L"BASE";
  DAT_14ca34c7a = 4;
  _DAT_14ca34c58 = FUN_140b35ae4();
  _DAT_14ca34c60 = DAT_14ca2ff30;
  _DAT_14ca34c68 = &LAB_14682652b;
  DAT_14ca2ff30 = &DAT_14ca34c50;
  DAT_14ca2ff85 = DAT_14ca2ff85 + '\x01';
  _DAT_14ca34c70 = 0x100000000;
  if (*(char *)(_DAT_14ca34c58 + 100) != '\0') {
    DAT_14ca2ff86 = DAT_14ca2ff86 + '\x01';
  }
  return;
}



// FUNCTION 145f7c43e FUN_145f7c43e body=226 status=ok
// SIG undefined FUN_145f7c43e(void)

longlong * FUN_145f7c43e(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462fe03a;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f7c522 FUN_145f7c522 body=138 status=ok
// SIG undefined FUN_145f7c522(void)

code * FUN_145f7c522(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWAllGroupBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1500000021c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462fe0ca;
}



// FUNCTION 145f7c5ac FUN_145f7c5ac body=146 status=ok
// SIG undefined FUN_145f7c5ac(void)

code * FUN_145f7c5ac(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SubsurfaceInput0";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FSubsurfaceInput";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb000000217;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca33898;
  return FUN_1462fe152;
}



// FUNCTION 145f7c63e FUN_145f7c63e body=146 status=ok
// SIG undefined FUN_145f7c63e(void)

code * FUN_145f7c63e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145c5f352();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Subsurface";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FSubsurfaceParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000215;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca33920;
  return FUN_1462fe1e2;
}



// FUNCTION 145f7c6d0 FUN_145f7c6d0 body=292 status=ok
// SIG undefined FUN_145f7c6d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f7c6d0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca39538) {
    FUN_144b3d300(&DAT_14ca39538);
    if (DAT_14ca39538 == -1) {
      FUN_145f7c93e();
      FUN_145f7c7f4();
      FUN_140db5666(&DAT_14ca39490,0,&DAT_14ca39428,L"FRayTracingDebugHitStatsRGS",
                    L"/Engine/Private/RayTracing/RayTracingDebugHitStats.usf",
                    L"RayTracingDebugHitStatsRGS",6,1,FUN_1472b1d7c,FUN_1472b1d38,&LAB_146300dcc,
                    &LAB_1472b1d34,&LAB_1472b1d2e,&LAB_1472b1d0e,0xe0,&DAT_14ca3e968);
      _DAT_14ca39490 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f65b88);
      _Init_thread_footer(&DAT_14ca39538);
    }
  }
  return &DAT_14ca39490;
}



// FUNCTION 145f7c7f4 FUN_145f7c7f4 body=205 status=ok
// SIG undefined FUN_145f7c7f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f7c7f4(void)

{
  if ((DAT_14ca3948f & 2) == 0) {
    DAT_14ca3948f = DAT_14ca3948f | 2;
    _DAT_14ca39430 = L"FRayTracingDebugHitStatsRGS";
    _DAT_14ca39448 = FUN_146826540;
    _DAT_14ca39450 = FUN_146825d77;
    _DAT_14ca39458 = FUN_146825fd6;
    _DAT_14ca39460 = FUN_1407e02ea;
    _DAT_14ca39468 = FUN_146826273;
    _DAT_14ca39440 = FUN_1472b1ce0;
    _DAT_14ca39480 = 0xffffffff000000e0;
    _DAT_14ca39488 = 8;
    DAT_14ca3948c = 0;
    _DAT_14ca39470 = &LAB_1472b1d0a;
    FUN_145f7c8c2();
    FUN_1407e00cc(&DAT_14ca39428);
    return;
  }
  return;
}



// FUNCTION 145f7c8c2 FUN_145f7c8c2 body=123 status=ok
// SIG undefined FUN_145f7c8c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f7c8c2(void)

{
  _DAT_14ca3f5c0 = L"BASE";
  DAT_14ca3f5ea = 4;
  _DAT_14ca3f5c8 = FUN_140b35ae4();
  _DAT_14ca3f5d0 = DAT_14ca39438;
  _DAT_14ca3f5d8 = &LAB_14682652b;
  DAT_14ca39438 = &DAT_14ca3f5c0;
  DAT_14ca3948d = DAT_14ca3948d + '\x01';
  _DAT_14ca3f5e0 = 0x100000000;
  if (*(char *)(_DAT_14ca3f5c8 + 100) != '\0') {
    DAT_14ca3948e = DAT_14ca3948e + '\x01';
  }
  return;
}



// FUNCTION 145f7c93e FUN_145f7c93e body=261 status=ok
// SIG undefined FUN_145f7c93e(void)

void FUN_145f7c93e(void)

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
              0x110) < DAT_14ca3e9e8) {
    FUN_144b3d300(&DAT_14ca3e9e8);
    if (DAT_14ca3e9e8 == -1) {
      FUN_145f7ca44(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0x10d;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca3e968,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f6f6de);
      _Init_thread_footer(&DAT_14ca3e9e8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f7ca44 FUN_145f7ca44 body=226 status=ok
// SIG undefined FUN_145f7ca44(void)

longlong * FUN_145f7ca44(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1463015f6;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f7cb28 FUN_145f7cb28 body=136 status=ok
// SIG undefined FUN_145f7cb28(void)

code * FUN_145f7cb28(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VisualizationMode";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc00000110;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472bc852;
}



// FUNCTION 145f7cbb0 FUN_145f7cbb0 body=144 status=ok
// SIG undefined FUN_145f7cbb0(void)

code * FUN_145f7cbb0(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x2000000112;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1472bc7c8;
}



// FUNCTION 145f7cc40 FUN_145f7cc40 body=144 status=ok
// SIG undefined FUN_145f7cc40(void)

code * FUN_145f7cc40(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar4) = L"SceneUniformBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSceneUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x3000000113;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145f7cbb0;
}



// FUNCTION 145f7ccdc FUN_145f7ccdc body=208 status=ok
// SIG undefined FUN_145f7ccdc(void)

undefined8 * FUN_145f7ccdc(undefined8 *param_1)

{
  FUN_144a0768c();
  FUN_140b57eb0(param_1 + 5);
  *param_1 = &PTR_FUN_14a4f2190;
  param_1[5] = &PTR_LAB_14a4f2430;
  param_1[6] = &PTR_FUN_14a4f2540;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  FUN_141402f74(param_1 + 0x44);
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0x10000ea60;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 2;
  *(undefined8 *)((longlong)param_1 + 0x25c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x264) = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x2a4) = 0;
  param_1[0x42] = 0;
  *(byte *)((longlong)param_1 + 0x2b5) = *(byte *)((longlong)param_1 + 0x2b5) & 0xf8;
  *(undefined8 *)((longlong)param_1 + 0x2ac) = 0;
  return param_1;
}



// FUNCTION 145f7cdac FUN_145f7cdac body=40 status=ok
// SIG undefined FUN_145f7cdac(void)

undefined8 FUN_145f7cdac(undefined8 param_1,int param_2)

{
  FUN_145f7cdd4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145f7cdd4 FUN_145f7cdd4 body=398 status=ok
// SIG undefined FUN_145f7cdd4(void)

void FUN_145f7cdd4(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_14b80e9f0;
  param_1[0x72] = &PTR_FUN_14b80f030;
  param_1[0x73] = &PTR_FUN_14b80f050;
  param_1[0x83] = &PTR_FUN_14b80f070;
  param_1[0x84] = &PTR_FUN_14b80f090;
  param_1[0x85] = &PTR_FUN_14b80f0b0;
  param_1[0x94] = &PTR_FUN_14b80f0d0;
  param_1[0x95] = &PTR_FUN_14b80f120;
  param_1[0x9e] = &PTR_FUN_14b80f150;
  param_1[0x9f] = &PTR_FUN_14b80f180;
  if (*(char *)((longlong)param_1 + 0xdb4) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xdb4) = 0;
  }
  if (param_1[0x1b4] != 0) {
    FUN_1400020a8();
  }
  puVar1 = (undefined8 *)param_1[0x1b3];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[0x123] = &PTR_FUN_14b739090;
  if (param_1[0x1b0] != 0) {
    FUN_1400020a8();
  }
  param_1[0x123] = &PTR_FUN_14b127600;
  lVar2 = 0xb80;
  do {
    FUN_14494dff0((longlong)param_1 + lVar2);
    lVar2 = lVar2 + -0x120;
  } while (lVar2 != 0x820);
  param_1[0xa4] = &PTR_FUN_14b127600;
  lVar2 = 0x788;
  do {
    FUN_14494dff0((longlong)param_1 + lVar2);
    lVar2 = lVar2 + -0x120;
  } while (lVar2 != 0x428);
  param_1[0x95] = &PTR_LAB_14b693f40;
  if (param_1[0x9b] != 0) {
    FUN_1400020a8();
  }
  FUN_140894b60(param_1);
  return;
}



// FUNCTION 145f7cf64 FUN_145f7cf64 body=62 status=ok
// SIG undefined FUN_145f7cf64(void)

undefined8 * FUN_145f7cf64(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba88e50;
  FUN_145f7cfa2(param_1 + 0xb);
  FUN_14596f3b0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145f7cfa2 FUN_145f7cfa2 body=595 status=ok
// SIG undefined FUN_145f7cfa2(void)

void FUN_145f7cfa2(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140678446(param_1,0);
  }
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    FUN_14171ef34(param_1 + 2,0);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    FUN_141742b1c(param_1 + 4,0);
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if (*(int *)((longlong)param_1 + 0x3c) != 0) {
    FUN_141742b1c(param_1 + 6,0);
  }
  *(undefined4 *)(param_1 + 9) = 0;
  if (*(int *)((longlong)param_1 + 0x4c) != 0) {
    FUN_146971392(param_1 + 8,0);
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (*(int *)((longlong)param_1 + 0x5c) != 0) {
    FUN_14480809c(param_1 + 10,0);
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (*(int *)((longlong)param_1 + 0x6c) != 0) {
    FUN_140678446(param_1 + 0xc,0);
  }
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (*(int *)((longlong)param_1 + 0x7c) != 0) {
    FUN_14906b544(param_1 + 0xe,0);
  }
  *(undefined4 *)((longlong)param_1 + 0x94) = DAT_14c846338;
  *(longlong *)((longlong)param_1 + 0x8c) = DAT_14c846330;
  param_1[0x10] = DAT_14c846330;
  *(undefined4 *)(param_1 + 0x11) = DAT_14c846338;
  *(undefined1 *)(param_1 + 0x13) = 0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
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
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145f7d1f6 FUN_145f7d1f6 body=290 status=ok
// SIG undefined FUN_145f7d1f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f7d1f6(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb33170) {
    FUN_144b3d300(&DAT_14cb33170);
    if (DAT_14cb33170 == -1) {
      uVar1 = FUN_145f7d462();
      FUN_145f7d318();
      FUN_140db5666(&DAT_14cb330c8,0,&DAT_14cb33060,L"FSimulationShaderExample1CS",
                    L"/Plugin/FX/Niagara/Private/Stateless/NiagaraStatelessSimulationExample1.usf",
                    L"StatelessMain",5,1,FUN_14804ec32,FUN_14804ebd8,&LAB_14804ebd4,&LAB_14804ebd0,
                    &LAB_14712ac0c,&LAB_14712ac08,0xe0,uVar1);
      _DAT_14cb330c8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1438fb63a);
      _Init_thread_footer(&DAT_14cb33170);
    }
  }
  return &DAT_14cb330c8;
}



// FUNCTION 145f7d318 FUN_145f7d318 body=205 status=ok
// SIG undefined FUN_145f7d318(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f7d318(void)

{
  if ((DAT_14cb330c7 & 2) == 0) {
    DAT_14cb330c7 = DAT_14cb330c7 | 2;
    _DAT_14cb33068 = L"FSimulationShaderExample1CS";
    _DAT_14cb33080 = FUN_146826540;
    _DAT_14cb33088 = FUN_146825d77;
    _DAT_14cb33090 = FUN_146825fd6;
    _DAT_14cb33098 = FUN_1407e02ea;
    _DAT_14cb330a0 = FUN_146826273;
    _DAT_14cb33078 = FUN_14804eba2;
    _DAT_14cb330b8 = 0xffffffff000000e0;
    _DAT_14cb330c0 = 8;
    DAT_14cb330c4 = 0;
    _DAT_14cb330a8 = &LAB_14804ebcc;
    FUN_145f7d3e6();
    FUN_1407e00cc(&DAT_14cb33060);
    return;
  }
  return;
}



// FUNCTION 145f7d3e6 FUN_145f7d3e6 body=123 status=ok
// SIG undefined FUN_145f7d3e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f7d3e6(void)

{
  _DAT_14cb35b58 = L"BASE";
  DAT_14cb35b82 = 4;
  _DAT_14cb35b60 = FUN_140b35ae4();
  _DAT_14cb35b68 = DAT_14cb33070;
  _DAT_14cb35b70 = &LAB_14682652b;
  DAT_14cb33070 = &DAT_14cb35b58;
  DAT_14cb330c5 = DAT_14cb330c5 + '\x01';
  _DAT_14cb35b78 = 0x100000000;
  if (*(char *)(_DAT_14cb35b60 + 100) != '\0') {
    DAT_14cb330c6 = DAT_14cb330c6 + '\x01';
  }
  return;
}



// FUNCTION 145f7d462 FUN_145f7d462 body=268 status=ok
// SIG undefined FUN_145f7d462(void)

undefined * FUN_145f7d462(void)

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
              0x110) < DAT_14cb35180) {
    FUN_144b3d300(&DAT_14cb35180);
    if (DAT_14cb35180 == -1) {
      FUN_1415a346a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x2e0;
      local_58 = 0x54;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb35100,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1438fb978);
      _Init_thread_footer(&DAT_14cb35180);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cb35100;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f7d570 FUN_145f7d570 body=138 status=ok
// SIG undefined FUN_145f7d570(void)

code * FUN_145f7d570(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Permutation_RibbonWidthComponent";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2b000000061;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148058470;
}



// FUNCTION 145f7d5fa FUN_145f7d5fa body=138 status=ok
// SIG undefined FUN_145f7d5fa(void)

code * FUN_145f7d5fa(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Permutation_PreviousScaleComponent";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2c800000067;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146463464;
}



// FUNCTION 145f7d684 FUN_145f7d684 body=144 status=ok
// SIG undefined FUN_145f7d684(void)

code * FUN_145f7d684(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145d46df4();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ModuleParam86";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FInitializeParticleModule_ShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xa000000056;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14646383c;
}



// FUNCTION 145f7d720 FUN_145f7d720 body=262 status=ok
// SIG undefined FUN_145f7d720(void)

undefined8 * FUN_145f7d720(undefined8 *param_1)

{
  undefined2 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140553f2a();
  *(undefined1 *)((longlong)param_1 + 0x32) = 4;
  *param_1 = &PTR_FUN_14a4d2c00;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 7) = 2;
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    lVar2 = FUN_14009d2a0();
    uVar1 = *(undefined2 *)(lVar2 + 0x58);
    local_28 = param_1[2];
    if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14118c742(&local_28,uVar1);
    uVar1 = *(undefined2 *)(lVar2 + 0x130);
    local_30 = param_1[2];
    if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14122166c(&local_30,uVar1);
    uVar1 = *(undefined2 *)(lVar2 + 0xf2);
    local_38 = param_1[2];
    if ((local_38 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14122166c(&local_38,uVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f7d828 FUN_145f7d828 body=292 status=ok
// SIG undefined FUN_145f7d828(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f7d828(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b7468) {
    FUN_144b3d300(&DAT_14c9b7468);
    if (DAT_14c9b7468 == -1) {
      FUN_145f7da96();
      FUN_145f7d94c();
      FUN_140db5666(&DAT_14c9b73c0,0,&DAT_14c9b7358,L"FGTAOInnerIntegratePS",
                    L"/Engine/Private/PostProcessAmbientOcclusion.usf",L"GTAOInnerIntegratePS",3,1,
                    FUN_147135470,FUN_147135410,&LAB_1471353f8,&LAB_1471353f4,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9b8828);
      _DAT_14c9b73c0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142b8c365);
      _Init_thread_footer(&DAT_14c9b7468);
    }
  }
  return &DAT_14c9b73c0;
}



// FUNCTION 145f7d94c FUN_145f7d94c body=205 status=ok
// SIG undefined FUN_145f7d94c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f7d94c(void)

{
  if ((DAT_14c9b73bf & 2) == 0) {
    DAT_14c9b73bf = DAT_14c9b73bf | 2;
    _DAT_14c9b7360 = L"FGTAOInnerIntegratePS";
    _DAT_14c9b7378 = FUN_146826540;
    _DAT_14c9b7380 = FUN_146825d77;
    _DAT_14c9b7388 = FUN_146825fd6;
    _DAT_14c9b7390 = FUN_1407e02ea;
    _DAT_14c9b7398 = FUN_146826273;
    _DAT_14c9b7370 = FUN_1471353c6;
    _DAT_14c9b73b0 = 0xffffffff000000e0;
    _DAT_14c9b73b8 = 8;
    DAT_14c9b73bc = 0;
    _DAT_14c9b73a0 = &LAB_1471353f0;
    FUN_145f7da1a();
    FUN_1407e00cc(&DAT_14c9b7358);
    return;
  }
  return;
}



// FUNCTION 145f7da1a FUN_145f7da1a body=123 status=ok
// SIG undefined FUN_145f7da1a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f7da1a(void)

{
  _DAT_14c9c0170 = L"BASE";
  DAT_14c9c019a = 4;
  _DAT_14c9c0178 = FUN_140b35ae4();
  _DAT_14c9c0180 = DAT_14c9b7368;
  _DAT_14c9c0188 = &LAB_14682652b;
  DAT_14c9b7368 = &DAT_14c9c0170;
  DAT_14c9b73bd = DAT_14c9b73bd + '\x01';
  _DAT_14c9c0190 = 0x100000000;
  if (*(char *)(_DAT_14c9c0178 + 100) != '\0') {
    DAT_14c9b73be = DAT_14c9b73be + '\x01';
  }
  return;
}



// FUNCTION 145f7da96 FUN_145f7da96 body=261 status=ok
// SIG undefined FUN_145f7da96(void)

void FUN_145f7da96(void)

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
              0x110) < DAT_14c9b88a8) {
    FUN_144b3d300(&DAT_14c9b88a8);
    if (DAT_14c9b88a8 == -1) {
      FUN_145f7db9c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x2c0;
      local_58 = 0x4b1;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9b8828,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142b9093d);
      _Init_thread_footer(&DAT_14c9b88a8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f7db9c FUN_145f7db9c body=226 status=ok
// SIG undefined FUN_145f7db9c(void)

longlong * FUN_145f7db9c(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462b93a0;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f7dc80 FUN_145f7dc80 body=138 status=ok
// SIG undefined FUN_145f7dc80(void)

code * FUN_145f7dc80(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HorizonsTextureSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1b8000004ba;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14713af02;
}



// FUNCTION 145f7dd0a FUN_145f7dd0a body=144 status=ok
// SIG undefined FUN_145f7dd0a(void)

code * FUN_145f7dd0a(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x10000004b3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462b954a;
}



// FUNCTION 145f7dd9a FUN_145f7dd9a body=144 status=ok
// SIG undefined FUN_145f7dd9a(void)

code * FUN_145f7dd9a(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x20000004b4;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145f7dd0a;
}



// FUNCTION 145f7de2a FUN_145f7de2a body=292 status=ok
// SIG undefined FUN_145f7de2a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f7de2a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9edac8) {
    FUN_144b3d300(&DAT_14c9edac8);
    if (DAT_14c9edac8 == -1) {
      FUN_145f7e098();
      FUN_145f7df4e();
      FUN_140db5666(&DAT_14c9eda20,0,&DAT_14c9ed9b8,L"FIrradianceFieldGatherCS",
                    L"/Engine/Private/Lumen/LumenIrradianceFieldGather.usf",
                    L"IrradianceFieldGatherCS",5,1,FUN_1471dd59c,FUN_1471dd53c,&LAB_1462d72b4,
                    &LAB_1471dd538,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9f0560);
      _DAT_14c9eda20 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d141ad);
      _Init_thread_footer(&DAT_14c9edac8);
    }
  }
  return &DAT_14c9eda20;
}



// FUNCTION 145f7df4e FUN_145f7df4e body=205 status=ok
// SIG undefined FUN_145f7df4e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f7df4e(void)

{
  if ((DAT_14c9eda1f & 2) == 0) {
    DAT_14c9eda1f = DAT_14c9eda1f | 2;
    _DAT_14c9ed9c0 = L"FIrradianceFieldGatherCS";
    _DAT_14c9ed9d8 = FUN_146826540;
    _DAT_14c9ed9e0 = FUN_146825d77;
    _DAT_14c9ed9e8 = FUN_146825fd6;
    _DAT_14c9ed9f0 = FUN_1407e02ea;
    _DAT_14c9ed9f8 = FUN_146826273;
    _DAT_14c9ed9d0 = FUN_1471dd50a;
    _DAT_14c9eda10 = 0xffffffff000000e0;
    _DAT_14c9eda18 = 8;
    DAT_14c9eda1c = 0;
    _DAT_14c9eda00 = &LAB_1471dd534;
    FUN_145f7e01c();
    FUN_1407e00cc(&DAT_14c9ed9b8);
    return;
  }
  return;
}



// FUNCTION 145f7e01c FUN_145f7e01c body=123 status=ok
// SIG undefined FUN_145f7e01c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f7e01c(void)

{
  _DAT_14c9f1918 = L"BASE";
  DAT_14c9f1942 = 4;
  _DAT_14c9f1920 = FUN_140b35ae4();
  _DAT_14c9f1928 = DAT_14c9ed9c8;
  _DAT_14c9f1930 = &LAB_14682652b;
  DAT_14c9ed9c8 = &DAT_14c9f1918;
  DAT_14c9eda1d = DAT_14c9eda1d + '\x01';
  _DAT_14c9f1938 = 0x100000000;
  if (*(char *)(_DAT_14c9f1920 + 100) != '\0') {
    DAT_14c9eda1e = DAT_14c9eda1e + '\x01';
  }
  return;
}



// FUNCTION 145f7e098 FUN_145f7e098 body=261 status=ok
// SIG undefined FUN_145f7e098(void)

void FUN_145f7e098(void)

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
              0x110) < DAT_14c9f05e0) {
    FUN_144b3d300(&DAT_14c9f05e0);
    if (DAT_14c9f05e0 == -1) {
      FUN_145f7e19e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1d0;
      local_58 = 0xbd;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f0560,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d26283);
      _Init_thread_footer(&DAT_14c9f05e0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f7e19e FUN_145f7e19e body=226 status=ok
// SIG undefined FUN_145f7e19e(void)

longlong * FUN_145f7e19e(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462d8184;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f7e282 FUN_145f7e282 body=138 status=ok
// SIG undefined FUN_145f7e282(void)

code * FUN_145f7e282(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWRoughSpecularIndirect";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float3>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000bf;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471e16d0;
}



// FUNCTION 145f7e30c FUN_145f7e30c body=144 status=ok
// SIG undefined FUN_145f7e30c(void)

code * FUN_145f7e30c(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x10000000c0;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145f7e282;
}



// FUNCTION 145f7e39c FUN_145f7e39c body=144 status=ok
// SIG undefined FUN_145f7e39c(void)

code * FUN_145f7e39c(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1b0000000c4;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462d820c;
}



// FUNCTION 145f7e42c FUN_145f7e42c body=292 status=ok
// SIG undefined FUN_145f7e42c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f7e42c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f50e8) {
    FUN_144b3d300(&DAT_14c9f50e8);
    if (DAT_14c9f50e8 == -1) {
      FUN_145f7e69a();
      FUN_145f7e550();
      FUN_140db5666(&DAT_14c9f5040,0,&DAT_14c9f4fd8,L"FVisualizeReflectionTracesCS",
                    L"/Engine/Private/Lumen/LumenReflectionTracing.usf",
                    L"VisualizeReflectionTracesCS",5,1,FUN_1471efff4,FUN_1471eff94,&LAB_1462db51c,
                    &LAB_1471eff90,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9f7250);
      _DAT_14c9f5040 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d4a463);
      _Init_thread_footer(&DAT_14c9f50e8);
    }
  }
  return &DAT_14c9f5040;
}


